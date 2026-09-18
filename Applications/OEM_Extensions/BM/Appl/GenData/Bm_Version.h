/**
*  \file
*
*  \brief       BMW Module Bm generic
*
*  Generated version header file of module Bm
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
*  GENERATION TIME : 2018-01-22 11:00:08.543973
*
------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------
                      MISRA-Deviations
------------------------------------------------------------------------------*/

/* MISRA-C:2004 Rule 19.7: Macro used for precompile version check. See PRQA 3453 */


#ifndef BM_VERSION_H
#define BM_VERSION_H

/*------------------------------------------------------------------------------
                      Macros
------------------------------------------------------------------------------*/

/**
 * \brief Bm header major version
 */
#define Bm_MAJOR_VERSION        (5u)

/**
 * \brief Bm header minor version
 */
#define Bm_MINOR_VERSION        (1u)

/**
 * \brief Bm header patch version
 */
#define Bm_PATCH_VERSION        (1u)


/* MISRA-C:2004 Rule 19.7: Macro used for precompile version check */
/* PRQA S 3453 2 */
#define Bm_CHECK_VERSION(major, minor, patch) \
 (((major) == Bm_MAJOR_VERSION) && ((minor) == Bm_MINOR_VERSION) && ((patch) == Bm_PATCH_VERSION))


#endif /* BM_VERSION_H */
