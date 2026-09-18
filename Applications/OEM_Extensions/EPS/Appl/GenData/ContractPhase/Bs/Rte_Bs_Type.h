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
 *          File:  Rte_Bs_Type.h
 *        Config:  D:/usr/usage/Delivery/CBD17x/CBD1700369/D04/external/Applications/OEM_Extensions/EPS/EPS.dpa
 *     SW-C Type:  Bs
 *  Generated at:  Tue Dec 19 13:12:25 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.16.0
 *                 RTE Core Version 1.16.0
 *       License:  Unlimited license CBD1700369 for Nexteer Automotive Corporation
 *
 *   Description:  Application types header file for SW-C <Bs> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_BS_TYPE_H
# define _RTE_BS_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"

/**********************************************************************************************************************
 * Range, Invalidation, Enumeration and Bit Field Definitions
 *********************************************************************************************************************/

# ifndef BS_INITIALIZED
#  define BS_INITIALIZED (0U)
# endif

# ifndef BS_RUNNING
#  define BS_RUNNING (1U)
# endif

# ifndef BS_STOPPED
#  define BS_STOPPED (2U)
# endif

# ifndef DCM_E_GENERALREJECT
#  define DCM_E_GENERALREJECT (16U)
# endif

# ifndef DCM_E_INCORRECTMESSAGELENGTHORINVALIDFORMAT
#  define DCM_E_INCORRECTMESSAGELENGTHORINVALIDFORMAT (19U)
# endif

# ifndef DCM_E_BUSYREPEATREQUEST
#  define DCM_E_BUSYREPEATREQUEST (33U)
# endif

# ifndef DCM_E_CONDITIONSNOTCORRECT
#  define DCM_E_CONDITIONSNOTCORRECT (34U)
# endif

# ifndef DCM_E_REQUESTSEQUENCEERROR
#  define DCM_E_REQUESTSEQUENCEERROR (36U)
# endif

# ifndef DCM_E_REQUESTOUTOFRANGE
#  define DCM_E_REQUESTOUTOFRANGE (49U)
# endif

# ifndef DCM_E_SECURITYACCESSDENIED
#  define DCM_E_SECURITYACCESSDENIED (51U)
# endif

# ifndef DCM_E_GENERALPROGRAMMINGFAILURE
#  define DCM_E_GENERALPROGRAMMINGFAILURE (114U)
# endif

# ifndef DCM_E_SUBFUNCTIONNOTSUPPORTEDINACTIVESESSION
#  define DCM_E_SUBFUNCTIONNOTSUPPORTEDINACTIVESESSION (126U)
# endif

# ifndef DCM_E_RPMTOOHIGH
#  define DCM_E_RPMTOOHIGH (129U)
# endif

# ifndef DCM_E_RPMTOOLOW
#  define DCM_E_RPMTOOLOW (130U)
# endif

# ifndef DCM_E_ENGINEISRUNNING
#  define DCM_E_ENGINEISRUNNING (131U)
# endif

# ifndef DCM_E_ENGINEISNOTRUNNING
#  define DCM_E_ENGINEISNOTRUNNING (132U)
# endif

# ifndef DCM_E_ENGINERUNTIMETOOLOW
#  define DCM_E_ENGINERUNTIMETOOLOW (133U)
# endif

# ifndef DCM_E_TEMPERATURETOOHIGH
#  define DCM_E_TEMPERATURETOOHIGH (134U)
# endif

# ifndef DCM_E_TEMPERATURETOOLOW
#  define DCM_E_TEMPERATURETOOLOW (135U)
# endif

# ifndef DCM_E_VEHICLESPEEDTOOHIGH
#  define DCM_E_VEHICLESPEEDTOOHIGH (136U)
# endif

# ifndef DCM_E_VEHICLESPEEDTOOLOW
#  define DCM_E_VEHICLESPEEDTOOLOW (137U)
# endif

# ifndef DCM_E_THROTTLE_PEDALTOOHIGH
#  define DCM_E_THROTTLE_PEDALTOOHIGH (138U)
# endif

# ifndef DCM_E_THROTTLE_PEDALTOOLOW
#  define DCM_E_THROTTLE_PEDALTOOLOW (139U)
# endif

# ifndef DCM_E_TRANSMISSIONRANGENOTINNEUTRAL
#  define DCM_E_TRANSMISSIONRANGENOTINNEUTRAL (140U)
# endif

# ifndef DCM_E_TRANSMISSIONRANGENOTINGEAR
#  define DCM_E_TRANSMISSIONRANGENOTINGEAR (141U)
# endif

# ifndef DCM_E_BRAKESWITCH_NOTCLOSED
#  define DCM_E_BRAKESWITCH_NOTCLOSED (143U)
# endif

# ifndef DCM_E_SHIFTERLEVERNOTINPARK
#  define DCM_E_SHIFTERLEVERNOTINPARK (144U)
# endif

# ifndef DCM_E_TORQUECONVERTERCLUTCHLOCKED
#  define DCM_E_TORQUECONVERTERCLUTCHLOCKED (145U)
# endif

# ifndef DCM_E_VOLTAGETOOHIGH
#  define DCM_E_VOLTAGETOOHIGH (146U)
# endif

# ifndef DCM_E_VOLTAGETOOLOW
#  define DCM_E_VOLTAGETOOLOW (147U)
# endif

# ifndef DCM_INITIAL
#  define DCM_INITIAL (0U)
# endif

# ifndef DCM_PENDING
#  define DCM_PENDING (1U)
# endif

# ifndef DCM_CANCEL
#  define DCM_CANCEL (2U)
# endif

# ifndef DCM_FORCE_RCRRP_OK
#  define DCM_FORCE_RCRRP_OK (3U)
# endif

# ifndef DEM_EVENT_STATUS_PASSED
#  define DEM_EVENT_STATUS_PASSED (0U)
# endif

# ifndef DEM_EVENT_STATUS_FAILED
#  define DEM_EVENT_STATUS_FAILED (1U)
# endif

# ifndef DEM_EVENT_STATUS_PREPASSED
#  define DEM_EVENT_STATUS_PREPASSED (2U)
# endif

# ifndef DEM_EVENT_STATUS_PREFAILED
#  define DEM_EVENT_STATUS_PREFAILED (3U)
# endif

# ifndef DEM_EVENT_STATUS_FDC_THRESHOLD_REACHED
#  define DEM_EVENT_STATUS_FDC_THRESHOLD_REACHED (4U)
# endif

# ifndef NVM_REQ_OK
#  define NVM_REQ_OK (0U)
# endif

# ifndef NVM_REQ_NOT_OK
#  define NVM_REQ_NOT_OK (1U)
# endif

# ifndef NVM_REQ_PENDING
#  define NVM_REQ_PENDING (2U)
# endif

# ifndef NVM_REQ_INTEGRITY_FAILED
#  define NVM_REQ_INTEGRITY_FAILED (3U)
# endif

# ifndef NVM_REQ_BLOCK_SKIPPED
#  define NVM_REQ_BLOCK_SKIPPED (4U)
# endif

# ifndef NVM_REQ_NV_INVALIDATED
#  define NVM_REQ_NV_INVALIDATED (5U)
# endif

# ifndef NVM_REQ_CANCELED
#  define NVM_REQ_CANCELED (6U)
# endif

# ifndef NVM_REQ_REDUNDANCY_FAILED
#  define NVM_REQ_REDUNDANCY_FAILED (7U)
# endif

# ifndef NVM_REQ_RESTORED_FROM_ROM
#  define NVM_REQ_RESTORED_FROM_ROM (8U)
# endif



/**********************************************************************************************************************
 * Definitions for Mode Management
 *********************************************************************************************************************/
# ifndef RTE_MODETYPE_Bs_LifeCycle
#  define RTE_MODETYPE_Bs_LifeCycle
typedef Bs_LifeCycleRequestType Rte_ModeType_Bs_LifeCycle;
# endif
# ifndef RTE_MODETYPE_SecEcuMode
#  define RTE_MODETYPE_SecEcuMode
typedef uint8 Rte_ModeType_SecEcuMode;
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

# ifndef RTE_MODE_SecEcuMode_FIELD
#  define RTE_MODE_SecEcuMode_FIELD (0U)
# endif
# ifndef RTE_MODE_SecEcuMode_ENGINEERING
#  define RTE_MODE_SecEcuMode_ENGINEERING (1U)
# endif
# ifndef RTE_MODE_SecEcuMode_PLANT
#  define RTE_MODE_SecEcuMode_PLANT (2U)
# endif
# ifndef RTE_TRANSITION_SecEcuMode
#  define RTE_TRANSITION_SecEcuMode (3U)
# endif

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_BS_TYPE_H */
