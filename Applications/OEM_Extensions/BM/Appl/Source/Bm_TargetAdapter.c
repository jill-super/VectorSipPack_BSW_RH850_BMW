/**
*  \file
*
*  \brief       BMW Module Bm
*
*  Dummy functions for startup entry points of BLU, Bootloader and Application.
*
*  \project     BMW Platform Software
*
*  \copyright   BMW AG 2016 - 2017
*
*  \version     5.1.0
*
*  \remarks     ---
*
*/

/*------------------------------------------------------------------------------
                      Include Section
-------------------------------------------------------------------------------*/

#include "Std_Types.h"                       /* AUTOSAR Standard Types         */


/*------------------------------------------------------------------------------
                      Macros
-------------------------------------------------------------------------------*/

#define INTDISPATCH_BOOTLOADER_START   0x00008A00ul;
#define INTDISPATCH_APPLICATION_START  0x00059000ul;
#define INTDISPATCH_BLU_START          0x00059000ul;

/*------------------------------------------------------------------------------
                      Local Data Types
-------------------------------------------------------------------------------*/
typedef void (*IntdispatchFunctionPointerType) ( void );


/*------------------------------------------------------------------------------
                      Local Variables
-------------------------------------------------------------------------------*/

/* empty */


/*------------------------------------------------------------------------------
                      Local Constants
-------------------------------------------------------------------------------*/
CONST(IntdispatchFunctionPointerType, BmSample_CODE) Bootloader =
                   (IntdispatchFunctionPointerType)INTDISPATCH_BOOTLOADER_START;

CONST(IntdispatchFunctionPointerType, BmSample_CODE) Application =
                   (IntdispatchFunctionPointerType)INTDISPATCH_APPLICATION_START;

CONST(IntdispatchFunctionPointerType, BmSample_CODE) Updater =
                   (IntdispatchFunctionPointerType)INTDISPATCH_BLU_START;


/*------------------------------------------------------------------------------
                      Local Functions
-------------------------------------------------------------------------------*/



void Bm_StartupBootloader(void) {
   Bootloader();
} /* end of function Bm_StartupBootloader */


void Bm_StartupBlu(void) {
   Updater();
} /* end of function Bm_StartupBlu */

void Bm_StartupApplication(void) {
   Application();
} /* end of function Bm_StartupApplication */


