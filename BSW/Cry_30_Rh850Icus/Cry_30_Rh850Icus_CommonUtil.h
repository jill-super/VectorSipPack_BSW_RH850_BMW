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
/*!        \file    Cry_30_Rh850Icus_CommonUtil.h
 *        \brief    This header file implements the utils for the SHE module.
 *
 *      \details    -
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Refer to the module's header file.
 *********************************************************************************************************************/

#if !defined (CRY_30_RH850ICUS_COMMONUTIL_H)
# define CRY_30_RH850ICUS_COMMONUTIL_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
# include "Cry_30_Rh850Icus_Hw.h"
# include "Cry_30_Rh850Icus_Cfg.h"
# include "SchM_Cry_30_Rh850Icus.h"

/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 **********************************************************************************************************************/

/* PRQA S 0779 22 */ /* MD_MSR_5.1_779 */
typedef enum
{
  CRY_30_RH850ICUS_SERVICE_UNINITIALIZED = 0,
  CRY_30_RH850ICUS_SERVICE_IDLE,
  CRY_30_RH850ICUS_SERVICE_AESDECRYPT128_START,
  CRY_30_RH850ICUS_SERVICE_AESDECRYPT128_UPDATE,
  CRY_30_RH850ICUS_SERVICE_AESENCRYPT128_START,
  CRY_30_RH850ICUS_SERVICE_AESENCRYPT128_UPDATE,
  CRY_30_RH850ICUS_SERVICE_CMACAES128GEN_START,
  CRY_30_RH850ICUS_SERVICE_CMACAES128GEN_UPDATE,
  CRY_30_RH850ICUS_SERVICE_CMACAES128VER_START,
  CRY_30_RH850ICUS_SERVICE_CMACAES128VER_UPDATE,
  CRY_30_RH850ICUS_SERVICE_KEYEXTRACT_START,
  CRY_30_RH850ICUS_SERVICE_KEYEXTRACT_UPDATE,
  CRY_30_RH850ICUS_SERVICE_KEYWRAPSYM_START,
  CRY_30_RH850ICUS_SERVICE_KEYWRAPSYM_UPDATE,
  CRY_30_RH850ICUS_SERVICE_KEYWRAPSYM_FOR_PROVISION,
  CRY_30_RH850ICUS_SERVICE_RNGSEED_START,
  CRY_30_RH850ICUS_SERVICE_RNGSEED_UPDATE,
  CRY_30_RH850ICUS_SERVICE_RNGGEN_START
} Cry_30_Rh850Icus_ServiceState_Type;



/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/* General macros */
# define CRY_30_RH850ICUS_BITS_PER_BYTE                             (8u)
# define CRY_30_RH850ICUS_BYTES_PER_WORD                            (4u)
# define CRY_30_RH850ICUS_AES128_BLOCKSIZE                          (16u)
# define CRY_30_RH850ICUS_32BIT_ALIGNMENT_MASK                      (3u)
# define CRY_30_RH850ICUS_MAC_LENGTH                                (CRY_30_RH850ICUS_AES128_BLOCKSIZE)
# define CRY_30_RH850ICUS_KEYSIZE                                   (CRY_30_RH850ICUS_AES128_BLOCKSIZE)


/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 **********************************************************************************************************************/

# define CRY_30_RH850ICUS_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# if ( CRY_30_RH850ICUS_ANY_PRIMITIVE_ENABLED == TRUE)
extern VAR(Cry_30_Rh850Icus_ServiceState_Type, CRY_30_RH850ICUS_VAR_ZERO_INIT) Cry_30_Rh850Icus_ServiceState;
# endif

# define CRY_30_RH850ICUS_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define CRY_30_RH850ICUS_START_SEC_VAR_NOINIT_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# if ( CRY_30_RH850ICUS_ANY_PRIMITIVE_ENABLED == TRUE)
#  if (CRY_30_RH850ICUS_TIMEOUT_API == STD_ON)
extern VAR(Cry_SheTimeoutApiServiceType, CRY_30_RH850ICUS_VAR_NOINIT) Cry_30_Rh850Icus_TimeoutApiService;
#  endif
# endif

# if (CRY_30_RH850ICUS_INVALID_MEMORY_DETECTION == STD_ON) /* COV_CRY_INVALID_MEMORY_DETECTION */
extern VAR(uint32, CRY_30_RH850ICUS_VAR_NOINIT) Cry_30_Rh850Icus_DataBuffer[CRY_30_RH850ICUS_DATA_BUFFER_SIZE / CRY_30_RH850ICUS_BYTES_PER_WORD];
# endif
extern VAR(uint32, CRY_30_RH850ICUS_VAR_NOINIT) Cry_30_Rh850Icus_AesBlockBuffer[CRY_30_RH850ICUS_AES128_BLOCKSIZE / CRY_30_RH850ICUS_BYTES_PER_WORD];

# define CRY_30_RH850ICUS_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
# define CRY_30_RH850ICUS_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# if ( CRY_30_RH850ICUS_ANY_PRIMITIVE_ENABLED == TRUE)

/**********************************************************************************************************************
* Cry_30_Rh850Icus_ProcessKeyToWorkspace
**********************************************************************************************************************/
/*! \brief         Function process the key and stores the information for later sequences of the primitive.
 *  \details       This function checks if the key is a keyId or a plainkey. It stores the keyId for later sequences.
 *                 In case that the key is a plainkey, the key is loaded to the RAM slot.
 *  \param[in]     keyPtr     Holds a pointer to the key which has to be used for the primitive.
                              The keyPtr can either contain a plaintext key (keyPtr.length = 16) or a
                              keyId (keyPtr.length = 1).
 *  \param[out]    keyId      Pointer which gets as output the value of the keyId.
 *  \param[in]     keyIdType  Specifies in which way the keyId is interpreted (raw or mapped).
 *  \pre           None
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \note          Called by StartInternal of a primitive to process the key.
*********************************************************************************************************************/
extern FUNC(Csm_ReturnType, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_ProcessKeyToWorkspace(
  P2CONST( Csm_SymKeyType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) keyPtr,
  P2VAR( uint32, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR ) keyId,
  uint32 keyIdType);

/**********************************************************************************************************************
* Cry_30_Rh850Icus_GetExtKeyFlag
**********************************************************************************************************************/
/*! \brief         Function validates, if the key is located on the first or second keypage.
 *  \details       -
 *  \param[in]     keyId     ID of the key
 *  \param[in]     keyIdType Specifies in which way the keyId is interpreted
 *  \pre           None
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE
*********************************************************************************************************************/
extern FUNC(uint32, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_GetExtKeyFlag(uint32 keyId, uint32 keyIdType);

/**********************************************************************************************************************
 * Cry_30_Rh850Icus_CancelCommand
 **********************************************************************************************************************/
/*! \brief         Function cancels the current executing command on the SHE.
 *  \details       This function sends the Cancel command to SHE to cancel the current executing command.
 *  \pre           None
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 **********************************************************************************************************************/
extern FUNC( void, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_CancelCommand( void );

/**********************************************************************************************************************
* Cry_30_Rh850Icus_GetRawKeyId()
**********************************************************************************************************************/
/*! \brief         This function returns the raw keyId.
 *  \details       Function validates if keyIdType is a raw or mapped type and interprets the keyId.
 *  \param[in]     keyId     ID of the key
 *  \param[in]     keyIdType Specifies in which way the keyId is interpreted
 *  \pre           None
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE
*********************************************************************************************************************/
extern FUNC(uint32, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_GetRawKeyId(uint32 keyId, uint32 keyIdType);

/**********************************************************************************************************************
* Cry_30_Rh850Icus_CopyByteArrayToWordArray()
**********************************************************************************************************************/
/*! \brief         This function copies an input byte array (uint8) to an word array (uint32).
 *  \details       This function is used for a 1-to-1 memory copy of different data types.
 *  \param[in]     input     uint8 Byte array which should be copied to the output.
 *  \param[out]    output    uin32 Word array which should be filled with the input byte buffer.
 *  \param[in]     length    Length in bytes which should be used for the copy operation.
 *  \pre           None
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE
*********************************************************************************************************************/
extern FUNC(void, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_CopyByteArrayToWordArray(
  P2CONST( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) input,
  P2VAR( uint32, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) output,
  uint32 length);

/**********************************************************************************************************************
* Cry_30_Rh850Icus_CopyWordArrayToByteArray()
**********************************************************************************************************************/
/*! \brief         This function copies an input word array (uint8) to an output Byte array (uint32).
 *  \details       This function is used for a 1-to-1 memory copy of different data types.
 *  \param[in]     input     uint32 Word array which should be copied to the output.
 *  \param[out]    output    uint8 Byte array which should be filled with the input byte buffer.
 *  \param[in]     length    Length in bytes which should be used for the copy operation.
 *  \pre           None
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE
*********************************************************************************************************************/
extern FUNC(void, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_CopyWordArrayToByteArray(
  P2CONST( uint32, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) input,
  P2VAR( uint8, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) output,
  uint32 length);


# endif
# define CRY_30_RH850ICUS_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#endif /* CRY_30_RH850ICUS_COMMONUTIL_H */

/**********************************************************************************************************************
 *  END OF FILE: CRY_30_RH850ICUS_COMMONUTIL.H
 *********************************************************************************************************************/

