/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *
 *                 This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                 Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                 All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  LICENSE
 *  -------------------------------------------------------------------------------------------------------------------
 *            Module: Os
 *           Program: MSR BAC 4.x (MSR_Bmw_SLP4)
 *          Customer: Nexteer Automotive Corporation
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: Renesas RH850 P1M R7F701363EAFP
 *    License Scope : The usage is restricted to CBD1700369_D04
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Os_Cfg.h
 *   Generation Time: 2018-01-02 16:37:32
 *           Project: EPS - Version 1.0
 *          Delivery: CBD1700369_D04
 *      Tool Version: DaVinci Configurator (beta) 5.16.31 SP1
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 ! BETA VERSION                                                                                                       !
 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 ! These programs are fully operative programs. With regard to the fact that the programs are a beta-version only,    !
 ! Vector Informatik's liability shall be expressly excluded in cases of ordinary negligence, to the extent           !
 ! admissible by law or statute.                                                                                      !
 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
**********************************************************************************************************************/

#if !defined (OS_CFG_H)                                                              /* PRQA S 0883 */ /* MD_Os_0883 */
# define OS_CFG_H

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */

/* Os module declarations */

/* Os kernel module dependencies */

/* Os hal dependencies */
# include "Os_Hal_Cfg.h"


/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/*! Configuration major version identification. */
# define OS_CFG_MAJOR_VERSION                    (2U)

/*! Configuration minor version identification. */
# define OS_CFG_MINOR_VERSION                    (14U)


/*! Defines which platform is used. */
# define OS_CFG_PLATFORM_RH850     (STD_ON)

/*! Defines which derivative group is configured. */
# define OS_CFG_DERIVATIVEGROUP_RH850P1M     (STD_ON)

/*! Defines which derivative is configured. */
# define OS_CFG_DERIVATIVE_RH850_1363     (STD_ON)

/*! Defines which compiler is configured. */
# define OS_CFG_COMPILER_GREENHILLS     (STD_ON)


/*! Defines whether access macros to get context related information in the error hook are enabled (STD_ON) or not (STD_OFF). */
# define OS_CFG_ERR_PARAMETERACCESS              (STD_OFF)

/*! Defines whether access macros to get service ID information in the error hook are enabled (STD_ON) or not (STD_OFF). */
# define OS_CFG_ERR_GETSERVICEID                 (STD_OFF)

/*! Defines whether the pre-task hook is active (STD_ON) or not (STD_OFF). */
# define OS_CFG_PRETASKHOOK                      (STD_OFF)

/*! Defines whether the post-task hook is active (STD_ON) or not (STD_OFF). */
# define OS_CFG_POSTTASKHOOK                     (STD_OFF)

/*! Defines whether the OS shall call the panic hook (STD_ON) or not (STD_OFF). */
# define OS_CFG_PANICHOOK                        (STD_OFF)

/*! Defines whether the system startup hook is configured (STD_ON) or not (STD_OFF). */
# define OS_CFG_STARTUPHOOK_SYSTEM               (STD_ON)

/*! Defines whether the system shutdown hook is configured (STD_ON) or not (STD_OFF). */
# define OS_CFG_SHUTDOWNHOOK_SYSTEM              (STD_ON)

/*! Defines whether the system error hook is configured (STD_ON) or not (STD_OFF). */
# define OS_CFG_ERRORHOOK_SYSTEM                 (STD_ON)

/*! Defines whether the system protection hook is configured (STD_ON) or not (STD_OFF). */
# define OS_CFG_PROTECTIONHOOK_SYSTEM            (STD_OFF)

/*! Defines whether backward compatibility defines are needed (STD_ON) or not (STD_OFF). */
# define OS_CFG_PERIPHERAL_COMPATIBILITY         (STD_ON)


/* OS application modes */
# define DONOTCARE     ((AppModeType)0)
# define OS_APPMODE_NONE     ((AppModeType)0)
# define OSDEFAULTAPPMODE     ((AppModeType)1)
# define OS_APPMODE_ANY     ((AppModeType)255)


/* Event masks */
# define Rte_Ev_Cyclic2_Default_BSW_Sync_Task_0_5ms     ((EventMaskType)1ULL)
# define Rte_Ev_Cyclic2_OsTask_BSW_ASIL_0_10ms     ((EventMaskType)1ULL)
# define Rte_Ev_Cyclic2_OsTask_BSW_ASIL_0_20ms     ((EventMaskType)2ULL)
# define Rte_Ev_Cyclic2_OsTask_BSW_ASIL_0_2ms     ((EventMaskType)4ULL)
# define Rte_Ev_Cyclic2_OsTask_BSW_ASIL_0_5ms     ((EventMaskType)8ULL)
# define Rte_Ev_Cyclic2_OsTask_LowPrioNvm_0_10ms     ((EventMaskType)1ULL)
# define Rte_Ev_MS_Default_BAC_Appl_BMW_Task     ((EventMaskType)4ULL)
# define Rte_Ev_MS_Default_RTE_Mode_switch_Task     ((EventMaskType)4ULL)
# define Rte_Ev_Run1_Darh_QueueHandler     ((EventMaskType)1ULL)
# define Rte_Ev_Run1_StdDiag_SessionChange_DefaultSession     ((EventMaskType)1ULL)
# define Rte_Ev_Run1_StdDiag_SessionChange_OtherSession     ((EventMaskType)2ULL)
# define Rte_Ev_Run1_Stm_Runnable_InitialCELSupervision     ((EventMaskType)8ULL)
# define Rte_Ev_Run1_Stm_Runnable_StopCentralErrorLockSupervision     ((EventMaskType)16ULL)
# define Rte_Ev_Run1_SysTime_MainFunction     ((EventMaskType)2ULL)
# define Rte_Ev_Run1_SysTime_ReceiveSignal     ((EventMaskType)32ULL)
# define Rte_Ev_Run_BMW_Application_Connector_Dummy_BMW_Vin_Rx_Wrapper     ((EventMaskType)64ULL)
# define Rte_Ev_Run_BMW_Application_Connector_Dummy_Dlog_FirstStart_Dummy     ((EventMaskType)128ULL)
# define Rte_Ev_Run_BMW_Application_Main_Dcm_BAC4_EcuReset_Execute     ((EventMaskType)256ULL)
# define Rte_Ev_Run_BMW_Application_Main_Dcm_BAC4_EcuReset_Hard     ((EventMaskType)512ULL)
# define Rte_Ev_Run_BMW_Application_Main_Dcm_BAC4_Jump2Boot     ((EventMaskType)1024ULL)
# define Rte_Ev_Run_BMW_Application_Main_Dcm_BAC4_RapidShutdownDisable     ((EventMaskType)2048ULL)
# define Rte_Ev_Run_BMW_Application_Main_Dcm_BAC4_RapidShutdownEnable     ((EventMaskType)4096ULL)
# define Rte_Ev_Run_BMW_Application_Main_Xcp_Event_Runnable     ((EventMaskType)8192ULL)
# define Rte_Ev_Run_Bs_Bs_LifeCycleModeRequest     ((EventMaskType)16384ULL)
# define Rte_Ev_Run_BswM_BswM_Read_SWCModeReq_StdDiag_CommunicationModeDeclarationGroup     ((EventMaskType)16ULL)
# define Rte_Ev_Run_Darh_LifeCycleHandler     ((EventMaskType)8ULL)
# define Rte_Ev_Run_Dlog_Dlog_ModeSwitchAckLifeCycle     ((EventMaskType)32768ULL)
# define Rte_Ev_Run_Dlog_Dlog_ModeSwitchRequestLifeCycle     ((EventMaskType)65536ULL)
# define Rte_Ev_Run_Fee_30_SmallSector_Fee_30_SmallSector_MainFunction     ((EventMaskType)2ULL)
# define Rte_Ev_Run_IntegrationSample_IntegrationSampleTimerFunction     ((EventMaskType)131072ULL)
# define Rte_Ev_Run_IntegrationSample_R_IntegrationSample_EcuRunStateHandler     ((EventMaskType)262144ULL)
# define Rte_Ev_Run_IntegrationSample_R_Receive_SGG_Rx_CON_VEH     ((EventMaskType)524288ULL)
# define Rte_Ev_Run_IntegrationSample_R_Receive_SIG_MILE_KM_816_R     ((EventMaskType)1048576ULL)
# define Rte_Ev_Run_IntegrationSample_R_Receive_VehicleStatus     ((EventMaskType)2097152ULL)
# define Rte_Ev_Run_IntegrationSample_R_Timeout_SGG_Rx_CON_VEH     ((EventMaskType)4194304ULL)
# define Rte_Ev_Run_IntegrationSample_R_Timeout_VehicleStatus     ((EventMaskType)8388608ULL)
# define Rte_Ev_Run_Omc_LifeCycleHandler     ((EventMaskType)16777216ULL)
# define Rte_Ev_Run_StdDiag_LifeCycleHandler     ((EventMaskType)33554432ULL)
# define Rte_Ev_Run_Stm_Runnable_ErrorCentralErrorLock     ((EventMaskType)67108864ULL)
# define Rte_Ev_Run_Stm_Runnable_ErrorEnergyMode     ((EventMaskType)134217728ULL)
# define Rte_Ev_Run_Stm_Runnable_ErrorVehicleState     ((EventMaskType)268435456ULL)
# define Rte_Ev_Run_Stm_Runnable_ReceiveCentralErrorLock     ((EventMaskType)536870912ULL)
# define Rte_Ev_Run_Stm_Runnable_ReceiveEnergyMode     ((EventMaskType)1073741824ULL)
# define Rte_Ev_Run_Stm_Runnable_ReceiveVehicleState     ((EventMaskType)2147483648ULL)
# define Rte_Ev_Run_SysTime_LifeCycleHandler     ((EventMaskType)4294967296ULL)


/* Software counter timing macros */

/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


#endif /* OS_CFG_H */

/**********************************************************************************************************************
 *  END OF FILE: Os_Cfg.h
 *********************************************************************************************************************/
