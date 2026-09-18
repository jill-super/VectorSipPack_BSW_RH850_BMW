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
 *          File:  Rte_IntegrationSample_Type.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.16.0
 *                 RTE Core Version 1.16.0
 *       License:  Unlimited license CBD1700369 for Nexteer Automotive Corporation
 *
 *   Description:  Application types header file for SW-C <IntegrationSample>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_INTEGRATIONSAMPLE_TYPE_H
# define _RTE_INTEGRATIONSAMPLE_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * Range, Invalidation, Enumeration and Bit Field Definitions
 *********************************************************************************************************************/

#  ifndef IS_VEHICLE_STATE__PARKING_BN_NOK
#   define IS_VEHICLE_STATE__PARKING_BN_NOK (1U)
#  endif

#  ifndef IS_VEHICLE_STATE__PARKING_BN_OK
#   define IS_VEHICLE_STATE__PARKING_BN_OK (2U)
#  endif

#  ifndef IS_VEHICLE_STATE__CUSTOMER_ABSENT
#   define IS_VEHICLE_STATE__CUSTOMER_ABSENT (3U)
#  endif

#  ifndef IS_VEHICLE_STATE__LIVING
#   define IS_VEHICLE_STATE__LIVING (5U)
#  endif

#  ifndef IS_VEHICLE_STATE__CHECK_ANALYS_DIAGNOSTICS
#   define IS_VEHICLE_STATE__CHECK_ANALYS_DIAGNOSTICS (7U)
#  endif

#  ifndef IS_VEHICLE_STATE__READINESS_TO_DRIVE_INIT
#   define IS_VEHICLE_STATE__READINESS_TO_DRIVE_INIT (8U)
#  endif

#  ifndef IS_VEHICLE_STATE__DRIVE
#   define IS_VEHICLE_STATE__DRIVE (10U)
#  endif

#  ifndef IS_VEHICLE_STATE__READINESS_TO_DRIVE_STOP
#   define IS_VEHICLE_STATE__READINESS_TO_DRIVE_STOP (12U)
#  endif

#  ifndef IS_VEHICLE_STATE__UNAVAILABLE
#   define IS_VEHICLE_STATE__UNAVAILABLE (14U)
#  endif

#  ifndef IS_VEHICLE_STATE__INVALID
#   define IS_VEHICLE_STATE__INVALID (15U)
#  endif

#  ifndef DCM_RES_POS_OK
#   define DCM_RES_POS_OK (0U)
#  endif

#  ifndef DCM_RES_POS_NOT_OK
#   define DCM_RES_POS_NOT_OK (1U)
#  endif

#  ifndef DCM_RES_NEG_OK
#   define DCM_RES_NEG_OK (2U)
#  endif

#  ifndef DCM_RES_NEG_NOT_OK
#   define DCM_RES_NEG_NOT_OK (3U)
#  endif

#  ifndef DCM_E_BRAKESWITCH_NOTCLOSED
#   define DCM_E_BRAKESWITCH_NOTCLOSED (143U)
#  endif

#  ifndef DCM_E_BUSYREPEATREQUEST
#   define DCM_E_BUSYREPEATREQUEST (33U)
#  endif

#  ifndef DCM_E_CONDITIONSNOTCORRECT
#   define DCM_E_CONDITIONSNOTCORRECT (34U)
#  endif

#  ifndef DCM_E_ENGINEISNOTRUNNING
#   define DCM_E_ENGINEISNOTRUNNING (132U)
#  endif

#  ifndef DCM_E_ENGINEISRUNNING
#   define DCM_E_ENGINEISRUNNING (131U)
#  endif

#  ifndef DCM_E_ENGINERUNTIMETOOLOW
#   define DCM_E_ENGINERUNTIMETOOLOW (133U)
#  endif

#  ifndef DCM_E_EXCEEDNUMBEROFATTEMPTS
#   define DCM_E_EXCEEDNUMBEROFATTEMPTS (54U)
#  endif

#  ifndef DCM_E_FAILUREPREVENTSEXECUTIONOFREQUESTEDACTION
#   define DCM_E_FAILUREPREVENTSEXECUTIONOFREQUESTEDACTION (38U)
#  endif

#  ifndef DCM_E_GENERALPROGRAMMINGFAILURE
#   define DCM_E_GENERALPROGRAMMINGFAILURE (114U)
#  endif

#  ifndef DCM_E_GENERALREJECT
#   define DCM_E_GENERALREJECT (16U)
#  endif

#  ifndef DCM_E_INCORRECTMESSAGELENGTHORINVALIDFORMAT
#   define DCM_E_INCORRECTMESSAGELENGTHORINVALIDFORMAT (19U)
#  endif

#  ifndef DCM_E_INVALIDKEY
#   define DCM_E_INVALIDKEY (53U)
#  endif

#  ifndef DCM_E_NORESPONSEFROMSUBNETCOMPONENT
#   define DCM_E_NORESPONSEFROMSUBNETCOMPONENT (37U)
#  endif

#  ifndef DCM_E_REQUESTOUTOFRANGE
#   define DCM_E_REQUESTOUTOFRANGE (49U)
#  endif

#  ifndef DCM_E_REQUESTSEQUENCEERROR
#   define DCM_E_REQUESTSEQUENCEERROR (36U)
#  endif

#  ifndef DCM_E_REQUIREDTIMEDELAYNOTEXPIRED
#   define DCM_E_REQUIREDTIMEDELAYNOTEXPIRED (55U)
#  endif

#  ifndef DCM_E_RESPONSETOOLONG
#   define DCM_E_RESPONSETOOLONG (20U)
#  endif

#  ifndef DCM_E_RPMTOOHIGH
#   define DCM_E_RPMTOOHIGH (129U)
#  endif

#  ifndef DCM_E_RPMTOOLOW
#   define DCM_E_RPMTOOLOW (130U)
#  endif

#  ifndef DCM_E_SECURITYACCESSDENIED
#   define DCM_E_SECURITYACCESSDENIED (51U)
#  endif

#  ifndef DCM_E_SERVICENOTSUPPORTED
#   define DCM_E_SERVICENOTSUPPORTED (17U)
#  endif

#  ifndef DCM_E_SERVICENOTSUPPORTEDINACTIVESESSION
#   define DCM_E_SERVICENOTSUPPORTEDINACTIVESESSION (127U)
#  endif

#  ifndef DCM_E_SHIFTERLEVERNOTINPARK
#   define DCM_E_SHIFTERLEVERNOTINPARK (144U)
#  endif

#  ifndef DCM_E_SUBFUNCTIONNOTSUPPORTED
#   define DCM_E_SUBFUNCTIONNOTSUPPORTED (18U)
#  endif

#  ifndef DCM_E_SUBFUNCTIONNOTSUPPORTEDINACTIVESESSION
#   define DCM_E_SUBFUNCTIONNOTSUPPORTEDINACTIVESESSION (126U)
#  endif

#  ifndef DCM_E_TEMPERATURETOOHIGH
#   define DCM_E_TEMPERATURETOOHIGH (134U)
#  endif

#  ifndef DCM_E_TEMPERATURETOOLOW
#   define DCM_E_TEMPERATURETOOLOW (135U)
#  endif

#  ifndef DCM_E_THROTTLE_PEDALTOOHIGH
#   define DCM_E_THROTTLE_PEDALTOOHIGH (138U)
#  endif

#  ifndef DCM_E_THROTTLE_PEDALTOOLOW
#   define DCM_E_THROTTLE_PEDALTOOLOW (139U)
#  endif

#  ifndef DCM_E_TORQUECONVERTERCLUTCHLOCKED
#   define DCM_E_TORQUECONVERTERCLUTCHLOCKED (145U)
#  endif

#  ifndef DCM_E_TRANSFERDATASUSPENDED
#   define DCM_E_TRANSFERDATASUSPENDED (113U)
#  endif

#  ifndef DCM_E_TRANSMISSIONRANGENOTINGEAR
#   define DCM_E_TRANSMISSIONRANGENOTINGEAR (141U)
#  endif

#  ifndef DCM_E_TRANSMISSIONRANGENOTINNEUTRAL
#   define DCM_E_TRANSMISSIONRANGENOTINNEUTRAL (140U)
#  endif

#  ifndef DCM_E_UPLOADDOWNLOADNOTACCEPTED
#   define DCM_E_UPLOADDOWNLOADNOTACCEPTED (112U)
#  endif

#  ifndef DCM_E_VEHICLESPEEDTOOHIGH
#   define DCM_E_VEHICLESPEEDTOOHIGH (136U)
#  endif

#  ifndef DCM_E_VEHICLESPEEDTOOLOW
#   define DCM_E_VEHICLESPEEDTOOLOW (137U)
#  endif

#  ifndef DCM_E_VOLTAGETOOHIGH
#   define DCM_E_VOLTAGETOOHIGH (146U)
#  endif

#  ifndef DCM_E_VOLTAGETOOLOW
#   define DCM_E_VOLTAGETOOLOW (147U)
#  endif

#  ifndef DCM_E_WRONGBLOCKSEQUENCECOUNTER
#   define DCM_E_WRONGBLOCKSEQUENCECOUNTER (115U)
#  endif

#  ifndef DCM_E_VMSCNC_0
#   define DCM_E_VMSCNC_0 (240U)
#  endif

#  ifndef DCM_E_VMSCNC_1
#   define DCM_E_VMSCNC_1 (241U)
#  endif

#  ifndef DCM_E_VMSCNC_2
#   define DCM_E_VMSCNC_2 (242U)
#  endif

#  ifndef DCM_E_VMSCNC_3
#   define DCM_E_VMSCNC_3 (243U)
#  endif

#  ifndef DCM_E_VMSCNC_4
#   define DCM_E_VMSCNC_4 (244U)
#  endif

#  ifndef DCM_E_VMSCNC_5
#   define DCM_E_VMSCNC_5 (245U)
#  endif

#  ifndef DCM_E_VMSCNC_6
#   define DCM_E_VMSCNC_6 (246U)
#  endif

#  ifndef DCM_E_VMSCNC_7
#   define DCM_E_VMSCNC_7 (247U)
#  endif

#  ifndef DCM_E_VMSCNC_8
#   define DCM_E_VMSCNC_8 (248U)
#  endif

#  ifndef DCM_E_VMSCNC_9
#   define DCM_E_VMSCNC_9 (249U)
#  endif

#  ifndef DCM_E_VMSCNC_A
#   define DCM_E_VMSCNC_A (250U)
#  endif

#  ifndef DCM_E_VMSCNC_B
#   define DCM_E_VMSCNC_B (251U)
#  endif

#  ifndef DCM_E_VMSCNC_C
#   define DCM_E_VMSCNC_C (252U)
#  endif

#  ifndef DCM_E_VMSCNC_D
#   define DCM_E_VMSCNC_D (253U)
#  endif

#  ifndef DCM_E_VMSCNC_E
#   define DCM_E_VMSCNC_E (254U)
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

#  ifndef STM_CEL_UNLOCKED
#   define STM_CEL_UNLOCKED (0U)
#  endif

#  ifndef STM_CEL_LOCKED
#   define STM_CEL_LOCKED (1U)
#  endif

#  ifndef STM_CEL_INVALID
#   define STM_CEL_INVALID (3U)
#  endif

#  ifndef StatusEnergyFZM_ENSTATE_OK
#   define StatusEnergyFZM_ENSTATE_OK (1U)
#  endif

#  ifndef StatusEnergyFZM_ENSTATE_GOOD
#   define StatusEnergyFZM_ENSTATE_GOOD (0U)
#  endif

#  ifndef StatusEnergyFZM_ENSTATE_SHORTAGE
#   define StatusEnergyFZM_ENSTATE_SHORTAGE (2U)
#  endif

#  ifndef StatusEnergyFZM_signal_Unfilled
#   define StatusEnergyFZM_signal_Unfilled (255U)
#  endif

#  ifndef StatusEnergyFZM_ENSTATE_SEVERE_SHORTAGE
#   define StatusEnergyFZM_ENSTATE_SEVERE_SHORTAGE (3U)
#  endif

#  ifndef StatusEnergyFZM_ENSTATE_OK
#   define StatusEnergyFZM_ENSTATE_OK (1U)
#  endif

#  ifndef StatusEnergyFZM_ENSTATE_GOOD
#   define StatusEnergyFZM_ENSTATE_GOOD (0U)
#  endif

#  ifndef StatusEnergyFZM_ENSTATE_SHORTAGE
#   define StatusEnergyFZM_ENSTATE_SHORTAGE (2U)
#  endif

#  ifndef StatusEnergyFZM_signal_Unfilled
#   define StatusEnergyFZM_signal_Unfilled (255U)
#  endif

#  ifndef StatusEnergyFZM_ENSTATE_SEVERE_SHORTAGE
#   define StatusEnergyFZM_ENSTATE_SEVERE_SHORTAGE (3U)
#  endif

#  ifndef StatusInterlockErrorMemoryFZM_ErrorMemoryUnlock
#   define StatusInterlockErrorMemoryFZM_ErrorMemoryUnlock (0U)
#  endif

#  ifndef StatusInterlockErrorMemoryFZM_ErrorMemoryLock
#   define StatusInterlockErrorMemoryFZM_ErrorMemoryLock (1U)
#  endif

#  ifndef StatusInterlockErrorMemoryFZM_Reserved
#   define StatusInterlockErrorMemoryFZM_Reserved (2U)
#  endif

#  ifndef StatusInterlockErrorMemoryFZM_Signal_Unfilled
#   define StatusInterlockErrorMemoryFZM_Signal_Unfilled (255U)
#  endif

# endif /* RTE_CORE */


/**********************************************************************************************************************
 * Definitions for Mode Management
 *********************************************************************************************************************/
# ifndef RTE_MODETYPE_IntegrationSample_EcuRunState
#  define RTE_MODETYPE_IntegrationSample_EcuRunState
typedef IntegrationSample_EcuRunStateModeRequestType Rte_ModeType_IntegrationSample_EcuRunState;
# endif
# ifndef RTE_MODETYPE_IntegrationSample_SimpleTimerState
#  define RTE_MODETYPE_IntegrationSample_SimpleTimerState
typedef IntegrationSample_SimpleTimerStateType Rte_ModeType_IntegrationSample_SimpleTimerState;
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

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_INTEGRATIONSAMPLE_TYPE_H */
