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
 *  ------------------------------------------------------------------------------------------------------------------*/
/*!        \file    Cry_30_Rh850Icus_Hw.h
 *        \brief    This header file implements the utils for the SHE module.
 *
 *      \details    -
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Refer to the module's header file.
 *********************************************************************************************************************/

/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */

#if !defined (CRY_30_RH850ICUS_HW_H)
# define CRY_30_RH850ICUS_HW_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/

# include "Cry_30_Rh850Icus_Cfg.h"

/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 **********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 **********************************************************************************************************************/

#define CRY_30_RH850ICUS_START_SEC_CONST_8BIT
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#if ( (CRY_30_RH850ICUS_SELF_TEST == STD_ON) && ( CRY_30_RH850ICUS_CMACAES128VERCONFIG == STD_ON ) )

 /* Test vector from SHE Specification (Example 1) */
extern VAR(uint8, CRY_30_RH850ICUS_CONST) Cry_30_Rh850Icus_SelfTest_Key[16];
extern VAR(uint8, CRY_30_RH850ICUS_CONST) Cry_30_Rh850Icus_SelfTest_Msg[16];
extern VAR(uint8, CRY_30_RH850ICUS_CONST) Cry_30_Rh850Icus_SelfTest_Mac[16];
#if (CRY_30_RH850ICUS_SELF_TEST_HARDWARE_SUPPORT == STD_OFF) /* COV_CRY_SELF_TEST */
extern VAR(uint8, CRY_30_RH850ICUS_CONST) Cry_30_Rh850Icus_SelfTest_InvalidMac[16];
# endif

#endif

#define CRY_30_RH850ICUS_STOP_SEC_CONST_8BIT
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/* Memory detection is enabled, when a hardware has special requirements regarding the memory location of input and output data */
# define CRY_30_RH850ICUS_INVALID_MEMORY_DETECTION            STD_OFF

/* This has to be enabled if the hardware supports 20 keyslots */
# if (CRY_30_RH850ICUS_NUMBER_OF_KEYSLOTS == 20) /* COV_CRY_SECOND_KEY_PAGE */
#  define CRY_30_RH850ICUS_SECOND_KEYPAGE_SUPPORTED          STD_ON
# else
#  define CRY_30_RH850ICUS_SECOND_KEYPAGE_SUPPORTED          STD_OFF
# endif

/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

# define CRY_30_RH850ICUS_BASE_ADDR                      CRY_30_RH850ICUS_ICUS_BASE_ADDRESS                           /*!< Base Address (Configurable) */

# define CRY_30_RH850ICUS_CMD                            (*(volatile uint32 *) (CRY_30_RH850ICUS_BASE_ADDR + 0x00u))  /*!< +00h ICUS Command Register */
# define CRY_30_RH850ICUS_CMD_CMD_MASK                   (0x0000FFFFu)                                                /*!< Command */
# define CRY_30_RH850ICUS_CMD_CMD_OFFSET                 (0u)
# define CRY_30_RH850ICUS_CMD_CMD_LENGTH                 (16u)
# define CRY_30_RH850ICUS_CMD_KEYID_MASK                 (0x000F0000u)                                                /*!< key Id */
# define CRY_30_RH850ICUS_CMD_KEYID_OFFSET               CRY_30_RH850ICUS_CMD_CMD_LENGTH
# define CRY_30_RH850ICUS_CMD_KEYID_LENGTH               (4u)
# define CRY_30_RH850ICUS_CMD_KEYMD_MASK                 (0x00100000u)                                                /*!< Selection of keyPage */
# define CRY_30_RH850ICUS_CMD_KEYMD_OFFSET               (CRY_30_RH850ICUS_CMD_CMD_LENGTH + CRY_30_RH850ICUS_CMD_KEYID_LENGTH)
# define CRY_30_RH850ICUS_CMD_KEYMD_LENGTH               (1u)

# define CRY_30_RH850ICUS_IDAT                           (*(volatile uint32 *) (CRY_30_RH850ICUS_BASE_ADDR + 0x04u))  /*!< +04h ICUS Input Data Register */

# define CRY_30_RH850ICUS_ODAT                           (*(volatile uint32 *) (CRY_30_RH850ICUS_BASE_ADDR + 0x08u))  /*!< +08h ICUS Output Data Register */

# define CRY_30_RH850ICUS_STS                            (*(volatile uint32 *) (CRY_30_RH850ICUS_BASE_ADDR + 0x0Cu))  /*!< +0Ch ICUS Status Register.
                                                                                                                                Bits 1,2,3,4,6,7 are not used */
# define CRY_30_RH850ICUS_STS_BUSY                       (0x00000001u)                                                /*!< ICUS is busy */
# define CRY_30_RH850ICUS_STS_SECURE_BOOT                (0x00000002u)                                                /*!< Secure boot is executing */
# define CRY_30_RH850ICUS_STS_BOOT_INIT                  (0x00000004u)                                                /*!< Secure boot has been initialized */
# define CRY_30_RH850ICUS_STS_BOOT_FINISHED              (0x00000008u)                                                /*!< Secure Boot has finished */
# define CRY_30_RH850ICUS_STS_BOOT_OK                    (0x00000010u)                                                /*!< Sate of the Secure Boot */
# define CRY_30_RH850ICUS_STS_RND_INIT                   (0x00000020u)                                                /*!< Random number generator initialized */
# define CRY_30_RH850ICUS_STS_EXT_DEBUGGER               (0x00000040u)                                                /*!< External debugger connected */
# define CRY_30_RH850ICUS_STS_INT_DEBUGGER               (0x00000080u)                                                /*!< Internal debug mode */

# define CRY_30_RH850ICUS_ERR                            (*(volatile uint32 *) (CRY_30_RH850ICUS_BASE_ADDR + 0x10u))  /*!< +10h ICUS Error Register */
# define CRY_30_RH850ICUS_ERR_ERR_MASK                   (0x00000FFFu) /*!< ICUS Error Code */
# define CRY_30_RH850ICUS_ERR_ERR_OFFSET                 (0u)
# define CRY_30_RH850ICUS_ERR_ERR_LENGTH                 (12u)

# define CRY_30_RH850ICUS_SWINT                          (*(volatile uint32 *) (CRY_30_RH850ICUS_BASE_ADDR + 0x14u))  /*!< +14h ICUS Data Transfer Request Flag register */
# define CRY_30_RH850ICUS_SWINT_TXREQ                    (0x00000001u)                                                /*!< Transmit request */
# define CRY_30_RH850ICUS_SWINT_RXREQ                    (0x00000002u)                                                /*!< Receive request */

# define CRY_30_RH850ICUS_ICUSTS                         (*(volatile uint32 *) (CRY_30_RH850ICUS_BASE_ADDR + 0x18u))  /*!< +18h ICUS Enable Status Register */
# define CRY_30_RH850ICUS_ICUSTS_ICUEN                   (0x00000001u)                                                /*!< ICUS enabled status */

# define CRY_30_RH850ICUS_IDATNUM                        (*(volatile uint32 *) (CRY_30_RH850ICUS_BASE_ADDR + 0x1Cu))  /*!< +1Ch ICUS Data Transfer Number Register */

# define CRY_30_RH850ICUS_ACC                            (*(volatile uint32 *) (CRY_30_RH850ICUS_BASE_ADDR + 0x20u))  /*!< +20h ICUS Icu Region Access Register */
# define CRY_30_RH850ICUS_ACC_ICRACC                     (0x00000001u)                                                /*!< Access to data flash from ICUS */

# define CRY_30_RH850ICUS_SWINTCL                        (*(volatile uint32 *) (CRY_30_RH850ICUS_BASE_ADDR + 0x24u))  /*!< +24h ICUS Data Transfer Request Flag Clear Register */
# define CRY_30_RH850ICUS_SWINTCL_TXREQCLR               (0x00000001u)                                                /*!< Clear transmit request */
# define CRY_30_RH850ICUS_SWINTCL_RXREQCLR               (0x00000002u)                                                /*!< Clear receive request */

# define CRY_30_RH850ICUS_MALKEY0                        (*(volatile uint32 *) (CRY_30_RH850ICUS_BASE_ADDR + 0x90u + (0x04 * 0u)))  /*!< +90h  */
# define CRY_30_RH850ICUS_MALKEY1                        (*(volatile uint32 *) (CRY_30_RH850ICUS_BASE_ADDR + 0x90u + (0x04 * 1u)))  /*!< +94h  */
# define CRY_30_RH850ICUS_MALKEY2                        (*(volatile uint32 *) (CRY_30_RH850ICUS_BASE_ADDR + 0x90u + (0x04 * 2u)))  /*!< +98h  */
# define CRY_30_RH850ICUS_MALKEY3                        (*(volatile uint32 *) (CRY_30_RH850ICUS_BASE_ADDR + 0x90u + (0x04 * 3u)))  /*!< +9Ch  */

# define CRY_30_RH850ICUS_MALDAT0                        (*(volatile uint32 *) (CRY_30_RH850ICUS_BASE_ADDR + 0xA0u + (0x04 * 0u)))  /*!< +A0h  */
# define CRY_30_RH850ICUS_MALDAT1                        (*(volatile uint32 *) (CRY_30_RH850ICUS_BASE_ADDR + 0xA0u + (0x04 * 1u)))  /*!< +A4h  */
# define CRY_30_RH850ICUS_MALDAT2                        (*(volatile uint32 *) (CRY_30_RH850ICUS_BASE_ADDR + 0xA0u + (0x04 * 2u)))  /*!< +A8h  */
# define CRY_30_RH850ICUS_MALDAT3                        (*(volatile uint32 *) (CRY_30_RH850ICUS_BASE_ADDR + 0xA0u + (0x04 * 3u)))  /*!< +ACh  */

# define CRY_30_RH850ICUS_MALMAC0                        (*(volatile uint32 *) (CRY_30_RH850ICUS_BASE_ADDR + 0xB0u + (0x04 * 0u)))  /*!< +B0h  */
# define CRY_30_RH850ICUS_MALMAC1                        (*(volatile uint32 *) (CRY_30_RH850ICUS_BASE_ADDR + 0xB0u + (0x04 * 1u)))  /*!< +B4h  */
# define CRY_30_RH850ICUS_MALMAC2                        (*(volatile uint32 *) (CRY_30_RH850ICUS_BASE_ADDR + 0xB0u + (0x04 * 2u)))  /*!< +B8h  */
# define CRY_30_RH850ICUS_MALMAC3                        (*(volatile uint32 *) (CRY_30_RH850ICUS_BASE_ADDR + 0xB0u + (0x04 * 3u)))  /*!< +BCh  */

# if (CRY_30_RH850ICUS_FHVE_SUPPORT == STD_ON)
#  define CRY_30_RH850ICUS_FHVE3                          (*(volatile uint32 *)CRY_30_RH850ICUS_FHVE3_REGISTER_ADDRESS)  /*!< FHVE3 Register */
#  define CRY_30_RH850ICUS_FHVE15                         (*(volatile uint32 *)CRY_30_RH850ICUS_FHVE15_REGISTER_ADDRESS) /*!< FHVE15 Register */
# endif

/* SHE commands */
# define CRY_30_RH850ICUS_CMD_NO_CMD                     (0x00u)   /*!< CMD_NO_CMD         */
# define CRY_30_RH850ICUS_CMD_ENC_ECB                    (0x01u)   /*!< CMD_ENC_ECB        */
# define CRY_30_RH850ICUS_CMD_ENC_CBC                    (0x02u)   /*!< CMD_ENC_CBC        */
# define CRY_30_RH850ICUS_CMD_DEC_ECB                    (0x03u)   /*!< CMD_DEC_ECB        */
# define CRY_30_RH850ICUS_CMD_DEC_CBC                    (0x04u)   /*!< CMD_DEC_CBC        */
# define CRY_30_RH850ICUS_CMD_GENERATE_MAC               (0x05u)   /*!< CMD_GENERATE_MAC   */
# define CRY_30_RH850ICUS_CMD_VERIFY_MAC                 (0x07u)   /*!< CMD_VERIFY_MAC     */
# define CRY_30_RH850ICUS_CMD_LOAD_KEY                   (0x08u)   /*!< CMD_LOAD_KEY       */
# define CRY_30_RH850ICUS_CMD_LOAD_PLAIN_KEY             (0x09u)   /*!< CMD_LOAD_PLAIN_KEY */
# define CRY_30_RH850ICUS_CMD_EXPORT_RAM_KEY             (0x0Au)   /*!< CMD_EXPORT_RAM_KEY */
# define CRY_30_RH850ICUS_CMD_INIT_RNG                   (0x0Bu)   /*!< CMD_INIT_RNG       */
# define CRY_30_RH850ICUS_CMD_EXTEND_SEED                (0x0Cu)   /*!< CMD_EXTEND_SEED    */
# define CRY_30_RH850ICUS_CMD_RND                        (0x0Du)   /*!< CMD_RND            */
# define CRY_30_RH850ICUS_CMD_SECURE_BOOT                (0x0Eu)   /*!< CMD_SECURE_BOOT    */
# define CRY_30_RH850ICUS_CMD_BOOT_FAILURE               (0x20u)   /*!< CMD_BOOT_FAILURE   */
# define CRY_30_RH850ICUS_CMD_BOOT_OK                    (0x21u)   /*!< CMD_BOOT_OK        */
# define CRY_30_RH850ICUS_CMD_GET_ID                     (0x22u)   /*!< CMD_GET_ID         */
# define CRY_30_RH850ICUS_CMD_DEBUG                      (0x23u)   /*!< CMD_DEBUG          */
# define CRY_30_RH850ICUS_CMD_CANCEL                     (0x3Fu)   /*!< CMD_CANCEL         */
# define CRY_30_RH850ICUS_CHK_VERIFY_MAC1                (0x7000u) /*!< CHK_VERIFY_MAC1    */
# define CRY_30_RH850ICUS_CHK_VERIFY_MAC2                (0x7100u) /*!< CHK_VERIFY_MAC2    */

/* SHE constants */
# define CRY_30_RH850ICUS_ICU_ENABLED                    (0x00) /*!< ICUS is enabled */
# define CRY_30_RH850ICUS_ICU_DISABLED                   (0x01) /*!< ICUS is disabled */

/* SHE Error codes */
# define CRY_30_RH850ICUS_ERC_NO_ERROR                   (0x000) /*!< ERC_NO_ERROR            */
# define CRY_30_RH850ICUS_ERC_SEQUENCE_ERROR             (0x001) /*!< ERC_SEQUENCE_ERROR      */
# define CRY_30_RH850ICUS_ERC_KEY_NOT_AVAILABLE          (0x002) /*!< ERC_KEY_NOT_AVAILABLE   */
# define CRY_30_RH850ICUS_ERC_KEY_INVALID                (0x004) /*!< ERC_KEY_INVALID         */
# define CRY_30_RH850ICUS_ERC_KEY_EMPTY                  (0x008) /*!< ERC_KEY_EMPTY           */
# define CRY_30_RH850ICUS_ERC_NO_SECURE_BOOT             (0x010) /*!< ERC_NO_SECURE_BOOT      */
# define CRY_30_RH850ICUS_ERC_KEY_WRITE_PROTECTED        (0x020) /*!< ERC_KEY_WRITE_PROTECTED */
# define CRY_30_RH850ICUS_ERC_KEY_UPDATE_ERROR           (0x040) /*!< ERC_KEY_UPDATE_ERROR    */
# define CRY_30_RH850ICUS_ERC_RNG_SEED                   (0x080) /*!< ERC_RNG_SEED            */
# define CRY_30_RH850ICUS_ERC_NO_DEBUGGING               (0x100) /*!< ERC_NO_DEBUGGING        */
# define CRY_30_RH850ICUS_ERC_BUSY                       (0x200) /*!< ERC_BUSY                */
# define CRY_30_RH850ICUS_ERC_MEMORY_FAILURE             (0x400) /*!< ERC_MEMORY_FAILURE      */
# define CRY_30_RH850ICUS_ERC_GENERAL_ERROR              (0x800) /*!< ERC_GENERAL_ERROR       */

/* SHE boot status */
# define CRY_30_RH850ICUS_BOOT_OK                        (0x01u) /*!< Secure Boot was successful */
# define CRY_30_RH850ICUS_BOOT_FAILURE                   (0x00u) /*!< Secure Boot was unsuccessful */

/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

# define CRY_30_RH850ICUS_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_Hw_Init()
 **********************************************************************************************************************/
/*! \brief         The function initialize the hardware specific parts.
 *  \details       Template - Input needed for specific hardware.
 *  \return        CSM_E_OK     Initialization successful.
 *  \return        CSM_E_NOT_OK Initialization failed.
 *  \pre           None
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 **********************************************************************************************************************/
extern FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_Hw_Init( void );

# if ( CRY_30_RH850ICUS_ANY_PRIMITIVE_ENABLED == TRUE)

/**********************************************************************************************************************
 * Cry_30_Rh850Icus_Hw_LoadPlainKey
 **********************************************************************************************************************/
/*! \brief         The function updates the RAM key memory slot.
 *  \details       This function sends the Load Plain Key Command to the SHE to load a 128-bit plain text key to the
                   RAM key memory slot.
 *  \param[in]     keyPtr       Pointer to the 128-bit plain text key.
 *  \return        CSM_E_OK     Request successful.
 *  \return        CSM_E_NOT_OK Request failed.
 *  \pre           None
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 **********************************************************************************************************************/
extern FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_Hw_LoadPlainKey( P2CONST(uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) keyPtr );

/**********************************************************************************************************************
 * Cry_30_Rh850Icus_Hw_CancelCommand()
 **********************************************************************************************************************/
/*! \brief         Function cancels the current executing command on the SHE.
 *  \details       This function sends the cancel command to SHE to cancel the current executing command.
 *  \pre           None
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 **********************************************************************************************************************/
extern FUNC( void, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_Hw_CancelCommand( void );

# endif /* CRY_30_RH850ICUS_ANY_PRIMITIVE_ENABLED */

# if ( CRY_30_RH850ICUS_AESDECRYPT128CONFIG == STD_ON )
/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_Hw_AesDecrypt128UpdateInternal()
 **********************************************************************************************************************/
/*! \brief         The function updates the AES-128 Decryption primitive.
 *  \details       This function sends the decryption command to the SHE.
 *  \param[in]     contextPtr         Holds a pointer to the configuration of this service.
 *  \param[in]     cipherTextPtr      Holds a pointer to the data for which a decrypted text shall be computed.
 *  \param[in]     cipherTextLength   Contains the number of bytes for which the decrypted text shall be computed.
 *                                    Only values which are the same or a multiple of the blocksize (16 bytes) are
 *                                    allowed. This must be ensured before calling this function.
 *  \param[out]    plainTextPtr       Holds a pointer to the memory location which will hold the decrypted text.
 *  \param[in,out] plainTextLengthPtr Holds a pointer to the memory location in which the length information is
 *                                    stored. On calling this function, this parameter shall contain the size of the
 *                                    provided buffer.
 *                                    The buffer size must have at least the size of the cipherTextLength.
 *                                    When the request has finished successful, the length of the returned
 *                                    decrypted text is stored.
 *  \return        CSM_E_OK           Command executed successful.
 *  \return        CSM_E_NOT_OK       Command execution failed.
 *  \pre           None
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 **********************************************************************************************************************/
extern FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_Hw_AesDecrypt128UpdateInternal(
  P2CONST( Cry_30_Rh850Icus_AesDecrypt128ConfigType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) contextPtr,
  P2CONST( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) cipherTextPtr,
  uint32 cipherTextLength,
  P2VAR( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) plainTextPtr,
  P2VAR( uint32, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) plainTextLengthPtr );

# endif /* ( CRY_30_RH850ICUS_AESDECRYPT128CONFIG == STD_ON ) */

# if ( CRY_30_RH850ICUS_AESENCRYPT128CONFIG == STD_ON )
/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_Hw_AesEncrypt128UpdateInternal()
 **********************************************************************************************************************/
/*! \brief         The function updates the AES-128 Encryption primitive.
 *  \details       This function sends the encryption command to the SHE.
 *  \param[in]     contextPtr          Holds a pointer to the configuration of this service.
 *  \param[in]     plainTextPtr        Holds a pointer to the data for which a encrypted text shall be computed.
 *  \param[in]     plainTextLength     Contains the number of bytes for which the encrypted text shall be computed.
 *                                     Only values which are the same or a multiple of the blocksize (16 bytes) are
 *                                     allowed. This must be ensured before calling this function.
 *  \param[out]    plainTextPtr        Holds a pointer to the memory location which will hold the encrypted text.
 *  \param[in,out] cipherTextLengthPtr Holds a pointer to the memory location in which the length information is
 *                                     stored. On calling this function, this parameter shall contain the size of the
 *                                     provided buffer.
 *                                     The buffer size must have at least the size of the plainTextLength.
 *                                     When the request has finished successful, the length of the returned
 *                                     encrypted text is stored.
 *  \return        CSM_E_OK            Command executed successful.
 *  \return        CSM_E_NOT_OK        Command execution failed.
 *  \pre           None
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 **********************************************************************************************************************/
extern FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_Hw_AesEncrypt128UpdateInternal(
  P2CONST( Cry_30_Rh850Icus_AesEncrypt128ConfigType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) contextPtr,
  P2CONST( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) plainTextPtr,
  uint32 plainTextLength,
  P2VAR( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) cipherTextPtr,
  P2VAR( uint32, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) cipherTextLengthPtr );

# endif /* ( CRY_30_RH850ICUS_AESENCRYPT128CONFIG == STD_ON ) */

# if ( CRY_30_RH850ICUS_CMACAES128GENCONFIG == STD_ON )
/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_Hw_CmacAes128GenUpdateInternal()
 **********************************************************************************************************************/
/*! \brief         The function updates the CMAC AES-128 Generation primitive.
 *  \details       This function sends the CMAC generation command to the SHE.
 *  \param[in]     contextPtr   Holds a pointer to the configuration of this service.
 *  \param[in]     workSpacePtr Contains the workspace (data) of the primitive.
 *  \param[in]     dataPtr      Holds a pointer to the data for which a CMAC shall be computed.
 *  \param[in]     dataLength   Contains the number of bytes for which the CMAC shall be computed.
 *  \return        CSM_E_OK     Command executed successful.
 *  \return        CSM_E_NOT_OK Command execution failed.
 *  \pre           None
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 **********************************************************************************************************************/
extern FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_Hw_CmacAes128GenUpdateInternal(
  P2CONST( Cry_30_Rh850Icus_CmacAes128GenConfigType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) contextPtr,
  P2VAR( Cry_30_Rh850Icus_CmacAes128GenWorkSpaceType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) workSpacePtr,
  P2CONST( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) dataPtr,
  uint32 dataLength );
# endif /* ( CRY_30_RH850ICUS_CMACAES128GENCONFIG == STD_ON ) */

# if ( CRY_30_RH850ICUS_CMACAES128VERCONFIG == STD_ON )
/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_Hw_CmacAes128VerFinishInternal()
 **********************************************************************************************************************/
/*! \brief         The function finishes the CMAC AES-128 verification primitive.
 *  \details       This function sends the CMAC verify command to the SHE.
 *  \param[in]     contextPtr   Holds a pointer to the configuration of this service.
 *  \param[in]     workSpacePtr Contains the workspace (data) of the primitive.
 *  \param[in]     MacPtr       Holds a pointer to the memory location which will hold the CMAC to verify.
 *  \param[in]     MacLength    Holds the length of the MAC to be verified.
 *                              Depending on the configuration, this value is interpreted as number of bits or number
 *                              of bytes to verify. The maximum supported length is 16 Byte, respectively 128 Bit.
 *  \param[in]     resultPtr    Holds a pointer to the memory location which will hold the result of the verification.
 *  \return        CSM_E_OK     Command executed successful.
 *  \return        CSM_E_NOT_OK Command execution failed.
 *  \pre           None
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 **********************************************************************************************************************/
extern FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_Hw_CmacAes128VerFinishInternal(
  P2CONST( Cry_30_Rh850Icus_CmacAes128VerConfigType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) contextPtr,
  P2CONST( Cry_30_Rh850Icus_CmacAes128VerWorkSpaceType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) workSpacePtr,
  P2CONST( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) MacPtr,
  uint32 MacLength,
  P2VAR( Csm_VerifyResultType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) resultPtr );
# endif /* ( CRY_30_RH850ICUS_CMACAES128VERCONFIG == STD_ON ) */

# if ( CRY_30_RH850ICUS_KEYEXTRACTCONFIG == STD_ON )
/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_Hw_KeyExtractUpdateInternal()
 **********************************************************************************************************************/
/*! \brief         The function updates the Key Extract primitive.
 *  \details       This function sends the load key command to the SHE with the given M1M2M3 message.
 *  \param[in]     keyId     ID of the key which should be used for the next command
 *  \param[in]     keyIdType Specifies in which way the keyId is interpreted
 *  \param[in]     m1m2m3Ptr Holds the M1M2M3 message.
 *  \param[out]    m4m5Ptr   Used to store the M4M5 message after the execution of the command.
 *  \return        CSM_E_OK     Command executed successful.
 *  \return        CSM_E_NOT_OK Command execution failed.
 *  \pre           None
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 **********************************************************************************************************************/
extern FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_Hw_KeyExtractUpdateInternal(
  uint32 keyId,
  uint32 keyIdType,
  P2CONST( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) m1m2m3Ptr,
  P2VAR( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) m4m5Ptr);
# endif /* ( CRY_30_RH850ICUS_KEYEXTRACTCONFIG == STD_ON ) */

# if ( CRY_30_RH850ICUS_KEYWRAPSYMCONFIG == STD_ON )
/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_Hw_KeyWrapSymUpdateInternal()
 **********************************************************************************************************************/
/*! \brief         The function updates the Key Wrapping primitive.
 *  \details       This function sends the export RAM key command to the SHE. The function
 *  \param[in]     m1m2m3m4m5Ptr Allocated memory with the length 112. Contains M1M2M3M4M5 message after execution.
 *  \return        CSM_E_OK      Command executed successful.
 *  \return        CSM_E_NOT_OK  Command execution failed.
 *  \pre           None
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 **********************************************************************************************************************/
extern FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_Hw_KeyWrapSymUpdateInternal(
  P2VAR( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) m1m2m3m4m5Ptr);
# endif /* ( CRY_30_RH850ICUS_KEYWRAPSYMCONFIG == STD_ON ) */

# if ( CRY_30_RH850ICUS_RNGCONFIG == STD_ON )
/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_Hw_RngSeedUpdateInternal()
 **********************************************************************************************************************/
/*! \brief         The function updates the Extend Seed primitive.
 *  \details       This function sends the extend seed command to the SHE.
 *  \param[in]     seedPtr      Holds a pointer to the seed for the random number generator.
 *  \return        CSM_E_OK     Command executed successful.
 *  \return        CSM_E_NOT_OK Command execution failed.
 *  \pre           None
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 **********************************************************************************************************************/
extern FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_Hw_RngSeedUpdateInternal(
  P2CONST( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) seedPtr);

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_Hw_RngGenerateInternal()
 **********************************************************************************************************************/
/*! \brief         The function generates a random number for the primitive.
 *  \details       This function sends the random number generate command to the SHE.
 *  \param[out]    resultPtr    Holds a pointer to the memory location which will hold the result of the random
 *                              number generation.
 *  \return        CSM_E_OK     Command executed successful.
 *  \return        CSM_E_NOT_OK Command execution failed.
 *  \pre           None
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 **********************************************************************************************************************/
extern FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_Hw_RngGenerateInternal(
  P2VAR( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) resultPtr);

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_Hw_RngInit()
 **********************************************************************************************************************/
/*! \brief         The function initialize the random number generator on the hardware.
 *  \details       This function sends the command to initialize the random number generator to the SHE.
 *  \pre           None
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 **********************************************************************************************************************/
extern FUNC( void, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_Hw_RngInit( void );

# endif /* ( CRY_30_RH850ICUS_RNGCONFIG == STD_ON ) */

#if ( (CRY_30_RH850ICUS_SELF_TEST == STD_ON) && ( CRY_30_RH850ICUS_CMACAES128VERCONFIG == STD_ON ) )
# if (CRY_30_RH850ICUS_SELF_TEST_HARDWARE_SUPPORT == STD_ON) /* COV_CRY_SELF_TEST_HARDWARE_SUPPORT */
/**********************************************************************************************************************
 * Cry_30_Rh850Icus_Hw_SelfTest()
 **********************************************************************************************************************/
/*! \brief          Perform a self test of the hardware.
 *  \details        Performs two CMAC verifications with one valid and one invalid test vector with the help of commands available in the hardware.
 *  \return         CSM_E_OK      Self test was successful.
 *                  CSM_E_NOT_OK  Self test was not successful.
 *                  CSM_E_BUSY    Hardware was busy.
 *  \pre            None
 *  \context        TASK
 *  \reentrant      FALSE
 *  \synchronous    TRUE
 *  \trace          CREQ-139835
 *  \note           The function is called during init. If it fails, init of the driver will not succeed.
 *                  The function can be cyclically called to ensure correct hardware behaviour.
 *                  If a failure is detected the user is responsible to take appropriate measures.
 **********************************************************************************************************************/
extern FUNC(Csm_ReturnType, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_Hw_SelfTest(void);
# endif
#endif

# define CRY_30_RH850ICUS_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#endif /* CRY_30_RH850ICUS_HW_H */

/**********************************************************************************************************************
 *  END OF FILE: CRY_30_RH850ICUS_HW.H
 *********************************************************************************************************************/

