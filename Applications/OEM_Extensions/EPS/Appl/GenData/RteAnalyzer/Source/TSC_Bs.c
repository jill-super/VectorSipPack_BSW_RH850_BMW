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
 *          File:  TSC_Bs.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.16.0
 *                 RTE Core Version 1.16.0
 *       License:  Unlimited license CBD1700369 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_Bs.h"
#include "TSC_Bs.h"















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
Std_ReturnType TSC_Bs_Rte_Call_DETService_ReportError(uint8 InstanceId, uint8 ApiId, uint8 ErrorId)
{
  return Rte_Call_DETService_ReportError(InstanceId, ApiId, ErrorId);
}


     /* Mode Interfaces */




     /* Inter-Runnable variables */






Bs_LifeCycleRequestType TSC_Bs_Rte_IRead_Bs_LifeCycleModeRequest_LifeCycleRequest_requestMode(void)
{
  return Rte_IRead_Bs_LifeCycleModeRequest_LifeCycleRequest_requestMode();
}







     /* Client Server Interfaces: */


     /* Service calls */
Std_ReturnType TSC_Bs_Rte_Call_DMNotInFieldMode_SetEventStatus(Dem_EventStatusType EventStatus)
{
  return Rte_Call_DMNotInFieldMode_SetEventStatus(EventStatus);
}
Std_ReturnType TSC_Bs_Rte_Call_NvMServiceSecEcuMode_GetErrorStatus(NvM_RequestResultType *RequestResultPtr)
{
  return Rte_Call_NvMServiceSecEcuMode_GetErrorStatus(RequestResultPtr);
}


     /* Mode Interfaces */
Bs_LifeCycleRequestType TSC_Bs_Rte_Mode_LifeCycle_Mode(Bs_LifeCycleRequestType *previousMode, Bs_LifeCycleRequestType *nextMode)
{
  return Rte_Mode_LifeCycle_Mode( previousMode, nextMode);
}

Std_ReturnType TSC_Bs_Rte_Switch_LifeCycle_Mode(Bs_LifeCycleRequestType mode)
{
  return Rte_Switch_LifeCycle_Mode( mode);
}
Std_ReturnType TSC_Bs_Rte_Switch_SecEcuMode_Mode(uint8 mode)
{
  return Rte_Switch_SecEcuMode_Mode( mode);
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









Std_ReturnType TSC_Bs_Rte_Write_ActivationState_Features1_IsActivated(boolean data)
{
  return Rte_Write_ActivationState_Features1_IsActivated(data);
}





     /* Client Server Interfaces: */


     /* Service calls */
Std_ReturnType TSC_Bs_Rte_Call_NvMServiceSecEcuMode_SetRamBlockStatus(boolean BlockChanged)
{
  return Rte_Call_NvMServiceSecEcuMode_SetRamBlockStatus(BlockChanged);
}


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
Std_ReturnType TSC_Bs_Rte_Call_NvMServiceSecEcuMode_WriteBlock(NvM_SrcPtrType SrcPtr)
{
  return Rte_Call_NvMServiceSecEcuMode_WriteBlock(SrcPtr);
}


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













     /* Client Server Interfaces: */


     /* Service calls */


     /* Mode Interfaces */




     /* Inter-Runnable variables */













     /* Client Server Interfaces: */


     /* Service calls */
Std_ReturnType TSC_Bs_Rte_Call_Dlog_EcuUid_ReadData(uint8 *Data)
{
  return Rte_Call_Dlog_EcuUid_ReadData(Data);
}
Std_ReturnType TSC_Bs_Rte_Call_NvMServiceSfaData_WriteBlock(NvM_SrcPtrType SrcPtr)
{
  return Rte_Call_NvMServiceSfaData_WriteBlock(SrcPtr);
}


     /* Mode Interfaces */




     /* Inter-Runnable variables */













     /* Client Server Interfaces: */


     /* Service calls */


     /* Mode Interfaces */




     /* Inter-Runnable variables */







     /* Bs */
      /* Bs */



