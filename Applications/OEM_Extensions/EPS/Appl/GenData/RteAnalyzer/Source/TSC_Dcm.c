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
 *          File:  TSC_Dcm.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.16.0
 *                 RTE Core Version 1.16.0
 *       License:  Unlimited license CBD1700369 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_Dcm.h"
#include "TSC_Dcm.h"















     /* Client Server Interfaces: */


     /* Service calls */
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DIDRange_DcmDspDidRange_Coding_IsDidAvailable(uint16 DID, Dcm_OpStatusType OpStatus, Dcm_DidSupportedType *supported)
{
  return Rte_Call_DataServices_DIDRange_DcmDspDidRange_Coding_IsDidAvailable(DID, OpStatus, supported);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DIDRange_DcmDspDidRange_Coding_ReadDidData(uint16 DID, uint8 *Data, Dcm_OpStatusType OpStatus, uint16 *DataLength, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DIDRange_DcmDspDidRange_Coding_ReadDidData(DID, Data, OpStatus, DataLength, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DIDRange_DcmDspDidRange_Coding_WriteDidData(uint16 DID, const uint8 *Data, Dcm_OpStatusType OpStatus, uint16 DataLength, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DIDRange_DcmDspDidRange_Coding_WriteDidData(DID, Data, OpStatus, DataLength, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_Data_DcmDspDid_SensorLesen_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_Data_DcmDspDid_SensorLesen_1_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_Data_DcmDspDid_SensorLesen_1_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_Data_DcmDspDid_SensorLesen_1_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_Data_DcmDspDid_SensorLesen_2_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_Data_DcmDspDid_SensorLesen_2_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_Data_DcmDspDid_SensorLesen_2_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_Data_DcmDspDid_SensorLesen_2_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_Data_DcmDspDid_SensorLesen_3_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_Data_DcmDspDid_SensorLesen_3_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_Data_DcmDspDid_SensorLesen_3_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_Data_DcmDspDid_SensorLesen_3_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_DmDtcAktiveMeldung_ConditionCheckRead(Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_DmDtcAktiveMeldung_ConditionCheckRead(ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_DmDtcAktiveMeldung_ReadData(uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_DmDtcAktiveMeldung_ReadData(Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_DmDtcAktiveMeldung_ReadDataLength(uint16 *DataLength)
{
  return Rte_Call_DataServices_DcmDspData_DmDtcAktiveMeldung_ReadDataLength(DataLength);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_DmIsDtcActiveResponse_ConditionCheckRead(Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_DmIsDtcActiveResponse_ConditionCheckRead(ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_DmIsDtcActiveResponse_ReadData(uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_DmIsDtcActiveResponse_ReadData(Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_DmIsDtcActiveResponse_ReadDataLength(uint16 *DataLength)
{
  return Rte_Call_DataServices_DcmDspData_DmIsDtcActiveResponse_ReadDataLength(DataLength);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_EcuSerialNumber_ReadData(uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_EcuSerialNumber_ReadData(Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_EnergySavingState_ConditionCheckRead(Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_EnergySavingState_ConditionCheckRead(ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_EnergySavingState_ReadData(uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_EnergySavingState_ReadData(Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_EthGetNumberOfPorts_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_EthGetNumberOfPorts_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_EthGetNumberOfPorts_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_EthGetNumberOfPorts_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_EthPhyLinkState_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_EthPhyLinkState_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_EthPhyLinkState_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_EthPhyLinkState_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_EthSignalQuality_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_EthSignalQuality_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_EthSignalQuality_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_EthSignalQuality_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_ExtendedEnergySavingState_ConditionCheckRead(Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_ExtendedEnergySavingState_ConditionCheckRead(ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_ExtendedEnergySavingState_ReadData(uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_ExtendedEnergySavingState_ReadData(Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_FlashTimingParameter_ReadData(uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_FlashTimingParameter_ReadData(Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_HddDownloadStatus_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_HddDownloadStatus_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_HddDownloadStatus_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_HddDownloadStatus_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_HddDownloadTimeToCompletion_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_HddDownloadTimeToCompletion_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_HddDownloadTimeToCompletion_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_HddDownloadTimeToCompletion_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_Herstelldatum_ReadData(uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_Herstelldatum_ReadData(Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_IndivDataTable_ReadData(uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_IndivDataTable_ReadData(Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_ListManipulationApplicationData_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_ListManipulationApplicationData_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_ListManipulationApplicationData_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_ListManipulationApplicationData_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_ListManipulationGeneral_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_ListManipulationGeneral_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_ListManipulationGeneral_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_ListManipulationGeneral_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_ListManipulationSecureBoot_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_ListManipulationSecureBoot_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_ListManipulationSecureBoot_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_ListManipulationSecureBoot_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_ListManipulationSecurityArtifact_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_ListManipulationSecurityArtifact_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_ListManipulationSecurityArtifact_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_ListManipulationSecurityArtifact_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_ListManipulationSw_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_ListManipulationSw_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_ListManipulationSw_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_ListManipulationSw_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_MileKmEeprom_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_MileKmEeprom_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_MileKmEeprom_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_MileKmEeprom_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_PiaProfile0_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_PiaProfile0_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_PiaProfile0_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_PiaProfile0_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_PiaProfile0_ReadDataLength(Dcm_OpStatusType OpStatus, uint16 *DataLength)
{
  return Rte_Call_DataServices_DcmDspData_PiaProfile0_ReadDataLength(OpStatus, DataLength);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_PiaProfile0_WriteData(const uint8 *Data, uint16 DataLength, Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_PiaProfile0_WriteData(Data, DataLength, OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_PiaProfile1_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_PiaProfile1_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_PiaProfile1_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_PiaProfile1_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_PiaProfile1_ReadDataLength(Dcm_OpStatusType OpStatus, uint16 *DataLength)
{
  return Rte_Call_DataServices_DcmDspData_PiaProfile1_ReadDataLength(OpStatus, DataLength);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_PiaProfile1_WriteData(const uint8 *Data, uint16 DataLength, Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_PiaProfile1_WriteData(Data, DataLength, OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_PiaProfile2_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_PiaProfile2_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_PiaProfile2_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_PiaProfile2_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_PiaProfile2_ReadDataLength(Dcm_OpStatusType OpStatus, uint16 *DataLength)
{
  return Rte_Call_DataServices_DcmDspData_PiaProfile2_ReadDataLength(OpStatus, DataLength);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_PiaProfile2_WriteData(const uint8 *Data, uint16 DataLength, Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_PiaProfile2_WriteData(Data, DataLength, OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_PiaProfileA_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_PiaProfileA_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_PiaProfileA_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_PiaProfileA_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_PiaProfileA_ReadDataLength(Dcm_OpStatusType OpStatus, uint16 *DataLength)
{
  return Rte_Call_DataServices_DcmDspData_PiaProfileA_ReadDataLength(OpStatus, DataLength);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_PiaProfileA_WriteData(const uint8 *Data, uint16 DataLength, Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_PiaProfileA_WriteData(Data, DataLength, OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_ProgrammingCounter_ReadData(uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_ProgrammingCounter_ReadData(Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_ProgrammingCounterMaxValue_ReadData(uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_ProgrammingCounterMaxValue_ReadData(Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_ReadActiveSessionState_ConditionCheckRead(Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_ReadActiveSessionState_ConditionCheckRead(ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_ReadActiveSessionState_ReadData(uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_ReadActiveSessionState_ReadData(Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_Readhwmodificationindex_ReadData(uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_Readhwmodificationindex_ReadData(Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_Sekundaererfehlerspeicher_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_Sekundaererfehlerspeicher_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_Sekundaererfehlerspeicher_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_Sekundaererfehlerspeicher_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SensorenAnzahlLesen_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_SensorenAnzahlLesen_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SensorenAnzahlLesen_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_SensorenAnzahlLesen_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SgbdIdx_ReadData(uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_SgbdIdx_ReadData(Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_StatusDmFssMaster_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_StatusDmFssMaster_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_StatusDmFssMaster_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_StatusDmFssMaster_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_StatusSystime_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_StatusSystime_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_StatusSystime_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_StatusSystime_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkAktuell_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_SvkAktuell_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkAktuell_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_SvkAktuell_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkAktuell_ReadDataLength(Dcm_OpStatusType OpStatus, uint16 *DataLength)
{
  return Rte_Call_DataServices_DcmDspData_SvkAktuell_ReadDataLength(OpStatus, DataLength);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup01_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup01_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup01_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup01_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup02_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup02_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup02_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup02_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup03_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup03_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup03_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup03_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup04_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup04_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup04_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup04_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup05_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup05_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup05_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup05_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup06_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup06_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup06_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup06_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup07_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup07_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup07_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup07_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup08_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup08_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup08_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup08_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup09_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup09_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup09_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup09_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup10_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup10_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup10_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup10_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup11_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup11_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup11_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup11_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup12_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup12_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup12_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup12_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup13_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup13_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup13_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup13_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup14_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup14_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup14_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup14_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup15_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup15_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup15_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup15_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup16_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup16_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup16_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup16_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup17_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup17_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup17_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup17_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup18_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup18_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup18_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup18_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup19_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup19_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup19_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup19_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup20_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup20_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup20_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup20_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup21_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup21_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup21_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup21_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup22_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup22_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup22_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup22_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup23_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup23_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup23_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup23_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup24_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup24_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup24_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup24_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup25_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup25_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup25_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup25_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup26_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup26_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup26_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup26_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup27_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup27_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup27_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup27_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup28_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup28_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup28_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup28_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup29_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup29_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup29_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup29_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup30_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup30_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup30_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup30_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup31_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup31_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup31_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup31_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup32_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup32_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup32_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup32_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup33_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup33_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup33_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup33_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup34_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup34_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup34_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup34_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup35_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup35_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup35_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup35_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup36_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup36_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup36_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup36_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup37_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup37_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup37_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup37_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup38_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup38_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup38_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup38_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup39_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup39_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup39_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup39_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup40_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup40_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup40_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup40_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup41_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup41_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup41_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup41_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup42_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup42_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup42_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup42_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup43_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup43_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup43_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup43_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup44_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup44_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup44_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup44_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup45_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup45_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup45_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup45_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup46_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup46_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup46_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup46_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup47_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup47_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup47_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup47_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup48_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup48_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup48_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup48_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup49_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup49_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup49_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup49_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup50_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup50_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup50_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup50_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup51_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup51_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup51_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup51_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup52_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup52_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup52_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup52_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup53_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup53_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup53_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup53_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup54_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup54_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup54_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup54_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup55_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup55_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup55_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup55_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup56_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup56_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup56_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup56_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup57_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup57_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup57_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup57_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup58_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup58_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup58_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup58_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup59_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup59_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup59_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup59_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup60_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup60_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup60_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup60_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup61_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup61_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkBackup61_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_SvkBackup61_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkSysSupplier_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_SvkSysSupplier_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkSysSupplier_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_SvkSysSupplier_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkWerk_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_SvkWerk_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SvkWerk_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_SvkWerk_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SwfkDeleteSupported_ReadData(uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_SwfkDeleteSupported_ReadData(Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SystemSupplierIdentifier_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_SystemSupplierIdentifier_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_SystemSupplierIdentifier_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_SystemSupplierIdentifier_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_Systemzeit_ReadData(uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_Systemzeit_ReadData(Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_Vin_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_Vin_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_Vin_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_Vin_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_ZgwZertifikat_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_DataServices_DcmDspData_ZgwZertifikat_ConditionCheckRead(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_DataServices_DcmDspData_ZgwZertifikat_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
{
  return Rte_Call_DataServices_DcmDspData_ZgwZertifikat_ReadData(OpStatus, Data);
}
Std_ReturnType TSC_Dcm_Rte_Call_RoutineServices_DcmDspRoutine_AblageSystemkontext_Start(uint8 DcmDspStartRoutineInSignal_Function, Dcm_OpStatusType OpStatus, uint8 *DcmDspStartRoutineOutSignal_StatFunction, uint8 *DcmDspStartRoutineOutSignal_StatDmLockState, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_RoutineServices_DcmDspRoutine_AblageSystemkontext_Start(DcmDspStartRoutineInSignal_Function, OpStatus, DcmDspStartRoutineOutSignal_StatFunction, DcmDspStartRoutineOutSignal_StatDmLockState, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_RoutineServices_DcmDspRoutine_ActivateZgwApplicationmode_Start(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_RoutineServices_DcmDspRoutine_ActivateZgwApplicationmode_Start(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_RoutineServices_DcmDspRoutine_ActivateZgwCodingmode_Start(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_RoutineServices_DcmDspRoutine_ActivateZgwCodingmode_Start(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_RoutineServices_DcmDspRoutine_ActivateZgwFlashmode_Start(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_RoutineServices_DcmDspRoutine_ActivateZgwFlashmode_Start(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_RoutineServices_DcmDspRoutine_CheckCodingSignature_Start(Dcm_OpStatusType OpStatus, uint8 *DcmDspStartRoutineOutSignal_DataOutX, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_RoutineServices_DcmDspRoutine_CheckCodingSignature_Start(OpStatus, DcmDspStartRoutineOutSignal_DataOutX, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_RoutineServices_DcmDspRoutine_CheckHttpConnection_Start(uint32 DcmDspStartRoutineInSignal_TimeOutTime, uint8 DcmDspStartRoutineInSignal_ServerUrl, Dcm_OpStatusType OpStatus, uint8 *DcmDspStartRoutineOutSignal_HttpConnectionStatus, uint16 *DcmDspStartRoutineOutSignal_HttpResponseCode, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_RoutineServices_DcmDspRoutine_CheckHttpConnection_Start(DcmDspStartRoutineInSignal_TimeOutTime, DcmDspStartRoutineInSignal_ServerUrl, OpStatus, DcmDspStartRoutineOutSignal_HttpConnectionStatus, DcmDspStartRoutineOutSignal_HttpResponseCode, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_RoutineServices_DcmDspRoutine_ControlExtendedEnergySavingState_Start(uint8 DcmDspStartRoutineInSignal_ExtendedOperatingMode, Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_RoutineServices_DcmDspRoutine_ControlExtendedEnergySavingState_Start(DcmDspStartRoutineInSignal_ExtendedOperatingMode, OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_RoutineServices_DcmDspRoutine_DiagCommLoopback_Start(const uint8 *DcmDspStartRoutineInSignal_dataIn, Dcm_OpStatusType OpStatus, uint8 *DcmDspStartRoutineOutSignal_dataOut, uint16 *DataLength, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_RoutineServices_DcmDspRoutine_DiagCommLoopback_Start(DcmDspStartRoutineInSignal_dataIn, OpStatus, DcmDspStartRoutineOutSignal_dataOut, DataLength, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_RoutineServices_DcmDspRoutine_DmClientTriggerDtcEntry_Start(uint8 DcmDspStartRoutineInSignal_DTCType, Dcm_OpStatusType OpStatus, uint8 *DcmDspStartRoutineOutSignal_DTCTypeOut, uint8 *DcmDspStartRoutineOutSignal_DTCByte1, uint8 *DcmDspStartRoutineOutSignal_DTCByte2, uint8 *DcmDspStartRoutineOutSignal_DTCByte3, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_RoutineServices_DcmDspRoutine_DmClientTriggerDtcEntry_Start(DcmDspStartRoutineInSignal_DTCType, OpStatus, DcmDspStartRoutineOutSignal_DTCTypeOut, DcmDspStartRoutineOutSignal_DTCByte1, DcmDspStartRoutineOutSignal_DTCByte2, DcmDspStartRoutineOutSignal_DTCByte3, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_RoutineServices_DcmDspRoutine_Energiesparmode_Start(uint8 DcmDspStartRoutineInSignal_OperatingMode, Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_RoutineServices_DcmDspRoutine_Energiesparmode_Start(DcmDspStartRoutineInSignal_OperatingMode, OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_RoutineServices_DcmDspRoutine_EraseIdrData_Start(Dcm_OpStatusType OpStatus, uint8 *DcmDspStartRoutineOutSignal_routineResult, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_RoutineServices_DcmDspRoutine_EraseIdrData_Start(OpStatus, DcmDspStartRoutineOutSignal_routineResult, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_RoutineServices_DcmDspRoutine_EthArlTable_Start(uint8 DcmDspStartRoutineInSignal_PortIndex, Dcm_OpStatusType OpStatus, uint8 *DcmDspStartRoutineOutSignal_StatNumArlVlanIdEntriesWert, uint8 *DcmDspStartRoutineOutSignal_StatArlVlanIdEntries, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_RoutineServices_DcmDspRoutine_EthArlTable_Start(DcmDspStartRoutineInSignal_PortIndex, OpStatus, DcmDspStartRoutineOutSignal_StatNumArlVlanIdEntriesWert, DcmDspStartRoutineOutSignal_StatArlVlanIdEntries, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_RoutineServices_DcmDspRoutine_EthArpTable_Start(uint8 DcmDspStartRoutineInSignal_IpVersion, uint8 DcmDspStartRoutineInSignal_ArpTableForIpAddress, Dcm_OpStatusType OpStatus, uint8 *DcmDspStartRoutineOutSignal_StatNumArpEntriesWert, uint8 *DcmDspStartRoutineOutSignal_StatArpIpMacEntries, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_RoutineServices_DcmDspRoutine_EthArpTable_Start(DcmDspStartRoutineInSignal_IpVersion, DcmDspStartRoutineInSignal_ArpTableForIpAddress, OpStatus, DcmDspStartRoutineOutSignal_StatNumArpEntriesWert, DcmDspStartRoutineOutSignal_StatArpIpMacEntries, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_RoutineServices_DcmDspRoutine_EthEnableTestMode_Start(uint8 DcmDspStartRoutineInSignal_PortIndex, uint8 DcmDspStartRoutineInSignal_TestDuration, uint8 DcmDspStartRoutineInSignal_TestModeId, Dcm_OpStatusType OpStatus, uint8 *DcmDspStartRoutineOutSignal_StatPhyTestMode, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_RoutineServices_DcmDspRoutine_EthEnableTestMode_Start(DcmDspStartRoutineInSignal_PortIndex, DcmDspStartRoutineInSignal_TestDuration, DcmDspStartRoutineInSignal_TestModeId, OpStatus, DcmDspStartRoutineOutSignal_StatPhyTestMode, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_RoutineServices_DcmDspRoutine_EthExtendedArlTable_Start(Dcm_OpStatusType OpStatus, uint8 *DcmDspStartRoutineOutSignal_StatNumArlVlanIdEntriesWert, uint8 *DcmDspStartRoutineOutSignal_StatExtendedArlVlanIdEntries, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_RoutineServices_DcmDspRoutine_EthExtendedArlTable_Start(OpStatus, DcmDspStartRoutineOutSignal_StatNumArlVlanIdEntriesWert, DcmDspStartRoutineOutSignal_StatExtendedArlVlanIdEntries, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_RoutineServices_DcmDspRoutine_EthGetDhcpStatus_Start(uint8 DcmDspStartRoutineInSignal_NwInterfaceIndex, Dcm_OpStatusType OpStatus, uint8 *DcmDspStartRoutineOutSignal_StatDhcpClientState, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_RoutineServices_DcmDspRoutine_EthGetDhcpStatus_Start(DcmDspStartRoutineInSignal_NwInterfaceIndex, OpStatus, DcmDspStartRoutineOutSignal_StatDhcpClientState, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_RoutineServices_DcmDspRoutine_EthGetEthernetSwitches_Start(Dcm_OpStatusType OpStatus, uint8 *DcmDspStartRoutineOutSignal_StatNumEthSwitchEntriesWert, uint8 *DcmDspStartRoutineOutSignal_StatEthSwitchEntries, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_RoutineServices_DcmDspRoutine_EthGetEthernetSwitches_Start(OpStatus, DcmDspStartRoutineOutSignal_StatNumEthSwitchEntriesWert, DcmDspStartRoutineOutSignal_StatEthSwitchEntries, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_RoutineServices_DcmDspRoutine_EthGetPortTxRxStats_Start(uint8 DcmDspStartRoutineInSignal_PortIndex, Dcm_OpStatusType OpStatus, uint32 *DcmDspStartRoutineOutSignal_StatNumberOfTransmittedPacketsWert, uint32 *DcmDspStartRoutineOutSignal_StatBytesSentWert, uint32 *DcmDspStartRoutineOutSignal_StatNumberOfDroppedTxPacketsWert, uint32 *DcmDspStartRoutineOutSignal_StatNumberOfReceivedPacketsWert, uint32 *DcmDspStartRoutineOutSignal_StatStatBytesReceivedWert, uint32 *DcmDspStartRoutineOutSignal_StatNumberOfDroppedRxPacketsWert, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_RoutineServices_DcmDspRoutine_EthGetPortTxRxStats_Start(DcmDspStartRoutineInSignal_PortIndex, OpStatus, DcmDspStartRoutineOutSignal_StatNumberOfTransmittedPacketsWert, DcmDspStartRoutineOutSignal_StatBytesSentWert, DcmDspStartRoutineOutSignal_StatNumberOfDroppedTxPacketsWert, DcmDspStartRoutineOutSignal_StatNumberOfReceivedPacketsWert, DcmDspStartRoutineOutSignal_StatStatBytesReceivedWert, DcmDspStartRoutineOutSignal_StatNumberOfDroppedRxPacketsWert, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_RoutineServices_DcmDspRoutine_EthGetSwitchVlanConfiguration_Start(uint8 DcmDspStartRoutineInSignal_SwitchIndex, Dcm_OpStatusType OpStatus, uint8 *DcmDspStartRoutineOutSignal_StatNumVlanConfigurationEntriesWert, uint8 *DcmDspStartRoutineOutSignal_StatVlanConfigEntries, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_RoutineServices_DcmDspRoutine_EthGetSwitchVlanConfiguration_Start(DcmDspStartRoutineInSignal_SwitchIndex, OpStatus, DcmDspStartRoutineOutSignal_StatNumVlanConfigurationEntriesWert, DcmDspStartRoutineOutSignal_StatVlanConfigEntries, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_RoutineServices_DcmDspRoutine_EthIpConfiguration_Start(uint8 DcmDspStartRoutineInSignal_InternalExternalAddress, uint8 DcmDspStartRoutineInSignal_TriggerGratuitousArp, Dcm_OpStatusType OpStatus, uint8 *DcmDspStartRoutineOutSignal_EcuType, uint8 *DcmDspStartRoutineOutSignal_StatEthIpConfiguration, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_RoutineServices_DcmDspRoutine_EthIpConfiguration_Start(DcmDspStartRoutineInSignal_InternalExternalAddress, DcmDspStartRoutineInSignal_TriggerGratuitousArp, OpStatus, DcmDspStartRoutineOutSignal_EcuType, DcmDspStartRoutineOutSignal_StatEthIpConfiguration, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_RoutineServices_DcmDspRoutine_EthPhyIdentifier_Start(uint8 DcmDspStartRoutineInSignal_PortIndex, Dcm_OpStatusType OpStatus, uint8 *DcmDspStartRoutineOutSignal_StatOuiData, uint16 *DataLength, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_RoutineServices_DcmDspRoutine_EthPhyIdentifier_Start(DcmDspStartRoutineInSignal_PortIndex, OpStatus, DcmDspStartRoutineOutSignal_StatOuiData, DataLength, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_RoutineServices_DcmDspRoutine_EthPhySwitchEngineReset_Start(uint8 DcmDspStartRoutineInSignal_PortIndex, uint8 DcmDspStartRoutineInSignal_StopPhyForT, Dcm_OpStatusType OpStatus, uint8 *DcmDspStartRoutineOutSignal_StatPhyReset, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_RoutineServices_DcmDspRoutine_EthPhySwitchEngineReset_Start(DcmDspStartRoutineInSignal_PortIndex, DcmDspStartRoutineInSignal_StopPhyForT, OpStatus, DcmDspStartRoutineOutSignal_StatPhyReset, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_RoutineServices_DcmDspRoutine_EthReadPhyRegister_Start(uint8 DcmDspStartRoutineInSignal_RegReadRange, uint8 DcmDspStartRoutineInSignal_Data, Dcm_OpStatusType OpStatus, uint8 *DcmDspStartRoutineOutSignal_StatRegReadOk, uint8 *DcmDspStartRoutineOutSignal_StatRegReadData, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_RoutineServices_DcmDspRoutine_EthReadPhyRegister_Start(DcmDspStartRoutineInSignal_RegReadRange, DcmDspStartRoutineInSignal_Data, OpStatus, DcmDspStartRoutineOutSignal_StatRegReadOk, DcmDspStartRoutineOutSignal_StatRegReadData, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_RoutineServices_DcmDspRoutine_EthResetPortTxRxStats_Start(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_RoutineServices_DcmDspRoutine_EthResetPortTxRxStats_Start(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_RoutineServices_DcmDspRoutine_EthWritePhyRegister_Start(uint8 DcmDspStartRoutineInSignal_RegWriteProtect, uint8 DcmDspStartRoutineInSignal_Data, Dcm_OpStatusType OpStatus, uint8 *DcmDspStartRoutineOutSignal_StatRegWriteOk, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_RoutineServices_DcmDspRoutine_EthWritePhyRegister_Start(DcmDspStartRoutineInSignal_RegWriteProtect, DcmDspStartRoutineInSignal_Data, OpStatus, DcmDspStartRoutineOutSignal_StatRegWriteOk, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_RoutineServices_DcmDspRoutine_ExternalHsfz_Start(uint8 DcmDspStartRoutineInSignal_Activation, Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_RoutineServices_DcmDspRoutine_ExternalHsfz_Start(DcmDspStartRoutineInSignal_Activation, OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_RoutineServices_DcmDspRoutine_FehlerspeicherEndeWerksablauf_RequestResults(Dcm_OpStatusType OpStatus, uint8 *DcmDspRequestRoutineResultsOutSignal_StatFsEndeWabl, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_RoutineServices_DcmDspRoutine_FehlerspeicherEndeWerksablauf_RequestResults(OpStatus, DcmDspRequestRoutineResultsOutSignal_StatFsEndeWabl, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_RoutineServices_DcmDspRoutine_FehlerspeicherEndeWerksablauf_Start(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_RoutineServices_DcmDspRoutine_FehlerspeicherEndeWerksablauf_Start(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_RoutineServices_DcmDspRoutine_FsMsmN101AbfrageFzgsec_Start(uint8 DcmDspStartRoutineInSignal_FunktionsId, Dcm_OpStatusType OpStatus, uint8 *DcmDspStartRoutineOutSignal_Res1, uint8 *DcmDspStartRoutineOutSignal_Res2, uint8 *DcmDspStartRoutineOutSignal_State, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_RoutineServices_DcmDspRoutine_FsMsmN101AbfrageFzgsec_Start(DcmDspStartRoutineInSignal_FunktionsId, OpStatus, DcmDspStartRoutineOutSignal_Res1, DcmDspStartRoutineOutSignal_Res2, DcmDspStartRoutineOutSignal_State, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_RoutineServices_DcmDspRoutine_FsMsmN102_Start(uint8 DcmDspStartRoutineInSignal_FunktionsId, Dcm_OpStatusType OpStatus, uint8 *DcmDspStartRoutineOutSignal_Res1, uint8 *DcmDspStartRoutineOutSignal_Res2, uint8 *DcmDspStartRoutineOutSignal_State, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_RoutineServices_DcmDspRoutine_FsMsmN102_Start(DcmDspStartRoutineInSignal_FunktionsId, OpStatus, DcmDspStartRoutineOutSignal_Res1, DcmDspStartRoutineOutSignal_Res2, DcmDspStartRoutineOutSignal_State, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_RoutineServices_DcmDspRoutine_FsMsmN111_Start(uint8 DcmDspStartRoutineInSignal_ParameterId, uint8 DcmDspStartRoutineInSignal_FscsmId, Dcm_OpStatusType OpStatus, uint8 *DcmDspStartRoutineOutSignal_Res1, uint8 *DcmDspStartRoutineOutSignal_Res2, uint8 *DcmDspStartRoutineOutSignal_Len, uint8 *DcmDspStartRoutineOutSignal_Data, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_RoutineServices_DcmDspRoutine_FsMsmN111_Start(DcmDspStartRoutineInSignal_ParameterId, DcmDspStartRoutineInSignal_FscsmId, OpStatus, DcmDspStartRoutineOutSignal_Res1, DcmDspStartRoutineOutSignal_Res2, DcmDspStartRoutineOutSignal_Len, DcmDspStartRoutineOutSignal_Data, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_RoutineServices_DcmDspRoutine_FsMsmN220X_Start(uint8 DcmDspStartRoutineInSignal_Par3Req, uint8 DcmDspStartRoutineInSignal_Par4Req, Dcm_OpStatusType OpStatus, uint8 *DcmDspStartRoutineOutSignal_Par3Resp, uint8 *DcmDspStartRoutineOutSignal_Par4Resp, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_RoutineServices_DcmDspRoutine_FsMsmN220X_Start(DcmDspStartRoutineInSignal_Par3Req, DcmDspStartRoutineInSignal_Par4Req, OpStatus, DcmDspStartRoutineOutSignal_Par3Resp, DcmDspStartRoutineOutSignal_Par4Resp, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_RoutineServices_DcmDspRoutine_FsMsmN300XTeleservice_RequestResults(Dcm_OpStatusType OpStatus, uint8 *DcmDspRequestRoutineResultsOutSignal_Par4Resp, uint8 *DcmDspRequestRoutineResultsOutSignal_IdResp, uint8 *DcmDspRequestRoutineResultsOutSignal_Par6Resp, uint16 *DcmDspRequestRoutineResultsOutSignal_Len, uint8 *DcmDspRequestRoutineResultsOutSignal_Zufallszahl, uint16 *DataLength, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_RoutineServices_DcmDspRoutine_FsMsmN300XTeleservice_RequestResults(OpStatus, DcmDspRequestRoutineResultsOutSignal_Par4Resp, DcmDspRequestRoutineResultsOutSignal_IdResp, DcmDspRequestRoutineResultsOutSignal_Par6Resp, DcmDspRequestRoutineResultsOutSignal_Len, DcmDspRequestRoutineResultsOutSignal_Zufallszahl, DataLength, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_RoutineServices_DcmDspRoutine_FsMsmN300XTeleservice_Start(uint8 DcmDspStartRoutineInSignal_Par4Req, uint8 DcmDspStartRoutineInSignal_Id, uint8 DcmDspStartRoutineInSignal_Par6Req, uint8 DcmDspStartRoutineInSignal_Par7Req, uint8 DcmDspStartRoutineInSignal_Par8Req, Dcm_OpStatusType OpStatus, uint8 *DcmDspStartRoutineOutSignal_Par4Resp, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_RoutineServices_DcmDspRoutine_FsMsmN300XTeleservice_Start(DcmDspStartRoutineInSignal_Par4Req, DcmDspStartRoutineInSignal_Id, DcmDspStartRoutineInSignal_Par6Req, DcmDspStartRoutineInSignal_Par7Req, DcmDspStartRoutineInSignal_Par8Req, OpStatus, DcmDspStartRoutineOutSignal_Par4Resp, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_RoutineServices_DcmDspRoutine_FsN251_Start(uint8 DcmDspStartRoutineInSignal_Len, uint8 DcmDspStartRoutineInSignal_Adr, Dcm_OpStatusType OpStatus, uint8 *DcmDspStartRoutineOutSignal_Res1, uint8 *DcmDspStartRoutineOutSignal_Res2, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_RoutineServices_DcmDspRoutine_FsN251_Start(DcmDspStartRoutineInSignal_Len, DcmDspStartRoutineInSignal_Adr, OpStatus, DcmDspStartRoutineOutSignal_Res1, DcmDspStartRoutineOutSignal_Res2, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_RoutineServices_DcmDspRoutine_FsN252_Start(const uint8 *DcmDspStartRoutineInSignal_DataToCompare, Dcm_OpStatusType OpStatus, uint8 *DcmDspStartRoutineOutSignal_Result1, uint8 *DcmDspStartRoutineOutSignal_Result2, uint16 DataLength, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_RoutineServices_DcmDspRoutine_FsN252_Start(DcmDspStartRoutineInSignal_DataToCompare, OpStatus, DcmDspStartRoutineOutSignal_Result1, DcmDspStartRoutineOutSignal_Result2, DataLength, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_RoutineServices_DcmDspRoutine_FsN30X_RequestResults(Dcm_OpStatusType OpStatus, uint8 *DcmDspRequestRoutineResultsOutSignal_Par4Resp, uint8 *DcmDspRequestRoutineResultsOutSignal_R1R2R3, uint16 *DataLength, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_RoutineServices_DcmDspRoutine_FsN30X_RequestResults(OpStatus, DcmDspRequestRoutineResultsOutSignal_Par4Resp, DcmDspRequestRoutineResultsOutSignal_R1R2R3, DataLength, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_RoutineServices_DcmDspRoutine_FsN30X_Start(uint8 DcmDspStartRoutineInSignal_Par4Req, uint8 DcmDspStartRoutineInSignal_Id, uint8 DcmDspStartRoutineInSignal_Par6Req, uint16 DcmDspStartRoutineInSignal_Len, uint8 DcmDspStartRoutineInSignal_Enc, Dcm_OpStatusType OpStatus, uint8 *DcmDspStartRoutineOutSignal_Par4Resp, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_RoutineServices_DcmDspRoutine_FsN30X_Start(DcmDspStartRoutineInSignal_Par4Req, DcmDspStartRoutineInSignal_Id, DcmDspStartRoutineInSignal_Par6Req, DcmDspStartRoutineInSignal_Len, DcmDspStartRoutineInSignal_Enc, OpStatus, DcmDspStartRoutineOutSignal_Par4Resp, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_RoutineServices_DcmDspRoutine_FsN31034_Start(uint8 DcmDspStartRoutineInSignal_Par4Req, uint8 DcmDspStartRoutineInSignal_Par5, uint16 DcmDspStartRoutineInSignal_Len, uint8 DcmDspStartRoutineInSignal_Data, Dcm_OpStatusType OpStatus, uint8 *DcmDspStartRoutineOutSignal_Par4Resp, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_RoutineServices_DcmDspRoutine_FsN31034_Start(DcmDspStartRoutineInSignal_Par4Req, DcmDspStartRoutineInSignal_Par5, DcmDspStartRoutineInSignal_Len, DcmDspStartRoutineInSignal_Data, OpStatus, DcmDspStartRoutineOutSignal_Par4Resp, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_RoutineServices_DcmDspRoutine_FsN5005_RequestResults(Dcm_OpStatusType OpStatus, uint8 *DcmDspRequestRoutineResultsOutSignal_Res1, uint8 *DcmDspRequestRoutineResultsOutSignal_Res2, uint8 *DcmDspRequestRoutineResultsOutSignal_Len, uint8 *DcmDspRequestRoutineResultsOutSignal_SgMitFehlern, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_RoutineServices_DcmDspRoutine_FsN5005_RequestResults(OpStatus, DcmDspRequestRoutineResultsOutSignal_Res1, DcmDspRequestRoutineResultsOutSignal_Res2, DcmDspRequestRoutineResultsOutSignal_Len, DcmDspRequestRoutineResultsOutSignal_SgMitFehlern, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_RoutineServices_DcmDspRoutine_FsN5005_Start(uint8 DcmDspStartRoutineInSignal_Len, uint8 DcmDspStartRoutineInSignal_Adr, Dcm_OpStatusType OpStatus, uint8 *DcmDspStartRoutineOutSignal_Res1, uint8 *DcmDspStartRoutineOutSignal_Res2, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_RoutineServices_DcmDspRoutine_FsN5005_Start(DcmDspStartRoutineInSignal_Len, DcmDspStartRoutineInSignal_Adr, OpStatus, DcmDspStartRoutineOutSignal_Res1, DcmDspStartRoutineOutSignal_Res2, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_RoutineServices_DcmDspRoutine_FsN5012_RequestResults(Dcm_OpStatusType OpStatus, uint8 *DcmDspRequestRoutineResultsOutSignal_Result1, uint8 *DcmDspRequestRoutineResultsOutSignal_Result2, uint8 *DcmDspRequestRoutineResultsOutSignal_RandomNumberFscsm, uint16 *DataLength, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_RoutineServices_DcmDspRoutine_FsN5012_RequestResults(OpStatus, DcmDspRequestRoutineResultsOutSignal_Result1, DcmDspRequestRoutineResultsOutSignal_Result2, DcmDspRequestRoutineResultsOutSignal_RandomNumberFscsm, DataLength, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_RoutineServices_DcmDspRoutine_FsN5012_Start(Dcm_OpStatusType OpStatus, uint8 *DcmDspStartRoutineOutSignal_Result1, uint8 *DcmDspStartRoutineOutSignal_Result2, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_RoutineServices_DcmDspRoutine_FsN5012_Start(OpStatus, DcmDspStartRoutineOutSignal_Result1, DcmDspStartRoutineOutSignal_Result2, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_RoutineServices_DcmDspRoutine_FsN5034_RequestResults(Dcm_OpStatusType OpStatus, uint8 *DcmDspRequestRoutineResultsOutSignal_Result1, uint8 *DcmDspRequestRoutineResultsOutSignal_Result2, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_RoutineServices_DcmDspRoutine_FsN5034_RequestResults(OpStatus, DcmDspRequestRoutineResultsOutSignal_Result1, DcmDspRequestRoutineResultsOutSignal_Result2, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_RoutineServices_DcmDspRoutine_FsN5034_Start(const uint8 *DcmDspStartRoutineInSignal_Data, Dcm_OpStatusType OpStatus, uint8 *DcmDspStartRoutineOutSignal_Result1, uint8 *DcmDspStartRoutineOutSignal_Result2, uint16 DataLength, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_RoutineServices_DcmDspRoutine_FsN5034_Start(DcmDspStartRoutineInSignal_Data, OpStatus, DcmDspStartRoutineOutSignal_Result1, DcmDspStartRoutineOutSignal_Result2, DataLength, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_RoutineServices_DcmDspRoutine_FsN70X_RequestResults(Dcm_OpStatusType OpStatus, uint8 *DcmDspRequestRoutineResultsOutSignal_Par4Resp, uint8 *DcmDspRequestRoutineResultsOutSignal_Result, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_RoutineServices_DcmDspRoutine_FsN70X_RequestResults(OpStatus, DcmDspRequestRoutineResultsOutSignal_Par4Resp, DcmDspRequestRoutineResultsOutSignal_Result, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_RoutineServices_DcmDspRoutine_FsN70X_Start(uint8 DcmDspStartRoutineInSignal_Par4Req, uint8 DcmDspStartRoutineInSignal_Adr, Dcm_OpStatusType OpStatus, uint8 *DcmDspStartRoutineOutSignal_Par4Resp, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_RoutineServices_DcmDspRoutine_FsN70X_Start(DcmDspStartRoutineInSignal_Par4Req, DcmDspStartRoutineInSignal_Adr, OpStatus, DcmDspStartRoutineOutSignal_Par4Resp, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_RoutineServices_DcmDspRoutine_FsN7112_RequestResults(Dcm_OpStatusType OpStatus, uint8 *DcmDspRequestRoutineResultsOutSignal_Result1, uint8 *DcmDspRequestRoutineResultsOutSignal_Result2, uint8 *DcmDspRequestRoutineResultsOutSignal_ResultResponse, uint16 *DataLength, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_RoutineServices_DcmDspRoutine_FsN7112_RequestResults(OpStatus, DcmDspRequestRoutineResultsOutSignal_Result1, DcmDspRequestRoutineResultsOutSignal_Result2, DcmDspRequestRoutineResultsOutSignal_ResultResponse, DataLength, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_RoutineServices_DcmDspRoutine_FsN7112_Start(const uint8 *DcmDspStartRoutineInSignal_Challenge, Dcm_OpStatusType OpStatus, uint8 *DcmDspStartRoutineOutSignal_Result1, uint8 *DcmDspStartRoutineOutSignal_Result2, uint16 DataLength, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_RoutineServices_DcmDspRoutine_FsN7112_Start(DcmDspStartRoutineInSignal_Challenge, OpStatus, DcmDspStartRoutineOutSignal_Result1, DcmDspStartRoutineOutSignal_Result2, DataLength, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_RoutineServices_DcmDspRoutine_GetActualConfig_Start(Dcm_OpStatusType OpStatus, uint8 *DcmDspStartRoutineOutSignal_StatIdsWert, uint8 *DcmDspStartRoutineOutSignal_EcuAddress, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_RoutineServices_DcmDspRoutine_GetActualConfig_Start(OpStatus, DcmDspStartRoutineOutSignal_StatIdsWert, DcmDspStartRoutineOutSignal_EcuAddress, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_RoutineServices_DcmDspRoutine_IndividualDatenRettung_Start(uint8 DcmDspStartRoutineInSignal, Dcm_OpStatusType OpStatus, uint8 *DcmDspStartRoutineOutSignal, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_RoutineServices_DcmDspRoutine_IndividualDatenRettung_Start(DcmDspStartRoutineInSignal, OpStatus, DcmDspStartRoutineOutSignal, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_RoutineServices_DcmDspRoutine_InitLinBus_Start(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_RoutineServices_DcmDspRoutine_InitLinBus_Start(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_RoutineServices_DcmDspRoutine_InitLinSlave_Start(Dcm_OpStatusType OpStatus, uint8 *DcmDspStartRoutineOutSignal_Status, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_RoutineServices_DcmDspRoutine_InitLinSlave_Start(OpStatus, DcmDspStartRoutineOutSignal_Status, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_RoutineServices_DcmDspRoutine_IsLoeschen_Start(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_RoutineServices_DcmDspRoutine_IsLoeschen_Start(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_RoutineServices_DcmDspRoutine_RamDatenSchreiben_RequestResults(Dcm_OpStatusType OpStatus, uint8 *DcmDspRequestRoutineResultsOutSignal_StatRamDatenSchreiben, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_RoutineServices_DcmDspRoutine_RamDatenSchreiben_RequestResults(OpStatus, DcmDspRequestRoutineResultsOutSignal_StatRamDatenSchreiben, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_RoutineServices_DcmDspRoutine_RamDatenSchreiben_Start(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_RoutineServices_DcmDspRoutine_RamDatenSchreiben_Start(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_RoutineServices_DcmDspRoutine_RcCpp_Start(uint8 DcmDspStartRoutineInSignal_RcCppRsr, Dcm_OpStatusType OpStatus, uint16 *DcmDspStartRoutineOutSignal_StatDuration, uint8 *DcmDspStartRoutineOutSignal_StatApprovalChargingState, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_RoutineServices_DcmDspRoutine_RcCpp_Start(DcmDspStartRoutineInSignal_RcCppRsr, OpStatus, DcmDspStartRoutineOutSignal_StatDuration, DcmDspStartRoutineOutSignal_StatApprovalChargingState, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_RoutineServices_DcmDspRoutine_RcCppc_Start(Dcm_OpStatusType OpStatus, uint8 *DcmDspStartRoutineOutSignal_dataOut, uint16 *DataLength, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_RoutineServices_DcmDspRoutine_RcCppc_Start(OpStatus, DcmDspStartRoutineOutSignal_dataOut, DataLength, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_RoutineServices_DcmDspRoutine_RcHdddRi4002_Start(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_RoutineServices_DcmDspRoutine_RcHdddRi4002_Start(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_RoutineServices_DcmDspRoutine_RcPad_Start(uint8 DcmDspStartRoutineInSignal_Dpt, uint8 DcmDspStartRoutineInSignal_Rsvd, uint8 DcmDspStartRoutineInSignal_MoiAfid, uint8 DcmDspStartRoutineInSignal_MemObjIdent, uint8 DcmDspStartRoutineInSignal_AppSpecificParam, Dcm_OpStatusType OpStatus, uint8 *DcmDspStartRoutineOutSignal_Rs, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_RoutineServices_DcmDspRoutine_RcPad_Start(DcmDspStartRoutineInSignal_Dpt, DcmDspStartRoutineInSignal_Rsvd, DcmDspStartRoutineInSignal_MoiAfid, DcmDspStartRoutineInSignal_MemObjIdent, DcmDspStartRoutineInSignal_AppSpecificParam, OpStatus, DcmDspStartRoutineOutSignal_Rs, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_RoutineServices_DcmDspRoutine_RcRswedi_Start(const uint8 *DcmDspStartRoutineInSignal_DataIn, Dcm_OpStatusType OpStatus, uint8 *DcmDspStartRoutineOutSignal_DataOut, uint16 *DataLength, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_RoutineServices_DcmDspRoutine_RcRswedi_Start(DcmDspStartRoutineInSignal_DataIn, OpStatus, DcmDspStartRoutineOutSignal_DataOut, DataLength, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_RoutineServices_DcmDspRoutine_RequestPreferredProtocol_Start(const uint8 *DcmDspStartRoutineInSignal_SgbmId, Dcm_OpStatusType OpStatus, uint8 *DcmDspStartRoutineOutSignal_AnzahlItems, uint8 *DcmDspStartRoutineOutSignal_FpRpp31011021Eopfld, uint16 DataLength, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_RoutineServices_DcmDspRoutine_RequestPreferredProtocol_Start(DcmDspStartRoutineInSignal_SgbmId, OpStatus, DcmDspStartRoutineOutSignal_AnzahlItems, DcmDspStartRoutineOutSignal_FpRpp31011021Eopfld, DataLength, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_RoutineServices_DcmDspRoutine_ResetAktivierungsleitung_Start(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_RoutineServices_DcmDspRoutine_ResetAktivierungsleitung_Start(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_RoutineServices_DcmDspRoutine_SetDefaultBus_Start(uint8 DcmDspStartRoutineInSignal_ZustandDefaultBus, Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_RoutineServices_DcmDspRoutine_SetDefaultBus_Start(DcmDspStartRoutineInSignal_ZustandDefaultBus, OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_RoutineServices_DcmDspRoutine_StartSystime_Start(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_RoutineServices_DcmDspRoutine_StartSystime_Start(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_RoutineServices_DcmDspRoutine_SteuernDmFssMaster_Start(uint8 DcmDspStartRoutineInSignal_ArgSignal, Dcm_OpStatusType OpStatus, uint8 *DcmDspStartRoutineOutSignal_StatSignal, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_RoutineServices_DcmDspRoutine_SteuernDmFssMaster_Start(DcmDspStartRoutineInSignal_ArgSignal, OpStatus, DcmDspStartRoutineOutSignal_StatSignal, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_RoutineServices_DcmDspRoutine_SteuernDmFssMaster_Stop(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_RoutineServices_DcmDspRoutine_SteuernDmFssMaster_Stop(OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_RoutineServices_DcmDspRoutine_Swt_Start(uint8 DcmDspStartRoutineInSignal_RCOption, const uint8 *DcmDspStartRoutineInSignal_DataIn, Dcm_OpStatusType OpStatus, uint8 *DcmDspStartRoutineOutSignal_RCOptionOut, uint8 *DcmDspStartRoutineOutSignal_ReturnCode, uint8 *DcmDspStartRoutineOutSignal_DataOut, uint16 *DataLength, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_RoutineServices_DcmDspRoutine_Swt_Start(DcmDspStartRoutineInSignal_RCOption, DcmDspStartRoutineInSignal_DataIn, OpStatus, DcmDspStartRoutineOutSignal_RCOptionOut, DcmDspStartRoutineOutSignal_ReturnCode, DcmDspStartRoutineOutSignal_DataOut, DataLength, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_SecurityAccess_DcmDspSecurityRow_Coding_CompareKey(const uint8 *Key, Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_SecurityAccess_DcmDspSecurityRow_Coding_CompareKey(Key, OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_SecurityAccess_DcmDspSecurityRow_Coding_GetSeed(const uint8 *SecurityAccessDataRecord, Dcm_OpStatusType OpStatus, uint8 *Seed, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_SecurityAccess_DcmDspSecurityRow_Coding_GetSeed(SecurityAccessDataRecord, OpStatus, Seed, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_SecurityAccess_DcmDspSecurityRow_Programming_HDD_CompareKey(const uint8 *Key, Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_SecurityAccess_DcmDspSecurityRow_Programming_HDD_CompareKey(Key, OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_SecurityAccess_DcmDspSecurityRow_Programming_HDD_GetSeed(const uint8 *SecurityAccessDataRecord, Dcm_OpStatusType OpStatus, uint8 *Seed, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_SecurityAccess_DcmDspSecurityRow_Programming_HDD_GetSeed(SecurityAccessDataRecord, OpStatus, Seed, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_SecurityAccess_DcmDspSecurityRow_Swt_CompareKey(const uint8 *Key, Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_SecurityAccess_DcmDspSecurityRow_Swt_CompareKey(Key, OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_SecurityAccess_DcmDspSecurityRow_Swt_GetSeed(const uint8 *SecurityAccessDataRecord, Dcm_OpStatusType OpStatus, uint8 *Seed, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_SecurityAccess_DcmDspSecurityRow_Swt_GetSeed(SecurityAccessDataRecord, OpStatus, Seed, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_SecurityAccess_DcmDspSecurityRow_level2_CompareKey(const uint8 *Key, Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_SecurityAccess_DcmDspSecurityRow_level2_CompareKey(Key, OpStatus, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_SecurityAccess_DcmDspSecurityRow_level2_GetSeed(Dcm_OpStatusType OpStatus, uint8 *Seed, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_SecurityAccess_DcmDspSecurityRow_level2_GetSeed(OpStatus, Seed, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_ServiceRequestManufacturerNotification_IntegrationSample_Confirmation(uint8 SID, uint8 ReqType, uint16 SourceAddress, Dcm_ConfirmationStatusType ConfirmationStatus)
{
  return Rte_Call_ServiceRequestManufacturerNotification_IntegrationSample_Confirmation(SID, ReqType, SourceAddress, ConfirmationStatus);
}
Std_ReturnType TSC_Dcm_Rte_Call_ServiceRequestManufacturerNotification_IntegrationSample_Indication(uint8 SID, const uint8 *RequestData, uint16 DataSize, uint8 ReqType, uint16 SourceAddress, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_ServiceRequestManufacturerNotification_IntegrationSample_Indication(SID, RequestData, DataSize, ReqType, SourceAddress, ErrorCode);
}
Std_ReturnType TSC_Dcm_Rte_Call_ServiceRequestManufacturerNotification_StdDiag_Confirmation(uint8 SID, uint8 ReqType, uint16 SourceAddress, Dcm_ConfirmationStatusType ConfirmationStatus)
{
  return Rte_Call_ServiceRequestManufacturerNotification_StdDiag_Confirmation(SID, ReqType, SourceAddress, ConfirmationStatus);
}
Std_ReturnType TSC_Dcm_Rte_Call_ServiceRequestManufacturerNotification_StdDiag_Indication(uint8 SID, const uint8 *RequestData, uint16 DataSize, uint8 ReqType, uint16 SourceAddress, Dcm_NegativeResponseCodeType *ErrorCode)
{
  return Rte_Call_ServiceRequestManufacturerNotification_StdDiag_Indication(SID, RequestData, DataSize, ReqType, SourceAddress, ErrorCode);
}


     /* Mode Interfaces */

Std_ReturnType TSC_Dcm_Rte_Switch_DcmCommunicationControl_ComMConf_ComMChannel_A_FlexRay_5b5a9ac2_DcmCommunicationControl_ComMConf_ComMChannel_A_FlexRay_5b5a9ac2(Dcm_CommunicationModeType mode)
{
  return Rte_Switch_DcmCommunicationControl_ComMConf_ComMChannel_A_FlexRay_5b5a9ac2_DcmCommunicationControl_ComMConf_ComMChannel_A_FlexRay_5b5a9ac2( mode);
}
Std_ReturnType TSC_Dcm_Rte_Switch_DcmControlDtcSetting_DcmControlDtcSetting(Dcm_ControlDtcSettingType mode)
{
  return Rte_Switch_DcmControlDtcSetting_DcmControlDtcSetting( mode);
}
Std_ReturnType TSC_Dcm_Rte_Switch_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl(Dcm_DiagnosticSessionControlType mode)
{
  return Rte_Switch_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl( mode);
}
Std_ReturnType TSC_Dcm_Rte_Switch_DcmEcuReset_DcmEcuReset(Dcm_EcuResetType mode)
{
  return Rte_Switch_DcmEcuReset_DcmEcuReset( mode);
}
Std_ReturnType TSC_Dcm_Rte_Switch_DcmModeRapidPowerShutDown_DcmModeRapidPowerShutDown(Dcm_ModeRapidPowerShutDownType mode)
{
  return Rte_Switch_DcmModeRapidPowerShutDown_DcmModeRapidPowerShutDown( mode);
}
Std_ReturnType TSC_Dcm_Rte_Switch_DcmResponseOnEvent_DcmDspRoeEvent_DcmResponseOnEvent_DcmDspRoeEvent(Dcm_ResponseOnEventType mode)
{
  return Rte_Switch_DcmResponseOnEvent_DcmDspRoeEvent_DcmResponseOnEvent_DcmDspRoeEvent( mode);
}

Std_ReturnType TSC_Dcm_Rte_SwitchAck_DcmEcuReset_DcmEcuReset(void)
{
  return Rte_SwitchAck_DcmEcuReset_DcmEcuReset();
}
Std_ReturnType TSC_Dcm_Rte_SwitchAck_DcmModeRapidPowerShutDown_DcmModeRapidPowerShutDown(void)
{
  return Rte_SwitchAck_DcmModeRapidPowerShutDown_DcmModeRapidPowerShutDown();
}


     /* Inter-Runnable variables */













     /* Client Server Interfaces: */


     /* Service calls */


     /* Mode Interfaces */




     /* Inter-Runnable variables */













     /* Client Server Interfaces: */


     /* Service calls */


     /* Mode Interfaces */




     /* Inter-Runnable variables */













     /* Client Server Interfaces: */


     /* Service calls */


     /* Mode Interfaces */




     /* Inter-Runnable variables */













     /* Client Server Interfaces: */


     /* Service calls */


     /* Mode Interfaces */




     /* Inter-Runnable variables */













     /* Client Server Interfaces: */


     /* Service calls */


     /* Mode Interfaces */




     /* Inter-Runnable variables */













     /* Client Server Interfaces: */


     /* Service calls */


     /* Mode Interfaces */




     /* Inter-Runnable variables */













     /* Client Server Interfaces: */


     /* Service calls */


     /* Mode Interfaces */




     /* Inter-Runnable variables */







     /* Dcm */
      /* Dcm */



