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
 *          File:  TSC_NvM.h
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
Std_ReturnType TSC_NvM_Rte_Call_NvM_RpNotifyInit_DLOG_SVK_SYS_SUPP_InitBlock(void);
Std_ReturnType TSC_NvM_Rte_Call_NvM_RpNotifyInit_NVM_BLOCK_BOOT_PROG_DATA_InitBlock(void);
Std_ReturnType TSC_NvM_Rte_Call_NvM_RpNotifyInit_NVM_BLOCK_BOOT_SVK_HISTORY_InitBlock(void);
Std_ReturnType TSC_NvM_Rte_Call_NvM_RpNotifyJobEnd_DLOG_SVK_SYS_SUPP_JobFinished(NvM_ServiceIdType ServiceId, NvM_RequestResultType JobResult);
Std_ReturnType TSC_NvM_Rte_Call_NvM_RpNotifyJobEnd_NVM_BLOCK_BOOT_PROG_DATA_JobFinished(NvM_ServiceIdType ServiceId, NvM_RequestResultType JobResult);
Std_ReturnType TSC_NvM_Rte_Call_NvM_RpNotifyJobEnd_NVM_BLOCK_DARH_DiagnoseMasterEnable_JobFinished(NvM_ServiceIdType ServiceId, NvM_RequestResultType JobResult);
Std_ReturnType TSC_NvM_Rte_Call_NvM_RpNotifyJobEnd_NVM_BLOCK_DLOG_SvkEntry_JobFinished(NvM_ServiceIdType ServiceId, NvM_RequestResultType JobResult);
Std_ReturnType TSC_NvM_Rte_Call_NvM_RpNotifyJobEnd_OmcDependencyNVMData_JobFinished(NvM_ServiceIdType ServiceId, NvM_RequestResultType JobResult);




