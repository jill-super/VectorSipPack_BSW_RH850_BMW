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


/*------------------------------------------------------------------------------
                      MISRA-Deviations
-------------------------------------------------------------------------------*/

/* empty */


/*------------------------------------------------------------------------------
                      Include Section
-------------------------------------------------------------------------------*/

#include <Std_Types.h>                 /* AUTOSAR Standard Types               */
#include "Hw_User.h"                   /* Own header file                      */
#include "Flash.h"


/*------------------------------------------------------------------------------
                      Macros
-------------------------------------------------------------------------------*/

/* Flash related registers ------------------------------------------------------------------------- */

#define HW_FLMDCNT              (*(volatile uint32*)0xFFA00000ul)  /**< FLMD cnt register                */
#define HW_FLMDPCMD             (*(volatile uint32*)0xFFA00004ul)  /**< FLMD protection command register */
#define HW_FHVE3               (*(volatile uint32*)0xFFF82410ul)   /**< FHVE3 control register */
#define HW_FHVE15              (*(volatile uint32*)0xFFF8A430ul)   /**< FHVE15 control register */
/* FLMDPCMD -> FLMDCNT */
#define HW_PROT_WRITE_FLMDCNT(val) HW_FLMDPCMD=0xA5u;              /* Write to protected register */ \
                                   HW_FLMDCNT=(uint8)(val);    \
                                   HW_FLMDCNT=(uint8)(~(val)); \
                                   HW_FLMDCNT=(uint8)(val);


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

/* empty */


/*------------------------------------------------------------------------------
                      Local Constants
-------------------------------------------------------------------------------*/

/* empty */


/*------------------------------------------------------------------------------
                      Local Functions Prototypes
-------------------------------------------------------------------------------*/

/* empty */


/*------------------------------------------------------------------------------
                      Local Functions
-------------------------------------------------------------------------------*/

/* empty */


/*------------------------------------------------------------------------------
                      Global Functions
-------------------------------------------------------------------------------*/

#define Hw_START_SEC_CODE
#include "Hw_MemMap.h"

/* Code from Hw_User.c is only needed in Bootloader and BLU */
#if defined( BTLD ) || \
    defined( BLU )

/*----------------------------------------------------------------------------*/
/**
 * \brief Erasing flash segment
 *
 * Function erases a flash segment
 *
 * \global_rw     none
 *
 * \param[in]     EraseAddress   Start address of segment for erasing
 * \param[in]     EraseLength    Length of flash segment
 *
 * \retval        E_OK           Flash segment is erased succsessfully
 * \retval        E_NOT_OK       Flash segment is not erased
 *
 * \pre  Flash driver shall be initialized
 *
 * \post none
 *
 * \remarks none
 *
 */
/*----------------------------------------------------------------------------*/

FUNC( Std_ReturnType, HW_CODE ) Hw_EraseFlash
         (
            uint32 EraseAddress,
            uint32 EraseLength
         )
{
   Std_ReturnType          RetVal;

   /* --- User code start --------------------------------------------------- */
   /* A user specific code can be implementeted at this location. Please      */
   /* notice the implementation hints in the UserGuide.                       */
   /* The implementeted example code is for testing and must be removed       */
   /* for production code !!!                                                 */
   /* ----------------------------------------------------------------------- */

   if ( FlashErase
            (
               (flashAddress_t)        EraseAddress,
               (flashMemoryLength_t)   EraseLength
            ) == kFlashOk )
   {
      RetVal = E_OK;
   }
   else
   {
      /* Error while erasing */
      RetVal = E_NOT_OK;
   }

   /* --- User code end ----------------------------------------------------- */

   return ( RetVal );
} /* end of function Hw_EraseFlash */



/*----------------------------------------------------------------------------*/
/**
 * \brief Programming data to flash
 *
 * Function programmes the data to the target flash address
 *
 * \global_rw     none
 *
 * \param[in]     WriteAddress   Target address for programming data
 * \param[in]     WriteLength    Length of data
 * \param[in]     WriteData      Pointer to data that shall be programmed
 *
 * \retval        E_OK           All data are programmed succsessfully
 * \retval        E_NOT_OK       Not all data are programmed
 *
 * \pre  Flash driver shall be initialized
 *
 * \post none
 *
 * \remarks none
 *
 */
/*----------------------------------------------------------------------------*/

FUNC(Std_ReturnType, HW_CODE) Hw_WriteFlash
         (
            uint32 WriteAddress,
            uint32 WriteLength,
            P2CONST  ( uint8,  AUTOMATIC, Hw_CONST ) WriteData
         )
{
   Std_ReturnType          RetVal;

   /* --- User code start --------------------------------------------------- */
   /* A user specific code can be implementeted at this location. Please      */
   /* notice the implementation hints in the UserGuide.                       */
   /* The implementeted example code is for testing and must be removed       */
   /* for production code !!!                                                 */
   /* ----------------------------------------------------------------------- */

   if ( FlashWrite
            (
               (uint8 *)               WriteData,
               (flashAddress_t)        WriteAddress,
               (flashMemoryLength_t)   WriteLength
            ) == kFlashOk )
   {
      RetVal = E_OK;
   }
   else
   {
      /* Error while writing data */
      RetVal = E_NOT_OK;
   }

   /* --- User code end ----------------------------------------------------- */

   return ( RetVal );
} /* end of function Hw_WriteFlash */



/*----------------------------------------------------------------------------*/
/**
 * \brief Initialize flash driver
 *
 * Function initializes flash driver
 *
 * \global_rw     none
 *
 * \param[in]     none
 *
 * \retval        E_OK        Flash driver is initialized
 * \retval        E_NOT_OK    Flash driver is not initialized
 *
 * \pre  none
 *
 * \post none
 *
 * \remarks none
 *
 */
/*----------------------------------------------------------------------------*/

FUNC( Std_ReturnType, HW_CODE ) Hw_FlashInit( uint8 FlashDriverActivationCode )
{
   Std_ReturnType    RetVal;

   /* --- User code start --------------------------------------------------- */
   /* A user specific code can be implementeted at this location. Please      */
   /* notice the implementation hints in the UserGuide.                       */
   /* The implementeted example code is for testing and must be removed       */
   /* for production code !!!                                                 */
   /* ----------------------------------------------------------------------- */

   (void)FlashDriverActivationCode;
   
   /* Turn on flash programming voltage (VFP) */
   /* FLMD0 Handling:
      The FLMD0 can be handled by internal pull up (default) or external pin.
      How the FLMD0 has to be handled depends on the external wiring/circuit.
      Please keep in mind that a connected NWIRE debugger or FP5 use/drive this wire, too.
      Please check the controller data sheet for further details
   */
   HW_PROT_WRITE_FLMDCNT( 0x01u );
   HW_FHVE3  = (0x1u);
   HW_FHVE15 = (0x1u);



   if ( FlashInit
            (
               (flashKey_t)   FLASHDRV_DECRYPTVALUE
            ) == kFlashOk )
   {
      RetVal = E_OK;
   }
   else
   {
      /* Error while writing data */
      RetVal = E_NOT_OK;
   }

   /* --- User code end ----------------------------------------------------- */

   return ( RetVal );
}

#endif    /* code is only used in Bootloader and BLU */


/*----------------------------------------------------------------------------*/
/**
 * \brief Deinitialize flash driver
 *
 * Function deinitializes flash driver
 *
 * \global_rw     none
 *
 * \param[in]     none
 *
 * \retval        E_OK        Flash driver is deinitialized
 * \retval        E_NOT_OK    Flash driver is not deinitialized
 *
 * \pre  none
 *
 * \post none
 *
 * \remarks none
 *
 */
/*----------------------------------------------------------------------------*/

FUNC( Std_ReturnType, HW_CODE ) Hw_FlashDeInit( void )
{
   Std_ReturnType    RetVal;

   /* --- User code start --------------------------------------------------- */
   /* A user specific code can be implementeted at this location. Please      */
   /* notice the implementation hints in the UserGuide.                       */
   /* The implementeted example code is for testing and must be removed       */
   /* for production code !!!                                                 */
   /* ----------------------------------------------------------------------- */

   RetVal = E_OK;

   (void)FlashDeInit();

   /* Turn off flash programming voltage (VFP) */
   HW_PROT_WRITE_FLMDCNT( 0x00u );
   HW_FHVE3  = (0x0u);
   HW_FHVE15 = (0x0u);




   /* --- User code end ----------------------------------------------------- */

   return ( RetVal );
}


#define Hw_STOP_SEC_CODE
#include "Hw_MemMap.h"


/*--- End of file ------------------------------------------------------------*/

