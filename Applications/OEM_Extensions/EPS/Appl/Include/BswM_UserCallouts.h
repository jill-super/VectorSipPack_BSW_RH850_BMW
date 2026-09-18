/*----------------------------------------------------------------------------*/
/**
*  \file
*
*  \brief       BMW BswM_UserCallouts.h
*
*  This file contains the implementation of the BMW BswM_UserCallouts.h
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

#ifndef BSWM_USERCALLOUTS_H
#define BSWM_USERCALLOUTS_H

#ifndef I_KNOW_THAT_THIS_CODE_IS_NOT_FOR_PRODUCTION
#error "the program must not be used in connection with series production"
#endif

#include <Std_Types.h>           /* AUTOSAR standard types        */

FUNC(void, BSWM_APPL_CODE) checkNeedForCommunication(void);
FUNC(void, BSWM_APPL_CODE) PrepareForReceivingNm(void);
FUNC(void, BSWM_APPL_CODE) BswM_Callout_StartSimpleTimer0(void);

#endif /* BSWM_USERCALLOUTS_H */