/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Omc.c
 *        Config:  D:/usr/usage/Delivery/CBD17x/CBD1700369/D02/external/Applications/OEM_Extensions/EPS/EPS.dpa
 *     SW-C Type:  Omc
 *  Generated at:  Tue Aug 15 17:22:15 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.15.0
 *                 RTE Core Version 1.15.0
 *       License:  Unlimited license CBD1700369 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <Omc>
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
 * Dem_EventStatusType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * NegativeResponseCodeType
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
 * Omc_LifeCycleRequestType
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
 * OpStatusType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * RequestResultType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 *********************************************************************************************************************/

#include "Rte_Omc.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


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
 * SrcPtrType: DataReference
 * boolean: Boolean (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * Dem_EventStatusType: Enumeration of integer in interval [0...255] with enumerators
 *   DEM_EVENT_STATUS_PASSED (0U)
 *   DEM_EVENT_STATUS_FAILED (1U)
 *   DEM_EVENT_STATUS_PREPASSED (2U)
 *   DEM_EVENT_STATUS_PREFAILED (3U)
 *   DEM_EVENT_STATUS_FDC_THRESHOLD_REACHED (4U)
 * NegativeResponseCodeType: Enumeration of integer in interval [0...255] with enumerators
 *   DCM_E_GENERALREJECT (16U)
 *   DCM_E_BUSYREPEATREQUEST (33U)
 *   DCM_E_CONDITIONSNOTCORRECT (34U)
 *   DCM_E_REQUESTSEQUENCEERROR (36U)
 *   DCM_E_REQUESTOUTOFRANGE (49U)
 *   DCM_E_SECURITYACCESSDENIED (51U)
 *   DCM_E_GENERALPROGRAMMINGFAILURE (114U)
 *   DCM_E_SUBFUNCTIONNOTSUPPORTEDINACTIVESESSION (126U)
 *   DCM_E_RPMTOOHIGH (129U)
 *   DCM_E_RPMTOOLOW (130U)
 *   DCM_E_ENGINEISRUNNING (131U)
 *   DCM_E_ENGINEISNOTRUNNING (132U)
 *   DCM_E_ENGINERUNTIMETOOLOW (133U)
 *   DCM_E_TEMPERATURETOOHIGH (134U)
 *   DCM_E_TEMPERATURETOOLOW (135U)
 *   DCM_E_VEHICLESPEEDTOOHIGH (136U)
 *   DCM_E_VEHICLESPEEDTOOLOW (137U)
 *   DCM_E_THROTTLE_PEDALTOOHIGH (138U)
 *   DCM_E_THROTTLE_PEDALTOOLOW (139U)
 *   DCM_E_TRANSMISSIONRANGENOTINNEUTRAL (140U)
 *   DCM_E_TRANSMISSIONRANGENOTINGEAR (141U)
 *   DCM_E_BRAKESWITCH_NOTCLOSED (143U)
 *   DCM_E_SHIFTERLEVERNOTINPARK (144U)
 *   DCM_E_TORQUECONVERTERCLUTCHLOCKED (145U)
 *   DCM_E_VOLTAGETOOHIGH (146U)
 *   DCM_E_VOLTAGETOOLOW (147U)
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
 * Omc_LifeCycleRequestType: Enumeration of integer in interval [0...255] with enumerators
 *   OMC_INITIALIZED (0U)
 *   OMC_RUNNING (1U)
 *   OMC_STOPPED (2U)
 * Omc_OperatingModeType: Enumeration of integer in interval [0...255] with enumerators
 *   OMC_MODE_NORMAL (0U)
 *   OMC_MODE_ASSEMBLY (1U)
 *   OMC_MODE_TRANSPORT (2U)
 *   OMC_MODE_BMW_FLASH (3U)
 * OpStatusType: Enumeration of integer in interval [0...255] with enumerators
 *   DCM_INITIAL (0U)
 *   DCM_PENDING (1U)
 *   DCM_CANCEL (2U)
 *   DCM_FORCE_RCRRP_OK (3U)
 * RequestResultType: Enumeration of integer in interval [0...255] with enumerators
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
 * UInt8_Array1: Array with 1 element(s) of type uint8
 *
 *********************************************************************************************************************/


#define Omc_START_SEC_CODE
#include "Omc_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ChangeExtendedOperatingMode
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Start> of PortPrototype <ControlExtendedEnergySavingState>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Std_ReturnType Rte_Switch_extendedOperatingModeSwitchPort_currentExtendedOperatingMode(Omc_ExtendedOperatingModeType mode)
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
 *   Omc_LifeCycleRequestType Rte_Mode_LifeCycleLoopback_Mode(void)
 *   Modes of Rte_ModeType_Omc_LifeCycle:
 *   - RTE_MODE_Omc_LifeCycle_OMC_INITIALIZED
 *   - RTE_MODE_Omc_LifeCycle_OMC_RUNNING
 *   - RTE_MODE_Omc_LifeCycle_OMC_STOPPED
 *   - RTE_TRANSITION_Omc_LifeCycle
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_DETServicePort_ReportError(uint8 InstanceId, uint8 ApiId, uint8 ErrorId)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DETService_E_NOT_OK
 *   Std_ReturnType Rte_Call_EnableCond_OMC_SetEnableCondition(boolean ConditionFulfilled)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_EnableCondition_E_NOT_OK
 *   Std_ReturnType Rte_Call_NvMServicePort_GetErrorStatus(RequestResultType *RequestResultPtr)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_OMC_E_NOT_OK
 *   Std_ReturnType Rte_Call_NvMServicePort_WriteBlock(SrcPtrType SrcPtr)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_OMC_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Omc_RoutineControlStartExtendedOperatingMode(uint8 ExtendedOperatingMode, OpStatusType OpStatus, NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_ExtendedOperatingModeControl_DCM_E_FORCE_RCRRP
 *   RTE_E_RoutineServices_ExtendedOperatingModeControl_DCM_E_PENDING
 *   RTE_E_RoutineServices_ExtendedOperatingModeControl_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: ChangeExtendedOperatingMode_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, Omc_CODE) Omc_RoutineControlStartExtendedOperatingMode(uint8 ExtendedOperatingMode, OpStatusType OpStatus, P2VAR(NegativeResponseCodeType, AUTOMATIC, RTE_OMC_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Omc_RoutineControlStartExtendedOperatingMode (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ChangeOperatingMode
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Start> of PortPrototype <ControlEnergySavingState>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Std_ReturnType Rte_Switch_extendedOperatingModeSwitchPort_currentExtendedOperatingMode(Omc_ExtendedOperatingModeType mode)
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
 *   Std_ReturnType Rte_Switch_operatingModeSwitchPort_currentOperatingMode(Omc_OperatingModeType mode)
 *   Modes of Rte_ModeType_OmcOperatingMode:
 *   - RTE_MODE_OmcOperatingMode_OMC_MODE_ASSEMBLY
 *   - RTE_MODE_OmcOperatingMode_OMC_MODE_BMW_FLASH
 *   - RTE_MODE_OmcOperatingMode_OMC_MODE_NORMAL
 *   - RTE_MODE_OmcOperatingMode_OMC_MODE_TRANSPORT
 *   - RTE_TRANSITION_OmcOperatingMode
 *   Omc_LifeCycleRequestType Rte_Mode_LifeCycleLoopback_Mode(void)
 *   Modes of Rte_ModeType_Omc_LifeCycle:
 *   - RTE_MODE_Omc_LifeCycle_OMC_INITIALIZED
 *   - RTE_MODE_Omc_LifeCycle_OMC_RUNNING
 *   - RTE_MODE_Omc_LifeCycle_OMC_STOPPED
 *   - RTE_TRANSITION_Omc_LifeCycle
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_DETServicePort_ReportError(uint8 InstanceId, uint8 ApiId, uint8 ErrorId)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DETService_E_NOT_OK
 *   Std_ReturnType Rte_Call_EnableCond_OMC_SetEnableCondition(boolean ConditionFulfilled)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_EnableCondition_E_NOT_OK
 *   Std_ReturnType Rte_Call_NvMServicePort_GetErrorStatus(RequestResultType *RequestResultPtr)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_OMC_E_NOT_OK
 *   Std_ReturnType Rte_Call_NvMServicePort_WriteBlock(SrcPtrType SrcPtr)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_OMC_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Omc_RoutineControlStartOperatingMode(uint8 OperatingMode, OpStatusType OpStatus, NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_OperatingModeControl_DCM_E_FORCE_RCRRP
 *   RTE_E_RoutineServices_OperatingModeControl_DCM_E_PENDING
 *   RTE_E_RoutineServices_OperatingModeControl_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: ChangeOperatingMode_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, Omc_CODE) Omc_RoutineControlStartOperatingMode(uint8 OperatingMode, OpStatusType OpStatus, P2VAR(NegativeResponseCodeType, AUTOMATIC, RTE_OMC_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Omc_RoutineControlStartOperatingMode (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ClearEventAllowed
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ClearEventAllowed> of PortPrototype <ClearEventAllowedPort>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Omc_LifeCycleRequestType Rte_Mode_LifeCycleLoopback_Mode(void)
 *   Modes of Rte_ModeType_Omc_LifeCycle:
 *   - RTE_MODE_Omc_LifeCycle_OMC_INITIALIZED
 *   - RTE_MODE_Omc_LifeCycle_OMC_RUNNING
 *   - RTE_MODE_Omc_LifeCycle_OMC_STOPPED
 *   - RTE_TRANSITION_Omc_LifeCycle
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_DETServicePort_ReportError(uint8 InstanceId, uint8 ApiId, uint8 ErrorId)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DETService_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Omc_ClearEventAllowed(boolean *Allowed)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CallbackClearEventAllowed_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: ClearEventAllowed_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, Omc_CODE) Omc_ClearEventAllowed(P2VAR(boolean, AUTOMATIC, RTE_OMC_APPL_VAR) Allowed) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Omc_ClearEventAllowed (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ConditionCheckReadExtendedOperatingMode
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <ExtendedEnergySavingState>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Omc_LifeCycleRequestType Rte_Mode_LifeCycleLoopback_Mode(void)
 *   Modes of Rte_ModeType_Omc_LifeCycle:
 *   - RTE_MODE_Omc_LifeCycle_OMC_INITIALIZED
 *   - RTE_MODE_Omc_LifeCycle_OMC_RUNNING
 *   - RTE_MODE_Omc_LifeCycle_OMC_STOPPED
 *   - RTE_TRANSITION_Omc_LifeCycle
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_DETServicePort_ReportError(uint8 InstanceId, uint8 ApiId, uint8 ErrorId)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DETService_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Omc_ConditionCheckReadDIDExtendedOperatingMode(NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_ExtendedOperatingMode_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: ConditionCheckReadExtendedOperatingMode_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, Omc_CODE) Omc_ConditionCheckReadDIDExtendedOperatingMode(P2VAR(NegativeResponseCodeType, AUTOMATIC, RTE_OMC_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Omc_ConditionCheckReadDIDExtendedOperatingMode (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ConditionCheckReadOperatingMode
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <EnergySavingState>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Omc_LifeCycleRequestType Rte_Mode_LifeCycleLoopback_Mode(void)
 *   Modes of Rte_ModeType_Omc_LifeCycle:
 *   - RTE_MODE_Omc_LifeCycle_OMC_INITIALIZED
 *   - RTE_MODE_Omc_LifeCycle_OMC_RUNNING
 *   - RTE_MODE_Omc_LifeCycle_OMC_STOPPED
 *   - RTE_TRANSITION_Omc_LifeCycle
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_DETServicePort_ReportError(uint8 InstanceId, uint8 ApiId, uint8 ErrorId)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DETService_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Omc_ConditionCheckReadDIDOperatingMode(NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_OperatingMode_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: ConditionCheckReadOperatingMode_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, Omc_CODE) Omc_ConditionCheckReadDIDOperatingMode(P2VAR(NegativeResponseCodeType, AUTOMATIC, RTE_OMC_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Omc_ConditionCheckReadDIDOperatingMode (returns application error)
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
 *   Omc_LifeCycleRequestType Rte_IRead_LifeCycleHandler_LifeCycleRequest_requestMode(void)
 *
 * Mode Interfaces:
 * ================
 *   Std_ReturnType Rte_Switch_LifeCycle_Mode(Omc_LifeCycleRequestType mode)
 *   Modes of Rte_ModeType_Omc_LifeCycle:
 *   - RTE_MODE_Omc_LifeCycle_OMC_INITIALIZED
 *   - RTE_MODE_Omc_LifeCycle_OMC_RUNNING
 *   - RTE_MODE_Omc_LifeCycle_OMC_STOPPED
 *   - RTE_TRANSITION_Omc_LifeCycle
 *   Std_ReturnType Rte_Switch_extendedOperatingModeSwitchPort_currentExtendedOperatingMode(Omc_ExtendedOperatingModeType mode)
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
 *   Std_ReturnType Rte_Switch_operatingModeSwitchPort_currentOperatingMode(Omc_OperatingModeType mode)
 *   Modes of Rte_ModeType_OmcOperatingMode:
 *   - RTE_MODE_OmcOperatingMode_OMC_MODE_ASSEMBLY
 *   - RTE_MODE_OmcOperatingMode_OMC_MODE_BMW_FLASH
 *   - RTE_MODE_OmcOperatingMode_OMC_MODE_NORMAL
 *   - RTE_MODE_OmcOperatingMode_OMC_MODE_TRANSPORT
 *   - RTE_TRANSITION_OmcOperatingMode
 *   Omc_LifeCycleRequestType Rte_Mode_LifeCycle_Mode(Omc_LifeCycleRequestType *previousMode, Omc_LifeCycleRequestType *nextMode)
 *   Modes of Rte_ModeType_Omc_LifeCycle:
 *   - RTE_MODE_Omc_LifeCycle_OMC_INITIALIZED
 *   - RTE_MODE_Omc_LifeCycle_OMC_RUNNING
 *   - RTE_MODE_Omc_LifeCycle_OMC_STOPPED
 *   - RTE_TRANSITION_Omc_LifeCycle
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_DETServicePort_ReportError(uint8 InstanceId, uint8 ApiId, uint8 ErrorId)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DETService_E_NOT_OK
 *   Std_ReturnType Rte_Call_EnableCond_OMC_SetEnableCondition(boolean ConditionFulfilled)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_EnableCondition_E_NOT_OK
 *   Std_ReturnType Rte_Call_VsmEventOpmode_SetEventStatus(Dem_EventStatusType EventStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_Omc_DiagnosticMonitor_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: LifeCycleHandler_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, Omc_CODE) Omc_LifeCycleHandler(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Omc_LifeCycleHandler
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ReadDIDExtendedOperatingMode
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <ExtendedEnergySavingState>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Omc_LifeCycleRequestType Rte_Mode_LifeCycleLoopback_Mode(void)
 *   Modes of Rte_ModeType_Omc_LifeCycle:
 *   - RTE_MODE_Omc_LifeCycle_OMC_INITIALIZED
 *   - RTE_MODE_Omc_LifeCycle_OMC_RUNNING
 *   - RTE_MODE_Omc_LifeCycle_OMC_STOPPED
 *   - RTE_TRANSITION_Omc_LifeCycle
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_DETServicePort_ReportError(uint8 InstanceId, uint8 ApiId, uint8 ErrorId)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DETService_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Omc_ReadDIDExtendedOperatingMode(uint8 *Data)
 *     Argument Data: uint8* is of type UInt8_Array1
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_ExtendedOperatingMode_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: ReadDIDExtendedOperatingMode_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, Omc_CODE) Omc_ReadDIDExtendedOperatingMode(P2VAR(uint8, AUTOMATIC, RTE_OMC_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Omc_ReadDIDExtendedOperatingMode (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ReadOperatingMode
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <EnergySavingState>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Omc_LifeCycleRequestType Rte_Mode_LifeCycleLoopback_Mode(void)
 *   Modes of Rte_ModeType_Omc_LifeCycle:
 *   - RTE_MODE_Omc_LifeCycle_OMC_INITIALIZED
 *   - RTE_MODE_Omc_LifeCycle_OMC_RUNNING
 *   - RTE_MODE_Omc_LifeCycle_OMC_STOPPED
 *   - RTE_TRANSITION_Omc_LifeCycle
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_DETServicePort_ReportError(uint8 InstanceId, uint8 ApiId, uint8 ErrorId)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DETService_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Omc_ReadDIDOperatingMode(uint8 *Data)
 *     Argument Data: uint8* is of type UInt8_Array1
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_OperatingMode_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: ReadOperatingMode_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, Omc_CODE) Omc_ReadDIDOperatingMode(P2VAR(uint8, AUTOMATIC, RTE_OMC_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Omc_ReadDIDOperatingMode (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RollbackModeChange
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *     and not in Mode(s) <OMC_INITIALIZED, OMC_STOPPED>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_DETServicePort_ReportError(uint8 InstanceId, uint8 ApiId, uint8 ErrorId)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DETService_E_NOT_OK
 *   Std_ReturnType Rte_Call_EnableCond_OMC_SetEnableCondition(boolean ConditionFulfilled)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_EnableCondition_E_NOT_OK
 *   Std_ReturnType Rte_Call_NvMServicePort_GetErrorStatus(RequestResultType *RequestResultPtr)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_OMC_E_NOT_OK
 *   Std_ReturnType Rte_Call_NvMServicePort_WriteBlock(SrcPtrType SrcPtr)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_OMC_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RollbackModeChange_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, Omc_CODE) Omc_RollbackModeChange(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Omc_RollbackModeChange
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define Omc_STOP_SEC_CODE
#include "Omc_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
