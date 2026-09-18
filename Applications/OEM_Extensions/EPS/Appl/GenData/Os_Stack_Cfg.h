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
 *              File: Os_Stack_Cfg.h
 *   Generation Time: 2018-01-02 16:37:34
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

#if !defined (OS_STACK_CFG_H)                                                        /* PRQA S 0883 */ /* MD_Os_0883 */
# define OS_STACK_CFG_H

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
# include "Std_Types.h"


/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/*! Defines whether stack monitoring is active (STD_ON) or not (STD_OFF). */
# define OS_CFG_STACKMONITORING                  (STD_ON)

/*! Defines whether stack measurement is active (STD_ON) or not (STD_OFF). */
# define OS_CFG_STACKMEASUREMENT                 (STD_OFF)

/* Configured stack sizes (Total: 22528 Byte) */
# define OS_CFG_SIZE_DEFAULT_BAC_APPL_BMW_TASK_STACK     (1024UL)
# define OS_CFG_SIZE_DEFAULT_BSW_SYNC_TASK_STACK     (1024UL)
# define OS_CFG_SIZE_DEFAULT_RTE_MODE_SWITCH_TASK_STACK     (2048UL)
# define OS_CFG_SIZE_OSCORE_CORE0_ERROR_STACK     (1024UL)
# define OS_CFG_SIZE_OSCORE_CORE0_INIT_STACK     (1024UL)
# define OS_CFG_SIZE_OSCORE_CORE0_ISR_CORE_STACK     (2048UL)
# define OS_CFG_SIZE_OSCORE_CORE0_ISR_LEVEL4_STACK     (1024UL)
# define OS_CFG_SIZE_OSCORE_CORE0_KERNEL_STACK     (1024UL)
# define OS_CFG_SIZE_OSCORE_CORE0_SHUTDOWN_STACK     (1024UL)
# define OS_CFG_SIZE_OSCORE_CORE0_STARTUP_STACK     (1024UL)
# define OS_CFG_SIZE_OSCORE_CORE0_TASK_PRIO0_STACK     (1024UL)
# define OS_CFG_SIZE_OSCORE_CORE0_TASK_PRIO4_STACK     (1024UL)
# define OS_CFG_SIZE_OSCORE_CORE0_TASK_PRIO7_STACK     (1024UL)
# define OS_CFG_SIZE_OSCORE_CORE0_TASK_PRIO8_STACK     (1024UL)
# define OS_CFG_SIZE_OSCORE_CORE0_TASK_PRIO9_STACK     (1024UL)
# define OS_CFG_SIZE_OSTASK_BSW_ASIL_STACK     (4096UL)
# define OS_CFG_SIZE_OSTASK_LOWPRIONVM_STACK     (1024UL)


/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


#endif /* OS_STACK_CFG_H */

/**********************************************************************************************************************
 *  END OF FILE: Os_Stack_Cfg.h
 *********************************************************************************************************************/
