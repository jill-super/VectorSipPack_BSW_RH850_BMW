/*----------------------------------------------------------------------------*/
/**
*  \file
*
*  \brief       BMW DcmFbl_UploadServices.h
*
*  This file contains the implementation of the BMW DcmFbl_UploadServices
*  for usage in the BMW AUTOSAR Core Example.
*
*  \project     BMW AUTOSAR Core
*
*  \par         To be changed by user:
*               [yes]
*
*  \copyright   BMW AG 2014
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

#ifndef DCMFBL_UPLOADSERVICE_H
#define DCMFBL_UPLOADSERVICE_H

#ifndef I_KNOW_THAT_THIS_CODE_IS_NOT_FOR_PRODUCTION
#error "the program must not be used in connection with series production"
#endif

#include "Dcm.h"

/* ================================================================================================================= */
/* Type Definitions */
/* ================================================================================================================= */


/* ================================================================================================================= */
/* Function Prototypes */
/* ================================================================================================================= */
FUNC(void, DCM_CODE) DcmFbl_Init(void);


/* Implemented in Prog_RequestDownload.c */
extern FUNC(Std_ReturnType, Prog_CODE) Dcm_ProcessRequestDownload
            (
               VAR         ( Dcm_OpStatusType, AUTOMATIC )                                OpStatus,
               VAR         ( uint8,  AUTOMATIC )                                          DataFormatIdentifier,
               VAR         ( uint32, AUTOMATIC )                                          MemoryAddress,
               VAR         ( uint32, AUTOMATIC )                                          MemorySize,
               VAR         ( uint32, AUTOMATIC )                                          BlockLength,
               P2VAR       ( Dcm_NegativeResponseCodeType, AUTOMATIC, Prog_APPL_DATA )    ErrorCode
            );

/* Implemented in Prog_TransferData.c */
# if (DCM_SVC_3D_SUPPORT_ENABLED == STD_ON)
/* Function already declared in Dcm.h */
# else
extern FUNC ( Dcm_ReturnWriteMemoryType, Prog_CODE ) Dcm_WriteMemory
            (
                  VAR     ( Dcm_OpStatusType, AUTOMATIC )           OpStatus,
                  VAR     ( uint8, AUTOMATIC )                      MemoryIdentifier,
                  VAR     ( uint32, AUTOMATIC )                     MemoryAddress,
                  VAR     ( uint32, AUTOMATIC )                     MemorySize,
                  P2VAR   ( uint8, AUTOMATIC, Prog_APPL_DATA )      MemoryData
				  P2VAR   (Dcm_NegativeResponseCodeType, AUTOMATIC) ErrorCode
            );
# endif

/* Implemented in Prog_RequestTransferExit.c */
extern FUNC ( Std_ReturnType, Prog_CODE ) Dcm_ProcessRequestTransferExit
            (
               VAR        ( Dcm_OpStatusType, AUTOMATIC )                                 OpStatus,
               P2VAR      ( uint8, AUTOMATIC, Prog_APPL_DATA )                            ParameterRecord,
               VAR        ( uint32, AUTOMATIC )                                           ParameterRecordSize,
               P2VAR      ( Dcm_NegativeResponseCodeType, AUTOMATIC, Prog_APPL_DATA )     ErrorCode
            );

#endif /* DCMFBL_UPLOADSERVICE_H */
