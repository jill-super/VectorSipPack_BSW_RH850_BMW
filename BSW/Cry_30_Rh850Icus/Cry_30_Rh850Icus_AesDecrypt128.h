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
/*!        \file  Cry_30_Rh850Icus_AesDecrypt128.h
 *        \brief  This header file implements the AesDecrypt128 CRY API for the ASR CSM.
 *
 *      \details  -
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Refer to the module's header file.
 *********************************************************************************************************************/

#if !defined (CRY_30_RH850ICUS_AESDECRYPT128_H)
# define CRY_30_RH850ICUS_AESDECRYPT128_H

/**********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/

# include "Std_Types.h"
# include "Csm.h"

/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 **********************************************************************************************************************/

# define CRY_30_RH850ICUS_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_AesDecrypt128Init()
 **********************************************************************************************************************/
/*! \brief         Initializes the AES-128 decryption.
 *  \details       Function sets the global status to initial idle (needed for asynchronous function handling).
 *  \pre           None
 *  \context       ANY
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \config        CRY_30_RH850ICUS_AESDECRYPT128CONFIG
 *  \note          Called by Cry_30_Rh850Icus_Init
 **********************************************************************************************************************/
extern FUNC( void, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_AesDecrypt128Init( void );

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_AesDecrypt128MainFunction()
 **********************************************************************************************************************/
/*! \brief         Implements the API to be called cyclically to process the requested service.
 *  \details       This function needs to be called for asynchronous function handling in order to process the service.
 *                 If a service is processed, the function sends a callback notification.
 *  \pre           Cry is initialized.
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \config        CRY_30_RH850ICUS_AESDECRYPT128CONFIG
 *  \note          Scheduled by the CSM.
 *  \trace         SPEC-2919040, SPEC-2919299, SPEC-2919390, SPEC-2919244
 *  \trace         CREQ-121595
 **********************************************************************************************************************/
extern FUNC( void, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_AesDecrypt128MainFunction( void );

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_AesDecrypt128Start()
 **********************************************************************************************************************/
/*! \brief         This interface shall be used to initialize the symmetrical decryption service of the module.
 *  \details       Synchronous configuration:
 *                 The function starts the service. The keyId is stored and if the keyPtr contains a plaintext, the
 *                 key is loaded to the RAM key slot.
 *                 Asynchronous configuration:
 *                 The parameters are stored in a buffer, and the service gets marked to be started in the next main-
 *                 function call.
 *  \param[in]     cfgPtr            Holds a pointer to the configuration of this service.
 *  \param[in]     keyPtr            Holds a pointer to the key which has to be used during the symmetrical decryption.
 *                                   The keyPtr can either contain a plaintext key (keyPtr.length = 16) or a
 *                                   keyId (keyPtr.length = 1).
 *  \param[in]     InitVectorPtr     Holds a pointer to the initialization vector which has to be used during the
 *                                   symmetrical decryption.
 *  \param[in]     InitVectorLength  Holds the length of the initialization vector in bytes.
 *                                   Only the value 16 (for CBC mode) and 0 (for ECB) is allowed.
 *  \return        CSM_E_OK          Request successful.
 *  \return        CSM_E_NOT_OK      Request failed.
 *  \return        CSM_E_BUSY        Request failed, service is still busy.
 *  \pre           Service is idle.
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE, FALSE (depends on configuration)
 *  \config        CRY_30_RH850ICUS_AESDECRYPT128CONFIG
 *  \note          It is important to call the Finish-Function of this service after a successful call of this function
 *                 (CSM_E_OK). A call of the Update-Function between them is allowed.
 *                 Attention: If the Finish-function is never called, the SHE is blocked for all other services.
 *  \trace         SPEC-2919038, SPEC-2919377, SPEC-2919276
 *  \trace         CREQ-121595
 **********************************************************************************************************************/
extern FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_AesDecrypt128Start(
  P2CONST( void, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) cfgPtr,
  P2CONST( Csm_SymKeyType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) keyPtr,
  P2CONST( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) InitVectorPtr,
  uint32 InitVectorLength);

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_AesDecrypt128Update()
 **********************************************************************************************************************/
/*! \brief         This interface passes input data to the symmetrical decryption service.
 *  \details       Synchronous configuration:
 *                 The function updates the service. The command to decrypt the ciphertext is send to the SHE.
 *                 If no error occured, the plainTextLengthPtr gets updated with the length of the decrypted text.
 *                 Asynchronous configuration:
 *                 The parameters are stored in a buffer, and the service gets marked to be updated in the next main-
 *                 function call.
 *  \param[in]     cfgPtr              Holds a pointer to the configuration of this service.
 *  \param[in]     cipherTextPtr       Holds a pointer to the data for which a decrypted text shall be computed.
 *  \param[in]     cipherTextLength    Contains the number of bytes for which the decrypted text shall be computed.
 *                                     Only values which are the same or a multiple of the blocksize (16 bytes) are
 *                                     allowed.
 *  \param[out]    plainTextPtr        Holds a pointer to the memory location which will hold the decrypted text.
 *  \param[in,out] plainTextLengthPtr  Holds a pointer to the memory location in which the length information is
 *                                     stored. On calling this function, this parameter shall contain the size of the
 *                                     provided buffer.
 *                                     The buffer size must have at least the size of the cipherTextLength.
 *                                     When the request has finished successful, the length of the returned
 *                                     decrypted text is stored.
 *  \return        CSM_E_OK            Request successful.
 *  \return        CSM_E_NOT_OK        Request failed.
 *  \return        CSM_E_SMALL_BUFFER  The provided buffer is too small to store the result.
 *  \pre           Service is started.
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE, FALSE (depends on configuration)
 *  \config        CRY_30_RH850ICUS_AESDECRYPT128CONFIG
 *  \note          The driver does not support multiple update calls.
 *  \trace         SPEC-2919137, SPEC-2919305, SPEC-2919276, SPEC-2919327
 *  \trace         CREQ-121595
 **********************************************************************************************************************/
extern FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_AesDecrypt128Update(
  P2CONST( void, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) cfgPtr,
  P2CONST( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) cipherTextPtr,
  uint32 cipherTextLength,
  P2VAR( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) plainTextPtr,
  P2VAR( uint32, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) plainTextLengthPtr);

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_AesDecrypt128Finish()
 **********************************************************************************************************************/
/*! \brief         This interface shall be used to finish the symmetrical decryption service.
 *  \details       Synchronous configuration:
 *                 The function finishes the service.
 *                 Asynchronous configuration:
 *                 The parameters are stored in a buffer, and the service gets marked to be finished in the next main-
 *                 function call.
 *  \param[in]     cfgPtr               Holds a pointer to the configuration of this service.
 *  \param[in]     plainTextPtr         Holds a pointer to the memory location which will hold the decrypted text.
 *  \param[in]     plainTextLengthPtr   Holds a pointer to the memory location in which the length information is
 *                                      stored. On calling this function, this parameter shall contain the size of the
 *                                      provided buffer. When the request has finished successful,
 *                                      the length of the returned decrypted text is stored.
 *  \return        CSM_E_OK             Request successful.
 *  \return        CSM_E_NOT_OK         Request failed.
 *  \pre           Service is started.
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE, FALSE
 *  \config        CRY_30_RH850ICUS_AESDECRYPT128CONFIG
 *  \note          This function must only be called one after a succesful call of the corresponding Start-Function of
 *                 this service. It is not allowed to call this function multiple times even if the return value is not
 *                 CSM_E_OK.
 *  \trace         SPEC-2919033, SPEC-2919016, SPEC-2919276, SPEC-2919327
 *  \trace         CREQ-121595
 **********************************************************************************************************************/
extern FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_AesDecrypt128Finish(
  P2CONST( void, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) cfgPtr,
  P2VAR( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) plainTextPtr,
  P2VAR( uint32, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) plainTextLengthPtr);

# define CRY_30_RH850ICUS_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#endif /* CRY_30_RH850ICUS_AESDECRYPT128_H */
/**********************************************************************************************************************
 *  END OF FILE: CRY_30_RH850ICUS_AESDECRYPT128.H
 **********************************************************************************************************************/

