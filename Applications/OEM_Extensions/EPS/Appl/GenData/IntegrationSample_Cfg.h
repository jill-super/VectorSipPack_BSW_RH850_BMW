/**
 * \file
 *
 * \brief       Configuration file for IntegrationSample
 *
 * \project     BMW Platform Software
 *
 * \copyright   BMW AG 2016 - 2017
 *
 * \version     5.0.3
 *
 */

/*------------------------------------------------------------------------------
*
*  THIS FILE WAS GENERATED. DO NOT MODIFY!
*
*  GENERATOR       : BMW PAGe 1.1.0
*
*  GENERATION TIME : 2018-01-22 11:14:56.133723
*
------------------------------------------------------------------------------*/

#ifndef INTEGRATIONSAMPLE_CFG_H
#define INTEGRATIONSAMPLE_CFG_H

/*------------------------------------------------------------------------------
                      Include Section
-------------------------------------------------------------------------------*/

#include <Std_Types.h>                    		/* AUTOSAR Standard Types  */
#include <IntegrationSample_Version.h>          /* Own version header file */

/*------------------------------------------------------------------------------
                      Macros
-------------------------------------------------------------------------------*/

/* check version of the module */
#if (!IntegrationSample_CHECK_VERSION(5,0,3))
   #error "Version of IntegrationSample_Cfg.h does not match the version of the module!"
#endif


/**
 * \brief Switch IntegrationSample_Enable_PP_DemDatalElementClass_KmStand
 */
#define IntegrationSample_SWITCH_DEM_KILOMETER   STD_ON


/**
 * \brief Switch Dem_ObdM_Error_Code
 */
#define IntegrationSample_SWITCH_DEM_OBDM_ERROR_CODE   STD_OFF



/**
 * \brief Switch IntegrationSample_Enable_PP_DemDataElementClass_PWF
 */
#define IntegrationSample_SWITCH_PWF  STD_OFF

/**
 * \brief Switch IntegrationSampleSwitchDcmNotification
 */
#define IntegrationSample_SWITCH_DCMNOTIFICATION  STD_ON

/**
 * \brief Switch IntegrationSampleSwitchGlobalEcuRunState
 */
#define IntegrationSample_SWITCH_EcuRunState  STD_ON

/**
 * \brief Switch IntegrationSampleSwitchProvideTestStampDefaults
 */
#define IntegrationSample_SWITCH_ProvideTestStampDefaults  STD_ON

/**
 * \brief Switch IntegrationSampleSwitchProvide_ST_CON_VEH
 */
#define IntegrationSampleSwitchProvide_ST_CON_VEH  STD_ON

/**
 * \brief Switch IntegrationSampleSwitchProvide_PRTNT_CON_VEH
 */
#define IntegrationSampleSwitchProvide_PRTNT_CON_VEH  STD_OFF

/**
 * \brief Switch IntegrationSampleSwitchSimpleTimer
 */
#define IntegrationSampleSwitchSimpleTimer  STD_ON
#define IntegrationSample_NUMBER_OF_SIMPLE_TIMERS 1

/**
 * \brief Switch IntegrationSample_EnableServiceInterface
 */
#define IntegrationSample_EnableServiceInterface  STD_OFF

/**
 * \brief Switch IntegrationSample_EnableSplitVehicleStatus
 */
#define IntegrationSample_EnableSplitVehicleStatus  STD_ON

/*------------------------------------------------------------------------------
                      Global Constants
------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------
                      Global Function Declarations
------------------------------------------------------------------------------*/

#endif /* INTEGRATIONSAMPLE_CFG_H */

/*--- End of file ------------------------------------------------------------*/
