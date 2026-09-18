/*----------------------------------------------------------------------------*/
/**
*  \file
*
*  Header file for Bmhw_Platform
*
*  \project BMW AUTOSAR Core
*
*  \par To be changed by user:
*  yes
*
*  \copyright BMW Group 2012
*
*  \remarks This file is an example for platform MPC5643L
*
*/
/*----------------------------------------------------------------------------*/
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


#ifndef BMHW_PLATFORM_H
#define BMHW_PLATFORM_H

/*------------------------------------------------------------------------------
                      Include Section
-------------------------------------------------------------------------------*/

#include <Std_Types.h>                 /* Standard types            */

#include "Bmhw_Platform_Cfg.h"         /* Platform configuration    */
#include "Srv_Cfg.h"

/*------------------------------------------------------------------------------
                      Macros
-------------------------------------------------------------------------------*/

/* empty */


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

#define Bmhw_START_SEC_CODE
#include "Bmhw_MemMap.h"

extern FUNC( void, Bmhw_CODE ) Bmhw_BasicInit ( void );

#if ( SRV_HANDLE_ECC_RAM == STD_ON )
   extern  FUNC(void, Bmhw_CODE) Bmhw_RamEccErrorTest ( void );
#else
   #define Bmhw_RamEccErrorTest()
#endif

#define Bmhw_STOP_SEC_CODE
#include "Bmhw_MemMap.h"


#endif /* BMHW_PLATFORM_H */

/*--- End of file ------------------------------------------------------------*/
