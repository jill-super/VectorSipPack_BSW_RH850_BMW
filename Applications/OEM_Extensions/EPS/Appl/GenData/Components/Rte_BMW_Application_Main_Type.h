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
 *          File:  Rte_BMW_Application_Main_Type.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.16.0
 *                 RTE Core Version 1.16.0
 *       License:  Unlimited license CBD1700369 for Nexteer Automotive Corporation
 *
 *   Description:  Application types header file for SW-C <BMW_Application_Main>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_BMW_APPLICATION_MAIN_TYPE_H
# define _RTE_BMW_APPLICATION_MAIN_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * Range, Invalidation, Enumeration and Bit Field Definitions
 *********************************************************************************************************************/

#  ifndef BMW_APPLICATION_RESET_HARD
#   define BMW_APPLICATION_RESET_HARD (10U)
#  endif

#  ifndef BMW_APPLICATION_RESET_PROGRAMMING
#   define BMW_APPLICATION_RESET_PROGRAMMING (20U)
#  endif

#  ifndef BMW_APPLICATION_RESET_INIT
#   define BMW_APPLICATION_RESET_INIT (255U)
#  endif

#  ifndef STARTUP
#   define STARTUP (0U)
#  endif

#  ifndef RUN
#   define RUN (1U)
#  endif

#  ifndef POST_RUN
#   define POST_RUN (2U)
#  endif

#  ifndef WAKEUP
#   define WAKEUP (3U)
#  endif

#  ifndef SHUTDOWN
#   define SHUTDOWN (4U)
#  endif

# endif /* RTE_CORE */


/**********************************************************************************************************************
 * Definitions for Mode Management
 *********************************************************************************************************************/
# ifndef RTE_MODETYPE_Bac4_ApplicationState
#  define RTE_MODETYPE_Bac4_ApplicationState
typedef Bac4_ApplicationStateType Rte_ModeType_Bac4_ApplicationState;
# endif
# ifndef RTE_MODETYPE_DcmEcuReset
#  define RTE_MODETYPE_DcmEcuReset
typedef uint8 Rte_ModeType_DcmEcuReset;
# endif
# ifndef RTE_MODETYPE_DcmModeRapidPowerShutDown
#  define RTE_MODETYPE_DcmModeRapidPowerShutDown
typedef uint8 Rte_ModeType_DcmModeRapidPowerShutDown;
# endif
# ifndef RTE_MODETYPE_WdgMMode
#  define RTE_MODETYPE_WdgMMode
typedef uint8 Rte_ModeType_WdgMMode;
# endif

# ifndef RTE_MODE_Bac4_ApplicationState_INIT
#  define RTE_MODE_Bac4_ApplicationState_INIT (0U)
# endif
# ifndef RTE_MODE_Bac4_ApplicationState_POST_RUN
#  define RTE_MODE_Bac4_ApplicationState_POST_RUN (1U)
# endif
# ifndef RTE_MODE_Bac4_ApplicationState_RUN
#  define RTE_MODE_Bac4_ApplicationState_RUN (2U)
# endif
# ifndef RTE_MODE_Bac4_ApplicationState_SHUTDOWN
#  define RTE_MODE_Bac4_ApplicationState_SHUTDOWN (3U)
# endif
# ifndef RTE_TRANSITION_Bac4_ApplicationState
#  define RTE_TRANSITION_Bac4_ApplicationState (4U)
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

# ifndef RTE_MODE_DcmModeRapidPowerShutDown_ENABLE_RAPIDPOWERSHUTDOWN
#  define RTE_MODE_DcmModeRapidPowerShutDown_ENABLE_RAPIDPOWERSHUTDOWN (0U)
# endif
# ifndef RTE_MODE_DcmModeRapidPowerShutDown_DISABLE_RAPIDPOWERSHUTDOWN
#  define RTE_MODE_DcmModeRapidPowerShutDown_DISABLE_RAPIDPOWERSHUTDOWN (1U)
# endif
# ifndef RTE_TRANSITION_DcmModeRapidPowerShutDown
#  define RTE_TRANSITION_DcmModeRapidPowerShutDown (2U)
# endif

# ifndef RTE_MODE_WdgMMode_SUPERVISION_DEACTIVATED
#  define RTE_MODE_WdgMMode_SUPERVISION_DEACTIVATED (0U)
# endif
# ifndef RTE_MODE_WdgMMode_SUPERVISION_EXPIRED
#  define RTE_MODE_WdgMMode_SUPERVISION_EXPIRED (1U)
# endif
# ifndef RTE_MODE_WdgMMode_SUPERVISION_FAILED
#  define RTE_MODE_WdgMMode_SUPERVISION_FAILED (2U)
# endif
# ifndef RTE_MODE_WdgMMode_SUPERVISION_OK
#  define RTE_MODE_WdgMMode_SUPERVISION_OK (3U)
# endif
# ifndef RTE_MODE_WdgMMode_SUPERVISION_STOPPED
#  define RTE_MODE_WdgMMode_SUPERVISION_STOPPED (4U)
# endif
# ifndef RTE_TRANSITION_WdgMMode
#  define RTE_TRANSITION_WdgMMode (5U)
# endif

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_BMW_APPLICATION_MAIN_TYPE_H */
