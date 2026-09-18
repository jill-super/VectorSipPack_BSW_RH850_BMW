/**
*  \file
*
*  \brief       BMW Module Nrv generic
*
*  Generated version header file of module Nrv
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
*  GENERATION TIME : 2018-01-22 11:02:29.423059
*
------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------
                      MISRA-Deviations
------------------------------------------------------------------------------*/

/* MISRA-C:2004 Rule 19.7: Macro used for precompile version check. See PRQA 3453 */


#ifndef NRV_VERSION_H
#define NRV_VERSION_H

/*------------------------------------------------------------------------------
                      Macros
------------------------------------------------------------------------------*/

/**
 * \brief Nrv header major version
 */
#define Nrv_MAJOR_VERSION        (5u)

/**
 * \brief Nrv header minor version
 */
#define Nrv_MINOR_VERSION        (0u)

/**
 * \brief Nrv header patch version
 */
#define Nrv_PATCH_VERSION        (3u)


/* MISRA-C:2004 Rule 19.7 */
/* PRQA S 3453 2 */
#define Nrv_CHECK_VERSION(major, minor, patch) \
 (((major) == Nrv_MAJOR_VERSION) && ((minor) == Nrv_MINOR_VERSION) && ((patch) == Nrv_PATCH_VERSION))


#endif /* NRV_VERSION_H */
