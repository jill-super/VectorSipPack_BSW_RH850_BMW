/* include list of the callback definitions */
#ifndef NVM_INCLUDE_LIST_H__
#define NVM_INCLUDE_LIST_H__

#include "Compiler.h"
#include "Rte_Type.h"
#include "Dlog_ProgCounter.h"


extern CONST(uint8, NVM_APPL_CONST) TestStampDefaults[3];
extern CONST(Dlog_ProgCounterType, NVM_APPL_CONST) STUB_DlogProgCounterDefault;
#define TEST_STAMP_START_SEC_VAR_DATA

extern VAR(uint8, NVM_APPL_VAR) TestStampData[3];

#define TEST_STAMP_STOP_SEC_VAR_DATA
#include "MemMap.h"

void Appl_CodingInitCallback(void);

#endif /* NVM_INCLUDE_LIST_H__ */
