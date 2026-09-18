/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2017 by Vector Informatik GmbH.                                                All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/*      \file  Crypto_30_CryWrapper_GeneratedTypes.h
 *      \brief  MICROSAR Crypto Driver (Crypto)
 *
 *      \details  Internal header file for generated types which have to be included from CSM
 *                in order to provide them to the Cry Drivers which need the old ASR4.2 types and defines.
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
*  REVISION HISTORY
*  -------------------------------------------------------------------------------------------------------------------
*  Refer to the module's header file.
*********************************************************************************************************************/

#ifndef _CRYPTO_30_CRYWRAPPER_GENERATED_TYPES_H_
# define _CRYPTO_30_CRYWRAPPER_GENERATED_TYPES_H_

# include "Csm_Types.h"

# ifndef CSM_USE_SYNC_JOB_PROCESSING /* COV_CRYPTO_30_CRYWRAPPER_CSM_TYPES */
#  define CSM_USE_SYNC_JOB_PROCESSING STD_ON
# endif

# if CSM_USE_SYNC_JOB_PROCESSING == STD_OFF
#  error CSM must be configured to SYNC mode
# endif

# ifndef CSM_MAX_ALIGN_SCALAR_TYPE /* COV_CRYPTO_30_CRYWRAPPER_CSM_TYPES */
#  define PROVIDE_CSM_TYPES
# endif

# ifdef PROVIDE_CSM_TYPES /* COV_CRYPTO_30_CRYWRAPPER_CSM_TYPES */

#  ifndef CSM_E_VER_OK /* COV_CRYPTO_30_CRYWRAPPER_CSM_TYPES */
#   define CSM_E_VER_OK                                      CRYPTO_E_VER_OK
#  endif
#  ifndef CSM_E_VER_NOT_OK /* COV_CRYPTO_30_CRYWRAPPER_CSM_TYPES */
#   define CSM_E_VER_NOT_OK                                  CRYPTO_E_VER_NOT_OK
#  endif 


/* The scalar type which has the maximum alignment restrictions on the given platform
* Valid values are 8, 16 or 32 */
#  ifndef CSM_MAX_ALIGN_SCALAR_TYPE /* COV_CRYPTO_30_CRYWRAPPER_CSM_TYPES */
#   define CSM_MAX_ALIGN_SCALAR_TYPE                           8U
#  endif

/* CSM_ASYM_PUB_KEY_MAX_SIZE shall be chosen such that
* "CSM_ASYM_PUB_KEY_MAX_SIZE * sizeof(Csm_AlignType)" is greater or equal to the
* maximum of the configured values CsmAsymEncryptMaxKeySize,
* CsmSignatureVerifyMaxKeySize, CsmAsymPublicKeyExtractMaxKeySize,
* CsmSymKeyWrapAsymMaxPubKeySize and CsmAsymPrivateKeyWrapAsymMaxPubKeySize. */
#  ifndef CSM_ASYM_PUB_KEY_MAX_SIZE /* COV_CRYPTO_30_CRYWRAPPER_CSM_TYPES */
#   define CSM_ASYM_PUB_KEY_MAX_SIZE                           1U
#  endif

/* CSM_ASYM_PRIV_KEY_MAX_SIZE shall be chosen such that
* "CSM_ASYM_PRIV_KEY_MAX_SIZE * sizeof(Csm_AlignType)" is greater or equal to the
* maximum of the configured values CsmAsymDecryptMaxKeySize,
* CsmSignatureGenerateMaxKeySize, CsmAsymPrivateKeyExtractMaxKeySize,
* CsmAsymPrivateKeyWrapSymMaxPrivKeySize and CsmAsymPrivateKeyWrapAsymMaxPrivKeySize. */
#  ifndef CSM_ASYM_PRIV_KEY_MAX_SIZE /* COV_CRYPTO_30_CRYWRAPPER_CSM_TYPES */
#   define CSM_ASYM_PRIV_KEY_MAX_SIZE                          1U
#  endif

/* CSM_SYM_KEY_MAX_SIZE shall be chosen such that
* "CSM_SYM_KEY_MAX_SIZE * sizeof(Csm_AlignType)" * is greater or equal to the maximum of the configured values
* CsmSymBlockEncryptMaxKeySize, CsmSymBlockDecryptMaxKeySize,
* CsmSymEncryptMaxKeySize, CsmSymDecryptMaxKeySize, CsmKeyDeriveMaxKeySize,
* CsmSymKeyExtractMaxKeySize, CsmMacGenerateMaxKeySize,
* CsmMacVerifyMaxKeySize, CsmSymKeyWrapSymMaxSymKeySize,
* CsmSymKeyWrapAsymMaxSymKeySize, CsmAsymPrivateKeyWrapSymMaxSymKeySize,
* CsmKeyExchangeCalcSymKeyMaxSymKeySize and CsmKeyDeriveSymKeyMaxSymKeySize. */
#  ifndef CSM_SYM_KEY_MAX_SIZE /* COV_CRYPTO_30_CRYWRAPPER_CSM_TYPES */
#   define CSM_SYM_KEY_MAX_SIZE                                48U
#  endif

/* CSM_KEY_EX_BASE_MAX_SIZE shall be chosen such that
* "CSM_KEY_EX_BASE_MAX_SIZE * sizeof(Csm_AlignType)" is greater or equal to the maximum of the configured values
* CsmKeyExchangeCalcPubValMaxBaseTypeSize, CsmKeyExchangeCalcSecretMaxBaseTypeSize,
* and CsmKeyExchangeCalcSymKeyMaxBaseTypeSize. */
#  ifndef CSM_KEY_EX_BASE_MAX_SIZE /* COV_CRYPTO_30_CRYWRAPPER_CSM_TYPES */
#   define CSM_KEY_EX_BASE_MAX_SIZE                            1U
#  endif

/* CSM_KEY_EX_PRIV_MAX_SIZE shall be chosen such that
* "CSM_KEY_EX_PRIV_MAX_SIZE * sizeof(Csm_AlignType)" is greater or equal to the maximum of the configured values
* CsmKeyExchangeCalcPubValMaxPrivateTypeSize, CsmKeyExchangeCalcSecretMaxPrivateTypeSize,
* and CsmKeyExchangeCalcSymKeyMaxPrivateTypeSize. */
#  ifndef CSM_KEY_EX_PRIV_MAX_SIZE /* COV_CRYPTO_30_CRYWRAPPER_CSM_TYPES */
#   define CSM_KEY_EX_PRIV_MAX_SIZE                            1U
#  endif

#  ifndef Rte_TypeDef_Csm_AlignType /* COV_CRYPTO_30_CRYWRAPPER_CSM_TYPES */
#   define Rte_TypeDef_Csm_AlignType
typedef uint8 Csm_AlignType;
#  endif

#  ifndef Rte_TypeDef_Csm_AsymPublicKeyType /* COV_CRYPTO_30_CRYWRAPPER_CSM_TYPES */
#   define Rte_TypeDef_Csm_AsymPublicKeyType
typedef struct
{
  uint32 length;
  Csm_AlignType data[CSM_ASYM_PUB_KEY_MAX_SIZE];
} Csm_AsymPublicKeyType;
#  endif

#  ifndef Rte_TypeDef_Csm_AsymPrivateKeyType /* COV_CRYPTO_30_CRYWRAPPER_CSM_TYPES */
#   define Rte_TypeDef_Csm_AsymPrivateKeyType
typedef struct
{
  uint32 length;
  Csm_AlignType data[CSM_ASYM_PRIV_KEY_MAX_SIZE];
} Csm_AsymPrivateKeyType;
#  endif

#  ifndef Rte_TypeDef_Csm_SymKeyType /* COV_CRYPTO_30_CRYWRAPPER_CSM_TYPES */
#   define Rte_TypeDef_Csm_SymKeyType
typedef struct
{
  uint32 length;
  Csm_AlignType data[CSM_SYM_KEY_MAX_SIZE];
} Csm_SymKeyType;
#  endif

#  ifndef Rte_TypeDef_Csm_KeyExchangeBaseType /* COV_CRYPTO_30_CRYWRAPPER_CSM_TYPES */
#   define Rte_TypeDef_Csm_KeyExchangeBaseType
typedef struct
{
  uint32 length;
  Csm_AlignType data[CSM_KEY_EX_BASE_MAX_SIZE];
} Csm_KeyExchangeBaseType;
#  endif

#  ifndef Rte_TypeDef_Csm_KeyExchangePrivateType /* COV_CRYPTO_30_CRYWRAPPER_CSM_TYPES */
#   define Rte_TypeDef_Csm_KeyExchangePrivateType
typedef struct
{
  uint32 length;
  Csm_AlignType data[CSM_KEY_EX_PRIV_MAX_SIZE];
} Csm_KeyExchangePrivateType;
#  endif


#  ifndef Rte_TypeDef_Csm_ConfigIdType /* COV_CRYPTO_30_CRYWRAPPER_CSM_TYPES */
#   define Rte_TypeDef_Csm_ConfigIdType
typedef uint16 Csm_ConfigIdType;
#  endif

#  ifndef Rte_TypeDef_Csm_ReturnType /* COV_CRYPTO_30_CRYWRAPPER_CSM_TYPES */
#   define Rte_TypeDef_Csm_ReturnType
typedef uint8 Csm_ReturnType;
#  endif

#  ifndef Rte_TypeDef_Csm_VerifyResultType /* COV_CRYPTO_30_CRYWRAPPER_CSM_TYPES */
#   define Rte_TypeDef_Csm_VerifyResultType
typedef uint8 Csm_VerifyResultType;
#  endif



#  ifndef CSM_E_OK /* COV_CRYPTO_30_CRYWRAPPER_CSM_TYPES */
#   define CSM_E_OK                  (0x00u)
#  endif

#  ifndef CSM_E_NOT_OK /* COV_CRYPTO_30_CRYWRAPPER_CSM_TYPES */
#   define CSM_E_NOT_OK              (0x01u)
#  endif

#  ifndef CSM_E_BUSY /* COV_CRYPTO_30_CRYWRAPPER_CSM_TYPES */
#   define CSM_E_BUSY                (0x02u)
#  endif

#  ifndef CSM_E_SMALL_BUFFER /* COV_CRYPTO_30_CRYWRAPPER_CSM_TYPES */
#   define CSM_E_SMALL_BUFFER        (0x03u)
#  endif

#  ifndef CSM_E_ENTROPY_EXHAUSTION /* COV_CRYPTO_30_CRYWRAPPER_CSM_TYPES */
#   define CSM_E_ENTROPY_EXHAUSTION  (0x04u)
#  endif

# endif

#endif /* _CRYPTO_30_CRYWRAPPER_GENERATED_TYPES_H_ */
