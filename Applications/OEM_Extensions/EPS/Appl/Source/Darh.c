/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Darh.c
 *        Config:  D:/usr/usage/Delivery/CBD17x/CBD1700369/D02/external/Applications/OEM_Extensions/EPS/EPS.dpa
 *     SW-C Type:  Darh
 *  Generated at:  Tue Aug 15 17:22:11 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.15.0
 *                 RTE Core Version 1.15.0
 *       License:  Unlimited license CBD1700369 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <Darh>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779 */

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
 * Darh_DcmIndicationType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Darh_LifeCycleRequestType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Darh_RoeStateType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Darh_SuspendedStateType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Dcm_ConfirmationStatusType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Dcm_NegativeResponseCodeType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Dcm_OpStatusType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Dem_DTCFormatType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Dem_EventIdType
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * Dem_EventStatusType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * NvM_RequestResultType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 *********************************************************************************************************************/

#include "Rte_Darh.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


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
 * Dem_EventIdType: Integer in interval [1...73]
 * NvM_SrcPtrType: DataReference
 * boolean: Boolean (standard type)
 * uint16: Integer in interval [0...65535] (standard type)
 * uint32: Integer in interval [0...4294967295] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * Darh_DcmIndicationType: Enumeration of integer in interval [0...255] with enumerators
 *   DARH_DCM_NOINDICATION (0U)
 *   DARH_DCM_ACTIVATED (1U)
 *   DARH_DCM_STOPPED (2U)
 * Darh_LifeCycleRequestType: Enumeration of integer in interval [0...255] with enumerators
 *   DARH_INITIALIZED (0U)
 *   DARH_RUNNING (1U)
 *   DARH_STOPPED (2U)
 * Darh_RoeStateType: Enumeration of integer in interval [0...255] with enumerators
 *   DARH_ROE_UNKNOWN (0U)
 *   DARH_ROE_STARTED (1U)
 *   DARH_ROE_STOPPED (2U)
 * Darh_SuspendedStateType: Enumeration of integer in interval [0...255] with enumerators
 *   DARH_NOT_SUSPENDED (0U)
 *   DARH_SUSPENDED (1U)
 * Dcm_ConfirmationStatusType: Enumeration of integer in interval [0...3] with enumerators
 *   DCM_RES_POS_OK (0U)
 *   DCM_RES_POS_NOT_OK (1U)
 *   DCM_RES_NEG_OK (2U)
 *   DCM_RES_NEG_NOT_OK (3U)
 * Dcm_NegativeResponseCodeType: Enumeration of integer in interval [16...254] with enumerators
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
 * Dcm_OpStatusType: Enumeration of integer in interval [0...3] with enumerators
 *   DCM_INITIAL (0U)
 *   DCM_PENDING (1U)
 *   DCM_CANCEL (2U)
 *   DCM_FORCE_RCRRP_OK (3U)
 * Dem_DTCFormatType: Enumeration of integer in interval [0...2] with enumerators
 *   DEM_DTC_FORMAT_OBD (0U)
 *   DEM_DTC_FORMAT_UDS (1U)
 *   DEM_DTC_FORMAT_J1939 (2U)
 * Dem_EventStatusType: Enumeration of integer in interval [0...4] with enumerators
 *   DEM_EVENT_STATUS_PASSED (0U)
 *   DEM_EVENT_STATUS_FAILED (1U)
 *   DEM_EVENT_STATUS_PREPASSED (2U)
 *   DEM_EVENT_STATUS_PREFAILED (3U)
 *   DEM_EVENT_STATUS_FDC_THRESHOLD_REACHED (4U)
 * NvM_RequestResultType: Enumeration of integer in interval [0...8] with enumerators
 *   NVM_REQ_OK (0U)
 *   NVM_REQ_NOT_OK (1U)
 *   NVM_REQ_PENDING (2U)
 *   NVM_REQ_INTEGRITY_FAILED (3U)
 *   NVM_REQ_BLOCK_SKIPPED (4U)
 *   NVM_REQ_NV_INVALIDATED (5U)
 *   NVM_REQ_CANCELED (6U)
 *   NVM_REQ_REDUNDANCY_FAILED (7U)
 *   NVM_REQ_RESTORED_FROM_ROM (8U)
 *
 * Array Types:
 * ============
 * Darh_ActivelyReportedErrorListType: Array with 6 element(s) of type uint8
 * Darh_ErrorQueueDataType: Array with 21 element(s) of type uint8
 * Darh_RoeState_ReadData_Data_ArrayType: Array with 1 element(s) of type uint8
 * Dcm_RequestData_ArrayType: Array with 1024 element(s) of type uint8
 * Dem_MaxDataValueType: Array with 18 element(s) of type uint8
 *
 *********************************************************************************************************************/


#define Darh_START_SEC_CODE
#include "Darh_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ConditionCheckRead
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DmDtcAktiveMeldung>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Darh_LifeCycleRequestType Rte_Mode_LifeCycle_Mode(Darh_LifeCycleRequestType *previousMode, Darh_LifeCycleRequestType *nextMode)
 *   Modes of Rte_ModeType_Darh_LifeCycle:
 *   - RTE_MODE_Darh_LifeCycle_DARH_INITIALIZED
 *   - RTE_MODE_Darh_LifeCycle_DARH_RUNNING
 *   - RTE_MODE_Darh_LifeCycle_DARH_STOPPED
 *   - RTE_TRANSITION_Darh_LifeCycle
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_DetPort_ReportError(uint8 InstanceId, uint8 ApiId, uint8 ErrorId)
 *     Synchronous Service Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_NvmServicePort_SetRamBlockStatus(boolean BlockChanged)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_Darh_NvMService_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Darh_ConditionCheckReadErrorQueue(Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_ErrorQueue_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: ConditionCheckRead_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, Darh_CODE) Darh_ConditionCheckReadErrorQueue(P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DARH_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Darh_ConditionCheckReadErrorQueue (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ConditionCheckReadActivelyReportedDtc
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DmIsDtcActiveResponse>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Darh_LifeCycleRequestType Rte_Mode_LifeCycle_Mode(Darh_LifeCycleRequestType *previousMode, Darh_LifeCycleRequestType *nextMode)
 *   Modes of Rte_ModeType_Darh_LifeCycle:
 *   - RTE_MODE_Darh_LifeCycle_DARH_INITIALIZED
 *   - RTE_MODE_Darh_LifeCycle_DARH_RUNNING
 *   - RTE_MODE_Darh_LifeCycle_DARH_STOPPED
 *   - RTE_TRANSITION_Darh_LifeCycle
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_DetPort_ReportError(uint8 InstanceId, uint8 ApiId, uint8 ErrorId)
 *     Synchronous Service Invocation. Timeout: None
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Darh_ConditionCheckReadActivelyReportedDtc(Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_ActivelyReportedDtc_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: ConditionCheckReadActivelyReportedDtc_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, Darh_CODE) Darh_ConditionCheckReadActivelyReportedDtc(P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DARH_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Darh_ConditionCheckReadActivelyReportedDtc (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ConditionCheckReadRoeState
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <RoeStatePort>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Darh_LifeCycleRequestType Rte_Mode_LifeCycle_Mode(Darh_LifeCycleRequestType *previousMode, Darh_LifeCycleRequestType *nextMode)
 *   Modes of Rte_ModeType_Darh_LifeCycle:
 *   - RTE_MODE_Darh_LifeCycle_DARH_INITIALIZED
 *   - RTE_MODE_Darh_LifeCycle_DARH_RUNNING
 *   - RTE_MODE_Darh_LifeCycle_DARH_STOPPED
 *   - RTE_TRANSITION_Darh_LifeCycle
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_DetPort_ReportError(uint8 InstanceId, uint8 ApiId, uint8 ErrorId)
 *     Synchronous Service Invocation. Timeout: None
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Darh_ConditionCheckReadRoeState(Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_RoeState_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: ConditionCheckReadRoeState_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, Darh_CODE) Darh_ConditionCheckReadRoeState(P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DARH_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Darh_ConditionCheckReadRoeState (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: EventDataChanged
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <EventDataChanged> of PortPrototype <EventDataChangedPort>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Darh_LifeCycleRequestType Rte_Mode_LifeCycle_Mode(Darh_LifeCycleRequestType *previousMode, Darh_LifeCycleRequestType *nextMode)
 *   Modes of Rte_ModeType_Darh_LifeCycle:
 *   - RTE_MODE_Darh_LifeCycle_DARH_INITIALIZED
 *   - RTE_MODE_Darh_LifeCycle_DARH_RUNNING
 *   - RTE_MODE_Darh_LifeCycle_DARH_STOPPED
 *   - RTE_TRANSITION_Darh_LifeCycle
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_DetPort_ReportError(uint8 InstanceId, uint8 ApiId, uint8 ErrorId)
 *     Synchronous Service Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GeneralDiagnosticInfoPort_GetEventFreezeFrameData(Dem_EventIdType EventId, uint8 RecordNumber, boolean ReportTotalRecord, uint16 DataId, uint8 *DestBuffer)
 *     Argument DestBuffer: uint8* is of type Dem_MaxDataValueType
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_Darh_GeneralDiagnosticInfo_DEM_E_NODATAAVAILABLE, RTE_E_Darh_GeneralDiagnosticInfo_DEM_E_WRONG_DIDNUMBER, RTE_E_Darh_GeneralDiagnosticInfo_DEM_E_WRONG_RECORDNUMBER, RTE_E_Darh_GeneralDiagnosticInfo_E_NOT_OK
 *   Std_ReturnType Rte_Call_NvmServicePort_SetRamBlockStatus(boolean BlockChanged)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_Darh_NvMService_E_NOT_OK
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_ExclusiveArea_0(void)
 *   void Rte_Exit_ExclusiveArea_0(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void Darh_EventDataChanged(Dem_EventIdType EventId)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: EventDataChanged_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, Darh_CODE) Darh_EventDataChanged(Dem_EventIdType EventId) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Darh_EventDataChanged
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: LifeCycleHandler
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on DataReceivedEvent for DataElementPrototype <requestMode> of PortPrototype <LifeCycleRequest>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Implicit S/R API:
 *   -----------------
 *   Darh_LifeCycleRequestType Rte_IRead_LifeCycleHandler_LifeCycleRequest_requestMode(void)
 *
 * Mode Interfaces:
 * ================
 *   Std_ReturnType Rte_Switch_LifeCycle_Mode(Darh_LifeCycleRequestType mode)
 *   Modes of Rte_ModeType_Darh_LifeCycle:
 *   - RTE_MODE_Darh_LifeCycle_DARH_INITIALIZED
 *   - RTE_MODE_Darh_LifeCycle_DARH_RUNNING
 *   - RTE_MODE_Darh_LifeCycle_DARH_STOPPED
 *   - RTE_TRANSITION_Darh_LifeCycle
 *   Darh_LifeCycleRequestType Rte_Mode_LifeCycle_Mode(Darh_LifeCycleRequestType *previousMode, Darh_LifeCycleRequestType *nextMode)
 *   Modes of Rte_ModeType_Darh_LifeCycle:
 *   - RTE_MODE_Darh_LifeCycle_DARH_INITIALIZED
 *   - RTE_MODE_Darh_LifeCycle_DARH_RUNNING
 *   - RTE_MODE_Darh_LifeCycle_DARH_STOPPED
 *   - RTE_TRANSITION_Darh_LifeCycle
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_ExclusiveArea_0(void)
 *   void Rte_Exit_ExclusiveArea_0(void)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: LifeCycleHandler_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, Darh_CODE) Darh_LifeCycleHandler(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Darh_LifeCycleHandler
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: QueueHandler
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 1s
 *     and not in Mode(s) <DARH_INITIALIZED, DARH_STOPPED>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Darh_LifeCycleRequestType Rte_Mode_LifeCycle_Mode(Darh_LifeCycleRequestType *previousMode, Darh_LifeCycleRequestType *nextMode)
 *   Modes of Rte_ModeType_Darh_LifeCycle:
 *   - RTE_MODE_Darh_LifeCycle_DARH_INITIALIZED
 *   - RTE_MODE_Darh_LifeCycle_DARH_RUNNING
 *   - RTE_MODE_Darh_LifeCycle_DARH_STOPPED
 *   - RTE_TRANSITION_Darh_LifeCycle
 *   uint8 Rte_Mode_ReportErrorMode_DarhReportErrorMode(void)
 *   Modes of Rte_ModeType_DarhReportErrorMode:
 *   - RTE_MODE_DarhReportErrorMode_DARH_REPORT_ERROR_ACTIVE
 *   - RTE_MODE_DarhReportErrorMode_DARH_REPORT_ERROR_INACTIVE
 *   - RTE_TRANSITION_DarhReportErrorMode
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_DetPort_ReportError(uint8 InstanceId, uint8 ApiId, uint8 ErrorId)
 *     Synchronous Service Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_RoeTriggerPort_TriggerOnEvent(void)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DCM_Roe_E_NOT_OK
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_ExclusiveArea_0(void)
 *   void Rte_Exit_ExclusiveArea_0(void)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: QueueHandler_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, Darh_CODE) Darh_QueueHandler(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Darh_QueueHandler
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ReadActivelyReportedDtc
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DmIsDtcActiveResponse>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Darh_LifeCycleRequestType Rte_Mode_LifeCycle_Mode(Darh_LifeCycleRequestType *previousMode, Darh_LifeCycleRequestType *nextMode)
 *   Modes of Rte_ModeType_Darh_LifeCycle:
 *   - RTE_MODE_Darh_LifeCycle_DARH_INITIALIZED
 *   - RTE_MODE_Darh_LifeCycle_DARH_RUNNING
 *   - RTE_MODE_Darh_LifeCycle_DARH_STOPPED
 *   - RTE_TRANSITION_Darh_LifeCycle
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_DetPort_ReportError(uint8 InstanceId, uint8 ApiId, uint8 ErrorId)
 *     Synchronous Service Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GeneralDiagnosticInfoPort_GetDTCOfEvent(Dem_EventIdType EventId, Dem_DTCFormatType DTCFormat, uint32 *DTCOfEvent)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_Darh_GeneralDiagnosticInfo_DEM_E_NO_DTC_AVAILABLE, RTE_E_Darh_GeneralDiagnosticInfo_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Darh_ReadActivelyReportedDtc(uint8 *Data)
 *     Argument Data: uint8* is of type Darh_ActivelyReportedErrorListType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_ActivelyReportedDtc_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: ReadActivelyReportedDtc_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, Darh_CODE) Darh_ReadActivelyReportedDtc(P2VAR(uint8, AUTOMATIC, RTE_DARH_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Darh_ReadActivelyReportedDtc (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ReadActivelyReportedDtcLength
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadDataLength> of PortPrototype <DmIsDtcActiveResponse>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Darh_LifeCycleRequestType Rte_Mode_LifeCycle_Mode(Darh_LifeCycleRequestType *previousMode, Darh_LifeCycleRequestType *nextMode)
 *   Modes of Rte_ModeType_Darh_LifeCycle:
 *   - RTE_MODE_Darh_LifeCycle_DARH_INITIALIZED
 *   - RTE_MODE_Darh_LifeCycle_DARH_RUNNING
 *   - RTE_MODE_Darh_LifeCycle_DARH_STOPPED
 *   - RTE_TRANSITION_Darh_LifeCycle
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_DetPort_ReportError(uint8 InstanceId, uint8 ApiId, uint8 ErrorId)
 *     Synchronous Service Invocation. Timeout: None
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Darh_ReadActivelyReportedDtcLength(uint16 *DataLength)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_ActivelyReportedDtc_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: ReadActivelyReportedDtcLength_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, Darh_CODE) Darh_ReadActivelyReportedDtcLength(P2VAR(uint16, AUTOMATIC, RTE_DARH_APPL_VAR) DataLength) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Darh_ReadActivelyReportedDtcLength (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ReadDataRoeState
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <RoeStatePort>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Darh_LifeCycleRequestType Rte_Mode_LifeCycle_Mode(Darh_LifeCycleRequestType *previousMode, Darh_LifeCycleRequestType *nextMode)
 *   Modes of Rte_ModeType_Darh_LifeCycle:
 *   - RTE_MODE_Darh_LifeCycle_DARH_INITIALIZED
 *   - RTE_MODE_Darh_LifeCycle_DARH_RUNNING
 *   - RTE_MODE_Darh_LifeCycle_DARH_STOPPED
 *   - RTE_TRANSITION_Darh_LifeCycle
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_DetPort_ReportError(uint8 InstanceId, uint8 ApiId, uint8 ErrorId)
 *     Synchronous Service Invocation. Timeout: None
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_ExclusiveArea_0(void)
 *   void Rte_Exit_ExclusiveArea_0(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Darh_ReadDataRoeState(uint8 *Data)
 *     Argument Data: uint8* is of type Darh_RoeState_ReadData_Data_ArrayType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_RoeState_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: ReadDataRoeState_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, Darh_CODE) Darh_ReadDataRoeState(P2VAR(uint8, AUTOMATIC, RTE_DARH_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Darh_ReadDataRoeState (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ReadErrorQueue
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DmDtcAktiveMeldung>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Darh_LifeCycleRequestType Rte_Mode_LifeCycle_Mode(Darh_LifeCycleRequestType *previousMode, Darh_LifeCycleRequestType *nextMode)
 *   Modes of Rte_ModeType_Darh_LifeCycle:
 *   - RTE_MODE_Darh_LifeCycle_DARH_INITIALIZED
 *   - RTE_MODE_Darh_LifeCycle_DARH_RUNNING
 *   - RTE_MODE_Darh_LifeCycle_DARH_STOPPED
 *   - RTE_TRANSITION_Darh_LifeCycle
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_DetPort_ReportError(uint8 InstanceId, uint8 ApiId, uint8 ErrorId)
 *     Synchronous Service Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GeneralDiagnosticInfoPort_GetDTCOfEvent(Dem_EventIdType EventId, Dem_DTCFormatType DTCFormat, uint32 *DTCOfEvent)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_Darh_GeneralDiagnosticInfo_DEM_E_NO_DTC_AVAILABLE, RTE_E_Darh_GeneralDiagnosticInfo_E_NOT_OK
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_ExclusiveArea_0(void)
 *   void Rte_Exit_ExclusiveArea_0(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Darh_ReadErrorQueue(uint8 *data)
 *     Argument data: uint8* is of type Darh_ErrorQueueDataType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_ErrorQueue_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: ReadErrorQueue_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, Darh_CODE) Darh_ReadErrorQueue(P2VAR(uint8, AUTOMATIC, RTE_DARH_APPL_VAR) data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Darh_ReadErrorQueue (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ReadErrorQueueLength
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadDataLength> of PortPrototype <DmDtcAktiveMeldung>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Darh_LifeCycleRequestType Rte_Mode_LifeCycle_Mode(Darh_LifeCycleRequestType *previousMode, Darh_LifeCycleRequestType *nextMode)
 *   Modes of Rte_ModeType_Darh_LifeCycle:
 *   - RTE_MODE_Darh_LifeCycle_DARH_INITIALIZED
 *   - RTE_MODE_Darh_LifeCycle_DARH_RUNNING
 *   - RTE_MODE_Darh_LifeCycle_DARH_STOPPED
 *   - RTE_TRANSITION_Darh_LifeCycle
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_DetPort_ReportError(uint8 InstanceId, uint8 ApiId, uint8 ErrorId)
 *     Synchronous Service Invocation. Timeout: None
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_ExclusiveArea_0(void)
 *   void Rte_Exit_ExclusiveArea_0(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Darh_ReadErrorQueueLength(uint16 *DataLength)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_ErrorQueue_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: ReadErrorQueueLength_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, Darh_CODE) Darh_ReadErrorQueueLength(P2VAR(uint16, AUTOMATIC, RTE_DARH_APPL_VAR) DataLength) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Darh_ReadErrorQueueLength (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RoeManufacturerConfirmation
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Confirmation> of PortPrototype <Indication>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Darh_LifeCycleRequestType Rte_Mode_LifeCycle_Mode(Darh_LifeCycleRequestType *previousMode, Darh_LifeCycleRequestType *nextMode)
 *   Modes of Rte_ModeType_Darh_LifeCycle:
 *   - RTE_MODE_Darh_LifeCycle_DARH_INITIALIZED
 *   - RTE_MODE_Darh_LifeCycle_DARH_RUNNING
 *   - RTE_MODE_Darh_LifeCycle_DARH_STOPPED
 *   - RTE_TRANSITION_Darh_LifeCycle
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_NvmServicePort_SetRamBlockStatus(boolean BlockChanged)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_Darh_NvMService_E_NOT_OK
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_ExclusiveArea_0(void)
 *   void Rte_Exit_ExclusiveArea_0(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Darh_RoeManufacturerConfirmation(uint8 SID, uint8 ReqType, uint16 SourceAddress, Dcm_ConfirmationStatusType ConfirmationStatus)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_Darh_ServiceRequestNotification_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RoeManufacturerConfirmation_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, Darh_CODE) Darh_RoeManufacturerConfirmation(uint8 SID, uint8 ReqType, uint16 SourceAddress, Dcm_ConfirmationStatusType ConfirmationStatus) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Darh_RoeManufacturerConfirmation (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RoeManufacturerIndication
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Indication> of PortPrototype <Indication>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Darh_LifeCycleRequestType Rte_Mode_LifeCycle_Mode(Darh_LifeCycleRequestType *previousMode, Darh_LifeCycleRequestType *nextMode)
 *   Modes of Rte_ModeType_Darh_LifeCycle:
 *   - RTE_MODE_Darh_LifeCycle_DARH_INITIALIZED
 *   - RTE_MODE_Darh_LifeCycle_DARH_RUNNING
 *   - RTE_MODE_Darh_LifeCycle_DARH_STOPPED
 *   - RTE_TRANSITION_Darh_LifeCycle
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_DetPort_ReportError(uint8 InstanceId, uint8 ApiId, uint8 ErrorId)
 *     Synchronous Service Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_NvmServiceAddressPort_GetErrorStatus(NvM_RequestResultType *RequestResultPtr)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_Darh_NvMService_E_NOT_OK
 *   Std_ReturnType Rte_Call_NvmServiceAddressPort_WriteBlock(NvM_SrcPtrType SrcPtr)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_Darh_NvMService_E_NOT_OK
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_ExclusiveArea_0(void)
 *   void Rte_Exit_ExclusiveArea_0(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Darh_RoeManufacturerIndication(uint8 SID, const uint8 *RequestData, uint16 DataSize, uint8 ReqType, uint16 SourceAddress, Dcm_NegativeResponseCodeType *ErrorCode)
 *     Argument RequestData: uint8* is of type Dcm_RequestData_ArrayType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_Darh_ServiceRequestNotification_E_NOT_OK
 *   RTE_E_Darh_ServiceRequestNotification_E_REQUEST_NOT_ACCEPTED
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RoeManufacturerIndication_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, Darh_CODE) Darh_RoeManufacturerIndication(uint8 SID, P2CONST(uint8, AUTOMATIC, RTE_DARH_APPL_DATA) RequestData, uint16 DataSize, uint8 ReqType, uint16 SourceAddress, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DARH_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Darh_RoeManufacturerIndication (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RoeStartStop
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on entering of Mode <EVENT_STARTED> of ModeDeclarationGroupPrototype <currentMode> of PortPrototype <RoeIndicationPort>
 *   - triggered on entering of Mode <EVENT_STOPPED> of ModeDeclarationGroupPrototype <currentMode> of PortPrototype <RoeIndicationPort>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Darh_LifeCycleRequestType Rte_Mode_LifeCycle_Mode(Darh_LifeCycleRequestType *previousMode, Darh_LifeCycleRequestType *nextMode)
 *   Modes of Rte_ModeType_Darh_LifeCycle:
 *   - RTE_MODE_Darh_LifeCycle_DARH_INITIALIZED
 *   - RTE_MODE_Darh_LifeCycle_DARH_RUNNING
 *   - RTE_MODE_Darh_LifeCycle_DARH_STOPPED
 *   - RTE_TRANSITION_Darh_LifeCycle
 *   uint8 Rte_Mode_RoeIndicationPort_currentMode(uint8 *previousMode, uint8 *nextMode)
 *   Modes of Rte_ModeType_DcmResponseOnEvent:
 *   - RTE_MODE_DcmResponseOnEvent_EVENT_CLEARED
 *   - RTE_MODE_DcmResponseOnEvent_EVENT_STARTED
 *   - RTE_MODE_DcmResponseOnEvent_EVENT_STOPPED
 *   - RTE_TRANSITION_DcmResponseOnEvent
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_DetPort_ReportError(uint8 InstanceId, uint8 ApiId, uint8 ErrorId)
 *     Synchronous Service Invocation. Timeout: None
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_ExclusiveArea_0(void)
 *   void Rte_Exit_ExclusiveArea_0(void)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RoeStartStop_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, Darh_CODE) Darh_ActivateEvent(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Darh_ActivateEvent
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SetRoeSuspended
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <SetRoeSuspended> of PortPrototype <ControlPort>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Darh_LifeCycleRequestType Rte_Mode_LifeCycle_Mode(Darh_LifeCycleRequestType *previousMode, Darh_LifeCycleRequestType *nextMode)
 *   Modes of Rte_ModeType_Darh_LifeCycle:
 *   - RTE_MODE_Darh_LifeCycle_DARH_INITIALIZED
 *   - RTE_MODE_Darh_LifeCycle_DARH_RUNNING
 *   - RTE_MODE_Darh_LifeCycle_DARH_STOPPED
 *   - RTE_TRANSITION_Darh_LifeCycle
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_DetPort_ReportError(uint8 InstanceId, uint8 ApiId, uint8 ErrorId)
 *     Synchronous Service Invocation. Timeout: None
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_ExclusiveArea_0(void)
 *   void Rte_Exit_ExclusiveArea_0(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Darh_SetRoeSuspended(boolean suspended)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DarhControlInterface_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: SetRoeSuspended_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, Darh_CODE) Darh_SetRoeSuspended(boolean suspended) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Darh_SetRoeSuspended (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: StartRoutineTriggerDtc
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Start> of PortPrototype <DmClientTriggerDtcEntry>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Darh_LifeCycleRequestType Rte_Mode_LifeCycle_Mode(Darh_LifeCycleRequestType *previousMode, Darh_LifeCycleRequestType *nextMode)
 *   Modes of Rte_ModeType_Darh_LifeCycle:
 *   - RTE_MODE_Darh_LifeCycle_DARH_INITIALIZED
 *   - RTE_MODE_Darh_LifeCycle_DARH_RUNNING
 *   - RTE_MODE_Darh_LifeCycle_DARH_STOPPED
 *   - RTE_TRANSITION_Darh_LifeCycle
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_ApplicationDTCInfoPort_GetDTCOfEvent(Dem_DTCFormatType DTCFormat, uint32 *DTCOfEvent)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_Darh_DiagnosticInfo_DEM_E_NO_DTC_AVAILABLE, RTE_E_Darh_DiagnosticInfo_E_NOT_OK
 *   Std_ReturnType Rte_Call_DetPort_ReportError(uint8 InstanceId, uint8 ApiId, uint8 ErrorId)
 *     Synchronous Service Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_DmTestAppl_SetEventStatus(Dem_EventStatusType EventStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_Darh_DiagnosticMonitor_E_NOT_OK
 *   Std_ReturnType Rte_Call_DmTestCom_SetEventStatus(Dem_EventStatusType EventStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_Darh_DiagnosticMonitor_E_NOT_OK
 *   Std_ReturnType Rte_Call_NetworkDTCInfoPort_GetDTCOfEvent(Dem_DTCFormatType DTCFormat, uint32 *DTCOfEvent)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_Darh_DiagnosticInfo_DEM_E_NO_DTC_AVAILABLE, RTE_E_Darh_DiagnosticInfo_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Darh_StartRoutineTriggerDtc(uint8 DTCType, Dcm_OpStatusType OpStatus, uint8 *DTCTypeOut, uint8 *DTCByte1, uint8 *DTCByte2, uint8 *DTCByte3, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_TriggerDTC_DCM_E_FORCE_RCRRP
 *   RTE_E_RoutineServices_TriggerDTC_DCM_E_PENDING
 *   RTE_E_RoutineServices_TriggerDTC_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: StartRoutineTriggerDtc_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, Darh_CODE) Darh_StartRoutineTriggerDtc(uint8 DTCType, Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DARH_APPL_VAR) DTCTypeOut, P2VAR(uint8, AUTOMATIC, RTE_DARH_APPL_VAR) DTCByte1, P2VAR(uint8, AUTOMATIC, RTE_DARH_APPL_VAR) DTCByte2, P2VAR(uint8, AUTOMATIC, RTE_DARH_APPL_VAR) DTCByte3, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DARH_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Darh_StartRoutineTriggerDtc (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define Darh_STOP_SEC_CODE
#include "Darh_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
