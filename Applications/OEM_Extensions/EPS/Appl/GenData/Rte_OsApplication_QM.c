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
 *          File:  Rte_OsApplication_QM.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.16.0
 *                 RTE Core Version 1.16.0
 *       License:  Unlimited license CBD1700369 for Nexteer Automotive Corporation
 *
 *   Description:  RTE implementation file
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* PRQA S 0777, 0779, 0781, 0857 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779, MD_Rte_0781, MD_MSR_1.1_857 */

#define RTE_CORE
#include "Os.h" /* PRQA S 0828, 0883 */ /* MD_MSR_1.1_828, MD_Rte_Os */
#include "Rte_Type.h"
#include "Rte_Main.h"

#include "Rte_BMW_Application_Connector_Dummy.h"
#include "Rte_BMW_Application_Main.h"
#include "Rte_Bs.h"
#include "Rte_BswM.h"
#include "Rte_ComM.h"
#include "Rte_Darh.h"
#include "Rte_Dcm.h"
#include "Rte_DemMaster_0.h"
#include "Rte_DemSatellite_0.h"
#include "Rte_DemWrapper.h"
#include "Rte_Det.h"
#include "Rte_Dlog.h"
#include "Rte_EcuM.h"
#include "Rte_IntegrationSample.h"
#include "Rte_NvM.h"
#include "Rte_Omc.h"
#include "Rte_Os_OsCore_CORE0_swc.h"
#include "Rte_StdDiag.h"
#include "Rte_Stm.h"
#include "Rte_SysTime.h"
#include "Rte_WdgM_OsApplication_ASIL.h"
#include "SchM_BswM.h"
#include "SchM_Com.h"
#include "SchM_ComM.h"
#include "SchM_Dcm.h"
#include "SchM_Dem.h"
#include "SchM_Det.h"
#include "SchM_EcuM.h"
#include "SchM_Fee_30_SmallSector.h"
#include "SchM_Fls.h"
#include "SchM_Fr.h"
#include "SchM_FrIf.h"
#include "SchM_FrSM.h"
#include "SchM_FrTp.h"
#include "SchM_IpduM.h"
#include "SchM_Mcu.h"
#include "SchM_NvM.h"
#include "SchM_PduR.h"
#include "SchM_Port.h"
#include "SchM_WdgM.h"
#include "SchM_Wdg_59_DriverA.h"
#include "SchM_Xcp.h"

#include "Rte_Hook.h"

#include "Rte_Cbk.h"

/* AUTOSAR 3.x compatibility */
#if !defined (RTE_LOCAL)
# define RTE_LOCAL static
#endif


/**********************************************************************************************************************
 * API for enable / disable interrupts global
 *********************************************************************************************************************/

#define Rte_DisableAllInterrupts(Mode) Rte_DisableAllInterrupts##Mode() /* PRQA S 0342 */ /* MD_MSR_19.13_0342 */

#if defined(osDisableGlobalKM) && !defined(RTE_DISABLE_ENHANCED_INTERRUPT_LOCK_API)
# define Rte_DisableAllInterruptsKM() osDisableGlobalKM()   /* MICROSAR OS */
#else
# define Rte_DisableAllInterruptsKM() DisableAllInterrupts()   /* AUTOSAR OS */
#endif

#if defined(osDisableGlobalUM) && !defined(RTE_DISABLE_ENHANCED_INTERRUPT_LOCK_API)
# define Rte_DisableAllInterruptsUM() osDisableGlobalUM()   /* MICROSAR OS */
#else
# define Rte_DisableAllInterruptsUM() DisableAllInterrupts()   /* AUTOSAR OS */
#endif

#if defined(osDisableGlobalAM) && !defined(RTE_DISABLE_ENHANCED_INTERRUPT_LOCK_API)
# define Rte_DisableAllInterruptsAM() osDisableGlobalAM()   /* MICROSAR OS */
#else
# define Rte_DisableAllInterruptsAM() DisableAllInterrupts()   /* AUTOSAR OS */
#endif

#define Rte_EnableAllInterrupts(Mode) Rte_EnableAllInterrupts##Mode() /* PRQA S 0342 */ /* MD_MSR_19.13_0342 */

#if defined(osEnableGlobalKM) && !defined(RTE_DISABLE_ENHANCED_INTERRUPT_LOCK_API)
# define Rte_EnableAllInterruptsKM() osEnableGlobalKM()   /* MICROSAR OS */
#else
# define Rte_EnableAllInterruptsKM() EnableAllInterrupts()   /* AUTOSAR OS */
#endif

#if defined(osEnableGlobalUM) && !defined(RTE_DISABLE_ENHANCED_INTERRUPT_LOCK_API)
# define Rte_EnableAllInterruptsUM() osEnableGlobalUM()   /* MICROSAR OS */
#else
# define Rte_EnableAllInterruptsUM() EnableAllInterrupts()   /* AUTOSAR OS */
#endif

#if defined(osEnableGlobalAM) && !defined(RTE_DISABLE_ENHANCED_INTERRUPT_LOCK_API)
# define Rte_EnableAllInterruptsAM() osEnableGlobalAM()   /* MICROSAR OS */
#else
# define Rte_EnableAllInterruptsAM() EnableAllInterrupts()   /* AUTOSAR OS */
#endif

/**********************************************************************************************************************
 * API for enable / disable interrupts up to the systemLevel
 *********************************************************************************************************************/

#define Rte_DisableOSInterrupts(Mode) Rte_DisableOSInterrupts##Mode() /* PRQA S 0342 */ /* MD_MSR_19.13_0342 */

#if defined(osDisableLevelKM) && !defined(RTE_DISABLE_ENHANCED_INTERRUPT_LOCK_API)
# define Rte_DisableOSInterruptsKM() osDisableLevelKM()   /* MICROSAR OS */
#else
# define Rte_DisableOSInterruptsKM() SuspendOSInterrupts()   /* AUTOSAR OS */
#endif

#if defined(osDisableLevelUM) && !defined(RTE_DISABLE_ENHANCED_INTERRUPT_LOCK_API)
# define Rte_DisableOSInterruptsUM() osDisableLevelUM()   /* MICROSAR OS */
#else
# define Rte_DisableOSInterruptsUM() SuspendOSInterrupts()   /* AUTOSAR OS */
#endif

#if defined(osDisableLevelAM) && !defined(RTE_DISABLE_ENHANCED_INTERRUPT_LOCK_API)
# define Rte_DisableOSInterruptsAM() osDisableLevelAM()   /* MICROSAR OS */
#else
# define Rte_DisableOSInterruptsAM() SuspendOSInterrupts()   /* AUTOSAR OS */
#endif

#define Rte_EnableOSInterrupts(Mode) Rte_EnableOSInterrupts##Mode() /* PRQA S 0342 */ /* MD_MSR_19.13_0342 */

#if defined(osEnableLevelKM) && !defined(RTE_DISABLE_ENHANCED_INTERRUPT_LOCK_API)
# define Rte_EnableOSInterruptsKM() osEnableLevelKM()   /* MICROSAR OS */
#else
# define Rte_EnableOSInterruptsKM() ResumeOSInterrupts()   /* AUTOSAR OS */
#endif

#if defined(osEnableLevelUM) && !defined(RTE_DISABLE_ENHANCED_INTERRUPT_LOCK_API)
# define Rte_EnableOSInterruptsUM() osEnableLevelUM()   /* MICROSAR OS */
#else
# define Rte_EnableOSInterruptsUM() ResumeOSInterrupts()   /* AUTOSAR OS */
#endif

#if defined(osEnableLevelAM) && !defined(RTE_DISABLE_ENHANCED_INTERRUPT_LOCK_API)
# define Rte_EnableOSInterruptsAM() osEnableLevelAM()   /* MICROSAR OS */
#else
# define Rte_EnableOSInterruptsAM() ResumeOSInterrupts()   /* AUTOSAR OS */
#endif


/**********************************************************************************************************************
 * Buffers for unqueued S/R
 *********************************************************************************************************************/

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

VAR(IS_ST_CON_VEH_Type, RTE_VAR_INIT) Rte_IntegrationSample_PP_IS_ST_CON_VEH_VehicleState = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(IntegrationSample_Stm_CentralErrorLockType, RTE_VAR_INIT) Rte_IntegrationSample_PP_Stm_CEL_Signal_centralErrorLock = 3U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(NormalCommunicationModeType, RTE_VAR_INIT) Rte_StdDiag_ComControlModeRequestPort_requestedMode = 2U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Per-Instance Memory
 *********************************************************************************************************************/

#define RTE_START_SEC_VAR_DEFAULT_RTE_OsApplication_QM_PIM_GROUP_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

VAR(uint32, RTE_VAR_DEFAULT_RTE_OsApplication_QM_PIM_GROUP) Rte_BMW_Application_Main_PerInstanceMemory_Xcp; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#define RTE_STOP_SEC_VAR_DEFAULT_RTE_OsApplication_QM_PIM_GROUP_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * TxAck/ModeSwitchAck Flags
 *********************************************************************************************************************/


#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

VAR(Rte_OsApplication_QM_AckFlagsType, RTE_VAR_INIT) Rte_OsApplication_QM_AckFlags = { /* PRQA S 0850 */ /* MD_MSR_19.8 */
  0,
  1,
};

#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


#define Rte_OsApplication_QM_AckFlagsInit() (Rte_MemClr(&Rte_OsApplication_QM_AckFlags, sizeof(Rte_OsApplication_QM_AckFlagsType)))
/**********************************************************************************************************************
 * Defines for Rte_ComSendSignalProxy
 *********************************************************************************************************************/
#define RTE_COM_SENDSIGNALPROXY_NOCHANGE       (0U)
#define RTE_COM_SENDSIGNALPROXY_SEND           (1U)
#define RTE_COM_SENDSIGNALPROXY_INVALIDATE     (2U)



/**********************************************************************************************************************
 * Buffers for implicit communication
 *********************************************************************************************************************/

#define RTE_START_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
VAR(Rte_tsDefault_BAC_Appl_BMW_Task, RTE_VAR_NOINIT) Rte_Default_BAC_Appl_BMW_Task; /* PRQA S 0850, 0759, 3408, 1504 */ /* MD_MSR_19.8, MD_MSR_18.4, MD_Rte_3408, MD_MSR_8.10 */
#define RTE_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define RTE_START_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
VAR(Rte_tsDefault_RTE_Mode_switch_Task, RTE_VAR_NOINIT) Rte_Default_RTE_Mode_switch_Task; /* PRQA S 0850, 0759, 3408, 1504 */ /* MD_MSR_19.8, MD_MSR_18.4, MD_Rte_3408, MD_MSR_8.10 */
#define RTE_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Buffer for inter-runnable variables
 *********************************************************************************************************************/

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

VAR(BMW_Application_Reset_IRV, RTE_VAR_INIT) Rte_Irv_BMW_Application_Main_InterRunnableVariable = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define RTE_START_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

FUNC(void, RTE_CODE) Rte_MemClr(P2VAR(void, AUTOMATIC, RTE_VAR_NOINIT) ptr, uint16_least num); /* PRQA S 0850, 3447, 3408 */ /* MD_MSR_19.8, MD_Rte_3447, MD_Rte_3408 */
FUNC(void, RTE_CODE) Rte_MemCpy(P2VAR(void, AUTOMATIC, RTE_APPL_VAR) destination, P2CONST(void, AUTOMATIC, RTE_APPL_DATA) source, uint32_least num); /* PRQA S 0850, 1505, 3447, 3408 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3447, MD_Rte_3408 */
FUNC(void, RTE_CODE) Rte_MemCpy32(P2VAR(void, AUTOMATIC, RTE_APPL_VAR) destination, P2CONST(void, AUTOMATIC, RTE_APPL_DATA) source, uint32_least num); /* PRQA S 0850, 1505, 3447, 3408 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3447, MD_Rte_3408 */
RTE_LOCAL FUNC(void, RTE_CODE) Rte_IncDisableFlags_Darh_LifeCycle_Mode(Darh_LifeCycleRequestType nextMode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
RTE_LOCAL FUNC(void, RTE_CODE) Rte_DecDisableFlags_Darh_LifeCycle_Mode(Darh_LifeCycleRequestType previousMode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
RTE_LOCAL FUNC(void, RTE_CODE) Rte_IncDisableFlags_SysTime_LifeCycle_Mode(SysTime_LifeCycleRequestType nextMode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
RTE_LOCAL FUNC(void, RTE_CODE) Rte_DecDisableFlags_SysTime_LifeCycle_Mode(SysTime_LifeCycleRequestType previousMode); /* PRQA S 0850 */ /* MD_MSR_19.8 */

#define RTE_STOP_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


#define RTE_START_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

FUNC(uint8, RTE_CODE) Rte_GetInternalModeIndex_DcmModeRapidPowerShutDown(uint8 mode); /* PRQA S 3408 */ /* MD_Rte_3408 */
/**********************************************************************************************************************
 * Helper functions for mode management
 *********************************************************************************************************************/
FUNC(uint8, RTE_CODE) Rte_GetInternalModeIndex_Bs_LifeCycle(Bs_LifeCycleRequestType mode); /* PRQA S 3408 */ /* MD_Rte_3408 */
FUNC(uint8, RTE_CODE) Rte_GetInternalModeIndex_Darh_LifeCycle(Darh_LifeCycleRequestType mode); /* PRQA S 3408 */ /* MD_Rte_3408 */
FUNC(uint8, RTE_CODE) Rte_GetInternalModeIndex_DcmCommunicationControl(Dcm_CommunicationModeType mode); /* PRQA S 3408 */ /* MD_Rte_3408 */
FUNC(uint8, RTE_CODE) Rte_GetInternalModeIndex_DcmDiagnosticSessionControl(Dcm_DiagnosticSessionControlType mode); /* PRQA S 3408 */ /* MD_Rte_3408 */
FUNC(uint8, RTE_CODE) Rte_GetInternalModeIndex_Dlog_LifeCycle(Dlog_LifeCycleRequestType mode); /* PRQA S 3408 */ /* MD_Rte_3408 */
FUNC(uint8, RTE_CODE) Rte_GetInternalModeIndex_IntegrationSample_EcuRunState(IntegrationSample_EcuRunStateModeRequestType mode); /* PRQA S 3408 */ /* MD_Rte_3408 */
FUNC(uint8, RTE_CODE) Rte_GetInternalModeIndex_IntegrationSample_SimpleTimerState(IntegrationSample_SimpleTimerStateType mode); /* PRQA S 3408 */ /* MD_Rte_3408 */
FUNC(uint8, RTE_CODE) Rte_GetInternalModeIndex_StdDiag_LifeCycle(StdDiag_LifeCycleRequestType mode); /* PRQA S 3408 */ /* MD_Rte_3408 */
FUNC(uint8, RTE_CODE) Rte_GetInternalModeIndex_StdDiag_NormalCommunicationModeGroup(NormalCommunicationModeType mode); /* PRQA S 3408 */ /* MD_Rte_3408 */
FUNC(uint8, RTE_CODE) Rte_GetInternalModeIndex_SysTime_LifeCycle(SysTime_LifeCycleRequestType mode); /* PRQA S 3408 */ /* MD_Rte_3408 */
/**********************************************************************************************************************
 * Helper functions for mode management
 *********************************************************************************************************************/
FUNC(uint8, RTE_CODE) Rte_GetInternalModeIndex_OmcExtendedOperatingMode(Omc_ExtendedOperatingModeType mode); /* PRQA S 3408 */ /* MD_Rte_3408 */
FUNC(uint8, RTE_CODE) Rte_GetInternalModeIndex_OmcOperatingMode(Omc_OperatingModeType mode); /* PRQA S 3408 */ /* MD_Rte_3408 */

#define RTE_STOP_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Data structures for mode management
 *********************************************************************************************************************/

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
VAR(Bs_LifeCycleRequestType, RTE_VAR_INIT) Rte_ModeMachine_Bs_LifeCycle_Mode = RTE_MODE_Bs_LifeCycle_BS_STOPPED; /* PRQA S 3408 */ /* MD_Rte_3408 */
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
VAR(Rte_ModeInfoType_Darh_LifeCycle_Mode, RTE_VAR_INIT) Rte_ModeInfo_Darh_LifeCycle_Mode = {
  {
    RTE_MODE_Darh_LifeCycle_DARH_STOPPED,
    RTE_MODE_Darh_LifeCycle_DARH_STOPPED,
    RTE_MODE_Darh_LifeCycle_DARH_STOPPED
  },
  0,
  1
};
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
VAR(Darh_LifeCycleRequestType, RTE_VAR_INIT) Rte_ModeMachine_Darh_LifeCycle_Mode = RTE_TRANSITION_Darh_LifeCycle; /* PRQA S 3408 */ /* MD_Rte_3408 */
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
VAR(Dlog_LifeCycleRequestType, RTE_VAR_INIT) Rte_ModeMachine_Dlog_LifeCycle_Mode = RTE_MODE_Dlog_LifeCycle_DLOG_STOPPED; /* PRQA S 3408 */ /* MD_Rte_3408 */
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
VAR(IntegrationSample_EcuRunStateModeRequestType, RTE_VAR_INIT) Rte_ModeMachine_IntegrationSample_EcuRunState_EcuRunStateMode = RTE_MODE_IntegrationSample_EcuRunState_IntegrationSample_BSW_START; /* PRQA S 3408 */ /* MD_Rte_3408 */
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
VAR(IntegrationSample_SimpleTimerStateType, RTE_VAR_INIT) Rte_ModeMachine_IntegrationSample_IntegrationSampleSimpleTimerPort_0_SimpleTimerMode = RTE_MODE_IntegrationSample_SimpleTimerState_IntegrationSample_Timer_IDLE; /* PRQA S 3408 */ /* MD_Rte_3408 */
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
VAR(Omc_LifeCycleRequestType, RTE_VAR_INIT) Rte_ModeMachine_Omc_LifeCycle_Mode = RTE_MODE_Omc_LifeCycle_OMC_STOPPED; /* PRQA S 3408 */ /* MD_Rte_3408 */
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
VAR(Omc_ExtendedOperatingModeType, RTE_VAR_INIT) Rte_ModeMachine_Omc_extendedOperatingModeSwitchPort_currentExtendedOperatingMode = RTE_MODE_OmcExtendedOperatingMode_OMC_MODE_EXTENSION_NORMAL; /* PRQA S 3408 */ /* MD_Rte_3408 */
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
VAR(Omc_OperatingModeType, RTE_VAR_INIT) Rte_ModeMachine_Omc_operatingModeSwitchPort_currentOperatingMode = RTE_MODE_OmcOperatingMode_OMC_MODE_NORMAL; /* PRQA S 3408 */ /* MD_Rte_3408 */
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
VAR(StdDiag_LifeCycleRequestType, RTE_VAR_INIT) Rte_ModeMachine_StdDiag_LifeCycle_Mode = RTE_MODE_StdDiag_LifeCycle_STDDIAG_STOPPED; /* PRQA S 3408 */ /* MD_Rte_3408 */
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
VAR(Stm_CentralErrorLockType, RTE_VAR_INIT) Rte_ModeMachine_Stm_CentralErrorLockModeSwitchPort_currentCentralErrorLockMode = RTE_MODE_Stm_CentralErrorLockMode_STM_CEL_INVALID; /* PRQA S 3408 */ /* MD_Rte_3408 */
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
VAR(Stm_EnergyStateType, RTE_VAR_INIT) Rte_ModeMachine_Stm_EnergyModeSwitchPort_currentEnergyMode = RTE_MODE_Stm_EnergyStateMode_STM_ENERGY_INVALID; /* PRQA S 3408 */ /* MD_Rte_3408 */
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
VAR(Stm_VehicleStateType, RTE_VAR_INIT) Rte_ModeMachine_Stm_VehicleStateModeSwitchPort_currentVehicleStateMode = RTE_MODE_Stm_VehicleStateMode_STM_VEHICLE_STATE_UNAVAILABLE; /* PRQA S 3408 */ /* MD_Rte_3408 */
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
VAR(Rte_ModeInfoType_SysTime_LifeCycle_Mode, RTE_VAR_INIT) Rte_ModeInfo_SysTime_LifeCycle_Mode = {
  {
    RTE_MODE_SysTime_LifeCycle_SYSTIME_STOPPED,
    RTE_MODE_SysTime_LifeCycle_SYSTIME_STOPPED,
    RTE_MODE_SysTime_LifeCycle_SYSTIME_STOPPED
  },
  0,
  1
};
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
VAR(SysTime_LifeCycleRequestType, RTE_VAR_INIT) Rte_ModeMachine_SysTime_LifeCycle_Mode = RTE_TRANSITION_SysTime_LifeCycle; /* PRQA S 3408 */ /* MD_Rte_3408 */
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define RTE_START_SEC_CONST_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */















#define RTE_STOP_SEC_CONST_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Trigger Disable Flags
 *********************************************************************************************************************/

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

VAR(Rte_OsApplication_QM_TriggerDisableFlagsType, RTE_VAR_INIT) Rte_OsApplication_QM_TriggerDisableFlags = { /* PRQA S 0850 */ /* MD_MSR_19.8 */
  1,
  1
};

#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


#define Rte_OsApplication_QM_TriggerDisableFlagsInit() (Rte_MemClr(&Rte_OsApplication_QM_TriggerDisableFlags, sizeof(Rte_OsApplication_QM_TriggerDisableFlagsType)))


/**********************************************************************************************************************
 * Timer handling
 *********************************************************************************************************************/

#if defined OS_US2TICKS_SystemTimer
# define RTE_USEC_SystemTimer OS_US2TICKS_SystemTimer
#else
# define RTE_USEC_SystemTimer(val) ((TickType)RTE_CONST_USEC_SystemTimer_##val) /* PRQA S 0342 */ /* MD_MSR_19.13_0342 */
#endif

#if defined OS_MS2TICKS_SystemTimer
# define RTE_MSEC_SystemTimer OS_MS2TICKS_SystemTimer
#else
# define RTE_MSEC_SystemTimer(val) ((TickType)RTE_CONST_MSEC_SystemTimer_##val) /* PRQA S 0342 */ /* MD_MSR_19.13_0342 */
#endif

#if defined OS_SEC2TICKS_SystemTimer
# define RTE_SEC_SystemTimer OS_SEC2TICKS_SystemTimer
#else
# define RTE_SEC_SystemTimer(val)  ((TickType)RTE_CONST_SEC_SystemTimer_##val) /* PRQA S 0342 */ /* MD_MSR_19.13_0342 */
#endif

#define RTE_CONST_MSEC_SystemTimer_0 (0UL)
#define RTE_CONST_MSEC_SystemTimer_10 (800000UL)
#define RTE_CONST_MSEC_SystemTimer_100 (8000000UL)
#define RTE_CONST_MSEC_SystemTimer_2 (160000UL)
#define RTE_CONST_MSEC_SystemTimer_20 (1600000UL)
#define RTE_CONST_MSEC_SystemTimer_5 (400000UL)

#define RTE_CONST_SEC_SystemTimer_0 (0UL)
#define RTE_CONST_SEC_SystemTimer_1 (80000000UL)


/**********************************************************************************************************************
 * Internal definitions
 *********************************************************************************************************************/

#define RTE_TASK_TIMEOUT_EVENT_MASK   ((EventMaskType)0x01)
#define RTE_TASK_WAITPOINT_EVENT_MASK ((EventMaskType)0x02)

/**********************************************************************************************************************
 * RTE life cycle API
 *********************************************************************************************************************/

#define RTE_START_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


FUNC(void, RTE_CODE) Rte_InitMemory_OsApplication_QM(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
  /* set default values for internal data */
  Rte_IntegrationSample_PP_IS_ST_CON_VEH_VehicleState = 0U;
  Rte_IntegrationSample_PP_Stm_CEL_Signal_centralErrorLock = 3U;
  Rte_StdDiag_ComControlModeRequestPort_requestedMode = 2U;

  /* reset Tx Ack Flags */
  Rte_OsApplication_QM_AckFlagsInit();
  Rte_OsApplication_QM_AckFlags.Rte_ModeSwitchAck_Dlog_LifeCycle_Mode_Ack = 1;

  /* initialize inter-runnable variables */
  Rte_Irv_BMW_Application_Main_InterRunnableVariable = 0U;

  /* mode management initialization part 1 */
  /* reset Trigger Disable Flags */
  Rte_OsApplication_QM_TriggerDisableFlagsInit();
  Rte_OsApplication_QM_TriggerDisableFlags.Rte_Trigger_Default_BAC_Appl_BMW_Task_Rte_Trigger1_Darh_QueueHandler = 1U;
  Rte_OsApplication_QM_TriggerDisableFlags.Rte_Trigger_SysTime_LifeCycle_Mode_SYSTIME_INITIALIZED_SysTime_LifeCycle_Mode_SYSTIME_STOPPED = 1U;

  Rte_ModeMachine_Bs_LifeCycle_Mode = RTE_MODE_Bs_LifeCycle_BS_STOPPED;

  Rte_ModeMachine_Darh_LifeCycle_Mode = RTE_TRANSITION_Darh_LifeCycle;

  Rte_ModeInfo_Darh_LifeCycle_Mode.Rte_ModeQueue[1U] = RTE_MODE_Darh_LifeCycle_DARH_STOPPED;
  Rte_ModeInfo_Darh_LifeCycle_Mode.Rte_ModeQueue[2U] = RTE_MODE_Darh_LifeCycle_DARH_STOPPED;

  Rte_ModeInfo_Darh_LifeCycle_Mode.Rte_ModeQueueReadCtr = 0U;
  Rte_ModeInfo_Darh_LifeCycle_Mode.Rte_ModeQueueWriteCtr = 1U;

  Rte_ModeMachine_Dlog_LifeCycle_Mode = RTE_MODE_Dlog_LifeCycle_DLOG_STOPPED;

  Rte_ModeMachine_IntegrationSample_EcuRunState_EcuRunStateMode = RTE_MODE_IntegrationSample_EcuRunState_IntegrationSample_BSW_START;

  Rte_ModeMachine_IntegrationSample_IntegrationSampleSimpleTimerPort_0_SimpleTimerMode = RTE_MODE_IntegrationSample_SimpleTimerState_IntegrationSample_Timer_IDLE;

  Rte_ModeMachine_Omc_LifeCycle_Mode = RTE_MODE_Omc_LifeCycle_OMC_STOPPED;

  Rte_ModeMachine_Omc_extendedOperatingModeSwitchPort_currentExtendedOperatingMode = RTE_MODE_OmcExtendedOperatingMode_OMC_MODE_EXTENSION_NORMAL;

  Rte_ModeMachine_Omc_operatingModeSwitchPort_currentOperatingMode = RTE_MODE_OmcOperatingMode_OMC_MODE_NORMAL;

  Rte_ModeMachine_StdDiag_LifeCycle_Mode = RTE_MODE_StdDiag_LifeCycle_STDDIAG_STOPPED;

  Rte_ModeMachine_Stm_CentralErrorLockModeSwitchPort_currentCentralErrorLockMode = RTE_MODE_Stm_CentralErrorLockMode_STM_CEL_INVALID;

  Rte_ModeMachine_Stm_EnergyModeSwitchPort_currentEnergyMode = RTE_MODE_Stm_EnergyStateMode_STM_ENERGY_INVALID;

  Rte_ModeMachine_Stm_VehicleStateModeSwitchPort_currentVehicleStateMode = RTE_MODE_Stm_VehicleStateMode_STM_VEHICLE_STATE_UNAVAILABLE;

  Rte_ModeMachine_SysTime_LifeCycle_Mode = RTE_TRANSITION_SysTime_LifeCycle;

  Rte_ModeInfo_SysTime_LifeCycle_Mode.Rte_ModeQueue[1U] = RTE_MODE_SysTime_LifeCycle_SYSTIME_STOPPED;
  Rte_ModeInfo_SysTime_LifeCycle_Mode.Rte_ModeQueue[2U] = RTE_MODE_SysTime_LifeCycle_SYSTIME_STOPPED;

  Rte_ModeInfo_SysTime_LifeCycle_Mode.Rte_ModeQueueReadCtr = 0U;
  Rte_ModeInfo_SysTime_LifeCycle_Mode.Rte_ModeQueueWriteCtr = 1U;

}


/**********************************************************************************************************************
 * Internal/External Tx connections
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Bs_ActivationState_Features1_IsActivated(boolean data) /* PRQA S 0850, 1505, 3206 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206 */
{

  return RTE_E_OK;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_IntegrationSample_PP_IS_ST_CON_VEH_VehicleState(IS_ST_CON_VEH_Type data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_IntegrationSample_PP_IS_ST_CON_VEH_VehicleState = *(&data);
  /* scheduled trigger for runnables: Stm_ReceiveVehicleState */
  (void)SetEvent(Default_RTE_Mode_switch_Task, Rte_Ev_Run_Stm_Runnable_ReceiveVehicleState); /* PRQA S 3417 */ /* MD_Rte_Os */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_IntegrationSample_PP_Stm_CEL_Signal_centralErrorLock(IntegrationSample_Stm_CentralErrorLockType data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_IntegrationSample_PP_Stm_CEL_Signal_centralErrorLock = *(&data);
  /* scheduled trigger for runnables: Stm_ReceiveCentralErrorLock */
  (void)SetEvent(Default_RTE_Mode_switch_Task, Rte_Ev_Run_Stm_Runnable_ReceiveCentralErrorLock); /* PRQA S 3417 */ /* MD_Rte_Os */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_StdDiag_ComControlModeRequestPort_requestedMode(NormalCommunicationModeType data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_StdDiag_ComControlModeRequestPort_requestedMode = *(&data);
  /* scheduled trigger for runnables: BswM_Read_SWCModeReq_StdDiag_CommunicationModeDeclarationGroup */
  (void)SetEvent(OsTask_BSW_ASIL, Rte_Ev_Run_BswM_BswM_Read_SWCModeReq_StdDiag_CommunicationModeDeclarationGroup); /* PRQA S 3417 */ /* MD_Rte_Os */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */


/**********************************************************************************************************************
 * Mode switch handling functions
 *********************************************************************************************************************/
RTE_LOCAL FUNC(void, RTE_CODE) Rte_IncDisableFlags_Darh_LifeCycle_Mode(Darh_LifeCycleRequestType nextMode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
  if (nextMode == RTE_MODE_Darh_LifeCycle_DARH_INITIALIZED)
  {
    Rte_CheckDetErrorContinue(Rte_OsApplication_QM_TriggerDisableFlags.Rte_Trigger_Default_BAC_Appl_BMW_Task_Rte_Trigger1_Darh_QueueHandler < Rte_TriggerDisableMaxCount_Default_BAC_Appl_BMW_Task_Rte_Trigger1_Darh_QueueHandler, RTE_INCDISABLEFLAGS_SERVICE_ID, RTE_E_DET_TRIGGERDISABLECOUNTER); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    Rte_OsApplication_QM_TriggerDisableFlags.Rte_Trigger_Default_BAC_Appl_BMW_Task_Rte_Trigger1_Darh_QueueHandler++;
  }
  else if (nextMode == RTE_MODE_Darh_LifeCycle_DARH_STOPPED) /* PRQA S 2004 */ /* MD_Rte_2004 */ /* COV_RTE_MODE_MACHINE_LAST_STATE */
  {
    Rte_CheckDetErrorContinue(Rte_OsApplication_QM_TriggerDisableFlags.Rte_Trigger_Default_BAC_Appl_BMW_Task_Rte_Trigger1_Darh_QueueHandler < Rte_TriggerDisableMaxCount_Default_BAC_Appl_BMW_Task_Rte_Trigger1_Darh_QueueHandler, RTE_INCDISABLEFLAGS_SERVICE_ID, RTE_E_DET_TRIGGERDISABLECOUNTER); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    Rte_OsApplication_QM_TriggerDisableFlags.Rte_Trigger_Default_BAC_Appl_BMW_Task_Rte_Trigger1_Darh_QueueHandler++;
  }
}

RTE_LOCAL FUNC(void, RTE_CODE) Rte_DecDisableFlags_Darh_LifeCycle_Mode(Darh_LifeCycleRequestType previousMode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
  if (previousMode == RTE_MODE_Darh_LifeCycle_DARH_INITIALIZED)
  {
    Rte_CheckDetErrorContinue(Rte_OsApplication_QM_TriggerDisableFlags.Rte_Trigger_Default_BAC_Appl_BMW_Task_Rte_Trigger1_Darh_QueueHandler > 0, RTE_DECDISABLEFLAGS_SERVICE_ID, RTE_E_DET_TRIGGERDISABLECOUNTER); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    Rte_OsApplication_QM_TriggerDisableFlags.Rte_Trigger_Default_BAC_Appl_BMW_Task_Rte_Trigger1_Darh_QueueHandler--;
  }
  else if (previousMode == RTE_MODE_Darh_LifeCycle_DARH_STOPPED) /* PRQA S 2004 */ /* MD_Rte_2004 */ /* COV_RTE_MODE_MACHINE_LAST_STATE */
  {
    Rte_CheckDetErrorContinue(Rte_OsApplication_QM_TriggerDisableFlags.Rte_Trigger_Default_BAC_Appl_BMW_Task_Rte_Trigger1_Darh_QueueHandler > 0, RTE_DECDISABLEFLAGS_SERVICE_ID, RTE_E_DET_TRIGGERDISABLECOUNTER); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    Rte_OsApplication_QM_TriggerDisableFlags.Rte_Trigger_Default_BAC_Appl_BMW_Task_Rte_Trigger1_Darh_QueueHandler--;
  }
}



/**********************************************************************************************************************
 * Mode switch handling functions
 *********************************************************************************************************************/
RTE_LOCAL FUNC(void, RTE_CODE) Rte_IncDisableFlags_SysTime_LifeCycle_Mode(SysTime_LifeCycleRequestType nextMode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
  if (nextMode == RTE_MODE_SysTime_LifeCycle_SYSTIME_INITIALIZED)
  {
    Rte_CheckDetErrorContinue(Rte_OsApplication_QM_TriggerDisableFlags.Rte_Trigger_SysTime_LifeCycle_Mode_SYSTIME_INITIALIZED_SysTime_LifeCycle_Mode_SYSTIME_STOPPED < Rte_TriggerDisableMaxCount_SysTime_LifeCycle_Mode_SYSTIME_INITIALIZED_SysTime_LifeCycle_Mode_SYSTIME_STOPPED, RTE_INCDISABLEFLAGS_SERVICE_ID, RTE_E_DET_TRIGGERDISABLECOUNTER); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    Rte_OsApplication_QM_TriggerDisableFlags.Rte_Trigger_SysTime_LifeCycle_Mode_SYSTIME_INITIALIZED_SysTime_LifeCycle_Mode_SYSTIME_STOPPED++;
  }
  else if (nextMode == RTE_MODE_SysTime_LifeCycle_SYSTIME_STOPPED) /* PRQA S 2004 */ /* MD_Rte_2004 */ /* COV_RTE_MODE_MACHINE_LAST_STATE */
  {
    Rte_CheckDetErrorContinue(Rte_OsApplication_QM_TriggerDisableFlags.Rte_Trigger_SysTime_LifeCycle_Mode_SYSTIME_INITIALIZED_SysTime_LifeCycle_Mode_SYSTIME_STOPPED < Rte_TriggerDisableMaxCount_SysTime_LifeCycle_Mode_SYSTIME_INITIALIZED_SysTime_LifeCycle_Mode_SYSTIME_STOPPED, RTE_INCDISABLEFLAGS_SERVICE_ID, RTE_E_DET_TRIGGERDISABLECOUNTER); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    Rte_OsApplication_QM_TriggerDisableFlags.Rte_Trigger_SysTime_LifeCycle_Mode_SYSTIME_INITIALIZED_SysTime_LifeCycle_Mode_SYSTIME_STOPPED++;
  }
}

RTE_LOCAL FUNC(void, RTE_CODE) Rte_DecDisableFlags_SysTime_LifeCycle_Mode(SysTime_LifeCycleRequestType previousMode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
  if (previousMode == RTE_MODE_SysTime_LifeCycle_SYSTIME_INITIALIZED)
  {
    Rte_CheckDetErrorContinue(Rte_OsApplication_QM_TriggerDisableFlags.Rte_Trigger_SysTime_LifeCycle_Mode_SYSTIME_INITIALIZED_SysTime_LifeCycle_Mode_SYSTIME_STOPPED > 0, RTE_DECDISABLEFLAGS_SERVICE_ID, RTE_E_DET_TRIGGERDISABLECOUNTER); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    Rte_OsApplication_QM_TriggerDisableFlags.Rte_Trigger_SysTime_LifeCycle_Mode_SYSTIME_INITIALIZED_SysTime_LifeCycle_Mode_SYSTIME_STOPPED--;
  }
  else if (previousMode == RTE_MODE_SysTime_LifeCycle_SYSTIME_STOPPED) /* PRQA S 2004 */ /* MD_Rte_2004 */ /* COV_RTE_MODE_MACHINE_LAST_STATE */
  {
    Rte_CheckDetErrorContinue(Rte_OsApplication_QM_TriggerDisableFlags.Rte_Trigger_SysTime_LifeCycle_Mode_SYSTIME_INITIALIZED_SysTime_LifeCycle_Mode_SYSTIME_STOPPED > 0, RTE_DECDISABLEFLAGS_SERVICE_ID, RTE_E_DET_TRIGGERDISABLECOUNTER); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    Rte_OsApplication_QM_TriggerDisableFlags.Rte_Trigger_SysTime_LifeCycle_Mode_SYSTIME_INITIALIZED_SysTime_LifeCycle_Mode_SYSTIME_STOPPED--;
  }
}



/**********************************************************************************************************************
 * Mode Switch API (Rte_Switch)
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_Bs_LifeCycle_Mode(Bs_LifeCycleRequestType nextMode) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  uint8 internalIndexNextMode = Rte_GetInternalModeIndex_Bs_LifeCycle(nextMode);
  uint8 internalIndexCurrentMode;
  Bs_LifeCycleRequestType currentMode;
  Rte_DisableOSInterrupts(UM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  currentMode = Rte_ModeMachine_Bs_LifeCycle_Mode;
  internalIndexCurrentMode = Rte_GetInternalModeIndex_Bs_LifeCycle(currentMode);
  if (internalIndexNextMode >= 3U)
  {
    Rte_EnableOSInterrupts(UM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    Rte_CallDetReportError(RTE_SWITCH_SERVICE_ID, RTE_E_DET_MODEARGUMENT); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    ret = RTE_E_LIMIT;
  }
  else if (internalIndexCurrentMode >= 3U)
  {
    Rte_EnableOSInterrupts(UM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    Rte_CallDetReportError(RTE_SWITCH_SERVICE_ID, RTE_E_DET_MODESTATE); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    ret = RTE_E_LIMIT;
  }
  else
  {
    Rte_ModeMachine_Bs_LifeCycle_Mode = nextMode;
    Rte_EnableOSInterrupts(UM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }

  return ret;
} /* PRQA S 6050 */ /* MD_MSR_STCAL */


/**********************************************************************************************************************
 * Mode reading API (Rte_Mode)
 *********************************************************************************************************************/

FUNC(Bs_LifeCycleRequestType, RTE_CODE) Rte_Mode_Bs_LifeCycle_Mode(P2VAR(Bs_LifeCycleRequestType, AUTOMATIC, RTE_BS_APPL_VAR) previousMode, P2VAR(Bs_LifeCycleRequestType, AUTOMATIC, RTE_BS_APPL_VAR) nextMode) /* PRQA S 3408 */ /* MD_Rte_3408 */
{
  Bs_LifeCycleRequestType curMode;
  Rte_DisableOSInterrupts(UM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  *(previousMode) = Rte_ModeMachine_Bs_LifeCycle_Mode;
  *(nextMode) = Rte_ModeMachine_Bs_LifeCycle_Mode;
  curMode = Rte_ModeMachine_Bs_LifeCycle_Mode;
  Rte_EnableOSInterrupts(UM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  return curMode;
}


/**********************************************************************************************************************
 * Mode Switch API (Rte_Switch)
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_Darh_LifeCycle_Mode(Darh_LifeCycleRequestType nextMode) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  uint8 internalIndexNextMode = Rte_GetInternalModeIndex_Darh_LifeCycle(nextMode);
  uint8 internalIndexCurrentMode;
  Darh_LifeCycleRequestType currentMode;
  SuspendOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  currentMode = Rte_ModeMachine_Darh_LifeCycle_Mode;
  internalIndexCurrentMode = Rte_GetInternalModeIndex_Darh_LifeCycle(currentMode);
  if (internalIndexNextMode >= 3U)
  {
    ResumeOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    Rte_CallDetReportError(RTE_SWITCH_SERVICE_ID, RTE_E_DET_MODEARGUMENT); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    ret = RTE_E_LIMIT;
  }
  else if (currentMode == RTE_TRANSITION_Darh_LifeCycle)
  {
    uint8 writeCtr = Rte_ModeInfo_Darh_LifeCycle_Mode.Rte_ModeQueueWriteCtr;
    if (writeCtr != Rte_ModeInfo_Darh_LifeCycle_Mode.Rte_ModeQueueReadCtr)
    {
      if (writeCtr < 1U)
      {
        ++writeCtr;
      }
      else
      {
        writeCtr = 0U;
      }
      Rte_ModeInfo_Darh_LifeCycle_Mode.Rte_ModeQueueWriteCtr = writeCtr;
      Rte_ModeInfo_Darh_LifeCycle_Mode.Rte_ModeQueue[writeCtr] = nextMode;

    }
    else
    {
      ret = RTE_E_LIMIT;
    }
    ResumeOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  else if (internalIndexCurrentMode >= 3U)
  {
    ResumeOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    Rte_CallDetReportError(RTE_SWITCH_SERVICE_ID, RTE_E_DET_MODESTATE); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    ret = RTE_E_LIMIT;
  }
  else
  {
    EventMaskType ModeSwitchEventMask;

    ModeSwitchEventMask = Rte_Ev_MS_Default_BAC_Appl_BMW_Task;

    {
      uint8 writeCtr = Rte_ModeInfo_Darh_LifeCycle_Mode.Rte_ModeQueueWriteCtr;
      if (writeCtr < 1U)
      {
        ++writeCtr;
      }
      else
      {
        writeCtr = 0U;
      }
      Rte_ModeInfo_Darh_LifeCycle_Mode.Rte_ModeQueueWriteCtr = writeCtr;
      Rte_ModeInfo_Darh_LifeCycle_Mode.Rte_ModeQueue[writeCtr] = nextMode;
      Rte_ModeInfo_Darh_LifeCycle_Mode.Rte_ModeQueue[2U] = currentMode;

      Rte_ModeMachine_Darh_LifeCycle_Mode = RTE_TRANSITION_Darh_LifeCycle;
      if (currentMode != nextMode)
      {
        Rte_IncDisableFlags_Darh_LifeCycle_Mode(nextMode);
      }
      ResumeOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */

      (void)SetEvent(Default_BAC_Appl_BMW_Task, ModeSwitchEventMask); /* PRQA S 3417 */ /* MD_Rte_Os */
    }
  }

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */


/**********************************************************************************************************************
 * Mode reading API (Rte_Mode)
 *********************************************************************************************************************/

FUNC(Darh_LifeCycleRequestType, RTE_CODE) Rte_Mode_Darh_LifeCycle_Mode(P2VAR(Darh_LifeCycleRequestType, AUTOMATIC, RTE_DARH_APPL_VAR) previousMode, P2VAR(Darh_LifeCycleRequestType, AUTOMATIC, RTE_DARH_APPL_VAR) nextMode) /* PRQA S 3408 */ /* MD_Rte_3408 */
{
  Darh_LifeCycleRequestType curMode;
  SuspendOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  if (Rte_ModeMachine_Darh_LifeCycle_Mode == RTE_TRANSITION_Darh_LifeCycle)
  {
    uint8 readCtr = Rte_ModeInfo_Darh_LifeCycle_Mode.Rte_ModeQueueReadCtr;
    if (readCtr < 1U)
    {
      ++readCtr;
    }
    else
    {
      readCtr = 0U;
    }
    *(nextMode) = Rte_ModeInfo_Darh_LifeCycle_Mode.Rte_ModeQueue[readCtr];
    *(previousMode) = Rte_ModeInfo_Darh_LifeCycle_Mode.Rte_ModeQueue[2U];
  }
  else
  {
    *(previousMode) = Rte_ModeMachine_Darh_LifeCycle_Mode;
    *(nextMode) = Rte_ModeMachine_Darh_LifeCycle_Mode;
  }
  curMode = Rte_ModeMachine_Darh_LifeCycle_Mode;
  ResumeOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  return curMode;
}


/**********************************************************************************************************************
 * Transmission/Mode Switch Acknowledgement handling (Rte_Feedback/Rte_SwitchAck)
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_CODE) Rte_SwitchAck_Dlog_LifeCycle_Mode(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
  Std_ReturnType ret = RTE_E_TRANSMIT_ACK;


  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */


/**********************************************************************************************************************
 * Mode Switch API (Rte_Switch)
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_Dlog_LifeCycle_Mode(Dlog_LifeCycleRequestType nextMode) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  uint8 internalIndexNextMode = Rte_GetInternalModeIndex_Dlog_LifeCycle(nextMode);
  uint8 internalIndexCurrentMode;
  Dlog_LifeCycleRequestType currentMode;
  Rte_DisableOSInterrupts(UM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  currentMode = Rte_ModeMachine_Dlog_LifeCycle_Mode;
  internalIndexCurrentMode = Rte_GetInternalModeIndex_Dlog_LifeCycle(currentMode);
  if (internalIndexNextMode >= 3U)
  {
    Rte_EnableOSInterrupts(UM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    Rte_CallDetReportError(RTE_SWITCH_SERVICE_ID, RTE_E_DET_MODEARGUMENT); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    ret = RTE_E_LIMIT;
  }
  else if (internalIndexCurrentMode >= 3U)
  {
    Rte_EnableOSInterrupts(UM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    Rte_CallDetReportError(RTE_SWITCH_SERVICE_ID, RTE_E_DET_MODESTATE); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    ret = RTE_E_LIMIT;
  }
  else
  {
    Rte_ModeMachine_Dlog_LifeCycle_Mode = nextMode;
    Rte_OsApplication_QM_AckFlags.Rte_ModeSwitchAck_Dlog_LifeCycle_Mode_Ack = 1;
    Rte_EnableOSInterrupts(UM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

    /* scheduled trigger for runnables: Dlog_ModeSwitchAckLifeCycle */
    (void)SetEvent(Default_RTE_Mode_switch_Task, Rte_Ev_Run_Dlog_Dlog_ModeSwitchAckLifeCycle); /* PRQA S 3417 */ /* MD_Rte_Os */
  }

  return ret;
} /* PRQA S 6050 */ /* MD_MSR_STCAL */


/**********************************************************************************************************************
 * Mode reading API (Rte_Mode)
 *********************************************************************************************************************/

FUNC(Dlog_LifeCycleRequestType, RTE_CODE) Rte_Mode_Dlog_LifeCycle_Mode(P2VAR(Dlog_LifeCycleRequestType, AUTOMATIC, RTE_DLOG_APPL_VAR) previousMode, P2VAR(Dlog_LifeCycleRequestType, AUTOMATIC, RTE_DLOG_APPL_VAR) nextMode) /* PRQA S 3408 */ /* MD_Rte_3408 */
{
  Dlog_LifeCycleRequestType curMode;
  Rte_DisableOSInterrupts(UM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  *(previousMode) = Rte_ModeMachine_Dlog_LifeCycle_Mode;
  *(nextMode) = Rte_ModeMachine_Dlog_LifeCycle_Mode;
  curMode = Rte_ModeMachine_Dlog_LifeCycle_Mode;
  Rte_EnableOSInterrupts(UM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  return curMode;
}


/**********************************************************************************************************************
 * Mode Switch API (Rte_Switch)
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_IntegrationSample_EcuRunState_EcuRunStateMode(IntegrationSample_EcuRunStateModeRequestType nextMode) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  uint8 internalIndexNextMode = Rte_GetInternalModeIndex_IntegrationSample_EcuRunState(nextMode);
  uint8 internalIndexCurrentMode;
  IntegrationSample_EcuRunStateModeRequestType currentMode;
  Rte_DisableOSInterrupts(UM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  currentMode = Rte_ModeMachine_IntegrationSample_EcuRunState_EcuRunStateMode;
  internalIndexCurrentMode = Rte_GetInternalModeIndex_IntegrationSample_EcuRunState(currentMode);
  if (internalIndexNextMode >= 5U)
  {
    Rte_EnableOSInterrupts(UM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    Rte_CallDetReportError(RTE_SWITCH_SERVICE_ID, RTE_E_DET_MODEARGUMENT); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    ret = RTE_E_LIMIT;
  }
  else if (internalIndexCurrentMode >= 5U)
  {
    Rte_EnableOSInterrupts(UM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    Rte_CallDetReportError(RTE_SWITCH_SERVICE_ID, RTE_E_DET_MODESTATE); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    ret = RTE_E_LIMIT;
  }
  else
  {
    Rte_ModeMachine_IntegrationSample_EcuRunState_EcuRunStateMode = nextMode;
    Rte_EnableOSInterrupts(UM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }

  return ret;
} /* PRQA S 6050 */ /* MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_IntegrationSample_IntegrationSampleSimpleTimerPort_0_SimpleTimerMode(IntegrationSample_SimpleTimerStateType nextMode) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  uint8 internalIndexNextMode = Rte_GetInternalModeIndex_IntegrationSample_SimpleTimerState(nextMode);
  uint8 internalIndexCurrentMode;
  IntegrationSample_SimpleTimerStateType currentMode;
  Rte_DisableOSInterrupts(UM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  currentMode = Rte_ModeMachine_IntegrationSample_IntegrationSampleSimpleTimerPort_0_SimpleTimerMode;
  internalIndexCurrentMode = Rte_GetInternalModeIndex_IntegrationSample_SimpleTimerState(currentMode);
  if (internalIndexNextMode >= 3U)
  {
    Rte_EnableOSInterrupts(UM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    Rte_CallDetReportError(RTE_SWITCH_SERVICE_ID, RTE_E_DET_MODEARGUMENT); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    ret = RTE_E_LIMIT;
  }
  else if (internalIndexCurrentMode >= 3U)
  {
    Rte_EnableOSInterrupts(UM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    Rte_CallDetReportError(RTE_SWITCH_SERVICE_ID, RTE_E_DET_MODESTATE); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    ret = RTE_E_LIMIT;
  }
  else
  {
    Rte_ModeMachine_IntegrationSample_IntegrationSampleSimpleTimerPort_0_SimpleTimerMode = nextMode;
    Rte_EnableOSInterrupts(UM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }

  return ret;
} /* PRQA S 6050 */ /* MD_MSR_STCAL */


/**********************************************************************************************************************
 * Mode Switch API (Rte_Switch)
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_Omc_LifeCycle_Mode(Omc_LifeCycleRequestType nextMode) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Omc_LifeCycleRequestType currentMode;
  SuspendOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  currentMode = Rte_ModeMachine_Omc_LifeCycle_Mode;
  if (nextMode >= 3U)
  {
    ResumeOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    Rte_CallDetReportError(RTE_SWITCH_SERVICE_ID, RTE_E_DET_MODEARGUMENT); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    ret = RTE_E_LIMIT;
  }
  else if (currentMode >= 3U)
  {
    ResumeOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    Rte_CallDetReportError(RTE_SWITCH_SERVICE_ID, RTE_E_DET_MODESTATE); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    ret = RTE_E_LIMIT;
  }
  else
  {
    Rte_ModeMachine_Omc_LifeCycle_Mode = nextMode;
    ResumeOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }

  return ret;
} /* PRQA S 6050 */ /* MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_Omc_extendedOperatingModeSwitchPort_currentExtendedOperatingMode(Omc_ExtendedOperatingModeType nextMode) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  uint8 internalIndexNextMode = Rte_GetInternalModeIndex_OmcExtendedOperatingMode(nextMode);
  uint8 internalIndexCurrentMode;
  Omc_ExtendedOperatingModeType currentMode;
  SuspendOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  currentMode = Rte_ModeMachine_Omc_extendedOperatingModeSwitchPort_currentExtendedOperatingMode;
  internalIndexCurrentMode = Rte_GetInternalModeIndex_OmcExtendedOperatingMode(currentMode);
  if (internalIndexNextMode >= 17U)
  {
    ResumeOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    Rte_CallDetReportError(RTE_SWITCH_SERVICE_ID, RTE_E_DET_MODEARGUMENT); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    ret = RTE_E_LIMIT;
  }
  else if (internalIndexCurrentMode >= 17U)
  {
    ResumeOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    Rte_CallDetReportError(RTE_SWITCH_SERVICE_ID, RTE_E_DET_MODESTATE); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    ret = RTE_E_LIMIT;
  }
  else
  {
    Rte_ModeMachine_Omc_extendedOperatingModeSwitchPort_currentExtendedOperatingMode = nextMode;
    ResumeOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }

  return ret;
} /* PRQA S 6050 */ /* MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_Omc_operatingModeSwitchPort_currentOperatingMode(Omc_OperatingModeType nextMode) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  uint8 internalIndexNextMode = Rte_GetInternalModeIndex_OmcOperatingMode(nextMode);
  uint8 internalIndexCurrentMode;
  Omc_OperatingModeType currentMode;
  SuspendOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  currentMode = Rte_ModeMachine_Omc_operatingModeSwitchPort_currentOperatingMode;
  internalIndexCurrentMode = Rte_GetInternalModeIndex_OmcOperatingMode(currentMode);
  if (internalIndexNextMode >= 4U)
  {
    ResumeOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    Rte_CallDetReportError(RTE_SWITCH_SERVICE_ID, RTE_E_DET_MODEARGUMENT); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    ret = RTE_E_LIMIT;
  }
  else if (internalIndexCurrentMode >= 4U)
  {
    ResumeOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    Rte_CallDetReportError(RTE_SWITCH_SERVICE_ID, RTE_E_DET_MODESTATE); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    ret = RTE_E_LIMIT;
  }
  else
  {
    Rte_ModeMachine_Omc_operatingModeSwitchPort_currentOperatingMode = nextMode;
    ResumeOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }

  return ret;
} /* PRQA S 6050 */ /* MD_MSR_STCAL */


/**********************************************************************************************************************
 * Mode reading API (Rte_Mode)
 *********************************************************************************************************************/

FUNC(Omc_LifeCycleRequestType, RTE_CODE) Rte_Mode_Omc_LifeCycle_Mode(P2VAR(Omc_LifeCycleRequestType, AUTOMATIC, RTE_OMC_APPL_VAR) previousMode, P2VAR(Omc_LifeCycleRequestType, AUTOMATIC, RTE_OMC_APPL_VAR) nextMode) /* PRQA S 3408 */ /* MD_Rte_3408 */
{
  Omc_LifeCycleRequestType curMode;
  SuspendOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  *(previousMode) = Rte_ModeMachine_Omc_LifeCycle_Mode;
  *(nextMode) = Rte_ModeMachine_Omc_LifeCycle_Mode;
  curMode = Rte_ModeMachine_Omc_LifeCycle_Mode;
  ResumeOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  return curMode;
}


/**********************************************************************************************************************
 * Mode Switch API (Rte_Switch)
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_StdDiag_LifeCycle_Mode(StdDiag_LifeCycleRequestType nextMode) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  uint8 internalIndexNextMode = Rte_GetInternalModeIndex_StdDiag_LifeCycle(nextMode);
  uint8 internalIndexCurrentMode;
  StdDiag_LifeCycleRequestType currentMode;
  Rte_DisableOSInterrupts(UM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  currentMode = Rte_ModeMachine_StdDiag_LifeCycle_Mode;
  internalIndexCurrentMode = Rte_GetInternalModeIndex_StdDiag_LifeCycle(currentMode);
  if (internalIndexNextMode >= 3U)
  {
    Rte_EnableOSInterrupts(UM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    Rte_CallDetReportError(RTE_SWITCH_SERVICE_ID, RTE_E_DET_MODEARGUMENT); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    ret = RTE_E_LIMIT;
  }
  else if (internalIndexCurrentMode >= 3U)
  {
    Rte_EnableOSInterrupts(UM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    Rte_CallDetReportError(RTE_SWITCH_SERVICE_ID, RTE_E_DET_MODESTATE); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    ret = RTE_E_LIMIT;
  }
  else
  {
    Rte_ModeMachine_StdDiag_LifeCycle_Mode = nextMode;
    Rte_EnableOSInterrupts(UM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }

  return ret;
} /* PRQA S 6050 */ /* MD_MSR_STCAL */


/**********************************************************************************************************************
 * Mode reading API (Rte_Mode)
 *********************************************************************************************************************/

FUNC(StdDiag_LifeCycleRequestType, RTE_CODE) Rte_Mode_StdDiag_LifeCycle_Mode(P2VAR(StdDiag_LifeCycleRequestType, AUTOMATIC, RTE_STDDIAG_APPL_VAR) previousMode, P2VAR(StdDiag_LifeCycleRequestType, AUTOMATIC, RTE_STDDIAG_APPL_VAR) nextMode) /* PRQA S 3408 */ /* MD_Rte_3408 */
{
  StdDiag_LifeCycleRequestType curMode;
  Rte_DisableOSInterrupts(UM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  *(previousMode) = Rte_ModeMachine_StdDiag_LifeCycle_Mode;
  *(nextMode) = Rte_ModeMachine_StdDiag_LifeCycle_Mode;
  curMode = Rte_ModeMachine_StdDiag_LifeCycle_Mode;
  Rte_EnableOSInterrupts(UM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  return curMode;
}


/**********************************************************************************************************************
 * Mode Switch API (Rte_Switch)
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_Stm_CentralErrorLockModeSwitchPort_currentCentralErrorLockMode(Stm_CentralErrorLockType nextMode) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Stm_CentralErrorLockType currentMode;
  Rte_DisableOSInterrupts(UM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  currentMode = Rte_ModeMachine_Stm_CentralErrorLockModeSwitchPort_currentCentralErrorLockMode;
  if (nextMode >= 3U)
  {
    Rte_EnableOSInterrupts(UM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    Rte_CallDetReportError(RTE_SWITCH_SERVICE_ID, RTE_E_DET_MODEARGUMENT); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    ret = RTE_E_LIMIT;
  }
  else if (currentMode >= 3U)
  {
    Rte_EnableOSInterrupts(UM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    Rte_CallDetReportError(RTE_SWITCH_SERVICE_ID, RTE_E_DET_MODESTATE); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    ret = RTE_E_LIMIT;
  }
  else
  {
    Rte_ModeMachine_Stm_CentralErrorLockModeSwitchPort_currentCentralErrorLockMode = nextMode;
    Rte_EnableOSInterrupts(UM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }

  return ret;
} /* PRQA S 6050 */ /* MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_Stm_EnergyModeSwitchPort_currentEnergyMode(Stm_EnergyStateType nextMode) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Stm_EnergyStateType currentMode;
  Rte_DisableOSInterrupts(UM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  currentMode = Rte_ModeMachine_Stm_EnergyModeSwitchPort_currentEnergyMode;
  if (nextMode >= 5U)
  {
    Rte_EnableOSInterrupts(UM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    Rte_CallDetReportError(RTE_SWITCH_SERVICE_ID, RTE_E_DET_MODEARGUMENT); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    ret = RTE_E_LIMIT;
  }
  else if (currentMode >= 5U)
  {
    Rte_EnableOSInterrupts(UM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    Rte_CallDetReportError(RTE_SWITCH_SERVICE_ID, RTE_E_DET_MODESTATE); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    ret = RTE_E_LIMIT;
  }
  else
  {
    Rte_ModeMachine_Stm_EnergyModeSwitchPort_currentEnergyMode = nextMode;
    Rte_EnableOSInterrupts(UM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }

  return ret;
} /* PRQA S 6050 */ /* MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_Stm_VehicleStateModeSwitchPort_currentVehicleStateMode(Stm_VehicleStateType nextMode) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Stm_VehicleStateType currentMode;
  Rte_DisableOSInterrupts(UM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  currentMode = Rte_ModeMachine_Stm_VehicleStateModeSwitchPort_currentVehicleStateMode;
  if (nextMode >= 10U)
  {
    Rte_EnableOSInterrupts(UM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    Rte_CallDetReportError(RTE_SWITCH_SERVICE_ID, RTE_E_DET_MODEARGUMENT); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    ret = RTE_E_LIMIT;
  }
  else if (currentMode >= 10U)
  {
    Rte_EnableOSInterrupts(UM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    Rte_CallDetReportError(RTE_SWITCH_SERVICE_ID, RTE_E_DET_MODESTATE); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    ret = RTE_E_LIMIT;
  }
  else
  {
    Rte_ModeMachine_Stm_VehicleStateModeSwitchPort_currentVehicleStateMode = nextMode;
    Rte_EnableOSInterrupts(UM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }

  return ret;
} /* PRQA S 6050 */ /* MD_MSR_STCAL */


/**********************************************************************************************************************
 * Mode reading API (Rte_Mode)
 *********************************************************************************************************************/

FUNC(Stm_CentralErrorLockType, RTE_CODE) Rte_Mode_Stm_CentralErrorLockModeSwitchPort_currentCentralErrorLockMode(P2VAR(Stm_CentralErrorLockType, AUTOMATIC, RTE_STM_APPL_VAR) previousMode, P2VAR(Stm_CentralErrorLockType, AUTOMATIC, RTE_STM_APPL_VAR) nextMode) /* PRQA S 3408 */ /* MD_Rte_3408 */
{
  Stm_CentralErrorLockType curMode;
  Rte_DisableOSInterrupts(UM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  *(previousMode) = Rte_ModeMachine_Stm_CentralErrorLockModeSwitchPort_currentCentralErrorLockMode;
  *(nextMode) = Rte_ModeMachine_Stm_CentralErrorLockModeSwitchPort_currentCentralErrorLockMode;
  curMode = Rte_ModeMachine_Stm_CentralErrorLockModeSwitchPort_currentCentralErrorLockMode;
  Rte_EnableOSInterrupts(UM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  return curMode;
}

FUNC(Stm_EnergyStateType, RTE_CODE) Rte_Mode_Stm_EnergyModeSwitchPort_currentEnergyMode(P2VAR(Stm_EnergyStateType, AUTOMATIC, RTE_STM_APPL_VAR) previousMode, P2VAR(Stm_EnergyStateType, AUTOMATIC, RTE_STM_APPL_VAR) nextMode) /* PRQA S 3408 */ /* MD_Rte_3408 */
{
  Stm_EnergyStateType curMode;
  Rte_DisableOSInterrupts(UM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  *(previousMode) = Rte_ModeMachine_Stm_EnergyModeSwitchPort_currentEnergyMode;
  *(nextMode) = Rte_ModeMachine_Stm_EnergyModeSwitchPort_currentEnergyMode;
  curMode = Rte_ModeMachine_Stm_EnergyModeSwitchPort_currentEnergyMode;
  Rte_EnableOSInterrupts(UM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  return curMode;
}

FUNC(Stm_VehicleStateType, RTE_CODE) Rte_Mode_Stm_VehicleStateModeSwitchPort_currentVehicleStateMode(P2VAR(Stm_VehicleStateType, AUTOMATIC, RTE_STM_APPL_VAR) previousMode, P2VAR(Stm_VehicleStateType, AUTOMATIC, RTE_STM_APPL_VAR) nextMode) /* PRQA S 3408 */ /* MD_Rte_3408 */
{
  Stm_VehicleStateType curMode;
  Rte_DisableOSInterrupts(UM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  *(previousMode) = Rte_ModeMachine_Stm_VehicleStateModeSwitchPort_currentVehicleStateMode;
  *(nextMode) = Rte_ModeMachine_Stm_VehicleStateModeSwitchPort_currentVehicleStateMode;
  curMode = Rte_ModeMachine_Stm_VehicleStateModeSwitchPort_currentVehicleStateMode;
  Rte_EnableOSInterrupts(UM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  return curMode;
}


/**********************************************************************************************************************
 * Mode Switch API (Rte_Switch)
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_SysTime_LifeCycle_Mode(SysTime_LifeCycleRequestType nextMode) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  uint8 internalIndexNextMode = Rte_GetInternalModeIndex_SysTime_LifeCycle(nextMode);
  uint8 internalIndexCurrentMode;
  SysTime_LifeCycleRequestType currentMode;
  Rte_DisableOSInterrupts(UM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  currentMode = Rte_ModeMachine_SysTime_LifeCycle_Mode;
  internalIndexCurrentMode = Rte_GetInternalModeIndex_SysTime_LifeCycle(currentMode);
  if (internalIndexNextMode >= 3U)
  {
    Rte_EnableOSInterrupts(UM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    Rte_CallDetReportError(RTE_SWITCH_SERVICE_ID, RTE_E_DET_MODEARGUMENT); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    ret = RTE_E_LIMIT;
  }
  else if (currentMode == RTE_TRANSITION_SysTime_LifeCycle)
  {
    uint8 writeCtr = Rte_ModeInfo_SysTime_LifeCycle_Mode.Rte_ModeQueueWriteCtr;
    if (writeCtr != Rte_ModeInfo_SysTime_LifeCycle_Mode.Rte_ModeQueueReadCtr)
    {
      if (writeCtr < 1U)
      {
        ++writeCtr;
      }
      else
      {
        writeCtr = 0U;
      }
      Rte_ModeInfo_SysTime_LifeCycle_Mode.Rte_ModeQueueWriteCtr = writeCtr;
      Rte_ModeInfo_SysTime_LifeCycle_Mode.Rte_ModeQueue[writeCtr] = nextMode;

    }
    else
    {
      ret = RTE_E_LIMIT;
    }
    Rte_EnableOSInterrupts(UM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  else if (internalIndexCurrentMode >= 3U)
  {
    Rte_EnableOSInterrupts(UM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    Rte_CallDetReportError(RTE_SWITCH_SERVICE_ID, RTE_E_DET_MODESTATE); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    ret = RTE_E_LIMIT;
  }
  else
  {
    EventMaskType ModeSwitchEventMask;

    ModeSwitchEventMask = Rte_Ev_MS_Default_RTE_Mode_switch_Task;

    {
      uint8 writeCtr = Rte_ModeInfo_SysTime_LifeCycle_Mode.Rte_ModeQueueWriteCtr;
      if (writeCtr < 1U)
      {
        ++writeCtr;
      }
      else
      {
        writeCtr = 0U;
      }
      Rte_ModeInfo_SysTime_LifeCycle_Mode.Rte_ModeQueueWriteCtr = writeCtr;
      Rte_ModeInfo_SysTime_LifeCycle_Mode.Rte_ModeQueue[writeCtr] = nextMode;
      Rte_ModeInfo_SysTime_LifeCycle_Mode.Rte_ModeQueue[2U] = currentMode;

      Rte_ModeMachine_SysTime_LifeCycle_Mode = RTE_TRANSITION_SysTime_LifeCycle;
      if (currentMode != nextMode)
      {
        Rte_IncDisableFlags_SysTime_LifeCycle_Mode(nextMode);
      }
      Rte_EnableOSInterrupts(UM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

      (void)SetEvent(Default_RTE_Mode_switch_Task, ModeSwitchEventMask); /* PRQA S 3417 */ /* MD_Rte_Os */
    }
  }

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */


/**********************************************************************************************************************
 * Mode reading API (Rte_Mode)
 *********************************************************************************************************************/

FUNC(SysTime_LifeCycleRequestType, RTE_CODE) Rte_Mode_SysTime_LifeCycle_Mode(P2VAR(SysTime_LifeCycleRequestType, AUTOMATIC, RTE_SYSTIME_APPL_VAR) previousMode, P2VAR(SysTime_LifeCycleRequestType, AUTOMATIC, RTE_SYSTIME_APPL_VAR) nextMode) /* PRQA S 3408 */ /* MD_Rte_3408 */
{
  SysTime_LifeCycleRequestType curMode;
  Rte_DisableOSInterrupts(UM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  if (Rte_ModeMachine_SysTime_LifeCycle_Mode == RTE_TRANSITION_SysTime_LifeCycle)
  {
    uint8 readCtr = Rte_ModeInfo_SysTime_LifeCycle_Mode.Rte_ModeQueueReadCtr;
    if (readCtr < 1U)
    {
      ++readCtr;
    }
    else
    {
      readCtr = 0U;
    }
    *(nextMode) = Rte_ModeInfo_SysTime_LifeCycle_Mode.Rte_ModeQueue[readCtr];
    *(previousMode) = Rte_ModeInfo_SysTime_LifeCycle_Mode.Rte_ModeQueue[2U];
  }
  else
  {
    *(previousMode) = Rte_ModeMachine_SysTime_LifeCycle_Mode;
    *(nextMode) = Rte_ModeMachine_SysTime_LifeCycle_Mode;
  }
  curMode = Rte_ModeMachine_SysTime_LifeCycle_Mode;
  Rte_EnableOSInterrupts(UM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  return curMode;
}


/**********************************************************************************************************************
 * Task bodies for RTE controlled tasks
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Task:     Default_BAC_Appl_BMW_Task
 * Priority: 58
 * Schedule: FULL
 *********************************************************************************************************************/
TASK(Default_BAC_Appl_BMW_Task) /* PRQA S 3408, 1503 */ /* MD_Rte_3408, MD_MSR_14.1 */
{
  EventMaskType ev;

  for(;;)
  {
    (void)WaitEvent(Rte_Ev_Run1_Darh_QueueHandler | Rte_Ev_Run1_SysTime_MainFunction | Rte_Ev_Run_Darh_LifeCycleHandler | Rte_Ev_MS_Default_BAC_Appl_BMW_Task); /* PRQA S 3417 */ /* MD_Rte_Os */
    (void)GetEvent(Default_BAC_Appl_BMW_Task, &ev); /* PRQA S 3417 */ /* MD_Rte_Os */
    (void)ClearEvent(ev & (Rte_Ev_Run1_Darh_QueueHandler | Rte_Ev_Run1_SysTime_MainFunction | Rte_Ev_Run_Darh_LifeCycleHandler | Rte_Ev_MS_Default_BAC_Appl_BMW_Task)); /* PRQA S 3417 */ /* MD_Rte_Os */

    Rte_DisableOSInterrupts(UM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    if (((ev & Rte_Ev_Run1_Darh_QueueHandler) != (EventMaskType)0) && (Rte_OsApplication_QM_TriggerDisableFlags.Rte_Trigger_Default_BAC_Appl_BMW_Task_Rte_Trigger1_Darh_QueueHandler == 0))
    {
      Rte_EnableOSInterrupts(UM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
      /* call runnable */
      Darh_ErrorQueueHandler();
    }
    else
    {
      Rte_EnableOSInterrupts(UM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    }

    Rte_DisableOSInterrupts(UM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    if (((ev & Rte_Ev_Run1_SysTime_MainFunction) != (EventMaskType)0) && (Rte_OsApplication_QM_TriggerDisableFlags.Rte_Trigger_SysTime_LifeCycle_Mode_SYSTIME_INITIALIZED_SysTime_LifeCycle_Mode_SYSTIME_STOPPED == 0))
    {
      Rte_EnableOSInterrupts(UM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
      /* call runnable */
      SysTime_MainFunction();
    }
    else
    {
      Rte_EnableOSInterrupts(UM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    }

    if ((ev & Rte_Ev_Run_Darh_LifeCycleHandler) != (EventMaskType)0)
    {
      /* read implicit data */
      *(&Rte_Default_BAC_Appl_BMW_Task.Rte_RB.Rte_Darh_LifeCycleHandler.Rte_LifeCycleRequest_requestMode.value) = Rte_BswM_Provide_MSRP_Darh_requestMode;

      /* call runnable */
      Darh_LifeCycleHandler();
    }

    if (((ev & Rte_Ev_MS_Default_BAC_Appl_BMW_Task) != (EventMaskType)0) && (Rte_ModeMachine_Darh_LifeCycle_Mode == RTE_TRANSITION_Darh_LifeCycle))
    {
      Darh_LifeCycleRequestType previousMode;
      Darh_LifeCycleRequestType nextMode;
      boolean doAnotherSwitch = FALSE;
      Darh_LifeCycleRequestType curMode = Rte_ModeMachine_Darh_LifeCycle_Mode;
      uint8 readCtr;

      Rte_DisableOSInterrupts(UM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
      readCtr = Rte_ModeInfo_Darh_LifeCycle_Mode.Rte_ModeQueueReadCtr;
      if (readCtr < 1U)
      {
        ++readCtr;
      }
      else
      {
        readCtr = 0U;
      }
      Rte_ModeInfo_Darh_LifeCycle_Mode.Rte_ModeQueueReadCtr = readCtr;
      previousMode = Rte_ModeInfo_Darh_LifeCycle_Mode.Rte_ModeQueue[2U];
      nextMode = Rte_ModeInfo_Darh_LifeCycle_Mode.Rte_ModeQueue[readCtr];

      if (previousMode != nextMode)
      {
        Rte_DecDisableFlags_Darh_LifeCycle_Mode(previousMode);
      }

      Rte_ModeMachine_Darh_LifeCycle_Mode = nextMode;

      if (Rte_ModeInfo_Darh_LifeCycle_Mode.Rte_ModeQueueWriteCtr != Rte_ModeInfo_Darh_LifeCycle_Mode.Rte_ModeQueueReadCtr)
      {
        doAnotherSwitch = TRUE;
        Rte_ModeInfo_Darh_LifeCycle_Mode.Rte_ModeQueue[2U] = Rte_ModeMachine_Darh_LifeCycle_Mode;
        curMode = Rte_ModeMachine_Darh_LifeCycle_Mode;
        Rte_ModeMachine_Darh_LifeCycle_Mode = RTE_TRANSITION_Darh_LifeCycle;
      }

      Rte_EnableOSInterrupts(UM); /* PRQA S 3109 */ /* MD_MSR_14.3 */



      while (doAnotherSwitch == TRUE)
      {
        previousMode = curMode;
        readCtr = Rte_ModeInfo_Darh_LifeCycle_Mode.Rte_ModeQueueReadCtr;
        if (readCtr < 1U)
        {
          ++readCtr;
        }
        else
        {
          readCtr = 0U;
        }
        nextMode = Rte_ModeInfo_Darh_LifeCycle_Mode.Rte_ModeQueue[readCtr];
        {
          Rte_DisableOSInterrupts(UM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
          if (previousMode != nextMode)
          {
            Rte_DecDisableFlags_Darh_LifeCycle_Mode(previousMode);
          }

          Rte_ModeMachine_Darh_LifeCycle_Mode = nextMode;
          Rte_ModeInfo_Darh_LifeCycle_Mode.Rte_ModeQueueReadCtr = readCtr;
          if (previousMode != nextMode)
          {
            Rte_IncDisableFlags_Darh_LifeCycle_Mode(nextMode);
          }
          if (Rte_ModeInfo_Darh_LifeCycle_Mode.Rte_ModeQueueWriteCtr != Rte_ModeInfo_Darh_LifeCycle_Mode.Rte_ModeQueueReadCtr)
          {
            doAnotherSwitch = TRUE;
            Rte_ModeInfo_Darh_LifeCycle_Mode.Rte_ModeQueue[2U] = Rte_ModeMachine_Darh_LifeCycle_Mode;
            curMode = Rte_ModeMachine_Darh_LifeCycle_Mode;
            Rte_ModeMachine_Darh_LifeCycle_Mode = RTE_TRANSITION_Darh_LifeCycle;
          }
          else
          {
            doAnotherSwitch = FALSE;
          }

          Rte_EnableOSInterrupts(UM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
        }
      }
    }
  }
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

/**********************************************************************************************************************
 * Task:     Default_RTE_Mode_switch_Task
 * Priority: 10
 * Schedule: FULL
 *********************************************************************************************************************/
TASK(Default_RTE_Mode_switch_Task) /* PRQA S 3408, 1503 */ /* MD_Rte_3408, MD_MSR_14.1 */
{
  EventMaskType ev;
  EventMaskType evRun;


  /* call runnable */
  DemWrapper_Init();

  for(;;)
  {
    (void)WaitEvent(Rte_Ev_Run1_StdDiag_SessionChange_DefaultSession | Rte_Ev_Run1_StdDiag_SessionChange_OtherSession | Rte_Ev_Run1_Stm_Runnable_InitialCELSupervision | Rte_Ev_Run1_Stm_Runnable_StopCentralErrorLockSupervision | Rte_Ev_Run1_SysTime_ReceiveSignal | Rte_Ev_Run_BMW_Application_Connector_Dummy_BMW_Vin_Rx_Wrapper | Rte_Ev_Run_BMW_Application_Connector_Dummy_Dlog_FirstStart_Dummy | Rte_Ev_Run_BMW_Application_Main_Dcm_BAC4_EcuReset_Execute | Rte_Ev_Run_BMW_Application_Main_Dcm_BAC4_EcuReset_Hard | Rte_Ev_Run_BMW_Application_Main_Dcm_BAC4_Jump2Boot | Rte_Ev_Run_BMW_Application_Main_Dcm_BAC4_RapidShutdownDisable | Rte_Ev_Run_BMW_Application_Main_Dcm_BAC4_RapidShutdownEnable | Rte_Ev_Run_BMW_Application_Main_Xcp_Event_Runnable | Rte_Ev_Run_Bs_Bs_LifeCycleModeRequest | Rte_Ev_Run_Dlog_Dlog_ModeSwitchAckLifeCycle | Rte_Ev_Run_Dlog_Dlog_ModeSwitchRequestLifeCycle | Rte_Ev_Run_IntegrationSample_IntegrationSampleTimerFunction | Rte_Ev_Run_IntegrationSample_R_IntegrationSample_EcuRunStateHandler | Rte_Ev_Run_IntegrationSample_R_Receive_SGG_Rx_CON_VEH | Rte_Ev_Run_IntegrationSample_R_Receive_SIG_MILE_KM_816_R | Rte_Ev_Run_IntegrationSample_R_Receive_VehicleStatus | Rte_Ev_Run_IntegrationSample_R_Timeout_SGG_Rx_CON_VEH | Rte_Ev_Run_IntegrationSample_R_Timeout_VehicleStatus | Rte_Ev_Run_Omc_LifeCycleHandler | Rte_Ev_Run_StdDiag_LifeCycleHandler | Rte_Ev_Run_Stm_Runnable_ErrorEnergyMode | Rte_Ev_Run_Stm_Runnable_ReceiveEnergyMode | Rte_Ev_Run_SysTime_LifeCycleHandler | Rte_Ev_MS_Default_RTE_Mode_switch_Task); /* PRQA S 3417 */ /* MD_Rte_Os */
    (void)GetEvent(Default_RTE_Mode_switch_Task, &ev); /* PRQA S 3417 */ /* MD_Rte_Os */
    (void)ClearEvent(ev & (Rte_Ev_Run1_StdDiag_SessionChange_DefaultSession | Rte_Ev_Run1_StdDiag_SessionChange_OtherSession | Rte_Ev_Run1_Stm_Runnable_InitialCELSupervision | Rte_Ev_Run1_Stm_Runnable_StopCentralErrorLockSupervision | Rte_Ev_Run1_SysTime_ReceiveSignal | Rte_Ev_Run_BMW_Application_Connector_Dummy_BMW_Vin_Rx_Wrapper | Rte_Ev_Run_BMW_Application_Connector_Dummy_Dlog_FirstStart_Dummy | Rte_Ev_Run_BMW_Application_Main_Dcm_BAC4_EcuReset_Execute | Rte_Ev_Run_BMW_Application_Main_Dcm_BAC4_EcuReset_Hard | Rte_Ev_Run_BMW_Application_Main_Dcm_BAC4_Jump2Boot | Rte_Ev_Run_BMW_Application_Main_Dcm_BAC4_RapidShutdownDisable | Rte_Ev_Run_BMW_Application_Main_Dcm_BAC4_RapidShutdownEnable | Rte_Ev_Run_BMW_Application_Main_Xcp_Event_Runnable | Rte_Ev_Run_Bs_Bs_LifeCycleModeRequest | Rte_Ev_Run_Dlog_Dlog_ModeSwitchAckLifeCycle | Rte_Ev_Run_Dlog_Dlog_ModeSwitchRequestLifeCycle | Rte_Ev_Run_IntegrationSample_IntegrationSampleTimerFunction | Rte_Ev_Run_IntegrationSample_R_IntegrationSample_EcuRunStateHandler | Rte_Ev_Run_IntegrationSample_R_Receive_SGG_Rx_CON_VEH | Rte_Ev_Run_IntegrationSample_R_Receive_SIG_MILE_KM_816_R | Rte_Ev_Run_IntegrationSample_R_Receive_VehicleStatus | Rte_Ev_Run_IntegrationSample_R_Timeout_SGG_Rx_CON_VEH | Rte_Ev_Run_IntegrationSample_R_Timeout_VehicleStatus | Rte_Ev_Run_Omc_LifeCycleHandler | Rte_Ev_Run_StdDiag_LifeCycleHandler | Rte_Ev_Run_Stm_Runnable_ErrorEnergyMode | Rte_Ev_Run_Stm_Runnable_ReceiveEnergyMode | Rte_Ev_Run_SysTime_LifeCycleHandler | Rte_Ev_MS_Default_RTE_Mode_switch_Task)); /* PRQA S 3417 */ /* MD_Rte_Os */

    if ((ev & Rte_Ev_Run_Bs_Bs_LifeCycleModeRequest) != (EventMaskType)0)
    {
      /* read implicit data */
      *(&Rte_Default_RTE_Mode_switch_Task.Rte_RB.Rte_Bs_Bs_LifeCycleModeRequest.Rte_LifeCycleRequest_requestMode.value) = Rte_BswM_Provide_MRSP_Bs_requestMode;

      /* call runnable */
      Bs_LifeCycleModeRequest();
    }

    (void)GetEvent(Default_RTE_Mode_switch_Task, &evRun); /* PRQA S 3417 */ /* MD_Rte_Os */
    if (((ev & Rte_Ev_Run_Dlog_Dlog_ModeSwitchAckLifeCycle) != (EventMaskType)0) || ((evRun & Rte_Ev_Run_Dlog_Dlog_ModeSwitchAckLifeCycle) != (EventMaskType)0))
    {
      (void)ClearEvent(Rte_Ev_Run_Dlog_Dlog_ModeSwitchAckLifeCycle); /* PRQA S 3417 */ /* MD_Rte_Os */

      /* call runnable */
      Dlog_ModeSwitchAckLifeCycle();
    }

    if ((ev & Rte_Ev_Run_Dlog_Dlog_ModeSwitchRequestLifeCycle) != (EventMaskType)0)
    {
      /* read implicit data */
      *(&Rte_Default_RTE_Mode_switch_Task.Rte_RB.Rte_Dlog_Dlog_ModeSwitchRequestLifeCycle.Rte_LifeCycleRequest_requestMode.value) = Rte_BswM_Provide_MSRP_Dlog_requestMode;

      /* call runnable */
      Dlog_ModeSwitchRequestLifeCycle();
    }

    if ((ev & Rte_Ev_Run_IntegrationSample_IntegrationSampleTimerFunction) != (EventMaskType)0)
    {
      /* call runnable */
      R_IntegrationSample_TimerFunction();
    }

    if ((ev & Rte_Ev_Run_IntegrationSample_R_IntegrationSample_EcuRunStateHandler) != (EventMaskType)0)
    {
      /* read implicit data */
      *(&Rte_Default_RTE_Mode_switch_Task.Rte_RB.Rte_IntegrationSample_R_IntegrationSample_EcuRunStateHandler.Rte_EcuRunStateRequest_IntegrationSample_EcuRunStateRequestMode.value) = Rte_BswM_Provide_MSRP_IntegrationSample_EcuRunMode_IntegrationSample_EcuRunStateRequestMode;

      /* call runnable */
      IntegrationSample_EcuRunStateHandler();
    }

    if ((ev & Rte_Ev_Run_SysTime_LifeCycleHandler) != (EventMaskType)0)
    {
      /* read implicit data */
      *(&Rte_Default_RTE_Mode_switch_Task.Rte_RB.Rte_SysTime_LifeCycleHandler.Rte_LifeCycleRequest_requestMode.value) = Rte_BswM_Provide_MSRP_Systime_requestMode;

      /* call runnable */
      SysTime_LifeCycleHandler();
    }

    if ((ev & Rte_Ev_Run_IntegrationSample_R_Receive_SIG_MILE_KM_816_R) != (EventMaskType)0)
    {
      /* call runnable */
      Runnable_IS_Receive_SIG_MILE_KM_816_R();
    }

    Rte_DisableOSInterrupts(UM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    if (((ev & Rte_Ev_Run1_SysTime_ReceiveSignal) != (EventMaskType)0) && (Rte_OsApplication_QM_TriggerDisableFlags.Rte_Trigger_SysTime_LifeCycle_Mode_SYSTIME_INITIALIZED_SysTime_LifeCycle_Mode_SYSTIME_STOPPED == 0))
    {
      Rte_EnableOSInterrupts(UM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
      /* call runnable */
      SysTime_ReceiveSignal();
    }
    else
    {
      Rte_EnableOSInterrupts(UM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    }

    if ((ev & Rte_Ev_Run_IntegrationSample_R_Receive_VehicleStatus) != (EventMaskType)0)
    {
      /* call runnable */
      Runnable_IS_R_Receive_VehicleStatus();
    }

    if ((ev & Rte_Ev_Run_IntegrationSample_R_Timeout_VehicleStatus) != (EventMaskType)0)
    {
      /* call runnable */
      Runnable_IS_R_Timeout_VehicleStatus();
    }

    if ((ev & Rte_Ev_Run_StdDiag_LifeCycleHandler) != (EventMaskType)0)
    {
      /* read implicit data */
      *(&Rte_Default_RTE_Mode_switch_Task.Rte_RB.Rte_StdDiag_LifeCycleHandler.Rte_LifeCycleRequest_requestMode.value) = Rte_BswM_Provide_MSRP_StdDiag_requestMode;

      /* call runnable */
      StdDiag_LifeCycleHandler();
    }

    if ((ev & Rte_Ev_Run_Omc_LifeCycleHandler) != (EventMaskType)0)
    {
      /* read implicit data */
      *(&Rte_Default_RTE_Mode_switch_Task.Rte_RB.Rte_Omc_LifeCycleHandler.Rte_LifeCycleRequest_requestMode.value) = Rte_BswM_Provide_MSRP_Omc_requestMode;

      /* call runnable */
      Omc_LifeCycleHandler();
    }

    if ((ev & Rte_Ev_Run1_StdDiag_SessionChange_DefaultSession) != (EventMaskType)0)
    {
      /* call runnable */
      StdDiag_SesChgIndication_DefaultSession();
    }

    if ((ev & Rte_Ev_Run1_StdDiag_SessionChange_OtherSession) != (EventMaskType)0)
    {
      /* call runnable */
      StdDiag_SesChgIndication_OtherSession();
    }

    if ((ev & Rte_Ev_Run_IntegrationSample_R_Receive_SGG_Rx_CON_VEH) != (EventMaskType)0)
    {
      /* call runnable */
      R_Receive_SGG_Rx_CON_VEH();
    }

    if ((ev & Rte_Ev_Run_IntegrationSample_R_Timeout_SGG_Rx_CON_VEH) != (EventMaskType)0)
    {
      /* call runnable */
      Runnable_IS_R_Timeout_SGG_Rx_CON_VEH();
    }

    if ((ev & Rte_Ev_Run_BMW_Application_Connector_Dummy_BMW_Vin_Rx_Wrapper) != (EventMaskType)0)
    {
      /* call runnable */
      BMW_Vin_Rx_Wrapper();
    }

    if ((ev & Rte_Ev_Run_BMW_Application_Main_Dcm_BAC4_EcuReset_Execute) != (EventMaskType)0)
    {
      /* call runnable */
      Dcm_BAC4_EcuReset_Execute();
    }

    if ((ev & Rte_Ev_Run_BMW_Application_Main_Dcm_BAC4_EcuReset_Hard) != (EventMaskType)0)
    {
      /* call runnable */
      Dcm_BAC4_EcuReset_Hard();
    }

    if ((ev & Rte_Ev_Run_BMW_Application_Main_Dcm_BAC4_Jump2Boot) != (EventMaskType)0)
    {
      /* call runnable */
      Dcm_BAC4_Jump2Boot();
    }

    if ((ev & Rte_Ev_Run_BMW_Application_Main_Dcm_BAC4_RapidShutdownDisable) != (EventMaskType)0)
    {
      /* call runnable */
      Dcm_BAC4_RapidShutdownDisable();
    }

    if ((ev & Rte_Ev_Run_BMW_Application_Main_Dcm_BAC4_RapidShutdownEnable) != (EventMaskType)0)
    {
      /* call runnable */
      Dcm_BAC4_RapidShutdownEnable();
    }

    if ((ev & Rte_Ev_Run_BMW_Application_Connector_Dummy_Dlog_FirstStart_Dummy) != (EventMaskType)0)
    {
      /* call runnable */
      Dlog_FirstStart_Dummy();
    }

    if ((ev & Rte_Ev_Run_BMW_Application_Main_Xcp_Event_Runnable) != (EventMaskType)0)
    {
      /* call runnable */
      Xcp_Event_Runnable();
    }

    (void)GetEvent(Default_RTE_Mode_switch_Task, &evRun); /* PRQA S 3417 */ /* MD_Rte_Os */
    if ((evRun & Rte_Ev_Run_Stm_Runnable_ErrorCentralErrorLock) != (EventMaskType)0)
    {
      (void)ClearEvent(Rte_Ev_Run_Stm_Runnable_ErrorCentralErrorLock); /* PRQA S 3417 */ /* MD_Rte_Os */

      /* call runnable */
      Stm_ErrorCentralErrorLock();
    }

    if ((ev & Rte_Ev_Run_Stm_Runnable_ErrorEnergyMode) != (EventMaskType)0)
    {
      /* call runnable */
      Stm_ErrorEnergyMode();
    }

    (void)GetEvent(Default_RTE_Mode_switch_Task, &evRun); /* PRQA S 3417 */ /* MD_Rte_Os */
    if ((evRun & Rte_Ev_Run_Stm_Runnable_ErrorVehicleState) != (EventMaskType)0)
    {
      (void)ClearEvent(Rte_Ev_Run_Stm_Runnable_ErrorVehicleState); /* PRQA S 3417 */ /* MD_Rte_Os */

      /* call runnable */
      Stm_ErrorVehicleState();
    }

    if ((ev & Rte_Ev_Run1_Stm_Runnable_InitialCELSupervision) != (EventMaskType)0)
    {
      /* call runnable */
      Stm_InitialCentralErrorLockSupervision();
    }

    (void)GetEvent(Default_RTE_Mode_switch_Task, &evRun); /* PRQA S 3417 */ /* MD_Rte_Os */
    if ((evRun & Rte_Ev_Run_Stm_Runnable_ReceiveCentralErrorLock) != (EventMaskType)0)
    {
      (void)ClearEvent(Rte_Ev_Run_Stm_Runnable_ReceiveCentralErrorLock); /* PRQA S 3417 */ /* MD_Rte_Os */

      /* call runnable */
      Stm_ReceiveCentralErrorLock();
    }

    if ((ev & Rte_Ev_Run_Stm_Runnable_ReceiveEnergyMode) != (EventMaskType)0)
    {
      /* call runnable */
      Stm_ReceiveEnergyMode();
    }

    (void)GetEvent(Default_RTE_Mode_switch_Task, &evRun); /* PRQA S 3417 */ /* MD_Rte_Os */
    if ((evRun & Rte_Ev_Run_Stm_Runnable_ReceiveVehicleState) != (EventMaskType)0)
    {
      (void)ClearEvent(Rte_Ev_Run_Stm_Runnable_ReceiveVehicleState); /* PRQA S 3417 */ /* MD_Rte_Os */

      /* call runnable */
      Stm_ReceiveVehicleState();
    }

    if ((ev & Rte_Ev_Run1_Stm_Runnable_StopCentralErrorLockSupervision) != (EventMaskType)0)
    {
      /* call runnable */
      Stm_StopCentralErrorLockSupervision();
    }

    if (((ev & (Rte_Ev_Run1_StdDiag_SessionChange_DefaultSession | Rte_Ev_Run1_StdDiag_SessionChange_OtherSession | Rte_Ev_MS_Default_RTE_Mode_switch_Task)) != (EventMaskType)0) && (Rte_ModeMachine_BswM_Switch_SwitchPort_StdDiag_SessionChangeIndication_SessionModeDeclarationGroup == RTE_TRANSITION_StdDiag_SessionModeGroup))
    {

      Rte_DisableOSInterrupts(UM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

      Rte_ModeMachine_BswM_Switch_SwitchPort_StdDiag_SessionChangeIndication_SessionModeDeclarationGroup = Rte_ModeInfo_BswM_Switch_SwitchPort_StdDiag_SessionChangeIndication_SessionModeDeclarationGroup.Rte_ModeQueue[0];

      Rte_EnableOSInterrupts(UM); /* PRQA S 3109 */ /* MD_MSR_14.3 */


    }

    if (((ev & (Rte_Ev_Run_BMW_Application_Main_Dcm_BAC4_RapidShutdownDisable | Rte_Ev_Run_BMW_Application_Main_Dcm_BAC4_RapidShutdownEnable | Rte_Ev_MS_Default_RTE_Mode_switch_Task)) != (EventMaskType)0) && (Rte_ModeMachine_Dcm_DcmModeRapidPowerShutDown_DcmModeRapidPowerShutDown == RTE_TRANSITION_DcmModeRapidPowerShutDown))
    {

      Rte_DisableOSInterrupts(UM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

      Rte_ModeMachine_Dcm_DcmModeRapidPowerShutDown_DcmModeRapidPowerShutDown = Rte_ModeInfo_Dcm_DcmModeRapidPowerShutDown_DcmModeRapidPowerShutDown.Rte_ModeQueue[0];

      Rte_OsApplication_QM_AckFlags.Rte_ModeSwitchAck_Dcm_DcmModeRapidPowerShutDown_DcmModeRapidPowerShutDown_Ack = 1;

      Rte_EnableOSInterrupts(UM); /* PRQA S 3109 */ /* MD_MSR_14.3 */


    }

    if (((ev & Rte_Ev_MS_Default_RTE_Mode_switch_Task) != (EventMaskType)0) && (Rte_ModeMachine_SysTime_LifeCycle_Mode == RTE_TRANSITION_SysTime_LifeCycle))
    {
      SysTime_LifeCycleRequestType previousMode;
      SysTime_LifeCycleRequestType nextMode;
      boolean doAnotherSwitch = FALSE;
      SysTime_LifeCycleRequestType curMode = Rte_ModeMachine_SysTime_LifeCycle_Mode;
      uint8 readCtr;

      Rte_DisableOSInterrupts(UM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
      readCtr = Rte_ModeInfo_SysTime_LifeCycle_Mode.Rte_ModeQueueReadCtr;
      if (readCtr < 1U)
      {
        ++readCtr;
      }
      else
      {
        readCtr = 0U;
      }
      Rte_ModeInfo_SysTime_LifeCycle_Mode.Rte_ModeQueueReadCtr = readCtr;
      previousMode = Rte_ModeInfo_SysTime_LifeCycle_Mode.Rte_ModeQueue[2U];
      nextMode = Rte_ModeInfo_SysTime_LifeCycle_Mode.Rte_ModeQueue[readCtr];

      if (previousMode != nextMode)
      {
        Rte_DecDisableFlags_SysTime_LifeCycle_Mode(previousMode);
      }

      Rte_ModeMachine_SysTime_LifeCycle_Mode = nextMode;

      if (Rte_ModeInfo_SysTime_LifeCycle_Mode.Rte_ModeQueueWriteCtr != Rte_ModeInfo_SysTime_LifeCycle_Mode.Rte_ModeQueueReadCtr)
      {
        doAnotherSwitch = TRUE;
        Rte_ModeInfo_SysTime_LifeCycle_Mode.Rte_ModeQueue[2U] = Rte_ModeMachine_SysTime_LifeCycle_Mode;
        curMode = Rte_ModeMachine_SysTime_LifeCycle_Mode;
        Rte_ModeMachine_SysTime_LifeCycle_Mode = RTE_TRANSITION_SysTime_LifeCycle;
      }

      Rte_EnableOSInterrupts(UM); /* PRQA S 3109 */ /* MD_MSR_14.3 */



      while (doAnotherSwitch == TRUE)
      {
        previousMode = curMode;
        readCtr = Rte_ModeInfo_SysTime_LifeCycle_Mode.Rte_ModeQueueReadCtr;
        if (readCtr < 1U)
        {
          ++readCtr;
        }
        else
        {
          readCtr = 0U;
        }
        nextMode = Rte_ModeInfo_SysTime_LifeCycle_Mode.Rte_ModeQueue[readCtr];
        {
          Rte_DisableOSInterrupts(UM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
          if (previousMode != nextMode)
          {
            Rte_DecDisableFlags_SysTime_LifeCycle_Mode(previousMode);
          }

          Rte_ModeMachine_SysTime_LifeCycle_Mode = nextMode;
          Rte_ModeInfo_SysTime_LifeCycle_Mode.Rte_ModeQueueReadCtr = readCtr;
          if (previousMode != nextMode)
          {
            Rte_IncDisableFlags_SysTime_LifeCycle_Mode(nextMode);
          }
          if (Rte_ModeInfo_SysTime_LifeCycle_Mode.Rte_ModeQueueWriteCtr != Rte_ModeInfo_SysTime_LifeCycle_Mode.Rte_ModeQueueReadCtr)
          {
            doAnotherSwitch = TRUE;
            Rte_ModeInfo_SysTime_LifeCycle_Mode.Rte_ModeQueue[2U] = Rte_ModeMachine_SysTime_LifeCycle_Mode;
            curMode = Rte_ModeMachine_SysTime_LifeCycle_Mode;
            Rte_ModeMachine_SysTime_LifeCycle_Mode = RTE_TRANSITION_SysTime_LifeCycle;
          }
          else
          {
            doAnotherSwitch = FALSE;
          }

          Rte_EnableOSInterrupts(UM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
        }
      }
    }
  }
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

#define RTE_STOP_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_0781:  MISRA rule: 5.6
     Reason:     The name is being used as a structure/union member as well as being a label, tag or ordinary identifier.
                 The compliance to this rule is under user's control.
     Risk:       Ambiguous identifiers can lead to compiler errors / warnings.
     Prevention: Verified during compile time. If the compiler reports an error or warning, the user has to rename the objects leading to the violation.

   MD_Rte_2004:  MISRA rule: 14.10
     Reason:     The concluding else is not needed and an empty else makes the code more difficult to understand.
     Risk:       Wrong implementations could remain undetected.
     Prevention: Code inspection and test of different source code variants by the component test suites.

   MD_Rte_3206:  MISRA rule: -
     Reason:     The parameter's are not used by the code in all possible code variants.
     Risk:       No functional risk.
     Prevention: Not required.

   MD_Rte_3408:  MISRA rule: 8.8
     Reason:     For the purpose of monitoring during calibration or debugging it is necessary to use non-static declarations.
                 This is covered in the MISRA C compliance section of the Rte specification.
     Risk:       No functional risk.
     Prevention: Not required.

   MD_Rte_3447:  MISRA rule: 8.8
     Reason:     For the purpose of monitoring during calibration or debugging it is necessary to use non-static declarations.
                 This is covered in the MISRA C compliance section of the Rte specification.
     Risk:       No functional risk.
     Prevention: Not required.

   MD_Rte_Os:
     Reason:     This justification is used as summary justification for all deviations caused by the MICROSAR OS
                 which is for testing of the RTE. Those deviations are no issues in the RTE code.
     Risk:       No functional risk.
     Prevention: Not required.

*/

/**********************************************************************************************************************
 Code coverage justifications
 *********************************************************************************************************************/

/* COV_JUSTIFICATION_BEGIN
   \ID COV_RTE_MODE_MACHINE_LAST_STATE
     \ACCEPT TX
     \REASON The condition realizes a state of a mode machine. At each time one of the implemented modes is valid. Because of the
             "else if" construction the last mode can never be covered false.

COV_JUSTIFICATION_END */
