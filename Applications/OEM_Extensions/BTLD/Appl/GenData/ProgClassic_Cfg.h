/**
*  \file
*
*  \brief       BMW Module Prog
*
*  Configuration file for module Prog
*
*  \project     BMW Platform Software
*
*  \copyright   BMW AG 2017
*
*  \version     5.4.0
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
*  GENERATION TIME : 2018-01-22 11:02:29.927110
*
------------------------------------------------------------------------------*/


#ifndef PROG_CLASSIC_CFG_H
#define PROG_CLASSIC_CFG_H

/*------------------------------------------------------------------------------
                      Include Section
-------------------------------------------------------------------------------*/

#include <ProgClassic_Version.h>                /* Version header              */


/*------------------------------------------------------------------------------
                      Macros
-------------------------------------------------------------------------------*/

/* check version of the module */
#if (!ProgClassic_CHECK_VERSION(5,4,0))
   #error "Version of ProgClassic_Cfg.h does not match the version of the module!"
#endif


/**
 * \brief Addressed erasing
 *
 * Enables or disables support for diagnostic job ReadMemoryAddress
 *
 * \remarks This macro depends on configuration parameter ProgReadMemoryAddressSupported
 *
 */
#define PROG_SUPPORT_READ_MEMORY_ADDRESS_ENABLE             STD_ON


/**
 * \brief Signature check
 *
 * Enables or disables signature check for CheckMemory
 *
 * \remarks This macro depends on configuration parameter ProgCryptoEnable
 *
 */
#define PROG_CRYPTO_ENABLE                                  STD_OFF


/**
 * \brief Size of flashpage
 *
 * Size of minimum writable FlashData in Bytes
 * Allowed values: 1 - 65535
 *
 * \remarks This macro depends on configuration parameter ProgFlashPageSize
 *
 */
#define PROG_FLASH_PAGE_SIZE                                256u


/**
 * \brief Flash address alignment
 *
 * Size of Flash address alignment in Bytes
 * Allowed values: 1 - 4
 *
 * \remarks This macro depends on configuration parameter ProgFlashAddressAlign
 *
 */
#define PROG_FLASH_ADDR_ALIGN                               4u


/**
 * \brief Multi CPU support
 *
 * Enables or disables support for Slave CPUs
 *
 * \remarks This macro depends on configuration parameter ProgMultiCpuEnable
 *
 */
#define PROG_MULTI_CPU_ENABLE                               STD_OFF




#endif /* PROG_CLASSIC_CFG_H */
