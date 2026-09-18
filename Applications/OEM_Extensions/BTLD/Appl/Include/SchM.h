/*----------------------------------------------------------------------------*/
/**
*  \file
*
*  \brief       BMW stub SchM.h
*
*  This file contains the implementation of the BMW stub SchM
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

#ifndef SCHM_H
#define SCHM_H

#ifndef I_KNOW_THAT_THIS_CODE_IS_NOT_FOR_PRODUCTION
#error "the program must not be used in connection with series production"
#endif

#include "Std_Types.h"
#include "os.h"

#define SCHM_EA_SUSPENDALLINTERRUPTS (0u)

#define SchM_Init()

#define SCHM_ENTER_EXCLUSIVE(ExclusiveArea)          \
         SuspendAllInterrupts()

#define SCHM_EXIT_EXCLUSIVE(ExclusiveArea)          \
         ResumeAllInterrupts()

#endif /* SCHM_H */

