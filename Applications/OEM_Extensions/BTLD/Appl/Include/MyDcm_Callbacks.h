/*----------------------------------------------------------------------------*/
/**
*  \file
*
*  \brief       BMW Stub MyDcm_Callbacks.h
*
*  This file contains the implementation of the BMW Stub MyDcm_Callbacks
*  for usage in the BMW AUTOSAR Core Example.
*
*  \project     BMW AUTOSAR Core
*
*  \par         To be changed by user:
*               [no]
*
*  \copyright   BMW AG 2015
*
*  \remarks
*  DISCLAIMER:
*  As the program is not fully tested and qualified for series production
*  use, the user shall not be entitled to use the program in connection
*  with any series production. BMW provides the user with the program only
*  as sample application (for testing purposes).
*
*/
/*----------------------------------------------------------------------------*/

#ifndef MYDCM_CALLBACKS_H
#define MYDCM_CALLBACKS_H

#ifndef I_KNOW_THAT_THIS_CODE_IS_NOT_FOR_PRODUCTION
#error "the program must not be used in connection with series production"
#endif

/*------------------------------------------------------------------------------
                      Include Section
-------------------------------------------------------------------------------*/

#include <Std_Types.h>                      /* AUTOSAR Standard Types         */
#include <Dcm.h>

#define DCM_START_SEC_CODE
#include <MemMap.h>

extern FUNC(Std_ReturnType, DCM_CODE) MyDcm_DcmIndication
	(
	   uint8                                                             Sid,
	   P2VAR ( uint8, AUTOMATIC, DCM_VAR_NOINIT )                               RequestData,
	   uint16                                                            DataSize,
	   uint8                                                             ReqType,
	   uint16                                                            SourceAddress,
	   P2VAR ( Dcm_NegativeResponseCodeType, AUTOMATIC, DCM_VAR_NOINIT )        ErrorCode
	);

extern FUNC(void, DCM_APPL_CODE) MyDcm_DcmConfirmation
	(
	  uint8                       SID,
	  uint8                       ReqType,
	  uint16                      SourceAddress,
	  Dcm_ConfirmationStatusType  ConfirmationStatus
	);

extern FUNC(Std_ReturnType, DCM_CODE) MyDcm_Bswm_DefaultSessionEntered( void );
extern FUNC(Std_ReturnType, DCM_CODE) MyDcm_Bswm_ExtendedSessionEntered( void );
extern FUNC(Std_ReturnType, DCM_CODE) MyDcm_Bswm_ProgrammingSessionEntered( void );

extern FUNC(Std_ReturnType, DCM_CODE) MyDcm_InitiateReset( void );

#define DCM_STOP_SEC_CODE
#include <MemMap.h>

#endif /* MYDCM_CALLBACKS_H */
