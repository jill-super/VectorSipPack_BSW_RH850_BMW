/**
*  \file
*
*  \brief       Configuration header file of module DlogSample.
*
*  \project     BMW Platform Software
*
*  \copyright   BMW AG 2015 - 2017
*
*  \version     5.0.1
*
*/

/*------------------------------------------------------------------------------
*
*  THIS FILE WAS GENERATED. DO NOT MODIFY!
*
*  GENERATOR       : BMW PAGe 1.1.0
*
*  GENERATION TIME : 2018-01-22 11:02:30.343151
*
------------------------------------------------------------------------------*/

#ifndef DLOGSAMPLE_CFG_H
#define DLOGSAMPLE_CFG_H

/*------------------------------------------------------------------------------
                      Include Section
------------------------------------------------------------------------------*/

#include "DlogClassic_Cfg.h"
#include "DlogSample_Version.h"


/*------------------------------------------------------------------------------
                      Macros
------------------------------------------------------------------------------*/

/**
 *  \brief Check version of the module
 **/
#if (!DlogClassicSample_CHECK_VERSION(5,0,1))
   #error "Version of DlogSample_Cfg.h does not match the version of the module!"
#endif


/*------------------------------------------------------------------------------
                        Configuration Section
------------------------------------------------------------------------------*/

/**
 * The parameter disables or enables support for multi CPUs.
 * STD_ON  : Enable the functionality for MultiCpu
 * STD_OFF : Disable the functionality for MultiCpu
 */
#define DLOGSAMPLE_ENABLE_MULTI_CPU           STD_OFF


   #define DLOGSAMPLE_ENABLE_RTE              STD_OFF

#endif /* DLOGSAMPLE_CFG_H */


