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
 *          File:  Os_Cfg.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.16.0
 *                 RTE Core Version 1.16.0
 *       License:  Unlimited license CBD1700369 for Nexteer Automotive Corporation
 *
 *   Description:  Os definitions
 *********************************************************************************************************************/

#ifndef _OS_CFG_H_
# define _OS_CFG_H_

/* Os definitions */

/* Tasks */
# define Default_BAC_Appl_BMW_Task (0U)
# define Default_BSW_Sync_Task (1U)
# define Default_RTE_Mode_switch_Task (2U)
# define OsTask_BSW_ASIL (3U)
# define OsTask_LowPrioNvm (4U)

/* Alarms */
# define Rte_Al_TE_Darh_QueueHandler (0U)
# define Rte_Al_TE_SysTime_MainFunction (1U)
# define Rte_Al_TE2_Default_BSW_Sync_Task_0_5ms (2U)
# define Rte_Al_TE_BMW_Application_Main_Xcp_Event_Runnable (3U)
# define Rte_Al_TE_IntegrationSample_IntegrationSampleTimerFunction (4U)
# define Rte_Al_TE2_OsTask_BSW_ASIL_0_10ms (5U)
# define Rte_Al_TE2_OsTask_BSW_ASIL_0_20ms (6U)
# define Rte_Al_TE2_OsTask_BSW_ASIL_0_2ms (7U)
# define Rte_Al_TE2_OsTask_BSW_ASIL_0_5ms (8U)
# define Rte_Al_TE2_OsTask_LowPrioNvm_0_10ms (9U)
# define Rte_Al_TE_Fee_30_SmallSector_Fee_30_SmallSector_MainFunction (10U)

/* Events */
# define Rte_Ev_Cyclic2_Default_BSW_Sync_Task_0_5ms (0x01)
# define Rte_Ev_Cyclic2_OsTask_BSW_ASIL_0_10ms (0x02)
# define Rte_Ev_Cyclic2_OsTask_BSW_ASIL_0_20ms (0x10)
# define Rte_Ev_Cyclic2_OsTask_BSW_ASIL_0_2ms (0x04)
# define Rte_Ev_Cyclic2_OsTask_BSW_ASIL_0_5ms (0x08)
# define Rte_Ev_Cyclic2_OsTask_LowPrioNvm_0_10ms (0x01)
# define Rte_Ev_MS_Default_BAC_Appl_BMW_Task (0x04)
# define Rte_Ev_MS_Default_RTE_Mode_switch_Task (0x04)
# define Rte_Ev_Run1_Darh_QueueHandler (0x08)
# define Rte_Ev_Run1_StdDiag_SessionChange_DefaultSession (0x200)
# define Rte_Ev_Run1_StdDiag_SessionChange_OtherSession (0x1000)
# define Rte_Ev_Run1_Stm_Runnable_InitialCELSupervision (0x80)
# define Rte_Ev_Run1_Stm_Runnable_StopCentralErrorLockSupervision (0x01)
# define Rte_Ev_Run1_SysTime_MainFunction (0x01)
# define Rte_Ev_Run1_SysTime_ReceiveSignal (0x40)
# define Rte_Ev_Run_BMW_Application_Connector_Dummy_BMW_Vin_Rx_Wrapper (0x100)
# define Rte_Ev_Run_BMW_Application_Connector_Dummy_Dlog_FirstStart_Dummy (0x100000)
# define Rte_Ev_Run_BMW_Application_Main_Dcm_BAC4_EcuReset_Execute (0x08)
# define Rte_Ev_Run_BMW_Application_Main_Dcm_BAC4_EcuReset_Hard (0x20000000)
# define Rte_Ev_Run_BMW_Application_Main_Dcm_BAC4_Jump2Boot (0x20)
# define Rte_Ev_Run_BMW_Application_Main_Dcm_BAC4_RapidShutdownDisable (0x80000)
# define Rte_Ev_Run_BMW_Application_Main_Dcm_BAC4_RapidShutdownEnable (0x8000)
# define Rte_Ev_Run_BMW_Application_Main_Xcp_Event_Runnable (0x40000)
# define Rte_Ev_Run_Bs_Bs_LifeCycleModeRequest (0x2000)
# define Rte_Ev_Run_BswM_BswM_Read_SWCModeReq_StdDiag_CommunicationModeDeclarationGroup (0x01)
# define Rte_Ev_Run_Darh_LifeCycleHandler (0x02)
# define Rte_Ev_Run_Dlog_Dlog_ModeSwitchAckLifeCycle (0x400)
# define Rte_Ev_Run_Dlog_Dlog_ModeSwitchRequestLifeCycle (0x10000000)
# define Rte_Ev_Run_Fee_30_SmallSector_Fee_30_SmallSector_MainFunction (0x02)
# define Rte_Ev_Run_IntegrationSample_IntegrationSampleTimerFunction (0x20000)
# define Rte_Ev_Run_IntegrationSample_R_IntegrationSample_EcuRunStateHandler (0x80000000)
# define Rte_Ev_Run_IntegrationSample_R_Receive_SGG_Rx_CON_VEH (0x200000)
# define Rte_Ev_Run_IntegrationSample_R_Receive_SIG_MILE_KM_816_R (0x4000000)
# define Rte_Ev_Run_IntegrationSample_R_Receive_VehicleStatus (0x40000000)
# define Rte_Ev_Run_IntegrationSample_R_Timeout_SGG_Rx_CON_VEH (0x800)
# define Rte_Ev_Run_IntegrationSample_R_Timeout_VehicleStatus (0x400000)
# define Rte_Ev_Run_Omc_LifeCycleHandler (0x02)
# define Rte_Ev_Run_StdDiag_LifeCycleHandler (0x10)
# define Rte_Ev_Run_Stm_Runnable_ErrorCentralErrorLock (0x2000000)
# define Rte_Ev_Run_Stm_Runnable_ErrorEnergyMode (0x10000)
# define Rte_Ev_Run_Stm_Runnable_ErrorVehicleState (0x1000000)
# define Rte_Ev_Run_Stm_Runnable_ReceiveCentralErrorLock (0x8000000)
# define Rte_Ev_Run_Stm_Runnable_ReceiveEnergyMode (0x800000)
# define Rte_Ev_Run_Stm_Runnable_ReceiveVehicleState (0x4000)
# define Rte_Ev_Run_SysTime_LifeCycleHandler (0x100000000)

/* Spinlocks */

/* Resources */

/* ScheduleTables */

/* Cores */
# include "usrostyp.h"

/* Trusted Functions */


#endif /* _OS_CFG_H_ */
