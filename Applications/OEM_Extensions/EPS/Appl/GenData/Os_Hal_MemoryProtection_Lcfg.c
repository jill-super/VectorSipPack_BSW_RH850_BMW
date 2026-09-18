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
 *              File: Os_Hal_MemoryProtection_Lcfg.c
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

#define OS_HAL_MEMORYPROTECTION_LCFG_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
#include "Std_Types.h"

/* Os module declarations */
#include "Os_Hal_MemoryProtection_Cfg.h"
#include "Os_Hal_MemoryProtection_Lcfg.h"
#include "Os_Hal_MemoryProtection.h"

/* Os kernel module dependencies */

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

/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL CONSTANT DATA
 *********************************************************************************************************************/

#define OS_START_SEC_CORE0_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! HAL memory protection configuration data: OsCore_CORE0 */
CONST(Os_Hal_MpCoreConfigType, OS_CONST) OsCfg_Hal_Mp_OsCore_CORE0 =
{
  /* MaxDynAppRegions    = 0 */
  /* MaxDynThreadRegions = 0 */

  /* Regions = */ (uint32)(OS_HAL_MPU_REGION_COUNT_CORE0-1),
  /* ASID    = */ (uint32)0x03FFUL,

  {
    /* MPU region 0: dynamic region for stack */
    /* start address = */ (uint32)0x0UL,
    /* end address   = */ (uint32)0x0UL,
    /* access rights = */ (uint32)0x0UL
  },
  {
    /* MPU region 1: static region {SUPERVISOR=[X, W, R], USER=[X, W, R]} */
    /* start address = */ (uint32)ram_start,                                                    /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
    /* end address   = */ (uint32)ram_end,                                                      /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
    /* access rights = */ (uint32)0x000000FFUL 
  }, 
  {
    /* MPU region 2: static region {SUPERVISOR=[X, W, R], USER=[X, W, R]} */
    /* start address = */ (uint32)0x0UL,                                                    
    /* end address   = */ (uint32)0x001FFFFFUL,                                                      
    /* access rights = */ (uint32)0x000000FFUL 
  }, 
  {
    /* MPU region 3: static region {SUPERVISOR=[X, W, R], USER=[X, W, R]} */
    /* start address = */ (uint32)0xFF000000UL,                                                    
    /* end address   = */ (uint32)0xFFFFFFFFUL,                                                      
    /* access rights = */ (uint32)0x000000FFUL 
  }, 
  {
    /* MPU region 4: static region {SUPERVISOR=[X, W, R], USER=[X, W, R]} */
    /* start address = */ (uint32)0x10020000UL,                                                    
    /* end address   = */ (uint32)0x10020844UL,                                                      
    /* access rights = */ (uint32)0x000000FFUL 
  }, 
  {
    /* MPU region 5: not used */
    (uint32)0x0UL,
    (uint32)0x0UL,
    (uint32)0x0UL
  }, 
  {
    /* MPU region 6: not used */
    (uint32)0x0UL,
    (uint32)0x0UL,
    (uint32)0x0UL
  }, 
  {
    /* MPU region 7: not used */
    (uint32)0x0UL,
    (uint32)0x0UL,
    (uint32)0x0UL
  }, 
  {
    /* MPU region 8: not used */
    (uint32)0x0UL,
    (uint32)0x0UL,
    (uint32)0x0UL
  }, 
  {
    /* MPU region 9: not used */
    (uint32)0x0UL,
    (uint32)0x0UL,
    (uint32)0x0UL
  }, 
  {
    /* MPU region 10: not used */
    (uint32)0x0UL,
    (uint32)0x0UL,
    (uint32)0x0UL
  }, 
  {
    /* MPU region 11: not used */
    (uint32)0x0UL,
    (uint32)0x0UL,
    (uint32)0x0UL
  }, 
  {
    /* MPU region 12: not used */
    (uint32)0x0UL,
    (uint32)0x0UL,
    (uint32)0x0UL
  }, 
  {
    /* MPU region 13: not used */
    (uint32)0x0UL,
    (uint32)0x0UL,
    (uint32)0x0UL
  }, 
  {
    /* MPU region 14: not used */
    (uint32)0x0UL,
    (uint32)0x0UL,
    (uint32)0x0UL
  }, 
  {
    /* MPU region 15: not used */
    (uint32)0x0UL,
    (uint32)0x0UL,
    (uint32)0x0UL
  }
};

/*! HAL memory protection configuration data: OsApplication_ASIL */
CONST(Os_Hal_MpAppConfigType, OS_CONST) OsCfg_Hal_Mp_OsApplication_ASIL =
{
  /* Regions = */ (uint32)0,
  /* ASID    = */ (uint32)0x000003FFUL,
} /* PRQA S 703 */ /* MD_Os_Hal_0703_OptimizeArray */;

/*! HAL memory protection configuration data: OsApplication_QM */
CONST(Os_Hal_MpAppConfigType, OS_CONST) OsCfg_Hal_Mp_OsApplication_QM =
{
  /* Regions = */ (uint32)0,
  /* ASID    = */ (uint32)0x000003FFUL,
} /* PRQA S 703 */ /* MD_Os_Hal_0703_OptimizeArray */;

/*! HAL memory protection configuration data: SystemApplication_OsCore_CORE0 */
CONST(Os_Hal_MpAppConfigType, OS_CONST) OsCfg_Hal_Mp_SystemApplication_OsCore_CORE0 =
{
  /* Regions = */ (uint32)0,
  /* ASID    = */ (uint32)0x000003FFUL,
} /* PRQA S 703 */ /* MD_Os_Hal_0703_OptimizeArray */;

/*! HAL memory protection configuration data: CounterIsr_TpCounter_OsCore_CORE0 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CounterIsr_TpCounter_OsCore_CORE0 =
{
  /* Regions = */ (uint32)0,  
  /* ASID    = */ (uint32)0x000003FFUL,
} /* PRQA S 703 */ /* MD_Os_Hal_0703_OptimizeArray */;

/*! HAL memory protection configuration data: Fr_IrqLine0 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Fr_IrqLine0 =
{
  /* Regions = */ (uint32)0,  
  /* ASID    = */ (uint32)0x000003FFUL,
} /* PRQA S 703 */ /* MD_Os_Hal_0703_OptimizeArray */;

/*! HAL memory protection configuration data: Fr_IrqTimer0 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Fr_IrqTimer0 =
{
  /* Regions = */ (uint32)0,  
  /* ASID    = */ (uint32)0x000003FFUL,
} /* PRQA S 703 */ /* MD_Os_Hal_0703_OptimizeArray */;

/*! HAL memory protection configuration data: Os_TimerPitIsr */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Os_TimerPitIsr =
{
  /* Regions = */ (uint32)0,  
  /* ASID    = */ (uint32)0x000003FFUL,
} /* PRQA S 703 */ /* MD_Os_Hal_0703_OptimizeArray */;

/*! HAL memory protection configuration data: WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR =
{
  /* Regions = */ (uint32)0,  
  /* ASID    = */ (uint32)0x000003FFUL,
} /* PRQA S 703 */ /* MD_Os_Hal_0703_OptimizeArray */;

/*! HAL memory protection configuration data: Default_Appl_Init_Task */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Default_Appl_Init_Task =
{
  /* Regions = */ (uint32)0,  
  /* ASID    = */ (uint32)0x000003FFUL,
} /* PRQA S 703 */ /* MD_Os_Hal_0703_OptimizeArray */;

/*! HAL memory protection configuration data: Default_Appl_Task */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Default_Appl_Task =
{
  /* Regions = */ (uint32)0,  
  /* ASID    = */ (uint32)0x000003FFUL,
} /* PRQA S 703 */ /* MD_Os_Hal_0703_OptimizeArray */;

/*! HAL memory protection configuration data: Default_BAC_Appl_BMW_Task */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Default_BAC_Appl_BMW_Task =
{
  /* Regions = */ (uint32)0,  
  /* ASID    = */ (uint32)0x000003FFUL,
} /* PRQA S 703 */ /* MD_Os_Hal_0703_OptimizeArray */;

/*! HAL memory protection configuration data: Default_BSW_Sync_Task */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Default_BSW_Sync_Task =
{
  /* Regions = */ (uint32)0,  
  /* ASID    = */ (uint32)0x000003FFUL,
} /* PRQA S 703 */ /* MD_Os_Hal_0703_OptimizeArray */;

/*! HAL memory protection configuration data: Default_Background_Task */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Default_Background_Task =
{
  /* Regions = */ (uint32)0,  
  /* ASID    = */ (uint32)0x000003FFUL,
} /* PRQA S 703 */ /* MD_Os_Hal_0703_OptimizeArray */;

/*! HAL memory protection configuration data: Default_Init_Task */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Default_Init_Task =
{
  /* Regions = */ (uint32)0,  
  /* ASID    = */ (uint32)0x000003FFUL,
} /* PRQA S 703 */ /* MD_Os_Hal_0703_OptimizeArray */;

/*! HAL memory protection configuration data: Default_RTE_Mode_switch_Task */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Default_RTE_Mode_switch_Task =
{
  /* Regions = */ (uint32)0,  
  /* ASID    = */ (uint32)0x000003FFUL,
} /* PRQA S 703 */ /* MD_Os_Hal_0703_OptimizeArray */;

/*! HAL memory protection configuration data: IdleTask_OsCore_CORE0 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_IdleTask_OsCore_CORE0 =
{
  /* Regions = */ (uint32)0,  
  /* ASID    = */ (uint32)0x000003FFUL,
} /* PRQA S 703 */ /* MD_Os_Hal_0703_OptimizeArray */;

/*! HAL memory protection configuration data: OsTask_BSW_ASIL */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_BSW_ASIL =
{
  /* Regions = */ (uint32)0,  
  /* ASID    = */ (uint32)0x000003FFUL,
} /* PRQA S 703 */ /* MD_Os_Hal_0703_OptimizeArray */;

/*! HAL memory protection configuration data: OsTask_LowPrioNvm */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_LowPrioNvm =
{
  /* Regions = */ (uint32)0,  
  /* ASID    = */ (uint32)0x000003FFUL,
} /* PRQA S 703 */ /* MD_Os_Hal_0703_OptimizeArray */;

#define OS_STOP_SEC_CORE0_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


#define OS_START_SEC_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! HAL memory protection configuration data: SystemMpu */
CONST(Os_Hal_MpSystemConfigType, OS_CONST) OsCfg_Hal_Mp_SystemMpu =
{  
  0 /* not used because no system MPU */
};

/*! HAL memory protection configuration data: EmptyThread */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_EmptyThread =
{
  /* Regions = */ (uint32)0,  
  /* ASID    = */ (uint32)0x000003FFUL,
} /* PRQA S 703 */ /* MD_Os_Hal_0703_OptimizeArray */;

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
 *  END OF FILE: Os_Hal_MemoryProtection_Lcfg.c
 *********************************************************************************************************************/
