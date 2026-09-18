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
 *          File:  Rte_Type.h
 *        Config:  D:/usr/usage/Delivery/CBD17x/CBD1700369/D04/external/Applications/OEM_Extensions/EPS/EPS.dpa
 *     SW-C Type:  Bs
 *  Generated at:  Tue Dec 19 13:12:25 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.16.0
 *                 RTE Core Version 1.16.0
 *       License:  Unlimited license CBD1700369 for Nexteer Automotive Corporation
 *
 *   Description:  Header file containing user defined AUTOSAR types and RTE structures (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_TYPE_H
# define _RTE_TYPE_H

# include "Rte.h"


/**********************************************************************************************************************
 * Data type definitions
 *********************************************************************************************************************/

# define Rte_TypeDef_NvM_SrcPtrType
typedef const void * NvM_SrcPtrType;

# define Rte_TypeDef_Dlog_EcuUidArrayType
typedef uint8 Dlog_EcuUidArrayType[16];

# define Rte_TypeDef_RCDataArrayType
typedef uint8 RCDataArrayType[260];

# define Rte_TypeDef_SecOC_FreshnessArrayType
typedef uint8 SecOC_FreshnessArrayType[8];

# define Rte_TypeDef_Bs_LifeCycleRequestType
typedef uint8 Bs_LifeCycleRequestType;

# define Rte_TypeDef_Dcm_NegativeResponseCodeType
typedef uint8 Dcm_NegativeResponseCodeType;

# define Rte_TypeDef_Dcm_OpStatusType
typedef uint8 Dcm_OpStatusType;

# define Rte_TypeDef_Dem_EventStatusType
typedef uint8 Dem_EventStatusType;

# define Rte_TypeDef_NvM_RequestResultType
typedef uint8 NvM_RequestResultType;


# ifndef RTE_SUPPRESS_UNUSED_DATATYPES
/**********************************************************************************************************************
 * Unused Data type definitions
 *********************************************************************************************************************/

#  define Rte_TypeDef_ALIV_CON_VEH
typedef unsigned char ALIV_CON_VEH;

#  define Rte_TypeDef_CON_VEH_dummy_56_63
typedef unsigned char CON_VEH_dummy_56_63;

#  define Rte_TypeDef_CRC_CON_VEH
typedef unsigned char CRC_CON_VEH;

#  define Rte_TypeDef_DstPtrType
typedef void * DstPtrType;

#  define Rte_TypeDef_MILE_KM
typedef unsigned long MILE_KM;

#  define Rte_TypeDef_NvM_DstPtrType
typedef void * NvM_DstPtrType;

#  define Rte_TypeDef_SrcPtrType
typedef const void * SrcPtrType;

#  define Rte_TypeDef_WdgM_CheckpointIdType
typedef uint8 WdgM_CheckpointIdType;

#  define Rte_TypeDef_dtRef_VOID
typedef void * dtRef_VOID;

#  define Rte_TypeDef_dtRef_const_VOID
typedef const void * dtRef_const_VOID;

#  define Rte_TypeDef_BMW_Application_Reset_IRV
typedef unsigned char BMW_Application_Reset_IRV;

#  define Rte_TypeDef_Bac4_ApplicationStateType
typedef unsigned char Bac4_ApplicationStateType;

#  define Rte_TypeDef_CTR_BS_PRTNT
typedef unsigned char CTR_BS_PRTNT;

#  define Rte_TypeDef_CTR_FKTN_PRTNT
typedef unsigned long CTR_FKTN_PRTNT;

#  define Rte_TypeDef_QU_ST_CON_VEH
typedef unsigned char QU_ST_CON_VEH;

#  define Rte_TypeDef_ST_CON_VEH
typedef unsigned char ST_CON_VEH;

#  define Rte_TypeDef_ActiveDiagSession_ArrayType
typedef uint8 ActiveDiagSession_ArrayType[1];

#  define Rte_TypeDef_ActiveSessionState_ArrayType
typedef uint8 ActiveSessionState_ArrayType[4];

#  define Rte_TypeDef_Array4
typedef uint8 Array4[4];

#  define Rte_TypeDef_CheckProgrammingPreconditions_ArrayType
typedef uint8 CheckProgrammingPreconditions_ArrayType[256];

#  define Rte_TypeDef_Coding_CafIdArrayType
typedef uint8 Coding_CafIdArrayType[8];

#  define Rte_TypeDef_Coding_SgbmIdType
typedef uint8 Coding_SgbmIdType[8];

#  define Rte_TypeDef_Csm_HashDataType_SecureToken
typedef uint8 Csm_HashDataType_SecureToken[260];

#  define Rte_TypeDef_Csm_HashResultType_SecureToken
typedef uint8 Csm_HashResultType_SecureToken[32];

#  define Rte_TypeDef_Csm_SignatureVerifyCompareType_SecureToken
typedef uint8 Csm_SignatureVerifyCompareType_SecureToken[32];

#  define Rte_TypeDef_Csm_SignatureVerifyDataType_SecureToken
typedef uint8 Csm_SignatureVerifyDataType_SecureToken[32];

#  define Rte_TypeDef_Darh_ActivelyReportedErrorListType
typedef uint8 Darh_ActivelyReportedErrorListType[6];

#  define Rte_TypeDef_Darh_ErrorQueueDataType
typedef uint8 Darh_ErrorQueueDataType[21];

#  define Rte_TypeDef_Darh_RoeState_ReadData_Data_ArrayType
typedef uint8 Darh_RoeState_ReadData_Data_ArrayType[1];

#  define Rte_TypeDef_DataArrayType_uint8_1
typedef uint8 DataArrayType_uint8_1[1];

#  define Rte_TypeDef_DataArrayType_uint8_18
typedef uint8 DataArrayType_uint8_18[18];

#  define Rte_TypeDef_DataArrayType_uint8_2
typedef uint8 DataArrayType_uint8_2[2];

#  define Rte_TypeDef_DataArrayType_uint8_3
typedef uint8 DataArrayType_uint8_3[3];

#  define Rte_TypeDef_DataArrayType_uint8_4
typedef uint8 DataArrayType_uint8_4[4];

#  define Rte_TypeDef_DataArrayType_uint8_6
typedef uint8 DataArrayType_uint8_6[6];

#  define Rte_TypeDef_DataArrayType_uint8_7
typedef uint8 DataArrayType_uint8_7[7];

#  define Rte_TypeDef_DataArray_Type_2
typedef uint8 DataArray_Type_2[2];

#  define Rte_TypeDef_Dcm_Data109ByteType
typedef uint8 Dcm_Data109ByteType[109];

#  define Rte_TypeDef_Dcm_Data10ByteType
typedef uint8 Dcm_Data10ByteType[10];

#  define Rte_TypeDef_Dcm_Data12ByteType
typedef uint8 Dcm_Data12ByteType[12];

#  define Rte_TypeDef_Dcm_Data132ByteType
typedef uint8 Dcm_Data132ByteType[132];

#  define Rte_TypeDef_Dcm_Data156ByteType
typedef uint8 Dcm_Data156ByteType[156];

#  define Rte_TypeDef_Dcm_Data16ByteType
typedef uint8 Dcm_Data16ByteType[16];

#  define Rte_TypeDef_Dcm_Data17ByteType
typedef uint8 Dcm_Data17ByteType[17];

#  define Rte_TypeDef_Dcm_Data1ByteType
typedef uint8 Dcm_Data1ByteType[1];

#  define Rte_TypeDef_Dcm_Data20ByteType
typedef uint8 Dcm_Data20ByteType[20];

#  define Rte_TypeDef_Dcm_Data21ByteType
typedef uint8 Dcm_Data21ByteType[21];

#  define Rte_TypeDef_Dcm_Data250ByteType
typedef uint8 Dcm_Data250ByteType[250];

#  define Rte_TypeDef_Dcm_Data256ByteType
typedef uint8 Dcm_Data256ByteType[256];

#  define Rte_TypeDef_Dcm_Data28ByteType
typedef uint8 Dcm_Data28ByteType[28];

#  define Rte_TypeDef_Dcm_Data2ByteType
typedef uint8 Dcm_Data2ByteType[2];

#  define Rte_TypeDef_Dcm_Data3ByteType
typedef uint8 Dcm_Data3ByteType[3];

#  define Rte_TypeDef_Dcm_Data49ByteType
typedef uint8 Dcm_Data49ByteType[49];

#  define Rte_TypeDef_Dcm_Data4ByteType
typedef uint8 Dcm_Data4ByteType[4];

#  define Rte_TypeDef_Dcm_Data6ByteType
typedef uint8 Dcm_Data6ByteType[6];

#  define Rte_TypeDef_Dcm_Data8192ByteType
typedef uint8 Dcm_Data8192ByteType[8192];

#  define Rte_TypeDef_Dcm_Data8195ByteType
typedef uint8 Dcm_Data8195ByteType[8195];

#  define Rte_TypeDef_Dcm_Data8ByteType
typedef uint8 Dcm_Data8ByteType[8];

#  define Rte_TypeDef_Dcm_Data99ByteType
typedef uint8 Dcm_Data99ByteType[99];

#  define Rte_TypeDef_Dcm_RequestData_ArrayType
typedef uint8 Dcm_RequestData_ArrayType[1024];

#  define Rte_TypeDef_Dcm_SecAccDataRecCoding_ArrayType
typedef uint8 Dcm_SecAccDataRecCoding_ArrayType[4];

#  define Rte_TypeDef_Dcm_SecAccDataRecSwt_ArrayType
typedef uint8 Dcm_SecAccDataRecSwt_ArrayType[4];

#  define Rte_TypeDef_Dcm_SecKeyCoding_ArrayType
typedef uint8 Dcm_SecKeyCoding_ArrayType[132];

#  define Rte_TypeDef_Dcm_SecKeySwt_ArrayType
typedef uint8 Dcm_SecKeySwt_ArrayType[132];

#  define Rte_TypeDef_Dcm_SecSeedCoding_ArrayType
typedef uint8 Dcm_SecSeedCoding_ArrayType[8];

#  define Rte_TypeDef_Dcm_SecSeedSwt_ArrayType
typedef uint8 Dcm_SecSeedSwt_ArrayType[8];

#  define Rte_TypeDef_Dem_MaxDataValueType
typedef uint8 Dem_MaxDataValueType[18];

#  define Rte_TypeDef_DevInfoArrayType
typedef uint8 DevInfoArrayType[17];

#  define Rte_TypeDef_DiagCommLoopback_ArrayType
typedef uint8 DiagCommLoopback_ArrayType[1024];

#  define Rte_TypeDef_DlogUser_SgbmIdType
typedef uint8 DlogUser_SgbmIdType[8];

#  define Rte_TypeDef_Dlog_HWModificationIndexArrayType
typedef uint8 Dlog_HWModificationIndexArrayType[2];

#  define Rte_TypeDef_Dlog_ProgIdArrayType
typedef uint8 Dlog_ProgIdArrayType[8];

#  define Rte_TypeDef_Dlog_RandomSeedType
typedef uint32 Dlog_RandomSeedType[4];

#  define Rte_TypeDef_Dlog_SgbmIdArrayType
typedef uint8 Dlog_SgbmIdArrayType[8];

#  define Rte_TypeDef_Dlog_SignatureArrayType
typedef uint8 Dlog_SignatureArrayType[260];

#  define Rte_TypeDef_Dlog_SwfkDeleteSupportedArrayType
typedef uint8 Dlog_SwfkDeleteSupportedArrayType[1];

#  define Rte_TypeDef_Dlog_VinArrayType
typedef uint8 Dlog_VinArrayType[17];

#  define Rte_TypeDef_IntegrationSample_Dem_DataDemDataElementClass_FUNCPN_STATE_ArrayType
typedef uint8 IntegrationSample_Dem_DataDemDataElementClass_FUNCPN_STATE_ArrayType[3];

#  define Rte_TypeDef_IntegrationSample_Dem_DataDemDataElementClass_KILOMETER_ArrayType
typedef uint8 IntegrationSample_Dem_DataDemDataElementClass_KILOMETER_ArrayType[3];

#  define Rte_TypeDef_IntegrationSample_Dem_DataDemDataElementClass_PWF_AND_PN_ArrayType
typedef uint8 IntegrationSample_Dem_DataDemDataElementClass_PWF_AND_PN_ArrayType[1];

#  define Rte_TypeDef_IntegrationSample_RequestDataArray
typedef uint8 IntegrationSample_RequestDataArray[1024];

#  define Rte_TypeDef_ManufacturingDataArrayType
typedef uint8 ManufacturingDataArrayType[3];

#  define Rte_TypeDef_NO_VECH_1
typedef uint8 NO_VECH_1[1];

#  define Rte_TypeDef_NO_VECH_2
typedef uint8 NO_VECH_2[1];

#  define Rte_TypeDef_NO_VECH_3
typedef uint8 NO_VECH_3[1];

#  define Rte_TypeDef_NO_VECH_4
typedef uint8 NO_VECH_4[1];

#  define Rte_TypeDef_NO_VECH_5
typedef uint8 NO_VECH_5[1];

#  define Rte_TypeDef_NO_VECH_6
typedef uint8 NO_VECH_6[1];

#  define Rte_TypeDef_NO_VECH_7
typedef uint8 NO_VECH_7[1];

#  define Rte_TypeDef_ProgCounterArrayType
typedef uint8 ProgCounterArrayType[4];

#  define Rte_TypeDef_ProgCounterMaxArrayType
typedef uint8 ProgCounterMaxArrayType[2];

#  define Rte_TypeDef_RSInputArrayType
typedef uint8 RSInputArrayType[8];

#  define Rte_TypeDef_RSOutputArrayType
typedef uint8 RSOutputArrayType[8];

#  define Rte_TypeDef_RequestDataArray
typedef uint8 RequestDataArray[1024];

#  define Rte_TypeDef_Rte_DT_Bs_SfaFeatureSpecificFieldValueType_1
typedef uint8 Rte_DT_Bs_SfaFeatureSpecificFieldValueType_1[256];

#  define Rte_TypeDef_Rte_DT_Darh_TransmissionArrayType_1
typedef uint8 Rte_DT_Darh_TransmissionArrayType_1[23];

#  define Rte_TypeDef_SerialNumberArrayType
typedef uint8 SerialNumberArrayType[10];

#  define Rte_TypeDef_SgbdIdArrayType
typedef uint8 SgbdIdArrayType[3];

#  define Rte_TypeDef_SgbdIndex_ArrayType
typedef uint8 SgbdIndex_ArrayType[3];

#  define Rte_TypeDef_SignatureArrayType
typedef uint8 SignatureArrayType[132];

#  define Rte_TypeDef_SvkDataArrayType
typedef uint8 SvkDataArrayType[100];

#  define Rte_TypeDef_SvkHistoryDataArrayType
typedef uint8 SvkHistoryDataArrayType[41];

#  define Rte_TypeDef_TimingParametersArrayType
typedef uint8 TimingParametersArrayType[12];

#  define Rte_TypeDef_UInt8_Array1
typedef uint8 UInt8_Array1[1];

#  define Rte_TypeDef_Dt_e2eGrp_AVL_PO_EPS_grpMap_0e78aaac
typedef struct
{
  uint8 Re_sn_e0f63d36315c4773ba837e73d6faaadd_15_bc95b5ba2eae48218eb9877ea08559a2_2_828cc38e;
  uint16 Re_sn_e0f63d36315c4773ba837e73d6faaadd_15_4fc18042a3ed4ed3935aa3b3038bf544_5_828cc38e;
  uint16 Re_sn_e0f63d36315c4773ba837e73d6faaadd_15_99fd6a6f88664f46a45dae1eac3e4bb9_5_828cc38e;
  uint8 Re_sn_e0f63d36315c4773ba837e73d6faaadd_15_c5c4fc12c19449dca31982abd0f99bbb_2_828cc38e;
  uint8 Re_sn_e0f63d36315c4773ba837e73d6faaadd_15_2de5d882792e4739a95de3e1c7b8ccad_10_828cc38e;
  uint16 Re_sn_e0f63d36315c4773ba837e73d6faaadd_15_accb41f44683494d8bbe73645993b2b8_9_828cc38e;
  uint8 Re_sn_e0f63d36315c4773ba837e73d6faaadd_15_7184c8825a7a44dd9a0b76c751498b8c_6_828cc38e;
  uint8 Re_sn_e0f63d36315c4773ba837e73d6faaadd_15_7f90cd4f694b47ba8781390120dcbc0a_3_828cc38e;
} Dt_e2eGrp_AVL_PO_EPS_grpMap_0e78aaac;

#  define Rte_TypeDef_Dt_e2eGrp_ST_EST_grpMap_1efe9fd4
typedef struct
{
  uint8 Re_ST_EST_dummy_16_23_2f274d97;
  uint8 Re_sn_0d521c7c53964f869478fa5c12f4ec50_14_754efa353cf340fcb5ebf6a252677ba9_1_2f274d97;
  uint8 Re_sn_0d521c7c53964f869478fa5c12f4ec50_14_4b5d00d65aef4a05b869d24584abb8c4_1_2f274d97;
  uint8 Re_sn_0d521c7c53964f869478fa5c12f4ec50_14_8fcd25d281bf43f7836594d2433bdf22_11_2f274d97;
  uint8 Re_sn_0d521c7c53964f869478fa5c12f4ec50_14_cab340b35df54638b5e0037eab93598a_8_2f274d97;
  uint8 Re_sn_0d521c7c53964f869478fa5c12f4ec50_14_296a2827f3ac4a3cb35d9abfed66395a_2_2f274d97;
} Dt_e2eGrp_ST_EST_grpMap_1efe9fd4;

#  define Rte_TypeDef_IntegrationSample_CON_VEH_Type
typedef struct
{
  uint8 IntegrationSample_ST_CON_VEH;
  uint32 IntegrationSample_CTR_FKTN_PRTNT;
  uint8 IntegrationSample_CTR_BS_PRTNT;
} IntegrationSample_CON_VEH_Type;

#  define Rte_TypeDef_IntegrationSample_VehicleCondition_TYPE
typedef struct
{
  uint8 cRCConditionVehicle;
  uint8 aliveConditionVehicle;
  uint8 controlBasePartialNetworks;
  uint32 controlFunctionalPartialNetworks;
  uint8 statusConditionVehicle;
  uint8 qualifierStatusConditionVehicle;
  uint8 dummy;
} IntegrationSample_VehicleCondition_TYPE;

#  define Rte_TypeDef_MileageKilometreType
typedef struct
{
  uint32 mileageKilometre;
} MileageKilometreType;

#  define Rte_TypeDef_Rte_DT_ErrorQueueType_0_0
typedef struct
{
  uint32 timestamp;
  uint32 EventId;
} Rte_DT_ErrorQueueType_0_0;

#  define Rte_TypeDef_Vin_ComVinType
typedef struct
{
  uint8 Vin1;
  uint8 Vin2;
  uint8 Vin3;
  uint8 Vin4;
  uint8 Vin5;
  uint8 Vin6;
  uint8 Vin7;
} Vin_ComVinType;

#  define Rte_TypeDef_sigGroup_CON_VEH
typedef struct
{
  ST_CON_VEH ST_CON_VEH;
  CTR_FKTN_PRTNT CTR_FKTN_PRTNT;
  CRC_CON_VEH CRC_CON_VEH;
  CON_VEH_dummy_56_63 CON_VEH_dummy_56_63;
  CTR_BS_PRTNT CTR_BS_PRTNT;
  ALIV_CON_VEH ALIV_CON_VEH;
  QU_ST_CON_VEH QU_ST_CON_VEH;
} sigGroup_CON_VEH;

#  define Rte_TypeDef_Bs_SfaFeatureSpecificFieldValueType
typedef struct
{
  uint32 size;
  Rte_DT_Bs_SfaFeatureSpecificFieldValueType_1 payload;
} Bs_SfaFeatureSpecificFieldValueType;

#  define Rte_TypeDef_BswM_BswMRteModeDclGroup
typedef uint8 BswM_BswMRteModeDclGroup;

#  define Rte_TypeDef_BswM_ESH_Mode
typedef uint8 BswM_ESH_Mode;

#  define Rte_TypeDef_BswM_ESH_RunRequest
typedef uint8 BswM_ESH_RunRequest;

#  define Rte_TypeDef_ComM_InhibitionStatusType
typedef uint8 ComM_InhibitionStatusType;

#  define Rte_TypeDef_ComM_ModeType
typedef uint8 ComM_ModeType;

#  define Rte_TypeDef_ComM_UserHandleType
typedef uint8 ComM_UserHandleType;

#  define Rte_TypeDef_Crypto_VerifyResultType
typedef uint8 Crypto_VerifyResultType;

#  define Rte_TypeDef_Darh_DcmIndicationType
typedef uint8 Darh_DcmIndicationType;

#  define Rte_TypeDef_Darh_LifeCycleRequestType
typedef uint8 Darh_LifeCycleRequestType;

#  define Rte_TypeDef_Darh_RoeStateType
typedef uint8 Darh_RoeStateType;

#  define Rte_TypeDef_Darh_SuspendedStateType
typedef uint8 Darh_SuspendedStateType;

#  define Rte_TypeDef_Darh_TransmissionArrayType
typedef struct
{
  uint16 size;
  Rte_DT_Darh_TransmissionArrayType_1 payload;
} Darh_TransmissionArrayType;

#  define Rte_TypeDef_Dcm_CommunicationModeType
typedef uint8 Dcm_CommunicationModeType;

#  define Rte_TypeDef_Dcm_ConfirmationStatusType
typedef uint8 Dcm_ConfirmationStatusType;

#  define Rte_TypeDef_Dcm_ControlDtcSettingType
typedef uint8 Dcm_ControlDtcSettingType;

#  define Rte_TypeDef_Dcm_DiagnosticSessionControlType
typedef uint8 Dcm_DiagnosticSessionControlType;

#  define Rte_TypeDef_Dcm_DidSupportedType
typedef uint8 Dcm_DidSupportedType;

#  define Rte_TypeDef_Dcm_EcuResetType
typedef uint8 Dcm_EcuResetType;

#  define Rte_TypeDef_Dcm_ModeRapidPowerShutDownType
typedef uint8 Dcm_ModeRapidPowerShutDownType;

#  define Rte_TypeDef_Dcm_ProtocolType
typedef uint8 Dcm_ProtocolType;

#  define Rte_TypeDef_Dcm_RequestKindType
typedef uint8 Dcm_RequestKindType;

#  define Rte_TypeDef_Dcm_ResponseOnEventType
typedef uint8 Dcm_ResponseOnEventType;

#  define Rte_TypeDef_Dcm_SecLevelType
typedef uint8 Dcm_SecLevelType;

#  define Rte_TypeDef_Dcm_SesCtrlType
typedef uint8 Dcm_SesCtrlType;

#  define Rte_TypeDef_Dem_DTCFormatType
typedef uint8 Dem_DTCFormatType;

#  define Rte_TypeDef_Dem_DTCGroupType
typedef uint32 Dem_DTCGroupType;

#  define Rte_TypeDef_Dem_DTCKindType
typedef uint8 Dem_DTCKindType;

#  define Rte_TypeDef_Dem_DTCOriginType
typedef uint16 Dem_DTCOriginType;

#  define Rte_TypeDef_Dem_DTCSeverityType
typedef uint8 Dem_DTCSeverityType;

#  define Rte_TypeDef_Dem_DTCStatusMaskType
typedef uint8 Dem_DTCStatusMaskType;

#  define Rte_TypeDef_Dem_DTRControlType
typedef uint8 Dem_DTRControlType;

#  define Rte_TypeDef_Dem_DebounceResetStatusType
typedef uint8 Dem_DebounceResetStatusType;

#  define Rte_TypeDef_Dem_DebouncingStateType
typedef uint8 Dem_DebouncingStateType;

#  define Rte_TypeDef_Dem_EventIdType
typedef uint16 Dem_EventIdType;

#  define Rte_TypeDef_Dem_IndicatorStatusType
typedef uint8 Dem_IndicatorStatusType;

#  define Rte_TypeDef_Dem_InitMonitorReasonType
typedef uint8 Dem_InitMonitorReasonType;

#  define Rte_TypeDef_Dem_IumprDenomCondIdType
typedef uint8 Dem_IumprDenomCondIdType;

#  define Rte_TypeDef_Dem_IumprDenomCondStatusType
typedef uint8 Dem_IumprDenomCondStatusType;

#  define Rte_TypeDef_Dem_IumprReadinessGroupType
typedef uint8 Dem_IumprReadinessGroupType;

#  define Rte_TypeDef_Dem_MonitorStatusType
typedef uint8 Dem_MonitorStatusType;

#  define Rte_TypeDef_Dem_OperationCycleIdType
typedef uint8 Dem_OperationCycleIdType;

#  define Rte_TypeDef_Dem_OperationCycleStateType
typedef uint8 Dem_OperationCycleStateType;

#  define Rte_TypeDef_Dem_RatioIdType
typedef uint16 Dem_RatioIdType;

#  define Rte_TypeDef_Dem_UdsStatusByteType
typedef uint8 Dem_UdsStatusByteType;

#  define Rte_TypeDef_Dlog_LifeCycleRequestType
typedef uint8 Dlog_LifeCycleRequestType;

#  define Rte_TypeDef_EcuM_BootTargetType
typedef uint8 EcuM_BootTargetType;

#  define Rte_TypeDef_EcuM_ModeType
typedef uint8 EcuM_ModeType;

#  define Rte_TypeDef_EcuM_ShutdownCauseType
typedef uint8 EcuM_ShutdownCauseType;

#  define Rte_TypeDef_EcuM_SleepModeType
typedef uint8 EcuM_SleepModeType;

#  define Rte_TypeDef_EcuM_StateType
typedef uint8 EcuM_StateType;

#  define Rte_TypeDef_EcuM_TimeType
typedef uint32 EcuM_TimeType;

#  define Rte_TypeDef_EcuM_UserType
typedef uint8 EcuM_UserType;

#  define Rte_TypeDef_IS_ST_CON_VEH_Type
typedef uint8 IS_ST_CON_VEH_Type;

#  define Rte_TypeDef_IntegrationSample_Dcm_ConfirmationStatusType
typedef uint8 IntegrationSample_Dcm_ConfirmationStatusType;

#  define Rte_TypeDef_IntegrationSample_Dcm_NegativeResponseCodeType
typedef uint8 IntegrationSample_Dcm_NegativeResponseCodeType;

#  define Rte_TypeDef_IntegrationSample_EcuRunStateModeRequestType
typedef uint8 IntegrationSample_EcuRunStateModeRequestType;

#  define Rte_TypeDef_IntegrationSample_SimpleTimerStateType
typedef uint8 IntegrationSample_SimpleTimerStateType;

#  define Rte_TypeDef_IntegrationSample_Stm_CentralErrorLockType
typedef uint8 IntegrationSample_Stm_CentralErrorLockType;

#  define Rte_TypeDef_NegativeResponseCodeType
typedef uint8 NegativeResponseCodeType;

#  define Rte_TypeDef_NormalCommunicationModeType
typedef uint8 NormalCommunicationModeType;

#  define Rte_TypeDef_NvM_BlockIdType
typedef uint16 NvM_BlockIdType;

#  define Rte_TypeDef_NvM_ServiceIdType
typedef uint8 NvM_ServiceIdType;

#  define Rte_TypeDef_Omc_ExtendedOperatingModeType
typedef uint8 Omc_ExtendedOperatingModeType;

#  define Rte_TypeDef_Omc_LifeCycleRequestType
typedef uint8 Omc_LifeCycleRequestType;

#  define Rte_TypeDef_Omc_OperatingModeType
typedef uint8 Omc_OperatingModeType;

#  define Rte_TypeDef_OpStatusType
typedef uint8 OpStatusType;

#  define Rte_TypeDef_RequestResultType
typedef uint8 RequestResultType;

#  define Rte_TypeDef_Rte_DT_ErrorQueueType_0
typedef Rte_DT_ErrorQueueType_0_0 Rte_DT_ErrorQueueType_0[5];

#  define Rte_TypeDef_StatusEnergyFZM_Type
typedef uint8 StatusEnergyFZM_Type;

#  define Rte_TypeDef_StatusInterlockErrorMemoryFZM_Type
typedef uint8 StatusInterlockErrorMemoryFZM_Type;

#  define Rte_TypeDef_StdDiag_LifeCycleRequestType
typedef uint8 StdDiag_LifeCycleRequestType;

#  define Rte_TypeDef_Stm_CentralErrorLockType
typedef uint8 Stm_CentralErrorLockType;

#  define Rte_TypeDef_Stm_EnergyStateType
typedef uint8 Stm_EnergyStateType;

#  define Rte_TypeDef_Stm_VehicleStateSP2015Type
typedef uint8 Stm_VehicleStateSP2015Type;

#  define Rte_TypeDef_Stm_VehicleStateType
typedef uint8 Stm_VehicleStateType;

#  define Rte_TypeDef_SysTime_LifeCycleRequestType
typedef uint8 SysTime_LifeCycleRequestType;

#  define Rte_TypeDef_TimeInMicrosecondsType
typedef uint32 TimeInMicrosecondsType;

#  define Rte_TypeDef_WdgMMode
typedef uint8 WdgMMode;

#  define Rte_TypeDef_WdgM_GlobalStatusType
typedef uint8 WdgM_GlobalStatusType;

#  define Rte_TypeDef_WdgM_LocalStatusType
typedef uint8 WdgM_LocalStatusType;

#  define Rte_TypeDef_WdgM_ModeType
typedef uint8 WdgM_ModeType;

#  define Rte_TypeDef_WdgM_SupervisedEntityIdType
typedef uint16 WdgM_SupervisedEntityIdType;

#  define Rte_TypeDef_ErrorQueueType
typedef struct
{
  Rte_DT_ErrorQueueType_0 queue;
  uint16 first;
  uint16 size;
} ErrorQueueType;

#  define Rte_TypeDef_Rte_DT_VehicleState_Type_0
typedef StatusEnergyFZM_Type Rte_DT_VehicleState_Type_0;

#  define Rte_TypeDef_VehicleState_Type
typedef struct
{
  Rte_DT_VehicleState_Type_0 statusEnergyFZM;
  StatusInterlockErrorMemoryFZM_Type statusInterlockErrorMemoryFZM;
} VehicleState_Type;

# endif

#endif /* _RTE_TYPE_H */
