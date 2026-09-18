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
 *              File: Os_Hal_Context_Lcfg.c
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

/* PRQA S 0777, 0779, 0810, 0828, 0857 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779, MD_MSR_1.1_810, MD_MSR_1.1_828, MD_MSR_1.1_857 */

#define OS_HAL_CONTEXT_LCFG_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
#include "Std_Types.h"

/* Os module declarations */
#include "Os_Hal_Context_Lcfg.h"
#include "Os_Hal_Context.h"

/* Os kernel module dependencies */
#include "OsInt.h"
#include "Os_Core.h"
#include "Os_Hook_Lcfg.h"
#include "Os_Hook.h"
#include "Os_Ioc_Lcfg.h"
#include "Os_Isr_Lcfg.h"
#include "Os_Lcfg.h"
#include "Os_Stack_Lcfg.h"
#include "Os_Task_Lcfg.h"
#include "Os_Task.h"

/* Os hal dependencies */
#include "Os_Hal_Core.h"


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

/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/

#define OS_START_SEC_CORE0_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! HAL dynamic hook context data: Os_CoreInitHook_OsCore_CORE0 */
VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_Os_CoreInitHook_OsCore_CORE0_Dyn;

/*! HAL dynamic hook context data: StartupHook_OsCore_CORE0 */
VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_StartupHook_OsCore_CORE0_Dyn;

/*! HAL dynamic hook context data: ShutdownHook_OsCore_CORE0 */
VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_ShutdownHook_OsCore_CORE0_Dyn;

/*! HAL dynamic hook context data: ErrorHook_OsCore_CORE0 */
VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_ErrorHook_OsCore_CORE0_Dyn;

/*! HAL dynamic ISR2 level context data: Level1 */
VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_OsCore_CORE0_Isr_Level1_Dyn;

/*! HAL dynamic ISR2 level context data: Level2 */
VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_OsCore_CORE0_Isr_Level2_Dyn;

/*! HAL dynamic ISR2 level context data: Level3 */
VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_OsCore_CORE0_Isr_Level3_Dyn;

/*! HAL dynamic ISR2 level context data: Level4 */
VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_OsCore_CORE0_Isr_Level4_Dyn;

/*! HAL dynamic task context data: Default_Appl_Init_Task */
VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_Default_Appl_Init_Task_Dyn;

/*! HAL dynamic task context data: Default_Appl_Task */
VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_Default_Appl_Task_Dyn;

/*! HAL dynamic task context data: Default_BAC_Appl_BMW_Task */
VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_Default_BAC_Appl_BMW_Task_Dyn;

/*! HAL dynamic task context data: Default_BSW_Sync_Task */
VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_Default_BSW_Sync_Task_Dyn;

/*! HAL dynamic task context data: Default_Background_Task */
VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_Default_Background_Task_Dyn;

/*! HAL dynamic task context data: Default_Init_Task */
VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_Default_Init_Task_Dyn;

/*! HAL dynamic task context data: Default_RTE_Mode_switch_Task */
VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_Default_RTE_Mode_switch_Task_Dyn;

/*! HAL dynamic task context data: IdleTask_OsCore_CORE0 */
VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_IdleTask_OsCore_CORE0_Dyn;

/*! HAL dynamic task context data: OsTask_BSW_ASIL */
VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_OsTask_BSW_ASIL_Dyn;

/*! HAL dynamic task context data: OsTask_LowPrioNvm */
VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_OsTask_LowPrioNvm_Dyn;

/*! HAL exception context data: OsCore_CORE0 */
VAR(Os_ExceptionContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_OsCore_CORE0_ExceptionContext;

#define OS_STOP_SEC_CORE0_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *  GLOBAL CONSTANT DATA
 *********************************************************************************************************************/

#define OS_START_SEC_CORE0_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! HAL hook context configuration data: Os_CoreInitHook_OsCore_CORE0 */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Os_CoreInitHook_OsCore_CORE0 =
{
  /* .Os_Hal_SL     = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore_CORE0_Init_Dyn), /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Os_Hal_SP     = */ (uint32)OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore_CORE0_Init_Dyn), /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Entry         = */ (uint32)&Os_HookWrapperOs_CoreInitHook, /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress = */ (uint32)&Os_TrapHookReturn, /* PRQA S 0305, 306, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0306, MD_Os_Hal_0428 */
  /* .Os_Hal_PSW    = */ (uint32)0x00018000UL,
  /* .Os_Hal_PMR    = */ (uint32)(0x0000FFFEUL & OS_HAL_PMR_MASK),
  /* .Os_Hal_ASID   = */ (uint32)0x000003FFUL  
};

/*! HAL hook context configuration data: StartupHook_OsCore_CORE0 */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_StartupHook_OsCore_CORE0 =
{
  /* .Os_Hal_SL     = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore_CORE0_Startup_Dyn), /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Os_Hal_SP     = */ (uint32)OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore_CORE0_Startup_Dyn), /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Entry         = */ (uint32)&Os_HookWrapperCallback, /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress = */ (uint32)&Os_TrapHookReturn, /* PRQA S 0305, 306, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0306, MD_Os_Hal_0428 */
  /* .Os_Hal_PSW    = */ (uint32)0x00018000UL,
  /* .Os_Hal_PMR    = */ (uint32)(0x0000FFFEUL & OS_HAL_PMR_MASK),
  /* .Os_Hal_ASID   = */ (uint32)0x000003FFUL  
};

/*! HAL hook context configuration data: ShutdownHook_OsCore_CORE0 */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_ShutdownHook_OsCore_CORE0 =
{
  /* .Os_Hal_SL     = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore_CORE0_Shutdown_Dyn), /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Os_Hal_SP     = */ (uint32)OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore_CORE0_Shutdown_Dyn), /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Entry         = */ (uint32)&Os_HookWrapperStatusHook, /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress = */ (uint32)&Os_TrapHookReturn, /* PRQA S 0305, 306, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0306, MD_Os_Hal_0428 */
  /* .Os_Hal_PSW    = */ (uint32)0x00018000UL,
  /* .Os_Hal_PMR    = */ (uint32)(0x0000FFFFUL & OS_HAL_PMR_MASK),
  /* .Os_Hal_ASID   = */ (uint32)0x000003FFUL  
};

/*! HAL hook context configuration data: ErrorHook_OsCore_CORE0 */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_ErrorHook_OsCore_CORE0 =
{
  /* .Os_Hal_SL     = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore_CORE0_Error_Dyn), /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Os_Hal_SP     = */ (uint32)OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore_CORE0_Error_Dyn), /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Entry         = */ (uint32)&Os_HookWrapperStatusHook, /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress = */ (uint32)&Os_TrapHookReturn, /* PRQA S 0305, 306, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0306, MD_Os_Hal_0428 */
  /* .Os_Hal_PSW    = */ (uint32)0x00018000UL,
  /* .Os_Hal_PMR    = */ (uint32)(0x0000FFFEUL & OS_HAL_PMR_MASK),
  /* .Os_Hal_ASID   = */ (uint32)0x000003FFUL  
};

/*! HAL ISR2 context configuration data: CounterIsr_TpCounter_OsCore_CORE0 */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CounterIsr_TpCounter_OsCore_CORE0 =
{
  /* .Os_Hal_SL     = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore_CORE0_Isr_Level4_Dyn), /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Os_Hal_SP     = */ (uint32)OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore_CORE0_Isr_Level4_Dyn), /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Entry         = */ (uint32)&Os_Isr_Os_TpIsr, /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress = */ (uint32)&Os_IsrEpilogueTp, /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .Os_Hal_PSW    = */ (uint32)0x00018000UL,
  /* .Os_Hal_PMR    = */ (uint32)(0x0000FFFFUL & OS_HAL_PMR_MASK),
  /* .Os_Hal_ASID   = */ (uint32)0x000003FFUL
};

/*! HAL ISR2 context configuration data: Fr_IrqLine0 */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Fr_IrqLine0 =
{
  /* .Os_Hal_SL     = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore_CORE0_Isr_Core_Dyn), /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Os_Hal_SP     = */ (uint32)OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore_CORE0_Isr_Core_Dyn), /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Entry         = */ (uint32)&Os_Isr_Fr_IrqLine0, /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress = */ (uint32)&Os_TrapIsrEpilogue, /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .Os_Hal_PSW    = */ (uint32)0x00018000UL,
  /* .Os_Hal_PMR    = */ (uint32)(0x0000FFFEUL & OS_HAL_PMR_MASK),
  /* .Os_Hal_ASID   = */ (uint32)0x000003FFUL
};

/*! HAL ISR2 context configuration data: Fr_IrqTimer0 */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Fr_IrqTimer0 =
{
  /* .Os_Hal_SL     = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore_CORE0_Isr_Core_Dyn), /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Os_Hal_SP     = */ (uint32)OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore_CORE0_Isr_Core_Dyn), /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Entry         = */ (uint32)&Os_Isr_Fr_IrqTimer0, /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress = */ (uint32)&Os_TrapIsrEpilogue, /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .Os_Hal_PSW    = */ (uint32)0x00018000UL,
  /* .Os_Hal_PMR    = */ (uint32)(0x0000FFFEUL & OS_HAL_PMR_MASK),
  /* .Os_Hal_ASID   = */ (uint32)0x000003FFUL
};

/*! HAL ISR2 context configuration data: Os_TimerPitIsr */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Os_TimerPitIsr =
{
  /* .Os_Hal_SL     = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore_CORE0_Isr_Core_Dyn), /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Os_Hal_SP     = */ (uint32)OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore_CORE0_Isr_Core_Dyn), /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Entry         = */ (uint32)&Os_Isr_Os_TimerHrtIsr, /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress = */ (uint32)&Os_TrapIsrEpilogue, /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .Os_Hal_PSW    = */ (uint32)0x00018000UL,
  /* .Os_Hal_PMR    = */ (uint32)(0x0000FFFEUL & OS_HAL_PMR_MASK),
  /* .Os_Hal_ASID   = */ (uint32)0x000003FFUL
};

/*! HAL ISR2 context configuration data: WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR =
{
  /* .Os_Hal_SL     = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore_CORE0_Isr_Core_Dyn), /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Os_Hal_SP     = */ (uint32)OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore_CORE0_Isr_Core_Dyn), /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Entry         = */ (uint32)&Os_Isr_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR, /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress = */ (uint32)&Os_TrapIsrEpilogue, /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .Os_Hal_PSW    = */ (uint32)0x00018000UL,
  /* .Os_Hal_PMR    = */ (uint32)(0x0000FFFEUL & OS_HAL_PMR_MASK),
  /* .Os_Hal_ASID   = */ (uint32)0x000003FFUL
};

/*! HAL task context configuration data: Default_Appl_Init_Task */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Default_Appl_Init_Task =
{
  /* .Os_Hal_SL     = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore_CORE0_Task_Prio4_Dyn), /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Os_Hal_SP     = */ (uint32)OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore_CORE0_Task_Prio4_Dyn), /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Entry         = */ (uint32)&Os_Task_Default_Appl_Init_Task, /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress = */ (uint32)&Os_TrapTaskMissingTerminateTask, /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .Os_Hal_PSW    = */ (uint32)0x40018000UL,
  /* .Os_Hal_PMR    = */ (uint32)(0x00000000UL & OS_HAL_PMR_MASK),
  /* .Os_Hal_ASID   = */ (uint32)0x000003FFUL  
};

/*! HAL task context configuration data: Default_Appl_Task */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Default_Appl_Task =
{
  /* .Os_Hal_SL     = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore_CORE0_Task_Prio7_Dyn), /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Os_Hal_SP     = */ (uint32)OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore_CORE0_Task_Prio7_Dyn), /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Entry         = */ (uint32)&Os_Task_Default_Appl_Task, /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress = */ (uint32)&Os_TrapTaskMissingTerminateTask, /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .Os_Hal_PSW    = */ (uint32)0x40018000UL,
  /* .Os_Hal_PMR    = */ (uint32)(0x00000000UL & OS_HAL_PMR_MASK),
  /* .Os_Hal_ASID   = */ (uint32)0x000003FFUL  
};

/*! HAL task context configuration data: Default_BAC_Appl_BMW_Task */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Default_BAC_Appl_BMW_Task =
{
  /* .Os_Hal_SL     = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_Default_BAC_Appl_BMW_Task_Dyn), /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Os_Hal_SP     = */ (uint32)OS_STACK_GETHIGHADDRESS(OsCfg_Stack_Default_BAC_Appl_BMW_Task_Dyn), /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Entry         = */ (uint32)&Os_Task_Default_BAC_Appl_BMW_Task, /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress = */ (uint32)&Os_TrapTaskMissingTerminateTask, /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .Os_Hal_PSW    = */ (uint32)0x40018000UL,
  /* .Os_Hal_PMR    = */ (uint32)(0x00000000UL & OS_HAL_PMR_MASK),
  /* .Os_Hal_ASID   = */ (uint32)0x000003FFUL  
};

/*! HAL task context configuration data: Default_BSW_Sync_Task */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Default_BSW_Sync_Task =
{
  /* .Os_Hal_SL     = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_Default_BSW_Sync_Task_Dyn), /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Os_Hal_SP     = */ (uint32)OS_STACK_GETHIGHADDRESS(OsCfg_Stack_Default_BSW_Sync_Task_Dyn), /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Entry         = */ (uint32)&Os_Task_Default_BSW_Sync_Task, /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress = */ (uint32)&Os_TrapTaskMissingTerminateTask, /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .Os_Hal_PSW    = */ (uint32)0x00018000UL,
  /* .Os_Hal_PMR    = */ (uint32)(0x00000000UL & OS_HAL_PMR_MASK),
  /* .Os_Hal_ASID   = */ (uint32)0x000003FFUL  
};

/*! HAL task context configuration data: Default_Background_Task */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Default_Background_Task =
{
  /* .Os_Hal_SL     = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore_CORE0_Task_Prio8_Dyn), /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Os_Hal_SP     = */ (uint32)OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore_CORE0_Task_Prio8_Dyn), /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Entry         = */ (uint32)&Os_Task_Default_Background_Task, /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress = */ (uint32)&Os_TrapTaskMissingTerminateTask, /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .Os_Hal_PSW    = */ (uint32)0x00018000UL,
  /* .Os_Hal_PMR    = */ (uint32)(0x00000000UL & OS_HAL_PMR_MASK),
  /* .Os_Hal_ASID   = */ (uint32)0x000003FFUL  
};

/*! HAL task context configuration data: Default_Init_Task */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Default_Init_Task =
{
  /* .Os_Hal_SL     = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore_CORE0_Task_Prio0_Dyn), /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Os_Hal_SP     = */ (uint32)OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore_CORE0_Task_Prio0_Dyn), /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Entry         = */ (uint32)&Os_Task_Default_Init_Task, /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress = */ (uint32)&Os_TrapTaskMissingTerminateTask, /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .Os_Hal_PSW    = */ (uint32)0x00018000UL,
  /* .Os_Hal_PMR    = */ (uint32)(0x00000000UL & OS_HAL_PMR_MASK),
  /* .Os_Hal_ASID   = */ (uint32)0x000003FFUL  
};

/*! HAL task context configuration data: Default_RTE_Mode_switch_Task */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Default_RTE_Mode_switch_Task =
{
  /* .Os_Hal_SL     = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_Default_RTE_Mode_switch_Task_Dyn), /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Os_Hal_SP     = */ (uint32)OS_STACK_GETHIGHADDRESS(OsCfg_Stack_Default_RTE_Mode_switch_Task_Dyn), /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Entry         = */ (uint32)&Os_Task_Default_RTE_Mode_switch_Task, /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress = */ (uint32)&Os_TrapTaskMissingTerminateTask, /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .Os_Hal_PSW    = */ (uint32)0x40018000UL,
  /* .Os_Hal_PMR    = */ (uint32)(0x00000000UL & OS_HAL_PMR_MASK),
  /* .Os_Hal_ASID   = */ (uint32)0x000003FFUL  
};

/*! HAL task context configuration data: IdleTask_OsCore_CORE0 */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_IdleTask_OsCore_CORE0 =
{
  /* .Os_Hal_SL     = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore_CORE0_Task_Prio9_Dyn), /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Os_Hal_SP     = */ (uint32)OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore_CORE0_Task_Prio9_Dyn), /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Entry         = */ (uint32)&Os_Task_Os_IdleTask, /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress = */ (uint32)&Os_TrapTaskMissingTerminateTask, /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .Os_Hal_PSW    = */ (uint32)0x00018000UL,
  /* .Os_Hal_PMR    = */ (uint32)(0x00000000UL & OS_HAL_PMR_MASK),
  /* .Os_Hal_ASID   = */ (uint32)0x000003FFUL  
};

/*! HAL task context configuration data: OsTask_BSW_ASIL */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_OsTask_BSW_ASIL =
{
  /* .Os_Hal_SL     = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsTask_BSW_ASIL_Dyn), /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Os_Hal_SP     = */ (uint32)OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsTask_BSW_ASIL_Dyn), /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Entry         = */ (uint32)&Os_Task_OsTask_BSW_ASIL, /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress = */ (uint32)&Os_TrapTaskMissingTerminateTask, /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .Os_Hal_PSW    = */ (uint32)0x00018000UL,
  /* .Os_Hal_PMR    = */ (uint32)(0x00000000UL & OS_HAL_PMR_MASK),
  /* .Os_Hal_ASID   = */ (uint32)0x000003FFUL  
};

/*! HAL task context configuration data: OsTask_LowPrioNvm */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_OsTask_LowPrioNvm =
{
  /* .Os_Hal_SL     = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsTask_LowPrioNvm_Dyn), /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Os_Hal_SP     = */ (uint32)OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsTask_LowPrioNvm_Dyn), /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Entry         = */ (uint32)&Os_Task_OsTask_LowPrioNvm, /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress = */ (uint32)&Os_TrapTaskMissingTerminateTask, /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .Os_Hal_PSW    = */ (uint32)0x00018000UL,
  /* .Os_Hal_PMR    = */ (uint32)(0x00000000UL & OS_HAL_PMR_MASK),
  /* .Os_Hal_ASID   = */ (uint32)0x000003FFUL  
};

/*! HAL kernel stack configuration data: OsCore_CORE0_Kernel */
CONST(Os_Hal_ContextStackConfigType, OS_CONST) OsCfg_Hal_Stack_OsCore_CORE0_Kernel =
{
  /* .StackStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore_CORE0_Kernel_Dyn), /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .StackEnd   = */ (uint32)OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore_CORE0_Kernel_Dyn) /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
};

#define OS_STOP_SEC_CORE0_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



#define OS_START_SEC_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! Object reference table for HAL exception context. */
CONSTP2VAR(Os_ExceptionContextType, AUTOMATIC, OS_CONST)
  OsCfg_Hal_Context_ExceptionContextRef[OS_CFG_COREPHYSICALID_COUNT + 1] =
{
  &OsCfg_Hal_Context_OsCore_CORE0_ExceptionContext,
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
 *  END OF FILE: Os_Hal_Context_Lcfg.c
 *********************************************************************************************************************/
