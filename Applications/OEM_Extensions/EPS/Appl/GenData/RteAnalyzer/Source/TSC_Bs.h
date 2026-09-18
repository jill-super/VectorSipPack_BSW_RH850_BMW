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
 *          File:  TSC_Bs.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.16.0
 *                 RTE Core Version 1.16.0
 *       License:  Unlimited license CBD1700369 for Nexteer Automotive Corporation
 *
 *   Description:  Header of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/


/** Sender receiver - explicit write services */
Std_ReturnType TSC_Bs_Rte_Write_ActivationState_Features1_IsActivated(boolean data);

/** Sender receiver - implicit read services */
Bs_LifeCycleRequestType TSC_Bs_Rte_IRead_Bs_LifeCycleModeRequest_LifeCycleRequest_requestMode(void);

/** Service interfaces */
Std_ReturnType TSC_Bs_Rte_Call_DETService_ReportError(uint8 InstanceId, uint8 ApiId, uint8 ErrorId);
Std_ReturnType TSC_Bs_Rte_Call_DMNotInFieldMode_SetEventStatus(Dem_EventStatusType EventStatus);
Std_ReturnType TSC_Bs_Rte_Call_NvMServiceSecEcuMode_GetErrorStatus(NvM_RequestResultType *RequestResultPtr);
Std_ReturnType TSC_Bs_Rte_Call_NvMServiceSecEcuMode_SetRamBlockStatus(boolean BlockChanged);
Std_ReturnType TSC_Bs_Rte_Call_NvMServiceSecEcuMode_WriteBlock(NvM_SrcPtrType SrcPtr);
Std_ReturnType TSC_Bs_Rte_Call_Dlog_EcuUid_ReadData(uint8 *Data);
Std_ReturnType TSC_Bs_Rte_Call_NvMServiceSecEcuMode_WriteBlock(NvM_SrcPtrType SrcPtr);
Std_ReturnType TSC_Bs_Rte_Call_NvMServiceSfaData_WriteBlock(NvM_SrcPtrType SrcPtr);

/** Mode switches */
Bs_LifeCycleRequestType TSC_Bs_Rte_Mode_LifeCycle_Mode(Bs_LifeCycleRequestType *previousMode, Bs_LifeCycleRequestType *nextMode);
Std_ReturnType TSC_Bs_Rte_Switch_LifeCycle_Mode(Bs_LifeCycleRequestType mode);
Std_ReturnType TSC_Bs_Rte_Switch_SecEcuMode_Mode(uint8 mode);
Std_ReturnType TSC_Bs_Rte_Switch_SecEcuMode_Mode(uint8 mode);
Std_ReturnType TSC_Bs_Rte_Switch_SecEcuMode_Mode(uint8 mode);




