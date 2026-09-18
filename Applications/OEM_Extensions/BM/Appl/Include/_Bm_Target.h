/*----------------------------------------------------------------------------*/
/**
*  \file
*
*  \brief       BMW Module Bm
*
*  Declaration of targets that are called at the end of Bootmanager.
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


#ifndef BM_TARGET_H
#define BM_TARGET_H

/*------------------------------------------------------------------------------
                      Include Section
-------------------------------------------------------------------------------*/

#include "Std_Types.h"                       /* AUTOSAR Standard Types         */
#include "Bm_Version.h"                      /* Bm version file                */


/*------------------------------------------------------------------------------
                      Macros
-------------------------------------------------------------------------------*/

/* check version of the module */
#if (!Bm_CHECK_VERSION(3,1,0))
   #error "Version of Bm_Target.h does not match the version of the module!"
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
#define INTDISPATCH_BOOTLOADER_START   0x00008A00ul;
#define INTDISPATCH_APPLICATION_START  0x00059000ul;
#define INTDISPATCH_BLU_START          0x00059000ul;


/*------------------------------------------------------------------------------
                      Global Function Declarations
-------------------------------------------------------------------------------*/

/* PRQA S 5087 2 */
#define Bm_START_SEC_CODE_ENTRY_BOOTLOADER
#include "Bm_MemMap.h"

extern FUNC( void, Bm_CODE ) Bm_StartupBootloader  ( void );

/* PRQA S 5087 2 */
#define Bm_STOP_SEC_CODE_ENTRY_BOOTLOADER
#include "Bm_MemMap.h"


/* PRQA S 5087 2 */
#define Bm_START_SEC_CODE_ENTRY_BLU
#include "Bm_MemMap.h"

extern FUNC( void, Bm_CODE ) Bm_StartupBlu         ( void );

/* PRQA S 5087 2 */
#define Bm_STOP_SEC_CODE_ENTRY_BLU
#include "Bm_MemMap.h"


/* PRQA S 5087 2 */
#define Bm_START_SEC_CODE_ENTRY_APPLICATION
#include "Bm_MemMap.h"

extern FUNC( void, Bm_CODE ) Bm_StartupApplication ( void );

/* PRQA S 5087 2 */
#define Bm_STOP_SEC_CODE_ENTRY_APPLICATION
#include "Bm_MemMap.h"


#endif /* BM_TARGET_H */

/*--- End of file ------------------------------------------------------------*/
