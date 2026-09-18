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
 *          File:  Rte_Hook.h
 *        Config:  BTLD.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.16.0
 *                 RTE Core Version 1.16.0
 *       License:  Unlimited license CBD1700369 for Nexteer Automotive Corporation
 *
 *   Description:  Header file containing definitions for VFB tracing
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * Names of available VFB-Trace-Hooks
 **********************************************************************************************************************
 *
 * Not configured:
 *
 *  Rte_Runnable_BswM_BswM_MainFunction_Return
 *  Rte_Runnable_BswM_BswM_MainFunction_Start
 *  Rte_Runnable_ComM_ComM_MainFunction_0_Return
 *  Rte_Runnable_ComM_ComM_MainFunction_0_Start
 *  Rte_Runnable_ComM_GetCurrentComMode_Return
 *  Rte_Runnable_ComM_GetCurrentComMode_Start
 *  Rte_Runnable_ComM_GetInhibitionStatus_Return
 *  Rte_Runnable_ComM_GetInhibitionStatus_Start
 *  Rte_Runnable_ComM_GetMaxComMode_Return
 *  Rte_Runnable_ComM_GetMaxComMode_Start
 *  Rte_Runnable_ComM_GetRequestedComMode_Return
 *  Rte_Runnable_ComM_GetRequestedComMode_Start
 *  Rte_Runnable_ComM_LimitChannelToNoComMode_Return
 *  Rte_Runnable_ComM_LimitChannelToNoComMode_Start
 *  Rte_Runnable_ComM_LimitECUToNoComMode_Return
 *  Rte_Runnable_ComM_LimitECUToNoComMode_Start
 *  Rte_Runnable_ComM_PreventWakeUp_Return
 *  Rte_Runnable_ComM_PreventWakeUp_Start
 *  Rte_Runnable_ComM_ReadInhibitCounter_Return
 *  Rte_Runnable_ComM_ReadInhibitCounter_Start
 *  Rte_Runnable_ComM_RequestComMode_Return
 *  Rte_Runnable_ComM_RequestComMode_Start
 *  Rte_Runnable_ComM_ResetInhibitCounter_Return
 *  Rte_Runnable_ComM_ResetInhibitCounter_Start
 *  Rte_Runnable_ComM_SetECUGroupClassification_Return
 *  Rte_Runnable_ComM_SetECUGroupClassification_Start
 *  Rte_Runnable_Dcm_Dcm_MainFunction_Return
 *  Rte_Runnable_Dcm_Dcm_MainFunction_Start
 *  Rte_Runnable_Dcm_GetActiveProtocol_Return
 *  Rte_Runnable_Dcm_GetActiveProtocol_Start
 *  Rte_Runnable_Dcm_GetRequestKind_Return
 *  Rte_Runnable_Dcm_GetRequestKind_Start
 *  Rte_Runnable_Dcm_GetSecurityLevel_Return
 *  Rte_Runnable_Dcm_GetSecurityLevel_Start
 *  Rte_Runnable_Dcm_GetSesCtrlType_Return
 *  Rte_Runnable_Dcm_GetSesCtrlType_Start
 *  Rte_Runnable_Dcm_ResetToDefaultSession_Return
 *  Rte_Runnable_Dcm_ResetToDefaultSession_Start
 *  Rte_Runnable_Dcm_SetActiveDiagnostic_Return
 *  Rte_Runnable_Dcm_SetActiveDiagnostic_Start
 *  Rte_Runnable_DemMaster_0_ClearDTC_Return
 *  Rte_Runnable_DemMaster_0_ClearDTC_Start
 *  Rte_Runnable_DemMaster_0_Dem_MasterMainFunction_Return
 *  Rte_Runnable_DemMaster_0_Dem_MasterMainFunction_Start
 *  Rte_Runnable_DemMaster_0_GetDTCOfEvent_Return
 *  Rte_Runnable_DemMaster_0_GetDTCOfEvent_Start
 *  Rte_Runnable_DemMaster_0_GetDTCStatusAvailabilityMask_Return
 *  Rte_Runnable_DemMaster_0_GetDTCStatusAvailabilityMask_Start
 *  Rte_Runnable_DemMaster_0_GetDebouncingOfEvent_Return
 *  Rte_Runnable_DemMaster_0_GetDebouncingOfEvent_Start
 *  Rte_Runnable_DemMaster_0_GetEventEnableCondition_Return
 *  Rte_Runnable_DemMaster_0_GetEventEnableCondition_Start
 *  Rte_Runnable_DemMaster_0_GetEventExtendedDataRecordEx_Return
 *  Rte_Runnable_DemMaster_0_GetEventExtendedDataRecordEx_Start
 *  Rte_Runnable_DemMaster_0_GetEventFailed_Return
 *  Rte_Runnable_DemMaster_0_GetEventFailed_Start
 *  Rte_Runnable_DemMaster_0_GetEventFreezeFrameDataEx_Return
 *  Rte_Runnable_DemMaster_0_GetEventFreezeFrameDataEx_Start
 *  Rte_Runnable_DemMaster_0_GetEventMemoryOverflow_Return
 *  Rte_Runnable_DemMaster_0_GetEventMemoryOverflow_Start
 *  Rte_Runnable_DemMaster_0_GetEventStatus_Return
 *  Rte_Runnable_DemMaster_0_GetEventStatus_Start
 *  Rte_Runnable_DemMaster_0_GetEventTested_Return
 *  Rte_Runnable_DemMaster_0_GetEventTested_Start
 *  Rte_Runnable_DemMaster_0_GetEventUdsStatus_Return
 *  Rte_Runnable_DemMaster_0_GetEventUdsStatus_Start
 *  Rte_Runnable_DemMaster_0_GetFaultDetectionCounter_Return
 *  Rte_Runnable_DemMaster_0_GetFaultDetectionCounter_Start
 *  Rte_Runnable_DemMaster_0_GetMonitorStatus_Return
 *  Rte_Runnable_DemMaster_0_GetMonitorStatus_Start
 *  Rte_Runnable_DemMaster_0_GetNumberOfEventMemoryEntries_Return
 *  Rte_Runnable_DemMaster_0_GetNumberOfEventMemoryEntries_Start
 *  Rte_Runnable_DemMaster_0_GetOperationCycleState_Return
 *  Rte_Runnable_DemMaster_0_GetOperationCycleState_Start
 *  Rte_Runnable_DemMaster_0_PostRunRequested_Return
 *  Rte_Runnable_DemMaster_0_PostRunRequested_Start
 *  Rte_Runnable_DemMaster_0_SelectDTC_Return
 *  Rte_Runnable_DemMaster_0_SelectDTC_Start
 *  Rte_Runnable_DemMaster_0_SetOperationCycleState_Return
 *  Rte_Runnable_DemMaster_0_SetOperationCycleState_Start
 *  Rte_Runnable_DemSatellite_0_Dem_SatelliteMainFunction_Return
 *  Rte_Runnable_DemSatellite_0_Dem_SatelliteMainFunction_Start
 *  Rte_Runnable_DemSatellite_0_GetDTCOfEvent_Return
 *  Rte_Runnable_DemSatellite_0_GetDTCOfEvent_Start
 *  Rte_Runnable_DemSatellite_0_GetDebouncingOfEvent_Return
 *  Rte_Runnable_DemSatellite_0_GetDebouncingOfEvent_Start
 *  Rte_Runnable_DemSatellite_0_GetEventEnableCondition_Return
 *  Rte_Runnable_DemSatellite_0_GetEventEnableCondition_Start
 *  Rte_Runnable_DemSatellite_0_GetEventExtendedDataRecordEx_Return
 *  Rte_Runnable_DemSatellite_0_GetEventExtendedDataRecordEx_Start
 *  Rte_Runnable_DemSatellite_0_GetEventFailed_Return
 *  Rte_Runnable_DemSatellite_0_GetEventFailed_Start
 *  Rte_Runnable_DemSatellite_0_GetEventFreezeFrameDataEx_Return
 *  Rte_Runnable_DemSatellite_0_GetEventFreezeFrameDataEx_Start
 *  Rte_Runnable_DemSatellite_0_GetEventStatus_Return
 *  Rte_Runnable_DemSatellite_0_GetEventStatus_Start
 *  Rte_Runnable_DemSatellite_0_GetEventTested_Return
 *  Rte_Runnable_DemSatellite_0_GetEventTested_Start
 *  Rte_Runnable_DemSatellite_0_GetEventUdsStatus_Return
 *  Rte_Runnable_DemSatellite_0_GetEventUdsStatus_Start
 *  Rte_Runnable_DemSatellite_0_GetFaultDetectionCounter_Return
 *  Rte_Runnable_DemSatellite_0_GetFaultDetectionCounter_Start
 *  Rte_Runnable_DemSatellite_0_GetMonitorStatus_Return
 *  Rte_Runnable_DemSatellite_0_GetMonitorStatus_Start
 *  Rte_Runnable_DemSatellite_0_ResetEventDebounceStatus_Return
 *  Rte_Runnable_DemSatellite_0_ResetEventDebounceStatus_Start
 *  Rte_Runnable_DemSatellite_0_ResetEventStatus_Return
 *  Rte_Runnable_DemSatellite_0_ResetEventStatus_Start
 *  Rte_Runnable_DemSatellite_0_SetEventStatus_Return
 *  Rte_Runnable_DemSatellite_0_SetEventStatus_Start
 *  Rte_Runnable_EcuM_EcuM_MainFunction_Return
 *  Rte_Runnable_EcuM_EcuM_MainFunction_Start
 *  Rte_Runnable_EcuM_GetBootTarget_Return
 *  Rte_Runnable_EcuM_GetBootTarget_Start
 *  Rte_Runnable_EcuM_GetLastShutdownTarget_Return
 *  Rte_Runnable_EcuM_GetLastShutdownTarget_Start
 *  Rte_Runnable_EcuM_GetShutdownCause_Return
 *  Rte_Runnable_EcuM_GetShutdownCause_Start
 *  Rte_Runnable_EcuM_GetShutdownTarget_Return
 *  Rte_Runnable_EcuM_GetShutdownTarget_Start
 *  Rte_Runnable_EcuM_SelectBootTarget_Return
 *  Rte_Runnable_EcuM_SelectBootTarget_Start
 *  Rte_Runnable_EcuM_SelectShutdownCause_Return
 *  Rte_Runnable_EcuM_SelectShutdownCause_Start
 *  Rte_Runnable_EcuM_SelectShutdownTarget_Return
 *  Rte_Runnable_EcuM_SelectShutdownTarget_Start
 *  Rte_Runnable_Os_OsCore_CORE0_swc_GetCounterValue_Return
 *  Rte_Runnable_Os_OsCore_CORE0_swc_GetCounterValue_Start
 *  Rte_Runnable_Os_OsCore_CORE0_swc_GetElapsedValue_Return
 *  Rte_Runnable_Os_OsCore_CORE0_swc_GetElapsedValue_Start
 *  Rte_SwitchAckHook_Dcm_DcmEcuReset_DcmEcuReset_Return
 *  Rte_SwitchAckHook_Dcm_DcmEcuReset_DcmEcuReset_Start
 *  Rte_SwitchHook_Dcm_DcmCommunicationControl_ComMConf_ComMChannel_A_FlexRay_5b5a9ac2_DcmCommunicationControl_ComMConf_ComMChannel_A_FlexRay_5b5a9ac2_Return
 *  Rte_SwitchHook_Dcm_DcmCommunicationControl_ComMConf_ComMChannel_A_FlexRay_5b5a9ac2_DcmCommunicationControl_ComMConf_ComMChannel_A_FlexRay_5b5a9ac2_Start
 *  Rte_SwitchHook_Dcm_DcmControlDtcSetting_DcmControlDtcSetting_Return
 *  Rte_SwitchHook_Dcm_DcmControlDtcSetting_DcmControlDtcSetting_Start
 *  Rte_SwitchHook_Dcm_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl_Return
 *  Rte_SwitchHook_Dcm_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl_Start
 *  Rte_SwitchHook_Dcm_DcmEcuReset_DcmEcuReset_Return
 *  Rte_SwitchHook_Dcm_DcmEcuReset_DcmEcuReset_Start
 *  Rte_Task_Activate
 *  Rte_Task_Dispatch
 *  Rte_Task_WaitEvent
 *  Rte_Task_WaitEventRet
 *  SchM_EnterHook_BswM_BSWM_EXCLUSIVE_AREA_0_Return
 *  SchM_EnterHook_BswM_BSWM_EXCLUSIVE_AREA_0_Start
 *  SchM_EnterHook_ComM_COMM_EXCLUSIVE_AREA_0_Return
 *  SchM_EnterHook_ComM_COMM_EXCLUSIVE_AREA_0_Start
 *  SchM_EnterHook_ComM_COMM_EXCLUSIVE_AREA_1_Return
 *  SchM_EnterHook_ComM_COMM_EXCLUSIVE_AREA_1_Start
 *  SchM_EnterHook_Dcm_DCM_EXCLUSIVE_AREA_0_Return
 *  SchM_EnterHook_Dcm_DCM_EXCLUSIVE_AREA_0_Start
 *  SchM_EnterHook_Dem_DEM_EXCLUSIVE_AREA_0_Return
 *  SchM_EnterHook_Dem_DEM_EXCLUSIVE_AREA_0_Start
 *  SchM_EnterHook_Dem_DEM_EXCLUSIVE_AREA_1_Return
 *  SchM_EnterHook_Dem_DEM_EXCLUSIVE_AREA_1_Start
 *  SchM_EnterHook_Dem_DEM_EXCLUSIVE_AREA_2_Return
 *  SchM_EnterHook_Dem_DEM_EXCLUSIVE_AREA_2_Start
 *  SchM_EnterHook_Dem_DEM_EXCLUSIVE_AREA_3_Return
 *  SchM_EnterHook_Dem_DEM_EXCLUSIVE_AREA_3_Start
 *  SchM_EnterHook_Det_DET_EXCLUSIVE_AREA_0_Return
 *  SchM_EnterHook_Det_DET_EXCLUSIVE_AREA_0_Start
 *  SchM_EnterHook_EcuM_ECUM_EXCLUSIVE_AREA_0_Return
 *  SchM_EnterHook_EcuM_ECUM_EXCLUSIVE_AREA_0_Start
 *  SchM_EnterHook_EcuM_ECUM_EXCLUSIVE_AREA_1_Return
 *  SchM_EnterHook_EcuM_ECUM_EXCLUSIVE_AREA_1_Start
 *  SchM_EnterHook_EcuM_ECUM_EXCLUSIVE_AREA_2_Return
 *  SchM_EnterHook_EcuM_ECUM_EXCLUSIVE_AREA_2_Start
 *  SchM_EnterHook_Fls_FLS_CODE_FLASH_DISABLED_Return
 *  SchM_EnterHook_Fls_FLS_CODE_FLASH_DISABLED_Start
 *  SchM_EnterHook_Fls_FLS_DRIVERSTATE_DATA_PROTECTION_Return
 *  SchM_EnterHook_Fls_FLS_DRIVERSTATE_DATA_PROTECTION_Start
 *  SchM_EnterHook_Fls_FLS_REGISTER_PROTECTION_Return
 *  SchM_EnterHook_Fls_FLS_REGISTER_PROTECTION_Start
 *  SchM_EnterHook_FrIf_FRIF_EXCLUSIVE_AREA_0_Return
 *  SchM_EnterHook_FrIf_FRIF_EXCLUSIVE_AREA_0_Start
 *  SchM_EnterHook_FrIf_FRIF_EXCLUSIVE_AREA_1_Return
 *  SchM_EnterHook_FrIf_FRIF_EXCLUSIVE_AREA_1_Start
 *  SchM_EnterHook_FrIf_FRIF_EXCLUSIVE_AREA_2_Return
 *  SchM_EnterHook_FrIf_FRIF_EXCLUSIVE_AREA_2_Start
 *  SchM_EnterHook_FrSM_FRSM_EXCLUSIVE_AREA_0_Return
 *  SchM_EnterHook_FrSM_FRSM_EXCLUSIVE_AREA_0_Start
 *  SchM_EnterHook_FrSM_FRSM_EXCLUSIVE_AREA_1_Return
 *  SchM_EnterHook_FrSM_FRSM_EXCLUSIVE_AREA_1_Start
 *  SchM_EnterHook_FrSM_FRSM_EXCLUSIVE_AREA_2_Return
 *  SchM_EnterHook_FrSM_FRSM_EXCLUSIVE_AREA_2_Start
 *  SchM_EnterHook_FrSM_FRSM_EXCLUSIVE_AREA_3_Return
 *  SchM_EnterHook_FrSM_FRSM_EXCLUSIVE_AREA_3_Start
 *  SchM_EnterHook_FrTp_FRTP_EXCLUSIVE_AREA_0_Return
 *  SchM_EnterHook_FrTp_FRTP_EXCLUSIVE_AREA_0_Start
 *  SchM_EnterHook_FrTp_FRTP_EXCLUSIVE_AREA_1_Return
 *  SchM_EnterHook_FrTp_FRTP_EXCLUSIVE_AREA_1_Start
 *  SchM_EnterHook_FrTp_FRTP_EXCLUSIVE_AREA_2_Return
 *  SchM_EnterHook_FrTp_FRTP_EXCLUSIVE_AREA_2_Start
 *  SchM_EnterHook_Fr_FR_EXCLUSIVE_AREA_0_Return
 *  SchM_EnterHook_Fr_FR_EXCLUSIVE_AREA_0_Start
 *  SchM_EnterHook_Fr_FR_EXCLUSIVE_AREA_1_Return
 *  SchM_EnterHook_Fr_FR_EXCLUSIVE_AREA_1_Start
 *  SchM_EnterHook_Mcu_MCU_REGISTER_PROTECTION_Return
 *  SchM_EnterHook_Mcu_MCU_REGISTER_PROTECTION_Start
 *  SchM_EnterHook_Mcu_MCU_REG_DATA_PROTECTION_Return
 *  SchM_EnterHook_Mcu_MCU_REG_DATA_PROTECTION_Start
 *  SchM_EnterHook_PduR_PDUR_EXCLUSIVE_AREA_0_Return
 *  SchM_EnterHook_PduR_PDUR_EXCLUSIVE_AREA_0_Start
 *  SchM_EnterHook_Port_PORT_INIT_CONFIG_PROTECTION_Return
 *  SchM_EnterHook_Port_PORT_INIT_CONFIG_PROTECTION_Start
 *  SchM_EnterHook_Port_PORT_REFRESHPORT_INTERNAL_PROTECTION_Return
 *  SchM_EnterHook_Port_PORT_REFRESHPORT_INTERNAL_PROTECTION_Start
 *  SchM_EnterHook_Port_PORT_SET_PIN_DEFAULT_DIR_PROTECTION_Return
 *  SchM_EnterHook_Port_PORT_SET_PIN_DEFAULT_DIR_PROTECTION_Start
 *  SchM_EnterHook_Port_PORT_SET_PIN_DEFAULT_MODE_PROTECTION_Return
 *  SchM_EnterHook_Port_PORT_SET_PIN_DEFAULT_MODE_PROTECTION_Start
 *  SchM_EnterHook_Port_PORT_SET_PIN_DIR_PROTECTION_Return
 *  SchM_EnterHook_Port_PORT_SET_PIN_DIR_PROTECTION_Start
 *  SchM_EnterHook_Port_PORT_SET_PIN_MODE_PROTECTION_Return
 *  SchM_EnterHook_Port_PORT_SET_PIN_MODE_PROTECTION_Start
 *  SchM_EnterHook_Port_PORT_SET_TO_DIO_ALT_PROTECTION_Return
 *  SchM_EnterHook_Port_PORT_SET_TO_DIO_ALT_PROTECTION_Start
 *  SchM_EnterHook_Xcp_CANXCP_EXCLUSIVE_AREA_0_Return
 *  SchM_EnterHook_Xcp_CANXCP_EXCLUSIVE_AREA_0_Start
 *  SchM_EnterHook_Xcp_FRXCP_EXCLUSIVE_AREA_0_Return
 *  SchM_EnterHook_Xcp_FRXCP_EXCLUSIVE_AREA_0_Start
 *  SchM_EnterHook_Xcp_FRXCP_EXCLUSIVE_AREA_1_Return
 *  SchM_EnterHook_Xcp_FRXCP_EXCLUSIVE_AREA_1_Start
 *  SchM_EnterHook_Xcp_FRXCP_EXCLUSIVE_AREA_2_Return
 *  SchM_EnterHook_Xcp_FRXCP_EXCLUSIVE_AREA_2_Start
 *  SchM_EnterHook_Xcp_TCPIPXCP_EXCLUSIVE_AREA_0_Return
 *  SchM_EnterHook_Xcp_TCPIPXCP_EXCLUSIVE_AREA_0_Start
 *  SchM_EnterHook_Xcp_XCP_EXCLUSIVE_AREA_0_Return
 *  SchM_EnterHook_Xcp_XCP_EXCLUSIVE_AREA_0_Start
 *  SchM_EnterHook_Xcp_XCP_EXCLUSIVE_AREA_1_Return
 *  SchM_EnterHook_Xcp_XCP_EXCLUSIVE_AREA_1_Start
 *  SchM_EnterHook_Xcp_XCP_EXCLUSIVE_AREA_2_Return
 *  SchM_EnterHook_Xcp_XCP_EXCLUSIVE_AREA_2_Start
 *  SchM_ExitHook_BswM_BSWM_EXCLUSIVE_AREA_0_Return
 *  SchM_ExitHook_BswM_BSWM_EXCLUSIVE_AREA_0_Start
 *  SchM_ExitHook_ComM_COMM_EXCLUSIVE_AREA_0_Return
 *  SchM_ExitHook_ComM_COMM_EXCLUSIVE_AREA_0_Start
 *  SchM_ExitHook_ComM_COMM_EXCLUSIVE_AREA_1_Return
 *  SchM_ExitHook_ComM_COMM_EXCLUSIVE_AREA_1_Start
 *  SchM_ExitHook_Dcm_DCM_EXCLUSIVE_AREA_0_Return
 *  SchM_ExitHook_Dcm_DCM_EXCLUSIVE_AREA_0_Start
 *  SchM_ExitHook_Dem_DEM_EXCLUSIVE_AREA_0_Return
 *  SchM_ExitHook_Dem_DEM_EXCLUSIVE_AREA_0_Start
 *  SchM_ExitHook_Dem_DEM_EXCLUSIVE_AREA_1_Return
 *  SchM_ExitHook_Dem_DEM_EXCLUSIVE_AREA_1_Start
 *  SchM_ExitHook_Dem_DEM_EXCLUSIVE_AREA_2_Return
 *  SchM_ExitHook_Dem_DEM_EXCLUSIVE_AREA_2_Start
 *  SchM_ExitHook_Dem_DEM_EXCLUSIVE_AREA_3_Return
 *  SchM_ExitHook_Dem_DEM_EXCLUSIVE_AREA_3_Start
 *  SchM_ExitHook_Det_DET_EXCLUSIVE_AREA_0_Return
 *  SchM_ExitHook_Det_DET_EXCLUSIVE_AREA_0_Start
 *  SchM_ExitHook_EcuM_ECUM_EXCLUSIVE_AREA_0_Return
 *  SchM_ExitHook_EcuM_ECUM_EXCLUSIVE_AREA_0_Start
 *  SchM_ExitHook_EcuM_ECUM_EXCLUSIVE_AREA_1_Return
 *  SchM_ExitHook_EcuM_ECUM_EXCLUSIVE_AREA_1_Start
 *  SchM_ExitHook_EcuM_ECUM_EXCLUSIVE_AREA_2_Return
 *  SchM_ExitHook_EcuM_ECUM_EXCLUSIVE_AREA_2_Start
 *  SchM_ExitHook_Fls_FLS_CODE_FLASH_DISABLED_Return
 *  SchM_ExitHook_Fls_FLS_CODE_FLASH_DISABLED_Start
 *  SchM_ExitHook_Fls_FLS_DRIVERSTATE_DATA_PROTECTION_Return
 *  SchM_ExitHook_Fls_FLS_DRIVERSTATE_DATA_PROTECTION_Start
 *  SchM_ExitHook_Fls_FLS_REGISTER_PROTECTION_Return
 *  SchM_ExitHook_Fls_FLS_REGISTER_PROTECTION_Start
 *  SchM_ExitHook_FrIf_FRIF_EXCLUSIVE_AREA_0_Return
 *  SchM_ExitHook_FrIf_FRIF_EXCLUSIVE_AREA_0_Start
 *  SchM_ExitHook_FrIf_FRIF_EXCLUSIVE_AREA_1_Return
 *  SchM_ExitHook_FrIf_FRIF_EXCLUSIVE_AREA_1_Start
 *  SchM_ExitHook_FrIf_FRIF_EXCLUSIVE_AREA_2_Return
 *  SchM_ExitHook_FrIf_FRIF_EXCLUSIVE_AREA_2_Start
 *  SchM_ExitHook_FrSM_FRSM_EXCLUSIVE_AREA_0_Return
 *  SchM_ExitHook_FrSM_FRSM_EXCLUSIVE_AREA_0_Start
 *  SchM_ExitHook_FrSM_FRSM_EXCLUSIVE_AREA_1_Return
 *  SchM_ExitHook_FrSM_FRSM_EXCLUSIVE_AREA_1_Start
 *  SchM_ExitHook_FrSM_FRSM_EXCLUSIVE_AREA_2_Return
 *  SchM_ExitHook_FrSM_FRSM_EXCLUSIVE_AREA_2_Start
 *  SchM_ExitHook_FrSM_FRSM_EXCLUSIVE_AREA_3_Return
 *  SchM_ExitHook_FrSM_FRSM_EXCLUSIVE_AREA_3_Start
 *  SchM_ExitHook_FrTp_FRTP_EXCLUSIVE_AREA_0_Return
 *  SchM_ExitHook_FrTp_FRTP_EXCLUSIVE_AREA_0_Start
 *  SchM_ExitHook_FrTp_FRTP_EXCLUSIVE_AREA_1_Return
 *  SchM_ExitHook_FrTp_FRTP_EXCLUSIVE_AREA_1_Start
 *  SchM_ExitHook_FrTp_FRTP_EXCLUSIVE_AREA_2_Return
 *  SchM_ExitHook_FrTp_FRTP_EXCLUSIVE_AREA_2_Start
 *  SchM_ExitHook_Fr_FR_EXCLUSIVE_AREA_0_Return
 *  SchM_ExitHook_Fr_FR_EXCLUSIVE_AREA_0_Start
 *  SchM_ExitHook_Fr_FR_EXCLUSIVE_AREA_1_Return
 *  SchM_ExitHook_Fr_FR_EXCLUSIVE_AREA_1_Start
 *  SchM_ExitHook_Mcu_MCU_REGISTER_PROTECTION_Return
 *  SchM_ExitHook_Mcu_MCU_REGISTER_PROTECTION_Start
 *  SchM_ExitHook_Mcu_MCU_REG_DATA_PROTECTION_Return
 *  SchM_ExitHook_Mcu_MCU_REG_DATA_PROTECTION_Start
 *  SchM_ExitHook_PduR_PDUR_EXCLUSIVE_AREA_0_Return
 *  SchM_ExitHook_PduR_PDUR_EXCLUSIVE_AREA_0_Start
 *  SchM_ExitHook_Port_PORT_INIT_CONFIG_PROTECTION_Return
 *  SchM_ExitHook_Port_PORT_INIT_CONFIG_PROTECTION_Start
 *  SchM_ExitHook_Port_PORT_REFRESHPORT_INTERNAL_PROTECTION_Return
 *  SchM_ExitHook_Port_PORT_REFRESHPORT_INTERNAL_PROTECTION_Start
 *  SchM_ExitHook_Port_PORT_SET_PIN_DEFAULT_DIR_PROTECTION_Return
 *  SchM_ExitHook_Port_PORT_SET_PIN_DEFAULT_DIR_PROTECTION_Start
 *  SchM_ExitHook_Port_PORT_SET_PIN_DEFAULT_MODE_PROTECTION_Return
 *  SchM_ExitHook_Port_PORT_SET_PIN_DEFAULT_MODE_PROTECTION_Start
 *  SchM_ExitHook_Port_PORT_SET_PIN_DIR_PROTECTION_Return
 *  SchM_ExitHook_Port_PORT_SET_PIN_DIR_PROTECTION_Start
 *  SchM_ExitHook_Port_PORT_SET_PIN_MODE_PROTECTION_Return
 *  SchM_ExitHook_Port_PORT_SET_PIN_MODE_PROTECTION_Start
 *  SchM_ExitHook_Port_PORT_SET_TO_DIO_ALT_PROTECTION_Return
 *  SchM_ExitHook_Port_PORT_SET_TO_DIO_ALT_PROTECTION_Start
 *  SchM_ExitHook_Xcp_CANXCP_EXCLUSIVE_AREA_0_Return
 *  SchM_ExitHook_Xcp_CANXCP_EXCLUSIVE_AREA_0_Start
 *  SchM_ExitHook_Xcp_FRXCP_EXCLUSIVE_AREA_0_Return
 *  SchM_ExitHook_Xcp_FRXCP_EXCLUSIVE_AREA_0_Start
 *  SchM_ExitHook_Xcp_FRXCP_EXCLUSIVE_AREA_1_Return
 *  SchM_ExitHook_Xcp_FRXCP_EXCLUSIVE_AREA_1_Start
 *  SchM_ExitHook_Xcp_FRXCP_EXCLUSIVE_AREA_2_Return
 *  SchM_ExitHook_Xcp_FRXCP_EXCLUSIVE_AREA_2_Start
 *  SchM_ExitHook_Xcp_TCPIPXCP_EXCLUSIVE_AREA_0_Return
 *  SchM_ExitHook_Xcp_TCPIPXCP_EXCLUSIVE_AREA_0_Start
 *  SchM_ExitHook_Xcp_XCP_EXCLUSIVE_AREA_0_Return
 *  SchM_ExitHook_Xcp_XCP_EXCLUSIVE_AREA_0_Start
 *  SchM_ExitHook_Xcp_XCP_EXCLUSIVE_AREA_1_Return
 *  SchM_ExitHook_Xcp_XCP_EXCLUSIVE_AREA_1_Start
 *  SchM_ExitHook_Xcp_XCP_EXCLUSIVE_AREA_2_Return
 *  SchM_ExitHook_Xcp_XCP_EXCLUSIVE_AREA_2_Start
 *  SchM_Schedulable_BswM_BswM_MainFunction_Return
 *  SchM_Schedulable_BswM_BswM_MainFunction_Start
 *  SchM_Schedulable_ComM_ComM_MainFunction_0_Return
 *  SchM_Schedulable_ComM_ComM_MainFunction_0_Start
 *  SchM_Schedulable_Dcm_Dcm_MainFunction_Return
 *  SchM_Schedulable_Dcm_Dcm_MainFunction_Start
 *  SchM_Schedulable_Dem_Dem_MasterMainFunction_Return
 *  SchM_Schedulable_Dem_Dem_MasterMainFunction_Start
 *  SchM_Schedulable_Dem_Dem_SatelliteMainFunction_Return
 *  SchM_Schedulable_Dem_Dem_SatelliteMainFunction_Start
 *  SchM_Schedulable_EcuM_EcuM_MainFunction_Return
 *  SchM_Schedulable_EcuM_EcuM_MainFunction_Start
 *  SchM_Schedulable_Fee_30_SmallSector_Fee_30_SmallSector_MainFunction_Return
 *  SchM_Schedulable_Fee_30_SmallSector_Fee_30_SmallSector_MainFunction_Start
 *  SchM_Schedulable_Fls_Fls_MainFunction_Return
 *  SchM_Schedulable_Fls_Fls_MainFunction_Start
 *  SchM_Schedulable_FrIf_FrIf_MainFunction_0_Return
 *  SchM_Schedulable_FrIf_FrIf_MainFunction_0_Start
 *  SchM_Schedulable_FrSM_FrSM_MainFunction_0_Return
 *  SchM_Schedulable_FrSM_FrSM_MainFunction_0_Start
 *  SchM_Schedulable_FrTp_FrTp_MainFunction_Return
 *  SchM_Schedulable_FrTp_FrTp_MainFunction_Start
 *  SchM_Schedulable_Xcp_FrXcp_MainFunctionRx_Return
 *  SchM_Schedulable_Xcp_FrXcp_MainFunctionRx_Start
 *  SchM_Schedulable_Xcp_FrXcp_MainFunctionTx_Return
 *  SchM_Schedulable_Xcp_FrXcp_MainFunctionTx_Start
 *  SchM_Schedulable_Xcp_Xcp_MainFunction_Return
 *  SchM_Schedulable_Xcp_Xcp_MainFunction_Start
 *
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_HOOK_H
# define _RTE_HOOK_H

# include "Os.h" /* PRQA S 0828, 0883 */ /* MD_MSR_1.1_828, MD_Rte_Os */

# include "Rte_Type.h"
# include "Rte_Cfg.h"

# ifndef RTE_VFB_TRACE
#  define RTE_VFB_TRACE (0)
# endif

#endif /* _RTE_HOOK_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_Os:
     Reason:     This justification is used as summary justification for all deviations caused by the MICROSAR OS
                 which is for testing of the RTE. Those deviations are no issues in the RTE code.
     Risk:       No functional risk.
     Prevention: Not required.

*/
