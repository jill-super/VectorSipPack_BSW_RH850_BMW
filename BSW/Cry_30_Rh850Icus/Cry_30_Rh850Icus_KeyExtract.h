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
/*!        \file  Cry_30_Rh850Icus_KeyExtract.h
 *        \brief  This header file implements the KeyExtract CRY API for the ASR CSM.
 *
 *      \details  -
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Refer to the module's header file.
 *********************************************************************************************************************/

#if !defined (CRY_30_RH850ICUS_KEYEXTRACT_H)
# define CRY_30_RH850ICUS_KEYEXTRACT_H

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
 *  Cry_30_Rh850Icus_KeyExtractInit()
 **********************************************************************************************************************/
/*! \brief         Initializes the Key Extract service.
 *  \details       Function sets the global status to initial idle (needed for asynchronous function handling).
 *  \pre           None
 *  \context       ANY
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \config        CRY_30_RH850ICUS_KEYEXTRACTCONFIG
 *  \note          Called by Cry_30_Rh850Icus_Init
 **********************************************************************************************************************/
extern FUNC( void, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_KeyExtractInit( void );

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_KeyExtractMainFunction()
 **********************************************************************************************************************/
/*! \brief         Implements the API to be called cyclically to process the requested services.
 *  \details       This function needs to be called for asynchronous function handling in order to process the service.
 *                 If a service is processed, the function sends a callback notification.
 *  \pre           Cry is initialized.
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \config        CRY_30_RH850ICUS_KEYEXTRACTCONFIG
 *  \note          Scheduled by the CSM.
 *  \trace         SPEC-2919040, SPEC-2919299, SPEC-2919390, SPEC-2919244
 *  \trace         CREQ-122740
 **********************************************************************************************************************/
extern FUNC( void, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_KeyExtractMainFunction( void );

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_KeyExtractStart()
 **********************************************************************************************************************/
/*! \brief         This interface shall be used to initialize the symmetrical key extraction service of the module.
 *  \details       Synchronous configuration:
 *                 The function starts the service.
 *                 Asynchronous configuration:
 *                 The parameters are stored in a buffer, and the service gets marked to be started in the next main-
 *                 function call.
 *  \param[in]     cfgPtr       Holds a pointer to the configuration of this service.
 *  \return        CSM_E_OK     Request successful.
 *  \return        CSM_E_NOT_OK Request failed.
 *  \return        CSM_E_BUSY   Request failed, service is still busy.
 *  \pre           Service is idle.
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE, FALSE (depends on configuration)
 *  \config        CRY_30_RH850ICUS_KEYEXTRACTCONFIG
 *  \note          It is important to call the Finish-Function of this service after a successful call of this function
 *                 (CSM_E_OK). A call of the Update-Function between them is allowed.
 *                 Attention: If the Finish-function is never called, the SHE is blocked for all other services.
 *  \trace         SPEC-2919235, SPEC-2919377, SPEC-2919276
 *  \trace         CREQ-122740
 **********************************************************************************************************************/
extern FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_KeyExtractStart(
  P2CONST( void, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) cfgPtr);

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_KeyExtractUpdate()
 **********************************************************************************************************************/
/*! \brief         This interface passes input data to the key extraction service.
 *  \details       Synchronous configuration:
 *                 The function updates the service.
 *                 This function provides different possibilities to store keys.
 *                 1. Input data with the length of 16 Byte will be stored in the KEY_RAM.
 *                 2. Input data with the length of 64 Byte will be interpreted as M1-M3 for the key update protocol
 *                    as specified in the SHE spec.
 *                 3. Input data with the length of 65 Byte will be interpreted as M1-M3 for the key update protocol
 *                    as specified in the SHE spec including a KeyId in the first byte of the input data.
 *                 4. Input data with the length of 1 Byte will be used as the data in the key
 *                    which is returned in the finish-function
 *                 Asynchronous configuration:
 *                 The parameters are stored in a buffer, and the service gets marked to be updated in the next main-
 *                 function call.
 *  \param[in]     cfgPtr       Holds a pointer to the configuration of this service.
 *  \param[in]     dataPtr      Holds a pointer to the data which contains either
 *                               - a plaintext key (Length is 16).
 *                               - messages M1, M2, M3 with an optional prepending KeyId to update a keyslot in the
 *                                 SHE (Length is 64 or 65 bytes).
 *                               - a KeyId (Length is 1).
 *  \param[in]     dataLength   Holds the length of the data in bytes.
 *  \return        CSM_E_OK     Request successful.
 *  \return        CSM_E_NOT_OK Request failed.
 *  \pre           Service is started.
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE, FALSE (depends on configuration)
 *  \config        CRY_30_RH850ICUS_KEYEXTRACTCONFIG
 *  \note          The driver does not support multiple update calls.
 *  \trace         SPEC-2919300, SPEC-2919305, SPEC-2919276
 *  \trace         CREQ-122740
 **********************************************************************************************************************/
extern FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_KeyExtractUpdate(
  P2CONST( void, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) cfgPtr,
  P2CONST( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) dataPtr,
  uint32 dataLength);

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_KeyExtractFinish()
 **********************************************************************************************************************/
/*! \brief         This interface shall be used to finish the key extract service.
 *  \details       Synchronous configuration:
 *                 The function finishes the service.
 *                 If a key is updated in the NVM, the key.data will contain the M4-M5 of the SHE key update protocol.
 *                 If the KEY_RAM has been updated, the key.data will contain the corresponding keyId for that slot
 *                 which can be used as input for e.g. AES encrypt.
 *                 Asynchronous configuration:
 *                 The parameters are stored in a buffer, and the service gets marked to be finished in the next main-
 *                 function call.
 *  \param[in]     cfgPtr       Holds a pointer to the configuration of this service.
 *  \param[out]    keyPtr       Holds a pointer to a structure in which the result (e.g. the symmetrical key) is stored.
 *  \return        CSM_E_OK     Request successful.
 *  \return        CSM_E_NOT_OK Request failed.
 *  \pre           Service is started.
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE, FALSE (depends on configuration)
 *  \config        CRY_30_RH850ICUS_KEYEXTRACTCONFIG
 *  \note          This function must only be called one after a succesful call of the corresponding Start-Function of
 *                 this service. It is not allowed to call this function multiple times even if the return value is not
 *                 CSM_E_OK.
 *  \trace         SPEC-2919094, SPEC-2919016, SPEC-2919276
 *  \trace         CREQ-122740
 **********************************************************************************************************************/
extern FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_KeyExtractFinish(
  P2CONST( void, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) cfgPtr,
  P2VAR( Csm_SymKeyType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) keyPtr);

# define CRY_30_RH850ICUS_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#endif /* CRY_30_RH850ICUS_KEYEXTRACT_H */
/**********************************************************************************************************************
 *  END OF FILE: CRY_30_RH850ICUS_KEYEXTRACT.H
 **********************************************************************************************************************/

