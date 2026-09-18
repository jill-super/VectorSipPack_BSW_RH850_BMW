/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *
 *                 This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                 Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                 All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  LICENSE
 *  -------------------------------------------------------------------------------------------------------------------
 *            Module: BswM
 *           Program: MSR BAC 4.x (MSR_Bmw_SLP4)
 *          Customer: Nexteer Automotive Corporation
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: Renesas RH850 P1M R7F701363EAFP
 *    License Scope : The usage is restricted to CBD1700369_D04
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: BswM_Lcfg.c
 *   Generation Time: 2018-01-02 16:37:33
 *           Project: EPS - Version 1.0
 *          Delivery: CBD1700369_D04
 *      Tool Version: DaVinci Configurator (beta) 5.16.31 SP1
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 ! BETA VERSION                                                                                                       !
 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 ! These programs are fully operative programs. With regard to the fact that the programs are a beta-version only,    !
 ! Vector Informatik's liability shall be expressly excluded in cases of ordinary negligence, to the extent           !
 ! admissible by law or statute.                                                                                      !
 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
**********************************************************************************************************************/

#define BSWM_LCFG_SOURCE

/* -----------------------------------------------------------------------------
    &&&~ INCLUDE
 ----------------------------------------------------------------------------- */
/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */
#include "BswM.h"
#include "BswM_Private_Cfg.h"
#include "SchM_BswM.h"

#if !defined (BSWM_LOCAL)
# define BSWM_LOCAL static
#endif

#if !defined (BSWM_LOCAL_INLINE) /* COV_BSWM_LOCAL_INLINE */
# define BSWM_LOCAL_INLINE LOCAL_INLINE
#endif

/* -----------------------------------------------------------------------------
    &&&~ MACROS
 ----------------------------------------------------------------------------- */
/* PRQA S 3453 1 */ /* MD_BswM_3453 */
#define BswM_SetIpduGroup(pduId, bitVal) Com_SetIpduGroup(BswM_ComIPduGroupState, (pduId), (bitVal))
#define BswM_SetIpduReinitGroup(pduId, bitVal)
#define BswM_SetIpduDMGroup(pduId, bitVal)

/* PRQA S 3453 1 */ /* MD_BswM_3453 */
#define BswM_MarkPduGroupControlInvocation(control) BswM_PduGroupControlInvocation |= (control)
#define BswM_MarkDmControlInvocation() BswM_PduGroupControlInvocation |= BSWM_GROUPCONTROL_DM



#define BSWM_START_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/* -----------------------------------------------------------------------------
    &&&~ LOCAL FUNCTION DECLARATIONS
 ----------------------------------------------------------------------------- */
/**********************************************************************************************************************
 *  BswM_Action_RuleHandler()
 **********************************************************************************************************************/
/*!
 * \brief       Executes a rule.
 * \details     Arbitrates a rule and executes corresponding action list.
 * \param[in]   handleId  Id of the rule to execute.
 * \return      E_OK      No action list was executed or corresponding action list was completely executed.
 * \return      E_NOT_OK  Action list was aborted because an action failed.
 * \pre         -
 * \context     ANY
 * \reentrant   TRUE
 * \synchronous TRUE
 */
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_RuleHandler(BswM_HandleType handleId);

/**********************************************************************************************************************
 *  BswM_UpdateRuleStates()
 **********************************************************************************************************************/
/*!
 * \brief       Updates the state of a rule.
 * \details     Set rule state of passed ruleId to passed state.
 * \param[in]   ruleId    Id of the rule to update.
 * \param[in]   state     New state of the rule.
 * \pre         -
 * \context     ANY
 * \reentrant   TRUE
 * \synchronous TRUE
 */
BSWM_LOCAL_INLINE FUNC(void, BSWM_CODE) BswM_UpdateRuleStates(BswM_SizeOfRuleStatesType ruleId, BswM_RuleStatesType state);

/**********************************************************************************************************************
 *  BswM_UpdateTimer()
 **********************************************************************************************************************/
/*!
 * \brief       Updates a timer.
 * \details     Set timer value of passed timerId to passed value and calculates the new state.
 * \param[in]   timerId   Id of the timer to update.
 * \param[in]   value     New value of the timer.
 * \pre         -
 * \context     ANY
 * \reentrant   TRUE
 * \synchronous TRUE
 */
BSWM_LOCAL_INLINE FUNC(void, BSWM_CODE) BswM_UpdateTimer(BswM_SizeOfTimerValueType timerId, BswM_TimerValueType value);

/*! \addtogroup    BswMGeneratedFunctions BswM Generated Functions
 * \{
 */
/* PRQA S 0779 FUNCTIONDECLARATIONS */ /* MD_BswM_0779 */

/**********************************************************************************************************************
 *  ImmediateSwcRequest
 *********************************************************************************************************************/
/*! \defgroup    ImmediateSwcRequest
 * \{
 */
/**********************************************************************************************************************
 *  BswM_ImmediateSwcRequest
 *********************************************************************************************************************/
/*!
 * \brief       Arbitrates depending immediate rules of a Swc Mode Request port.
 * \details     Checks if port is valid and arbitrates depending immediate rules.
 * \param[IN]   requestId  Index of a swc mode request port.
 * \pre         -
 * \context     TASK
 * \reentrant   TRUE
 * \synchronous TRUE
 * \note        Function called by immediate swc request functions (BswMRteRequestFunctions).
 */
BSWM_LOCAL_INLINE FUNC(void, BSWM_CODE) BswM_ImmediateSwcRequest(BswM_SizeOfModeRequestMappingType requestId);
/*! \} */ /* End of group ImmediateSwcRequest */

/**********************************************************************************************************************
 *  BswMActionListFunctions
 *********************************************************************************************************************/
/*! \defgroup    BswMActionListFunctions
 * \{
 */

/*!
 * \{
 * \brief       Execute actions of action list.
 * \details     Generated function which depends on the configuration. Executes the actions of the action list in the
 *              configured order.
 * \return      E_OK      Action list was completely executed.
 * \return      E_NOT_OK  Action list was aborted because an action failed.
 * \pre         -
 * \context     ANY
 * \reentrant   TRUE
 * \synchronous TRUE
 */
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_AL_CodingResetExecution(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_AL_Rule_Dlog_Init_True(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_AL_Rule_Dlog_Run_True(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_AL_Rule_Start_Omc_Init_when_Darh_Run_True(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_AL_Rule_Start_StdDiag_Init_when_Omc_Run_True(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_AL_RuleDarh_Init_to_Run_True(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_AL_Rule_Start_Omc_Run_when_Omc_Init_True(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_AL_Rule_Start_StdDiag_Run_when_StdDiag_Init_True(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_AL_Rule_Start_Systime_Run_when_Systime_Init_True(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_AL_ResetExecution(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_AL_Rule_Systime_Init_True(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_AL_Rule_Darh_Init_True(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_AL_ComM_Channel_is_FULL_COM(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_AL_ComM_Channel_is_SILENT_COMMUNICATION_BswMActionList_True(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_AL_Set_DarhReportError_due_ComM_and_CEL_mode_BswMActionList_True(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_AL_Set_DarhReportError_due_ComM_and_CEL_mode_BswMActionList_False(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_INIT_AL_Initialize(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_AL_Switch_StdDiagSessionChangeIndication_True(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_AL_Switch_StdDiagSessionChangeIndication_False(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_AL_NDC_Enable_RX_AND_TX_NORMAL(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_AL_NDC_Enable_RX_Disable_TX_NORMAL(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_AL_NDC_Disable_RX_Enable_TX_NORMAL(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_AL_NDC_Disable_Rx_And_Tx_Normal(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_AL_ComM_Channel_is_NO_COM_BswMActionList_True(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_AL_Set_EcuRunMode_to_Normal_Operation_when_all_modules_run_BswMActionList_True(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_AL_Reset_when_SimpleTimer0_fired_BswMActionList_True(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_AL_Bs_Run_when_Bs_Init(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_AL_BswMActionList_Bs_Init_True(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_ExitRun(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_RunToPostRun(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_WaitForNvMToShutdown(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_WakeupToPrep(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_WaitForNvMWakeup(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_WakeupToRun(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_DemInit(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_InitToWakeup(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_PostRunToPrepShutdown(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_ESH_PostRunToPrepCheck(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_PostRunToRun(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_ExitPostRun(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_PrepShutdownToWaitForNvM(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_A_FlexRay_5b5a9ac2_TX_Disable(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_A_FlexRay_5b5a9ac2_TX_EnableNoinit(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_A_FlexRay_5b5a9ac2_RX_Disable(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_A_FlexRay_5b5a9ac2_RX_EnableNoinit(void);
/*! \} */ /* End of sharing description for BswMActionListFunctions */
/*! \} */ /* End of group BswMActionListFunctions */

/**********************************************************************************************************************
 *  BswMRuleFunctions
 *********************************************************************************************************************/
/*! \defgroup    BswMRuleFunctions
 * \{
 */

/*!
 * \{
 * \brief       Arbitrates the configured rule.
 * \details     Generated function which depends on the configuration. Arbitrates the rule and returns the action list
 *              which shall be executed.
 * \return      ID of action list to execute (BSWM_NO_ACTIONLIST if no ActionList shall be executed)
 * \pre         -
 * \context     ANY
 * \reentrant   TRUE
 * \synchronous TRUE
 */
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_Rule_DcmCodingReset(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_Rule_Dlog_Init_when_IS_Startup(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_Rule_Dlog_Run_when_Dlog_Init(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_Rule_Start_Omc_Init_when_Darh_Run(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_Rule_Start_StdDiag_Init_when_Omc_Run(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_Rule_Start_Darh_Run_when_Darh_Init(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_Rule_Start_Omc_Run_when_Omc_Init(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_Rule_Start_StdDiag_Run_when_StdDiag_Init(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_Rule_Start_Systime_Run_when_Systime_Init(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_Rule_DcmEcuReset(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_Rule_Systime_Init(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_Rule_Darh_Init(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_Rule_ComM_Channel_is_FULL_COM(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_Rule_ComM_Channel_is_SILENT_COMMUNICATION(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_Rule_Set_DarhReportError_due_ComM_and_CEL_mode(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_Rule_Switch_StdDiagSessionChangeIndication(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_Rule_NDC_Enable_Rx_Enable_Tx(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_Rule_NDC_Enable_Rx_Disable_Tx(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_Rule_NDC_Disable_Rx_Enable_Tx(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_Rule_NDC_Disable_Rx_Disable_Tx(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_Rule_Shutdown(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_Rule_ComM_Channel_is_NO_COM(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_Rule_Set_EcuRunMode_to_Normal_Operation_when_all_modules_run(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_Rule_Reset_when_SimpleTimer0_fired(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_Rule_BS_Init(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_Rule_Bs_Run(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_RunToPostRun(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_RunToPostRunNested(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_WaitToShutdown(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_WakeupToPrep(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_WaitToWakeup(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_WakeupToRun(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_DemInit(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_InitToWakeup(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_PostRunToPrepNested(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_PostRunNested(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_PostRun(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_PrepToWait(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_A_FlexRay_5b5a9ac2_TX(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_A_FlexRay_5b5a9ac2_RX(void);
/*! \} */ /* End of sharing description for BswMRuleFunctions */
/*! \} */ /* End of group BswMRuleFunctions */
/* PRQA L:FUNCTIONDECLARATIONS */
/*! \} */ /* End of group BswMGeneratedFunctions */

#define BSWM_STOP_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"


/* -----------------------------------------------------------------------------
    &&&~ LOCAL VARIABLE DECLARATIONS
 ----------------------------------------------------------------------------- */

/* PRQA S 0779 VARIABLEDECLARATIONS */ /* MD_BswM_0779 */ 

#define BSWM_START_SEC_VAR_NOINIT_8BIT
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

BSWM_LOCAL VAR(uint8, BSWM_VAR_NOINIT) BswM_PduGroupControlInvocation;

#define BSWM_STOP_SEC_VAR_NOINIT_8BIT
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

#define BSWM_START_SEC_VAR_NOINIT_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"


BSWM_LOCAL VAR(Rte_ModeType_DarhReportErrorMode, BSWM_VAR_NOINIT) BswM_Switch_SwitchPort_Darh_ReportErrorMode_DarhReportErrorMode;
BSWM_LOCAL VAR(Rte_ModeType_ErrorMemoryLockSignalReceptionMode, BSWM_VAR_NOINIT) BswM_Switch_SwitchPort_Stm_SwitchPort_EM_LOCK_currentEMLockSignalReceptionMode;
BSWM_LOCAL VAR(Rte_ModeType_StdDiag_SessionModeGroup, BSWM_VAR_NOINIT) BswM_Switch_SwitchPort_StdDiag_SessionChangeIndication_SessionModeDeclarationGroup;
BSWM_LOCAL VAR(Rte_ModeType_StdDiag_NormalCommunicationModeGroup, BSWM_VAR_NOINIT) BswM_Switch_SwitchPort_StdDiagComControlNormalNotificationPort_CommunicationModeDeclarationGroup;
BSWM_LOCAL VAR(Rte_ModeType_ESH_Mode, BSWM_VAR_NOINIT) BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode;
BSWM_LOCAL VAR(SysTime_LifeCycleRequestType, BSWM_VAR_NOINIT) BswM_RteRequest_Provide_MSRP_Systime_requestMode;
BSWM_LOCAL VAR(Dlog_LifeCycleRequestType, BSWM_VAR_NOINIT) BswM_RteRequest_Provide_MSRP_Dlog_requestMode;
BSWM_LOCAL VAR(Darh_LifeCycleRequestType, BSWM_VAR_NOINIT) BswM_RteRequest_Provide_MSRP_Darh_requestMode;
BSWM_LOCAL VAR(StdDiag_LifeCycleRequestType, BSWM_VAR_NOINIT) BswM_RteRequest_Provide_MSRP_StdDiag_requestMode;
BSWM_LOCAL VAR(Omc_LifeCycleRequestType, BSWM_VAR_NOINIT) BswM_RteRequest_Provide_MSRP_Omc_requestMode;
BSWM_LOCAL VAR(IntegrationSample_EcuRunStateModeRequestType, BSWM_VAR_NOINIT) BswM_RteRequest_Provide_MSRP_IntegrationSample_EcuRunMode_IntegrationSample_EcuRunStateRequestMode;
BSWM_LOCAL VAR(Bs_LifeCycleRequestType, BSWM_VAR_NOINIT) BswM_RteRequest_Provide_MRSP_Bs_requestMode;

BSWM_LOCAL VAR(NormalCommunicationModeType, BSWM_VAR_NOINIT) Request_SWCModeReq_StdDiag_CommunicationModeDeclarationGroup_requestedMode;
BSWM_LOCAL VAR(BswM_ESH_RunRequest, BSWM_VAR_NOINIT) Request_ESH_RunRequest_0_requestedMode;
BSWM_LOCAL VAR(BswM_ESH_RunRequest, BSWM_VAR_NOINIT) Request_ESH_RunRequest_1_requestedMode;
BSWM_LOCAL VAR(BswM_ESH_RunRequest, BSWM_VAR_NOINIT) Request_ESH_PostRunRequest_0_requestedMode;
BSWM_LOCAL VAR(BswM_ESH_RunRequest, BSWM_VAR_NOINIT) Request_ESH_PostRunRequest_1_requestedMode;
BSWM_LOCAL VAR(Rte_ModeType_IntegrationSample_EcuRunState, BSWM_VAR_NOINIT) BswM_Mode_Notification_SWCModeSwitch_IS_EcuRunState_EcuRunStateMode;
BSWM_LOCAL VAR(Rte_ModeType_Dlog_LifeCycle, BSWM_VAR_NOINIT) BswM_Mode_Notification_SWCModeSwitch_Lifecycle_Dlog_Mode;
BSWM_LOCAL VAR(Rte_ModeType_Darh_LifeCycle, BSWM_VAR_NOINIT) BswM_Mode_Notification_SWCModeSwitch_Lifecycle_Darh_Mode;
BSWM_LOCAL VAR(Rte_ModeType_Omc_LifeCycle, BSWM_VAR_NOINIT) BswM_Mode_Notification_SWCModeSwitch_Lifecycle_Omc_Mode;
BSWM_LOCAL VAR(Rte_ModeType_SysTime_LifeCycle, BSWM_VAR_NOINIT) BswM_Mode_Notification_SWCModeSwitch_Lifecycle_Systime_Mode;
BSWM_LOCAL VAR(Rte_ModeType_StdDiag_LifeCycle, BSWM_VAR_NOINIT) BswM_Mode_Notification_SWCModeSwitch_Lifecycle_StdDiag_Mode;
BSWM_LOCAL VAR(Rte_ModeType_DcmEcuReset, BSWM_VAR_NOINIT) BswM_Mode_Notification_BSWModeSwitch_DcmEcuReset_DcmEcuReset;
BSWM_LOCAL VAR(Rte_ModeType_DcmDiagnosticSessionControl, BSWM_VAR_NOINIT) BswM_Mode_Notification_BSWModeSwitch_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl;
BSWM_LOCAL VAR(Rte_ModeType_DcmCommunicationControl, BSWM_VAR_NOINIT) BswM_Mode_Notification_SWCModeSwitch_DcmCommunicationControl_ComMConf_ComMChannel_BAC4_FlexRay_8e151c3c_DcmCommunicationControl_ComMConf_ComMChannel_A_FlexRay_5b5a9ac2;
BSWM_LOCAL VAR(Rte_ModeType_Stm_CentralErrorLockMode, BSWM_VAR_NOINIT) BswM_Mode_Notification_SWCModeSwitch_currentCentralErrorLockMode_currentCentralErrorLockMode;
BSWM_LOCAL VAR(Rte_ModeType_IntegrationSample_SimpleTimerState, BSWM_VAR_NOINIT) BswM_Mode_Notification_SWC_Mode_Notification_SimpleTimerMode_SimpleTimerMode;
BSWM_LOCAL VAR(Rte_ModeType_Bs_LifeCycle, BSWM_VAR_NOINIT) BswM_Mode_Notification_SWC_ModeNotification_Lifecycle_Bs_Mode;
BSWM_LOCAL VAR(Rte_ModeType_ESH_Mode, BSWM_VAR_NOINIT) BswM_Mode_Notification_ESH_ModeNotification_BswM_MDGP_ESH_Mode;


/* PRQA S 3218 3 */ /* MD_BswM_3218 */
BSWM_LOCAL VAR(Com_IpduGroupVector, BSWM_VAR_NOINIT) BswM_ComIPduGroupState;

#define BSWM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/* PRQA L:VARIABLEDECLARATIONS */

/**********************************************************************************************************************
 *  LOCAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/



/**********************************************************************************************************************
 *  LOCAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA
**********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA
**********************************************************************************************************************/
/* PRQA S 0310 GLOBALDATADECLARATIONS */ /* MD_BswM_0310 */ 
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  BswM_ActionLists
**********************************************************************************************************************/
/** 
  \var    BswM_ActionLists
  \details
  Element    Description
  FctPtr     Pointer to the array list function.
*/ 
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(BswM_ActionListsType, BSWM_CONST) BswM_ActionLists[45] = {
    /* Index    FctPtr                                                                                                Comment                   Referable Keys */
  { /*     0 */ BswM_ActionList_AL_CodingResetExecution                                                        },  /* [Priority: 0] */  /* [AL_AL_CodingResetExecution] */
  { /*     1 */ BswM_ActionList_AL_Rule_Dlog_Init_True                                                         },  /* [Priority: 0] */  /* [AL_AL_Rule_Dlog_Init_True] */
  { /*     2 */ BswM_ActionList_AL_Rule_Dlog_Run_True                                                          },  /* [Priority: 0] */  /* [AL_AL_Rule_Dlog_Run_True] */
  { /*     3 */ BswM_ActionList_AL_Rule_Start_Omc_Init_when_Darh_Run_True                                      },  /* [Priority: 0] */  /* [AL_AL_Rule_Start_Omc_Init_when_Darh_Run_True] */
  { /*     4 */ BswM_ActionList_AL_Rule_Start_StdDiag_Init_when_Omc_Run_True                                   },  /* [Priority: 0] */  /* [AL_AL_Rule_Start_StdDiag_Init_when_Omc_Run_True] */
  { /*     5 */ BswM_ActionList_AL_RuleDarh_Init_to_Run_True                                                   },  /* [Priority: 0] */  /* [AL_AL_RuleDarh_Init_to_Run_True] */
  { /*     6 */ BswM_ActionList_AL_Rule_Start_Omc_Run_when_Omc_Init_True                                       },  /* [Priority: 0] */  /* [AL_AL_Rule_Start_Omc_Run_when_Omc_Init_True] */
  { /*     7 */ BswM_ActionList_AL_Rule_Start_StdDiag_Run_when_StdDiag_Init_True                               },  /* [Priority: 0] */  /* [AL_AL_Rule_Start_StdDiag_Run_when_StdDiag_Init_True] */
  { /*     8 */ BswM_ActionList_AL_Rule_Start_Systime_Run_when_Systime_Init_True                               },  /* [Priority: 0] */  /* [AL_AL_Rule_Start_Systime_Run_when_Systime_Init_True] */
  { /*     9 */ BswM_ActionList_AL_ResetExecution                                                              },  /* [Priority: 0] */  /* [AL_AL_ResetExecution] */
  { /*    10 */ BswM_ActionList_AL_Rule_Systime_Init_True                                                      },  /* [Priority: 0] */  /* [AL_AL_Rule_Systime_Init_True] */
  { /*    11 */ BswM_ActionList_AL_Rule_Darh_Init_True                                                         },  /* [Priority: 0] */  /* [AL_AL_Rule_Darh_Init_True] */
  { /*    12 */ BswM_ActionList_AL_ComM_Channel_is_FULL_COM                                                    },  /* [Priority: 0] */  /* [AL_AL_ComM_Channel_is_FULL_COM] */
  { /*    13 */ BswM_ActionList_AL_ComM_Channel_is_SILENT_COMMUNICATION_BswMActionList_True                    },  /* [Priority: 0] */  /* [AL_AL_ComM_Channel_is_SILENT_COMMUNICATION_BswMActionList_True] */
  { /*    14 */ BswM_ActionList_AL_Set_DarhReportError_due_ComM_and_CEL_mode_BswMActionList_True               },  /* [Priority: 0] */  /* [AL_AL_Set_DarhReportError_due_ComM_and_CEL_mode_BswMActionList_True] */
  { /*    15 */ BswM_ActionList_AL_Set_DarhReportError_due_ComM_and_CEL_mode_BswMActionList_False              },  /* [Priority: 0] */  /* [AL_AL_Set_DarhReportError_due_ComM_and_CEL_mode_BswMActionList_False] */
  { /*    16 */ BswM_ActionList_INIT_AL_Initialize                                                             },  /* [Priority: 0] */  /* [AL_INIT_AL_Initialize] */
  { /*    17 */ BswM_ActionList_AL_Switch_StdDiagSessionChangeIndication_True                                  },  /* [Priority: 0] */  /* [AL_AL_Switch_StdDiagSessionChangeIndication_True] */
  { /*    18 */ BswM_ActionList_AL_Switch_StdDiagSessionChangeIndication_False                                 },  /* [Priority: 0] */  /* [AL_AL_Switch_StdDiagSessionChangeIndication_False] */
  { /*    19 */ BswM_ActionList_AL_NDC_Enable_RX_AND_TX_NORMAL                                                 },  /* [Priority: 0] */  /* [AL_AL_NDC_Enable_RX_AND_TX_NORMAL] */
  { /*    20 */ BswM_ActionList_AL_NDC_Enable_RX_Disable_TX_NORMAL                                             },  /* [Priority: 0] */  /* [AL_AL_NDC_Enable_RX_Disable_TX_NORMAL] */
  { /*    21 */ BswM_ActionList_AL_NDC_Disable_RX_Enable_TX_NORMAL                                             },  /* [Priority: 0] */  /* [AL_AL_NDC_Disable_RX_Enable_TX_NORMAL] */
  { /*    22 */ BswM_ActionList_AL_NDC_Disable_Rx_And_Tx_Normal                                                },  /* [Priority: 0] */  /* [AL_AL_NDC_Disable_Rx_And_Tx_Normal] */
  { /*    23 */ BswM_ActionList_AL_ComM_Channel_is_NO_COM_BswMActionList_True                                  },  /* [Priority: 0] */  /* [AL_AL_ComM_Channel_is_NO_COM_BswMActionList_True] */
  { /*    24 */ BswM_ActionList_AL_Set_EcuRunMode_to_Normal_Operation_when_all_modules_run_BswMActionList_True },  /* [Priority: 0] */  /* [AL_AL_Set_EcuRunMode_to_Normal_Operation_when_all_modules_run_BswMActionList_True] */
  { /*    25 */ BswM_ActionList_AL_Reset_when_SimpleTimer0_fired_BswMActionList_True                           },  /* [Priority: 0] */  /* [AL_AL_Reset_when_SimpleTimer0_fired_BswMActionList_True] */
  { /*    26 */ BswM_ActionList_AL_Bs_Run_when_Bs_Init                                                         },  /* [Priority: 0] */  /* [AL_AL_Bs_Run_when_Bs_Init] */
  { /*    27 */ BswM_ActionList_AL_BswMActionList_Bs_Init_True                                                 },  /* [Priority: 0] */  /* [AL_AL_BswMActionList_Bs_Init_True] */
  { /*    28 */ BswM_ActionList_ESH_AL_ExitRun                                                                 },  /* [Priority: 0] */  /* [AL_ESH_AL_ExitRun] */
  { /*    29 */ BswM_ActionList_ESH_AL_RunToPostRun                                                            },  /* [Priority: 0] */  /* [AL_ESH_AL_RunToPostRun] */
  { /*    30 */ BswM_ActionList_ESH_AL_WaitForNvMToShutdown                                                    },  /* [Priority: 0] */  /* [AL_ESH_AL_WaitForNvMToShutdown] */
  { /*    31 */ BswM_ActionList_ESH_AL_WakeupToPrep                                                            },  /* [Priority: 0] */  /* [AL_ESH_AL_WakeupToPrep] */
  { /*    32 */ BswM_ActionList_ESH_AL_WaitForNvMWakeup                                                        },  /* [Priority: 0] */  /* [AL_ESH_AL_WaitForNvMWakeup] */
  { /*    33 */ BswM_ActionList_ESH_AL_WakeupToRun                                                             },  /* [Priority: 0] */  /* [AL_ESH_AL_WakeupToRun] */
  { /*    34 */ BswM_ActionList_ESH_AL_DemInit                                                                 },  /* [Priority: 0] */  /* [AL_ESH_AL_DemInit] */
  { /*    35 */ BswM_ActionList_ESH_AL_InitToWakeup                                                            },  /* [Priority: 0] */  /* [AL_ESH_AL_InitToWakeup] */
  { /*    36 */ BswM_ActionList_ESH_AL_PostRunToPrepShutdown                                                   },  /* [Priority: 0] */  /* [AL_ESH_AL_PostRunToPrepShutdown] */
  { /*    37 */ BswM_ActionList_ESH_AL_ESH_PostRunToPrepCheck                                                  },  /* [Priority: 0] */  /* [AL_ESH_AL_ESH_PostRunToPrepCheck] */
  { /*    38 */ BswM_ActionList_ESH_AL_PostRunToRun                                                            },  /* [Priority: 0] */  /* [AL_ESH_AL_PostRunToRun] */
  { /*    39 */ BswM_ActionList_ESH_AL_ExitPostRun                                                             },  /* [Priority: 0] */  /* [AL_ESH_AL_ExitPostRun] */
  { /*    40 */ BswM_ActionList_ESH_AL_PrepShutdownToWaitForNvM                                                },  /* [Priority: 0] */  /* [AL_ESH_AL_PrepShutdownToWaitForNvM] */
  { /*    41 */ BswM_ActionList_CC_AL_A_FlexRay_5b5a9ac2_TX_Disable                                            },  /* [Priority: 0] */  /* [AL_CC_AL_A_FlexRay_5b5a9ac2_TX_Disable] */
  { /*    42 */ BswM_ActionList_CC_AL_A_FlexRay_5b5a9ac2_TX_EnableNoinit                                       },  /* [Priority: 0] */  /* [AL_CC_AL_A_FlexRay_5b5a9ac2_TX_EnableNoinit] */
  { /*    43 */ BswM_ActionList_CC_AL_A_FlexRay_5b5a9ac2_RX_Disable                                            },  /* [Priority: 0] */  /* [AL_CC_AL_A_FlexRay_5b5a9ac2_RX_Disable] */
  { /*    44 */ BswM_ActionList_CC_AL_A_FlexRay_5b5a9ac2_RX_EnableNoinit                                       }   /* [Priority: 0] */  /* [AL_CC_AL_A_FlexRay_5b5a9ac2_RX_EnableNoinit] */
};
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_DeferredRules
**********************************************************************************************************************/
/** 
  \var    BswM_DeferredRules
  \details
  Element     Description
  RulesIdx    the index of the 1:1 relation pointing to BswM_Rules
*/ 
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(BswM_DeferredRulesType, BSWM_CONST) BswM_DeferredRules[30] = {
    /* Index    RulesIdx        Referable Keys */
  { /*     0 */       1U },  /* [R_Rule_Dlog_Init_when_IS_Startup] */
  { /*     1 */       2U },  /* [R_Rule_Dlog_Run_when_Dlog_Init] */
  { /*     2 */       3U },  /* [R_Rule_Start_Omc_Init_when_Darh_Run] */
  { /*     3 */       4U },  /* [R_Rule_Start_StdDiag_Init_when_Omc_Run] */
  { /*     4 */       5U },  /* [R_Rule_Start_Darh_Run_when_Darh_Init] */
  { /*     5 */       6U },  /* [R_Rule_Start_Omc_Run_when_Omc_Init] */
  { /*     6 */       7U },  /* [R_Rule_Start_StdDiag_Run_when_StdDiag_Init] */
  { /*     7 */       8U },  /* [R_Rule_Start_Systime_Run_when_Systime_Init] */
  { /*     8 */       9U },  /* [R_Rule_DcmEcuReset] */
  { /*     9 */      10U },  /* [R_Rule_Systime_Init] */
  { /*    10 */      11U },  /* [R_Rule_Darh_Init] */
  { /*    11 */      12U },  /* [R_Rule_ComM_Channel_is_FULL_COM] */
  { /*    12 */      14U },  /* [R_Rule_Set_DarhReportError_due_ComM_and_CEL_mode] */
  { /*    13 */      15U },  /* [R_Rule_Switch_StdDiagSessionChangeIndication] */
  { /*    14 */      16U },  /* [R_Rule_NDC_Enable_Rx_Enable_Tx] */
  { /*    15 */      17U },  /* [R_Rule_NDC_Enable_Rx_Disable_Tx] */
  { /*    16 */      18U },  /* [R_Rule_NDC_Disable_Rx_Enable_Tx] */
  { /*    17 */      19U },  /* [R_Rule_NDC_Disable_Rx_Disable_Tx] */
  { /*    18 */      20U },  /* [R_Rule_Shutdown] */
  { /*    19 */      22U },  /* [R_Rule_Set_EcuRunMode_to_Normal_Operation_when_all_modules_run] */
  { /*    20 */      23U },  /* [R_Rule_Reset_when_SimpleTimer0_fired] */
  { /*    21 */      24U },  /* [R_Rule_BS_Init] */
  { /*    22 */      25U },  /* [R_Rule_Bs_Run] */
  { /*    23 */      26U },  /* [R_ESH_RunToPostRun] */
  { /*    24 */      28U },  /* [R_ESH_WaitToShutdown] */
  { /*    25 */      29U },  /* [R_ESH_WakeupToPrep] */
  { /*    26 */      30U },  /* [R_ESH_WaitToWakeup] */
  { /*    27 */      31U },  /* [R_ESH_WakeupToRun] */
  { /*    28 */      36U },  /* [R_ESH_PostRun] */
  { /*    29 */      37U }   /* [R_ESH_PrepToWait] */
};
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_GenericMapping
**********************************************************************************************************************/
/** 
  \var    BswM_GenericMapping
  \brief  Maps the external id of BswMGenericRequest to an internal id and references immediate request ports.
  \details
  Element                  Description
  ExternalId               External id of BswMGenericRequest.
  ImmediateUserEndIdx      the end index of the 0:n relation pointing to BswM_ImmediateUser
  ImmediateUserStartIdx    the start index of the 0:n relation pointing to BswM_ImmediateUser
  InitValue                Initialization value of port.
*/ 
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(BswM_GenericMappingType, BSWM_CONST) BswM_GenericMapping[4] = {
    /* Index    ExternalId  ImmediateUserEndIdx                          ImmediateUserStartIdx                          InitValue                                                            Referable Keys */
  { /*     0 */ 0         ,                                          3U,                                            2U, 0                                                             },  /* [GENERIC_0, MRP_GenericModeRequestPort_IS_CodingReset] */
  { /*     1 */ 230       ,                                          4U,                                            3U, BSWM_GENERICVALUE_ESH_State_ESH_INIT                          },  /* [GENERIC_1, MRP_ESH_State] */
  { /*     2 */ 231       ,                                          5U,                                            4U, BSWM_GENERICVALUE_ESH_DemInitStatus_DEM_INITIALIZED           },  /* [GENERIC_2, MRP_ESH_DemInitStatus] */
  { /*     3 */ 232       , BSWM_NO_IMMEDIATEUSERENDIDXOFGENERICMAPPING, BSWM_NO_IMMEDIATEUSERSTARTIDXOFGENERICMAPPING, BSWM_GENERICVALUE_ESH_ComMPendingRequests_ESH_COMM_NO_REQUEST }   /* [GENERIC_3, MRP_ESH_ComMPendingRequests] */
};
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_ImmediateUser
**********************************************************************************************************************/
/** 
  \var    BswM_ImmediateUser
  \brief  Contains all immediate request ports.
  \details
  Element             Description
  MaskedBits          contains bitcoded the boolean data of BswM_OnInitOfImmediateUser, BswM_RulesIndUsedOfImmediateUser
  RulesIndEndIdx      the end index of the 0:n relation pointing to BswM_RulesInd
  RulesIndStartIdx    the start index of the 0:n relation pointing to BswM_RulesInd
*/ 
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(BswM_ImmediateUserType, BSWM_CONST) BswM_ImmediateUser[6] = {
    /* Index    MaskedBits  RulesIndEndIdx                         RulesIndStartIdx                               Comment                                                                  Referable Keys */
  { /*     0 */      0x03U,                                    5U,                                      0U },  /* [Name: ComMModeInd_BAC4_FlexRay_8e151c3c]                    */  /* [MRP_ComMModeInd_BAC4_FlexRay_8e151c3c, COMM_CHANNEL_0] */
  { /*     1 */      0x01U,                                    7U,                                      5U },  /* [Name: CC_FrSMIndication_A_FlexRay_5b5a9ac2]                 */  /* [MRP_CC_FrSMIndication_A_FlexRay_5b5a9ac2, FRSM_CHANNEL_0] */
  { /*     2 */      0x03U,                                    8U,                                      7U },  /* [Name: GenericModeRequestPort_IS_CodingReset]                */  /* [MRP_GenericModeRequestPort_IS_CodingReset, GENERIC_0] */
  { /*     3 */      0x03U,                                   16U,                                      8U },  /* [Name: ESH_State]                                            */  /* [MRP_ESH_State, GENERIC_1] */
  { /*     4 */      0x00U, BSWM_NO_RULESINDENDIDXOFIMMEDIATEUSER, BSWM_NO_RULESINDSTARTIDXOFIMMEDIATEUSER },  /* [Name: ESH_DemInitStatus]                                    */  /* [MRP_ESH_DemInitStatus, GENERIC_2] */
  { /*     5 */      0x03U,                                   21U,                                     16U }   /* [Name: SWCModeReq_StdDiag_CommunicationModeDeclarationGroup] */  /* [MRP_SWCModeReq_StdDiag_CommunicationModeDeclarationGroup, SWC_REQUEST_4] */
};
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_ModeRequestMapping
**********************************************************************************************************************/
/** 
  \var    BswM_ModeRequestMapping
  \brief  Maps the external id of BswMSwcModeRequest to an internal id and references immediate request ports.
  \details
  Element                  Description
  ImmediateUserEndIdx      the end index of the 0:n relation pointing to BswM_ImmediateUser
  ImmediateUserStartIdx    the start index of the 0:n relation pointing to BswM_ImmediateUser
*/ 
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(BswM_ModeRequestMappingType, BSWM_CONST) BswM_ModeRequestMapping[5] = {
    /* Index    ImmediateUserEndIdx                              ImmediateUserStartIdx                                    Referable Keys */
  { /*     0 */ BSWM_NO_IMMEDIATEUSERENDIDXOFMODEREQUESTMAPPING, BSWM_NO_IMMEDIATEUSERSTARTIDXOFMODEREQUESTMAPPING },  /* [SWC_REQUEST_0, MRP_ESH_PostRunRequest_0] */
  { /*     1 */ BSWM_NO_IMMEDIATEUSERENDIDXOFMODEREQUESTMAPPING, BSWM_NO_IMMEDIATEUSERSTARTIDXOFMODEREQUESTMAPPING },  /* [SWC_REQUEST_1, MRP_ESH_PostRunRequest_1] */
  { /*     2 */ BSWM_NO_IMMEDIATEUSERENDIDXOFMODEREQUESTMAPPING, BSWM_NO_IMMEDIATEUSERSTARTIDXOFMODEREQUESTMAPPING },  /* [SWC_REQUEST_2, MRP_ESH_RunRequest_0] */
  { /*     3 */ BSWM_NO_IMMEDIATEUSERENDIDXOFMODEREQUESTMAPPING, BSWM_NO_IMMEDIATEUSERSTARTIDXOFMODEREQUESTMAPPING },  /* [SWC_REQUEST_3, MRP_ESH_RunRequest_1] */
  { /*     4 */                                              6U,                                                5U }   /* [SWC_REQUEST_4, MRP_SWCModeReq_StdDiag_CommunicationModeDeclarationGroup] */
};
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_Rules
**********************************************************************************************************************/
/** 
  \var    BswM_Rules
  \details
  Element    Description
  Id         External id of rule.
  Init       Initialization value of rule state (TRUE, FALSE, UNDEFINED or DEACTIVATED).
  FctPtr     Pointer to the rule function which does the arbitration.
*/ 
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(BswM_RulesType, BSWM_CONST) BswM_Rules[40] = {
    /* Index    Id   Init            FctPtr                                                                        Referable Keys */
  { /*     0 */ 20U, BSWM_FALSE    , BswM_Rule_Rule_DcmCodingReset                                          },  /* [R_Rule_DcmCodingReset, MRP_GenericModeRequestPort_IS_CodingReset] */
  { /*     1 */ 22U, BSWM_FALSE    , BswM_Rule_Rule_Dlog_Init_when_IS_Startup                               },  /* [R_Rule_Dlog_Init_when_IS_Startup, MRP_SWCModeSwitch_Lifecycle_Dlog, MRP_SWCModeSwitch_IS_EcuRunState] */
  { /*     2 */ 23U, BSWM_FALSE    , BswM_Rule_Rule_Dlog_Run_when_Dlog_Init                                 },  /* [R_Rule_Dlog_Run_when_Dlog_Init, MRP_SWCModeSwitch_Lifecycle_Dlog, MRP_SWCModeSwitch_IS_EcuRunState] */
  { /*     3 */ 33U, BSWM_FALSE    , BswM_Rule_Rule_Start_Omc_Init_when_Darh_Run                            },  /* [R_Rule_Start_Omc_Init_when_Darh_Run, MRP_SWCModeSwitch_Lifecycle_Darh, MRP_SWCModeSwitch_IS_EcuRunState, MRP_SWCModeSwitch_Lifecycle_Omc] */
  { /*     4 */ 35U, BSWM_FALSE    , BswM_Rule_Rule_Start_StdDiag_Init_when_Omc_Run                         },  /* [R_Rule_Start_StdDiag_Init_when_Omc_Run, MRP_SWCModeSwitch_Lifecycle_Omc, MRP_SWCModeSwitch_Lifecycle_Dlog, MRP_SWCModeSwitch_IS_EcuRunState, MRP_SWCModeSwitch_Lifecycle_StdDiag] */
  { /*     5 */ 32U, BSWM_FALSE    , BswM_Rule_Rule_Start_Darh_Run_when_Darh_Init                           },  /* [R_Rule_Start_Darh_Run_when_Darh_Init, MRP_SWCModeSwitch_Lifecycle_Darh, MRP_SWCModeSwitch_IS_EcuRunState] */
  { /*     6 */ 34U, BSWM_FALSE    , BswM_Rule_Rule_Start_Omc_Run_when_Omc_Init                             },  /* [R_Rule_Start_Omc_Run_when_Omc_Init, MRP_SWCModeSwitch_Lifecycle_Omc, MRP_SWCModeSwitch_IS_EcuRunState] */
  { /*     7 */ 36U, BSWM_FALSE    , BswM_Rule_Rule_Start_StdDiag_Run_when_StdDiag_Init                     },  /* [R_Rule_Start_StdDiag_Run_when_StdDiag_Init, MRP_SWCModeSwitch_Lifecycle_StdDiag, MRP_SWCModeSwitch_IS_EcuRunState] */
  { /*     8 */ 37U, BSWM_FALSE    , BswM_Rule_Rule_Start_Systime_Run_when_Systime_Init                     },  /* [R_Rule_Start_Systime_Run_when_Systime_Init, MRP_SWCModeSwitch_Lifecycle_Systime, MRP_SWCModeSwitch_IS_EcuRunState, MRP_ComMModeInd_BAC4_FlexRay_8e151c3c] */
  { /*     9 */ 21U, BSWM_FALSE    , BswM_Rule_Rule_DcmEcuReset                                             },  /* [R_Rule_DcmEcuReset, MRP_BSWModeSwitch_DcmEcuReset, MRP_SWCModeSwitch_IS_EcuRunState] */
  { /*    10 */ 39U, BSWM_FALSE    , BswM_Rule_Rule_Systime_Init                                            },  /* [R_Rule_Systime_Init, MRP_SWCModeSwitch_Lifecycle_Systime, MRP_SWCModeSwitch_IS_EcuRunState] */
  { /*    11 */ 19U, BSWM_FALSE    , BswM_Rule_Rule_Darh_Init                                               },  /* [R_Rule_Darh_Init, MRP_SWCModeSwitch_Lifecycle_Dlog, MRP_SWCModeSwitch_IS_EcuRunState] */
  { /*    12 */ 16U, BSWM_FALSE    , BswM_Rule_Rule_ComM_Channel_is_FULL_COM                                },  /* [R_Rule_ComM_Channel_is_FULL_COM, MRP_ComMModeInd_BAC4_FlexRay_8e151c3c, MRP_SWCModeSwitch_DcmCommunicationControl_ComMConf_ComMChannel_BAC4_FlexRay_8e151c3c, MRP_SWCModeReq_StdDiag_CommunicationModeDeclarationGroup] */
  { /*    13 */ 18U, BSWM_FALSE    , BswM_Rule_Rule_ComM_Channel_is_SILENT_COMMUNICATION                    },  /* [R_Rule_ComM_Channel_is_SILENT_COMMUNICATION, MRP_ComMModeInd_BAC4_FlexRay_8e151c3c] */
  { /*    14 */ 29U, BSWM_UNDEFINED, BswM_Rule_Rule_Set_DarhReportError_due_ComM_and_CEL_mode               },  /* [R_Rule_Set_DarhReportError_due_ComM_and_CEL_mode, MRP_ComMModeInd_BAC4_FlexRay_8e151c3c, MRP_SWCModeSwitch_currentCentralErrorLockMode] */
  { /*    15 */ 38U, BSWM_FALSE    , BswM_Rule_Rule_Switch_StdDiagSessionChangeIndication                   },  /* [R_Rule_Switch_StdDiagSessionChangeIndication, MRP_BSWModeSwitch_DcmDiagnosticSessionControl] */
  { /*    16 */ 27U, BSWM_FALSE    , BswM_Rule_Rule_NDC_Enable_Rx_Enable_Tx                                 },  /* [R_Rule_NDC_Enable_Rx_Enable_Tx, MRP_SWCModeSwitch_DcmCommunicationControl_ComMConf_ComMChannel_BAC4_FlexRay_8e151c3c, MRP_SWCModeReq_StdDiag_CommunicationModeDeclarationGroup] */
  { /*    17 */ 26U, BSWM_FALSE    , BswM_Rule_Rule_NDC_Enable_Rx_Disable_Tx                                },  /* [R_Rule_NDC_Enable_Rx_Disable_Tx, MRP_SWCModeSwitch_DcmCommunicationControl_ComMConf_ComMChannel_BAC4_FlexRay_8e151c3c, MRP_SWCModeReq_StdDiag_CommunicationModeDeclarationGroup] */
  { /*    18 */ 25U, BSWM_FALSE    , BswM_Rule_Rule_NDC_Disable_Rx_Enable_Tx                                },  /* [R_Rule_NDC_Disable_Rx_Enable_Tx, MRP_SWCModeSwitch_DcmCommunicationControl_ComMConf_ComMChannel_BAC4_FlexRay_8e151c3c, MRP_SWCModeReq_StdDiag_CommunicationModeDeclarationGroup] */
  { /*    19 */ 24U, BSWM_FALSE    , BswM_Rule_Rule_NDC_Disable_Rx_Disable_Tx                               },  /* [R_Rule_NDC_Disable_Rx_Disable_Tx, MRP_SWCModeSwitch_DcmCommunicationControl_ComMConf_ComMChannel_BAC4_FlexRay_8e151c3c, MRP_SWCModeReq_StdDiag_CommunicationModeDeclarationGroup] */
  { /*    20 */ 31U, BSWM_FALSE    , BswM_Rule_Rule_Shutdown                                                },  /* [R_Rule_Shutdown, MRP_SWCModeSwitch_IS_EcuRunState] */
  { /*    21 */ 17U, BSWM_FALSE    , BswM_Rule_Rule_ComM_Channel_is_NO_COM                                  },  /* [R_Rule_ComM_Channel_is_NO_COM, MRP_ComMModeInd_BAC4_FlexRay_8e151c3c] */
  { /*    22 */ 30U, BSWM_FALSE    , BswM_Rule_Rule_Set_EcuRunMode_to_Normal_Operation_when_all_modules_run },  /* [R_Rule_Set_EcuRunMode_to_Normal_Operation_when_all_modules_run, MRP_SWCModeSwitch_IS_EcuRunState, MRP_SWCModeSwitch_Lifecycle_Dlog, MRP_SWCModeSwitch_Lifecycle_Darh, MRP_SWCModeSwitch_Lifecycle_Omc, MRP_SWCModeSwitch_Lifecycle_Systime, MRP_SWCModeSwitch_Lifecycle_StdDiag] */
  { /*    23 */ 28U, BSWM_FALSE    , BswM_Rule_Rule_Reset_when_SimpleTimer0_fired                           },  /* [R_Rule_Reset_when_SimpleTimer0_fired, MRP_SWC_Mode_Notification_SimpleTimerMode] */
  { /*    24 */ 14U, BSWM_FALSE    , BswM_Rule_Rule_BS_Init                                                 },  /* [R_Rule_BS_Init, MRP_SWC_ModeNotification_Lifecycle_Bs, MRP_SWCModeSwitch_IS_EcuRunState] */
  { /*    25 */ 15U, BSWM_FALSE    , BswM_Rule_Rule_Bs_Run                                                  },  /* [R_Rule_Bs_Run, MRP_SWC_ModeNotification_Lifecycle_Bs, MRP_SWCModeSwitch_IS_EcuRunState] */
  { /*    26 */  8U, BSWM_FALSE    , BswM_Rule_ESH_RunToPostRun                                             },  /* [R_ESH_RunToPostRun, MRP_ESH_State, MRP_ESH_ComMIndication_A_FlexRay_5b5a9ac2, MRP_ESH_RunRequest_0, MRP_ESH_RunRequest_1, MRP_ESH_SelfRunRequestTimer, MRP_ESH_ModeNotification] */
  { /*    27 */  9U, BSWM_FALSE    , BswM_Rule_ESH_RunToPostRunNested                                       },  /* [R_ESH_RunToPostRunNested] */
  { /*    28 */ 10U, BSWM_FALSE    , BswM_Rule_ESH_WaitToShutdown                                           },  /* [R_ESH_WaitToShutdown, MRP_ESH_State, MRP_ESH_NvMIndication, MRP_ESH_NvM_WriteAllTimer, MRP_ESH_EcuM_GetValidatedWakeupEvents, MRP_ESH_ComMPendingRequests] */
  { /*    29 */ 12U, BSWM_FALSE    , BswM_Rule_ESH_WakeupToPrep                                             },  /* [R_ESH_WakeupToPrep, MRP_ESH_State, MRP_ESH_NvMIndication, MRP_ESH_NvM_CancelWriteAllTimer, MRP_ESH_EcuM_GetPendingWakeupEvents, MRP_ESH_EcuM_GetValidatedWakeupEvents, MRP_ESH_ComMPendingRequests, MRP_ESH_ModeNotification] */
  { /*    30 */ 11U, BSWM_FALSE    , BswM_Rule_ESH_WaitToWakeup                                             },  /* [R_ESH_WaitToWakeup, MRP_ESH_State, MRP_ESH_EcuM_GetValidatedWakeupEvents, MRP_ESH_ComMPendingRequests] */
  { /*    31 */ 13U, BSWM_FALSE    , BswM_Rule_ESH_WakeupToRun                                              },  /* [R_ESH_WakeupToRun, MRP_ESH_State, MRP_ESH_EcuM_GetValidatedWakeupEvents, MRP_ESH_ComMPendingRequests, MRP_ESH_NvMIndication, MRP_ESH_NvM_CancelWriteAllTimer, MRP_ESH_ModeNotification] */
  { /*    32 */  2U, BSWM_FALSE    , BswM_Rule_ESH_DemInit                                                  },  /* [R_ESH_DemInit] */
  { /*    33 */  3U, BSWM_FALSE    , BswM_Rule_ESH_InitToWakeup                                             },  /* [R_ESH_InitToWakeup, MRP_ESH_State] */
  { /*    34 */  6U, BSWM_FALSE    , BswM_Rule_ESH_PostRunToPrepNested                                      },  /* [R_ESH_PostRunToPrepNested] */
  { /*    35 */  5U, BSWM_FALSE    , BswM_Rule_ESH_PostRunNested                                            },  /* [R_ESH_PostRunNested] */
  { /*    36 */  4U, BSWM_FALSE    , BswM_Rule_ESH_PostRun                                                  },  /* [R_ESH_PostRun, MRP_ESH_State, MRP_ESH_ModeNotification] */
  { /*    37 */  7U, BSWM_FALSE    , BswM_Rule_ESH_PrepToWait                                               },  /* [R_ESH_PrepToWait, MRP_ESH_State, MRP_ESH_ModeNotification] */
  { /*    38 */  1U, BSWM_FALSE    , BswM_Rule_CC_A_FlexRay_5b5a9ac2_TX                                     },  /* [R_CC_A_FlexRay_5b5a9ac2_TX, MRP_CC_FrSMIndication_A_FlexRay_5b5a9ac2] */
  { /*    39 */  0U, BSWM_FALSE    , BswM_Rule_CC_A_FlexRay_5b5a9ac2_RX                                     }   /* [R_CC_A_FlexRay_5b5a9ac2_RX, MRP_CC_FrSMIndication_A_FlexRay_5b5a9ac2] */
};
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_RulesInd
**********************************************************************************************************************/
/** 
  \var    BswM_RulesInd
  \brief  the indexes of the 1:1 sorted relation pointing to BswM_Rules
*/ 
#define BSWM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(BswM_RulesIndType, BSWM_CONST) BswM_RulesInd[21] = {
  /* Index    RulesInd      Referable Keys */
  /*     0 */       8U,  /* [MRP_ComMModeInd_BAC4_FlexRay_8e151c3c] */
  /*     1 */      12U,  /* [MRP_ComMModeInd_BAC4_FlexRay_8e151c3c] */
  /*     2 */      13U,  /* [MRP_ComMModeInd_BAC4_FlexRay_8e151c3c] */
  /*     3 */      14U,  /* [MRP_ComMModeInd_BAC4_FlexRay_8e151c3c] */
  /*     4 */      21U,  /* [MRP_ComMModeInd_BAC4_FlexRay_8e151c3c] */
  /*     5 */      38U,  /* [MRP_CC_FrSMIndication_A_FlexRay_5b5a9ac2] */
  /*     6 */      39U,  /* [MRP_CC_FrSMIndication_A_FlexRay_5b5a9ac2] */
  /*     7 */       0U,  /* [MRP_GenericModeRequestPort_IS_CodingReset] */
  /*     8 */      26U,  /* [MRP_ESH_State] */
  /*     9 */      28U,  /* [MRP_ESH_State] */
  /*    10 */      29U,  /* [MRP_ESH_State] */
  /*    11 */      30U,  /* [MRP_ESH_State] */
  /*    12 */      31U,  /* [MRP_ESH_State] */
  /*    13 */      33U,  /* [MRP_ESH_State] */
  /*    14 */      36U,  /* [MRP_ESH_State] */
  /*    15 */      37U,  /* [MRP_ESH_State] */
  /*    16 */      12U,  /* [MRP_SWCModeReq_StdDiag_CommunicationModeDeclarationGroup] */
  /*    17 */      16U,  /* [MRP_SWCModeReq_StdDiag_CommunicationModeDeclarationGroup] */
  /*    18 */      17U,  /* [MRP_SWCModeReq_StdDiag_CommunicationModeDeclarationGroup] */
  /*    19 */      18U,  /* [MRP_SWCModeReq_StdDiag_CommunicationModeDeclarationGroup] */
  /*    20 */      19U   /* [MRP_SWCModeReq_StdDiag_CommunicationModeDeclarationGroup] */
};
#define BSWM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_ActionListQueue
**********************************************************************************************************************/
/** 
  \var    BswM_ActionListQueue
  \brief  Variable to store action lists which shall be executed.
*/ 
#define BSWM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(uBswM_ActionListQueueType, BSWM_VAR_NOINIT) BswM_ActionListQueue;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [AL_AL_CodingResetExecution] */
  /*     1 */  /* [AL_AL_Rule_Dlog_Init_True] */
  /*     2 */  /* [AL_AL_Rule_Dlog_Run_True] */
  /*     3 */  /* [AL_AL_Rule_Start_Omc_Init_when_Darh_Run_True] */
  /*     4 */  /* [AL_AL_Rule_Start_StdDiag_Init_when_Omc_Run_True] */
  /*     5 */  /* [AL_AL_RuleDarh_Init_to_Run_True] */
  /*     6 */  /* [AL_AL_Rule_Start_Omc_Run_when_Omc_Init_True] */
  /*     7 */  /* [AL_AL_Rule_Start_StdDiag_Run_when_StdDiag_Init_True] */
  /*     8 */  /* [AL_AL_Rule_Start_Systime_Run_when_Systime_Init_True] */
  /*     9 */  /* [AL_AL_ResetExecution] */
  /*    10 */  /* [AL_AL_Rule_Systime_Init_True] */
  /*    11 */  /* [AL_AL_Rule_Darh_Init_True] */
  /*    12 */  /* [AL_AL_ComM_Channel_is_FULL_COM] */
  /*    13 */  /* [AL_AL_ComM_Channel_is_SILENT_COMMUNICATION_BswMActionList_True] */
  /*    14 */  /* [AL_AL_Set_DarhReportError_due_ComM_and_CEL_mode_BswMActionList_True] */
  /*    15 */  /* [AL_AL_Set_DarhReportError_due_ComM_and_CEL_mode_BswMActionList_False] */
  /*    16 */  /* [AL_INIT_AL_Initialize] */
  /*    17 */  /* [AL_AL_Switch_StdDiagSessionChangeIndication_True] */
  /*    18 */  /* [AL_AL_Switch_StdDiagSessionChangeIndication_False] */
  /*    19 */  /* [AL_AL_NDC_Enable_RX_AND_TX_NORMAL] */
  /*    20 */  /* [AL_AL_NDC_Enable_RX_Disable_TX_NORMAL] */
  /*    21 */  /* [AL_AL_NDC_Disable_RX_Enable_TX_NORMAL] */
  /*    22 */  /* [AL_AL_NDC_Disable_Rx_And_Tx_Normal] */
  /*    23 */  /* [AL_AL_ComM_Channel_is_NO_COM_BswMActionList_True] */
  /*    24 */  /* [AL_AL_Set_EcuRunMode_to_Normal_Operation_when_all_modules_run_BswMActionList_True] */
  /*    25 */  /* [AL_AL_Reset_when_SimpleTimer0_fired_BswMActionList_True] */
  /*    26 */  /* [AL_AL_Bs_Run_when_Bs_Init] */
  /*    27 */  /* [AL_AL_BswMActionList_Bs_Init_True] */
  /*    28 */  /* [AL_ESH_AL_ExitRun] */
  /*    29 */  /* [AL_ESH_AL_RunToPostRun] */
  /*    30 */  /* [AL_ESH_AL_WaitForNvMToShutdown] */
  /*    31 */  /* [AL_ESH_AL_WakeupToPrep] */
  /*    32 */  /* [AL_ESH_AL_WaitForNvMWakeup] */
  /*    33 */  /* [AL_ESH_AL_WakeupToRun] */
  /*    34 */  /* [AL_ESH_AL_DemInit] */
  /*    35 */  /* [AL_ESH_AL_InitToWakeup] */
  /*    36 */  /* [AL_ESH_AL_PostRunToPrepShutdown] */
  /*    37 */  /* [AL_ESH_AL_ESH_PostRunToPrepCheck] */
  /*    38 */  /* [AL_ESH_AL_PostRunToRun] */
  /*    39 */  /* [AL_ESH_AL_ExitPostRun] */
  /*    40 */  /* [AL_ESH_AL_PrepShutdownToWaitForNvM] */
  /*    41 */  /* [AL_CC_AL_A_FlexRay_5b5a9ac2_TX_Disable] */
  /*    42 */  /* [AL_CC_AL_A_FlexRay_5b5a9ac2_TX_EnableNoinit] */
  /*    43 */  /* [AL_CC_AL_A_FlexRay_5b5a9ac2_RX_Disable] */
  /*    44 */  /* [AL_CC_AL_A_FlexRay_5b5a9ac2_RX_EnableNoinit] */

#define BSWM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_ComMChannelState
**********************************************************************************************************************/
/** 
  \var    BswM_ComMChannelState
  \brief  Variable to store current mode of BswMComMIndication mode request ports.
*/ 
#define BSWM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(ComM_ModeType, BSWM_VAR_NOINIT) BswM_ComMChannelState[1];
  /* Index        Referable Keys  */
  /*     0 */  /* [COMM_CHANNEL_0, MRP_ComMModeInd_BAC4_FlexRay_8e151c3c, MRP_ESH_ComMIndication_A_FlexRay_5b5a9ac2] */

#define BSWM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_FrSMState
**********************************************************************************************************************/
/** 
  \var    BswM_FrSMState
  \brief  Variable to store current mode of BswMFrSMIndication mode request ports.
*/ 
#define BSWM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(FrSM_BswM_StateType, BSWM_VAR_NOINIT) BswM_FrSMState[1];
  /* Index        Referable Keys  */
  /*     0 */  /* [FRSM_CHANNEL_0, MRP_CC_FrSMIndication_A_FlexRay_5b5a9ac2] */

#define BSWM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_GenericState
**********************************************************************************************************************/
/** 
  \var    BswM_GenericState
  \brief  Variable to store current mode of BswMGenericRequest mode request ports.
*/ 
#define BSWM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(BswM_ModeType, BSWM_VAR_NOINIT) BswM_GenericState[4];
  /* Index        Referable Keys  */
  /*     0 */  /* [GENERIC_0, MRP_GenericModeRequestPort_IS_CodingReset] */
  /*     1 */  /* [GENERIC_1, MRP_ESH_State] */
  /*     2 */  /* [GENERIC_2, MRP_ESH_DemInitStatus] */
  /*     3 */  /* [GENERIC_3, MRP_ESH_ComMPendingRequests] */

#define BSWM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_Initialized
**********************************************************************************************************************/
#define BSWM_START_SEC_VAR_ZERO_INIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(BswM_InitializedType, BSWM_VAR_ZERO_INIT) BswM_Initialized = FALSE;
#define BSWM_STOP_SEC_VAR_ZERO_INIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_ModeRequestQueue
**********************************************************************************************************************/
/** 
  \var    BswM_ModeRequestQueue
  \brief  Variable to store an immediate mode request which must be queued because of a current active arbitration.
*/ 
#define BSWM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(BswM_ModeRequestQueueType, BSWM_VAR_NOINIT) BswM_ModeRequestQueue[6];
  /* Index        Referable Keys  */
  /*     0 */  /* [MRP_ComMModeInd_BAC4_FlexRay_8e151c3c, COMM_CHANNEL_0] */
  /*     1 */  /* [MRP_CC_FrSMIndication_A_FlexRay_5b5a9ac2, FRSM_CHANNEL_0] */
  /*     2 */  /* [MRP_GenericModeRequestPort_IS_CodingReset, GENERIC_0] */
  /*     3 */  /* [MRP_ESH_State, GENERIC_1] */
  /*     4 */  /* [MRP_ESH_DemInitStatus, GENERIC_2] */
  /*     5 */  /* [MRP_SWCModeReq_StdDiag_CommunicationModeDeclarationGroup, SWC_REQUEST_4] */

#define BSWM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_NvMJobState
**********************************************************************************************************************/
/** 
  \var    BswM_NvMJobState
  \brief  Variable to store current mode of BswMNvMJobModeIndication mode request ports.
*/ 
#define BSWM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(NvM_RequestResultType, BSWM_VAR_NOINIT) BswM_NvMJobState[1];
  /* Index        Referable Keys  */
  /*     0 */  /* [NVM_JOB_0, MRP_ESH_NvMIndication] */

#define BSWM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_RuleStates
**********************************************************************************************************************/
/** 
  \var    BswM_RuleStates
  \brief  Stores the last execution state of the rule.
*/ 
#define BSWM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(BswM_RuleStatesType, BSWM_VAR_NOINIT) BswM_RuleStates[40];
  /* Index        Referable Keys  */
  /*     0 */  /* [R_Rule_DcmCodingReset, MRP_GenericModeRequestPort_IS_CodingReset] */
  /*     1 */  /* [R_Rule_Dlog_Init_when_IS_Startup, MRP_SWCModeSwitch_Lifecycle_Dlog, MRP_SWCModeSwitch_IS_EcuRunState] */
  /*     2 */  /* [R_Rule_Dlog_Run_when_Dlog_Init, MRP_SWCModeSwitch_Lifecycle_Dlog, MRP_SWCModeSwitch_IS_EcuRunState] */
  /*     3 */  /* [R_Rule_Start_Omc_Init_when_Darh_Run, MRP_SWCModeSwitch_Lifecycle_Darh, MRP_SWCModeSwitch_IS_EcuRunState, MRP_SWCModeSwitch_Lifecycle_Omc] */
  /*     4 */  /* [R_Rule_Start_StdDiag_Init_when_Omc_Run, MRP_SWCModeSwitch_Lifecycle_Omc, MRP_SWCModeSwitch_Lifecycle_Dlog, MRP_SWCModeSwitch_IS_EcuRunState, MRP_SWCModeSwitch_Lifecycle_StdDiag] */
  /*     5 */  /* [R_Rule_Start_Darh_Run_when_Darh_Init, MRP_SWCModeSwitch_Lifecycle_Darh, MRP_SWCModeSwitch_IS_EcuRunState] */
  /*     6 */  /* [R_Rule_Start_Omc_Run_when_Omc_Init, MRP_SWCModeSwitch_Lifecycle_Omc, MRP_SWCModeSwitch_IS_EcuRunState] */
  /*     7 */  /* [R_Rule_Start_StdDiag_Run_when_StdDiag_Init, MRP_SWCModeSwitch_Lifecycle_StdDiag, MRP_SWCModeSwitch_IS_EcuRunState] */
  /*     8 */  /* [R_Rule_Start_Systime_Run_when_Systime_Init, MRP_SWCModeSwitch_Lifecycle_Systime, MRP_SWCModeSwitch_IS_EcuRunState, MRP_ComMModeInd_BAC4_FlexRay_8e151c3c] */
  /*     9 */  /* [R_Rule_DcmEcuReset, MRP_BSWModeSwitch_DcmEcuReset, MRP_SWCModeSwitch_IS_EcuRunState] */
  /*    10 */  /* [R_Rule_Systime_Init, MRP_SWCModeSwitch_Lifecycle_Systime, MRP_SWCModeSwitch_IS_EcuRunState] */
  /*    11 */  /* [R_Rule_Darh_Init, MRP_SWCModeSwitch_Lifecycle_Dlog, MRP_SWCModeSwitch_IS_EcuRunState] */
  /*    12 */  /* [R_Rule_ComM_Channel_is_FULL_COM, MRP_ComMModeInd_BAC4_FlexRay_8e151c3c, MRP_SWCModeSwitch_DcmCommunicationControl_ComMConf_ComMChannel_BAC4_FlexRay_8e151c3c, MRP_SWCModeReq_StdDiag_CommunicationModeDeclarationGroup] */
  /*    13 */  /* [R_Rule_ComM_Channel_is_SILENT_COMMUNICATION, MRP_ComMModeInd_BAC4_FlexRay_8e151c3c] */
  /*    14 */  /* [R_Rule_Set_DarhReportError_due_ComM_and_CEL_mode, MRP_ComMModeInd_BAC4_FlexRay_8e151c3c, MRP_SWCModeSwitch_currentCentralErrorLockMode] */
  /*    15 */  /* [R_Rule_Switch_StdDiagSessionChangeIndication, MRP_BSWModeSwitch_DcmDiagnosticSessionControl] */
  /*    16 */  /* [R_Rule_NDC_Enable_Rx_Enable_Tx, MRP_SWCModeSwitch_DcmCommunicationControl_ComMConf_ComMChannel_BAC4_FlexRay_8e151c3c, MRP_SWCModeReq_StdDiag_CommunicationModeDeclarationGroup] */
  /*    17 */  /* [R_Rule_NDC_Enable_Rx_Disable_Tx, MRP_SWCModeSwitch_DcmCommunicationControl_ComMConf_ComMChannel_BAC4_FlexRay_8e151c3c, MRP_SWCModeReq_StdDiag_CommunicationModeDeclarationGroup] */
  /*    18 */  /* [R_Rule_NDC_Disable_Rx_Enable_Tx, MRP_SWCModeSwitch_DcmCommunicationControl_ComMConf_ComMChannel_BAC4_FlexRay_8e151c3c, MRP_SWCModeReq_StdDiag_CommunicationModeDeclarationGroup] */
  /*    19 */  /* [R_Rule_NDC_Disable_Rx_Disable_Tx, MRP_SWCModeSwitch_DcmCommunicationControl_ComMConf_ComMChannel_BAC4_FlexRay_8e151c3c, MRP_SWCModeReq_StdDiag_CommunicationModeDeclarationGroup] */
  /*    20 */  /* [R_Rule_Shutdown, MRP_SWCModeSwitch_IS_EcuRunState] */
  /*    21 */  /* [R_Rule_ComM_Channel_is_NO_COM, MRP_ComMModeInd_BAC4_FlexRay_8e151c3c] */
  /*    22 */  /* [R_Rule_Set_EcuRunMode_to_Normal_Operation_when_all_modules_run, MRP_SWCModeSwitch_IS_EcuRunState, MRP_SWCModeSwitch_Lifecycle_Dlog, MRP_SWCModeSwitch_Lifecycle_Darh, MRP_SWCModeSwitch_Lifecycle_Omc, MRP_SWCModeSwitch_Lifecycle_Systime, MRP_SWCModeSwitch_Lifecycle_StdDiag] */
  /*    23 */  /* [R_Rule_Reset_when_SimpleTimer0_fired, MRP_SWC_Mode_Notification_SimpleTimerMode] */
  /*    24 */  /* [R_Rule_BS_Init, MRP_SWC_ModeNotification_Lifecycle_Bs, MRP_SWCModeSwitch_IS_EcuRunState] */
  /*    25 */  /* [R_Rule_Bs_Run, MRP_SWC_ModeNotification_Lifecycle_Bs, MRP_SWCModeSwitch_IS_EcuRunState] */
  /*    26 */  /* [R_ESH_RunToPostRun, MRP_ESH_State, MRP_ESH_ComMIndication_A_FlexRay_5b5a9ac2, MRP_ESH_RunRequest_0, MRP_ESH_RunRequest_1, MRP_ESH_SelfRunRequestTimer, MRP_ESH_ModeNotification] */
  /*    27 */  /* [R_ESH_RunToPostRunNested] */
  /*    28 */  /* [R_ESH_WaitToShutdown, MRP_ESH_State, MRP_ESH_NvMIndication, MRP_ESH_NvM_WriteAllTimer, MRP_ESH_EcuM_GetValidatedWakeupEvents, MRP_ESH_ComMPendingRequests] */
  /*    29 */  /* [R_ESH_WakeupToPrep, MRP_ESH_State, MRP_ESH_NvMIndication, MRP_ESH_NvM_CancelWriteAllTimer, MRP_ESH_EcuM_GetPendingWakeupEvents, MRP_ESH_EcuM_GetValidatedWakeupEvents, MRP_ESH_ComMPendingRequests, MRP_ESH_ModeNotification] */
  /*    30 */  /* [R_ESH_WaitToWakeup, MRP_ESH_State, MRP_ESH_EcuM_GetValidatedWakeupEvents, MRP_ESH_ComMPendingRequests] */
  /*    31 */  /* [R_ESH_WakeupToRun, MRP_ESH_State, MRP_ESH_EcuM_GetValidatedWakeupEvents, MRP_ESH_ComMPendingRequests, MRP_ESH_NvMIndication, MRP_ESH_NvM_CancelWriteAllTimer, MRP_ESH_ModeNotification] */
  /*    32 */  /* [R_ESH_DemInit] */
  /*    33 */  /* [R_ESH_InitToWakeup, MRP_ESH_State] */
  /*    34 */  /* [R_ESH_PostRunToPrepNested] */
  /*    35 */  /* [R_ESH_PostRunNested] */
  /*    36 */  /* [R_ESH_PostRun, MRP_ESH_State, MRP_ESH_ModeNotification] */
  /*    37 */  /* [R_ESH_PrepToWait, MRP_ESH_State, MRP_ESH_ModeNotification] */
  /*    38 */  /* [R_CC_A_FlexRay_5b5a9ac2_TX, MRP_CC_FrSMIndication_A_FlexRay_5b5a9ac2] */
  /*    39 */  /* [R_CC_A_FlexRay_5b5a9ac2_RX, MRP_CC_FrSMIndication_A_FlexRay_5b5a9ac2] */

#define BSWM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_TimerState
**********************************************************************************************************************/
/** 
  \var    BswM_TimerState
  \brief  Variable to store current state of BswMTimer (STARTED, STOPPER OR EXPIRED).
*/ 
#define BSWM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(uBswM_TimerStateType, BSWM_VAR_NOINIT) BswM_TimerState;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [MRP_ESH_NvM_CancelWriteAllTimer] */
  /*     1 */  /* [MRP_ESH_NvM_WriteAllTimer] */
  /*     2 */  /* [MRP_ESH_SelfRunRequestTimer] */

#define BSWM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_TimerValue
**********************************************************************************************************************/
/** 
  \var    BswM_TimerValue
  \brief  Variable to store current timer values.
*/ 
#define BSWM_START_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(uBswM_TimerValueType, BSWM_VAR_NOINIT) BswM_TimerValue;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [MRP_ESH_NvM_CancelWriteAllTimer] */
  /*     1 */  /* [MRP_ESH_NvM_WriteAllTimer] */
  /*     2 */  /* [MRP_ESH_SelfRunRequestTimer] */

#define BSWM_STOP_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */


/* PRQA L:GLOBALDATADECLARATIONS */


#define BSWM_START_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"


/* -----------------------------------------------------------------------------
    &&&~ FUNCTIONS
 ----------------------------------------------------------------------------- */
/**********************************************************************************************************************
 *  BswM_ExecuteIpduGroupControl()
 **********************************************************************************************************************/
/*!
 * \internal
 *  - Check if a PDU action was executed.
 *    - Copy modified vectors to local variables for not calling Com_IpduGroupControl within a critical area.
 *      - If a PDU Switch Action with enabled re-initialization was used, copy vector to a local variable.
 *      - If a PDU Switch Action with without re-initialization was used, copy vector to a local variable. 
 *        Furthermore, transfer PDU Group States to the re-initialization vector for having the same state and not 
 *        disabling/enabling the PDU during the next execution.
 *    - If a Deadline Monitoring Action was executed, copy vector to a local variable.
 *    - If a PDU Switch Action with enabled re-initialization was used, pass local vector to Com_IpduGroupControl.
 *    - If a PDU Switch Action with without re-initialization was used, pass local vector to Com_IpduGroupControl.
 *    - If a Deadline Monitoring Action was executed, pass local vector to Com_ReceptionDMControl.
 * \endinternal
 */
FUNC(void, BSWM_CODE) BswM_ExecuteIpduGroupControl(void)
{
  Com_IpduGroupVector ipduGroupState;
  uint16 iCnt;
  uint8 controlInvocation = BSWM_GROUPCONTROL_IDLE;

  SchM_Enter_BswM_BSWM_EXCLUSIVE_AREA_0(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  if(BswM_PduGroupControlInvocation != BSWM_GROUPCONTROL_IDLE)
  {
    if((BswM_PduGroupControlInvocation & BSWM_GROUPCONTROL_NORMAL) != 0u)
    {
      iCnt = BSWM_IPDUGROUPVECTORSIZE;
      while(iCnt-- > (uint16)0x0000) /* PRQA S 3440 */ /* MD_BswM_3440 */
      {
        ipduGroupState[iCnt] = BswM_ComIPduGroupState[iCnt]; /* SBSW_BSWM_SETIPDUGROUPVECTOR */
      }
    }
    controlInvocation = BswM_PduGroupControlInvocation;
    BswM_PduGroupControlInvocation = BSWM_GROUPCONTROL_IDLE;
  }
  SchM_Exit_BswM_BSWM_EXCLUSIVE_AREA_0(); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  if(controlInvocation != BSWM_GROUPCONTROL_IDLE)
  {
    if((controlInvocation & BSWM_GROUPCONTROL_NORMAL) != 0u)
    {
      Com_IpduGroupControl(ipduGroupState, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
    }
  }
} /* PRQA S 6010, 6030 */ /* MD_MSR_STPTH, MD_MSR_STCYC */

/**********************************************************************************************************************
 *  BswM_Action_RuleHandler()
 **********************************************************************************************************************/
/*!
 * \internal
 *  - Arbitrate the corresponding rule to the passed id.
 *  - If arbitration leads to a valid action list ID, execute the corresponding action list. (SPEC-7866)
 *  - Return E_OK if no action list was executed, otherwise the result of the executed action list.
 * \endinternal
 */
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_RuleHandler(BswM_HandleType handleId)
{
  BswM_HandleType actionListIndex;
  Std_ReturnType retVal = E_NOT_OK;
  
  if (handleId < BswM_GetSizeOfRules())
  {
    SchM_Enter_BswM_BSWM_EXCLUSIVE_AREA_0(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    actionListIndex = BswM_GetFctPtrOfRules(handleId)(); /* SBSW_BSWM_RULEFCTPTR */
    SchM_Exit_BswM_BSWM_EXCLUSIVE_AREA_0(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    if(actionListIndex < BswM_GetSizeOfActionLists())
    {
      retVal = BswM_GetFctPtrOfActionLists(actionListIndex)(); /* SBSW_BSWM_ACTIONLISTFCTPTR */
    }
    else
    {
      retVal = E_OK;
    }
  }
  return retVal;
} 

/**********************************************************************************************************************
 *  BswM_UpdateRuleStates()
 **********************************************************************************************************************/
/*!
 * \internal
 *  Set rule state of passed ruleId to passed state.
 * \endinternal
 */
BSWM_LOCAL_INLINE FUNC(void, BSWM_CODE) BswM_UpdateRuleStates(BswM_SizeOfRuleStatesType ruleId, BswM_RuleStatesType state)
{
  if (ruleId < BswM_GetSizeOfRuleStates())
  {
    BswM_SetRuleStates(ruleId, state); /* SBSW_BSWM_SETRULESTATE */
  }
}

/**********************************************************************************************************************
 *  BswM_UpdateTimer()
 **********************************************************************************************************************/
/*!
 * \internal
 *  Set timer value of passed timerId to passed value.
 *  Set timer to BSWM_TIMER_STOPPED if value is zero, otherwise to BSWM_TIMER_STARTED.
 * \endinternal
 */
BSWM_LOCAL_INLINE FUNC(void, BSWM_CODE) BswM_UpdateTimer(BswM_SizeOfTimerValueType timerId, BswM_TimerValueType value)
{
  if (timerId < BswM_GetSizeOfTimerValue())
  {
      SchM_Enter_BswM_BSWM_EXCLUSIVE_AREA_0(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
      BswM_SetTimerValue(timerId, value); /* SBSW_BSWM_SETTIMER */
      BswM_SetTimerState(timerId, (BswM_TimerStateType)((value != 0u) ? BSWM_TIMER_STARTED : BSWM_TIMER_STOPPED)); /* SBSW_BSWM_SETTIMER */
      SchM_Exit_BswM_BSWM_EXCLUSIVE_AREA_0(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
}

/**********************************************************************************************************************
 *  BswM_Init_Gen
 *********************************************************************************************************************/
/*!
\internal
 *  - Initialize all generated variables.
 *  - Execute all action lists which are configured to be executed during initialization.
\endinternal
*/
FUNC(void, BSWM_CODE) BswM_Init_Gen(void)
{

  BswM_Switch_SwitchPort_Darh_ReportErrorMode_DarhReportErrorMode = 0xFF;
  BswM_Switch_SwitchPort_Stm_SwitchPort_EM_LOCK_currentEMLockSignalReceptionMode = 0xFF;
  BswM_Switch_SwitchPort_StdDiag_SessionChangeIndication_SessionModeDeclarationGroup = 0xFF;
  BswM_Switch_SwitchPort_StdDiagComControlNormalNotificationPort_CommunicationModeDeclarationGroup = 0xFF;
  BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode = 0xFF;
  BswM_RteRequest_Provide_MSRP_Systime_requestMode = 0xFFU;
  BswM_RteRequest_Provide_MSRP_Dlog_requestMode = 0xFFU;
  BswM_RteRequest_Provide_MSRP_Darh_requestMode = 0xFFU;
  BswM_RteRequest_Provide_MSRP_StdDiag_requestMode = 0xFFU;
  BswM_RteRequest_Provide_MSRP_Omc_requestMode = 0xFFU;
  BswM_RteRequest_Provide_MSRP_IntegrationSample_EcuRunMode_IntegrationSample_EcuRunStateRequestMode = 0xFFU;
  BswM_RteRequest_Provide_MRSP_Bs_requestMode = 0xFFU;
  Request_SWCModeReq_StdDiag_CommunicationModeDeclarationGroup_requestedMode = ENABLE_RX_AND_TX_NORMAL;
  Request_ESH_RunRequest_0_requestedMode = RELEASED;
  Request_ESH_RunRequest_1_requestedMode = RELEASED;
  Request_ESH_PostRunRequest_0_requestedMode = RELEASED;
  Request_ESH_PostRunRequest_1_requestedMode = RELEASED;
  BswM_Mode_Notification_SWCModeSwitch_IS_EcuRunState_EcuRunStateMode = RTE_MODE_IntegrationSample_EcuRunState_IntegrationSample_BSW_START;
  BswM_Mode_Notification_SWCModeSwitch_Lifecycle_Dlog_Mode = RTE_MODE_Dlog_LifeCycle_DLOG_INITIALIZED;
  BswM_Mode_Notification_SWCModeSwitch_Lifecycle_Darh_Mode = RTE_MODE_Darh_LifeCycle_DARH_STOPPED;
  BswM_Mode_Notification_SWCModeSwitch_Lifecycle_Omc_Mode = RTE_MODE_Omc_LifeCycle_OMC_STOPPED;
  BswM_Mode_Notification_SWCModeSwitch_Lifecycle_Systime_Mode = RTE_MODE_SysTime_LifeCycle_SYSTIME_STOPPED;
  BswM_Mode_Notification_SWCModeSwitch_Lifecycle_StdDiag_Mode = RTE_MODE_StdDiag_LifeCycle_STDDIAG_STOPPED;
  BswM_Mode_Notification_BSWModeSwitch_DcmEcuReset_DcmEcuReset = RTE_MODE_DcmEcuReset_NONE;
  BswM_Mode_Notification_BSWModeSwitch_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl = RTE_MODE_DcmDiagnosticSessionControl_DEFAULT_SESSION;
  BswM_Mode_Notification_SWCModeSwitch_DcmCommunicationControl_ComMConf_ComMChannel_BAC4_FlexRay_8e151c3c_DcmCommunicationControl_ComMConf_ComMChannel_A_FlexRay_5b5a9ac2 = RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM_NM;
  BswM_Mode_Notification_SWCModeSwitch_currentCentralErrorLockMode_currentCentralErrorLockMode = RTE_MODE_Stm_CentralErrorLockMode_STM_CEL_INVALID;
  BswM_Mode_Notification_SWC_Mode_Notification_SimpleTimerMode_SimpleTimerMode = RTE_MODE_IntegrationSample_SimpleTimerState_IntegrationSample_Timer_IDLE;
  BswM_Mode_Notification_SWC_ModeNotification_Lifecycle_Bs_Mode = RTE_MODE_Bs_LifeCycle_BS_STOPPED;
  BswM_Mode_Notification_ESH_ModeNotification_BswM_MDGP_ESH_Mode = RTE_MODE_ESH_Mode_STARTUP;
  BswM_PduGroupControlInvocation = BSWM_GROUPCONTROL_IDLE;

  /* PRQA S 3109 COMCLEARIPDU */ /* MD_BswM_3109 */
  Com_ClearIpduGroupVector(BswM_ComIPduGroupState); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMCLEARIPDU */

  (void)BswM_ActionList_INIT_AL_Initialize();
}

/**********************************************************************************************************************
 *  BswMRteRequestFunctions
 *********************************************************************************************************************/
/*!
\internal
 *  - Read mode of configured port from RTE and store it.
 *  - Arbitrate depending rules which has immediate processing.
\endinternal
*/

/**********************************************************************************************************************
 *  BswM_Read_SWCModeReq_StdDiag_CommunicationModeDeclarationGroup
 *********************************************************************************************************************/
FUNC(void, BSWM_CODE) BswM_Read_SWCModeReq_StdDiag_CommunicationModeDeclarationGroup(void)
{
  (void)Rte_Read_Request_SWCModeReq_StdDiag_CommunicationModeDeclarationGroup_requestedMode(&Request_SWCModeReq_StdDiag_CommunicationModeDeclarationGroup_requestedMode);  /* SBSW_BSWM_RTE_READ */
  BswM_ImmediateSwcRequest(4);
}

/**********************************************************************************************************************
 *  BswM_ImmediateSwcRequest
 *********************************************************************************************************************/
/*!
\internal
 *  - Check if passed index is in range.
 *    - Arbitrate depending rules of passed port which has immediate processing.
\endinternal
*/
BSWM_LOCAL_INLINE FUNC(void, BSWM_CODE) BswM_ImmediateSwcRequest(BswM_SizeOfModeRequestMappingType requestId)
{
  if(requestId < BswM_GetSizeOfModeRequestMapping())
  {
    BswM_ImmediateModeRequest(BswM_GetImmediateUserStartIdxOfModeRequestMapping(requestId), BswM_GetImmediateUserEndIdxOfModeRequestMapping(requestId), BSWM_SWCREQUESTMODE_ID);
  }
}

/**********************************************************************************************************************
 *  BswM_ModeNotificationFct
 *********************************************************************************************************************/
/*!
\internal
 *  - Do the following for all configured SwitchPorts:
 *    - If mode was changed by an action.
 *      - Forward mode change to RTE by the corresponding Rte Switch API.
 *      - If mode was accepted, mark local mode as unchanged for next execution.
 *  - Do the following for all configured RteModeRequestPort:
 *    - If mode was changed by an action.
 *      - Forward mode change to RTE by the corresponding Rte Write API.
 *      - If mode was accepted, mark local mode as unchanged for next execution.
\endinternal
*/
FUNC(void, BSWM_CODE) BswM_ModeNotificationFct(void)
{
  if(BswM_Switch_SwitchPort_Darh_ReportErrorMode_DarhReportErrorMode != 0xFF)
  {
    if(Rte_Switch_Switch_SwitchPort_Darh_ReportErrorMode_DarhReportErrorMode(BswM_Switch_SwitchPort_Darh_ReportErrorMode_DarhReportErrorMode) == RTE_E_OK)
    {
      BswM_Switch_SwitchPort_Darh_ReportErrorMode_DarhReportErrorMode = 0xFF;
    }
  }
  if(BswM_Switch_SwitchPort_Stm_SwitchPort_EM_LOCK_currentEMLockSignalReceptionMode != 0xFF)
  {
    if(Rte_Switch_Switch_SwitchPort_Stm_SwitchPort_EM_LOCK_currentEMLockSignalReceptionMode(BswM_Switch_SwitchPort_Stm_SwitchPort_EM_LOCK_currentEMLockSignalReceptionMode) == RTE_E_OK)
    {
      BswM_Switch_SwitchPort_Stm_SwitchPort_EM_LOCK_currentEMLockSignalReceptionMode = 0xFF;
    }
  }
  if(BswM_Switch_SwitchPort_StdDiag_SessionChangeIndication_SessionModeDeclarationGroup != 0xFF)
  {
    if(Rte_Switch_Switch_SwitchPort_StdDiag_SessionChangeIndication_SessionModeDeclarationGroup(BswM_Switch_SwitchPort_StdDiag_SessionChangeIndication_SessionModeDeclarationGroup) == RTE_E_OK)
    {
      BswM_Switch_SwitchPort_StdDiag_SessionChangeIndication_SessionModeDeclarationGroup = 0xFF;
    }
  }
  if(BswM_Switch_SwitchPort_StdDiagComControlNormalNotificationPort_CommunicationModeDeclarationGroup != 0xFF)
  {
    if(Rte_Switch_Switch_SwitchPort_StdDiagComControlNormalNotificationPort_CommunicationModeDeclarationGroup(BswM_Switch_SwitchPort_StdDiagComControlNormalNotificationPort_CommunicationModeDeclarationGroup) == RTE_E_OK)
    {
      BswM_Switch_SwitchPort_StdDiagComControlNormalNotificationPort_CommunicationModeDeclarationGroup = 0xFF;
    }
  }
  if(BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode != 0xFF)
  {
    if(Rte_Switch_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode(BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode) == RTE_E_OK)
    {
      BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode = 0xFF;
    }
  }
  if(BswM_RteRequest_Provide_MSRP_Systime_requestMode != 0xFFU)
  {
    if(Rte_Write_Provide_MSRP_Systime_requestMode(BswM_RteRequest_Provide_MSRP_Systime_requestMode) == RTE_E_OK)
    {
      BswM_RteRequest_Provide_MSRP_Systime_requestMode = 0xFFU;
    }
  }
  if(BswM_RteRequest_Provide_MSRP_Dlog_requestMode != 0xFFU)
  {
    if(Rte_Write_Provide_MSRP_Dlog_requestMode(BswM_RteRequest_Provide_MSRP_Dlog_requestMode) == RTE_E_OK)
    {
      BswM_RteRequest_Provide_MSRP_Dlog_requestMode = 0xFFU;
    }
  }
  if(BswM_RteRequest_Provide_MSRP_Darh_requestMode != 0xFFU)
  {
    if(Rte_Write_Provide_MSRP_Darh_requestMode(BswM_RteRequest_Provide_MSRP_Darh_requestMode) == RTE_E_OK)
    {
      BswM_RteRequest_Provide_MSRP_Darh_requestMode = 0xFFU;
    }
  }
  if(BswM_RteRequest_Provide_MSRP_StdDiag_requestMode != 0xFFU)
  {
    if(Rte_Write_Provide_MSRP_StdDiag_requestMode(BswM_RteRequest_Provide_MSRP_StdDiag_requestMode) == RTE_E_OK)
    {
      BswM_RteRequest_Provide_MSRP_StdDiag_requestMode = 0xFFU;
    }
  }
  if(BswM_RteRequest_Provide_MSRP_Omc_requestMode != 0xFFU)
  {
    if(Rte_Write_Provide_MSRP_Omc_requestMode(BswM_RteRequest_Provide_MSRP_Omc_requestMode) == RTE_E_OK)
    {
      BswM_RteRequest_Provide_MSRP_Omc_requestMode = 0xFFU;
    }
  }
  if(BswM_RteRequest_Provide_MSRP_IntegrationSample_EcuRunMode_IntegrationSample_EcuRunStateRequestMode != 0xFFU)
  {
    if(Rte_Write_Provide_MSRP_IntegrationSample_EcuRunMode_IntegrationSample_EcuRunStateRequestMode(BswM_RteRequest_Provide_MSRP_IntegrationSample_EcuRunMode_IntegrationSample_EcuRunStateRequestMode) == RTE_E_OK)
    {
      BswM_RteRequest_Provide_MSRP_IntegrationSample_EcuRunMode_IntegrationSample_EcuRunStateRequestMode = 0xFFU;
    }
  }
  if(BswM_RteRequest_Provide_MRSP_Bs_requestMode != 0xFFU)
  {
    if(Rte_Write_Provide_MRSP_Bs_requestMode(BswM_RteRequest_Provide_MRSP_Bs_requestMode) == RTE_E_OK)
    {
      BswM_RteRequest_Provide_MRSP_Bs_requestMode = 0xFFU;
    }
  }
}

/**********************************************************************************************************************
 *  BswM_SwcModeRequestUpdateFct
 *********************************************************************************************************************/
/*!
\internal
 *  - Do the following for all SwcModeNotifications:
 *    - Get mode from Rte by calling the corresponding Rte_Mode API.
 *    - If mode is valid (not in transition), store mode for arbitration.
 *  - Do the following for all SwcModeRequests:
 *    - Get mode from Rte by calling the corresponding Rte_Read API.
 *    - Store mode for arbitration.
\endinternal
*/
FUNC(void, BSWM_CODE) BswM_SwcModeRequestUpdateFct(void)
{
  uint32 mode;
  mode = Rte_Mode_Notification_SWCModeSwitch_IS_EcuRunState_EcuRunStateMode();
  if (mode != RTE_TRANSITION_IntegrationSample_EcuRunState)
  {
    BswM_Mode_Notification_SWCModeSwitch_IS_EcuRunState_EcuRunStateMode = (Rte_ModeType_IntegrationSample_EcuRunState)mode;
  }
  mode = Rte_Mode_Notification_SWCModeSwitch_Lifecycle_Dlog_Mode();
  if (mode != RTE_TRANSITION_Dlog_LifeCycle)
  {
    BswM_Mode_Notification_SWCModeSwitch_Lifecycle_Dlog_Mode = (Rte_ModeType_Dlog_LifeCycle)mode;
  }
  mode = Rte_Mode_Notification_SWCModeSwitch_Lifecycle_Darh_Mode();
  if (mode != RTE_TRANSITION_Darh_LifeCycle)
  {
    BswM_Mode_Notification_SWCModeSwitch_Lifecycle_Darh_Mode = (Rte_ModeType_Darh_LifeCycle)mode;
  }
  mode = Rte_Mode_Notification_SWCModeSwitch_Lifecycle_Omc_Mode();
  if (mode != RTE_TRANSITION_Omc_LifeCycle)
  {
    BswM_Mode_Notification_SWCModeSwitch_Lifecycle_Omc_Mode = (Rte_ModeType_Omc_LifeCycle)mode;
  }
  mode = Rte_Mode_Notification_SWCModeSwitch_Lifecycle_Systime_Mode();
  if (mode != RTE_TRANSITION_SysTime_LifeCycle)
  {
    BswM_Mode_Notification_SWCModeSwitch_Lifecycle_Systime_Mode = (Rte_ModeType_SysTime_LifeCycle)mode;
  }
  mode = Rte_Mode_Notification_SWCModeSwitch_Lifecycle_StdDiag_Mode();
  if (mode != RTE_TRANSITION_StdDiag_LifeCycle)
  {
    BswM_Mode_Notification_SWCModeSwitch_Lifecycle_StdDiag_Mode = (Rte_ModeType_StdDiag_LifeCycle)mode;
  }
  mode = Rte_Mode_Notification_BSWModeSwitch_DcmEcuReset_DcmEcuReset();
  if (mode != RTE_TRANSITION_DcmEcuReset)
  {
    BswM_Mode_Notification_BSWModeSwitch_DcmEcuReset_DcmEcuReset = (Rte_ModeType_DcmEcuReset)mode;
  }
  mode = Rte_Mode_Notification_BSWModeSwitch_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl();
  if (mode != RTE_TRANSITION_DcmDiagnosticSessionControl)
  {
    BswM_Mode_Notification_BSWModeSwitch_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl = (Rte_ModeType_DcmDiagnosticSessionControl)mode;
  }
  mode = Rte_Mode_Notification_SWCModeSwitch_DcmCommunicationControl_ComMConf_ComMChannel_BAC4_FlexRay_8e151c3c_DcmCommunicationControl_ComMConf_ComMChannel_A_FlexRay_5b5a9ac2();
  if (mode != RTE_TRANSITION_DcmCommunicationControl)
  {
    BswM_Mode_Notification_SWCModeSwitch_DcmCommunicationControl_ComMConf_ComMChannel_BAC4_FlexRay_8e151c3c_DcmCommunicationControl_ComMConf_ComMChannel_A_FlexRay_5b5a9ac2 = (Rte_ModeType_DcmCommunicationControl)mode;
  }
  mode = Rte_Mode_Notification_SWCModeSwitch_currentCentralErrorLockMode_currentCentralErrorLockMode();
  if (mode != RTE_TRANSITION_Stm_CentralErrorLockMode)
  {
    BswM_Mode_Notification_SWCModeSwitch_currentCentralErrorLockMode_currentCentralErrorLockMode = (Rte_ModeType_Stm_CentralErrorLockMode)mode;
  }
  mode = Rte_Mode_Notification_SWC_Mode_Notification_SimpleTimerMode_SimpleTimerMode();
  if (mode != RTE_TRANSITION_IntegrationSample_SimpleTimerState)
  {
    BswM_Mode_Notification_SWC_Mode_Notification_SimpleTimerMode_SimpleTimerMode = (Rte_ModeType_IntegrationSample_SimpleTimerState)mode;
  }
  mode = Rte_Mode_Notification_SWC_ModeNotification_Lifecycle_Bs_Mode();
  if (mode != RTE_TRANSITION_Bs_LifeCycle)
  {
    BswM_Mode_Notification_SWC_ModeNotification_Lifecycle_Bs_Mode = (Rte_ModeType_Bs_LifeCycle)mode;
  }
  mode = Rte_Mode_Notification_ESH_ModeNotification_BswM_MDGP_ESH_Mode();
  if (mode != RTE_TRANSITION_ESH_Mode)
  {
    BswM_Mode_Notification_ESH_ModeNotification_BswM_MDGP_ESH_Mode = (Rte_ModeType_ESH_Mode)mode;
  }
  (void)Rte_Read_Request_ESH_RunRequest_0_requestedMode(&Request_ESH_RunRequest_0_requestedMode); /* SBSW_BSWM_RTE_READ */
  (void)Rte_Read_Request_ESH_RunRequest_1_requestedMode(&Request_ESH_RunRequest_1_requestedMode); /* SBSW_BSWM_RTE_READ */
  (void)Rte_Read_Request_ESH_PostRunRequest_0_requestedMode(&Request_ESH_PostRunRequest_0_requestedMode); /* SBSW_BSWM_RTE_READ */
  (void)Rte_Read_Request_ESH_PostRunRequest_1_requestedMode(&Request_ESH_PostRunRequest_1_requestedMode); /* SBSW_BSWM_RTE_READ */
}

/**********************************************************************************************************************
 *  BswMActionListFunctions
 *********************************************************************************************************************/
/*!
\internal
 *  - Do this for every configured action in action list:
 *    - Execute action.
 *    - If action fails and Dem Event is configured for the action: Set Error Status of Dem Event to failed.
 *    - If action fails and Aborting is enabled for the action: Abort iteration and return E_NOT_OK.
 *  - If all actions were executed return E_OK.
\endinternal
*/

/**********************************************************************************************************************
 *  BswM_ActionList_AL_CodingResetExecution
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_AL_CodingResetExecution(void)
{
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  EcuM_SelectShutdownCause(EcuMConf_EcuMShutdownCause_ECUM_CAUSE_CODING);
  /*lint -restore */
  (void)BswM_ActionList_AL_ResetExecution();
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_AL_Rule_Dlog_Init_True
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_AL_Rule_Dlog_Init_True(void)
{
  BswM_RteRequest_Provide_MSRP_Dlog_requestMode = DLOG_INITIALIZED;
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_AL_Rule_Dlog_Run_True
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_AL_Rule_Dlog_Run_True(void)
{
  BswM_RteRequest_Provide_MSRP_Dlog_requestMode = DLOG_RUNNING;
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_AL_Rule_Start_Omc_Init_when_Darh_Run_True
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_AL_Rule_Start_Omc_Init_when_Darh_Run_True(void)
{
  BswM_RteRequest_Provide_MSRP_Omc_requestMode = OMC_INITIALIZED;
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_AL_Rule_Start_StdDiag_Init_when_Omc_Run_True
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_AL_Rule_Start_StdDiag_Init_when_Omc_Run_True(void)
{
  BswM_RteRequest_Provide_MSRP_StdDiag_requestMode = STDDIAG_INITIALIZED;
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_AL_RuleDarh_Init_to_Run_True
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_AL_RuleDarh_Init_to_Run_True(void)
{
  BswM_RteRequest_Provide_MSRP_Darh_requestMode = DARH_RUNNING;
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_AL_Rule_Start_Omc_Run_when_Omc_Init_True
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_AL_Rule_Start_Omc_Run_when_Omc_Init_True(void)
{
  BswM_RteRequest_Provide_MSRP_Omc_requestMode = OMC_RUNNING;
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_AL_Rule_Start_StdDiag_Run_when_StdDiag_Init_True
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_AL_Rule_Start_StdDiag_Run_when_StdDiag_Init_True(void)
{
  BswM_RteRequest_Provide_MSRP_StdDiag_requestMode = STDDIAG_RUNNING;
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_AL_Rule_Start_Systime_Run_when_Systime_Init_True
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_AL_Rule_Start_Systime_Run_when_Systime_Init_True(void)
{
  BswM_RteRequest_Provide_MSRP_Systime_requestMode = SYSTIME_RUNNING;
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_AL_ResetExecution
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_AL_ResetExecution(void)
{
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  IntegrationSample_DisableDiagnostic();
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  Dcm_BAC4_EcuReset_Execute();
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  BswM_Callout_StartSimpleTimer0();
  /*lint -restore */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_AL_Rule_Systime_Init_True
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_AL_Rule_Systime_Init_True(void)
{
  BswM_RteRequest_Provide_MSRP_Systime_requestMode = SYSTIME_INITIALIZED;
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_AL_Rule_Darh_Init_True
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_AL_Rule_Darh_Init_True(void)
{
  BswM_RteRequest_Provide_MSRP_Darh_requestMode = DARH_INITIALIZED;
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_AL_ComM_Channel_is_FULL_COM
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_AL_ComM_Channel_is_FULL_COM(void)
{
  BswM_Switch_SwitchPort_Stm_SwitchPort_EM_LOCK_currentEMLockSignalReceptionMode = RTE_MODE_ErrorMemoryLockSignalReceptionMode_EM_LOCK_RECEIVABLE;
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_AL_ComM_Channel_is_SILENT_COMMUNICATION_BswMActionList_True
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_AL_ComM_Channel_is_SILENT_COMMUNICATION_BswMActionList_True(void)
{
  BswM_Switch_SwitchPort_Stm_SwitchPort_EM_LOCK_currentEMLockSignalReceptionMode = RTE_MODE_ErrorMemoryLockSignalReceptionMode_EM_LOCK_NOT_RECEIVABLE;
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_AL_Set_DarhReportError_due_ComM_and_CEL_mode_BswMActionList_True
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_AL_Set_DarhReportError_due_ComM_and_CEL_mode_BswMActionList_True(void)
{
  BswM_Switch_SwitchPort_Darh_ReportErrorMode_DarhReportErrorMode = RTE_MODE_DarhReportErrorMode_DARH_REPORT_ERROR_ACTIVE;
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_AL_Set_DarhReportError_due_ComM_and_CEL_mode_BswMActionList_False
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_AL_Set_DarhReportError_due_ComM_and_CEL_mode_BswMActionList_False(void)
{
  BswM_Switch_SwitchPort_Darh_ReportErrorMode_DarhReportErrorMode = RTE_MODE_DarhReportErrorMode_DARH_REPORT_ERROR_INACTIVE;
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_INIT_AL_Initialize
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_INIT_AL_Initialize(void)
{
  BswM_AL_SetProgrammableInterrupts();
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  Det_Init(Det_Config_Ptr);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  Fr_Init(&Fr_Config);
  /*lint -restore */
  BswM_RteRequest_Provide_MSRP_IntegrationSample_EcuRunMode_IntegrationSample_EcuRunStateRequestMode = IntegrationSample_STARTUP;
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  Fee_30_SmallSector_Init();
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  FrIf_Init(&FrIf_Config);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  WdgM_Init(&WdgMConfig_Mode0_core0);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  Com_Init(Com_Config_Ptr);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  IpduM_Init(IpduM_Config_Ptr);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  PduR_Init(PduR_Config_Ptr);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  FrSM_Init(FrSM_Config_Ptr);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  FrTp_Init(&FrTp_Config);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  FrXcp_Init(NULL_PTR);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  Xcp_Init();
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  NvM_Init();
  /*lint -restore */
  BswM_INIT_NvMReadAll();
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  ComM_Init();
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  ApplFr_DetFilter();
  /*lint -restore */
  ComM_CommunicationAllowed(ComMConf_ComMChannel_A_FlexRay_5b5a9ac2, TRUE);
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  checkNeedForCommunication();
  /*lint -restore */
  (void)ComM_RequestComMode(ComMConf_ComMUser_USR_A_FlexRay_5b5a9ac2, COMM_FULL_COMMUNICATION);
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  Dcm_Init(NULL_PTR);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  Dem_Init(Dem_Config_Ptr);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  Dem_SetOperationCycleState(DemConf_DemOperationCycle_NON_OBD,DEM_CYCLE_STATE_START);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  (void)Rte_Start();
  /*lint -restore */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_AL_Switch_StdDiagSessionChangeIndication_True
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_AL_Switch_StdDiagSessionChangeIndication_True(void)
{
  BswM_Switch_SwitchPort_StdDiag_SessionChangeIndication_SessionModeDeclarationGroup = RTE_MODE_StdDiag_SessionModeGroup_STDDIAG_DEFAULT_SESSION;
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_AL_Switch_StdDiagSessionChangeIndication_False
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_AL_Switch_StdDiagSessionChangeIndication_False(void)
{
  BswM_Switch_SwitchPort_StdDiag_SessionChangeIndication_SessionModeDeclarationGroup = RTE_MODE_StdDiag_SessionModeGroup_STDDIAG_OTHER_SESSION;
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_AL_NDC_Enable_RX_AND_TX_NORMAL
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_AL_NDC_Enable_RX_AND_TX_NORMAL(void)
{
  BswM_Switch_SwitchPort_StdDiagComControlNormalNotificationPort_CommunicationModeDeclarationGroup = RTE_MODE_StdDiag_NormalCommunicationModeGroup_ENABLE_RX_AND_TX_NORMAL;
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_AL_NDC_Enable_RX_Disable_TX_NORMAL
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_AL_NDC_Enable_RX_Disable_TX_NORMAL(void)
{
  BswM_Switch_SwitchPort_StdDiagComControlNormalNotificationPort_CommunicationModeDeclarationGroup = RTE_MODE_StdDiag_NormalCommunicationModeGroup_ENABLE_RX_DISABLE_TX_NORMAL;
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_AL_NDC_Disable_RX_Enable_TX_NORMAL
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_AL_NDC_Disable_RX_Enable_TX_NORMAL(void)
{
  BswM_Switch_SwitchPort_StdDiagComControlNormalNotificationPort_CommunicationModeDeclarationGroup = RTE_MODE_StdDiag_NormalCommunicationModeGroup_DISABLE_RX_ENABLE_TX_NORMAL;
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_AL_NDC_Disable_Rx_And_Tx_Normal
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_AL_NDC_Disable_Rx_And_Tx_Normal(void)
{
  BswM_Switch_SwitchPort_StdDiagComControlNormalNotificationPort_CommunicationModeDeclarationGroup = RTE_MODE_StdDiag_NormalCommunicationModeGroup_DISABLE_RX_AND_TX_NORMAL;
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_AL_ComM_Channel_is_NO_COM_BswMActionList_True
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_AL_ComM_Channel_is_NO_COM_BswMActionList_True(void)
{
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  PrepareForReceivingNm();
  /*lint -restore */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_AL_Set_EcuRunMode_to_Normal_Operation_when_all_modules_run_BswMActionList_True
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_AL_Set_EcuRunMode_to_Normal_Operation_when_all_modules_run_BswMActionList_True(void)
{
  BswM_RteRequest_Provide_MSRP_IntegrationSample_EcuRunMode_IntegrationSample_EcuRunStateRequestMode = IntegrationSample_NORMAL_OPERATION;
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_AL_Reset_when_SimpleTimer0_fired_BswMActionList_True
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_AL_Reset_when_SimpleTimer0_fired_BswMActionList_True(void)
{
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  Mcu_PerformReset();
  /*lint -restore */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_AL_Bs_Run_when_Bs_Init
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_AL_Bs_Run_when_Bs_Init(void)
{
  BswM_RteRequest_Provide_MRSP_Bs_requestMode = BS_RUNNING;
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_AL_BswMActionList_Bs_Init_True
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_AL_BswMActionList_Bs_Init_True(void)
{
  BswM_RteRequest_Provide_MRSP_Bs_requestMode = BS_INITIALIZED;
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_ESH_AL_ExitRun
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_ExitRun(void)
{
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  SchM_Enter_BswM_BSWM_EXCLUSIVE_AREA_0();
  /*lint -restore */
  ESH_ComM_CheckPendingRequests();
  (void)BswM_Action_RuleHandler(BSWM_ID_RULE_ESH_RunToPostRunNested);
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  SchM_Exit_BswM_BSWM_EXCLUSIVE_AREA_0();
  /*lint -restore */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_ESH_AL_RunToPostRun
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_RunToPostRun(void)
{
  ComM_CommunicationAllowed(ComMConf_ComMChannel_A_FlexRay_5b5a9ac2, FALSE);
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  EcuM_ClearValidatedWakeupEvent(ECUM_WKSOURCE_ALL_SOURCES);
  /*lint -restore */
  BswM_ESH_OnEnterPostRun();
  BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode = RTE_MODE_ESH_Mode_POSTRUN;
  BswM_RequestMode(BSWM_GENERIC_ESH_State, BSWM_GENERICVALUE_ESH_State_ESH_POST_RUN);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_ESH_AL_WaitForNvMToShutdown
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_WaitForNvMToShutdown(void)
{
  BswM_UpdateTimer(BSWM_TMR_ESH_NvM_WriteAllTimer, 0U);
  BswM_ESH_OnEnterShutdown();
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  (void)EcuM_GoToSelectedShutdownTarget();
  /*lint -restore */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_ESH_AL_WakeupToPrep
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_WakeupToPrep(void)
{
  BswM_ESH_OnEnterPrepShutdown();
  BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode = RTE_MODE_ESH_Mode_SHUTDOWN;
  BswM_RequestMode(BSWM_GENERIC_ESH_State, BSWM_GENERICVALUE_ESH_State_ESH_PREP_SHUTDOWN);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_ESH_AL_WaitForNvMWakeup
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_WaitForNvMWakeup(void)
{
  BswM_UpdateTimer(BSWM_TMR_ESH_NvM_WriteAllTimer, 0U);
  BswM_UpdateTimer(BSWM_TMR_ESH_NvM_CancelWriteAllTimer, 30000UL);
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  NvM_CancelWriteAll();
  /*lint -restore */
  BswM_ESH_OnEnterWakeup();
  BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode = RTE_MODE_ESH_Mode_WAKEUP;
  BswM_RequestMode(BSWM_GENERIC_ESH_State, BSWM_GENERICVALUE_ESH_State_ESH_WAKEUP);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_ESH_AL_WakeupToRun
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_WakeupToRun(void)
{
  BswM_UpdateTimer(BSWM_TMR_ESH_NvM_CancelWriteAllTimer, 0U);
  (void)BswM_Action_RuleHandler(BSWM_ID_RULE_ESH_DemInit);
  ComM_CommunicationAllowed(ComMConf_ComMChannel_A_FlexRay_5b5a9ac2, TRUE);
  BswM_UpdateTimer(BSWM_TMR_ESH_SelfRunRequestTimer, 50UL);
  BswM_ESH_OnEnterRun();
  BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode = RTE_MODE_ESH_Mode_RUN;
  BswM_RequestMode(BSWM_GENERIC_ESH_State, BSWM_GENERICVALUE_ESH_State_ESH_RUN);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_ESH_AL_DemInit
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_DemInit(void)
{
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  Dem_Init(Dem_Config_Ptr);
  /*lint -restore */
  BswM_RequestMode(BSWM_GENERIC_ESH_DemInitStatus, BSWM_GENERICVALUE_ESH_DemInitStatus_DEM_INITIALIZED);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_ESH_AL_InitToWakeup
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_InitToWakeup(void)
{
  BswM_ESH_OnEnterWakeup();
  BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode = RTE_MODE_ESH_Mode_WAKEUP;
  BswM_RequestMode(BSWM_GENERIC_ESH_State, BSWM_GENERICVALUE_ESH_State_ESH_WAKEUP);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_ESH_AL_PostRunToPrepShutdown
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_PostRunToPrepShutdown(void)
{
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  Dem_Shutdown();
  /*lint -restore */
  BswM_RequestMode(BSWM_GENERIC_ESH_DemInitStatus, BSWM_GENERICVALUE_ESH_DemInitStatus_DEM_NOT_INITIALIZED);
  BswM_ESH_OnEnterPrepShutdown();
  BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode = RTE_MODE_ESH_Mode_SHUTDOWN;
  BswM_RequestMode(BSWM_GENERIC_ESH_State, BSWM_GENERICVALUE_ESH_State_ESH_PREP_SHUTDOWN);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_ESH_AL_ESH_PostRunToPrepCheck
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_ESH_PostRunToPrepCheck(void)
{
  (void)BswM_Action_RuleHandler(BSWM_ID_RULE_ESH_PostRunToPrepNested);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_ESH_AL_PostRunToRun
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_PostRunToRun(void)
{
  ComM_CommunicationAllowed(ComMConf_ComMChannel_A_FlexRay_5b5a9ac2, TRUE);
  BswM_UpdateTimer(BSWM_TMR_ESH_SelfRunRequestTimer, 50UL);
  BswM_ESH_OnEnterRun();
  BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode = RTE_MODE_ESH_Mode_RUN;
  BswM_RequestMode(BSWM_GENERIC_ESH_State, BSWM_GENERICVALUE_ESH_State_ESH_RUN);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_ESH_AL_ExitPostRun
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_ExitPostRun(void)
{
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  SchM_Enter_BswM_BSWM_EXCLUSIVE_AREA_0();
  /*lint -restore */
  ESH_ComM_CheckPendingRequests();
  (void)BswM_Action_RuleHandler(BSWM_ID_RULE_ESH_PostRunNested);
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  SchM_Exit_BswM_BSWM_EXCLUSIVE_AREA_0();
  /*lint -restore */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_ESH_AL_PrepShutdownToWaitForNvM
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_PrepShutdownToWaitForNvM(void)
{
  BswM_UpdateTimer(BSWM_TMR_ESH_NvM_WriteAllTimer, 30000UL);
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  NvM_WriteAll();
  /*lint -restore */
  ESH_ComM_CheckPendingRequests();
  BswM_ESH_OnEnterWaitForNvm();
  BswM_RequestMode(BSWM_GENERIC_ESH_State, BSWM_GENERICVALUE_ESH_State_ESH_WAIT_FOR_NVM);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_A_FlexRay_5b5a9ac2_TX_Disable
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_A_FlexRay_5b5a9ac2_TX_Disable(void)
{
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_EPS_OUT_PduGroup_7933cc8b, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_EPS_OUT_PduGroup_7933cc8b, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_EPS_OUT_PduGroup3_7933cc8b, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_EPS_OUT_PduGroup3_7933cc8b, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_EPS_OUT_PduGroup2_7933cc8b, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_EPS_OUT_PduGroup2_7933cc8b, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_A_FlexRay_5b5a9ac2_TX_EnableNoinit
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_A_FlexRay_5b5a9ac2_TX_EnableNoinit(void)
{
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_EPS_OUT_PduGroup_7933cc8b, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_EPS_OUT_PduGroup_7933cc8b, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_EPS_OUT_PduGroup3_7933cc8b, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_EPS_OUT_PduGroup3_7933cc8b, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_EPS_OUT_PduGroup2_7933cc8b, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_EPS_OUT_PduGroup2_7933cc8b, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_A_FlexRay_5b5a9ac2_RX_Disable
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_A_FlexRay_5b5a9ac2_RX_Disable(void)
{
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_EPS_IN_PduGroup3_7933cc8b, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_EPS_IN_PduGroup3_7933cc8b, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_EPS_IN_PduGroup9_7933cc8b, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_EPS_IN_PduGroup9_7933cc8b, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_EPS_IN_PduGroup4_7933cc8b, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_EPS_IN_PduGroup4_7933cc8b, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_EPS_IN_PduGroup10_7933cc8b, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_EPS_IN_PduGroup10_7933cc8b, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_EPS_IN_PduGroup8_7933cc8b, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_EPS_IN_PduGroup8_7933cc8b, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_EPS_IN_PduGroup6_7933cc8b, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_EPS_IN_PduGroup6_7933cc8b, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_EPS_IN_PduGroup_7933cc8b, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_EPS_IN_PduGroup_7933cc8b, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_EPS_IN_PduGroup5_7933cc8b, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_EPS_IN_PduGroup5_7933cc8b, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_EPS_IN_PduGroup2_7933cc8b, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_EPS_IN_PduGroup2_7933cc8b, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_EPS_IN_PduGroup7_7933cc8b, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_EPS_IN_PduGroup7_7933cc8b, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_A_FlexRay_5b5a9ac2_RX_EnableNoinit
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_A_FlexRay_5b5a9ac2_RX_EnableNoinit(void)
{
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_EPS_IN_PduGroup3_7933cc8b, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_EPS_IN_PduGroup3_7933cc8b, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_EPS_IN_PduGroup9_7933cc8b, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_EPS_IN_PduGroup9_7933cc8b, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_EPS_IN_PduGroup4_7933cc8b, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_EPS_IN_PduGroup4_7933cc8b, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_EPS_IN_PduGroup10_7933cc8b, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_EPS_IN_PduGroup10_7933cc8b, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_EPS_IN_PduGroup8_7933cc8b, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_EPS_IN_PduGroup8_7933cc8b, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_EPS_IN_PduGroup6_7933cc8b, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_EPS_IN_PduGroup6_7933cc8b, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_EPS_IN_PduGroup_7933cc8b, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_EPS_IN_PduGroup_7933cc8b, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_EPS_IN_PduGroup5_7933cc8b, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_EPS_IN_PduGroup5_7933cc8b, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_EPS_IN_PduGroup2_7933cc8b, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_EPS_IN_PduGroup2_7933cc8b, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_EPS_IN_PduGroup7_7933cc8b, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_EPS_IN_PduGroup7_7933cc8b, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswMRuleFunctions
 *********************************************************************************************************************/
/*!
\internal
 *  - Check if rule is not deactivated [only if BswMRuleControlEnabled]:
 *    - Evaluate logical expression.
 *    - If evaluation of logical expression is true:
 *      - If TrueActionList is configured and its execution type is TRIGGER:
 *        - Check if last evaluation result was not true:
 *          - Store current evaluation result.
 *          - Execute the configured action list.
 *      - Else store current evaluation result if execution type of FalseActionList is TRIGGER.
 *      - If TrueActionList is configured and its execution type is CONDITIONAL:
 *        - Execute the configured action list.
 *    - If evaluation of logical expression is false:
 *      - If FalseActionList is configured and its execution type is TRIGGER:
 *        - Check if last evaluation result was not false:
 *          - Store current evaluation result.
 *          - Execute the configured action list.
 *      - Else store current evaluation result if execution type of TrueActionList is TRIGGER.
 *      - If FalsActionList is configured and its execution type is CONDITIONAL:
 *        - Execute the configured action list.
\endinternal
*/

/**********************************************************************************************************************
 *  BswM_Rule_Rule_DcmCodingReset
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_Rule_DcmCodingReset(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression LogEx_CodingReset. */
  if(BswM_GetGenericState(0) == BSWM_GENERICVALUE_GenericModeRequestPort_IS_CodingReset_IS_CodingReset_EXECUTE)
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_Rule_DcmCodingReset) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_Rule_DcmCodingReset, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_AL_CodingResetExecution. */
      retVal = BSWM_ID_AL_AL_CodingResetExecution;
    }
  }
  else
  {
    BswM_UpdateRuleStates(BSWM_ID_RULE_Rule_DcmCodingReset, BSWM_FALSE);
    /* No false action list configured. */
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_Rule_Dlog_Init_when_IS_Startup
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_Rule_Dlog_Init_when_IS_Startup(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression LogEx_Dlog_Init. */
  if((BswM_Mode_Notification_SWCModeSwitch_Lifecycle_Dlog_Mode == RTE_MODE_Dlog_LifeCycle_DLOG_STOPPED) && (BswM_Mode_Notification_SWCModeSwitch_IS_EcuRunState_EcuRunStateMode == RTE_MODE_IntegrationSample_EcuRunState_IntegrationSample_STARTUP))
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_Rule_Dlog_Init_when_IS_Startup) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_Rule_Dlog_Init_when_IS_Startup, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_AL_Rule_Dlog_Init_True. */
      retVal = BSWM_ID_AL_AL_Rule_Dlog_Init_True;
    }
  }
  else
  {
    BswM_UpdateRuleStates(BSWM_ID_RULE_Rule_Dlog_Init_when_IS_Startup, BSWM_FALSE);
    /* No false action list configured. */
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_Rule_Dlog_Run_when_Dlog_Init
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_Rule_Dlog_Run_when_Dlog_Init(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression LogEx_Dlog_Lifecycle_Init. */
  if((BswM_Mode_Notification_SWCModeSwitch_Lifecycle_Dlog_Mode == RTE_MODE_Dlog_LifeCycle_DLOG_INITIALIZED) && (BswM_Mode_Notification_SWCModeSwitch_IS_EcuRunState_EcuRunStateMode == RTE_MODE_IntegrationSample_EcuRunState_IntegrationSample_STARTUP))
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_Rule_Dlog_Run_when_Dlog_Init) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_Rule_Dlog_Run_when_Dlog_Init, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_AL_Rule_Dlog_Run_True. */
      retVal = BSWM_ID_AL_AL_Rule_Dlog_Run_True;
    }
  }
  else
  {
    BswM_UpdateRuleStates(BSWM_ID_RULE_Rule_Dlog_Run_when_Dlog_Init, BSWM_FALSE);
    /* No false action list configured. */
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_Rule_Start_Omc_Init_when_Darh_Run
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_Rule_Start_Omc_Init_when_Darh_Run(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression LogEx_Start_Omc_Init_when_Darh_Run. */
  if((BswM_Mode_Notification_SWCModeSwitch_Lifecycle_Darh_Mode == RTE_MODE_Darh_LifeCycle_DARH_RUNNING) && (BswM_Mode_Notification_SWCModeSwitch_IS_EcuRunState_EcuRunStateMode == RTE_MODE_IntegrationSample_EcuRunState_IntegrationSample_STARTUP) && (BswM_Mode_Notification_SWCModeSwitch_Lifecycle_Omc_Mode == RTE_MODE_Omc_LifeCycle_OMC_STOPPED))
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_Rule_Start_Omc_Init_when_Darh_Run) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_Rule_Start_Omc_Init_when_Darh_Run, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_AL_Rule_Start_Omc_Init_when_Darh_Run_True. */
      retVal = BSWM_ID_AL_AL_Rule_Start_Omc_Init_when_Darh_Run_True;
    }
  }
  else
  {
    BswM_UpdateRuleStates(BSWM_ID_RULE_Rule_Start_Omc_Init_when_Darh_Run, BSWM_FALSE);
    /* No false action list configured. */
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_Rule_Start_StdDiag_Init_when_Omc_Run
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_Rule_Start_StdDiag_Init_when_Omc_Run(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression LogEx_Start_StdDiag_Init_when_Omc_Run_and_Dlog_Run. */
  if((BswM_Mode_Notification_SWCModeSwitch_Lifecycle_Omc_Mode == RTE_MODE_Omc_LifeCycle_OMC_RUNNING) && (BswM_Mode_Notification_SWCModeSwitch_Lifecycle_Dlog_Mode == RTE_MODE_Dlog_LifeCycle_DLOG_RUNNING) && (BswM_Mode_Notification_SWCModeSwitch_IS_EcuRunState_EcuRunStateMode == RTE_MODE_IntegrationSample_EcuRunState_IntegrationSample_STARTUP) && (BswM_Mode_Notification_SWCModeSwitch_Lifecycle_StdDiag_Mode == RTE_MODE_StdDiag_LifeCycle_STDDIAG_STOPPED))
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_Rule_Start_StdDiag_Init_when_Omc_Run) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_Rule_Start_StdDiag_Init_when_Omc_Run, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_AL_Rule_Start_StdDiag_Init_when_Omc_Run_True. */
      retVal = BSWM_ID_AL_AL_Rule_Start_StdDiag_Init_when_Omc_Run_True;
    }
  }
  else
  {
    BswM_UpdateRuleStates(BSWM_ID_RULE_Rule_Start_StdDiag_Init_when_Omc_Run, BSWM_FALSE);
    /* No false action list configured. */
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_Rule_Start_Darh_Run_when_Darh_Init
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_Rule_Start_Darh_Run_when_Darh_Init(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression LogEx_Darh_Init_to_Run. */
  if((BswM_Mode_Notification_SWCModeSwitch_Lifecycle_Darh_Mode == RTE_MODE_Darh_LifeCycle_DARH_INITIALIZED) && (BswM_Mode_Notification_SWCModeSwitch_IS_EcuRunState_EcuRunStateMode == RTE_MODE_IntegrationSample_EcuRunState_IntegrationSample_STARTUP))
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_Rule_Start_Darh_Run_when_Darh_Init) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_Rule_Start_Darh_Run_when_Darh_Init, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_AL_RuleDarh_Init_to_Run_True. */
      retVal = BSWM_ID_AL_AL_RuleDarh_Init_to_Run_True;
    }
  }
  else
  {
    BswM_UpdateRuleStates(BSWM_ID_RULE_Rule_Start_Darh_Run_when_Darh_Init, BSWM_FALSE);
    /* No false action list configured. */
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_Rule_Start_Omc_Run_when_Omc_Init
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_Rule_Start_Omc_Run_when_Omc_Init(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression LogEx_Start_Omc_Run_when_Omc_Init. */
  if((BswM_Mode_Notification_SWCModeSwitch_Lifecycle_Omc_Mode == RTE_MODE_Omc_LifeCycle_OMC_INITIALIZED) && (BswM_Mode_Notification_SWCModeSwitch_IS_EcuRunState_EcuRunStateMode == RTE_MODE_IntegrationSample_EcuRunState_IntegrationSample_STARTUP))
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_Rule_Start_Omc_Run_when_Omc_Init) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_Rule_Start_Omc_Run_when_Omc_Init, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_AL_Rule_Start_Omc_Run_when_Omc_Init_True. */
      retVal = BSWM_ID_AL_AL_Rule_Start_Omc_Run_when_Omc_Init_True;
    }
  }
  else
  {
    BswM_UpdateRuleStates(BSWM_ID_RULE_Rule_Start_Omc_Run_when_Omc_Init, BSWM_FALSE);
    /* No false action list configured. */
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_Rule_Start_StdDiag_Run_when_StdDiag_Init
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_Rule_Start_StdDiag_Run_when_StdDiag_Init(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression LogEx_Start_StdDiag_Run_when_StdDiag_Init. */
  if((BswM_Mode_Notification_SWCModeSwitch_Lifecycle_StdDiag_Mode == RTE_MODE_StdDiag_LifeCycle_STDDIAG_INITIALIZED) && (BswM_Mode_Notification_SWCModeSwitch_IS_EcuRunState_EcuRunStateMode == RTE_MODE_IntegrationSample_EcuRunState_IntegrationSample_STARTUP))
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_Rule_Start_StdDiag_Run_when_StdDiag_Init) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_Rule_Start_StdDiag_Run_when_StdDiag_Init, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_AL_Rule_Start_StdDiag_Run_when_StdDiag_Init_True. */
      retVal = BSWM_ID_AL_AL_Rule_Start_StdDiag_Run_when_StdDiag_Init_True;
    }
  }
  else
  {
    BswM_UpdateRuleStates(BSWM_ID_RULE_Rule_Start_StdDiag_Run_when_StdDiag_Init, BSWM_FALSE);
    /* No false action list configured. */
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_Rule_Start_Systime_Run_when_Systime_Init
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_Rule_Start_Systime_Run_when_Systime_Init(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression LogEx_Start_Systime_Run_when_Systime_Init. */
  if((BswM_Mode_Notification_SWCModeSwitch_Lifecycle_Systime_Mode == RTE_MODE_SysTime_LifeCycle_SYSTIME_INITIALIZED) && (BswM_Mode_Notification_SWCModeSwitch_IS_EcuRunState_EcuRunStateMode == RTE_MODE_IntegrationSample_EcuRunState_IntegrationSample_STARTUP) && (BswM_GetComMChannelState(0) == COMM_FULL_COMMUNICATION))
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_Rule_Start_Systime_Run_when_Systime_Init) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_Rule_Start_Systime_Run_when_Systime_Init, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_AL_Rule_Start_Systime_Run_when_Systime_Init_True. */
      retVal = BSWM_ID_AL_AL_Rule_Start_Systime_Run_when_Systime_Init_True;
    }
  }
  else
  {
    BswM_UpdateRuleStates(BSWM_ID_RULE_Rule_Start_Systime_Run_when_Systime_Init, BSWM_FALSE);
    /* No false action list configured. */
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_Rule_DcmEcuReset
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_Rule_DcmEcuReset(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression LogEx_DcmEcuReset. */
  if((BswM_Mode_Notification_BSWModeSwitch_DcmEcuReset_DcmEcuReset == RTE_MODE_DcmEcuReset_EXECUTE) && (BswM_Mode_Notification_SWCModeSwitch_IS_EcuRunState_EcuRunStateMode == RTE_MODE_IntegrationSample_EcuRunState_IntegrationSample_NORMAL_OPERATION))
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_Rule_DcmEcuReset) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_Rule_DcmEcuReset, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_AL_ResetExecution. */
      retVal = BSWM_ID_AL_AL_ResetExecution;
    }
  }
  else
  {
    BswM_UpdateRuleStates(BSWM_ID_RULE_Rule_DcmEcuReset, BSWM_FALSE);
    /* No false action list configured. */
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_Rule_Systime_Init
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_Rule_Systime_Init(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression LogEx_Set_Systime_Init. */
  if((BswM_Mode_Notification_SWCModeSwitch_Lifecycle_Systime_Mode == RTE_MODE_SysTime_LifeCycle_SYSTIME_STOPPED) && (BswM_Mode_Notification_SWCModeSwitch_IS_EcuRunState_EcuRunStateMode == RTE_MODE_IntegrationSample_EcuRunState_IntegrationSample_STARTUP))
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_Rule_Systime_Init) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_Rule_Systime_Init, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_AL_Rule_Systime_Init_True. */
      retVal = BSWM_ID_AL_AL_Rule_Systime_Init_True;
    }
  }
  else
  {
    BswM_UpdateRuleStates(BSWM_ID_RULE_Rule_Systime_Init, BSWM_FALSE);
    /* No false action list configured. */
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_Rule_Darh_Init
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_Rule_Darh_Init(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression LogEx_Darh_Init. */
  if((BswM_Mode_Notification_SWCModeSwitch_Lifecycle_Dlog_Mode == RTE_MODE_Dlog_LifeCycle_DLOG_STOPPED) && (BswM_Mode_Notification_SWCModeSwitch_IS_EcuRunState_EcuRunStateMode == RTE_MODE_IntegrationSample_EcuRunState_IntegrationSample_STARTUP))
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_Rule_Darh_Init) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_Rule_Darh_Init, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_AL_Rule_Darh_Init_True. */
      retVal = BSWM_ID_AL_AL_Rule_Darh_Init_True;
    }
  }
  else
  {
    BswM_UpdateRuleStates(BSWM_ID_RULE_Rule_Darh_Init, BSWM_FALSE);
    /* No false action list configured. */
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_Rule_ComM_Channel_is_FULL_COM
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_Rule_ComM_Channel_is_FULL_COM(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression LogEx_VinComMode. */ /* PRQA S 3415 1 */ /* MD_MSR_12.4 */
  if((BswM_GetComMChannelState(0) == COMM_FULL_COMMUNICATION) && ((((BswM_Mode_Notification_SWCModeSwitch_DcmCommunicationControl_ComMConf_ComMChannel_BAC4_FlexRay_8e151c3c_DcmCommunicationControl_ComMConf_ComMChannel_A_FlexRay_5b5a9ac2 == RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NORM) || (BswM_Mode_Notification_SWCModeSwitch_DcmCommunicationControl_ComMConf_ComMChannel_BAC4_FlexRay_8e151c3c_DcmCommunicationControl_ComMConf_ComMChannel_A_FlexRay_5b5a9ac2 == RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NORM_NM) || (BswM_Mode_Notification_SWCModeSwitch_DcmCommunicationControl_ComMConf_ComMChannel_BAC4_FlexRay_8e151c3c_DcmCommunicationControl_ComMConf_ComMChannel_A_FlexRay_5b5a9ac2 == RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM) || (BswM_Mode_Notification_SWCModeSwitch_DcmCommunicationControl_ComMConf_ComMChannel_BAC4_FlexRay_8e151c3c_DcmCommunicationControl_ComMConf_ComMChannel_A_FlexRay_5b5a9ac2 == RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM_NM)) && ((Request_SWCModeReq_StdDiag_CommunicationModeDeclarationGroup_requestedMode == ENABLE_RX_AND_TX_NORMAL) || (Request_SWCModeReq_StdDiag_CommunicationModeDeclarationGroup_requestedMode == ENABLE_RX_DISABLE_TX_NORMAL))) && (((BswM_Mode_Notification_SWCModeSwitch_DcmCommunicationControl_ComMConf_ComMChannel_BAC4_FlexRay_8e151c3c_DcmCommunicationControl_ComMConf_ComMChannel_A_FlexRay_5b5a9ac2 == RTE_MODE_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NORM) || (BswM_Mode_Notification_SWCModeSwitch_DcmCommunicationControl_ComMConf_ComMChannel_BAC4_FlexRay_8e151c3c_DcmCommunicationControl_ComMConf_ComMChannel_A_FlexRay_5b5a9ac2 == RTE_MODE_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NORM_NM) || (BswM_Mode_Notification_SWCModeSwitch_DcmCommunicationControl_ComMConf_ComMChannel_BAC4_FlexRay_8e151c3c_DcmCommunicationControl_ComMConf_ComMChannel_A_FlexRay_5b5a9ac2 == RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM) || (BswM_Mode_Notification_SWCModeSwitch_DcmCommunicationControl_ComMConf_ComMChannel_BAC4_FlexRay_8e151c3c_DcmCommunicationControl_ComMConf_ComMChannel_A_FlexRay_5b5a9ac2 == RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM_NM)) && ((Request_SWCModeReq_StdDiag_CommunicationModeDeclarationGroup_requestedMode == DISABLE_RX_ENABLE_TX_NORMAL) || (Request_SWCModeReq_StdDiag_CommunicationModeDeclarationGroup_requestedMode == ENABLE_RX_AND_TX_NORMAL)))))
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_Rule_ComM_Channel_is_FULL_COM) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_Rule_ComM_Channel_is_FULL_COM, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_AL_ComM_Channel_is_FULL_COM. */
      retVal = BSWM_ID_AL_AL_ComM_Channel_is_FULL_COM;
    }
  }
  else
  {
    BswM_UpdateRuleStates(BSWM_ID_RULE_Rule_ComM_Channel_is_FULL_COM, BSWM_FALSE);
    /* No false action list configured. */
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_Rule_ComM_Channel_is_SILENT_COMMUNICATION
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_Rule_ComM_Channel_is_SILENT_COMMUNICATION(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression LogEx_ComM_Channel_is_SILENT_COMMUNICATION. */
  if(BswM_GetComMChannelState(0) == COMM_SILENT_COMMUNICATION)
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_Rule_ComM_Channel_is_SILENT_COMMUNICATION) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_Rule_ComM_Channel_is_SILENT_COMMUNICATION, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_AL_ComM_Channel_is_SILENT_COMMUNICATION_BswMActionList_True. */
      retVal = BSWM_ID_AL_AL_ComM_Channel_is_SILENT_COMMUNICATION_BswMActionList_True;
    }
  }
  else
  {
    BswM_UpdateRuleStates(BSWM_ID_RULE_Rule_ComM_Channel_is_SILENT_COMMUNICATION, BSWM_FALSE);
    /* No false action list configured. */
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_Rule_Set_DarhReportError_due_ComM_and_CEL_mode
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_Rule_Set_DarhReportError_due_ComM_and_CEL_mode(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression LogEx_Set_DarhReportError_due_ComM_and_CEL_mode. */
  if((BswM_GetComMChannelState(0) == COMM_FULL_COMMUNICATION) && (BswM_Mode_Notification_SWCModeSwitch_currentCentralErrorLockMode_currentCentralErrorLockMode != RTE_MODE_Stm_CentralErrorLockMode_STM_CEL_LOCKED))
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_Rule_Set_DarhReportError_due_ComM_and_CEL_mode) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_Rule_Set_DarhReportError_due_ComM_and_CEL_mode, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_AL_Set_DarhReportError_due_ComM_and_CEL_mode_BswMActionList_True. */
      retVal = BSWM_ID_AL_AL_Set_DarhReportError_due_ComM_and_CEL_mode_BswMActionList_True;
    }
  }
  else
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_Rule_Set_DarhReportError_due_ComM_and_CEL_mode) != BSWM_FALSE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_Rule_Set_DarhReportError_due_ComM_and_CEL_mode, BSWM_FALSE);
      /* Return triggered action list BswM_ActionList_AL_Set_DarhReportError_due_ComM_and_CEL_mode_BswMActionList_False. */
      retVal = BSWM_ID_AL_AL_Set_DarhReportError_due_ComM_and_CEL_mode_BswMActionList_False;
    }
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_Rule_Switch_StdDiagSessionChangeIndication
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_Rule_Switch_StdDiagSessionChangeIndication(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression LogEx_Switch_StdDiagSessionChangeIndication. */
  if(BswM_Mode_Notification_BSWModeSwitch_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl == RTE_MODE_DcmDiagnosticSessionControl_DEFAULT_SESSION)
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_Rule_Switch_StdDiagSessionChangeIndication) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_Rule_Switch_StdDiagSessionChangeIndication, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_AL_Switch_StdDiagSessionChangeIndication_True. */
      retVal = BSWM_ID_AL_AL_Switch_StdDiagSessionChangeIndication_True;
    }
  }
  else
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_Rule_Switch_StdDiagSessionChangeIndication) != BSWM_FALSE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_Rule_Switch_StdDiagSessionChangeIndication, BSWM_FALSE);
      /* Return triggered action list BswM_ActionList_AL_Switch_StdDiagSessionChangeIndication_False. */
      retVal = BSWM_ID_AL_AL_Switch_StdDiagSessionChangeIndication_False;
    }
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_Rule_NDC_Enable_Rx_Enable_Tx
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_Rule_NDC_Enable_Rx_Enable_Tx(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression LogEx_NDC_Rx_Enabled_Tx_Enabled. */ /* PRQA S 3415 1 */ /* MD_MSR_12.4 */
  if((((BswM_Mode_Notification_SWCModeSwitch_DcmCommunicationControl_ComMConf_ComMChannel_BAC4_FlexRay_8e151c3c_DcmCommunicationControl_ComMConf_ComMChannel_A_FlexRay_5b5a9ac2 == RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NORM) || (BswM_Mode_Notification_SWCModeSwitch_DcmCommunicationControl_ComMConf_ComMChannel_BAC4_FlexRay_8e151c3c_DcmCommunicationControl_ComMConf_ComMChannel_A_FlexRay_5b5a9ac2 == RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NORM_NM) || (BswM_Mode_Notification_SWCModeSwitch_DcmCommunicationControl_ComMConf_ComMChannel_BAC4_FlexRay_8e151c3c_DcmCommunicationControl_ComMConf_ComMChannel_A_FlexRay_5b5a9ac2 == RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM) || (BswM_Mode_Notification_SWCModeSwitch_DcmCommunicationControl_ComMConf_ComMChannel_BAC4_FlexRay_8e151c3c_DcmCommunicationControl_ComMConf_ComMChannel_A_FlexRay_5b5a9ac2 == RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM_NM)) && ((Request_SWCModeReq_StdDiag_CommunicationModeDeclarationGroup_requestedMode == ENABLE_RX_AND_TX_NORMAL) || (Request_SWCModeReq_StdDiag_CommunicationModeDeclarationGroup_requestedMode == ENABLE_RX_DISABLE_TX_NORMAL))) && (((BswM_Mode_Notification_SWCModeSwitch_DcmCommunicationControl_ComMConf_ComMChannel_BAC4_FlexRay_8e151c3c_DcmCommunicationControl_ComMConf_ComMChannel_A_FlexRay_5b5a9ac2 == RTE_MODE_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NORM) || (BswM_Mode_Notification_SWCModeSwitch_DcmCommunicationControl_ComMConf_ComMChannel_BAC4_FlexRay_8e151c3c_DcmCommunicationControl_ComMConf_ComMChannel_A_FlexRay_5b5a9ac2 == RTE_MODE_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NORM_NM) || (BswM_Mode_Notification_SWCModeSwitch_DcmCommunicationControl_ComMConf_ComMChannel_BAC4_FlexRay_8e151c3c_DcmCommunicationControl_ComMConf_ComMChannel_A_FlexRay_5b5a9ac2 == RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM) || (BswM_Mode_Notification_SWCModeSwitch_DcmCommunicationControl_ComMConf_ComMChannel_BAC4_FlexRay_8e151c3c_DcmCommunicationControl_ComMConf_ComMChannel_A_FlexRay_5b5a9ac2 == RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM_NM)) && ((Request_SWCModeReq_StdDiag_CommunicationModeDeclarationGroup_requestedMode == DISABLE_RX_ENABLE_TX_NORMAL) || (Request_SWCModeReq_StdDiag_CommunicationModeDeclarationGroup_requestedMode == ENABLE_RX_AND_TX_NORMAL))))
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_Rule_NDC_Enable_Rx_Enable_Tx) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_Rule_NDC_Enable_Rx_Enable_Tx, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_AL_NDC_Enable_RX_AND_TX_NORMAL. */
      retVal = BSWM_ID_AL_AL_NDC_Enable_RX_AND_TX_NORMAL;
    }
  }
  else
  {
    BswM_UpdateRuleStates(BSWM_ID_RULE_Rule_NDC_Enable_Rx_Enable_Tx, BSWM_FALSE);
    /* No false action list configured. */
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_Rule_NDC_Enable_Rx_Disable_Tx
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_Rule_NDC_Enable_Rx_Disable_Tx(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression LogEx_NDC_Rx_Enabled_Tx_Disabled. */ /* PRQA S 3415 1 */ /* MD_MSR_12.4 */
  if((((BswM_Mode_Notification_SWCModeSwitch_DcmCommunicationControl_ComMConf_ComMChannel_BAC4_FlexRay_8e151c3c_DcmCommunicationControl_ComMConf_ComMChannel_A_FlexRay_5b5a9ac2 == RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NORM) || (BswM_Mode_Notification_SWCModeSwitch_DcmCommunicationControl_ComMConf_ComMChannel_BAC4_FlexRay_8e151c3c_DcmCommunicationControl_ComMConf_ComMChannel_A_FlexRay_5b5a9ac2 == RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NORM_NM) || (BswM_Mode_Notification_SWCModeSwitch_DcmCommunicationControl_ComMConf_ComMChannel_BAC4_FlexRay_8e151c3c_DcmCommunicationControl_ComMConf_ComMChannel_A_FlexRay_5b5a9ac2 == RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM) || (BswM_Mode_Notification_SWCModeSwitch_DcmCommunicationControl_ComMConf_ComMChannel_BAC4_FlexRay_8e151c3c_DcmCommunicationControl_ComMConf_ComMChannel_A_FlexRay_5b5a9ac2 == RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM_NM)) && ((Request_SWCModeReq_StdDiag_CommunicationModeDeclarationGroup_requestedMode == ENABLE_RX_AND_TX_NORMAL) || (Request_SWCModeReq_StdDiag_CommunicationModeDeclarationGroup_requestedMode == ENABLE_RX_DISABLE_TX_NORMAL))) && (!(((BswM_Mode_Notification_SWCModeSwitch_DcmCommunicationControl_ComMConf_ComMChannel_BAC4_FlexRay_8e151c3c_DcmCommunicationControl_ComMConf_ComMChannel_A_FlexRay_5b5a9ac2 == RTE_MODE_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NORM) || (BswM_Mode_Notification_SWCModeSwitch_DcmCommunicationControl_ComMConf_ComMChannel_BAC4_FlexRay_8e151c3c_DcmCommunicationControl_ComMConf_ComMChannel_A_FlexRay_5b5a9ac2 == RTE_MODE_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NORM_NM) || (BswM_Mode_Notification_SWCModeSwitch_DcmCommunicationControl_ComMConf_ComMChannel_BAC4_FlexRay_8e151c3c_DcmCommunicationControl_ComMConf_ComMChannel_A_FlexRay_5b5a9ac2 == RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM) || (BswM_Mode_Notification_SWCModeSwitch_DcmCommunicationControl_ComMConf_ComMChannel_BAC4_FlexRay_8e151c3c_DcmCommunicationControl_ComMConf_ComMChannel_A_FlexRay_5b5a9ac2 == RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM_NM)) && ((Request_SWCModeReq_StdDiag_CommunicationModeDeclarationGroup_requestedMode == DISABLE_RX_ENABLE_TX_NORMAL) || (Request_SWCModeReq_StdDiag_CommunicationModeDeclarationGroup_requestedMode == ENABLE_RX_AND_TX_NORMAL)))))
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_Rule_NDC_Enable_Rx_Disable_Tx) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_Rule_NDC_Enable_Rx_Disable_Tx, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_AL_NDC_Enable_RX_Disable_TX_NORMAL. */
      retVal = BSWM_ID_AL_AL_NDC_Enable_RX_Disable_TX_NORMAL;
    }
  }
  else
  {
    BswM_UpdateRuleStates(BSWM_ID_RULE_Rule_NDC_Enable_Rx_Disable_Tx, BSWM_FALSE);
    /* No false action list configured. */
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_Rule_NDC_Disable_Rx_Enable_Tx
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_Rule_NDC_Disable_Rx_Enable_Tx(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression LogEx_NDC_Rx_Disabled_Tx_Enabled. */ /* PRQA S 3415 1 */ /* MD_MSR_12.4 */
  if((!(((BswM_Mode_Notification_SWCModeSwitch_DcmCommunicationControl_ComMConf_ComMChannel_BAC4_FlexRay_8e151c3c_DcmCommunicationControl_ComMConf_ComMChannel_A_FlexRay_5b5a9ac2 == RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NORM) || (BswM_Mode_Notification_SWCModeSwitch_DcmCommunicationControl_ComMConf_ComMChannel_BAC4_FlexRay_8e151c3c_DcmCommunicationControl_ComMConf_ComMChannel_A_FlexRay_5b5a9ac2 == RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NORM_NM) || (BswM_Mode_Notification_SWCModeSwitch_DcmCommunicationControl_ComMConf_ComMChannel_BAC4_FlexRay_8e151c3c_DcmCommunicationControl_ComMConf_ComMChannel_A_FlexRay_5b5a9ac2 == RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM) || (BswM_Mode_Notification_SWCModeSwitch_DcmCommunicationControl_ComMConf_ComMChannel_BAC4_FlexRay_8e151c3c_DcmCommunicationControl_ComMConf_ComMChannel_A_FlexRay_5b5a9ac2 == RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM_NM)) && ((Request_SWCModeReq_StdDiag_CommunicationModeDeclarationGroup_requestedMode == ENABLE_RX_AND_TX_NORMAL) || (Request_SWCModeReq_StdDiag_CommunicationModeDeclarationGroup_requestedMode == ENABLE_RX_DISABLE_TX_NORMAL)))) && (((BswM_Mode_Notification_SWCModeSwitch_DcmCommunicationControl_ComMConf_ComMChannel_BAC4_FlexRay_8e151c3c_DcmCommunicationControl_ComMConf_ComMChannel_A_FlexRay_5b5a9ac2 == RTE_MODE_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NORM) || (BswM_Mode_Notification_SWCModeSwitch_DcmCommunicationControl_ComMConf_ComMChannel_BAC4_FlexRay_8e151c3c_DcmCommunicationControl_ComMConf_ComMChannel_A_FlexRay_5b5a9ac2 == RTE_MODE_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NORM_NM) || (BswM_Mode_Notification_SWCModeSwitch_DcmCommunicationControl_ComMConf_ComMChannel_BAC4_FlexRay_8e151c3c_DcmCommunicationControl_ComMConf_ComMChannel_A_FlexRay_5b5a9ac2 == RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM) || (BswM_Mode_Notification_SWCModeSwitch_DcmCommunicationControl_ComMConf_ComMChannel_BAC4_FlexRay_8e151c3c_DcmCommunicationControl_ComMConf_ComMChannel_A_FlexRay_5b5a9ac2 == RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM_NM)) && ((Request_SWCModeReq_StdDiag_CommunicationModeDeclarationGroup_requestedMode == DISABLE_RX_ENABLE_TX_NORMAL) || (Request_SWCModeReq_StdDiag_CommunicationModeDeclarationGroup_requestedMode == ENABLE_RX_AND_TX_NORMAL))))
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_Rule_NDC_Disable_Rx_Enable_Tx) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_Rule_NDC_Disable_Rx_Enable_Tx, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_AL_NDC_Disable_RX_Enable_TX_NORMAL. */
      retVal = BSWM_ID_AL_AL_NDC_Disable_RX_Enable_TX_NORMAL;
    }
  }
  else
  {
    BswM_UpdateRuleStates(BSWM_ID_RULE_Rule_NDC_Disable_Rx_Enable_Tx, BSWM_FALSE);
    /* No false action list configured. */
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_Rule_NDC_Disable_Rx_Disable_Tx
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_Rule_NDC_Disable_Rx_Disable_Tx(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression LogEx_NDC_Rx_Disabled_Tx_Disabled. */ /* PRQA S 3415 1 */ /* MD_MSR_12.4 */
  if((!(((BswM_Mode_Notification_SWCModeSwitch_DcmCommunicationControl_ComMConf_ComMChannel_BAC4_FlexRay_8e151c3c_DcmCommunicationControl_ComMConf_ComMChannel_A_FlexRay_5b5a9ac2 == RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NORM) || (BswM_Mode_Notification_SWCModeSwitch_DcmCommunicationControl_ComMConf_ComMChannel_BAC4_FlexRay_8e151c3c_DcmCommunicationControl_ComMConf_ComMChannel_A_FlexRay_5b5a9ac2 == RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NORM_NM) || (BswM_Mode_Notification_SWCModeSwitch_DcmCommunicationControl_ComMConf_ComMChannel_BAC4_FlexRay_8e151c3c_DcmCommunicationControl_ComMConf_ComMChannel_A_FlexRay_5b5a9ac2 == RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM) || (BswM_Mode_Notification_SWCModeSwitch_DcmCommunicationControl_ComMConf_ComMChannel_BAC4_FlexRay_8e151c3c_DcmCommunicationControl_ComMConf_ComMChannel_A_FlexRay_5b5a9ac2 == RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM_NM)) && ((Request_SWCModeReq_StdDiag_CommunicationModeDeclarationGroup_requestedMode == ENABLE_RX_AND_TX_NORMAL) || (Request_SWCModeReq_StdDiag_CommunicationModeDeclarationGroup_requestedMode == ENABLE_RX_DISABLE_TX_NORMAL)))) && (!(((BswM_Mode_Notification_SWCModeSwitch_DcmCommunicationControl_ComMConf_ComMChannel_BAC4_FlexRay_8e151c3c_DcmCommunicationControl_ComMConf_ComMChannel_A_FlexRay_5b5a9ac2 == RTE_MODE_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NORM) || (BswM_Mode_Notification_SWCModeSwitch_DcmCommunicationControl_ComMConf_ComMChannel_BAC4_FlexRay_8e151c3c_DcmCommunicationControl_ComMConf_ComMChannel_A_FlexRay_5b5a9ac2 == RTE_MODE_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NORM_NM) || (BswM_Mode_Notification_SWCModeSwitch_DcmCommunicationControl_ComMConf_ComMChannel_BAC4_FlexRay_8e151c3c_DcmCommunicationControl_ComMConf_ComMChannel_A_FlexRay_5b5a9ac2 == RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM) || (BswM_Mode_Notification_SWCModeSwitch_DcmCommunicationControl_ComMConf_ComMChannel_BAC4_FlexRay_8e151c3c_DcmCommunicationControl_ComMConf_ComMChannel_A_FlexRay_5b5a9ac2 == RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM_NM)) && ((Request_SWCModeReq_StdDiag_CommunicationModeDeclarationGroup_requestedMode == DISABLE_RX_ENABLE_TX_NORMAL) || (Request_SWCModeReq_StdDiag_CommunicationModeDeclarationGroup_requestedMode == ENABLE_RX_AND_TX_NORMAL)))))
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_Rule_NDC_Disable_Rx_Disable_Tx) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_Rule_NDC_Disable_Rx_Disable_Tx, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_AL_NDC_Disable_Rx_And_Tx_Normal. */
      retVal = BSWM_ID_AL_AL_NDC_Disable_Rx_And_Tx_Normal;
    }
  }
  else
  {
    BswM_UpdateRuleStates(BSWM_ID_RULE_Rule_NDC_Disable_Rx_Disable_Tx, BSWM_FALSE);
    /* No false action list configured. */
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_Rule_Shutdown
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_Rule_Shutdown(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression LogEx_Shutdown. */
  if(BswM_Mode_Notification_SWCModeSwitch_IS_EcuRunState_EcuRunStateMode == RTE_MODE_IntegrationSample_EcuRunState_IntegrationSample_SHUTDOWN)
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_Rule_Shutdown) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_Rule_Shutdown, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_AL_ResetExecution. */
      retVal = BSWM_ID_AL_AL_ResetExecution;
    }
  }
  else
  {
    BswM_UpdateRuleStates(BSWM_ID_RULE_Rule_Shutdown, BSWM_FALSE);
    /* No false action list configured. */
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_Rule_ComM_Channel_is_NO_COM
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_Rule_ComM_Channel_is_NO_COM(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression LogEx_ComM_Channel_is_NO_COM. */
  if(BswM_GetComMChannelState(0) == COMM_NO_COMMUNICATION)
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_Rule_ComM_Channel_is_NO_COM) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_Rule_ComM_Channel_is_NO_COM, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_AL_ComM_Channel_is_NO_COM_BswMActionList_True. */
      retVal = BSWM_ID_AL_AL_ComM_Channel_is_NO_COM_BswMActionList_True;
    }
  }
  else
  {
    BswM_UpdateRuleStates(BSWM_ID_RULE_Rule_ComM_Channel_is_NO_COM, BSWM_FALSE);
    /* No false action list configured. */
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_Rule_Set_EcuRunMode_to_Normal_Operation_when_all_modules_run
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_Rule_Set_EcuRunMode_to_Normal_Operation_when_all_modules_run(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression LogEx_Set_EcuRunMode_to_Normal_Operation_when_all_modules_run_BswMLogicalExpression. */
  if((BswM_Mode_Notification_SWCModeSwitch_IS_EcuRunState_EcuRunStateMode == RTE_MODE_IntegrationSample_EcuRunState_IntegrationSample_STARTUP) && (BswM_Mode_Notification_SWCModeSwitch_Lifecycle_Dlog_Mode == RTE_MODE_Dlog_LifeCycle_DLOG_RUNNING) && (BswM_Mode_Notification_SWCModeSwitch_Lifecycle_Darh_Mode == RTE_MODE_Darh_LifeCycle_DARH_RUNNING) && (BswM_Mode_Notification_SWCModeSwitch_Lifecycle_Omc_Mode == RTE_MODE_Omc_LifeCycle_OMC_RUNNING) && (BswM_Mode_Notification_SWCModeSwitch_Lifecycle_Systime_Mode == RTE_MODE_SysTime_LifeCycle_SYSTIME_RUNNING) && (BswM_Mode_Notification_SWCModeSwitch_Lifecycle_StdDiag_Mode == RTE_MODE_StdDiag_LifeCycle_STDDIAG_RUNNING))
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_Rule_Set_EcuRunMode_to_Normal_Operation_when_all_modules_run) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_Rule_Set_EcuRunMode_to_Normal_Operation_when_all_modules_run, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_AL_Set_EcuRunMode_to_Normal_Operation_when_all_modules_run_BswMActionList_True. */
      retVal = BSWM_ID_AL_AL_Set_EcuRunMode_to_Normal_Operation_when_all_modules_run_BswMActionList_True;
    }
  }
  else
  {
    BswM_UpdateRuleStates(BSWM_ID_RULE_Rule_Set_EcuRunMode_to_Normal_Operation_when_all_modules_run, BSWM_FALSE);
    /* No false action list configured. */
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_Rule_Reset_when_SimpleTimer0_fired
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_Rule_Reset_when_SimpleTimer0_fired(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression LogEx_Reset_when_SimpleTimer0_fired_BswMLogicalExpression. */
  if(BswM_Mode_Notification_SWC_Mode_Notification_SimpleTimerMode_SimpleTimerMode == RTE_MODE_IntegrationSample_SimpleTimerState_IntegrationSample_Timer_FIRE)
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_Rule_Reset_when_SimpleTimer0_fired) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_Rule_Reset_when_SimpleTimer0_fired, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_AL_Reset_when_SimpleTimer0_fired_BswMActionList_True. */
      retVal = BSWM_ID_AL_AL_Reset_when_SimpleTimer0_fired_BswMActionList_True;
    }
  }
  else
  {
    BswM_UpdateRuleStates(BSWM_ID_RULE_Rule_Reset_when_SimpleTimer0_fired, BSWM_FALSE);
    /* No false action list configured. */
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_Rule_BS_Init
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_Rule_BS_Init(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression LogEx_Bs_Init. */
  if((BswM_Mode_Notification_SWC_ModeNotification_Lifecycle_Bs_Mode == RTE_MODE_Bs_LifeCycle_BS_STOPPED) && (BswM_Mode_Notification_SWCModeSwitch_IS_EcuRunState_EcuRunStateMode == RTE_MODE_IntegrationSample_EcuRunState_IntegrationSample_STARTUP))
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_Rule_BS_Init) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_Rule_BS_Init, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_AL_BswMActionList_Bs_Init_True. */
      retVal = BSWM_ID_AL_AL_BswMActionList_Bs_Init_True;
    }
  }
  else
  {
    BswM_UpdateRuleStates(BSWM_ID_RULE_Rule_BS_Init, BSWM_FALSE);
    /* No false action list configured. */
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_Rule_Bs_Run
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_Rule_Bs_Run(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression LogEx_Bs_Run. */
  if((BswM_Mode_Notification_SWC_ModeNotification_Lifecycle_Bs_Mode == RTE_MODE_Bs_LifeCycle_BS_INITIALIZED) && (BswM_Mode_Notification_SWCModeSwitch_IS_EcuRunState_EcuRunStateMode == RTE_MODE_IntegrationSample_EcuRunState_IntegrationSample_STARTUP))
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_Rule_Bs_Run) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_Rule_Bs_Run, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_AL_Bs_Run_when_Bs_Init. */
      retVal = BSWM_ID_AL_AL_Bs_Run_when_Bs_Init;
    }
  }
  else
  {
    BswM_UpdateRuleStates(BSWM_ID_RULE_Rule_Bs_Run, BSWM_FALSE);
    /* No false action list configured. */
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_ESH_RunToPostRun
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_RunToPostRun(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression ESH_LE_RunToPostRun. */ /* PRQA S 3415 1 */ /* MD_MSR_12.4 */
  if((BswM_GetGenericState(1) == BSWM_GENERICVALUE_ESH_State_ESH_RUN) && (BswM_GetComMChannelState(0) == COMM_NO_COMMUNICATION) && ((Request_ESH_RunRequest_0_requestedMode == RELEASED) && (Request_ESH_RunRequest_1_requestedMode == RELEASED)) && (BswM_GetTimerState(2) == BSWM_TIMER_EXPIRED) && (BswM_Mode_Notification_ESH_ModeNotification_BswM_MDGP_ESH_Mode == RTE_MODE_ESH_Mode_RUN))
  {
    /* Return conditional action list BswM_ActionList_ESH_AL_ExitRun. */
    retVal = BSWM_ID_AL_ESH_AL_ExitRun;
  }
  /* No false action list configured. */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_ESH_RunToPostRunNested
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_RunToPostRunNested(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression ESH_LE_ComMNoPendingRequests. */
  if(BswM_GetGenericState(3) == BSWM_GENERICVALUE_ESH_ComMPendingRequests_ESH_COMM_NO_REQUEST)
  {
    /* Return conditional action list BswM_ActionList_ESH_AL_RunToPostRun. */
    retVal = BSWM_ID_AL_ESH_AL_RunToPostRun;
  }
  /* No false action list configured. */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_ESH_WaitToShutdown
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_WaitToShutdown(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression ESH_LE_WaitForNvMToShutdown. */ /* PRQA S 3415 1 */ /* MD_MSR_12.4 */
  if((BswM_GetGenericState(1) == BSWM_GENERICVALUE_ESH_State_ESH_WAIT_FOR_NVM) && ((BswM_GetNvMJobState(0) != NVM_REQ_PENDING) || (BswM_GetTimerState(1) != BSWM_TIMER_STARTED)) && ((EcuM_GetValidatedWakeupEvents() == 0u) && (BswM_GetGenericState(3) == BSWM_GENERICVALUE_ESH_ComMPendingRequests_ESH_COMM_NO_REQUEST)))
  {
    /* Return conditional action list BswM_ActionList_ESH_AL_WaitForNvMToShutdown. */
    retVal = BSWM_ID_AL_ESH_AL_WaitForNvMToShutdown;
  }
  /* No false action list configured. */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_ESH_WakeupToPrep
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_WakeupToPrep(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression ESH_LE_WakeupToPrepShutdown. */ /* PRQA S 3415 1 */ /* MD_MSR_12.4 */
  if((BswM_GetGenericState(1) == BSWM_GENERICVALUE_ESH_State_ESH_WAKEUP) && ((BswM_GetNvMJobState(0) != NVM_REQ_PENDING) || (BswM_GetTimerState(0) != BSWM_TIMER_STARTED)) && (EcuM_GetPendingWakeupEvents() == 0u) && ((EcuM_GetValidatedWakeupEvents() == 0u) && (BswM_GetGenericState(3) == BSWM_GENERICVALUE_ESH_ComMPendingRequests_ESH_COMM_NO_REQUEST)) && (BswM_Mode_Notification_ESH_ModeNotification_BswM_MDGP_ESH_Mode == RTE_MODE_ESH_Mode_WAKEUP))
  {
    /* Return conditional action list BswM_ActionList_ESH_AL_WakeupToPrep. */
    retVal = BSWM_ID_AL_ESH_AL_WakeupToPrep;
  }
  /* No false action list configured. */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_ESH_WaitToWakeup
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_WaitToWakeup(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression ESH_LE_WaitForNvMToWakeup. */ /* PRQA S 3415 1 */ /* MD_MSR_12.4 */
  if((BswM_GetGenericState(1) == BSWM_GENERICVALUE_ESH_State_ESH_WAIT_FOR_NVM) && ((EcuM_GetValidatedWakeupEvents() != 0u) || (BswM_GetGenericState(3) == BSWM_GENERICVALUE_ESH_ComMPendingRequests_ESH_COMM_PENDING_REQUEST)))
  {
    /* Return conditional action list BswM_ActionList_ESH_AL_WaitForNvMWakeup. */
    retVal = BSWM_ID_AL_ESH_AL_WaitForNvMWakeup;
  }
  /* No false action list configured. */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_ESH_WakeupToRun
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_WakeupToRun(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression ESH_LE_WakeupToRun. */ /* PRQA S 3415 1 */ /* MD_MSR_12.4 */
  if((BswM_GetGenericState(1) == BSWM_GENERICVALUE_ESH_State_ESH_WAKEUP) && ((EcuM_GetValidatedWakeupEvents() != 0u) || (BswM_GetGenericState(3) == BSWM_GENERICVALUE_ESH_ComMPendingRequests_ESH_COMM_PENDING_REQUEST)) && ((BswM_GetNvMJobState(0) != NVM_REQ_PENDING) || (BswM_GetTimerState(0) != BSWM_TIMER_STARTED)) && (BswM_Mode_Notification_ESH_ModeNotification_BswM_MDGP_ESH_Mode == RTE_MODE_ESH_Mode_WAKEUP))
  {
    /* Return conditional action list BswM_ActionList_ESH_AL_WakeupToRun. */
    retVal = BSWM_ID_AL_ESH_AL_WakeupToRun;
  }
  /* No false action list configured. */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_ESH_DemInit
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_DemInit(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression ESH_LE_DemNotInitialized. */
  if(BswM_GetGenericState(2) == BSWM_GENERICVALUE_ESH_DemInitStatus_DEM_NOT_INITIALIZED)
  {
    /* Return conditional action list BswM_ActionList_ESH_AL_DemInit. */
    retVal = BSWM_ID_AL_ESH_AL_DemInit;
  }
  /* No false action list configured. */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_ESH_InitToWakeup
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_InitToWakeup(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression ESH_LE_InitToWakeup. */
  if(BswM_GetGenericState(1) == BSWM_GENERICVALUE_ESH_State_ESH_INIT)
  {
    /* Return conditional action list BswM_ActionList_ESH_AL_InitToWakeup. */
    retVal = BSWM_ID_AL_ESH_AL_InitToWakeup;
  }
  /* No false action list configured. */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_ESH_PostRunToPrepNested
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_PostRunToPrepNested(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression ESH_LE_PostRunToPrep. */
  if((Request_ESH_PostRunRequest_0_requestedMode == RELEASED) && (Request_ESH_PostRunRequest_1_requestedMode == RELEASED))
  {
    /* Return conditional action list BswM_ActionList_ESH_AL_PostRunToPrepShutdown. */
    retVal = BSWM_ID_AL_ESH_AL_PostRunToPrepShutdown;
  }
  /* No false action list configured. */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_ESH_PostRunNested
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_PostRunNested(void)
{
  BswM_HandleType retVal;
  /* Evaluate logical expression ESH_LE_RunRequestsOrWakeup. */ /* PRQA S 3415 1 */ /* MD_MSR_12.4 */
  if(((Request_ESH_RunRequest_0_requestedMode == REQUESTED) || (Request_ESH_RunRequest_1_requestedMode == REQUESTED)) || ((EcuM_GetValidatedWakeupEvents() != 0u) || (BswM_GetGenericState(3) == BSWM_GENERICVALUE_ESH_ComMPendingRequests_ESH_COMM_PENDING_REQUEST)))
  {
    /* Return conditional action list BswM_ActionList_ESH_AL_PostRunToRun. */
    retVal = BSWM_ID_AL_ESH_AL_PostRunToRun;
  }
  else
  {
    /* Return conditional action list BswM_ActionList_ESH_AL_ESH_PostRunToPrepCheck. */
    retVal = BSWM_ID_AL_ESH_AL_ESH_PostRunToPrepCheck;
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_ESH_PostRun
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_PostRun(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression ESH_LE_PostRun. */
  if((BswM_GetGenericState(1) == BSWM_GENERICVALUE_ESH_State_ESH_POST_RUN) && (BswM_Mode_Notification_ESH_ModeNotification_BswM_MDGP_ESH_Mode == RTE_MODE_ESH_Mode_POSTRUN))
  {
    /* Return conditional action list BswM_ActionList_ESH_AL_ExitPostRun. */
    retVal = BSWM_ID_AL_ESH_AL_ExitPostRun;
  }
  /* No false action list configured. */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_ESH_PrepToWait
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_PrepToWait(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression ESH_LE_PrepShutdownToWaitForNvM. */
  if((BswM_GetGenericState(1) == BSWM_GENERICVALUE_ESH_State_ESH_PREP_SHUTDOWN) && (BswM_Mode_Notification_ESH_ModeNotification_BswM_MDGP_ESH_Mode == RTE_MODE_ESH_Mode_SHUTDOWN))
  {
    /* Return conditional action list BswM_ActionList_ESH_AL_PrepShutdownToWaitForNvM. */
    retVal = BSWM_ID_AL_ESH_AL_PrepShutdownToWaitForNvM;
  }
  /* No false action list configured. */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_CC_A_FlexRay_5b5a9ac2_TX
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_A_FlexRay_5b5a9ac2_TX(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression CC_LE_A_FlexRay_5b5a9ac2_TX. */
  if((BswM_GetFrSMState(0) == FRSM_BSWM_ONLINE) || (BswM_GetFrSMState(0) == FRSM_BSWM_ONLINE_ECU_PASSIVE))
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_A_FlexRay_5b5a9ac2_TX) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_A_FlexRay_5b5a9ac2_TX, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_CC_AL_A_FlexRay_5b5a9ac2_TX_EnableNoinit. */
      retVal = BSWM_ID_AL_CC_AL_A_FlexRay_5b5a9ac2_TX_EnableNoinit;
    }
  }
  else
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_A_FlexRay_5b5a9ac2_TX) != BSWM_FALSE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_A_FlexRay_5b5a9ac2_TX, BSWM_FALSE);
      /* Return triggered action list BswM_ActionList_CC_AL_A_FlexRay_5b5a9ac2_TX_Disable. */
      retVal = BSWM_ID_AL_CC_AL_A_FlexRay_5b5a9ac2_TX_Disable;
    }
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_CC_A_FlexRay_5b5a9ac2_RX
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_A_FlexRay_5b5a9ac2_RX(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression CC_LE_A_FlexRay_5b5a9ac2_RX. */
  if((BswM_GetFrSMState(0) == FRSM_BSWM_ONLINE) || (BswM_GetFrSMState(0) == FRSM_BSWM_ONLINE_ECU_PASSIVE))
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_A_FlexRay_5b5a9ac2_RX) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_A_FlexRay_5b5a9ac2_RX, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_CC_AL_A_FlexRay_5b5a9ac2_RX_EnableNoinit. */
      retVal = BSWM_ID_AL_CC_AL_A_FlexRay_5b5a9ac2_RX_EnableNoinit;
    }
  }
  else
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_A_FlexRay_5b5a9ac2_RX) != BSWM_FALSE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_A_FlexRay_5b5a9ac2_RX, BSWM_FALSE);
      /* Return triggered action list BswM_ActionList_CC_AL_A_FlexRay_5b5a9ac2_RX_Disable. */
      retVal = BSWM_ID_AL_CC_AL_A_FlexRay_5b5a9ac2_RX_Disable;
    }
  }
  return retVal;
}



#define BSWM_STOP_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

