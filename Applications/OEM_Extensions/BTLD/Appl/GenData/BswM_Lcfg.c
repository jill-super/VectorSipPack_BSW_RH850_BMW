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
 *            Module: BswM
 *           Program: MSR BAC 4.x (MSR_Bmw_SLP4)
 *          Customer: Nexteer Automotive Corporation
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: Renesas RH850 P1M R7F701363EAFP
 *    License Scope : The usage is restricted to CBD1700369_D04
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: BswM_Lcfg.c
 *   Generation Time: 2018-01-04 11:34:41
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

#define BSWM_LCFG_SOURCE

/* -----------------------------------------------------------------------------
    &&&~ INCLUDE
 ----------------------------------------------------------------------------- */
/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */
#include "BswM.h"
#include "BswM_Private_Cfg.h"
#include "SchM_BswM.h"

#if !defined (BSWM_LOCAL)
# define BSWM_LOCAL static
#endif

#if !defined (BSWM_LOCAL_INLINE) /* COV_BSWM_LOCAL_INLINE */
# define BSWM_LOCAL_INLINE LOCAL_INLINE
#endif



#define BSWM_START_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/* -----------------------------------------------------------------------------
    &&&~ LOCAL FUNCTION DECLARATIONS
 ----------------------------------------------------------------------------- */

/**********************************************************************************************************************
 *  BswM_UpdateRuleStates()
 **********************************************************************************************************************/
/*!
 * \brief       Updates the state of a rule.
 * \details     Set rule state of passed ruleId to passed state.
 * \param[in]   ruleId    Id of the rule to update.
 * \param[in]   state     New state of the rule.
 * \pre         -
 * \context     ANY
 * \reentrant   TRUE
 * \synchronous TRUE
 */
BSWM_LOCAL_INLINE FUNC(void, BSWM_CODE) BswM_UpdateRuleStates(BswM_SizeOfRuleStatesType ruleId, BswM_RuleStatesType state);


/*! \addtogroup    BswMGeneratedFunctions BswM Generated Functions
 * \{
 */
/* PRQA S 0779 FUNCTIONDECLARATIONS */ /* MD_BswM_0779 */

/**********************************************************************************************************************
 *  BswMActionListFunctions
 *********************************************************************************************************************/
/*! \defgroup    BswMActionListFunctions
 * \{
 */

/*!
 * \{
 * \brief       Execute actions of action list.
 * \details     Generated function which depends on the configuration. Executes the actions of the action list in the
 *              configured order.
 * \return      E_OK      Action list was completely executed.
 * \return      E_NOT_OK  Action list was aborted because an action failed.
 * \pre         -
 * \context     ANY
 * \reentrant   TRUE
 * \synchronous TRUE
 */
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_AL_DcmProgGlue_ResetWhenBtldDefaultSession_True(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_INIT_AL_Initialize(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_AL_ResetExecution(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_AL_switch_to_FULL_COM(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_EcumAlOnRunII(void);
/*! \} */ /* End of sharing description for BswMActionListFunctions */
/*! \} */ /* End of group BswMActionListFunctions */

/**********************************************************************************************************************
 *  BswMRuleFunctions
 *********************************************************************************************************************/
/*! \defgroup    BswMRuleFunctions
 * \{
 */

/*!
 * \{
 * \brief       Arbitrates the configured rule.
 * \details     Generated function which depends on the configuration. Arbitrates the rule and returns the action list
 *              which shall be executed.
 * \return      ID of action list to execute (BSWM_NO_ACTIONLIST if no ActionList shall be executed)
 * \pre         -
 * \context     ANY
 * \reentrant   TRUE
 * \synchronous TRUE
 */
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_BswMRule_DcmProgGlue_ResetWhenBtldDefaultSession(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_Rule_DcmEcuReset(void);
/*! \} */ /* End of sharing description for BswMRuleFunctions */
/*! \} */ /* End of group BswMRuleFunctions */
/* PRQA L:FUNCTIONDECLARATIONS */
/*! \} */ /* End of group BswMGeneratedFunctions */

#define BSWM_STOP_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"


/* -----------------------------------------------------------------------------
    &&&~ LOCAL VARIABLE DECLARATIONS
 ----------------------------------------------------------------------------- */

/* PRQA S 0779 VARIABLEDECLARATIONS */ /* MD_BswM_0779 */ 

#define BSWM_START_SEC_VAR_NOINIT_8BIT
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"


#define BSWM_STOP_SEC_VAR_NOINIT_8BIT
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

#define BSWM_START_SEC_VAR_NOINIT_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"



BSWM_LOCAL VAR(Rte_ModeType_DcmDiagnosticSessionControl, BSWM_VAR_NOINIT) BswM_Mode_Notification_SwcModeNotification_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl;
BSWM_LOCAL VAR(Rte_ModeType_DcmEcuReset, BSWM_VAR_NOINIT) BswM_Mode_Notification_SwcModeNotification_DcmEcuReset_DcmEcuReset;



#define BSWM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/* PRQA L:VARIABLEDECLARATIONS */

/**********************************************************************************************************************
 *  LOCAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/



/**********************************************************************************************************************
 *  LOCAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA
**********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA
**********************************************************************************************************************/
/* PRQA S 0310 GLOBALDATADECLARATIONS */ /* MD_BswM_0310 */ 
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  BswM_ActionLists
**********************************************************************************************************************/
/** 
  \var    BswM_ActionLists
  \details
  Element    Description
  FctPtr     Pointer to the array list function.
*/ 
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(BswM_ActionListsType, BSWM_CONST) BswM_ActionLists[5] = {
    /* Index    FctPtr                                                                 Comment                   Referable Keys */
  { /*     0 */ BswM_ActionList_AL_DcmProgGlue_ResetWhenBtldDefaultSession_True },  /* [Priority: 0] */  /* [AL_AL_DcmProgGlue_ResetWhenBtldDefaultSession_True] */
  { /*     1 */ BswM_ActionList_INIT_AL_Initialize                              },  /* [Priority: 0] */  /* [AL_INIT_AL_Initialize] */
  { /*     2 */ BswM_ActionList_AL_ResetExecution                               },  /* [Priority: 0] */  /* [AL_AL_ResetExecution] */
  { /*     3 */ BswM_ActionList_AL_switch_to_FULL_COM                           },  /* [Priority: 0] */  /* [AL_AL_switch_to_FULL_COM] */
  { /*     4 */ BswM_ActionList_EcumAlOnRunII                                   }   /* [Priority: 0] */  /* [AL_EcumAlOnRunII] */
};
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_DeferredRules
**********************************************************************************************************************/
/** 
  \var    BswM_DeferredRules
  \details
  Element     Description
  RulesIdx    the index of the 1:1 relation pointing to BswM_Rules
*/ 
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(BswM_DeferredRulesType, BSWM_CONST) BswM_DeferredRules[2] = {
    /* Index    RulesIdx        Referable Keys */
  { /*     0 */       0U },  /* [R_BswMRule_DcmProgGlue_ResetWhenBtldDefaultSession] */
  { /*     1 */       1U }   /* [R_Rule_DcmEcuReset] */
};
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_Rules
**********************************************************************************************************************/
/** 
  \var    BswM_Rules
  \details
  Element    Description
  Id         External id of rule.
  FctPtr     Pointer to the rule function which does the arbitration.
*/ 
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(BswM_RulesType, BSWM_CONST) BswM_Rules[2] = {
    /* Index    Id  FctPtr                                                            Referable Keys */
  { /*     0 */ 0U, BswM_Rule_BswMRule_DcmProgGlue_ResetWhenBtldDefaultSession },  /* [R_BswMRule_DcmProgGlue_ResetWhenBtldDefaultSession, MRP_SwcModeNotification_DcmDiagnosticSessionControl] */
  { /*     1 */ 1U, BswM_Rule_Rule_DcmEcuReset                                 }   /* [R_Rule_DcmEcuReset, MRP_SwcModeNotification_DcmEcuReset] */
};
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_ActionListQueue
**********************************************************************************************************************/
/** 
  \var    BswM_ActionListQueue
  \brief  Variable to store action lists which shall be executed.
*/ 
#define BSWM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(uBswM_ActionListQueueType, BSWM_VAR_NOINIT) BswM_ActionListQueue;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [AL_AL_DcmProgGlue_ResetWhenBtldDefaultSession_True] */
  /*     1 */  /* [AL_INIT_AL_Initialize] */
  /*     2 */  /* [AL_AL_ResetExecution] */
  /*     3 */  /* [AL_AL_switch_to_FULL_COM] */
  /*     4 */  /* [AL_EcumAlOnRunII] */

#define BSWM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_Initialized
**********************************************************************************************************************/
#define BSWM_START_SEC_VAR_ZERO_INIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(BswM_InitializedType, BSWM_VAR_ZERO_INIT) BswM_Initialized = FALSE;
#define BSWM_STOP_SEC_VAR_ZERO_INIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_RuleStates
**********************************************************************************************************************/
/** 
  \var    BswM_RuleStates
  \brief  Stores the last execution state of the rule.
*/ 
#define BSWM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(BswM_RuleStatesType, BSWM_VAR_NOINIT) BswM_RuleStates[2];
  /* Index        Referable Keys  */
  /*     0 */  /* [R_BswMRule_DcmProgGlue_ResetWhenBtldDefaultSession, MRP_SwcModeNotification_DcmDiagnosticSessionControl] */
  /*     1 */  /* [R_Rule_DcmEcuReset, MRP_SwcModeNotification_DcmEcuReset] */

#define BSWM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */


/* PRQA L:GLOBALDATADECLARATIONS */


#define BSWM_START_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"


/* -----------------------------------------------------------------------------
    &&&~ FUNCTIONS
 ----------------------------------------------------------------------------- */


/**********************************************************************************************************************
 *  BswM_UpdateRuleStates()
 **********************************************************************************************************************/
/*!
 * \internal
 *  Set rule state of passed ruleId to passed state.
 * \endinternal
 */
BSWM_LOCAL_INLINE FUNC(void, BSWM_CODE) BswM_UpdateRuleStates(BswM_SizeOfRuleStatesType ruleId, BswM_RuleStatesType state)
{
  if (ruleId < BswM_GetSizeOfRuleStates())
  {
    BswM_SetRuleStates(ruleId, state); /* SBSW_BSWM_SETRULESTATE */
  }
}


/**********************************************************************************************************************
 *  BswM_Init_Gen
 *********************************************************************************************************************/
/*!
\internal
 *  - Initialize all generated variables.
 *  - Execute all action lists which are configured to be executed during initialization.
\endinternal
*/
FUNC(void, BSWM_CODE) BswM_Init_Gen(void)
{

  BswM_Mode_Notification_SwcModeNotification_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl = RTE_MODE_DcmDiagnosticSessionControl_DEFAULT_SESSION;
  BswM_Mode_Notification_SwcModeNotification_DcmEcuReset_DcmEcuReset = RTE_MODE_DcmEcuReset_NONE;

  (void)BswM_ActionList_INIT_AL_Initialize();
  (void)BswM_ActionList_EcumAlOnRunII();
  (void)BswM_ActionList_AL_switch_to_FULL_COM();
}

/**********************************************************************************************************************
 *  BswM_SwcModeRequestUpdateFct
 *********************************************************************************************************************/
/*!
\internal
 *  - Do the following for all SwcModeNotifications:
 *    - Get mode from Rte by calling the corresponding Rte_Mode API.
 *    - If mode is valid (not in transition), store mode for arbitration.
 *  - Do the following for all SwcModeRequests:
 *    - Get mode from Rte by calling the corresponding Rte_Read API.
 *    - Store mode for arbitration.
\endinternal
*/
FUNC(void, BSWM_CODE) BswM_SwcModeRequestUpdateFct(void)
{
  uint32 mode;
  mode = Rte_Mode_Notification_SwcModeNotification_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl();
  if (mode != RTE_TRANSITION_DcmDiagnosticSessionControl)
  {
    BswM_Mode_Notification_SwcModeNotification_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl = (Rte_ModeType_DcmDiagnosticSessionControl)mode;
  }
  mode = Rte_Mode_Notification_SwcModeNotification_DcmEcuReset_DcmEcuReset();
  if (mode != RTE_TRANSITION_DcmEcuReset)
  {
    BswM_Mode_Notification_SwcModeNotification_DcmEcuReset_DcmEcuReset = (Rte_ModeType_DcmEcuReset)mode;
  }
}

/**********************************************************************************************************************
 *  BswMActionListFunctions
 *********************************************************************************************************************/
/*!
\internal
 *  - Do this for every configured action in action list:
 *    - Execute action.
 *    - If action fails and Dem Event is configured for the action: Set Error Status of Dem Event to failed.
 *    - If action fails and Aborting is enabled for the action: Abort iteration and return E_NOT_OK.
 *  - If all actions were executed return E_OK.
\endinternal
*/

/**********************************************************************************************************************
 *  BswM_ActionList_AL_DcmProgGlue_ResetWhenBtldDefaultSession_True
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_AL_DcmProgGlue_ResetWhenBtldDefaultSession_True(void)
{
  ProgGlue_DcmDiagnosticSessionControl_Callout();
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_INIT_AL_Initialize
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_INIT_AL_Initialize(void)
{
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  Fr_Init(&Fr_Config);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  Fee_30_SmallSector_Init();
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  FrIf_Init(&FrIf_Config);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  PduR_Init(PduR_Config_Ptr);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  FrSM_Init(FrSM_Config_Ptr);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  FrTp_Init(&FrTp_Config);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  (void)WaitMemDriverReady();
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  FrXcp_Init(NULL_PTR);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  Xcp_Init();
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  (void) ApplFr_DetFilter();
  /*lint -restore */
  BswM_AL_SetProgrammableInterrupts();
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  ComM_Init();
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  Dcm_Init(NULL_PTR);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  Dlog_InitNvm();
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  Prog_UDS_Init();
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  Dlog_SetConfiguration(&Dlog_Config);;
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  (void)Rte_Start();
  /*lint -restore */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_AL_ResetExecution
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_AL_ResetExecution(void)
{
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  Mcu_PerformReset();
  /*lint -restore */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_AL_switch_to_FULL_COM
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_AL_switch_to_FULL_COM(void)
{
  (void)ComM_RequestComMode(ComMConf_ComMUser_USR_A_FlexRay_5b5a9ac2, COMM_FULL_COMMUNICATION);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_EcumAlOnRunII
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_EcumAlOnRunII(void)
{
  ComM_CommunicationAllowed(ComMConf_ComMChannel_A_FlexRay_5b5a9ac2, TRUE);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswMRuleFunctions
 *********************************************************************************************************************/
/*!
\internal
 *  - Check if rule is not deactivated [only if BswMRuleControlEnabled]:
 *    - Evaluate logical expression.
 *    - If evaluation of logical expression is true:
 *      - If TrueActionList is configured and its execution type is TRIGGER:
 *        - Check if last evaluation result was not true:
 *          - Store current evaluation result.
 *          - Execute the configured action list.
 *      - Else store current evaluation result if execution type of FalseActionList is TRIGGER.
 *      - If TrueActionList is configured and its execution type is CONDITIONAL:
 *        - Execute the configured action list.
 *    - If evaluation of logical expression is false:
 *      - If FalseActionList is configured and its execution type is TRIGGER:
 *        - Check if last evaluation result was not false:
 *          - Store current evaluation result.
 *          - Execute the configured action list.
 *      - Else store current evaluation result if execution type of TrueActionList is TRIGGER.
 *      - If FalsActionList is configured and its execution type is CONDITIONAL:
 *        - Execute the configured action list.
\endinternal
*/

/**********************************************************************************************************************
 *  BswM_Rule_BswMRule_DcmProgGlue_ResetWhenBtldDefaultSession
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_BswMRule_DcmProgGlue_ResetWhenBtldDefaultSession(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  if( BswM_GetRuleStates(BSWM_ID_RULE_BswMRule_DcmProgGlue_ResetWhenBtldDefaultSession) != BSWM_DEACTIVATED )
  {
    /* Evaluate logical expression LE_BswMRule_DcmProgGlue_ResetWhenBtldDefaultSession. */
    if((BswM_Mode_Notification_SwcModeNotification_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl == RTE_MODE_DcmDiagnosticSessionControl_DEFAULT_SESSION) || (BswM_Mode_Notification_SwcModeNotification_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl == RTE_MODE_DcmDiagnosticSessionControl_PROGRAMMING_SESSION))
    {
      /* Return conditional action list BswM_ActionList_AL_DcmProgGlue_ResetWhenBtldDefaultSession_True. */
      retVal = BSWM_ID_AL_AL_DcmProgGlue_ResetWhenBtldDefaultSession_True;
    }
    /* No false action list configured. */
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_Rule_DcmEcuReset
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_Rule_DcmEcuReset(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  if( BswM_GetRuleStates(BSWM_ID_RULE_Rule_DcmEcuReset) != BSWM_DEACTIVATED )
  {
    /* Evaluate logical expression Rule_DcmEcuReset_BswMLogicalExpression. */
    if(BswM_Mode_Notification_SwcModeNotification_DcmEcuReset_DcmEcuReset == RTE_MODE_DcmEcuReset_EXECUTE)
    {
      if( BswM_GetRuleStates(BSWM_ID_RULE_Rule_DcmEcuReset) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
      {
        BswM_UpdateRuleStates(BSWM_ID_RULE_Rule_DcmEcuReset, BSWM_TRUE);
        /* Return triggered action list BswM_ActionList_AL_ResetExecution. */
        retVal = BSWM_ID_AL_AL_ResetExecution;
      }
    }
    else
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_Rule_DcmEcuReset, BSWM_FALSE);
      /* No false action list configured. */
    }
  }
  return retVal;
}



#define BSWM_STOP_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

