/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  FrTp.c
 *        Config:  EPS.dpa
 *    BSW Module:  FrTp
 *
 *     Generator:  MICROSAR RTE Generator Version 4.16.0
 *                 RTE Core Version 1.16.0
 *       License:  Unlimited license CBD1700369 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for BSW Module <FrTp>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779 */
/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */
/* PRQA S 0614 EOF */ /* MD_Rte_TestCode */

/* PRQA S 3109 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3112 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3197 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3198 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3199 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3201 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3203 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3205 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3206 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3218 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3229 EOF */ /* MD_Rte_TestCode */
/* PRQA S 2002 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3334 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3417 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3426 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3453 EOF */ /* MD_Rte_TestCode */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "SchM_FrTp.h"
#include "TSC_SchM_FrTp.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "string.h"


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
 * ALIV_CON_VEH: Integer in interval [0...255]
 * CON_VEH_dummy_56_63: Integer in interval [0...255]
 * CRC_CON_VEH: Integer in interval [0...255]
 * ComM_InhibitionStatusType: Integer in interval [0...255]
 * ComM_UserHandleType: Integer in interval [0...255]
 * CounterType: Integer in interval [0...255]
 * Dem_DTCGroupType: Integer in interval [0...16777215]
 * Dem_DTCStatusMaskType: Integer in interval [0...255]
 * Dem_EventIdType: Integer in interval [1...65535]
 * Dem_EventIdType: Integer in interval [1...72]
 * Dem_OperationCycleIdType: Integer in interval [0...255]
 * Dem_RatioIdType: Integer in interval [1...65535]
 * EcuM_TimeType: Integer in interval [0...4294967295]
 * EcuM_UserType: Integer in interval [0...255]
 * MILE_KM: Integer in interval [0...16777214]
 * NetworkHandleType: Integer in interval [0...255]
 * NvM_BlockIdType: Integer in interval [1...32767]
 * NvM_DstPtrType: DataReference
 * NvM_SrcPtrType: DataReference
 * NvM_SrcPtrType: DataReference
 * NvM_SrcPtrType: DataReference
 * SrcPtrType: DataReference
 * TimeInMicrosecondsType: Integer in interval [0...4294967295]
 * WdgM_CheckpointIdType: Integer in interval [0...65535]
 * WdgM_ModeType: Integer in interval [0...255]
 * WdgM_SupervisedEntityIdType: Integer in interval [0...65535]
 * boolean: Boolean (standard type)
 * dtRef_VOID: DataReference
 * dtRef_const_VOID: DataReference
 * sint8: Integer in interval [-128...127] (standard type)
 * uint16: Integer in interval [0...65535] (standard type)
 * uint32: Integer in interval [0...4294967295] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * BMW_Application_Reset_IRV: Enumeration of integer in interval [0...255] with enumerators
 * Bac4_ApplicationStateType: Enumeration of integer in interval [0...255] with enumerators
 * Bs_LifeCycleRequestType: Enumeration of integer in interval [0...255] with enumerators
 * BswM_BswMRteModeDclGroup: Enumeration of integer in interval [0...255] with enumerators
 * BswM_ESH_Mode: Enumeration of integer in interval [0...255] with enumerators
 * BswM_ESH_RunRequest: Enumeration of integer in interval [0...255] with enumerators
 * CTR_BS_PRTNT: Enumeration of integer in interval [0...255] with enumerators
 * CTR_FKTN_PRTNT: Enumeration of integer in interval [0...4294967295] with enumerators
 * ComM_ModeType: Enumeration of integer in interval [0...255] with enumerators
 * Darh_LifeCycleRequestType: Enumeration of integer in interval [0...255] with enumerators
 * Darh_RoeStateType: Enumeration of integer in interval [0...255] with enumerators
 * Darh_RoeStateType: Enumeration of integer in interval [0...255] with enumerators
 * Darh_SuspendedStateType: Enumeration of integer in interval [0...255] with enumerators
 * Dcm_CommunicationModeType: Enumeration of integer in interval [0...255] with enumerators
 * Dcm_ConfirmationStatusType: Enumeration of integer in interval [0...3] with enumerators
 * Dcm_ConfirmationStatusType: Enumeration of integer in interval [0...255] with enumerators
 * Dcm_ControlDtcSettingType: Enumeration of integer in interval [0...255] with enumerators
 * Dcm_DiagnosticSessionControlType: Enumeration of integer in interval [0...255] with enumerators
 * Dcm_DidSupportedType: Enumeration of integer in interval [0...255] with enumerators
 * Dcm_EcuResetType: Enumeration of integer in interval [0...255] with enumerators
 * Dcm_ModeRapidPowerShutDownType: Enumeration of integer in interval [0...255] with enumerators
 * Dcm_NegativeResponseCodeType: Enumeration of integer in interval [0...255] with enumerators
 * Dcm_NegativeResponseCodeType: Enumeration of integer in interval [0...255] with enumerators
 * Dcm_NegativeResponseCodeType: Enumeration of integer in interval [16...254] with enumerators
 * Dcm_NegativeResponseCodeType: Enumeration of integer in interval [16...254] with enumerators
 * Dcm_NegativeResponseCodeType: Enumeration of integer in interval [0...255] with enumerators
 * Dcm_NegativeResponseCodeType: Enumeration of integer in interval [0...255] with enumerators
 * Dcm_OpStatusType: Enumeration of integer in interval [0...3] with enumerators
 * Dcm_OpStatusType: Enumeration of integer in interval [0...255] with enumerators
 * Dcm_OpStatusType: Enumeration of integer in interval [0...3] with enumerators
 * Dcm_OpStatusType: Enumeration of integer in interval [0...255] with enumerators
 * Dcm_OpStatusType: Enumeration of integer in interval [0...255] with enumerators
 * Dcm_ProtocolType: Enumeration of integer in interval [0...255] with enumerators
 * Dcm_RequestKindType: Enumeration of integer in interval [0...255] with enumerators
 * Dcm_ResponseOnEventType: Enumeration of integer in interval [0...255] with enumerators
 * Dcm_SecLevelType: Enumeration of integer in interval [0...255] with enumerators
 * Dcm_SesCtrlType: Enumeration of integer in interval [1...66] with enumerators
 * Dcm_SesCtrlType: Enumeration of integer in interval [0...255] with enumerators
 * Dem_DTCFormatType: Enumeration of integer in interval [0...255] with enumerators
 * Dem_DTCFormatType: Enumeration of integer in interval [0...2] with enumerators
 * Dem_DTCFormatType: Enumeration of integer in interval [0...2] with enumerators
 * Dem_DTCKindType: Enumeration of integer in interval [0...255] with enumerators
 * Dem_DTCOriginType: Enumeration of integer in interval [0...65535] with enumerators
 * Dem_DTCOriginType: Enumeration of integer in interval [1...4] with enumerators
 * Dem_DTCSeverityType: Enumeration of integer in interval [0...255] with enumerators
 * Dem_DTRControlType: Enumeration of integer in interval [0...255] with enumerators
 * Dem_DebounceResetStatusType: Enumeration of integer in interval [0...255] with enumerators
 * Dem_DebouncingStateType: Enumeration of integer in interval [0...255] with enumerators
 * Dem_EventStatusType: Enumeration of integer in interval [0...255] with enumerators
 * Dem_EventStatusType: Enumeration of integer in interval [0...255] with enumerators
 * Dem_EventStatusType: Enumeration of integer in interval [0...4] with enumerators
 * Dem_EventStatusType: Enumeration of integer in interval [0...4] with enumerators
 * Dem_IndicatorStatusType: Enumeration of integer in interval [0...255] with enumerators
 * Dem_InitMonitorReasonType: Enumeration of integer in interval [0...255] with enumerators
 * Dem_IumprDenomCondIdType: Enumeration of integer in interval [0...255] with enumerators
 * Dem_IumprDenomCondStatusType: Enumeration of integer in interval [0...255] with enumerators
 * Dem_IumprReadinessGroupType: Enumeration of integer in interval [0...255] with enumerators
 * Dem_MonitorStatusType: Enumeration of integer in interval [0...255] with enumerators
 * Dem_OperationCycleStateType: Enumeration of integer in interval [0...255] with enumerators
 * Dem_UdsStatusByteType: Enumeration of integer in interval [0...255] with enumerators
 * Dlog_LifeCycleRequestType: Enumeration of integer in interval [0...255] with enumerators
 * EcuM_BootTargetType: Enumeration of integer in interval [0...255] with enumerators
 * EcuM_ModeType: Enumeration of integer in interval [0...255] with enumerators
 * EcuM_ShutdownCauseType: Enumeration of integer in interval [0...255] with enumerators
 * EcuM_StateType: Enumeration of integer in interval [0...255] with enumerators
 * IS_ST_CON_VEH_Type: Enumeration of integer in interval [0...255] with enumerators
 * IntegrationSample_Dcm_ConfirmationStatusType: Enumeration of integer in interval [0...3] with enumerators
 * IntegrationSample_Dcm_NegativeResponseCodeType: Enumeration of integer in interval [16...254] with enumerators
 * IntegrationSample_EcuRunStateModeRequestType: Enumeration of integer in interval [0...255] with enumerators
 * IntegrationSample_SimpleTimerStateType: Enumeration of integer in interval [0...255] with enumerators
 * IntegrationSample_Stm_CentralErrorLockType: Enumeration of integer in interval [0...255] with enumerators
 * NormalCommunicationModeType: Enumeration of integer in interval [0...255] with enumerators
 * NvM_RequestResultType: Enumeration of integer in interval [0...255] with enumerators
 * NvM_RequestResultType: Enumeration of integer in interval [0...8] with enumerators
 * NvM_RequestResultType: Enumeration of integer in interval [0...255] with enumerators
 * NvM_RequestResultType: Enumeration of integer in interval [0...255] with enumerators
 * NvM_ServiceIdType: Enumeration of integer in interval [0...255] with enumerators
 * Omc_ExtendedOperatingModeType: Enumeration of integer in interval [0...255] with enumerators
 * Omc_ExtendedOperatingModeType: Enumeration of integer in interval [0...255] with enumerators
 * Omc_LifeCycleRequestType: Enumeration of integer in interval [0...255] with enumerators
 * Omc_OperatingModeType: Enumeration of integer in interval [0...255] with enumerators
 * Omc_OperatingModeType: Enumeration of integer in interval [0...255] with enumerators
 * OpStatusType: Enumeration of integer in interval [0...255] with enumerators
 * QU_ST_CON_VEH: Enumeration of integer in interval [0...255] with enumerators
 * RequestResultType: Enumeration of integer in interval [0...255] with enumerators
 * Rte_DT_VehicleState_Type_0: Enumeration of integer in interval [0...255] with enumerators
 * ST_CON_VEH: Enumeration of integer in interval [0...255] with enumerators
 * StatusEnergyFZM_Type: Enumeration of integer in interval [0...255] with enumerators
 * StatusInterlockErrorMemoryFZM_Type: Enumeration of integer in interval [0...255] with enumerators
 * StdDiag_LifeCycleRequestType: Enumeration of integer in interval [0...255] with enumerators
 * Stm_CentralErrorLockType: Enumeration of integer in interval [0...255] with enumerators
 * Stm_EnergyStateType: Enumeration of integer in interval [0...255] with enumerators
 * Stm_VehicleStateType: Enumeration of integer in interval [0...255] with enumerators
 * Stm_VehicleStateType: Enumeration of integer in interval [0...255] with enumerators
 * SysTime_LifeCycleRequestType: Enumeration of integer in interval [0...255] with enumerators
 * WdgMMode: Enumeration of integer in interval [0...255] with enumerators
 * WdgM_GlobalStatusType: Enumeration of integer in interval [0...255] with enumerators
 * WdgM_LocalStatusType: Enumeration of integer in interval [0...255] with enumerators
 *
 * Array Types:
 * ============
 * ActiveSessionState_ArrayType: Array with 4 element(s) of type uint8
 * Array4: Array with 4 element(s) of type uint8
 * CheckProgrammingPreconditions_ArrayType: Array with 256 element(s) of type uint8
 * Coding_CafIdArrayType: Array with 8 element(s) of type uint8
 * Darh_ActivelyReportedErrorListType: Array with 6 element(s) of type uint8
 * DataArrayType_uint8_1: Array with 1 element(s) of type uint8
 * DataArrayType_uint8_18: Array with 18 element(s) of type uint8
 * DataArrayType_uint8_2: Array with 2 element(s) of type uint8
 * DataArrayType_uint8_3: Array with 3 element(s) of type uint8
 * DataArrayType_uint8_4: Array with 4 element(s) of type uint8
 * DataArrayType_uint8_6: Array with 6 element(s) of type uint8
 * DataArrayType_uint8_7: Array with 7 element(s) of type uint8
 * Dcm_Data109ByteType: Array with 109 element(s) of type uint8
 * Dcm_Data10ByteType: Array with 10 element(s) of type uint8
 * Dcm_Data12ByteType: Array with 12 element(s) of type uint8
 * Dcm_Data132ByteType: Array with 132 element(s) of type uint8
 * Dcm_Data156ByteType: Array with 156 element(s) of type uint8
 * Dcm_Data16ByteType: Array with 16 element(s) of type uint8
 * Dcm_Data17ByteType: Array with 17 element(s) of type uint8
 * Dcm_Data1ByteType: Array with 1 element(s) of type uint8
 * Dcm_Data20ByteType: Array with 20 element(s) of type uint8
 * Dcm_Data21ByteType: Array with 21 element(s) of type uint8
 * Dcm_Data250ByteType: Array with 250 element(s) of type uint8
 * Dcm_Data256ByteType: Array with 256 element(s) of type uint8
 * Dcm_Data28ByteType: Array with 28 element(s) of type uint8
 * Dcm_Data2ByteType: Array with 2 element(s) of type uint8
 * Dcm_Data3ByteType: Array with 3 element(s) of type uint8
 * Dcm_Data49ByteType: Array with 49 element(s) of type uint8
 * Dcm_Data4ByteType: Array with 4 element(s) of type uint8
 * Dcm_Data6ByteType: Array with 6 element(s) of type uint8
 * Dcm_Data8192ByteType: Array with 8192 element(s) of type uint8
 * Dcm_Data8195ByteType: Array with 8195 element(s) of type uint8
 * Dcm_Data8ByteType: Array with 8 element(s) of type uint8
 * Dcm_Data99ByteType: Array with 99 element(s) of type uint8
 * Dem_MaxDataValueType: Array with 18 element(s) of type uint8
 * Dem_MaxDataValueType: Array with 18 element(s) of type uint8
 * DevInfoArrayType: Array with 17 element(s) of type uint8
 * DiagCommLoopback_ArrayType: Array with 1024 element(s) of type uint8
 * Dlog_EcuUidArrayType: Array with 16 element(s) of type uint8
 * Dlog_EcuUidArrayType: Array with 16 element(s) of type uint8
 * Dlog_HWModificationIndexArrayType: Array with 2 element(s) of type uint8
 * Dlog_ProgIdArrayType: Array with 8 element(s) of type uint8
 * Dlog_SignatureArrayType: Array with 260 element(s) of type uint8
 * Dlog_VinArrayType: Array with 17 element(s) of type uint8
 * IntegrationSample_Dem_DataDemDataElementClass_KILOMETER_ArrayType: Array with 3 element(s) of type uint8
 * IntegrationSample_RequestDataArray: Array with 1024 element(s) of type uint8
 * ManufacturingDataArrayType: Array with 3 element(s) of type uint8
 * NO_VECH_1: Array with 1 element(s) of type uint8
 * NO_VECH_2: Array with 1 element(s) of type uint8
 * NO_VECH_3: Array with 1 element(s) of type uint8
 * NO_VECH_4: Array with 1 element(s) of type uint8
 * NO_VECH_5: Array with 1 element(s) of type uint8
 * NO_VECH_6: Array with 1 element(s) of type uint8
 * NO_VECH_7: Array with 1 element(s) of type uint8
 * RCDataArrayType: Array with 260 element(s) of type uint8
 * RSInputArrayType: Array with 8 element(s) of type uint8
 * RequestDataArray: Array with 1024 element(s) of type uint8
 * Rte_DT_Darh_TransmissionArrayType_1: Array with 23 element(s) of type uint8
 * SecOC_FreshnessArrayType: Array with 8 element(s) of type uint8
 * SerialNumberArrayType: Array with 10 element(s) of type uint8
 * SgbdIndex_ArrayType: Array with 3 element(s) of type uint8
 * SvkDataArrayType: Array with 100 element(s) of type uint8
 * SvkHistoryDataArrayType: Array with 32 element(s) of type uint8
 * TimingParametersArrayType: Array with 12 element(s) of type uint8
 * UInt8_Array1: Array with 1 element(s) of type uint8
 *
 * Record Types:
 * =============
 * Darh_TransmissionArrayType: Record with elements
 *   size of type uint16
 *   payload of type Rte_DT_Darh_TransmissionArrayType_1
 * IntegrationSample_CON_VEH_Type: Record with elements
 *   IntegrationSample_ST_CON_VEH of type uint8
 *   IntegrationSample_CTR_FKTN_PRTNT of type uint32
 *   IntegrationSample_CTR_BS_PRTNT of type uint8
 * MileageKilometreType: Record with elements
 *   mileageKilometre of type uint32
 * VehicleState_Type: Record with elements
 *   statusEnergyFZM of type Rte_DT_VehicleState_Type_0
 *   statusInterlockErrorMemoryFZM of type StatusInterlockErrorMemoryFZM_Type
 * Vin_ComVinType: Record with elements
 *   Vin1 of type uint8
 *   Vin2 of type uint8
 *   Vin3 of type uint8
 *   Vin4 of type uint8
 *   Vin5 of type uint8
 *   Vin6 of type uint8
 *   Vin7 of type uint8
 * sigGroup_CON_VEH: Record with elements
 *   ST_CON_VEH of type ST_CON_VEH
 *   CTR_FKTN_PRTNT of type CTR_FKTN_PRTNT
 *   CRC_CON_VEH of type CRC_CON_VEH
 *   CON_VEH_dummy_56_63 of type CON_VEH_dummy_56_63
 *   CTR_BS_PRTNT of type CTR_BS_PRTNT
 *   ALIV_CON_VEH of type ALIV_CON_VEH
 *   QU_ST_CON_VEH of type QU_ST_CON_VEH
 *
 *********************************************************************************************************************/


#define FRTP_START_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Schedulable Entity Name: FrTp_MainFunction
 *
 *********************************************************************************************************************/

FUNC(void, FRTP_CODE) FrTp_MainFunction(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: FrTp_MainFunction
 *********************************************************************************************************************/

  TSC_FrTp_SchM_Enter_FrTp_FRTP_EXCLUSIVE_AREA_0();
  TSC_FrTp_SchM_Exit_FrTp_FRTP_EXCLUSIVE_AREA_0();
  TSC_FrTp_SchM_Enter_FrTp_FRTP_EXCLUSIVE_AREA_1();
  TSC_FrTp_SchM_Exit_FrTp_FRTP_EXCLUSIVE_AREA_1();
  TSC_FrTp_SchM_Enter_FrTp_FRTP_EXCLUSIVE_AREA_2();
  TSC_FrTp_SchM_Exit_FrTp_FRTP_EXCLUSIVE_AREA_2();

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define FRTP_STOP_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_TestCode:
     Reason:     This justification is used within the generated test code by the Rte Analyzer.
     Risk:       No functional risk.
     Prevention: Not required.

*/
