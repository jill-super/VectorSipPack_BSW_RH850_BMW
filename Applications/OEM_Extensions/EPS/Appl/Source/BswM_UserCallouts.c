/*----------------------------------------------------------------------------*/
/**
*  \file
*
*  \brief       BMW stub BswM_UserCallouts.c
*
*  This file contains the implementation of the BMW stub BswM_UserCallouts
*  for usage in the BMW AUTOSAR Core Example.
*
*  \project     BMW AUTOSAR Core
*
*  \par         To be changed by user:
*               [no]
*
*  \copyright   BMW AG 2015
*
*  \remarks
*  DISCLAIMER:
*  As the program is not fully tested and qualified for series production
*  use, the user shall not be entitled to use the program in connection
*  with any series production. BMW provides the user with the program only
*  as sample application (for testing purposes).
*
*/
/*----------------------------------------------------------------------------*/


#ifndef I_KNOW_THAT_THIS_CODE_IS_NOT_FOR_PRODUCTION
#error "the program must not be used in connection with series production"
#endif

#include "Std_Types.h"           /* AUTOSAR standard types        */
#include "ComM.h"
/*
#include <CanNm.h>*/ /* needed for function CanNm_ConfirmPnAvailability */

//#include <Dio.h>
#include "BswM_UserCallouts.h"

#define BSWM_START_SEC_CODE
#include "MemMap.h"

FUNC(void, BSWM_APPL_CODE) checkNeedForCommunication(void)
{

}

FUNC(void, BSWM_APPL_CODE) PrepareForReceivingNm(void)
{

   }


FUNC(void, BSWM_APPL_CODE) BswM_Callout_StartSimpleTimer0(void)
{
    #if 0
	/* only start timer if Jumper is set */
	if (Dio_ReadChannel(DioConf_DioChannel_DioChannel_DET_ENABLE)==STD_LOW)
	{
		/* Timer0, 5 seconds = 50 x 0.1 */
		SimpleTimer_Start(0, 50);
	}	
    #endif     
}

#define BSWM_STOP_SEC_CODE
#include <MemMap.h>
