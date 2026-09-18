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
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.16.0
 *                 RTE Core Version 1.16.0
 *       License:  Unlimited license CBD1700369 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <Bs>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_BS_H
# define _RTE_BS_H

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

# include "Rte_Bs_Type.h"
# include "Rte_DataHandleType.h"


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_LifeCycleRequest_requestMode (2U)
# endif


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
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Bs_ActivationState_Features1_IsActivated(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Bs_LifeCycleRequestType, RTE_CODE) Rte_Mode_Bs_LifeCycle_Mode(P2VAR(Bs_LifeCycleRequestType, AUTOMATIC, RTE_BS_APPL_VAR) previousMode, P2VAR(Bs_LifeCycleRequestType, AUTOMATIC, RTE_BS_APPL_VAR) nextMode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_Bs_LifeCycle_Mode(Bs_LifeCycleRequestType nextMode); /* PRQA S 0850 */ /* MD_MSR_19.8 */

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
#  define Rte_IRead_Bs_LifeCycleModeRequest_LifeCycleRequest_requestMode() \
  (Rte_Default_RTE_Mode_switch_Task.Rte_RB.Rte_Bs_Bs_LifeCycleModeRequest.Rte_LifeCycleRequest_requestMode.value)
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_ActivationState_Features1_IsActivated Rte_Write_Bs_ActivationState_Features1_IsActivated


/**********************************************************************************************************************
 * Rte_Mode_<p>_<m>
 *********************************************************************************************************************/
#  define Rte_Mode_LifeCycle_Mode Rte_Mode_Bs_LifeCycle_Mode


/**********************************************************************************************************************
 * Rte_Switch_<p>_<m>
 *********************************************************************************************************************/
#  define Rte_Switch_LifeCycle_Mode Rte_Switch_Bs_LifeCycle_Mode
#  define Rte_Switch_SecEcuMode_Mode Rte_Switch_Bs_SecEcuMode_Mode
#  define Rte_Switch_Bs_SecEcuMode_Mode(mode) (RTE_E_OK) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define Rte_Call_DETService_ReportError(arg1, arg2, arg3) (RTE_E_UNCONNECTED) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_DMNotInFieldMode_SetEventStatus(arg1) (RTE_E_UNCONNECTED) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_DLOG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_DLOG_APPL_CODE) Dlog_ReadDataByIdentifierEcuUid(P2VAR(uint8, AUTOMATIC, RTE_DLOG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(Std_ReturnType, RTE_DLOG_APPL_CODE) Dlog_ReadDataByIdentifierEcuUid(P2VAR(Dlog_EcuUidArrayType, AUTOMATIC, RTE_DLOG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_DLOG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_Dlog_EcuUid_ReadData Dlog_ReadDataByIdentifierEcuUid
#  define Rte_Call_NvMServiceSecEcuMode_GetErrorStatus(arg1) (RTE_E_UNCONNECTED) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_NvMServiceSecEcuMode_SetRamBlockStatus(arg1) (RTE_E_UNCONNECTED) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_NvMServiceSecEcuMode_WriteBlock(arg1) (RTE_E_UNCONNECTED) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_NvMServiceSfaData_WriteBlock(arg1) (RTE_E_UNCONNECTED) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define Bs_START_SEC_CODE
# include "Bs_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_Bs_AdueCertificatesCancel Bs_AdueCertificatesCancel
#  define RTE_RUNNABLE_Bs_AdueCertificatesDownload Bs_AdueCertificatesDownload
#  define RTE_RUNNABLE_Bs_AdueCertificatesDownloadPostprocess Bs_AdueCertificatesDownloadPostprocess
#  define RTE_RUNNABLE_Bs_AdueCertificatesDownloadPreprocess Bs_AdueCertificatesDownloadPreprocess
#  define RTE_RUNNABLE_Bs_AdueCertificatesReqeuestDownload Bs_AdueCertificates_ReqeuestDownload
#  define RTE_RUNNABLE_Bs_AdueCertificatesRequestDownloadExit Bs_AdueCertificatesRequestDownloadExit
#  define RTE_RUNNABLE_Bs_AdueCertificatesRequestUpload Bs_AdueCertificatesRequestUpload
#  define RTE_RUNNABLE_Bs_AdueCertificatesRequestUploadExit Bs_AdueCertificatesRequestUploadExit
#  define RTE_RUNNABLE_Bs_AdueCertificatesUpload Bs_AdueCertificatesUpload
#  define RTE_RUNNABLE_Bs_AdueCertificatesUploadPostprocess Bs_AdueCertificatesUploadPostprocess
#  define RTE_RUNNABLE_Bs_AdueCertificatesUploadPreprocess Bs_AdueCertificatesUploadPreprocess
#  define RTE_RUNNABLE_Bs_LifeCycleModeRequest Bs_LifeCycleModeRequest
#  define RTE_RUNNABLE_Bs_NvMNotifyJobFinishedCertificates Bs_NvMNotifyJobFinishedCertificates
#  define RTE_RUNNABLE_Bs_NvMNotifyJobFinishedSecEcuMode Bs_NvMNotifyJobFinishedSecEcuMode
#  define RTE_RUNNABLE_Bs_NvMNotifyJobFinishedSfaData Bs_NvMNotifyJobFinishedSfaData
#  define RTE_RUNNABLE_Bs_SecOCFMGetRxFreshnessAuthData Bs_SecOCFMGetRxFreshnessAuthData
#  define RTE_RUNNABLE_Bs_SecOCFMGetTxFreshnessTruncData Bs_SecOCFMGetTxFreshnessTruncData
#  define RTE_RUNNABLE_Bs_SecOCFMSPduTxConfirmation Bs_SecOCFMSPduTxConfirmation
#  define RTE_RUNNABLE_Bs_UDSConditionCheckReadLCS Bs_UDSConditionCheckReadLCS
#  define RTE_RUNNABLE_Bs_UDSReadDataByIdentifierLCS Bs_UDSReadDataByIdentifierLCS
#  define RTE_RUNNABLE_Bs_UDSReadDataLengthLCS Bs_UDSReadDataLengthLCS
#  define RTE_RUNNABLE_Bs_UDSRoutineControlStartCertManAdue Bs_UDSRoutineControlStartCertManAdue
#  define RTE_RUNNABLE_Bs_UDSRoutineControlStartCertManReadStatus Bs_UDSRoutineControlStartCertManReadStatus
#  define RTE_RUNNABLE_Bs_UDSRoutineControlStartCertManStartCheck Bs_UDSRoutineControlStartCertManStartCheck
#  define RTE_RUNNABLE_Bs_UDSRoutineControlStartFieldMode Bs_UDSRoutineControlStartFieldMode
#  define RTE_RUNNABLE_Bs_UDSRoutineControlStartSecOcCheckForMissingKey Bs_UDSRoutineControlStartSecOcCheckForMissingKey
#  define RTE_RUNNABLE_Bs_UDSRoutineControlStartSecOcKeyExchange Bs_UDSRoutineControlStartSecOcKeyExchange
#  define RTE_RUNNABLE_Bs_UDSRoutineControlStartSecOcResetKeys Bs_UDSRoutineControlStartSecOcResetKeys
#  define RTE_RUNNABLE_Bs_UDSRoutineControlStartSfaClearFeature Bs_UDSRoutineControlStartSfaClearFeature
#  define RTE_RUNNABLE_Bs_UDSRoutineControlStartSfaDiscoverFeatureIds Bs_UDSRoutineControlStartSfaDiscoverFeatureIds
#  define RTE_RUNNABLE_Bs_UDSRoutineControlStartSfaReadStatus Bs_UDSRoutineControlStartSfaReadStatus
#  define RTE_RUNNABLE_Bs_UDSRoutineControlStartSfaReadVersion Bs_UDSRoutineControlStartSfaReadVersion
#  define RTE_RUNNABLE_Bs_UDSRoutineControlStartSfaWriteToken Bs_UDSRoutineControlStartSfaWriteToken
#  define RTE_RUNNABLE_Bs_UDSWriteDataByIdentifierLCS Bs_UDSWriteDataByIdentifierLCS
# endif

FUNC(Std_ReturnType, Bs_CODE) Bs_AdueCertificatesCancel(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, Bs_CODE) Bs_AdueCertificatesDownload(uint8 blockSequenceCounter, P2CONST(uint8, AUTOMATIC, RTE_BS_APPL_DATA) data, uint32 length, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BS_APPL_VAR) errorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, Bs_CODE) Bs_AdueCertificatesDownload(uint8 blockSequenceCounter, P2CONST(uint8, AUTOMATIC, RTE_BS_APPL_DATA) data, uint32 length, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BS_APPL_VAR) errorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, Bs_CODE) Bs_AdueCertificatesDownloadPostprocess(P2CONST(uint8, AUTOMATIC, RTE_BS_APPL_DATA) parameter, uint16 parameterSize, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BS_APPL_VAR) errorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, Bs_CODE) Bs_AdueCertificatesDownloadPostprocess(P2CONST(uint8, AUTOMATIC, RTE_BS_APPL_DATA) parameter, uint16 parameterSize, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BS_APPL_VAR) errorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, Bs_CODE) Bs_AdueCertificatesDownloadPreprocess(P2CONST(uint8, AUTOMATIC, RTE_BS_APPL_DATA) parameter, uint16 parameterSize, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BS_APPL_VAR) errorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, Bs_CODE) Bs_AdueCertificatesDownloadPreprocess(P2CONST(uint8, AUTOMATIC, RTE_BS_APPL_DATA) parameter, uint16 parameterSize, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BS_APPL_VAR) errorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(Std_ReturnType, Bs_CODE) Bs_AdueCertificates_ReqeuestDownload(uint8 dataFormatIdentifier, uint32 size, P2VAR(uint32, AUTOMATIC, RTE_BS_APPL_VAR) maxBlockLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BS_APPL_VAR) errorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, Bs_CODE) Bs_AdueCertificatesRequestDownloadExit(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, Bs_CODE) Bs_AdueCertificatesRequestUpload(uint8 dataFormatIdentifier, uint32 size, P2VAR(uint32, AUTOMATIC, RTE_BS_APPL_VAR) maxBlockLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BS_APPL_VAR) errorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, Bs_CODE) Bs_AdueCertificatesRequestUploadExit(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, Bs_CODE) Bs_AdueCertificatesUpload(uint8 blockSequenceCounter, P2VAR(uint8, AUTOMATIC, RTE_BS_APPL_VAR) data, uint32 length, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BS_APPL_VAR) errorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, Bs_CODE) Bs_AdueCertificatesUpload(uint8 blockSequenceCounter, P2VAR(uint8, AUTOMATIC, RTE_BS_APPL_VAR) data, uint32 length, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BS_APPL_VAR) errorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, Bs_CODE) Bs_AdueCertificatesUploadPostprocess(P2CONST(uint8, AUTOMATIC, RTE_BS_APPL_DATA) parameter, uint16 parameterSize, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BS_APPL_VAR) errorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, Bs_CODE) Bs_AdueCertificatesUploadPostprocess(P2CONST(uint8, AUTOMATIC, RTE_BS_APPL_DATA) parameter, uint16 parameterSize, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BS_APPL_VAR) errorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, Bs_CODE) Bs_AdueCertificatesUploadPreprocess(P2CONST(uint8, AUTOMATIC, RTE_BS_APPL_DATA) parameter, uint16 parameterSize, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BS_APPL_VAR) errorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, Bs_CODE) Bs_AdueCertificatesUploadPreprocess(P2CONST(uint8, AUTOMATIC, RTE_BS_APPL_DATA) parameter, uint16 parameterSize, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BS_APPL_VAR) errorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(void, Bs_CODE) Bs_LifeCycleModeRequest(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, Bs_CODE) Bs_NvMNotifyJobFinishedCertificates(uint8 ServiceId, NvM_RequestResultType JobResult); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, Bs_CODE) Bs_NvMNotifyJobFinishedSecEcuMode(uint8 ServiceId, NvM_RequestResultType JobResult); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, Bs_CODE) Bs_NvMNotifyJobFinishedSfaData(uint8 ServiceId, NvM_RequestResultType JobResult); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, Bs_CODE) Bs_SecOCFMGetRxFreshnessAuthData(uint16 freshnessValueId, P2CONST(uint8, AUTOMATIC, RTE_BS_APPL_DATA) truncatedFreshnessValue, uint32 truncatedFreshnessValueLength, P2CONST(uint8, AUTOMATIC, RTE_BS_APPL_DATA) authenticDataFreshnessValue, uint16 authenticDataFreshnessValueLength, uint16 authVerifyAttempts, P2VAR(uint8, AUTOMATIC, RTE_BS_APPL_VAR) freshnessValue, P2VAR(uint32, AUTOMATIC, RTE_BS_APPL_VAR) freshnessValueLength); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, Bs_CODE) Bs_SecOCFMGetRxFreshnessAuthData(uint16 freshnessValueId, P2CONST(uint8, AUTOMATIC, RTE_BS_APPL_DATA) truncatedFreshnessValue, uint32 truncatedFreshnessValueLength, P2CONST(uint8, AUTOMATIC, RTE_BS_APPL_DATA) authenticDataFreshnessValue, uint16 authenticDataFreshnessValueLength, uint16 authVerifyAttempts, P2VAR(uint8, AUTOMATIC, RTE_BS_APPL_VAR) freshnessValue, P2VAR(uint32, AUTOMATIC, RTE_BS_APPL_VAR) freshnessValueLength); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, Bs_CODE) Bs_SecOCFMGetTxFreshnessTruncData(uint16 freshnessValueId, P2VAR(uint8, AUTOMATIC, RTE_BS_APPL_VAR) freshnessValue, P2VAR(uint32, AUTOMATIC, RTE_BS_APPL_VAR) freshnessValueLength, P2VAR(uint8, AUTOMATIC, RTE_BS_APPL_VAR) truncatedFreshnessValue, P2VAR(uint32, AUTOMATIC, RTE_BS_APPL_VAR) truncatedFreshnessValueLength); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, Bs_CODE) Bs_SecOCFMGetTxFreshnessTruncData(uint16 freshnessValueId, P2VAR(uint8, AUTOMATIC, RTE_BS_APPL_VAR) freshnessValue, P2VAR(uint32, AUTOMATIC, RTE_BS_APPL_VAR) freshnessValueLength, P2VAR(uint8, AUTOMATIC, RTE_BS_APPL_VAR) truncatedFreshnessValue, P2VAR(uint32, AUTOMATIC, RTE_BS_APPL_VAR) truncatedFreshnessValueLength); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(Std_ReturnType, Bs_CODE) Bs_SecOCFMSPduTxConfirmation(uint16 freshnessValueId); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, Bs_CODE) Bs_UDSConditionCheckReadLCS(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BS_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, Bs_CODE) Bs_UDSReadDataByIdentifierLCS(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_BS_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, Bs_CODE) Bs_UDSReadDataByIdentifierLCS(Dcm_OpStatusType OpStatus, P2VAR(RCDataArrayType, AUTOMATIC, RTE_BS_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(Std_ReturnType, Bs_CODE) Bs_UDSReadDataLengthLCS(Dcm_OpStatusType OpStatus, P2VAR(uint16, AUTOMATIC, RTE_BS_APPL_VAR) DataLength); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, Bs_CODE) Bs_UDSRoutineControlStartCertManAdue(P2CONST(uint8, AUTOMATIC, RTE_BS_APPL_DATA) DataIn, Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_BS_APPL_VAR) DataOut, P2VAR(uint16, AUTOMATIC, RTE_BS_APPL_VAR) CurrentDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BS_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, Bs_CODE) Bs_UDSRoutineControlStartCertManAdue(P2CONST(RCDataArrayType, AUTOMATIC, RTE_BS_APPL_DATA) DataIn, Dcm_OpStatusType OpStatus, P2VAR(RCDataArrayType, AUTOMATIC, RTE_BS_APPL_VAR) DataOut, P2VAR(uint16, AUTOMATIC, RTE_BS_APPL_VAR) CurrentDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BS_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, Bs_CODE) Bs_UDSRoutineControlStartCertManReadStatus(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_BS_APPL_VAR) DataOut, P2VAR(uint16, AUTOMATIC, RTE_BS_APPL_VAR) CurrentDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BS_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, Bs_CODE) Bs_UDSRoutineControlStartCertManReadStatus(Dcm_OpStatusType OpStatus, P2VAR(RCDataArrayType, AUTOMATIC, RTE_BS_APPL_VAR) DataOut, P2VAR(uint16, AUTOMATIC, RTE_BS_APPL_VAR) CurrentDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BS_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, Bs_CODE) Bs_UDSRoutineControlStartCertManStartCheck(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_BS_APPL_VAR) DataOut, P2VAR(uint16, AUTOMATIC, RTE_BS_APPL_VAR) CurrentDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BS_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, Bs_CODE) Bs_UDSRoutineControlStartCertManStartCheck(Dcm_OpStatusType OpStatus, P2VAR(RCDataArrayType, AUTOMATIC, RTE_BS_APPL_VAR) DataOut, P2VAR(uint16, AUTOMATIC, RTE_BS_APPL_VAR) CurrentDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BS_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(Std_ReturnType, Bs_CODE) Bs_UDSRoutineControlStartFieldMode(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BS_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, Bs_CODE) Bs_UDSRoutineControlStartSecOcCheckForMissingKey(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_BS_APPL_VAR) DataOut, P2VAR(uint16, AUTOMATIC, RTE_BS_APPL_VAR) CurrentDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BS_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, Bs_CODE) Bs_UDSRoutineControlStartSecOcCheckForMissingKey(Dcm_OpStatusType OpStatus, P2VAR(RCDataArrayType, AUTOMATIC, RTE_BS_APPL_VAR) DataOut, P2VAR(uint16, AUTOMATIC, RTE_BS_APPL_VAR) CurrentDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BS_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, Bs_CODE) Bs_UDSRoutineControlStartSecOcKeyExchange(P2CONST(uint8, AUTOMATIC, RTE_BS_APPL_DATA) DataIn, Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_BS_APPL_VAR) DataOut, P2VAR(uint16, AUTOMATIC, RTE_BS_APPL_VAR) CurrentDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BS_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, Bs_CODE) Bs_UDSRoutineControlStartSecOcKeyExchange(P2CONST(RCDataArrayType, AUTOMATIC, RTE_BS_APPL_DATA) DataIn, Dcm_OpStatusType OpStatus, P2VAR(RCDataArrayType, AUTOMATIC, RTE_BS_APPL_VAR) DataOut, P2VAR(uint16, AUTOMATIC, RTE_BS_APPL_VAR) CurrentDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BS_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, Bs_CODE) Bs_UDSRoutineControlStartSecOcResetKeys(P2CONST(uint8, AUTOMATIC, RTE_BS_APPL_DATA) DataIn, Dcm_OpStatusType OpStatus, uint16 CurrentDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BS_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, Bs_CODE) Bs_UDSRoutineControlStartSecOcResetKeys(P2CONST(RCDataArrayType, AUTOMATIC, RTE_BS_APPL_DATA) DataIn, Dcm_OpStatusType OpStatus, uint16 CurrentDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BS_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, Bs_CODE) Bs_UDSRoutineControlStartSfaClearFeature(P2CONST(uint8, AUTOMATIC, RTE_BS_APPL_DATA) DataIn, Dcm_OpStatusType OpStatus, uint16 CurrentDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BS_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, Bs_CODE) Bs_UDSRoutineControlStartSfaClearFeature(P2CONST(RCDataArrayType, AUTOMATIC, RTE_BS_APPL_DATA) DataIn, Dcm_OpStatusType OpStatus, uint16 CurrentDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BS_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, Bs_CODE) Bs_UDSRoutineControlStartSfaDiscoverFeatureIds(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_BS_APPL_VAR) DataOut, P2VAR(uint16, AUTOMATIC, RTE_BS_APPL_VAR) CurrentDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BS_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, Bs_CODE) Bs_UDSRoutineControlStartSfaDiscoverFeatureIds(Dcm_OpStatusType OpStatus, P2VAR(RCDataArrayType, AUTOMATIC, RTE_BS_APPL_VAR) DataOut, P2VAR(uint16, AUTOMATIC, RTE_BS_APPL_VAR) CurrentDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BS_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, Bs_CODE) Bs_UDSRoutineControlStartSfaReadStatus(P2CONST(uint8, AUTOMATIC, RTE_BS_APPL_DATA) DataIn, Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_BS_APPL_VAR) DataOut, P2VAR(uint16, AUTOMATIC, RTE_BS_APPL_VAR) CurrentDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BS_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, Bs_CODE) Bs_UDSRoutineControlStartSfaReadStatus(P2CONST(RCDataArrayType, AUTOMATIC, RTE_BS_APPL_DATA) DataIn, Dcm_OpStatusType OpStatus, P2VAR(RCDataArrayType, AUTOMATIC, RTE_BS_APPL_VAR) DataOut, P2VAR(uint16, AUTOMATIC, RTE_BS_APPL_VAR) CurrentDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BS_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, Bs_CODE) Bs_UDSRoutineControlStartSfaReadVersion(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_BS_APPL_VAR) DataOut, P2VAR(uint16, AUTOMATIC, RTE_BS_APPL_VAR) CurrentDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BS_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, Bs_CODE) Bs_UDSRoutineControlStartSfaReadVersion(Dcm_OpStatusType OpStatus, P2VAR(RCDataArrayType, AUTOMATIC, RTE_BS_APPL_VAR) DataOut, P2VAR(uint16, AUTOMATIC, RTE_BS_APPL_VAR) CurrentDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BS_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, Bs_CODE) Bs_UDSRoutineControlStartSfaWriteToken(P2CONST(uint8, AUTOMATIC, RTE_BS_APPL_DATA) DataIn, Dcm_OpStatusType OpStatus, uint16 CurrentDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BS_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, Bs_CODE) Bs_UDSRoutineControlStartSfaWriteToken(P2CONST(RCDataArrayType, AUTOMATIC, RTE_BS_APPL_DATA) DataIn, Dcm_OpStatusType OpStatus, uint16 CurrentDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BS_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, Bs_CODE) Bs_UDSWriteDataByIdentifierLCS(P2CONST(uint8, AUTOMATIC, RTE_BS_APPL_DATA) Data, uint16 DataLength, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BS_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, Bs_CODE) Bs_UDSWriteDataByIdentifierLCS(P2CONST(uint8, AUTOMATIC, RTE_BS_APPL_DATA) Data, uint16 DataLength, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BS_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

# define Bs_STOP_SEC_CODE
# include "Bs_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_Bs_DETService_E_OK (0U)

#  define RTE_E_Bs_DiagnosticMonitor_E_NOT_OK (1U)

#  define RTE_E_Bs_NvMNotifyJobFinished_E_OK (0U)

#  define RTE_E_Bs_NvMService_E_NOT_OK (1U)

#  define RTE_E_DataServices_EcuUid_E_NOT_OK (1U)

#  define RTE_E_DataServices_ReadWrite_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_ReadWrite_E_NOT_OK (1U)

#  define RTE_E_FreshnessManagement_E_BUSY (2U)

#  define RTE_E_FreshnessManagement_E_NOT_OK (1U)

#  define RTE_E_FreshnessManagement_E_OK (0U)

#  define RTE_E_RoutineServices_In_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_In_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_InOut_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_InOut_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_NoParam_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_NoParam_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_Out_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_Out_E_NOT_OK (1U)

#  define RTE_E_StdDiag_Adue_E_NOT_OK (1U)

#  define RTE_E_StdDiag_Adue_E_OK (0U)

#  define RTE_E_StdDiag_Adue_E_RUNNING (10U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_BS_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
