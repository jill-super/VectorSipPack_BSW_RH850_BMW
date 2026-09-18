/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  BswM.c
 *        Config:  BTLD.dpa
 *     SW-C Type:  BswM
 *
 *     Generator:  MICROSAR RTE Generator Version 4.16.0
 *                 RTE Core Version 1.16.0
 *       License:  Unlimited license CBD1700369 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <BswM>
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

/**********************************************************************************************************************
 *
 * AUTOSAR Modelling Object Descriptions
 *
 **********************************************************************************************************************
 *
 * Data Types:
 * ===========
 * Dcm_DiagnosticSessionControlType
 *   
 *
 * Dcm_EcuResetType
 *   
 *
 *********************************************************************************************************************/

#include "Rte_BswM.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_BswM.h"
#include "SchM_BswM.h"
#include "TSC_SchM_BswM.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "string.h"

static void BswM_TestDefines(void);

typedef P2FUNC(Std_ReturnType, RTE_CODE, FncPtrType)(void); /* PRQA S 3448 */ /* MD_Rte_TestCode */


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
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * Dcm_DiagnosticSessionControlType: Enumeration of integer in interval [0...255] with enumerators
 *   DCM_ENUM_DEFAULT_SESSION (1U)
 *   DCM_ENUM_PROGRAMMING_SESSION (2U)
 *   DCM_ENUM_EXTENDED_SESSION (3U)
 * Dcm_EcuResetType: Enumeration of integer in interval [0...255] with enumerators
 *   DCM_ENUM_NONE (0U)
 *   DCM_ENUM_HARD (1U)
 *   DCM_ENUM_KEYONOFF (2U)
 *   DCM_ENUM_SOFT (3U)
 *   DCM_ENUM_JUMPTOBOOTLOADER (4U)
 *   DCM_ENUM_JUMPTOSYSSUPPLIERBOOTLOADER (5U)
 *   DCM_ENUM_EXECUTE (6U)
 *
 *********************************************************************************************************************/


#define BswM_START_SEC_CODE
#include "BswM_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: BswM_MainFunction
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 5ms
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Dcm_DiagnosticSessionControlType Rte_Mode_Notification_SwcModeNotification_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl(void)
 *   Modes of Rte_ModeType_DcmDiagnosticSessionControl:
 *   - RTE_MODE_DcmDiagnosticSessionControl_DEFAULT_SESSION
 *   - RTE_MODE_DcmDiagnosticSessionControl_EXTENDED_SESSION
 *   - RTE_MODE_DcmDiagnosticSessionControl_PROGRAMMING_SESSION
 *   - RTE_TRANSITION_DcmDiagnosticSessionControl
 *   Dcm_EcuResetType Rte_Mode_Notification_SwcModeNotification_DcmEcuReset_DcmEcuReset(void)
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
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: BswM_MainFunction_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, BswM_CODE) BswM_MainFunction(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: BswM_MainFunction
 *********************************************************************************************************************/

  Rte_ModeType_DcmDiagnosticSessionControl Notification_SwcModeNotification_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl;
  Rte_ModeType_DcmEcuReset Notification_SwcModeNotification_DcmEcuReset_DcmEcuReset;

  /**********************************************************
  * Direct Function Accesses and Take Addresses of Functions
  **********************************************************/

  {
    FncPtrType BswM_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    BswM_FctPtr = (FncPtrType)Rte_Mode_Notification_SwcModeNotification_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  Notification_SwcModeNotification_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl = TSC_BswM_Rte_Mode_Notification_SwcModeNotification_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl();
  {
    FncPtrType BswM_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    BswM_FctPtr = (FncPtrType)Rte_Mode_Notification_SwcModeNotification_DcmEcuReset_DcmEcuReset; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  Notification_SwcModeNotification_DcmEcuReset_DcmEcuReset = TSC_BswM_Rte_Mode_Notification_SwcModeNotification_DcmEcuReset_DcmEcuReset();

  TSC_BswM_SchM_Enter_BswM_BSWM_EXCLUSIVE_AREA_0();
  TSC_BswM_SchM_Exit_BswM_BSWM_EXCLUSIVE_AREA_0();

  BswM_TestDefines();


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define BswM_STOP_SEC_CODE
#include "BswM_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

static void BswM_TestDefines(void)
{
  /* Enumeration Data Types */

  Dcm_DiagnosticSessionControlType Test_Dcm_DiagnosticSessionControlType_V_1 = DCM_ENUM_DEFAULT_SESSION;
  Dcm_DiagnosticSessionControlType Test_Dcm_DiagnosticSessionControlType_V_2 = DCM_ENUM_PROGRAMMING_SESSION;
  Dcm_DiagnosticSessionControlType Test_Dcm_DiagnosticSessionControlType_V_3 = DCM_ENUM_EXTENDED_SESSION;

  Dcm_EcuResetType Test_Dcm_EcuResetType_V_1 = DCM_ENUM_NONE;
  Dcm_EcuResetType Test_Dcm_EcuResetType_V_2 = DCM_ENUM_HARD;
  Dcm_EcuResetType Test_Dcm_EcuResetType_V_3 = DCM_ENUM_KEYONOFF;
  Dcm_EcuResetType Test_Dcm_EcuResetType_V_4 = DCM_ENUM_SOFT;
  Dcm_EcuResetType Test_Dcm_EcuResetType_V_5 = DCM_ENUM_JUMPTOBOOTLOADER;
  Dcm_EcuResetType Test_Dcm_EcuResetType_V_6 = DCM_ENUM_JUMPTOSYSSUPPLIERBOOTLOADER;
  Dcm_EcuResetType Test_Dcm_EcuResetType_V_7 = DCM_ENUM_EXECUTE;

  /* Modes */

  Dcm_DiagnosticSessionControlType Test_DcmDiagnosticSessionControl_MV_1 = RTE_MODE_DcmDiagnosticSessionControl_DEFAULT_SESSION;
  Dcm_DiagnosticSessionControlType Test_DcmDiagnosticSessionControl_MV_2 = RTE_MODE_DcmDiagnosticSessionControl_PROGRAMMING_SESSION;
  Dcm_DiagnosticSessionControlType Test_DcmDiagnosticSessionControl_MV_3 = RTE_MODE_DcmDiagnosticSessionControl_EXTENDED_SESSION;
  Dcm_DiagnosticSessionControlType Test_DcmDiagnosticSessionControl_TV = RTE_TRANSITION_DcmDiagnosticSessionControl;

  Dcm_EcuResetType Test_DcmEcuReset_MV_1 = RTE_MODE_DcmEcuReset_NONE;
  Dcm_EcuResetType Test_DcmEcuReset_MV_2 = RTE_MODE_DcmEcuReset_HARD;
  Dcm_EcuResetType Test_DcmEcuReset_MV_3 = RTE_MODE_DcmEcuReset_KEYONOFF;
  Dcm_EcuResetType Test_DcmEcuReset_MV_4 = RTE_MODE_DcmEcuReset_SOFT;
  Dcm_EcuResetType Test_DcmEcuReset_MV_5 = RTE_MODE_DcmEcuReset_JUMPTOBOOTLOADER;
  Dcm_EcuResetType Test_DcmEcuReset_MV_6 = RTE_MODE_DcmEcuReset_JUMPTOSYSSUPPLIERBOOTLOADER;
  Dcm_EcuResetType Test_DcmEcuReset_MV_7 = RTE_MODE_DcmEcuReset_EXECUTE;
  Dcm_EcuResetType Test_DcmEcuReset_TV = RTE_TRANSITION_DcmEcuReset;
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
