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
/*!        \file  Cry_30_Rh850Icus_CmacAes128Ver.h
 *        \brief  This header file implements the CmacAes128Ver CRY API for the ASR CSM.
 *
 *      \details  -
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Refer to the module's header file.
 *********************************************************************************************************************/

#if !defined (CRY_30_RH850ICUS_CMACAES128VER_H)
# define CRY_30_RH850ICUS_CMACAES128VER_H

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
 *  Cry_30_Rh850Icus_CmacAes128VerInit()
 **********************************************************************************************************************/
/*! \brief         Initializes the CMAC AES128 verification.
 *  \details       Function sets the global status to initial idle (needed for asynchronous function handling).
 *  \pre           None
 *  \context       ANY
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \config        CRY_30_RH850ICUS_CMACAES128VERCONFIG
 *  \note          Called by Cry_30_Rh850Icus_Init
 **********************************************************************************************************************/
extern FUNC( void, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_CmacAes128VerInit( void );

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_CmacAes128VerMainFunction()
 **********************************************************************************************************************/
/*! \brief         Implements the API to be called cyclically to process the requested services.
 *  \details       This function needs to be called for asynchronous function handling in order to process the service.
 *                 If a service is processed, the function sends a callback notification.
 *  \pre           Cry is initialized.
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \config        CRY_30_RH850ICUS_CMACAES128VERCONFIG
 *  \note          Scheduled by the CSM.
 *  \trace         SPEC-2919040, SPEC-2919299, SPEC-2919390, SPEC-2919244
 *  \trace         CREQ-121582
***********************************************************************************************************************/
extern FUNC( void, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_CmacAes128VerMainFunction( void );

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_CmacAes128VerStart()
 **********************************************************************************************************************/
/*! \brief         This interface shall be used to initialize the CMAC verification service of the module.
 *  \details       Synchronous configuration:
 *                 The function starts the service. The keyId is stored and if the keyPtr contains a plaintext, the
 *                 key is loaded to the RAM key slot.
 *                 Asynchronous configuration:
 *                 The parameters are stored in a buffer, and the service gets marked to be started in the next main-
 *                 function call.
 *  \param[in]     cfgPtr       Holds a pointer to the configuration of this service.
 *  \param[in]     keyPtr       Holds a pointer to the key which has to be used for the CMAC verification.
 *                              The keyPtr can either contain a plaintext key (keyPtr.length = 16) or a
 *                              keyId (keyPtr.length = 1).
 *  \return        CSM_E_OK     Request successful.
 *  \return        CSM_E_NOT_OK Request failed.
 *  \return        CSM_E_BUSY   Request failed, service is still busy.
 *  \pre           Service is idle.
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE, FALSE (depends on configuration)
 *  \config        CRY_30_RH850ICUS_CMACAES128VERCONFIG
 *  \note          It is important to call the Finish-Function of this service after a successful call of this function
 *                 (CSM_E_OK). A call of the Update-Function between them is allowed.
 *                 Attention: If the Finish-function is never called, the SHE is blocked for all other services.
 *  \trace         SPEC-2919082, SPEC-2919377, SPEC-2919276
 *  \trace         CREQ-121582
 **********************************************************************************************************************/
extern FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_CmacAes128VerStart(
  P2CONST( void, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) cfgPtr,
  P2CONST( Csm_SymKeyType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) keyPtr);

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_CmacAes128VerUpdate()
 **********************************************************************************************************************/
/*! \brief         This interface passes the input data to the CMAC verification service.
 *  \details       Synchronous configuration:
 *                 The function updates the service. The dataLength and dataPtr are stored internal for the finish call.
 *                 Asynchronous configuration:
 *                 The parameters are stored in a buffer, and the service gets marked to be updated in the next main-
 *                 function call.
 *  \param[in]     cfgPtr       Holds a pointer to the configuration of this service.
 *  \param[in]     dataPtr      Holds a pointer to the data for which a CMAC shall be verified.
 *  \param[in]     dataLength   Contains the number of bytes for which the CMAC shall be verified.
 *  \return        CSM_E_OK     Request successful.
 *  \return        CSM_E_NOT_OK Request failed.
 *  \pre           Service is started.
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE, FALSE (depends on configuration)
 *  \config        CRY_30_RH850ICUS_CMACAES128VERCONFIG
 *  \note          Attention: The function stores only the address of the dataPtr and not the content the
 *                 pointer references.
 *                 The content of the dataPtr is needed for the Finish-function. The caller of this method needs to ensure,
 *                 that the data of the dataPtr is valid until the Finish function has called and executed.
 *  \note          The driver does not support multiple update calls.
 *  \trace         SPEC-2919233, SPEC-2919305, SPEC-2919276
 *  \trace         CREQ-121582
 **********************************************************************************************************************/
extern FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_CmacAes128VerUpdate(
  P2CONST( void, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) cfgPtr,
  P2CONST( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) dataPtr,
  uint32 dataLength);

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_CmacAes128VerFinish()
 **********************************************************************************************************************/
/*! \brief         This interface shall be used to finish the CMAC verification service.
 *  \details       Synchronous configuration:
 *                 The function finishes the service.
 *                 The command to verify the CMAC is send to the SHE. The result of the verification is written to the
 *                 resultPtr.
 *                 Asynchronous configuration:
 *                 The parameters are stored in a buffer, and the service gets marked to be finished in the next main-
 *                 function call.
 *  \param[in]     cfgPtr       Holds a pointer to the configuration of this service.
 *  \param[in]     MacPtr       Holds a pointer to the memory location which will hold the CMAC to verify.
 *  \param[in]     MacLength    Holds the length of the MAC to be verified.
 *                              Depending on the configuration, this value is interpreted as number of bits or number
 *                              of bytes to verify. The maximum supported length is 16 Byte, respectively 128 Bit.
 *  \param[out]    resultPtr    Holds a pointer to the memory location which will hold the result of the verification.
 *  \return        CSM_E_OK     Request successful.
 *  \return        CSM_E_NOT_OK Request failed.
 *  \pre           Service is started.
 *  \pre           The dataPtr and it's data from the update-call is still valid.
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE, FALSE (depends on configuration)
 *  \config        CRY_30_RH850ICUS_CMACAES128VERCONFIG
 *  \note          Attention: The caller of this function needs to ensure, that the dataPtr and its data which was
 *                 passed in the update function is still valid.
 *  \note          This function must only be called one after a succesful call of the corresponding Start-Function of
 *                 this service. It is not allowed to call this function multiple times even if the return value is not
 *                 CSM_E_OK.
 *  \trace         SPEC-2919200, SPEC-2919016, SPEC-2919276
 *  \trace         CREQ-121582
 **********************************************************************************************************************/
extern FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_CmacAes128VerFinish(
  P2CONST( void, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) cfgPtr,
  P2CONST( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) MacPtr,
  uint32 MacLength,
  P2VAR( Csm_VerifyResultType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) resultPtr);

# define CRY_30_RH850ICUS_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#endif /* CRY_30_RH850ICUS_CMACAES128VER_H */
/**********************************************************************************************************************
 *  END OF FILE: CRY_30_RH850ICUS_CMACAES128VER.H
 **********************************************************************************************************************/

