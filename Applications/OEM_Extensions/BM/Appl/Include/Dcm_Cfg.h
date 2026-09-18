/*------------------------------------------------------------------------------
|                                                                              |
|  Copyright (C) BMW AG 2015                                                |
|                                                                              |
|  MODULE    : Dcm_Cfg.h                                                       |
|                                                                              |
|  PROJECT   : BMW AUTOSAR Core                                                |
|                                                                              |
|  PURPOSE   :                                                                 |
|                                                                              |
|  REMARKS   : only for Bootmanager                                            |
|                                                                              |
|------------------------------------------------------------------------------|
|  DISCLAIMER:                                                                 |
|  As the program is not fully tested and qualified for series production      |
|  use, the user shall not be entitled to use the program in connection        |
|  with any series production. BMW provides the user with the program only     |
|  as sample application (for testing purposes).                               |
|													 |
-------------------------------------------------------------------------------*/

#ifndef DCM_CFG_H
#define DCM_CFG_H

#ifndef I_KNOW_THAT_THIS_CODE_IS_NOT_FOR_PRODUCTION
#error "the program must not be used in connection with series production"
#endif

/* Switches necessary by Dcm_Types.h */
#define DCM_INCLUDE_RTE 			STD_OFF
#define DCM_VERSION_INFO_API 		STD_OFF
#define DCM_ROE_ENABLED 			STD_OFF
#define DCM_DSP_USE_SERVICE_0X28	STD_OFF
#define DCM_ROE_PERSISTENCE           STD_OFF

#endif /* DCM_CFG_H */
