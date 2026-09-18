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
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.16.0
 *                 RTE Core Version 1.16.0
 *       License:  Unlimited license CBD1700369 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <IntegrationSample>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_INTEGRATIONSAMPLE_H
# define _RTE_INTEGRATIONSAMPLE_H

# ifndef RTE_CORE
#  ifdef RTE_APPLICATION_HEADER_FILE
#   error Multiple application header files included.
#  endif
#  define RTE_APPLICATION_HEADER_FILE
#  ifndef RTE_PTR2ARRAYBASETYPE_PASSING
#   define RTE_PTR2ARRAYBASETYPE_PASSING
#  endif
# endif

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_IntegrationSample_Type.h"
# include "Rte_DataHandleType.h"

# include "Rte_Hook.h"


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_EcuRunStateRequest_IntegrationSample_EcuRunStateRequestMode (2U)
#  define Rte_InitValue_PP_IS_ST_CON_VEH_VehicleState (15U)
# endif


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Buffers for Mode Management
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(IntegrationSample_EcuRunStateModeRequestType, RTE_VAR_INIT) Rte_ModeMachine_IntegrationSample_EcuRunState_EcuRunStateMode; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */



# ifndef RTE_CORE

/**********************************************************************************************************************
 * Buffers for implicit communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_NOINIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(Rte_tsDefault_RTE_Mode_switch_Task, RTE_VAR_NOINIT) Rte_Default_RTE_Mode_switch_Task; /* PRQA S 0850, 0759 */ /* MD_MSR_19.8, MD_MSR_18.4 */

#  define RTE_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# endif


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_IntegrationSample_PP_IS_ST_CON_VEH_VehicleState(IS_ST_CON_VEH_Type data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_IntegrationSample_PP_Stm_CEL_Signal_centralErrorLock(IntegrationSample_Stm_CentralErrorLockType data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_IntegrationSample_EcuRunState_EcuRunStateMode(IntegrationSample_EcuRunStateModeRequestType nextMode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_IntegrationSample_IntegrationSampleSimpleTimerPort_0_SimpleTimerMode(IntegrationSample_SimpleTimerStateType nextMode); /* PRQA S 0850 */ /* MD_MSR_19.8 */


# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_IRead_<r>_<p>_<d>
 * Rte_IStatus_<r>_<p>_<d>
 * Rte_IWrite_<r>_<p>_<d>
 * Rte_IWriteRef_<r>_<p>_<d>
 * Rte_IInvalidate_<r>_<p>_<d>
 *********************************************************************************************************************/

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IRead_R_IntegrationSample_EcuRunStateHandler_EcuRunStateRequest_IntegrationSample_EcuRunStateRequestMode() \
  (Rte_Default_RTE_Mode_switch_Task.Rte_RB.Rte_IntegrationSample_R_IntegrationSample_EcuRunStateHandler.Rte_EcuRunStateRequest_IntegrationSample_EcuRunStateRequestMode.value)
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_RP_SA_Kilometer_R_Notifier Rte_Read_IntegrationSample_RP_SA_Kilometer_R_Notifier
#  define Rte_Read_IntegrationSample_RP_SA_Kilometer_R_Notifier(data) (*(data) = Rte_C_MileageKilometreType_0, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_RP_SGG_Rx_CON_VEH_IntegrationSample_IDT_CON_VEH Rte_Read_IntegrationSample_RP_SGG_Rx_CON_VEH_IntegrationSample_IDT_CON_VEH
#  define Rte_Read_IntegrationSample_RP_SGG_Rx_CON_VEH_IntegrationSample_IDT_CON_VEH(data) (*(data) = Rte_C_IntegrationSample_CON_VEH_Type_0, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_RP_VehicleStatus_Notifier Rte_Read_IntegrationSample_RP_VehicleStatus_Notifier
#  define Rte_Read_IntegrationSample_RP_VehicleStatus_Notifier(data) (*(data) = Rte_C_VehicleState_Type_0, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_IsUpdated_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_IsUpdated_RP_SA_Kilometer_R_Notifier Rte_IsUpdated_IntegrationSample_RP_SA_Kilometer_R_Notifier
#  define Rte_IsUpdated_IntegrationSample_RP_SA_Kilometer_R_Notifier() (FALSE) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_IsUpdated_RP_SGG_Rx_CON_VEH_IntegrationSample_IDT_CON_VEH Rte_IsUpdated_IntegrationSample_RP_SGG_Rx_CON_VEH_IntegrationSample_IDT_CON_VEH
#  define Rte_IsUpdated_IntegrationSample_RP_SGG_Rx_CON_VEH_IntegrationSample_IDT_CON_VEH() (FALSE) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_IsUpdated_RP_VehicleStatus_Notifier Rte_IsUpdated_IntegrationSample_RP_VehicleStatus_Notifier
#  define Rte_IsUpdated_IntegrationSample_RP_VehicleStatus_Notifier() (FALSE) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_PP_IS_ST_CON_VEH_VehicleState Rte_Write_IntegrationSample_PP_IS_ST_CON_VEH_VehicleState
#  define Rte_Write_PP_Stm_CEL_Signal_centralErrorLock Rte_Write_IntegrationSample_PP_Stm_CEL_Signal_centralErrorLock


/**********************************************************************************************************************
 * Rte_Mode_<p>_<m>
 *********************************************************************************************************************/
#  define Rte_Mode_EcuRunState_EcuRunStateMode() (Rte_ModeMachine_IntegrationSample_EcuRunState_EcuRunStateMode) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Switch_<p>_<m>
 *********************************************************************************************************************/
#  define Rte_Switch_EcuRunState_EcuRunStateMode Rte_Switch_IntegrationSample_EcuRunState_EcuRunStateMode
#  define Rte_Switch_IntegrationSampleSimpleTimerPort_0_SimpleTimerMode Rte_Switch_IntegrationSample_IntegrationSampleSimpleTimerPort_0_SimpleTimerMode


/**********************************************************************************************************************
 * Exclusive Areas
 *********************************************************************************************************************/

#  define Rte_Enter_EXA_IntegrationSample() SuspendAllInterrupts()  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */

#  define Rte_Exit_EXA_IntegrationSample() ResumeAllInterrupts()  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */


# endif /* !defined(RTE_CORE) */


# define IntegrationSample_START_SEC_CODE
# include "IntegrationSample_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_IntegrationSampleTimerFunction R_IntegrationSample_TimerFunction
#  define RTE_RUNNABLE_IntegrationSample_Runnable_ManufacturerConfirmation IntegrationSample_ManufacturerConfirmation
#  define RTE_RUNNABLE_IntegrationSample_Runnable_ManufacturerIndication IntegrationSample_ManufacturerIndication
#  define RTE_RUNNABLE_R_IntegrationSample_EcuRunStateHandler IntegrationSample_EcuRunStateHandler
#  define RTE_RUNNABLE_R_ReadDataMILE_KM R_ReadDataMILE_KM
#  define RTE_RUNNABLE_R_Receive_SGG_Rx_CON_VEH R_Receive_SGG_Rx_CON_VEH
#  define RTE_RUNNABLE_R_Receive_SIG_MILE_KM_816_R Runnable_IS_Receive_SIG_MILE_KM_816_R
#  define RTE_RUNNABLE_R_Receive_VehicleStatus Runnable_IS_R_Receive_VehicleStatus
#  define RTE_RUNNABLE_R_Timeout_SGG_Rx_CON_VEH Runnable_IS_R_Timeout_SGG_Rx_CON_VEH
#  define RTE_RUNNABLE_R_Timeout_VehicleStatus Runnable_IS_R_Timeout_VehicleStatus
# endif

FUNC(void, IntegrationSample_CODE) R_IntegrationSample_TimerFunction(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, IntegrationSample_CODE) IntegrationSample_ManufacturerConfirmation(uint8 SID, uint8 ReqType, uint16 SourceAddress, IntegrationSample_Dcm_ConfirmationStatusType ConfirmationStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, IntegrationSample_CODE) IntegrationSample_ManufacturerIndication(uint8 SID, P2CONST(uint8, AUTOMATIC, RTE_INTEGRATIONSAMPLE_APPL_DATA) RequestData, uint16 DataSize, uint8 ReqType, uint16 SourceAddress, P2VAR(IntegrationSample_Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_INTEGRATIONSAMPLE_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, IntegrationSample_CODE) IntegrationSample_ManufacturerIndication(uint8 SID, P2CONST(IntegrationSample_RequestDataArray, AUTOMATIC, RTE_INTEGRATIONSAMPLE_APPL_DATA) RequestData, uint16 DataSize, uint8 ReqType, uint16 SourceAddress, P2VAR(IntegrationSample_Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_INTEGRATIONSAMPLE_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(void, IntegrationSample_CODE) IntegrationSample_EcuRunStateHandler(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, IntegrationSample_CODE) R_ReadDataMILE_KM(P2VAR(uint8, AUTOMATIC, RTE_INTEGRATIONSAMPLE_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, IntegrationSample_CODE) R_ReadDataMILE_KM(P2VAR(IntegrationSample_Dem_DataDemDataElementClass_KILOMETER_ArrayType, AUTOMATIC, RTE_INTEGRATIONSAMPLE_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(void, IntegrationSample_CODE) R_Receive_SGG_Rx_CON_VEH(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, IntegrationSample_CODE) Runnable_IS_Receive_SIG_MILE_KM_816_R(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, IntegrationSample_CODE) Runnable_IS_R_Receive_VehicleStatus(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, IntegrationSample_CODE) Runnable_IS_R_Timeout_SGG_Rx_CON_VEH(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, IntegrationSample_CODE) Runnable_IS_R_Timeout_VehicleStatus(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define IntegrationSample_STOP_SEC_CODE
# include "IntegrationSample_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_IntegrationSample_CSDataServices_DemDataElementClass_KILOMETER_E_NOT_OK (1U)

#  define RTE_E_IntegrationSample_CSDataServices_DemDataElementClass_KILOMETER_E_OK (0U)

#  define RTE_E_IntegrationSample_ServiceRequestNotification_E_NOT_OK (1U)

#  define RTE_E_IntegrationSample_ServiceRequestNotification_E_OK (0U)

#  define RTE_E_IntegrationSample_ServiceRequestNotification_E_REQUEST_NOT_ACCEPTED (8U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_INTEGRATIONSAMPLE_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
