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
 *          File:  Rte_Stm.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.16.0
 *                 RTE Core Version 1.16.0
 *       License:  Unlimited license CBD1700369 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <Stm>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_STM_H
# define _RTE_STM_H

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

# include "Rte_Stm_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(Stm_CentralErrorLockType, RTE_VAR_INIT) Rte_IntegrationSample_PP_Stm_CEL_Signal_centralErrorLock; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Stm_VehicleStateType, RTE_VAR_INIT) Rte_IntegrationSample_PP_IS_ST_CON_VEH_VehicleState; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_CentralErrorLockRx_centralErrorLock (3U)
#  define Rte_InitValue_EnergyModeRx_energyState (15U)
#  define Rte_InitValue_VehicleStateRx_VehicleState (0U)
# endif


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Stm_CentralErrorLockType, RTE_CODE) Rte_Mode_Stm_CentralErrorLockModeSwitchPort_currentCentralErrorLockMode(P2VAR(Stm_CentralErrorLockType, AUTOMATIC, RTE_STM_APPL_VAR) previousMode, P2VAR(Stm_CentralErrorLockType, AUTOMATIC, RTE_STM_APPL_VAR) nextMode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Stm_EnergyStateType, RTE_CODE) Rte_Mode_Stm_EnergyModeSwitchPort_currentEnergyMode(P2VAR(Stm_EnergyStateType, AUTOMATIC, RTE_STM_APPL_VAR) previousMode, P2VAR(Stm_EnergyStateType, AUTOMATIC, RTE_STM_APPL_VAR) nextMode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Stm_VehicleStateType, RTE_CODE) Rte_Mode_Stm_VehicleStateModeSwitchPort_currentVehicleStateMode(P2VAR(Stm_VehicleStateType, AUTOMATIC, RTE_STM_APPL_VAR) previousMode, P2VAR(Stm_VehicleStateType, AUTOMATIC, RTE_STM_APPL_VAR) nextMode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_Stm_CentralErrorLockModeSwitchPort_currentCentralErrorLockMode(Stm_CentralErrorLockType nextMode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_Stm_EnergyModeSwitchPort_currentEnergyMode(Stm_EnergyStateType nextMode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_Stm_VehicleStateModeSwitchPort_currentVehicleStateMode(Stm_VehicleStateType nextMode); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_CentralErrorLockRx_centralErrorLock Rte_Read_Stm_CentralErrorLockRx_centralErrorLock
#  define Rte_Read_Stm_CentralErrorLockRx_centralErrorLock(data) (*(data) = Rte_IntegrationSample_PP_Stm_CEL_Signal_centralErrorLock, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_EnergyModeRx_energyState Rte_Read_Stm_EnergyModeRx_energyState
#  define Rte_Read_Stm_EnergyModeRx_energyState(data) (*(data) = 15U, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_VehicleStateRx_VehicleState Rte_Read_Stm_VehicleStateRx_VehicleState
#  define Rte_Read_Stm_VehicleStateRx_VehicleState(data) (*(data) = Rte_IntegrationSample_PP_IS_ST_CON_VEH_VehicleState, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Mode_<p>_<m>
 *********************************************************************************************************************/
#  define Rte_Mode_CentralErrorLockModeSwitchPort_currentCentralErrorLockMode Rte_Mode_Stm_CentralErrorLockModeSwitchPort_currentCentralErrorLockMode
#  define Rte_Mode_EnergyModeSwitchPort_currentEnergyMode Rte_Mode_Stm_EnergyModeSwitchPort_currentEnergyMode
#  define Rte_Mode_VehicleStateModeSwitchPort_currentVehicleStateMode Rte_Mode_Stm_VehicleStateModeSwitchPort_currentVehicleStateMode


/**********************************************************************************************************************
 * Rte_Switch_<p>_<m>
 *********************************************************************************************************************/
#  define Rte_Switch_CentralErrorLockModeSwitchPort_currentCentralErrorLockMode Rte_Switch_Stm_CentralErrorLockModeSwitchPort_currentCentralErrorLockMode
#  define Rte_Switch_EnergyModeSwitchPort_currentEnergyMode Rte_Switch_Stm_EnergyModeSwitchPort_currentEnergyMode
#  define Rte_Switch_VehicleStateModeSwitchPort_currentVehicleStateMode Rte_Switch_Stm_VehicleStateModeSwitchPort_currentVehicleStateMode


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define Rte_Call_CentralErrorLockEnableCondition_SetEnableCondition(arg1) (RTE_E_UNCONNECTED) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define Stm_START_SEC_CODE
# include "Stm_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_Runnable_ErrorCentralErrorLock Stm_ErrorCentralErrorLock
#  define RTE_RUNNABLE_Runnable_ErrorEnergyMode Stm_ErrorEnergyMode
#  define RTE_RUNNABLE_Runnable_ErrorVehicleState Stm_ErrorVehicleState
#  define RTE_RUNNABLE_Runnable_InitialCELSupervision Stm_InitialCentralErrorLockSupervision
#  define RTE_RUNNABLE_Runnable_ReceiveCentralErrorLock Stm_ReceiveCentralErrorLock
#  define RTE_RUNNABLE_Runnable_ReceiveEnergyMode Stm_ReceiveEnergyMode
#  define RTE_RUNNABLE_Runnable_ReceiveVehicleState Stm_ReceiveVehicleState
#  define RTE_RUNNABLE_Runnable_StopCentralErrorLockSupervision Stm_StopCentralErrorLockSupervision
# endif

FUNC(void, Stm_CODE) Stm_ErrorCentralErrorLock(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, Stm_CODE) Stm_ErrorEnergyMode(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, Stm_CODE) Stm_ErrorVehicleState(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, Stm_CODE) Stm_InitialCentralErrorLockSupervision(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, Stm_CODE) Stm_ReceiveCentralErrorLock(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, Stm_CODE) Stm_ReceiveEnergyMode(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, Stm_CODE) Stm_ReceiveVehicleState(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, Stm_CODE) Stm_StopCentralErrorLockSupervision(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define Stm_STOP_SEC_CODE
# include "Stm_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_EnableCondition_E_NOT_OK (1U)

#  define RTE_E_EnableCondition_E_OK (0U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_STM_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
