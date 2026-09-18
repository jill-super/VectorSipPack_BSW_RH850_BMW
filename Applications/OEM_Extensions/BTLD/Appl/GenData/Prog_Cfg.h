/**
*  \file
*
*  \brief       BMW Module Prog
*
*  Configuration file for module Prog
*
*  \project     BMW Platform Software
*
*  \copyright   BMW AG 2012 - 2017
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
*  GENERATION TIME : 2018-01-22 11:02:29.967114
*
------------------------------------------------------------------------------*/


#ifndef PROG_CFG_H
#define PROG_CFG_H



/*------------------------------------------------------------------------------
                      Include Section
-------------------------------------------------------------------------------*/

#include "Prog_Version.h"                   /* Own version header              */


/*------------------------------------------------------------------------------
                      Macros
-------------------------------------------------------------------------------*/

/* check version of the module */
#if (!Prog_CHECK_VERSION(5,4,0))
   #error "Version of Prog_Cfg.h does not match the version of the module!"
#endif


/**
 * \brief Addressed erasing
 *
 * Enables or disables addressed erasing
 *
 * \remarks This macro depends on configuration parameter ProgEraseAddressedEnable
 *
 */
#define PROG_ERASE_MEMORY_ADDRESSED_ENABLE                  STD_ON


/**
 * \brief Data compression
 *
 * Enables or disables compression for TransferData
 *
 * \remarks This macro depends on configuration parameter ProgNoncompressedEnable
 *
 */
#define PROG_NONCOMPRESSED_ENABLE                           STD_ON


/**
 * \brief Nrv compression
 *
 * Enables or disables Nrv compression for TransferData
 *
 * \remarks This macro depends on configuration parameter ProgNrvEnable
 *
 */
#define PROG_NRV_ENABLE                                     STD_ON


/**
 * \brief HTTP-Update
 *
 * Enables or disables support for HTTP-Update
 *
 * \remarks This macro depends on configuration parameter ProgHttpEnable
 *
 */
#define PROG_HTTP_ENABLE                                    STD_OFF


/**
 * \brief Multi CPU support
 *
 * Enables or disables support for Slave CPUs
 *
 * \remarks This macro depends on configuration parameter ProgMultiCpuEnable
 *
 */
#define PROG_MULTI_CPU_ENABLE                               STD_OFF


/**
 * \brief DeleteSwPackage support
 *
 * Enables or disables support of diagnostic job DeleteSwPackage
 *
 * \remarks This macro depends on configuration parameter ProgDeleteSwPackageEnable
 *
 */
#define PROG_DELETE_SW_PACKAGE                              STD_OFF


/**
 * \brief Decompression tmp buffer
 *
 * Size of temp buffer for decompression
 *
 * \remarks This macro depends on configuration parameter ProgNrvTempBufferSize
 *
 */
#define PROG_NRV_TEMP_BUFFER_SIZE                           16384


#endif /* PROG_CFG_H */
