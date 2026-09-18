/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  IntegrationSample.c
 *        Config:  EPS.dpa
 *     SW-C Type:  IntegrationSample
 *
 *     Generator:  MICROSAR RTE Generator Version 4.16.0
 *                 RTE Core Version 1.16.0
 *       License:  Unlimited license CBD1700369 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <IntegrationSample>
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
 * IS_ST_CON_VEH_Type
 *   
 *
 * IntegrationSample_Dcm_ConfirmationStatusType
 *   
 *
 * IntegrationSample_Dcm_NegativeResponseCodeType
 *   
 *
 * IntegrationSample_EcuRunStateModeRequestType
 *   
 *
 * IntegrationSample_SimpleTimerStateType
 *   
 *
 * IntegrationSample_Stm_CentralErrorLockType
 *   
 *
 * Rte_DT_VehicleState_Type_0
 *   
 *
 * StatusEnergyFZM_Type
 *   
 *
 * StatusInterlockErrorMemoryFZM_Type
 *   
 *
 *
 * Mode Declaration Groups:
 * ========================
 * WdgM_Mode
 *   
 *
 *********************************************************************************************************************/

#include "Rte_IntegrationSample.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_IntegrationSample.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "string.h"

static void IntegrationSample_TestDefines(void);


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
 * uint16: Integer in interval [0...65535] (standard type)
 * uint32: Integer in interval [0...4294967295] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * IS_ST_CON_VEH_Type: Enumeration of integer in interval [0...255] with enumerators
 *   IS_VEHICLE_STATE__PARKING_BN_NOK (1U)
 *   IS_VEHICLE_STATE__PARKING_BN_OK (2U)
 *   IS_VEHICLE_STATE__CUSTOMER_ABSENT (3U)
 *   IS_VEHICLE_STATE__LIVING (5U)
 *   IS_VEHICLE_STATE__CHECK_ANALYS_DIAGNOSTICS (7U)
 *   IS_VEHICLE_STATE__READINESS_TO_DRIVE_INIT (8U)
 *   IS_VEHICLE_STATE__DRIVE (10U)
 *   IS_VEHICLE_STATE__READINESS_TO_DRIVE_STOP (12U)
 *   IS_VEHICLE_STATE__UNAVAILABLE (14U)
 *   IS_VEHICLE_STATE__INVALID (15U)
 * IntegrationSample_Dcm_ConfirmationStatusType: Enumeration of integer in interval [0...3] with enumerators
 *   DCM_RES_POS_OK (0U)
 *   DCM_RES_POS_NOT_OK (1U)
 *   DCM_RES_NEG_OK (2U)
 *   DCM_RES_NEG_NOT_OK (3U)
 * IntegrationSample_Dcm_NegativeResponseCodeType: Enumeration of integer in interval [16...254] with enumerators
 *   DCM_E_BRAKESWITCH_NOTCLOSED (143U)
 *   DCM_E_BUSYREPEATREQUEST (33U)
 *   DCM_E_CONDITIONSNOTCORRECT (34U)
 *   DCM_E_ENGINEISNOTRUNNING (132U)
 *   DCM_E_ENGINEISRUNNING (131U)
 *   DCM_E_ENGINERUNTIMETOOLOW (133U)
 *   DCM_E_EXCEEDNUMBEROFATTEMPTS (54U)
 *   DCM_E_FAILUREPREVENTSEXECUTIONOFREQUESTEDACTION (38U)
 *   DCM_E_GENERALPROGRAMMINGFAILURE (114U)
 *   DCM_E_GENERALREJECT (16U)
 *   DCM_E_INCORRECTMESSAGELENGTHORINVALIDFORMAT (19U)
 *   DCM_E_INVALIDKEY (53U)
 *   DCM_E_NORESPONSEFROMSUBNETCOMPONENT (37U)
 *   DCM_E_REQUESTOUTOFRANGE (49U)
 *   DCM_E_REQUESTSEQUENCEERROR (36U)
 *   DCM_E_REQUIREDTIMEDELAYNOTEXPIRED (55U)
 *   DCM_E_RESPONSETOOLONG (20U)
 *   DCM_E_RPMTOOHIGH (129U)
 *   DCM_E_RPMTOOLOW (130U)
 *   DCM_E_SECURITYACCESSDENIED (51U)
 *   DCM_E_SERVICENOTSUPPORTED (17U)
 *   DCM_E_SERVICENOTSUPPORTEDINACTIVESESSION (127U)
 *   DCM_E_SHIFTERLEVERNOTINPARK (144U)
 *   DCM_E_SUBFUNCTIONNOTSUPPORTED (18U)
 *   DCM_E_SUBFUNCTIONNOTSUPPORTEDINACTIVESESSION (126U)
 *   DCM_E_TEMPERATURETOOHIGH (134U)
 *   DCM_E_TEMPERATURETOOLOW (135U)
 *   DCM_E_THROTTLE_PEDALTOOHIGH (138U)
 *   DCM_E_THROTTLE_PEDALTOOLOW (139U)
 *   DCM_E_TORQUECONVERTERCLUTCHLOCKED (145U)
 *   DCM_E_TRANSFERDATASUSPENDED (113U)
 *   DCM_E_TRANSMISSIONRANGENOTINGEAR (141U)
 *   DCM_E_TRANSMISSIONRANGENOTINNEUTRAL (140U)
 *   DCM_E_UPLOADDOWNLOADNOTACCEPTED (112U)
 *   DCM_E_VEHICLESPEEDTOOHIGH (136U)
 *   DCM_E_VEHICLESPEEDTOOLOW (137U)
 *   DCM_E_VOLTAGETOOHIGH (146U)
 *   DCM_E_VOLTAGETOOLOW (147U)
 *   DCM_E_WRONGBLOCKSEQUENCECOUNTER (115U)
 *   DCM_E_VMSCNC_0 (240U)
 *   DCM_E_VMSCNC_1 (241U)
 *   DCM_E_VMSCNC_2 (242U)
 *   DCM_E_VMSCNC_3 (243U)
 *   DCM_E_VMSCNC_4 (244U)
 *   DCM_E_VMSCNC_5 (245U)
 *   DCM_E_VMSCNC_6 (246U)
 *   DCM_E_VMSCNC_7 (247U)
 *   DCM_E_VMSCNC_8 (248U)
 *   DCM_E_VMSCNC_9 (249U)
 *   DCM_E_VMSCNC_A (250U)
 *   DCM_E_VMSCNC_B (251U)
 *   DCM_E_VMSCNC_C (252U)
 *   DCM_E_VMSCNC_D (253U)
 *   DCM_E_VMSCNC_E (254U)
 * IntegrationSample_EcuRunStateModeRequestType: Enumeration of integer in interval [0...255] with enumerators
 *   IntegrationSample_INVALID_STATE (0U)
 *   IntegrationSample_BSW_START (1U)
 *   IntegrationSample_STARTUP (2U)
 *   IntegrationSample_NORMAL_OPERATION (3U)
 *   IntegrationSample_SHUTDOWN (4U)
 * IntegrationSample_SimpleTimerStateType: Enumeration of integer in interval [0...255] with enumerators
 *   IntegrationSample_Timer_FIRE (0U)
 *   IntegrationSample_Timer_IDLE (1U)
 *   IntegrationSample_Timer_RUNNING (2U)
 * IntegrationSample_Stm_CentralErrorLockType: Enumeration of integer in interval [0...255] with enumerators
 *   STM_CEL_UNLOCKED (0U)
 *   STM_CEL_LOCKED (1U)
 *   STM_CEL_INVALID (3U)
 * Rte_DT_VehicleState_Type_0: Enumeration of integer in interval [0...255] with enumerators
 *   StatusEnergyFZM_ENSTATE_OK (1U)
 *   StatusEnergyFZM_ENSTATE_GOOD (0U)
 *   StatusEnergyFZM_ENSTATE_SHORTAGE (2U)
 *   StatusEnergyFZM_signal_Unfilled (255U)
 *   StatusEnergyFZM_ENSTATE_SEVERE_SHORTAGE (3U)
 * StatusEnergyFZM_Type: Enumeration of integer in interval [0...255] with enumerators
 *   StatusEnergyFZM_ENSTATE_OK (1U)
 *   StatusEnergyFZM_ENSTATE_GOOD (0U)
 *   StatusEnergyFZM_ENSTATE_SHORTAGE (2U)
 *   StatusEnergyFZM_signal_Unfilled (255U)
 *   StatusEnergyFZM_ENSTATE_SEVERE_SHORTAGE (3U)
 * StatusInterlockErrorMemoryFZM_Type: Enumeration of integer in interval [0...255] with enumerators
 *   StatusInterlockErrorMemoryFZM_ErrorMemoryUnlock (0U)
 *   StatusInterlockErrorMemoryFZM_ErrorMemoryLock (1U)
 *   StatusInterlockErrorMemoryFZM_Reserved (2U)
 *   StatusInterlockErrorMemoryFZM_Signal_Unfilled (255U)
 *
 * Array Types:
 * ============
 * IntegrationSample_Dem_DataDemDataElementClass_KILOMETER_ArrayType: Array with 3 element(s) of type uint8
 * IntegrationSample_RequestDataArray: Array with 1024 element(s) of type uint8
 *
 * Record Types:
 * =============
 * IntegrationSample_CON_VEH_Type: Record with elements
 *   IntegrationSample_ST_CON_VEH of type uint8
 *   IntegrationSample_CTR_FKTN_PRTNT of type uint32
 *   IntegrationSample_CTR_BS_PRTNT of type uint8
 * MileageKilometreType: Record with elements
 *   mileageKilometre of type uint32
 * VehicleState_Type: Record with elements
 *   statusEnergyFZM of type Rte_DT_VehicleState_Type_0
 *   statusInterlockErrorMemoryFZM of type StatusInterlockErrorMemoryFZM_Type
 *
 *********************************************************************************************************************/


#define IntegrationSample_START_SEC_CODE
#include "IntegrationSample_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IntegrationSampleTimerFunction
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 100ms
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Std_ReturnType Rte_Switch_IntegrationSampleSimpleTimerPort_0_SimpleTimerMode(IntegrationSample_SimpleTimerStateType mode)
 *   Modes of Rte_ModeType_IntegrationSample_SimpleTimerState:
 *   - RTE_MODE_IntegrationSample_SimpleTimerState_IntegrationSample_Timer_FIRE
 *   - RTE_MODE_IntegrationSample_SimpleTimerState_IntegrationSample_Timer_IDLE
 *   - RTE_MODE_IntegrationSample_SimpleTimerState_IntegrationSample_Timer_RUNNING
 *   - RTE_TRANSITION_IntegrationSample_SimpleTimerState
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: IntegrationSampleTimerFunction_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, IntegrationSample_CODE) R_IntegrationSample_TimerFunction(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: R_IntegrationSample_TimerFunction
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  fct_status = TSC_IntegrationSample_Rte_Switch_IntegrationSampleSimpleTimerPort_0_SimpleTimerMode(RTE_MODE_IntegrationSample_SimpleTimerState_IntegrationSample_Timer_IDLE);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_LIMIT:
      fct_error = 1;
      break;
  }

  IntegrationSample_TestDefines();


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IntegrationSample_Runnable_ManufacturerConfirmation
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Confirmation> of PortPrototype <IntegrationSample_PP_ServiceRequestManufacturerNotificationPort>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IntegrationSample_ManufacturerConfirmation(uint8 SID, uint8 ReqType, uint16 SourceAddress, IntegrationSample_Dcm_ConfirmationStatusType ConfirmationStatus)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_IntegrationSample_ServiceRequestNotification_E_NOT_OK
 *   RTE_E_IntegrationSample_ServiceRequestNotification_E_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: IntegrationSample_Runnable_ManufacturerConfirmation_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, IntegrationSample_CODE) IntegrationSample_ManufacturerConfirmation(uint8 SID, uint8 ReqType, uint16 SourceAddress, IntegrationSample_Dcm_ConfirmationStatusType ConfirmationStatus) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: IntegrationSample_ManufacturerConfirmation (returns application error)
 *********************************************************************************************************************/

  return RTE_E_IntegrationSample_ServiceRequestNotification_E_NOT_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IntegrationSample_Runnable_ManufacturerIndication
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Indication> of PortPrototype <IntegrationSample_PP_ServiceRequestManufacturerNotificationPort>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IntegrationSample_ManufacturerIndication(uint8 SID, const uint8 *RequestData, uint16 DataSize, uint8 ReqType, uint16 SourceAddress, IntegrationSample_Dcm_NegativeResponseCodeType *ErrorCode)
 *     Argument RequestData: uint8* is of type IntegrationSample_RequestDataArray
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_IntegrationSample_ServiceRequestNotification_E_NOT_OK
 *   RTE_E_IntegrationSample_ServiceRequestNotification_E_OK
 *   RTE_E_IntegrationSample_ServiceRequestNotification_E_REQUEST_NOT_ACCEPTED
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: IntegrationSample_Runnable_ManufacturerIndication_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, IntegrationSample_CODE) IntegrationSample_ManufacturerIndication(uint8 SID, P2CONST(uint8, AUTOMATIC, RTE_INTEGRATIONSAMPLE_APPL_DATA) RequestData, uint16 DataSize, uint8 ReqType, uint16 SourceAddress, P2VAR(IntegrationSample_Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_INTEGRATIONSAMPLE_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: IntegrationSample_ManufacturerIndication (returns application error)
 *********************************************************************************************************************/

  return RTE_E_IntegrationSample_ServiceRequestNotification_E_NOT_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: R_IntegrationSample_EcuRunStateHandler
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on DataReceivedEvent for DataElementPrototype <IntegrationSample_EcuRunStateRequestMode> of PortPrototype <EcuRunStateRequest>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Implicit S/R API:
 *   -----------------
 *   IntegrationSample_EcuRunStateModeRequestType Rte_IRead_R_IntegrationSample_EcuRunStateHandler_EcuRunStateRequest_IntegrationSample_EcuRunStateRequestMode(void)
 *
 * Mode Interfaces:
 * ================
 *   Std_ReturnType Rte_Switch_EcuRunState_EcuRunStateMode(IntegrationSample_EcuRunStateModeRequestType mode)
 *   Modes of Rte_ModeType_IntegrationSample_EcuRunState:
 *   - RTE_MODE_IntegrationSample_EcuRunState_IntegrationSample_BSW_START
 *   - RTE_MODE_IntegrationSample_EcuRunState_IntegrationSample_INVALID_STATE
 *   - RTE_MODE_IntegrationSample_EcuRunState_IntegrationSample_NORMAL_OPERATION
 *   - RTE_MODE_IntegrationSample_EcuRunState_IntegrationSample_SHUTDOWN
 *   - RTE_MODE_IntegrationSample_EcuRunState_IntegrationSample_STARTUP
 *   - RTE_TRANSITION_IntegrationSample_EcuRunState
 *   IntegrationSample_EcuRunStateModeRequestType Rte_Mode_EcuRunState_EcuRunStateMode(void)
 *   Modes of Rte_ModeType_IntegrationSample_EcuRunState:
 *   - RTE_MODE_IntegrationSample_EcuRunState_IntegrationSample_BSW_START
 *   - RTE_MODE_IntegrationSample_EcuRunState_IntegrationSample_INVALID_STATE
 *   - RTE_MODE_IntegrationSample_EcuRunState_IntegrationSample_NORMAL_OPERATION
 *   - RTE_MODE_IntegrationSample_EcuRunState_IntegrationSample_SHUTDOWN
 *   - RTE_MODE_IntegrationSample_EcuRunState_IntegrationSample_STARTUP
 *   - RTE_TRANSITION_IntegrationSample_EcuRunState
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: R_IntegrationSample_EcuRunStateHandler_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, IntegrationSample_CODE) IntegrationSample_EcuRunStateHandler(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: IntegrationSample_EcuRunStateHandler
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  IntegrationSample_EcuRunStateModeRequestType IRead_EcuRunStateRequest_IntegrationSample_EcuRunStateRequestMode;

  Rte_ModeType_IntegrationSample_EcuRunState EcuRunState_EcuRunStateMode;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  IRead_EcuRunStateRequest_IntegrationSample_EcuRunStateRequestMode = TSC_IntegrationSample_Rte_IRead_R_IntegrationSample_EcuRunStateHandler_EcuRunStateRequest_IntegrationSample_EcuRunStateRequestMode();

  fct_status = TSC_IntegrationSample_Rte_Switch_EcuRunState_EcuRunStateMode(RTE_MODE_IntegrationSample_EcuRunState_IntegrationSample_BSW_START);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_LIMIT:
      fct_error = 1;
      break;
  }

  EcuRunState_EcuRunStateMode = TSC_IntegrationSample_Rte_Mode_EcuRunState_EcuRunStateMode();


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: R_ReadDataMILE_KM
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <PP_ReadData_DemDataElementClass_KILOMETER>
 *
 **********************************************************************************************************************
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_EXA_IntegrationSample(void)
 *   void Rte_Exit_EXA_IntegrationSample(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType R_ReadDataMILE_KM(uint8 *Data)
 *     Argument Data: uint8* is of type IntegrationSample_Dem_DataDemDataElementClass_KILOMETER_ArrayType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_IntegrationSample_CSDataServices_DemDataElementClass_KILOMETER_E_NOT_OK
 *   RTE_E_IntegrationSample_CSDataServices_DemDataElementClass_KILOMETER_E_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: R_ReadDataMILE_KM_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, IntegrationSample_CODE) R_ReadDataMILE_KM(P2VAR(uint8, AUTOMATIC, RTE_INTEGRATIONSAMPLE_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: R_ReadDataMILE_KM (returns application error)
 *********************************************************************************************************************/

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  TSC_IntegrationSample_Rte_Enter_EXA_IntegrationSample();
  TSC_IntegrationSample_Rte_Exit_EXA_IntegrationSample();

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: R_Receive_SGG_Rx_CON_VEH
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on DataReceivedEvent for DataElementPrototype <IntegrationSample_IDT_CON_VEH> of PortPrototype <RP_SGG_Rx_CON_VEH>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_RP_SGG_Rx_CON_VEH_IntegrationSample_IDT_CON_VEH(IntegrationSample_CON_VEH_Type *data)
 *   boolean Rte_IsUpdated_RP_SGG_Rx_CON_VEH_IntegrationSample_IDT_CON_VEH(void)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_PP_IS_ST_CON_VEH_VehicleState(IS_ST_CON_VEH_Type data)
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_EXA_IntegrationSample(void)
 *   void Rte_Exit_EXA_IntegrationSample(void)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: R_Receive_SGG_Rx_CON_VEH_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, IntegrationSample_CODE) R_Receive_SGG_Rx_CON_VEH(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: R_Receive_SGG_Rx_CON_VEH
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  IntegrationSample_CON_VEH_Type Read_RP_SGG_Rx_CON_VEH_IntegrationSample_IDT_CON_VEH;
  boolean IsUpdated_RP_SGG_Rx_CON_VEH_IntegrationSample_IDT_CON_VEH;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  IsUpdated_RP_SGG_Rx_CON_VEH_IntegrationSample_IDT_CON_VEH = TSC_IntegrationSample_Rte_IsUpdated_RP_SGG_Rx_CON_VEH_IntegrationSample_IDT_CON_VEH();

  fct_status = TSC_IntegrationSample_Rte_Read_RP_SGG_Rx_CON_VEH_IntegrationSample_IDT_CON_VEH(&Read_RP_SGG_Rx_CON_VEH_IntegrationSample_IDT_CON_VEH);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_IntegrationSample_Rte_Write_PP_IS_ST_CON_VEH_VehicleState(Rte_InitValue_PP_IS_ST_CON_VEH_VehicleState);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  TSC_IntegrationSample_Rte_Enter_EXA_IntegrationSample();
  TSC_IntegrationSample_Rte_Exit_EXA_IntegrationSample();


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: R_Receive_SIG_MILE_KM_816_R
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on DataReceivedEvent for DataElementPrototype <Notifier> of PortPrototype <RP_SA_Kilometer_R>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_RP_SA_Kilometer_R_Notifier(MileageKilometreType *data)
 *   boolean Rte_IsUpdated_RP_SA_Kilometer_R_Notifier(void)
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_EXA_IntegrationSample(void)
 *   void Rte_Exit_EXA_IntegrationSample(void)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: R_Receive_SIG_MILE_KM_816_R_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, IntegrationSample_CODE) Runnable_IS_Receive_SIG_MILE_KM_816_R(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Runnable_IS_Receive_SIG_MILE_KM_816_R
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  MileageKilometreType Read_RP_SA_Kilometer_R_Notifier;
  boolean IsUpdated_RP_SA_Kilometer_R_Notifier;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  IsUpdated_RP_SA_Kilometer_R_Notifier = TSC_IntegrationSample_Rte_IsUpdated_RP_SA_Kilometer_R_Notifier();

  fct_status = TSC_IntegrationSample_Rte_Read_RP_SA_Kilometer_R_Notifier(&Read_RP_SA_Kilometer_R_Notifier);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  TSC_IntegrationSample_Rte_Enter_EXA_IntegrationSample();
  TSC_IntegrationSample_Rte_Exit_EXA_IntegrationSample();


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: R_Receive_VehicleStatus
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on DataReceivedEvent for DataElementPrototype <Notifier> of PortPrototype <RP_VehicleStatus>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_RP_VehicleStatus_Notifier(VehicleState_Type *data)
 *   boolean Rte_IsUpdated_RP_VehicleStatus_Notifier(void)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_PP_Stm_CEL_Signal_centralErrorLock(IntegrationSample_Stm_CentralErrorLockType data)
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_EXA_IntegrationSample(void)
 *   void Rte_Exit_EXA_IntegrationSample(void)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: R_Receive_VehicleStatus_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, IntegrationSample_CODE) Runnable_IS_R_Receive_VehicleStatus(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Runnable_IS_R_Receive_VehicleStatus
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  VehicleState_Type Read_RP_VehicleStatus_Notifier;
  boolean IsUpdated_RP_VehicleStatus_Notifier;

  IntegrationSample_Stm_CentralErrorLockType Write_PP_Stm_CEL_Signal_centralErrorLock;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  IsUpdated_RP_VehicleStatus_Notifier = TSC_IntegrationSample_Rte_IsUpdated_RP_VehicleStatus_Notifier();

  fct_status = TSC_IntegrationSample_Rte_Read_RP_VehicleStatus_Notifier(&Read_RP_VehicleStatus_Notifier);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  (void)memset(&Write_PP_Stm_CEL_Signal_centralErrorLock, 0, sizeof(Write_PP_Stm_CEL_Signal_centralErrorLock));
  fct_status = TSC_IntegrationSample_Rte_Write_PP_Stm_CEL_Signal_centralErrorLock(Write_PP_Stm_CEL_Signal_centralErrorLock);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  TSC_IntegrationSample_Rte_Enter_EXA_IntegrationSample();
  TSC_IntegrationSample_Rte_Exit_EXA_IntegrationSample();


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: R_Timeout_SGG_Rx_CON_VEH
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on DataReceiveErrorEvent for DataElementPrototype <IntegrationSample_IDT_CON_VEH> of PortPrototype <RP_SGG_Rx_CON_VEH>
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: R_Timeout_SGG_Rx_CON_VEH_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, IntegrationSample_CODE) Runnable_IS_R_Timeout_SGG_Rx_CON_VEH(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Runnable_IS_R_Timeout_SGG_Rx_CON_VEH
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: R_Timeout_VehicleStatus
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on DataReceiveErrorEvent for DataElementPrototype <Notifier> of PortPrototype <RP_VehicleStatus>
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: R_Timeout_VehicleStatus_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, IntegrationSample_CODE) Runnable_IS_R_Timeout_VehicleStatus(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Runnable_IS_R_Timeout_VehicleStatus
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define IntegrationSample_STOP_SEC_CODE
#include "IntegrationSample_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

static void IntegrationSample_TestDefines(void)
{
  /* Enumeration Data Types */

  IS_ST_CON_VEH_Type Test_IS_ST_CON_VEH_Type_V_1 = IS_VEHICLE_STATE__PARKING_BN_NOK;
  IS_ST_CON_VEH_Type Test_IS_ST_CON_VEH_Type_V_2 = IS_VEHICLE_STATE__PARKING_BN_OK;
  IS_ST_CON_VEH_Type Test_IS_ST_CON_VEH_Type_V_3 = IS_VEHICLE_STATE__CUSTOMER_ABSENT;
  IS_ST_CON_VEH_Type Test_IS_ST_CON_VEH_Type_V_4 = IS_VEHICLE_STATE__LIVING;
  IS_ST_CON_VEH_Type Test_IS_ST_CON_VEH_Type_V_5 = IS_VEHICLE_STATE__CHECK_ANALYS_DIAGNOSTICS;
  IS_ST_CON_VEH_Type Test_IS_ST_CON_VEH_Type_V_6 = IS_VEHICLE_STATE__READINESS_TO_DRIVE_INIT;
  IS_ST_CON_VEH_Type Test_IS_ST_CON_VEH_Type_V_7 = IS_VEHICLE_STATE__DRIVE;
  IS_ST_CON_VEH_Type Test_IS_ST_CON_VEH_Type_V_8 = IS_VEHICLE_STATE__READINESS_TO_DRIVE_STOP;
  IS_ST_CON_VEH_Type Test_IS_ST_CON_VEH_Type_V_9 = IS_VEHICLE_STATE__UNAVAILABLE;
  IS_ST_CON_VEH_Type Test_IS_ST_CON_VEH_Type_V_10 = IS_VEHICLE_STATE__INVALID;

  IntegrationSample_Dcm_ConfirmationStatusType Test_IntegrationSample_Dcm_ConfirmationStatusType_V_1 = DCM_RES_POS_OK;
  IntegrationSample_Dcm_ConfirmationStatusType Test_IntegrationSample_Dcm_ConfirmationStatusType_V_2 = DCM_RES_POS_NOT_OK;
  IntegrationSample_Dcm_ConfirmationStatusType Test_IntegrationSample_Dcm_ConfirmationStatusType_V_3 = DCM_RES_NEG_OK;
  IntegrationSample_Dcm_ConfirmationStatusType Test_IntegrationSample_Dcm_ConfirmationStatusType_V_4 = DCM_RES_NEG_NOT_OK;

  IntegrationSample_Dcm_NegativeResponseCodeType Test_IntegrationSample_Dcm_NegativeResponseCodeType_V_1 = DCM_E_BRAKESWITCH_NOTCLOSED;
  IntegrationSample_Dcm_NegativeResponseCodeType Test_IntegrationSample_Dcm_NegativeResponseCodeType_V_2 = DCM_E_BUSYREPEATREQUEST;
  IntegrationSample_Dcm_NegativeResponseCodeType Test_IntegrationSample_Dcm_NegativeResponseCodeType_V_3 = DCM_E_CONDITIONSNOTCORRECT;
  IntegrationSample_Dcm_NegativeResponseCodeType Test_IntegrationSample_Dcm_NegativeResponseCodeType_V_4 = DCM_E_ENGINEISNOTRUNNING;
  IntegrationSample_Dcm_NegativeResponseCodeType Test_IntegrationSample_Dcm_NegativeResponseCodeType_V_5 = DCM_E_ENGINEISRUNNING;
  IntegrationSample_Dcm_NegativeResponseCodeType Test_IntegrationSample_Dcm_NegativeResponseCodeType_V_6 = DCM_E_ENGINERUNTIMETOOLOW;
  IntegrationSample_Dcm_NegativeResponseCodeType Test_IntegrationSample_Dcm_NegativeResponseCodeType_V_7 = DCM_E_EXCEEDNUMBEROFATTEMPTS;
  IntegrationSample_Dcm_NegativeResponseCodeType Test_IntegrationSample_Dcm_NegativeResponseCodeType_V_8 = DCM_E_FAILUREPREVENTSEXECUTIONOFREQUESTEDACTION;
  IntegrationSample_Dcm_NegativeResponseCodeType Test_IntegrationSample_Dcm_NegativeResponseCodeType_V_9 = DCM_E_GENERALPROGRAMMINGFAILURE;
  IntegrationSample_Dcm_NegativeResponseCodeType Test_IntegrationSample_Dcm_NegativeResponseCodeType_V_10 = DCM_E_GENERALREJECT;
  IntegrationSample_Dcm_NegativeResponseCodeType Test_IntegrationSample_Dcm_NegativeResponseCodeType_V_11 = DCM_E_INCORRECTMESSAGELENGTHORINVALIDFORMAT;
  IntegrationSample_Dcm_NegativeResponseCodeType Test_IntegrationSample_Dcm_NegativeResponseCodeType_V_12 = DCM_E_INVALIDKEY;
  IntegrationSample_Dcm_NegativeResponseCodeType Test_IntegrationSample_Dcm_NegativeResponseCodeType_V_13 = DCM_E_NORESPONSEFROMSUBNETCOMPONENT;
  IntegrationSample_Dcm_NegativeResponseCodeType Test_IntegrationSample_Dcm_NegativeResponseCodeType_V_14 = DCM_E_REQUESTOUTOFRANGE;
  IntegrationSample_Dcm_NegativeResponseCodeType Test_IntegrationSample_Dcm_NegativeResponseCodeType_V_15 = DCM_E_REQUESTSEQUENCEERROR;
  IntegrationSample_Dcm_NegativeResponseCodeType Test_IntegrationSample_Dcm_NegativeResponseCodeType_V_16 = DCM_E_REQUIREDTIMEDELAYNOTEXPIRED;
  IntegrationSample_Dcm_NegativeResponseCodeType Test_IntegrationSample_Dcm_NegativeResponseCodeType_V_17 = DCM_E_RESPONSETOOLONG;
  IntegrationSample_Dcm_NegativeResponseCodeType Test_IntegrationSample_Dcm_NegativeResponseCodeType_V_18 = DCM_E_RPMTOOHIGH;
  IntegrationSample_Dcm_NegativeResponseCodeType Test_IntegrationSample_Dcm_NegativeResponseCodeType_V_19 = DCM_E_RPMTOOLOW;
  IntegrationSample_Dcm_NegativeResponseCodeType Test_IntegrationSample_Dcm_NegativeResponseCodeType_V_20 = DCM_E_SECURITYACCESSDENIED;
  IntegrationSample_Dcm_NegativeResponseCodeType Test_IntegrationSample_Dcm_NegativeResponseCodeType_V_21 = DCM_E_SERVICENOTSUPPORTED;
  IntegrationSample_Dcm_NegativeResponseCodeType Test_IntegrationSample_Dcm_NegativeResponseCodeType_V_22 = DCM_E_SERVICENOTSUPPORTEDINACTIVESESSION;
  IntegrationSample_Dcm_NegativeResponseCodeType Test_IntegrationSample_Dcm_NegativeResponseCodeType_V_23 = DCM_E_SHIFTERLEVERNOTINPARK;
  IntegrationSample_Dcm_NegativeResponseCodeType Test_IntegrationSample_Dcm_NegativeResponseCodeType_V_24 = DCM_E_SUBFUNCTIONNOTSUPPORTED;
  IntegrationSample_Dcm_NegativeResponseCodeType Test_IntegrationSample_Dcm_NegativeResponseCodeType_V_25 = DCM_E_SUBFUNCTIONNOTSUPPORTEDINACTIVESESSION;
  IntegrationSample_Dcm_NegativeResponseCodeType Test_IntegrationSample_Dcm_NegativeResponseCodeType_V_26 = DCM_E_TEMPERATURETOOHIGH;
  IntegrationSample_Dcm_NegativeResponseCodeType Test_IntegrationSample_Dcm_NegativeResponseCodeType_V_27 = DCM_E_TEMPERATURETOOLOW;
  IntegrationSample_Dcm_NegativeResponseCodeType Test_IntegrationSample_Dcm_NegativeResponseCodeType_V_28 = DCM_E_THROTTLE_PEDALTOOHIGH;
  IntegrationSample_Dcm_NegativeResponseCodeType Test_IntegrationSample_Dcm_NegativeResponseCodeType_V_29 = DCM_E_THROTTLE_PEDALTOOLOW;
  IntegrationSample_Dcm_NegativeResponseCodeType Test_IntegrationSample_Dcm_NegativeResponseCodeType_V_30 = DCM_E_TORQUECONVERTERCLUTCHLOCKED;
  IntegrationSample_Dcm_NegativeResponseCodeType Test_IntegrationSample_Dcm_NegativeResponseCodeType_V_31 = DCM_E_TRANSFERDATASUSPENDED;
  IntegrationSample_Dcm_NegativeResponseCodeType Test_IntegrationSample_Dcm_NegativeResponseCodeType_V_32 = DCM_E_TRANSMISSIONRANGENOTINGEAR;
  IntegrationSample_Dcm_NegativeResponseCodeType Test_IntegrationSample_Dcm_NegativeResponseCodeType_V_33 = DCM_E_TRANSMISSIONRANGENOTINNEUTRAL;
  IntegrationSample_Dcm_NegativeResponseCodeType Test_IntegrationSample_Dcm_NegativeResponseCodeType_V_34 = DCM_E_UPLOADDOWNLOADNOTACCEPTED;
  IntegrationSample_Dcm_NegativeResponseCodeType Test_IntegrationSample_Dcm_NegativeResponseCodeType_V_35 = DCM_E_VEHICLESPEEDTOOHIGH;
  IntegrationSample_Dcm_NegativeResponseCodeType Test_IntegrationSample_Dcm_NegativeResponseCodeType_V_36 = DCM_E_VEHICLESPEEDTOOLOW;
  IntegrationSample_Dcm_NegativeResponseCodeType Test_IntegrationSample_Dcm_NegativeResponseCodeType_V_37 = DCM_E_VOLTAGETOOHIGH;
  IntegrationSample_Dcm_NegativeResponseCodeType Test_IntegrationSample_Dcm_NegativeResponseCodeType_V_38 = DCM_E_VOLTAGETOOLOW;
  IntegrationSample_Dcm_NegativeResponseCodeType Test_IntegrationSample_Dcm_NegativeResponseCodeType_V_39 = DCM_E_WRONGBLOCKSEQUENCECOUNTER;
  IntegrationSample_Dcm_NegativeResponseCodeType Test_IntegrationSample_Dcm_NegativeResponseCodeType_V_40 = DCM_E_VMSCNC_0;
  IntegrationSample_Dcm_NegativeResponseCodeType Test_IntegrationSample_Dcm_NegativeResponseCodeType_V_41 = DCM_E_VMSCNC_1;
  IntegrationSample_Dcm_NegativeResponseCodeType Test_IntegrationSample_Dcm_NegativeResponseCodeType_V_42 = DCM_E_VMSCNC_2;
  IntegrationSample_Dcm_NegativeResponseCodeType Test_IntegrationSample_Dcm_NegativeResponseCodeType_V_43 = DCM_E_VMSCNC_3;
  IntegrationSample_Dcm_NegativeResponseCodeType Test_IntegrationSample_Dcm_NegativeResponseCodeType_V_44 = DCM_E_VMSCNC_4;
  IntegrationSample_Dcm_NegativeResponseCodeType Test_IntegrationSample_Dcm_NegativeResponseCodeType_V_45 = DCM_E_VMSCNC_5;
  IntegrationSample_Dcm_NegativeResponseCodeType Test_IntegrationSample_Dcm_NegativeResponseCodeType_V_46 = DCM_E_VMSCNC_6;
  IntegrationSample_Dcm_NegativeResponseCodeType Test_IntegrationSample_Dcm_NegativeResponseCodeType_V_47 = DCM_E_VMSCNC_7;
  IntegrationSample_Dcm_NegativeResponseCodeType Test_IntegrationSample_Dcm_NegativeResponseCodeType_V_48 = DCM_E_VMSCNC_8;
  IntegrationSample_Dcm_NegativeResponseCodeType Test_IntegrationSample_Dcm_NegativeResponseCodeType_V_49 = DCM_E_VMSCNC_9;
  IntegrationSample_Dcm_NegativeResponseCodeType Test_IntegrationSample_Dcm_NegativeResponseCodeType_V_50 = DCM_E_VMSCNC_A;
  IntegrationSample_Dcm_NegativeResponseCodeType Test_IntegrationSample_Dcm_NegativeResponseCodeType_V_51 = DCM_E_VMSCNC_B;
  IntegrationSample_Dcm_NegativeResponseCodeType Test_IntegrationSample_Dcm_NegativeResponseCodeType_V_52 = DCM_E_VMSCNC_C;
  IntegrationSample_Dcm_NegativeResponseCodeType Test_IntegrationSample_Dcm_NegativeResponseCodeType_V_53 = DCM_E_VMSCNC_D;
  IntegrationSample_Dcm_NegativeResponseCodeType Test_IntegrationSample_Dcm_NegativeResponseCodeType_V_54 = DCM_E_VMSCNC_E;

  IntegrationSample_EcuRunStateModeRequestType Test_IntegrationSample_EcuRunStateModeRequestType_V_1 = IntegrationSample_INVALID_STATE;
  IntegrationSample_EcuRunStateModeRequestType Test_IntegrationSample_EcuRunStateModeRequestType_V_2 = IntegrationSample_BSW_START;
  IntegrationSample_EcuRunStateModeRequestType Test_IntegrationSample_EcuRunStateModeRequestType_V_3 = IntegrationSample_STARTUP;
  IntegrationSample_EcuRunStateModeRequestType Test_IntegrationSample_EcuRunStateModeRequestType_V_4 = IntegrationSample_NORMAL_OPERATION;
  IntegrationSample_EcuRunStateModeRequestType Test_IntegrationSample_EcuRunStateModeRequestType_V_5 = IntegrationSample_SHUTDOWN;

  IntegrationSample_SimpleTimerStateType Test_IntegrationSample_SimpleTimerStateType_V_1 = IntegrationSample_Timer_FIRE;
  IntegrationSample_SimpleTimerStateType Test_IntegrationSample_SimpleTimerStateType_V_2 = IntegrationSample_Timer_IDLE;
  IntegrationSample_SimpleTimerStateType Test_IntegrationSample_SimpleTimerStateType_V_3 = IntegrationSample_Timer_RUNNING;

  IntegrationSample_Stm_CentralErrorLockType Test_IntegrationSample_Stm_CentralErrorLockType_V_1 = STM_CEL_UNLOCKED;
  IntegrationSample_Stm_CentralErrorLockType Test_IntegrationSample_Stm_CentralErrorLockType_V_2 = STM_CEL_LOCKED;
  IntegrationSample_Stm_CentralErrorLockType Test_IntegrationSample_Stm_CentralErrorLockType_V_3 = STM_CEL_INVALID;

  Rte_DT_VehicleState_Type_0 Test_Rte_DT_VehicleState_Type_0_V_1 = StatusEnergyFZM_ENSTATE_OK;
  Rte_DT_VehicleState_Type_0 Test_Rte_DT_VehicleState_Type_0_V_2 = StatusEnergyFZM_ENSTATE_GOOD;
  Rte_DT_VehicleState_Type_0 Test_Rte_DT_VehicleState_Type_0_V_3 = StatusEnergyFZM_ENSTATE_SHORTAGE;
  Rte_DT_VehicleState_Type_0 Test_Rte_DT_VehicleState_Type_0_V_4 = StatusEnergyFZM_signal_Unfilled;
  Rte_DT_VehicleState_Type_0 Test_Rte_DT_VehicleState_Type_0_V_5 = StatusEnergyFZM_ENSTATE_SEVERE_SHORTAGE;

  StatusEnergyFZM_Type Test_StatusEnergyFZM_Type_V_1 = StatusEnergyFZM_ENSTATE_OK;
  StatusEnergyFZM_Type Test_StatusEnergyFZM_Type_V_2 = StatusEnergyFZM_ENSTATE_GOOD;
  StatusEnergyFZM_Type Test_StatusEnergyFZM_Type_V_3 = StatusEnergyFZM_ENSTATE_SHORTAGE;
  StatusEnergyFZM_Type Test_StatusEnergyFZM_Type_V_4 = StatusEnergyFZM_signal_Unfilled;
  StatusEnergyFZM_Type Test_StatusEnergyFZM_Type_V_5 = StatusEnergyFZM_ENSTATE_SEVERE_SHORTAGE;

  StatusInterlockErrorMemoryFZM_Type Test_StatusInterlockErrorMemoryFZM_Type_V_1 = StatusInterlockErrorMemoryFZM_ErrorMemoryUnlock;
  StatusInterlockErrorMemoryFZM_Type Test_StatusInterlockErrorMemoryFZM_Type_V_2 = StatusInterlockErrorMemoryFZM_ErrorMemoryLock;
  StatusInterlockErrorMemoryFZM_Type Test_StatusInterlockErrorMemoryFZM_Type_V_3 = StatusInterlockErrorMemoryFZM_Reserved;
  StatusInterlockErrorMemoryFZM_Type Test_StatusInterlockErrorMemoryFZM_Type_V_4 = StatusInterlockErrorMemoryFZM_Signal_Unfilled;

  /* Modes */

  IntegrationSample_EcuRunStateModeRequestType Test_IntegrationSample_EcuRunState_MV_1 = RTE_MODE_IntegrationSample_EcuRunState_IntegrationSample_INVALID_STATE;
  IntegrationSample_EcuRunStateModeRequestType Test_IntegrationSample_EcuRunState_MV_2 = RTE_MODE_IntegrationSample_EcuRunState_IntegrationSample_BSW_START;
  IntegrationSample_EcuRunStateModeRequestType Test_IntegrationSample_EcuRunState_MV_3 = RTE_MODE_IntegrationSample_EcuRunState_IntegrationSample_STARTUP;
  IntegrationSample_EcuRunStateModeRequestType Test_IntegrationSample_EcuRunState_MV_4 = RTE_MODE_IntegrationSample_EcuRunState_IntegrationSample_NORMAL_OPERATION;
  IntegrationSample_EcuRunStateModeRequestType Test_IntegrationSample_EcuRunState_MV_5 = RTE_MODE_IntegrationSample_EcuRunState_IntegrationSample_SHUTDOWN;
  IntegrationSample_EcuRunStateModeRequestType Test_IntegrationSample_EcuRunState_TV = RTE_TRANSITION_IntegrationSample_EcuRunState;

  IntegrationSample_SimpleTimerStateType Test_IntegrationSample_SimpleTimerState_MV_1 = RTE_MODE_IntegrationSample_SimpleTimerState_IntegrationSample_Timer_IDLE;
  IntegrationSample_SimpleTimerStateType Test_IntegrationSample_SimpleTimerState_MV_2 = RTE_MODE_IntegrationSample_SimpleTimerState_IntegrationSample_Timer_RUNNING;
  IntegrationSample_SimpleTimerStateType Test_IntegrationSample_SimpleTimerState_MV_3 = RTE_MODE_IntegrationSample_SimpleTimerState_IntegrationSample_Timer_FIRE;
  IntegrationSample_SimpleTimerStateType Test_IntegrationSample_SimpleTimerState_TV = RTE_TRANSITION_IntegrationSample_SimpleTimerState;
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
