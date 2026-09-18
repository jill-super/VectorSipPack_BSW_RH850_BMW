/**
 * \file
 *
 * \brief       IntegrationSample Version Check
 *
 * \project     BMW Platform Software
 *
 * \copyright   BMW AG 2016 - 2017
 *
 * \version     5.0.3
 *
 */

/*------------------------------------------------------------------------------
*
*  THIS FILE WAS GENERATED. DO NOT MODIFY!
*
*  GENERATOR       : BMW PAGe 1.1.0
*
*  GENERATION TIME : 2018-01-29 10:57:39.557723
*
------------------------------------------------------------------------------*/

#ifndef IntegrationSample_VERSION_H
#define IntegrationSample_VERSION_H

/*------------------------------------------------------------------------------
                      Macros
------------------------------------------------------------------------------*/

/**
 * \brief IntegrationSample header major version
 */
#define IntegrationSample_MAJOR_VERSION        (5u)

/**
 * \brief IntegrationSample header minor version
 */
#define IntegrationSample_MINOR_VERSION        (0u)

/**
 * \brief IntegrationSample header patch version
 */
#define IntegrationSample_PATCH_VERSION        (3u)


#define IntegrationSample_CHECK_VERSION(major,minor,patch) \
 (((major) == IntegrationSample_MAJOR_VERSION) && ((minor) == IntegrationSample_MINOR_VERSION) && ((patch) == IntegrationSample_PATCH_VERSION))

#endif /* IntegrationSample_VERSION_H */
