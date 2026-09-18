/*----------------------------------------------------------------------------*/
/**
*  \file
*
*  \brief       BMW Appl_Main.h
*
*  This file contains the implementation of the BMW Appl_Main
*  for usage in the BMW AUTOSAR Core Example.
*
*  \project     BMW AUTOSAR Core
*
*  \par         To be changed by user:
*               [yes]
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

#ifndef APPL_H
#define APPL_H

#ifndef I_KNOW_THAT_THIS_CODE_IS_NOT_FOR_PRODUCTION
#error "the program must not be used in connection with series production"
#endif

#include "MemIf.h"        /* MemIf API                                   */




FUNC (MemIf_JobResultType, TEMPLATE_CODE) Appl_WaitMemDriverReady(void);

FUNC(void, TEMPLATE_CODE) Dcm_BAC4_EcuReset_Execute(void);



#endif /* APPL_H */
