/*----------------------------------------------------------------------------*/
/**
*  \file
*
*  \brief       BMW DcmFbl_UploadServices.c
*
*  This file contains the implementation of the BMW DcmFbl_UploadServices
*  for usage in the BMW AUTOSAR Core Example.
*
*  \project     BMW AUTOSAR Core
*
*  \par         To be changed by user:
*               [yes]
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

#ifndef I_KNOW_THAT_THIS_CODE_IS_NOT_FOR_PRODUCTION
#error "the program must not be used in connection with series production"
#endif

#include "DcmFbl_UploadServices.h"
#include "Dcm_Lcfg.h"
#include "Prog_GenericRequestDownload.h"
#include "Prog_Internal.h"
#include "flashdrv.h"


/* ================================================================================================================= */
/* Type Definitions */
/* ================================================================================================================= */
/* states for upload process */
typedef uint8 DcmFbl_UploadStateType;
#define DCM_FBL_UPLOAD_STATE_IDLE               0x00
#define DCM_FBL_UPLOAD_STATE_WAIT_DATA          0x01
#define DCM_FBL_UPLOAD_STATE_WRITE_PENDING      0x02
#define DCM_FBL_UPLOAD_STATE_FINALIZE           0x03

/* control data for upload process */
typedef struct DcmFbl_UploadDataType_tag
{
    uint32                 Address;             /* address where next data block is written */
    uint32                 DataSize;            /* overall number of bytes to be received */
    uint32                 BlockSize;           /* number of bytes to be received in one block */
    uint32                 BytesProcessed;      /* number of bytes already received */
    uint8                  SeqCnt;              /* block sequence counter */
    boolean                UseCompression;      /* is compression used or not? */
    DcmFbl_UploadStateType UploadState;         /* current state of the upload process */
} DcmFbl_UploadDataType;



/* ================================================================================================================= */
/* Global Variables */
/* ================================================================================================================= */
VAR(DcmFbl_UploadDataType, DCM_VAR_NOINIT)  DcmFbl_UploadData;


/* ================================================================================================================= */
/* Macro definitions */
/* ================================================================================================================= */
/* macros to evaluate ALFID parameter (Length of the memorySize and memoryAddress) */
# define DcmFbl_GetMemBlockSizeLength(formatByte)       (uint8)(((formatByte) >> 4) & 0x0Fu)
# define DcmFbl_GetMemBlockAddrLength(formatByte)       (uint8)((formatByte) & 0x0Fu)



/* ================================================================================================================= */
/* Function Prototypes */
/* ================================================================================================================= */
static FUNC(uint32, DCM_CODE) DcmFbl_MemAccByteStream2AtomicData(Dcm_MsgType byteStream, uint8_least len);



/* ================================================================================================================= */
/* Implementation */
/* ================================================================================================================= */
/*--------------------------------------------------------------------------------------------------------------------*/
static FUNC(uint32, DCM_CODE) DcmFbl_MemAccByteStream2AtomicData(Dcm_MsgType byteStream, uint8_least len)
    /*--------------------------------------------------------------------------------------------------------------------*/
{
    /* convert a byte stream to a numeric value, e.g. merge 4 single bytes to a 32bit value */
    uint32 result = 0;
    while(len != 0)
    {
        len--;
        result <<= 8;
        result |= *byteStream;
        byteStream = &byteStream[1]; /* ptr++ */
    }
    return result;
}



/*--------------------------------------------------------------------------------------------------------------------*/
FUNC(void, DCM_CODE) DcmFbl_Init(void)
    /*--------------------------------------------------------------------------------------------------------------------*/
{
    DcmFbl_UploadData.UploadState        = DCM_FBL_UPLOAD_STATE_IDLE;
    DcmFbl_UploadData.Address            = 0;
    DcmFbl_UploadData.DataSize           = 0;
    DcmFbl_UploadData.BlockSize          = 0;
    DcmFbl_UploadData.BytesProcessed     = 0;
    DcmFbl_UploadData.SeqCnt             = 0;
    DcmFbl_UploadData.UseCompression     = FALSE;
}



/*--------------------------------------------------------------------------------------------------------------------------------*/
# if  (DCM_DCM_AR_VERSION == DCM_DCM_AR_VERSION_421)
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) DcmFbl_Service34_Processor(Dcm_OpStatusType opStatus, Dcm_MsgContextPtrType pMsgContext)
#else if (DCM_DCM_AR_VERSION == DCM_DCM_AR_VERSION_422)
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) DcmFbl_Service34_Processor(Dcm_OpStatusType opStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_NegativeResponseCodePtrType ErrorCode)
#endif
    /*--------------------------------------------------------------------------------------------------------------------------------*/
{
    Dcm_NegativeResponseCodeType nrc = DCM_E_POSITIVERESPONSE;
    uint8         memAddrLength;     /* number of bytes to be used for address parameter (UDS: addressAndLengthFormatIdentifier ) */
    uint8         memSizeLength;     /* number of bytes to be used for block size parameter (UDS: addressAndLengthFormatIdentifier ) */
    uint32        memAddress;        /* value of block size parameter (UDS: memoryAddress) */
    uint32        memSize;           /* value of block address parameter (UDS: memorySize) */
    uint32        blockLength;       /* block size to by used (UDS: maxNumberOfBlockLength) */
    Std_ReturnType result;


    switch (DcmFbl_UploadData.UploadState)
    {
        case DCM_FBL_UPLOAD_STATE_IDLE:
            /* no upload in progress; service $34 is allowed */

            /* assure that parameters: FI, ALFID and at least one byte MEM_ADDRESS and SIZE are available in the request */
            if(pMsgContext->reqDataLen >= 0x4u)
            {
                /* evaluate and verify addressAndLengthFormatIdentifier parameter (ALFID) */
/*                memAddrLength = DcmFbl_GetMemBlockAddrLength(pMsgContext->reqData[1]);
                memSizeLength = DcmFbl_GetMemBlockSizeLength(pMsgContext->reqData[1]);
                if( (memAddrLength >= 0x01u) && (memAddrLength <= 0x04u) &&
                    (memSizeLength >= 0x01u) && (memSizeLength <= 0x04u) )  BACFIX */
                {
                    /* get values of address and size parameters */
                    memAddress = DcmFbl_MemAccByteStream2AtomicData(&pMsgContext->reqData[2], 4);
                    memSize    = DcmFbl_MemAccByteStream2AtomicData(&pMsgContext->reqData[2 + 4], 4);
                    blockLength = (uint32)((Dcm_CfgNetBufferInfo->Size)-254); /* MAGIC TBD */

                    /* compression status; 0 = no compression */
                    DcmFbl_UploadData.UseCompression = (boolean)(pMsgContext->reqData[0] != 0x00); 

                    /* execute callback to notify application and get block length */
                    result = Dcm_ProcessRequestDownload(opStatus,
                                                        pMsgContext->reqData[0], /* FI byte */
							/* pMsgContext->reqData[1],  */
                                                        memAddress,
                                                        memSize,
                                                        blockLength,
                                                        &nrc);
                    switch(result)
                    {
                        case DCM_E_OK:
                            /* prepare positive response */
                            pMsgContext->resData[0] = 0x40u; /* BMW: 4 bytes are used for block length */
                            pMsgContext->resDataLen += 5u;   /* add 5 bytes of response 1 for LFI and 4 for blockLength */
                            pMsgContext->resData[1] = Dcm_UtiGetHiHiByte(blockLength);
                            pMsgContext->resData[2] = Dcm_UtiGetHiLoByte(blockLength);
                            pMsgContext->resData[3] = Dcm_UtiGetLoHiByte(blockLength);
                            pMsgContext->resData[4] = Dcm_UtiGetLoLoByte(blockLength);
                            /* send final positive response */

                            /* set upload state variables */
                            DcmFbl_UploadData.Address            = memAddress;
                            DcmFbl_UploadData.DataSize           = memSize;
                            DcmFbl_UploadData.BlockSize          = blockLength;
                            DcmFbl_UploadData.BytesProcessed     = 0;
                            DcmFbl_UploadData.SeqCnt             = 1;
                            DcmFbl_UploadData.UploadState        = DCM_FBL_UPLOAD_STATE_WAIT_DATA;
                            break;

                        case DCM_E_PENDING:            
                            return DCM_E_PENDING;
                            /* Note: additional state for pending not implemented. Although the parameter checks could be skipped
                             * in such a state, additional global variables would be required to store the parameter values evaluated
                             * during the initial call. This will unnecessarily increase RAM and ROM usage as well as code complexity.
                             */

                        default:
                            /* at the end the nrc will be set */
                            break;
                    }
                }
/*                else
                {
                    nrc = DCM_E_REQUESTOUTOFRANGE;
                } BACFIX */
            }
            else
            {
                nrc = DCM_E_INCORRECTMESSAGELENGTHORINVALIDFORMAT;
            }
            break;

        default:
            /* upload process is already running */
            nrc = DCM_E_CONDITIONSNOTCORRECT;
            break;
    }


    Dcm_ExternalSetNegResponse(pMsgContext, nrc);
    return DCM_E_PROCESSINGDONE;
}




/*--------------------------------------------------------------------------------------------------------------------------------*/
# if  (DCM_DCM_AR_VERSION == DCM_DCM_AR_VERSION_421)
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) DcmFbl_Service36_Processor(Dcm_OpStatusType opStatus, Dcm_MsgContextPtrType pMsgContext)
#else if (DCM_DCM_AR_VERSION == DCM_DCM_AR_VERSION_422)
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) DcmFbl_Service36_Processor(Dcm_OpStatusType opStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_NegativeResponseCodePtrType ErrorCode)
#endif
    /*--------------------------------------------------------------------------------------------------------------------------------*/
{
    Dcm_NegativeResponseCodeType  nrc = DCM_E_POSITIVERESPONSE;
    Dcm_ReturnWriteMemoryType     result;
    boolean                       writeOk = FALSE;

    switch (DcmFbl_UploadData.UploadState)
    {
        case DCM_FBL_UPLOAD_STATE_WAIT_DATA:
            /* upload process has been started; evaluate data and parameters */

            /* assure number of parameters bytes: SeqCnt + data buffer with block size */
            if(pMsgContext->reqDataLen <= (1 + DcmFbl_UploadData.BlockSize) )
            {
                /* verify sequence counter */
                if (pMsgContext->reqData[0] == DcmFbl_UploadData.SeqCnt)
                {
                    /* for last block, the block size may be smaller than for the other blocks */
                    if (pMsgContext->reqDataLen < (1 + DcmFbl_UploadData.BlockSize))
                    {
                        /* adapt block size */
                        DcmFbl_UploadData.BlockSize = pMsgContext->reqDataLen - 1;
                    }

                    /* ready to write data */
                    result = Dcm_WriteMemory(opStatus,
                                             0,                           /* memory identifier (not used) */
                                             DcmFbl_UploadData.Address,
                                             DcmFbl_UploadData.BlockSize,
                                             &(pMsgContext->resData[1]),
											 &nrc);
                    switch(result)
                    {
                        case DCM_WRITE_OK:
                            /* prepare positive response (at end of function) */
                            writeOk = TRUE;
                            break;

                        case DCM_WRITE_FORCE_RCRRP:	/* ##Ls auch dieser Status ist erlaubt, wird in Prog gleichbehandelt wie Pending */
                            DcmFbl_UploadData.UploadState = DCM_FBL_UPLOAD_STATE_WRITE_PENDING;
                            return DCM_E_FORCE_RCRRP;
                        case DCM_WRITE_PENDING:
                            DcmFbl_UploadData.UploadState = DCM_FBL_UPLOAD_STATE_WRITE_PENDING;
                            return DCM_E_PENDING;
                            /* break; */

                        default:
                            //nrc = DCM_E_GENERALPROGRAMMINGFAILURE;
                            break;
                    }
                }
                else
                {
                    /*@@@iwu, 2012-11-08 start:  FP5_5392: The programming station may repeat a TransferData request with the current or previous BSC without the control unit being able to send a negative response for this reason.*/
                    uint8 seqCounterDiff;
                    if(DcmFbl_UploadData.SeqCnt > pMsgContext->reqData[0])
                    {
                        seqCounterDiff = DcmFbl_UploadData.SeqCnt - pMsgContext->reqData[0];
                    }
                    else
                    {
                        seqCounterDiff = (uint8)0xFFu - pMsgContext->reqData[0] + DcmFbl_UploadData.SeqCnt;
                    }

                    if( seqCounterDiff == 1u)  
                    {
                        /* accept the last two sequence counters and send answer */
						            pMsgContext->resDataLen += 1u;

                    }
                    else /*@@@iwu, 2012-11-08 end */
                    {
                        /* signalize an error */
                        nrc = DCM_E_WRONGBLOCKSEQUENCECOUNTER;
                    }
                }
            }
            else
            {
                /*@@@iwu, 2012-10-23: Prog component must be called anyway to set the subsession, but use DCM_CANCEL to signalize an error */
                result = Dcm_WriteMemory(DCM_CANCEL,
                                         0,                           /* memory identifier (not used) */
                                         DcmFbl_UploadData.Address,   /* don't care due to DCM_CANCEL */
                                         DcmFbl_UploadData.BlockSize, /* don't care due to DCM_CANCEL */
                                         &(pMsgContext->resData[1]),   /* don't care due to DCM_CANCEL */
                                         &nrc); /* don't care due to DCM_CANCEL */

                /* buffer too big */
                //nrc = DCM_E_INCORRECTMESSAGELENGTHORINVALIDFORMAT;
            }
            break;

        case DCM_FBL_UPLOAD_STATE_WRITE_PENDING:
            /* write request is pending; try again */
            result = Dcm_WriteMemory(opStatus,
                                     0,                           /* memory identifier (not used) */
                                     DcmFbl_UploadData.Address,
                                     DcmFbl_UploadData.BlockSize,
                                     &(pMsgContext->resData[1]),
									 &nrc);
            switch(result)
            {
                case DCM_WRITE_OK:
                    /* prepare positive response (at end of function) */
                    writeOk = TRUE;
                    break;

                case DCM_WRITE_FORCE_RCRRP:	/* ##Ls auch dieser Status ist erlaubt, wird in Prog gleichbehandelt wie Pending */
                    return DCM_E_FORCE_RCRRP;
                case DCM_WRITE_PENDING:
                    return DCM_E_PENDING;
                    /* break; */

                default:
                    //nrc = DCM_E_GENERALPROGRAMMINGFAILURE;
                    break;
            }
            break;


        default:
            /*@@@iwu, 2012-10-23: Prog component must be called anyway to set the subsession, but use DCM_CANCEL to signalize an error */
            result = Dcm_WriteMemory(DCM_CANCEL,
                                     0,                           /* memory identifier (not used) */
                                     DcmFbl_UploadData.Address,   /* don't care due to DCM_CANCEL */
                                     DcmFbl_UploadData.BlockSize, /* don't care due to DCM_CANCEL */
                                     &(pMsgContext->resData[1]),  /* don't care due to DCM_CANCEL */
									 &nrc);

            /* upload process is not started or upload is already completed */
            //nrc = DCM_E_REQUESTSEQUENCEERROR;
            break;
    }


    if (writeOk == TRUE)
    {
        /* write finished; prepare positive response */
        pMsgContext->resData[0] = DcmFbl_UploadData.SeqCnt;
        pMsgContext->resDataLen += 1u;
        /* send final positive response */

        /* set upload state variables */
        DcmFbl_UploadData.SeqCnt++;
        DcmFbl_UploadData.Address += DcmFbl_UploadData.BlockSize;
        DcmFbl_UploadData.BytesProcessed  += DcmFbl_UploadData.BlockSize;

        if (DcmFbl_UploadData.BytesProcessed >= DcmFbl_UploadData.DataSize)
        {
            /* all bytes have been received; finalize upload */
            DcmFbl_UploadData.UploadState = DCM_FBL_UPLOAD_STATE_FINALIZE;
        }
        else
        {
            /* not all bytes received yet; wait for next block */
            DcmFbl_UploadData.UploadState = DCM_FBL_UPLOAD_STATE_WAIT_DATA;
        }
    }


    Dcm_ExternalSetNegResponse(pMsgContext, nrc);
    return DCM_E_PROCESSINGDONE;
}


/*--------------------------------------------------------------------------------------------------------------------------------*/
# if  (DCM_DCM_AR_VERSION == DCM_DCM_AR_VERSION_421)
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) DcmFbl_Service37_Processor(Dcm_OpStatusType opStatus, Dcm_MsgContextPtrType pMsgContext)
#else if (DCM_DCM_AR_VERSION == DCM_DCM_AR_VERSION_422)
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) DcmFbl_Service37_Processor(Dcm_OpStatusType opStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_NegativeResponseCodePtrType ErrorCode)
#endif
    /*--------------------------------------------------------------------------------------------------------------------------------*/
{
    Dcm_NegativeResponseCodeType nrc = DCM_E_POSITIVERESPONSE;
    Std_ReturnType result;

    switch (DcmFbl_UploadData.UploadState)
    {
        case DCM_FBL_UPLOAD_STATE_WAIT_DATA:
	  /* If data is uploaded uncompressed: data not received completely, this is handled by BMW module Prog_RequestTransferExit --> fallthrough */
	  /* else: compression is used, $37 is also allowed when waiting for data to finalize transfer --> fallthrough */

        case DCM_FBL_UPLOAD_STATE_FINALIZE:
            /* all data received; waiting for upload process termination */
            result = Dcm_ProcessRequestTransferExit(opStatus,
                                                    NULL_PTR, /* parameter record (not used) */
                                                    0,        /* parameter record size (not used) */
                                                    &nrc);

            switch(result)
            {
                case DCM_E_OK:
                    DcmFbl_UploadData.UploadState = DCM_FBL_UPLOAD_STATE_IDLE;
                    /* send final positive response */
                    break;

                case DCM_E_PENDING:
                    return DCM_E_PENDING;
                    /* Note: additional state not necessary, as no parameters checks need to be skipped */
                    break;

                default:
                    /* at the end the nrc will be set */
                    break;
            }
            break;

        default:
            /* upload process is not running or not yet finished */
            /*@@@iwu nrc = DCM_E_REQUESTSEQUENCEERROR;*/
            /*@@@iwu, 2012-12-24: forward to Prog, but use DCM_CANCEL to signalize an error */
            Dcm_ProcessRequestTransferExit(DCM_CANCEL,
                                           NULL_PTR, /* parameter record (not used) */
                                           0,        /* parameter record size (not used) */
                                           &nrc);


            break;
    }


    Dcm_ExternalSetNegResponse(pMsgContext, nrc);
    return DCM_E_PROCESSINGDONE;
}
