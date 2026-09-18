/**
 * \file
 *
 * \brief       Bs Version Information
 *
 * This file is a generated version header file
 * for usage in the BMW AUTOSAR Core.
 *
 * \project     BMW Platform Software
 *
 * \copyright   BMW AG 2016 - 2017
 *
 * \version     5.3.0
 *
 */

/*------------------------------------------------------------------------------
*
*  THIS FILE WAS GENERATED. DO NOT MODIFY!
*
*  GENERATOR       : BMW PAGe 1.1.0
*
*  GENERATION TIME : 2018-01-22 11:14:55.905700
*
------------------------------------------------------------------------------*/

#ifndef BSCLASSIC_VERSION_H
#define BSCLASSIC_VERSION_H

/*------------------------------------------------------------------------------
                      Include Section
------------------------------------------------------------------------------*/

#include "Bs_Version.h"

/*------------------------------------------------------------------------------
                      Macros
------------------------------------------------------------------------------*/

/**
 * \brief Bs header major version
 */
#define BsClassic_MAJOR_VERSION        (5u)

/**
 * \brief Bs header minor version
 */
#define BsClassic_MINOR_VERSION        (3u)

/**
 * \brief Bs header patch version
 */
#define BsClassic_PATCH_VERSION        (0u)


/* PRQA S 3453 2 */ /* Macro used for precompile version check */
#define BsClassic_CHECK_VERSION(major,minor,patch) \
 (((major) == BsClassic_MAJOR_VERSION) && ((minor) == BsClassic_MINOR_VERSION) && ((patch) == BsClassic_PATCH_VERSION))


/* Version check macro for generic part */
#define BsGeneric_CHECK_VERSION(major,minor) \
 (((major) == Bs_MAJOR_VERSION) && \
  ((minor) == Bs_MINOR_VERSION))

/* check version of the generic part */
#if (!BsGeneric_CHECK_VERSION(5,3))
   #error "Version of Classic adapter is incompatible to the generic module version!"
#endif

#endif /* BSCLASSIC_VERSION_H */

/*--- End of file ------------------------------------------------------------*/
