/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  BswM.c
 *        Config:  EPS.dpa
 *     SW-C Type:  BswM
 *
 *     Generator:  MICROSAR RTE Generator Version 4.16.0
 *                 RTE Core Version 1.16.0
 *       License:  Unlimited license CBD1700369 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <BswM>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779 */
/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */
/* PRQA S 0614 EOF */ /* MD_Rte_TestCode */

/* PRQA S 3109 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3112 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3197 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3198 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3199 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3201 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3203 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3205 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3206 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3218 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3229 EOF */ /* MD_Rte_TestCode */
/* PRQA S 2002 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3334 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3417 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3426 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3453 EOF */ /* MD_Rte_TestCode */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *
 * AUTOSAR Modelling Object Descriptions
 *
 **********************************************************************************************************************
 *
 * Data Types:
 * ===========
 * Bs_LifeCycleRequestType
 *   
 *
 * BswM_BswMRteModeDclGroup
 *   
 *
 * BswM_ESH_Mode
 *   
 *
 * BswM_ESH_RunRequest
 *   
 *
 * Darh_LifeCycleRequestType
 *   
 *
 * Dcm_CommunicationModeType
 *   
 *
 * Dcm_DiagnosticSessionControlType
 *   
 *
 * Dcm_EcuResetType
 *   
 *
 * Dlog_LifeCycleRequestType
 *   
 *
 * IntegrationSample_EcuRunStateModeRequestType
 *   
 *
 * IntegrationSample_SimpleTimerStateType
 *   
 *
 * NormalCommunicationModeType
 *   
 *
 * Omc_LifeCycleRequestType
 *   
 *
 * StdDiag_LifeCycleRequestType
 *   
 *
 * Stm_CentralErrorLockType
 *   
 *
 * SysTime_LifeCycleRequestType
 *   
 *
 *
 * Mode Declaration Groups:
 * ========================
 * WdgM_Mode
 *   
 *
 *********************************************************************************************************************/

#include "Rte_BswM.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_BswM.h"
#include "SchM_BswM.h"
#include "TSC_SchM_BswM.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "string.h"

static void BswM_TestDefines(void);

typedef P2FUNC(Std_ReturnType, RTE_CODE, FncPtrType)(void); /* PRQA S 3448 */ /* MD_Rte_TestCode */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * Used AUTOSAR Data Types
 *
 **********************************************************************************************************************
 *
 * Primitive Types:
 * ================
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * Bs_LifeCycleRequestType: Enumeration of integer in interval [0...255] with enumerators
 *   BS_INITIALIZED (0U)
 *   BS_RUNNING (1U)
 *   BS_STOPPED (2U)
 * BswM_BswMRteModeDclGroup: Enumeration of integer in interval [0...255] with enumerators
 *   BswMRteMode (0U)
 * BswM_ESH_Mode: Enumeration of integer in interval [0...255] with enumerators
 *   STARTUP (0U)
 *   RUN (1U)
 *   POSTRUN (2U)
 *   WAKEUP (3U)
 *   SHUTDOWN (4U)
 * BswM_ESH_RunRequest: Enumeration of integer in interval [0...255] with enumerators
 *   RELEASED (0U)
 *   REQUESTED (1U)
 * Darh_LifeCycleRequestType: Enumeration of integer in interval [0...255] with enumerators
 *   DARH_INITIALIZED (0U)
 *   DARH_RUNNING (1U)
 *   DARH_STOPPED (2U)
 * Dcm_CommunicationModeType: Enumeration of integer in interval [0...255] with enumerators
 *   DCM_ENABLE_RX_TX_NORM (0U)
 *   DCM_ENABLE_RX_DISABLE_TX_NORM (1U)
 *   DCM_DISABLE_RX_ENABLE_TX_NORM (2U)
 *   DCM_DISABLE_RX_TX_NORMAL (3U)
 *   DCM_ENABLE_RX_TX_NM (4U)
 *   DCM_ENABLE_RX_DISABLE_TX_NM (5U)
 *   DCM_DISABLE_RX_ENABLE_TX_NM (6U)
 *   DCM_DISABLE_RX_TX_NM (7U)
 *   DCM_ENABLE_RX_TX_NORM_NM (8U)
 *   DCM_ENABLE_RX_DISABLE_TX_NORM_NM (9U)
 *   DCM_DISABLE_RX_ENABLE_TX_NORM_NM (10U)
 *   DCM_DISABLE_RX_TX_NORM_NM (11U)
 * Dcm_DiagnosticSessionControlType: Enumeration of integer in interval [0...255] with enumerators
 *   DCM_ENUM_DEFAULT_SESSION (1U)
 *   DCM_ENUM_PROGRAMMING_SESSION (2U)
 *   DCM_ENUM_EXTENDED_SESSION (3U)
 *   DCM_ENUM_DcmDspSessionRow_CODING_SESSION (65U)
 *   DCM_ENUM_DcmDspSessionRow_SWT_SESSION (66U)
 *   DCM_ENUM_DcmDspSessionRow_HDD_DOWNLOAD_SESSION (67U)
 * Dcm_EcuResetType: Enumeration of integer in interval [0...255] with enumerators
 *   DCM_ENUM_NONE (0U)
 *   DCM_ENUM_HARD (1U)
 *   DCM_ENUM_KEYONOFF (2U)
 *   DCM_ENUM_SOFT (3U)
 *   DCM_ENUM_JUMPTOBOOTLOADER (4U)
 *   DCM_ENUM_JUMPTOSYSSUPPLIERBOOTLOADER (5U)
 *   DCM_ENUM_EXECUTE (6U)
 * Dlog_LifeCycleRequestType: Enumeration of integer in interval [0...255] with enumerators
 *   DLOG_INITIALIZED (0U)
 *   DLOG_RUNNING (1U)
 *   DLOG_STOPPED (2U)
 * IntegrationSample_EcuRunStateModeRequestType: Enumeration of integer in interval [0...255] with enumerators
 *   IntegrationSample_INVALID_STATE (0U)
 *   IntegrationSample_BSW_START (1U)
 *   IntegrationSample_STARTUP (2U)
 *   IntegrationSample_NORMAL_OPERATION (3U)
 *   IntegrationSample_SHUTDOWN (4U)
 * IntegrationSample_SimpleTimerStateType: Enumeration of integer in interval [0...255] with enumerators
 *   IntegrationSample_Timer_FIRE (0U)
 *   IntegrationSample_Timer_IDLE (1U)
 *   IntegrationSample_Timer_RUNNING (2U)
 * NormalCommunicationModeType: Enumeration of integer in interval [0...255] with enumerators
 *   DISABLE_RX_AND_TX_NORMAL (0U)
 *   DISABLE_RX_ENABLE_TX_NORMAL (1U)
 *   ENABLE_RX_AND_TX_NORMAL (2U)
 *   ENABLE_RX_DISABLE_TX_NORMAL (3U)
 * Omc_LifeCycleRequestType: Enumeration of integer in interval [0...255] with enumerators
 *   OMC_INITIALIZED (0U)
 *   OMC_RUNNING (1U)
 *   OMC_STOPPED (2U)
 * StdDiag_LifeCycleRequestType: Enumeration of integer in interval [0...255] with enumerators
 *   STDDIAG_INITIALIZED (0U)
 *   STDDIAG_RUNNING (1U)
 *   STDDIAG_STOPPED (2U)
 * Stm_CentralErrorLockType: Enumeration of integer in interval [0...255] with enumerators
 *   STM_CEL_UNLOCKED (0U)
 *   STM_CEL_LOCKED (1U)
 *   STM_CEL_INVALID (3U)
 * SysTime_LifeCycleRequestType: Enumeration of integer in interval [0...255] with enumerators
 *   SYSTIME_INITIALIZED (0U)
 *   SYSTIME_RUNNING (1U)
 *   SYSTIME_STOPPED (2U)
 *
 *********************************************************************************************************************/


#define BswM_START_SEC_CODE
#include "BswM_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: BswM_MainFunction
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_Request_ESH_PostRunRequest_0_requestedMode(BswM_ESH_RunRequest *data)
 *   Std_ReturnType Rte_Read_Request_ESH_PostRunRequest_1_requestedMode(BswM_ESH_RunRequest *data)
 *   Std_ReturnType Rte_Read_Request_ESH_RunRequest_0_requestedMode(BswM_ESH_RunRequest *data)
 *   Std_ReturnType Rte_Read_Request_ESH_RunRequest_1_requestedMode(BswM_ESH_RunRequest *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_Provide_MRSP_Bs_requestMode(Bs_LifeCycleRequestType data)
 *   Std_ReturnType Rte_Write_Provide_MSRP_Darh_requestMode(Darh_LifeCycleRequestType data)
 *   Std_ReturnType Rte_Write_Provide_MSRP_Dlog_requestMode(Dlog_LifeCycleRequestType data)
 *   Std_ReturnType Rte_Write_Provide_MSRP_IntegrationSample_EcuRunMode_IntegrationSample_EcuRunStateRequestMode(IntegrationSample_EcuRunStateModeRequestType data)
 *   Std_ReturnType Rte_Write_Provide_MSRP_Omc_requestMode(Omc_LifeCycleRequestType data)
 *   Std_ReturnType Rte_Write_Provide_MSRP_StdDiag_requestMode(StdDiag_LifeCycleRequestType data)
 *   Std_ReturnType Rte_Write_Provide_MSRP_Systime_requestMode(SysTime_LifeCycleRequestType data)
 *
 * Mode Interfaces:
 * ================
 *   Std_ReturnType Rte_Switch_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode(BswM_ESH_Mode mode)
 *   Modes of Rte_ModeType_ESH_Mode:
 *   - RTE_MODE_ESH_Mode_POSTRUN
 *   - RTE_MODE_ESH_Mode_RUN
 *   - RTE_MODE_ESH_Mode_SHUTDOWN
 *   - RTE_MODE_ESH_Mode_STARTUP
 *   - RTE_MODE_ESH_Mode_WAKEUP
 *   - RTE_TRANSITION_ESH_Mode
 *   Std_ReturnType Rte_Switch_Switch_SwitchPort_Darh_ReportErrorMode_DarhReportErrorMode(uint8 mode)
 *   Modes of Rte_ModeType_DarhReportErrorMode:
 *   - RTE_MODE_DarhReportErrorMode_DARH_REPORT_ERROR_ACTIVE
 *   - RTE_MODE_DarhReportErrorMode_DARH_REPORT_ERROR_INACTIVE
 *   - RTE_TRANSITION_DarhReportErrorMode
 *   Std_ReturnType Rte_Switch_Switch_SwitchPort_StdDiagComControlNormalNotificationPort_CommunicationModeDeclarationGroup(NormalCommunicationModeType mode)
 *   Modes of Rte_ModeType_StdDiag_NormalCommunicationModeGroup:
 *   - RTE_MODE_StdDiag_NormalCommunicationModeGroup_DISABLE_RX_AND_TX_NORMAL
 *   - RTE_MODE_StdDiag_NormalCommunicationModeGroup_DISABLE_RX_ENABLE_TX_NORMAL
 *   - RTE_MODE_StdDiag_NormalCommunicationModeGroup_ENABLE_RX_AND_TX_NORMAL
 *   - RTE_MODE_StdDiag_NormalCommunicationModeGroup_ENABLE_RX_DISABLE_TX_NORMAL
 *   - RTE_TRANSITION_StdDiag_NormalCommunicationModeGroup
 *   Std_ReturnType Rte_Switch_Switch_SwitchPort_StdDiag_SessionChangeIndication_SessionModeDeclarationGroup(uint8 mode)
 *   Modes of Rte_ModeType_StdDiag_SessionModeGroup:
 *   - RTE_MODE_StdDiag_SessionModeGroup_STDDIAG_DEFAULT_SESSION
 *   - RTE_MODE_StdDiag_SessionModeGroup_STDDIAG_OTHER_SESSION
 *   - RTE_TRANSITION_StdDiag_SessionModeGroup
 *   Std_ReturnType Rte_Switch_Switch_SwitchPort_Stm_SwitchPort_EM_LOCK_currentEMLockSignalReceptionMode(uint8 mode)
 *   Modes of Rte_ModeType_ErrorMemoryLockSignalReceptionMode:
 *   - RTE_MODE_ErrorMemoryLockSignalReceptionMode_EM_LOCK_NOT_RECEIVABLE
 *   - RTE_MODE_ErrorMemoryLockSignalReceptionMode_EM_LOCK_RECEIVABLE
 *   - RTE_TRANSITION_ErrorMemoryLockSignalReceptionMode
 *   Dcm_DiagnosticSessionControlType Rte_Mode_Notification_BSWModeSwitch_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl(void)
 *   Modes of Rte_ModeType_DcmDiagnosticSessionControl:
 *   - RTE_MODE_DcmDiagnosticSessionControl_DEFAULT_SESSION
 *   - RTE_MODE_DcmDiagnosticSessionControl_DcmDspSessionRow_CODING_SESSION
 *   - RTE_MODE_DcmDiagnosticSessionControl_DcmDspSessionRow_HDD_DOWNLOAD_SESSION
 *   - RTE_MODE_DcmDiagnosticSessionControl_DcmDspSessionRow_SWT_SESSION
 *   - RTE_MODE_DcmDiagnosticSessionControl_EXTENDED_SESSION
 *   - RTE_MODE_DcmDiagnosticSessionControl_PROGRAMMING_SESSION
 *   - RTE_TRANSITION_DcmDiagnosticSessionControl
 *   Dcm_EcuResetType Rte_Mode_Notification_BSWModeSwitch_DcmEcuReset_DcmEcuReset(void)
 *   Modes of Rte_ModeType_DcmEcuReset:
 *   - RTE_MODE_DcmEcuReset_EXECUTE
 *   - RTE_MODE_DcmEcuReset_HARD
 *   - RTE_MODE_DcmEcuReset_JUMPTOBOOTLOADER
 *   - RTE_MODE_DcmEcuReset_JUMPTOSYSSUPPLIERBOOTLOADER
 *   - RTE_MODE_DcmEcuReset_KEYONOFF
 *   - RTE_MODE_DcmEcuReset_NONE
 *   - RTE_MODE_DcmEcuReset_SOFT
 *   - RTE_TRANSITION_DcmEcuReset
 *   BswM_ESH_Mode Rte_Mode_Notification_ESH_ModeNotification_BswM_MDGP_ESH_Mode(void)
 *   Modes of Rte_ModeType_ESH_Mode:
 *   - RTE_MODE_ESH_Mode_POSTRUN
 *   - RTE_MODE_ESH_Mode_RUN
 *   - RTE_MODE_ESH_Mode_SHUTDOWN
 *   - RTE_MODE_ESH_Mode_STARTUP
 *   - RTE_MODE_ESH_Mode_WAKEUP
 *   - RTE_TRANSITION_ESH_Mode
 *   Dcm_CommunicationModeType Rte_Mode_Notification_SWCModeSwitch_DcmCommunicationControl_ComMConf_ComMChannel_BAC4_FlexRay_8e151c3c_DcmCommunicationControl_ComMConf_ComMChannel_A_FlexRay_5b5a9ac2(void)
 *   Modes of Rte_ModeType_DcmCommunicationControl:
 *   - RTE_MODE_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NM
 *   - RTE_MODE_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NORM
 *   - RTE_MODE_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NORM_NM
 *   - RTE_MODE_DcmCommunicationControl_DCM_DISABLE_RX_TX_NM
 *   - RTE_MODE_DcmCommunicationControl_DCM_DISABLE_RX_TX_NORMAL
 *   - RTE_MODE_DcmCommunicationControl_DCM_DISABLE_RX_TX_NORM_NM
 *   - RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NM
 *   - RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NORM
 *   - RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NORM_NM
 *   - RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_TX_NM
 *   - RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM
 *   - RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM_NM
 *   - RTE_TRANSITION_DcmCommunicationControl
 *   IntegrationSample_EcuRunStateModeRequestType Rte_Mode_Notification_SWCModeSwitch_IS_EcuRunState_EcuRunStateMode(void)
 *   Modes of Rte_ModeType_IntegrationSample_EcuRunState:
 *   - RTE_MODE_IntegrationSample_EcuRunState_IntegrationSample_BSW_START
 *   - RTE_MODE_IntegrationSample_EcuRunState_IntegrationSample_INVALID_STATE
 *   - RTE_MODE_IntegrationSample_EcuRunState_IntegrationSample_NORMAL_OPERATION
 *   - RTE_MODE_IntegrationSample_EcuRunState_IntegrationSample_SHUTDOWN
 *   - RTE_MODE_IntegrationSample_EcuRunState_IntegrationSample_STARTUP
 *   - RTE_TRANSITION_IntegrationSample_EcuRunState
 *   Darh_LifeCycleRequestType Rte_Mode_Notification_SWCModeSwitch_Lifecycle_Darh_Mode(void)
 *   Modes of Rte_ModeType_Darh_LifeCycle:
 *   - RTE_MODE_Darh_LifeCycle_DARH_INITIALIZED
 *   - RTE_MODE_Darh_LifeCycle_DARH_RUNNING
 *   - RTE_MODE_Darh_LifeCycle_DARH_STOPPED
 *   - RTE_TRANSITION_Darh_LifeCycle
 *   Dlog_LifeCycleRequestType Rte_Mode_Notification_SWCModeSwitch_Lifecycle_Dlog_Mode(void)
 *   Modes of Rte_ModeType_Dlog_LifeCycle:
 *   - RTE_MODE_Dlog_LifeCycle_DLOG_INITIALIZED
 *   - RTE_MODE_Dlog_LifeCycle_DLOG_RUNNING
 *   - RTE_MODE_Dlog_LifeCycle_DLOG_STOPPED
 *   - RTE_TRANSITION_Dlog_LifeCycle
 *   Omc_LifeCycleRequestType Rte_Mode_Notification_SWCModeSwitch_Lifecycle_Omc_Mode(void)
 *   Modes of Rte_ModeType_Omc_LifeCycle:
 *   - RTE_MODE_Omc_LifeCycle_OMC_INITIALIZED
 *   - RTE_MODE_Omc_LifeCycle_OMC_RUNNING
 *   - RTE_MODE_Omc_LifeCycle_OMC_STOPPED
 *   - RTE_TRANSITION_Omc_LifeCycle
 *   StdDiag_LifeCycleRequestType Rte_Mode_Notification_SWCModeSwitch_Lifecycle_StdDiag_Mode(void)
 *   Modes of Rte_ModeType_StdDiag_LifeCycle:
 *   - RTE_MODE_StdDiag_LifeCycle_STDDIAG_INITIALIZED
 *   - RTE_MODE_StdDiag_LifeCycle_STDDIAG_RUNNING
 *   - RTE_MODE_StdDiag_LifeCycle_STDDIAG_STOPPED
 *   - RTE_TRANSITION_StdDiag_LifeCycle
 *   SysTime_LifeCycleRequestType Rte_Mode_Notification_SWCModeSwitch_Lifecycle_Systime_Mode(void)
 *   Modes of Rte_ModeType_SysTime_LifeCycle:
 *   - RTE_MODE_SysTime_LifeCycle_SYSTIME_INITIALIZED
 *   - RTE_MODE_SysTime_LifeCycle_SYSTIME_RUNNING
 *   - RTE_MODE_SysTime_LifeCycle_SYSTIME_STOPPED
 *   - RTE_TRANSITION_SysTime_LifeCycle
 *   Stm_CentralErrorLockType Rte_Mode_Notification_SWCModeSwitch_currentCentralErrorLockMode_currentCentralErrorLockMode(void)
 *   Modes of Rte_ModeType_Stm_CentralErrorLockMode:
 *   - RTE_MODE_Stm_CentralErrorLockMode_STM_CEL_INVALID
 *   - RTE_MODE_Stm_CentralErrorLockMode_STM_CEL_LOCKED
 *   - RTE_MODE_Stm_CentralErrorLockMode_STM_CEL_UNLOCKED
 *   - RTE_TRANSITION_Stm_CentralErrorLockMode
 *   Bs_LifeCycleRequestType Rte_Mode_Notification_SWC_ModeNotification_Lifecycle_Bs_Mode(void)
 *   Modes of Rte_ModeType_Bs_LifeCycle:
 *   - RTE_MODE_Bs_LifeCycle_BS_INITIALIZED
 *   - RTE_MODE_Bs_LifeCycle_BS_RUNNING
 *   - RTE_MODE_Bs_LifeCycle_BS_STOPPED
 *   - RTE_TRANSITION_Bs_LifeCycle
 *   IntegrationSample_SimpleTimerStateType Rte_Mode_Notification_SWC_Mode_Notification_SimpleTimerMode_SimpleTimerMode(void)
 *   Modes of Rte_ModeType_IntegrationSample_SimpleTimerState:
 *   - RTE_MODE_IntegrationSample_SimpleTimerState_IntegrationSample_Timer_FIRE
 *   - RTE_MODE_IntegrationSample_SimpleTimerState_IntegrationSample_Timer_IDLE
 *   - RTE_MODE_IntegrationSample_SimpleTimerState_IntegrationSample_Timer_RUNNING
 *   - RTE_TRANSITION_IntegrationSample_SimpleTimerState
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: BswM_MainFunction_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, BswM_CODE) BswM_MainFunction(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: BswM_MainFunction
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  BswM_ESH_RunRequest Read_Request_ESH_PostRunRequest_0_requestedMode;
  BswM_ESH_RunRequest Read_Request_ESH_PostRunRequest_1_requestedMode;
  BswM_ESH_RunRequest Read_Request_ESH_RunRequest_0_requestedMode;
  BswM_ESH_RunRequest Read_Request_ESH_RunRequest_1_requestedMode;

  Rte_ModeType_DcmDiagnosticSessionControl Notification_BSWModeSwitch_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl;
  Rte_ModeType_DcmEcuReset Notification_BSWModeSwitch_DcmEcuReset_DcmEcuReset;
  Rte_ModeType_ESH_Mode Notification_ESH_ModeNotification_BswM_MDGP_ESH_Mode;
  Rte_ModeType_DcmCommunicationControl Notification_SWCModeSwitch_DcmCommunicationControl_ComMConf_ComMChannel_BAC4_FlexRay_8e151c3c_DcmCommunicationControl_ComMConf_ComMChannel_A_FlexRay_5b5a9ac2;
  Rte_ModeType_IntegrationSample_EcuRunState Notification_SWCModeSwitch_IS_EcuRunState_EcuRunStateMode;
  Rte_ModeType_Darh_LifeCycle Notification_SWCModeSwitch_Lifecycle_Darh_Mode;
  Rte_ModeType_Dlog_LifeCycle Notification_SWCModeSwitch_Lifecycle_Dlog_Mode;
  Rte_ModeType_Omc_LifeCycle Notification_SWCModeSwitch_Lifecycle_Omc_Mode;
  Rte_ModeType_StdDiag_LifeCycle Notification_SWCModeSwitch_Lifecycle_StdDiag_Mode;
  Rte_ModeType_SysTime_LifeCycle Notification_SWCModeSwitch_Lifecycle_Systime_Mode;
  Rte_ModeType_Stm_CentralErrorLockMode Notification_SWCModeSwitch_currentCentralErrorLockMode_currentCentralErrorLockMode;
  Rte_ModeType_Bs_LifeCycle Notification_SWC_ModeNotification_Lifecycle_Bs_Mode;
  Rte_ModeType_IntegrationSample_SimpleTimerState Notification_SWC_Mode_Notification_SimpleTimerMode_SimpleTimerMode;

  /**********************************************************
  * Direct Function Accesses and Take Addresses of Functions
  **********************************************************/

  {
    FncPtrType BswM_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    BswM_FctPtr = (FncPtrType)Rte_Read_Request_ESH_PostRunRequest_0_requestedMode; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_BswM_Rte_Read_Request_ESH_PostRunRequest_0_requestedMode(&Read_Request_ESH_PostRunRequest_0_requestedMode);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  {
    FncPtrType BswM_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    BswM_FctPtr = (FncPtrType)Rte_Read_Request_ESH_PostRunRequest_1_requestedMode; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_BswM_Rte_Read_Request_ESH_PostRunRequest_1_requestedMode(&Read_Request_ESH_PostRunRequest_1_requestedMode);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  {
    FncPtrType BswM_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    BswM_FctPtr = (FncPtrType)Rte_Read_Request_ESH_RunRequest_0_requestedMode; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_BswM_Rte_Read_Request_ESH_RunRequest_0_requestedMode(&Read_Request_ESH_RunRequest_0_requestedMode);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  {
    FncPtrType BswM_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    BswM_FctPtr = (FncPtrType)Rte_Read_Request_ESH_RunRequest_1_requestedMode; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_BswM_Rte_Read_Request_ESH_RunRequest_1_requestedMode(&Read_Request_ESH_RunRequest_1_requestedMode);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  {
    FncPtrType BswM_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    BswM_FctPtr = (FncPtrType)Rte_Write_Provide_MRSP_Bs_requestMode; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_BswM_Rte_Write_Provide_MRSP_Bs_requestMode(Rte_InitValue_Provide_MRSP_Bs_requestMode);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  {
    FncPtrType BswM_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    BswM_FctPtr = (FncPtrType)Rte_Write_Provide_MSRP_Darh_requestMode; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_BswM_Rte_Write_Provide_MSRP_Darh_requestMode(Rte_InitValue_Provide_MSRP_Darh_requestMode);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  {
    FncPtrType BswM_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    BswM_FctPtr = (FncPtrType)Rte_Write_Provide_MSRP_Dlog_requestMode; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_BswM_Rte_Write_Provide_MSRP_Dlog_requestMode(Rte_InitValue_Provide_MSRP_Dlog_requestMode);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  {
    FncPtrType BswM_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    BswM_FctPtr = (FncPtrType)Rte_Write_Provide_MSRP_IntegrationSample_EcuRunMode_IntegrationSample_EcuRunStateRequestMode; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_BswM_Rte_Write_Provide_MSRP_IntegrationSample_EcuRunMode_IntegrationSample_EcuRunStateRequestMode(Rte_InitValue_Provide_MSRP_IntegrationSample_EcuRunMode_IntegrationSample_EcuRunStateRequestMode);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  {
    FncPtrType BswM_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    BswM_FctPtr = (FncPtrType)Rte_Write_Provide_MSRP_Omc_requestMode; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_BswM_Rte_Write_Provide_MSRP_Omc_requestMode(Rte_InitValue_Provide_MSRP_Omc_requestMode);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  {
    FncPtrType BswM_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    BswM_FctPtr = (FncPtrType)Rte_Write_Provide_MSRP_StdDiag_requestMode; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_BswM_Rte_Write_Provide_MSRP_StdDiag_requestMode(Rte_InitValue_Provide_MSRP_StdDiag_requestMode);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  {
    FncPtrType BswM_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    BswM_FctPtr = (FncPtrType)Rte_Write_Provide_MSRP_Systime_requestMode; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_BswM_Rte_Write_Provide_MSRP_Systime_requestMode(Rte_InitValue_Provide_MSRP_Systime_requestMode);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  {
    FncPtrType BswM_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    BswM_FctPtr = (FncPtrType)Rte_Switch_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_BswM_Rte_Switch_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode(RTE_MODE_ESH_Mode_STARTUP);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_LIMIT:
      fct_error = 1;
      break;
  }

  {
    FncPtrType BswM_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    BswM_FctPtr = (FncPtrType)Rte_Switch_Switch_SwitchPort_Darh_ReportErrorMode_DarhReportErrorMode; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_BswM_Rte_Switch_Switch_SwitchPort_Darh_ReportErrorMode_DarhReportErrorMode(RTE_MODE_DarhReportErrorMode_DARH_REPORT_ERROR_INACTIVE);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_LIMIT:
      fct_error = 1;
      break;
  }

  {
    FncPtrType BswM_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    BswM_FctPtr = (FncPtrType)Rte_Switch_Switch_SwitchPort_StdDiagComControlNormalNotificationPort_CommunicationModeDeclarationGroup; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_BswM_Rte_Switch_Switch_SwitchPort_StdDiagComControlNormalNotificationPort_CommunicationModeDeclarationGroup(RTE_MODE_StdDiag_NormalCommunicationModeGroup_ENABLE_RX_AND_TX_NORMAL);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_LIMIT:
      fct_error = 1;
      break;
  }

  {
    FncPtrType BswM_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    BswM_FctPtr = (FncPtrType)Rte_Switch_Switch_SwitchPort_StdDiag_SessionChangeIndication_SessionModeDeclarationGroup; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_BswM_Rte_Switch_Switch_SwitchPort_StdDiag_SessionChangeIndication_SessionModeDeclarationGroup(RTE_MODE_StdDiag_SessionModeGroup_STDDIAG_DEFAULT_SESSION);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_LIMIT:
      fct_error = 1;
      break;
  }

  {
    FncPtrType BswM_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    BswM_FctPtr = (FncPtrType)Rte_Switch_Switch_SwitchPort_Stm_SwitchPort_EM_LOCK_currentEMLockSignalReceptionMode; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_BswM_Rte_Switch_Switch_SwitchPort_Stm_SwitchPort_EM_LOCK_currentEMLockSignalReceptionMode(RTE_MODE_ErrorMemoryLockSignalReceptionMode_EM_LOCK_NOT_RECEIVABLE);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_LIMIT:
      fct_error = 1;
      break;
  }

  {
    FncPtrType BswM_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    BswM_FctPtr = (FncPtrType)Rte_Mode_Notification_BSWModeSwitch_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  Notification_BSWModeSwitch_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl = TSC_BswM_Rte_Mode_Notification_BSWModeSwitch_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl();
  {
    FncPtrType BswM_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    BswM_FctPtr = (FncPtrType)Rte_Mode_Notification_BSWModeSwitch_DcmEcuReset_DcmEcuReset; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  Notification_BSWModeSwitch_DcmEcuReset_DcmEcuReset = TSC_BswM_Rte_Mode_Notification_BSWModeSwitch_DcmEcuReset_DcmEcuReset();
  {
    FncPtrType BswM_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    BswM_FctPtr = (FncPtrType)Rte_Mode_Notification_ESH_ModeNotification_BswM_MDGP_ESH_Mode; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  Notification_ESH_ModeNotification_BswM_MDGP_ESH_Mode = TSC_BswM_Rte_Mode_Notification_ESH_ModeNotification_BswM_MDGP_ESH_Mode();
  {
    FncPtrType BswM_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    BswM_FctPtr = (FncPtrType)Rte_Mode_Notification_SWCModeSwitch_DcmCommunicationControl_ComMConf_ComMChannel_BAC4_FlexRay_8e151c3c_DcmCommunicationControl_ComMConf_ComMChannel_A_FlexRay_5b5a9ac2; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  Notification_SWCModeSwitch_DcmCommunicationControl_ComMConf_ComMChannel_BAC4_FlexRay_8e151c3c_DcmCommunicationControl_ComMConf_ComMChannel_A_FlexRay_5b5a9ac2 = TSC_BswM_Rte_Mode_Notification_SWCModeSwitch_DcmCommunicationControl_ComMConf_ComMChannel_BAC4_FlexRay_8e151c3c_DcmCommunicationControl_ComMConf_ComMChannel_A_FlexRay_5b5a9ac2();
  {
    FncPtrType BswM_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    BswM_FctPtr = (FncPtrType)Rte_Mode_Notification_SWCModeSwitch_IS_EcuRunState_EcuRunStateMode; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  Notification_SWCModeSwitch_IS_EcuRunState_EcuRunStateMode = TSC_BswM_Rte_Mode_Notification_SWCModeSwitch_IS_EcuRunState_EcuRunStateMode();
  {
    FncPtrType BswM_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    BswM_FctPtr = (FncPtrType)Rte_Mode_Notification_SWCModeSwitch_Lifecycle_Darh_Mode; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  Notification_SWCModeSwitch_Lifecycle_Darh_Mode = TSC_BswM_Rte_Mode_Notification_SWCModeSwitch_Lifecycle_Darh_Mode();
  {
    FncPtrType BswM_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    BswM_FctPtr = (FncPtrType)Rte_Mode_Notification_SWCModeSwitch_Lifecycle_Dlog_Mode; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  Notification_SWCModeSwitch_Lifecycle_Dlog_Mode = TSC_BswM_Rte_Mode_Notification_SWCModeSwitch_Lifecycle_Dlog_Mode();
  {
    FncPtrType BswM_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    BswM_FctPtr = (FncPtrType)Rte_Mode_Notification_SWCModeSwitch_Lifecycle_Omc_Mode; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  Notification_SWCModeSwitch_Lifecycle_Omc_Mode = TSC_BswM_Rte_Mode_Notification_SWCModeSwitch_Lifecycle_Omc_Mode();
  {
    FncPtrType BswM_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    BswM_FctPtr = (FncPtrType)Rte_Mode_Notification_SWCModeSwitch_Lifecycle_StdDiag_Mode; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  Notification_SWCModeSwitch_Lifecycle_StdDiag_Mode = TSC_BswM_Rte_Mode_Notification_SWCModeSwitch_Lifecycle_StdDiag_Mode();
  {
    FncPtrType BswM_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    BswM_FctPtr = (FncPtrType)Rte_Mode_Notification_SWCModeSwitch_Lifecycle_Systime_Mode; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  Notification_SWCModeSwitch_Lifecycle_Systime_Mode = TSC_BswM_Rte_Mode_Notification_SWCModeSwitch_Lifecycle_Systime_Mode();
  {
    FncPtrType BswM_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    BswM_FctPtr = (FncPtrType)Rte_Mode_Notification_SWCModeSwitch_currentCentralErrorLockMode_currentCentralErrorLockMode; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  Notification_SWCModeSwitch_currentCentralErrorLockMode_currentCentralErrorLockMode = TSC_BswM_Rte_Mode_Notification_SWCModeSwitch_currentCentralErrorLockMode_currentCentralErrorLockMode();
  {
    FncPtrType BswM_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    BswM_FctPtr = (FncPtrType)Rte_Mode_Notification_SWC_ModeNotification_Lifecycle_Bs_Mode; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  Notification_SWC_ModeNotification_Lifecycle_Bs_Mode = TSC_BswM_Rte_Mode_Notification_SWC_ModeNotification_Lifecycle_Bs_Mode();
  {
    FncPtrType BswM_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    BswM_FctPtr = (FncPtrType)Rte_Mode_Notification_SWC_Mode_Notification_SimpleTimerMode_SimpleTimerMode; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  Notification_SWC_Mode_Notification_SimpleTimerMode_SimpleTimerMode = TSC_BswM_Rte_Mode_Notification_SWC_Mode_Notification_SimpleTimerMode_SimpleTimerMode();

  TSC_BswM_SchM_Enter_BswM_BSWM_EXCLUSIVE_AREA_0();
  TSC_BswM_SchM_Exit_BswM_BSWM_EXCLUSIVE_AREA_0();

  BswM_TestDefines();


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: BswM_Read_SWCModeReq_StdDiag_CommunicationModeDeclarationGroup
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on DataReceivedEvent for DataElementPrototype <requestedMode> of PortPrototype <Request_SWCModeReq_StdDiag_CommunicationModeDeclarationGroup>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_Request_SWCModeReq_StdDiag_CommunicationModeDeclarationGroup_requestedMode(NormalCommunicationModeType *data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: BswM_Read_SWCModeReq_StdDiag_CommunicationModeDeclarationGroup_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, BswM_CODE) BswM_Read_SWCModeReq_StdDiag_CommunicationModeDeclarationGroup(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: BswM_Read_SWCModeReq_StdDiag_CommunicationModeDeclarationGroup
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  NormalCommunicationModeType Read_Request_SWCModeReq_StdDiag_CommunicationModeDeclarationGroup_requestedMode;

  /**********************************************************
  * Direct Function Accesses and Take Addresses of Functions
  **********************************************************/

  {
    FncPtrType BswM_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    BswM_FctPtr = (FncPtrType)Rte_Read_Request_SWCModeReq_StdDiag_CommunicationModeDeclarationGroup_requestedMode; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_BswM_Rte_Read_Request_SWCModeReq_StdDiag_CommunicationModeDeclarationGroup_requestedMode(&Read_Request_SWCModeReq_StdDiag_CommunicationModeDeclarationGroup_requestedMode);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define BswM_STOP_SEC_CODE
#include "BswM_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

static void BswM_TestDefines(void)
{
  /* Enumeration Data Types */

  Bs_LifeCycleRequestType Test_Bs_LifeCycleRequestType_V_1 = BS_INITIALIZED;
  Bs_LifeCycleRequestType Test_Bs_LifeCycleRequestType_V_2 = BS_RUNNING;
  Bs_LifeCycleRequestType Test_Bs_LifeCycleRequestType_V_3 = BS_STOPPED;

  BswM_BswMRteModeDclGroup Test_BswM_BswMRteModeDclGroup_V_1 = BswMRteMode;

  BswM_ESH_Mode Test_BswM_ESH_Mode_V_1 = STARTUP;
  BswM_ESH_Mode Test_BswM_ESH_Mode_V_2 = RUN;
  BswM_ESH_Mode Test_BswM_ESH_Mode_V_3 = POSTRUN;
  BswM_ESH_Mode Test_BswM_ESH_Mode_V_4 = WAKEUP;
  BswM_ESH_Mode Test_BswM_ESH_Mode_V_5 = SHUTDOWN;

  BswM_ESH_RunRequest Test_BswM_ESH_RunRequest_V_1 = RELEASED;
  BswM_ESH_RunRequest Test_BswM_ESH_RunRequest_V_2 = REQUESTED;

  Darh_LifeCycleRequestType Test_Darh_LifeCycleRequestType_V_1 = DARH_INITIALIZED;
  Darh_LifeCycleRequestType Test_Darh_LifeCycleRequestType_V_2 = DARH_RUNNING;
  Darh_LifeCycleRequestType Test_Darh_LifeCycleRequestType_V_3 = DARH_STOPPED;

  Dcm_CommunicationModeType Test_Dcm_CommunicationModeType_V_1 = DCM_ENABLE_RX_TX_NORM;
  Dcm_CommunicationModeType Test_Dcm_CommunicationModeType_V_2 = DCM_ENABLE_RX_DISABLE_TX_NORM;
  Dcm_CommunicationModeType Test_Dcm_CommunicationModeType_V_3 = DCM_DISABLE_RX_ENABLE_TX_NORM;
  Dcm_CommunicationModeType Test_Dcm_CommunicationModeType_V_4 = DCM_DISABLE_RX_TX_NORMAL;
  Dcm_CommunicationModeType Test_Dcm_CommunicationModeType_V_5 = DCM_ENABLE_RX_TX_NM;
  Dcm_CommunicationModeType Test_Dcm_CommunicationModeType_V_6 = DCM_ENABLE_RX_DISABLE_TX_NM;
  Dcm_CommunicationModeType Test_Dcm_CommunicationModeType_V_7 = DCM_DISABLE_RX_ENABLE_TX_NM;
  Dcm_CommunicationModeType Test_Dcm_CommunicationModeType_V_8 = DCM_DISABLE_RX_TX_NM;
  Dcm_CommunicationModeType Test_Dcm_CommunicationModeType_V_9 = DCM_ENABLE_RX_TX_NORM_NM;
  Dcm_CommunicationModeType Test_Dcm_CommunicationModeType_V_10 = DCM_ENABLE_RX_DISABLE_TX_NORM_NM;
  Dcm_CommunicationModeType Test_Dcm_CommunicationModeType_V_11 = DCM_DISABLE_RX_ENABLE_TX_NORM_NM;
  Dcm_CommunicationModeType Test_Dcm_CommunicationModeType_V_12 = DCM_DISABLE_RX_TX_NORM_NM;

  Dcm_DiagnosticSessionControlType Test_Dcm_DiagnosticSessionControlType_V_1 = DCM_ENUM_DEFAULT_SESSION;
  Dcm_DiagnosticSessionControlType Test_Dcm_DiagnosticSessionControlType_V_2 = DCM_ENUM_PROGRAMMING_SESSION;
  Dcm_DiagnosticSessionControlType Test_Dcm_DiagnosticSessionControlType_V_3 = DCM_ENUM_EXTENDED_SESSION;
  Dcm_DiagnosticSessionControlType Test_Dcm_DiagnosticSessionControlType_V_4 = DCM_ENUM_DcmDspSessionRow_CODING_SESSION;
  Dcm_DiagnosticSessionControlType Test_Dcm_DiagnosticSessionControlType_V_5 = DCM_ENUM_DcmDspSessionRow_SWT_SESSION;
  Dcm_DiagnosticSessionControlType Test_Dcm_DiagnosticSessionControlType_V_6 = DCM_ENUM_DcmDspSessionRow_HDD_DOWNLOAD_SESSION;

  Dcm_EcuResetType Test_Dcm_EcuResetType_V_1 = DCM_ENUM_NONE;
  Dcm_EcuResetType Test_Dcm_EcuResetType_V_2 = DCM_ENUM_HARD;
  Dcm_EcuResetType Test_Dcm_EcuResetType_V_3 = DCM_ENUM_KEYONOFF;
  Dcm_EcuResetType Test_Dcm_EcuResetType_V_4 = DCM_ENUM_SOFT;
  Dcm_EcuResetType Test_Dcm_EcuResetType_V_5 = DCM_ENUM_JUMPTOBOOTLOADER;
  Dcm_EcuResetType Test_Dcm_EcuResetType_V_6 = DCM_ENUM_JUMPTOSYSSUPPLIERBOOTLOADER;
  Dcm_EcuResetType Test_Dcm_EcuResetType_V_7 = DCM_ENUM_EXECUTE;

  Dlog_LifeCycleRequestType Test_Dlog_LifeCycleRequestType_V_1 = DLOG_INITIALIZED;
  Dlog_LifeCycleRequestType Test_Dlog_LifeCycleRequestType_V_2 = DLOG_RUNNING;
  Dlog_LifeCycleRequestType Test_Dlog_LifeCycleRequestType_V_3 = DLOG_STOPPED;

  IntegrationSample_EcuRunStateModeRequestType Test_IntegrationSample_EcuRunStateModeRequestType_V_1 = IntegrationSample_INVALID_STATE;
  IntegrationSample_EcuRunStateModeRequestType Test_IntegrationSample_EcuRunStateModeRequestType_V_2 = IntegrationSample_BSW_START;
  IntegrationSample_EcuRunStateModeRequestType Test_IntegrationSample_EcuRunStateModeRequestType_V_3 = IntegrationSample_STARTUP;
  IntegrationSample_EcuRunStateModeRequestType Test_IntegrationSample_EcuRunStateModeRequestType_V_4 = IntegrationSample_NORMAL_OPERATION;
  IntegrationSample_EcuRunStateModeRequestType Test_IntegrationSample_EcuRunStateModeRequestType_V_5 = IntegrationSample_SHUTDOWN;

  IntegrationSample_SimpleTimerStateType Test_IntegrationSample_SimpleTimerStateType_V_1 = IntegrationSample_Timer_FIRE;
  IntegrationSample_SimpleTimerStateType Test_IntegrationSample_SimpleTimerStateType_V_2 = IntegrationSample_Timer_IDLE;
  IntegrationSample_SimpleTimerStateType Test_IntegrationSample_SimpleTimerStateType_V_3 = IntegrationSample_Timer_RUNNING;

  NormalCommunicationModeType Test_NormalCommunicationModeType_V_1 = DISABLE_RX_AND_TX_NORMAL;
  NormalCommunicationModeType Test_NormalCommunicationModeType_V_2 = DISABLE_RX_ENABLE_TX_NORMAL;
  NormalCommunicationModeType Test_NormalCommunicationModeType_V_3 = ENABLE_RX_AND_TX_NORMAL;
  NormalCommunicationModeType Test_NormalCommunicationModeType_V_4 = ENABLE_RX_DISABLE_TX_NORMAL;

  Omc_LifeCycleRequestType Test_Omc_LifeCycleRequestType_V_1 = OMC_INITIALIZED;
  Omc_LifeCycleRequestType Test_Omc_LifeCycleRequestType_V_2 = OMC_RUNNING;
  Omc_LifeCycleRequestType Test_Omc_LifeCycleRequestType_V_3 = OMC_STOPPED;

  StdDiag_LifeCycleRequestType Test_StdDiag_LifeCycleRequestType_V_1 = STDDIAG_INITIALIZED;
  StdDiag_LifeCycleRequestType Test_StdDiag_LifeCycleRequestType_V_2 = STDDIAG_RUNNING;
  StdDiag_LifeCycleRequestType Test_StdDiag_LifeCycleRequestType_V_3 = STDDIAG_STOPPED;

  Stm_CentralErrorLockType Test_Stm_CentralErrorLockType_V_1 = STM_CEL_UNLOCKED;
  Stm_CentralErrorLockType Test_Stm_CentralErrorLockType_V_2 = STM_CEL_LOCKED;
  Stm_CentralErrorLockType Test_Stm_CentralErrorLockType_V_3 = STM_CEL_INVALID;

  SysTime_LifeCycleRequestType Test_SysTime_LifeCycleRequestType_V_1 = SYSTIME_INITIALIZED;
  SysTime_LifeCycleRequestType Test_SysTime_LifeCycleRequestType_V_2 = SYSTIME_RUNNING;
  SysTime_LifeCycleRequestType Test_SysTime_LifeCycleRequestType_V_3 = SYSTIME_STOPPED;

  /* Modes */

  Bs_LifeCycleRequestType Test_Bs_LifeCycle_MV_1 = RTE_MODE_Bs_LifeCycle_BS_INITIALIZED;
  Bs_LifeCycleRequestType Test_Bs_LifeCycle_MV_2 = RTE_MODE_Bs_LifeCycle_BS_RUNNING;
  Bs_LifeCycleRequestType Test_Bs_LifeCycle_MV_3 = RTE_MODE_Bs_LifeCycle_BS_STOPPED;
  Bs_LifeCycleRequestType Test_Bs_LifeCycle_TV = RTE_TRANSITION_Bs_LifeCycle;

  BswM_BswMRteModeDclGroup Test_BswMRteModeDclGroup_MV_1 = RTE_MODE_BswMRteModeDclGroup_BswMRteMode;
  BswM_BswMRteModeDclGroup Test_BswMRteModeDclGroup_TV = RTE_TRANSITION_BswMRteModeDclGroup;

  uint8 Test_DarhReportErrorMode_MV_1 = RTE_MODE_DarhReportErrorMode_DARH_REPORT_ERROR_ACTIVE;
  uint8 Test_DarhReportErrorMode_MV_2 = RTE_MODE_DarhReportErrorMode_DARH_REPORT_ERROR_INACTIVE;
  uint8 Test_DarhReportErrorMode_TV = RTE_TRANSITION_DarhReportErrorMode;

  Darh_LifeCycleRequestType Test_Darh_LifeCycle_MV_1 = RTE_MODE_Darh_LifeCycle_DARH_INITIALIZED;
  Darh_LifeCycleRequestType Test_Darh_LifeCycle_MV_2 = RTE_MODE_Darh_LifeCycle_DARH_RUNNING;
  Darh_LifeCycleRequestType Test_Darh_LifeCycle_MV_3 = RTE_MODE_Darh_LifeCycle_DARH_STOPPED;
  Darh_LifeCycleRequestType Test_Darh_LifeCycle_TV = RTE_TRANSITION_Darh_LifeCycle;

  Dcm_CommunicationModeType Test_DcmCommunicationControl_MV_1 = RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM;
  Dcm_CommunicationModeType Test_DcmCommunicationControl_MV_2 = RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NORM;
  Dcm_CommunicationModeType Test_DcmCommunicationControl_MV_3 = RTE_MODE_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NORM;
  Dcm_CommunicationModeType Test_DcmCommunicationControl_MV_4 = RTE_MODE_DcmCommunicationControl_DCM_DISABLE_RX_TX_NORMAL;
  Dcm_CommunicationModeType Test_DcmCommunicationControl_MV_5 = RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_TX_NM;
  Dcm_CommunicationModeType Test_DcmCommunicationControl_MV_6 = RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NM;
  Dcm_CommunicationModeType Test_DcmCommunicationControl_MV_7 = RTE_MODE_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NM;
  Dcm_CommunicationModeType Test_DcmCommunicationControl_MV_8 = RTE_MODE_DcmCommunicationControl_DCM_DISABLE_RX_TX_NM;
  Dcm_CommunicationModeType Test_DcmCommunicationControl_MV_9 = RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM_NM;
  Dcm_CommunicationModeType Test_DcmCommunicationControl_MV_10 = RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NORM_NM;
  Dcm_CommunicationModeType Test_DcmCommunicationControl_MV_11 = RTE_MODE_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NORM_NM;
  Dcm_CommunicationModeType Test_DcmCommunicationControl_MV_12 = RTE_MODE_DcmCommunicationControl_DCM_DISABLE_RX_TX_NORM_NM;
  Dcm_CommunicationModeType Test_DcmCommunicationControl_TV = RTE_TRANSITION_DcmCommunicationControl;

  Dcm_DiagnosticSessionControlType Test_DcmDiagnosticSessionControl_MV_1 = RTE_MODE_DcmDiagnosticSessionControl_DEFAULT_SESSION;
  Dcm_DiagnosticSessionControlType Test_DcmDiagnosticSessionControl_MV_2 = RTE_MODE_DcmDiagnosticSessionControl_PROGRAMMING_SESSION;
  Dcm_DiagnosticSessionControlType Test_DcmDiagnosticSessionControl_MV_3 = RTE_MODE_DcmDiagnosticSessionControl_EXTENDED_SESSION;
  Dcm_DiagnosticSessionControlType Test_DcmDiagnosticSessionControl_MV_4 = RTE_MODE_DcmDiagnosticSessionControl_DcmDspSessionRow_CODING_SESSION;
  Dcm_DiagnosticSessionControlType Test_DcmDiagnosticSessionControl_MV_5 = RTE_MODE_DcmDiagnosticSessionControl_DcmDspSessionRow_SWT_SESSION;
  Dcm_DiagnosticSessionControlType Test_DcmDiagnosticSessionControl_MV_6 = RTE_MODE_DcmDiagnosticSessionControl_DcmDspSessionRow_HDD_DOWNLOAD_SESSION;
  Dcm_DiagnosticSessionControlType Test_DcmDiagnosticSessionControl_TV = RTE_TRANSITION_DcmDiagnosticSessionControl;

  Dcm_EcuResetType Test_DcmEcuReset_MV_1 = RTE_MODE_DcmEcuReset_EXECUTE;
  Dcm_EcuResetType Test_DcmEcuReset_MV_2 = RTE_MODE_DcmEcuReset_HARD;
  Dcm_EcuResetType Test_DcmEcuReset_MV_3 = RTE_MODE_DcmEcuReset_JUMPTOBOOTLOADER;
  Dcm_EcuResetType Test_DcmEcuReset_MV_4 = RTE_MODE_DcmEcuReset_JUMPTOSYSSUPPLIERBOOTLOADER;
  Dcm_EcuResetType Test_DcmEcuReset_MV_5 = RTE_MODE_DcmEcuReset_KEYONOFF;
  Dcm_EcuResetType Test_DcmEcuReset_MV_6 = RTE_MODE_DcmEcuReset_NONE;
  Dcm_EcuResetType Test_DcmEcuReset_MV_7 = RTE_MODE_DcmEcuReset_SOFT;
  Dcm_EcuResetType Test_DcmEcuReset_TV = RTE_TRANSITION_DcmEcuReset;

  Dlog_LifeCycleRequestType Test_Dlog_LifeCycle_MV_1 = RTE_MODE_Dlog_LifeCycle_DLOG_INITIALIZED;
  Dlog_LifeCycleRequestType Test_Dlog_LifeCycle_MV_2 = RTE_MODE_Dlog_LifeCycle_DLOG_RUNNING;
  Dlog_LifeCycleRequestType Test_Dlog_LifeCycle_MV_3 = RTE_MODE_Dlog_LifeCycle_DLOG_STOPPED;
  Dlog_LifeCycleRequestType Test_Dlog_LifeCycle_TV = RTE_TRANSITION_Dlog_LifeCycle;

  BswM_ESH_Mode Test_ESH_Mode_MV_1 = RTE_MODE_ESH_Mode_POSTRUN;
  BswM_ESH_Mode Test_ESH_Mode_MV_2 = RTE_MODE_ESH_Mode_RUN;
  BswM_ESH_Mode Test_ESH_Mode_MV_3 = RTE_MODE_ESH_Mode_SHUTDOWN;
  BswM_ESH_Mode Test_ESH_Mode_MV_4 = RTE_MODE_ESH_Mode_STARTUP;
  BswM_ESH_Mode Test_ESH_Mode_MV_5 = RTE_MODE_ESH_Mode_WAKEUP;
  BswM_ESH_Mode Test_ESH_Mode_TV = RTE_TRANSITION_ESH_Mode;

  BswM_ESH_RunRequest Test_ESH_RunRequest_MV_1 = RTE_MODE_ESH_RunRequest_RELEASED;
  BswM_ESH_RunRequest Test_ESH_RunRequest_MV_2 = RTE_MODE_ESH_RunRequest_REQUESTED;
  BswM_ESH_RunRequest Test_ESH_RunRequest_TV = RTE_TRANSITION_ESH_RunRequest;

  uint8 Test_ErrorMemoryLockSignalReceptionMode_MV_1 = RTE_MODE_ErrorMemoryLockSignalReceptionMode_EM_LOCK_NOT_RECEIVABLE;
  uint8 Test_ErrorMemoryLockSignalReceptionMode_MV_2 = RTE_MODE_ErrorMemoryLockSignalReceptionMode_EM_LOCK_RECEIVABLE;
  uint8 Test_ErrorMemoryLockSignalReceptionMode_TV = RTE_TRANSITION_ErrorMemoryLockSignalReceptionMode;

  IntegrationSample_EcuRunStateModeRequestType Test_IntegrationSample_EcuRunState_MV_1 = RTE_MODE_IntegrationSample_EcuRunState_IntegrationSample_INVALID_STATE;
  IntegrationSample_EcuRunStateModeRequestType Test_IntegrationSample_EcuRunState_MV_2 = RTE_MODE_IntegrationSample_EcuRunState_IntegrationSample_BSW_START;
  IntegrationSample_EcuRunStateModeRequestType Test_IntegrationSample_EcuRunState_MV_3 = RTE_MODE_IntegrationSample_EcuRunState_IntegrationSample_STARTUP;
  IntegrationSample_EcuRunStateModeRequestType Test_IntegrationSample_EcuRunState_MV_4 = RTE_MODE_IntegrationSample_EcuRunState_IntegrationSample_NORMAL_OPERATION;
  IntegrationSample_EcuRunStateModeRequestType Test_IntegrationSample_EcuRunState_MV_5 = RTE_MODE_IntegrationSample_EcuRunState_IntegrationSample_SHUTDOWN;
  IntegrationSample_EcuRunStateModeRequestType Test_IntegrationSample_EcuRunState_TV = RTE_TRANSITION_IntegrationSample_EcuRunState;

  IntegrationSample_SimpleTimerStateType Test_IntegrationSample_SimpleTimerState_MV_1 = RTE_MODE_IntegrationSample_SimpleTimerState_IntegrationSample_Timer_IDLE;
  IntegrationSample_SimpleTimerStateType Test_IntegrationSample_SimpleTimerState_MV_2 = RTE_MODE_IntegrationSample_SimpleTimerState_IntegrationSample_Timer_RUNNING;
  IntegrationSample_SimpleTimerStateType Test_IntegrationSample_SimpleTimerState_MV_3 = RTE_MODE_IntegrationSample_SimpleTimerState_IntegrationSample_Timer_FIRE;
  IntegrationSample_SimpleTimerStateType Test_IntegrationSample_SimpleTimerState_TV = RTE_TRANSITION_IntegrationSample_SimpleTimerState;

  Omc_LifeCycleRequestType Test_Omc_LifeCycle_MV_1 = RTE_MODE_Omc_LifeCycle_OMC_INITIALIZED;
  Omc_LifeCycleRequestType Test_Omc_LifeCycle_MV_2 = RTE_MODE_Omc_LifeCycle_OMC_RUNNING;
  Omc_LifeCycleRequestType Test_Omc_LifeCycle_MV_3 = RTE_MODE_Omc_LifeCycle_OMC_STOPPED;
  Omc_LifeCycleRequestType Test_Omc_LifeCycle_TV = RTE_TRANSITION_Omc_LifeCycle;

  StdDiag_LifeCycleRequestType Test_StdDiag_LifeCycle_MV_1 = RTE_MODE_StdDiag_LifeCycle_STDDIAG_INITIALIZED;
  StdDiag_LifeCycleRequestType Test_StdDiag_LifeCycle_MV_2 = RTE_MODE_StdDiag_LifeCycle_STDDIAG_RUNNING;
  StdDiag_LifeCycleRequestType Test_StdDiag_LifeCycle_MV_3 = RTE_MODE_StdDiag_LifeCycle_STDDIAG_STOPPED;
  StdDiag_LifeCycleRequestType Test_StdDiag_LifeCycle_TV = RTE_TRANSITION_StdDiag_LifeCycle;

  NormalCommunicationModeType Test_StdDiag_NormalCommunicationModeGroup_MV_1 = RTE_MODE_StdDiag_NormalCommunicationModeGroup_DISABLE_RX_AND_TX_NORMAL;
  NormalCommunicationModeType Test_StdDiag_NormalCommunicationModeGroup_MV_2 = RTE_MODE_StdDiag_NormalCommunicationModeGroup_DISABLE_RX_ENABLE_TX_NORMAL;
  NormalCommunicationModeType Test_StdDiag_NormalCommunicationModeGroup_MV_3 = RTE_MODE_StdDiag_NormalCommunicationModeGroup_ENABLE_RX_AND_TX_NORMAL;
  NormalCommunicationModeType Test_StdDiag_NormalCommunicationModeGroup_MV_4 = RTE_MODE_StdDiag_NormalCommunicationModeGroup_ENABLE_RX_DISABLE_TX_NORMAL;
  NormalCommunicationModeType Test_StdDiag_NormalCommunicationModeGroup_TV = RTE_TRANSITION_StdDiag_NormalCommunicationModeGroup;

  uint8 Test_StdDiag_SessionModeGroup_MV_1 = RTE_MODE_StdDiag_SessionModeGroup_STDDIAG_DEFAULT_SESSION;
  uint8 Test_StdDiag_SessionModeGroup_MV_2 = RTE_MODE_StdDiag_SessionModeGroup_STDDIAG_OTHER_SESSION;
  uint8 Test_StdDiag_SessionModeGroup_TV = RTE_TRANSITION_StdDiag_SessionModeGroup;

  Stm_CentralErrorLockType Test_Stm_CentralErrorLockMode_MV_1 = RTE_MODE_Stm_CentralErrorLockMode_STM_CEL_INVALID;
  Stm_CentralErrorLockType Test_Stm_CentralErrorLockMode_MV_2 = RTE_MODE_Stm_CentralErrorLockMode_STM_CEL_LOCKED;
  Stm_CentralErrorLockType Test_Stm_CentralErrorLockMode_MV_3 = RTE_MODE_Stm_CentralErrorLockMode_STM_CEL_UNLOCKED;
  Stm_CentralErrorLockType Test_Stm_CentralErrorLockMode_TV = RTE_TRANSITION_Stm_CentralErrorLockMode;

  SysTime_LifeCycleRequestType Test_SysTime_LifeCycle_MV_1 = RTE_MODE_SysTime_LifeCycle_SYSTIME_INITIALIZED;
  SysTime_LifeCycleRequestType Test_SysTime_LifeCycle_MV_2 = RTE_MODE_SysTime_LifeCycle_SYSTIME_RUNNING;
  SysTime_LifeCycleRequestType Test_SysTime_LifeCycle_MV_3 = RTE_MODE_SysTime_LifeCycle_SYSTIME_STOPPED;
  SysTime_LifeCycleRequestType Test_SysTime_LifeCycle_TV = RTE_TRANSITION_SysTime_LifeCycle;
}

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_TestCode:
     Reason:     This justification is used within the generated test code by the Rte Analyzer.
     Risk:       No functional risk.
     Prevention: Not required.

*/
