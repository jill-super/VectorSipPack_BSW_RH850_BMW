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
 *              File: Os_Counter_Lcfg.c
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

#define OS_COUNTER_LCFG_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
#include "Std_Types.h"

/* Os module declarations */
#include "Os_Counter_Cfg.h"
#include "Os_Counter_Lcfg.h"
#include "Os_Counter.h"

/* Os kernel module dependencies */
#include "Os_Application_Lcfg.h"
#include "Os_Cfg.h"
#include "Os_Common.h"
#include "Os_Core_Lcfg.h"
#include "Os_PriorityQueue.h"
#include "Os_Timer.h"

/* Os hal dependencies */
#include "Os_Hal_Cfg.h"
#include "Os_Hal_Timer_Lcfg.h"


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

/*! Dynamic counter data: SystemTimer */
OS_LOCAL VAR(Os_TimerHrtType, OS_VAR_NOINIT) OsCfg_Counter_SystemTimer_Dyn;
OS_LOCAL VAR(Os_PriorityQueueType, OS_VAR_NOINIT) OsCfg_Counter_SystemTimer_JobQueue_Dyn;
OS_LOCAL VAR(Os_PriorityQueueNodeType, OS_VAR_NOINIT)
  OsCfg_Counter_SystemTimer_JobQueueNodes_Dyn[OS_CFG_NUM_COUNTER_SYSTEMTIMER_JOBS + 1];

/*! Dynamic counter data: TpCounter_OsCore_CORE0 */
OS_LOCAL VAR(Os_TimerHrtType, OS_VAR_NOINIT) OsCfg_Counter_TpCounter_OsCore_CORE0_Dyn;
OS_LOCAL VAR(Os_PriorityQueueType, OS_VAR_NOINIT) OsCfg_Counter_TpCounter_OsCore_CORE0_JobQueue_Dyn;
OS_LOCAL VAR(Os_PriorityQueueNodeType, OS_VAR_NOINIT)
  OsCfg_Counter_TpCounter_OsCore_CORE0_JobQueueNodes_Dyn[OS_CFG_NUM_COUNTER_TPCOUNTER_OSCORE_CORE0_JOBS + 1];

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

/*! Counter configuration data: SystemTimer */
CONST(Os_TimerHrtConfigType, OS_CONST) OsCfg_Counter_SystemTimer =
{
  /* .Counter  = */
  {
    /* .Characteristics       = */
    {
      /* .MaxAllowedValue      = */ OSMAXALLOWEDVALUE_SystemTimer,
      /* .MaxCountingValue     = */ OS_TIMERHRT_GETMAXCOUNTINGVALUE(OSMAXALLOWEDVALUE_SystemTimer),
      /* .MaxDifferentialValue = */ OS_TIMERHRT_GETMAXDIFFERENTIALVALUE(OSMAXALLOWEDVALUE_SystemTimer),
      /* .MinCycle             = */ OSMINCYCLE_SystemTimer,
      /* .TicksPerBase         = */ OSTICKSPERBASE_SystemTimer
    },
    /* .JobQueue              = */
    {
      /* .Queue     = */ OsCfg_Counter_SystemTimer_JobQueueNodes_Dyn,
      /* .Dyn       = */ &OsCfg_Counter_SystemTimer_JobQueue_Dyn,
      /* .QueueSize = */ OS_CFG_NUM_COUNTER_SYSTEMTIMER_JOBS
    },
    /* .DriverType            = */ OS_TIMERTYPE_HIGH_RESOLUTION,
    /* .Core                  = */ &OsCfg_Core_OsCore_CORE0,
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_QM,
    /* .AccessingApplications = */ (OS_APPID2MASK(OsApplication_QM)
        | OS_APPID2MASK(SystemApplication_OsCore_CORE0))
  },
  /* .Dyn      = */ &OsCfg_Counter_SystemTimer_Dyn,
  /* .HwConfig = */ &OsCfg_Hal_TimerFrt_SystemTimer
};

/*! Counter configuration data: TpCounter_OsCore_CORE0 */
CONST(Os_TimerHrtConfigType, OS_CONST) OsCfg_Counter_TpCounter_OsCore_CORE0 =
{
  /* .Counter  = */
  {
    /* .Characteristics       = */
    {
      /* .MaxAllowedValue      = */ OSMAXALLOWEDVALUE_TpCounter_OsCore_CORE0,
      /* .MaxCountingValue     = */ OS_TIMERHRT_GETMAXCOUNTINGVALUE(OSMAXALLOWEDVALUE_TpCounter_OsCore_CORE0),
      /* .MaxDifferentialValue = */ OS_TIMERHRT_GETMAXDIFFERENTIALVALUE(OSMAXALLOWEDVALUE_TpCounter_OsCore_CORE0),
      /* .MinCycle             = */ OSMINCYCLE_TpCounter_OsCore_CORE0,
      /* .TicksPerBase         = */ OSTICKSPERBASE_TpCounter_OsCore_CORE0
    },
    /* .JobQueue              = */
    {
      /* .Queue     = */ OsCfg_Counter_TpCounter_OsCore_CORE0_JobQueueNodes_Dyn,
      /* .Dyn       = */ &OsCfg_Counter_TpCounter_OsCore_CORE0_JobQueue_Dyn,
      /* .QueueSize = */ OS_CFG_NUM_COUNTER_TPCOUNTER_OSCORE_CORE0_JOBS
    },
    /* .DriverType            = */ OS_TIMERTYPE_HIGH_RESOLUTION,
    /* .Core                  = */ &OsCfg_Core_OsCore_CORE0,
    /* .OwnerApplication      = */ &OsCfg_App_SystemApplication_OsCore_CORE0,
    /* .AccessingApplications = */ OS_APPID2MASK(SystemApplication_OsCore_CORE0)
  },
  /* .Dyn      = */ &OsCfg_Counter_TpCounter_OsCore_CORE0_Dyn,
  /* .HwConfig = */ &OsCfg_Hal_TimerFrt_TpCounter_OsCore_CORE0
};

#define OS_STOP_SEC_CORE0_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


#define OS_START_SEC_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! Object reference table for counters. */
CONSTP2CONST(Os_CounterConfigType, OS_CONST, OS_CONST) OsCfg_CounterRefs[OS_COUNTERID_COUNT + 1] =
{
  OS_COUNTER_CASTCONFIG_TIMERHRT_2_COUNTER(OsCfg_Counter_SystemTimer),
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
 *  END OF FILE: Os_Counter_Lcfg.c
 *********************************************************************************************************************/
