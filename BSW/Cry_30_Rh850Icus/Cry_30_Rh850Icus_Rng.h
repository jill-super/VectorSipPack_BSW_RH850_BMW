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
/*!        \file  Cry_30_Rh850Icus_Rng.h
 *        \brief  This header file implements the Rng CRY API for the ASR CSM.
 *
 *      \details  -
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Refer to the module's header file.
 *********************************************************************************************************************/

#if !defined (CRY_30_RH850ICUS_RNG_H)
# define CRY_30_RH850ICUS_RNG_H

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
 *  Cry_30_Rh850Icus_RngInit()
 **********************************************************************************************************************/
/*! \brief         Initialize the random number generator of the SHE.
 *  \details       This function initializes the RNG of the SHE, if it is not already initialized.
                   Additionally, the function sets the global status to initial idle
                   (needed for asynchronous function handling).
 *  \pre           None
 *  \context       ANY
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \config        CRY_30_RH850ICUS_RNGCONFIG
 *  \note          Called by Cry_30_Rh850Icus_Init
 **********************************************************************************************************************/
extern FUNC( void, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_RngInit( void );

/**********************************************************************************************************************
 * Cry_30_Rh850Icus_RngSeedMainFunction()
 **********************************************************************************************************************/
/*! \brief         Implements the API to be called cyclically to process the requested services.
 *  \details       This function needs to be called for asynchronous function handling in order to process the service.
                   If a service is processed, the function sends a callback notification.
 *  \pre           Cry is initialized.
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \config        CRY_30_RH850ICUS_RNGCONFIG
 *  \note          Scheduled by the CSM.
 *  \trace         SPEC-2919040, SPEC-2919299, SPEC-2919390, SPEC-2919244
 *  \trace         CREQ-126157
 **********************************************************************************************************************/
extern FUNC( void, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_RngSeedMainFunction( void );

/**********************************************************************************************************************
 * Cry_30_Rh850Icus_RngGenerateMainFunction()
 **********************************************************************************************************************/
/*! \brief         Implements the API to be called cyclically to process the requested services.
 *  \details       This function needs to be called for asynchronous function handling in order to process the service.
                   If a service is processed, the function sends a callback notification.
 *  \pre           Cry is initialized.
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \config        CRY_30_RH850ICUS_RNGCONFIG
 *  \note          Scheduled by the CSM
 *  \trace         SPEC-2919040, SPEC-2919299, SPEC-2919390, SPEC-2919244
 *  \trace         CREQ-121600
 **********************************************************************************************************************/
extern FUNC( void, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_RngGenerateMainFunction( void );

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_RngSeedStart()
 **********************************************************************************************************************/
/*! \brief         This interface shall be used to initialize the random number generator seed service of the module.
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
 *  \config        CRY_30_RH850ICUS_RNGCONFIG
 *  \note          It is important to call the Finish-Function of this service after a successful call of this function
 *                 (CSM_E_OK). A call of the Update-Function between them is allowed.
 *                 Attention: If the Finish-function is never called, the SHE is blocked for all other services.
 *  \trace         SPEC-2919104, SPEC-2919377, SPEC-2919276
 *  \trace         CREQ-126157
 **********************************************************************************************************************/
extern FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_RngSeedStart(
  P2CONST( void, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) cfgPtr );

 /**********************************************************************************************************************
 * Cry_30_Rh850Icus_RngSeedUpdate()
 **********************************************************************************************************************/
/*! \brief         This interface passes a seed to the random number generator seed service.
 *  \details       Synchronous configuration:
 *                 The function updates the service. The command to extend the seed with the given seedPtr is send
 *                 to the hardware.
 *                 Asynchronous configuration:
 *                 The parameters are stored in a buffer, and the service gets marked to be updated in the next main-
 *                 function call.
 *  \param[in]     cfgPtr       Holds a pointer to the configuration of this service.
 *  \param[in]     seedPtr      Holds a pointer to the seed for the random number generator.
 *  \param[in]     seedLength   Contains the length of the seed in bytes. Only the value 16 is supported.
 *  \return        CSM_E_OK     Request successful
 *  \return        CSM_E_NOT_OK Request failed
 *  \pre           Service is started.
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE, FALSE (depends on configuration)
 *  \config        CRY_30_RH850ICUS_RNGCONFIG
 *  \note          The driver does not support multiple update calls.
 *  \trace         SPEC-2919231, SPEC-2919305, SPEC-2919276
 *  \trace         CREQ-126157
 **********************************************************************************************************************/
extern FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_RngSeedUpdate(
  P2CONST( void, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) cfgPtr,
  P2CONST( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) seedPtr,
  uint32 seedLength);

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_RngSeedFinish()
 **********************************************************************************************************************/
/*! \brief         This interface shall be used to finish the random number generator seed service.
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
 *  \config        CRY_30_RH850ICUS_RNGCONFIG
 *  \note          This function must only be called one after a succesful call of the corresponding Start-Function of
 *                 this service. It is not allowed to call this function multiple times even if the return value is not
 *                 CSM_E_OK.
 *  \trace         SPEC-2919399, SPEC-2919016, SPEC-2919276
 *  \trace         CREQ-126157
 **********************************************************************************************************************/
extern FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_RngSeedFinish(
  P2CONST( void, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) cfgPtr);

/**********************************************************************************************************************
 * Cry_30_Rh850Icus_RngGenerate()
 **********************************************************************************************************************/
/*! \brief         This interface is used to generate a random number according to the SHE specification.
 *  \details       Synchronous configuration:
 *                 The command to generate a random number is send to the SHE.
 *                 The generated random number is written to the resultPtr.
 *                 Asynchronous configuration:
 *                 The parameters are stored in a buffer, and the service gets marked to be updated in the next main-
 *                 function call.
 *  \param[in]     cfgPtr       Holds a pointer to the configuration of this service.
 *  \param[out]    resultPtr    Holds a pointer to the memory location which will hold the result of the random
 *                              number generation. The memory location must have at least the size "resultLength".
 *  \param[in]     resultLength Holds the amount of random bytes which should be generated.
                                The maximum supported size is 16 Byte.
 *  \return        CSM_E_OK     Request successful.
 *  \return        CSM_E_NOT_OK Request failed.
 *  \return        CSM_E_BUSY   Request failed, service is still busy.
 *  \pre           The SHE PRNG have to be initialized.
 *  \pre           Service is idle.
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE, FALSE (depends on configuration)
 *  \config        CRY_30_RH850ICUS_RNGCONFIG
 *  \trace         SPEC-2919248, SPEC-2919047, SPEC-2919117, SPEC-2919276
 *  \trace         CREQ-121600
 **********************************************************************************************************************/
extern FUNC( Csm_ReturnType, CRY_30_RH850ICUS_CODE ) Cry_30_Rh850Icus_RngGenerate(
  P2CONST( void, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) cfgPtr,
  P2VAR( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) resultPtr,
  uint32 resultLength);

# define CRY_30_RH850ICUS_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#endif /* CRY_30_RH850ICUS_RNG_H */
/**********************************************************************************************************************
 *  END OF FILE: CRY_30_RH850ICUS_RNG.H
 **********************************************************************************************************************/

