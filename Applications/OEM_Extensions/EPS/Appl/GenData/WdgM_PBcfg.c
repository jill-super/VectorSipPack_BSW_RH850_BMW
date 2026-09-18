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
 *            Module: WdgM
 *           Program: MSR BAC 4.x (MSR_Bmw_SLP4)
 *          Customer: Nexteer Automotive Corporation
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: Renesas RH850 P1M R7F701363EAFP
 *    License Scope : The usage is restricted to CBD1700369_D04
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: WdgM_PBcfg.c
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

#define WDGM_PBCFG_C


/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "WdgM.h"
#include "Rte_WdgM_OsApplication_ASIL.h" 


/**********************************************************************************************************************
 *  VERSION INFORMATION AND CHECK
 *********************************************************************************************************************/

#define WDGM_PBCFG_C_MAJOR_VERSION (2u) 
#define WDGM_PBCFG_C_MINOR_VERSION (1u) 
#define WDGM_PBCFG_C_PATCH_VERSION (1u) 

/* Check the version of WdgM header file */
#if ( (WDGM_SW_MAJOR_VERSION != (5u)) \
   || (WDGM_SW_MINOR_VERSION != (2u)) )
# error "Version numbers of WdgM_PBcfg.c and WdgM.h are inconsistent!"
#endif

/* Check the version of WdgM PBCfg header file */
#if ( (WDGM_PBCFG_MAJOR_VERSION != WDGM_PBCFG_C_MAJOR_VERSION) \
   || (WDGM_PBCFG_MINOR_VERSION != WDGM_PBCFG_C_MINOR_VERSION) \
   || (WDGM_PBCFG_PATCH_VERSION != WDGM_PBCFG_C_PATCH_VERSION) )
# error "Version numbers of WdgM_PBcfg.c and WdgM_PBcfg.h are inconsistent!"
#endif

#if !defined (WDGM_LOCAL) /* COV_WDGM_COMPATIBILITY */
# define WDGM_LOCAL static
#endif

#define WDGM_GLOBAL_SHARED_START_SEC_VAR_NOINIT_UNSPECIFIED 
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */ 
/* RAM section for global shared data */ 
WDGM_LOCAL VAR(WdgM_DataGSType, WDGM_VAR_NOINIT) StatusGS_core0; 
WDGM_LOCAL VAR(WdgM_EntityGSType, WDGM_VAR_NOINIT) EntityGS [WDGM_NR_OF_ENTITIES]; 
#define WDGM_GLOBAL_SHARED_STOP_SEC_VAR_NOINIT_UNSPECIFIED 
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */ 


#define WDGM_SE0_START_SEC_VAR_NOINIT_UNSPECIFIED_CORE0_PRIVATE 
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */ 
/* RAM section for supervisedEntity 'WdgMSupervisedEntity_StartApplication' */ 
WDGM_LOCAL VAR(WdgM_EntityStatusLType, WDGM_VAR_NOINIT) EntityStatusL_0; 
#define WDGM_SE0_STOP_SEC_VAR_NOINIT_UNSPECIFIED_CORE0_PRIVATE 
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */ 
 
#define WDGM_SE0_START_SEC_VAR_NOINIT_32BIT_CORE0_PRIVATE 
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */ 
/* Local Alive Counters for checkpoint 'WdgMCheckpoint_StartApplication' in 'WdgMSupervisedEntity_StartApplication' */ 
WDGM_LOCAL VAR(WdgM_AliveCounterLType, WDGM_VAR_NOINIT) Alive_CounterL_0; 
#define WDGM_SE0_STOP_SEC_VAR_NOINIT_32BIT_CORE0_PRIVATE 
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */ 
 
 
#define WDGM_GLOBAL_START_SEC_VAR_NOINIT_UNSPECIFIED_CORE0_PRIVATE 
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */ 
 
/* Global Status for Supervised Entities */ 
WDGM_LOCAL VAR(WdgM_EntityStatusGType, WDGM_VAR_NOINIT) EntityStatusG_0; 
 
/* Global Alive Counters for checkpoint 'WdgMCheckpoint_StartApplication' in supervised entity 'WdgMSupervisedEntity_StartApplication' */ 
WDGM_LOCAL VAR(WdgM_AliveCounterGType, WDGM_VAR_NOINIT) Alive_CounterG_0; 
 
/* RAM section for Global Status */ 
WDGM_LOCAL VAR(WdgM_DataGType, WDGM_VAR_NOINIT) StatusG_core0; 
 
/* Global variables */ 
WDGM_LOCAL VAR(WdgM_GlobalVariablesType, WDGM_VAR_NOINIT) GlobalVariables_core0; 
 
#define WDGM_GLOBAL_STOP_SEC_VAR_NOINIT_UNSPECIFIED_CORE0_PRIVATE 
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */ 


#define WDGM_START_SEC_CONST_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



WDGM_LOCAL CONST(WdgM_CheckPointType, WDGM_CONST) WdgMCheckPoint[WDGM_NR_OF_CHECKPOINTS] =
{
  {
    WdgMConf_WdgMCheckpoint_WdgMCheckpoint_StartApplication /*  WdgMCheckpointId  */ , 
    FALSE /*  WdgMIsEndCheckpoint  */ , 
    FALSE /*  WdgMIsEndCheckpointGlobal  */ , 
    10u /*  WdgMExpectedAliveIndications  */ , 
    9u /*  WdgMMinMargin  */ , 
    100u /*  WdgMMaxMargin  */ , 
    10u /*  WdgMSupervisionReferenceCycle  */ , 
    &Alive_CounterL_0 /*  WdgMAliveLRef  */ , 
    &Alive_CounterG_0 /*  WdgMAliveGRef  */ , 
    FALSE /*  WdgMDeadlineMonitoring  */ , 
    0u /*  WdgMOutgoingDeadlineMax  */ , 
    0u /*  NrOfLocalTransitions  */ , 
    NULL_PTR /*  WdgMLocalTransitionRef  */ , 
    0u /*  NrOfGlobalTransitions  */ , 
    NULL_PTR /*  WdgMGlobalTransitionsRef  */ , 
    FALSE /*  WdgMStartsAGlobalTransition  */ , 
    0u /*  NrOfStartedGlobalTransitions  */ , 
    NULL_PTR /*  WdgMStartedGlobalTransitionIds  */ 
  } /*  [0]  */ 
};


WDGM_LOCAL CONST(WdgM_SupervisedEntityType, WDGM_CONST) WdgMSupervisedEntity[WDGM_NR_OF_ENTITIES] =
{
  {
    WdgMConf_WdgMSupervisedEntity_WdgMSupervisedEntity_StartApplication /*  WdgMSupervisedEntity  */ , 
    FALSE /*  WdgMEnableEntityDeactivation  */ , 
    WdgMConf_WdgMCheckpoint_WdgMCheckpoint_StartApplication /*  WdgMCheckpointLocInitialId  */ , 
    1u /*  NrOfCheckpoints  */ , 
    &WdgMCheckPoint[0] /*  WdgMCheckpointRef  */ , 
    WDGM_LOCAL_STATUS_OK /*  WdgMInitialStatus  */ , 
    0u /*  WdgMFailedSupervisionRefCycleTol  */ , 
    0u /*  WdgMFailedDeadlineRefCycleTol  */ , 
    0u /*  WdgMDeadlineReferenceCycle  */ , 
    0u /*  WdgMFailedProgramFlowRefCycleTol  */ , 
    0u /*  WdgMProgramFlowReferenceCycle  */ , 
    FALSE /*  WdgMProgramFlowMonitoring  */ , 
    WDGM_INVALID_OSAPPLICATION /*  OSApplication  */ , 
    NULL_PTR /*  WdgM_LocalStateChangeCbk  */ , 
    Rte_Switch_mode_WdgMSupervisedEntity_StartApplication_currentMode /*  WdgM_StatusReportToRte  */ , 
    &EntityStatusL_0 /*  EntityStatusLRef  */ , 
    &EntityStatusG_0 /*  EntityStatusGRef  */ , 
    0u /*  WdgMEntityCoreId  */ 
  } /*  [0]  */ 
};


WDGM_LOCAL CONST(WdgM_TriggerModeType, WDGM_CONST) WdgMTriggerMode_core0[WDGM_NR_OF_WATCHDOGS_CORE0 * WDGM_NR_OF_TRIGGER_MODES_CORE0] = 
{
  {
    10u /*  WdgMTriggerWindowStart  */ , 
    1u /*  WdgMTicksPerSecond[Hz]=100 , WdgMTriggerWindowStartTicks  */ , 
    5000u /*   (condition value)  WdgMTriggerTimeout  */ , 
    500u /*  WdgMTicksPerSecond[Hz]=100 , WdgMTriggerTimeoutTicks  */ , 
    WDGIF_OFF_MODE /*  WdgMWatchdogMode  */ , 
    0u /*  WdgMDeviceIndex  */ 
  } /*  WdgMTriggerModeId 0  */ 
}; 
 
WDGM_LOCAL CONST(WdgM_WatchdogDeviceType, WDGM_CONST) WdgMWatchdogDevice0[WDGM_NR_OF_WATCHDOGS_CORE0] = 
{
  {
    &WdgMTriggerMode_core0[0] /*  WdgMTriggerModeRef  */ 
  } /*  [0]  */ 
}; 


WDGM_LOCAL CONST(WdgM_CallersType, WDGM_CONST) WdgMAllowedCallers[WDGM_NR_OF_ALLOWED_CALLERS] =
{
  {
    0u /*  WdgMAllowedCaller  */ 
  } /*  [0]  */ 
};


CONST(WdgM_ConfigType, WDGM_CONST) WdgMConfig_Mode0_core0 = 
{
  5u /*  WdgMConfigMajorVersion  */ , 
  2u /*  WdgMConfigMinorVersion  */ , 
  0u /*  WdgMConfigId  */ , 
  0u /*  WdgMInitialTriggerModeId  */ , 
  10u /*  WdgMExpiredSupervisionCycleTol  */ , 
  WDGM_INVALID_SE_ID /*  WdgMGlobInitialEntityId  */ , 
  WDGM_INVALID_CP_ID /*  WdgMGlobInitialCheckpointId  */ , 
  WDGM_NR_OF_GLOBAL_TRANSITIONS /*  NrOfGlobalTransitions  */ , 
  NULL_PTR /*  WdgMGlobalTransitions  */ , 
  WDGM_NR_OF_WATCHDOGS_CORE0 /*  NrOfWatchdogDevices  */ , 
  WDGM_NR_OF_TRIGGER_MODES_CORE0 /*  NrOfTriggerModes  */ , 
  WdgMWatchdogDevice0 /*  WdgMWatchdogDeviceRef  */ , 
  WDGM_NR_OF_ALLOWED_CALLERS /*  NrOfAllowedCallers  */ , 
  WdgMAllowedCallers /*  WdgMCallersRef  */ , 
  WDGM_NR_OF_ENTITIES /*  NrOfSupervisedEntities  */ , 
  WdgMSupervisedEntity /*  WdgMSupervisedEntityRef  */ , 
  &StatusG_core0 /*  DataGRef  */ , 
  &StatusGS_core0 /*  DataGSRef  */ , 
  EntityGS /*  EntityGSRef  */ , 
  NULL_PTR /*  GlobalTransitionFlagsGSRef  */ , 
  NULL_PTR /*  WdgM_GlobalStateChangeCbk  */ , 
  Rte_Switch_globalmode_Core0_currentMode /*  WdgM_StatusReportToRte  */ , 
  &GlobalVariables_core0 /*  WdgMGlobalVariables  */ , 
  0u /*  WdgMModeCoreAssignment  */ , 
  0 /*  WdgMOsCounter  */ , 
  12u /*  WdgMConfigChecksum  */ 
}; 
 

#define WDGM_STOP_SEC_CONST_UNSPECIFIED 
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *  END OF FILE: WdgM_PBcfg.c
 *********************************************************************************************************************/

