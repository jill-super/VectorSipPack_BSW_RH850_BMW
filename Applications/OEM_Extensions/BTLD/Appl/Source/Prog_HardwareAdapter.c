/**
*  \file
*
*  \brief       BMW Module Prog Adapter for Hardware
*
*  Functionality for Adaption to module Hardware
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

/*------------------------------------------------------------------------------
                      MISRA-Deviations
-------------------------------------------------------------------------------*/

/* MISRA-C:2004 Rule 14.2: Function is specified in AUTOSAR with the parameter
   that is not needed, see PRQA: 3112

   MISRA-C:2004 Rule 19.1: Including Prog_MemMap.h is necessary throughout the
   file according to memory abstraction, see PRQA: 5087 */


/*------------------------------------------------------------------------------
                      Include Section
-------------------------------------------------------------------------------*/

#include "Prog_HardwareAdapter.h"
#include "BUtil/PlatformTypes.h"
#include "ProgSample_Version.h"
#include "Prog_Cfg.h"
#include "ProgClassic_Cfg.h"
#include "Prog_Internal.h"
#include "Flash.h"


/*------------------------------------------------------------------------------
                      Macros
-------------------------------------------------------------------------------*/

/* check version of the module */
#if (!ProgSample_CHECK_VERSION(5, 2, 0))
#error "Version of Prog_HardwareAdapter.c does not match the version of the module!"
#endif



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
                      Global Functions
-------------------------------------------------------------------------------*/

/* PRQA S 5087 2 */
#define Prog_START_SEC_CODE
#include "Prog_MemMap.h"


/**
 * \brief Get flash page size
 *
 * Function gets the size of a flash page.
 *
 * \param[out]     flashPageSize  Size of a flash page
 *
 * \remarks none
 */

void Prog_Hardware_GetFlashPageSize(uint32* flashPageSize) {
  *flashPageSize = (uint32)PROG_FLASH_PAGE_SIZE;
} /* end of function Prog_Hardware_GetFlashPageSize */



/**
 * \brief Get alignment for 32 Bit data access
 *
 * Function gets the alignment that is necessary for Access with 32 Bit wide Data.
 *
 * \param[out]     flashAddressAlignment  Alignment of addresses
 *
 * \remarks none
 */

void Prog_Hardware_GetAddressAlignment(uint32* flashAddressAlignment) {
  *flashAddressAlignment = (uint32)PROG_FLASH_ADDR_ALIGN;
} /* end of function Prog_Hardware_GetAddressAlignment */



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

boolean Prog_Hardware_FlashInit(void) {
  boolean retValue;

  /* --- User code start --------------------------------------------------- */
  /* A user specific code can be implementeted at this location. Please      */
  /* notice the implementation hints in the UserGuide.                       */
  /* The implementeted example code is for testing and must be removed       */
  /* for production code !!!                                                 */
  /* ----------------------------------------------------------------------- */

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
  
  
  if (FlashInit((flashKey_t) FLASHDRV_DECRYPTVALUE) == kFlashOk) {
    retValue = TRUE;
  } else {
    /* Error while erasing */
    retValue = FALSE;
  }

  /* --- User code end ----------------------------------------------------- */

  return (retValue);
} /* end of function Prog_Hardware_FlashInit */



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

boolean Prog_Hardware_FlashDeInit(void) {
  boolean retValue;

  /* --- User code start --------------------------------------------------- */
  /* A user specific code can be implementeted at this location. Please      */
  /* notice the implementation hints in the UserGuide.                       */
  /* The implementeted example code is for testing and must be removed       */
  /* for production code !!!                                                 */
  /* ----------------------------------------------------------------------- */

  if (FlashDeInit() == kFlashOk) {
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
} /* end of function Prog_Hardware_FlashDeInit */



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

boolean Prog_Hardware_EraseFlash(uint32 writeAddress, uint32 writeLength) {
  boolean retValue;

  /* --- User code start --------------------------------------------------- */
  /* A user specific code can be implementeted at this location. Please      */
  /* notice the implementation hints in the UserGuide.                       */
  /* The implementeted example code is for testing and must be removed       */
  /* for production code !!!                                                 */
  /* ----------------------------------------------------------------------- */

  if (FlashErase((flashAddress_t) writeAddress, (flashMemoryLength_t)writeLength) == kFlashOk) {
    retValue = TRUE;
  } else {
    /* Error while erasing */
    retValue = FALSE;
  }

  /* --- User code end ----------------------------------------------------- */

  return (retValue);
} /* end of function Prog_Hardware_EraseFlash */



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

boolean Prog_Hardware_WriteFlash(uint32 writeAddress, uint32 writeLength, uint8* WriteData) {
  boolean retValue;

  /* --- User code start --------------------------------------------------- */
  /* A user specific code can be implementeted at this location. Please      */
  /* notice the implementation hints in the UserGuide.                       */
  /* The implementeted example code is for testing and must be removed       */
  /* for production code !!!                                                 */
  /* ----------------------------------------------------------------------- */

  if (FlashWrite(WriteData, writeAddress, writeLength) == kFlashOk) {
    retValue = TRUE;
  } else {
    /* Error while writing data */
    retValue = FALSE;
  }

  /* --- User code end ----------------------------------------------------- */

  return (retValue);
} /* end of function Prog_Hardware_WriteFlash */


/* PRQA S 5087 2 */
#define Prog_STOP_SEC_CODE
#include "Prog_MemMap.h"
