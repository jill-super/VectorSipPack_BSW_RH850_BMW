/**********************************************************************************************************************
  FILE DESCRIPTION
-----------------------------------------------------------------------------------------------------------------------
  \file  File:  BacStartup.h
      Project:  Startup_TCU
       Module:  BAC Startup
    Generator:  -

  \brief Description:  BAC4 Startup - Modules initialization routines
**********************************************************************************************************************/

#if !defined (BRSASRINIT_H)
# define BRSASRINIT_H

#include "Compiler.h"
#include "Port.h"
#include "Fls.h"
#include "Mcu.h"




void BacStartup_InitMemory(void);
void BacStartup_InitListOne(void);

void BacStartup_NvMReadAll(void);


/**********************************************************************************************************************
 * Initialization pointers for MSR components.
 **********************************************************************************************************************/
#define DCM_INIT_POINTER     NULL_PTR
#define DEM_PREINIT_POINTER  NULL_PTR
#define CANNM_INIT_POINTER   NULL_PTR
#define IPDUM_INIT_POINTER   NULL_PTR
#define PDUR_INIT_POINTER    NULL_PTR
#define FEE_INIT_POINTER     NULL_PTR

/**********************************************************************************************************************
 * Initialization pointers for 3rd party MCAL components.
 **********************************************************************************************************************/
#define WDG_INIT_POINTER     &WdgSettingsConfig
#define MCU_INIT_POINTER     &McuModuleConfiguration
#define PORT_INIT_POINTER    &PortConfigSet
#define DIO_INIT_POINTER     &DioConfig_0
#define FLS_INIT_POINTER     &FlsConfigSet
#define ICU_INIT_POINTER     &IcuConfigSet


#endif /*BRSASRINIT_H*/
