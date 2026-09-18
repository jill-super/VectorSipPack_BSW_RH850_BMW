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
/*      \file  Crypto_30_CryWrapper_Hw.h
 *      \brief  MICROSAR Crypto Driver (Crypto)
 *
 *      \details  Internal header file for hardware specific functions
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Refer to the module's header file.
 *********************************************************************************************************************/

#if !defined (CRYPTO_30_CRYWRAPPER_HW_H)
# define CRYPTO_30_CRYWRAPPER_HW_H


/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
# include "Csm.h"
# include "Crypto_30_CryWrapper_Cfg.h"

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 **********************************************************************************************************************/
# if !defined (CRYPTO_30_CRYWRAPPER_LOCAL) /* COV_CRYPTO_30_CRYWRAPPER_LOCAL_DEFINE */
#  define CRYPTO_30_CRYWRAPPER_LOCAL static
# endif

 /* PRQA S 3453 81 */ /* MD_MSR_19.7 */
# define Crypto_30_CryWrapper_GetInitPtrOfMacGenerateStartConfig(x)             Crypto_30_CryWrapper_GetInitPtrOfMacGenerateConfig(x)
# if (CRYPTO_30_CRYWRAPPER_PROVIDE_ID_INSTEAD_OF_POINTER == STD_OFF)
#  define Crypto_30_CryWrapper_GetInitPtrOfMacGenerateUpdateConfig(x)           Crypto_30_CryWrapper_GetInitPtrOfMacGenerateConfig(x)
#  define Crypto_30_CryWrapper_GetInitPtrOfMacGenerateFinishConfig(x)           Crypto_30_CryWrapper_GetInitPtrOfMacGenerateConfig(x)
# else
#  define Crypto_30_CryWrapper_GetInitPtrOfMacGenerateUpdateConfig(id)          (0u)
#  define Crypto_30_CryWrapper_GetInitPtrOfMacGenerateFinishConfig(id)          (0u)
# endif

# define Crypto_30_CryWrapper_GetInitPtrOfMacVerifyStartConfig(x)               Crypto_30_CryWrapper_GetInitPtrOfMacVerifyConfig(x)
# if (CRYPTO_30_CRYWRAPPER_PROVIDE_ID_INSTEAD_OF_POINTER == STD_OFF)
#  define Crypto_30_CryWrapper_GetInitPtrOfMacVerifyUpdateConfig(x)             Crypto_30_CryWrapper_GetInitPtrOfMacVerifyConfig(x)
#  define Crypto_30_CryWrapper_GetInitPtrOfMacVerifyFinishConfig(x)             Crypto_30_CryWrapper_GetInitPtrOfMacVerifyConfig(x)
# else
#  define Crypto_30_CryWrapper_GetInitPtrOfMacVerifyUpdateConfig(id)            (0u)
#  define Crypto_30_CryWrapper_GetInitPtrOfMacVerifyFinishConfig(id)            (0u)
# endif

# define Crypto_30_CryWrapper_GetInitPtrOfRandomSeedStartConfig(x)              Crypto_30_CryWrapper_GetInitPtrOfRandomSeedConfig(x)
# if (CRYPTO_30_CRYWRAPPER_PROVIDE_ID_INSTEAD_OF_POINTER == STD_OFF)
#  define Crypto_30_CryWrapper_GetInitPtrOfRandomSeedUpdateConfig(x)            Crypto_30_CryWrapper_GetInitPtrOfRandomSeedConfig(x)
#  define Crypto_30_CryWrapper_GetInitPtrOfRandomSeedFinishConfig(x)            Crypto_30_CryWrapper_GetInitPtrOfRandomSeedConfig(x)
# else
#  define Crypto_30_CryWrapper_GetInitPtrOfRandomSeedUpdateConfig(id)           (0u)
#  define Crypto_30_CryWrapper_GetInitPtrOfRandomSeedFinishConfig(id)           (0u)
# endif

# define Crypto_30_CryWrapper_GetInitPtrOfSymBlockDecryptStartConfig(x)         Crypto_30_CryWrapper_GetInitPtrOfSymBlockDecryptConfig(x)
# if (CRYPTO_30_CRYWRAPPER_PROVIDE_ID_INSTEAD_OF_POINTER == STD_OFF)
#  define Crypto_30_CryWrapper_GetInitPtrOfSymBlockDecryptUpdateConfig(x)       Crypto_30_CryWrapper_GetInitPtrOfSymBlockDecryptConfig(x)
#  define Crypto_30_CryWrapper_GetInitPtrOfSymBlockDecryptFinishConfig(x)       Crypto_30_CryWrapper_GetInitPtrOfSymBlockDecryptConfig(x)
# else
#  define Crypto_30_CryWrapper_GetInitPtrOfSymBlockDecryptUpdateConfig(id)      (0u)
#  define Crypto_30_CryWrapper_GetInitPtrOfSymBlockDecryptFinishConfig(id)      (0u)
# endif

# define Crypto_30_CryWrapper_GetInitPtrOfSymBlockEncryptStartConfig(x)         Crypto_30_CryWrapper_GetInitPtrOfSymBlockEncryptConfig(x)
# if (CRYPTO_30_CRYWRAPPER_PROVIDE_ID_INSTEAD_OF_POINTER == STD_OFF)
#  define Crypto_30_CryWrapper_GetInitPtrOfSymBlockEncryptUpdateConfig(x)       Crypto_30_CryWrapper_GetInitPtrOfSymBlockEncryptConfig(x)
#  define Crypto_30_CryWrapper_GetInitPtrOfSymBlockEncryptFinishConfig(x)       Crypto_30_CryWrapper_GetInitPtrOfSymBlockEncryptConfig(x)
# else
#  define Crypto_30_CryWrapper_GetInitPtrOfSymBlockEncryptUpdateConfig(id)      (0u)
#  define Crypto_30_CryWrapper_GetInitPtrOfSymBlockEncryptFinishConfig(id)      (0u)
# endif

# define Crypto_30_CryWrapper_GetInitPtrOfSymDecryptStartConfig(x)              Crypto_30_CryWrapper_GetInitPtrOfSymDecryptConfig(x)
# if (CRYPTO_30_CRYWRAPPER_PROVIDE_ID_INSTEAD_OF_POINTER == STD_OFF)
#  define Crypto_30_CryWrapper_GetInitPtrOfSymDecryptUpdateConfig(x)            Crypto_30_CryWrapper_GetInitPtrOfSymDecryptConfig(x)
#  define Crypto_30_CryWrapper_GetInitPtrOfSymDecryptFinishConfig(x)            Crypto_30_CryWrapper_GetInitPtrOfSymDecryptConfig(x)
# else
#  define Crypto_30_CryWrapper_GetInitPtrOfSymDecryptUpdateConfig(id)           (0u)
#  define Crypto_30_CryWrapper_GetInitPtrOfSymDecryptFinishConfig(id)           (0u)
# endif

# define Crypto_30_CryWrapper_GetInitPtrOfSymEncryptStartConfig(x)              Crypto_30_CryWrapper_GetInitPtrOfSymEncryptConfig(x)
# if (CRYPTO_30_CRYWRAPPER_PROVIDE_ID_INSTEAD_OF_POINTER == STD_OFF)
#  define Crypto_30_CryWrapper_GetInitPtrOfSymEncryptUpdateConfig(x)            Crypto_30_CryWrapper_GetInitPtrOfSymEncryptConfig(x)
#  define Crypto_30_CryWrapper_GetInitPtrOfSymEncryptFinishConfig(x)            Crypto_30_CryWrapper_GetInitPtrOfSymEncryptConfig(x)
# else
#  define Crypto_30_CryWrapper_GetInitPtrOfSymEncryptUpdateConfig(id)           (0u)
#  define Crypto_30_CryWrapper_GetInitPtrOfSymEncryptFinishConfig(id)           (0u)
# endif

# define Crypto_30_CryWrapper_GetInitPtrOfSymKeyExtractStartConfig(x)           Crypto_30_CryWrapper_GetInitPtrOfSymKeyExtractConfig(x)
# if (CRYPTO_30_CRYWRAPPER_PROVIDE_ID_INSTEAD_OF_POINTER == STD_OFF)
#  define Crypto_30_CryWrapper_GetInitPtrOfSymKeyExtractUpdateConfig(x)         Crypto_30_CryWrapper_GetInitPtrOfSymKeyExtractConfig(x)
#  define Crypto_30_CryWrapper_GetInitPtrOfSymKeyExtractFinishConfig(x)         Crypto_30_CryWrapper_GetInitPtrOfSymKeyExtractConfig(x)
# else
#  define Crypto_30_CryWrapper_GetInitPtrOfSymKeyExtractUpdateConfig(id)        (0u)
#  define Crypto_30_CryWrapper_GetInitPtrOfSymKeyExtractFinishConfig(id)        (0u)
# endif

# define Crypto_30_CryWrapper_GetInitPtrOfSymKeyWrapSymStartConfig(x)           Crypto_30_CryWrapper_GetInitPtrOfSymKeyWrapSymConfig(x)
# if (CRYPTO_30_CRYWRAPPER_PROVIDE_ID_INSTEAD_OF_POINTER == STD_OFF)
#  define Crypto_30_CryWrapper_GetInitPtrOfSymKeyWrapSymUpdateConfig(x)         Crypto_30_CryWrapper_GetInitPtrOfSymKeyWrapSymConfig(x)
#  define Crypto_30_CryWrapper_GetInitPtrOfSymKeyWrapSymFinishConfig(x)         Crypto_30_CryWrapper_GetInitPtrOfSymKeyWrapSymConfig(x)
# else
#  define Crypto_30_CryWrapper_GetInitPtrOfSymKeyWrapSymUpdateConfig(id)        (0u)
#  define Crypto_30_CryWrapper_GetInitPtrOfSymKeyWrapSymFinishConfig(id)        (0u)
# endif

# if !defined (CRYPTO_30_CRYWRAPPER_LOCAL_INLINE) /* COV_CRYPTO_30_CRYWRAPPER_LOCAL_DEFINE */
#  define CRYPTO_30_CRYWRAPPER_LOCAL_INLINE LOCAL_INLINE
# endif

# if CRYPTO_30_CRYWRAPPER_AESGCMENCRYPT ==  STD_ON
#  error F1H does not support GCM
# endif

# if CRYPTO_30_CRYWRAPPER_AESGCMDECRYPT == STD_ON
#  error F1H does not support GCM
# endif

# if (CRYPTO_30_CRYWRAPPER_SERVICE_MAC_VERIFY == STD_ON) && (CRYPTO_30_CRYWRAPPER_MACVERIFYCONFIG == STD_OFF)
#  error Crypto Driver Object provides a Cmac Verify Service, but no corresponding CRY Configuration is available. Remove the service from the Object or add a CRY configuration.
# endif

# if (CRYPTO_30_CRYWRAPPER_SERVICE_MAC_GENERATE == STD_ON) && (CRYPTO_30_CRYWRAPPER_MACGENERATECONFIG == STD_OFF)
#  error Crypto Driver Object provides a Cmac Generate Service, but no corresponding CRY Configuration is available. Remove the service from the Object or add a CRY configuration.
# endif

# if (CRYPTO_30_CRYWRAPPER_SERVICE_DECRYPT == STD_ON) && (CRYPTO_30_CRYWRAPPER_SYMDECRYPTCONFIG == STD_OFF)
#  error Crypto Driver Object provides a AES Decrypt Service, but no corresponding CRY Configuration is available. Remove the service from the Object or add a CRY configuration.
# endif

# if (CRYPTO_30_CRYWRAPPER_SERVICE_ENCRYPT == STD_ON) && (CRYPTO_30_CRYWRAPPER_SYMENCRYPTCONFIG == STD_OFF)
#  error Crypto Driver Object provides a AES Encrypt Service, but no corresponding CRY Configuration is available. Remove the service from the Object or add a CRY configuration.
# endif

# if (CRYPTO_30_CRYWRAPPER_SERVICE_RANDOM == STD_ON) && (CRYPTO_30_CRYWRAPPER_RANDOMGENERATECONFIG == STD_OFF)
#  error Crypto Driver Object provides a Random Service, but no corresponding CRY Configuration is available. Remove the service from the Object or add a CRY configuration.
# endif

/* Defines used for the SHE key update protocol */
# define CRYPTO_30_CRYWRAPPER_LENGTH_M1                         (16u)
# define CRYPTO_30_CRYWRAPPER_LENGTH_M2                         (32u)
# define CRYPTO_30_CRYWRAPPER_LENGTH_M3                         (16u)
# define CRYPTO_30_CRYWRAPPER_LENGTH_M4                         (32u)
# define CRYPTO_30_CRYWRAPPER_LENGTH_M5                         (16u)

# define CRYPTO_30_CRYWRAPPER_OFFSET_M1                         (0u)
# define CRYPTO_30_CRYWRAPPER_OFFSET_M2                         (CRYPTO_30_CRYWRAPPER_LENGTH_M1)
# define CRYPTO_30_CRYWRAPPER_OFFSET_M3                         (CRYPTO_30_CRYWRAPPER_OFFSET_M2 + CRYPTO_30_CRYWRAPPER_LENGTH_M2)
# define CRYPTO_30_CRYWRAPPER_OFFSET_M4                         (CRYPTO_30_CRYWRAPPER_OFFSET_M3 + CRYPTO_30_CRYWRAPPER_LENGTH_M3)
# define CRYPTO_30_CRYWRAPPER_OFFSET_M5                         (CRYPTO_30_CRYWRAPPER_OFFSET_M4 + CRYPTO_30_CRYWRAPPER_LENGTH_M4)

# define CRYPTO_30_CRYWRAPPER_LENGTH_M1M2M3M4M5                 (CRYPTO_30_CRYWRAPPER_OFFSET_M5 + CRYPTO_30_CRYWRAPPER_LENGTH_M5)
# define CRYPTO_30_CRYWRAPPER_LENGTH_M1M2M3                     (CRYPTO_30_CRYWRAPPER_OFFSET_M4)
# define CRYPTO_30_CRYWRAPPER_LENGTH_M4M5                       (CRYPTO_30_CRYWRAPPER_LENGTH_M4 + CRYPTO_30_CRYWRAPPER_LENGTH_M5)

 /* Raw keyIds as specified in the SHE Specification */
# define CRYPTO_SHEKEYID_SECRET_KEY                             (0x00u)
# define CRYPTO_SHEKEYID_MASTER_ECU_KEY                         (0x01u)
# define CRYPTO_SHEKEYID_BOOT_MAC_KEY                           (0x02u)
# define CRYPTO_SHEKEYID_BOOT_MAC                               (0x03u)
# define CRYPTO_SHEKEYID_KEY_1                                  (0x04u)
# define CRYPTO_SHEKEYID_KEY_2                                  (0x05u)
# define CRYPTO_SHEKEYID_KEY_3                                  (0x06u)
# define CRYPTO_SHEKEYID_KEY_4                                  (0x07u)
# define CRYPTO_SHEKEYID_KEY_5                                  (0x08u)
# define CRYPTO_SHEKEYID_KEY_6                                  (0x09u)
# define CRYPTO_SHEKEYID_KEY_7                                  (0x0Au)
# define CRYPTO_SHEKEYID_KEY_8                                  (0x0Bu)
# define CRYPTO_SHEKEYID_KEY_9                                  (0x0Cu)
# define CRYPTO_SHEKEYID_KEY_10                                 (0x0Du)
# define CRYPTO_SHEKEYID_KEY_RAM                                (0x0Eu)
# define CRYPTO_SHEKEYID_KEY_11                                 (0x0Fu)
# define CRYPTO_SHEKEYID_KEY_12                                 (0x10u)
# define CRYPTO_SHEKEYID_KEY_13                                 (0x11u)
# define CRYPTO_SHEKEYID_KEY_14                                 (0x12u)
# define CRYPTO_SHEKEYID_KEY_15                                 (0x13u)
# define CRYPTO_SHEKEYID_KEY_16                                 (0x14u)
# define CRYPTO_SHEKEYID_KEY_17                                 (0x15u)
# define CRYPTO_SHEKEYID_KEY_18                                 (0x16u)
# define CRYPTO_SHEKEYID_KEY_19                                 (0x17u)
# define CRYPTO_SHEKEYID_KEY_20                                 (0x18u)

 /* Mapped KeyIds */
# define CRYPTO_30_CRYWRAPPER_KEYID_MAPPED_KEY_RAM              (0x00u)
# define CRYPTO_30_CRYWRAPPER_KEYID_MAPPED_KEY_1                (0x01u)
# define CRYPTO_30_CRYWRAPPER_KEYID_MAPPED_KEY_2                (0x02u)
# define CRYPTO_30_CRYWRAPPER_KEYID_MAPPED_KEY_3                (0x03u)
# define CRYPTO_30_CRYWRAPPER_KEYID_MAPPED_KEY_4                (0x04u)
# define CRYPTO_30_CRYWRAPPER_KEYID_MAPPED_KEY_5                (0x05u)
# define CRYPTO_30_CRYWRAPPER_KEYID_MAPPED_KEY_6                (0x06u)
# define CRYPTO_30_CRYWRAPPER_KEYID_MAPPED_KEY_7                (0x07u)
# define CRYPTO_30_CRYWRAPPER_KEYID_MAPPED_KEY_8                (0x08u)
# define CRYPTO_30_CRYWRAPPER_KEYID_MAPPED_KEY_9                (0x09u)
# define CRYPTO_30_CRYWRAPPER_KEYID_MAPPED_KEY_10               (0x0Au)
# define CRYPTO_30_CRYWRAPPER_KEYID_MAPPED_KEY_11               (0x0Bu)
# define CRYPTO_30_CRYWRAPPER_KEYID_MAPPED_KEY_12               (0x0Cu)
# define CRYPTO_30_CRYWRAPPER_KEYID_MAPPED_KEY_13               (0x0Du)
# define CRYPTO_30_CRYWRAPPER_KEYID_MAPPED_KEY_14               (0x0Eu)
# define CRYPTO_30_CRYWRAPPER_KEYID_MAPPED_KEY_15               (0x0Fu)
# define CRYPTO_30_CRYWRAPPER_KEYID_MAPPED_KEY_16               (0x10u)
# define CRYPTO_30_CRYWRAPPER_KEYID_MAPPED_KEY_17               (0x11u)
# define CRYPTO_30_CRYWRAPPER_KEYID_MAPPED_KEY_18               (0x12u)
# define CRYPTO_30_CRYWRAPPER_KEYID_MAPPED_KEY_19               (0x13u)
# define CRYPTO_30_CRYWRAPPER_KEYID_MAPPED_KEY_20               (0x14u)
# define CRYPTO_30_CRYWRAPPER_KEYID_MAPPED_MASTER_ECU_KEY       (0x15u)
# define CRYPTO_30_CRYWRAPPER_KEYID_MAPPED_BOOT_MAC_KEY         (0x16u)
# define CRYPTO_30_CRYWRAPPER_KEYID_MAPPED_BOOT_MAC             (0x17u)

/* Last cryptoKeyId which is handled by the hardware. All following cryptoKeyIds are not directly handled by the hardware.*/
# define CRYPTO_30_CRYWRAPPER_MAX_SHEKEYID                      CRYPTO_SHEKEYID_KEY_20

/* Defines for division or multiplication optimized with shift operations */
# define CRYPTO_CRYWRAPPER_DIV16(x)                             ((x)>>4) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# define CRYPTO_CRYWRAPPER_DIV8(x)                              ((x)>>3) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# define CRYPTO_CRYWRAPPER_DIV4(x)                              ((x)>>2) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# define CRYPTO_CRYWRAPPER_DIV2(x)                              ((x)>>1) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# define CRYPTO_CRYWRAPPER_MUL16(x)                             ((x)<<4) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# define CRYPTO_CRYWRAPPER_MUL8(x)                              ((x)<<3) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# define CRYPTO_CRYWRAPPER_MUL4(x)                              ((x)<<2) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# define CRYPTO_CRYWRAPPER_MUL2(x)                              ((x)<<1) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define CRYPTO_30_CRYWRAPPER_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */

/*  Mapping table which is used to map from SHE specification key ids to the SHE key ids used by different Cry drivers*/
extern CONST(uint8, CRYPTO_30_CRYWRAPPER_CONST) Crypto_30_CryWrapper_MappingTableSheToCryShe[25]; /* PRQA S 0777 */ /* MD_MSR_5.1_777 */

/* mapping table which is used to get the mapped key out of a key id from the SHE specification */
extern CONST(uint8, CRYPTO_30_CRYWRAPPER_CONST) Crypto_30_CryWrapper_MappingTableSheToMapped[25]; /* PRQA S 0777 */ /* MD_MSR_5.1_777 */

# define CRYPTO_30_CRYWRAPPER_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

# define CRYPTO_30_CRYWRAPPER_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  Crypto_30_CryWrapper_Hw_Init()
 *********************************************************************************************************************/
/*!
 *
 * \brief         This function does the hardware specific initialization.
 * \details       -
 * \return        E_OK                         Request successful.
 *                E_NOT_OK                     Request failed. Error during init.
 * \pre           -
 * \context       TASK
 * \reentrant     FALSE
 * \synchronous   TRUE
 *********************************************************************************************************************/
extern FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_Hw_Init(void);

/**********************************************************************************************************************
 *  Crypto_30_CryWrapper_Hw_KeyElementGet()
 *********************************************************************************************************************/
/*!
 *
 * \brief         This function is used to export a key from the hardware.
 * \details       Keys located in the KEY_RAM slot of the SHE can be exported as M4-M5.
 * \param[in]     cryptoKeyId                 Id of the key which contains the element to be exported.
 * \param[in]     keyElementId                Id of the element to be exported.
 * \param[in]     resultPtr                   Pointer to a memory location which will hold the retrieved data.
 * \param[in]     resultLengthPtr             Pointer to a variable which holds the length of the available buffer.
 *                                            After the function is called, it will hold the size of the written bytes.
 * \param[in]     elementIndex                Index of the element which shall be exported.
 * \return        E_OK                        Request successful.
 *                E_NOT_OK                    Request failed. Error during call of Cry functions.
 *                CRYPTO_E_BUSY               Request failed. Another key management function is currently processing or CRY driver is busy.
 *                CRYPTO_E_KEY_NOT_AVAILABLE  The Key element has not been exported from the hardware.
 * \pre           -
 * \context       TASK
 * \reentrant     TRUE
 * \synchronous   TRUE
 *********************************************************************************************************************/
extern FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_Hw_KeyElementGet(
  uint32 cryptoKeyId,
  uint32 keyElementId,
  P2VAR(uint8, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) resultPtr,
  P2VAR(uint32, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) resultLengthPtr,
  uint32 elementIndex); /* PRQA S 0777 */ /* MD_MSR_5.1_777 */

/**********************************************************************************************************************
 *  Crypto_30_CryWrapper_Hw_KeyElementSet()
 *********************************************************************************************************************/
/*!
 *
 * \brief         This function is used to store a key to the hardware.
 * \details       Keys can be stored to the hardware by storing a plain key or by using the SHE key update protocol
 *                by providing M1-M3.
 * \param[in]     cryptoKeyId                 Id of the key which contains the element to be set.
 * \param[in]     keyElementId                Id of the element to be set.
 * \param[in]     keyPtr                      Pointer to the data which will be used to update the key element.
 * \param[in]     keyLength                   Length of the data.
 * \param[in]     elementIndex                Index of the element which shall be updated.
 * \return        E_OK                        Request successful.
 *                E_NOT_OK                    Request failed. Error during call of Cry functions or during storage of proof.
 *                CRYPTO_E_BUSY               Request failed. Another key management function is currently processing or CRY driver is busy.
 *                CRYPTO_E_KEY_NOT_AVAILABLE  The Key element has not been stored to the hardware.
 *                CRYPTO_E_KEY_WRITE_FAILED   The Key element could not be written.
 * \pre           -
 * \context       TASK
 * \reentrant     TRUE
 * \synchronous   TRUE
 *********************************************************************************************************************/
extern FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_Hw_KeyElementSet(
  uint32 cryptoKeyId,
  uint32 keyElementId,
  P2CONST(uint8, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) keyPtr,
  uint32 keyLength,
  uint32 elementIndex); /* PRQA S 0777 */ /* MD_MSR_5.1_777 */

/**********************************************************************************************************************
 *  Crypto_30_CryWrapper_Hw_RandomSeed()
 *********************************************************************************************************************/
/*! \brief         Initialize the seed
 *  \details       This function generates the internal seed state using the provided entropy source.
 *                 Furthermore, this function can be used to update the seed state with new entropy
 *  \param[in]     cryptoKeyId             Holds the identifier of the key for which a new seed shall be generated.
 *  \param[in]     entropyPtr              Holds a pointer to the memory location which contains the
 *                                         data to feed the entropy.
 *  \param[in]     entropyLength           Contains the length of the entropy in bytes.
 *  \return        E_OK                    Request successful.
 *                 E_NOT_OK                Request failed.
 *                 CRYPTO_E_BUSY           Request failed, Crypto Driver Object is busy.
 *                 CRYPTO_E_SMALL_BUFFER   Request failed, the provided buffer is too small to store the result.
 *  \pre           -
 *  \context       TASK
 *  \reentrant     TRUE
 *  \synchronous   TRUE
 *  \trace         CREQ-131137
 *********************************************************************************************************************/
extern FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_Hw_RandomSeed(
  uint32 cryptoKeyId,
  P2CONST(uint8, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) entropyPtr,
  uint32 entropyLength);

/**********************************************************************************************************************
 *  Crypto_30_CryWrapper_Hw_KeyGenerate()
 *********************************************************************************************************************/
/*!
 *
 * \brief         This function is used to perform the key generation in hardware.
 * \details       This function has no functionality.
 * \param[in]     cryptoKeyId                Not used.
 * \return        E_NOT_OK
 * \pre           -
 * \context       TASK
 * \reentrant     TRUE
 * \synchronous   TRUE
 *********************************************************************************************************************/
extern FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_Hw_KeyGenerate(
  uint32 cryptoKeyId); /* PRQA S 0777 */ /* MD_MSR_5.1_777 */

/**********************************************************************************************************************
 *  Crypto_30_CryWrapper_Hw_KeyExchangeCalcPubVal()
 *********************************************************************************************************************/
/*!
 *
 * \brief         This function is used to perform the calculation of the public key during a key exchange in hardware.
 * \details       This function has no functionality.
 * \param[in]     cryptoKeyId                Not used.
 * \param[in]     publicValuePtr             Not used.
 * \param[in]     publicValueLengthPtr       Not used.
 * \return        E_NOT_OK                   Function is not supported. 
 * \pre           -
 * \context       TASK
 * \reentrant     TRUE
 * \synchronous   TRUE
 *********************************************************************************************************************/
extern FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_Hw_KeyExchangeCalcPubVal(
  uint32 cryptoKeyId,
  P2VAR(uint8, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) publicValuePtr,
  P2VAR(uint32, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) publicValueLengthPtr); /* PRQA S 0777 */ /* MD_MSR_5.1_777 */

/**********************************************************************************************************************
 *  Crypto_30_CryWrapper_Hw_KeyExchangeCalcSecret()
 *********************************************************************************************************************/
/*!
 *
 * \brief         This function is used to perform the calculation of the secret during a key exchange in hardware.
 * \details       This function has no functionality.
 * \param[in]     cryptoKeyId                Not used.
 * \param[in]     partnerPublicValuePtr      Not used.
 * \param[in]     partnerPublicValueLength   Not used.
 * \return        E_NOT_OK                   Function is not supported.
 * \pre           -
 * \context       TASK
 * \reentrant     TRUE
 * \synchronous   TRUE
 *********************************************************************************************************************/
extern FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_Hw_KeyExchangeCalcSecret(
  uint32 cryptoKeyId,
  P2CONST(uint8, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) partnerPublicValuePtr,
  uint32 partnerPublicValueLength); /* PRQA S 0777 */ /* MD_MSR_5.1_777 */

/**********************************************************************************************************************
 *  Crypto_30_CryWrapper_Hw_KeyDerive()
 *********************************************************************************************************************/
/*!
 *
 * \brief         This function is used to perform a key derive in hardware.
 * \details       This function has no functionality.
 * \param[in]     cryptoKeyId                Not used.
 * \param[in]     targetCryptoKeyId          Not used.
 * \return        E_NOT_OK                   Function is not supported.
 * \pre           -
 * \context       TASK
 * \reentrant     TRUE
 * \synchronous   TRUE
 *********************************************************************************************************************/
extern FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_Hw_KeyDerive(
  uint32 cryptoKeyId,
  uint32 targetCryptoKeyId); /* PRQA S 0777 */ /* MD_MSR_5.1_777 */

# if (Crypto_30_CryWrapper_IsProvideCsmNotificationApiOfWrapperGeneral() == TRUE)
/**********************************************************************************************************************
 *  Csm_MacVerifyCallbackNotification()
 *********************************************************************************************************************/
/*!
 *
 * \brief         Function must be provided for Crys which always need the Callbacks even when they are configured
 *                as synchronous.
 * \details       -
 * \param[in]     Result                       Result of the mac operation
 * \pre           -
 * \context       TASK
 * \reentrant     TRUE
 * \synchronous   TRUE
 * \config        Crypto_30_CryWrapper_IsProvideCsmNotificationApiOfWrapperGeneral
 * \note          Function is never called.
 *********************************************************************************************************************/
extern FUNC(void, CRYPTO_30_CRYWRAPPER_CODE) Csm_MacVerifyCallbackNotification(VAR(Csm_ReturnType, AUTOMATIC) Result);

/**********************************************************************************************************************
 *  Csm_MacVerifyServiceFinishNotification()
 *********************************************************************************************************************/
/*!
 *
 * \brief         Function must be provided for Crys which always need the Callbacks even when they are configured
 *                as synchronous.
 * \details       -
 * \pre           -
 * \context       TASK
 * \reentrant     TRUE
 * \synchronous   TRUE
 * \config        Crypto_30_CryWrapper_IsProvideCsmNotificationApiOfWrapperGeneral
 * \note          Function is never called.
 *********************************************************************************************************************/
extern FUNC(void, CRYPTO_30_CRYWRAPPER_CODE) Csm_MacVerifyServiceFinishNotification(void);
# endif

/**********************************************************************************************************************
 *  Crypto_30_CryWrapper_GetSymKey()
 *********************************************************************************************************************/
/*!
 *
 * \brief         Prepare a key with either an ID or a plaintext for the Cry.
 * \details       -
 * \param[in]     cryptoKeyId      The cryptoKey in the which shall be used to prepare the key for the Cry.
 * \param[in]     key              The SymKey which will be used with a Cry service.
 * \return        E_OK                       Request was successful.
 *                E_NOT_OK                   Request failed.
 *                CRYPTO_E_BUSY              Request failed, the CRY driver was BUSY.
 *                CRYPTO_E_KEY_NOT_VALID     Request failed, the key is not valid.
 *                CRYPTO_E_KEY_NOT_AVAILABLE Request failed, the key is not available.
 *                CRYPTO_E_SMALL_BUFFER      Request failed, the provided buffer is too small to store the result.
 * \pre           -
 * \context       TASK
 * \reentrant     TRUE
 * \synchronous   TRUE
 *********************************************************************************************************************/
FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_GetSymKey(
  uint32 cryptoKeyId,
  P2VAR(Csm_SymKeyType, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) key);

# define CRYPTO_30_CRYWRAPPER_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#endif /* #if !defined (CRYPTO_30_CRYWRAPPER_HW_H) */

/**********************************************************************************************************************
 *  END OF FILE: CRYPTO_30_CRYWRAPPER_HW.H
 *********************************************************************************************************************/
