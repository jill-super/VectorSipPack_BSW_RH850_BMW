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
 *            Module: Os
 *           Program: MSR BAC 4.x (MSR_Bmw_SLP4)
 *          Customer: Nexteer Automotive Corporation
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: Renesas RH850 P1M R7F701363EAFP
 *    License Scope : The usage is restricted to CBD1700369_D04
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Os_Application_Lcfg.c
 *   Generation Time: 2018-01-02 16:37:32
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

/* PRQA S 0777, 0779, 0810, 0828, 0857 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779, MD_MSR_1.1_810, MD_MSR_1.1_828, MD_MSR_1.1_857 */

#define OS_APPLICATION_LCFG_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
#include "Std_Types.h"

/* Os module declarations */
#include "Os_Application_Cfg.h"
#include "Os_Application_Lcfg.h"
#include "Os_Application.h"

/* Os kernel module dependencies */
#include "Os_Alarm_Lcfg.h"
#include "Os_Alarm.h"
#include "Os_Common.h"
#include "Os_Core_Lcfg.h"
#include "Os_Counter_Lcfg.h"
#include "Os_Counter.h"
#include "Os_Hook_Lcfg.h"
#include "Os_Isr_Lcfg.h"
#include "Os_ScheduleTable_Lcfg.h"
#include "Os_ScheduleTable.h"
#include "Os_ServiceFunction_Lcfg.h"
#include "Os_Task_Lcfg.h"
#include "Os_Timer.h"

/* Os hal dependencies */


/**********************************************************************************************************************
 *  LOCAL CONSTANT MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTION MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL DATA PROTOTYPES
 *********************************************************************************************************************/

#define OS_START_SEC_CORE0_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! Dynamic application data: OsApplication_ASIL */
OS_LOCAL VAR(Os_AppType, OS_VAR_NOINIT) OsCfg_App_OsApplication_ASIL_Dyn;

/*! Dynamic application data: OsApplication_QM */
OS_LOCAL VAR(Os_AppType, OS_VAR_NOINIT) OsCfg_App_OsApplication_QM_Dyn;

/*! Dynamic application data: SystemApplication_OsCore_CORE0 */
OS_LOCAL VAR(Os_AppType, OS_VAR_NOINIT) OsCfg_App_SystemApplication_OsCore_CORE0_Dyn;

#define OS_STOP_SEC_CORE0_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL CONSTANT DATA
 *********************************************************************************************************************/

#define OS_START_SEC_CORE0_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! Object reference table for application alarms: OsApplication_ASIL */
OS_LOCAL CONST(Os_AlarmConfigRefType, OS_CONST) OsCfg_App_OsApplication_ASIL_AlarmRefs[OS_CFG_NUM_APP_OSAPPLICATION_ASIL_ALARMS + 1] =
{
  OS_ALARM_CASTCONFIG_ALARMSETEVENT_2_ALARM(OsCfg_Alarm_Rte_Al_TE2_Default_BSW_Sync_Task_0_5ms),
  OS_ALARM_CASTCONFIG_ALARMSETEVENT_2_ALARM(OsCfg_Alarm_Rte_Al_TE2_OsTask_BSW_ASIL_0_10ms),
  OS_ALARM_CASTCONFIG_ALARMSETEVENT_2_ALARM(OsCfg_Alarm_Rte_Al_TE2_OsTask_BSW_ASIL_0_20ms),
  OS_ALARM_CASTCONFIG_ALARMSETEVENT_2_ALARM(OsCfg_Alarm_Rte_Al_TE2_OsTask_BSW_ASIL_0_2ms),
  OS_ALARM_CASTCONFIG_ALARMSETEVENT_2_ALARM(OsCfg_Alarm_Rte_Al_TE2_OsTask_BSW_ASIL_0_5ms),
  NULL_PTR
};

/*! Object reference table for application counters: OsApplication_ASIL */
OS_LOCAL CONST(Os_CounterConfigRefType, OS_CONST) OsCfg_App_OsApplication_ASIL_CounterRefs[OS_CFG_NUM_APP_OSAPPLICATION_ASIL_COUNTERS + 1] =
{
  NULL_PTR
};

/*! Object reference table for application hooks: OsApplication_ASIL */
OS_LOCAL CONST(Os_HookConfigRefType, OS_CONST) OsCfg_App_OsApplication_ASIL_HookRefs[OS_CFG_NUM_APP_OSAPPLICATION_ASIL_HOOKS + 1] =
{
  NULL_PTR
};

/*! Object reference table for application ISRs: OsApplication_ASIL */
OS_LOCAL CONST(Os_IsrConfigRefType, OS_CONST) OsCfg_App_OsApplication_ASIL_IsrRefs[OS_CFG_NUM_APP_OSAPPLICATION_ASIL_ISRS + 1] =
{
  NULL_PTR
};

/*! Object reference table for application category 1 (EXTERNAL) ISRs: OsApplication_ASIL */
OS_LOCAL CONST(Os_IsrCat1ConfigRefType, OS_CONST) OsCfg_App_OsApplication_ASIL_Cat1IsrRefs[OS_CFG_NUM_APP_OSAPPLICATION_ASIL_CAT1ISRS + 1] =
{
  NULL_PTR
};

/*! Object reference table for application schedule tables: OsApplication_ASIL */
OS_LOCAL CONST(Os_SchTConfigRefType, OS_CONST) OsCfg_App_OsApplication_ASIL_SchTRefs[OS_CFG_NUM_APP_OSAPPLICATION_ASIL_SCHTS + 1] =
{
  NULL_PTR
};

/*! Object reference table for application tasks: OsApplication_ASIL */
OS_LOCAL CONST(Os_TaskConfigRefType, OS_CONST) OsCfg_App_OsApplication_ASIL_TaskRefs[OS_CFG_NUM_APP_OSAPPLICATION_ASIL_TASKS + 1] =
{
  OS_TASK_CASTCONFIG_TASK_2_TASK(OsCfg_Task_Default_BSW_Sync_Task),
  OS_TASK_CASTCONFIG_TASK_2_TASK(OsCfg_Task_Default_Background_Task),
  OS_TASK_CASTCONFIG_TASK_2_TASK(OsCfg_Task_Default_Init_Task),
  OS_TASK_CASTCONFIG_TASK_2_TASK(OsCfg_Task_OsTask_BSW_ASIL),
  NULL_PTR
};

/*! Object reference table for application trusted functions: OsApplication_ASIL */
OS_LOCAL CONST(Os_ServiceConfigRefType, OS_CONST) OsCfg_App_OsApplication_ASIL_ServiceRefs[OS_CFG_NUM_APP_OSAPPLICATION_ASIL_SERVICES + 1] =
{
  NULL_PTR
};

/*! Application configuration data: OsApplication_ASIL */
CONST(Os_AppConfigType, OS_CONST) OsCfg_App_OsApplication_ASIL =
{
  /* .Dyn                  = */ &OsCfg_App_OsApplication_ASIL_Dyn,
  /* .Core                 = */ &OsCfg_Core_OsCore_CORE0,
  /* .AccessRightId        = */ OS_APPID2MASK(OsApplication_ASIL),
  /* .TaskRefs             = */ OsCfg_App_OsApplication_ASIL_TaskRefs,
  /* .TaskCount            = */ OS_CFG_NUM_APP_OSAPPLICATION_ASIL_TASKS,
  /* .IsrCat2Refs          = */ OsCfg_App_OsApplication_ASIL_IsrRefs,
  /* .IsrCat2Count         = */ OS_CFG_NUM_APP_OSAPPLICATION_ASIL_ISRS,
  /* .IsrCat1Refs          = */ OsCfg_App_OsApplication_ASIL_Cat1IsrRefs,
  /* .IsrCat1Count         = */ OS_CFG_NUM_APP_OSAPPLICATION_ASIL_CAT1ISRS,
  /* .CounterRefs          = */ OsCfg_App_OsApplication_ASIL_CounterRefs,
  /* .CounterCount         = */ OS_CFG_NUM_APP_OSAPPLICATION_ASIL_COUNTERS,
  /* .AlarmRefs            = */ OsCfg_App_OsApplication_ASIL_AlarmRefs,
  /* .AlarmCount           = */ OS_CFG_NUM_APP_OSAPPLICATION_ASIL_ALARMS,
  /* .SchTRefs             = */ OsCfg_App_OsApplication_ASIL_SchTRefs,
  /* .SchTCount            = */ OS_CFG_NUM_APP_OSAPPLICATION_ASIL_SCHTS,
  /* .ServiceFunctions     = */ OsCfg_App_OsApplication_ASIL_ServiceRefs,
  /* .ServiceFunctionCount = */ OS_CFG_NUM_APP_OSAPPLICATION_ASIL_SERVICES,
  /* .StartupHookRef       = */ NULL_PTR,
  /* .ShutdownHookRef      = */ NULL_PTR,
  /* .ErrorHookRef         = */ NULL_PTR,
  /* .HookRefs             = */ OsCfg_App_OsApplication_ASIL_HookRefs,
  /* .HookCount            = */ OS_CFG_NUM_APP_OSAPPLICATION_ASIL_HOOKS,
  /* .RestartTask          = */ NULL_PTR,
  /* .IsTrusted            = */ TRUE,
  /* .IsPriveleged         = */ TRUE,
  /* .HasTimingProtectionDelay = */ FALSE,
  /* .Id                   = */ OsApplication_ASIL
};

/*! Object reference table for application alarms: OsApplication_QM */
OS_LOCAL CONST(Os_AlarmConfigRefType, OS_CONST) OsCfg_App_OsApplication_QM_AlarmRefs[OS_CFG_NUM_APP_OSAPPLICATION_QM_ALARMS + 1] =
{
  OS_ALARM_CASTCONFIG_ALARMSETEVENT_2_ALARM(OsCfg_Alarm_Rte_Al_TE_BMW_Application_Main_Xcp_Event_Runnable),
  OS_ALARM_CASTCONFIG_ALARMSETEVENT_2_ALARM(OsCfg_Alarm_Rte_Al_TE_Darh_QueueHandler),
  OS_ALARM_CASTCONFIG_ALARMSETEVENT_2_ALARM(OsCfg_Alarm_Rte_Al_TE_IntegrationSample_IntegrationSampleTimerFunction),
  OS_ALARM_CASTCONFIG_ALARMSETEVENT_2_ALARM(OsCfg_Alarm_Rte_Al_TE_SysTime_MainFunction),
  NULL_PTR
};

/*! Object reference table for application counters: OsApplication_QM */
OS_LOCAL CONST(Os_CounterConfigRefType, OS_CONST) OsCfg_App_OsApplication_QM_CounterRefs[OS_CFG_NUM_APP_OSAPPLICATION_QM_COUNTERS + 1] =
{
  OS_COUNTER_CASTCONFIG_TIMERHRT_2_COUNTER(OsCfg_Counter_SystemTimer),
  NULL_PTR
};

/*! Object reference table for application hooks: OsApplication_QM */
OS_LOCAL CONST(Os_HookConfigRefType, OS_CONST) OsCfg_App_OsApplication_QM_HookRefs[OS_CFG_NUM_APP_OSAPPLICATION_QM_HOOKS + 1] =
{
  NULL_PTR
};

/*! Object reference table for application ISRs: OsApplication_QM */
OS_LOCAL CONST(Os_IsrConfigRefType, OS_CONST) OsCfg_App_OsApplication_QM_IsrRefs[OS_CFG_NUM_APP_OSAPPLICATION_QM_ISRS + 1] =
{
  NULL_PTR
};

/*! Object reference table for application category 1 (EXTERNAL) ISRs: OsApplication_QM */
OS_LOCAL CONST(Os_IsrCat1ConfigRefType, OS_CONST) OsCfg_App_OsApplication_QM_Cat1IsrRefs[OS_CFG_NUM_APP_OSAPPLICATION_QM_CAT1ISRS + 1] =
{
  NULL_PTR
};

/*! Object reference table for application schedule tables: OsApplication_QM */
OS_LOCAL CONST(Os_SchTConfigRefType, OS_CONST) OsCfg_App_OsApplication_QM_SchTRefs[OS_CFG_NUM_APP_OSAPPLICATION_QM_SCHTS + 1] =
{
  NULL_PTR
};

/*! Object reference table for application tasks: OsApplication_QM */
OS_LOCAL CONST(Os_TaskConfigRefType, OS_CONST) OsCfg_App_OsApplication_QM_TaskRefs[OS_CFG_NUM_APP_OSAPPLICATION_QM_TASKS + 1] =
{
  OS_TASK_CASTCONFIG_TASK_2_TASK(OsCfg_Task_Default_Appl_Init_Task),
  OS_TASK_CASTCONFIG_TASK_2_TASK(OsCfg_Task_Default_Appl_Task),
  OS_TASK_CASTCONFIG_TASK_2_TASK(OsCfg_Task_Default_BAC_Appl_BMW_Task),
  OS_TASK_CASTCONFIG_TASK_2_TASK(OsCfg_Task_Default_RTE_Mode_switch_Task),
  NULL_PTR
};

/*! Object reference table for application trusted functions: OsApplication_QM */
OS_LOCAL CONST(Os_ServiceConfigRefType, OS_CONST) OsCfg_App_OsApplication_QM_ServiceRefs[OS_CFG_NUM_APP_OSAPPLICATION_QM_SERVICES + 1] =
{
  NULL_PTR
};

/*! Application configuration data: OsApplication_QM */
CONST(Os_AppConfigType, OS_CONST) OsCfg_App_OsApplication_QM =
{
  /* .Dyn                  = */ &OsCfg_App_OsApplication_QM_Dyn,
  /* .Core                 = */ &OsCfg_Core_OsCore_CORE0,
  /* .AccessRightId        = */ OS_APPID2MASK(OsApplication_QM),
  /* .TaskRefs             = */ OsCfg_App_OsApplication_QM_TaskRefs,
  /* .TaskCount            = */ OS_CFG_NUM_APP_OSAPPLICATION_QM_TASKS,
  /* .IsrCat2Refs          = */ OsCfg_App_OsApplication_QM_IsrRefs,
  /* .IsrCat2Count         = */ OS_CFG_NUM_APP_OSAPPLICATION_QM_ISRS,
  /* .IsrCat1Refs          = */ OsCfg_App_OsApplication_QM_Cat1IsrRefs,
  /* .IsrCat1Count         = */ OS_CFG_NUM_APP_OSAPPLICATION_QM_CAT1ISRS,
  /* .CounterRefs          = */ OsCfg_App_OsApplication_QM_CounterRefs,
  /* .CounterCount         = */ OS_CFG_NUM_APP_OSAPPLICATION_QM_COUNTERS,
  /* .AlarmRefs            = */ OsCfg_App_OsApplication_QM_AlarmRefs,
  /* .AlarmCount           = */ OS_CFG_NUM_APP_OSAPPLICATION_QM_ALARMS,
  /* .SchTRefs             = */ OsCfg_App_OsApplication_QM_SchTRefs,
  /* .SchTCount            = */ OS_CFG_NUM_APP_OSAPPLICATION_QM_SCHTS,
  /* .ServiceFunctions     = */ OsCfg_App_OsApplication_QM_ServiceRefs,
  /* .ServiceFunctionCount = */ OS_CFG_NUM_APP_OSAPPLICATION_QM_SERVICES,
  /* .StartupHookRef       = */ NULL_PTR,
  /* .ShutdownHookRef      = */ NULL_PTR,
  /* .ErrorHookRef         = */ NULL_PTR,
  /* .HookRefs             = */ OsCfg_App_OsApplication_QM_HookRefs,
  /* .HookCount            = */ OS_CFG_NUM_APP_OSAPPLICATION_QM_HOOKS,
  /* .RestartTask          = */ NULL_PTR,
  /* .IsTrusted            = */ FALSE,
  /* .IsPriveleged         = */ FALSE,
  /* .HasTimingProtectionDelay = */ FALSE,
  /* .Id                   = */ OsApplication_QM
};

/*! Object reference table for application alarms: SystemApplication_OsCore_CORE0 */
OS_LOCAL CONST(Os_AlarmConfigRefType, OS_CONST) OsCfg_App_SystemApplication_OsCore_CORE0_AlarmRefs[OS_CFG_NUM_APP_SYSTEMAPPLICATION_OSCORE_CORE0_ALARMS + 1] =
{
  OS_ALARM_CASTCONFIG_ALARMSETEVENT_2_ALARM(OsCfg_Alarm_Rte_Al_TE2_OsTask_LowPrioNvm_0_10ms),
  OS_ALARM_CASTCONFIG_ALARMSETEVENT_2_ALARM(OsCfg_Alarm_Rte_Al_TE_Fee_30_SmallSector_Fee_30_SmallSector_MainFunction),
  NULL_PTR
};

/*! Object reference table for application counters: SystemApplication_OsCore_CORE0 */
OS_LOCAL CONST(Os_CounterConfigRefType, OS_CONST) OsCfg_App_SystemApplication_OsCore_CORE0_CounterRefs[OS_CFG_NUM_APP_SYSTEMAPPLICATION_OSCORE_CORE0_COUNTERS + 1] =
{
  NULL_PTR
};

/*! Object reference table for application hooks: SystemApplication_OsCore_CORE0 */
OS_LOCAL CONST(Os_HookConfigRefType, OS_CONST) OsCfg_App_SystemApplication_OsCore_CORE0_HookRefs[OS_CFG_NUM_APP_SYSTEMAPPLICATION_OSCORE_CORE0_HOOKS + 1] =
{
  NULL_PTR
};

/*! Object reference table for application ISRs: SystemApplication_OsCore_CORE0 */
OS_LOCAL CONST(Os_IsrConfigRefType, OS_CONST) OsCfg_App_SystemApplication_OsCore_CORE0_IsrRefs[OS_CFG_NUM_APP_SYSTEMAPPLICATION_OSCORE_CORE0_ISRS + 1] =
{
  OS_TIMER_CASTCONFIG_TIMERISR_2_ISR(OsCfg_Isr_CounterIsr_TpCounter_OsCore_CORE0),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_Fr_IrqLine0),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_Fr_IrqTimer0),
  OS_TIMER_CASTCONFIG_TIMERISR_2_ISR(OsCfg_Isr_Os_TimerPitIsr),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR),
  NULL_PTR
};

/*! Object reference table for application category 1 (EXTERNAL) ISRs: SystemApplication_OsCore_CORE0 */
OS_LOCAL CONST(Os_IsrCat1ConfigRefType, OS_CONST) OsCfg_App_SystemApplication_OsCore_CORE0_Cat1IsrRefs[OS_CFG_NUM_APP_SYSTEMAPPLICATION_OSCORE_CORE0_CAT1ISRS + 1] =
{
  NULL_PTR
};

/*! Object reference table for application schedule tables: SystemApplication_OsCore_CORE0 */
OS_LOCAL CONST(Os_SchTConfigRefType, OS_CONST) OsCfg_App_SystemApplication_OsCore_CORE0_SchTRefs[OS_CFG_NUM_APP_SYSTEMAPPLICATION_OSCORE_CORE0_SCHTS + 1] =
{
  NULL_PTR
};

/*! Object reference table for application tasks: SystemApplication_OsCore_CORE0 */
OS_LOCAL CONST(Os_TaskConfigRefType, OS_CONST) OsCfg_App_SystemApplication_OsCore_CORE0_TaskRefs[OS_CFG_NUM_APP_SYSTEMAPPLICATION_OSCORE_CORE0_TASKS + 1] =
{
  OS_TASK_CASTCONFIG_TASK_2_TASK(OsCfg_Task_IdleTask_OsCore_CORE0),
  OS_TASK_CASTCONFIG_TASK_2_TASK(OsCfg_Task_OsTask_LowPrioNvm),
  NULL_PTR
};

/*! Object reference table for application trusted functions: SystemApplication_OsCore_CORE0 */
OS_LOCAL CONST(Os_ServiceConfigRefType, OS_CONST) OsCfg_App_SystemApplication_OsCore_CORE0_ServiceRefs[OS_CFG_NUM_APP_SYSTEMAPPLICATION_OSCORE_CORE0_SERVICES + 1] =
{
  NULL_PTR
};

/*! Application configuration data: SystemApplication_OsCore_CORE0 */
CONST(Os_AppConfigType, OS_CONST) OsCfg_App_SystemApplication_OsCore_CORE0 =
{
  /* .Dyn                  = */ &OsCfg_App_SystemApplication_OsCore_CORE0_Dyn,
  /* .Core                 = */ &OsCfg_Core_OsCore_CORE0,
  /* .AccessRightId        = */ OS_APPID2MASK(SystemApplication_OsCore_CORE0),
  /* .TaskRefs             = */ OsCfg_App_SystemApplication_OsCore_CORE0_TaskRefs,
  /* .TaskCount            = */ OS_CFG_NUM_APP_SYSTEMAPPLICATION_OSCORE_CORE0_TASKS,
  /* .IsrCat2Refs          = */ OsCfg_App_SystemApplication_OsCore_CORE0_IsrRefs,
  /* .IsrCat2Count         = */ OS_CFG_NUM_APP_SYSTEMAPPLICATION_OSCORE_CORE0_ISRS,
  /* .IsrCat1Refs          = */ OsCfg_App_SystemApplication_OsCore_CORE0_Cat1IsrRefs,
  /* .IsrCat1Count         = */ OS_CFG_NUM_APP_SYSTEMAPPLICATION_OSCORE_CORE0_CAT1ISRS,
  /* .CounterRefs          = */ OsCfg_App_SystemApplication_OsCore_CORE0_CounterRefs,
  /* .CounterCount         = */ OS_CFG_NUM_APP_SYSTEMAPPLICATION_OSCORE_CORE0_COUNTERS,
  /* .AlarmRefs            = */ OsCfg_App_SystemApplication_OsCore_CORE0_AlarmRefs,
  /* .AlarmCount           = */ OS_CFG_NUM_APP_SYSTEMAPPLICATION_OSCORE_CORE0_ALARMS,
  /* .SchTRefs             = */ OsCfg_App_SystemApplication_OsCore_CORE0_SchTRefs,
  /* .SchTCount            = */ OS_CFG_NUM_APP_SYSTEMAPPLICATION_OSCORE_CORE0_SCHTS,
  /* .ServiceFunctions     = */ OsCfg_App_SystemApplication_OsCore_CORE0_ServiceRefs,
  /* .ServiceFunctionCount = */ OS_CFG_NUM_APP_SYSTEMAPPLICATION_OSCORE_CORE0_SERVICES,
  /* .StartupHookRef       = */ NULL_PTR,
  /* .ShutdownHookRef      = */ NULL_PTR,
  /* .ErrorHookRef         = */ NULL_PTR,
  /* .HookRefs             = */ OsCfg_App_SystemApplication_OsCore_CORE0_HookRefs,
  /* .HookCount            = */ OS_CFG_NUM_APP_SYSTEMAPPLICATION_OSCORE_CORE0_HOOKS,
  /* .RestartTask          = */ NULL_PTR,
  /* .IsTrusted            = */ TRUE,
  /* .IsPriveleged         = */ TRUE,
  /* .HasTimingProtectionDelay = */ FALSE,
  /* .Id                   = */ SystemApplication_OsCore_CORE0
};

#define OS_STOP_SEC_CORE0_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


#define OS_START_SEC_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! Object reference table for applications. */
CONSTP2CONST(Os_AppConfigType, OS_CONST, OS_CONST) OsCfg_AppRefs[OS_APPID_COUNT + 1] =
{
  &OsCfg_App_OsApplication_ASIL,
  &OsCfg_App_OsApplication_QM,
  &OsCfg_App_SystemApplication_OsCore_CORE0,
  NULL_PTR
};

#define OS_STOP_SEC_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  END OF FILE: Os_Application_Lcfg.c
 *********************************************************************************************************************/
