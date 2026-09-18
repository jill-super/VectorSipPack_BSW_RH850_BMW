/**
*  \file
*
*  \brief       BMW Module Prog generic
*
*  Generated version header file of module Prog
*
*  \project     BMW Platform Software
*
*  \copyright   BMW AG 2016 - 2017
*
*  \version     5.4.0
*
*  \remarks
*
*/

/*------------------------------------------------------------------------------
*
*  THIS FILE WAS GENERATED. DO NOT MODIFY!
*
*  GENERATOR       : BMW PAGe 1.1.0
*
*  GENERATION TIME : 2018-01-22 11:02:29.988116
*
------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------
                      MISRA-Deviations
------------------------------------------------------------------------------*/

/* MISRA-C:2004 Rule 19.7: Macro used for precompile version check. See PRQA 3453 */


#ifndef PROG_VERSION_H
#define PROG_VERSION_H

/*------------------------------------------------------------------------------
                      Macros
------------------------------------------------------------------------------*/

/**
 * \brief ModuleName header major version
 */
#define Prog_MAJOR_VERSION        (5u)

/**
 * \brief ModuleName header minor version
 */
#define Prog_MINOR_VERSION        (4u)

/**
 * \brief ModuleName header patch version
 */
#define Prog_PATCH_VERSION        (0u)


/* MISRA-C:2004 Rule 19.7 */
/* PRQA S 3453 2 */
#define Prog_CHECK_VERSION(major,minor,patch) \
 (((major) == Prog_MAJOR_VERSION) && ((minor) == Prog_MINOR_VERSION) && ((patch) == Prog_PATCH_VERSION))


#endif /* PROG_VERSION_H */
