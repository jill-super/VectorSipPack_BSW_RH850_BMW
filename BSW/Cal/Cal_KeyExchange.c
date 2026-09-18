/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2015 by Vector Informatik GmbH.                                                  All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  Cal_KeyExchange.c
 *      Project:  SysService_AsrCal
 *       Module:  MICROSAR Crypto Abstraction Library (Cal)
 *    Generator:  -
 *
 *  Description:  This module implements the Crypto Abstraction Layer to perform
 *                cryptographic routine. The CAL provides synchronous services
 *                to enable a unique access to basic cryptographic functionalities
 *                for all software modules and software components.
 *
 *  Limitation to the Autosar specification:
 *                This implementation provides only a sub-set of the functionality
 *                as specified in the CAL_SWS of Autosar.
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Refer to the module's header file (Cal.h).
 *
 *  FILE VERSION
 *  -------------------------------------------------------------------------------------------------------------------
 *  Refer to the VERSION CHECK below.
 *********************************************************************************************************************/

#define CAL_KEYEXCHANGE_SOURCE
/**********************************************************************************************************************
*  INCLUDES
**********************************************************************************************************************/
#include "Cal.h"

/**********************************************************************************************************************
 *  VERSION CHECK
 *********************************************************************************************************************/
/* vendor specific version information is BCD coded */
#if (  (CAL_SW_MAJOR_VERSION != (0x02)) \
    || (CAL_SW_MINOR_VERSION != (0x01)) \
    || (CAL_SW_PATCH_VERSION != (0x02)) )
# error "Vendor specific version numbers of Cal_KeyExchange.c and Cal.h are inconsistent"
#endif

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/* PRQA S 3453 7 */ /* MD_CAL_3453 */
#ifndef CAL_DUMMYSTATEMENT
# if (CAL_USE_DUMMY_STATEMENT == STD_ON)
#  define CAL_DUMMYSTATEMENT(x) (void)(x)
# else
#  define CAL_DUMMYSTATEMENT(x)
# endif
#endif

/**********************************************************************************************************************
 *  LOCAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/
#if ( CAL_NUMBER_OF_KEY_EXCHANGE_CALC_SECRET_CONFIGS != 0 )

typedef struct
{
  Cal_AlignType Buffer[CAL_KEYEXCHANGECALCSECRET_CONTEXT_BUFFER_SIZE - 1]; /* Generator added one additional element for status */
  Cal_AlignType Status;
} Cal_KeyExchangeBufStruct;

#endif /* ( CAL_NUMBER_OF_KEY_EXCHANGE_CALC_SECRET_CONFIGS != 0 ) */

/**********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 **********************************************************************************************************************/
#define CAL_START_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#if ( CAL_NUMBER_OF_KEY_EXCHANGE_CALC_SECRET_CONFIGS != 0 )
STATIC FUNC(P2CONST(Cal_KeyExchangeCalcSecretConfigType, AUTOMATIC, CAL_APPL_DATA), CAL_CODE) Cal_KeyExchangeGetCfg(Cal_ConfigIdType cfgId);
#endif /* ( CAL_NUMBER_OF_KEY_EXCHANGE_CALC_SECRET_CONFIGS != 0 ) */

/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 **********************************************************************************************************************/

#if ( CAL_NUMBER_OF_KEY_EXCHANGE_CALC_SECRET_CONFIGS != 0 )
/**********************************************************************************************************************
  Cal_KeyExchangeGetCfg
**********************************************************************************************************************/
STATIC FUNC(P2CONST(Cal_KeyExchangeCalcSecretConfigType, AUTOMATIC, CAL_APPL_DATA), CAL_CODE) Cal_KeyExchangeGetCfg(Cal_ConfigIdType cfgId)
{
  P2CONST(Cal_KeyExchangeCalcSecretConfigType, AUTOMATIC, CAL_APPL_DATA) calRtn;
  uint8 i;

  calRtn = NULL_PTR;

  for(i = 0; i < CAL_NUMBER_OF_KEY_EXCHANGE_CALC_SECRET_CONFIGS; i++)
  {
    if(cfgId == Cal_KeyExchangeCalcSecretConfig[i].ConfigId)
    {
      calRtn = &Cal_KeyExchangeCalcSecretConfig[i];
      break;
    }
  }

  return calRtn;
}
#endif

/**********************************************************************************************************************
*  GLOBAL FUNCTIONS
**********************************************************************************************************************/

#if ( ( CAL_DISABLE_NOT_USED_APIS == STD_OFF ) || ( CAL_NUMBER_OF_KEY_EXCHANGE_CALC_SECRET_CONFIGS != 0 ) )
/***********************************************************************************************************************
*  Cal_KeyExchangeCalcSecretStart
**********************************************************************************************************************/
/*! \brief                    This function shall be used to start the public value calculation service of the CAL
*                             module.
*  \param[in]  cfgId          Holds the identifier of the CAL module configuration that has to be used during the key
*                             exchange.
*  \param[out] contextBuffer  Holds the pointer to the buffer in which the context of this service can be stored.
*  \param[in]  basePtr        Holds a pointer to the base information known to both users of the key exchange protocol.
*  \param[in/out] publicValueLengthPtr  Holds a pointer to the memory location in which the length information is
*                             stored. On calling this function this parameter shall contain the  size of the buffer
*                             provided by publicValuePtr. On returning from this function the actual length of the
*                             calculated public value shall be stored.
*  \return CAL_E_OK           - Request successful
*  \return CAL_E_NOT_OK       - Request failed
*  \return CAL_E_SMALL_BUFFER - The provided buffer is too small to store the result.
*  \description               This function shall be used to start the public value calculation service of the CAL
*                             module.
*                             The function shall initialize the context buffer given by "contextBuffer",
*                             call the function Cpl_<Primitive>Start of the primitive which is identified
*                             by the "cfgId" and return the value returned by that function.
*                             If Cpl_<Primitive>Start returned successfully, the function shall set the
*                             state of this service to "active", and store this state in the context buffer.
**********************************************************************************************************************/
FUNC(Cal_ReturnType, CAL_CODE) Cal_KeyExchangeCalcSecretStart(Cal_ConfigIdType cfgId,
                                                              Cal_KeyExchangeCalcSecretCtxBufType contextBuffer,
                                                              P2CONST(Cal_KeyExchangeBaseType, AUTOMATIC, CAL_APPL_DATA) basePtr,
                                                              P2CONST(Cal_KeyExchangePrivateType, AUTOMATIC, CAL_APPL_DATA) privateValuePtr)
{
  Cal_ReturnType calRtn = CAL_E_NOT_OK;
# if ( CAL_NUMBER_OF_KEY_EXCHANGE_CALC_SECRET_CONFIGS != 0 )
  P2CONST(Cal_KeyExchangeCalcSecretConfigType, AUTOMATIC, CAL_APPL_DATA) keyExchangeCfg;
  Cal_KeyExchangeBufStruct* context;

  /* PRQA S 0310 1 */ /* MD_CAL_11.4 */
  context   = ((Cal_KeyExchangeBufStruct*)contextBuffer);  /* Casted Context Buffer */
  keyExchangeCfg = Cal_KeyExchangeGetCfg(cfgId);               /* Pointer to Specific Service Configuration */

  if((keyExchangeCfg != NULL_PTR) && (basePtr != NULL_PTR) && (privateValuePtr != NULL_PTR))
  {
    /* Call the configured Primitive Function */
    calRtn = keyExchangeCfg->PrimitiveStartFct(keyExchangeCfg->PrimitiveConfigPtr,
                                               context->Buffer,
                                               basePtr,
                                               privateValuePtr);
  }

  if(calRtn == CAL_E_OK)
  {
    context->Status = CAL_ACT_ACTIVE;                                               /* PRQA S 0310 */ /* MD_CAL_11.4 */
  }
# else
  CAL_DUMMYSTATEMENT(cfgId);                                                        /* PRQA S 3112 */ /* MD_CAL_3112 */
  CAL_DUMMYSTATEMENT(contextBuffer);                                                /* PRQA S 3112 */ /* MD_CAL_3112 */
  CAL_DUMMYSTATEMENT(basePtr);                                                      /* PRQA S 3112 */ /* MD_CAL_3112 */
  CAL_DUMMYSTATEMENT(privateValuePtr);                                              /* PRQA S 3112 */ /* MD_CAL_3112 */

# endif /* ( CAL_NUMBER_OF_KEY_EXCHANGE_CALC_SECRET_CONFIGS != 0 ) */

  return calRtn;
}

/***********************************************************************************************************************
*  Cal_KeyExchangeCalcSecretUpdate
**********************************************************************************************************************/
/*! \brief                         This function shall be used to feed the key exchange service with the public value
*                                  coming from the partner of the key exchange protocol.
*  \param[in]  cfgId               Holds the identifier of the CAL module configuration that has to be used during the
*                                  key exchange.
*  \param[in/out] contextBuffer    Holds the pointer to the buffer in which the context of this service can be
*                                  stored.
*  \param[in] partnerPublicValuePtr    Holds a pointer to the data representing the public value of the key exchange
*                                      partner.
*  \param[in] partnerPublicValueLength Contains the length of the partner value in bytes.
*  \return  CAL_E_OK               - Request successful
*  \return  CAL_E_NOT_OK           - Request failed
*  \description                    This function shall be used to feed the key exchange service with the public value
*                                  coming from the partner of the key exchange protocol.
*                                  If the service state given by the context buffer is "idle", the function has
*                                  to return with "CAL_E_NOT_OK". Otherwise, this function shall call the function
*                                  Cpl_<Primitive>Update of the primitive which is identified by the "cfgId", and
*                                  return the value returned by that function. The calculation of the shared secret is
*                                  done by the underlying primitive.
**********************************************************************************************************************/
FUNC(Cal_ReturnType, CAL_CODE) Cal_KeyExchangeCalcSecretUpdate(Cal_ConfigIdType cfgId,
                                                               Cal_KeyExchangeCalcSecretCtxBufType contextBuffer, /* PRQA S 3673 */ /* MD_CAL_16.7 */
                                                               P2CONST(uint8, AUTOMATIC, CAL_APPL_DATA) partnerPublicValuePtr,
                                                               uint32 partnerPublicValueLength)
{
  Cal_ReturnType calRtn = CAL_E_NOT_OK;
# if ( CAL_NUMBER_OF_KEY_EXCHANGE_CALC_SECRET_CONFIGS != 0 )
  P2CONST(Cal_KeyExchangeCalcSecretConfigType, AUTOMATIC, CAL_APPL_DATA) keyExchangeCfg;
  Cal_KeyExchangeBufStruct* context;

  /* PRQA S 0310 1 */ /* MD_CAL_11.4 */
  context   = ((Cal_KeyExchangeBufStruct*)contextBuffer);  /* Casted Context Buffer */
  keyExchangeCfg = Cal_KeyExchangeGetCfg(cfgId);           /* Pointer to Specific Service Configuration */

  if((keyExchangeCfg != NULL_PTR) && (partnerPublicValuePtr != NULL_PTR))
  {
    if(context->Status == CAL_ACT_ACTIVE)                                           /* PRQA S 0310 */ /* MD_CAL_11.4 */
    {
      /* Call the configured Primitive Function */
      calRtn = keyExchangeCfg->PrimitiveUpdateFct(keyExchangeCfg->PrimitiveConfigPtr,
                                                  context->Buffer,
                                                  partnerPublicValuePtr,
                                                  partnerPublicValueLength);
    }
  }
# else
  CAL_DUMMYSTATEMENT(cfgId);                                                        /* PRQA S 3112 */ /* MD_CAL_3112 */
  CAL_DUMMYSTATEMENT(contextBuffer);                                                /* PRQA S 3112 */ /* MD_CAL_3112 */
  CAL_DUMMYSTATEMENT(partnerPublicValuePtr);                                        /* PRQA S 3112 */ /* MD_CAL_3112 */
  CAL_DUMMYSTATEMENT(partnerPublicValueLength);                                     /* PRQA S 3112 */ /* MD_CAL_3112 */
# endif /* ( CAL_NUMBER_OF_KEY_EXCHANGE_CALC_SECRET_CONFIGS != 0 ) */

  return calRtn;
}

/***********************************************************************************************************************
*  Cal_KeyExchangeCalcSecretFinish
**********************************************************************************************************************/
/*! \brief                       This function shall be used to finish the key exchange service.
*  \param[in]     cfgId          Holds the identifier of the CAL module configuration that has to be used during the
*                                key exchange.
*  \param[in/out] contextBuffer  Holds the pointer to the buffer in which the context of this service can be
*                                stored.
*  \param[out] sharedSecretPtr   Holds a pointer to the memory location which will hold the result of the key exchange.
*                                If the result does not fit into the given buffer, and truncation is allowed, the
*                                result shall be truncated.
*  \param[in/out] sharedSecretLengthPtr Holds a pointer to the memory location in which the length information is
*                                stored. On calling this function this parameter shall contain the size of the buffer
*                                provided by sharedSecretPtr. On returning from this function the actual length of the
*                                computed value shall be stored.
*  \return CAL_E_OK              - Request successful
*  \return CAL_E_NOT_OK          - Request failed
*  \return CAL_E_SMALL_BUFFER    - The provided buffer is too small to store the result, and truncation was not
*                                  allowed.
*  \description           This function shall be used to finish the key exchange service.
*                         If the service state given by the context buffer is "idle", the function has to return with
*                         "CAL_E_NOT_OK".
*                         Otherwise, this function shall call the function Cpl_<Primitive>Finish of the
*                         primitive which is identified by the "cfgId", and return the value returned by
*                         that function. If Cpl_<Primitive>Finish returned successfully, the function shall
*                         set the state of this service to "idle", and store this state in the context buffer.
*                         The calculation of the shared secret is done by the underlying primitive.
**********************************************************************************************************************/
FUNC(Cal_ReturnType, CAL_CODE) Cal_KeyExchangeCalcSecretFinish(Cal_ConfigIdType     cfgId,
                                                               Cal_KeyExchangeCalcSecretCtxBufType contextBuffer,
                                                               P2VAR(uint8, AUTOMATIC, CAL_APPL_DATA) sharedSecretPtr,
                                                               P2VAR(uint32, AUTOMATIC, CAL_APPL_DATA) sharedSecretLengthPtr,
                                                               boolean TruncationIsAllowed)
{
  Cal_ReturnType calRtn = CAL_E_NOT_OK;
# if ( CAL_NUMBER_OF_KEY_EXCHANGE_CALC_SECRET_CONFIGS != 0 )
  P2CONST(Cal_KeyExchangeCalcSecretConfigType, AUTOMATIC, CAL_APPL_DATA) keyExchangeCfg;
  Cal_KeyExchangeBufStruct* context;

  /* PRQA S 0310 1 */ /* MD_CAL_11.4 */
  context   = ((Cal_KeyExchangeBufStruct*)contextBuffer);  /* Casted Context Buffer */
  keyExchangeCfg = Cal_KeyExchangeGetCfg(cfgId);           /* Pointer to Specific Service Configuration */

  if((keyExchangeCfg != NULL_PTR) && (sharedSecretPtr != NULL_PTR) && (sharedSecretLengthPtr != NULL_PTR))
  {
    if(context->Status == CAL_ACT_ACTIVE)                                           /* PRQA S 0310 */ /* MD_CAL_11.4 */
    {
      /* Call the configured Primitive Function */
      calRtn = keyExchangeCfg->PrimitiveFinishFct(keyExchangeCfg->PrimitiveConfigPtr,
                                                  context->Buffer,
                                                  sharedSecretPtr,
                                                  sharedSecretLengthPtr,
                                                  TruncationIsAllowed);
    }

    if(calRtn == CAL_E_OK)
    {
      context->Status = CAL_ACT_IDLE;                                               /* PRQA S 0310 */ /* MD_CAL_11.4 */
    }
  }
# else
  CAL_DUMMYSTATEMENT(cfgId);                                                        /* PRQA S 3112 */ /* MD_CAL_3112 */
  CAL_DUMMYSTATEMENT(contextBuffer);                                                /* PRQA S 3112 */ /* MD_CAL_3112 */
  CAL_DUMMYSTATEMENT(sharedSecretPtr);                                              /* PRQA S 3112 */ /* MD_CAL_3112 */
  CAL_DUMMYSTATEMENT(sharedSecretLengthPtr);                                        /* PRQA S 3112 */ /* MD_CAL_3112 */
  CAL_DUMMYSTATEMENT(TruncationIsAllowed);                                          /* PRQA S 3112 */ /* MD_CAL_3112 */
# endif /* ( CAL_NUMBER_OF_KEY_EXCHANGE_CALC_SECRET_CONFIGS != 0 ) */

  return calRtn;
}
#endif /* ( ( CAL_DISABLE_NOT_USED_APIS == STD_OFF ) || ( CAL_NUMBER_OF_KEY_EXCHANGE_CALC_SECRET_CONFIGS != 0 ) ) */

#if ( ( CAL_DISABLE_NOT_USED_APIS == STD_OFF ) || ( CAL_NUMBER_OF_KEY_EXCHANGE_CALC_PUB_VAL_CONFIGS != 0 ) )
/**********************************************************************************************************************
*  Cal_KeyExchangeCalcPubVal
**********************************************************************************************************************/
/*! \brief                      This function shall be used to start the public value calculation service of the CAL
*                               module.
*  \param[in]  cfgId            Holds the identifier of the CAL module configuration that has to be used during the
*                               key exchange.
*  \param[in] basePtr           Holds a pointer to the base information known to both users of the key exchange
*                               protocol.
*  \param[in] privateValuePtr   Holds a pointer to the private information known only to the current user of the key
*                               exchange protocol.
*  \param[out] publicValuePtr   Holds a pointer to the memory location which will hold the public value of the key
*                               exchange protocol.
*  \param[in/out] publicValueLengthPtr Holds a pointer to the memory location in which the length information is
*                               stored. On calling this function this parameter shall contain the size of the buffer
*                               provided by publicValuePtr. On returning from this function the actual length of the
*                               calculated public value shall be stored.
*  \return CAL_E_OK                  - Request successful
*  \return CAL_E_NOT_OK              - Request failed
*  \return CAL_E_SMALL_BUFFER        - The provided buffer is too small to store the result.
*  \description            This function shall be used to start the public value calculation service of the CAL module.
*                          The function shall call the function Cpl_<Primitive> of the primitive which is
*                          identified by the "cfgId" and return the value returned by that function.
**********************************************************************************************************************/
FUNC(Cal_ReturnType, CAL_CODE) Cal_KeyExchangeCalcPubVal(Cal_ConfigIdType cfgId,
                                                         P2CONST(Cal_KeyExchangeBaseType, AUTOMATIC, CAL_APPL_DATA) basePtr,
                                                         P2CONST(Cal_KeyExchangePrivateType, AUTOMATIC, CAL_APPL_DATA) privateValuePtr,
                                                         P2VAR(uint8, AUTOMATIC, CAL_APPL_DATA) publicValuePtr,
                                                         P2VAR(uint32, AUTOMATIC, CAL_APPL_DATA) publicValueLengthPtr)
{
  Cal_ReturnType calRtn = CAL_E_NOT_OK;
# if ( CAL_NUMBER_OF_KEY_EXCHANGE_CALC_PUB_VAL_CONFIGS != 0 )
  uint8 i;

  /* Several configurations are available, find the one associated to this configId */
  for(i = 0; i < CAL_NUMBER_OF_KEY_EXCHANGE_CALC_PUB_VAL_CONFIGS; i++)
  {
    if(cfgId == Cal_KeyExchangeCalcPubValConfig[i].ConfigId)
    {
      calRtn = Cal_KeyExchangeCalcPubValConfig[i].PrimitiveFct(Cal_KeyExchangeCalcPubValConfig[i].PrimitiveConfigPtr,
                                                               basePtr,
                                                               privateValuePtr,
                                                               publicValuePtr,
                                                               publicValueLengthPtr);
      break;
    }
  }
# else
  CAL_DUMMYSTATEMENT(cfgId);                                                      /* PRQA S 3112 */ /* MD_CAL_3112 */
  CAL_DUMMYSTATEMENT(basePtr);                                                    /* PRQA S 3112 */ /* MD_CAL_3112 */
  CAL_DUMMYSTATEMENT(privateValuePtr);                                            /* PRQA S 3112 */ /* MD_CAL_3112 */
  CAL_DUMMYSTATEMENT(publicValuePtr);                                             /* PRQA S 3112 */ /* MD_CAL_3112 */
  CAL_DUMMYSTATEMENT(publicValueLengthPtr);                                       /* PRQA S 3112 */ /* MD_CAL_3112 */
# endif /* ( CAL_NUMBER_OF_KEY_EXCHANGE_CALC_PUB_VAL_CONFIGS != 0 ) */

  return calRtn;
}
#endif /* ( CAL_NUMBER_OF_KEY_EXCHANGE_CALC_PUB_VAL_CONFIGS != 0 ) */

#define CAL_STOP_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  END OF FILE: CAL_KEYEXCHANGE.C
 *********************************************************************************************************************/
