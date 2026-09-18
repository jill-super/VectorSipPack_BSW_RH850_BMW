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
 *   Generation Time: 2018-01-15 09:25:14
 *           Project: BTLD - Version 1.0
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

/* Stack: Default_BSW_Async_Task (4096 Byte) */
.OS_STACK_DEFAULT_BSW_ASYNC_TASK_VAR_NOINIT ALIGN(4) :> .
_OS_STACK_DEFAULT_BSW_ASYNC_TASK_VAR_NOINIT_START = ADDR(.OS_STACK_DEFAULT_BSW_ASYNC_TASK_VAR_NOINIT);
_OS_STACK_DEFAULT_BSW_ASYNC_TASK_VAR_NOINIT_END = ENDADDR(.OS_STACK_DEFAULT_BSW_ASYNC_TASK_VAR_NOINIT) - 1;

/* Stack: OsCore_CORE0_Error (1024 Byte) */
.OS_STACK_OSCORE_CORE0_ERROR_VAR_NOINIT ALIGN(4) :> .
_OS_STACK_OSCORE_CORE0_ERROR_VAR_NOINIT_START = ADDR(.OS_STACK_OSCORE_CORE0_ERROR_VAR_NOINIT);
_OS_STACK_OSCORE_CORE0_ERROR_VAR_NOINIT_END = ENDADDR(.OS_STACK_OSCORE_CORE0_ERROR_VAR_NOINIT) - 1;

/* Stack: OsCore_CORE0_Init (1024 Byte) */
.OS_STACK_OSCORE_CORE0_INIT_VAR_NOINIT ALIGN(4) :> .
_OS_STACK_OSCORE_CORE0_INIT_VAR_NOINIT_START = ADDR(.OS_STACK_OSCORE_CORE0_INIT_VAR_NOINIT);
_OS_STACK_OSCORE_CORE0_INIT_VAR_NOINIT_END = ENDADDR(.OS_STACK_OSCORE_CORE0_INIT_VAR_NOINIT) - 1;

/* Stack: OsCore_CORE0_Isr_Core (1024 Byte) */
.OS_STACK_OSCORE_CORE0_ISR_CORE_VAR_NOINIT ALIGN(4) :> .
_OS_STACK_OSCORE_CORE0_ISR_CORE_VAR_NOINIT_START = ADDR(.OS_STACK_OSCORE_CORE0_ISR_CORE_VAR_NOINIT);
_OS_STACK_OSCORE_CORE0_ISR_CORE_VAR_NOINIT_END = ENDADDR(.OS_STACK_OSCORE_CORE0_ISR_CORE_VAR_NOINIT) - 1;

/* Stack: OsCore_CORE0_Kernel (1024 Byte) */
.OS_STACK_OSCORE_CORE0_KERNEL_VAR_NOINIT ALIGN(4) :> .
_OS_STACK_OSCORE_CORE0_KERNEL_VAR_NOINIT_START = ADDR(.OS_STACK_OSCORE_CORE0_KERNEL_VAR_NOINIT);
_OS_STACK_OSCORE_CORE0_KERNEL_VAR_NOINIT_END = ENDADDR(.OS_STACK_OSCORE_CORE0_KERNEL_VAR_NOINIT) - 1;

/* Stack: OsCore_CORE0_Task_Prio0 (512 Byte) */
.OS_STACK_OSCORE_CORE0_TASK_PRIO0_VAR_NOINIT ALIGN(4) :> .
_OS_STACK_OSCORE_CORE0_TASK_PRIO0_VAR_NOINIT_START = ADDR(.OS_STACK_OSCORE_CORE0_TASK_PRIO0_VAR_NOINIT);
_OS_STACK_OSCORE_CORE0_TASK_PRIO0_VAR_NOINIT_END = ENDADDR(.OS_STACK_OSCORE_CORE0_TASK_PRIO0_VAR_NOINIT) - 1;

/* Stack: OsCore_CORE0_Task_Prio2 (512 Byte) */
.OS_STACK_OSCORE_CORE0_TASK_PRIO2_VAR_NOINIT ALIGN(4) :> .
_OS_STACK_OSCORE_CORE0_TASK_PRIO2_VAR_NOINIT_START = ADDR(.OS_STACK_OSCORE_CORE0_TASK_PRIO2_VAR_NOINIT);
_OS_STACK_OSCORE_CORE0_TASK_PRIO2_VAR_NOINIT_END = ENDADDR(.OS_STACK_OSCORE_CORE0_TASK_PRIO2_VAR_NOINIT) - 1;

/* Stack: OsCore_CORE0_Task_Prio3 (512 Byte) */
.OS_STACK_OSCORE_CORE0_TASK_PRIO3_VAR_NOINIT ALIGN(4) :> .
_OS_STACK_OSCORE_CORE0_TASK_PRIO3_VAR_NOINIT_START = ADDR(.OS_STACK_OSCORE_CORE0_TASK_PRIO3_VAR_NOINIT);
_OS_STACK_OSCORE_CORE0_TASK_PRIO3_VAR_NOINIT_END = ENDADDR(.OS_STACK_OSCORE_CORE0_TASK_PRIO3_VAR_NOINIT) - 1;

_OS_CORE0_STACKS_END = .-1;
__OS_CORE0_STACKS_END = .-1;
#endif

#ifdef OS_LINK_KERNEL_STACKS
# undef OS_LINK_KERNEL_STACKS
#endif


