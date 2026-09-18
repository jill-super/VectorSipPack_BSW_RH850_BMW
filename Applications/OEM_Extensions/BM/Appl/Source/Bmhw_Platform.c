/*----------------------------------------------------------------------------*/
/**
*  \file
*
*  Platform specific functions for initalisation
*
*  \project BMW AUTOSAR Core
*
*  \par To be changed by user:
*  yes
*
*  \copyright BMW AG 2015
*
*  \remarks This file is an example for platform MPC5646C
*
*/
/*----------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------
|  DISCLAIMER:                                                                 |
|  As the program is not fully tested and qualified for series production      |
|  use, the user shall not be entitled to use the program in connection        |
|  with any series production. BMW provides the user with the program only     |
|  as sample application (for testing purposes).                               |
|													 |
-------------------------------------------------------------------------------*/

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

#include <Std_Types.h>               /* AUTOSAR Standard Types     */
#include "Bmhw_Platform.h"           /* own header file            */




/*------------------------------------------------------------------------------
                      Global Variables
-------------------------------------------------------------------------------*/


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

/* empty */


/*------------------------------------------------------------------------------
                      Local Constants
-------------------------------------------------------------------------------*/


/*------------------------------------------------------------------------------
                      Local Functions Prototypes
-------------------------------------------------------------------------------*/

#define Bmhw_START_SEC_CODE
#include "Bmhw_MemMap.h"

FUNC(void, Bmhw_CODE) Bm_InitClock(void);


/*------------------------------------------------------------------------------
                      Local Functions
-------------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/**
 * \brief Initializing CPU clock
 *
 * This function initializes the CPU clock registers
 *
 * \global
 *
 * \param[in]  clk_cfg   pointer to register structure
 *
 * \pre
 *
 * \post
 *
 * \remarks
 *
 */
/*----------------------------------------------------------------------------*/

FUNC(void, Bmhw_CODE) Bm_InitClock(void)
{
 return;
} /* end of function Bm_InitClock */


/*------------------------------------------------------------------------------
                      Global Functions
-------------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/**
 * \brief Basic initialisation hardware
 *
 * Basic initialisation of Watchdog and PLL after reset
 *
 * \global
 *
 * \param[in]
 *
 * \pre
 *
 * \post
 *
 * \remarks This function may only be called from Bm_Main
 *
 */
/*----------------------------------------------------------------------------*/

FUNC( void, Bmhw_CODE ) Bmhw_BasicInit (void)
{
   /* Init clock */
   Bm_InitClock();

} /* end of function Bm_HwBasicInit */



/*----------------------------------------------------------------------------*/
/**
 * \brief Basic initialisation hardware
 *
 * Read the RAM memory to force a ECC exception if exist. If a reset occurred between
 * modifying a RAM value and the adaptation of the according ECC, there now exists an
 * inconsistency, which is repaired (if ECC-error does not result from a real HW defect)
 * Basic initialisation of Watchdog and PLL after reset.
 *
 * \global
 *
 * \param[in]
 *
 * \pre
 *
 * \post
 *
 * \remarks This function may only be called from Bm_Main
 *
 */
/*----------------------------------------------------------------------------*/

#if ( SRV_HANDLE_ECC_RAM == STD_ON )

FUNC( void, Bmhw_CODE ) Bmhw_RamEccErrorTest
            (
               void
            )
{

   uint32 Address;                                             /* RAM-address */

   if (BM_START_IS_WARM_START() == FALSE)
   {
      /* check if RAM area is ECC-error-free, reading one byte per RAM block */
      for ( Address  = (uint32)MY_RAM_START;
            Address <= (uint32)( (uint32)MY_RAM_START +
                                 (uint32)MY_RAM_SIZE  -
                                 (uint32)sizeof(uint8_least)
                               );
            Address += (uint32)BM_RAM_ADDRESS_STEP
          )
      {
         /*
          * If ECC-error occurs, DataStorageException sets the EccErrorOccurred
          * flag
          */
         //volatile uint8_least devNull = *(P2VAR(uint8_least, AUTOMATIC, Bmhw_VAR) Address);
         volatile uint8_least devNull = *((uint8 *) Address);
      }

      /*
       * If ECC-error occurred while reading the RAM area, it is handeld in trap
       * function
       */

       /* Reset RGM_FES[F_POR] flag */
       BM_RGM_DES_F_POR_RESET();

   }
   /*
    * else: the whole RAM was initialized from BM_IntdispatchInit,
    *       Bm_BootStatus.BootMode is set to BOOT_MODE_APPLICATION indirectly
    */

} /* end of function Bmhw_RamEccErrorTest */

#endif


#define Bmhw_STOP_SEC_CODE
#include "Bmhw_MemMap.h"

/*--- End of file ------------------------------------------------------------*/
