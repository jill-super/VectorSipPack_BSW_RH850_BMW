/*----------------------------------------------------------------------------*/
/**
*  \file
*
*  \brief       BMW Module HwSample
*
*  User specific functionality
*
*  \project     BMW AUTOSAR Core
*
*  \par         To be changed by user:
*               yes
*
*  \copyright   BMW Group 2014
*
*  \version     3.0.0
*
*  \remarks     ---
*
*/
/*----------------------------------------------------------------------------*/

#ifndef I_KNOW_THAT_THIS_CODE_IS_NOT_FOR_PRODUCTION
#error "the program must not be used in connection with series production"
#endif

#ifndef HW_USER_H
#define HW_USER_H


/*------------------------------------------------------------------------------
                      Include Section
-------------------------------------------------------------------------------*/

#include <Std_Types.h>                       /* AUTOSAR Standard Types         */


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

#define Hw_START_SEC_CODE
#include "Hw_MemMap.h"


extern FUNC(Std_ReturnType, HW_CODE) Hw_EraseFlash
            (
               uint32                                  WriteAddress,
               uint32                                  WriteLength
            );

extern FUNC(Std_ReturnType, HW_CODE) Hw_WriteFlash
            (
               uint32                                  WriteAddress,
               uint32                                  WriteLength,
               P2CONST  (uint8, AUTOMATIC, Hw_CONST)   WriteData
            );

extern FUNC(Std_ReturnType, HW_CODE) Hw_FlashInit
            (
	            uint8                                   FlashDriverActivationCode
            );

extern FUNC(Std_ReturnType, HW_CODE) Hw_FlashDeInit
            (
	            void
            );


#define Hw_STOP_SEC_CODE
#include "Hw_MemMap.h"


#endif /* HW_USER_H */

/*--- End of file ------------------------------------------------------------*/
