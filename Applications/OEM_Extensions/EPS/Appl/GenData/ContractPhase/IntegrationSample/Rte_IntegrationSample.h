/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Rte_IntegrationSample.h
 *        Config:  D:/usr/usage/Delivery/CBD17x/CBD1700369/D04/external/Applications/OEM_Extensions/EPS/EPS.dpa
 *     SW-C Type:  IntegrationSample
 *  Generated at:  Tue Dec 19 13:12:29 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.16.0
 *                 RTE Core Version 1.16.0
 *       License:  Unlimited license CBD1700369 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <IntegrationSample> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_INTEGRATIONSAMPLE_H
# define _RTE_INTEGRATIONSAMPLE_H

# ifdef RTE_APPLICATION_HEADER_FILE
#  error Multiple application header files included.
# endif
# define RTE_APPLICATION_HEADER_FILE
# ifndef RTE_PTR2ARRAYBASETYPE_PASSING
#  define RTE_PTR2ARRAYBASETYPE_PASSING
# endif

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_IntegrationSample_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_IntegrationSample
{
  /* Data Handles section */
  P2VAR(Rte_DE_IntegrationSample_EcuRunStateModeRequestType, TYPEDEF, RTE_INTEGRATIONSAMPLE_APPL_VAR) R_IntegrationSample_EcuRunStateHandler_EcuRunStateRequest_IntegrationSample_EcuRunStateRequestMode; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_IntegrationSample, RTE_CONST, RTE_CONST) Rte_Inst_IntegrationSample; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_IntegrationSample, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_EcuRunStateRequest_IntegrationSample_EcuRunStateRequestMode (2U)
# define Rte_InitValue_PP_IS_ST_CON_VEH_VehicleState (15U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_IntegrationSample_RP_SA_Kilometer_R_Notifier(P2VAR(MileageKilometreType, AUTOMATIC, RTE_INTEGRATIONSAMPLE_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_IntegrationSample_RP_SGG_Rx_CON_VEH_IntegrationSample_IDT_CON_VEH(P2VAR(IntegrationSample_CON_VEH_Type, AUTOMATIC, RTE_INTEGRATIONSAMPLE_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_IntegrationSample_RP_VehicleStatus_Notifier(P2VAR(VehicleState_Type, AUTOMATIC, RTE_INTEGRATIONSAMPLE_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_IsUpdated_IntegrationSample_RP_SA_Kilometer_R_Notifier(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_IsUpdated_IntegrationSample_RP_SGG_Rx_CON_VEH_IntegrationSample_IDT_CON_VEH(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_IsUpdated_IntegrationSample_RP_VehicleStatus_Notifier(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_IntegrationSample_PP_IS_ST_CON_VEH_VehicleState(IS_ST_CON_VEH_Type data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_IntegrationSample_PP_Stm_CEL_Signal_centralErrorLock(IntegrationSample_Stm_CentralErrorLockType data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(IntegrationSample_EcuRunStateModeRequestType, RTE_CODE) Rte_Mode_IntegrationSample_EcuRunState_EcuRunStateMode(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_IntegrationSample_EcuRunState_EcuRunStateMode(IntegrationSample_EcuRunStateModeRequestType nextMode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_IntegrationSample_IntegrationSampleSimpleTimerPort_0_SimpleTimerMode(IntegrationSample_SimpleTimerStateType nextMode); /* PRQA S 0850 */ /* MD_MSR_19.8 */

FUNC(void, RTE_CODE) Rte_Enter_IntegrationSample_EXA_IntegrationSample(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_Exit_IntegrationSample_EXA_IntegrationSample(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_IRead_<r>_<p>_<d>
 * Rte_IStatus_<r>_<p>_<d>
 * Rte_IWrite_<r>_<p>_<d>
 * Rte_IWriteRef_<r>_<p>_<d>
 * Rte_IInvalidate_<r>_<p>_<d>
 *********************************************************************************************************************/

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IRead_R_IntegrationSample_EcuRunStateHandler_EcuRunStateRequest_IntegrationSample_EcuRunStateRequestMode() \
  (Rte_Inst_IntegrationSample->R_IntegrationSample_EcuRunStateHandler_EcuRunStateRequest_IntegrationSample_EcuRunStateRequestMode->value)
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_RP_SA_Kilometer_R_Notifier Rte_Read_IntegrationSample_RP_SA_Kilometer_R_Notifier
# define Rte_Read_RP_SGG_Rx_CON_VEH_IntegrationSample_IDT_CON_VEH Rte_Read_IntegrationSample_RP_SGG_Rx_CON_VEH_IntegrationSample_IDT_CON_VEH
# define Rte_Read_RP_VehicleStatus_Notifier Rte_Read_IntegrationSample_RP_VehicleStatus_Notifier


/**********************************************************************************************************************
 * Rte_IsUpdated_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_IsUpdated_RP_SA_Kilometer_R_Notifier Rte_IsUpdated_IntegrationSample_RP_SA_Kilometer_R_Notifier
# define Rte_IsUpdated_RP_SGG_Rx_CON_VEH_IntegrationSample_IDT_CON_VEH Rte_IsUpdated_IntegrationSample_RP_SGG_Rx_CON_VEH_IntegrationSample_IDT_CON_VEH
# define Rte_IsUpdated_RP_VehicleStatus_Notifier Rte_IsUpdated_IntegrationSample_RP_VehicleStatus_Notifier


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_PP_IS_ST_CON_VEH_VehicleState Rte_Write_IntegrationSample_PP_IS_ST_CON_VEH_VehicleState
# define Rte_Write_PP_Stm_CEL_Signal_centralErrorLock Rte_Write_IntegrationSample_PP_Stm_CEL_Signal_centralErrorLock


/**********************************************************************************************************************
 * Rte_Mode_<p>_<m>
 *********************************************************************************************************************/
# define Rte_Mode_EcuRunState_EcuRunStateMode Rte_Mode_IntegrationSample_EcuRunState_EcuRunStateMode


/**********************************************************************************************************************
 * Rte_Switch_<p>_<m>
 *********************************************************************************************************************/
# define Rte_Switch_EcuRunState_EcuRunStateMode Rte_Switch_IntegrationSample_EcuRunState_EcuRunStateMode
# define Rte_Switch_IntegrationSampleSimpleTimerPort_0_SimpleTimerMode Rte_Switch_IntegrationSample_IntegrationSampleSimpleTimerPort_0_SimpleTimerMode


/**********************************************************************************************************************
 * Exclusive Areas
 *********************************************************************************************************************/

# define Rte_Enter_EXA_IntegrationSample Rte_Enter_IntegrationSample_EXA_IntegrationSample /* RteAnalyzer(ExclusiveArea, OS_INTERRUPT_BLOCKING) */
# define Rte_Exit_EXA_IntegrationSample Rte_Exit_IntegrationSample_EXA_IntegrationSample /* RteAnalyzer(ExclusiveArea, OS_INTERRUPT_BLOCKING) */




# define IntegrationSample_START_SEC_CODE
# include "IntegrationSample_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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

# define RTE_RUNNABLE_IntegrationSampleTimerFunction R_IntegrationSample_TimerFunction
FUNC(void, IntegrationSample_CODE) R_IntegrationSample_TimerFunction(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

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

# define RTE_RUNNABLE_IntegrationSample_Runnable_ManufacturerConfirmation IntegrationSample_ManufacturerConfirmation
FUNC(Std_ReturnType, IntegrationSample_CODE) IntegrationSample_ManufacturerConfirmation(uint8 SID, uint8 ReqType, uint16 SourceAddress, IntegrationSample_Dcm_ConfirmationStatusType ConfirmationStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */

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

# define RTE_RUNNABLE_IntegrationSample_Runnable_ManufacturerIndication IntegrationSample_ManufacturerIndication
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, IntegrationSample_CODE) IntegrationSample_ManufacturerIndication(uint8 SID, P2CONST(uint8, AUTOMATIC, RTE_INTEGRATIONSAMPLE_APPL_DATA) RequestData, uint16 DataSize, uint8 ReqType, uint16 SourceAddress, P2VAR(IntegrationSample_Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_INTEGRATIONSAMPLE_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, IntegrationSample_CODE) IntegrationSample_ManufacturerIndication(uint8 SID, P2CONST(IntegrationSample_RequestDataArray, AUTOMATIC, RTE_INTEGRATIONSAMPLE_APPL_DATA) RequestData, uint16 DataSize, uint8 ReqType, uint16 SourceAddress, P2VAR(IntegrationSample_Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_INTEGRATIONSAMPLE_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

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

# define RTE_RUNNABLE_R_IntegrationSample_EcuRunStateHandler IntegrationSample_EcuRunStateHandler
FUNC(void, IntegrationSample_CODE) IntegrationSample_EcuRunStateHandler(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

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

# define RTE_RUNNABLE_R_ReadDataMILE_KM R_ReadDataMILE_KM
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, IntegrationSample_CODE) R_ReadDataMILE_KM(P2VAR(uint8, AUTOMATIC, RTE_INTEGRATIONSAMPLE_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, IntegrationSample_CODE) R_ReadDataMILE_KM(P2VAR(IntegrationSample_Dem_DataDemDataElementClass_KILOMETER_ArrayType, AUTOMATIC, RTE_INTEGRATIONSAMPLE_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

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

# define RTE_RUNNABLE_R_Receive_SGG_Rx_CON_VEH R_Receive_SGG_Rx_CON_VEH
FUNC(void, IntegrationSample_CODE) R_Receive_SGG_Rx_CON_VEH(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

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

# define RTE_RUNNABLE_R_Receive_SIG_MILE_KM_816_R Runnable_IS_Receive_SIG_MILE_KM_816_R
FUNC(void, IntegrationSample_CODE) Runnable_IS_Receive_SIG_MILE_KM_816_R(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

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

# define RTE_RUNNABLE_R_Receive_VehicleStatus Runnable_IS_R_Receive_VehicleStatus
FUNC(void, IntegrationSample_CODE) Runnable_IS_R_Receive_VehicleStatus(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

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

# define RTE_RUNNABLE_R_Timeout_SGG_Rx_CON_VEH Runnable_IS_R_Timeout_SGG_Rx_CON_VEH
FUNC(void, IntegrationSample_CODE) Runnable_IS_R_Timeout_SGG_Rx_CON_VEH(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

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

# define RTE_RUNNABLE_R_Timeout_VehicleStatus Runnable_IS_R_Timeout_VehicleStatus
FUNC(void, IntegrationSample_CODE) Runnable_IS_R_Timeout_VehicleStatus(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define IntegrationSample_STOP_SEC_CODE
# include "IntegrationSample_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_IntegrationSample_CSDataServices_DemDataElementClass_KILOMETER_E_NOT_OK (1U)

# define RTE_E_IntegrationSample_CSDataServices_DemDataElementClass_KILOMETER_E_OK (0U)

# define RTE_E_IntegrationSample_ServiceRequestNotification_E_NOT_OK (1U)

# define RTE_E_IntegrationSample_ServiceRequestNotification_E_OK (0U)

# define RTE_E_IntegrationSample_ServiceRequestNotification_E_REQUEST_NOT_ACCEPTED (8U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_INTEGRATIONSAMPLE_H */
