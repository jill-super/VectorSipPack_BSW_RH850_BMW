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
 *          File:  Rte_Dcm.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.16.0
 *                 RTE Core Version 1.16.0
 *       License:  Unlimited license CBD1700369 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <Dcm>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_DCM_H
# define _RTE_DCM_H

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

# include "Rte_Dcm_Type.h"
# include "Rte_DataHandleType.h"


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_Dcm_DcmCommunicationControl_ComMConf_ComMChannel_A_FlexRay_5b5a9ac2_DcmCommunicationControl_ComMConf_ComMChannel_A_FlexRay_5b5a9ac2(Dcm_CommunicationModeType nextMode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_Dcm_DcmControlDtcSetting_DcmControlDtcSetting(Dcm_ControlDtcSettingType nextMode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_Dcm_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl(Dcm_DiagnosticSessionControlType nextMode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_Dcm_DcmEcuReset_DcmEcuReset(Dcm_EcuResetType nextMode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_Dcm_DcmModeRapidPowerShutDown_DcmModeRapidPowerShutDown(Dcm_ModeRapidPowerShutDownType nextMode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_Dcm_DcmResponseOnEvent_DcmDspRoeEvent_DcmResponseOnEvent_DcmDspRoeEvent(Dcm_ResponseOnEventType nextMode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_SwitchAck_Dcm_DcmEcuReset_DcmEcuReset(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_SwitchAck_Dcm_DcmModeRapidPowerShutDown_DcmModeRapidPowerShutDown(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DIDRange_DcmDspDidRange_Coding_IsDidAvailable(uint16 DID, Dcm_OpStatusType OpStatus, P2VAR(Dcm_DidSupportedType, AUTOMATIC, RTE_DCM_APPL_VAR) supported); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DIDRange_DcmDspDidRange_Coding_ReadDidData(uint16 DID, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data, Dcm_OpStatusType OpStatus, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DIDRange_DcmDspDidRange_Coding_ReadDidData(uint16 DID, P2VAR(Dcm_Data250ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data, Dcm_OpStatusType OpStatus, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DIDRange_DcmDspDidRange_Coding_WriteDidData(uint16 DID, P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, uint16 DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DIDRange_DcmDspDidRange_Coding_WriteDidData(uint16 DID, P2CONST(Dcm_Data250ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, uint16 DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_DmDtcAktiveMeldung_ConditionCheckRead(P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_DmDtcAktiveMeldung_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_DmDtcAktiveMeldung_ReadData(P2VAR(Dcm_Data21ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_DmDtcAktiveMeldung_ReadDataLength(P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DataLength); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_EthGetNumberOfPorts_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_EthGetNumberOfPorts_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_EthGetNumberOfPorts_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_EthPhyLinkState_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_EthPhyLinkState_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_EthPhyLinkState_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data3ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_EthSignalQuality_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_EthSignalQuality_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_EthSignalQuality_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data8192ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_HddDownloadStatus_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_HddDownloadStatus_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_HddDownloadStatus_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data8192ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_HddDownloadTimeToCompletion_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_HddDownloadTimeToCompletion_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_HddDownloadTimeToCompletion_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_IndivDataTable_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_IndivDataTable_ReadData(P2VAR(Dcm_Data10ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_ListManipulationApplicationData_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_ListManipulationApplicationData_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_ListManipulationApplicationData_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data8192ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_ListManipulationGeneral_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_ListManipulationGeneral_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_ListManipulationGeneral_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data8192ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_ListManipulationSecureBoot_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_ListManipulationSecureBoot_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_ListManipulationSecureBoot_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data8192ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_ListManipulationSecurityArtifact_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_ListManipulationSecurityArtifact_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_ListManipulationSecurityArtifact_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data8192ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_ListManipulationSw_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_ListManipulationSw_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_ListManipulationSw_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data8192ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_PiaProfile0_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_PiaProfile0_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_PiaProfile0_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data28ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_PiaProfile0_ReadDataLength(Dcm_OpStatusType OpStatus, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DataLength); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_PiaProfile0_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, uint16 DataLength, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_PiaProfile0_WriteData(P2CONST(Dcm_Data28ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, uint16 DataLength, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_PiaProfile1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_PiaProfile1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_PiaProfile1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data28ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_PiaProfile1_ReadDataLength(Dcm_OpStatusType OpStatus, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DataLength); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_PiaProfile1_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, uint16 DataLength, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_PiaProfile1_WriteData(P2CONST(Dcm_Data28ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, uint16 DataLength, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_PiaProfile2_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_PiaProfile2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_PiaProfile2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data28ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_PiaProfile2_ReadDataLength(Dcm_OpStatusType OpStatus, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DataLength); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_PiaProfile2_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, uint16 DataLength, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_PiaProfile2_WriteData(P2CONST(Dcm_Data28ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, uint16 DataLength, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_PiaProfileA_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_PiaProfileA_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_PiaProfileA_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data28ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_PiaProfileA_ReadDataLength(Dcm_OpStatusType OpStatus, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DataLength); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_PiaProfileA_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, uint16 DataLength, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_PiaProfileA_WriteData(P2CONST(Dcm_Data28ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, uint16 DataLength, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_ProgrammingCounter_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_ProgrammingCounter_ReadData(P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_ProgrammingCounterMaxValue_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_ProgrammingCounterMaxValue_ReadData(P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_StatusDmFssMaster_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_StatusDmFssMaster_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_StatusDmFssMaster_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_StatusSystime_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_StatusSystime_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_StatusSystime_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup04_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup04_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup04_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data49ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup05_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup05_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup05_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data49ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup06_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup06_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup06_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data49ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup07_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup07_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup07_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data49ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup08_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup08_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup08_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data49ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup09_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup09_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup09_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data49ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup10_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup10_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup10_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data49ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup11_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup11_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup11_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data49ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup12_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup12_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup12_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data49ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup13_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup13_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup13_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data49ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup14_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup14_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup14_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data49ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup15_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup15_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup15_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data49ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup16_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup16_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup16_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data49ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup17_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup17_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup17_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data49ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup18_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup18_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup18_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data49ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup19_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup19_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup19_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data49ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup20_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup20_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup20_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data49ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup21_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup21_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup21_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data49ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup22_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup22_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup22_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data49ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup23_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup23_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup23_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data49ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup24_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup24_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup24_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data49ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup25_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup25_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup25_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data49ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup26_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup26_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup26_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data49ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup27_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup27_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup27_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data49ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup28_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup28_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup28_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data49ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup29_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup29_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup29_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data49ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup30_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup30_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup30_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data49ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup31_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup31_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup31_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data49ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup32_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup32_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup32_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data49ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup33_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup33_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup33_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data49ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup34_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup34_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup34_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data49ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup35_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup35_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup35_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data49ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup36_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup36_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup36_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data49ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup37_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup37_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup37_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data49ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup38_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup38_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup38_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data49ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup39_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup39_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup39_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data49ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup40_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup40_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup40_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data49ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup41_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup41_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup41_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data49ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup42_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup42_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup42_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data49ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup43_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup43_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup43_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data49ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup44_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup44_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup44_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data49ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup45_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup45_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup45_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data49ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup46_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup46_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup46_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data49ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup47_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup47_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup47_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data49ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup48_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup48_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup48_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data49ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup49_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup49_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup49_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data49ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup50_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup50_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup50_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data49ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup51_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup51_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup51_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data49ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup52_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup52_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup52_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data49ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup53_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup53_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup53_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data49ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup54_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup54_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup54_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data49ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup55_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup55_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup55_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data49ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup56_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup56_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup56_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data49ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup57_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup57_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup57_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data49ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup58_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup58_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup58_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data49ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup59_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup59_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup59_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data49ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup60_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup60_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup60_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data49ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup61_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup61_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup61_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data49ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SwfkDeleteSupported_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_SwfkDeleteSupported_ReadData(P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_ZgwZertifikat_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_ZgwZertifikat_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DcmDspData_ZgwZertifikat_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data8192ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_DcmDspRoutine_AblageSystemkontext_Start(uint8 DcmDspStartRoutineInSignal_Function, Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_StatFunction, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_StatDmLockState, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_DcmDspRoutine_ActivateZgwApplicationmode_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_DcmDspRoutine_ActivateZgwCodingmode_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_DcmDspRoutine_ActivateZgwFlashmode_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_DcmDspRoutine_CheckCodingSignature_Start(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_DataOutX, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_DcmDspRoutine_CheckHttpConnection_Start(uint32 DcmDspStartRoutineInSignal_TimeOutTime, uint8 DcmDspStartRoutineInSignal_ServerUrl, Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_HttpConnectionStatus, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_HttpResponseCode, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_DcmDspRoutine_EraseIdrData_Start(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_routineResult, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_DcmDspRoutine_EthArlTable_Start(uint8 DcmDspStartRoutineInSignal_PortIndex, Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_StatNumArlVlanIdEntriesWert, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_StatArlVlanIdEntries, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_DcmDspRoutine_EthArpTable_Start(uint8 DcmDspStartRoutineInSignal_IpVersion, uint8 DcmDspStartRoutineInSignal_ArpTableForIpAddress, Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_StatNumArpEntriesWert, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_StatArpIpMacEntries, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_DcmDspRoutine_EthEnableTestMode_Start(uint8 DcmDspStartRoutineInSignal_PortIndex, uint8 DcmDspStartRoutineInSignal_TestDuration, uint8 DcmDspStartRoutineInSignal_TestModeId, Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_StatPhyTestMode, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_DcmDspRoutine_EthExtendedArlTable_Start(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_StatNumArlVlanIdEntriesWert, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_StatExtendedArlVlanIdEntries, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_DcmDspRoutine_EthGetDhcpStatus_Start(uint8 DcmDspStartRoutineInSignal_NwInterfaceIndex, Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_StatDhcpClientState, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_DcmDspRoutine_EthGetEthernetSwitches_Start(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_StatNumEthSwitchEntriesWert, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_StatEthSwitchEntries, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_DcmDspRoutine_EthGetPortTxRxStats_Start(uint8 DcmDspStartRoutineInSignal_PortIndex, Dcm_OpStatusType OpStatus, P2VAR(uint32, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_StatNumberOfTransmittedPacketsWert, P2VAR(uint32, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_StatBytesSentWert, P2VAR(uint32, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_StatNumberOfDroppedTxPacketsWert, P2VAR(uint32, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_StatNumberOfReceivedPacketsWert, P2VAR(uint32, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_StatStatBytesReceivedWert, P2VAR(uint32, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_StatNumberOfDroppedRxPacketsWert, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_DcmDspRoutine_EthGetSwitchVlanConfiguration_Start(uint8 DcmDspStartRoutineInSignal_SwitchIndex, Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_StatNumVlanConfigurationEntriesWert, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_StatVlanConfigEntries, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_DcmDspRoutine_EthIpConfiguration_Start(uint8 DcmDspStartRoutineInSignal_InternalExternalAddress, uint8 DcmDspStartRoutineInSignal_TriggerGratuitousArp, Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_EcuType, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_StatEthIpConfiguration, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_DcmDspRoutine_EthPhyIdentifier_Start(uint8 DcmDspStartRoutineInSignal_PortIndex, Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_StatOuiData, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_DcmDspRoutine_EthPhyIdentifier_Start(uint8 DcmDspStartRoutineInSignal_PortIndex, Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data6ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_StatOuiData, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_DcmDspRoutine_EthPhySwitchEngineReset_Start(uint8 DcmDspStartRoutineInSignal_PortIndex, uint8 DcmDspStartRoutineInSignal_StopPhyForT, Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_StatPhyReset, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_DcmDspRoutine_EthReadPhyRegister_Start(uint8 DcmDspStartRoutineInSignal_RegReadRange, uint8 DcmDspStartRoutineInSignal_Data, Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_StatRegReadOk, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_StatRegReadData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_DcmDspRoutine_EthReadPhyRegister_Start(uint8 DcmDspStartRoutineInSignal_RegReadRange, uint8 DcmDspStartRoutineInSignal_Data, Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_StatRegReadOk, P2VAR(Dcm_Data16ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_StatRegReadData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_DcmDspRoutine_EthResetPortTxRxStats_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_DcmDspRoutine_EthWritePhyRegister_Start(uint8 DcmDspStartRoutineInSignal_RegWriteProtect, uint8 DcmDspStartRoutineInSignal_Data, Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_StatRegWriteOk, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_DcmDspRoutine_ExternalHsfz_Start(uint8 DcmDspStartRoutineInSignal_Activation, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_DcmDspRoutine_FehlerspeicherEndeWerksablauf_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspRequestRoutineResultsOutSignal_StatFsEndeWabl, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_DcmDspRoutine_FehlerspeicherEndeWerksablauf_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_DcmDspRoutine_FsMsmN101AbfrageFzgsec_Start(uint8 DcmDspStartRoutineInSignal_FunktionsId, Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_Res1, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_Res2, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_State, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_DcmDspRoutine_FsMsmN102_Start(uint8 DcmDspStartRoutineInSignal_FunktionsId, Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_Res1, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_Res2, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_State, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_DcmDspRoutine_FsMsmN111_Start(uint8 DcmDspStartRoutineInSignal_ParameterId, uint8 DcmDspStartRoutineInSignal_FscsmId, Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_Res1, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_Res2, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_Len, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_Data, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_DcmDspRoutine_FsMsmN220X_Start(uint8 DcmDspStartRoutineInSignal_Par3Req, uint8 DcmDspStartRoutineInSignal_Par4Req, Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_Par3Resp, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_Par4Resp, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_DcmDspRoutine_FsMsmN300XTeleservice_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspRequestRoutineResultsOutSignal_Par4Resp, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspRequestRoutineResultsOutSignal_IdResp, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspRequestRoutineResultsOutSignal_Par6Resp, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspRequestRoutineResultsOutSignal_Len, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspRequestRoutineResultsOutSignal_Zufallszahl, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_DcmDspRoutine_FsMsmN300XTeleservice_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspRequestRoutineResultsOutSignal_Par4Resp, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspRequestRoutineResultsOutSignal_IdResp, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspRequestRoutineResultsOutSignal_Par6Resp, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspRequestRoutineResultsOutSignal_Len, P2VAR(Dcm_Data20ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspRequestRoutineResultsOutSignal_Zufallszahl, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_DcmDspRoutine_FsMsmN300XTeleservice_Start(uint8 DcmDspStartRoutineInSignal_Par4Req, uint8 DcmDspStartRoutineInSignal_Id, uint8 DcmDspStartRoutineInSignal_Par6Req, uint8 DcmDspStartRoutineInSignal_Par7Req, uint8 DcmDspStartRoutineInSignal_Par8Req, Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_Par4Resp, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_DcmDspRoutine_FsN251_Start(uint8 DcmDspStartRoutineInSignal_Len, uint8 DcmDspStartRoutineInSignal_Adr, Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_Res1, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_Res2, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_DcmDspRoutine_FsN252_Start(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) DcmDspStartRoutineInSignal_DataToCompare, Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_Result1, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_Result2, uint16 DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_DcmDspRoutine_FsN252_Start(P2CONST(Dcm_Data16ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) DcmDspStartRoutineInSignal_DataToCompare, Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_Result1, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_Result2, uint16 DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_DcmDspRoutine_FsN30X_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspRequestRoutineResultsOutSignal_Par4Resp, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspRequestRoutineResultsOutSignal_R1R2R3, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_DcmDspRoutine_FsN30X_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspRequestRoutineResultsOutSignal_Par4Resp, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspRequestRoutineResultsOutSignal_R1R2R3, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_DcmDspRoutine_FsN30X_Start(uint8 DcmDspStartRoutineInSignal_Par4Req, uint8 DcmDspStartRoutineInSignal_Id, uint8 DcmDspStartRoutineInSignal_Par6Req, uint16 DcmDspStartRoutineInSignal_Len, uint8 DcmDspStartRoutineInSignal_Enc, Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_Par4Resp, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_DcmDspRoutine_FsN31034_Start(uint8 DcmDspStartRoutineInSignal_Par4Req, uint8 DcmDspStartRoutineInSignal_Par5, uint16 DcmDspStartRoutineInSignal_Len, uint8 DcmDspStartRoutineInSignal_Data, Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_Par4Resp, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_DcmDspRoutine_FsN5005_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspRequestRoutineResultsOutSignal_Res1, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspRequestRoutineResultsOutSignal_Res2, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspRequestRoutineResultsOutSignal_Len, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspRequestRoutineResultsOutSignal_SgMitFehlern, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_DcmDspRoutine_FsN5005_Start(uint8 DcmDspStartRoutineInSignal_Len, uint8 DcmDspStartRoutineInSignal_Adr, Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_Res1, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_Res2, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_DcmDspRoutine_FsN5012_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspRequestRoutineResultsOutSignal_Result1, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspRequestRoutineResultsOutSignal_Result2, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspRequestRoutineResultsOutSignal_RandomNumberFscsm, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_DcmDspRoutine_FsN5012_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspRequestRoutineResultsOutSignal_Result1, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspRequestRoutineResultsOutSignal_Result2, P2VAR(Dcm_Data16ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspRequestRoutineResultsOutSignal_RandomNumberFscsm, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_DcmDspRoutine_FsN5012_Start(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_Result1, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_Result2, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_DcmDspRoutine_FsN5034_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspRequestRoutineResultsOutSignal_Result1, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspRequestRoutineResultsOutSignal_Result2, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_DcmDspRoutine_FsN5034_Start(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) DcmDspStartRoutineInSignal_Data, Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_Result1, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_Result2, uint16 DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_DcmDspRoutine_FsN5034_Start(P2CONST(Dcm_Data99ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) DcmDspStartRoutineInSignal_Data, Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_Result1, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_Result2, uint16 DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_DcmDspRoutine_FsN70X_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspRequestRoutineResultsOutSignal_Par4Resp, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspRequestRoutineResultsOutSignal_Result, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_DcmDspRoutine_FsN70X_Start(uint8 DcmDspStartRoutineInSignal_Par4Req, uint8 DcmDspStartRoutineInSignal_Adr, Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_Par4Resp, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_DcmDspRoutine_FsN7112_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspRequestRoutineResultsOutSignal_Result1, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspRequestRoutineResultsOutSignal_Result2, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspRequestRoutineResultsOutSignal_ResultResponse, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_DcmDspRoutine_FsN7112_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspRequestRoutineResultsOutSignal_Result1, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspRequestRoutineResultsOutSignal_Result2, P2VAR(Dcm_Data16ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspRequestRoutineResultsOutSignal_ResultResponse, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_DcmDspRoutine_FsN7112_Start(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) DcmDspStartRoutineInSignal_Challenge, Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_Result1, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_Result2, uint16 DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_DcmDspRoutine_FsN7112_Start(P2CONST(Dcm_Data16ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) DcmDspStartRoutineInSignal_Challenge, Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_Result1, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_Result2, uint16 DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_DcmDspRoutine_GetActualConfig_Start(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_StatIdsWert, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_EcuAddress, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_DcmDspRoutine_IndividualDatenRettung_Start(uint8 DcmDspStartRoutineInSignal, Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_DcmDspRoutine_InitLinBus_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_DcmDspRoutine_InitLinSlave_Start(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_Status, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_DcmDspRoutine_RamDatenSchreiben_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspRequestRoutineResultsOutSignal_StatRamDatenSchreiben, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_DcmDspRoutine_RamDatenSchreiben_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_DcmDspRoutine_RcCpp_Start(uint8 DcmDspStartRoutineInSignal_RcCppRsr, Dcm_OpStatusType OpStatus, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_StatDuration, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_StatApprovalChargingState, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_DcmDspRoutine_RcHdddRi4002_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_DcmDspRoutine_RcPad_Start(uint8 DcmDspStartRoutineInSignal_Dpt, uint8 DcmDspStartRoutineInSignal_Rsvd, uint8 DcmDspStartRoutineInSignal_MoiAfid, uint8 DcmDspStartRoutineInSignal_MemObjIdent, uint8 DcmDspStartRoutineInSignal_AppSpecificParam, Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_Rs, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_DcmDspRoutine_RequestPreferredProtocol_Start(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) DcmDspStartRoutineInSignal_SgbmId, Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_AnzahlItems, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_FpRpp31011021Eopfld, uint16 DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_DcmDspRoutine_RequestPreferredProtocol_Start(P2CONST(Dcm_Data8ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) DcmDspStartRoutineInSignal_SgbmId, Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_AnzahlItems, P2VAR(Dcm_Data16ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_FpRpp31011021Eopfld, uint16 DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_DcmDspRoutine_ResetAktivierungsleitung_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_DcmDspRoutine_SetDefaultBus_Start(uint8 DcmDspStartRoutineInSignal_ZustandDefaultBus, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_DcmDspRoutine_StartSystime_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_DcmDspRoutine_SteuernDmFssMaster_Start(uint8 DcmDspStartRoutineInSignal_ArgSignal, Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_StatSignal, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_DcmDspRoutine_SteuernDmFssMaster_Stop(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_DcmDspRoutine_Swt_Start(uint8 DcmDspStartRoutineInSignal_RCOption, P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) DcmDspStartRoutineInSignal_DataIn, Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_RCOptionOut, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_ReturnCode, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_DataOut, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_DcmDspRoutine_Swt_Start(uint8 DcmDspStartRoutineInSignal_RCOption, P2CONST(Dcm_Data16ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) DcmDspStartRoutineInSignal_DataIn, Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_RCOptionOut, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_ReturnCode, P2VAR(Dcm_Data16ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) DcmDspStartRoutineOutSignal_DataOut, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_SecurityAccess_DcmDspSecurityRow_Coding_CompareKey(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Key, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_SecurityAccess_DcmDspSecurityRow_Coding_CompareKey(P2CONST(Dcm_Data132ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Key, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_SecurityAccess_DcmDspSecurityRow_Coding_GetSeed(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) SecurityAccessDataRecord, Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Seed, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_SecurityAccess_DcmDspSecurityRow_Coding_GetSeed(P2CONST(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) SecurityAccessDataRecord, Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data8ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Seed, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_SecurityAccess_DcmDspSecurityRow_Programming_HDD_CompareKey(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Key, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_SecurityAccess_DcmDspSecurityRow_Programming_HDD_CompareKey(P2CONST(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Key, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_SecurityAccess_DcmDspSecurityRow_Programming_HDD_GetSeed(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) SecurityAccessDataRecord, Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Seed, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_SecurityAccess_DcmDspSecurityRow_Programming_HDD_GetSeed(P2CONST(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) SecurityAccessDataRecord, Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data8ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Seed, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_SecurityAccess_DcmDspSecurityRow_Swt_CompareKey(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Key, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_SecurityAccess_DcmDspSecurityRow_Swt_CompareKey(P2CONST(Dcm_Data132ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Key, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_SecurityAccess_DcmDspSecurityRow_Swt_GetSeed(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) SecurityAccessDataRecord, Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Seed, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_SecurityAccess_DcmDspSecurityRow_Swt_GetSeed(P2CONST(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) SecurityAccessDataRecord, Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data8ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Seed, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_SecurityAccess_DcmDspSecurityRow_level2_CompareKey(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Key, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_SecurityAccess_DcmDspSecurityRow_level2_CompareKey(P2CONST(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Key, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_SecurityAccess_DcmDspSecurityRow_level2_GetSeed(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Seed, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_SecurityAccess_DcmDspSecurityRow_level2_GetSeed(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Seed, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Switch_<p>_<m>
 *********************************************************************************************************************/
#  define Rte_Switch_DcmCommunicationControl_ComMConf_ComMChannel_A_FlexRay_5b5a9ac2_DcmCommunicationControl_ComMConf_ComMChannel_A_FlexRay_5b5a9ac2 Rte_Switch_Dcm_DcmCommunicationControl_ComMConf_ComMChannel_A_FlexRay_5b5a9ac2_DcmCommunicationControl_ComMConf_ComMChannel_A_FlexRay_5b5a9ac2
#  define Rte_Switch_DcmControlDtcSetting_DcmControlDtcSetting Rte_Switch_Dcm_DcmControlDtcSetting_DcmControlDtcSetting
#  define Rte_Switch_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl Rte_Switch_Dcm_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl
#  define Rte_Switch_DcmEcuReset_DcmEcuReset Rte_Switch_Dcm_DcmEcuReset_DcmEcuReset
#  define Rte_Switch_DcmModeRapidPowerShutDown_DcmModeRapidPowerShutDown Rte_Switch_Dcm_DcmModeRapidPowerShutDown_DcmModeRapidPowerShutDown
#  define Rte_Switch_DcmResponseOnEvent_DcmDspRoeEvent_DcmResponseOnEvent_DcmDspRoeEvent Rte_Switch_Dcm_DcmResponseOnEvent_DcmDspRoeEvent_DcmResponseOnEvent_DcmDspRoeEvent


/**********************************************************************************************************************
 * Rte_Feedback_<p>_<m> (mode switch acknowledge)
 *********************************************************************************************************************/
#  define Rte_SwitchAck_DcmEcuReset_DcmEcuReset Rte_SwitchAck_Dcm_DcmEcuReset_DcmEcuReset
#  define Rte_SwitchAck_DcmModeRapidPowerShutDown_DcmModeRapidPowerShutDown Rte_SwitchAck_Dcm_DcmModeRapidPowerShutDown_DcmModeRapidPowerShutDown


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define Rte_Call_DataServices_DIDRange_DcmDspDidRange_Coding_IsDidAvailable Rte_Call_Dcm_DataServices_DIDRange_DcmDspDidRange_Coding_IsDidAvailable
#  define Rte_Call_DataServices_DIDRange_DcmDspDidRange_Coding_ReadDidData Rte_Call_Dcm_DataServices_DIDRange_DcmDspDidRange_Coding_ReadDidData
#  define Rte_Call_DataServices_DIDRange_DcmDspDidRange_Coding_WriteDidData Rte_Call_Dcm_DataServices_DIDRange_DcmDspDidRange_Coding_WriteDidData
#  define RTE_START_SEC_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_CODE) DataServices_Data_DcmDspDid_SensorLesen_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  define RTE_STOP_SEC_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_Data_DcmDspDid_SensorLesen_1_ConditionCheckRead DataServices_Data_DcmDspDid_SensorLesen_1_ConditionCheckRead
#  define RTE_START_SEC_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_CODE) DataServices_Data_DcmDspDid_SensorLesen_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_CODE) DataServices_Data_DcmDspDid_SensorLesen_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data8ByteType, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_Data_DcmDspDid_SensorLesen_1_ReadData DataServices_Data_DcmDspDid_SensorLesen_1_ReadData
#  define RTE_START_SEC_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_CODE) DataServices_Data_DcmDspDid_SensorLesen_2_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  define RTE_STOP_SEC_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_Data_DcmDspDid_SensorLesen_2_ConditionCheckRead DataServices_Data_DcmDspDid_SensorLesen_2_ConditionCheckRead
#  define RTE_START_SEC_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_CODE) DataServices_Data_DcmDspDid_SensorLesen_2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_CODE) DataServices_Data_DcmDspDid_SensorLesen_2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data8ByteType, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_Data_DcmDspDid_SensorLesen_2_ReadData DataServices_Data_DcmDspDid_SensorLesen_2_ReadData
#  define RTE_START_SEC_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_CODE) DataServices_Data_DcmDspDid_SensorLesen_3_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  define RTE_STOP_SEC_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_Data_DcmDspDid_SensorLesen_3_ConditionCheckRead DataServices_Data_DcmDspDid_SensorLesen_3_ConditionCheckRead
#  define RTE_START_SEC_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_CODE) DataServices_Data_DcmDspDid_SensorLesen_3_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_CODE) DataServices_Data_DcmDspDid_SensorLesen_3_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data8ByteType, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_Data_DcmDspDid_SensorLesen_3_ReadData DataServices_Data_DcmDspDid_SensorLesen_3_ReadData
#  define Rte_Call_DataServices_DcmDspData_DmDtcAktiveMeldung_ConditionCheckRead Rte_Call_Dcm_DataServices_DcmDspData_DmDtcAktiveMeldung_ConditionCheckRead
#  define Rte_Call_DataServices_DcmDspData_DmDtcAktiveMeldung_ReadData Rte_Call_Dcm_DataServices_DcmDspData_DmDtcAktiveMeldung_ReadData
#  define Rte_Call_DataServices_DcmDspData_DmDtcAktiveMeldung_ReadDataLength Rte_Call_Dcm_DataServices_DcmDspData_DmDtcAktiveMeldung_ReadDataLength
#  define RTE_START_SEC_DARH_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DARH_APPL_CODE) Darh_ConditionCheckReadActivelyReportedDtcHandler(P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DARH_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  define RTE_STOP_SEC_DARH_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DcmDspData_DmIsDtcActiveResponse_ConditionCheckRead Darh_ConditionCheckReadActivelyReportedDtcHandler
#  define RTE_START_SEC_DARH_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_DARH_APPL_CODE) Darh_ReadActivelyReportedDtcDataHandler(P2VAR(uint8, AUTOMATIC, RTE_DARH_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_DARH_APPL_CODE) Darh_ReadActivelyReportedDtcDataHandler(P2VAR(Darh_ActivelyReportedErrorListType, AUTOMATIC, RTE_DARH_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_DARH_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DcmDspData_DmIsDtcActiveResponse_ReadData Darh_ReadActivelyReportedDtcDataHandler
#  define RTE_START_SEC_DARH_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DARH_APPL_CODE) Darh_ReadActivelyReportedDtcLengthHandler(P2VAR(uint16, AUTOMATIC, RTE_DARH_APPL_VAR) DataLength); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  define RTE_STOP_SEC_DARH_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DcmDspData_DmIsDtcActiveResponse_ReadDataLength Darh_ReadActivelyReportedDtcLengthHandler
#  define RTE_START_SEC_DLOG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_DLOG_APPL_CODE) Dlog_ReadDataByIdentifierEcuSerialNumber(P2VAR(uint8, AUTOMATIC, RTE_DLOG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_DLOG_APPL_CODE) Dlog_ReadDataByIdentifierEcuSerialNumber(P2VAR(SerialNumberArrayType, AUTOMATIC, RTE_DLOG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_DLOG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DcmDspData_EcuSerialNumber_ReadData Dlog_ReadDataByIdentifierEcuSerialNumber
#  define RTE_START_SEC_OMC_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_OMC_APPL_CODE) Omc_ConditionCheckReadDIDOperatingMode(P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_OMC_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  define RTE_STOP_SEC_OMC_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DcmDspData_EnergySavingState_ConditionCheckRead Omc_ConditionCheckReadDIDOperatingMode
#  define RTE_START_SEC_OMC_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_OMC_APPL_CODE) Omc_ReadDIDOperatingMode(P2VAR(uint8, AUTOMATIC, RTE_OMC_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_OMC_APPL_CODE) Omc_ReadDIDOperatingMode(P2VAR(UInt8_Array1, AUTOMATIC, RTE_OMC_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_OMC_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DcmDspData_EnergySavingState_ReadData Omc_ReadDIDOperatingMode
#  define Rte_Call_DataServices_DcmDspData_EthGetNumberOfPorts_ConditionCheckRead Rte_Call_Dcm_DataServices_DcmDspData_EthGetNumberOfPorts_ConditionCheckRead
#  define Rte_Call_DataServices_DcmDspData_EthGetNumberOfPorts_ReadData Rte_Call_Dcm_DataServices_DcmDspData_EthGetNumberOfPorts_ReadData
#  define Rte_Call_DataServices_DcmDspData_EthPhyLinkState_ConditionCheckRead Rte_Call_Dcm_DataServices_DcmDspData_EthPhyLinkState_ConditionCheckRead
#  define Rte_Call_DataServices_DcmDspData_EthPhyLinkState_ReadData Rte_Call_Dcm_DataServices_DcmDspData_EthPhyLinkState_ReadData
#  define Rte_Call_DataServices_DcmDspData_EthSignalQuality_ConditionCheckRead Rte_Call_Dcm_DataServices_DcmDspData_EthSignalQuality_ConditionCheckRead
#  define Rte_Call_DataServices_DcmDspData_EthSignalQuality_ReadData Rte_Call_Dcm_DataServices_DcmDspData_EthSignalQuality_ReadData
#  define RTE_START_SEC_OMC_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_OMC_APPL_CODE) Omc_ConditionCheckReadDIDExtendedOperatingMode(P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_OMC_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  define RTE_STOP_SEC_OMC_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DcmDspData_ExtendedEnergySavingState_ConditionCheckRead Omc_ConditionCheckReadDIDExtendedOperatingMode
#  define RTE_START_SEC_OMC_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_OMC_APPL_CODE) Omc_ReadDIDExtendedOperatingMode(P2VAR(uint8, AUTOMATIC, RTE_OMC_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_OMC_APPL_CODE) Omc_ReadDIDExtendedOperatingMode(P2VAR(UInt8_Array1, AUTOMATIC, RTE_OMC_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_OMC_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DcmDspData_ExtendedEnergySavingState_ReadData Omc_ReadDIDExtendedOperatingMode
#  define RTE_START_SEC_DLOG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_DLOG_APPL_CODE) Dlog_ReadDataByIdentifierFlashTimingParameter(P2VAR(uint8, AUTOMATIC, RTE_DLOG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_DLOG_APPL_CODE) Dlog_ReadDataByIdentifierFlashTimingParameter(P2VAR(TimingParametersArrayType, AUTOMATIC, RTE_DLOG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_DLOG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DcmDspData_FlashTimingParameter_ReadData Dlog_ReadDataByIdentifierFlashTimingParameter
#  define Rte_Call_DataServices_DcmDspData_HddDownloadStatus_ConditionCheckRead Rte_Call_Dcm_DataServices_DcmDspData_HddDownloadStatus_ConditionCheckRead
#  define Rte_Call_DataServices_DcmDspData_HddDownloadStatus_ReadData Rte_Call_Dcm_DataServices_DcmDspData_HddDownloadStatus_ReadData
#  define Rte_Call_DataServices_DcmDspData_HddDownloadTimeToCompletion_ConditionCheckRead Rte_Call_Dcm_DataServices_DcmDspData_HddDownloadTimeToCompletion_ConditionCheckRead
#  define Rte_Call_DataServices_DcmDspData_HddDownloadTimeToCompletion_ReadData Rte_Call_Dcm_DataServices_DcmDspData_HddDownloadTimeToCompletion_ReadData
#  define RTE_START_SEC_DLOG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_DLOG_APPL_CODE) Dlog_ReadDataByIdentifierManufacturingDate(P2VAR(uint8, AUTOMATIC, RTE_DLOG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_DLOG_APPL_CODE) Dlog_ReadDataByIdentifierManufacturingDate(P2VAR(ManufacturingDataArrayType, AUTOMATIC, RTE_DLOG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_DLOG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DcmDspData_Herstelldatum_ReadData Dlog_ReadDataByIdentifierManufacturingDate
#  define Rte_Call_DataServices_DcmDspData_IndivDataTable_ReadData Rte_Call_Dcm_DataServices_DcmDspData_IndivDataTable_ReadData
#  define Rte_Call_DataServices_DcmDspData_ListManipulationApplicationData_ConditionCheckRead Rte_Call_Dcm_DataServices_DcmDspData_ListManipulationApplicationData_ConditionCheckRead
#  define Rte_Call_DataServices_DcmDspData_ListManipulationApplicationData_ReadData Rte_Call_Dcm_DataServices_DcmDspData_ListManipulationApplicationData_ReadData
#  define Rte_Call_DataServices_DcmDspData_ListManipulationGeneral_ConditionCheckRead Rte_Call_Dcm_DataServices_DcmDspData_ListManipulationGeneral_ConditionCheckRead
#  define Rte_Call_DataServices_DcmDspData_ListManipulationGeneral_ReadData Rte_Call_Dcm_DataServices_DcmDspData_ListManipulationGeneral_ReadData
#  define Rte_Call_DataServices_DcmDspData_ListManipulationSecureBoot_ConditionCheckRead Rte_Call_Dcm_DataServices_DcmDspData_ListManipulationSecureBoot_ConditionCheckRead
#  define Rte_Call_DataServices_DcmDspData_ListManipulationSecureBoot_ReadData Rte_Call_Dcm_DataServices_DcmDspData_ListManipulationSecureBoot_ReadData
#  define Rte_Call_DataServices_DcmDspData_ListManipulationSecurityArtifact_ConditionCheckRead Rte_Call_Dcm_DataServices_DcmDspData_ListManipulationSecurityArtifact_ConditionCheckRead
#  define Rte_Call_DataServices_DcmDspData_ListManipulationSecurityArtifact_ReadData Rte_Call_Dcm_DataServices_DcmDspData_ListManipulationSecurityArtifact_ReadData
#  define Rte_Call_DataServices_DcmDspData_ListManipulationSw_ConditionCheckRead Rte_Call_Dcm_DataServices_DcmDspData_ListManipulationSw_ConditionCheckRead
#  define Rte_Call_DataServices_DcmDspData_ListManipulationSw_ReadData Rte_Call_Dcm_DataServices_DcmDspData_ListManipulationSw_ReadData
#  define RTE_START_SEC_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_CODE) DataServices_DcmDspData_MileKmEeprom_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  define RTE_STOP_SEC_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DcmDspData_MileKmEeprom_ConditionCheckRead DataServices_DcmDspData_MileKmEeprom_ConditionCheckRead
#  define RTE_START_SEC_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_CODE) DataServices_DcmDspData_MileKmEeprom_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_CODE) DataServices_DcmDspData_MileKmEeprom_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data3ByteType, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DcmDspData_MileKmEeprom_ReadData DataServices_DcmDspData_MileKmEeprom_ReadData
#  define Rte_Call_DataServices_DcmDspData_PiaProfile0_ConditionCheckRead Rte_Call_Dcm_DataServices_DcmDspData_PiaProfile0_ConditionCheckRead
#  define Rte_Call_DataServices_DcmDspData_PiaProfile0_ReadData Rte_Call_Dcm_DataServices_DcmDspData_PiaProfile0_ReadData
#  define Rte_Call_DataServices_DcmDspData_PiaProfile0_ReadDataLength Rte_Call_Dcm_DataServices_DcmDspData_PiaProfile0_ReadDataLength
#  define Rte_Call_DataServices_DcmDspData_PiaProfile0_WriteData Rte_Call_Dcm_DataServices_DcmDspData_PiaProfile0_WriteData
#  define Rte_Call_DataServices_DcmDspData_PiaProfile1_ConditionCheckRead Rte_Call_Dcm_DataServices_DcmDspData_PiaProfile1_ConditionCheckRead
#  define Rte_Call_DataServices_DcmDspData_PiaProfile1_ReadData Rte_Call_Dcm_DataServices_DcmDspData_PiaProfile1_ReadData
#  define Rte_Call_DataServices_DcmDspData_PiaProfile1_ReadDataLength Rte_Call_Dcm_DataServices_DcmDspData_PiaProfile1_ReadDataLength
#  define Rte_Call_DataServices_DcmDspData_PiaProfile1_WriteData Rte_Call_Dcm_DataServices_DcmDspData_PiaProfile1_WriteData
#  define Rte_Call_DataServices_DcmDspData_PiaProfile2_ConditionCheckRead Rte_Call_Dcm_DataServices_DcmDspData_PiaProfile2_ConditionCheckRead
#  define Rte_Call_DataServices_DcmDspData_PiaProfile2_ReadData Rte_Call_Dcm_DataServices_DcmDspData_PiaProfile2_ReadData
#  define Rte_Call_DataServices_DcmDspData_PiaProfile2_ReadDataLength Rte_Call_Dcm_DataServices_DcmDspData_PiaProfile2_ReadDataLength
#  define Rte_Call_DataServices_DcmDspData_PiaProfile2_WriteData Rte_Call_Dcm_DataServices_DcmDspData_PiaProfile2_WriteData
#  define Rte_Call_DataServices_DcmDspData_PiaProfileA_ConditionCheckRead Rte_Call_Dcm_DataServices_DcmDspData_PiaProfileA_ConditionCheckRead
#  define Rte_Call_DataServices_DcmDspData_PiaProfileA_ReadData Rte_Call_Dcm_DataServices_DcmDspData_PiaProfileA_ReadData
#  define Rte_Call_DataServices_DcmDspData_PiaProfileA_ReadDataLength Rte_Call_Dcm_DataServices_DcmDspData_PiaProfileA_ReadDataLength
#  define Rte_Call_DataServices_DcmDspData_PiaProfileA_WriteData Rte_Call_Dcm_DataServices_DcmDspData_PiaProfileA_WriteData
#  define Rte_Call_DataServices_DcmDspData_ProgrammingCounter_ReadData Rte_Call_Dcm_DataServices_DcmDspData_ProgrammingCounter_ReadData
#  define Rte_Call_DataServices_DcmDspData_ProgrammingCounterMaxValue_ReadData Rte_Call_Dcm_DataServices_DcmDspData_ProgrammingCounterMaxValue_ReadData
#  define RTE_START_SEC_STDDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_STDDIAG_APPL_CODE) StdDiag_ConditionCheckActiveSessionState(P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_STDDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  define RTE_STOP_SEC_STDDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DcmDspData_ReadActiveSessionState_ConditionCheckRead StdDiag_ConditionCheckActiveSessionState
#  define RTE_START_SEC_STDDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_STDDIAG_APPL_CODE) StdDiag_ReadActiveSessionState(P2VAR(uint8, AUTOMATIC, RTE_STDDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_STDDIAG_APPL_CODE) StdDiag_ReadActiveSessionState(P2VAR(ActiveSessionState_ArrayType, AUTOMATIC, RTE_STDDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_STDDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DcmDspData_ReadActiveSessionState_ReadData StdDiag_ReadActiveSessionState
#  define RTE_START_SEC_DLOG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_DLOG_APPL_CODE) Dlog_ReadDataByIdentifierHWModificationIndex(P2VAR(uint8, AUTOMATIC, RTE_DLOG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_DLOG_APPL_CODE) Dlog_ReadDataByIdentifierHWModificationIndex(P2VAR(Dlog_HWModificationIndexArrayType, AUTOMATIC, RTE_DLOG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_DLOG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DcmDspData_Readhwmodificationindex_ReadData Dlog_ReadDataByIdentifierHWModificationIndex
#  define RTE_START_SEC_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_CODE) DataServices_DcmDspData_Sekundaererfehlerspeicher_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  define RTE_STOP_SEC_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DcmDspData_Sekundaererfehlerspeicher_ConditionCheckRead DataServices_DcmDspData_Sekundaererfehlerspeicher_ConditionCheckRead
#  define RTE_START_SEC_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_CODE) DataServices_DcmDspData_Sekundaererfehlerspeicher_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_CODE) DataServices_DcmDspData_Sekundaererfehlerspeicher_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data8192ByteType, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DcmDspData_Sekundaererfehlerspeicher_ReadData DataServices_DcmDspData_Sekundaererfehlerspeicher_ReadData
#  define RTE_START_SEC_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_CODE) DataServices_DcmDspData_SensorenAnzahlLesen_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  define RTE_STOP_SEC_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DcmDspData_SensorenAnzahlLesen_ConditionCheckRead DataServices_DcmDspData_SensorenAnzahlLesen_ConditionCheckRead
#  define RTE_START_SEC_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_CODE) DataServices_DcmDspData_SensorenAnzahlLesen_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_CODE) DataServices_DcmDspData_SensorenAnzahlLesen_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DcmDspData_SensorenAnzahlLesen_ReadData DataServices_DcmDspData_SensorenAnzahlLesen_ReadData
#  define RTE_START_SEC_STDDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_STDDIAG_APPL_CODE) StdDiag_ReadSgbdIndex(P2VAR(uint8, AUTOMATIC, RTE_STDDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_STDDIAG_APPL_CODE) StdDiag_ReadSgbdIndex(P2VAR(SgbdIndex_ArrayType, AUTOMATIC, RTE_STDDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_STDDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DcmDspData_SgbdIdx_ReadData StdDiag_ReadSgbdIndex
#  define Rte_Call_DataServices_DcmDspData_StatusDmFssMaster_ConditionCheckRead Rte_Call_Dcm_DataServices_DcmDspData_StatusDmFssMaster_ConditionCheckRead
#  define Rte_Call_DataServices_DcmDspData_StatusDmFssMaster_ReadData Rte_Call_Dcm_DataServices_DcmDspData_StatusDmFssMaster_ReadData
#  define Rte_Call_DataServices_DcmDspData_StatusSystime_ConditionCheckRead Rte_Call_Dcm_DataServices_DcmDspData_StatusSystime_ConditionCheckRead
#  define Rte_Call_DataServices_DcmDspData_StatusSystime_ReadData Rte_Call_Dcm_DataServices_DcmDspData_StatusSystime_ReadData
#  define RTE_START_SEC_DLOG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DLOG_APPL_CODE) Dlog_ConditionCheckSvkCurrent(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DLOG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  define RTE_STOP_SEC_DLOG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DcmDspData_SvkAktuell_ConditionCheckRead Dlog_ConditionCheckSvkCurrent
#  define RTE_START_SEC_DLOG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_DLOG_APPL_CODE) Dlog_ReadDataByIdentifierSvkCurrent(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DLOG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_DLOG_APPL_CODE) Dlog_ReadDataByIdentifierSvkCurrent(Dcm_OpStatusType OpStatus, P2VAR(SvkDataArrayType, AUTOMATIC, RTE_DLOG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_DLOG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DcmDspData_SvkAktuell_ReadData Dlog_ReadDataByIdentifierSvkCurrent
#  define RTE_START_SEC_DLOG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DLOG_APPL_CODE) Dlog_ReadDataLengthSvkCurrent(Dcm_OpStatusType OpStatus, P2VAR(uint16, AUTOMATIC, RTE_DLOG_APPL_VAR) DataLength); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  define RTE_STOP_SEC_DLOG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DcmDspData_SvkAktuell_ReadDataLength Dlog_ReadDataLengthSvkCurrent
#  define RTE_START_SEC_DLOG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DLOG_APPL_CODE) Dlog_ConditionCheckSvkBackup01(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DLOG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  define RTE_STOP_SEC_DLOG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DcmDspData_SvkBackup01_ConditionCheckRead Dlog_ConditionCheckSvkBackup01
#  define RTE_START_SEC_DLOG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_DLOG_APPL_CODE) Dlog_ReadDataByIdentifierSvkBackup01(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DLOG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_DLOG_APPL_CODE) Dlog_ReadDataByIdentifierSvkBackup01(Dcm_OpStatusType OpStatus, P2VAR(SvkHistoryDataArrayType, AUTOMATIC, RTE_DLOG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_DLOG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DcmDspData_SvkBackup01_ReadData Dlog_ReadDataByIdentifierSvkBackup01
#  define RTE_START_SEC_DLOG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DLOG_APPL_CODE) Dlog_ConditionCheckSvkBackup02(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DLOG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  define RTE_STOP_SEC_DLOG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DcmDspData_SvkBackup02_ConditionCheckRead Dlog_ConditionCheckSvkBackup02
#  define RTE_START_SEC_DLOG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_DLOG_APPL_CODE) Dlog_ReadDataByIdentifierSvkBackup02(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DLOG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_DLOG_APPL_CODE) Dlog_ReadDataByIdentifierSvkBackup02(Dcm_OpStatusType OpStatus, P2VAR(SvkHistoryDataArrayType, AUTOMATIC, RTE_DLOG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_DLOG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DcmDspData_SvkBackup02_ReadData Dlog_ReadDataByIdentifierSvkBackup02
#  define RTE_START_SEC_DLOG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DLOG_APPL_CODE) Dlog_ConditionCheckSvkBackup03(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DLOG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  define RTE_STOP_SEC_DLOG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DcmDspData_SvkBackup03_ConditionCheckRead Dlog_ConditionCheckSvkBackup03
#  define RTE_START_SEC_DLOG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_DLOG_APPL_CODE) Dlog_ReadDataByIdentifierSvkBackup03(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DLOG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_DLOG_APPL_CODE) Dlog_ReadDataByIdentifierSvkBackup03(Dcm_OpStatusType OpStatus, P2VAR(SvkHistoryDataArrayType, AUTOMATIC, RTE_DLOG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_DLOG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DcmDspData_SvkBackup03_ReadData Dlog_ReadDataByIdentifierSvkBackup03
#  define Rte_Call_DataServices_DcmDspData_SvkBackup04_ConditionCheckRead Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup04_ConditionCheckRead
#  define Rte_Call_DataServices_DcmDspData_SvkBackup04_ReadData Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup04_ReadData
#  define Rte_Call_DataServices_DcmDspData_SvkBackup05_ConditionCheckRead Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup05_ConditionCheckRead
#  define Rte_Call_DataServices_DcmDspData_SvkBackup05_ReadData Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup05_ReadData
#  define Rte_Call_DataServices_DcmDspData_SvkBackup06_ConditionCheckRead Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup06_ConditionCheckRead
#  define Rte_Call_DataServices_DcmDspData_SvkBackup06_ReadData Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup06_ReadData
#  define Rte_Call_DataServices_DcmDspData_SvkBackup07_ConditionCheckRead Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup07_ConditionCheckRead
#  define Rte_Call_DataServices_DcmDspData_SvkBackup07_ReadData Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup07_ReadData
#  define Rte_Call_DataServices_DcmDspData_SvkBackup08_ConditionCheckRead Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup08_ConditionCheckRead
#  define Rte_Call_DataServices_DcmDspData_SvkBackup08_ReadData Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup08_ReadData
#  define Rte_Call_DataServices_DcmDspData_SvkBackup09_ConditionCheckRead Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup09_ConditionCheckRead
#  define Rte_Call_DataServices_DcmDspData_SvkBackup09_ReadData Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup09_ReadData
#  define Rte_Call_DataServices_DcmDspData_SvkBackup10_ConditionCheckRead Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup10_ConditionCheckRead
#  define Rte_Call_DataServices_DcmDspData_SvkBackup10_ReadData Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup10_ReadData
#  define Rte_Call_DataServices_DcmDspData_SvkBackup11_ConditionCheckRead Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup11_ConditionCheckRead
#  define Rte_Call_DataServices_DcmDspData_SvkBackup11_ReadData Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup11_ReadData
#  define Rte_Call_DataServices_DcmDspData_SvkBackup12_ConditionCheckRead Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup12_ConditionCheckRead
#  define Rte_Call_DataServices_DcmDspData_SvkBackup12_ReadData Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup12_ReadData
#  define Rte_Call_DataServices_DcmDspData_SvkBackup13_ConditionCheckRead Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup13_ConditionCheckRead
#  define Rte_Call_DataServices_DcmDspData_SvkBackup13_ReadData Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup13_ReadData
#  define Rte_Call_DataServices_DcmDspData_SvkBackup14_ConditionCheckRead Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup14_ConditionCheckRead
#  define Rte_Call_DataServices_DcmDspData_SvkBackup14_ReadData Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup14_ReadData
#  define Rte_Call_DataServices_DcmDspData_SvkBackup15_ConditionCheckRead Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup15_ConditionCheckRead
#  define Rte_Call_DataServices_DcmDspData_SvkBackup15_ReadData Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup15_ReadData
#  define Rte_Call_DataServices_DcmDspData_SvkBackup16_ConditionCheckRead Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup16_ConditionCheckRead
#  define Rte_Call_DataServices_DcmDspData_SvkBackup16_ReadData Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup16_ReadData
#  define Rte_Call_DataServices_DcmDspData_SvkBackup17_ConditionCheckRead Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup17_ConditionCheckRead
#  define Rte_Call_DataServices_DcmDspData_SvkBackup17_ReadData Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup17_ReadData
#  define Rte_Call_DataServices_DcmDspData_SvkBackup18_ConditionCheckRead Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup18_ConditionCheckRead
#  define Rte_Call_DataServices_DcmDspData_SvkBackup18_ReadData Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup18_ReadData
#  define Rte_Call_DataServices_DcmDspData_SvkBackup19_ConditionCheckRead Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup19_ConditionCheckRead
#  define Rte_Call_DataServices_DcmDspData_SvkBackup19_ReadData Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup19_ReadData
#  define Rte_Call_DataServices_DcmDspData_SvkBackup20_ConditionCheckRead Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup20_ConditionCheckRead
#  define Rte_Call_DataServices_DcmDspData_SvkBackup20_ReadData Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup20_ReadData
#  define Rte_Call_DataServices_DcmDspData_SvkBackup21_ConditionCheckRead Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup21_ConditionCheckRead
#  define Rte_Call_DataServices_DcmDspData_SvkBackup21_ReadData Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup21_ReadData
#  define Rte_Call_DataServices_DcmDspData_SvkBackup22_ConditionCheckRead Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup22_ConditionCheckRead
#  define Rte_Call_DataServices_DcmDspData_SvkBackup22_ReadData Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup22_ReadData
#  define Rte_Call_DataServices_DcmDspData_SvkBackup23_ConditionCheckRead Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup23_ConditionCheckRead
#  define Rte_Call_DataServices_DcmDspData_SvkBackup23_ReadData Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup23_ReadData
#  define Rte_Call_DataServices_DcmDspData_SvkBackup24_ConditionCheckRead Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup24_ConditionCheckRead
#  define Rte_Call_DataServices_DcmDspData_SvkBackup24_ReadData Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup24_ReadData
#  define Rte_Call_DataServices_DcmDspData_SvkBackup25_ConditionCheckRead Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup25_ConditionCheckRead
#  define Rte_Call_DataServices_DcmDspData_SvkBackup25_ReadData Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup25_ReadData
#  define Rte_Call_DataServices_DcmDspData_SvkBackup26_ConditionCheckRead Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup26_ConditionCheckRead
#  define Rte_Call_DataServices_DcmDspData_SvkBackup26_ReadData Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup26_ReadData
#  define Rte_Call_DataServices_DcmDspData_SvkBackup27_ConditionCheckRead Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup27_ConditionCheckRead
#  define Rte_Call_DataServices_DcmDspData_SvkBackup27_ReadData Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup27_ReadData
#  define Rte_Call_DataServices_DcmDspData_SvkBackup28_ConditionCheckRead Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup28_ConditionCheckRead
#  define Rte_Call_DataServices_DcmDspData_SvkBackup28_ReadData Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup28_ReadData
#  define Rte_Call_DataServices_DcmDspData_SvkBackup29_ConditionCheckRead Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup29_ConditionCheckRead
#  define Rte_Call_DataServices_DcmDspData_SvkBackup29_ReadData Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup29_ReadData
#  define Rte_Call_DataServices_DcmDspData_SvkBackup30_ConditionCheckRead Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup30_ConditionCheckRead
#  define Rte_Call_DataServices_DcmDspData_SvkBackup30_ReadData Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup30_ReadData
#  define Rte_Call_DataServices_DcmDspData_SvkBackup31_ConditionCheckRead Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup31_ConditionCheckRead
#  define Rte_Call_DataServices_DcmDspData_SvkBackup31_ReadData Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup31_ReadData
#  define Rte_Call_DataServices_DcmDspData_SvkBackup32_ConditionCheckRead Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup32_ConditionCheckRead
#  define Rte_Call_DataServices_DcmDspData_SvkBackup32_ReadData Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup32_ReadData
#  define Rte_Call_DataServices_DcmDspData_SvkBackup33_ConditionCheckRead Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup33_ConditionCheckRead
#  define Rte_Call_DataServices_DcmDspData_SvkBackup33_ReadData Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup33_ReadData
#  define Rte_Call_DataServices_DcmDspData_SvkBackup34_ConditionCheckRead Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup34_ConditionCheckRead
#  define Rte_Call_DataServices_DcmDspData_SvkBackup34_ReadData Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup34_ReadData
#  define Rte_Call_DataServices_DcmDspData_SvkBackup35_ConditionCheckRead Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup35_ConditionCheckRead
#  define Rte_Call_DataServices_DcmDspData_SvkBackup35_ReadData Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup35_ReadData
#  define Rte_Call_DataServices_DcmDspData_SvkBackup36_ConditionCheckRead Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup36_ConditionCheckRead
#  define Rte_Call_DataServices_DcmDspData_SvkBackup36_ReadData Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup36_ReadData
#  define Rte_Call_DataServices_DcmDspData_SvkBackup37_ConditionCheckRead Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup37_ConditionCheckRead
#  define Rte_Call_DataServices_DcmDspData_SvkBackup37_ReadData Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup37_ReadData
#  define Rte_Call_DataServices_DcmDspData_SvkBackup38_ConditionCheckRead Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup38_ConditionCheckRead
#  define Rte_Call_DataServices_DcmDspData_SvkBackup38_ReadData Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup38_ReadData
#  define Rte_Call_DataServices_DcmDspData_SvkBackup39_ConditionCheckRead Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup39_ConditionCheckRead
#  define Rte_Call_DataServices_DcmDspData_SvkBackup39_ReadData Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup39_ReadData
#  define Rte_Call_DataServices_DcmDspData_SvkBackup40_ConditionCheckRead Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup40_ConditionCheckRead
#  define Rte_Call_DataServices_DcmDspData_SvkBackup40_ReadData Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup40_ReadData
#  define Rte_Call_DataServices_DcmDspData_SvkBackup41_ConditionCheckRead Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup41_ConditionCheckRead
#  define Rte_Call_DataServices_DcmDspData_SvkBackup41_ReadData Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup41_ReadData
#  define Rte_Call_DataServices_DcmDspData_SvkBackup42_ConditionCheckRead Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup42_ConditionCheckRead
#  define Rte_Call_DataServices_DcmDspData_SvkBackup42_ReadData Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup42_ReadData
#  define Rte_Call_DataServices_DcmDspData_SvkBackup43_ConditionCheckRead Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup43_ConditionCheckRead
#  define Rte_Call_DataServices_DcmDspData_SvkBackup43_ReadData Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup43_ReadData
#  define Rte_Call_DataServices_DcmDspData_SvkBackup44_ConditionCheckRead Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup44_ConditionCheckRead
#  define Rte_Call_DataServices_DcmDspData_SvkBackup44_ReadData Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup44_ReadData
#  define Rte_Call_DataServices_DcmDspData_SvkBackup45_ConditionCheckRead Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup45_ConditionCheckRead
#  define Rte_Call_DataServices_DcmDspData_SvkBackup45_ReadData Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup45_ReadData
#  define Rte_Call_DataServices_DcmDspData_SvkBackup46_ConditionCheckRead Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup46_ConditionCheckRead
#  define Rte_Call_DataServices_DcmDspData_SvkBackup46_ReadData Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup46_ReadData
#  define Rte_Call_DataServices_DcmDspData_SvkBackup47_ConditionCheckRead Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup47_ConditionCheckRead
#  define Rte_Call_DataServices_DcmDspData_SvkBackup47_ReadData Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup47_ReadData
#  define Rte_Call_DataServices_DcmDspData_SvkBackup48_ConditionCheckRead Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup48_ConditionCheckRead
#  define Rte_Call_DataServices_DcmDspData_SvkBackup48_ReadData Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup48_ReadData
#  define Rte_Call_DataServices_DcmDspData_SvkBackup49_ConditionCheckRead Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup49_ConditionCheckRead
#  define Rte_Call_DataServices_DcmDspData_SvkBackup49_ReadData Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup49_ReadData
#  define Rte_Call_DataServices_DcmDspData_SvkBackup50_ConditionCheckRead Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup50_ConditionCheckRead
#  define Rte_Call_DataServices_DcmDspData_SvkBackup50_ReadData Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup50_ReadData
#  define Rte_Call_DataServices_DcmDspData_SvkBackup51_ConditionCheckRead Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup51_ConditionCheckRead
#  define Rte_Call_DataServices_DcmDspData_SvkBackup51_ReadData Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup51_ReadData
#  define Rte_Call_DataServices_DcmDspData_SvkBackup52_ConditionCheckRead Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup52_ConditionCheckRead
#  define Rte_Call_DataServices_DcmDspData_SvkBackup52_ReadData Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup52_ReadData
#  define Rte_Call_DataServices_DcmDspData_SvkBackup53_ConditionCheckRead Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup53_ConditionCheckRead
#  define Rte_Call_DataServices_DcmDspData_SvkBackup53_ReadData Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup53_ReadData
#  define Rte_Call_DataServices_DcmDspData_SvkBackup54_ConditionCheckRead Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup54_ConditionCheckRead
#  define Rte_Call_DataServices_DcmDspData_SvkBackup54_ReadData Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup54_ReadData
#  define Rte_Call_DataServices_DcmDspData_SvkBackup55_ConditionCheckRead Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup55_ConditionCheckRead
#  define Rte_Call_DataServices_DcmDspData_SvkBackup55_ReadData Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup55_ReadData
#  define Rte_Call_DataServices_DcmDspData_SvkBackup56_ConditionCheckRead Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup56_ConditionCheckRead
#  define Rte_Call_DataServices_DcmDspData_SvkBackup56_ReadData Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup56_ReadData
#  define Rte_Call_DataServices_DcmDspData_SvkBackup57_ConditionCheckRead Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup57_ConditionCheckRead
#  define Rte_Call_DataServices_DcmDspData_SvkBackup57_ReadData Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup57_ReadData
#  define Rte_Call_DataServices_DcmDspData_SvkBackup58_ConditionCheckRead Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup58_ConditionCheckRead
#  define Rte_Call_DataServices_DcmDspData_SvkBackup58_ReadData Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup58_ReadData
#  define Rte_Call_DataServices_DcmDspData_SvkBackup59_ConditionCheckRead Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup59_ConditionCheckRead
#  define Rte_Call_DataServices_DcmDspData_SvkBackup59_ReadData Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup59_ReadData
#  define Rte_Call_DataServices_DcmDspData_SvkBackup60_ConditionCheckRead Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup60_ConditionCheckRead
#  define Rte_Call_DataServices_DcmDspData_SvkBackup60_ReadData Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup60_ReadData
#  define Rte_Call_DataServices_DcmDspData_SvkBackup61_ConditionCheckRead Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup61_ConditionCheckRead
#  define Rte_Call_DataServices_DcmDspData_SvkBackup61_ReadData Rte_Call_Dcm_DataServices_DcmDspData_SvkBackup61_ReadData
#  define RTE_START_SEC_DLOG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DLOG_APPL_CODE) Dlog_ConditionCheckSvkSysSupplier(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DLOG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  define RTE_STOP_SEC_DLOG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DcmDspData_SvkSysSupplier_ConditionCheckRead Dlog_ConditionCheckSvkSysSupplier
#  define RTE_START_SEC_DLOG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_DLOG_APPL_CODE) Dlog_ReadDataByIdentifierSvkSysSupplier(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DLOG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_DLOG_APPL_CODE) Dlog_ReadDataByIdentifierSvkSysSupplier(Dcm_OpStatusType OpStatus, P2VAR(SvkHistoryDataArrayType, AUTOMATIC, RTE_DLOG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_DLOG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DcmDspData_SvkSysSupplier_ReadData Dlog_ReadDataByIdentifierSvkSysSupplier
#  define RTE_START_SEC_DLOG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DLOG_APPL_CODE) Dlog_ConditionCheckSvkPlant(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DLOG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  define RTE_STOP_SEC_DLOG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DcmDspData_SvkWerk_ConditionCheckRead Dlog_ConditionCheckSvkPlant
#  define RTE_START_SEC_DLOG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_DLOG_APPL_CODE) Dlog_ReadDataByIdentifierSvkPlant(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DLOG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_DLOG_APPL_CODE) Dlog_ReadDataByIdentifierSvkPlant(Dcm_OpStatusType OpStatus, P2VAR(SvkHistoryDataArrayType, AUTOMATIC, RTE_DLOG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_DLOG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DcmDspData_SvkWerk_ReadData Dlog_ReadDataByIdentifierSvkPlant
#  define Rte_Call_DataServices_DcmDspData_SwfkDeleteSupported_ReadData Rte_Call_Dcm_DataServices_DcmDspData_SwfkDeleteSupported_ReadData
#  define RTE_START_SEC_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_CODE) DataServices_DcmDspData_SystemSupplierIdentifier_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  define RTE_STOP_SEC_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DcmDspData_SystemSupplierIdentifier_ConditionCheckRead DataServices_DcmDspData_SystemSupplierIdentifier_ConditionCheckRead
#  define RTE_START_SEC_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_CODE) DataServices_DcmDspData_SystemSupplierIdentifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_CODE) DataServices_DcmDspData_SystemSupplierIdentifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data3ByteType, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DcmDspData_SystemSupplierIdentifier_ReadData DataServices_DcmDspData_SystemSupplierIdentifier_ReadData
#  define RTE_START_SEC_SYSTIME_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_SYSTIME_APPL_CODE) SysTime_GetSystemTime(P2VAR(uint8, AUTOMATIC, RTE_SYSTIME_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_SYSTIME_APPL_CODE) SysTime_GetSystemTime(P2VAR(Array4, AUTOMATIC, RTE_SYSTIME_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_SYSTIME_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DcmDspData_Systemzeit_ReadData SysTime_GetSystemTime
#  define RTE_START_SEC_DLOG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DLOG_APPL_CODE) Dlog_ConditionCheckVin(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DLOG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  define RTE_STOP_SEC_DLOG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DcmDspData_Vin_ConditionCheckRead Dlog_ConditionCheckVin
#  define RTE_START_SEC_DLOG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_DLOG_APPL_CODE) Dlog_ReadDataByIdentifierVin(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DLOG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_DLOG_APPL_CODE) Dlog_ReadDataByIdentifierVin(Dcm_OpStatusType OpStatus, P2VAR(Dlog_VinArrayType, AUTOMATIC, RTE_DLOG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_DLOG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DcmDspData_Vin_ReadData Dlog_ReadDataByIdentifierVin
#  define Rte_Call_DataServices_DcmDspData_ZgwZertifikat_ConditionCheckRead Rte_Call_Dcm_DataServices_DcmDspData_ZgwZertifikat_ConditionCheckRead
#  define Rte_Call_DataServices_DcmDspData_ZgwZertifikat_ReadData Rte_Call_Dcm_DataServices_DcmDspData_ZgwZertifikat_ReadData
#  define Rte_Call_RoutineServices_DcmDspRoutine_AblageSystemkontext_Start Rte_Call_Dcm_RoutineServices_DcmDspRoutine_AblageSystemkontext_Start
#  define Rte_Call_RoutineServices_DcmDspRoutine_ActivateZgwApplicationmode_Start Rte_Call_Dcm_RoutineServices_DcmDspRoutine_ActivateZgwApplicationmode_Start
#  define Rte_Call_RoutineServices_DcmDspRoutine_ActivateZgwCodingmode_Start Rte_Call_Dcm_RoutineServices_DcmDspRoutine_ActivateZgwCodingmode_Start
#  define Rte_Call_RoutineServices_DcmDspRoutine_ActivateZgwFlashmode_Start Rte_Call_Dcm_RoutineServices_DcmDspRoutine_ActivateZgwFlashmode_Start
#  define Rte_Call_RoutineServices_DcmDspRoutine_CheckCodingSignature_Start Rte_Call_Dcm_RoutineServices_DcmDspRoutine_CheckCodingSignature_Start
#  define Rte_Call_RoutineServices_DcmDspRoutine_CheckHttpConnection_Start Rte_Call_Dcm_RoutineServices_DcmDspRoutine_CheckHttpConnection_Start
#  define RTE_START_SEC_OMC_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_OMC_APPL_CODE) Omc_RoutineControlStartExtendedOperatingMode(uint8 ExtendedOperatingMode, OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_OMC_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  define RTE_STOP_SEC_OMC_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_RoutineServices_DcmDspRoutine_ControlExtendedEnergySavingState_Start Omc_RoutineControlStartExtendedOperatingMode
#  define RTE_START_SEC_STDDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_STDDIAG_APPL_CODE) StdDiag_RoutineControlStartDiagCommLoopback(P2CONST(uint8, AUTOMATIC, RTE_STDDIAG_APPL_DATA) dataIn, Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_STDDIAG_APPL_VAR) dataOut, P2VAR(uint16, AUTOMATIC, RTE_STDDIAG_APPL_VAR) currentDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_STDDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_STDDIAG_APPL_CODE) StdDiag_RoutineControlStartDiagCommLoopback(P2CONST(DiagCommLoopback_ArrayType, AUTOMATIC, RTE_STDDIAG_APPL_DATA) dataIn, Dcm_OpStatusType OpStatus, P2VAR(DiagCommLoopback_ArrayType, AUTOMATIC, RTE_STDDIAG_APPL_VAR) dataOut, P2VAR(uint16, AUTOMATIC, RTE_STDDIAG_APPL_VAR) currentDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_STDDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_STDDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_RoutineServices_DcmDspRoutine_DiagCommLoopback_Start StdDiag_RoutineControlStartDiagCommLoopback
#  define RTE_START_SEC_DARH_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DARH_APPL_CODE) Darh_StartRoutineTriggerDtcHandler(uint8 DTCType, Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DARH_APPL_VAR) DTCTypeOut, P2VAR(uint8, AUTOMATIC, RTE_DARH_APPL_VAR) DTCByte1, P2VAR(uint8, AUTOMATIC, RTE_DARH_APPL_VAR) DTCByte2, P2VAR(uint8, AUTOMATIC, RTE_DARH_APPL_VAR) DTCByte3, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DARH_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  define RTE_STOP_SEC_DARH_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_RoutineServices_DcmDspRoutine_DmClientTriggerDtcEntry_Start Darh_StartRoutineTriggerDtcHandler
#  define RTE_START_SEC_OMC_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_OMC_APPL_CODE) Omc_RoutineControlStartOperatingMode(uint8 OperatingMode, OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_OMC_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  define RTE_STOP_SEC_OMC_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_RoutineServices_DcmDspRoutine_Energiesparmode_Start Omc_RoutineControlStartOperatingMode
#  define Rte_Call_RoutineServices_DcmDspRoutine_EraseIdrData_Start Rte_Call_Dcm_RoutineServices_DcmDspRoutine_EraseIdrData_Start
#  define Rte_Call_RoutineServices_DcmDspRoutine_EthArlTable_Start Rte_Call_Dcm_RoutineServices_DcmDspRoutine_EthArlTable_Start
#  define Rte_Call_RoutineServices_DcmDspRoutine_EthArpTable_Start Rte_Call_Dcm_RoutineServices_DcmDspRoutine_EthArpTable_Start
#  define Rte_Call_RoutineServices_DcmDspRoutine_EthEnableTestMode_Start Rte_Call_Dcm_RoutineServices_DcmDspRoutine_EthEnableTestMode_Start
#  define Rte_Call_RoutineServices_DcmDspRoutine_EthExtendedArlTable_Start Rte_Call_Dcm_RoutineServices_DcmDspRoutine_EthExtendedArlTable_Start
#  define Rte_Call_RoutineServices_DcmDspRoutine_EthGetDhcpStatus_Start Rte_Call_Dcm_RoutineServices_DcmDspRoutine_EthGetDhcpStatus_Start
#  define Rte_Call_RoutineServices_DcmDspRoutine_EthGetEthernetSwitches_Start Rte_Call_Dcm_RoutineServices_DcmDspRoutine_EthGetEthernetSwitches_Start
#  define Rte_Call_RoutineServices_DcmDspRoutine_EthGetPortTxRxStats_Start Rte_Call_Dcm_RoutineServices_DcmDspRoutine_EthGetPortTxRxStats_Start
#  define Rte_Call_RoutineServices_DcmDspRoutine_EthGetSwitchVlanConfiguration_Start Rte_Call_Dcm_RoutineServices_DcmDspRoutine_EthGetSwitchVlanConfiguration_Start
#  define Rte_Call_RoutineServices_DcmDspRoutine_EthIpConfiguration_Start Rte_Call_Dcm_RoutineServices_DcmDspRoutine_EthIpConfiguration_Start
#  define Rte_Call_RoutineServices_DcmDspRoutine_EthPhyIdentifier_Start Rte_Call_Dcm_RoutineServices_DcmDspRoutine_EthPhyIdentifier_Start
#  define Rte_Call_RoutineServices_DcmDspRoutine_EthPhySwitchEngineReset_Start Rte_Call_Dcm_RoutineServices_DcmDspRoutine_EthPhySwitchEngineReset_Start
#  define Rte_Call_RoutineServices_DcmDspRoutine_EthReadPhyRegister_Start Rte_Call_Dcm_RoutineServices_DcmDspRoutine_EthReadPhyRegister_Start
#  define Rte_Call_RoutineServices_DcmDspRoutine_EthResetPortTxRxStats_Start Rte_Call_Dcm_RoutineServices_DcmDspRoutine_EthResetPortTxRxStats_Start
#  define Rte_Call_RoutineServices_DcmDspRoutine_EthWritePhyRegister_Start Rte_Call_Dcm_RoutineServices_DcmDspRoutine_EthWritePhyRegister_Start
#  define Rte_Call_RoutineServices_DcmDspRoutine_ExternalHsfz_Start Rte_Call_Dcm_RoutineServices_DcmDspRoutine_ExternalHsfz_Start
#  define Rte_Call_RoutineServices_DcmDspRoutine_FehlerspeicherEndeWerksablauf_RequestResults Rte_Call_Dcm_RoutineServices_DcmDspRoutine_FehlerspeicherEndeWerksablauf_RequestResults
#  define Rte_Call_RoutineServices_DcmDspRoutine_FehlerspeicherEndeWerksablauf_Start Rte_Call_Dcm_RoutineServices_DcmDspRoutine_FehlerspeicherEndeWerksablauf_Start
#  define Rte_Call_RoutineServices_DcmDspRoutine_FsMsmN101AbfrageFzgsec_Start Rte_Call_Dcm_RoutineServices_DcmDspRoutine_FsMsmN101AbfrageFzgsec_Start
#  define Rte_Call_RoutineServices_DcmDspRoutine_FsMsmN102_Start Rte_Call_Dcm_RoutineServices_DcmDspRoutine_FsMsmN102_Start
#  define Rte_Call_RoutineServices_DcmDspRoutine_FsMsmN111_Start Rte_Call_Dcm_RoutineServices_DcmDspRoutine_FsMsmN111_Start
#  define Rte_Call_RoutineServices_DcmDspRoutine_FsMsmN220X_Start Rte_Call_Dcm_RoutineServices_DcmDspRoutine_FsMsmN220X_Start
#  define Rte_Call_RoutineServices_DcmDspRoutine_FsMsmN300XTeleservice_RequestResults Rte_Call_Dcm_RoutineServices_DcmDspRoutine_FsMsmN300XTeleservice_RequestResults
#  define Rte_Call_RoutineServices_DcmDspRoutine_FsMsmN300XTeleservice_Start Rte_Call_Dcm_RoutineServices_DcmDspRoutine_FsMsmN300XTeleservice_Start
#  define Rte_Call_RoutineServices_DcmDspRoutine_FsN251_Start Rte_Call_Dcm_RoutineServices_DcmDspRoutine_FsN251_Start
#  define Rte_Call_RoutineServices_DcmDspRoutine_FsN252_Start Rte_Call_Dcm_RoutineServices_DcmDspRoutine_FsN252_Start
#  define Rte_Call_RoutineServices_DcmDspRoutine_FsN30X_RequestResults Rte_Call_Dcm_RoutineServices_DcmDspRoutine_FsN30X_RequestResults
#  define Rte_Call_RoutineServices_DcmDspRoutine_FsN30X_Start Rte_Call_Dcm_RoutineServices_DcmDspRoutine_FsN30X_Start
#  define Rte_Call_RoutineServices_DcmDspRoutine_FsN31034_Start Rte_Call_Dcm_RoutineServices_DcmDspRoutine_FsN31034_Start
#  define Rte_Call_RoutineServices_DcmDspRoutine_FsN5005_RequestResults Rte_Call_Dcm_RoutineServices_DcmDspRoutine_FsN5005_RequestResults
#  define Rte_Call_RoutineServices_DcmDspRoutine_FsN5005_Start Rte_Call_Dcm_RoutineServices_DcmDspRoutine_FsN5005_Start
#  define Rte_Call_RoutineServices_DcmDspRoutine_FsN5012_RequestResults Rte_Call_Dcm_RoutineServices_DcmDspRoutine_FsN5012_RequestResults
#  define Rte_Call_RoutineServices_DcmDspRoutine_FsN5012_Start Rte_Call_Dcm_RoutineServices_DcmDspRoutine_FsN5012_Start
#  define Rte_Call_RoutineServices_DcmDspRoutine_FsN5034_RequestResults Rte_Call_Dcm_RoutineServices_DcmDspRoutine_FsN5034_RequestResults
#  define Rte_Call_RoutineServices_DcmDspRoutine_FsN5034_Start Rte_Call_Dcm_RoutineServices_DcmDspRoutine_FsN5034_Start
#  define Rte_Call_RoutineServices_DcmDspRoutine_FsN70X_RequestResults Rte_Call_Dcm_RoutineServices_DcmDspRoutine_FsN70X_RequestResults
#  define Rte_Call_RoutineServices_DcmDspRoutine_FsN70X_Start Rte_Call_Dcm_RoutineServices_DcmDspRoutine_FsN70X_Start
#  define Rte_Call_RoutineServices_DcmDspRoutine_FsN7112_RequestResults Rte_Call_Dcm_RoutineServices_DcmDspRoutine_FsN7112_RequestResults
#  define Rte_Call_RoutineServices_DcmDspRoutine_FsN7112_Start Rte_Call_Dcm_RoutineServices_DcmDspRoutine_FsN7112_Start
#  define Rte_Call_RoutineServices_DcmDspRoutine_GetActualConfig_Start Rte_Call_Dcm_RoutineServices_DcmDspRoutine_GetActualConfig_Start
#  define Rte_Call_RoutineServices_DcmDspRoutine_IndividualDatenRettung_Start Rte_Call_Dcm_RoutineServices_DcmDspRoutine_IndividualDatenRettung_Start
#  define Rte_Call_RoutineServices_DcmDspRoutine_InitLinBus_Start Rte_Call_Dcm_RoutineServices_DcmDspRoutine_InitLinBus_Start
#  define Rte_Call_RoutineServices_DcmDspRoutine_InitLinSlave_Start Rte_Call_Dcm_RoutineServices_DcmDspRoutine_InitLinSlave_Start
#  define RTE_START_SEC_STDDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_STDDIAG_APPL_CODE) StdDiag_RoutineControlStartClearDTCSecondaryErrorMemory(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_STDDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  define RTE_STOP_SEC_STDDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_RoutineServices_DcmDspRoutine_IsLoeschen_Start StdDiag_RoutineControlStartClearDTCSecondaryErrorMemory
#  define Rte_Call_RoutineServices_DcmDspRoutine_RamDatenSchreiben_RequestResults Rte_Call_Dcm_RoutineServices_DcmDspRoutine_RamDatenSchreiben_RequestResults
#  define Rte_Call_RoutineServices_DcmDspRoutine_RamDatenSchreiben_Start Rte_Call_Dcm_RoutineServices_DcmDspRoutine_RamDatenSchreiben_Start
#  define Rte_Call_RoutineServices_DcmDspRoutine_RcCpp_Start Rte_Call_Dcm_RoutineServices_DcmDspRoutine_RcCpp_Start
#  define RTE_START_SEC_STDDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_STDDIAG_APPL_CODE) StdDiag_RoutineControlStartCheckProgrammingPreconditions(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_STDDIAG_APPL_VAR) dataOut, P2VAR(uint16, AUTOMATIC, RTE_STDDIAG_APPL_VAR) currentDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_STDDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_STDDIAG_APPL_CODE) StdDiag_RoutineControlStartCheckProgrammingPreconditions(Dcm_OpStatusType OpStatus, P2VAR(CheckProgrammingPreconditions_ArrayType, AUTOMATIC, RTE_STDDIAG_APPL_VAR) dataOut, P2VAR(uint16, AUTOMATIC, RTE_STDDIAG_APPL_VAR) currentDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_STDDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_STDDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_RoutineServices_DcmDspRoutine_RcCppc_Start StdDiag_RoutineControlStartCheckProgrammingPreconditions
#  define Rte_Call_RoutineServices_DcmDspRoutine_RcHdddRi4002_Start Rte_Call_Dcm_RoutineServices_DcmDspRoutine_RcHdddRi4002_Start
#  define Rte_Call_RoutineServices_DcmDspRoutine_RcPad_Start Rte_Call_Dcm_RoutineServices_DcmDspRoutine_RcPad_Start
#  define RTE_START_SEC_DLOG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_DLOG_APPL_CODE) Dlog_RoutineControlStartReadDevelopmentInfoField(P2CONST(uint8, AUTOMATIC, RTE_DLOG_APPL_DATA) DataIn, Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DLOG_APPL_VAR) DataOut, P2VAR(uint16, AUTOMATIC, RTE_DLOG_APPL_VAR) CurrentDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DLOG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_DLOG_APPL_CODE) Dlog_RoutineControlStartReadDevelopmentInfoField(P2CONST(RSInputArrayType, AUTOMATIC, RTE_DLOG_APPL_DATA) DataIn, Dcm_OpStatusType OpStatus, P2VAR(DevInfoArrayType, AUTOMATIC, RTE_DLOG_APPL_VAR) DataOut, P2VAR(uint16, AUTOMATIC, RTE_DLOG_APPL_VAR) CurrentDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DLOG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_DLOG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_RoutineServices_DcmDspRoutine_RcRswedi_Start Dlog_RoutineControlStartReadDevelopmentInfoField
#  define Rte_Call_RoutineServices_DcmDspRoutine_RequestPreferredProtocol_Start Rte_Call_Dcm_RoutineServices_DcmDspRoutine_RequestPreferredProtocol_Start
#  define Rte_Call_RoutineServices_DcmDspRoutine_ResetAktivierungsleitung_Start Rte_Call_Dcm_RoutineServices_DcmDspRoutine_ResetAktivierungsleitung_Start
#  define Rte_Call_RoutineServices_DcmDspRoutine_SetDefaultBus_Start Rte_Call_Dcm_RoutineServices_DcmDspRoutine_SetDefaultBus_Start
#  define Rte_Call_RoutineServices_DcmDspRoutine_StartSystime_Start Rte_Call_Dcm_RoutineServices_DcmDspRoutine_StartSystime_Start
#  define Rte_Call_RoutineServices_DcmDspRoutine_SteuernDmFssMaster_Start Rte_Call_Dcm_RoutineServices_DcmDspRoutine_SteuernDmFssMaster_Start
#  define Rte_Call_RoutineServices_DcmDspRoutine_SteuernDmFssMaster_Stop Rte_Call_Dcm_RoutineServices_DcmDspRoutine_SteuernDmFssMaster_Stop
#  define Rte_Call_RoutineServices_DcmDspRoutine_Swt_Start Rte_Call_Dcm_RoutineServices_DcmDspRoutine_Swt_Start
#  define Rte_Call_SecurityAccess_DcmDspSecurityRow_Coding_CompareKey Rte_Call_Dcm_SecurityAccess_DcmDspSecurityRow_Coding_CompareKey
#  define Rte_Call_SecurityAccess_DcmDspSecurityRow_Coding_GetSeed Rte_Call_Dcm_SecurityAccess_DcmDspSecurityRow_Coding_GetSeed
#  define Rte_Call_SecurityAccess_DcmDspSecurityRow_Programming_HDD_CompareKey Rte_Call_Dcm_SecurityAccess_DcmDspSecurityRow_Programming_HDD_CompareKey
#  define Rte_Call_SecurityAccess_DcmDspSecurityRow_Programming_HDD_GetSeed Rte_Call_Dcm_SecurityAccess_DcmDspSecurityRow_Programming_HDD_GetSeed
#  define Rte_Call_SecurityAccess_DcmDspSecurityRow_Swt_CompareKey Rte_Call_Dcm_SecurityAccess_DcmDspSecurityRow_Swt_CompareKey
#  define Rte_Call_SecurityAccess_DcmDspSecurityRow_Swt_GetSeed Rte_Call_Dcm_SecurityAccess_DcmDspSecurityRow_Swt_GetSeed
#  define Rte_Call_SecurityAccess_DcmDspSecurityRow_level2_CompareKey Rte_Call_Dcm_SecurityAccess_DcmDspSecurityRow_level2_CompareKey
#  define Rte_Call_SecurityAccess_DcmDspSecurityRow_level2_GetSeed Rte_Call_Dcm_SecurityAccess_DcmDspSecurityRow_level2_GetSeed
#  define RTE_START_SEC_INTEGRATIONSAMPLE_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_INTEGRATIONSAMPLE_APPL_CODE) IntegrationSample_ManufacturerConfirmation(uint8 SID, uint8 ReqType, uint16 SourceAddress, IntegrationSample_Dcm_ConfirmationStatusType ConfirmationStatus); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  define RTE_STOP_SEC_INTEGRATIONSAMPLE_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_ServiceRequestManufacturerNotification_IntegrationSample_Confirmation IntegrationSample_ManufacturerConfirmation
#  define RTE_START_SEC_INTEGRATIONSAMPLE_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_INTEGRATIONSAMPLE_APPL_CODE) IntegrationSample_ManufacturerIndication(uint8 SID, P2CONST(uint8, AUTOMATIC, RTE_INTEGRATIONSAMPLE_APPL_DATA) RequestData, uint16 DataSize, uint8 ReqType, uint16 SourceAddress, P2VAR(IntegrationSample_Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_INTEGRATIONSAMPLE_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_INTEGRATIONSAMPLE_APPL_CODE) IntegrationSample_ManufacturerIndication(uint8 SID, P2CONST(IntegrationSample_RequestDataArray, AUTOMATIC, RTE_INTEGRATIONSAMPLE_APPL_DATA) RequestData, uint16 DataSize, uint8 ReqType, uint16 SourceAddress, P2VAR(IntegrationSample_Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_INTEGRATIONSAMPLE_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_INTEGRATIONSAMPLE_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_ServiceRequestManufacturerNotification_IntegrationSample_Indication IntegrationSample_ManufacturerIndication
#  define RTE_START_SEC_STDDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_STDDIAG_APPL_CODE) StdDiag_ManufacturerConfirmation(uint8 SID, uint8 ReqType, uint16 SourceAddress, Dcm_ConfirmationStatusType ConfirmationStatus); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  define RTE_STOP_SEC_STDDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_ServiceRequestManufacturerNotification_StdDiag_Confirmation StdDiag_ManufacturerConfirmation
#  define RTE_START_SEC_STDDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_STDDIAG_APPL_CODE) StdDiag_ManufacturerIndication(uint8 SID, P2CONST(uint8, AUTOMATIC, RTE_STDDIAG_APPL_DATA) RequestData, uint16 DataSize, uint8 ReqType, uint16 SourceAddress, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_STDDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_STDDIAG_APPL_CODE) StdDiag_ManufacturerIndication(uint8 SID, P2CONST(RequestDataArray, AUTOMATIC, RTE_STDDIAG_APPL_DATA) RequestData, uint16 DataSize, uint8 ReqType, uint16 SourceAddress, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_STDDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_STDDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_ServiceRequestManufacturerNotification_StdDiag_Indication StdDiag_ManufacturerIndication


# endif /* !defined(RTE_CORE) */


# define Dcm_START_SEC_CODE
# include "Dcm_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_Dcm_MainFunction Dcm_MainFunction
#  define RTE_RUNNABLE_GetActiveProtocol Dcm_GetActiveProtocol
#  define RTE_RUNNABLE_GetRequestKind Dcm_GetRequestKind
#  define RTE_RUNNABLE_GetSecurityLevel Dcm_GetSecurityLevel
#  define RTE_RUNNABLE_GetSesCtrlType Dcm_GetSesCtrlType
#  define RTE_RUNNABLE_ResetToDefaultSession Dcm_ResetToDefaultSession
#  define RTE_RUNNABLE_SetActiveDiagnostic Dcm_SetActiveDiagnostic
#  define RTE_RUNNABLE_TriggerOnEvent Dcm_TriggerOnEvent
# endif

FUNC(void, Dcm_CODE) Dcm_MainFunction(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, Dcm_CODE) Dcm_GetActiveProtocol(P2VAR(Dcm_ProtocolType, AUTOMATIC, RTE_DCM_APPL_VAR) ActiveProtocol); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, Dcm_CODE) Dcm_GetRequestKind(uint16 TesterSourceAddress, P2VAR(Dcm_RequestKindType, AUTOMATIC, RTE_DCM_APPL_VAR) RequestKind); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, Dcm_CODE) Dcm_GetSecurityLevel(P2VAR(Dcm_SecLevelType, AUTOMATIC, RTE_DCM_APPL_VAR) SecLevel); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, Dcm_CODE) Dcm_GetSesCtrlType(P2VAR(Dcm_SesCtrlType, AUTOMATIC, RTE_DCM_APPL_VAR) SesCtrlType); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, Dcm_CODE) Dcm_ResetToDefaultSession(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, Dcm_CODE) Dcm_SetActiveDiagnostic(boolean active); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, Dcm_CODE) Dcm_TriggerOnEvent(uint8 parg0); /* PRQA S 0850, 1330, 3451 */ /* MD_MSR_19.8, MD_Rte_1330, MD_Rte_3451 */

# define Dcm_STOP_SEC_CODE
# include "Dcm_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_DCMServices_E_NOT_OK (1U)

#  define RTE_E_DCMServices_E_OK (0U)

#  define RTE_E_DCM_Roe_E_NOT_OK (1U)

#  define RTE_E_DataServices_DIDRange_DcmDspDidRange_Coding_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DIDRange_DcmDspDidRange_Coding_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DcmDspDid_SensorLesen_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DcmDspDid_SensorLesen_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DcmDspDid_SensorLesen_2_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DcmDspDid_SensorLesen_2_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DcmDspDid_SensorLesen_3_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DcmDspDid_SensorLesen_3_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_DmDtcAktiveMeldung_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_DmIsDtcActiveResponse_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_EcuSerialNumber_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_EnergySavingState_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_EthGetNumberOfPorts_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_EthGetNumberOfPorts_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_EthPhyLinkState_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_EthPhyLinkState_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_EthSignalQuality_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_EthSignalQuality_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_ExtendedEnergySavingState_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_FlashTimingParameter_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_HddDownloadStatus_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_HddDownloadStatus_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_HddDownloadTimeToCompletion_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_HddDownloadTimeToCompletion_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_Herstelldatum_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_IndivDataTable_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_ListManipulationApplicationData_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_ListManipulationApplicationData_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_ListManipulationGeneral_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_ListManipulationGeneral_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_ListManipulationSecureBoot_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_ListManipulationSecureBoot_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_ListManipulationSecurityArtifact_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_ListManipulationSecurityArtifact_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_ListManipulationSw_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_ListManipulationSw_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_MileKmEeprom_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_MileKmEeprom_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_PiaProfile0_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_PiaProfile0_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_PiaProfile1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_PiaProfile1_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_PiaProfile2_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_PiaProfile2_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_PiaProfileA_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_PiaProfileA_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_ProgrammingCounter_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_ProgrammingCounterMaxValue_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_ReadActiveSessionState_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_Readhwmodificationindex_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_Sekundaererfehlerspeicher_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_Sekundaererfehlerspeicher_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_SensorenAnzahlLesen_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_SensorenAnzahlLesen_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_SgbdIdx_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_StatusDmFssMaster_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_StatusDmFssMaster_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_StatusSystime_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_StatusSystime_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_SvkAktuell_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_SvkAktuell_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup01_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup01_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup02_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup02_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup03_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup03_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup04_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup04_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup05_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup05_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup06_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup06_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup07_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup07_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup08_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup08_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup09_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup09_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup10_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup10_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup11_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup11_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup12_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup12_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup13_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup13_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup14_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup14_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup15_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup15_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup16_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup16_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup17_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup17_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup18_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup18_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup19_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup19_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup20_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup20_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup21_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup21_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup22_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup22_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup23_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup23_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup24_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup24_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup25_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup25_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup26_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup26_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup27_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup27_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup28_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup28_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup29_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup29_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup30_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup30_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup31_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup31_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup32_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup32_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup33_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup33_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup34_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup34_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup35_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup35_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup36_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup36_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup37_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup37_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup38_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup38_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup39_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup39_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup40_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup40_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup41_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup41_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup42_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup42_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup43_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup43_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup44_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup44_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup45_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup45_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup46_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup46_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup47_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup47_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup48_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup48_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup49_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup49_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup50_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup50_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup51_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup51_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup52_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup52_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup53_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup53_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup54_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup54_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup55_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup55_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup56_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup56_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup57_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup57_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup58_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup58_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup59_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup59_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup60_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup60_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup61_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_SvkBackup61_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_SvkSysSupplier_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_SvkSysSupplier_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_SvkWerk_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_SvkWerk_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_SwfkDeleteSupported_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_SystemSupplierIdentifier_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_SystemSupplierIdentifier_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_Systemzeit_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_Vin_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_Vin_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_ZgwZertifikat_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_ZgwZertifikat_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_DcmDspRoutine_AblageSystemkontext_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_DcmDspRoutine_AblageSystemkontext_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_DcmDspRoutine_AblageSystemkontext_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_DcmDspRoutine_ActivateZgwApplicationmode_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_DcmDspRoutine_ActivateZgwApplicationmode_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_DcmDspRoutine_ActivateZgwApplicationmode_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_DcmDspRoutine_ActivateZgwCodingmode_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_DcmDspRoutine_ActivateZgwCodingmode_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_DcmDspRoutine_ActivateZgwCodingmode_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_DcmDspRoutine_ActivateZgwFlashmode_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_DcmDspRoutine_ActivateZgwFlashmode_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_DcmDspRoutine_ActivateZgwFlashmode_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_DcmDspRoutine_CheckCodingSignature_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_DcmDspRoutine_CheckCodingSignature_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_DcmDspRoutine_CheckCodingSignature_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_DcmDspRoutine_CheckHttpConnection_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_DcmDspRoutine_CheckHttpConnection_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_DcmDspRoutine_CheckHttpConnection_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_DcmDspRoutine_ControlExtendedEnergySavingState_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_DcmDspRoutine_ControlExtendedEnergySavingState_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_DcmDspRoutine_ControlExtendedEnergySavingState_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_DcmDspRoutine_DiagCommLoopback_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_DcmDspRoutine_DiagCommLoopback_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_DcmDspRoutine_DiagCommLoopback_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_DcmDspRoutine_DmClientTriggerDtcEntry_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_DcmDspRoutine_DmClientTriggerDtcEntry_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_DcmDspRoutine_DmClientTriggerDtcEntry_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_DcmDspRoutine_Energiesparmode_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_DcmDspRoutine_Energiesparmode_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_DcmDspRoutine_Energiesparmode_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_DcmDspRoutine_EraseIdrData_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_DcmDspRoutine_EraseIdrData_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_DcmDspRoutine_EraseIdrData_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_DcmDspRoutine_EthArlTable_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_DcmDspRoutine_EthArlTable_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_DcmDspRoutine_EthArlTable_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_DcmDspRoutine_EthArpTable_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_DcmDspRoutine_EthArpTable_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_DcmDspRoutine_EthArpTable_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_DcmDspRoutine_EthEnableTestMode_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_DcmDspRoutine_EthEnableTestMode_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_DcmDspRoutine_EthEnableTestMode_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_DcmDspRoutine_EthExtendedArlTable_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_DcmDspRoutine_EthExtendedArlTable_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_DcmDspRoutine_EthExtendedArlTable_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_DcmDspRoutine_EthGetDhcpStatus_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_DcmDspRoutine_EthGetDhcpStatus_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_DcmDspRoutine_EthGetDhcpStatus_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_DcmDspRoutine_EthGetEthernetSwitches_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_DcmDspRoutine_EthGetEthernetSwitches_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_DcmDspRoutine_EthGetEthernetSwitches_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_DcmDspRoutine_EthGetPortTxRxStats_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_DcmDspRoutine_EthGetPortTxRxStats_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_DcmDspRoutine_EthGetPortTxRxStats_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_DcmDspRoutine_EthGetSwitchVlanConfiguration_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_DcmDspRoutine_EthGetSwitchVlanConfiguration_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_DcmDspRoutine_EthGetSwitchVlanConfiguration_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_DcmDspRoutine_EthIpConfiguration_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_DcmDspRoutine_EthIpConfiguration_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_DcmDspRoutine_EthIpConfiguration_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_DcmDspRoutine_EthPhyIdentifier_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_DcmDspRoutine_EthPhyIdentifier_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_DcmDspRoutine_EthPhyIdentifier_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_DcmDspRoutine_EthPhySwitchEngineReset_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_DcmDspRoutine_EthPhySwitchEngineReset_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_DcmDspRoutine_EthPhySwitchEngineReset_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_DcmDspRoutine_EthReadPhyRegister_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_DcmDspRoutine_EthReadPhyRegister_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_DcmDspRoutine_EthReadPhyRegister_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_DcmDspRoutine_EthResetPortTxRxStats_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_DcmDspRoutine_EthResetPortTxRxStats_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_DcmDspRoutine_EthResetPortTxRxStats_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_DcmDspRoutine_EthWritePhyRegister_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_DcmDspRoutine_EthWritePhyRegister_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_DcmDspRoutine_EthWritePhyRegister_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_DcmDspRoutine_ExternalHsfz_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_DcmDspRoutine_ExternalHsfz_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_DcmDspRoutine_ExternalHsfz_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_DcmDspRoutine_FehlerspeicherEndeWerksablauf_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_DcmDspRoutine_FehlerspeicherEndeWerksablauf_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_DcmDspRoutine_FehlerspeicherEndeWerksablauf_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_DcmDspRoutine_FsMsmN101AbfrageFzgsec_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_DcmDspRoutine_FsMsmN101AbfrageFzgsec_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_DcmDspRoutine_FsMsmN101AbfrageFzgsec_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_DcmDspRoutine_FsMsmN102_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_DcmDspRoutine_FsMsmN102_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_DcmDspRoutine_FsMsmN102_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_DcmDspRoutine_FsMsmN111_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_DcmDspRoutine_FsMsmN111_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_DcmDspRoutine_FsMsmN111_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_DcmDspRoutine_FsMsmN220X_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_DcmDspRoutine_FsMsmN220X_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_DcmDspRoutine_FsMsmN220X_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_DcmDspRoutine_FsMsmN300XTeleservice_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_DcmDspRoutine_FsMsmN300XTeleservice_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_DcmDspRoutine_FsMsmN300XTeleservice_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_DcmDspRoutine_FsN251_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_DcmDspRoutine_FsN251_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_DcmDspRoutine_FsN251_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_DcmDspRoutine_FsN252_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_DcmDspRoutine_FsN252_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_DcmDspRoutine_FsN252_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_DcmDspRoutine_FsN30X_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_DcmDspRoutine_FsN30X_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_DcmDspRoutine_FsN30X_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_DcmDspRoutine_FsN31034_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_DcmDspRoutine_FsN31034_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_DcmDspRoutine_FsN31034_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_DcmDspRoutine_FsN5005_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_DcmDspRoutine_FsN5005_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_DcmDspRoutine_FsN5005_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_DcmDspRoutine_FsN5012_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_DcmDspRoutine_FsN5012_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_DcmDspRoutine_FsN5012_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_DcmDspRoutine_FsN5034_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_DcmDspRoutine_FsN5034_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_DcmDspRoutine_FsN5034_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_DcmDspRoutine_FsN70X_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_DcmDspRoutine_FsN70X_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_DcmDspRoutine_FsN70X_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_DcmDspRoutine_FsN7112_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_DcmDspRoutine_FsN7112_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_DcmDspRoutine_FsN7112_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_DcmDspRoutine_GetActualConfig_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_DcmDspRoutine_GetActualConfig_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_DcmDspRoutine_GetActualConfig_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_DcmDspRoutine_IndividualDatenRettung_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_DcmDspRoutine_IndividualDatenRettung_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_DcmDspRoutine_IndividualDatenRettung_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_DcmDspRoutine_InitLinBus_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_DcmDspRoutine_InitLinBus_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_DcmDspRoutine_InitLinBus_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_DcmDspRoutine_InitLinSlave_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_DcmDspRoutine_InitLinSlave_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_DcmDspRoutine_InitLinSlave_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_DcmDspRoutine_IsLoeschen_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_DcmDspRoutine_IsLoeschen_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_DcmDspRoutine_IsLoeschen_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_DcmDspRoutine_RamDatenSchreiben_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_DcmDspRoutine_RamDatenSchreiben_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_DcmDspRoutine_RamDatenSchreiben_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_DcmDspRoutine_RcCpp_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_DcmDspRoutine_RcCpp_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_DcmDspRoutine_RcCpp_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_DcmDspRoutine_RcCppc_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_DcmDspRoutine_RcCppc_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_DcmDspRoutine_RcCppc_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_DcmDspRoutine_RcHdddRi4002_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_DcmDspRoutine_RcHdddRi4002_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_DcmDspRoutine_RcHdddRi4002_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_DcmDspRoutine_RcPad_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_DcmDspRoutine_RcPad_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_DcmDspRoutine_RcPad_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_DcmDspRoutine_RcRswedi_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_DcmDspRoutine_RcRswedi_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_DcmDspRoutine_RcRswedi_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_DcmDspRoutine_RequestPreferredProtocol_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_DcmDspRoutine_RequestPreferredProtocol_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_DcmDspRoutine_RequestPreferredProtocol_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_DcmDspRoutine_ResetAktivierungsleitung_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_DcmDspRoutine_ResetAktivierungsleitung_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_DcmDspRoutine_ResetAktivierungsleitung_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_DcmDspRoutine_SetDefaultBus_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_DcmDspRoutine_SetDefaultBus_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_DcmDspRoutine_SetDefaultBus_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_DcmDspRoutine_StartSystime_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_DcmDspRoutine_StartSystime_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_DcmDspRoutine_StartSystime_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_DcmDspRoutine_SteuernDmFssMaster_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_DcmDspRoutine_SteuernDmFssMaster_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_DcmDspRoutine_SteuernDmFssMaster_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_DcmDspRoutine_Swt_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_DcmDspRoutine_Swt_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_DcmDspRoutine_Swt_E_NOT_OK (1U)

#  define RTE_E_SecurityAccess_DcmDspSecurityRow_Coding_DCM_E_COMPARE_KEY_FAILED (11U)

#  define RTE_E_SecurityAccess_DcmDspSecurityRow_Coding_DCM_E_PENDING (10U)

#  define RTE_E_SecurityAccess_DcmDspSecurityRow_Coding_E_NOT_OK (1U)

#  define RTE_E_SecurityAccess_DcmDspSecurityRow_Programming_HDD_DCM_E_COMPARE_KEY_FAILED (11U)

#  define RTE_E_SecurityAccess_DcmDspSecurityRow_Programming_HDD_DCM_E_PENDING (10U)

#  define RTE_E_SecurityAccess_DcmDspSecurityRow_Programming_HDD_E_NOT_OK (1U)

#  define RTE_E_SecurityAccess_DcmDspSecurityRow_Swt_DCM_E_COMPARE_KEY_FAILED (11U)

#  define RTE_E_SecurityAccess_DcmDspSecurityRow_Swt_DCM_E_PENDING (10U)

#  define RTE_E_SecurityAccess_DcmDspSecurityRow_Swt_E_NOT_OK (1U)

#  define RTE_E_SecurityAccess_DcmDspSecurityRow_level2_DCM_E_COMPARE_KEY_FAILED (11U)

#  define RTE_E_SecurityAccess_DcmDspSecurityRow_level2_DCM_E_PENDING (10U)

#  define RTE_E_SecurityAccess_DcmDspSecurityRow_level2_E_NOT_OK (1U)

#  define RTE_E_ServiceRequestNotification_E_NOT_OK (1U)

#  define RTE_E_ServiceRequestNotification_E_REQUEST_NOT_ACCEPTED (8U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_DCM_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_1330:  MISRA rule: 16.4
     Reason:     The RTE Generator uses default names for parameter identifiers of port defined arguments of service modules.
                 Therefore the parameter identifiers in the function declaration differs from those of the implementation of the BSW module.
     Risk:       No functional risk.
     Prevention: Not required.

   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
