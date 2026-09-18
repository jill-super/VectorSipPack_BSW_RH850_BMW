/**
*  \file
*
*  \brief       BMW Module Bm
*
*  Configuration file for module Bm
*
*  \project     BMW Platform Software
*
*  \copyright   BMW AG 2016 - 2017
*
*  \version     5.1.1
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
*  GENERATION TIME : 2018-01-22 11:00:08.540972
*
------------------------------------------------------------------------------*/


#ifndef BM_CFG_H
#define BM_CFG_H



/*------------------------------------------------------------------------------
                      Include Section
-------------------------------------------------------------------------------*/

#include <Bm_Version.h>                  /* Own version header file    */


/*------------------------------------------------------------------------------
                      Macros
-------------------------------------------------------------------------------*/

/* check version of the module */
#if (!Bm_CHECK_VERSION(5,1,1))
   #error "Version of Bm_Cfg.h does not match the version of the module!"
#endif


/**
 * \brief User function 1
 *
 * Enables or disables BootManager user function 1
 *
 * \remarks This macro depends on configuration parameter BmUserFunctionOne
 *
 */
#define    BM_USER_FUNCTION_ONE        STD_OFF


/**
 * \brief User function
 *
 * Enables or disables BootManager user function 2
 *
 * \remarks This macro depends on configuration parameter BmUserFunctionTwo
 *
 */
#define    BM_USER_FUNCTION_TWO        STD_OFF


/**
 * \brief Watchdog triggering
 *
 * Enables or disables triggering of watchdog
 *
 * \remarks This macro depends on configuration parameter BmWatchdogTrigger
 *
 */
#define    BM_USER_WATCHDOG_TRIGGER    STD_OFF


#endif /* BM_CFG_H */
