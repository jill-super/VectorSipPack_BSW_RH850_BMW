/**
*  \file
*
*  \brief
*
*  Version Check for Stm Module
*
*  \project     BMW Platform Software
*
*  \copyright   BMW AG 2017
*
*  \version     5.1.1
*
*  \remarks     File is generated with PAGe
*
*/

/*------------------------------------------------------------------------------
*
*  THIS FILE WAS GENERATED. DO NOT MODIFY!
*
*  GENERATOR       : BMW PAGe 1.1.0
*
*  GENERATION TIME : 2017-12-08 10:21:33.759430
*
------------------------------------------------------------------------------*/

#ifndef STM_VERSION_H
#define STM_VERSION_H

/*------------------------------------------------------------------------------
                      MISRA-Deviations
------------------------------------------------------------------------------*/
/*
 * Violation of MISRA-C:2004 Rule 19.7:
 * Reason: this macro is only used in preprocessor directive,
 * no function possible. See PRQA 3453
 */

/*------------------------------------------------------------------------------
                      Macros
------------------------------------------------------------------------------*/

/**
 * \brief ModuleName header major version
 */
#define Stm_MAJOR_VERSION        (5u)

/**
 * \brief ModuleName header minor version
 */
#define Stm_MINOR_VERSION        (1u)

/**
 * \brief ModuleName header patch version
 */
#define Stm_PATCH_VERSION        (1u)


/* PRQA S 3453 2 */
#define Stm_CHECK_VERSION(major,minor,patch) \
 (((major) == Stm_MAJOR_VERSION) && ((minor) == Stm_MINOR_VERSION) && ((patch) == Stm_PATCH_VERSION))


#endif /* STM_VERSION_H */

/*--- End of file ------------------------------------------------------------*/
