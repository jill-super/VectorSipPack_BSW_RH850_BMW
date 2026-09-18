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
 *              File: Os_Application_Cfg.h
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

#if !defined (OS_APPLICATION_CFG_H)                                                  /* PRQA S 0883 */ /* MD_Os_0883 */
# define OS_APPLICATION_CFG_H

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
# include "Std_Types.h"


/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/* Number of application objects: OsApplication_ASIL */
# define OS_CFG_NUM_APP_OSAPPLICATION_ASIL_ALARMS             (5UL)
# define OS_CFG_NUM_APP_OSAPPLICATION_ASIL_COUNTERS           (0UL)
# define OS_CFG_NUM_APP_OSAPPLICATION_ASIL_HOOKS              (0UL)
# define OS_CFG_NUM_APP_OSAPPLICATION_ASIL_ISRS               (0UL)
# define OS_CFG_NUM_APP_OSAPPLICATION_ASIL_CAT1ISRS           (0UL)
# define OS_CFG_NUM_APP_OSAPPLICATION_ASIL_SCHTS              (0UL)
# define OS_CFG_NUM_APP_OSAPPLICATION_ASIL_TASKS              (4UL)
# define OS_CFG_NUM_APP_OSAPPLICATION_ASIL_SERVICES           (0UL)

/* Number of application objects: OsApplication_QM */
# define OS_CFG_NUM_APP_OSAPPLICATION_QM_ALARMS             (4UL)
# define OS_CFG_NUM_APP_OSAPPLICATION_QM_COUNTERS           (1UL)
# define OS_CFG_NUM_APP_OSAPPLICATION_QM_HOOKS              (0UL)
# define OS_CFG_NUM_APP_OSAPPLICATION_QM_ISRS               (0UL)
# define OS_CFG_NUM_APP_OSAPPLICATION_QM_CAT1ISRS           (0UL)
# define OS_CFG_NUM_APP_OSAPPLICATION_QM_SCHTS              (0UL)
# define OS_CFG_NUM_APP_OSAPPLICATION_QM_TASKS              (4UL)
# define OS_CFG_NUM_APP_OSAPPLICATION_QM_SERVICES           (0UL)

/* Number of application objects: SystemApplication_OsCore_CORE0 */
# define OS_CFG_NUM_APP_SYSTEMAPPLICATION_OSCORE_CORE0_ALARMS             (2UL)
# define OS_CFG_NUM_APP_SYSTEMAPPLICATION_OSCORE_CORE0_COUNTERS           (0UL)
# define OS_CFG_NUM_APP_SYSTEMAPPLICATION_OSCORE_CORE0_HOOKS              (0UL)
# define OS_CFG_NUM_APP_SYSTEMAPPLICATION_OSCORE_CORE0_ISRS               (5UL)
# define OS_CFG_NUM_APP_SYSTEMAPPLICATION_OSCORE_CORE0_CAT1ISRS           (0UL)
# define OS_CFG_NUM_APP_SYSTEMAPPLICATION_OSCORE_CORE0_SCHTS              (0UL)
# define OS_CFG_NUM_APP_SYSTEMAPPLICATION_OSCORE_CORE0_TASKS              (2UL)
# define OS_CFG_NUM_APP_SYSTEMAPPLICATION_OSCORE_CORE0_SERVICES           (0UL)


/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


#endif /* OS_APPLICATION_CFG_H */

/**********************************************************************************************************************
 *  END OF FILE: Os_Application_Cfg.h
 *********************************************************************************************************************/
