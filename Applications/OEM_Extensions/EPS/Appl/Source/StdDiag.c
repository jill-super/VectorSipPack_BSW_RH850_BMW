/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  StdDiag.c
 *        Config:  D:/usr/usage/Delivery/CBD17x/CBD1700369/D02/external/Applications/OEM_Extensions/EPS/EPS.dpa
 *     SW-C Type:  StdDiag
 *  Generated at:  Tue Aug 15 17:22:17 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.15.0
 *                 RTE Core Version 1.15.0
 *       License:  Unlimited license CBD1700369 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <StdDiag>
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
 * Dcm_SecLevelType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Dcm_SesCtrlType
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
 * Dem_DTCOriginType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * NormalCommunicationModeType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Omc_ExtendedOperatingModeType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Omc_OperatingModeType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * StdDiag_LifeCycleRequestType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 *********************************************************************************************************************/

#include "Rte_StdDiag.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


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
 * boolean: Boolean (standard type)
 * uint16: Integer in interval [0...65535] (standard type)
 * uint32: Integer in interval [0...4294967295] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
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
 * Dcm_SecLevelType: Enumeration of integer in interval [0...1] with enumerators
 *   DCM_SEC_LEV_LOCKED (0U)
 *   DcmDspSecurityRow_Coding (1U)
 * Dcm_SesCtrlType: Enumeration of integer in interval [1...66] with enumerators
 *   DCM_DEFAULT_SESSION (1U)
 *   DCM_PROGRAMMING_SESSION (2U)
 *   DCM_EXTENDED_DIAGNOSTIC_SESSION (3U)
 *   DCM_SAFETY_SYSTEM_DIAGNOSTIC_SESSION (4U)
 *   DCM_CODING_SESSION (65U)
 *   DCM_SWT_SESSION (66U)
 * Dem_DTCFormatType: Enumeration of integer in interval [0...2] with enumerators
 *   DEM_DTC_FORMAT_OBD (0U)
 *   DEM_DTC_FORMAT_UDS (1U)
 *   DEM_DTC_FORMAT_J1939 (2U)
 * Dem_DTCOriginType: Enumeration of integer in interval [1...257] with enumerators
 *   DEM_DTC_ORIGIN_PRIMARY_MEMORY (1U)
 *   DEM_DTC_ORIGIN_MIRROR_MEMORY (2U)
 *   DEM_DTC_ORIGIN_PERMANENT_MEMORY (3U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_BMWSecondaryErrorMemory (257U)
 * NormalCommunicationModeType: Enumeration of integer in interval [0...255] with enumerators
 *   DISABLE_RX_AND_TX_NORMAL (0U)
 *   DISABLE_RX_ENABLE_TX_NORMAL (1U)
 *   ENABLE_RX_AND_TX_NORMAL (2U)
 *   ENABLE_RX_DISABLE_TX_NORMAL (3U)
 * Omc_ExtendedOperatingModeType: Enumeration of integer in interval [0...255] with enumerators
 *   OMC_MODE_EXTENSION_NORMAL (0U)
 *   OMC_MODE_EXTENSION_1 (1U)
 *   OMC_MODE_EXTENSION_2 (2U)
 *   OMC_MODE_EXTENSION_3 (3U)
 *   OMC_MODE_EXTENSION_4 (4U)
 *   OMC_MODE_EXTENSION_5 (5U)
 *   OMC_MODE_EXTENSION_6 (6U)
 *   OMC_MODE_EXTENSION_7 (7U)
 *   OMC_MODE_EXTENSION_8 (8U)
 *   OMC_MODE_EXTENSION_9 (9U)
 *   OMC_MODE_EXTENSION_10 (10U)
 *   OMC_MODE_EXTENSION_11 (11U)
 *   OMC_MODE_EXTENSION_12 (12U)
 *   OMC_MODE_EXTENSION_13 (13U)
 *   OMC_MODE_EXTENSION_14 (14U)
 *   OMC_MODE_EXTENSION_SAVE_ENERGY (15U)
 *   OMC_MODE_EXTENSION_INVALID (255U)
 * Omc_OperatingModeType: Enumeration of integer in interval [0...255] with enumerators
 *   OMC_MODE_NORMAL (0U)
 *   OMC_MODE_ASSEMBLY (1U)
 *   OMC_MODE_TRANSPORT (2U)
 *   OMC_MODE_BMW_FLASH (3U)
 * StdDiag_LifeCycleRequestType: Enumeration of integer in interval [0...255] with enumerators
 *   STDDIAG_INITIALIZED (0U)
 *   STDDIAG_RUNNING (1U)
 *   STDDIAG_STOPPED (2U)
 *
 * Array Types:
 * ============
 * ActiveDiagSession_ArrayType: Array with 1 element(s) of type uint8
 * ActiveSessionState_ArrayType: Array with 1 element(s) of type uint8
 * CheckProgrammingPreconditions_ArrayType: Array with 256 element(s) of type uint8
 * DiagCommLoopback_ArrayType: Array with 1024 element(s) of type uint8
 * RequestDataArray: Array with 1024 element(s) of type uint8
 *
 *********************************************************************************************************************/


#define StdDiag_START_SEC_CODE
#include "StdDiag_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ConditionCheckActiveDiagSession
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <ActiveDiagnosticSession>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_DCMServicesPort_GetSesCtrlType(Dcm_SesCtrlType *SesCtrlType)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_StdDiagDCMServices_E_NOT_OK, RTE_E_StdDiagDCMServices_E_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType StdDiag_ConditionCheckActiveDiagSession(Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_ActiveDiagSession_E_NOT_OK
 *   RTE_E_DataServices_ActiveDiagSession_E_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: ConditionCheckActiveDiagSession_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, StdDiag_CODE) StdDiag_ConditionCheckActiveDiagSession(P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_STDDIAG_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: StdDiag_ConditionCheckActiveDiagSession (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ConditionCheckActiveSessionState
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <ActiveSessionState>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_DCMServicesPort_GetSecurityLevel(Dcm_SecLevelType *SecLevel)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_StdDiagDCMServices_E_NOT_OK, RTE_E_StdDiagDCMServices_E_OK
 *   Std_ReturnType Rte_Call_DCMServicesPort_GetSesCtrlType(Dcm_SesCtrlType *SesCtrlType)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_StdDiagDCMServices_E_NOT_OK, RTE_E_StdDiagDCMServices_E_OK
 *   Std_ReturnType Rte_Call_ReportErrorPort_ReportError(uint8 InstanceId, uint8 ApiId, uint8 ErrorId)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DETService_E_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType StdDiag_ConditionCheckActiveSessionState(Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_ActiveSessionState_E_NOT_OK
 *   RTE_E_DataServices_ActiveSessionState_E_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: ConditionCheckActiveSessionState_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, StdDiag_CODE) StdDiag_ConditionCheckActiveSessionState(P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_STDDIAG_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: StdDiag_ConditionCheckActiveSessionState (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

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
 *   StdDiag_LifeCycleRequestType Rte_IRead_LifeCycleHandler_LifeCycleRequest_requestMode(void)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_ComControlModeRequestPort_requestedMode(NormalCommunicationModeType data)
 *
 * Mode Interfaces:
 * ================
 *   Std_ReturnType Rte_Switch_LifeCycle_Mode(StdDiag_LifeCycleRequestType mode)
 *   Modes of Rte_ModeType_StdDiag_LifeCycle:
 *   - RTE_MODE_StdDiag_LifeCycle_STDDIAG_INITIALIZED
 *   - RTE_MODE_StdDiag_LifeCycle_STDDIAG_RUNNING
 *   - RTE_MODE_StdDiag_LifeCycle_STDDIAG_STOPPED
 *   - RTE_TRANSITION_StdDiag_LifeCycle
 *   Omc_ExtendedOperatingModeType Rte_Mode_ExtendedOperatingModeControlModeAccessPort_currentExtendedOperatingMode(void)
 *   Modes of Rte_ModeType_OmcExtendedOperatingMode:
 *   - RTE_MODE_OmcExtendedOperatingMode_OMC_MODE_EXTENSION_1
 *   - RTE_MODE_OmcExtendedOperatingMode_OMC_MODE_EXTENSION_10
 *   - RTE_MODE_OmcExtendedOperatingMode_OMC_MODE_EXTENSION_11
 *   - RTE_MODE_OmcExtendedOperatingMode_OMC_MODE_EXTENSION_12
 *   - RTE_MODE_OmcExtendedOperatingMode_OMC_MODE_EXTENSION_13
 *   - RTE_MODE_OmcExtendedOperatingMode_OMC_MODE_EXTENSION_14
 *   - RTE_MODE_OmcExtendedOperatingMode_OMC_MODE_EXTENSION_2
 *   - RTE_MODE_OmcExtendedOperatingMode_OMC_MODE_EXTENSION_3
 *   - RTE_MODE_OmcExtendedOperatingMode_OMC_MODE_EXTENSION_4
 *   - RTE_MODE_OmcExtendedOperatingMode_OMC_MODE_EXTENSION_5
 *   - RTE_MODE_OmcExtendedOperatingMode_OMC_MODE_EXTENSION_6
 *   - RTE_MODE_OmcExtendedOperatingMode_OMC_MODE_EXTENSION_7
 *   - RTE_MODE_OmcExtendedOperatingMode_OMC_MODE_EXTENSION_8
 *   - RTE_MODE_OmcExtendedOperatingMode_OMC_MODE_EXTENSION_9
 *   - RTE_MODE_OmcExtendedOperatingMode_OMC_MODE_EXTENSION_INVALID
 *   - RTE_MODE_OmcExtendedOperatingMode_OMC_MODE_EXTENSION_NORMAL
 *   - RTE_MODE_OmcExtendedOperatingMode_OMC_MODE_EXTENSION_SAVE_ENERGY
 *   - RTE_TRANSITION_OmcExtendedOperatingMode
 *   StdDiag_LifeCycleRequestType Rte_Mode_LifeCycle_Mode(StdDiag_LifeCycleRequestType *previousMode, StdDiag_LifeCycleRequestType *nextMode)
 *   Modes of Rte_ModeType_StdDiag_LifeCycle:
 *   - RTE_MODE_StdDiag_LifeCycle_STDDIAG_INITIALIZED
 *   - RTE_MODE_StdDiag_LifeCycle_STDDIAG_RUNNING
 *   - RTE_MODE_StdDiag_LifeCycle_STDDIAG_STOPPED
 *   - RTE_TRANSITION_StdDiag_LifeCycle
 *   Omc_OperatingModeType Rte_Mode_OperatingModeControlModeAccessPort_currentOperatingMode(void)
 *   Modes of Rte_ModeType_OmcOperatingMode:
 *   - RTE_MODE_OmcOperatingMode_OMC_MODE_ASSEMBLY
 *   - RTE_MODE_OmcOperatingMode_OMC_MODE_BMW_FLASH
 *   - RTE_MODE_OmcOperatingMode_OMC_MODE_NORMAL
 *   - RTE_MODE_OmcOperatingMode_OMC_MODE_TRANSPORT
 *   - RTE_TRANSITION_OmcOperatingMode
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_DarhControlPort_SetRoeSuspended(boolean suspended)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DarhControlInterface_E_NOT_OK
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_DCMServicesPort_GetSesCtrlType(Dcm_SesCtrlType *SesCtrlType)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_StdDiagDCMServices_E_NOT_OK, RTE_E_StdDiagDCMServices_E_OK
 *   Std_ReturnType Rte_Call_EnableConditionPort_SetEnableCondition(boolean ConditionFulfilled)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_EnableCondition_E_NOT_OK, RTE_E_EnableCondition_E_OK
 *   Std_ReturnType Rte_Call_ReportErrorPort_ReportError(uint8 InstanceId, uint8 ApiId, uint8 ErrorId)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DETService_E_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: LifeCycleHandler_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, StdDiag_CODE) StdDiag_LifeCycleHandler(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: StdDiag_LifeCycleHandler
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ManufacturerConfirmation
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Confirmation> of PortPrototype <ServiceRequestManufacturerNotificationPort>
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_ComControlModeRequestPort_requestedMode(NormalCommunicationModeType data)
 *
 * Mode Interfaces:
 * ================
 *   NormalCommunicationModeType Rte_Mode_ComControlNormalModeAccessPort_CommunicationModeDeclarationGroup(void)
 *   Modes of Rte_ModeType_StdDiag_NormalCommunicationModeGroup:
 *   - RTE_MODE_StdDiag_NormalCommunicationModeGroup_DISABLE_RX_AND_TX_NORMAL
 *   - RTE_MODE_StdDiag_NormalCommunicationModeGroup_DISABLE_RX_ENABLE_TX_NORMAL
 *   - RTE_MODE_StdDiag_NormalCommunicationModeGroup_ENABLE_RX_AND_TX_NORMAL
 *   - RTE_MODE_StdDiag_NormalCommunicationModeGroup_ENABLE_RX_DISABLE_TX_NORMAL
 *   - RTE_TRANSITION_StdDiag_NormalCommunicationModeGroup
 *   Omc_ExtendedOperatingModeType Rte_Mode_ExtendedOperatingModeControlModeAccessPort_currentExtendedOperatingMode(void)
 *   Modes of Rte_ModeType_OmcExtendedOperatingMode:
 *   - RTE_MODE_OmcExtendedOperatingMode_OMC_MODE_EXTENSION_1
 *   - RTE_MODE_OmcExtendedOperatingMode_OMC_MODE_EXTENSION_10
 *   - RTE_MODE_OmcExtendedOperatingMode_OMC_MODE_EXTENSION_11
 *   - RTE_MODE_OmcExtendedOperatingMode_OMC_MODE_EXTENSION_12
 *   - RTE_MODE_OmcExtendedOperatingMode_OMC_MODE_EXTENSION_13
 *   - RTE_MODE_OmcExtendedOperatingMode_OMC_MODE_EXTENSION_14
 *   - RTE_MODE_OmcExtendedOperatingMode_OMC_MODE_EXTENSION_2
 *   - RTE_MODE_OmcExtendedOperatingMode_OMC_MODE_EXTENSION_3
 *   - RTE_MODE_OmcExtendedOperatingMode_OMC_MODE_EXTENSION_4
 *   - RTE_MODE_OmcExtendedOperatingMode_OMC_MODE_EXTENSION_5
 *   - RTE_MODE_OmcExtendedOperatingMode_OMC_MODE_EXTENSION_6
 *   - RTE_MODE_OmcExtendedOperatingMode_OMC_MODE_EXTENSION_7
 *   - RTE_MODE_OmcExtendedOperatingMode_OMC_MODE_EXTENSION_8
 *   - RTE_MODE_OmcExtendedOperatingMode_OMC_MODE_EXTENSION_9
 *   - RTE_MODE_OmcExtendedOperatingMode_OMC_MODE_EXTENSION_INVALID
 *   - RTE_MODE_OmcExtendedOperatingMode_OMC_MODE_EXTENSION_NORMAL
 *   - RTE_MODE_OmcExtendedOperatingMode_OMC_MODE_EXTENSION_SAVE_ENERGY
 *   - RTE_TRANSITION_OmcExtendedOperatingMode
 *   Omc_OperatingModeType Rte_Mode_OperatingModeControlModeAccessPort_currentOperatingMode(void)
 *   Modes of Rte_ModeType_OmcOperatingMode:
 *   - RTE_MODE_OmcOperatingMode_OMC_MODE_ASSEMBLY
 *   - RTE_MODE_OmcOperatingMode_OMC_MODE_BMW_FLASH
 *   - RTE_MODE_OmcOperatingMode_OMC_MODE_NORMAL
 *   - RTE_MODE_OmcOperatingMode_OMC_MODE_TRANSPORT
 *   - RTE_TRANSITION_OmcOperatingMode
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_DarhControlPort_SetRoeSuspended(boolean suspended)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DarhControlInterface_E_NOT_OK
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_EnableConditionPort_SetEnableCondition(boolean ConditionFulfilled)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_EnableCondition_E_NOT_OK, RTE_E_EnableCondition_E_OK
 *   Std_ReturnType Rte_Call_ReportErrorPort_ReportError(uint8 InstanceId, uint8 ApiId, uint8 ErrorId)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DETService_E_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType StdDiag_ManufacturerConfirmation(uint8 SID, uint8 ReqType, uint16 SourceAddress, Dcm_ConfirmationStatusType ConfirmationStatus)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_ServiceRequestNotification_E_NOT_OK
 *   RTE_E_ServiceRequestNotification_E_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: ManufacturerConfirmation_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, StdDiag_CODE) StdDiag_ManufacturerConfirmation(uint8 SID, uint8 ReqType, uint16 SourceAddress, Dcm_ConfirmationStatusType ConfirmationStatus) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: StdDiag_ManufacturerConfirmation (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ManufacturerIndication
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Indication> of PortPrototype <ServiceRequestManufacturerNotificationPort>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Omc_OperatingModeType Rte_Mode_OperatingModeControlModeAccessPort_currentOperatingMode(void)
 *   Modes of Rte_ModeType_OmcOperatingMode:
 *   - RTE_MODE_OmcOperatingMode_OMC_MODE_ASSEMBLY
 *   - RTE_MODE_OmcOperatingMode_OMC_MODE_BMW_FLASH
 *   - RTE_MODE_OmcOperatingMode_OMC_MODE_NORMAL
 *   - RTE_MODE_OmcOperatingMode_OMC_MODE_TRANSPORT
 *   - RTE_TRANSITION_OmcOperatingMode
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_ReportErrorPort_ReportError(uint8 InstanceId, uint8 ApiId, uint8 ErrorId)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DETService_E_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType StdDiag_ManufacturerIndication(uint8 SID, const uint8 *RequestData, uint16 DataSize, uint8 ReqType, uint16 SourceAddress, Dcm_NegativeResponseCodeType *ErrorCode)
 *     Argument RequestData: uint8* is of type RequestDataArray
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_ServiceRequestNotification_E_NOT_OK
 *   RTE_E_ServiceRequestNotification_E_OK
 *   RTE_E_ServiceRequestNotification_E_REQUEST_NOT_ACCEPTED
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: ManufacturerIndication_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, StdDiag_CODE) StdDiag_ManufacturerIndication(uint8 SID, P2CONST(uint8, AUTOMATIC, RTE_STDDIAG_APPL_DATA) RequestData, uint16 DataSize, uint8 ReqType, uint16 SourceAddress, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_STDDIAG_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: StdDiag_ManufacturerIndication (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ReadDataActiveDiagSession
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <ActiveDiagnosticSession>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType StdDiag_ReadDataActiveDiagSession(uint8 *Data)
 *     Argument Data: uint8* is of type ActiveDiagSession_ArrayType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_ActiveDiagSession_E_NOT_OK
 *   RTE_E_DataServices_ActiveDiagSession_E_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: ReadDataActiveDiagSession_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, StdDiag_CODE) StdDiag_ReadDataActiveDiagSession(P2VAR(uint8, AUTOMATIC, RTE_STDDIAG_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: StdDiag_ReadDataActiveDiagSession (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ReadDataActiveSessionState
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <ActiveSessionState>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType StdDiag_ReadDataActiveSessionState(uint8 *Data)
 *     Argument Data: uint8* is of type ActiveSessionState_ArrayType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_ActiveSessionState_E_NOT_OK
 *   RTE_E_DataServices_ActiveSessionState_E_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: ReadDataActiveSessionState_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, StdDiag_CODE) StdDiag_ReadDataActiveSessionState(P2VAR(uint8, AUTOMATIC, RTE_STDDIAG_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: StdDiag_ReadDataActiveSessionState (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RoutineControlStartCheckProgrammingPreconditions
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Start> of PortPrototype <CheckProgrammingPreconditions>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType StdDiag_RoutineControlStartCheckProgrammingPreconditions(Dcm_OpStatusType OpStatus, uint8 *dataOut, uint16 *currentDataLength, Dcm_NegativeResponseCodeType *ErrorCode)
 *     Argument dataOut: uint8* is of type CheckProgrammingPreconditions_ArrayType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_CheckProgrammingPreconditions_DCM_E_FORCE_RCRRP
 *   RTE_E_RoutineServices_CheckProgrammingPreconditions_DCM_E_PENDING
 *   RTE_E_RoutineServices_CheckProgrammingPreconditions_E_NOT_OK
 *   RTE_E_RoutineServices_CheckProgrammingPreconditions_E_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineControlStartCheckProgrammingPreconditions_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, StdDiag_CODE) StdDiag_RoutineControlStartCheckProgrammingPreconditions(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_STDDIAG_APPL_VAR) dataOut, P2VAR(uint16, AUTOMATIC, RTE_STDDIAG_APPL_VAR) currentDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_STDDIAG_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: StdDiag_RoutineControlStartCheckProgrammingPreconditions (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RoutineControlStartClearDTCSecondaryErrorMemory
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Start> of PortPrototype <ClearSecondaryErrorMemory>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_ClearDTCPort_ClearDTC(uint32 DTC, Dem_DTCFormatType DTCFormat, Dem_DTCOriginType DTCOrigin)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CddIf_DEM_CLEAR_BUSY, RTE_E_CddIf_DEM_CLEAR_FAILED, RTE_E_CddIf_DEM_CLEAR_MEMORY_ERROR, RTE_E_CddIf_DEM_CLEAR_PENDING, RTE_E_CddIf_DEM_CLEAR_WRONG_DTC, RTE_E_CddIf_DEM_CLEAR_WRONG_DTCORIGIN, RTE_E_CddIf_E_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType StdDiag_RoutineControlStartClearDTCSecondaryErrorMemory(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_ClearDTCSecondaryErrorMemory_DCM_E_FORCE_RCRRP
 *   RTE_E_RoutineServices_ClearDTCSecondaryErrorMemory_DCM_E_PENDING
 *   RTE_E_RoutineServices_ClearDTCSecondaryErrorMemory_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineControlStartClearDTCSecondaryErrorMemory_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, StdDiag_CODE) StdDiag_RoutineControlStartClearDTCSecondaryErrorMemory(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_STDDIAG_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: StdDiag_RoutineControlStartClearDTCSecondaryErrorMemory (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RoutineControlStartDiagCommLoopback
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Start> of PortPrototype <DiagCommLoopback>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType StdDiag_RoutineControlStartDiagCommLoopback(const uint8 *dataIn, Dcm_OpStatusType OpStatus, uint8 *dataOut, uint16 *currentDataLength, Dcm_NegativeResponseCodeType *ErrorCode)
 *     Argument dataIn: uint8* is of type DiagCommLoopback_ArrayType
 *     Argument dataOut: uint8* is of type DiagCommLoopback_ArrayType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_DiagCommLoopback_DCM_E_FORCE_RCRRP
 *   RTE_E_RoutineServices_DiagCommLoopback_DCM_E_PENDING
 *   RTE_E_RoutineServices_DiagCommLoopback_E_NOT_OK
 *   RTE_E_RoutineServices_DiagCommLoopback_E_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineControlStartDiagCommLoopback_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, StdDiag_CODE) StdDiag_RoutineControlStartDiagCommLoopback(P2CONST(uint8, AUTOMATIC, RTE_STDDIAG_APPL_DATA) dataIn, Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_STDDIAG_APPL_VAR) dataOut, P2VAR(uint16, AUTOMATIC, RTE_STDDIAG_APPL_VAR) currentDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_STDDIAG_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: StdDiag_RoutineControlStartDiagCommLoopback (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SessionChange_DefaultSession
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on entering of Mode <STDDIAG_DEFAULT_SESSION> of ModeDeclarationGroupPrototype <SessionModeDeclarationGroup> of PortPrototype <SessionChangeIndicationPort>
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_ComControlModeRequestPort_requestedMode(NormalCommunicationModeType data)
 *
 * Mode Interfaces:
 * ================
 *   NormalCommunicationModeType Rte_Mode_ComControlNormalModeAccessPort_CommunicationModeDeclarationGroup(void)
 *   Modes of Rte_ModeType_StdDiag_NormalCommunicationModeGroup:
 *   - RTE_MODE_StdDiag_NormalCommunicationModeGroup_DISABLE_RX_AND_TX_NORMAL
 *   - RTE_MODE_StdDiag_NormalCommunicationModeGroup_DISABLE_RX_ENABLE_TX_NORMAL
 *   - RTE_MODE_StdDiag_NormalCommunicationModeGroup_ENABLE_RX_AND_TX_NORMAL
 *   - RTE_MODE_StdDiag_NormalCommunicationModeGroup_ENABLE_RX_DISABLE_TX_NORMAL
 *   - RTE_TRANSITION_StdDiag_NormalCommunicationModeGroup
 *   Omc_ExtendedOperatingModeType Rte_Mode_ExtendedOperatingModeControlModeAccessPort_currentExtendedOperatingMode(void)
 *   Modes of Rte_ModeType_OmcExtendedOperatingMode:
 *   - RTE_MODE_OmcExtendedOperatingMode_OMC_MODE_EXTENSION_1
 *   - RTE_MODE_OmcExtendedOperatingMode_OMC_MODE_EXTENSION_10
 *   - RTE_MODE_OmcExtendedOperatingMode_OMC_MODE_EXTENSION_11
 *   - RTE_MODE_OmcExtendedOperatingMode_OMC_MODE_EXTENSION_12
 *   - RTE_MODE_OmcExtendedOperatingMode_OMC_MODE_EXTENSION_13
 *   - RTE_MODE_OmcExtendedOperatingMode_OMC_MODE_EXTENSION_14
 *   - RTE_MODE_OmcExtendedOperatingMode_OMC_MODE_EXTENSION_2
 *   - RTE_MODE_OmcExtendedOperatingMode_OMC_MODE_EXTENSION_3
 *   - RTE_MODE_OmcExtendedOperatingMode_OMC_MODE_EXTENSION_4
 *   - RTE_MODE_OmcExtendedOperatingMode_OMC_MODE_EXTENSION_5
 *   - RTE_MODE_OmcExtendedOperatingMode_OMC_MODE_EXTENSION_6
 *   - RTE_MODE_OmcExtendedOperatingMode_OMC_MODE_EXTENSION_7
 *   - RTE_MODE_OmcExtendedOperatingMode_OMC_MODE_EXTENSION_8
 *   - RTE_MODE_OmcExtendedOperatingMode_OMC_MODE_EXTENSION_9
 *   - RTE_MODE_OmcExtendedOperatingMode_OMC_MODE_EXTENSION_INVALID
 *   - RTE_MODE_OmcExtendedOperatingMode_OMC_MODE_EXTENSION_NORMAL
 *   - RTE_MODE_OmcExtendedOperatingMode_OMC_MODE_EXTENSION_SAVE_ENERGY
 *   - RTE_TRANSITION_OmcExtendedOperatingMode
 *   Omc_OperatingModeType Rte_Mode_OperatingModeControlModeAccessPort_currentOperatingMode(void)
 *   Modes of Rte_ModeType_OmcOperatingMode:
 *   - RTE_MODE_OmcOperatingMode_OMC_MODE_ASSEMBLY
 *   - RTE_MODE_OmcOperatingMode_OMC_MODE_BMW_FLASH
 *   - RTE_MODE_OmcOperatingMode_OMC_MODE_NORMAL
 *   - RTE_MODE_OmcOperatingMode_OMC_MODE_TRANSPORT
 *   - RTE_TRANSITION_OmcOperatingMode
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_DarhControlPort_SetRoeSuspended(boolean suspended)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DarhControlInterface_E_NOT_OK
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_EnableConditionPort_SetEnableCondition(boolean ConditionFulfilled)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_EnableCondition_E_NOT_OK, RTE_E_EnableCondition_E_OK
 *   Std_ReturnType Rte_Call_ReportErrorPort_ReportError(uint8 InstanceId, uint8 ApiId, uint8 ErrorId)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DETService_E_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: SessionChange_DefaultSession_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, StdDiag_CODE) StdDiag_SesChgIndication_DefaultSession(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: StdDiag_SesChgIndication_DefaultSession
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SessionChange_OtherSession
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on entering of Mode <STDDIAG_OTHER_SESSION> of ModeDeclarationGroupPrototype <SessionModeDeclarationGroup> of PortPrototype <SessionChangeIndicationPort>
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: SessionChange_OtherSession_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, StdDiag_CODE) StdDiag_SesChgIndication_OtherSession(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: StdDiag_SesChgIndication_OtherSession
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define StdDiag_STOP_SEC_CODE
#include "StdDiag_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
