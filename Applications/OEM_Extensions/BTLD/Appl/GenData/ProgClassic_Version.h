/**
*  \file
*
*  \brief       BMW Module Prog generic
*
*  Generated version header file of module Prog
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
*  GENERATION TIME : 2018-01-22 11:02:29.951112
*
------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------
                      MISRA-Deviations
------------------------------------------------------------------------------*/

/* MISRA-C:2004 Rule 19.7: Macro used for precompile version check. See PRQA 3453 */


#ifndef PROG_CLASSIC_VERSION_H
#define PROG_CLASSIC_VERSION_H

/*------------------------------------------------------------------------------
                      Includes
------------------------------------------------------------------------------*/

#include <Prog_Version.h>


/*------------------------------------------------------------------------------
                      Macros
------------------------------------------------------------------------------*/

/**
 * \brief Prog classic header major version
 */
#define ProgClassic_MAJOR_VERSION        (5u)

/**
 * \brief Prog classic header minor version
 */
#define ProgClassic_MINOR_VERSION        (4u)

/**
 * \brief Prog classic header patch version
 */
#define ProgClassic_PATCH_VERSION        (0u)


/* Version check macro for adapter part */
/* MISRA-C:2004 Rule 19.7 */
/* PRQA S 3453 4 */
#define ProgClassic_CHECK_VERSION(major, minor, patch) \
 (((major) == ProgClassic_MAJOR_VERSION) && \
  ((minor) == ProgClassic_MINOR_VERSION) && \
  ((patch) == ProgClassic_PATCH_VERSION))


/* Version check macro for generic part */
/* MISRA-C:2004 Rule 19.7 */
/* PRQA S 3453 3 */
#define ProgGeneric_CHECK_VERSION(major, minor) \
 (((major) == Prog_MAJOR_VERSION) && \
  ((minor) == Prog_MINOR_VERSION))


/* check version of generic part */
#if (!ProgGeneric_CHECK_VERSION(5, 4))
#error "Version of Prog classic adapter is incompatible to the generic module version!"
#endif

#endif /* PROG_CLASSIC_VERSION_H */
