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
/*!        \file  Cry_30_Rh850Icus_KeyWrapSym.h
 *        \brief  This header file implements the KeyWrapSym CRY API for the ASR CSM.
 *
 *      \details  -
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Refer to the module's header file.
 *********************************************************************************************************************/

#if !defined (CRY_30_RH850ICUS_KEYWRAPSYM_H)
# define CRY_30_RH850ICUS_KEYWRAPSYM_H

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
 *  Cry_30_Rh850Icus_KeyWrapSymInit()
 **********************************************************************************************************************/
/*! \brief         Initializes the symmetric key wrap service.
 *  \details       Function sets the global status to initial idle (needed for asynchronous function handling).
 *  \pre           None
 *  \context       ANY
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \config        CRY_30_RH850ICUS_KEYWRAPSYMCONFIG
 *  \note          Called by Cry_30_Rh850Icus_Init
 **********************************************************************************************************************/
extern FUNC( void, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_KeyWrapSymInit( void );

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_KeyWrapSymMainFunction()
 **********************************************************************************************************************/
/*! \brief         Implements the API to be called cyclically to process the requested services.
 *  \details       This function needs to be called for asynchronous function handling in order to process the service.
 *                 If a service is processed, the function sends a callback notification.
 *  \pre           Cry is initialized.
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \config        CRY_30_RH850ICUS_KEYWRAPSYMCONFIG
 *  \note          Scheduled by the CSM.
 *  \trace         SPEC-2919040, SPEC-2919299, SPEC-2919390, SPEC-2919244
 *  \trace         CREQ-122741
 **********************************************************************************************************************/
extern FUNC( void, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_KeyWrapSymMainFunction( void );

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_KeyWrapSymStart()
 **********************************************************************************************************************/
/*! \brief         This interface shall be used to initialize the symmetric key wrapping service of the module.
 *  \details       Synchronous configuration:
 *                 The function starts the service.
 *                 Asynchronous configuration:
 *                 The parameters are stored in a buffer, and the service gets marked to be started in the next main-
 *                 function call.
 *  \param[in]     cfgPtr         Holds a pointer to the configuration of this service.
 *  \param[in]     keyPtr         Holds a pointer to a key. The parameter is not used by the CRY.
 *  \param[in]     wrappingkeyPtr Holds a pointer to a key. The parameter is not used by the CRY.
 *  \return        CSM_E_OK       Request successful.
 *  \return        CSM_E_NOT_OK   Request failed.
 *  \return        CSM_E_BUSY     Request failed, service is still busy.
 *  \pre           Service is idle.
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE, FALSE (depends on configuration)
 *  \config        CRY_30_RH850ICUS_KEYWRAPSYMCONFIG
 *  \note          It is important to call the Finish-Function of this service after a successful call of this function
 *                 (CSM_E_OK). A call of the Update-Function between them is allowed.
 *                 Attention: If the Finish-function is never called, the SHE is blocked for all other services.
 *  \trace         SPEC-2919325, SPEC-2919377, SPEC-2919276
 *  \trace         CREQ-122741
 **********************************************************************************************************************/
extern FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_KeyWrapSymStart(
  P2CONST( void, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) cfgPtr,
  P2CONST( Csm_SymKeyType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) keyPtr,
  P2CONST( Csm_SymKeyType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) wrappingkeyPtr);

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_KeyWrapSymUpdate()
 **********************************************************************************************************************/
/*! \brief         This interface shall be used to retrieve the result of the key wrapping operation.
 *  \details       Synchronous configuration:
 *                 The function updates the service. The command to export the RAM key is send to the SHE.
 *                 Asynchronous configuration:
 *                 The parameters are stored in a buffer, and the service gets marked to be updated in the next main-
 *                 function call.
 *  \param[in]     cfgPtr        Holds a pointer to the configuration of this service.
 *  \param[in]     dataPtr       Holds a pointer to the memory which will hold the result of the key wrapping
 *                               (M1M2M3 or M1M2M3M4M5 message, dependent on the given dataLength).
 *  \param[in]     dataLengthPtr Holds a pointer to the memory location in which the length information is stored.
 *                               On calling this function, this parameter shall contain the size of the buffer
 *                               provided by dataPtr. When the request has finished successful, the length of the
 *                               computed value is stored.
 *                               Supported values are 64 and 112. The dataPtr contains M1M2M3 if the length is 64,
 *                               and M1M2M3M4M5 if the length is 112.
 *  \return        CSM_E_OK      Request successful
 *  \return        CSM_E_NOT_OK  Request failed
 *  \pre           Service is started.
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE, FALSE (depends on configuration)
 *  \config        CRY_30_RH850ICUS_KEYWRAPSYMCONFIG
 *  \note          The driver does not support multiple update calls.
 *  \trace         SPEC-2919065, SPEC-2919305, SPEC-2919276
 *  \trace         CREQ-122741
 **********************************************************************************************************************/
extern FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_KeyWrapSymUpdate(
  P2CONST( void, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) cfgPtr,
  P2VAR( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) dataPtr,
  P2VAR( uint32, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) dataLengthPtr);


/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_KeyWrapSymFinish()
 **********************************************************************************************************************/
/*! \brief         This interface shall be used to finish the symmetric key wrap service.
 *  \details       Synchronous configuration:
 *                 The function finishes the service.
 *                 Asynchronous configuration:
 *                 The parameters are stored in a buffer, and the service gets marked to be finished in the next main-
 *                 function call.
 *  \param[in]     cfgPtr       Holds a pointer to the configuration of this service.
 *  \return        CSM_E_OK     Request successful.
 *  \return        CSM_E_NOT_OK Request failed.
 *  \pre           Service is started.
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE, FALSE (depends on configuration)
 *  \config        CRY_30_RH850ICUS_KEYWRAPSYMCONFIG
 *  \note          This function must only be called one after a succesful call of the corresponding Start-Function of
 *                 this service. It is not allowed to call this function multiple times even if the return value is not
 *                 CSM_E_OK.
 *  \trace         SPEC-2919294, SPEC-2919016, SPEC-2919276
 *  \trace         CREQ-122741
 **********************************************************************************************************************/
extern FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_KeyWrapSymFinish(
  P2CONST( void, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) cfgPtr);

# define CRY_30_RH850ICUS_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#endif /* CRY_30_RH850ICUS_KEYWRAPSYM_H */
/**********************************************************************************************************************
 *  END OF FILE: CRY_30_RH850ICUS_KEYWRAPSYM.H
 **********************************************************************************************************************/

