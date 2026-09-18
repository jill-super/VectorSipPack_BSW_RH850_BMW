/*----------------------------------------------------------------------------*/
/**
*  \file
*
*  \brief       BMW Module ProgSample
*
*  Dummy functions for module Prog.
*
*  \project     BMW AUTOSAR Core
*
*  \par         To be changed by user: yes
*
*  \copyright   BMW AG 2012 - 2015
*
*  \version     3.3.0
*
*  \remarks     ---
*
*/
/*----------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------
|  DISCLAIMER:                                                                 |
|  As the program is not fully tested and qualified for series production      |
|  use, the user shall not be entitled to use the program in connection        |
|  with any series production. BMW provides the user with the program only     |
|  as sample application (for testing purposes).                               |
|                                                                              |
-------------------------------------------------------------------------------*/

#ifndef I_KNOW_THAT_THIS_CODE_IS_NOT_FOR_PRODUCTION
#error "the program must not be used in connection with series production"
#endif


/*------------------------------------------------------------------------------
                      MISRA-Deviations
-------------------------------------------------------------------------------*/

/* MISRA-C:2004 Rule 14.2: the function is specified in AUTOSAR with these
   parameters. ReqType and SourceAddress are not needed. */

/* MISRA-C:2004 Rule 19.1: including Prog_MemMap.h is necessary throughout the
   file according to memory abstraction. See PRQA 5087. */


#define BAC4_BUS_TYPE_Can   1
#define BAC4_BUS_TYPE_Fr    2
#define BAC4_BUS_TYPE_Eth   3

#define BAC4_BUS_TYPE       BAC4_BUS_TYPE_Can

/*------------------------------------------------------------------------------
                      Include Section
-------------------------------------------------------------------------------*/

#include <Std_Types.h>                 /* AUTOSAR Standard Types               */
#include <string.h>
#include "Prog_Version.h"              /* Prog version file                    */
#include "Prog_User.h"                 /* Own header file                      */
#include "Prog_Internal.h"             /* Contains Prog internal functions     */
#include "Prog_TransferData.h"
#include "Dlog_Cfg.h"
#include "Dlog_Swe.h"
#include "Dlog_SweGet.h"
#include "BUtil_ByteMask.h"
#include "MyDcm_Callbacks.h"
#include "FreeTimer.h"
#include "Cal.h"
#include "Os.h"
#if(BAC4_BUS_TYPE==BAC4_BUS_TYPE_Eth)
   #include "EthDiagMM_Swc.h"
#endif



/*------------------------------------------------------------------------------
                      Macros
-------------------------------------------------------------------------------*/

/* check version of the module */
#if (!Prog_CHECK_VERSION(3,3,1))
   #error "Version of Prog_User.c does not match the version of the module!"
#endif


/*------------------------------------------------------------------------------
                      Global Variables
-------------------------------------------------------------------------------*/

/* empty */


/*------------------------------------------------------------------------------
                      Global Constants
-------------------------------------------------------------------------------*/

/* empty */


/*------------------------------------------------------------------------------
                      Local Data Types
-------------------------------------------------------------------------------*/

/* empty */


/*------------------------------------------------------------------------------
                      Local Variables
-------------------------------------------------------------------------------*/

/* PRQA S 5087 2 */
#define ProgSample_START_SEC_VAR_INIT_UNSPECIFIED
#include "ProgSample_MemMap.h"

VAR ( FreeTimer_TimeInTicksType, ProgSample_VAR )     InitTimeInTicks;
VAR ( FreeTimer_TimeInTicksType, ProgSample_VAR )     ActualTimeInTicks;
VAR ( FreeTimer_TimeInMsType, ProgSample_VAR )        ActualTimeInMs;
VAR ( uint32, ProgSample_VAR )                        Prog_UserNextDataStartAddress;
/* PRQA S 5087 2 */
#define ProgSample_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "ProgSample_MemMap.h"

#if ( PROG_MULTI_CPU_ENABLE == STD_ON )

/* PRQA S 5087 2 */
#define ProgSample_START_SEC_VAR_INIT_8
#include "ProgSample_MemMap.h"

static VAR ( uint8, ProgSample_VAR )     Prog_UserMultiCpuState                       = 0u;

/* PRQA S 5087 2 */
#define ProgSample_STOP_SEC_VAR_INIT_8
#include "ProgSample_MemMap.h"


/* PRQA S 5087 2 */
#define ProgSample_START_SEC_VAR_INIT_16
#include "ProgSample_MemMap.h"

static VAR ( uint16, ProgSample_VAR )    Prog_UserMultiCpuCounterEraseMemory          = 0u;
static VAR ( uint16, ProgSample_VAR )    Prog_UserMultiCpuCounterRequestDownload      = 0u;
static VAR ( uint16, ProgSample_VAR )    Prog_UserMultiCpuCounterTransferData         = 0u;
static VAR ( uint16, ProgSample_VAR )    Prog_UserMultiCpuCounterRequestTransferExit  = 0u;
static VAR ( uint16, ProgSample_VAR )    Prog_UserMultiCpuCounterCheckMemory          = 0u;
static VAR ( uint16, ProgSample_VAR )    Prog_UserMultiCpuCounterCheckProgDependency  = 0u;

/* PRQA S 5087 2 */
#define ProgSample_STOP_SEC_VAR_INIT_16
#include "ProgSample_MemMap.h"

#endif /* PROG_MULTI_CPU_ENABLE == STD_ON */


/*------------------------------------------------------------------------------
                      Local Constants
-------------------------------------------------------------------------------*/

/* empty */


/*------------------------------------------------------------------------------
                      Local Functions Prototypes
-------------------------------------------------------------------------------*/

/* empty */


/*------------------------------------------------------------------------------
                      Local Functions
-------------------------------------------------------------------------------*/

/* empty */


/*------------------------------------------------------------------------------
                      Global Functions
-------------------------------------------------------------------------------*/

/* PRQA S 5087 2 */
#define ProgSample_START_SEC_CODE
#include "ProgSample_MemMap.h"

/*----------------------------------------------------------------------------*/
/**
 * \brief   Starts Timer for time measurement
 *
 * Actual time of FreeTimer is read and stored in InitTimeInTicks.
 *
 * \global_r   None
 * \global_w   InitTimeInTicks   User specific variable that holds the start time
 * \global_rw  None
 *
 * \pre        FreeTimer shall be started
 *
 * \post       None
 *
 * \remarks    None
 *
 */
/*----------------------------------------------------------------------------*/

/* SWS_ID: PROG_ */

FUNC( void, ProgSample_CODE ) Prog_UserCallbackFreeTimerStart
            (
               void
            )
{
   FreeTimer_StartTimeMeasurement(&InitTimeInTicks);
   return;
} /* end of function Prog_UserCallbackFreeTimerStart */



/*----------------------------------------------------------------------------*/
/**
 * \brief   Stops Timer for time measurement
 *
 * Returns time in ms since measurement is started.
 *
 * \global_r   InitTimeInTicks
 * \global_w   None
 * \global_rw  ActualTimeInTicks, ActualTimeInMs
 *
 * \retval     Time in ms since measurement is started
 *
 * \pre        FreeTimer shall be started
 *
 * \post       None
 *
 * \remarks    None
 *
 */
/*----------------------------------------------------------------------------*/

/* SWS_ID: PROG_ */

FUNC( uint32, ProgSample_CODE ) Prog_UserCallbackFreeTimerGetTime
            (
               void
            )
{
   ActualTimeInTicks = FreeTimer_GetTimeInTicks(InitTimeInTicks);
   ActualTimeInMs    = FreeTimer_ConvertTicks2Ms( ActualTimeInTicks );
   return ( (uint32) ActualTimeInMs );
} /* end of function Prog_UserCallbackFreeTimerGetTime */



/*----------------------------------------------------------------------------*/
/**
 * \brief   Counter Value from FreeTimer
 *
 * Returns actual counter value of FreeTimer for use as a random value.
 *
 * \global_r   None
 * \global_w   None
 * \global_rw  None
 *
 * \retval     Actual counter value of FreeTimer with 32 bit resolution.
 *
 * \pre        FreeTimer shall be started
 *
 * \post       None
 *
 * \remarks    None
 *
 */
/*----------------------------------------------------------------------------*/

/* SWS_ID: PROG_ */

FUNC( uint32, ProgSample_CODE ) Prog_UserCallbackRandomNumber
            (
               void
            )
{
   return ( (uint32) FreeTimer_CreateRandomNumber() );
} /* end of function Prog_UserCallbackRandomNumber */



/*----------------------------------------------------------------------------*/
/**
 * \brief   Start of asynchronous task for signature check
 *
 * If signature check is not running, it will be started
 *
 * \global_r   None
 * \global_w   None
 * \global_rw  Prog_ProgrammingParams.AuthSigState
 *
 * \retval     PROG_E_OK      Asyncronous task is started
 * \retval     PROG_E_NOT_OK  Not possible to start asyncronous task
 *
 * \pre        None
 *
 * \post       None
 *
 * \remarks    None
 *
 */
/*----------------------------------------------------------------------------*/

/* SWS_ID: PROG_ */

FUNC( Prog_ReturnType, ProgSample_CODE ) Prog_UserCallbackCheckMemoryStart
            (
               void
            )
{
   Prog_ReturnType retvalue = PROG_E_NOT_OK;

   /* --- User code start --------------------------------------------------- */
   /* A user specific code can be implementeted at this location. Please      */
   /* notice the implementation hints in the UserGuide.                       */
   /* The implementeted example code is for testing and must be removed       */
   /* for production code !!!                                                 */
   /* ----------------------------------------------------------------------- */

   if ( Prog_ProgrammingParams.AuthSigState == PROG_E_PENDING )
   {
      /* Authentication or signature check is active */
      Prog_ProgrammingParams.AuthSigState = PROG_E_NOT_OK;
   }
   else
   {
      /* Authentication or signature check is idle */
      Prog_ProgrammingParams.AuthSigState = PROG_E_PENDING;
      retvalue = PROG_E_OK;
      ActivateTask( Cpl_Task );
   }

   /* --- User code end ----------------------------------------------------- */

   return ( retvalue );
} /* end of function Prog_UserCallbackCheckMemoryStart */



/*----------------------------------------------------------------------------*/
/**
 * \brief   State of asynchronous task for signature check
 *
 * Returns actual state of signature check
 *
 * \global_r   Prog_ProgrammingParams.AuthSigState
 * \global_w   None
 * \global_rw  None
 *
 * \retval     PROG_E_OK               Signature check is ok
 * \retval     PROG_E_NOT_OK           Signature check fails
 * \retval     PROG_E_RESULT_NOT_OK    Signature check is not ok
 * \retval     PROG_E_PENDING          Signature check is still running
 *
 * \pre        None
 *
 * \post       None
 *
 * \remarks    None
 *
 */
/*----------------------------------------------------------------------------*/

/* SWS_ID: PROG_ */

FUNC( Prog_ReturnType, ProgSample_CODE ) Prog_UserCallbackCheckMemoryRun
            (
               void
            )
{

   /* --- User code start --------------------------------------------------- */
   /* A user specific code can be implementeted at this location. Please      */
   /* notice the implementation hints in the UserGuide.                       */
   /* The implementeted example code is for testing and must be removed       */
   /* for production code !!!                                                 */
   /* ----------------------------------------------------------------------- */


   /* --- User code end ----------------------------------------------------- */

   return ( Prog_ProgrammingParams.AuthSigState );
} /* end of function Prog_UserCallbackCheckMemoryRun */



/*----------------------------------------------------------------------------*/
/**
 * \brief   Check if Application is startable
 *
 * Check if Application SWEs' are consistent an compatible to Bootloader
 *
 * \global_r   None
 * \global_w   None
 * \global_rw  None
 *
 * \param[out] UserProgDepState  Result of SWE consistence check
 *
 * \retval     DLOG_PROG_DEP_CONSISTENT_APPL    SWEs' are consistent
 * \retval     DLOG_PROG_DEP_INCONSISTENT_APPL  SWEs' are inconsistent
 *
 * \pre        None
 *
 * \post       None
 *
 * \remarks    None
 *
 */
/*----------------------------------------------------------------------------*/

/* SWS_ID: PROG_ */

FUNC( void, ProgSample_CODE ) Prog_UserCallbackProgrammingDependenciesCheck
            (
               CONSTP2VAR( Dlog_SweProgDepStateType, AUTOMATIC, ProgSample_VAR ) UserProgDepState
            )
{

   /* --- User code start --------------------------------------------------- */
   /* A user specific code can be implementeted at this location. Please      */
   /* notice the implementation hints in the UserGuide.                       */
   /* The implementeted example code is for testing and must be removed       */
   /* for production code !!!                                                 */
   /* ----------------------------------------------------------------------- */

   /* All SWEs are consistent */
   *UserProgDepState = DLOG_PROG_DEP_CONSISTENT_APPL;

   /* --- User code end ----------------------------------------------------- */

   return;
} /* end of function Prog_UserCallbackProgrammingDependenciesCheck */



/*----------------------------------------------------------------------------*/
/**
 * \brief   Backup of NV data
 *
 * Actal NV data can be stored for a later conversion to a new NV data layout
 *
 * \global_r   None
 * \global_w   None
 * \global_rw  None
 *
 * \pre        None
 *
 * \post       None
 *
 * \remarks    None
 *
 */
/*----------------------------------------------------------------------------*/

/* SWS_ID: PROG_ */

FUNC( void, ProgSample_CODE ) Prog_UserCallbackBluBackupNvData
      (
          void
      )
{

   /* --- User code start --------------------------------------------------- */
   /* A user specific code can be implementeted at this location. Please      */
   /* notice the implementation hints in the UserGuide.                       */
   /* The implementeted example code is for testing and must be removed       */
   /* for production code !!!                                                 */
   /* ----------------------------------------------------------------------- */


   /* --- User code end ----------------------------------------------------- */

   return;
} /* end of function Prog_UserCallbackBluBackupNvData */



/*----------------------------------------------------------------------------*/
/**
 * \brief Dcm manufacturer notification for Bootloader
 *
 * Function handles all calls for module specific manufacturer notification
 *
 * \global_r   None
 * \global_w   None
 * \global_rw  None
 *
 * \param[in]  Sid               Requested service
 * \param[in]  RequestData       Requested ID
 * \param[in]  DataSize          Size of data
 * \param[in]  ReqType           Not used
 * \param[in]  SourceAddress     Source address
 * \param[out] ErrorCode         Error code
 *
 * \retval E_OK      Conditions are ok
 * \retval E_NOT_OK  Conditions are not ok
 *
 * \pre        None
 *
 * \post       None
 *
 * \remarks    None
 *
 */
/*----------------------------------------------------------------------------*/

/* SWS_ID: PROG_ */

FUNC(Std_ReturnType, ProgSample_CODE) Rte_DcmManufacturerNotification
            (
               uint8                                                             Sid,
               P2VAR ( uint8, AUTOMATIC, ProgSample_VAR )                        RequestData,
               uint16                                                            DataSize,
               uint8                                                             ReqType,
               uint16                                                            SourceAddress,
               P2VAR ( Dcm_NegativeResponseCodeType, AUTOMATIC, ProgSample_VAR ) ErrorCode
            )
{
   Std_ReturnType              RetVal;

   RetVal         = E_OK;
   *ErrorCode     = DCM_E_OK;

   /* Check for module Prog */
   RetVal = Prog_DcmManufacturerNotification(Sid, RequestData, DataSize, ReqType, SourceAddress, ErrorCode);

#if(BAC4_BUS_TYPE==BAC4_BUS_TYPE_Eth)
   if ( RetVal == E_OK )
   {
      RetVal = EthDiagMM_Swc_ManufacturerIndication(Sid, RequestData, DataSize, ReqType, SourceAddress, ErrorCode);
   }
#endif

   /* Repeat this sequence for every user module, that should be checked, in tpart user code */

   /* --- User code start --------------------------------------------------- */
   /* A user specific code can be implementeted at this location. Please      */
   /* notice the implementation hints in the UserGuide.                       */
   /* The implementeted example code is for testing and must be removed       */
   /* for production code !!!                                                 */
   /* ----------------------------------------------------------------------- */

   if ( RetVal == E_OK )
   {
      /* Enter user specific module checks here */
#if 0
      RetVal = MyDcm_DcmIndication(Sid, RequestData, DataSize, ReqType, SourceAddress, ErrorCode);
#endif
   }

   /* --- User code end ----------------------------------------------------- */

   return ( RetVal );
}



/*----------------------------------------------------------------------------*/
/**
 * \brief Dcm confirmation for Bootloader
 *
 * Function handles all calls for module specific confirmation
 *
 * \global_r   None
 * \global_w   None
 * \global_rw  None
 *
 * \param[in]  SID               Requested service
 * \param[in]  ReqType           Not used
 * \param[in]  SourceAddress     Source address
 * \param[out] ErrorCode         Error code
 *
 * \pre        None
 *
 * \post       None
 *
 * \remarks    None
 *
 */
/*----------------------------------------------------------------------------*/

/* SWS_ID: PROG_ */

FUNC(void, DCM_APPL_CODE) Rte_DcmConfirmation
         (
           uint8                      SID,
           uint8                      ReqType,
           uint16                     SourceAddress,
           Dcm_ConfirmationStatusType ConfirmationStatus
         )
{

#if(BAC4_BUS_TYPE==BAC4_BUS_TYPE_Eth)
   /* MISRA-C:2004 Rule 14.2: see MISRA-Deviations */
   /* PRQA S 3112 1 */
   (void) EthDiagMM_Swc_ManufacturerConfirmation(SID, ReqType, SourceAddress, ConfirmationStatus);
#endif

   /* --- User code start --------------------------------------------------- */
   /* A user specific code can be implementeted at this location. Please      */
   /* notice the implementation hints in the UserGuide.                       */
   /* The implementeted example code is for testing and must be removed       */
   /* for production code !!!                                                 */
   /* ----------------------------------------------------------------------- */
   /* Enter user specific module checks here */


   /* --- User code end ----------------------------------------------------- */
}



#if ( PROG_MULTI_CPU_ENABLE == STD_ON )

/*----------------------------------------------------------------------------*/
/**
 * \brief EraseMemory slave start
 *
 * Function for erase a SWE of a slave
 *
 * \global_w      Prog_UserMultiCpuCounterEraseMemory
 *
 * \param[in]     Method            Indicated or addressed method
 * \param[in]     FormatIdentifier  Address format
 * \param[in]     DataIn            Data of signed area
 * \param[out]    ErrorCode         Error code
 *
 * \retval        PROG_E_OK         Function is started
 * \retval        PROG_E_NOT_OK     Function can not be started
 *
 * \pre  none
 *
 * \post none
 *
 * \remarks none
 *
 */
/*----------------------------------------------------------------------------*/
FUNC(Prog_ReturnType, ProgSample_CODE) Prog_UserMultiCpuEraseMemoryStart
            (
               CONST       ( uint8, ProgSample_VAR )                                   Method,
               CONST       ( uint8, ProgSample_VAR )                                   FormatIdentifier,
               CONSTP2CONST( uint8, AUTOMATIC, ProgSample_VAR )                        DataIn,
               CONSTP2VAR  ( Dcm_NegativeResponseCodeType, AUTOMATIC, ProgSample_VAR ) ErrorCode
            )
{
   Prog_ReturnType   Prog_Return;

   /* --- User code start --------------------------------------------------- */
   /* A user specific code can be implementeted at this location. Please      */
   /* notice the implementation hints in the UserGuide.                       */
   /* The implementeted example code is for testing and must be removed       */
   /* for production code !!!                                                 */
   /* ----------------------------------------------------------------------- */

   uint32         StartAddress;
   uint32         DataLength;

   const uint8    SgbmId[8] = { 0x0D, 0x7e, 0x00, 0x00, 0x25, 0xC8, 0x00, 0x00 };

   Prog_Return                            = PROG_E_NOT_OK;
   Prog_UserMultiCpuCounterEraseMemory    = 0u;

   switch ( Method )
   {
      case ERASE_MEMORY_METHOD_ADDRESSED:
         if ( FormatIdentifier == 0x44 )
         {
            /* Get physical address of SWE */
            StartAddress  = BUtil_Make32Bit( DataIn[0], DataIn[1], DataIn[2], DataIn[3] );
            DataLength    = BUtil_Make32Bit( DataIn[4], DataIn[5], DataIn[6], DataIn[7] );
            Prog_UserMultiCpuCounterEraseMemory    = 200u;
            Prog_Return                            = PROG_E_OK;
         }
         break;

      case ERASE_MEMORY_METHOD_INDICATED:
         if ( FormatIdentifier == 0x40 )
         {
            /* Get logical address of SWE */
            StartAddress = BUtil_Make32Bit( DataIn[0], DataIn[1], DataIn[2], DataIn[3] );
            if ( ( StartAddress == 0x0207FE44 ) ||
                 ( StartAddress == 0x020FFE44 ) )
            {
               Prog_UserMultiCpuCounterEraseMemory    = 200u;
               Prog_Return                            = PROG_E_OK;
            }
         }
         break;

      case ERASE_MEMORY_METHOD_SGBMID:
         if ( memcmp
               (
                  DataIn,
                  SgbmId,
                  DLOG_SGBM_ID_LENGTH
               ) == 0x00
            )
         {
            Prog_UserMultiCpuCounterEraseMemory    = 200u;
            Prog_Return                            = PROG_E_OK;
         }
         break;

      default:
         break;
   }

   if ( Prog_Return == PROG_E_NOT_OK )
   {
      /* It is only allowed to delete a SWFK */
      *ErrorCode  = DCM_E_REQUESTOUTOFRANGE;
   }

   /* --- User code end ----------------------------------------------------- */

   return ( Prog_Return );
} /* end of function Prog_UserMultiCpuEraseMemoryStart */



/*----------------------------------------------------------------------------*/
/**
 * \brief EraseMemory slave end
 *
 * Function for erase a SWE of a slave
 *
 * \global_rw     Prog_UserMultiCpuCounterEraseMemory
 * \global_w      Prog_UserMultiCpuState
 *
 * \param[out]    ErrorCode         Error code
 *
 * \retval        PROG_E_OK         Function is finished with ok
 * \retval        PROG_E_NOT_OK     Function is finished with not ok
 * \retval        PROG_E_PENDING    Function is still running
 *
 * \pre  none
 *
 * \post none
 *
 * \remarks none
 *
 */
/*----------------------------------------------------------------------------*/
FUNC(Prog_ReturnType, ProgSample_CODE) Prog_UserMultiCpuEraseMemoryRun
            (
               CONSTP2VAR  ( Dcm_NegativeResponseCodeType, AUTOMATIC, ProgSample_VAR ) ErrorCode
            )
{
   Prog_ReturnType   Prog_Return;

   /* --- User code start --------------------------------------------------- */
   /* A user specific code can be implementeted at this location. Please      */
   /* notice the implementation hints in the UserGuide.                       */
   /* The implementeted example code is for testing and must be removed       */
   /* for production code !!!                                                 */
   /* ----------------------------------------------------------------------- */

   /* MISRA-C:2004 Rule 14.2: see MISRA-Deviations */
   /* PRQA S 3112 1 */
   (void)(ErrorCode);

   if ( Prog_UserMultiCpuCounterEraseMemory == 0u )
   {
      /* Slave SWE is erased */
      Prog_UserMultiCpuState     = 1;
      Prog_Return                = PROG_E_OK;
   }
   else
   {
      Prog_UserMultiCpuCounterEraseMemory--;
      Prog_Return                = PROG_E_PENDING;
   }

   /* --- User code end ----------------------------------------------------- */

   return ( Prog_Return );
} /* end of function Prog_UserMultiCpuEraseMemoryRun */



/*----------------------------------------------------------------------------*/
/**
 * \brief RequestDownload slave start
 *
 * Function for start of data download of a slave SWE
 *
 * \global_w      Prog_UserMultiCpuCounterRequestDownload
 *
 * \param[in]     DataFormatIdentifier    Address format
 * \param[in]     MemoryAddress           First address of data that should be programmed
 * \param[in]     Size                    Number of all data that should be programmed
 * \param[out]    ErrorCode               Error code
 *
 * \retval        PROG_E_OK               Function is started
 * \retval        PROG_E_NOT_OK           Function can not be started
 *
 * \pre  none
 *
 * \post none
 *
 * \remarks none
 *
 */
/*----------------------------------------------------------------------------*/
FUNC(Prog_ReturnType, ProgSample_CODE) Prog_UserMultiCpuRequestDownloadStart
            (
               CONST       ( uint8,  ProgSample_VAR )                                  DataFormatIdentifier,
               CONST       ( uint32, ProgSample_VAR )                                  MemoryAddress,
               CONST       ( uint32, ProgSample_VAR )                                  MemorySize,
               CONSTP2VAR  ( Dcm_NegativeResponseCodeType, AUTOMATIC, ProgSample_VAR ) ErrorCode
            )
{
   Prog_ReturnType   Prog_Return;

   /* --- User code start --------------------------------------------------- */
   /* A user specific code can be implementeted at this location. Please      */
   /* notice the implementation hints in the UserGuide.                       */
   /* The implementeted example code is for testing and must be removed       */
   /* for production code !!!                                                 */
   /* ----------------------------------------------------------------------- */

   uint32            EndAddress;

   /* MISRA-C:2004 Rule 14.2: see MISRA-Deviations */
   /* PRQA S 3112 2 */
   (void)(DataFormatIdentifier);
   (void)(ErrorCode);

   Prog_UserMultiCpuCounterRequestDownload   = 0u;
   Prog_Return                               = PROG_E_NOT_OK;
   Prog_UserNextDataStartAddress             = MemoryAddress + MemorySize;
   EndAddress                                = Prog_UserNextDataStartAddress - 1u;

   /* SWE 5 */
   if ( ( MemoryAddress >= 0x02000000 ) &&
        ( EndAddress    <= 0x0207FFFF ) )
   {
      Prog_UserMultiCpuCounterRequestDownload   = 100u;
      Prog_Return                               = PROG_E_OK;
   }

   /* SWE 6 */
   if ( ( MemoryAddress >= 0x02080000 ) &&
        ( EndAddress    <= 0x020FFFFF ) )
   {
      Prog_UserMultiCpuCounterRequestDownload   = 100u;
      Prog_Return                               = PROG_E_OK;
   }

   if ( Prog_Return == PROG_E_NOT_OK )
   {
      /* It is only allowed to delete a SWFK */
      *ErrorCode  = DCM_E_REQUESTOUTOFRANGE;
   }

   /* --- User code end ----------------------------------------------------- */

   return ( Prog_Return );
} /* end of function Prog_UserMultiCpuRequestDownloadStart */



/*----------------------------------------------------------------------------*/
/**
 * \brief RequestDownload slave end
 *
 * Function for start of data download of a slave SWE
 *
 * \global_rw     Prog_UserMultiCpuCounterRequestDownload
 * \global_w      Prog_UserMultiCpuState
 *
 * \retval        PROG_E_OK         Function is finished with ok
 * \retval        PROG_E_NOT_OK     Function is finished with not ok
 * \retval        PROG_E_PENDING    Function is still running
 *
 * \pre  none
 *
 * \post none
 *
 * \remarks none
 *
 */
/*----------------------------------------------------------------------------*/
FUNC(Prog_ReturnType, ProgSample_CODE) Prog_UserMultiCpuRequestDownloadRun
            (
               void
            )
{
   Prog_ReturnType   Prog_Return;

   /* --- User code start --------------------------------------------------- */
   /* A user specific code can be implementeted at this location. Please      */
   /* notice the implementation hints in the UserGuide.                       */
   /* The implementeted example code is for testing and must be removed       */
   /* for production code !!!                                                 */
   /* ----------------------------------------------------------------------- */

   if ( Prog_UserMultiCpuCounterRequestDownload == 0u )
   {
      /* Download parameter are ok */
      Prog_UserMultiCpuState     = 2;
      Prog_Return                = PROG_E_OK;
   }
   else
   {
      Prog_UserMultiCpuCounterRequestDownload--;
      Prog_Return                = PROG_E_PENDING;
   }

   /* --- User code end ----------------------------------------------------- */

   return ( Prog_Return );
} /* end of function Prog_UserMultiCpuRequestDownloadRun */



/*----------------------------------------------------------------------------*/
/**
 * \brief TransferData slave start
 *
 * Function for data transfer of a slave SWE
 *
 * \global_w      Prog_UserMultiCpuCounterTransferData
 *
 * \param[in]     MemoryIdentifier  Identifer for different Memory types
 * \param[in]     Data              Data that should be programmed
 * \param[in]     Size              Number of data that should be programmed
 * \param[out]    ErrorCode         Error code
 *
 * \retval        PROG_E_OK         Function is started
 * \retval        PROG_E_NOT_OK     Function can not be started
 *
 * \pre  none
 *
 * \post none
 *
 * \remarks none
 *
 */
/*----------------------------------------------------------------------------*/
FUNC(Prog_ReturnType, ProgSample_CODE) Prog_UserMultiCpuTransferDataStart
            (
               uint8                                                                   MemoryIdentifier,
               P2CONST     ( uint8, AUTOMATIC, ProgSample_CONST)                       Data,
               CONST       ( uint32, ProgSample_VAR )                                  Size,
               CONSTP2VAR  ( Dcm_NegativeResponseCodeType, AUTOMATIC, ProgSample_VAR ) ErrorCode
            )
{
   Prog_ReturnType   Prog_Return;

   /* --- User code start --------------------------------------------------- */
   /* A user specific code can be implementeted at this location. Please      */
   /* notice the implementation hints in the UserGuide.                       */
   /* The implementeted example code is for testing and must be removed       */
   /* for production code !!!                                                 */
   /* ----------------------------------------------------------------------- */

   /* MISRA-C:2004 Rule 14.2: see MISRA-Deviations */
   /* PRQA S 3112 4 */
   (void)(MemoryIdentifier);
   (void)(Data);
   (void)(Size);
   (void)(ErrorCode);

   Prog_UserMultiCpuCounterTransferData         = 50u;
   Prog_Return                                  = PROG_E_OK;

   /* --- User code end ----------------------------------------------------- */

   return ( Prog_Return );
} /* end of function Prog_UserMultiCpuTransferDataStart */



/*----------------------------------------------------------------------------*/
/**
 * \brief TransferData slave run
 *
 * Function for data transfer of a slave SWE
 *
 * \global_rw     Prog_UserMultiCpuCounterTransferData
 * \global_w      Prog_UserMultiCpuState
 *
 * \param[in]     NextDataStartAddress    Address of data that should be programmed with the next TrasferData
 *
 * \retval        PROG_E_OK               Function is finished with ok
 * \retval        PROG_E_NOT_OK           Function is finished with not ok
 * \retval        PROG_E_PENDING          Function is still running
 *
 * \pre  none
 *
 * \post none
 *
 * \remarks none
 *
 */
/*----------------------------------------------------------------------------*/
FUNC(Prog_ReturnType, ProgSample_CODE) Prog_UserMultiCpuTransferDataRun
            (
               P2VAR       ( uint32, AUTOMATIC, ProgSample_VAR)   NextDataStartAddress
            )
{
   Prog_ReturnType   Prog_Return;

   /* --- User code start --------------------------------------------------- */
   /* A user specific code can be implementeted at this location. Please      */
   /* notice the implementation hints in the UserGuide.                       */
   /* The implementeted example code is for testing and must be removed       */
   /* for production code !!!                                                 */
   /* ----------------------------------------------------------------------- */

   if ( Prog_UserMultiCpuCounterTransferData == 0u )
   {
      /* Data programmed into Slave */
      Prog_UserMultiCpuState  = 3;
      *NextDataStartAddress   = Prog_UserNextDataStartAddress;
      Prog_Return             = PROG_E_OK;
   }
   else
   {
      Prog_UserMultiCpuCounterTransferData--;
      Prog_Return = PROG_E_PENDING;
   }

   /* --- User code end ----------------------------------------------------- */

   return ( Prog_Return );
} /* end of function Prog_UserMultiCpuTransferDataRun */



/*----------------------------------------------------------------------------*/
/**
 * \brief RequestTransferExit slave start
 *
 * Function for exit data transfer of a slave SWE
 *
 * \global_w      Prog_UserMultiCpuCounterRequestTransferExit
 *
 * \param[out]    ErrorCode         Error code
 *
 * \retval        PROG_E_OK         Function is started
 * \retval        PROG_E_NOT_OK     Function can not be started
 *
 * \pre  none
 *
 * \post none
 *
 * \remarks none
 *
 */
/*----------------------------------------------------------------------------*/
FUNC(Prog_ReturnType, ProgSample_CODE) Prog_UserMultiCpuRequestTransferExitStart
            (
               CONSTP2VAR  ( Dcm_NegativeResponseCodeType, AUTOMATIC, ProgSample_VAR ) ErrorCode
            )
{
   Prog_ReturnType   Prog_Return;

   /* --- User code start --------------------------------------------------- */
   /* A user specific code can be implementeted at this location. Please      */
   /* notice the implementation hints in the UserGuide.                       */
   /* The implementeted example code is for testing and must be removed       */
   /* for production code !!!                                                 */
   /* ----------------------------------------------------------------------- */

   Prog_UserMultiCpuCounterRequestTransferExit  = 200u;
   Prog_Return                                  = PROG_E_OK;

   /* --- User code end ----------------------------------------------------- */

   return ( Prog_Return );
} /* end of function Prog_UserMultiCpuRequestTransferExitStart */



/*----------------------------------------------------------------------------*/
/**
 * \brief RequestTransferExit slave run
 *
 * Function for exit data transfer of a slave SWE
 *
 * \param[out]    ErrorCode         Error code
 *
 * \global_rw     Prog_UserMultiCpuCounterRequestTransferExit
 * \global_w      Prog_UserMultiCpuState
 *
 * \retval        PROG_E_OK         Function is finished with ok
 * \retval        PROG_E_NOT_OK     Function is finished with not ok
 * \retval        PROG_E_PENDING    Function is still running
 *
 * \pre  none
 *
 * \post none
 *
 * \remarks none
 *
 */
/*----------------------------------------------------------------------------*/
FUNC(Prog_ReturnType, ProgSample_CODE) Prog_UserMultiCpuRequestTransferExitRun
            (
               CONSTP2VAR  ( Dcm_NegativeResponseCodeType, AUTOMATIC, ProgSample_VAR ) ErrorCode
            )
{
   Prog_ReturnType   Prog_Return;

   /* --- User code start --------------------------------------------------- */
   /* A user specific code can be implementeted at this location. Please      */
   /* notice the implementation hints in the UserGuide.                       */
   /* The implementeted example code is for testing and must be removed       */
   /* for production code !!!                                                 */
   /* ----------------------------------------------------------------------- */

   if ( Prog_UserMultiCpuCounterRequestTransferExit == 0u )
   {
      /* Data transfer to Slave is finished */
      Prog_UserMultiCpuState     = 4;
      Prog_Return                = PROG_E_OK;
   }
   else
   {
      Prog_UserMultiCpuCounterRequestTransferExit--;
      Prog_Return                = PROG_E_PENDING;
   }

   /* --- User code end ----------------------------------------------------- */

   return ( Prog_Return );
} /* end of function Prog_UserMultiCpuRequestTransferExitRun */



/*----------------------------------------------------------------------------*/
/**
 * \brief CheckMemory slave start
 *
 * Function for signature check of a slave SWE
 *
 * \global_w      Prog_UserMultiCpuCounterCheckMemory
 *
 * \param[in]     BlockAddress      Address of the SWE
 * \param[out]    ErrorCode         Error code
 *
 * \retval        PROG_E_OK         Function is started
 * \retval        PROG_E_NOT_OK     Function can not be started
 *
 * \pre  none
 *
 * \post none
 *
 * \remarks none
 *
 */
/*----------------------------------------------------------------------------*/
FUNC(Prog_ReturnType, ProgSample_CODE) Prog_UserMultiCpuCheckMemoryStart
            (
               uint32                                                                  BlockAddress,
               CONSTP2VAR  ( Dcm_NegativeResponseCodeType, AUTOMATIC, ProgSample_VAR ) ErrorCode
            )
{
   Prog_ReturnType   Prog_Return;

   /* --- User code start --------------------------------------------------- */
   /* A user specific code can be implementeted at this location. Please      */
   /* notice the implementation hints in the UserGuide.                       */
   /* The implementeted example code is for testing and must be removed       */
   /* for production code !!!                                                 */
   /* ----------------------------------------------------------------------- */

   if ( ( BlockAddress == 0x0207FE44 ) ||
        ( BlockAddress == 0x020FFE44 ) )
   {
      Prog_UserMultiCpuCounterCheckMemory    = 200u;
      Prog_Return                            = PROG_E_OK;
   }
   else
   {
      Prog_UserMultiCpuCounterCheckMemory    = 0u;
      *ErrorCode                             = DCM_E_REQUESTOUTOFRANGE;
      Prog_Return                            = PROG_E_NOT_OK;
   }

   /* --- User code end ----------------------------------------------------- */

   return ( Prog_Return );
} /* end of function Prog_UserMultiCpuCheckMemoryStart */



/*----------------------------------------------------------------------------*/
/**
 * \brief CheckMemory slave run
 *
 * Function for signature check of a slave SWE
 *
 * \global_rw     Prog_UserMultiCpuCounterCheckMemory
 * \global_w      Prog_UserMultiCpuState
 *
 * \param[out]    ValidStateOfSwe   State of the SWE after signature check
 * \param[out]    ErrorCode         Error code
 *
 * \retval        PROG_E_OK         Function is finished with ok
 * \retval        PROG_E_NOT_OK     Function is finished with not ok
 * \retval        PROG_E_PENDING    Function is still running
 *
 * \pre  none
 *
 * \post none
 *
 * \remarks none
 *
 */
/*----------------------------------------------------------------------------*/
FUNC(Prog_ReturnType, ProgSample_CODE) Prog_UserMultiCpuCheckMemoryRun
            (
               CONSTP2VAR ( Dcm_NegativeResponseCodeType, AUTOMATIC, ProgSample_VAR )  ErrorCode
            )
{
   Prog_ReturnType   Prog_Return;

   /* --- User code start --------------------------------------------------- */
   /* A user specific code can be implementeted at this location. Please      */
   /* notice the implementation hints in the UserGuide.                       */
   /* The implementeted example code is for testing and must be removed       */
   /* for production code !!!                                                 */
   /* ----------------------------------------------------------------------- */

   if ( Prog_UserMultiCpuCounterCheckMemory == 0u )
   {
      /* Slave SWE is signature checked */
      *ErrorCode                 = DCM_E_OK;
      Prog_UserMultiCpuState     = 5;
      Prog_Return                = PROG_E_OK;
   }
   else
   {
      Prog_UserMultiCpuCounterCheckMemory--;
      Prog_Return                = PROG_E_PENDING;
   }

   /* --- User code end ----------------------------------------------------- */

   return ( Prog_Return );
} /* end of function Prog_UserMultiCpuCheckMemoryRun */



/*----------------------------------------------------------------------------*/
/**
 * \brief CheckProgDependency slave start
 *
 * Function for programming dependency check of all slave SWE
 *
 * \global_w      Prog_UserMultiCpuCounterCheckProgDependency
 *
 * \param[out]    ErrorCode         Error code
 *
 * \retval        PROG_E_OK         Function is started
 * \retval        PROG_E_NOT_OK     Function can not be started
 *
 * \pre  none
 *
 * \post none
 *
 * \remarks none
 *
 */
/*----------------------------------------------------------------------------*/
FUNC(Prog_ReturnType, ProgSample_CODE) Prog_UserMultiCpuCheckProgDependencyStart
            (
               CONSTP2VAR  ( Dcm_NegativeResponseCodeType, AUTOMATIC, ProgSample_VAR ) ErrorCode
            )
{
   Prog_ReturnType   Prog_Return;

   /* --- User code start --------------------------------------------------- */
   /* A user specific code can be implementeted at this location. Please      */
   /* notice the implementation hints in the UserGuide.                       */
   /* The implementeted example code is for testing and must be removed       */
   /* for production code !!!                                                 */
   /* ----------------------------------------------------------------------- */

   /* MISRA-C:2004 Rule 14.2: see MISRA-Deviations */
   /* PRQA S 3112 1 */
   (void)(ErrorCode);

   Prog_UserMultiCpuCounterCheckProgDependency  = 200u;
   Prog_Return                                  = PROG_E_OK;

   /* --- User code end ----------------------------------------------------- */

   return ( Prog_Return );
} /* end of function Prog_UserMultiCpuCheckProgDependencyRun */



/*----------------------------------------------------------------------------*/
/**
 * \brief CheckProgDependency slave run
 *
 * Function for programming dependency check of all slave SWE
 *
 * \global_rw     Prog_UserMultiCpuCounterCheckProgDependency
 * \global_w      Prog_UserMultiCpuState
 *
 * \param[out]    ValidStateOfSwe   State of the SWE after signature check
 * \param[out]    ErrorCode         Error code
 *
 * \retval        PROG_E_OK         Function is finished with ok
 * \retval        PROG_E_NOT_OK     Function is finished with not ok
 * \retval        PROG_E_PENDING    Function is still running
 *
 * \pre  none
 *
 * \post none
 *
 * \remarks none
 *
 */
/*----------------------------------------------------------------------------*/
FUNC(Prog_ReturnType, ProgSample_CODE) Prog_UserMultiCpuCheckProgDependencyRun
            (
               P2VAR ( Dlog_SweProgDepStateType, AUTOMATIC, ProgSample_VAR)            DepStateOfApplSwes,
               CONSTP2VAR  ( Dcm_NegativeResponseCodeType, AUTOMATIC, ProgSample_VAR ) ErrorCode
            )
{
   Prog_ReturnType   Prog_Return;

   /* --- User code start --------------------------------------------------- */
   /* A user specific code can be implementeted at this location. Please      */
   /* notice the implementation hints in the UserGuide.                       */
   /* The implementeted example code is for testing and must be removed       */
   /* for production code !!!                                                 */
   /* ----------------------------------------------------------------------- */

   if ( Prog_UserMultiCpuCounterCheckProgDependency == 0u )
   {
      /* All slave SWEs are dependency checked */
      *DepStateOfApplSwes        = DLOG_PROG_DEP_CONSISTENT_APPL;
      *ErrorCode                 = DCM_E_OK;
      Prog_UserMultiCpuState     = 6;
      Prog_Return                = PROG_E_OK;
   }
   else
   {
      Prog_UserMultiCpuCounterCheckProgDependency--;
      Prog_Return                = PROG_E_PENDING;
   }

   /* --- User code end ----------------------------------------------------- */

   return ( Prog_Return );
} /* end of function Prog_UserMultiCpuCheckProgDependencyRun */

#endif /* ( PROG_MULTI_CPU_ENABLE == STD_ON ) */


#if ( PROG_VIRTUAL_CPU_ENABLED == STD_ON )

/*----------------------------------------------------------------------------*/
/**
 * \brief EraseMemory virtual CPU start
 *
 * Function for erase a SWE of a virtual CPU
 *
 * \param[in]     Method            Indicated or addressed method
 * \param[in]     FormatIdentifier  Address format
 * \param[in]     DataIn            Data of signed area
 * \param[out]    ErrorCode         Error code
 *
 * \retval        PROG_E_OK         Function is started
 * \retval        PROG_E_NOT_OK     Function can not be started
 *
 * \pre  none
 *
 * \post none
 *
 * \remarks none
 *
 */
/*----------------------------------------------------------------------------*/
extern FUNC( Prog_ReturnType, ProgSample_CODE ) Prog_UserVirtualCpuEraseMemoryStart
            (
               CONST       ( uint8, ProgSample_VAR )                                   SweNumber,
               CONSTP2VAR  ( Dcm_NegativeResponseCodeType, AUTOMATIC, ProgSample_VAR ) ErrorCode
            )
{
   Prog_ReturnType   Prog_Return;

   /* --- User code start --------------------------------------------------- */
   /* A user specific code can be implementeted at this location. Please      */
   /* notice the implementation hints in the UserGuide.                       */
   /* The implementeted example code is for testing and must be removed       */
   /* for production code !!!                                                 */
   /* ----------------------------------------------------------------------- */

   uint32         StartAddress;
   uint32         DataLength;

   const uint8    SgbmId[8] = { 0x0D, 0x7e, 0x00, 0x00, 0x25, 0xC8, 0x00, 0x00 };

   Prog_Return                            = PROG_E_NOT_OK;

   switch ( Method )
   {
      case ERASE_MEMORY_METHOD_ADDRESSED:
         if ( FormatIdentifier == 0x44 )
         {
            /* Get physical address of SWE */
            StartAddress  = BUtil_Make32Bit( DataIn[0], DataIn[1], DataIn[2], DataIn[3] );
            DataLength    = BUtil_Make32Bit( DataIn[4], DataIn[5], DataIn[6], DataIn[7] );
            Prog_Return                            = PROG_E_OK;
         }
         break;

      case ERASE_MEMORY_METHOD_INDICATED:
         if ( FormatIdentifier == 0x40 )
         {
            /* Get logical address of SWE */
            StartAddress = BUtil_Make32Bit( DataIn[0], DataIn[1], DataIn[2], DataIn[3] );
            if ( ( StartAddress == 0x0207FE44 ) ||
                 ( StartAddress == 0x020FFE44 ) )
            {
               Prog_Return                            = PROG_E_OK;
            }
         }
         break;

      case ERASE_MEMORY_METHOD_SGBMID:
         if ( memcmp
               (
                  DataIn,
                  SgbmId,
                  DLOG_SGBM_ID_LENGTH
               ) == 0x00
            )
         {
            Prog_Return                            = PROG_E_OK;
         }
         break;

      default:
         break;
   }

   if ( Prog_Return == PROG_E_NOT_OK )
   {
      /* It is only allowed to delete a SWFK */
      *ErrorCode  = DCM_E_REQUESTOUTOFRANGE;
   }

   /* --- User code end ----------------------------------------------------- */

   return ( Prog_Return );
} /* end of function Prog_UserVirtualCpuEraseMemoryStart */



/*----------------------------------------------------------------------------*/
/**
 * \brief EraseMemory virtual CPU end
 *
 * Function for erase a SWE of a virtual CPU
 *
 * \param[out]    ErrorCode         Error code
 *
 * \retval        PROG_E_OK         Function is finished with ok
 * \retval        PROG_E_NOT_OK     Function is finished with not ok
 * \retval        PROG_E_PENDING    Function is still running
 *
 * \pre  none
 *
 * \post none
 *
 * \remarks none
 *
 */
/*----------------------------------------------------------------------------*/
FUNC(Prog_ReturnType, ProgSample_CODE) Prog_UserVirtualCpuEraseMemoryRun
            (
               CONSTP2VAR  ( Dcm_NegativeResponseCodeType, AUTOMATIC, ProgSample_VAR ) ErrorCode
            )
{
   Prog_ReturnType   Prog_Return;

   /* --- User code start --------------------------------------------------- */
   /* A user specific code can be implementeted at this location. Please      */
   /* notice the implementation hints in the UserGuide.                       */
   /* The implementeted example code is for testing and must be removed       */
   /* for production code !!!                                                 */
   /* ----------------------------------------------------------------------- */

   Prog_Return       = PROG_E_OK;

   /* --- User code end ----------------------------------------------------- */

   return ( Prog_Return );
} /* end of function Prog_UserVirtualCpuEraseMemoryRun */



/*----------------------------------------------------------------------------*/
/**
 * \brief RequestDownload virtual start
 *
 * Function for start of data download of a virtual SWE
 *
 * \global_r      Prog_UserNextDataStartAddress
 *
 * \param[in]     DataFormatIdentifier    Address format
 * \param[in]     MemoryAddress           First address of data that should be programmed
 * \param[in]     Size                    Number of all data that should be programmed
 * \param[out]    ErrorCode               Error code
 *
 * \retval        PROG_E_OK               Function is started
 * \retval        PROG_E_NOT_OK           Function can not be started
 *
 * \pre  none
 *
 * \post none
 *
 * \remarks none
 *
 */
/*----------------------------------------------------------------------------*/
FUNC(Prog_ReturnType, ProgSample_CODE) Prog_UserVirtualCpuRequestDownloadStart
            (
               CONST       ( uint8,  ProgSample_VAR )                                  DataFormatIdentifier,
               CONST       ( uint32, ProgSample_VAR )                                  MemoryAddress,
               CONST       ( uint32, ProgSample_VAR )                                  MemorySize,
               CONSTP2VAR  ( Dcm_NegativeResponseCodeType, AUTOMATIC, ProgSample_VAR ) ErrorCode
            )
{
   Prog_ReturnType   Prog_Return;

   /* --- User code start --------------------------------------------------- */
   /* A user specific code can be implementeted at this location. Please      */
   /* notice the implementation hints in the UserGuide.                       */
   /* The implementeted example code is for testing and must be removed       */
   /* for production code !!!                                                 */
   /* ----------------------------------------------------------------------- */

   uint32            EndAddress;

   /* MISRA-C:2004 Rule 14.2: see MISRA-Deviations */
   /* PRQA S 3112 2 */
   (void)(DataFormatIdentifier);
   (void)(ErrorCode);

   Prog_UserNextDataStartAddress             = MemoryAddress + MemorySize;
   EndAddress                                = Prog_UserNextDataStartAddress - 1u;

   /* SWE 8 */
   if ( ( MemoryAddress >= 0x01000000 ) &&
        ( EndAddress    <= 0x010FFFFF ) )
   {
      *ErrorCode     = DCM_E_OK;
      Prog_Return    = PROG_E_OK;
   }
   else
   {
      *ErrorCode     = DCM_E_REQUESTOUTOFRANGE;
      Prog_Return    = PROG_E_NOT_OK;
   }

   /* --- User code end ----------------------------------------------------- */

   return ( Prog_Return );
} /* end of function Prog_UserVirtualCpuRequestDownloadStart */



/*----------------------------------------------------------------------------*/
/**
 * \brief RequestDownload virtual end
 *
 * Function for start of data download of a virtual SWE
 *
 * \global_r      Prog_StubUserVirtualCpuRequestDownloadRunRetVal
 *
 * \retval        PROG_E_OK         Function is finished with ok
 * \retval        PROG_E_NOT_OK     Function is finished with not ok
 * \retval        PROG_E_PENDING    Function is still running
 *
 * \pre  none
 *
 * \post none
 *
 * \remarks none
 *
 */
/*----------------------------------------------------------------------------*/
FUNC(Prog_ReturnType, ProgSample_CODE) Prog_UserVirtualCpuRequestDownloadRun
            (
               void
            )
{
   Prog_ReturnType   Prog_Return;

   /* --- User code start --------------------------------------------------- */
   /* A user specific code can be implementeted at this location. Please      */
   /* notice the implementation hints in the UserGuide.                       */
   /* The implementeted example code is for testing and must be removed       */
   /* for production code !!!                                                 */
   /* ----------------------------------------------------------------------- */

   Prog_Return = PROG_E_OK;

   /* --- User code end ----------------------------------------------------- */

   return ( Prog_Return );
} /* end of function Prog_UserVirtualCpuRequestDownloadRun */



/*----------------------------------------------------------------------------*/
/**
 * \brief TransferData virtual start
 *
 * Function for data transfer of a virtual SWE
 *
 * \param[in]     MemoryIdentifier  Identifer for different Memory types
 * \param[in]     Data              Data that should be programmed
 * \param[in]     Size              Number of data that should be programmed
 * \param[out]    ErrorCode         Error code
 *
 * \retval        PROG_E_OK         Function is started
 * \retval        PROG_E_NOT_OK     Function can not be started
 *
 * \pre  none
 *
 * \post none
 *
 * \remarks none
 *
 */
/*----------------------------------------------------------------------------*/
FUNC(Prog_ReturnType, ProgSample_CODE) Prog_UserVirtualCpuTransferDataStart
            (
               uint8                                                             MemoryIdentifier,
               P2CONST     ( uint8, AUTOMATIC, ProgSample_CONST)                 Data,
               CONST       ( uint32, ProgSample_VAR )                                  Size,
               CONSTP2VAR  ( Dcm_NegativeResponseCodeType, AUTOMATIC, ProgSample_VAR ) ErrorCode
            )
{
   Prog_ReturnType   Prog_Return;

   /* --- User code start --------------------------------------------------- */
   /* A user specific code can be implementeted at this location. Please      */
   /* notice the implementation hints in the UserGuide.                       */
   /* The implementeted example code is for testing and must be removed       */
   /* for production code !!!                                                 */
   /* ----------------------------------------------------------------------- */

   /* MISRA-C:2004 Rule 14.2: see MISRA-Deviations */
   /* PRQA S 3112 3 */
   (void)(MemoryIdentifier);
   (void)(Data);
   (void)(Size);

   Prog_Return       = PROG_E_OK;
   *ErrorCode        = DCM_E_OK;

   /* --- User code end ----------------------------------------------------- */

   return ( Prog_Return );
} /* end of function Prog_UserVirtualCpuTransferDataStart */



/*----------------------------------------------------------------------------*/
/**
 * \brief TransferData virtual run
 *
 * Function for data transfer of a virtual SWE
 *
 * \param[out]     NextDataStartAddress    Address of data that should be programmed with the next TrasferData
 *
 * \retval        PROG_E_OK               Function is finished with ok
 * \retval        PROG_E_NOT_OK           Function is finished with not ok
 * \retval        PROG_E_PENDING          Function is still running
 *
 * \pre  none
 *
 * \post none
 *
 * \remarks none
 *
 */
/*----------------------------------------------------------------------------*/
FUNC(Prog_ReturnType, ProgSample_CODE) Prog_UserVirtualCpuTransferDataRun
            (
               P2VAR       ( uint32, AUTOMATIC, ProgSample_VAR)   NextDataStartAddress
            )
{
   Prog_ReturnType   Prog_Return;

   /* --- User code start --------------------------------------------------- */
   /* A user specific code can be implementeted at this location. Please      */
   /* notice the implementation hints in the UserGuide.                       */
   /* The implementeted example code is for testing and must be removed       */
   /* for production code !!!                                                 */
   /* ----------------------------------------------------------------------- */

   Prog_Return = PROG_E_OK;
   /* Data programmed into Slave */
   *NextDataStartAddress   = 0x01040000ul;

   /* --- User code end ----------------------------------------------------- */

   return ( Prog_Return );
} /* end of function Prog_UserVirtualCpuTransferDataRun */



/*----------------------------------------------------------------------------*/
/**
 * \brief RequestTransferExit virtual start
 *
 * Function for exit data transfer of a virtual SWE
 *
 * \retval        PROG_E_OK         Function is started
 * \retval        PROG_E_NOT_OK     Function can not be started
 *
 * \pre  none
 *
 * \post none
 *
 * \remarks none
 *
 */
/*----------------------------------------------------------------------------*/
FUNC(Prog_ReturnType, ProgSample_CODE) Prog_UserVirtualCpuRequestTransferExitStart
            (
               CONSTP2VAR  ( Dcm_NegativeResponseCodeType, AUTOMATIC, ProgSample_VAR ) ErrorCode
            )
{
   Prog_ReturnType   Prog_Return;

   /* --- User code start --------------------------------------------------- */
   /* A user specific code can be implementeted at this location. Please      */
   /* notice the implementation hints in the UserGuide.                       */
   /* The implementeted example code is for testing and must be removed       */
   /* for production code !!!                                                 */
   /* ----------------------------------------------------------------------- */

   *ErrorCode     = DCM_E_OK;
   Prog_Return    = PROG_E_OK;

   /* --- User code end ----------------------------------------------------- */

   return ( Prog_Return );
} /* end of function Prog_UserVirtualCpuRequestTransferExitStart */



/*----------------------------------------------------------------------------*/
/**
 * \brief RequestTransferExit virtual run
 *
 * Function for exit data transfer of a virtual SWE
 *
 * \global_r      Prog_StubUserMVirtualCpuRequestTransferExitRunRetVal
 *
 * \retval        PROG_E_OK         Function is finished with ok
 * \retval        PROG_E_NOT_OK     Function is finished with not ok
 * \retval        PROG_E_PENDING    Function is still running
 *
 * \pre  none
 *
 * \post none
 *
 * \remarks none
 *
 */
/*----------------------------------------------------------------------------*/
FUNC(Prog_ReturnType, ProgSample_CODE) Prog_UserVirtualCpuRequestTransferExitRun
            (
               CONSTP2VAR  ( Dcm_NegativeResponseCodeType, AUTOMATIC, ProgSample_VAR ) ErrorCode
            )
{
   Prog_ReturnType   Prog_Return;

   /* --- User code start --------------------------------------------------- */
   /* A user specific code can be implementeted at this location. Please      */
   /* notice the implementation hints in the UserGuide.                       */
   /* The implementeted example code is for testing and must be removed       */
   /* for production code !!!                                                 */
   /* ----------------------------------------------------------------------- */

   *ErrorCode     = DCM_E_OK;
   Prog_Return    = PROG_E_OK;

   /* --- User code end ----------------------------------------------------- */

   return ( Prog_Return );
} /* end of function Prog_UserVirtualCpuRequestTransferExitRun */



/*----------------------------------------------------------------------------*/
/**
 * \brief CheckMemory virtual start
 *
 * Function for signature check of a virtual SWE
 *
 * \param[in]     BlockAddress      Address of the SWE
 * \param[out]    ErrorCode         Error code
 *
 * \retval        PROG_E_OK         Function is started
 * \retval        PROG_E_NOT_OK     Function can not be started
 *
 * \pre  none
 *
 * \post none
 *
 * \remarks none
 *
 */
/*----------------------------------------------------------------------------*/
FUNC(Prog_ReturnType, ProgSample_CODE) Prog_UserVirtualCpuCheckMemoryStart
            (
               uint32                                                            BlockAddress,
               CONSTP2VAR  ( Dcm_NegativeResponseCodeType, AUTOMATIC, ProgSample_VAR ) ErrorCode
            )
{
   Prog_ReturnType   Prog_Return;

   /* --- User code start --------------------------------------------------- */
   /* A user specific code can be implementeted at this location. Please      */
   /* notice the implementation hints in the UserGuide.                       */
   /* The implementeted example code is for testing and must be removed       */
   /* for production code !!!                                                 */
   /* ----------------------------------------------------------------------- */

   if ( BlockAddress == 0x0101FE44 )
   {
      *ErrorCode                             = DCM_E_OK;
      Prog_Return                            = PROG_E_OK;
   }
   else
   {
      *ErrorCode                             = DCM_E_REQUESTOUTOFRANGE;
      Prog_Return                            = PROG_E_NOT_OK;
   }

   /* --- User code end ----------------------------------------------------- */

   return ( Prog_Return );
} /* end of function Prog_UserVirtualCpuCheckMemoryStart */



/*----------------------------------------------------------------------------*/
/**
 * \brief CheckMemory virtual run
 *
 * Function for signature check of a virtual SWE
 *
 * \param[out]    ValidStateOfSwe   State of the SWE after signature check
 * \param[out]    ErrorCode         Error code
 *
 * \retval        PROG_E_OK         Function is finished with ok
 * \retval        PROG_E_NOT_OK     Function is finished with not ok
 * \retval        PROG_E_PENDING    Function is still running
 *
 * \pre  none
 *
 * \post none
 *
 * \remarks none
 *
 */
/*----------------------------------------------------------------------------*/
FUNC(Prog_ReturnType, ProgSample_CODE) Prog_UserVirtualCpuCheckMemoryRun
            (
               CONSTP2VAR ( Dcm_NegativeResponseCodeType, AUTOMATIC, ProgSample_VAR )  ErrorCode
            )
{
   Prog_ReturnType   Prog_Return;

   /* --- User code start --------------------------------------------------- */
   /* A user specific code can be implementeted at this location. Please      */
   /* notice the implementation hints in the UserGuide.                       */
   /* The implementeted example code is for testing and must be removed       */
   /* for production code !!!                                                 */
   /* ----------------------------------------------------------------------- */

   /* Slave SWE is signature checked */
   *ErrorCode        = DCM_E_OK;
   Prog_Return       = PROG_E_OK;

   /* --- User code end ----------------------------------------------------- */

   return ( Prog_Return );
} /* end of function Prog_UserVirtualCpuCheckMemoryRun */



/*----------------------------------------------------------------------------*/
/**
 * \brief CheckProgDependency virtual start
 *
 * Function for programming dependency check of all virtual SWE
 *
 * \param[out]    ErrorCode         Error code
 *
 * \retval        PROG_E_OK         Function is started
 * \retval        PROG_E_NOT_OK     Function can not be started
 *
 * \pre  none
 *
 * \post none
 *
 * \remarks none
 *
 */
/*----------------------------------------------------------------------------*/
FUNC(Prog_ReturnType, ProgSample_CODE) Prog_UserVirtualCpuCheckProgDependencyStart
            (
               CONSTP2VAR  ( Dcm_NegativeResponseCodeType, AUTOMATIC, ProgSample_VAR ) ErrorCode
            )
{
   Prog_ReturnType   Prog_Return;

   /* --- User code start --------------------------------------------------- */
   /* A user specific code can be implementeted at this location. Please      */
   /* notice the implementation hints in the UserGuide.                       */
   /* The implementeted example code is for testing and must be removed       */
   /* for production code !!!                                                 */
   /* ----------------------------------------------------------------------- */

   *ErrorCode        = DCM_E_OK;
   Prog_Return       = PROG_E_OK;

   /* --- User code end ----------------------------------------------------- */

   return ( Prog_Return );
} /* end of function Prog_UserVirtualCpuCheckProgDependencyStart */



/*----------------------------------------------------------------------------*/
/**
 * \brief CheckProgDependency virtual run
 *
 * Function for programming dependency check of all virtual SWE
 *
 * \param[out]    DepStateOfApplSwes   State of the SWE after signature check
 * \param[out]    ErrorCode            Error code
 *
 * \retval        PROG_E_OK            Function is finished with ok
 * \retval        PROG_E_NOT_OK        Function is finished with not ok
 * \retval        PROG_E_PENDING       Function is still running
 *
 * \pre  none
 *
 * \post none
 *
 * \remarks none
 *
 */
/*----------------------------------------------------------------------------*/
FUNC(Prog_ReturnType, ProgSample_CODE) Prog_UserVirtualCpuCheckProgDependencyRun
            (
               P2VAR ( Dlog_SweProgDepStateType, AUTOMATIC, ProgSample_VAR)            DepStateOfApplSwes,
               CONSTP2VAR  ( Dcm_NegativeResponseCodeType, AUTOMATIC, ProgSample_VAR ) ErrorCode
            )
{
   Prog_ReturnType   Prog_Return;

   /* --- User code start --------------------------------------------------- */
   /* A user specific code can be implementeted at this location. Please      */
   /* notice the implementation hints in the UserGuide.                       */
   /* The implementeted example code is for testing and must be removed       */
   /* for production code !!!                                                 */
   /* ----------------------------------------------------------------------- */

   /* All slave SWEs are dependency checked */
   *DepStateOfApplSwes        = Prog_StubUserProgDepState;
   if (Prog_StubUserProgDepState != DLOG_PROG_DEP_CONSISTENT_APPL)
   {
      Prog_StubUserProgDepState = DLOG_PROG_DEP_CONSISTENT_APPL; /* recover the initial value */
   }
   *ErrorCode                 = DCM_E_OK;
   Prog_Return                = PROG_E_OK;

   /* --- User code end ----------------------------------------------------- */

   return ( Prog_Return );
} /* end of function Prog_UserVirtualCpuCheckProgDependencyRun */

#endif /* PROG_VIRTUAL_CPU_ENABLED == STD_ON */


#if ( PROG_HTTP_ENABLE == STD_ON )

/*----------------------------------------------------------------------------*/
/**
 * \brief Get block Address for SGBMID
 *
 * Function for gets block Address and SWE ID for SGBMID. If no SWE is found the
 * ErrorCode shall be set to DCM_E_GENERALPROGRAMMINGFAILURE.
 *
 * \param[in]     DataIn               Pointer to SGBMID
 * \param[out]    BlockAddress         Pointer for the descriptor address
 * \param[out]    ErrorCode            Error code
 *
 * \pre  none
 *
 * \post none
 *
 * \remarks Prog_ProgrammingParams.SelectedSwe must be set to the ID of the determined
 * \remarks address. If no valid SWE is found variable ErrorCode shall be set to
 * \remarks DCM_E_GENERALPROGRAMMINGFAILURE.
 *
 */
/*----------------------------------------------------------------------------*/
FUNC( void, ProgSample_CODE ) Prog_UserSgbmIdToBlockAddress
            (
               P2CONST     ( uint8, AUTOMATIC, ProgSample_VAR)                         DataIn,
               P2VAR       ( uint32, AUTOMATIC, ProgSample_VAR )                       BlockAddress,
               CONSTP2VAR  ( Dcm_NegativeResponseCodeType, AUTOMATIC, ProgSample_VAR ) ErrorCode
            )
{
   /* --- User code start --------------------------------------------------- */
   /* A user specific code can be implementeted at this location. Please      */
   /* notice the implementation hints in the UserGuide.                       */
   /* The implementeted example code is for testing and must be removed       */
   /* for production code !!!                                                 */
   /* ----------------------------------------------------------------------- */

   *ErrorCode                          = DCM_E_OK;

   /* --- User code end ----------------------------------------------------- */

   return;
}

#endif /* PROG_HTTP_ENABLE == STD_ON */

/* PRQA S 5087 2 */
#define ProgSample_STOP_SEC_CODE
#include "ProgSample_MemMap.h"

/*--- End of file ------------------------------------------------------------*/


