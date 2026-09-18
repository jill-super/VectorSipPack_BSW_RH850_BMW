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
/*      \file  Crypto_30_CryWrapper.h
 *      \brief  MICROSAR Crypto Driver (Crypto)
 *
 *      \details  Implementation of the MICROSAR Crypto Driver (Crypto)
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  AUTHOR IDENTITY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Name                          Initials       Company
 *  -------------------------------------------------------------------------------------------------------------------
 *  Tobias Finke                  vistof         Vector Informatik GmbH
 *  -------------------------------------------------------------------------------------------------------------------
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Version   Date        Author  Change Id     Description
 *  -------------------------------------------------------------------------------------------------------------------
 *  01.00.00  2016-01-04  vistof  ESCAN00093439 FEAT-2239: CryDrv Wrapper for ASR4.3
 *  01.00.01  2016-01-18  vistof  ESCAN00093582 Compiler warning: Different const qualifier
 *  01.01.00  2017-04-10  vistof  ESCAN00094713 Fixed processing of asynchronous jobs in mainfunction.
 *                                ESCAN00094142 Moved Crypto_30_CryWrapper_QueueStateType from Csm_Types.h to Crypto
 *                                ESCAN00094141 Added Cancel API
 *  01.02.00  2017-05-15  vistof  ESCAN00095171 Fixed compiler error when DET error report is disabled
 *            2017-05-19  vistof  ESCAN00095244 Compatibility to Csm 1.02.00 (R18 prod. Release)
 *  02.00.00  2017-08-29  vistof  ESCAN00096446 Fixed Compiler error: Define CSM_USE_SYNC_JOB_PROCESSING is missing from CSM
 *                                ESCAN00096448 Fixed Compiler error: Define CRYPTO_30_CRYWRAPPER_KEYPAGE_2 is missing
 *                                STORYC-2181   SafeBsw Preperation 1
 *  02.01.00  2017-09-04  vistof  STORYC-2400   SafeBsw Preperation 2
 *                                ESCAN00096625 Compiler error: En-/Decrypt in ECB mode called with wrong parameter list
 *                                ESCAN00093421 Release of Component
 *                                STORYC-2486   Support of Cypress Traveo Cry
 *                                STORYC-2911   Propagate CRY BUSY error to upper layers
 *  02.01.01  2017-10-26  vistof  ESCAN00097214 Fixed: Wrong check for CSM_USE_SYNC_JOB_PROCESSING
 *********************************************************************************************************************/

#if !defined (CRYPTO_30_CRYWRAPPER_H)
# define CRYPTO_30_CRYWRAPPER_H

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

# include "Csm_Types.h"
# include "Crypto_30_CryWrapper_Cfg.h"
# include "Crypto_30_CryWrapper_KeyManagement.h"
# include "SchM_Crypto_30_CryWrapper.h"
# include "Crypto_30_CryWrapper_Hw.h"
# include "Crypto_30_CryWrapper_Custom.h"
/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/* Vendor and module identification */
# define CRYPTO_30_CRYWRAPPER_VENDOR_ID                                   (30u)
# define CRYPTO_30_CRYWRAPPER_MODULE_ID                                   (114u)
# define CRYPTO_30_CRYWRAPPER_INSTANCE_ID                                 (0u)

/* AUTOSAR Software specification version information */
# define CRYPTO_30_CRYWRAPPER_AR_RELEASE_MAJOR_VERSION                    (0x04u)
# define CRYPTO_30_CRYWRAPPER_AR_RELEASE_MINOR_VERSION                    (0x03u)
# define CRYPTO_30_CRYWRAPPER_AR_RELEASE_REVISION_VERSION                 (0x00u)

/* ----- Component version information (decimal version of ALM implementation package) ----- */
# define CRYPTO_30_CRYWRAPPER_MAJOR_VERSION                               (2u)
# define CRYPTO_30_CRYWRAPPER_MINOR_VERSION                               (1u)
# define CRYPTO_30_CRYWRAPPER_PATCH_VERSION                               (1u)

/* ----- API service IDs ----- */
# define CRYPTO_30_CRYWRAPPER_SID_INIT                                    (0x00u) /*!< Service ID: Crypto_30_CryWrapper_Init() */
# define CRYPTO_30_CRYWRAPPER_SID_GET_VERSION_INFO                        (0x01u) /*!< Service ID: Crypto_30_CryWrapper_GetVersionInfo() */
# define CRYPTO_30_CRYWRAPPER_SID_PROCESS_JOB                             (0x03u) /*!< Service ID: Crypto_30_CryWrapper_ProcessJob() */
# define CRYPTO_30_CRYWRAPPER_SID_CANCEL_JOB                              (0x0Eu) /*!< Service ID: Crypto_30_CryWrapper_CancelJob() */
# define CRYPTO_30_CRYWRAPPER_SID_KEY_ELEMENT_SET                         (0x04u) /*!< Service ID: Crypto_30_CryWrapper_KeyElementSet() */
# define CRYPTO_30_CRYWRAPPER_SID_KEY_VALID_SET                           (0x05u) /*!< Service ID: Crypto_30_CryWrapper_KeyValidSet() */
# define CRYPTO_30_CRYWRAPPER_SID_KEY_ELEMENT_GET                         (0x06u) /*!< Service ID: Crypto_30_CryWrapper_KeyElementGet() */
# define CRYPTO_30_CRYWRAPPER_SID_KEY_ELEMENT_COPY                        (0x0Fu) /*!< Service ID: Crypto_30_CryWrapper_KeyElementCopy() */
# define CRYPTO_30_CRYWRAPPER_SID_KEY_COPY                                (0x10u) /*!< Service ID: Crypto_30_CryWrapper_KeyCopy() */
# define CRYPTO_30_CRYWRAPPER_SID_KEY_ELEMENT_IDS_GET                     (0x11u) /*!< Service ID: Crypto_30_CryWrapper_KeyElementIdsGet() */
# define CRYPTO_30_CRYWRAPPER_SID_RANDOM_SEED                             (0x0Du) /*!< Service ID: Crypto_30_CryWrapper_RandomSeed() */
# define CRYPTO_30_CRYWRAPPER_SID_KEY_GENERATE                            (0x07u) /*!< Service ID: Crypto_30_CryWrapper_KeyGenerate() */
# define CRYPTO_30_CRYWRAPPER_SID_KEY_DERIVE                              (0x08u) /*!< Service ID: Crypto_30_CryWrapper_KeyDerive() */
# define CRYPTO_30_CRYWRAPPER_SID_KEY_EXCHANGE_CALC_PUB_VAL               (0x09u) /*!< Service ID: Crypto_30_CryWrapper_KeyExchangeCalcPubVal() */
# define CRYPTO_30_CRYWRAPPER_SID_KEY_EXCHANGE_CALC_SECRET                (0x0Au) /*!< Service ID: Crypto_30_CryWrapper_KeyExchangeCalcSecret() */
# define CRYPTO_30_CRYWRAPPER_SID_CERTIFICATE_PARSE                       (0x0Bu) /*!< Service ID: Crypto_30_CryWrapper_CertificateParse() */
# define CRYPTO_30_CRYWRAPPER_SID_CERTIFICATE_VERIFY                      (0x12u) /*!< Service ID: Crypto_30_CryWrapper_CertificateVerify() */
# define CRYPTO_30_CRYWRAPPER_SID_MAIN_FUNCTION                           (0x0Cu) /*!< Service ID: Crypto_30_CryWrapper_MainFunction() */

/* ----- Modes ----- */
/* State: Uninitialized */
# define CRYPTO_30_CRYWRAPPER_UNINIT                                      (0x00u)
/* State: Initialized */
# define CRYPTO_30_CRYWRAPPER_INITIALIZED                                 (0x01u)

/* Development Error Types [SWS_Crypto_00040] */
# ifndef CRYPTO_E_NO_ERROR /* COV_CRYPTO_30_CRYWRAPPER_CSM_DEFINES */
#  define CRYPTO_E_NO_ERROR                                               (255u)
# endif
# ifndef CRYPTO_E_UNINIT /* COV_CRYPTO_30_CRYWRAPPER_CSM_DEFINES */
#  define CRYPTO_E_UNINIT                                                 (0u)
# endif
# ifndef CRYPTO_E_INIT_FAILED /* COV_CRYPTO_30_CRYWRAPPER_CSM_DEFINES */
#  define CRYPTO_E_INIT_FAILED                                            (1u)
# endif
# ifndef CRYPTO_E_PARAM_POINTER /* COV_CRYPTO_30_CRYWRAPPER_CSM_DEFINES */
#  define CRYPTO_E_PARAM_POINTER                                          (2u)
# endif
# ifndef CRYPTO_E_PARAM_HANDLE /* COV_CRYPTO_30_CRYWRAPPER_CSM_DEFINES */
#  define CRYPTO_E_PARAM_HANDLE                                           (4u)
# endif
# ifndef CRYPTO_E_PARAM_VALUE /* COV_CRYPTO_30_CRYWRAPPER_CSM_DEFINES */
#  define CRYPTO_E_PARAM_VALUE                                            (5u)
# endif

/* Masks for KeyElementState */
# define CRYPTO_30_CRYWRAPPER_KEYELEMENTSTATE_CLEAR_MASK                  (0xFFu)
# define CRYPTO_30_CRYWRAPPER_KEYELEMENTSTATE_AES_ROUNDKEY_MASK           (0x04u)
# define CRYPTO_30_CRYWRAPPER_KEYELEMENTSTATE_AES_ROUNDKEY_INV_MASK       (0xFBu)
# define CRYPTO_30_CRYWRAPPER_KEYELEMENTSTATE_SEED_MASK                   (0x02u)
# define CRYPTO_30_CRYWRAPPER_KEYELEMENTSTATE_SEED_INV_MASK               (0xFDu)
# define CRYPTO_30_CRYWRAPPER_KEYELEMENTSTATE_VALID_MASK                  (0x01u)
# define CRYPTO_30_CRYWRAPPER_KEYELEMENTSTATE_VALID_INV_MASK              (0xFEu)

/* Macros for virtual elements */
# define Crypto_30_CryWrapper_GetKeyElementVirtualOffset(Index)           (*((uint32*)Crypto_30_CryWrapper_GetAddrKeyStorage(Crypto_30_CryWrapper_GetKeyStorageStartIdxOfKeyElements((Index))))) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# define Crypto_30_CryWrapper_SetKeyElementVirtualOffset(Index, Value)    (*((uint32*)Crypto_30_CryWrapper_GetAddrKeyStorage(Crypto_30_CryWrapper_GetKeyStorageStartIdxOfKeyElements((Index))))= (Value)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# define Crypto_30_CryWrapper_GetKeyElementVirtualRoot(Index)             (Crypto_30_CryWrapper_GetIdOfKeyElements(Crypto_30_CryWrapper_GetKeyElementInfoVirtualIdxOfKeyElementInfo(Crypto_30_CryWrapper_GetKeyElementInfoIdxOfKeyElements((Index))))) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# define Crypto_30_CryWrapper_IsKeyElementVirtual(Index)                  (Crypto_30_CryWrapper_IsKeyElementInfoVirtualUsedOfKeyElementInfo(Crypto_30_CryWrapper_GetKeyElementInfoIdxOfKeyElements((Index)))) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/* Macros for all elements */
# define Crypto_30_CryWrapper_IsKeyElementPartial(Index)                  (Crypto_30_CryWrapper_IsPartialOfKeyElementInfo(Crypto_30_CryWrapper_GetKeyElementInfoIdxOfKeyElements((Index)))) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# define Crypto_30_CryWrapper_GetKeyElementLength(Index)                  (Crypto_30_CryWrapper_GetLengthOfKeyElementInfo(Crypto_30_CryWrapper_GetKeyElementInfoIdxOfKeyElements((Index)))) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# define Crypto_30_CryWrapper_HasKeyElementInitValue(Index)               (Crypto_30_CryWrapper_IsInitValueUsedOfKeyElementInfo(Crypto_30_CryWrapper_GetKeyElementInfoIdxOfKeyElements((Index)))) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# define Crypto_30_CryWrapper_GetKeyElementInitValueLength(Index)         (Crypto_30_CryWrapper_GetInitValueEndIdxOfKeyElementInfo(Crypto_30_CryWrapper_GetKeyElementInfoIdxOfKeyElements((elementIndex))) - Crypto_30_CryWrapper_GetInitValueStartIdxOfKeyElementInfo(Crypto_30_CryWrapper_GetKeyElementInfoIdxOfKeyElements(elementIndex))) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# define Crypto_30_CryWrapper_IsKeyElementValid(Index)                    ((Crypto_30_CryWrapper_GetKeyStorage(Crypto_30_CryWrapper_GetKeyStorageValidIdxOfKeyElements((Index))) & CRYPTO_30_CRYWRAPPER_KEYELEMENTSTATE_VALID_MASK) ==  CRYPTO_30_CRYWRAPPER_KEYELEMENTSTATE_VALID_MASK) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# define Crypto_30_CryWrapper_SetKeyElementState(Index, Value)            (Crypto_30_CryWrapper_SetKeyStorage(Crypto_30_CryWrapper_GetKeyStorageValidIdxOfKeyElements((Index)), (Value))) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# define Crypto_30_CryWrapper_GetKeyElementState(Index)                   (Crypto_30_CryWrapper_GetKeyStorage(Crypto_30_CryWrapper_GetKeyStorageValidIdxOfKeyElements((Index)))) /* PRQA S 3453 */ /* MD_MSR_19.7 ) */
# define Crypto_30_CryWrapper_ClearKeyElementStateByMask(Index, Mask)     (Crypto_30_CryWrapper_SetKeyElementState((Index), (uint8)(Crypto_30_CryWrapper_GetKeyElementState((Index)) & (Mask))))  /* PRQA S 3453 */ /* MD_MSR_19.7 ) */
# define Crypto_30_CryWrapper_SetKeyElementStateByMask(Index, Mask)       (Crypto_30_CryWrapper_SetKeyElementState((Index), (uint8)(Crypto_30_CryWrapper_GetKeyElementState((Index)) | (Mask))))  /* PRQA S 3453 */ /* MD_MSR_19.7 ) */

# define CRYPTO_30_CRYWRAPPER_START_SEC_VAR_ZERO_INIT_8BIT
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# if (CRYPTO_30_CRYWRAPPER_DEV_ERROR_DETECT == STD_ON)
/*! Initialization state of the module */
extern VAR(uint8, CRYPTO_30_CRYWRAPPER_VAR_ZERO_INIT) Crypto_30_CryWrapper_ModuleInitialized;
# endif

# define CRYPTO_30_CRYWRAPPER_STOP_SEC_VAR_ZERO_INIT_8BIT
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

# define CRYPTO_30_CRYWRAPPER_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  Crypto_30_CryWrapper_Init()
 *********************************************************************************************************************/
/*! \brief      Initializes the Crypto Driver.
 *  \details     This function initializes the module Crypto_30_CryWrapper. It initializes all variables and sets the
 *               module state to initialized.
 *  \pre         Interrupts are disabled.
 *  \pre         Module is uninitialized.
 *  \pre         Function has been called unless Crypto_30_CryWrapper_ModuleInitialized is initialized by start-up code.
 *  \context     TASK
 *  \reentrant   FALSE
 *  \synchronous TRUE
 *  \trace       CREQ-131331
*********************************************************************************************************************/
FUNC(void, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_Init(void);

/**********************************************************************************************************************
*  Crypto_30_CryWrapper_InitMemory()
*********************************************************************************************************************/
/*! \brief      The function initializes variables, which cannot be initialized with the startup code.
*  \details     Initialize component variables at power up.
*  \pre         Module is uninitialized.
*  \context     TASK
*  \reentrant   FALSE
*  \synchronous TRUE
*********************************************************************************************************************/
FUNC(void, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_InitMemory(void);

# if (CRYPTO_30_CRYWRAPPER_VERSION_INFO_API == STD_ON)
/**********************************************************************************************************************
 *  Crypto_30_CryWrapper_GetVersionInfo()
 *********************************************************************************************************************/
/*! \brief         Returns the version information.
 *  \details       Function returns version information, vendor ID and AUTOSAR module ID of the component.
 *  \param[out]    versioninfo             Valid pointer where the version information shall be stored.
 *  \pre           -
 *  \context       TASK|ISR
 *  \reentrant     TRUE
 *  \synchronous   TRUE
*   \config        CRYPTO_30_CRYWRAPPER_VERSION_INFO_API
 *  \trace         CREQ-131329
 *********************************************************************************************************************/
FUNC(void, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_GetVersionInfo(
  P2VAR(Std_VersionInfoType, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) versioninfo);
# endif

/**********************************************************************************************************************
 *  Crypto_30_CryWrapper_ProcessJob()
 *********************************************************************************************************************/
/*! \brief         Processes the received job.
 *  \details       Performs the crypto primitive, that is configured in the job parameter.
 *  \param[in]     objectId                Holds the identifier of the Crypto Driver Object.
 *  \param[in,out] job                     Pointer to the configuration of the job. Contains structures with job and
 *                                         primitive relevant information but also pointer to result buffers.
 *  \return        E_OK                    Request successful.
 *                 E_NOT_OK                Request failed.
 *                 CRYPTO_E_BUSY           Request failed, Crypto Driver Object is busy.
 *                 CRYPTO_E_KEY_NOT_VALID  Request failed, the key is not valid.
 *                 CRYPTO_E_QUEUE_FULL     Request failed, the queue is full.
 *                 CRYPTO_E_SMALL_BUFFER   Request failed, the provided buffer is too small to store the result.
 *  \pre           -
 *  \context       TASK
 *  \reentrant     TRUE
 *  \synchronous   TRUE|FALSE
 *  \trace         CREQ-131340
 *********************************************************************************************************************/
FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_ProcessJob(
  uint32 objectId,
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) job);

/**********************************************************************************************************************
 *  Crypto_30_CryWrapper_CancelJob()
 *********************************************************************************************************************/
/*! \brief         Cancels the received job.
 *  \details       This interface removes the provided job from the queue and cancels the processing of the job if possible.
 *  \param[in]     objectId                Holds the identifier of the Crypto Driver Object.
 *  \param[in,out] job                     Pointer to the configuration of the job. Contains structures with user and
 *                                         primitive relevant information.
 *  \return        E_OK                    Request successful, job has been removed.
 *                 E_NOT_OK                Request failed, job could not be removed.
 *  \pre           -
 *  \note          Cancel API not supported by Cry wrapper.
 *  \context       TASK
 *  \reentrant     TRUE
 *  \synchronous   TRUE
 *********************************************************************************************************************/
FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_CancelJob(
  uint32 objectId,
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) job);

# define CRYPTO_30_CRYWRAPPER_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*!
* \exclusivearea CRYPTO_30_CRYWRAPPER_EXCLUSIVE_AREA_0
* Ensures consistency of global RAM variables.
* \protects DriverObjectState, Queue and Lock variables.
* \usedin Crypto_30_CryWrapper_MainFunction, Crypto_30_CryWrapper_CancelJob, Crypto_30_CryWrapper_ProcessJob
* \exclude -
* \length SHORT in Crypto_30_CryWrapper_MainFunction, Crypto_30_CryWrapper_ProcessJob and Crypto_30_CryWrapper_CancelJob.
* \endexclusivearea

* \exclusivearea CRYPTO_30_CRYWRAPPER_EXCLUSIVE_AREA_1
* Ensures consistency of global RAM variables. Only necessary if 32-bit access of variables is non-atomic.
* \protects Lock variables.
* \usedin Crypto_30_CryWrapper_Process
* \exclude -
* \length SHORT as only one operation is secured.
* \endexclusivearea

* \exclusivearea CRYPTO_30_CRYWRAPPER_EXCLUSIVE_AREA_2
* Ensures consistency of reading key elements against a parallel key manipulation.
* \protects Key reading.
* \usedin Crypto_30_CryWrapper_Process, Crypto_30_CryWrapper_KeyElementGet, Crypto_30_CryWrapper_KeyDerive, Crypto_30_CryWrapper_KeyExchangeCalcSecret
* \exclude Crypto_30_CryWrapper_KeyElementSet, Crypto_30_CryWrapper_KeyCopy, Crypto_30_CryWrapper_KeyElementCopy, Crypto_30_CryWrapper_KeyDerive, Crypto_30_CryWrapper_KeyGenerate, Crypto_30_CryWrapper_KeyExchangeCalcPubVal, Crypto_30_CryWrapper_KeyExchangeCalcSecret
* \length LONG in all functions since key is copied and time depends on the length of the key.
* \endexclusivearea
*/

#endif /* CRYPTO_30_CRYWRAPPER_H */
/**********************************************************************************************************************
 *  END OF FILE: CRYPTO_30_CRYWRAPPER.H
 *********************************************************************************************************************/
