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
 *          File:  TSC_IntegrationSample.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.16.0
 *                 RTE Core Version 1.16.0
 *       License:  Unlimited license CBD1700369 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_IntegrationSample.h"
#include "TSC_IntegrationSample.h"















     /* Client Server Interfaces: */


     /* Service calls */


     /* Mode Interfaces */

Std_ReturnType TSC_IntegrationSample_Rte_Switch_IntegrationSampleSimpleTimerPort_0_SimpleTimerMode(IntegrationSample_SimpleTimerStateType mode)
{
  return Rte_Switch_IntegrationSampleSimpleTimerPort_0_SimpleTimerMode( mode);
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






IntegrationSample_EcuRunStateModeRequestType TSC_IntegrationSample_Rte_IRead_R_IntegrationSample_EcuRunStateHandler_EcuRunStateRequest_IntegrationSample_EcuRunStateRequestMode(void)
{
  return Rte_IRead_R_IntegrationSample_EcuRunStateHandler_EcuRunStateRequest_IntegrationSample_EcuRunStateRequestMode();
}







     /* Client Server Interfaces: */


     /* Service calls */


     /* Mode Interfaces */
IntegrationSample_EcuRunStateModeRequestType TSC_IntegrationSample_Rte_Mode_EcuRunState_EcuRunStateMode(void)
{
  return Rte_Mode_EcuRunState_EcuRunStateMode();
}

Std_ReturnType TSC_IntegrationSample_Rte_Switch_EcuRunState_EcuRunStateMode(IntegrationSample_EcuRunStateModeRequestType mode)
{
  return Rte_Switch_EcuRunState_EcuRunStateMode( mode);
}



     /* Inter-Runnable variables */













     /* Client Server Interfaces: */


     /* Service calls */


     /* Mode Interfaces */




     /* Inter-Runnable variables */






Std_ReturnType TSC_IntegrationSample_Rte_Read_RP_SGG_Rx_CON_VEH_IntegrationSample_IDT_CON_VEH(IntegrationSample_CON_VEH_Type *data)
{
  return Rte_Read_RP_SGG_Rx_CON_VEH_IntegrationSample_IDT_CON_VEH(data);
}


boolean TSC_IntegrationSample_Rte_IsUpdated_RP_SGG_Rx_CON_VEH_IntegrationSample_IDT_CON_VEH(void)
{
  return Rte_IsUpdated_RP_SGG_Rx_CON_VEH_IntegrationSample_IDT_CON_VEH();
}



Std_ReturnType TSC_IntegrationSample_Rte_Write_PP_IS_ST_CON_VEH_VehicleState(IS_ST_CON_VEH_Type data)
{
  return Rte_Write_PP_IS_ST_CON_VEH_VehicleState(data);
}





     /* Client Server Interfaces: */


     /* Service calls */


     /* Mode Interfaces */




     /* Inter-Runnable variables */






Std_ReturnType TSC_IntegrationSample_Rte_Read_RP_SA_Kilometer_R_Notifier(MileageKilometreType *data)
{
  return Rte_Read_RP_SA_Kilometer_R_Notifier(data);
}


boolean TSC_IntegrationSample_Rte_IsUpdated_RP_SA_Kilometer_R_Notifier(void)
{
  return Rte_IsUpdated_RP_SA_Kilometer_R_Notifier();
}







     /* Client Server Interfaces: */


     /* Service calls */


     /* Mode Interfaces */




     /* Inter-Runnable variables */






Std_ReturnType TSC_IntegrationSample_Rte_Read_RP_VehicleStatus_Notifier(VehicleState_Type *data)
{
  return Rte_Read_RP_VehicleStatus_Notifier(data);
}


boolean TSC_IntegrationSample_Rte_IsUpdated_RP_VehicleStatus_Notifier(void)
{
  return Rte_IsUpdated_RP_VehicleStatus_Notifier();
}



Std_ReturnType TSC_IntegrationSample_Rte_Write_PP_Stm_CEL_Signal_centralErrorLock(IntegrationSample_Stm_CentralErrorLockType data)
{
  return Rte_Write_PP_Stm_CEL_Signal_centralErrorLock(data);
}





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







     /* IntegrationSample */
      /* IntegrationSample */
void TSC_IntegrationSample_Rte_Enter_EXA_IntegrationSample(void)
{
  Rte_Enter_EXA_IntegrationSample();
}
void TSC_IntegrationSample_Rte_Exit_EXA_IntegrationSample(void)
{
  Rte_Exit_EXA_IntegrationSample();
}



