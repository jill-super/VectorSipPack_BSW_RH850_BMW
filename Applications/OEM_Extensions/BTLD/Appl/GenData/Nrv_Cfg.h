/**
*  \file
*
*  \brief       BMW Module Nrv
*
*  Configuration file for module Nrv
*
*  \project     BMW Platform Software
*
*  \copyright   BMW AG 2017
*
*  \version     5.0.3
*/

/*------------------------------------------------------------------------------
*
*  THIS FILE WAS GENERATED. DO NOT MODIFY!
*
*  GENERATOR       : BMW PAGe 1.1.0
*
*  GENERATION TIME : 2018-01-22 11:02:29.412058
*
------------------------------------------------------------------------------*/


#ifndef NRV_CFG_H
#define NRV_CFG_H



/*------------------------------------------------------------------------------
                      Include Section
-------------------------------------------------------------------------------*/

#include "Nrv_Version.h"                     /* Own version header file        */


/*------------------------------------------------------------------------------
                      Macros
-------------------------------------------------------------------------------*/

/* check version of the module */
#if (!Nrv_CHECK_VERSION(5,0,3))
   #error "Version of Nrv_Cfg.h does not match the version of the module!"
#endif


/**
 * \brief Access to Destination for reading
 *
 * Depending on the architecture (16- or 32-Bit) a macro or a function could be defined
 *
 * \remarks This macro depends on configuration parameter NrvReadFromDest
 *
 */
/* MISRA-C:2004 Rule 19.7: Macro used for user configurable adaption */
/* PRQA S 3453 2 */
#define Nrv_ReadFromDestination(destination, offset)  (uint8)destination[offset]

#endif /* NRV_CFG_H */
