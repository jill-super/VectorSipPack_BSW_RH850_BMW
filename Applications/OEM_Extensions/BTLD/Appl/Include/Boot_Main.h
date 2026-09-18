/*----------------------------------------------------------------------------*/
/**
*  \file
*
*  \brief       BMW Boot_Main.h
*
*  This file contains the implementation of the BMW BMW Boot_Main
*  for usage in the BMW AUTOSAR Core Example.
*
*  \project     BMW AUTOSAR Core
*
*  \par         To be changed by user:
*               [yes]
*
*  \copyright   BMW AG 2014
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

#ifndef BOOTMAIN_H
#define BOOTMAIN_H

#ifndef I_KNOW_THAT_THIS_CODE_IS_NOT_FOR_PRODUCTION
#error "the program must not be used in connection with series production"
#endif

#include <Std_Types.h>            /* AUTOSAR Standard Types   */
#include <MemIf_Types.h>          /* AUTOSAR Memory Interface */


/*******************************************************************************
**                      Global Macros                                         **
*******************************************************************************/

#define WaitMemDriverReady Appl_WaitMemDriverReady
                                  
/*******************************************************************************
**                      Global Data Types                                     **
*******************************************************************************/


/*******************************************************************************
**                      Global Function Prototypes                            **
*******************************************************************************/

#define BOOTMAIN_START_SEC_CODE
#include "MemMap.h"

MemIf_JobResultType WaitMemDriverReady(void);
extern void ApplSyncSTtoFrBus(void);
void WdgIf_Trigger_0(void);
/*FUNC(void, TEMPLATE_CODE) Boot_PerformReset(void);	@@@visbim
*/
#define BOOTMAIN_STOP_SEC_CODE
#include "MemMap.h"

/*** end of file 'bootmain.h' *************************************************/

#endif /* BOOTMAIN_H */


