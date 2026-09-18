/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Rte_BswM.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.16.0
 *                 RTE Core Version 1.16.0
 *       License:  Unlimited license CBD1700369 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <BswM>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_BSWM_H
# define _RTE_BSWM_H

# ifndef RTE_CORE
#  ifdef RTE_APPLICATION_HEADER_FILE
#   error Multiple application header files included.
#  endif
#  define RTE_APPLICATION_HEADER_FILE
#  ifndef RTE_PTR2ARRAYBASETYPE_PASSING
#   define RTE_PTR2ARRAYBASETYPE_PASSING
#  endif
# endif

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_BswM_Type.h"
# include "Rte_DataHandleType.h"


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_Provide_MRSP_Bs_requestMode (2U)
#  define Rte_InitValue_Provide_MSRP_Darh_requestMode (2U)
#  define Rte_InitValue_Provide_MSRP_Dlog_requestMode (2U)
#  define Rte_InitValue_Provide_MSRP_IntegrationSample_EcuRunMode_IntegrationSample_EcuRunStateRequestMode (1U)
#  define Rte_InitValue_Provide_MSRP_Omc_requestMode (2U)
#  define Rte_InitValue_Provide_MSRP_StdDiag_requestMode (2U)
#  define Rte_InitValue_Provide_MSRP_Systime_requestMode (2U)
#  define Rte_InitValue_Request_ESH_PostRunRequest_0_requestedMode (0U)
#  define Rte_InitValue_Request_ESH_PostRunRequest_1_requestedMode (0U)
#  define Rte_InitValue_Request_ESH_RunRequest_0_requestedMode (0U)
#  define Rte_InitValue_Request_ESH_RunRequest_1_requestedMode (0U)
#  define Rte_InitValue_Request_SWCModeReq_StdDiag_CommunicationModeDeclarationGroup_requestedMode (2U)
# endif


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_BswM_Request_ESH_PostRunRequest_0_requestedMode(P2VAR(BswM_ESH_RunRequest, AUTOMATIC, RTE_BSWM_APPL_VAR) data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_BswM_Request_ESH_PostRunRequest_1_requestedMode(P2VAR(BswM_ESH_RunRequest, AUTOMATIC, RTE_BSWM_APPL_VAR) data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_BswM_Request_ESH_RunRequest_0_requestedMode(P2VAR(BswM_ESH_RunRequest, AUTOMATIC, RTE_BSWM_APPL_VAR) data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_BswM_Request_ESH_RunRequest_1_requestedMode(P2VAR(BswM_ESH_RunRequest, AUTOMATIC, RTE_BSWM_APPL_VAR) data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_BswM_Request_SWCModeReq_StdDiag_CommunicationModeDeclarationGroup_requestedMode(P2VAR(NormalCommunicationModeType, AUTOMATIC, RTE_BSWM_APPL_VAR) data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_BswM_Provide_MRSP_Bs_requestMode(Bs_LifeCycleRequestType data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_BswM_Provide_MSRP_Darh_requestMode(Darh_LifeCycleRequestType data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_BswM_Provide_MSRP_Dlog_requestMode(Dlog_LifeCycleRequestType data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_BswM_Provide_MSRP_IntegrationSample_EcuRunMode_IntegrationSample_EcuRunStateRequestMode(IntegrationSample_EcuRunStateModeRequestType data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_BswM_Provide_MSRP_Omc_requestMode(Omc_LifeCycleRequestType data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_BswM_Provide_MSRP_StdDiag_requestMode(StdDiag_LifeCycleRequestType data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_BswM_Provide_MSRP_Systime_requestMode(SysTime_LifeCycleRequestType data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Dcm_DiagnosticSessionControlType, RTE_CODE) Rte_Mode_BswM_Notification_BSWModeSwitch_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Dcm_EcuResetType, RTE_CODE) Rte_Mode_BswM_Notification_BSWModeSwitch_DcmEcuReset_DcmEcuReset(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(BswM_ESH_Mode, RTE_CODE) Rte_Mode_BswM_Notification_ESH_ModeNotification_BswM_MDGP_ESH_Mode(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Dcm_CommunicationModeType, RTE_CODE) Rte_Mode_BswM_Notification_SWCModeSwitch_DcmCommunicationControl_ComMConf_ComMChannel_BAC4_FlexRay_8e151c3c_DcmCommunicationControl_ComMConf_ComMChannel_A_FlexRay_5b5a9ac2(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(IntegrationSample_EcuRunStateModeRequestType, RTE_CODE) Rte_Mode_BswM_Notification_SWCModeSwitch_IS_EcuRunState_EcuRunStateMode(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Darh_LifeCycleRequestType, RTE_CODE) Rte_Mode_BswM_Notification_SWCModeSwitch_Lifecycle_Darh_Mode(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Dlog_LifeCycleRequestType, RTE_CODE) Rte_Mode_BswM_Notification_SWCModeSwitch_Lifecycle_Dlog_Mode(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Omc_LifeCycleRequestType, RTE_CODE) Rte_Mode_BswM_Notification_SWCModeSwitch_Lifecycle_Omc_Mode(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(StdDiag_LifeCycleRequestType, RTE_CODE) Rte_Mode_BswM_Notification_SWCModeSwitch_Lifecycle_StdDiag_Mode(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(SysTime_LifeCycleRequestType, RTE_CODE) Rte_Mode_BswM_Notification_SWCModeSwitch_Lifecycle_Systime_Mode(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Stm_CentralErrorLockType, RTE_CODE) Rte_Mode_BswM_Notification_SWCModeSwitch_currentCentralErrorLockMode_currentCentralErrorLockMode(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Bs_LifeCycleRequestType, RTE_CODE) Rte_Mode_BswM_Notification_SWC_ModeNotification_Lifecycle_Bs_Mode(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(IntegrationSample_SimpleTimerStateType, RTE_CODE) Rte_Mode_BswM_Notification_SWC_Mode_Notification_SimpleTimerMode_SimpleTimerMode(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode(BswM_ESH_Mode nextMode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_BswM_Switch_SwitchPort_Darh_ReportErrorMode_DarhReportErrorMode(uint8 nextMode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_BswM_Switch_SwitchPort_StdDiagComControlNormalNotificationPort_CommunicationModeDeclarationGroup(NormalCommunicationModeType nextMode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_BswM_Switch_SwitchPort_StdDiag_SessionChangeIndication_SessionModeDeclarationGroup(uint8 nextMode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_BswM_Switch_SwitchPort_Stm_SwitchPort_EM_LOCK_currentEMLockSignalReceptionMode(uint8 nextMode); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_Request_ESH_PostRunRequest_0_requestedMode Rte_Read_BswM_Request_ESH_PostRunRequest_0_requestedMode
#  define Rte_Read_Request_ESH_PostRunRequest_1_requestedMode Rte_Read_BswM_Request_ESH_PostRunRequest_1_requestedMode
#  define Rte_Read_Request_ESH_RunRequest_0_requestedMode Rte_Read_BswM_Request_ESH_RunRequest_0_requestedMode
#  define Rte_Read_Request_ESH_RunRequest_1_requestedMode Rte_Read_BswM_Request_ESH_RunRequest_1_requestedMode
#  define Rte_Read_Request_SWCModeReq_StdDiag_CommunicationModeDeclarationGroup_requestedMode Rte_Read_BswM_Request_SWCModeReq_StdDiag_CommunicationModeDeclarationGroup_requestedMode


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_Provide_MRSP_Bs_requestMode Rte_Write_BswM_Provide_MRSP_Bs_requestMode
#  define Rte_Write_Provide_MSRP_Darh_requestMode Rte_Write_BswM_Provide_MSRP_Darh_requestMode
#  define Rte_Write_Provide_MSRP_Dlog_requestMode Rte_Write_BswM_Provide_MSRP_Dlog_requestMode
#  define Rte_Write_Provide_MSRP_IntegrationSample_EcuRunMode_IntegrationSample_EcuRunStateRequestMode Rte_Write_BswM_Provide_MSRP_IntegrationSample_EcuRunMode_IntegrationSample_EcuRunStateRequestMode
#  define Rte_Write_Provide_MSRP_Omc_requestMode Rte_Write_BswM_Provide_MSRP_Omc_requestMode
#  define Rte_Write_Provide_MSRP_StdDiag_requestMode Rte_Write_BswM_Provide_MSRP_StdDiag_requestMode
#  define Rte_Write_Provide_MSRP_Systime_requestMode Rte_Write_BswM_Provide_MSRP_Systime_requestMode


/**********************************************************************************************************************
 * Rte_Mode_<p>_<m>
 *********************************************************************************************************************/
#  define Rte_Mode_Notification_BSWModeSwitch_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl Rte_Mode_BswM_Notification_BSWModeSwitch_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl
#  define Rte_Mode_Notification_BSWModeSwitch_DcmEcuReset_DcmEcuReset Rte_Mode_BswM_Notification_BSWModeSwitch_DcmEcuReset_DcmEcuReset
#  define Rte_Mode_Notification_ESH_ModeNotification_BswM_MDGP_ESH_Mode Rte_Mode_BswM_Notification_ESH_ModeNotification_BswM_MDGP_ESH_Mode
#  define Rte_Mode_Notification_SWCModeSwitch_DcmCommunicationControl_ComMConf_ComMChannel_BAC4_FlexRay_8e151c3c_DcmCommunicationControl_ComMConf_ComMChannel_A_FlexRay_5b5a9ac2 Rte_Mode_BswM_Notification_SWCModeSwitch_DcmCommunicationControl_ComMConf_ComMChannel_BAC4_FlexRay_8e151c3c_DcmCommunicationControl_ComMConf_ComMChannel_A_FlexRay_5b5a9ac2
#  define Rte_Mode_Notification_SWCModeSwitch_IS_EcuRunState_EcuRunStateMode Rte_Mode_BswM_Notification_SWCModeSwitch_IS_EcuRunState_EcuRunStateMode
#  define Rte_Mode_Notification_SWCModeSwitch_Lifecycle_Darh_Mode Rte_Mode_BswM_Notification_SWCModeSwitch_Lifecycle_Darh_Mode
#  define Rte_Mode_Notification_SWCModeSwitch_Lifecycle_Dlog_Mode Rte_Mode_BswM_Notification_SWCModeSwitch_Lifecycle_Dlog_Mode
#  define Rte_Mode_Notification_SWCModeSwitch_Lifecycle_Omc_Mode Rte_Mode_BswM_Notification_SWCModeSwitch_Lifecycle_Omc_Mode
#  define Rte_Mode_Notification_SWCModeSwitch_Lifecycle_StdDiag_Mode Rte_Mode_BswM_Notification_SWCModeSwitch_Lifecycle_StdDiag_Mode
#  define Rte_Mode_Notification_SWCModeSwitch_Lifecycle_Systime_Mode Rte_Mode_BswM_Notification_SWCModeSwitch_Lifecycle_Systime_Mode
#  define Rte_Mode_Notification_SWCModeSwitch_currentCentralErrorLockMode_currentCentralErrorLockMode Rte_Mode_BswM_Notification_SWCModeSwitch_currentCentralErrorLockMode_currentCentralErrorLockMode
#  define Rte_Mode_Notification_SWC_ModeNotification_Lifecycle_Bs_Mode Rte_Mode_BswM_Notification_SWC_ModeNotification_Lifecycle_Bs_Mode
#  define Rte_Mode_Notification_SWC_Mode_Notification_SimpleTimerMode_SimpleTimerMode Rte_Mode_BswM_Notification_SWC_Mode_Notification_SimpleTimerMode_SimpleTimerMode


/**********************************************************************************************************************
 * Rte_Switch_<p>_<m>
 *********************************************************************************************************************/
#  define Rte_Switch_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode Rte_Switch_BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode
#  define Rte_Switch_Switch_SwitchPort_Darh_ReportErrorMode_DarhReportErrorMode Rte_Switch_BswM_Switch_SwitchPort_Darh_ReportErrorMode_DarhReportErrorMode
#  define Rte_Switch_Switch_SwitchPort_StdDiagComControlNormalNotificationPort_CommunicationModeDeclarationGroup Rte_Switch_BswM_Switch_SwitchPort_StdDiagComControlNormalNotificationPort_CommunicationModeDeclarationGroup
#  define Rte_Switch_Switch_SwitchPort_StdDiag_SessionChangeIndication_SessionModeDeclarationGroup Rte_Switch_BswM_Switch_SwitchPort_StdDiag_SessionChangeIndication_SessionModeDeclarationGroup
#  define Rte_Switch_Switch_SwitchPort_Stm_SwitchPort_EM_LOCK_currentEMLockSignalReceptionMode Rte_Switch_BswM_Switch_SwitchPort_Stm_SwitchPort_EM_LOCK_currentEMLockSignalReceptionMode


# endif /* !defined(RTE_CORE) */


# define BswM_START_SEC_CODE
# include "BswM_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_BswM_MainFunction BswM_MainFunction
#  define RTE_RUNNABLE_BswM_Read_SWCModeReq_StdDiag_CommunicationModeDeclarationGroup BswM_Read_SWCModeReq_StdDiag_CommunicationModeDeclarationGroup
# endif

FUNC(void, BswM_CODE) BswM_MainFunction(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, BswM_CODE) BswM_Read_SWCModeReq_StdDiag_CommunicationModeDeclarationGroup(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define BswM_STOP_SEC_CODE
# include "BswM_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_BSWM_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
