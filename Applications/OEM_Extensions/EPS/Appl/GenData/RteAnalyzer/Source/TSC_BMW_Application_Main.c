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
 *          File:  TSC_BMW_Application_Main.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.16.0
 *                 RTE Core Version 1.16.0
 *       License:  Unlimited license CBD1700369 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_BMW_Application_Main.h"
#include "TSC_BMW_Application_Main.h"















     /* Client Server Interfaces: */


     /* Service calls */


     /* Mode Interfaces */
uint8 TSC_BMW_Application_Main_Rte_Mode_DcmEcuReset_DcmEcuReset(void)
{
  return Rte_Mode_DcmEcuReset_DcmEcuReset();
}




     /* Inter-Runnable variables */
BMW_Application_Reset_IRV TSC_BMW_Application_Main_Rte_IrvRead_Dcm_BAC4_EcuReset_Execute_InterRunnableVariable(void)
{
return Rte_IrvRead_Dcm_BAC4_EcuReset_Execute_InterRunnableVariable();
}













     /* Client Server Interfaces: */


     /* Service calls */


     /* Mode Interfaces */




     /* Inter-Runnable variables */

void TSC_BMW_Application_Main_Rte_IrvWrite_Dcm_BAC4_EcuReset_Hard_InterRunnableVariable(BMW_Application_Reset_IRV data)
{
  Rte_IrvWrite_Dcm_BAC4_EcuReset_Hard_InterRunnableVariable( data);
}












     /* Client Server Interfaces: */


     /* Service calls */


     /* Mode Interfaces */




     /* Inter-Runnable variables */

void TSC_BMW_Application_Main_Rte_IrvWrite_Dcm_BAC4_Jump2Boot_InterRunnableVariable(BMW_Application_Reset_IRV data)
{
  Rte_IrvWrite_Dcm_BAC4_Jump2Boot_InterRunnableVariable( data);
}












     /* Client Server Interfaces: */


     /* Service calls */


     /* Mode Interfaces */
uint8 TSC_BMW_Application_Main_Rte_Mode_DcmModeRapidPowerShutDown_DcmModeRapidPowerShutDown(void)
{
  return Rte_Mode_DcmModeRapidPowerShutDown_DcmModeRapidPowerShutDown();
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







     /* BMW_Application_Main */
      /* BMW_Application_Main */

/** Per Instance Memories */
uint32 *TSC_BMW_Application_Main_Rte_Pim_PerInstanceMemory_Xcp(void)
{
  return Rte_Pim_PerInstanceMemory_Xcp();
}



