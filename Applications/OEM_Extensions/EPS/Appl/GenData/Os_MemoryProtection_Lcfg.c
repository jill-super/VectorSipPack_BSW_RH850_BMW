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
 *              File: Os_MemoryProtection_Lcfg.c
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

#define OS_MEMORYROTECTION_LCFG_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
#include "Std_Types.h"

/* Os module declarations */
#include "Os_MemoryProtection_Lcfg.h"
#include "Os_MemoryProtection.h"

/* Os kernel module dependencies */

/* Os hal dependencies */
#include "Os_Hal_MemoryProtection_Lcfg.h"


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

/*! Memory protection configuration data: OsCore_CORE0 */
CONST(Os_MpCoreConfigType, OS_CONST) OsCfg_Mp_OsCore_CORE0 =
{
  /* .HwConfig = */ &OsCfg_Hal_Mp_OsCore_CORE0
};

/*! Memory protection configuration data: OsApplication_ASIL */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_OsApplication_ASIL =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_ASIL,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_EmptyThread
};

/*! Memory protection configuration data: OsApplication_QM */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_OsApplication_QM =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_QM,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_EmptyThread
};

/*! Memory protection configuration data: SystemApplication_OsCore_CORE0 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_SystemApplication_OsCore_CORE0 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_SystemApplication_OsCore_CORE0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_EmptyThread
};

/*! Memory protection configuration data: CounterIsr_TpCounter_OsCore_CORE0 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_CounterIsr_TpCounter_OsCore_CORE0 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_SystemApplication_OsCore_CORE0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_CounterIsr_TpCounter_OsCore_CORE0
};

/*! Memory protection configuration data: Fr_IrqLine0 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_Fr_IrqLine0 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_SystemApplication_OsCore_CORE0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_Fr_IrqLine0
};

/*! Memory protection configuration data: Fr_IrqTimer0 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_Fr_IrqTimer0 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_SystemApplication_OsCore_CORE0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_Fr_IrqTimer0
};

/*! Memory protection configuration data: Os_TimerPitIsr */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_Os_TimerPitIsr =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_SystemApplication_OsCore_CORE0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_Os_TimerPitIsr
};

/*! Memory protection configuration data: WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_SystemApplication_OsCore_CORE0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR
};

/*! Memory protection configuration data: Default_Appl_Init_Task */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_Default_Appl_Init_Task =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_QM,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_Default_Appl_Init_Task
};

/*! Memory protection configuration data: Default_Appl_Task */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_Default_Appl_Task =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_QM,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_Default_Appl_Task
};

/*! Memory protection configuration data: Default_BAC_Appl_BMW_Task */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_Default_BAC_Appl_BMW_Task =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_QM,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_Default_BAC_Appl_BMW_Task
};

/*! Memory protection configuration data: Default_BSW_Sync_Task */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_Default_BSW_Sync_Task =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_ASIL,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_Default_BSW_Sync_Task
};

/*! Memory protection configuration data: Default_Background_Task */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_Default_Background_Task =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_ASIL,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_Default_Background_Task
};

/*! Memory protection configuration data: Default_Init_Task */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_Default_Init_Task =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_ASIL,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_Default_Init_Task
};

/*! Memory protection configuration data: Default_RTE_Mode_switch_Task */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_Default_RTE_Mode_switch_Task =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_QM,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_Default_RTE_Mode_switch_Task
};

/*! Memory protection configuration data: IdleTask_OsCore_CORE0 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_IdleTask_OsCore_CORE0 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_SystemApplication_OsCore_CORE0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_IdleTask_OsCore_CORE0
};

/*! Memory protection configuration data: OsTask_BSW_ASIL */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_OsTask_BSW_ASIL =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_ASIL,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_OsTask_BSW_ASIL
};

/*! Memory protection configuration data: OsTask_LowPrioNvm */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_OsTask_LowPrioNvm =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_SystemApplication_OsCore_CORE0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_OsTask_LowPrioNvm
};

#define OS_STOP_SEC_CORE0_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


#define OS_START_SEC_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! Memory protection configuration data: SystemMpu */
CONST(Os_MpSystemConfigType, OS_CONST) OsCfg_Mp_SystemMpu =
{
  /* .HwConfig = */ &OsCfg_Hal_Mp_SystemMpu
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
 *  END OF FILE: Os_MemoryProtection_Lcfg.c
 *********************************************************************************************************************/
