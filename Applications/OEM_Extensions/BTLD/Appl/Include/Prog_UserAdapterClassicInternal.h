/**
*  \file
*
*  \brief       BMW Module Prog adapter header for user for classic part only
*
*  \project     BMW Platform Software
*
*  \copyright   BMW AG 2017
*
*  \version     5.2.0
*
*  \remarks     ---
*
*/

#ifndef PROG_USER_ADAPTER_CLASSIC_INTERNAL_H
#define PROG_USER_ADAPTER_CLASSIC_INTERNAL_H

/*------------------------------------------------------------------------------
                      Include Section
-------------------------------------------------------------------------------*/

#include <stddef.h>
#include "BUtil/PlatformTypes.h"                /* Standard Types              */
#include "ProgSample_Version.h"


/*------------------------------------------------------------------------------
                      Macros
-------------------------------------------------------------------------------*/

/* check version of the module */
#if (!ProgSample_CHECK_VERSION(5, 2, 0))
#error "Version of Prog_UserAdapterClassicInternal.h does not match the version of the module!"
#endif


/*------------------------------------------------------------------------------
                      Global Function Declarations
-------------------------------------------------------------------------------*/

#define Prog_START_SEC_CODE
#include "Prog_MemMap.h"

extern void Prog_User_GenerateRandomNumber(uint8* randomNumber, size_t size);

#define Prog_STOP_SEC_CODE
#include "Prog_MemMap.h"


#endif /* PROG_USER_ADAPTER_CLASSIC_INTERNAL_H */
