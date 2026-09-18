/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Stm.c
 *        Config:  D:/usr/usage/Delivery/CBD17x/CBD1700369/D02/external/Applications/OEM_Extensions/EPS/EPS.dpa
 *     SW-C Type:  Stm
 *  Generated at:  Tue Aug 15 17:22:19 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.15.0
 *                 RTE Core Version 1.15.0
 *       License:  Unlimited license CBD1700369 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <Stm>
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
 * Stm_CentralErrorLockType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Stm_EnergyStateType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Stm_VehicleStateSP2015Type
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 *********************************************************************************************************************/

#include "Rte_Stm.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


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
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * Stm_CentralErrorLockType: Enumeration of integer in interval [0...255] with enumerators
 *   STM_CEL_UNLOCKED (0U)
 *   STM_CEL_LOCKED (1U)
 *   STM_CEL_INVALID (3U)
 * Stm_EnergyStateType: Enumeration of integer in interval [0...255] with enumerators
 *   STM_ENERGY_GOOD (0U)
 *   STM_ENERGY_OK (1U)
 *   STM_ENERGY_SHORTAGE (2U)
 *   STM_ENERGY_SEVERE_SHORTAGE (3U)
 *   STM_ENERGY_INVALID (15U)
 * Stm_VehicleStateSP2015Type: Enumeration of integer in interval [0...255] with enumerators
 *   STM_VEHICLE_STATE_SP2015_PARKING_BN_NOK (1U)
 *   STM_VEHICLE_STATE_SP2015_PARKING_BN_OK (2U)
 *   STM_VEHICLE_STATE_SP2015_CUSTOMER_ABSENT (3U)
 *   STM_VEHICLE_STATE_SP2015_LIVING (5U)
 *   STM_VEHICLE_STATE_SP2015_CHECK_ANALYS_DIAGNOSTICS (7U)
 *   STM_VEHICLE_STATE_SP2015_READINESS_TO_DRIVE_INIT (8U)
 *   STM_VEHICLE_STATE_SP2015_DRIVE (10U)
 *   STM_VEHICLE_STATE_SP2015_READINESS_TO_DRIVE_STOP (12U)
 *   STM_VEHICLE_STATE_SP2015_UNAVAILABLE (14U)
 *   STM_VEHICLE_STATE_SP2015_INVALID (15U)
 *
 *********************************************************************************************************************/


#define Stm_START_SEC_CODE
#include "Stm_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Runnable_ErrorCentralErrorLock
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on DataReceiveErrorEvent for DataElementPrototype <centralErrorLock> of PortPrototype <CentralErrorLockRx>
 *
 * Executed in the context of the following exclusive areas:
 *   - CentralErrorLockReadWrite_EA
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Std_ReturnType Rte_Switch_CentralErrorLockModeSwitchPort_currentCentralErrorLockMode(Stm_CentralErrorLockType mode)
 *   Modes of Rte_ModeType_Stm_CentralErrorLockMode:
 *   - RTE_MODE_Stm_CentralErrorLockMode_STM_CEL_INVALID
 *   - RTE_MODE_Stm_CentralErrorLockMode_STM_CEL_LOCKED
 *   - RTE_MODE_Stm_CentralErrorLockMode_STM_CEL_UNLOCKED
 *   - RTE_TRANSITION_Stm_CentralErrorLockMode
 *   Stm_CentralErrorLockType Rte_Mode_CentralErrorLockModeSwitchPort_currentCentralErrorLockMode(Stm_CentralErrorLockType *previousMode, Stm_CentralErrorLockType *nextMode)
 *   Modes of Rte_ModeType_Stm_CentralErrorLockMode:
 *   - RTE_MODE_Stm_CentralErrorLockMode_STM_CEL_INVALID
 *   - RTE_MODE_Stm_CentralErrorLockMode_STM_CEL_LOCKED
 *   - RTE_MODE_Stm_CentralErrorLockMode_STM_CEL_UNLOCKED
 *   - RTE_TRANSITION_Stm_CentralErrorLockMode
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_CentralErrorLockEnableCondition_SetEnableCondition(boolean ConditionFulfilled)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_EnableCondition_E_NOT_OK, RTE_E_EnableCondition_E_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Runnable_ErrorCentralErrorLock_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, Stm_CODE) Stm_ErrorCentralErrorLock(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Stm_ErrorCentralErrorLock
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Runnable_ErrorEnergyMode
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on DataReceiveErrorEvent for DataElementPrototype <energyState> of PortPrototype <EnergyModeRx>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Std_ReturnType Rte_Switch_EnergyModeSwitchPort_currentEnergyMode(Stm_EnergyStateType mode)
 *   Modes of Rte_ModeType_Stm_EnergyStateMode:
 *   - RTE_MODE_Stm_EnergyStateMode_STM_ENERGY_GOOD
 *   - RTE_MODE_Stm_EnergyStateMode_STM_ENERGY_INVALID
 *   - RTE_MODE_Stm_EnergyStateMode_STM_ENERGY_OK
 *   - RTE_MODE_Stm_EnergyStateMode_STM_ENERGY_SEVERE_SHORTAGE
 *   - RTE_MODE_Stm_EnergyStateMode_STM_ENERGY_SHORTAGE
 *   - RTE_TRANSITION_Stm_EnergyStateMode
 *   Stm_EnergyStateType Rte_Mode_EnergyModeSwitchPort_currentEnergyMode(Stm_EnergyStateType *previousMode, Stm_EnergyStateType *nextMode)
 *   Modes of Rte_ModeType_Stm_EnergyStateMode:
 *   - RTE_MODE_Stm_EnergyStateMode_STM_ENERGY_GOOD
 *   - RTE_MODE_Stm_EnergyStateMode_STM_ENERGY_INVALID
 *   - RTE_MODE_Stm_EnergyStateMode_STM_ENERGY_OK
 *   - RTE_MODE_Stm_EnergyStateMode_STM_ENERGY_SEVERE_SHORTAGE
 *   - RTE_MODE_Stm_EnergyStateMode_STM_ENERGY_SHORTAGE
 *   - RTE_TRANSITION_Stm_EnergyStateMode
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Runnable_ErrorEnergyMode_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, Stm_CODE) Stm_ErrorEnergyMode(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Stm_ErrorEnergyMode
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Runnable_ErrorVehicleStateSP2015
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on DataReceiveErrorEvent for DataElementPrototype <vehicleStateSP2015> of PortPrototype <VehicleStateSP2015Rx>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Std_ReturnType Rte_Switch_VehicleStateSP2015ModeSwitchPort_currentVehicleStateSP2015Mode(Stm_VehicleStateSP2015Type mode)
 *   Modes of Rte_ModeType_Stm_VehicleStateSP2015Mode:
 *   - RTE_MODE_Stm_VehicleStateSP2015Mode_STM_VEHICLE_STATE_SP2015_CHECK_ANALYS_DIAGNOSTICS
 *   - RTE_MODE_Stm_VehicleStateSP2015Mode_STM_VEHICLE_STATE_SP2015_CUSTOMER_ABSENT
 *   - RTE_MODE_Stm_VehicleStateSP2015Mode_STM_VEHICLE_STATE_SP2015_DRIVE
 *   - RTE_MODE_Stm_VehicleStateSP2015Mode_STM_VEHICLE_STATE_SP2015_INVALID
 *   - RTE_MODE_Stm_VehicleStateSP2015Mode_STM_VEHICLE_STATE_SP2015_LIVING
 *   - RTE_MODE_Stm_VehicleStateSP2015Mode_STM_VEHICLE_STATE_SP2015_PARKING_BN_NOK
 *   - RTE_MODE_Stm_VehicleStateSP2015Mode_STM_VEHICLE_STATE_SP2015_PARKING_BN_OK
 *   - RTE_MODE_Stm_VehicleStateSP2015Mode_STM_VEHICLE_STATE_SP2015_READINESS_TO_DRIVE_INIT
 *   - RTE_MODE_Stm_VehicleStateSP2015Mode_STM_VEHICLE_STATE_SP2015_READINESS_TO_DRIVE_STOP
 *   - RTE_MODE_Stm_VehicleStateSP2015Mode_STM_VEHICLE_STATE_SP2015_UNAVAILABLE
 *   - RTE_TRANSITION_Stm_VehicleStateSP2015Mode
 *   Stm_VehicleStateSP2015Type Rte_Mode_VehicleStateSP2015ModeSwitchPort_currentVehicleStateSP2015Mode(Stm_VehicleStateSP2015Type *previousMode, Stm_VehicleStateSP2015Type *nextMode)
 *   Modes of Rte_ModeType_Stm_VehicleStateSP2015Mode:
 *   - RTE_MODE_Stm_VehicleStateSP2015Mode_STM_VEHICLE_STATE_SP2015_CHECK_ANALYS_DIAGNOSTICS
 *   - RTE_MODE_Stm_VehicleStateSP2015Mode_STM_VEHICLE_STATE_SP2015_CUSTOMER_ABSENT
 *   - RTE_MODE_Stm_VehicleStateSP2015Mode_STM_VEHICLE_STATE_SP2015_DRIVE
 *   - RTE_MODE_Stm_VehicleStateSP2015Mode_STM_VEHICLE_STATE_SP2015_INVALID
 *   - RTE_MODE_Stm_VehicleStateSP2015Mode_STM_VEHICLE_STATE_SP2015_LIVING
 *   - RTE_MODE_Stm_VehicleStateSP2015Mode_STM_VEHICLE_STATE_SP2015_PARKING_BN_NOK
 *   - RTE_MODE_Stm_VehicleStateSP2015Mode_STM_VEHICLE_STATE_SP2015_PARKING_BN_OK
 *   - RTE_MODE_Stm_VehicleStateSP2015Mode_STM_VEHICLE_STATE_SP2015_READINESS_TO_DRIVE_INIT
 *   - RTE_MODE_Stm_VehicleStateSP2015Mode_STM_VEHICLE_STATE_SP2015_READINESS_TO_DRIVE_STOP
 *   - RTE_MODE_Stm_VehicleStateSP2015Mode_STM_VEHICLE_STATE_SP2015_UNAVAILABLE
 *   - RTE_TRANSITION_Stm_VehicleStateSP2015Mode
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Runnable_ErrorVehicleStateSP2015_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, Stm_CODE) Stm_ErrorVehicleStateSP2015(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Stm_ErrorVehicleStateSP2015
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Runnable_InitialCELSupervision
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on entering of Mode <EM_LOCK_RECEIVABLE> of ModeDeclarationGroupPrototype <currentEMLockSignalReceptionMode> of PortPrototype <EMLockSignalReceptionModeNotificationPort>
 *
 * Executed in the context of the following exclusive areas:
 *   - CentralErrorLockReadWrite_EA
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Stm_CentralErrorLockType Rte_Mode_CentralErrorLockModeSwitchPort_currentCentralErrorLockMode(Stm_CentralErrorLockType *previousMode, Stm_CentralErrorLockType *nextMode)
 *   Modes of Rte_ModeType_Stm_CentralErrorLockMode:
 *   - RTE_MODE_Stm_CentralErrorLockMode_STM_CEL_INVALID
 *   - RTE_MODE_Stm_CentralErrorLockMode_STM_CEL_LOCKED
 *   - RTE_MODE_Stm_CentralErrorLockMode_STM_CEL_UNLOCKED
 *   - RTE_TRANSITION_Stm_CentralErrorLockMode
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_CentralErrorLockEnableCondition_SetEnableCondition(boolean ConditionFulfilled)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_EnableCondition_E_NOT_OK, RTE_E_EnableCondition_E_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Runnable_InitialCELSupervision_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, Stm_CODE) Stm_InitialCentralErrorLockSupervision(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Stm_InitialCentralErrorLockSupervision
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Runnable_ReceiveCentralErrorLock
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on DataReceivedEvent for DataElementPrototype <centralErrorLock> of PortPrototype <CentralErrorLockRx>
 *
 * Executed in the context of the following exclusive areas:
 *   - CentralErrorLockReadWrite_EA
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_CentralErrorLockRx_centralErrorLock(Stm_CentralErrorLockType *data)
 *
 * Mode Interfaces:
 * ================
 *   Std_ReturnType Rte_Switch_CentralErrorLockModeSwitchPort_currentCentralErrorLockMode(Stm_CentralErrorLockType mode)
 *   Modes of Rte_ModeType_Stm_CentralErrorLockMode:
 *   - RTE_MODE_Stm_CentralErrorLockMode_STM_CEL_INVALID
 *   - RTE_MODE_Stm_CentralErrorLockMode_STM_CEL_LOCKED
 *   - RTE_MODE_Stm_CentralErrorLockMode_STM_CEL_UNLOCKED
 *   - RTE_TRANSITION_Stm_CentralErrorLockMode
 *   Stm_CentralErrorLockType Rte_Mode_CentralErrorLockModeSwitchPort_currentCentralErrorLockMode(Stm_CentralErrorLockType *previousMode, Stm_CentralErrorLockType *nextMode)
 *   Modes of Rte_ModeType_Stm_CentralErrorLockMode:
 *   - RTE_MODE_Stm_CentralErrorLockMode_STM_CEL_INVALID
 *   - RTE_MODE_Stm_CentralErrorLockMode_STM_CEL_LOCKED
 *   - RTE_MODE_Stm_CentralErrorLockMode_STM_CEL_UNLOCKED
 *   - RTE_TRANSITION_Stm_CentralErrorLockMode
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_CentralErrorLockEnableCondition_SetEnableCondition(boolean ConditionFulfilled)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_EnableCondition_E_NOT_OK, RTE_E_EnableCondition_E_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Runnable_ReceiveCentralErrorLock_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, Stm_CODE) Stm_ReceiveCentralErrorLock(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Stm_ReceiveCentralErrorLock
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Runnable_ReceiveEnergyMode
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on DataReceivedEvent for DataElementPrototype <energyState> of PortPrototype <EnergyModeRx>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_EnergyModeRx_energyState(Stm_EnergyStateType *data)
 *
 * Mode Interfaces:
 * ================
 *   Std_ReturnType Rte_Switch_EnergyModeSwitchPort_currentEnergyMode(Stm_EnergyStateType mode)
 *   Modes of Rte_ModeType_Stm_EnergyStateMode:
 *   - RTE_MODE_Stm_EnergyStateMode_STM_ENERGY_GOOD
 *   - RTE_MODE_Stm_EnergyStateMode_STM_ENERGY_INVALID
 *   - RTE_MODE_Stm_EnergyStateMode_STM_ENERGY_OK
 *   - RTE_MODE_Stm_EnergyStateMode_STM_ENERGY_SEVERE_SHORTAGE
 *   - RTE_MODE_Stm_EnergyStateMode_STM_ENERGY_SHORTAGE
 *   - RTE_TRANSITION_Stm_EnergyStateMode
 *   Stm_EnergyStateType Rte_Mode_EnergyModeSwitchPort_currentEnergyMode(Stm_EnergyStateType *previousMode, Stm_EnergyStateType *nextMode)
 *   Modes of Rte_ModeType_Stm_EnergyStateMode:
 *   - RTE_MODE_Stm_EnergyStateMode_STM_ENERGY_GOOD
 *   - RTE_MODE_Stm_EnergyStateMode_STM_ENERGY_INVALID
 *   - RTE_MODE_Stm_EnergyStateMode_STM_ENERGY_OK
 *   - RTE_MODE_Stm_EnergyStateMode_STM_ENERGY_SEVERE_SHORTAGE
 *   - RTE_MODE_Stm_EnergyStateMode_STM_ENERGY_SHORTAGE
 *   - RTE_TRANSITION_Stm_EnergyStateMode
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Runnable_ReceiveEnergyMode_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, Stm_CODE) Stm_ReceiveEnergyMode(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Stm_ReceiveEnergyMode
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Runnable_ReceiveVehicleStateSP2015
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on DataReceivedEvent for DataElementPrototype <vehicleStateSP2015> of PortPrototype <VehicleStateSP2015Rx>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_VehicleStateSP2015Rx_vehicleStateSP2015(Stm_VehicleStateSP2015Type *data)
 *
 * Mode Interfaces:
 * ================
 *   Std_ReturnType Rte_Switch_VehicleStateSP2015ModeSwitchPort_currentVehicleStateSP2015Mode(Stm_VehicleStateSP2015Type mode)
 *   Modes of Rte_ModeType_Stm_VehicleStateSP2015Mode:
 *   - RTE_MODE_Stm_VehicleStateSP2015Mode_STM_VEHICLE_STATE_SP2015_CHECK_ANALYS_DIAGNOSTICS
 *   - RTE_MODE_Stm_VehicleStateSP2015Mode_STM_VEHICLE_STATE_SP2015_CUSTOMER_ABSENT
 *   - RTE_MODE_Stm_VehicleStateSP2015Mode_STM_VEHICLE_STATE_SP2015_DRIVE
 *   - RTE_MODE_Stm_VehicleStateSP2015Mode_STM_VEHICLE_STATE_SP2015_INVALID
 *   - RTE_MODE_Stm_VehicleStateSP2015Mode_STM_VEHICLE_STATE_SP2015_LIVING
 *   - RTE_MODE_Stm_VehicleStateSP2015Mode_STM_VEHICLE_STATE_SP2015_PARKING_BN_NOK
 *   - RTE_MODE_Stm_VehicleStateSP2015Mode_STM_VEHICLE_STATE_SP2015_PARKING_BN_OK
 *   - RTE_MODE_Stm_VehicleStateSP2015Mode_STM_VEHICLE_STATE_SP2015_READINESS_TO_DRIVE_INIT
 *   - RTE_MODE_Stm_VehicleStateSP2015Mode_STM_VEHICLE_STATE_SP2015_READINESS_TO_DRIVE_STOP
 *   - RTE_MODE_Stm_VehicleStateSP2015Mode_STM_VEHICLE_STATE_SP2015_UNAVAILABLE
 *   - RTE_TRANSITION_Stm_VehicleStateSP2015Mode
 *   Stm_VehicleStateSP2015Type Rte_Mode_VehicleStateSP2015ModeSwitchPort_currentVehicleStateSP2015Mode(Stm_VehicleStateSP2015Type *previousMode, Stm_VehicleStateSP2015Type *nextMode)
 *   Modes of Rte_ModeType_Stm_VehicleStateSP2015Mode:
 *   - RTE_MODE_Stm_VehicleStateSP2015Mode_STM_VEHICLE_STATE_SP2015_CHECK_ANALYS_DIAGNOSTICS
 *   - RTE_MODE_Stm_VehicleStateSP2015Mode_STM_VEHICLE_STATE_SP2015_CUSTOMER_ABSENT
 *   - RTE_MODE_Stm_VehicleStateSP2015Mode_STM_VEHICLE_STATE_SP2015_DRIVE
 *   - RTE_MODE_Stm_VehicleStateSP2015Mode_STM_VEHICLE_STATE_SP2015_INVALID
 *   - RTE_MODE_Stm_VehicleStateSP2015Mode_STM_VEHICLE_STATE_SP2015_LIVING
 *   - RTE_MODE_Stm_VehicleStateSP2015Mode_STM_VEHICLE_STATE_SP2015_PARKING_BN_NOK
 *   - RTE_MODE_Stm_VehicleStateSP2015Mode_STM_VEHICLE_STATE_SP2015_PARKING_BN_OK
 *   - RTE_MODE_Stm_VehicleStateSP2015Mode_STM_VEHICLE_STATE_SP2015_READINESS_TO_DRIVE_INIT
 *   - RTE_MODE_Stm_VehicleStateSP2015Mode_STM_VEHICLE_STATE_SP2015_READINESS_TO_DRIVE_STOP
 *   - RTE_MODE_Stm_VehicleStateSP2015Mode_STM_VEHICLE_STATE_SP2015_UNAVAILABLE
 *   - RTE_TRANSITION_Stm_VehicleStateSP2015Mode
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Runnable_ReceiveVehicleStateSP2015_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, Stm_CODE) Stm_ReceiveVehicleStateSP2015(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Stm_ReceiveVehicleStateSP2015
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Runnable_StopCentralErrorLockSupervision
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on entering of Mode <EM_LOCK_NOT_RECEIVABLE> of ModeDeclarationGroupPrototype <currentEMLockSignalReceptionMode> of PortPrototype <EMLockSignalReceptionModeNotificationPort>
 *
 * Executed in the context of the following exclusive areas:
 *   - CentralErrorLockReadWrite_EA
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Std_ReturnType Rte_Switch_CentralErrorLockModeSwitchPort_currentCentralErrorLockMode(Stm_CentralErrorLockType mode)
 *   Modes of Rte_ModeType_Stm_CentralErrorLockMode:
 *   - RTE_MODE_Stm_CentralErrorLockMode_STM_CEL_INVALID
 *   - RTE_MODE_Stm_CentralErrorLockMode_STM_CEL_LOCKED
 *   - RTE_MODE_Stm_CentralErrorLockMode_STM_CEL_UNLOCKED
 *   - RTE_TRANSITION_Stm_CentralErrorLockMode
 *   Stm_CentralErrorLockType Rte_Mode_CentralErrorLockModeSwitchPort_currentCentralErrorLockMode(Stm_CentralErrorLockType *previousMode, Stm_CentralErrorLockType *nextMode)
 *   Modes of Rte_ModeType_Stm_CentralErrorLockMode:
 *   - RTE_MODE_Stm_CentralErrorLockMode_STM_CEL_INVALID
 *   - RTE_MODE_Stm_CentralErrorLockMode_STM_CEL_LOCKED
 *   - RTE_MODE_Stm_CentralErrorLockMode_STM_CEL_UNLOCKED
 *   - RTE_TRANSITION_Stm_CentralErrorLockMode
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_CentralErrorLockEnableCondition_SetEnableCondition(boolean ConditionFulfilled)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_EnableCondition_E_NOT_OK, RTE_E_EnableCondition_E_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Runnable_StopCentralErrorLockSupervision_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, Stm_CODE) Stm_StopCentralErrorLockSupervision(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Stm_StopCentralErrorLockSupervision
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define Stm_STOP_SEC_CODE
#include "Stm_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
