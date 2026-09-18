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
 *          File:  TSC_DemMaster_0.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.16.0
 *                 RTE Core Version 1.16.0
 *       License:  Unlimited license CBD1700369 for Nexteer Automotive Corporation
 *
 *   Description:  Header of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/


/** Service interfaces */
Std_ReturnType TSC_DemMaster_0_Rte_Call_CBClrEvt_CodingEventNotCoded_ClearEventAllowed(boolean *Allowed);
Std_ReturnType TSC_DemMaster_0_Rte_Call_CBClrEvt_VsmEventOpmode_ClearEventAllowed(boolean *Allowed);
Std_ReturnType TSC_DemMaster_0_Rte_Call_CBReadData_DemDataElementClass_EthArpDiscardType_ReadData(uint8 *Data);
Std_ReturnType TSC_DemMaster_0_Rte_Call_CBReadData_DemDataElementClass_EthDiscardedArpEntry_ReadData(uint8 *Data);
Std_ReturnType TSC_DemMaster_0_Rte_Call_CBReadData_DemDataElementClass_EthDroppedFrameStatus_ReadData(uint8 *Data);
Std_ReturnType TSC_DemMaster_0_Rte_Call_CBReadData_DemDataElementClass_EthSourceMacOfDuplicateIpAddress_ReadData(uint8 *Data);
Std_ReturnType TSC_DemMaster_0_Rte_Call_CBReadData_DemDataElementClass_FUwBn_ReadData(uint8 *Data);
Std_ReturnType TSC_DemMaster_0_Rte_Call_CBReadData_DemDataElementClass_FUwTn_ReadData(uint8 *Data);
Std_ReturnType TSC_DemMaster_0_Rte_Call_CBReadData_DemDataElementClass_FileManipulated_ReadData(uint8 *Data);
Std_ReturnType TSC_DemMaster_0_Rte_Call_CBReadData_DemDataElementClass_KmStand_ReadData(uint8 *Data);
Std_ReturnType TSC_DemMaster_0_Rte_Call_CBReadData_DemDataElementClass_Port0CrcErrorCount_ReadData(uint8 *Data);
Std_ReturnType TSC_DemMaster_0_Rte_Call_CBReadData_DemDataElementClass_Port0LowSignalQualityStatus_ReadData(uint8 *Data);
Std_ReturnType TSC_DemMaster_0_Rte_Call_CBReadData_DemDataElementClass_StartApplication_ReadData(uint8 *Data);
Std_ReturnType TSC_DemMaster_0_Rte_Call_CBReadData_DemDataElementClass_SwtFehlerwert_ReadData(uint8 *Data);
Std_ReturnType TSC_DemMaster_0_Rte_Call_CBReadData_DemDataElementClass_SwtSwid_ReadData(uint8 *Data);
Std_ReturnType TSC_DemMaster_0_Rte_Call_CBReadData_DemDataElementClass_SwtVin_ReadData(uint8 *Data);
Std_ReturnType TSC_DemMaster_0_Rte_Call_CBReadData_DemDataElementClass_Systemzeit_ReadData(uint8 *Data);
Std_ReturnType TSC_DemMaster_0_Rte_Call_GeneralCBDataEvt_EventDataChanged(Dem_EventIdType EventId);




