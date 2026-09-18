/**
*  \file
*
*  \brief       BMW Module Blu
*
*  Header for dispatcher
*
*  \project     BMW Platform Software
*
*  \copyright   BMW AG 2017
*
*  \version     5.0.2
*
*  \remarks     ---
*
*/

#ifndef BLU_STATEFUNCTIONS_H
#define BLU_STATEFUNCTIONS_H

/*------------------------------------------------------------------------------
                      Include Section
-------------------------------------------------------------------------------*/

#include "BUtil/PlatformTypes.h"                /* Standard Types              */
#include "BluClassic_Version.h"                 /* Own version header file     */
#include "BluClassic_Cfg.h"                     /* Blu configuration           */
#include "Blu.h"


/*------------------------------------------------------------------------------
                      Macros
-------------------------------------------------------------------------------*/

/* check version of the module */
#if (!BluClassic_CHECK_VERSION(5,0,2))
   #error "Version of Blu_StateFunctions.h does not match the version of the module!"
#endif


/*------------------------------------------------------------------------------
                      Data Types
-------------------------------------------------------------------------------*/

/** \swsid BLU_ */
/**
 * \brief Type for call of Blu functions
 */
typedef Blu_StateType (* FctTableType) (void);


/*------------------------------------------------------------------------------
                      Global Constants
-------------------------------------------------------------------------------*/

#define Blu_START_SEC_CONST_UNSPECIFIED
#include "Blu_MemMap.h"

/* MISRA-C:2004 Rule 08.12: Size of array depends on configuration */
/* PRQA S 3684 1 */
extern const FctTableType Blu_FunctionCall[];

#define Blu_STOP_SEC_CONST_UNSPECIFIED
#include "Blu_MemMap.h"


/*------------------------------------------------------------------------------
                      Global Function Declarations
-------------------------------------------------------------------------------*/

#define Blu_START_SEC_CODE
#include "Blu_MemMap.h"

extern Blu_StateType Blu_StateFctEraseOldBootloader(void);
extern Blu_StateType Blu_StateFctWriteNewBootloader(void);
extern Blu_StateType Blu_StateFctVerify(void);

#define Blu_STOP_SEC_CODE
#include "Blu_MemMap.h"


#endif /* BLU_STATEFUNCTIONS_H */
