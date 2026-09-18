/**
 * \file
 *
 * \brief       Bs Classic Configuration
 *
 * This file is a generated configuration header file
 * for usage in the BMW Platform Software.
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
*  GENERATION TIME : 2018-01-22 11:14:55.868696
*
------------------------------------------------------------------------------*/

#ifndef BSCLASSIC_CFG_H
#define BSCLASSIC_CFG_H

#include "BsClassic_Version.h"

/*------------------------------------------------------------------------------
                      Macros
------------------------------------------------------------------------------*/

/* check version of the module */
#if (!BsClassic_CHECK_VERSION(5,3,0))
#error "Version of BsClassic_Cfg.h does not match the classic module version!"
#endif

#define BS_DEV_ERROR_DETECT  STD_ON

#define BS_CERT_TEMP_BUF_SIZE 128

#define BS_MAX_TOKEN_SIZE        (256u)

/** Total number of features including mode transition and LCS features */
#define BS_NUMBER_OF_FEATURES    (3u)

/** defines for feature NvM data */
#define BS_FEATURE_0 {{{BS_SFA_FSTAT_INITDISABLED, 0, 0}, 0}, {0}} /* Transition to Plant Mode Feature */
#define BS_FEATURE_1 {{{BS_SFA_FSTAT_INITDISABLED, 0, 0}, 1}, {0}} /* Transition to Engineering Mode Feature */
#define BS_FEATURE_2 {{{BS_SFA_FSTAT_INITDISABLED, 0, 0}, 65537}, {0}}

#define BS_FEATURE_ARRAY {\
    BS_FEATURE_0, \
    BS_FEATURE_1, \
    BS_FEATURE_2 \
}

/** defines for feature application interface data */
#define BS_FEATURE_APPL_0 { 65537, &Rte_Write_Bs_ActivationState_Features1_IsActivated }

#define BS_FEATURE_APPL_ARRAY {\
    BS_FEATURE_APPL_0 \
}

#define BS_LCS_NUMBEROFIDS 0u


#endif /* BSCLASSIC_CFG_H */

/*--- End of file ------------------------------------------------------------*/
