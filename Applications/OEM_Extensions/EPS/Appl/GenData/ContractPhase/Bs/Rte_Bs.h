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
 *          File:  Rte_Bs.h
 *        Config:  D:/usr/usage/Delivery/CBD17x/CBD1700369/D04/external/Applications/OEM_Extensions/EPS/EPS.dpa
 *     SW-C Type:  Bs
 *  Generated at:  Tue Dec 19 13:12:25 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.16.0
 *                 RTE Core Version 1.16.0
 *       License:  Unlimited license CBD1700369 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <Bs> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_BS_H
# define _RTE_BS_H

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

# include "Rte_Bs_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_Bs
{
  /* Data Handles section */
  P2VAR(Rte_DE_Bs_LifeCycleRequestType, TYPEDEF, RTE_BS_APPL_VAR) Bs_LifeCycleModeRequest_LifeCycleRequest_requestMode; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_Bs, RTE_CONST, RTE_CONST) Rte_Inst_Bs; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_Bs, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_LifeCycleRequest_requestMode (2U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Bs_ActivationState_Features1_IsActivated(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Bs_LifeCycleRequestType, RTE_CODE) Rte_Mode_Bs_LifeCycle_Mode(P2VAR(Bs_LifeCycleRequestType, AUTOMATIC, RTE_BS_APPL_VAR) previousMode, P2VAR(Bs_LifeCycleRequestType, AUTOMATIC, RTE_BS_APPL_VAR) nextMode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_Bs_LifeCycle_Mode(Bs_LifeCycleRequestType nextMode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_Bs_SecEcuMode_Mode(uint8 nextMode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Bs_DMNotInFieldMode_SetEventStatus(Dem_EventStatusType EventStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Bs_Dlog_EcuUid_ReadData(P2VAR(uint8, AUTOMATIC, RTE_BS_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Bs_Dlog_EcuUid_ReadData(P2VAR(Dlog_EcuUidArrayType, AUTOMATIC, RTE_BS_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Bs_NvMServiceSecEcuMode_GetErrorStatus(P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_BS_APPL_VAR) RequestResultPtr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Bs_NvMServiceSecEcuMode_SetRamBlockStatus(boolean BlockChanged); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Bs_NvMServiceSecEcuMode_WriteBlock(NvM_SrcPtrType SrcPtr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Bs_NvMServiceSfaData_WriteBlock(NvM_SrcPtrType SrcPtr); /* PRQA S 0850 */ /* MD_MSR_19.8 */

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
# define Rte_IRead_Bs_LifeCycleModeRequest_LifeCycleRequest_requestMode() \
  (Rte_Inst_Bs->Bs_LifeCycleModeRequest_LifeCycleRequest_requestMode->value)
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_ActivationState_Features1_IsActivated Rte_Write_Bs_ActivationState_Features1_IsActivated


/**********************************************************************************************************************
 * Rte_Mode_<p>_<m>
 *********************************************************************************************************************/
# define Rte_Mode_LifeCycle_Mode Rte_Mode_Bs_LifeCycle_Mode


/**********************************************************************************************************************
 * Rte_Switch_<p>_<m>
 *********************************************************************************************************************/
# define Rte_Switch_LifeCycle_Mode Rte_Switch_Bs_LifeCycle_Mode
# define Rte_Switch_SecEcuMode_Mode Rte_Switch_Bs_SecEcuMode_Mode


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_DMNotInFieldMode_SetEventStatus Rte_Call_Bs_DMNotInFieldMode_SetEventStatus
# define Rte_Call_Dlog_EcuUid_ReadData Rte_Call_Bs_Dlog_EcuUid_ReadData
# define Rte_Call_NvMServiceSecEcuMode_GetErrorStatus Rte_Call_Bs_NvMServiceSecEcuMode_GetErrorStatus
# define Rte_Call_NvMServiceSecEcuMode_SetRamBlockStatus Rte_Call_Bs_NvMServiceSecEcuMode_SetRamBlockStatus
# define Rte_Call_NvMServiceSecEcuMode_WriteBlock Rte_Call_Bs_NvMServiceSecEcuMode_WriteBlock
# define Rte_Call_NvMServiceSfaData_WriteBlock Rte_Call_Bs_NvMServiceSfaData_WriteBlock




# define Bs_START_SEC_CODE
# include "Bs_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: Bs_LifeCycleModeRequest
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
 *   Bs_LifeCycleRequestType Rte_IRead_Bs_LifeCycleModeRequest_LifeCycleRequest_requestMode(void)
 *
 * Mode Interfaces:
 * ================
 *   Std_ReturnType Rte_Switch_LifeCycle_Mode(Bs_LifeCycleRequestType mode)
 *   Modes of Rte_ModeType_Bs_LifeCycle:
 *   - RTE_MODE_Bs_LifeCycle_BS_INITIALIZED
 *   - RTE_MODE_Bs_LifeCycle_BS_RUNNING
 *   - RTE_MODE_Bs_LifeCycle_BS_STOPPED
 *   - RTE_TRANSITION_Bs_LifeCycle
 *   Std_ReturnType Rte_Switch_SecEcuMode_Mode(uint8 mode)
 *   Modes of Rte_ModeType_SecEcuMode:
 *   - RTE_MODE_SecEcuMode_ENGINEERING
 *   - RTE_MODE_SecEcuMode_FIELD
 *   - RTE_MODE_SecEcuMode_PLANT
 *   - RTE_TRANSITION_SecEcuMode
 *   Bs_LifeCycleRequestType Rte_Mode_LifeCycle_Mode(Rte_ModeType_Bs_LifeCycle *previousMode, Rte_ModeType_Bs_LifeCycle *nextMode)
 *   Modes of Rte_ModeType_Bs_LifeCycle:
 *   - RTE_MODE_Bs_LifeCycle_BS_INITIALIZED
 *   - RTE_MODE_Bs_LifeCycle_BS_RUNNING
 *   - RTE_MODE_Bs_LifeCycle_BS_STOPPED
 *   - RTE_TRANSITION_Bs_LifeCycle
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_DMNotInFieldMode_SetEventStatus(Dem_EventStatusType EventStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_Bs_DiagnosticMonitor_E_NOT_OK
 *   Std_ReturnType Rte_Call_NvMServiceSecEcuMode_GetErrorStatus(NvM_RequestResultType *RequestResultPtr)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_Bs_NvMService_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_Bs_LifeCycleModeRequest Bs_LifeCycleModeRequest
FUNC(void, Bs_CODE) Bs_LifeCycleModeRequest(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Bs_NvMNotifyJobFinishedCertificates
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <JobFinished> of PortPrototype <NvMNotifyJobFinishedCertificates>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Bs_NvMNotifyJobFinishedCertificates(uint8 ServiceId, NvM_RequestResultType JobResult)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_Bs_NvMNotifyJobFinished_E_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_Bs_NvMNotifyJobFinishedCertificates Bs_NvMNotifyJobFinishedCertificates
FUNC(Std_ReturnType, Bs_CODE) Bs_NvMNotifyJobFinishedCertificates(uint8 ServiceId, NvM_RequestResultType JobResult); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Bs_NvMNotifyJobFinishedSecEcuMode
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <JobFinished> of PortPrototype <NvMNotifyJobFinishedSecEcuMode>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Bs_NvMNotifyJobFinishedSecEcuMode(uint8 ServiceId, NvM_RequestResultType JobResult)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_Bs_NvMNotifyJobFinished_E_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_Bs_NvMNotifyJobFinishedSecEcuMode Bs_NvMNotifyJobFinishedSecEcuMode
FUNC(Std_ReturnType, Bs_CODE) Bs_NvMNotifyJobFinishedSecEcuMode(uint8 ServiceId, NvM_RequestResultType JobResult); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Bs_NvMNotifyJobFinishedSfaData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <JobFinished> of PortPrototype <NvMNotifyJobFinishedSfaData>
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_ActivationState_Features1_IsActivated(boolean data)
 *
 * Mode Interfaces:
 * ================
 *   Std_ReturnType Rte_Switch_SecEcuMode_Mode(uint8 mode)
 *   Modes of Rte_ModeType_SecEcuMode:
 *   - RTE_MODE_SecEcuMode_ENGINEERING
 *   - RTE_MODE_SecEcuMode_FIELD
 *   - RTE_MODE_SecEcuMode_PLANT
 *   - RTE_TRANSITION_SecEcuMode
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_NvMServiceSecEcuMode_SetRamBlockStatus(boolean BlockChanged)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_Bs_NvMService_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Bs_NvMNotifyJobFinishedSfaData(uint8 ServiceId, NvM_RequestResultType JobResult)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_Bs_NvMNotifyJobFinished_E_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_Bs_NvMNotifyJobFinishedSfaData Bs_NvMNotifyJobFinishedSfaData
FUNC(Std_ReturnType, Bs_CODE) Bs_NvMNotifyJobFinishedSfaData(uint8 ServiceId, NvM_RequestResultType JobResult); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Bs_SecOCFMGetRxFreshnessAuthData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetRxFreshnessAuthData> of PortPrototype <SecOC_FreshnessManagement>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Bs_SecOCFMGetRxFreshnessAuthData(uint16 freshnessValueId, const uint8 *truncatedFreshnessValue, uint32 truncatedFreshnessValueLength, const uint8 *authenticDataFreshnessValue, uint16 authenticDataFreshnessValueLength, uint16 authVerifyAttempts, uint8 *freshnessValue, uint32 *freshnessValueLength)
 *     Argument truncatedFreshnessValue: uint8* is of type SecOC_FreshnessArrayType
 *     Argument authenticDataFreshnessValue: uint8* is of type SecOC_FreshnessArrayType
 *     Argument freshnessValue: uint8* is of type SecOC_FreshnessArrayType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_FreshnessManagement_E_BUSY
 *   RTE_E_FreshnessManagement_E_NOT_OK
 *   RTE_E_FreshnessManagement_E_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_Bs_SecOCFMGetRxFreshnessAuthData Bs_SecOCFMGetRxFreshnessAuthData
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, Bs_CODE) Bs_SecOCFMGetRxFreshnessAuthData(uint16 freshnessValueId, P2CONST(uint8, AUTOMATIC, RTE_BS_APPL_DATA) truncatedFreshnessValue, uint32 truncatedFreshnessValueLength, P2CONST(uint8, AUTOMATIC, RTE_BS_APPL_DATA) authenticDataFreshnessValue, uint16 authenticDataFreshnessValueLength, uint16 authVerifyAttempts, P2VAR(uint8, AUTOMATIC, RTE_BS_APPL_VAR) freshnessValue, P2VAR(uint32, AUTOMATIC, RTE_BS_APPL_VAR) freshnessValueLength); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, Bs_CODE) Bs_SecOCFMGetRxFreshnessAuthData(uint16 freshnessValueId, P2CONST(uint8, AUTOMATIC, RTE_BS_APPL_DATA) truncatedFreshnessValue, uint32 truncatedFreshnessValueLength, P2CONST(uint8, AUTOMATIC, RTE_BS_APPL_DATA) authenticDataFreshnessValue, uint16 authenticDataFreshnessValueLength, uint16 authVerifyAttempts, P2VAR(uint8, AUTOMATIC, RTE_BS_APPL_VAR) freshnessValue, P2VAR(uint32, AUTOMATIC, RTE_BS_APPL_VAR) freshnessValueLength); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Bs_SecOCFMGetTxFreshnessTruncData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetTxFreshnessTruncData> of PortPrototype <SecOC_FreshnessManagement>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Bs_SecOCFMGetTxFreshnessTruncData(uint16 freshnessValueId, uint8 *freshnessValue, uint32 *freshnessValueLength, uint8 *truncatedFreshnessValue, uint32 *truncatedFreshnessValueLength)
 *     Argument freshnessValue: uint8* is of type SecOC_FreshnessArrayType
 *     Argument truncatedFreshnessValue: uint8* is of type SecOC_FreshnessArrayType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_FreshnessManagement_E_BUSY
 *   RTE_E_FreshnessManagement_E_NOT_OK
 *   RTE_E_FreshnessManagement_E_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_Bs_SecOCFMGetTxFreshnessTruncData Bs_SecOCFMGetTxFreshnessTruncData
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, Bs_CODE) Bs_SecOCFMGetTxFreshnessTruncData(uint16 freshnessValueId, P2VAR(uint8, AUTOMATIC, RTE_BS_APPL_VAR) freshnessValue, P2VAR(uint32, AUTOMATIC, RTE_BS_APPL_VAR) freshnessValueLength, P2VAR(uint8, AUTOMATIC, RTE_BS_APPL_VAR) truncatedFreshnessValue, P2VAR(uint32, AUTOMATIC, RTE_BS_APPL_VAR) truncatedFreshnessValueLength); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, Bs_CODE) Bs_SecOCFMGetTxFreshnessTruncData(uint16 freshnessValueId, P2VAR(uint8, AUTOMATIC, RTE_BS_APPL_VAR) freshnessValue, P2VAR(uint32, AUTOMATIC, RTE_BS_APPL_VAR) freshnessValueLength, P2VAR(uint8, AUTOMATIC, RTE_BS_APPL_VAR) truncatedFreshnessValue, P2VAR(uint32, AUTOMATIC, RTE_BS_APPL_VAR) truncatedFreshnessValueLength); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Bs_SecOCFMSPduTxConfirmation
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <SPduTxConfirmation> of PortPrototype <SecOC_FreshnessManagement>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Bs_SecOCFMSPduTxConfirmation(uint16 freshnessValueId)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_FreshnessManagement_E_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_Bs_SecOCFMSPduTxConfirmation Bs_SecOCFMSPduTxConfirmation
FUNC(Std_ReturnType, Bs_CODE) Bs_SecOCFMSPduTxConfirmation(uint16 freshnessValueId); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Bs_UDSConditionCheckReadLCS
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataService_LCS>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Bs_UDSConditionCheckReadLCS(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_ReadWrite_DCM_E_PENDING
 *   RTE_E_DataServices_ReadWrite_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_Bs_UDSConditionCheckReadLCS Bs_UDSConditionCheckReadLCS
FUNC(Std_ReturnType, Bs_CODE) Bs_UDSConditionCheckReadLCS(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BS_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Bs_UDSReadDataByIdentifierLCS
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataService_LCS>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Bs_UDSReadDataByIdentifierLCS(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type RCDataArrayType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_ReadWrite_DCM_E_PENDING
 *   RTE_E_DataServices_ReadWrite_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_Bs_UDSReadDataByIdentifierLCS Bs_UDSReadDataByIdentifierLCS
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, Bs_CODE) Bs_UDSReadDataByIdentifierLCS(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_BS_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, Bs_CODE) Bs_UDSReadDataByIdentifierLCS(Dcm_OpStatusType OpStatus, P2VAR(RCDataArrayType, AUTOMATIC, RTE_BS_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Bs_UDSReadDataLengthLCS
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadDataLength> of PortPrototype <DataService_LCS>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Bs_UDSReadDataLengthLCS(Dcm_OpStatusType OpStatus, uint16 *DataLength)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_ReadWrite_DCM_E_PENDING
 *   RTE_E_DataServices_ReadWrite_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_Bs_UDSReadDataLengthLCS Bs_UDSReadDataLengthLCS
FUNC(Std_ReturnType, Bs_CODE) Bs_UDSReadDataLengthLCS(Dcm_OpStatusType OpStatus, P2VAR(uint16, AUTOMATIC, RTE_BS_APPL_VAR) DataLength); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Bs_UDSRoutineControlStartCertManAdue
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Start> of PortPrototype <CertManAdue>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Bs_UDSRoutineControlStartCertManAdue(const uint8 *DataIn, Dcm_OpStatusType OpStatus, uint8 *DataOut, uint16 *CurrentDataLength, Dcm_NegativeResponseCodeType *ErrorCode)
 *     Argument DataIn: uint8* is of type RCDataArrayType
 *     Argument DataOut: uint8* is of type RCDataArrayType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_InOut_DCM_E_PENDING
 *   RTE_E_RoutineServices_InOut_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_Bs_UDSRoutineControlStartCertManAdue Bs_UDSRoutineControlStartCertManAdue
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, Bs_CODE) Bs_UDSRoutineControlStartCertManAdue(P2CONST(uint8, AUTOMATIC, RTE_BS_APPL_DATA) DataIn, Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_BS_APPL_VAR) DataOut, P2VAR(uint16, AUTOMATIC, RTE_BS_APPL_VAR) CurrentDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BS_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, Bs_CODE) Bs_UDSRoutineControlStartCertManAdue(P2CONST(RCDataArrayType, AUTOMATIC, RTE_BS_APPL_DATA) DataIn, Dcm_OpStatusType OpStatus, P2VAR(RCDataArrayType, AUTOMATIC, RTE_BS_APPL_VAR) DataOut, P2VAR(uint16, AUTOMATIC, RTE_BS_APPL_VAR) CurrentDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BS_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Bs_UDSRoutineControlStartCertManReadStatus
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Start> of PortPrototype <CertManReadStatus>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Bs_UDSRoutineControlStartCertManReadStatus(Dcm_OpStatusType OpStatus, uint8 *DataOut, uint16 *CurrentDataLength, Dcm_NegativeResponseCodeType *ErrorCode)
 *     Argument DataOut: uint8* is of type RCDataArrayType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_Out_DCM_E_PENDING
 *   RTE_E_RoutineServices_Out_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_Bs_UDSRoutineControlStartCertManReadStatus Bs_UDSRoutineControlStartCertManReadStatus
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, Bs_CODE) Bs_UDSRoutineControlStartCertManReadStatus(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_BS_APPL_VAR) DataOut, P2VAR(uint16, AUTOMATIC, RTE_BS_APPL_VAR) CurrentDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BS_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, Bs_CODE) Bs_UDSRoutineControlStartCertManReadStatus(Dcm_OpStatusType OpStatus, P2VAR(RCDataArrayType, AUTOMATIC, RTE_BS_APPL_VAR) DataOut, P2VAR(uint16, AUTOMATIC, RTE_BS_APPL_VAR) CurrentDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BS_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Bs_UDSRoutineControlStartCertManStartCheck
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Start> of PortPrototype <CertManStartCheck>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Bs_UDSRoutineControlStartCertManStartCheck(Dcm_OpStatusType OpStatus, uint8 *DataOut, uint16 *CurrentDataLength, Dcm_NegativeResponseCodeType *ErrorCode)
 *     Argument DataOut: uint8* is of type RCDataArrayType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_Out_DCM_E_PENDING
 *   RTE_E_RoutineServices_Out_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_Bs_UDSRoutineControlStartCertManStartCheck Bs_UDSRoutineControlStartCertManStartCheck
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, Bs_CODE) Bs_UDSRoutineControlStartCertManStartCheck(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_BS_APPL_VAR) DataOut, P2VAR(uint16, AUTOMATIC, RTE_BS_APPL_VAR) CurrentDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BS_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, Bs_CODE) Bs_UDSRoutineControlStartCertManStartCheck(Dcm_OpStatusType OpStatus, P2VAR(RCDataArrayType, AUTOMATIC, RTE_BS_APPL_VAR) DataOut, P2VAR(uint16, AUTOMATIC, RTE_BS_APPL_VAR) CurrentDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BS_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Bs_UDSRoutineControlStartFieldMode
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Start> of PortPrototype <FieldMode>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Std_ReturnType Rte_Switch_SecEcuMode_Mode(uint8 mode)
 *   Modes of Rte_ModeType_SecEcuMode:
 *   - RTE_MODE_SecEcuMode_ENGINEERING
 *   - RTE_MODE_SecEcuMode_FIELD
 *   - RTE_MODE_SecEcuMode_PLANT
 *   - RTE_TRANSITION_SecEcuMode
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_NvMServiceSecEcuMode_WriteBlock(NvM_SrcPtrType SrcPtr)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_Bs_NvMService_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Bs_UDSRoutineControlStartFieldMode(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_NoParam_DCM_E_PENDING
 *   RTE_E_RoutineServices_NoParam_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_Bs_UDSRoutineControlStartFieldMode Bs_UDSRoutineControlStartFieldMode
FUNC(Std_ReturnType, Bs_CODE) Bs_UDSRoutineControlStartFieldMode(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BS_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Bs_UDSRoutineControlStartSecOcCheckForMissingKey
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Start> of PortPrototype <SecOcCheckForMissingKey>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Bs_UDSRoutineControlStartSecOcCheckForMissingKey(Dcm_OpStatusType OpStatus, uint8 *DataOut, uint16 *CurrentDataLength, Dcm_NegativeResponseCodeType *ErrorCode)
 *     Argument DataOut: uint8* is of type RCDataArrayType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_Out_DCM_E_PENDING
 *   RTE_E_RoutineServices_Out_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_Bs_UDSRoutineControlStartSecOcCheckForMissingKey Bs_UDSRoutineControlStartSecOcCheckForMissingKey
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, Bs_CODE) Bs_UDSRoutineControlStartSecOcCheckForMissingKey(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_BS_APPL_VAR) DataOut, P2VAR(uint16, AUTOMATIC, RTE_BS_APPL_VAR) CurrentDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BS_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, Bs_CODE) Bs_UDSRoutineControlStartSecOcCheckForMissingKey(Dcm_OpStatusType OpStatus, P2VAR(RCDataArrayType, AUTOMATIC, RTE_BS_APPL_VAR) DataOut, P2VAR(uint16, AUTOMATIC, RTE_BS_APPL_VAR) CurrentDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BS_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Bs_UDSRoutineControlStartSecOcKeyExchange
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Start> of PortPrototype <SecOcKeyExchange>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Bs_UDSRoutineControlStartSecOcKeyExchange(const uint8 *DataIn, Dcm_OpStatusType OpStatus, uint8 *DataOut, uint16 *CurrentDataLength, Dcm_NegativeResponseCodeType *ErrorCode)
 *     Argument DataIn: uint8* is of type RCDataArrayType
 *     Argument DataOut: uint8* is of type RCDataArrayType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_InOut_DCM_E_PENDING
 *   RTE_E_RoutineServices_InOut_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_Bs_UDSRoutineControlStartSecOcKeyExchange Bs_UDSRoutineControlStartSecOcKeyExchange
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, Bs_CODE) Bs_UDSRoutineControlStartSecOcKeyExchange(P2CONST(uint8, AUTOMATIC, RTE_BS_APPL_DATA) DataIn, Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_BS_APPL_VAR) DataOut, P2VAR(uint16, AUTOMATIC, RTE_BS_APPL_VAR) CurrentDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BS_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, Bs_CODE) Bs_UDSRoutineControlStartSecOcKeyExchange(P2CONST(RCDataArrayType, AUTOMATIC, RTE_BS_APPL_DATA) DataIn, Dcm_OpStatusType OpStatus, P2VAR(RCDataArrayType, AUTOMATIC, RTE_BS_APPL_VAR) DataOut, P2VAR(uint16, AUTOMATIC, RTE_BS_APPL_VAR) CurrentDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BS_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Bs_UDSRoutineControlStartSecOcResetKeys
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Start> of PortPrototype <SecOcResetKeys>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Bs_UDSRoutineControlStartSecOcResetKeys(const uint8 *DataIn, Dcm_OpStatusType OpStatus, uint16 CurrentDataLength, Dcm_NegativeResponseCodeType *ErrorCode)
 *     Argument DataIn: uint8* is of type RCDataArrayType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_In_DCM_E_PENDING
 *   RTE_E_RoutineServices_In_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_Bs_UDSRoutineControlStartSecOcResetKeys Bs_UDSRoutineControlStartSecOcResetKeys
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, Bs_CODE) Bs_UDSRoutineControlStartSecOcResetKeys(P2CONST(uint8, AUTOMATIC, RTE_BS_APPL_DATA) DataIn, Dcm_OpStatusType OpStatus, uint16 CurrentDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BS_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, Bs_CODE) Bs_UDSRoutineControlStartSecOcResetKeys(P2CONST(RCDataArrayType, AUTOMATIC, RTE_BS_APPL_DATA) DataIn, Dcm_OpStatusType OpStatus, uint16 CurrentDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BS_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Bs_UDSRoutineControlStartSfaClearFeature
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Start> of PortPrototype <SfaClearFeature>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Bs_UDSRoutineControlStartSfaClearFeature(const uint8 *DataIn, Dcm_OpStatusType OpStatus, uint16 CurrentDataLength, Dcm_NegativeResponseCodeType *ErrorCode)
 *     Argument DataIn: uint8* is of type RCDataArrayType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_In_DCM_E_PENDING
 *   RTE_E_RoutineServices_In_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_Bs_UDSRoutineControlStartSfaClearFeature Bs_UDSRoutineControlStartSfaClearFeature
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, Bs_CODE) Bs_UDSRoutineControlStartSfaClearFeature(P2CONST(uint8, AUTOMATIC, RTE_BS_APPL_DATA) DataIn, Dcm_OpStatusType OpStatus, uint16 CurrentDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BS_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, Bs_CODE) Bs_UDSRoutineControlStartSfaClearFeature(P2CONST(RCDataArrayType, AUTOMATIC, RTE_BS_APPL_DATA) DataIn, Dcm_OpStatusType OpStatus, uint16 CurrentDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BS_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Bs_UDSRoutineControlStartSfaDiscoverFeatureIds
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Start> of PortPrototype <SfaDiscoverFeatureIds>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Bs_UDSRoutineControlStartSfaDiscoverFeatureIds(Dcm_OpStatusType OpStatus, uint8 *DataOut, uint16 *CurrentDataLength, Dcm_NegativeResponseCodeType *ErrorCode)
 *     Argument DataOut: uint8* is of type RCDataArrayType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_Out_DCM_E_PENDING
 *   RTE_E_RoutineServices_Out_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_Bs_UDSRoutineControlStartSfaDiscoverFeatureIds Bs_UDSRoutineControlStartSfaDiscoverFeatureIds
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, Bs_CODE) Bs_UDSRoutineControlStartSfaDiscoverFeatureIds(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_BS_APPL_VAR) DataOut, P2VAR(uint16, AUTOMATIC, RTE_BS_APPL_VAR) CurrentDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BS_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, Bs_CODE) Bs_UDSRoutineControlStartSfaDiscoverFeatureIds(Dcm_OpStatusType OpStatus, P2VAR(RCDataArrayType, AUTOMATIC, RTE_BS_APPL_VAR) DataOut, P2VAR(uint16, AUTOMATIC, RTE_BS_APPL_VAR) CurrentDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BS_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Bs_UDSRoutineControlStartSfaReadStatus
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Start> of PortPrototype <SfaReadStatus>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Bs_UDSRoutineControlStartSfaReadStatus(const uint8 *DataIn, Dcm_OpStatusType OpStatus, uint8 *DataOut, uint16 *CurrentDataLength, Dcm_NegativeResponseCodeType *ErrorCode)
 *     Argument DataIn: uint8* is of type RCDataArrayType
 *     Argument DataOut: uint8* is of type RCDataArrayType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_InOut_DCM_E_PENDING
 *   RTE_E_RoutineServices_InOut_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_Bs_UDSRoutineControlStartSfaReadStatus Bs_UDSRoutineControlStartSfaReadStatus
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, Bs_CODE) Bs_UDSRoutineControlStartSfaReadStatus(P2CONST(uint8, AUTOMATIC, RTE_BS_APPL_DATA) DataIn, Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_BS_APPL_VAR) DataOut, P2VAR(uint16, AUTOMATIC, RTE_BS_APPL_VAR) CurrentDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BS_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, Bs_CODE) Bs_UDSRoutineControlStartSfaReadStatus(P2CONST(RCDataArrayType, AUTOMATIC, RTE_BS_APPL_DATA) DataIn, Dcm_OpStatusType OpStatus, P2VAR(RCDataArrayType, AUTOMATIC, RTE_BS_APPL_VAR) DataOut, P2VAR(uint16, AUTOMATIC, RTE_BS_APPL_VAR) CurrentDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BS_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Bs_UDSRoutineControlStartSfaReadVersion
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Start> of PortPrototype <SfaReadVersion>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Bs_UDSRoutineControlStartSfaReadVersion(Dcm_OpStatusType OpStatus, uint8 *DataOut, uint16 *CurrentDataLength, Dcm_NegativeResponseCodeType *ErrorCode)
 *     Argument DataOut: uint8* is of type RCDataArrayType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_Out_DCM_E_PENDING
 *   RTE_E_RoutineServices_Out_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_Bs_UDSRoutineControlStartSfaReadVersion Bs_UDSRoutineControlStartSfaReadVersion
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, Bs_CODE) Bs_UDSRoutineControlStartSfaReadVersion(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_BS_APPL_VAR) DataOut, P2VAR(uint16, AUTOMATIC, RTE_BS_APPL_VAR) CurrentDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BS_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, Bs_CODE) Bs_UDSRoutineControlStartSfaReadVersion(Dcm_OpStatusType OpStatus, P2VAR(RCDataArrayType, AUTOMATIC, RTE_BS_APPL_VAR) DataOut, P2VAR(uint16, AUTOMATIC, RTE_BS_APPL_VAR) CurrentDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BS_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Bs_UDSRoutineControlStartSfaWriteToken
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Start> of PortPrototype <SfaWriteToken>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_Dlog_EcuUid_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type Dlog_EcuUidArrayType
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DataServices_EcuUid_E_NOT_OK
 *   Std_ReturnType Rte_Call_NvMServiceSecEcuMode_WriteBlock(NvM_SrcPtrType SrcPtr)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_Bs_NvMService_E_NOT_OK
 *   Std_ReturnType Rte_Call_NvMServiceSfaData_WriteBlock(NvM_SrcPtrType SrcPtr)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_Bs_NvMService_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Bs_UDSRoutineControlStartSfaWriteToken(const uint8 *DataIn, Dcm_OpStatusType OpStatus, uint16 CurrentDataLength, Dcm_NegativeResponseCodeType *ErrorCode)
 *     Argument DataIn: uint8* is of type RCDataArrayType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_In_DCM_E_PENDING
 *   RTE_E_RoutineServices_In_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_Bs_UDSRoutineControlStartSfaWriteToken Bs_UDSRoutineControlStartSfaWriteToken
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, Bs_CODE) Bs_UDSRoutineControlStartSfaWriteToken(P2CONST(uint8, AUTOMATIC, RTE_BS_APPL_DATA) DataIn, Dcm_OpStatusType OpStatus, uint16 CurrentDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BS_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, Bs_CODE) Bs_UDSRoutineControlStartSfaWriteToken(P2CONST(RCDataArrayType, AUTOMATIC, RTE_BS_APPL_DATA) DataIn, Dcm_OpStatusType OpStatus, uint16 CurrentDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BS_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Bs_UDSWriteDataByIdentifierLCS
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DataService_LCS>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Bs_UDSWriteDataByIdentifierLCS(const uint8 *Data, uint16 DataLength, Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *     Argument Data: uint8* is of type RCDataArrayType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_ReadWrite_DCM_E_PENDING
 *   RTE_E_DataServices_ReadWrite_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_Bs_UDSWriteDataByIdentifierLCS Bs_UDSWriteDataByIdentifierLCS
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, Bs_CODE) Bs_UDSWriteDataByIdentifierLCS(P2CONST(uint8, AUTOMATIC, RTE_BS_APPL_DATA) Data, uint16 DataLength, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BS_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, Bs_CODE) Bs_UDSWriteDataByIdentifierLCS(P2CONST(uint8, AUTOMATIC, RTE_BS_APPL_DATA) Data, uint16 DataLength, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BS_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

# define Bs_STOP_SEC_CODE
# include "Bs_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_Bs_DiagnosticMonitor_E_NOT_OK (1U)

# define RTE_E_Bs_NvMNotifyJobFinished_E_OK (0U)

# define RTE_E_Bs_NvMService_E_NOT_OK (1U)

# define RTE_E_DataServices_EcuUid_E_NOT_OK (1U)

# define RTE_E_DataServices_ReadWrite_DCM_E_PENDING (10U)

# define RTE_E_DataServices_ReadWrite_E_NOT_OK (1U)

# define RTE_E_FreshnessManagement_E_BUSY (2U)

# define RTE_E_FreshnessManagement_E_NOT_OK (1U)

# define RTE_E_FreshnessManagement_E_OK (0U)

# define RTE_E_RoutineServices_In_DCM_E_PENDING (10U)

# define RTE_E_RoutineServices_In_E_NOT_OK (1U)

# define RTE_E_RoutineServices_InOut_DCM_E_PENDING (10U)

# define RTE_E_RoutineServices_InOut_E_NOT_OK (1U)

# define RTE_E_RoutineServices_NoParam_DCM_E_PENDING (10U)

# define RTE_E_RoutineServices_NoParam_E_NOT_OK (1U)

# define RTE_E_RoutineServices_Out_DCM_E_PENDING (10U)

# define RTE_E_RoutineServices_Out_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_BS_H */
