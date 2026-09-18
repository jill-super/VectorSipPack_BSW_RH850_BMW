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
 *              File: Os_Link_Core0_Stacks.ld
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

/**********************************************************************************************************************
 *  STACK SECTIONS
 *********************************************************************************************************************/

#if defined ( OS_LINK_KERNEL_STACKS )
_OS_CORE0_STACKS_START = .;
__OS_CORE0_STACKS_START = .;

/* Stack: Default_BAC_Appl_BMW_Task (1024 Byte) */
.OS_STACK_DEFAULT_BAC_APPL_BMW_TASK_VAR_NOINIT ALIGN(4) :> .
_OS_STACK_DEFAULT_BAC_APPL_BMW_TASK_VAR_NOINIT_START = ADDR(.OS_STACK_DEFAULT_BAC_APPL_BMW_TASK_VAR_NOINIT);
_OS_STACK_DEFAULT_BAC_APPL_BMW_TASK_VAR_NOINIT_END = ENDADDR(.OS_STACK_DEFAULT_BAC_APPL_BMW_TASK_VAR_NOINIT) - 1;

/* Stack: Default_BSW_Sync_Task (1024 Byte) */
.OS_STACK_DEFAULT_BSW_SYNC_TASK_VAR_NOINIT ALIGN(4) :> .
_OS_STACK_DEFAULT_BSW_SYNC_TASK_VAR_NOINIT_START = ADDR(.OS_STACK_DEFAULT_BSW_SYNC_TASK_VAR_NOINIT);
_OS_STACK_DEFAULT_BSW_SYNC_TASK_VAR_NOINIT_END = ENDADDR(.OS_STACK_DEFAULT_BSW_SYNC_TASK_VAR_NOINIT) - 1;

/* Stack: Default_RTE_Mode_switch_Task (2048 Byte) */
.OS_STACK_DEFAULT_RTE_MODE_SWITCH_TASK_VAR_NOINIT ALIGN(4) :> .
_OS_STACK_DEFAULT_RTE_MODE_SWITCH_TASK_VAR_NOINIT_START = ADDR(.OS_STACK_DEFAULT_RTE_MODE_SWITCH_TASK_VAR_NOINIT);
_OS_STACK_DEFAULT_RTE_MODE_SWITCH_TASK_VAR_NOINIT_END = ENDADDR(.OS_STACK_DEFAULT_RTE_MODE_SWITCH_TASK_VAR_NOINIT) - 1;

/* Stack: OsCore_CORE0_Error (1024 Byte) */
.OS_STACK_OSCORE_CORE0_ERROR_VAR_NOINIT ALIGN(4) :> .
_OS_STACK_OSCORE_CORE0_ERROR_VAR_NOINIT_START = ADDR(.OS_STACK_OSCORE_CORE0_ERROR_VAR_NOINIT);
_OS_STACK_OSCORE_CORE0_ERROR_VAR_NOINIT_END = ENDADDR(.OS_STACK_OSCORE_CORE0_ERROR_VAR_NOINIT) - 1;

/* Stack: OsCore_CORE0_Init (1024 Byte) */
.OS_STACK_OSCORE_CORE0_INIT_VAR_NOINIT ALIGN(4) :> .
_OS_STACK_OSCORE_CORE0_INIT_VAR_NOINIT_START = ADDR(.OS_STACK_OSCORE_CORE0_INIT_VAR_NOINIT);
_OS_STACK_OSCORE_CORE0_INIT_VAR_NOINIT_END = ENDADDR(.OS_STACK_OSCORE_CORE0_INIT_VAR_NOINIT) - 1;

/* Stack: OsCore_CORE0_Isr_Core (2048 Byte) */
.OS_STACK_OSCORE_CORE0_ISR_CORE_VAR_NOINIT ALIGN(4) :> .
_OS_STACK_OSCORE_CORE0_ISR_CORE_VAR_NOINIT_START = ADDR(.OS_STACK_OSCORE_CORE0_ISR_CORE_VAR_NOINIT);
_OS_STACK_OSCORE_CORE0_ISR_CORE_VAR_NOINIT_END = ENDADDR(.OS_STACK_OSCORE_CORE0_ISR_CORE_VAR_NOINIT) - 1;

/* Stack: OsCore_CORE0_Isr_Level4 (1024 Byte) */
.OS_STACK_OSCORE_CORE0_ISR_LEVEL4_VAR_NOINIT ALIGN(4) :> .
_OS_STACK_OSCORE_CORE0_ISR_LEVEL4_VAR_NOINIT_START = ADDR(.OS_STACK_OSCORE_CORE0_ISR_LEVEL4_VAR_NOINIT);
_OS_STACK_OSCORE_CORE0_ISR_LEVEL4_VAR_NOINIT_END = ENDADDR(.OS_STACK_OSCORE_CORE0_ISR_LEVEL4_VAR_NOINIT) - 1;

/* Stack: OsCore_CORE0_Kernel (1024 Byte) */
.OS_STACK_OSCORE_CORE0_KERNEL_VAR_NOINIT ALIGN(4) :> .
_OS_STACK_OSCORE_CORE0_KERNEL_VAR_NOINIT_START = ADDR(.OS_STACK_OSCORE_CORE0_KERNEL_VAR_NOINIT);
_OS_STACK_OSCORE_CORE0_KERNEL_VAR_NOINIT_END = ENDADDR(.OS_STACK_OSCORE_CORE0_KERNEL_VAR_NOINIT) - 1;

/* Stack: OsCore_CORE0_Shutdown (1024 Byte) */
.OS_STACK_OSCORE_CORE0_SHUTDOWN_VAR_NOINIT ALIGN(4) :> .
_OS_STACK_OSCORE_CORE0_SHUTDOWN_VAR_NOINIT_START = ADDR(.OS_STACK_OSCORE_CORE0_SHUTDOWN_VAR_NOINIT);
_OS_STACK_OSCORE_CORE0_SHUTDOWN_VAR_NOINIT_END = ENDADDR(.OS_STACK_OSCORE_CORE0_SHUTDOWN_VAR_NOINIT) - 1;

/* Stack: OsCore_CORE0_Startup (1024 Byte) */
.OS_STACK_OSCORE_CORE0_STARTUP_VAR_NOINIT ALIGN(4) :> .
_OS_STACK_OSCORE_CORE0_STARTUP_VAR_NOINIT_START = ADDR(.OS_STACK_OSCORE_CORE0_STARTUP_VAR_NOINIT);
_OS_STACK_OSCORE_CORE0_STARTUP_VAR_NOINIT_END = ENDADDR(.OS_STACK_OSCORE_CORE0_STARTUP_VAR_NOINIT) - 1;

/* Stack: OsCore_CORE0_Task_Prio0 (1024 Byte) */
.OS_STACK_OSCORE_CORE0_TASK_PRIO0_VAR_NOINIT ALIGN(4) :> .
_OS_STACK_OSCORE_CORE0_TASK_PRIO0_VAR_NOINIT_START = ADDR(.OS_STACK_OSCORE_CORE0_TASK_PRIO0_VAR_NOINIT);
_OS_STACK_OSCORE_CORE0_TASK_PRIO0_VAR_NOINIT_END = ENDADDR(.OS_STACK_OSCORE_CORE0_TASK_PRIO0_VAR_NOINIT) - 1;

/* Stack: OsCore_CORE0_Task_Prio4 (1024 Byte) */
.OS_STACK_OSCORE_CORE0_TASK_PRIO4_VAR_NOINIT ALIGN(4) :> .
_OS_STACK_OSCORE_CORE0_TASK_PRIO4_VAR_NOINIT_START = ADDR(.OS_STACK_OSCORE_CORE0_TASK_PRIO4_VAR_NOINIT);
_OS_STACK_OSCORE_CORE0_TASK_PRIO4_VAR_NOINIT_END = ENDADDR(.OS_STACK_OSCORE_CORE0_TASK_PRIO4_VAR_NOINIT) - 1;

/* Stack: OsCore_CORE0_Task_Prio7 (1024 Byte) */
.OS_STACK_OSCORE_CORE0_TASK_PRIO7_VAR_NOINIT ALIGN(4) :> .
_OS_STACK_OSCORE_CORE0_TASK_PRIO7_VAR_NOINIT_START = ADDR(.OS_STACK_OSCORE_CORE0_TASK_PRIO7_VAR_NOINIT);
_OS_STACK_OSCORE_CORE0_TASK_PRIO7_VAR_NOINIT_END = ENDADDR(.OS_STACK_OSCORE_CORE0_TASK_PRIO7_VAR_NOINIT) - 1;

/* Stack: OsCore_CORE0_Task_Prio8 (1024 Byte) */
.OS_STACK_OSCORE_CORE0_TASK_PRIO8_VAR_NOINIT ALIGN(4) :> .
_OS_STACK_OSCORE_CORE0_TASK_PRIO8_VAR_NOINIT_START = ADDR(.OS_STACK_OSCORE_CORE0_TASK_PRIO8_VAR_NOINIT);
_OS_STACK_OSCORE_CORE0_TASK_PRIO8_VAR_NOINIT_END = ENDADDR(.OS_STACK_OSCORE_CORE0_TASK_PRIO8_VAR_NOINIT) - 1;

/* Stack: OsCore_CORE0_Task_Prio9 (1024 Byte) */
.OS_STACK_OSCORE_CORE0_TASK_PRIO9_VAR_NOINIT ALIGN(4) :> .
_OS_STACK_OSCORE_CORE0_TASK_PRIO9_VAR_NOINIT_START = ADDR(.OS_STACK_OSCORE_CORE0_TASK_PRIO9_VAR_NOINIT);
_OS_STACK_OSCORE_CORE0_TASK_PRIO9_VAR_NOINIT_END = ENDADDR(.OS_STACK_OSCORE_CORE0_TASK_PRIO9_VAR_NOINIT) - 1;

/* Stack: OsTask_BSW_ASIL (4096 Byte) */
.OS_STACK_OSTASK_BSW_ASIL_VAR_NOINIT ALIGN(4) :> .
_OS_STACK_OSTASK_BSW_ASIL_VAR_NOINIT_START = ADDR(.OS_STACK_OSTASK_BSW_ASIL_VAR_NOINIT);
_OS_STACK_OSTASK_BSW_ASIL_VAR_NOINIT_END = ENDADDR(.OS_STACK_OSTASK_BSW_ASIL_VAR_NOINIT) - 1;

/* Stack: OsTask_LowPrioNvm (1024 Byte) */
.OS_STACK_OSTASK_LOWPRIONVM_VAR_NOINIT ALIGN(4) :> .
_OS_STACK_OSTASK_LOWPRIONVM_VAR_NOINIT_START = ADDR(.OS_STACK_OSTASK_LOWPRIONVM_VAR_NOINIT);
_OS_STACK_OSTASK_LOWPRIONVM_VAR_NOINIT_END = ENDADDR(.OS_STACK_OSTASK_LOWPRIONVM_VAR_NOINIT) - 1;

_OS_CORE0_STACKS_END = .-1;
__OS_CORE0_STACKS_END = .-1;
#endif

#ifdef OS_LINK_KERNEL_STACKS
# undef OS_LINK_KERNEL_STACKS
#endif


