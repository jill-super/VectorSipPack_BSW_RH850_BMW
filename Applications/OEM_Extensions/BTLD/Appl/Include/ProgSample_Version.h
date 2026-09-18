/**
*  \file
*
*  \brief       Prog Classic Sample Version Information
*
*  Generated version header file of module Prog
*
*  \project     BMW Platform Software
*
*  \copyright   BMW AG 2017
*
*  \version     5.2.0
*
*  \remarks     ---
*
*/

/*------------------------------------------------------------------------------
                      MISRA-Deviations
------------------------------------------------------------------------------*/

/* MISRA-C:2004 Rule 19.7: Macro used for precompile version check. See PRQA 3453 */


#ifndef PROG_SAMPLE_VERSION_H
#define PROG_SAMPLE_VERSION_H

/*------------------------------------------------------------------------------
                      Macros
------------------------------------------------------------------------------*/

/**
 * \brief Prog sample header major version
 */
#define ProgSample_MAJOR_VERSION        (5u)

/**
 * \brief Prog sample header minor version
 */
#define ProgSample_MINOR_VERSION        (2u)

/**
 * \brief Prog sample header patch version
 */
#define ProgSample_PATCH_VERSION        (0u)


/* Version check macro for sample part */
/* MISRA-C:2004 Rule 19.7 */
/* PRQA S 3453 4 */
#define ProgSample_CHECK_VERSION(major, minor, patch) \
 (((major) == ProgSample_MAJOR_VERSION) && \
  ((minor) == ProgSample_MINOR_VERSION) && \
  ((patch) == ProgSample_PATCH_VERSION))


#endif /* PROG_SAMPLE_VERSION_H */
