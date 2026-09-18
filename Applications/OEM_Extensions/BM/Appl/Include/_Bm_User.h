/*----------------------------------------------------------------------------*/
/**
*  \file
*
*  \brief       BMW Module Bm
*
*  Declaration of user callout functions while Bootmanager is running.
*
*  \project     BMW AUTOSAR Core
*
*  \par         To be changed by user:
*               no
*
*  \copyright   BMW AG 2012 - 2015
*
*  \version     3.1.0
*
*  \remarks     ---
*
*/
/*----------------------------------------------------------------------------*/
/*
   MISRA-C:2004 Rule 19.1: including Template_MemMap.h is necessary throughout
   the file according to memory abstraction. See PRQA 5087.
*/

/*------------------------------------------------------------------------------
|  DISCLAIMER:                                                                 |
|  As the program is not fully tested and qualified for series production      |
|  use, the user shall not be entitled to use the program in connection        |
|  with any series production. BMW provides the user with the program only     |
|  as sample application (for testing purposes).                               |
|                                                                              |
-------------------------------------------------------------------------------*/

#ifndef I_KNOW_THAT_THIS_CODE_IS_NOT_FOR_PRODUCTION
#error "the program must not be used in connection with series production"
#endif


#ifndef BM_USER_H
#define BM_USER_H

/*------------------------------------------------------------------------------
                      Include Section
-------------------------------------------------------------------------------*/

#include "Bm_Cfg.h"                          /* Own config file                */
#include "Bm_Version.h"                      /* Bm version file                */


/*------------------------------------------------------------------------------
                      Macros
-------------------------------------------------------------------------------*/

/* check version of the module */
#if (!Bm_CHECK_VERSION(3,1,0))
   #error "Version of Bm_User.h does not match the version of the module!"
#endif


/*------------------------------------------------------------------------------
                      Data Types
-------------------------------------------------------------------------------*/

/* empty */


/*------------------------------------------------------------------------------
                      Global Variables
-------------------------------------------------------------------------------*/

/* empty */


/*------------------------------------------------------------------------------
                      Global Constants
-------------------------------------------------------------------------------*/

/* empty */


/*------------------------------------------------------------------------------
                      Global Function Declarations
-------------------------------------------------------------------------------*/

/* PRQA S 5087 2 */
#define Bm_START_SEC_CODE
#include "Bm_MemMap.h"

#if ( BM_USER_FUNCTION_ONE == STD_ON )
extern  FUNC( void, Bm_CODE ) Bm_UserFunction1 ( void );
#endif

#if ( BM_USER_FUNCTION_TWO == STD_ON )
extern  FUNC( void, Bm_CODE ) Bm_UserFunction2
         ( 
            P2VAR ( Bm_DispatchFlagType, AUTOMATIC, Bm_APPL_DATA)  DispatchFlag
         );
#endif

/* PRQA S 5087 2 */
#define Bm_STOP_SEC_CODE
#include "Bm_MemMap.h"


#endif /* BM_USER_H */

/*--- End of file ------------------------------------------------------------*/
