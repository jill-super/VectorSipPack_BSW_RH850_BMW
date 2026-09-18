/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2017 by Vector Informatik GmbH.                                              All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/*!        \file  Cry_30_Rh850Icus_Types.h
 *        \brief  This file contains configuration data which is needed by the module implementation.
 *
 *      \details  -
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Refer to the module's header file.
 *********************************************************************************************************************/

#if !defined (CRY_30_RH850ICUS_TYPES_H)
# define CRY_30_RH850ICUS_TYPES_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/

# include "Std_Types.h"
# include "Csm_Types.h"

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/* Mapped KeyIds */
# define CRY_KEYID_MAPPED_KEY_RAM              (0x00u)
# define CRY_KEYID_MAPPED_KEY_1                (0x01u)
# define CRY_KEYID_MAPPED_KEY_2                (0x02u)
# define CRY_KEYID_MAPPED_KEY_3                (0x03u)
# define CRY_KEYID_MAPPED_KEY_4                (0x04u)
# define CRY_KEYID_MAPPED_KEY_5                (0x05u)
# define CRY_KEYID_MAPPED_KEY_6                (0x06u)
# define CRY_KEYID_MAPPED_KEY_7                (0x07u)
# define CRY_KEYID_MAPPED_KEY_8                (0x08u)
# define CRY_KEYID_MAPPED_KEY_9                (0x09u)
# define CRY_KEYID_MAPPED_KEY_10               (0x0Au)
# define CRY_KEYID_MAPPED_KEY_11               (0x0Bu)
# define CRY_KEYID_MAPPED_KEY_12               (0x0Cu)
# define CRY_KEYID_MAPPED_KEY_13               (0x0Du)
# define CRY_KEYID_MAPPED_KEY_14               (0x0Eu)
# define CRY_KEYID_MAPPED_KEY_15               (0x0Fu)
# define CRY_KEYID_MAPPED_KEY_16               (0x10u)
# define CRY_KEYID_MAPPED_KEY_17               (0x11u)
# define CRY_KEYID_MAPPED_KEY_18               (0x12u)
# define CRY_KEYID_MAPPED_KEY_19               (0x13u)
# define CRY_KEYID_MAPPED_KEY_20               (0x14u)
# define CRY_KEYID_MAPPED_MASTER_ECU_KEY       (0x15u)

/* Raw keyIds */
# define CRY_KEYID_RAW_SECRET_KEY              (0x00u)
# define CRY_KEYID_RAW_MASTER_ECU_KEY          (0x01u)
# define CRY_KEYID_RAW_BOOT_MAC_KEY            (0x02u)
# define CRY_KEYID_RAW_BOOT_MAC                (0x03u)
# define CRY_KEYID_RAW_KEY_1                   (0x04u)
# define CRY_KEYID_RAW_KEY_2                   (0x05u)
# define CRY_KEYID_RAW_KEY_3                   (0x06u)
# define CRY_KEYID_RAW_KEY_4                   (0x07u)
# define CRY_KEYID_RAW_KEY_5                   (0x08u)
# define CRY_KEYID_RAW_KEY_6                   (0x09u)
# define CRY_KEYID_RAW_KEY_7                   (0x0Au)
# define CRY_KEYID_RAW_KEY_8                   (0x0Bu)
# define CRY_KEYID_RAW_KEY_9                   (0x0Cu)
# define CRY_KEYID_RAW_KEY_10                  (0x0Du)
# define CRY_KEYID_RAW_KEY_RAM                 (0x0Eu)
# define CRY_KEYID_RAW_KEY_11                  (0x0Fu)
# define CRY_KEYID_RAW_KEY_12                  (0x10u)
# define CRY_KEYID_RAW_KEY_13                  (0x11u)
# define CRY_KEYID_RAW_KEY_14                  (0x12u)
# define CRY_KEYID_RAW_KEY_15                  (0x13u)
# define CRY_KEYID_RAW_KEY_16                  (0x14u)
# define CRY_KEYID_RAW_KEY_17                  (0x15u)
# define CRY_KEYID_RAW_KEY_18                  (0x16u)
# define CRY_KEYID_RAW_KEY_19                  (0x17u)
# define CRY_KEYID_RAW_KEY_20                  (0x18u)

/* Values used for the parameter service of the location callout */
typedef enum
{
  CRY_SHE_TO_SECTION_START_SERVICE = 0,
  CRY_SHE_TO_SECTION_UPDATE_SERVICE,
  CRY_SHE_TO_SECTION_START_LOOP,
  CRY_SHE_TO_SECTION_STOP_LOOP,
  CRY_SHE_TO_SECTION_FINISH_SERVICE,
  CRY_SHE_TO_SECTION_SINGLE_CALL_SERVICE,
  CRY_SHE_TO_SECTION_INIT_SERVICE
}Cry_SheTimeoutApiSectionType;

/* Values used for the parameter section of the location callout */
typedef enum
{
  CRY_SHE_TO_SERVICE_CMAC_VERIFY = 0,
  CRY_SHE_TO_SERVICE_CMAC_GENERATE,
  CRY_SHE_TO_SERVICE_AES_DECRYPT,
  CRY_SHE_TO_SERVICE_AES_ENCRYPT,
  CRY_SHE_TO_SERVICE_KEY_EXTRACT,
  CRY_SHE_TO_SERVICE_KEY_WRAP,
  CRY_SHE_TO_SERVICE_PRNG_SEED,
  CRY_SHE_TO_SERVICE_PRNG_GENERATE,
  CRY_SHE_TO_SERVICE_CANCEL,
  CRY_SHE_TO_SERVICE_UNDEFINED
}Cry_SheTimeoutApiServiceType;

#endif /* CRY_30_RH850ICUS_TYPES_H */
/**********************************************************************************************************************
 *  END OF FILE: CRY_30_RH850ICUS_TYPES.H
 *********************************************************************************************************************/

