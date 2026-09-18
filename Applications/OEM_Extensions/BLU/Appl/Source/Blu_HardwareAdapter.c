/**
*  \file
*
*  \brief       BMW Module Blu Adapter for Hardware
*
*  Functionality for Adaption to module Hardware
*
*  \project     BMW Platform Software
*
*  \copyright   BMW AG 2017
*
*  \version     5.0.2
*
*  \remarks     none
*
*/

/*------------------------------------------------------------------------------
                      MISRA-Deviations
-------------------------------------------------------------------------------*/

/* MISRA-C:2004 Rule 19.1: Including Prog_MemMap.h is necessary throughout the
   file according to memory abstraction, see PRQA: 5087 */


/*------------------------------------------------------------------------------
                      Include Section
-------------------------------------------------------------------------------*/

#include "BUtil/PlatformTypes.h"                /* Standard Types              */
#include "Blu_HardwareAdapter.h"
#include "flash.h"


/*------------------------------------------------------------------------------
                      Global Functions
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


/* PRQA S 5087 2 */
#define Blu_START_SEC_CODE
#include "Blu_MemMap.h"

/**
 * \brief Init of flash driver
 *
 * Function initializes the flash driver.
 *
 * \retval        TRUE         Init is successful
 * \retval        FALSE        Init failed
 *
 * \remarks none
 */

boolean Blu_Hardware_FlashInit(void) {
  boolean retValue;

  /* --- User code start --------------------------------------------------- */
  /* A user specific code can be implementeted at this location. Please      */
  /* notice the implementation hints in the UserGuide.                       */
  /* The implementeted example code is for testing and must be removed       */
  /* for production code !!!                                                 */
  /* ----------------------------------------------------------------------- */
  
   HW_PROT_WRITE_FLMDCNT( 0x01u );
   HW_FHVE3  = (0x1u);
   HW_FHVE15 = (0x1u);

  if (FlashInit((flashKey_t) FLASHDRV_DECRYPTVALUE) == FLASH_OK) {
    retValue = TRUE;
  } else {
    /* Error while erasing */
    retValue = FALSE;
  }

  /* --- User code end ----------------------------------------------------- */

  return (retValue);
} /* end of function Blu_Hardware_FlashInit */

/**
 * \brief Deinit of flash driver
 *
 * Function deinitializes the flash driver.
 *
 * \retval        TRUE         Deinit is successful
 * \retval        FALSE        Deinit failed
 *
 * \remarks none
 */

boolean Blu_Hardware_FlashDeInit(void) {
  boolean retValue;

  /* --- User code start --------------------------------------------------- */
  /* A user specific code can be implementeted at this location. Please      */
  /* notice the implementation hints in the UserGuide.                       */
  /* The implementeted example code is for testing and must be removed       */
  /* for production code !!!                                                 */
  /* ----------------------------------------------------------------------- */

  if (FlashDeInit() == FLASH_OK) {
    retValue = TRUE;
  } else {
    /* Error while erasing */
    retValue = FALSE;
  }
  
   /* Turn off flash programming voltage (VFP) */
   HW_PROT_WRITE_FLMDCNT( 0x00u );
   HW_FHVE3  = (0x0u);
   HW_FHVE15 = (0x0u);

  /* --- User code end ----------------------------------------------------- */

  return (retValue);
} /* end of function Blu_Hardware_FlashDeInit */



/**
 * \brief Erase flash segment
 *
 * Function erases a flash segment.
 *
 * \param[in]     writeAddress    Start address of flash segment
 * \param[in]     writeLength     Length of flash segment
 *
 * \retval        TRUE         Erase is successful
 * \retval        FALSE        Erase failed
 *
 * \remarks none
 */

boolean Blu_Hardware_FlashErase(uint32 writeAddress, uint32 writeLength) {
  boolean retValue;

  /* --- User code start --------------------------------------------------- */
  /* A user specific code can be implementeted at this location. Please      */
  /* notice the implementation hints in the UserGuide.                       */
  /* The implementeted example code is for testing and must be removed       */
  /* for production code !!!                                                 */
  /* ----------------------------------------------------------------------- */

  if (FlashErase((uint32) writeAddress, (uint32)writeLength) == FLASH_OK) {
    retValue = TRUE;
  } else {
    /* Error while erasing */
    retValue = FALSE;
  }

  /* --- User code end ----------------------------------------------------- */

  return (retValue);
} /* end of function Blu_Hardware_FlashErase */



/**
 * \brief Write into flash
 *
 * Function writes data into flash.
 *
 * \param[in]     writeAddress    Start address of flash segment
 * \param[in]     writeLength     Length of flash segment
 *
 * \retval        TRUE         Erase is successful
 * \retval        FALSE        Erase failed
 *
 * \remarks none
 */

boolean Blu_Hardware_FlashWrite(uint32 writeAddress, uint32 writeLength, uint8* WriteData) {
  boolean retValue;

  /* --- User code start --------------------------------------------------- */
  /* A user specific code can be implementeted at this location. Please      */
  /* notice the implementation hints in the UserGuide.                       */
  /* The implementeted example code is for testing and must be removed       */
  /* for production code !!!                                                 */
  /* ----------------------------------------------------------------------- */

  if (FlashWrite(WriteData, writeAddress, writeLength) == FLASH_OK) {
    retValue = TRUE;
  } else {
    /* Error while writing data */
    retValue = FALSE;
  }

  /* --- User code end ----------------------------------------------------- */

  return (retValue);
} /* end of function Blu_Hardware_FlashWrite */


/* PRQA S 5087 2 */
#define Blu_STOP_SEC_CODE
#include "Blu_MemMap.h"
