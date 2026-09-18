/**
 * \file
 *
 *  \brief       BMW SWC IntegrationSample
 *
 *  This file contains the implementation of the BMW Sample SWC IntegrationSample
 *  for usage in the BMW AUTOSAR Core Example.
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
*  GENERATION TIME : 2018-01-22 11:14:56.159725
*
------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------
                      Include Section
-------------------------------------------------------------------------------*/


#ifndef I_KNOW_THAT_THIS_CODE_IS_NOT_FOR_PRODUCTION
#error "the program must not be used in series production software"
#endif

#include <Std_Types.h>                           /* AUTOSAR Standard Types  */
#include <IntegrationSample_Version.h>           /* Own version header file */
#include "IntegrationSample_Cfg.h"               /* Own config header file */
#include "Rte_IntegrationSample.h"               /* RTE header file */

#include "IntegrationSample_Prototype.h"         /* Own prototypes */

/* check version of the module */
#if (!IntegrationSample_CHECK_VERSION(5,0,3))
   #error "Version of IntegrationSample_code.c does not match the version of the module!"
#endif

#define IntegrationSample_START_SEC_CODE
#include "IntegrationSample_MemMap.h"


/*----------------------------------------------------------------------------*/
/*
 * Simple Timer Functions
 */
/*----------------------------------------------------------------------------*/
/* Switch mode to mode of port Rte_Switch_IntegrationSampleSimpleTimerPort_index */
FUNC(Std_ReturnType, IntegrationSample_CODE)  IntegrationSample_SimpleTimer_Switch_Mode_Switch(uint8 index, uint8 mode)
{
        switch(index) {
                case 0 :
                return Rte_Switch_IntegrationSampleSimpleTimerPort_0_SimpleTimerMode(mode);
                break;
            default:
                return E_NOT_OK;
                break;
        }

}
#define IntegrationSample_STOP_SEC_CODE
#include "IntegrationSample_MemMap.h"

/*--- End of file ------------------------------------------------------------*/
