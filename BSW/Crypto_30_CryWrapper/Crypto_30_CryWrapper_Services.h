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
/*      \file  Crypto_30_CryWrapper_Services.h
 *      \brief  MICROSAR Crypto Driver (Crypto)
 *
 *      \details  Internal header file for service dispatch function prototypes
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Refer to the module's header file.
 *********************************************************************************************************************/

#if !defined (CRYPTO_30_CRYWRAPPER_SERVICE_H)
# define CRYPTO_30_CRYWRAPPER_SERVICE_H

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
# include "Csm_Types.h"
# include "Crypto_30_CryWrapper_Cfg.h"

# if !defined (CRYPTO_30_CRYWRAPPER_LOCAL) /* COV_CRYPTO_30_CRYWRAPPER_LOCAL_DEFINE */
#  define CRYPTO_30_CRYWRAPPER_LOCAL static
# endif

# if !defined (CRYPTO_30_CRYWRAPPER_LOCAL_INLINE) /* COV_CRYPTO_30_CRYWRAPPER_LOCAL_DEFINE */
#  define CRYPTO_30_CRYWRAPPER_LOCAL_INLINE LOCAL_INLINE
# endif

# if (CRYPTO_30_CRYWRAPPER_DEV_ERROR_REPORT == STD_ON)
#  include "Det.h"
# endif



/**********************************************************************************************************************
*  LOCAL CONSTANT MACROS
*********************************************************************************************************************/
# ifndef CRYPTO_30_CRYWRAPPER_SERVICES_WATCHDOG_PTR /* COV_CRYPTO_30_CRYWRAPPER_WATCHDOG_FCTN_PTR */
#  define CRYPTO_30_CRYWRAPPER_SERVICES_WATCHDOG_PTR                (0u)
# endif


/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

# define CRYPTO_30_CRYWRAPPER_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# if (CRYPTO_30_CRYWRAPPER_SERVICE_HASH == STD_ON) /* COV_CRYPTO_30_CRYWRAPPER_NOT_SUPPORTED_SERVICE */
/**********************************************************************************************************************
 *  Crypto_30_CryWrapper_DispatchHash()
 *********************************************************************************************************************/
/*! \brief         Dispatches the Hash job to primitive layer.
 *  \details       This function dispatches the provided job to the primitives.
 *  \param[in]     objectId           Holds the identifier of the Crypto Driver Object.
 *  \param[in]     mode               Operation mode in which the job currently is.
 *  \param[in,out] job                Pointer to the job which shall be dispatched.
 *  \return        E_OK               Dispatching was successful.
 *                 E_NOT_OK           Dispatching failed.
 *  \pre           objectId has to be a valid driver object handle.
 *  \context       TASK
 *  \reentrant     TRUE
 *  \synchronous   TRUE
 *********************************************************************************************************************/
extern FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_DispatchHash(uint32 objectId,
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) job,
  Crypto_OperationModeType mode);
# endif

# if (CRYPTO_30_CRYWRAPPER_SERVICE_MAC_GENERATE == STD_ON)
/**********************************************************************************************************************
 *  Crypto_30_CryWrapper_DispatchMacGenerate()
 *********************************************************************************************************************/
/*! \brief         Dispatches the MacGenerate job to primitive layer.
 *  \details       This function dispatches the provided job to the primitives.
 *  \param[in]     objectId           Holds the identifier of the Crypto Driver Object.
 *  \param[in]     mode               Operation mode in which the job currently is.
 *  \param[in,out] job                Pointer to the job which shall be dispatched.
 *  \return        E_OK               Dispatching was successful.
 *                 E_NOT_OK           Dispatching failed.
 *                 CRYPTO_E_BUSY              Request failed, the CRY driver was BUSY.
 *                 CRYPTO_E_KEY_NOT_VALID     Request failed, the key is not valid.
 *                 CRYPTO_E_KEY_NOT_AVAILABLE Request failed, the key is not available.
 *                 CRYPTO_E_SMALL_BUFFER      Request failed, the provided buffer is too small to store the result.
 *  \pre           objectId has to be a valid driver object handle.
 *  \context       TASK
 *  \reentrant     TRUE
 *  \synchronous   TRUE
 *********************************************************************************************************************/
extern FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_DispatchMacGenerate(uint32 objectId,
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) job,
  Crypto_OperationModeType mode);
# endif 

# if (CRYPTO_30_CRYWRAPPER_SERVICE_MAC_VERIFY == STD_ON)
/**********************************************************************************************************************
 *  Crypto_30_CryWrapper_DispatchMacVerify()
 *********************************************************************************************************************/
/*! \brief         Dispatches the MacVerify job to primitive layer.
 *  \details       This function dispatches the provided job to the primitives.
 *  \param[in]     objectId           Holds the identifier of the Crypto Driver Object.
 *  \param[in]     mode               Operation mode in which the job currently is.
 *  \param[in,out] job                Pointer to the job which shall be dispatched.
 *  \return        E_OK               Dispatching was successful.
 *                 E_NOT_OK           Dispatching failed.
 *                 CRYPTO_E_BUSY              Request failed, the CRY driver was BUSY.
 *                 CRYPTO_E_KEY_NOT_VALID     Request failed, the key is not valid.
 *                 CRYPTO_E_KEY_NOT_AVAILABLE Request failed, the key is not available.
 *                 CRYPTO_E_SMALL_BUFFER      Request failed, the provided buffer is too small to store the result.
 *  \pre           objectId has to be a valid driver object handle.
 *  \context       TASK
 *  \reentrant     TRUE
 *  \synchronous   TRUE
 *********************************************************************************************************************/
extern FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_DispatchMacVerify(uint32 objectId,
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) job,
  Crypto_OperationModeType mode);
# endif

# if (CRYPTO_30_CRYWRAPPER_SERVICE_ENCRYPT == STD_ON)
/**********************************************************************************************************************
 *  Crypto_30_CryWrapper_DispatchCipherEncrypt()
 *********************************************************************************************************************/
/*! \brief         Dispatches the CipherEncrypt job to primitive layer.
 *  \details       This function dispatches the provided job to the primitives.
 *  \param[in]     objectId           Holds the identifier of the Crypto Driver Object.
 *  \param[in]     mode               Operation mode in which the job currently is.
 *  \param[in,out] job                Pointer to the job which shall be dispatched.
 *  \return        E_OK                       Dispatching was successful.
 *                 E_NOT_OK                   Dispatching failed.
 *                 CRYPTO_E_BUSY              Request failed, the CRY driver was BUSY.
 *                 CRYPTO_E_KEY_NOT_VALID     Request failed, the key is not valid.
 *                 CRYPTO_E_KEY_NOT_AVAILABLE Request failed, the key is not available.
 *                 CRYPTO_E_SMALL_BUFFER      Request failed, the provided buffer is too small to store the result.
 *  \pre           objectId has to be a valid driver object handle.
 *  \context       TASK
 *  \reentrant     TRUE
 *  \synchronous   TRUE
 *********************************************************************************************************************/
extern FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_DispatchCipherEncrypt(uint32 objectId,
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) job,
  Crypto_OperationModeType mode);
# endif

# if (CRYPTO_30_CRYWRAPPER_SERVICE_DECRYPT == STD_ON)
/**********************************************************************************************************************
 *  Crypto_30_CryWrapper_DispatchCipherDecrypt()
 *********************************************************************************************************************/
/*! \brief         Dispatches the CipherDecrypt job to primitive layer.
 *  \details       This function dispatches the provided job to the primitives.
 *  \param[in]     objectId           Holds the identifier of the Crypto Driver Object.
 *  \param[in]     mode               Operation mode in which the job currently is.
 *  \param[in,out] job                Pointer to the job which shall be dispatched.
 *  \return        E_OK                       Dispatching was successful.
 *                 E_NOT_OK                   Dispatching failed.
 *                 CRYPTO_E_BUSY              Request failed, the CRY driver was BUSY.
 *                 CRYPTO_E_KEY_NOT_VALID     Request failed, the key is not valid.
 *                 CRYPTO_E_KEY_NOT_AVAILABLE Request failed, the key is not available.
 *                 CRYPTO_E_SMALL_BUFFER      Request failed, the provided buffer is too small to store the result.
 *  \pre           objectId has to be a valid driver object handle.
 *  \context       TASK
 *  \reentrant     TRUE
 *  \synchronous   TRUE
 *********************************************************************************************************************/
extern FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_DispatchCipherDecrypt(uint32 objectId,
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) job,
  Crypto_OperationModeType mode);
# endif

# if (CRYPTO_30_CRYWRAPPER_SERVICE_AEADENCRYPT == STD_ON) /* COV_CRYPTO_30_CRYWRAPPER_NOT_SUPPORTED_SERVICE */
/**********************************************************************************************************************
 *  Crypto_30_CryWrapper_DispatchAeadEncrypt()
 *********************************************************************************************************************/
/*! \brief          Dispatches the AeadEncrypt job to primitive layer.
 *  \details        This function dispatches the provided job to the primitives.
 *  \param[in]      objectId           Holds the identifier of the Crypto Driver Object.
 *  \param[in]      mode               Operation mode in which the job currently is.
 *  \param[in,out]  job                Pointer to the job which shall be dispatched.
 *  \return         E_OK               Dispatching was successful.
 *                  E_NOT_OK           Dispatching failed.
 *  \pre            objectId has to be a valid driver object handle.
 *  \context        TASK
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *********************************************************************************************************************/
extern FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_DispatchAeadEncrypt(uint32 objectId,
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) job,
  Crypto_OperationModeType mode);
# endif

# if (CRYPTO_30_CRYWRAPPER_SERVICE_AEADDECRYPT == STD_ON) /* COV_CRYPTO_30_CRYWRAPPER_NOT_SUPPORTED_SERVICE */
/**********************************************************************************************************************
 *  Crypto_30_CryWrapper_DispatchAeadDecrypt()
 *********************************************************************************************************************/
/*! \brief         Dispatches the AeadDecrypt job to primitive layer.
 *  \details       This function dispatches the provided job to the primitives.
 *  \param[in]     objectId           Holds the identifier of the Crypto Driver Object.
 *  \param[in]     mode               Operation mode in which the job currently is.
 *  \param[in,out] job                Pointer to the job which shall be dispatched.
 *  \return        E_OK               Dispatching was successful.
 *                 E_NOT_OK           Dispatching failed.
 *  \pre           objectId has to be a valid driver object handle.
 *  \context       TASK
 *  \reentrant     TRUE
 *  \synchronous   TRUE
 *********************************************************************************************************************/
extern FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_DispatchAeadDecrypt(uint32 objectId,
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) job,
  Crypto_OperationModeType mode);
# endif

# if (CRYPTO_30_CRYWRAPPER_SERVICE_SIGNATURE_GENERATE == STD_ON) /* COV_CRYPTO_30_CRYWRAPPER_NOT_SUPPORTED_SERVICE */
/**********************************************************************************************************************
 *  Crypto_30_CryWrapper_DispatchSignatureGenerate()
 *********************************************************************************************************************/
/*! \brief         Dispatches the SignatureGenerate job to primitive layer.
 *  \details       This function dispatches the provided job to the primitives.
 *  \param[in]     objectId           Holds the identifier of the Crypto Driver Object.
 *  \param[in]     mode               Operation mode in which the job currently is.
 *  \param[in,out] job                Pointer to the job which shall be dispatched.
 *  \return        E_OK               Dispatching was successful.
 *                 E_NOT_OK           Dispatching failed.
 *  \pre           objectId has to be a valid driver object handle.
 *  \context       TASK
 *  \reentrant     TRUE
 *  \synchronous   TRUE
 *********************************************************************************************************************/
extern FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_DispatchSignatureGenerate(uint32 objectId,
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) job,
  Crypto_OperationModeType mode);
# endif

# if (CRYPTO_30_CRYWRAPPER_SERVICE_SIGNATURE_VERIFY == STD_ON) /* COV_CRYPTO_30_CRYWRAPPER_NOT_SUPPORTED_SERVICE */
/**********************************************************************************************************************
 *  Crypto_30_CryWrapper_DispatchSignatureVerify()
 *********************************************************************************************************************/
/*! \brief         Dispatches the SignatureVerify job to primitive layer.
 *  \details       This function dispatches the provided job to the primitives.
 *  \param[in]     objectId           Holds the identifier of the Crypto Driver Object.
 *  \param[in]     mode               Operation mode in which the job currently is.
 *  \param[in,out] job                Pointer to the job which shall be dispatched.
 *  \return        E_OK               Dispatching was successful.
 *                 E_NOT_OK           Dispatching failed.
 *  \pre           objectId has to be a valid driver object handle.
 *  \context       TASK
 *  \reentrant     TRUE
 *  \synchronous   TRUE
 *********************************************************************************************************************/
extern FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_DispatchSignatureVerify(uint32 objectId,
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) job,
  Crypto_OperationModeType mode);
# endif

# if (CRYPTO_30_CRYWRAPPER_SERVICE_RANDOM == STD_ON)
/**********************************************************************************************************************
 *  Crypto_30_CryWrapper_DispatchRandom()
 *********************************************************************************************************************/
/*! \brief         Dispatches the Random job to primitive layer.
 *  \details       This function dispatches the provided job to the primitives.
 *  \param[in]     objectId           Holds the identifier of the Crypto Driver Object.
 *  \param[in]     mode               Operation mode in which the job currently is.
 *  \param[in,out] job                Pointer to the job which shall be dispatched.
 *  \return        E_OK                       Dispatching was successful.
 *                 E_NOT_OK                   Dispatching failed.
 *                 CRYPTO_E_BUSY              Request failed, the CRY driver was BUSY.
 *  \pre           objectId has to be a valid driver object handle.
 *  \context       TASK
 *  \reentrant     TRUE
 *  \synchronous   TRUE
 *********************************************************************************************************************/
extern FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_DispatchRandom(uint32 objectId,
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) job,
  Crypto_OperationModeType mode);
# endif

# define CRYPTO_30_CRYWRAPPER_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#endif /* #if !defined (CRYPTO_30_CRYWRAPPER_SERVICE_H) */
/**********************************************************************************************************************
 *  END OF FILE: CRYPTO_30_CRYWRAPPER_SERVICES.H
 *********************************************************************************************************************/
