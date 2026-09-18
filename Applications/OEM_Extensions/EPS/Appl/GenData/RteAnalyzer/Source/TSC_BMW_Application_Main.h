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
 *          File:  TSC_BMW_Application_Main.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.16.0
 *                 RTE Core Version 1.16.0
 *       License:  Unlimited license CBD1700369 for Nexteer Automotive Corporation
 *
 *   Description:  Header of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/


/** Mode switches */
uint8 TSC_BMW_Application_Main_Rte_Mode_DcmEcuReset_DcmEcuReset(void);
uint8 TSC_BMW_Application_Main_Rte_Mode_DcmEcuReset_DcmEcuReset(void);
uint8 TSC_BMW_Application_Main_Rte_Mode_DcmEcuReset_DcmEcuReset(void);
uint8 TSC_BMW_Application_Main_Rte_Mode_DcmModeRapidPowerShutDown_DcmModeRapidPowerShutDown(void);
uint8 TSC_BMW_Application_Main_Rte_Mode_DcmModeRapidPowerShutDown_DcmModeRapidPowerShutDown(void);

/** Explicit inter-runnable variables */
BMW_Application_Reset_IRV TSC_BMW_Application_Main_Rte_IrvRead_Dcm_BAC4_EcuReset_Execute_InterRunnableVariable(void);
void TSC_BMW_Application_Main_Rte_IrvWrite_Dcm_BAC4_EcuReset_Hard_InterRunnableVariable(BMW_Application_Reset_IRV);
void TSC_BMW_Application_Main_Rte_IrvWrite_Dcm_BAC4_Jump2Boot_InterRunnableVariable(BMW_Application_Reset_IRV);

/** Per Instance Memories */
uint32 *TSC_BMW_Application_Main_Rte_Pim_PerInstanceMemory_Xcp(void);



