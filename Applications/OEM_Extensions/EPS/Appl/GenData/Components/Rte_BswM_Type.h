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
 *          File:  Rte_BswM_Type.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.16.0
 *                 RTE Core Version 1.16.0
 *       License:  Unlimited license CBD1700369 for Nexteer Automotive Corporation
 *
 *   Description:  Application types header file for SW-C <BswM>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_BSWM_TYPE_H
# define _RTE_BSWM_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * Range, Invalidation, Enumeration and Bit Field Definitions
 *********************************************************************************************************************/

#  ifndef BS_INITIALIZED
#   define BS_INITIALIZED (0U)
#  endif

#  ifndef BS_RUNNING
#   define BS_RUNNING (1U)
#  endif

#  ifndef BS_STOPPED
#   define BS_STOPPED (2U)
#  endif

#  ifndef BswMRteMode
#   define BswMRteMode (0U)
#  endif

#  ifndef STARTUP
#   define STARTUP (0U)
#  endif

#  ifndef RUN
#   define RUN (1U)
#  endif

#  ifndef POSTRUN
#   define POSTRUN (2U)
#  endif

#  ifndef WAKEUP
#   define WAKEUP (3U)
#  endif

#  ifndef SHUTDOWN
#   define SHUTDOWN (4U)
#  endif

#  ifndef RELEASED
#   define RELEASED (0U)
#  endif

#  ifndef REQUESTED
#   define REQUESTED (1U)
#  endif

#  ifndef DARH_INITIALIZED
#   define DARH_INITIALIZED (0U)
#  endif

#  ifndef DARH_RUNNING
#   define DARH_RUNNING (1U)
#  endif

#  ifndef DARH_STOPPED
#   define DARH_STOPPED (2U)
#  endif

#  ifndef DCM_ENABLE_RX_TX_NORM
#   define DCM_ENABLE_RX_TX_NORM (0U)
#  endif

#  ifndef DCM_ENABLE_RX_DISABLE_TX_NORM
#   define DCM_ENABLE_RX_DISABLE_TX_NORM (1U)
#  endif

#  ifndef DCM_DISABLE_RX_ENABLE_TX_NORM
#   define DCM_DISABLE_RX_ENABLE_TX_NORM (2U)
#  endif

#  ifndef DCM_DISABLE_RX_TX_NORMAL
#   define DCM_DISABLE_RX_TX_NORMAL (3U)
#  endif

#  ifndef DCM_ENABLE_RX_TX_NM
#   define DCM_ENABLE_RX_TX_NM (4U)
#  endif

#  ifndef DCM_ENABLE_RX_DISABLE_TX_NM
#   define DCM_ENABLE_RX_DISABLE_TX_NM (5U)
#  endif

#  ifndef DCM_DISABLE_RX_ENABLE_TX_NM
#   define DCM_DISABLE_RX_ENABLE_TX_NM (6U)
#  endif

#  ifndef DCM_DISABLE_RX_TX_NM
#   define DCM_DISABLE_RX_TX_NM (7U)
#  endif

#  ifndef DCM_ENABLE_RX_TX_NORM_NM
#   define DCM_ENABLE_RX_TX_NORM_NM (8U)
#  endif

#  ifndef DCM_ENABLE_RX_DISABLE_TX_NORM_NM
#   define DCM_ENABLE_RX_DISABLE_TX_NORM_NM (9U)
#  endif

#  ifndef DCM_DISABLE_RX_ENABLE_TX_NORM_NM
#   define DCM_DISABLE_RX_ENABLE_TX_NORM_NM (10U)
#  endif

#  ifndef DCM_DISABLE_RX_TX_NORM_NM
#   define DCM_DISABLE_RX_TX_NORM_NM (11U)
#  endif

#  ifndef DCM_ENUM_DEFAULT_SESSION
#   define DCM_ENUM_DEFAULT_SESSION (1U)
#  endif

#  ifndef DCM_ENUM_PROGRAMMING_SESSION
#   define DCM_ENUM_PROGRAMMING_SESSION (2U)
#  endif

#  ifndef DCM_ENUM_EXTENDED_SESSION
#   define DCM_ENUM_EXTENDED_SESSION (3U)
#  endif

#  ifndef DCM_ENUM_DcmDspSessionRow_CODING_SESSION
#   define DCM_ENUM_DcmDspSessionRow_CODING_SESSION (65U)
#  endif

#  ifndef DCM_ENUM_DcmDspSessionRow_SWT_SESSION
#   define DCM_ENUM_DcmDspSessionRow_SWT_SESSION (66U)
#  endif

#  ifndef DCM_ENUM_DcmDspSessionRow_HDD_DOWNLOAD_SESSION
#   define DCM_ENUM_DcmDspSessionRow_HDD_DOWNLOAD_SESSION (67U)
#  endif

#  ifndef DCM_ENUM_NONE
#   define DCM_ENUM_NONE (0U)
#  endif

#  ifndef DCM_ENUM_HARD
#   define DCM_ENUM_HARD (1U)
#  endif

#  ifndef DCM_ENUM_KEYONOFF
#   define DCM_ENUM_KEYONOFF (2U)
#  endif

#  ifndef DCM_ENUM_SOFT
#   define DCM_ENUM_SOFT (3U)
#  endif

#  ifndef DCM_ENUM_JUMPTOBOOTLOADER
#   define DCM_ENUM_JUMPTOBOOTLOADER (4U)
#  endif

#  ifndef DCM_ENUM_JUMPTOSYSSUPPLIERBOOTLOADER
#   define DCM_ENUM_JUMPTOSYSSUPPLIERBOOTLOADER (5U)
#  endif

#  ifndef DCM_ENUM_EXECUTE
#   define DCM_ENUM_EXECUTE (6U)
#  endif

#  ifndef DLOG_INITIALIZED
#   define DLOG_INITIALIZED (0U)
#  endif

#  ifndef DLOG_RUNNING
#   define DLOG_RUNNING (1U)
#  endif

#  ifndef DLOG_STOPPED
#   define DLOG_STOPPED (2U)
#  endif

#  ifndef IntegrationSample_INVALID_STATE
#   define IntegrationSample_INVALID_STATE (0U)
#  endif

#  ifndef IntegrationSample_BSW_START
#   define IntegrationSample_BSW_START (1U)
#  endif

#  ifndef IntegrationSample_STARTUP
#   define IntegrationSample_STARTUP (2U)
#  endif

#  ifndef IntegrationSample_NORMAL_OPERATION
#   define IntegrationSample_NORMAL_OPERATION (3U)
#  endif

#  ifndef IntegrationSample_SHUTDOWN
#   define IntegrationSample_SHUTDOWN (4U)
#  endif

#  ifndef IntegrationSample_Timer_FIRE
#   define IntegrationSample_Timer_FIRE (0U)
#  endif

#  ifndef IntegrationSample_Timer_IDLE
#   define IntegrationSample_Timer_IDLE (1U)
#  endif

#  ifndef IntegrationSample_Timer_RUNNING
#   define IntegrationSample_Timer_RUNNING (2U)
#  endif

#  ifndef DISABLE_RX_AND_TX_NORMAL
#   define DISABLE_RX_AND_TX_NORMAL (0U)
#  endif

#  ifndef DISABLE_RX_ENABLE_TX_NORMAL
#   define DISABLE_RX_ENABLE_TX_NORMAL (1U)
#  endif

#  ifndef ENABLE_RX_AND_TX_NORMAL
#   define ENABLE_RX_AND_TX_NORMAL (2U)
#  endif

#  ifndef ENABLE_RX_DISABLE_TX_NORMAL
#   define ENABLE_RX_DISABLE_TX_NORMAL (3U)
#  endif

#  ifndef OMC_INITIALIZED
#   define OMC_INITIALIZED (0U)
#  endif

#  ifndef OMC_RUNNING
#   define OMC_RUNNING (1U)
#  endif

#  ifndef OMC_STOPPED
#   define OMC_STOPPED (2U)
#  endif

#  ifndef STDDIAG_INITIALIZED
#   define STDDIAG_INITIALIZED (0U)
#  endif

#  ifndef STDDIAG_RUNNING
#   define STDDIAG_RUNNING (1U)
#  endif

#  ifndef STDDIAG_STOPPED
#   define STDDIAG_STOPPED (2U)
#  endif

#  ifndef STM_CEL_UNLOCKED
#   define STM_CEL_UNLOCKED (0U)
#  endif

#  ifndef STM_CEL_LOCKED
#   define STM_CEL_LOCKED (1U)
#  endif

#  ifndef STM_CEL_INVALID
#   define STM_CEL_INVALID (3U)
#  endif

#  ifndef SYSTIME_INITIALIZED
#   define SYSTIME_INITIALIZED (0U)
#  endif

#  ifndef SYSTIME_RUNNING
#   define SYSTIME_RUNNING (1U)
#  endif

#  ifndef SYSTIME_STOPPED
#   define SYSTIME_STOPPED (2U)
#  endif

# endif /* RTE_CORE */


/**********************************************************************************************************************
 * Definitions for Mode Management
 *********************************************************************************************************************/
# ifndef RTE_MODETYPE_Bs_LifeCycle
#  define RTE_MODETYPE_Bs_LifeCycle
typedef Bs_LifeCycleRequestType Rte_ModeType_Bs_LifeCycle;
# endif
# ifndef RTE_MODETYPE_BswMRteModeDclGroup
#  define RTE_MODETYPE_BswMRteModeDclGroup
typedef BswM_BswMRteModeDclGroup Rte_ModeType_BswMRteModeDclGroup;
# endif
# ifndef RTE_MODETYPE_DarhReportErrorMode
#  define RTE_MODETYPE_DarhReportErrorMode
typedef uint8 Rte_ModeType_DarhReportErrorMode;
# endif
# ifndef RTE_MODETYPE_Darh_LifeCycle
#  define RTE_MODETYPE_Darh_LifeCycle
typedef Darh_LifeCycleRequestType Rte_ModeType_Darh_LifeCycle;
# endif
# ifndef RTE_MODETYPE_DcmCommunicationControl
#  define RTE_MODETYPE_DcmCommunicationControl
typedef Dcm_CommunicationModeType Rte_ModeType_DcmCommunicationControl;
# endif
# ifndef RTE_MODETYPE_DcmDiagnosticSessionControl
#  define RTE_MODETYPE_DcmDiagnosticSessionControl
typedef Dcm_DiagnosticSessionControlType Rte_ModeType_DcmDiagnosticSessionControl;
# endif
# ifndef RTE_MODETYPE_DcmEcuReset
#  define RTE_MODETYPE_DcmEcuReset
typedef Dcm_EcuResetType Rte_ModeType_DcmEcuReset;
# endif
# ifndef RTE_MODETYPE_Dlog_LifeCycle
#  define RTE_MODETYPE_Dlog_LifeCycle
typedef Dlog_LifeCycleRequestType Rte_ModeType_Dlog_LifeCycle;
# endif
# ifndef RTE_MODETYPE_ESH_Mode
#  define RTE_MODETYPE_ESH_Mode
typedef BswM_ESH_Mode Rte_ModeType_ESH_Mode;
# endif
# ifndef RTE_MODETYPE_ESH_RunRequest
#  define RTE_MODETYPE_ESH_RunRequest
typedef BswM_ESH_RunRequest Rte_ModeType_ESH_RunRequest;
# endif
# ifndef RTE_MODETYPE_ErrorMemoryLockSignalReceptionMode
#  define RTE_MODETYPE_ErrorMemoryLockSignalReceptionMode
typedef uint8 Rte_ModeType_ErrorMemoryLockSignalReceptionMode;
# endif
# ifndef RTE_MODETYPE_IntegrationSample_EcuRunState
#  define RTE_MODETYPE_IntegrationSample_EcuRunState
typedef IntegrationSample_EcuRunStateModeRequestType Rte_ModeType_IntegrationSample_EcuRunState;
# endif
# ifndef RTE_MODETYPE_IntegrationSample_SimpleTimerState
#  define RTE_MODETYPE_IntegrationSample_SimpleTimerState
typedef IntegrationSample_SimpleTimerStateType Rte_ModeType_IntegrationSample_SimpleTimerState;
# endif
# ifndef RTE_MODETYPE_Omc_LifeCycle
#  define RTE_MODETYPE_Omc_LifeCycle
typedef Omc_LifeCycleRequestType Rte_ModeType_Omc_LifeCycle;
# endif
# ifndef RTE_MODETYPE_StdDiag_LifeCycle
#  define RTE_MODETYPE_StdDiag_LifeCycle
typedef StdDiag_LifeCycleRequestType Rte_ModeType_StdDiag_LifeCycle;
# endif
# ifndef RTE_MODETYPE_StdDiag_NormalCommunicationModeGroup
#  define RTE_MODETYPE_StdDiag_NormalCommunicationModeGroup
typedef NormalCommunicationModeType Rte_ModeType_StdDiag_NormalCommunicationModeGroup;
# endif
# ifndef RTE_MODETYPE_StdDiag_SessionModeGroup
#  define RTE_MODETYPE_StdDiag_SessionModeGroup
typedef uint8 Rte_ModeType_StdDiag_SessionModeGroup;
# endif
# ifndef RTE_MODETYPE_Stm_CentralErrorLockMode
#  define RTE_MODETYPE_Stm_CentralErrorLockMode
typedef Stm_CentralErrorLockType Rte_ModeType_Stm_CentralErrorLockMode;
# endif
# ifndef RTE_MODETYPE_SysTime_LifeCycle
#  define RTE_MODETYPE_SysTime_LifeCycle
typedef SysTime_LifeCycleRequestType Rte_ModeType_SysTime_LifeCycle;
# endif

# ifndef RTE_MODE_Bs_LifeCycle_BS_INITIALIZED
#  define RTE_MODE_Bs_LifeCycle_BS_INITIALIZED (0U)
# endif
# ifndef RTE_MODE_Bs_LifeCycle_BS_RUNNING
#  define RTE_MODE_Bs_LifeCycle_BS_RUNNING (1U)
# endif
# ifndef RTE_MODE_Bs_LifeCycle_BS_STOPPED
#  define RTE_MODE_Bs_LifeCycle_BS_STOPPED (2U)
# endif
# ifndef RTE_TRANSITION_Bs_LifeCycle
#  define RTE_TRANSITION_Bs_LifeCycle (3U)
# endif

# ifndef RTE_MODE_BswMRteModeDclGroup_BswMRteMode
#  define RTE_MODE_BswMRteModeDclGroup_BswMRteMode (0U)
# endif
# ifndef RTE_TRANSITION_BswMRteModeDclGroup
#  define RTE_TRANSITION_BswMRteModeDclGroup (1U)
# endif

# ifndef RTE_MODE_DarhReportErrorMode_DARH_REPORT_ERROR_ACTIVE
#  define RTE_MODE_DarhReportErrorMode_DARH_REPORT_ERROR_ACTIVE (0U)
# endif
# ifndef RTE_MODE_DarhReportErrorMode_DARH_REPORT_ERROR_INACTIVE
#  define RTE_MODE_DarhReportErrorMode_DARH_REPORT_ERROR_INACTIVE (1U)
# endif
# ifndef RTE_TRANSITION_DarhReportErrorMode
#  define RTE_TRANSITION_DarhReportErrorMode (2U)
# endif

# ifndef RTE_MODE_Darh_LifeCycle_DARH_INITIALIZED
#  define RTE_MODE_Darh_LifeCycle_DARH_INITIALIZED (0U)
# endif
# ifndef RTE_MODE_Darh_LifeCycle_DARH_RUNNING
#  define RTE_MODE_Darh_LifeCycle_DARH_RUNNING (1U)
# endif
# ifndef RTE_MODE_Darh_LifeCycle_DARH_STOPPED
#  define RTE_MODE_Darh_LifeCycle_DARH_STOPPED (2U)
# endif
# ifndef RTE_TRANSITION_Darh_LifeCycle
#  define RTE_TRANSITION_Darh_LifeCycle (3U)
# endif

# ifndef RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM
#  define RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM (0U)
# endif
# ifndef RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NORM
#  define RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NORM (1U)
# endif
# ifndef RTE_MODE_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NORM
#  define RTE_MODE_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NORM (2U)
# endif
# ifndef RTE_MODE_DcmCommunicationControl_DCM_DISABLE_RX_TX_NORMAL
#  define RTE_MODE_DcmCommunicationControl_DCM_DISABLE_RX_TX_NORMAL (3U)
# endif
# ifndef RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_TX_NM
#  define RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_TX_NM (4U)
# endif
# ifndef RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NM
#  define RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NM (5U)
# endif
# ifndef RTE_MODE_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NM
#  define RTE_MODE_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NM (6U)
# endif
# ifndef RTE_MODE_DcmCommunicationControl_DCM_DISABLE_RX_TX_NM
#  define RTE_MODE_DcmCommunicationControl_DCM_DISABLE_RX_TX_NM (7U)
# endif
# ifndef RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM_NM
#  define RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM_NM (8U)
# endif
# ifndef RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NORM_NM
#  define RTE_MODE_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NORM_NM (9U)
# endif
# ifndef RTE_MODE_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NORM_NM
#  define RTE_MODE_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NORM_NM (10U)
# endif
# ifndef RTE_MODE_DcmCommunicationControl_DCM_DISABLE_RX_TX_NORM_NM
#  define RTE_MODE_DcmCommunicationControl_DCM_DISABLE_RX_TX_NORM_NM (11U)
# endif
# ifndef RTE_TRANSITION_DcmCommunicationControl
#  define RTE_TRANSITION_DcmCommunicationControl (12U)
# endif

# ifndef RTE_MODE_DcmDiagnosticSessionControl_DEFAULT_SESSION
#  define RTE_MODE_DcmDiagnosticSessionControl_DEFAULT_SESSION (1U)
# endif
# ifndef RTE_MODE_DcmDiagnosticSessionControl_PROGRAMMING_SESSION
#  define RTE_MODE_DcmDiagnosticSessionControl_PROGRAMMING_SESSION (2U)
# endif
# ifndef RTE_MODE_DcmDiagnosticSessionControl_EXTENDED_SESSION
#  define RTE_MODE_DcmDiagnosticSessionControl_EXTENDED_SESSION (3U)
# endif
# ifndef RTE_MODE_DcmDiagnosticSessionControl_DcmDspSessionRow_CODING_SESSION
#  define RTE_MODE_DcmDiagnosticSessionControl_DcmDspSessionRow_CODING_SESSION (65U)
# endif
# ifndef RTE_MODE_DcmDiagnosticSessionControl_DcmDspSessionRow_SWT_SESSION
#  define RTE_MODE_DcmDiagnosticSessionControl_DcmDspSessionRow_SWT_SESSION (66U)
# endif
# ifndef RTE_MODE_DcmDiagnosticSessionControl_DcmDspSessionRow_HDD_DOWNLOAD_SESSION
#  define RTE_MODE_DcmDiagnosticSessionControl_DcmDspSessionRow_HDD_DOWNLOAD_SESSION (67U)
# endif
# ifndef RTE_TRANSITION_DcmDiagnosticSessionControl
#  define RTE_TRANSITION_DcmDiagnosticSessionControl (255U)
# endif

# ifndef RTE_MODE_DcmEcuReset_EXECUTE
#  define RTE_MODE_DcmEcuReset_EXECUTE (0U)
# endif
# ifndef RTE_MODE_DcmEcuReset_HARD
#  define RTE_MODE_DcmEcuReset_HARD (1U)
# endif
# ifndef RTE_MODE_DcmEcuReset_JUMPTOBOOTLOADER
#  define RTE_MODE_DcmEcuReset_JUMPTOBOOTLOADER (2U)
# endif
# ifndef RTE_MODE_DcmEcuReset_JUMPTOSYSSUPPLIERBOOTLOADER
#  define RTE_MODE_DcmEcuReset_JUMPTOSYSSUPPLIERBOOTLOADER (3U)
# endif
# ifndef RTE_MODE_DcmEcuReset_KEYONOFF
#  define RTE_MODE_DcmEcuReset_KEYONOFF (4U)
# endif
# ifndef RTE_MODE_DcmEcuReset_NONE
#  define RTE_MODE_DcmEcuReset_NONE (5U)
# endif
# ifndef RTE_MODE_DcmEcuReset_SOFT
#  define RTE_MODE_DcmEcuReset_SOFT (6U)
# endif
# ifndef RTE_TRANSITION_DcmEcuReset
#  define RTE_TRANSITION_DcmEcuReset (7U)
# endif

# ifndef RTE_MODE_Dlog_LifeCycle_DLOG_INITIALIZED
#  define RTE_MODE_Dlog_LifeCycle_DLOG_INITIALIZED (0U)
# endif
# ifndef RTE_MODE_Dlog_LifeCycle_DLOG_RUNNING
#  define RTE_MODE_Dlog_LifeCycle_DLOG_RUNNING (1U)
# endif
# ifndef RTE_MODE_Dlog_LifeCycle_DLOG_STOPPED
#  define RTE_MODE_Dlog_LifeCycle_DLOG_STOPPED (2U)
# endif
# ifndef RTE_TRANSITION_Dlog_LifeCycle
#  define RTE_TRANSITION_Dlog_LifeCycle (3U)
# endif

# ifndef RTE_MODE_ESH_Mode_POSTRUN
#  define RTE_MODE_ESH_Mode_POSTRUN (0U)
# endif
# ifndef RTE_MODE_ESH_Mode_RUN
#  define RTE_MODE_ESH_Mode_RUN (1U)
# endif
# ifndef RTE_MODE_ESH_Mode_SHUTDOWN
#  define RTE_MODE_ESH_Mode_SHUTDOWN (2U)
# endif
# ifndef RTE_MODE_ESH_Mode_STARTUP
#  define RTE_MODE_ESH_Mode_STARTUP (3U)
# endif
# ifndef RTE_MODE_ESH_Mode_WAKEUP
#  define RTE_MODE_ESH_Mode_WAKEUP (4U)
# endif
# ifndef RTE_TRANSITION_ESH_Mode
#  define RTE_TRANSITION_ESH_Mode (5U)
# endif

# ifndef RTE_MODE_ESH_RunRequest_RELEASED
#  define RTE_MODE_ESH_RunRequest_RELEASED (0U)
# endif
# ifndef RTE_MODE_ESH_RunRequest_REQUESTED
#  define RTE_MODE_ESH_RunRequest_REQUESTED (1U)
# endif
# ifndef RTE_TRANSITION_ESH_RunRequest
#  define RTE_TRANSITION_ESH_RunRequest (2U)
# endif

# ifndef RTE_MODE_ErrorMemoryLockSignalReceptionMode_EM_LOCK_NOT_RECEIVABLE
#  define RTE_MODE_ErrorMemoryLockSignalReceptionMode_EM_LOCK_NOT_RECEIVABLE (0U)
# endif
# ifndef RTE_MODE_ErrorMemoryLockSignalReceptionMode_EM_LOCK_RECEIVABLE
#  define RTE_MODE_ErrorMemoryLockSignalReceptionMode_EM_LOCK_RECEIVABLE (1U)
# endif
# ifndef RTE_TRANSITION_ErrorMemoryLockSignalReceptionMode
#  define RTE_TRANSITION_ErrorMemoryLockSignalReceptionMode (2U)
# endif

# ifndef RTE_MODE_IntegrationSample_EcuRunState_IntegrationSample_INVALID_STATE
#  define RTE_MODE_IntegrationSample_EcuRunState_IntegrationSample_INVALID_STATE (0U)
# endif
# ifndef RTE_MODE_IntegrationSample_EcuRunState_IntegrationSample_BSW_START
#  define RTE_MODE_IntegrationSample_EcuRunState_IntegrationSample_BSW_START (1U)
# endif
# ifndef RTE_MODE_IntegrationSample_EcuRunState_IntegrationSample_STARTUP
#  define RTE_MODE_IntegrationSample_EcuRunState_IntegrationSample_STARTUP (2U)
# endif
# ifndef RTE_MODE_IntegrationSample_EcuRunState_IntegrationSample_NORMAL_OPERATION
#  define RTE_MODE_IntegrationSample_EcuRunState_IntegrationSample_NORMAL_OPERATION (3U)
# endif
# ifndef RTE_MODE_IntegrationSample_EcuRunState_IntegrationSample_SHUTDOWN
#  define RTE_MODE_IntegrationSample_EcuRunState_IntegrationSample_SHUTDOWN (4U)
# endif
# ifndef RTE_TRANSITION_IntegrationSample_EcuRunState
#  define RTE_TRANSITION_IntegrationSample_EcuRunState (5U)
# endif

# ifndef RTE_MODE_IntegrationSample_SimpleTimerState_IntegrationSample_Timer_IDLE
#  define RTE_MODE_IntegrationSample_SimpleTimerState_IntegrationSample_Timer_IDLE (0U)
# endif
# ifndef RTE_MODE_IntegrationSample_SimpleTimerState_IntegrationSample_Timer_RUNNING
#  define RTE_MODE_IntegrationSample_SimpleTimerState_IntegrationSample_Timer_RUNNING (1U)
# endif
# ifndef RTE_MODE_IntegrationSample_SimpleTimerState_IntegrationSample_Timer_FIRE
#  define RTE_MODE_IntegrationSample_SimpleTimerState_IntegrationSample_Timer_FIRE (2U)
# endif
# ifndef RTE_TRANSITION_IntegrationSample_SimpleTimerState
#  define RTE_TRANSITION_IntegrationSample_SimpleTimerState (3U)
# endif

# ifndef RTE_MODE_Omc_LifeCycle_OMC_INITIALIZED
#  define RTE_MODE_Omc_LifeCycle_OMC_INITIALIZED (0U)
# endif
# ifndef RTE_MODE_Omc_LifeCycle_OMC_RUNNING
#  define RTE_MODE_Omc_LifeCycle_OMC_RUNNING (1U)
# endif
# ifndef RTE_MODE_Omc_LifeCycle_OMC_STOPPED
#  define RTE_MODE_Omc_LifeCycle_OMC_STOPPED (2U)
# endif
# ifndef RTE_TRANSITION_Omc_LifeCycle
#  define RTE_TRANSITION_Omc_LifeCycle (3U)
# endif

# ifndef RTE_MODE_StdDiag_LifeCycle_STDDIAG_INITIALIZED
#  define RTE_MODE_StdDiag_LifeCycle_STDDIAG_INITIALIZED (0U)
# endif
# ifndef RTE_MODE_StdDiag_LifeCycle_STDDIAG_RUNNING
#  define RTE_MODE_StdDiag_LifeCycle_STDDIAG_RUNNING (1U)
# endif
# ifndef RTE_MODE_StdDiag_LifeCycle_STDDIAG_STOPPED
#  define RTE_MODE_StdDiag_LifeCycle_STDDIAG_STOPPED (2U)
# endif
# ifndef RTE_TRANSITION_StdDiag_LifeCycle
#  define RTE_TRANSITION_StdDiag_LifeCycle (3U)
# endif

# ifndef RTE_MODE_StdDiag_NormalCommunicationModeGroup_DISABLE_RX_AND_TX_NORMAL
#  define RTE_MODE_StdDiag_NormalCommunicationModeGroup_DISABLE_RX_AND_TX_NORMAL (0U)
# endif
# ifndef RTE_MODE_StdDiag_NormalCommunicationModeGroup_DISABLE_RX_ENABLE_TX_NORMAL
#  define RTE_MODE_StdDiag_NormalCommunicationModeGroup_DISABLE_RX_ENABLE_TX_NORMAL (1U)
# endif
# ifndef RTE_MODE_StdDiag_NormalCommunicationModeGroup_ENABLE_RX_AND_TX_NORMAL
#  define RTE_MODE_StdDiag_NormalCommunicationModeGroup_ENABLE_RX_AND_TX_NORMAL (2U)
# endif
# ifndef RTE_MODE_StdDiag_NormalCommunicationModeGroup_ENABLE_RX_DISABLE_TX_NORMAL
#  define RTE_MODE_StdDiag_NormalCommunicationModeGroup_ENABLE_RX_DISABLE_TX_NORMAL (3U)
# endif
# ifndef RTE_TRANSITION_StdDiag_NormalCommunicationModeGroup
#  define RTE_TRANSITION_StdDiag_NormalCommunicationModeGroup (4U)
# endif

# ifndef RTE_MODE_StdDiag_SessionModeGroup_STDDIAG_DEFAULT_SESSION
#  define RTE_MODE_StdDiag_SessionModeGroup_STDDIAG_DEFAULT_SESSION (0U)
# endif
# ifndef RTE_MODE_StdDiag_SessionModeGroup_STDDIAG_OTHER_SESSION
#  define RTE_MODE_StdDiag_SessionModeGroup_STDDIAG_OTHER_SESSION (1U)
# endif
# ifndef RTE_TRANSITION_StdDiag_SessionModeGroup
#  define RTE_TRANSITION_StdDiag_SessionModeGroup (2U)
# endif

# ifndef RTE_MODE_Stm_CentralErrorLockMode_STM_CEL_INVALID
#  define RTE_MODE_Stm_CentralErrorLockMode_STM_CEL_INVALID (0U)
# endif
# ifndef RTE_MODE_Stm_CentralErrorLockMode_STM_CEL_LOCKED
#  define RTE_MODE_Stm_CentralErrorLockMode_STM_CEL_LOCKED (1U)
# endif
# ifndef RTE_MODE_Stm_CentralErrorLockMode_STM_CEL_UNLOCKED
#  define RTE_MODE_Stm_CentralErrorLockMode_STM_CEL_UNLOCKED (2U)
# endif
# ifndef RTE_TRANSITION_Stm_CentralErrorLockMode
#  define RTE_TRANSITION_Stm_CentralErrorLockMode (3U)
# endif

# ifndef RTE_MODE_SysTime_LifeCycle_SYSTIME_INITIALIZED
#  define RTE_MODE_SysTime_LifeCycle_SYSTIME_INITIALIZED (0U)
# endif
# ifndef RTE_MODE_SysTime_LifeCycle_SYSTIME_RUNNING
#  define RTE_MODE_SysTime_LifeCycle_SYSTIME_RUNNING (1U)
# endif
# ifndef RTE_MODE_SysTime_LifeCycle_SYSTIME_STOPPED
#  define RTE_MODE_SysTime_LifeCycle_SYSTIME_STOPPED (2U)
# endif
# ifndef RTE_TRANSITION_SysTime_LifeCycle
#  define RTE_TRANSITION_SysTime_LifeCycle (3U)
# endif

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_BSWM_TYPE_H */
