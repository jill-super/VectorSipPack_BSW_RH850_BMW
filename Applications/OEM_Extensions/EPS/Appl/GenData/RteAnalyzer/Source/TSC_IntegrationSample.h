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
 *          File:  TSC_IntegrationSample.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.16.0
 *                 RTE Core Version 1.16.0
 *       License:  Unlimited license CBD1700369 for Nexteer Automotive Corporation
 *
 *   Description:  Header of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/


/** Sender receiver - explicit read services */
Std_ReturnType TSC_IntegrationSample_Rte_Read_RP_SGG_Rx_CON_VEH_IntegrationSample_IDT_CON_VEH(IntegrationSample_CON_VEH_Type *data);
Std_ReturnType TSC_IntegrationSample_Rte_Read_RP_SA_Kilometer_R_Notifier(MileageKilometreType *data);
Std_ReturnType TSC_IntegrationSample_Rte_Read_RP_VehicleStatus_Notifier(VehicleState_Type *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_IntegrationSample_Rte_Write_PP_IS_ST_CON_VEH_VehicleState(IS_ST_CON_VEH_Type data);
Std_ReturnType TSC_IntegrationSample_Rte_Write_PP_Stm_CEL_Signal_centralErrorLock(IntegrationSample_Stm_CentralErrorLockType data);

/** Sender receiver - implicit read services */
IntegrationSample_EcuRunStateModeRequestType TSC_IntegrationSample_Rte_IRead_R_IntegrationSample_EcuRunStateHandler_EcuRunStateRequest_IntegrationSample_EcuRunStateRequestMode(void);

/** Sender receiver - update flag */
boolean TSC_IntegrationSample_Rte_IsUpdated_RP_SGG_Rx_CON_VEH_IntegrationSample_IDT_CON_VEH(void);
boolean TSC_IntegrationSample_Rte_IsUpdated_RP_SA_Kilometer_R_Notifier(void);
boolean TSC_IntegrationSample_Rte_IsUpdated_RP_VehicleStatus_Notifier(void);

/** Mode switches */
Std_ReturnType TSC_IntegrationSample_Rte_Switch_IntegrationSampleSimpleTimerPort_0_SimpleTimerMode(IntegrationSample_SimpleTimerStateType mode);
IntegrationSample_EcuRunStateModeRequestType TSC_IntegrationSample_Rte_Mode_EcuRunState_EcuRunStateMode(void);
Std_ReturnType TSC_IntegrationSample_Rte_Switch_EcuRunState_EcuRunStateMode(IntegrationSample_EcuRunStateModeRequestType mode);

/** Exclusive Areas */
void TSC_IntegrationSample_Rte_Enter_EXA_IntegrationSample(void);
void TSC_IntegrationSample_Rte_Exit_EXA_IntegrationSample(void);




