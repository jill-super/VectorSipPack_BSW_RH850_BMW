/**
*  \file
*
*  \brief       BMW Module Prog generic
*
*  Finish the transfer of data
*
*  \project     BMW Platform Software
*
*  \copyright   BMW AG 2016 - 2017
*
*  \version     5.4.0
*
*  \remarks     ---
*
*/

/*------------------------------------------------------------------------------
                      MISRA-Deviations
-------------------------------------------------------------------------------*/

/* MISRA-C:2004 Rule 12.4: There is no side effect if the function in the right
   hand operand is not called. This is the case if the left hand operand evaluates
   to 0, see  PRQA: 3415

   MISRA-C:2004 Rule 19.1: including Prog_MemMap.h is necessary throughout the
   file according to memory abstraction

   MISRA-C:2004 Rule 19.6: #undef is necessary throughout the file according to
   memory abstraction */


/*------------------------------------------------------------------------------
                      Include Section
-------------------------------------------------------------------------------*/

#include "Prog_GenericRequestTransferExit.h"    /* Own header file             */
#include "BUtil/PlatformTypes.h"                /* Standard Types              */
#include "Prog_Cfg.h"                           /* Configuration               */
#include "Prog_Internal.h"                      /* Prog internal functions     */
#include "Prog_UDSAdapter.h"                    /* Header file adapter UDS     */

#if (PROG_HTTP_ENABLE == STD_OFF)
#include "Prog_UserAdapter.h"


/*------------------------------------------------------------------------------
                      Macros
-------------------------------------------------------------------------------*/

/* check version of the module */
#if (!Prog_CHECK_VERSION(5, 4, 0))
#error "Version of Prog_GenericRequestTransferExit.c does not match the version of the module!"
#endif


/*------------------------------------------------------------------------------
                      Global Functions
-------------------------------------------------------------------------------*/

/* PRQA S 5087 2 */
#define Prog_START_SEC_CODE
#include "Prog_MemMap.h"

/**
 * \brief Area check for RequestTransferExit
 *
 * Function is calld by Adapter and checks if all bytes are programmed
 *
 * \global_w      Prog_LastRequestDownloadAddress, Prog_ActiveSubSession
 *
 *
 * \retval        UDS_DIAG_JOB_FINISHED_OK         All data are transfered
 * \retval        UDS_DIAG_JOB_FINISHED_E_NOT_OK   Not all data are transfered
 * \retval        UDS_DIAG_JOB_RUNNING             Check is not finished
 *
 * \lhref FL359, FL360, FL662
 */

UDS_ReturnType Prog_GenericRequestTransferExit(UDS_ErrorCodeType* udsErrorCode) {
  UDS_ReturnType rteRetValue = UDS_DIAG_JOB_FINISHED_E_NOT_OK;
  UDS_ErrorCodeType rteErrorCode = UDS_DIAG_E_REQUESTOUTOFRANGE;

  if (Prog_ActiveSubSession != PROG_BOOT_DOWNLOAD_STARTED) {
    Prog_ActiveSubSession = PROG_BOOT_MEMORY_ERASED;
    *udsErrorCode = UDS_DIAG_E_REQUESTSEQUENCEERROR;
    PROG_SET_MULTI_CPU_NONE();
    return (rteRetValue);
  }

  switch (PROG_GET_MULTI_CPU()) {
#if (PROG_MULTI_CPU_ENABLE == STD_ON)
    case PROG_MULTI_CPU_SLAVE:
      rteRetValue = Prog_User_RequestTransferExitCpuSlave(&rteErrorCode);
      break;
#endif /* PROG_MULTI_CPU_ENABLE == STD_ON */

    case PROG_MULTI_CPU_MASTER:
      /* Set address for reprogramming to an invalid address */
      Prog_LastRequestDownloadAddress = 0xFFFFFFFFu;
      /* Check, if exactly the number of bytes are programmend, given in the last RequestDownload and
         if Nrv has finished the complete decompression */
      /* MISRA-C:2004 Rule 12.4 */
      /* PRQA S 3415 4 */
/*@@@patchedByVector_START: workaround for BAC-6828 */
      if (((Prog_ProgrammingParams.MemoryStartAddress - (uint32)1u) == Prog_ProgrammingParams.MemoryEndAddress)
#if (PROG_NRV_ENABLE == STD_ON)
          &&    ((Prog_ProgrammingParams.DataFormatIdentfier == (uint8)PROG_NOTCOMPRESSED_NOTENCRYPTED) 
             || ((Prog_ProgrammingParams.DataFormatIdentfier == (uint8)PROG_NRV_COMPRESSED_NOTENCRYPTED) && (Nrv_GetDecompressionState() == NRV_RET_OK)))
#endif /* (PROG_NRV_ENABLE == STD_ON)*/
/*@@@patchedByVector_END: workaround for BAC-6828 */
          ) {
        rteRetValue = UDS_DIAG_JOB_FINISHED_OK;
      } else {
        rteErrorCode = UDS_DIAG_E_CONDITIONSNOTCORRECT;
      }
      break;

    default:
      rteErrorCode = UDS_DIAG_E_CONDITIONSNOTCORRECT;
      break;
  }

  switch (rteRetValue) {
    case UDS_DIAG_JOB_FINISHED_OK:
      Prog_ActiveSubSession = PROG_BOOT_DOWNLOAD_FINISHED;
      break;

#if (PROG_MULTI_CPU_ENABLE == STD_ON)
    case UDS_DIAG_JOB_RUNNING:
      break;
#endif /* PROG_MULTI_CPU_ENABLE == STD_ON */

    case UDS_DIAG_JOB_FINISHED_E_NOT_OK:
    default:
      Prog_ActiveSubSession = PROG_BOOT_MEMORY_ERASED;
      *udsErrorCode = rteErrorCode;
      PROG_SET_MULTI_CPU_NONE();
      break;
  }

  return (rteRetValue);
} /* end of function Prog_GenericRequestTransferExit */ /* PRQA S 5207 */


#if (PROG_MULTI_CPU_ENABLE == STD_ON)

/**
 * \brief User callback for result of RequestTransferExit
 *
 * Function is calld by User if checks are done
 *
 * \global_w      Prog_ActiveSubSession
 *
 * \param[in]     rteErrorCode   Error code
 * \param[in]     rteRetValue    Return value
 *
 * \remarks none
 */

void Prog_GenericRequestTransferExitResult(UDS_ErrorCodeType rteErrorCode, UDS_ReturnType rteRetValue) {

  /* Send result back to adapter */
  if (rteRetValue == UDS_DIAG_JOB_FINISHED_OK) {
    Prog_ActiveSubSession = PROG_BOOT_DOWNLOAD_FINISHED;
    Prog_UDS_RequestTransferExit_ResultOk();
  } else {
    PROG_SET_MULTI_CPU_NONE();
    Prog_ActiveSubSession = PROG_BOOT_MEMORY_ERASED;
    Prog_UDS_RequestTransferExit_ResultError(rteErrorCode);
  }
} /* end of function Prog_GenericRequestTransferExitResult */

#endif /* PROG_MULTI_CPU_ENABLE == STD_ON */

/* PRQA S 5087 2 */
#define Prog_STOP_SEC_CODE
#include "Prog_MemMap.h"

#endif /* PROG_HTTP_ENABLE == STD_OFF */
