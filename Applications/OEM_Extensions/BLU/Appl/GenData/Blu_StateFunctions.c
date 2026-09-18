/**
*  \file
*
*  \brief       BMW Module Blu
*
*  Dispatcher for starting BLU, Bootloader or Application
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

/*------------------------------------------------------------------------------
                      MISRA-Deviations
-------------------------------------------------------------------------------*/

/* MISRA-C:2004 Rule 11.3: The value of base and offset is used as an address
   pointer for function Blu_UserFillBuffer */

/* MISRA-C:2004 Rule 19.1: including Blu_MemMap.h is necessary throughout the
   file according to memory abstraction, see PRQA: 5087 */


/*------------------------------------------------------------------------------
                      Include Section
-------------------------------------------------------------------------------*/

#include "BUtil/PlatformTypes.h"                /* Standard Types              */
#include "BluClassic_Version.h"                 /* Own version header file     */
#include "BluClassic_Cfg.h"                     /* Blu configuration           */
#include "Blu.h"                                /* Own module header           */
#include "Blu_StateFunctions.h"                 /* Blu state functions         */
#include "Blu_UserAdapter.h"
#include "Blu_HardwareAdapter.h"


/*------------------------------------------------------------------------------
                      Macros
-------------------------------------------------------------------------------*/

/* check version of the module */
#if (!BluClassic_CHECK_VERSION(5, 0, 2))
#error "Version of Blu_StateFunctions.c does not match the version of the module!"
#endif


/*------------------------------------------------------------------------------
                      Local Constants
-------------------------------------------------------------------------------*/

/* PRQA S 5087 2 */
#define Blu_START_SEC_CONST_UNSPECIFIED
#include "Blu_MemMap.h"


/* --- Bootloader --- */

/* MISRA-C:2004 Rule 8.7: Static constant is located here, because memory abstraction
   is not allowed inside a function */
/* PRQA S 3218 17 */
/**
 * \brief Segment source address of the original Bootloader for erasing
 */
static const uint32 Blu_BlSegmentAddr[BLU_BL_ERASE_ENTRY_NUMBER] = BLU_BL_ERASE_SEGMENT_ADDRESSES;


/**
 * \brief Segment source length of the original Bootloader for erasing
 */
static const uint32 Blu_BlSegmentLength[BLU_BL_ERASE_ENTRY_NUMBER] = BLU_BL_ERASE_SEGMENT_LENGTH;


/**
 * \brief Number of segments of the original Bootloader for erasing
 */
static const uint32 Blu_BlSegmentNumber[BLU_BL_ERASE_ENTRY_NUMBER] = BLU_BL_ERASE_SEGMENT_NUMBER;


/**
 * \brief Source address of the new Bootloader inside the Blu
 */
static const uint32 Blu_BlSourceAddress[BLU_BL_PROG_ENTRY_NUMBER] = BLU_BL_PROG_SOURCE_ADDRESS;


/**
 * \brief Source length of the new Bootloader inside the Blu
 */
static const uint32 Blu_BlSourceLength[BLU_BL_PROG_ENTRY_NUMBER] = BLU_BL_PROG_SOURCE_LENGTH;


/**
 * \brief Target address of the Bootloader for programming
 */
static const uint32 Blu_BlTargetAddress[BLU_BL_PROG_ENTRY_NUMBER] = BLU_BL_PROG_TARGET_ADDRESS;


/**
 * \brief Table of functions that called be sequentially for a Bm and BL update
 */
const FctTableType Blu_FunctionCall[] = {
    &Blu_StateFctFlashDeInit,
    &Blu_StateFctFlashInit,
                    &Blu_StateFctEraseOldBootloader,
    &Blu_StateFctWriteNewBootloader,
    &Blu_StateFctVerify,
        &Blu_StateFctEraseAndReset
};

/* PRQA S 5087 2 */
#define Blu_STOP_SEC_CONST_UNSPECIFIED
#include "Blu_MemMap.h"


/*------------------------------------------------------------------------------
                      Global Variables
-------------------------------------------------------------------------------*/

/*
 * The buffer for the flash driver has to be linked to a location which is
 * conform to the alignment expected by the flash driver.
 */
/* PRQA S 5087 2 */
#define Blu_START_SEC_VAR_FLASHBUFFER
#include "Blu_MemMap.h"

static uint8 Blu_FlashDriverBuffer[BLU_FLASH_WRITE_RAM_BUFFER_LENGTH];

/* PRQA S 5087 2 */
#define Blu_STOP_SEC_VAR_FLASHBUFFER
#include "Blu_MemMap.h"


/*------------------------------------------------------------------------------
                      Global Functions
-------------------------------------------------------------------------------*/

/* PRQA S 5087 2 */
#define Blu_START_SEC_CODE
#include "Blu_MemMap.h"


/*----------------------------------------------------------------------------*/
/**
 * \brief      Erase old Bootloader
 *
 * This function erases the old Bootloader.
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

Blu_StateType Blu_StateFctEraseOldBootloader(void) {
  uint32 segmentAddress, segmentLength, entryNumber, segmentNumber;

  Blu_StateType Blu_State = BLU_STATE_OK;

  for (entryNumber = 0; (Blu_State != BLU_STATE_FAILED) && (entryNumber < BLU_BL_ERASE_ENTRY_NUMBER); entryNumber++) {
    segmentAddress = Blu_BlSegmentAddr[entryNumber];
    segmentLength = Blu_BlSegmentLength[entryNumber];
    for (segmentNumber = 0;
         (Blu_State != BLU_STATE_FAILED) && (segmentNumber < Blu_BlSegmentNumber[entryNumber]); segmentNumber++) {
      Blu_WatchdogTrigger();

      if (Blu_Hardware_FlashErase((uint32)segmentAddress, (uint32)segmentLength) == FALSE) {
        Blu_State = BLU_STATE_FAILED;
      } else {
        segmentAddress += segmentLength;
      }
    }
  }
  return (Blu_State);
} /* end of function Blu_StateFctEraseOldBootloader */



/*----------------------------------------------------------------------------*/
/**
 * \brief      Flash new Bootloader
 *
 * This function flashes the new Bootloader.
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

Blu_StateType Blu_StateFctWriteNewBootloader(void) {
  uint32 BlSourceAddress, BlSourceLength, BlTargetAddress, blockIndex, entryNumber;

  Blu_StateType Blu_State = BLU_STATE_OK;

  entryNumber = 0;
  do {
    BlSourceAddress = Blu_BlSourceAddress[entryNumber];
    BlSourceLength = Blu_BlSourceLength[entryNumber];
    BlTargetAddress = Blu_BlTargetAddress[entryNumber];
    for (blockIndex = 0; (Blu_State != BLU_STATE_FAILED) &&
                         (blockIndex < BlSourceLength); blockIndex += BLU_FLASH_WRITE_RAM_BUFFER_LENGTH) {
      /* MISRA-Rule 11.3 -> see MISRA-Deviations */
      /* PRQA S 0306 2 */
      Blu_UserFillBuffer(
          (uint8*)(BlSourceAddress + blockIndex), Blu_FlashDriverBuffer, BLU_FLASH_WRITE_RAM_BUFFER_LENGTH);

      Blu_WatchdogTrigger();

      /* copy RAM buffer to flash */
      if (Blu_Hardware_FlashWrite(
          (uint32)(BlTargetAddress + blockIndex), (uint32)(BLU_FLASH_WRITE_RAM_BUFFER_LENGTH),
          (uint8*)&Blu_FlashDriverBuffer[0]) == FALSE) {
        Blu_State = BLU_STATE_FAILED;
      }
    }
    entryNumber++;
  }
    /* MISRA-Rule 13.7 -> Depending on configuration it is possible that the loop is running only once */
    /* PRQA S 3356 2 */
    /* PRQA S 3360 1 */
  while ((Blu_State != BLU_STATE_FAILED) && (entryNumber < BLU_BL_PROG_ENTRY_NUMBER));

  return (Blu_State);
} /* end of function Blu_StateFctWriteNewBootloader */



/*----------------------------------------------------------------------------*/
/**
 * \brief      Verify new Bootloader
 *
 * This function verifies the new Bootloader in flash.
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

Blu_StateType Blu_StateFctVerify(void) {
  uint32 VrfySourceAddress, VrfySourceLength, VrfyTargetAddress, entryNumber, blockIndex;

  Blu_StateType Blu_State = BLU_STATE_OK;

      /* Verifiy Bootloader */
  entryNumber = 0;
  do {
    VrfySourceAddress = Blu_BlSourceAddress[entryNumber];
    VrfySourceLength = Blu_BlSourceLength[entryNumber];
    VrfyTargetAddress = Blu_BlTargetAddress[entryNumber];
    for (blockIndex = 0; (Blu_State != BLU_STATE_FAILED) &&
                         (blockIndex < VrfySourceLength); blockIndex += BLU_FLASH_WRITE_RAM_BUFFER_LENGTH) {
      /* MISRA-Rule 11.3 -> see MISRA-Deviations */
      /* PRQA S 0306 2 */
      Blu_UserFillBuffer(
              (uint8*)(VrfySourceAddress + blockIndex), Blu_FlashDriverBuffer, BLU_FLASH_WRITE_RAM_BUFFER_LENGTH);

      Blu_WatchdogTrigger();

      /* compare buffer content with flash*/
      /* MISRA-Rule 11.3 -> see MISRA-Deviations */
      /* PRQA S 0306 2 */
      Blu_State = Blu_UserCompareBuffer(
              Blu_FlashDriverBuffer, (uint8*)(VrfyTargetAddress + blockIndex), BLU_FLASH_WRITE_RAM_BUFFER_LENGTH);
    }
    entryNumber++;
  }
    /* MISRA-Rule 13.7 -> Depending on configuration it is possible that the loop is running only once */
    /* PRQA S 3356 2 */
    /* PRQA S 3360 1 */
  while ((Blu_State != BLU_STATE_FAILED) && (entryNumber < BLU_BL_PROG_ENTRY_NUMBER));

  return (Blu_State);
} /* end of function Blu_StateFctVerify */


/* PRQA S 5087 2 */
#define Blu_STOP_SEC_CODE
#include "Blu_MemMap.h"
