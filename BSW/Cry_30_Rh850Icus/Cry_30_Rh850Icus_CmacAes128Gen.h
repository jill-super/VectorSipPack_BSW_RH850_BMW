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
/*!        \file  Cry_30_Rh850Icus_CmacAes128Gen.h
 *        \brief  This header file implements the CmacAes128Gen CRY API for the ASR CSM.
 *
 *      \details  -
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Refer to the module's header file.
 *********************************************************************************************************************/

#if !defined (CRY_30_RH850ICUS_CMACAES128GEN_H)
# define CRY_30_RH850ICUS_CMACAES128GEN_H

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
 *  Cry_30_Rh850Icus_CmacAes128GenInit()
 **********************************************************************************************************************/
/*! \brief         Initializes the CMAC AES128 generation.
 *  \details       Function sets the global status to initial idle (needed for asynchronous function handling).
 *  \pre           None
 *  \context       ANY
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \config        CRY_30_RH850ICUS_CMACAES128GENCONFIG
 *  \note          Called by Cry_30_Rh850Icus_Init
 **********************************************************************************************************************/
extern FUNC( void, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_CmacAes128GenInit( void );

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_CmacAes128GenMainFunction()
 **********************************************************************************************************************/
/*! \brief         Implements the API to be called cyclically to process the requested services.
 *  \details       This function needs to be called for asynchronous function handling in order to process the service.
 *                 If a service is processed, the function sends a callback notification.
 *  \pre           Cry is initialized.
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \config        CRY_30_RH850ICUS_CMACAES128GENCONFIG
 *  \note          Scheduled by the CSM.
 *  \trace         SPEC-2919040, SPEC-2919299, SPEC-2919390, SPEC-2919244
 *  \trace         CREQ-121598
 **********************************************************************************************************************/
extern FUNC( void, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_CmacAes128GenMainFunction( void );

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_CmacAes128GenStart()
 **********************************************************************************************************************/
/*! \brief         This interface shall be used to initialize the CMAC generation service of the module.
 *  \details       Synchronous configuration:
 *                 The function starts the service. The keyId is stored and if the keyPtr contains a plaintext, the
 *                 key is loaded to the RAM key slot.
 *                 Asynchronous configuration:
 *                 The parameters are stored in a buffer, and the service gets marked to be started in the next main-
 *                 function call.
 *  \param[in]     cfgPtr       Holds a pointer to the configuration of this service.
 *  \param[in]     keyPtr       Holds a pointer to the key which has to be used for the CMAC generation.
 *                              The keyPtr can either contain a plaintext key (keyPtr.length = 16) or a
 *                              keyId (keyPtr.length = 1).
 *  \return        CSM_E_OK     Request successful.
 *  \return        CSM_E_NOT_OK Request failed.
 *  \return        CSM_E_BUSY   Request failed, service is still busy.
 *  \pre           Service is idle.
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE, FALSE (depends on configuration)
 *  \config        CRY_30_RH850ICUS_CMACAES128GENCONFIG
 *  \note          It is important to call the Finish-Function of this service after a successful call of this function
 *                 (CSM_E_OK). A call of the Update-Function between them is allowed.
 *                 Attention: If the Finish-function is never called, the SHE is blocked for all other services.
 *  \trace         SPEC-2919106, SPEC-2919377, SPEC-2919276
 *  \trace         CREQ-121598
 **********************************************************************************************************************/
extern FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_CmacAes128GenStart(
  P2CONST( void, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) cfgPtr,
  P2CONST( Csm_SymKeyType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) keyPtr);

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_CmacAes128GenUpdate()
 **********************************************************************************************************************/
/*! \brief         This interface passes input data for the CMAC generation.
 *  \details       Synchronous configuration:
 *                 The function updates the service. The command to generate the CMAC is send to the SHE.
 *                 Asynchronous configuration:
 *                 The parameters are stored in a buffer, and the service gets marked to be updated in the next main-
 *                 function call.
 *  \param[in]     cfgPtr       Holds a pointer to the configuration of this service.
 *  \param[in]     dataPtr      Holds a pointer to the data for which a CMAC shall be computed.
 *  \param[in]     dataLength   Contains the number of bytes for which the CMAC shall be computed.
 *  \return        CSM_E_OK     Request successful.
 *  \return        CSM_E_NOT_OK Request failed.
 *  \pre           Service is started.
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE, FALSE (depends on configuration)
 *  \config        CRY_30_RH850ICUS_CMACAES128GENCONFIG
 *  \note          The driver does not support multiple update calls.
 *  \trace         SPEC-2919336, SPEC-2919305, SPEC-2919276
 *  \trace         CREQ-121598
 **********************************************************************************************************************/
extern FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_CmacAes128GenUpdate(
  P2CONST( void, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) cfgPtr,
  P2CONST( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) dataPtr,
  uint32 dataLength);

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_CmacAes128GenFinish()
 **********************************************************************************************************************/
/*! \brief         This interface shall be used to finish the CMAC generation service.
 *  \details       Synchronous configuration:
 *                 The function finishes the service.
 *                 If no error occured, the CMAC is written to the resultPtr and the resultLengthPtr gets updated
 *                 with the length of the CMAC.
 *                 Asynchronous configuration:
 *                 The parameters are stored in a buffer, and the service gets marked to be finished in the next main-
 *                 function call.
 *  \param[in]     cfgPtr              Holds a pointer to the configuration of this service.
 *  \param[out]    resultPtr           Holds a pointer to the memory location which will hold the result of the CMAC
 *                                     generation. If the result does not fit into the given buffer, and truncation is
 *                                     allowed, the result is truncated.
 *  \param[in,out] resultLengthPtr     Holds a pointer to the memory location in which the length information is
 *                                     stored. On calling this function this parameter shall contain the size of the
 *                                     buffer provided by resultPtr. When the request has finished successful,
 *                                     the length of the returned CMAC is stored.
 *  \param[in]     truncationIsAllowed This parameter states whether a truncation of the result is allowed or not.
 *                                     TRUE: truncation is allowed.
 *                                     FALSE: truncation is not allowed.
 *  \return        CSM_E_OK            Request successful
 *  \return        CSM_E_NOT_OK        Request failed
 *  \return        CSM_E_SMALL_BUFFER  The provided buffer is too small to store the result, and truncation was
 *                                     not allowed.
 *  \pre           Service is started.
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE, FALSE (depends on configuration)
 *  \config        CRY_30_RH850ICUS_CMACAES128GENCONFIG
 *  \note          This function must only be called one after a succesful call of the corresponding Start-Function of
 *                 this service. It is not allowed to call this function multiple times even if the return value is not
 *                 CSM_E_OK.
 *  \trace         SPEC-2919125, SPEC-2919016, SPEC-2919276, SPEC-2919014
 *  \trace         CREQ-121598
 **********************************************************************************************************************/
extern FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_CmacAes128GenFinish(
  P2CONST( void, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) cfgPtr,
  P2VAR( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) resultPtr,
  P2VAR( uint32, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) resultLengthPtr,
  boolean truncationIsAllowed);

# define CRY_30_RH850ICUS_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#endif /* CRY_30_RH850ICUS_CMACAES128GEN_H */

/**********************************************************************************************************************
 *  END OF FILE: CRY_30_RH850ICUS_CMACAES128GEN.H
 **********************************************************************************************************************/

