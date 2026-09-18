/**
*  \file
*
*  \brief       BMW Module Blu classic
*
*  Generated version header file of module Blu
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
*  GENERATION TIME : 2018-01-22 10:54:44.236545
*
------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------
                      MISRA-Deviations
------------------------------------------------------------------------------*/

/* MISRA-C:2004 Rule 19.7: Macro used for precompile version check. See PRQA 3453 */


#ifndef BLU_CLASSIC_VERSION_H
#define BLU_CLASSIC_VERSION_H

/*------------------------------------------------------------------------------
                      Macros
------------------------------------------------------------------------------*/

/**
 * \brief Blu header major version
 */
#define BluClassic_MAJOR_VERSION        (5u)

/**
 * \brief Blu header minor version
 */
#define BluClassic_MINOR_VERSION        (0u)

/**
 * \brief Blu header patch version
 */
#define BluClassic_PATCH_VERSION        (2u)



/* MISRA-C:2004 Rule 19.7: Macro used for precompile version check */
/* PRQA S 3453 2 */
#define BluClassic_CHECK_VERSION(major, minor, patch) \
 (((major) == BluClassic_MAJOR_VERSION) && ((minor) == BluClassic_MINOR_VERSION) && ((patch) == BluClassic_PATCH_VERSION))


#endif /* BLU_CLASSIC_VERSION_H */
