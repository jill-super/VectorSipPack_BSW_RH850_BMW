/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  BMW_Application_Main.c
 *        Config:  EPS.dpa
 *     SW-C Type:  BMW_Application_Main
 *
 *     Generator:  MICROSAR RTE Generator Version 4.16.0
 *                 RTE Core Version 1.16.0
 *       License:  Unlimited license CBD1700369 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <BMW_Application_Main>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779 */
/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */
/* PRQA S 0614 EOF */ /* MD_Rte_TestCode */

/* PRQA S 3109 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3112 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3197 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3198 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3199 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3201 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3203 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3205 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3206 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3218 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3229 EOF */ /* MD_Rte_TestCode */
/* PRQA S 2002 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3334 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3417 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3426 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3453 EOF */ /* MD_Rte_TestCode */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_BMW_Application_Main.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_BMW_Application_Main.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "string.h"

static void BMW_Application_Main_TestDefines(void);


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * Used AUTOSAR Data Types
 *
 **********************************************************************************************************************
 *
 * Primitive Types:
 * ================
 * uint32: Integer in interval [0...4294967295] (standard type)
 *
 * Enumeration Types:
 * ==================
 * BMW_Application_Reset_IRV: Enumeration of integer in interval [0...255] with enumerators
 *   BMW_APPLICATION_RESET_HARD (10U)
 *   BMW_APPLICATION_RESET_PROGRAMMING (20U)
 *   BMW_APPLICATION_RESET_INIT (255U)
 * Bac4_ApplicationStateType: Enumeration of integer in interval [0...255] with enumerators
 *   STARTUP (0U)
 *   RUN (1U)
 *   POST_RUN (2U)
 *   WAKEUP (3U)
 *   SHUTDOWN (4U)
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint32 *Rte_Pim_PerInstanceMemory_Xcp(void)
 *
 *********************************************************************************************************************/


#define BMW_Application_Main_START_SEC_CODE
#include "BMW_Application_Main_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Dcm_BAC4_EcuReset_Execute
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on entering of Mode <EXECUTE> of ModeDeclarationGroupPrototype <DcmEcuReset> of PortPrototype <DcmEcuReset>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   uint8 Rte_Mode_DcmEcuReset_DcmEcuReset(void)
 *   Modes of Rte_ModeType_DcmEcuReset:
 *   - RTE_MODE_DcmEcuReset_EXECUTE
 *   - RTE_MODE_DcmEcuReset_HARD
 *   - RTE_MODE_DcmEcuReset_JUMPTOBOOTLOADER
 *   - RTE_MODE_DcmEcuReset_JUMPTOSYSSUPPLIERBOOTLOADER
 *   - RTE_MODE_DcmEcuReset_KEYONOFF
 *   - RTE_MODE_DcmEcuReset_NONE
 *   - RTE_MODE_DcmEcuReset_SOFT
 *   - RTE_TRANSITION_DcmEcuReset
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   BMW_Application_Reset_IRV Rte_IrvRead_Dcm_BAC4_EcuReset_Execute_InterRunnableVariable(void)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Dcm_BAC4_EcuReset_Execute_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, BMW_Application_Main_CODE) Dcm_BAC4_EcuReset_Execute(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Dcm_BAC4_EcuReset_Execute
 *********************************************************************************************************************/

  uint32 PimPerInstanceMemory_Xcp;

  Rte_ModeType_DcmEcuReset DcmEcuReset_DcmEcuReset;

  BMW_Application_Reset_IRV Dcm_BAC4_EcuReset_Execute_InterRunnableVariable;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  PimPerInstanceMemory_Xcp = *TSC_BMW_Application_Main_Rte_Pim_PerInstanceMemory_Xcp();
  *TSC_BMW_Application_Main_Rte_Pim_PerInstanceMemory_Xcp() = PimPerInstanceMemory_Xcp;

  DcmEcuReset_DcmEcuReset = TSC_BMW_Application_Main_Rte_Mode_DcmEcuReset_DcmEcuReset();

  Dcm_BAC4_EcuReset_Execute_InterRunnableVariable = TSC_BMW_Application_Main_Rte_IrvRead_Dcm_BAC4_EcuReset_Execute_InterRunnableVariable();

  BMW_Application_Main_TestDefines();


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Dcm_BAC4_EcuReset_Hard
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on entering of Mode <HARD> of ModeDeclarationGroupPrototype <DcmEcuReset> of PortPrototype <DcmEcuReset>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   uint8 Rte_Mode_DcmEcuReset_DcmEcuReset(void)
 *   Modes of Rte_ModeType_DcmEcuReset:
 *   - RTE_MODE_DcmEcuReset_EXECUTE
 *   - RTE_MODE_DcmEcuReset_HARD
 *   - RTE_MODE_DcmEcuReset_JUMPTOBOOTLOADER
 *   - RTE_MODE_DcmEcuReset_JUMPTOSYSSUPPLIERBOOTLOADER
 *   - RTE_MODE_DcmEcuReset_KEYONOFF
 *   - RTE_MODE_DcmEcuReset_NONE
 *   - RTE_MODE_DcmEcuReset_SOFT
 *   - RTE_TRANSITION_DcmEcuReset
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_Dcm_BAC4_EcuReset_Hard_InterRunnableVariable(BMW_Application_Reset_IRV data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Dcm_BAC4_EcuReset_Hard_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, BMW_Application_Main_CODE) Dcm_BAC4_EcuReset_Hard(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Dcm_BAC4_EcuReset_Hard
 *********************************************************************************************************************/

  uint32 PimPerInstanceMemory_Xcp;

  Rte_ModeType_DcmEcuReset DcmEcuReset_DcmEcuReset;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  PimPerInstanceMemory_Xcp = *TSC_BMW_Application_Main_Rte_Pim_PerInstanceMemory_Xcp();
  *TSC_BMW_Application_Main_Rte_Pim_PerInstanceMemory_Xcp() = PimPerInstanceMemory_Xcp;

  DcmEcuReset_DcmEcuReset = TSC_BMW_Application_Main_Rte_Mode_DcmEcuReset_DcmEcuReset();

  TSC_BMW_Application_Main_Rte_IrvWrite_Dcm_BAC4_EcuReset_Hard_InterRunnableVariable(0U);


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Dcm_BAC4_Jump2Boot
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on entering of Mode <JUMPTOBOOTLOADER> of ModeDeclarationGroupPrototype <DcmEcuReset> of PortPrototype <DcmEcuReset>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   uint8 Rte_Mode_DcmEcuReset_DcmEcuReset(void)
 *   Modes of Rte_ModeType_DcmEcuReset:
 *   - RTE_MODE_DcmEcuReset_EXECUTE
 *   - RTE_MODE_DcmEcuReset_HARD
 *   - RTE_MODE_DcmEcuReset_JUMPTOBOOTLOADER
 *   - RTE_MODE_DcmEcuReset_JUMPTOSYSSUPPLIERBOOTLOADER
 *   - RTE_MODE_DcmEcuReset_KEYONOFF
 *   - RTE_MODE_DcmEcuReset_NONE
 *   - RTE_MODE_DcmEcuReset_SOFT
 *   - RTE_TRANSITION_DcmEcuReset
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_Dcm_BAC4_Jump2Boot_InterRunnableVariable(BMW_Application_Reset_IRV data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Dcm_BAC4_Jump2Boot_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, BMW_Application_Main_CODE) Dcm_BAC4_Jump2Boot(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Dcm_BAC4_Jump2Boot
 *********************************************************************************************************************/

  uint32 PimPerInstanceMemory_Xcp;

  Rte_ModeType_DcmEcuReset DcmEcuReset_DcmEcuReset;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  PimPerInstanceMemory_Xcp = *TSC_BMW_Application_Main_Rte_Pim_PerInstanceMemory_Xcp();
  *TSC_BMW_Application_Main_Rte_Pim_PerInstanceMemory_Xcp() = PimPerInstanceMemory_Xcp;

  DcmEcuReset_DcmEcuReset = TSC_BMW_Application_Main_Rte_Mode_DcmEcuReset_DcmEcuReset();

  TSC_BMW_Application_Main_Rte_IrvWrite_Dcm_BAC4_Jump2Boot_InterRunnableVariable(0U);


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Dcm_BAC4_RapidShutdownDisable
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on entering of Mode <DISABLE_RAPIDPOWERSHUTDOWN> of ModeDeclarationGroupPrototype <DcmModeRapidPowerShutDown> of PortPrototype <DcmModeRapidPowerShutDown>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   uint8 Rte_Mode_DcmModeRapidPowerShutDown_DcmModeRapidPowerShutDown(void)
 *   Modes of Rte_ModeType_DcmModeRapidPowerShutDown:
 *   - RTE_MODE_DcmModeRapidPowerShutDown_DISABLE_RAPIDPOWERSHUTDOWN
 *   - RTE_MODE_DcmModeRapidPowerShutDown_ENABLE_RAPIDPOWERSHUTDOWN
 *   - RTE_TRANSITION_DcmModeRapidPowerShutDown
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Dcm_BAC4_RapidShutdownDisable_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, BMW_Application_Main_CODE) Dcm_BAC4_RapidShutdownDisable(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Dcm_BAC4_RapidShutdownDisable
 *********************************************************************************************************************/

  uint32 PimPerInstanceMemory_Xcp;

  Rte_ModeType_DcmModeRapidPowerShutDown DcmModeRapidPowerShutDown_DcmModeRapidPowerShutDown;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  PimPerInstanceMemory_Xcp = *TSC_BMW_Application_Main_Rte_Pim_PerInstanceMemory_Xcp();
  *TSC_BMW_Application_Main_Rte_Pim_PerInstanceMemory_Xcp() = PimPerInstanceMemory_Xcp;

  DcmModeRapidPowerShutDown_DcmModeRapidPowerShutDown = TSC_BMW_Application_Main_Rte_Mode_DcmModeRapidPowerShutDown_DcmModeRapidPowerShutDown();


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Dcm_BAC4_RapidShutdownEnable
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on entering of Mode <ENABLE_RAPIDPOWERSHUTDOWN> of ModeDeclarationGroupPrototype <DcmModeRapidPowerShutDown> of PortPrototype <DcmModeRapidPowerShutDown>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   uint8 Rte_Mode_DcmModeRapidPowerShutDown_DcmModeRapidPowerShutDown(void)
 *   Modes of Rte_ModeType_DcmModeRapidPowerShutDown:
 *   - RTE_MODE_DcmModeRapidPowerShutDown_DISABLE_RAPIDPOWERSHUTDOWN
 *   - RTE_MODE_DcmModeRapidPowerShutDown_ENABLE_RAPIDPOWERSHUTDOWN
 *   - RTE_TRANSITION_DcmModeRapidPowerShutDown
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Dcm_BAC4_RapidShutdownEnable_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, BMW_Application_Main_CODE) Dcm_BAC4_RapidShutdownEnable(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Dcm_BAC4_RapidShutdownEnable
 *********************************************************************************************************************/

  uint32 PimPerInstanceMemory_Xcp;

  Rte_ModeType_DcmModeRapidPowerShutDown DcmModeRapidPowerShutDown_DcmModeRapidPowerShutDown;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  PimPerInstanceMemory_Xcp = *TSC_BMW_Application_Main_Rte_Pim_PerInstanceMemory_Xcp();
  *TSC_BMW_Application_Main_Rte_Pim_PerInstanceMemory_Xcp() = PimPerInstanceMemory_Xcp;

  DcmModeRapidPowerShutDown_DcmModeRapidPowerShutDown = TSC_BMW_Application_Main_Rte_Mode_DcmModeRapidPowerShutDown_DcmModeRapidPowerShutDown();


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Xcp_Event_Runnable
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Xcp_Event_Runnable_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, BMW_Application_Main_CODE) Xcp_Event_Runnable(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Xcp_Event_Runnable
 *********************************************************************************************************************/

  uint32 PimPerInstanceMemory_Xcp;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  PimPerInstanceMemory_Xcp = *TSC_BMW_Application_Main_Rte_Pim_PerInstanceMemory_Xcp();
  *TSC_BMW_Application_Main_Rte_Pim_PerInstanceMemory_Xcp() = PimPerInstanceMemory_Xcp;


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define BMW_Application_Main_STOP_SEC_CODE
#include "BMW_Application_Main_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

static void BMW_Application_Main_TestDefines(void)
{
  /* Enumeration Data Types */

  BMW_Application_Reset_IRV Test_BMW_Application_Reset_IRV_V_1 = BMW_APPLICATION_RESET_HARD;
  BMW_Application_Reset_IRV Test_BMW_Application_Reset_IRV_V_2 = BMW_APPLICATION_RESET_PROGRAMMING;
  BMW_Application_Reset_IRV Test_BMW_Application_Reset_IRV_V_3 = BMW_APPLICATION_RESET_INIT;

  Bac4_ApplicationStateType Test_Bac4_ApplicationStateType_V_1 = STARTUP;
  Bac4_ApplicationStateType Test_Bac4_ApplicationStateType_V_2 = RUN;
  Bac4_ApplicationStateType Test_Bac4_ApplicationStateType_V_3 = POST_RUN;
  Bac4_ApplicationStateType Test_Bac4_ApplicationStateType_V_4 = WAKEUP;
  Bac4_ApplicationStateType Test_Bac4_ApplicationStateType_V_5 = SHUTDOWN;

  /* Modes */

  Bac4_ApplicationStateType Test_Bac4_ApplicationState_MV_1 = RTE_MODE_Bac4_ApplicationState_INIT;
  Bac4_ApplicationStateType Test_Bac4_ApplicationState_MV_2 = RTE_MODE_Bac4_ApplicationState_POST_RUN;
  Bac4_ApplicationStateType Test_Bac4_ApplicationState_MV_3 = RTE_MODE_Bac4_ApplicationState_RUN;
  Bac4_ApplicationStateType Test_Bac4_ApplicationState_MV_4 = RTE_MODE_Bac4_ApplicationState_SHUTDOWN;
  Bac4_ApplicationStateType Test_Bac4_ApplicationState_TV = RTE_TRANSITION_Bac4_ApplicationState;

  uint8 Test_DcmEcuReset_MV_1 = RTE_MODE_DcmEcuReset_EXECUTE;
  uint8 Test_DcmEcuReset_MV_2 = RTE_MODE_DcmEcuReset_HARD;
  uint8 Test_DcmEcuReset_MV_3 = RTE_MODE_DcmEcuReset_JUMPTOBOOTLOADER;
  uint8 Test_DcmEcuReset_MV_4 = RTE_MODE_DcmEcuReset_JUMPTOSYSSUPPLIERBOOTLOADER;
  uint8 Test_DcmEcuReset_MV_5 = RTE_MODE_DcmEcuReset_KEYONOFF;
  uint8 Test_DcmEcuReset_MV_6 = RTE_MODE_DcmEcuReset_NONE;
  uint8 Test_DcmEcuReset_MV_7 = RTE_MODE_DcmEcuReset_SOFT;
  uint8 Test_DcmEcuReset_TV = RTE_TRANSITION_DcmEcuReset;

  uint8 Test_DcmModeRapidPowerShutDown_MV_1 = RTE_MODE_DcmModeRapidPowerShutDown_ENABLE_RAPIDPOWERSHUTDOWN;
  uint8 Test_DcmModeRapidPowerShutDown_MV_2 = RTE_MODE_DcmModeRapidPowerShutDown_DISABLE_RAPIDPOWERSHUTDOWN;
  uint8 Test_DcmModeRapidPowerShutDown_TV = RTE_TRANSITION_DcmModeRapidPowerShutDown;

  uint8 Test_WdgMMode_MV_1 = RTE_MODE_WdgMMode_SUPERVISION_DEACTIVATED;
  uint8 Test_WdgMMode_MV_2 = RTE_MODE_WdgMMode_SUPERVISION_EXPIRED;
  uint8 Test_WdgMMode_MV_3 = RTE_MODE_WdgMMode_SUPERVISION_FAILED;
  uint8 Test_WdgMMode_MV_4 = RTE_MODE_WdgMMode_SUPERVISION_OK;
  uint8 Test_WdgMMode_MV_5 = RTE_MODE_WdgMMode_SUPERVISION_STOPPED;
  uint8 Test_WdgMMode_TV = RTE_TRANSITION_WdgMMode;
}

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_TestCode:
     Reason:     This justification is used within the generated test code by the Rte Analyzer.
     Risk:       No functional risk.
     Prevention: Not required.

*/
