/*------------------------------------------------------------------------------
|                                                                              |
|  Copyright (C) BMW AG 2015                                                |
|                                                                              |
|  MODULE    : Bmhw_StartupAsm_Cfg.h						 	 |
|                                                                              |
|  PROJECT   : BMW AUTOSAR Core                                                |
|                                                                              |
|  PURPOSE   : Modular make environment. Contains configuration parameters     |
|              which are exclusively dedicated to the interrupt dispatcher     |
|              module.                                                         |
|              The interrupt dispatcher is a sub component of the              |
|              bootloader.                                                     |
|                                                                              |
|  REMARKS   : ---                                                             |
|                                                                              |
|                                                                              |
|------------------------------------------------------------------------------|
|  DISCLAIMER:                                                                 |
|  As the program is not fully tested and qualified for series production      |
|  use, the user shall not be entitled to use the program in connection        |
|  with any series production. BMW provides the user with the program only     |
|  as sample application (for testing purposes).                               |
|													 |
-------------------------------------------------------------------------------*/

#ifndef BMHW_STARTUP_ASM_CFG_H
#define BMHW_STARTUP_ASM_CFG_H

#ifndef I_KNOW_THAT_THIS_CODE_IS_NOT_FOR_PRODUCTION
#error "the program must not be used in connection with series production"
#endif

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/

/* empty */


/*******************************************************************************
**                      Global Macros                                         **
*******************************************************************************/

/*
    INTDISPATCH_BOOT_FLAGS defines the init value of RCHW.
    Bit WTE = 1 (Bit 2): Watchdog timer enabled.
    Bit PS0 = 0 (Bit 1): Port size for external boot mode = 32 bit.
                         NOTE: The BAC2.1 uses internal boot mode by default.
    BIT VLE = 1 (Bit 0): enable VLE
    NOTE: The size of BOOT_FLAGS must not exceed 8 bits.
*/
#define INTDISPATCH_BOOT_FLAGS        0x05

/*
    INTDISPATCH_STARTUP_MSR defines the init value of the MSR.
    Bit CE =  1 (Bit 14): Critical interrupt enable. Enables all critical
                          interupts e.g. machine check interrupt and debug
                          interrupt.
    Bit ME =  1 (Bit 19): Enable machine check functionality e.g. access to
                          invalid address.
    Bit DE =  1 (Bit 22): Enable debug interrupt. Triggered by breakpoints.
    Bit EE =  1 (Bit 32): Enable External Exeption. Triggered ECC fails
*/
#define INTDISPATCH_STARTUP_MSR       0x00029200

/*** End of file **************************************************************/

#endif /* BMHW_STARTUP_ASM_CFG_H */