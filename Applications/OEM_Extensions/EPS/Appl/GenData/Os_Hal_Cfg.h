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
 *              File: Os_Hal_Cfg.h
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

#if !defined (OS_HAL_CFG_H)                                                          /* PRQA S 0883 */ /* MD_Os_0883 */
# define OS_HAL_CFG_H

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/*! HAL configuration major version identification. */
# define OS_CFG_HAL_MAJOR_VERSION                (2U)

/*! HAL configuration minor version identification. */
# define OS_CFG_HAL_MINOR_VERSION                (11U)

/* ISR core and level definitions */
# define OS_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_CORE      (0)
# define OS_ISR_COUNTERISR_TPCOUNTER_OSCORE_CORE0_LEVEL     (0)
# define OS_ISR_FR_IRQLINE0_CORE      (0)
# define OS_ISR_FR_IRQLINE0_LEVEL     (10)
# define OS_ISR_FR_IRQTIMER0_CORE      (0)
# define OS_ISR_FR_IRQTIMER0_LEVEL     (11)
# define OS_ISR_OS_TIMERPITISR_CORE      (0)
# define OS_ISR_OS_TIMERPITISR_LEVEL     (1)
# define OS_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_CORE      (0)
# define OS_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_LEVEL     (1)

/* Hardware counter timing macros */

/* Counter timing macros and constants: SystemTimer */
# define OSMAXALLOWEDVALUE_SystemTimer     (1073741823UL) /* 0x3FFFFFFFUL */
# define OSMINCYCLE_SystemTimer            (1UL)
# define OSTICKSPERBASE_SystemTimer        (1UL)
# define OSTICKDURATION_SystemTimer        (12UL)

/* OSEK compatibility for the system timer. */
# define OSMAXALLOWEDVALUE     (OSMAXALLOWEDVALUE_SystemTimer)
# define OSMINCYCLE            (OSMINCYCLE_SystemTimer)
# define OSTICKSPERBASE        (OSTICKSPERBASE_SystemTimer)
# define OSTICKDURATION        (OSTICKDURATION_SystemTimer)

/*! Macro OS_NS2TICKS_SystemTimer was approximated with a deviation of 0.0ppm. */
# define OS_NS2TICKS_SystemTimer(x)     ( (TickType) (((((uint32)(x)) * 2) + 12) / 25) )     /* PRQA S 3453 */ /* MD_MSR_19.7 */
/*! Macro OS_TICKS2NS_SystemTimer was approximated with a deviation of 2.220446049250313E-10ppm. */
# define OS_TICKS2NS_SystemTimer(x)     ( (PhysicalTimeType) (((((uint32)(x)) * 25) + 1) / 2) )     /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! Macro OS_US2TICKS_SystemTimer was approximated with a deviation of 0.0ppm. */
# define OS_US2TICKS_SystemTimer(x)     ( (TickType) (((((uint32)(x)) * 80) + 0) / 1) )     /* PRQA S 3453 */ /* MD_MSR_19.7 */
/*! Macro OS_TICKS2US_SystemTimer was approximated with a deviation of 0.0ppm. */
# define OS_TICKS2US_SystemTimer(x)     ( (PhysicalTimeType) (((((uint32)(x)) * 1) + 40) / 80) )     /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! Macro OS_MS2TICKS_SystemTimer was approximated with a deviation of 0.0ppm. */
# define OS_MS2TICKS_SystemTimer(x)     ( (TickType) (((((uint32)(x)) * 80000) + 0) / 1) )     /* PRQA S 3453 */ /* MD_MSR_19.7 */
/*! Macro OS_TICKS2MS_SystemTimer was approximated with a deviation of 2.220446049250313E-10ppm. */
# define OS_TICKS2MS_SystemTimer(x)     ( (PhysicalTimeType) (((((uint32)(x)) * 1) + 40000) / 80000) )     /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! Macro OS_SEC2TICKS_SystemTimer was approximated with a deviation of 0.0ppm. */
# define OS_SEC2TICKS_SystemTimer(x)     ( (TickType) (((((uint32)(x)) * 80000000) + 0) / 1) )     /* PRQA S 3453 */ /* MD_MSR_19.7 */
/*! Macro OS_TICKS2SEC_SystemTimer was approximated with a deviation of 0.0ppm. */
# define OS_TICKS2SEC_SystemTimer(x)     ( (PhysicalTimeType) (((((uint32)(x)) * 1) + 40000000) / 80000000) )     /* PRQA S 3453 */ /* MD_MSR_19.7 */


/* Counter timing macros and constants: TpCounter_OsCore_CORE0 */
# define OSMAXALLOWEDVALUE_TpCounter_OsCore_CORE0     (1073741823UL) /* 0x3FFFFFFFUL */
# define OSMINCYCLE_TpCounter_OsCore_CORE0            (1UL)
# define OSTICKSPERBASE_TpCounter_OsCore_CORE0        (1UL)
# define OSTICKDURATION_TpCounter_OsCore_CORE0        (12UL)

/*! Macro OS_NS2TICKS_TpCounter_OsCore_CORE0 was approximated with a deviation of 0.0ppm. */
# define OS_NS2TICKS_TpCounter_OsCore_CORE0(x)     ( (TickType) (((((uint32)(x)) * 2) + 12) / 25) )     /* PRQA S 3453 */ /* MD_MSR_19.7 */
/*! Macro OS_TICKS2NS_TpCounter_OsCore_CORE0 was approximated with a deviation of 2.220446049250313E-10ppm. */
# define OS_TICKS2NS_TpCounter_OsCore_CORE0(x)     ( (PhysicalTimeType) (((((uint32)(x)) * 25) + 1) / 2) )     /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! Macro OS_US2TICKS_TpCounter_OsCore_CORE0 was approximated with a deviation of 0.0ppm. */
# define OS_US2TICKS_TpCounter_OsCore_CORE0(x)     ( (TickType) (((((uint32)(x)) * 80) + 0) / 1) )     /* PRQA S 3453 */ /* MD_MSR_19.7 */
/*! Macro OS_TICKS2US_TpCounter_OsCore_CORE0 was approximated with a deviation of 0.0ppm. */
# define OS_TICKS2US_TpCounter_OsCore_CORE0(x)     ( (PhysicalTimeType) (((((uint32)(x)) * 1) + 40) / 80) )     /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! Macro OS_MS2TICKS_TpCounter_OsCore_CORE0 was approximated with a deviation of 0.0ppm. */
# define OS_MS2TICKS_TpCounter_OsCore_CORE0(x)     ( (TickType) (((((uint32)(x)) * 80000) + 0) / 1) )     /* PRQA S 3453 */ /* MD_MSR_19.7 */
/*! Macro OS_TICKS2MS_TpCounter_OsCore_CORE0 was approximated with a deviation of 2.220446049250313E-10ppm. */
# define OS_TICKS2MS_TpCounter_OsCore_CORE0(x)     ( (PhysicalTimeType) (((((uint32)(x)) * 1) + 40000) / 80000) )     /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! Macro OS_SEC2TICKS_TpCounter_OsCore_CORE0 was approximated with a deviation of 0.0ppm. */
# define OS_SEC2TICKS_TpCounter_OsCore_CORE0(x)     ( (TickType) (((((uint32)(x)) * 80000000) + 0) / 1) )     /* PRQA S 3453 */ /* MD_MSR_19.7 */
/*! Macro OS_TICKS2SEC_TpCounter_OsCore_CORE0 was approximated with a deviation of 0.0ppm. */
# define OS_TICKS2SEC_TpCounter_OsCore_CORE0(x)     ( (PhysicalTimeType) (((((uint32)(x)) * 1) + 40000000) / 80000000) )     /* PRQA S 3453 */ /* MD_MSR_19.7 */








/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


#endif /* OS_HAL_CFG_H */

/**********************************************************************************************************************
 *  END OF FILE: Os_Hal_Cfg.h
 *********************************************************************************************************************/
