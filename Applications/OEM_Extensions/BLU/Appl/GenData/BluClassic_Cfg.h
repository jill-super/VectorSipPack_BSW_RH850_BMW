/**
*  \file
*
*  \brief       BMW Module Blu classic
*
*  Configuration file for module Blu
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
*
*  THIS FILE WAS GENERATED. DO NOT MODIFY!
*
*  GENERATOR       : BMW PAGe 1.1.0
*
*  GENERATION TIME : 2018-01-22 10:54:44.227544
*
------------------------------------------------------------------------------*/


#ifndef BLU_CLASSIC_CFG_H
#define BLU_CLASSIC_CFG_H


/*------------------------------------------------------------------------------
                      Include Section
-------------------------------------------------------------------------------*/

#include "BluClassic_Version.h"                  /* Own version header file    */


/*------------------------------------------------------------------------------
                      Macros
-------------------------------------------------------------------------------*/

/* check version of the module */
#if (!BluClassic_CHECK_VERSION(5,0,2))
   #error "Version of BluClassic_Cfg.h does not match the version of the module!"
#endif


/*------------------------------------------------------------------------------
                      General configuration
-------------------------------------------------------------------------------*/

/**
 * \brief User function 1
 *
 * Enables or disables Blu user function 1
 *
 * \remarks This macro depends on configuration parameter BluUserFunctionOne
 *
 */

#define    BLU_USER_FUNCTION_ONE             STD_OFF


/**
 * \brief User function 2
 *
 * Enables or disables Blu user function 2
 *
 * \remarks This macro depends on configuration parameter BluUserFunctionTwo
 *
 */

#define    BLU_USER_FUNCTION_TWO             STD_OFF


/**
 * \brief User function 3
 *
 * Enables or disables Blu user function 3
 *
 * \remarks This macro depends on configuration parameter BluUserFunctionThree
 *
 */

#define    BLU_USER_FUNCTION_THREE           STD_OFF


/**
 * \brief Watchdog triggering
 *
 * Enables or disables triggering of watchdog
 *
 * \remarks This macro depends on configuration parameter BmWatchdogTrigger
 *
 */

#define    BLU_USER_WATCHDOG_TRIGGER         STD_ON


/**
 * \brief Maximum retry value
 *
 * In case of errors during updating the Bootloader the Blu will restart and
 * retry the Bootloader update.
 *
 * \remarks This macro depends on configuration parameter BluMaxRetryCount
 *
 */

#define BLU_MAX_RETRY_COUNT                  3u


/**
 * \brief Flash RAM buffer length
 *
 * Value of the buffer that is used for the flash write. Length of Bootmanager and
 * Bootloader must be a multiple of the buffer.
 *
 * \remarks This macro depends on configuration parameter BluFlashWriteRamBufferLength
 *
 */

#define BLU_FLASH_WRITE_RAM_BUFFER_LENGTH    8192u


/**
 * \brief Range and steps for checksum
 *
 * Configure the address range within the Blu SWE for which the checksum will be
 * calculated by the Bootmanager to ensure consistency at system startup. It has
 * to be ensured that this address range must not be touched during a memory
 * layout change due to a new Bootmanager.
 *
 * \remarks This macro depends on configuration parameter BluChecksumStartaddress,
 * \remarks BluChecksumEndaddress and BluChecksumBlockstep
 *
 */

#define BLU_CHECKSUM_STARTADDRESS            0x00058000uL
#define BLU_CHECKSUM_ENDADDRESS              0x000fffffuL
#define BLU_CHECKSUM_BLOCKSTEP               0x00000100uL


/*------------------------------------------------------------------------------
                      Bootloader configuration
-------------------------------------------------------------------------------*/

/* --- Erase entries --- */


/**
 * \brief Number of segment entries Bootloader
 *
 * Configured number of segment entries of the Bootloader.
 *
 * \remarks This macro depends on the number of configured BlEraseSegmentDescription
 *
 */

#define BLU_BL_ERASE_ENTRY_NUMBER           2


/**
 * \brief Adresses of flash segments Bootloader
 *
 * Configured addresses of the Bootloader flash segments which will be erased
 * by the flash driver.
 *
 * \remarks This macro depends on configuration parameter StartAddress
 *
 */

#define BLU_BL_ERASE_SEGMENT_ADDRESSES      \
      {                                     \
        0x00008000uL,                       \
        0x00010000uL                       \
      }


/**
 * \brief Length of flash segments Bootloader
 *
 * Configured length of the Bootloader flash segments which will be erased
 * by the flash driver.
 *
 * \remarks This macro depends on configuration parameter SegmentSize
 *
 */

#define BLU_BL_ERASE_SEGMENT_LENGTH         \
      {                                     \
        0x00002000uL,                       \
        0x00008000uL                       \
      }


/**
 * \brief Number of flash segments Bootloader
 *
 * Configured number of flash segments of the Bootloader.
 *
 * \remarks This macro depends on configuration parameter NumberOfSegments
 *
 */

#define BLU_BL_ERASE_SEGMENT_NUMBER         \
      {                                     \
        4u,                                 \
        9u                                 \
      }


/* --- Program entries --- */

/**
 * \brief number of segment entries Bootmanager
 *
 * Configured number of segment entries of the Bootloader.
 *
 * \remarks This macro depends on the number of configured BlEraseSegmentDescription
 *
 */

#define BLU_BL_PROG_ENTRY_NUMBER             1


/**
 * \brief Address of new Bootloader
 *
 * Configured start address of the new Bootloader in the Blu.
 *
 * \remarks This macro depends on configuration parameter BluBlSourceAddress
 *
 */

#define BLU_BL_PROG_SOURCE_ADDRESS          \
      {                                     \
        0x00090000uL                       \
      }


/**
 * \brief Length of new Bootloader
 *
 * Configured length of the new Bootloader in the Blu.
 *
 * \remarks This macro depends on configuration parameter BluBlSourceLength
 *
 */

#define BLU_BL_PROG_SOURCE_LENGTH           \
      {                                     \
        0x00050000uL                       \
      }


/**
 * \brief Target address of new Bootloader
 *
 * Configured target address of the new Bootloader, for the write operation.
 *
 * \remarks This macro depends on configuration parameter BluBlSourceLength
 *
 */

#define BLU_BL_PROG_TARGET_ADDRESS          \
      {                                     \
        0x00008000uL                       \
      }


/*------------------------------------------------------------------------------
                      Blu SWE configuration
-------------------------------------------------------------------------------*/



/**
 * \brief Number of segment entries Blu
 *
 * Configured number of segment entries of the Blu.
 *
 * \remarks This macro depends on the number of configured BluSweEraseSegmentDescription
 *
 */

#define BLU_BLUSWE_ENTRY_NUMBER             1


/**
 * \brief Number of flash segments Blu
 *
 * Configured number of flash segments of the Blu.
 *
 * \remarks This macro depends on configuration parameter NumberOfSegments
 *
 */

#define BLU_BLUSWE_SEGMENT_NUMBER           \
      {                                     \
        0x00000001uL                       \
      }


/**
 * \brief Adresses of flash segments Blu
 *
 * Configured addresses of the Blu flash segments which will be erased
 * by the flash driver.
 *
 * \remarks This macro depends on configuration parameter StartAddress
 *
 */

#define BLU_BLUSWE_SEGMENT_ADDRESSES        \
      {                                     \
        0x000f8000uL                       \
      }


/**
 * \brief Length of flash segments Blu
 *
 * Configured length of the Blu flash segments which will be erased
 * by the flash driver.
 *
 * \remarks This macro depends on configuration parameter SegmentSize
 *
 */

#define BLU_BLUSWE_SEGMENT_LENGTH           \
      {                                     \
        0x00008000uL                       \
      }


#endif /* BLU_CLASSIC_CFG_H */
