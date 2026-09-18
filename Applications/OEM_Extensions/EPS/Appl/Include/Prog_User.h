/*----------------------------------------------------------------------------*/
/**
*  \file
*
*  \brief       BMW Module ProgSample
*
*  Declaration of callouts for module Prog.
*
*  \project     BMW AUTOSAR Core
*
*  \par         To be changed by user:
*               no
*
*  \copyright   BMW AG 2012 - 2015
*
*  \version     3.3.0
*
*  \remarks     ---
*
*/
/*----------------------------------------------------------------------------*/
/*
   MISRA-C:2004 Rule 19.1: including Template_MemMap.h is necessary throughout
   the file according to memory abstraction. See PRQA 5087.
*/

/*------------------------------------------------------------------------------
|  DISCLAIMER:                                                                 |
|  As the program is not fully tested and qualified for series production      |
|  use, the user shall not be entitled to use the program in connection        |
|  with any series production. BMW provides the user with the program only     |
|  as sample application (for testing purposes).                               |
|                                                                              |
-------------------------------------------------------------------------------*/

#ifndef I_KNOW_THAT_THIS_CODE_IS_NOT_FOR_PRODUCTION
#error "the program must not be used in series production software"
#endif


#ifndef PROG_USER_H
#define PROG_USER_H

/*------------------------------------------------------------------------------
                      Include Section
-------------------------------------------------------------------------------*/

#include "Std_Types.h"                       /* AUTOSAR Standard Types         */
#include "Prog_Version.h"                    /* Prog version file              */
#include "Prog_Cfg.h"
#include "Prog_Internal.h"             /* Contains Prog internal functions     */
#include "Dlog_Cfg.h"
#include "Dlog_Swe.h"
#include "Dlog_SweGet.h"
#include "Cal.h"


/*------------------------------------------------------------------------------
                      Macros
-------------------------------------------------------------------------------*/

/* check version of the module */
#if (!Prog_CHECK_VERSION(3,3,1))
   #error "Version of Prog_User.h does not match the version of the module!"
#endif


/*------------------------------------------------------------------------------
                      Data Types
-------------------------------------------------------------------------------*/

/* empty */


/*------------------------------------------------------------------------------
                      Global Variables
-------------------------------------------------------------------------------*/

/* empty */


/*------------------------------------------------------------------------------
                      Global Constants
-------------------------------------------------------------------------------*/

/* empty */


/*------------------------------------------------------------------------------
                      Global Function Declarations
-------------------------------------------------------------------------------*/

/* PRQA S 5087 2 */
#define Prog_START_SEC_CODE
#include "Prog_MemMap.h"

extern FUNC( void, Prog_CODE ) Prog_UserCallbackFreeTimerStart
            (
               void
            );


extern FUNC( uint32, Prog_CODE ) Prog_UserCallbackFreeTimerGetTime
            (
               void
            );


extern FUNC( uint32, Prog_CODE ) Prog_UserCallbackRandomNumber
            (
               void
            );


extern FUNC( Prog_ReturnType, Prog_CODE ) Prog_UserCallbackCheckMemoryStart
            (
               void
            );


extern FUNC( Prog_ReturnType, Prog_CODE ) Prog_UserCallbackCheckMemoryRun
            (
               void
            );


extern FUNC( void, Prog_CODE ) Prog_UserCallbackProgrammingDependenciesCheck
            (
               CONSTP2VAR( Dlog_SweProgDepStateType, AUTOMATIC, Prog_VAR )  UserProgDepState
            );


extern FUNC( void, Prog_CODE ) Prog_UserCallbackBluBackupNvData
            (
               void
            );


extern FUNC(Std_ReturnType, Prog_CODE) Rte_DcmManufacturerNotification
            (
               uint8                                                                   Sid,
               P2VAR ( uint8, AUTOMATIC, Prog_VAR)                               RequestData,
               uint16                                                                  DataSize,
               uint8                                                                   ReqType,
               uint16                                                                  SourceAddress,
               P2VAR ( Dcm_NegativeResponseCodeType, AUTOMATIC, Prog_VAR )       ErrorCode
            );


#if ( PROG_MULTI_CPU_ENABLE == STD_ON )

extern FUNC(Prog_ReturnType, Prog_CODE) Prog_UserMultiCpuEraseMemoryStart
            (
               CONST       ( uint8, Prog_VAR )                                   Method,
               CONST       ( uint8, Prog_VAR )                                   FormatIdentifier,
               CONSTP2CONST( uint8, AUTOMATIC, Prog_VAR )                        DataIn,
               CONSTP2VAR  ( Dcm_NegativeResponseCodeType, AUTOMATIC, Prog_VAR ) ErrorCode
            );


extern FUNC(Prog_ReturnType, Prog_CODE) Prog_UserMultiCpuEraseMemoryRun
            (
               CONSTP2VAR  ( Dcm_NegativeResponseCodeType, AUTOMATIC, Prog_VAR ) ErrorCode
            );


extern FUNC(Prog_ReturnType, Prog_CODE) Prog_UserMultiCpuRequestDownloadStart
            (
               CONST       ( uint8,  Prog_VAR )                                  DataFormatIdentifier,
               CONST       ( uint32, Prog_VAR )                                  MemoryAddress,
               CONST       ( uint32, Prog_VAR )                                  MemorySize,
               CONSTP2VAR  ( Dcm_NegativeResponseCodeType, AUTOMATIC, Prog_VAR ) ErrorCode
            );


extern FUNC(Prog_ReturnType, Prog_CODE) Prog_UserMultiCpuRequestDownloadRun
            (
               void
            );


extern FUNC(Prog_ReturnType, Prog_CODE) Prog_UserMultiCpuTransferDataStart
            (
               uint8                                                                   MemoryIdentifier,
               P2CONST     ( uint8, AUTOMATIC, Prog_CONST)                       Data,
               CONST       ( uint32, Prog_VAR )                                  Size,
               CONSTP2VAR  ( Dcm_NegativeResponseCodeType, AUTOMATIC, Prog_VAR ) ErrorCode
            );


extern FUNC(Prog_ReturnType, Prog_CODE) Prog_UserMultiCpuTransferDataRun
            (
               P2VAR       ( uint32, AUTOMATIC, Prog_VAR)                        NextDataStartAddress
            );


extern FUNC(Prog_ReturnType, Prog_CODE) Prog_UserMultiCpuRequestTransferExitStart
            (
               CONSTP2VAR  ( Dcm_NegativeResponseCodeType, AUTOMATIC, Prog_VAR ) ErrorCode
            );


extern FUNC(Prog_ReturnType, Prog_CODE) Prog_UserMultiCpuRequestTransferExitRun
            (
               CONSTP2VAR  ( Dcm_NegativeResponseCodeType, AUTOMATIC, Prog_VAR ) ErrorCode
            );


extern FUNC(Prog_ReturnType, Prog_CODE) Prog_UserMultiCpuCheckMemoryStart
            (
               uint32                                                                  BlockAddress,
               CONSTP2VAR  ( Dcm_NegativeResponseCodeType, AUTOMATIC, Prog_VAR ) ErrorCode
            );


extern FUNC(Prog_ReturnType, Prog_CODE) Prog_UserMultiCpuCheckMemoryRun
            (
               CONSTP2VAR  ( Dcm_NegativeResponseCodeType, AUTOMATIC, Prog_VAR ) ErrorCode
            );


extern FUNC(Prog_ReturnType, Prog_CODE) Prog_UserMultiCpuCheckProgDependencyStart
            (
               CONSTP2VAR  ( Dcm_NegativeResponseCodeType, AUTOMATIC, Prog_VAR ) ErrorCode
            );


extern FUNC(Prog_ReturnType, Prog_CODE) Prog_UserMultiCpuCheckProgDependencyRun
            (
               P2VAR ( Dlog_SweProgDepStateType, AUTOMATIC, Prog_VAR)            DepStateOfApplSwes,
               CONSTP2VAR  ( Dcm_NegativeResponseCodeType, AUTOMATIC, Prog_VAR ) ErrorCode
            );

#endif /* ( PROG_MULTI_CPU_ENABLE == STD_ON ) */


#if ( PROG_VIRTUAL_CPU_ENABLED == STD_ON )

extern FUNC( Prog_ReturnType, Prog_CODE ) Prog_UserVirtualCpuEraseMemoryStart
            (
               CONST       ( uint8, Prog_VAR )                                   SweNumber,
               CONSTP2VAR  ( Dcm_NegativeResponseCodeType, AUTOMATIC, Prog_VAR ) ErrorCode
            );


extern FUNC(Prog_ReturnType, Prog_CODE) Prog_UserVirtualCpuEraseMemoryRun
            (
               CONSTP2VAR  ( Dcm_NegativeResponseCodeType, AUTOMATIC, Prog_VAR ) ErrorCode
            );


extern FUNC(Prog_ReturnType, Prog_CODE) Prog_UserVirtualCpuRequestDownloadStart
            (
               CONST       ( uint8,  Prog_VAR )                                  DataFormatIdentifier,
               CONST       ( uint32, Prog_VAR )                                  MemoryAddress,
               CONST       ( uint32, Prog_VAR )                                  MemorySize,
               CONSTP2VAR  ( Dcm_NegativeResponseCodeType, AUTOMATIC, Prog_VAR ) ErrorCode
            );


extern FUNC(Prog_ReturnType, Prog_CODE) Prog_UserVirtualCpuRequestDownloadRun
            (
               void
            );


extern FUNC(Prog_ReturnType, Prog_CODE) Prog_UserVirtualCpuTransferDataStart
            (
               uint8                                                                   MemoryIdentifier,
               P2CONST     ( uint8, AUTOMATIC, Prog_CONST)                       Data,
               CONST       ( uint32, Prog_VAR )                                  Size,
               CONSTP2VAR  ( Dcm_NegativeResponseCodeType, AUTOMATIC, Prog_VAR ) ErrorCode
            );


extern FUNC(Prog_ReturnType, Prog_CODE) Prog_UserVirtualCpuTransferDataRun
            (
               P2VAR       ( uint32, AUTOMATIC, Prog_VAR)                        NextDataStartAddress
            );


extern FUNC(Prog_ReturnType, Prog_CODE) Prog_UserVirtualCpuRequestTransferExitStart
            (
               CONSTP2VAR  ( Dcm_NegativeResponseCodeType, AUTOMATIC, Prog_VAR ) ErrorCode
            );


extern FUNC(Prog_ReturnType, Prog_CODE) Prog_UserVirtualCpuRequestTransferExitRun
            (
               CONSTP2VAR  ( Dcm_NegativeResponseCodeType, AUTOMATIC, Prog_VAR ) ErrorCode
            );


extern FUNC(Prog_ReturnType, Prog_CODE) Prog_UserVirtualCpuCheckMemoryStart
            (
               uint32                                                                  BlockAddress,
               CONSTP2VAR  ( Dcm_NegativeResponseCodeType, AUTOMATIC, Prog_VAR ) ErrorCode
            );


extern FUNC(Prog_ReturnType, Prog_CODE) Prog_UserVirtualCpuCheckMemoryRun
            (
               CONSTP2VAR  ( Dcm_NegativeResponseCodeType, AUTOMATIC, Prog_VAR ) ErrorCode
            );


extern FUNC(Prog_ReturnType, Prog_CODE) Prog_UserVirtualCpuCheckProgDependencyStart
            (
               CONSTP2VAR  ( Dcm_NegativeResponseCodeType, AUTOMATIC, Prog_VAR ) ErrorCode
            );


extern FUNC(Prog_ReturnType, Prog_CODE) Prog_UserVirtualCpuCheckProgDependencyRun
            (
               P2VAR ( Dlog_SweProgDepStateType, AUTOMATIC, Prog_VAR)            DepStateOfApplSwes,
               CONSTP2VAR  ( Dcm_NegativeResponseCodeType, AUTOMATIC, Prog_VAR ) ErrorCode
            );

#endif /* PROG_VIRTUAL_CPU_ENABLED == STD_ON */


#if ( PROG_HTTP_ENABLE == STD_ON )

extern FUNC( void, Prog_CODE ) Prog_UserSgbmIdToBlockAddress
            (
               P2CONST     ( uint8, AUTOMATIC, Prog_VAR)                         DataIn,
               P2VAR       ( uint32, AUTOMATIC, Prog_VAR )                       BlockAddress,
               CONSTP2VAR  ( Dcm_NegativeResponseCodeType, AUTOMATIC, Prog_VAR ) ErrorCode
            );

#endif /* PROG_HTTP_ENABLE == STD_ON */

/* PRQA S 5087 2 */
#define Prog_STOP_SEC_CODE
#include "Prog_MemMap.h"

#endif /* PROG_USER_H */

/*--- End of file ------------------------------------------------------------*/
