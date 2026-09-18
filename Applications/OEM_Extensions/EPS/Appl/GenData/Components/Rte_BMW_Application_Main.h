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
 *          File:  Rte_BMW_Application_Main.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.16.0
 *                 RTE Core Version 1.16.0
 *       License:  Unlimited license CBD1700369 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <BMW_Application_Main>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_BMW_APPLICATION_MAIN_H
# define _RTE_BMW_APPLICATION_MAIN_H

# ifndef RTE_CORE
#  ifdef RTE_APPLICATION_HEADER_FILE
#   error Multiple application header files included.
#  endif
#  define RTE_APPLICATION_HEADER_FILE
#  ifndef RTE_PTR2ARRAYBASETYPE_PASSING
#   define RTE_PTR2ARRAYBASETYPE_PASSING
#  endif
# endif

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_BMW_Application_Main_Type.h"
# include "Rte_DataHandleType.h"


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Buffers for Mode Management
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint8, RTE_VAR_INIT) Rte_ModeMachine_Dcm_DcmModeRapidPowerShutDown_DcmModeRapidPowerShutDown; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */



# ifndef RTE_CORE
/**********************************************************************************************************************
 * Buffers for inter-runnable variables
 *********************************************************************************************************************/

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(BMW_Application_Reset_IRV, RTE_VAR_INIT) Rte_Irv_BMW_Application_Main_InterRunnableVariable; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Mode_<p>_<m>
 *********************************************************************************************************************/
#  define Rte_Mode_DcmEcuReset_DcmEcuReset() (RTE_MODE_DcmEcuReset_NONE) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Mode_DcmModeRapidPowerShutDown_DcmModeRapidPowerShutDown() (Rte_ModeMachine_Dcm_DcmModeRapidPowerShutDown_DcmModeRapidPowerShutDown) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Inter-runnable variables
 *********************************************************************************************************************/

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvRead_Dcm_BAC4_EcuReset_Execute_InterRunnableVariable() \
  Rte_Irv_BMW_Application_Main_InterRunnableVariable
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvWrite_Dcm_BAC4_EcuReset_Hard_InterRunnableVariable(data) \
  (Rte_Irv_BMW_Application_Main_InterRunnableVariable = (data))
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvWrite_Dcm_BAC4_Jump2Boot_InterRunnableVariable(data) \
  (Rte_Irv_BMW_Application_Main_InterRunnableVariable = (data))
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_OsApplication_QM_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint32, RTE_VAR_DEFAULT_RTE_OsApplication_QM_PIM_GROUP) Rte_BMW_Application_Main_PerInstanceMemory_Xcp; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_OsApplication_QM_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_PerInstanceMemory_Xcp() \
  (&Rte_BMW_Application_Main_PerInstanceMemory_Xcp) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define BMW_Application_Main_START_SEC_CODE
# include "BMW_Application_Main_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_Dcm_BAC4_EcuReset_Execute Dcm_BAC4_EcuReset_Execute
#  define RTE_RUNNABLE_Dcm_BAC4_EcuReset_Hard Dcm_BAC4_EcuReset_Hard
#  define RTE_RUNNABLE_Dcm_BAC4_Jump2Boot Dcm_BAC4_Jump2Boot
#  define RTE_RUNNABLE_Dcm_BAC4_RapidShutdownDisable Dcm_BAC4_RapidShutdownDisable
#  define RTE_RUNNABLE_Dcm_BAC4_RapidShutdownEnable Dcm_BAC4_RapidShutdownEnable
#  define RTE_RUNNABLE_Xcp_Event_Runnable Xcp_Event_Runnable
# endif

FUNC(void, BMW_Application_Main_CODE) Dcm_BAC4_EcuReset_Execute(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, BMW_Application_Main_CODE) Dcm_BAC4_EcuReset_Hard(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, BMW_Application_Main_CODE) Dcm_BAC4_Jump2Boot(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, BMW_Application_Main_CODE) Dcm_BAC4_RapidShutdownDisable(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, BMW_Application_Main_CODE) Dcm_BAC4_RapidShutdownEnable(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, BMW_Application_Main_CODE) Xcp_Event_Runnable(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define BMW_Application_Main_STOP_SEC_CODE
# include "BMW_Application_Main_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_BMW_APPLICATION_MAIN_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
