/**
*  \file
*
*  \brief       BMW Module Prog Adapter for User implemented functions
*
*  Functionality for Adaption to User
*
*  \project     BMW Platform Software
*
*  \copyright   BMW AG 2017
*
*  \version     5.2.0
*
*  \remarks     ---
*
*/

/*------------------------------------------------------------------------------
                      MISRA-Deviations
-------------------------------------------------------------------------------*/

/* MISRA-C:2004 Rule 14.2: Function is specified in AUTOSAR with the parameter
   that is not needed, see PRQA: 3112

   MISRA-C:2004 Rule 19.1: Including Prog_MemMap.h is necessary throughout the
   file according to memory abstraction, see PRQA: 5087 */


/*------------------------------------------------------------------------------
                      Include Section
-------------------------------------------------------------------------------*/

#include "Prog_UserAdapter.h"                   /* Own header                  */
#include "Prog_UserAdapterClassicInternal.h"
#include "BUtil/PlatformTypes.h"                /* Standard Types              */
#include <string.h>
#include "Prog_Cfg.h"                           /* Configuration generic       */
#include "ProgClassic_Cfg.h"                    /* Configuration classic       */
#include "ProgSample_Version.h"
#include "Prog_Internal.h"
#include "Prog_GenericCheckProgDependency.h"


/*------------------------------------------------------------------------------
                      Macros
-------------------------------------------------------------------------------*/

/* check version of the module */
#if (!ProgSample_CHECK_VERSION(5, 2, 0))
#error "Version of Prog_UserAdapter.c does not match the version of the module!"
#endif


/*------------------------------------------------------------------------------
                      Global Functions
-------------------------------------------------------------------------------*/

/* PRQA S 5087 2 */
#define Prog_START_SEC_CODE
#include "Prog_MemMap.h"


/**
 * \brief User callout for dependency check
 *
 * Function checks the dependency of all SWE's.
 *
 * \param[out]     result  result of dependency check
 *
 * \remarks none
 */

boolean Prog_User_CheckProgrammingDependency(Prog_CheckProgDepStatusType* result) {
  boolean retValue;

  /* --- User code start --------------------------------------------------- */
  /* A user specific code can be implementeted at this location. Please      */
  /* notice the implementation hints in the UserGuide.                       */
  /* The implementeted example code is for testing and must be removed       */
  /* for production code !!!                                                 */
  /* ----------------------------------------------------------------------- */

  *result = PROG_CPD_STATUS_CONSISTENT_APPL;
  retValue = TRUE;

  /* --- User code end ----------------------------------------------------- */

  return (retValue);
} /* end of function Prog_User_CheckProgrammingDependency */



/**
 * \brief Backup of NV data
 *
 * Actal NV data can be stored for a later conversion to a new NV data layout
 *
 * \remarks none
 */

void Prog_User_CallbackBluBackupNvData(void) {

  /* --- User code start --------------------------------------------------- */
  /* A user specific code can be implementeted at this location. Please      */
  /* notice the implementation hints in the UserGuide.                       */
  /* The implementeted example code is for testing and must be removed       */
  /* for production code !!!                                                 */
  /* ----------------------------------------------------------------------- */


  /* --- User code end ----------------------------------------------------- */

} /* end of function Prog_User_CallbackBluBackupNvData */


/**
 * \brief Generates a random number
 *
 * Generates a random number with the given size.
 *
 * \param[out]    randomNumber  Random number
 * \param[in]     size          Length of random number
 *
 * \pre        Random generator must be started
 *
 * \remarks none
 */

void Prog_User_GenerateRandomNumber(uint8* randomNumber, size_t size) {

  /* --- User code start --------------------------------------------------- */
  /* A user specific code can be implementeted at this location. Please      */
  /* notice the implementation hints in the UserGuide.                       */
  /* The implementeted example code is for testing and must be removed       */
  /* for production code !!!                                                 */
  /* ----------------------------------------------------------------------- */

  randomNumber[0] += 0x11;
  randomNumber[1] += 0x33;
  randomNumber[2] += 0x13;
  randomNumber[3] += 0x31;
  randomNumber[4] += 0x55;
  randomNumber[5] += 0x25;
  randomNumber[6] += 0x52;
  randomNumber[7] += 0x22;

  /* --- User code end ----------------------------------------------------- */

} /* end of function Prog_User_GetRandomNumber */


#if (PROG_MULTI_CPU_ENABLE == STD_ON)

/**
 * \brief Starts Timer for time measurement
 *
 * Actual time of FreeTimer is read and stored in InitTimeInTicks.
 *
 * \pre        FreeTimer shall be started
 *
 * \remarks none
 */

void Prog_User_FreeTimerStart(void) {

  /* --- User code start --------------------------------------------------- */
  /* A user specific code can be implementeted at this location. Please      */
  /* notice the implementation hints in the UserGuide.                       */
  /* The implementeted example code is for testing and must be removed       */
  /* for production code !!!                                                 */
  /* ----------------------------------------------------------------------- */


  /* --- User code end ----------------------------------------------------- */

} /* end of function Prog_User_FreeTimerStart */



/**
 * \brief Stops Timer for time measurement
 *
 * Returns time in ms since measurement is started.
 *
 * \retval     Time in ms since measurement is started
 *
 * \pre        FreeTimer shall be started
 *
 * \remarks none
 */

uint32 Prog_User_FreeTimerGetTime(void) {
  uint32 time;

  /* --- User code start --------------------------------------------------- */
  /* A user specific code can be implementeted at this location. Please      */
  /* notice the implementation hints in the UserGuide.                       */
  /* The implementeted example code is for testing and must be removed       */
  /* for production code !!!                                                 */
  /* ----------------------------------------------------------------------- */

  time = (uint32)0x00002345ul;
  /* --- User code end ----------------------------------------------------- */

  return (time);
} /* end of function Prog_User_FreeTimerGetTime */

/**
 * \brief EraseMemory function trigger for slave CPU
 *
 * Function is used to trigger the asynchronous user EraseMemory for a slave
 *
 * \param[in]     Method            Indicated or addressed method
 * \param[in]     DataIn            Data of signed area
 * \param[out]    result            Result of erase
 * \param[out]    ErrorCode         Error code
 *
 * \retval        UDS_DIAG_JOB_FINISHED_OK         Function is finished immediatly
 * \retval        UDS_DIAG_JOB_FINISHED_E_NOT_OK   Function can not be started
 * \retval        UDS_DIAG_JOB_RUNNING             Function is started and runs asynchron
 *
 * \remarks none
 */

UDS_ReturnType Prog_User_EraseMemoryCpuSlave(
    const uint8 method, const uint8* dataIn, uint8* result, UDS_ErrorCodeType* udsErrorCode) {
  UDS_ReturnType userRetValue;

  /* --- User code start --------------------------------------------------- */
  /* A user specific code can be implementeted at this location. Please      */
  /* notice the implementation hints in the UserGuide.                       */
  /* The implementeted example code is for testing and must be removed       */
  /* for production code !!!                                                 */
  /* ----------------------------------------------------------------------- */

  /* MISRA-C:2004 Rule 14.2: see MISRA-Deviations */
  /* PRQA S 3112 3 */
  (void)method;
  (void)dataIn;
  (void)udsErrorCode;

  userRetValue = UDS_DIAG_JOB_FINISHED_OK:
  *result = 0x00;

  /* --- User code end ----------------------------------------------------- */

  return (userRetValue);
} /* end of function Prog_User_EraseMemoryCpuSlave */



/**
 * \brief RequestDownload function trigger for slave CPU
 *
 * Function is used to trigger the asynchronous user RequestDownload for a slave
 *
 * \param[in]     DataFormatIdentifier    Address format
 * \param[in]     MemoryAddress           First address of data that should be programmed
 * \param[in]     MemorySize              Number of all data that should be programmed
 * \param[out]    ErrorCode               Error code
 *
 * \retval        UDS_DIAG_JOB_FINISHED_OK         Function is finished immediatly
 * \retval        UDS_DIAG_JOB_FINISHED_E_NOT_OK   Function can not be started
 * \retval        UDS_DIAG_JOB_RUNNING             Function is started and runs asynchron
 *
 * \remarks none
 */

UDS_ReturnType Prog_User_RequestDownloadCpuSlave(
    const uint8 dataFormatIdentifier, const uint32 memoryAddress, const uint32 memorySize,
    UDS_ErrorCodeType* errorCode) {
  UDS_ReturnType userRetValue;

  /* --- User code start --------------------------------------------------- */
  /* A user specific code can be implementeted at this location. Please      */
  /* notice the implementation hints in the UserGuide.                       */
  /* The implementeted example code is for testing and must be removed       */
  /* for production code !!!                                                 */
  /* ----------------------------------------------------------------------- */

  /* MISRA-C:2004 Rule 14.2: see MISRA-Deviations */
  /* PRQA S 3112 3 */
  (void)(dataFormatIdentifier);
  (void)(memoryAddress);
  (void)(memorySize);

  userRetValue = UDS_DIAG_JOB_FINISHED_OK:

  /* --- User code end ----------------------------------------------------- */

  return (userRetValue);
} /* end of function Prog_User_RequestDownloadCpuSlave */



/**
 * \brief TransferData function trigger for slave CPU
 *
 * Function is used to trigger the TransferData precheck for a slave
 *
 * \param[in]     userMemoryIdentifier    Type of data (compressed, ...)
 * \param[in]     userSize                Number of data that should be programmed
 * \param[out]    udsErrorCode            Error code
 *
 * \retval        UDS_DIAG_JOB_FINISHED_OK         Check is ok
 * \retval        UDS_DIAG_JOB_FINISHED_E_NOT_OK   Check is not ok
 *
 * \remarks none
 */

UDS_ReturnType Prog_User_TransferDataCpuSlaveCheck(
    uint8 userMemoryIdentifier, uint32 userSize, UDS_ErrorCodeType* udsErrorCode) {
  UDS_ReturnType userRetValue;

  /* --- User code start --------------------------------------------------- */
  /* A user specific code can be implementeted at this location. Please      */
  /* notice the implementation hints in the UserGuide.                       */
  /* The implementeted example code is for testing and must be removed       */
  /* for production code !!!                                                 */
  /* ----------------------------------------------------------------------- */

  /* MISRA-C:2004 Rule 14.2: see MISRA-Deviations */
  /* PRQA S 3112 3 */
  (void)(userMemoryIdentifier);
  (void)(userSize);
  (void)(udsErrorCode);

  userRetValue = UDS_DIAG_JOB_FINISHED_OK:

  /* --- User code end ----------------------------------------------------- */

  return (userRetValue);
} /* end of function Prog_User_TransferDataCpuSlaveCheck */



/**
 * \brief TransferData programming function trigger for slave CPU
 *
 * Function is used to trigger the asynchronous user TransferData for programming a slave
 *
 * \param[in]     userMemoryData          Programming data
 * \param[in]     userMemoryAddress       First address of data that should be programmed
 * \param[in]     userProgrammedSize      Number of all data that should be programmed
 * \param[in]     userMemoryIdentifier    Identifier for selection of memory
 *
 * \retval        UDS_DIAG_JOB_FINISHED_OK         Function is finished immediatly
 * \retval        UDS_DIAG_JOB_FINISHED_E_NOT_OK   Function can not be started
 * \retval        UDS_DIAG_JOB_RUNNING             Function is started and runs asynchron
 *
 * \remarks none
 */

UDS_ReturnType Prog_User_TransferDataCpuSlaveProgram(
    uint8* userMemoryData, uint32 userMemoryAddress, uint32* userProgrammedSize, uint8 userMemoryIdentifier) {
  UDS_ReturnType userRetValue;

  /* --- User code start --------------------------------------------------- */
  /* A user specific code can be implementeted at this location. Please      */
  /* notice the implementation hints in the UserGuide.                       */
  /* The implementeted example code is for testing and must be removed       */
  /* for production code !!!                                                 */
  /* ----------------------------------------------------------------------- */

  /* MISRA-C:2004 Rule 14.2: see MISRA-Deviations */
  /* PRQA S 3112 4 */
  (void)(userMemoryData);
  (void)(userMemoryAddress);
  (void)(userProgrammedSize);
  (void)(userMemoryIdentifier);

  userRetValue = UDS_DIAG_JOB_FINISHED_OK:

/* --- User code end ----------------------------------------------------- */

  return (userRetValue);
} /* end of function Prog_User_TransferDataCpuSlaveProgram */



/**
 * \brief RequestTransferExit function trigger for slave CPU
 *
 * Function is used to trigger the asynchronous user RequestTransferExit for a slave
 *
 * \param[out]    udsErrorCode            Error code
 *
 * \retval        UDS_DIAG_JOB_FINISHED_OK         Function is finished immediatly
 * \retval        UDS_DIAG_JOB_FINISHED_E_NOT_OK   Function can not be started
 * \retval        UDS_DIAG_JOB_RUNNING             Function is started and runs asynchron
 *
 * \remarks none
 */

UDS_ReturnType Prog_User_RequestTransferExitCpuSlave(UDS_ErrorCodeType* udsErrorCode) {
  UDS_ReturnType userRetValue;

  /* --- User code start --------------------------------------------------- */
  /* A user specific code can be implementeted at this location. Please      */
  /* notice the implementation hints in the UserGuide.                       */
  /* The implementeted example code is for testing and must be removed       */
  /* for production code !!!                                                 */
  /* ----------------------------------------------------------------------- */

  /* MISRA-C:2004 Rule 14.2: see MISRA-Deviations */
  /* PRQA S 3112 1 */
  (void)(udsErrorCode);

  userRetValue = UDS_DIAG_JOB_FINISHED_OK:

/* --- User code end ----------------------------------------------------- */

  return (userRetValue);
} /* end of function Prog_User_RequestTransferExitCpuSlave */



/**
 * \brief CheckMemory function trigger for slave CPU
 *
 * Function is used to trigger the asynchronous user CheckMemory for a slave
 *
 * \param[in]     blockAddress      Logical address of SWE
 * \param[out]    result            Result of signature check
 * \param[out]    udsErrorCode      Error code
 *
 * \retval        UDS_DIAG_JOB_FINISHED_OK         Function is finished immediatly
 * \retval        UDS_DIAG_JOB_FINISHED_E_NOT_OK   Function can not be started
 * \retval        UDS_DIAG_JOB_RUNNING             Function is started and runs asynchron
 *
 * \remarks none
 */

UDS_ReturnType Prog_User_CheckMemoryCpuSlave(uint32 blockAddress, uint8* result, UDS_ErrorCodeType* udsErrorCode) {
  UDS_ReturnType userRetValue;

  /* --- User code start --------------------------------------------------- */
  /* A user specific code can be implementeted at this location. Please      */
  /* notice the implementation hints in the UserGuide.                       */
  /* The implementeted example code is for testing and must be removed       */
  /* for production code !!!                                                 */
  /* ----------------------------------------------------------------------- */

  /* MISRA-C:2004 Rule 14.2: see MISRA-Deviations */
  /* PRQA S 3112 2 */
  (void)(blockAddress);
  (void)(udsErrorCode);

  *result = PROG_SWE_STATE_VALID_SWFL;
  userRetValue = UDS_DIAG_JOB_FINISHED_OK:

/* --- User code end ----------------------------------------------------- */

  return (userRetValue);
} /* end of function Prog_User_CheckMemoryCpuSlave */



/**
 * \brief CheckProgDependency function trigger for slave CPU
 *
 * Function is used to trigger the asynchronous user CheckProgDependency for a slave
 *
 * \param[out]    result            Result of dependency check
 * \param[out]    udsErrorCode      Error code
 *
 * \retval        UDS_DIAG_JOB_FINISHED_OK         Function is finished immediatly
 * \retval        UDS_DIAG_JOB_FINISHED_E_NOT_OK   Function can not be started
 * \retval        UDS_DIAG_JOB_RUNNING             Function is started and runs asynchron
 *
 * \remarks none
 */

UDS_ReturnType Prog_User_CheckProgDependencySlave(uint8* result, UDS_ErrorCodeType* udsErrorCode) {
  UDS_ReturnType userRetValue;

  /* --- User code start --------------------------------------------------- */
  /* A user specific code can be implementeted at this location. Please      */
  /* notice the implementation hints in the UserGuide.                       */
  /* The implementeted example code is for testing and must be removed       */
  /* for production code !!!                                                 */
  /* ----------------------------------------------------------------------- */

  /* MISRA-C:2004 Rule 14.2: see MISRA-Deviations */
  /* PRQA S 3112 1 */
  (void)(udsErrorCode);

  *result = PROG_CPD_STATUS_CONSISTENT_APPL;
  userRetValue = UDS_DIAG_JOB_FINISHED_OK:

/* --- User code end ----------------------------------------------------- */

  return (userRetValue);
} /* end of function Prog_User_CheckProgDependencySlave */


#endif /* ( PROG_MULTI_CPU_ENABLE == STD_ON ) */


/* PRQA S 5087 2 */
#define Prog_STOP_SEC_CODE
#include "Prog_MemMap.h"
