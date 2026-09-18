/****************************************************************
*
*  Filename:      D:\usr\usage\Delivery\CBD17x\CBD1700369\D04\external\BSW\Flash\build\..\flashrom.h
*  Project:       Exported definition of C-Array Flash-Driver
*  File created:  Wed Jan 10 14:38:20 2018

*
****************************************************************/

#ifndef __FLASHDRV__
#define __FLASHDRV__
#define FLASHDRV_GEN_RAND 5432

#define FLASHDRV_NUMBLOCKS 1

#define FLASHDRV_DECRYPTVALUE	0xCA
#define FLASHDRV_DECRYPTDATA(a)   (unsigned char)((unsigned char)a ^ (unsigned char)FLASHDRV_DECRYPTVALUE)
#define FLASHDRV_START_SEC_CONST_EXPORT
#include "memmap.h"

#define FLASHDRV_BLOCK0_ADDRESS	0xFEDE0000
#define FLASHDRV_BLOCK0_LENGTH	0x19EC
#define FLASHDRV_BLOCK0_CHECKSUM	0x9ACCu

V_MEMROM0 extern V_MEMROM1 unsigned char V_MEMROM2 flashDrvBlk0[FLASHDRV_BLOCK0_LENGTH];

#define FLASHDRV_STOP_SEC_CONST_EXPORT
#include "memmap.h"


#endif    /* #ifdef __FLASHDRV__ */

