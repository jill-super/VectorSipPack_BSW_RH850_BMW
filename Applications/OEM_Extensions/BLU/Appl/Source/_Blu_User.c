/*----------------------------------------------------------------------------*/
/**
*  \file
*
*  \brief       BMW Module BluSample
*
*  User specific functions
*
*  \project     BMW AUTOSAR Core
*
*  \par         To be changed by user:
*               yes
*
*  \copyright   BMW AG 2012 - 2015
*
*  \version     3.1.0
*
*  \remarks     ---
*
*/
/*----------------------------------------------------------------------------*/

#ifndef I_KNOW_THAT_THIS_CODE_IS_NOT_FOR_PRODUCTION
#error "the program must not be used in connection with series production"
#endif


/*------------------------------------------------------------------------------
                      MISRA-Deviations
-------------------------------------------------------------------------------*/

/* empty */


/*------------------------------------------------------------------------------
                      Include Section
-------------------------------------------------------------------------------*/

#include <Std_Types.h>                       /* AUTOSAR Standard Types         */
#include "Blu_Version.h"                     /* Own version header file        */
#include "Blu_Cfg.h"                         /* Blu configuration              */
#include "Blu_User.h"                        /* Driver API                     */
#include "Blu.h"                             /* Function type declaration      */
#include "Blu_StateFunctions.h"              /* Blu state functions            */

#include "Hw_User.h"
#include "Flash.h"
#include "Mcu.h"


/*------------------------------------------------------------------------------
                      Macros
-------------------------------------------------------------------------------*/

/* check version of the module */
#if (!Blu_CHECK_VERSION(3,1,0))
   #error "Version of Blu_User.c does not match the version of the module!"
#endif


/*------------------------------------------------------------------------------
                      Global Variables
-------------------------------------------------------------------------------*/

/* empty */


/*------------------------------------------------------------------------------
                      Global Constants
-------------------------------------------------------------------------------*/

/* empty */


/*------------------------------------------------------------------------------
                      Local Data Types
-------------------------------------------------------------------------------*/

/* empty */


/*------------------------------------------------------------------------------
                      Local Variables
-------------------------------------------------------------------------------*/

#define BluSample_START_SEC_VAR_INIT_32
#include "Blu_MemMap.h"

/* --- Blu --- */
/** \swsid BLU_ */
/**
 * \brief Number of flash segment entries of the Blu SWE
 */
VAR(uint32, BluSample_VAR) Blu_BluSweSegmentNumber[BLU_BLUSWE_ENTRY_NUMBER]      = BLU_BLUSWE_SEGMENT_NUMBER;

/** \swsid BLU_ */
/**
 * \brief Addresses of the Blu SWE flash segments
 */
VAR(uint32, BluSample_VAR) Blu_BluSweSegmentAddr[BLU_BLUSWE_ENTRY_NUMBER]        = BLU_BLUSWE_SEGMENT_ADDRESSES;

/** \swsid BLU_ */
/**
 * \brief Length of the Blu SWE flash segments
 */
VAR(uint32, BluSample_VAR) Blu_BluSweSegmentLength[BLU_BLUSWE_ENTRY_NUMBER]      = BLU_BLUSWE_SEGMENT_LENGTH;

#define BluSample_STOP_SEC_VAR_INIT_32
#include "Blu_MemMap.h"


/*------------------------------------------------------------------------------
                      Local Constants
-------------------------------------------------------------------------------*/

/* empty */


/*------------------------------------------------------------------------------
                      Local Functions Prototypes
-------------------------------------------------------------------------------*/

/* empty */


/*------------------------------------------------------------------------------
                        Global Functions
-------------------------------------------------------------------------------*/

#define BluSample_START_SEC_CODE
#include "Blu_MemMap.h"

/*----------------------------------------------------------------------------*/
/**
 * \brief      Watchdog trigger
 *
 * This function triggers the watchdog.
 *
 * \global     none
 *
 * \retval     none
 *
 * \pre        none
 *
 * \post       none
 *
 * \remarks    none
 *
 */
/*----------------------------------------------------------------------------*/

FUNC ( void, BluSample_CODE ) Blu_WatchdogTrigger( void )
{
/*   Wdg_SetTriggerCondition(0);  */    /* enable if watchdog is used */
   return;
} /* end of function Blu_WatchDogTrigger */



/*----------------------------------------------------------------------------*/
/**
 * \brief State machine of the Blu
 *
 * Fills the flash buffer with data.
 *
 * \global_w   sourceBuffer, sourceBufferSize, sourceIndex
 *
 * \param[in]  srcAddress     source address in flash which must be a multiple
 * \param[in]                 of BLU_FLASH_WRITE_RAM_BUFFER_LENGTH
 *
 * \retval none
 *
 * \pre none
 *
 * \post none
 *
 * \remarks none
 *
 */
/*----------------------------------------------------------------------------*/
FUNC ( void, BluSample_CODE ) Blu_UserFillBuffer
(
   P2CONST ( uint8,  AUTOMATIC, Blu_APPL_DATA ) srcAddress,
   P2VAR   ( uint8,  AUTOMATIC, Blu_APPL_DATA ) destAddress,
   VAR     ( uint32, Blu_VAR )                  length
)
{
   VAR ( uint32, AUTOMATIC )           bufferIndex;

   for ( bufferIndex = 0; bufferIndex < length; bufferIndex++ )
   {
      /* MISRA-Rule 17.4 -> The pointer arithmetic is necessary to use the in-parameter
         as base pointer in this loop incremented by the offset */
      /* PRQA S 0488 1 */
      destAddress[bufferIndex] = srcAddress[bufferIndex];
   }
   return;
} /* end of function Blu_UserFillBuffer */



/*----------------------------------------------------------------------------*/
/**
 * \brief State machine of the Blu
 *
 * Fills the flash buffer with data.
 *
 * \global_w   sourceBuffer, sourceBufferSize, sourceIndex
 *
 * \param[in]  srcAddress     source address in flash which must be a multiple
 * \param[in]                 of BLU_FLASH_WRITE_RAM_BUFFER_LENGTH
 * \param[in]  destAddress    destination address in flash which must be a
 * \param[in]                 multiple of BLU_FLASH_WRITE_RAM_BUFFER_LENGTH
 *
 * \retval none
 *
 * \pre none
 *
 * \post none
 *
 * \remarks none
 *
 */
/*----------------------------------------------------------------------------*/
FUNC ( Blu_StateType, BluSample_CODE ) Blu_UserCompareBuffer
(
   P2CONST ( uint8,  AUTOMATIC, Blu_APPL_DATA ) srcAddress,
   P2CONST ( uint8,  AUTOMATIC, Blu_APPL_DATA ) destAddress,
   VAR     ( uint32, Blu_VAR )                  length
)
{
   VAR ( uint32, AUTOMATIC )           bufferIndex;
   VAR ( Blu_StateType, AUTOMATIC )    Blu_State = BLU_STATE_OK;

         for ( bufferIndex = 0; bufferIndex < length; bufferIndex++ )
         {
            /* MISRA-Rule 11.3 -> see MISRA-Deviations */
            /* PRQA S 0306 1 */
            if ( srcAddress[bufferIndex] != destAddress[bufferIndex] )
            {
               Blu_State = BLU_STATE_FAILED;
            }
         }
   return ( Blu_State );
} /* end of function Blu_UserCompareBuffer */



/*----------------------------------------------------------------------------*/
/**
 * \brief      Deinit flash driver
 *
 * This function deinitializes the flash driver. It  must be implemented by
 * the user. If the function fails, the variable Blu_State shall be set to
 * BLU_STATE_FAILED.
 *
 * \global     none
 *
 * \retval     BLU_STATE_OK      Execution of function is ok
 * \retval     BLU_STATE_FAILED  Execution of function is failed
 *
 * \pre        none
 *
 * \post       none
 *
 * \remarks    none
 *
 */
/*----------------------------------------------------------------------------*/

FUNC ( Blu_StateType, BluSample_CODE ) Blu_StateFctFlashDeInit( void )
{
   VAR ( Blu_StateType, AUTOMATIC )  Blu_State = BLU_STATE_OK;

   /* Example code for deinitializing the flash driver */
   if ( E_OK != Hw_FlashDeInit() )
   {
      Blu_State = BLU_STATE_FAILED;
   }
   return ( Blu_State );
} /* end of function Blu_StateFctFlashDeInit */



/*----------------------------------------------------------------------------*/
/**
 * \brief      Init flash driver
 *
 * This function initializes the flash driver. It  must be implemented by
 * the user. If the function fails, the variable Blu_State shall be set to
 * BLU_STATE_FAILED.
 *
 * \global     none
 *
 * \retval     BLU_STATE_OK      Execution of function is ok
 * \retval     BLU_STATE_FAILED  Execution of function is failed
 *
 * \pre        none
 *
 * \post       none
 *
 * \remarks    none
 *
 */
/*----------------------------------------------------------------------------*/

FUNC ( Blu_StateType, BluSample_CODE ) Blu_StateFctFlashInit( void )
{
   VAR ( Blu_StateType, AUTOMATIC )  Blu_State = BLU_STATE_OK;

   /* Example code for initializing the flash driver */
   if ( E_OK != Hw_FlashInit ( (uint8)  0x06 ) )
   {
      Blu_State = BLU_STATE_FAILED;
   }
   return ( Blu_State );
} /* end of function Blu_StateFctFlashInit */



/*----------------------------------------------------------------------------*/
/**
 * \brief      Erase and reset
 *
 * This function erases the Blu SWE(s) and resets the CPU. If the segment must
 * that is used for the Blu, this function shall copy the routines for erase
 * and reset to the RAM. After starting, the routines may never return to the
 * flash before the reset has taken place. The function must be implemented by
 * the user. If the function fails, the variable Blu_State shall be set to
 * BLU_STATE_FAILED.
 *
 * \global     none
 *
 * \retval     BLU_STATE_OK      Execution of function is ok
 * \retval     BLU_STATE_FAILED  Execution of function is failed
 *
 * \pre        none
 *
 * \post       none
 *
 * \remarks    The flash driver must be initialized.
 *
 */
/*----------------------------------------------------------------------------*/

FUNC ( Blu_StateType, BluSample_CODE ) Blu_StateFctEraseAndReset( void )
{
   VAR ( Blu_StateType, AUTOMATIC )  Blu_State;

   /* Example code for erase the Blue SWE and reset the ECU */
   VAR ( uint32, AUTOMATIC ) segmentAddress, segmentLength, entryNumber, segmentNumber;

   Blu_State = BLU_STATE_FINISHED;

   for ( entryNumber = 0; ( Blu_State != BLU_STATE_FAILED ) && ( entryNumber < BLU_BLUSWE_ENTRY_NUMBER ); entryNumber++ )
   {
      segmentAddress = Blu_BluSweSegmentAddr[entryNumber];
      segmentLength  = Blu_BluSweSegmentLength[entryNumber];
      for ( segmentNumber = 0; ( Blu_State != BLU_STATE_FAILED ) && ( segmentNumber < Blu_BluSweSegmentNumber[entryNumber] ); segmentNumber++ )
      {
         Blu_WatchdogTrigger();

         if ( E_OK != Hw_EraseFlash (
                              (uint32) segmentAddress,
                              (uint32) segmentLength
                                         )
            )
         {
            Blu_State = BLU_STATE_FAILED;
         }
         else
         {
            segmentAddress += segmentLength;
         }
      }
   }
   
   (void)Hw_FlashDeInit();

   /* Reset */
   Mcu_PerformReset();

   /* Wait until reset is executed */
   while(1);

   /* return ( Blu_State ); */
} /* end of function Blu_StateFctEraseAndReset */


/*----------------------------------------------------------------------------*/
/**
 * \brief User specific function 1
 *
 * This function is called after the flash driver is initialized, but before
 * the old Bootmanger will be erased. The function  must be implemented by the
 * user, if it is needed. In this case the config switch BluUserFunctionOneEnable
 * shall be set. If it is not set, the function can be removed. If the function
 * fails, the variable Blu_State shall be set to BLU_STATE_FAILED.
 *
 * \global     none
 *
 * \retval     BLU_STATE_OK      Execution of function is ok
 * \retval     BLU_STATE_FAILED  Execution of function is failed
 *
 * \pre        none
 *
 * \post       none
 *
 * \remarks    none
 *
 */
/*----------------------------------------------------------------------------*/

FUNC ( Blu_StateType, BluSample_CODE ) Blu_StateFctUserFunctionOne( void )
{
   VAR ( Blu_StateType, AUTOMATIC )  Blu_State = BLU_STATE_OK;

   /* User specific implementation */

   return ( Blu_State );
} /* end of function Blu_StateFctUserFunctionOne */



/*----------------------------------------------------------------------------*/
/**
 * \brief User specific function 2
 *
 * This function is called after the new Bootmanger is programmed, but before
 * the old Bootloader will be erased. The function  must be implemented by the
 * user, if it is needed. In this case the config switch BluUserFunctionTwoEnable
 * shall be set. If it is not set, the function can be removed. If the function
 * fails, the variable Blu_State shall be set to BLU_STATE_FAILED.
 *
 * \global     none
 *
 * \retval     BLU_STATE_OK      Execution of function is ok
 * \retval     BLU_STATE_FAILED  Execution of function is failed
 *
 * \pre        none
 *
 * \post       none
 *
 * \remarks    none
 *
 */
/*----------------------------------------------------------------------------*/

FUNC ( Blu_StateType, BluSample_CODE ) Blu_StateFctUserFunctionTwo( void )
{
   VAR ( Blu_StateType, AUTOMATIC )  Blu_State = BLU_STATE_OK;

   /* User specific implementation */

   return ( Blu_State );
} /* end of function Blu_StateFctUserFunctionTwo */



/*----------------------------------------------------------------------------*/
/**
 * \brief User specific function 3
 *
 * This function is called after the new Bootmanager and Bootloader are verified,
 * but before the identification of the Blu will be erased. The function  must
 * be implemented by the user, if it is needed. In this case the config switch
 * BluUserFunctionThreeEnable shall be set. If it is not set, the function can
 * be removed. If the function fails, the variable Blu_State shall be set to
 * BLU_STATE_FAILED.
 *
 * \global     none
 *
 * \retval     BLU_STATE_OK      Execution of function is ok
 * \retval     BLU_STATE_FAILED  Execution of function is failed
 *
 * \pre        none
 *
 * \post       none
 *
 * \remarks    none
 *
 */
/*----------------------------------------------------------------------------*/

FUNC ( Blu_StateType, BluSample_CODE ) Blu_StateFctUserFunctionThree( void )
{
   VAR ( Blu_StateType, AUTOMATIC )  Blu_State = BLU_STATE_OK;

   /* User specific implementation */

   return ( Blu_State );
} /* end of function Blu_StateFctUserFunctionThree */


#define BluSample_STOP_SEC_CODE
#include "Blu_MemMap.h"

/*--- End of file ------------------------------------------------------------*/
