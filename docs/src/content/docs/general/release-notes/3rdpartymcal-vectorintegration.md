---
title: "ReleaseNotes_3rdPartyMCAL_VectorIntegration"
description: "Converted release note: ReleaseNotes_3rdPartyMCAL_VectorIntegration.pdf."
---

> **Converted from** [`Doc/ReleaseNotes/ReleaseNotes_3rdPartyMCAL_VectorIntegration.pdf`](../../../../../../Doc/ReleaseNotes/ReleaseNotes_3rdPartyMCAL_VectorIntegration.pdf) (8 pages). Machine-converted with PyMuPDF: running text and structure are preserved as Markdown, but **layout, figures, tables and formulas may differ from the original PDF**. For normative content, always consult the original PDF.

| Property | Value |
|---|---|
| Source | [`ReleaseNotes_3rdPartyMCAL_VectorIntegration.pdf`](../../../../../../Doc/ReleaseNotes/ReleaseNotes_3rdPartyMCAL_VectorIntegration.pdf) |
| Pages | 8 |
| PDF title | MICROSAR [BSW module] |
| Author | Roland Suess |

## Document outline

- 1 MCAL Integration
  - 1.1 Type of Integration
  - 1.2 MCAL Location within SIP
  - 1.3 Supported µController
  - 1.4 Used MCAL Packages
  - 1.5 Configuration Tools
  - 1.6 Supported Compilers
- 2 Vector Comment
  - 2.1 Known Issues
    - 2.1.1 McuDemEventParameterRefs
    - 2.1.2 SpiDemEventParameterRefs
    - 2.1.3 Mapping of Fls Code into RAM
- 3 Glossary and Abbreviations
  - 3.1 Glossary
  - 3.2 Abbreviations
- 4 Contact

## Excerpt (first pages)

3rdParty MCAL Integration 
Release Notes 
Renesas RH850/P1x 
Version 1.4.0 
Authors 
Roland Suess 
Status 
Released
Release Notes 3rdParty MCAL Integration 
© 2017 Vector Informatik GmbH 
Version 1.4.0 
2 
based on template version 6.0.1 
Document Information 
History 
Author 
Date 
Version Remarks 
Roland Suess 
2015-10-05 1.0.0 
Integration of Renesas package 
AUTOSAR_RH850_P1x_MCAL_E4.03 
Andrej Gazvoda 
2015-10-21 1.0.1 
Integration of Renesas package 
AUTOSAR_RH850_P1x_MCAL_Ver4.00.04 
Andrej Gazvoda 
2015-10-21 1.0.2 
Mantis_0026358_HotFix_20150226 
Andrej Gazvoda 
2016-07-21 1.1.0 
Integration of Renesas package 
AUTOSAR_RH850_P1x_MCAL_Ver4.01.00 
Andrej Gazvoda 
2016-08-19 1.1.80 
Integration of Renesas package 
AUTOSAR_RH850_P1x_MCAL_Ver4.01.01_Pre_
Release_CW32 
Special Release for Nexteer 
Andrej Gazvoda 
2016-11-22 1.1.81 
Integration of Renesas package 
AUTOSAR_RH850_P1x_MCAL_Ver4.01.01.D 
Roland Suess 
2017-01-20 1.3.0 
Integration of Renesas package 
AUTOSAR_RH850_P1x_MCAL_Ver4.02.00.D 
Roland Suess 
2017-02-24 1.3.1 
Added chapter 2.1.3 (Mapping of Fls Code into 
RAM) 
Roland Suess 
2017-07-19 1.4.0 
Integration of Renesas packages 
AUTOSAR_RH850_P1x_MCAL_Ver4.02.01.D 
and 
AUTOSAR_RH850_P1x_MCAL_Ver4.02.02.D 
(optional) 
Reference Documents 
No. 
Source 
Title 
Version 
[1] 
Vector 
TechnicalReference_3rdParty-MCAL-Integration.pdf 
see delivery 
Scope of the Document 
This document contains information about the integration of 3rd Party MCAL into Vector 
software stack.
Release Notes 3rdParty MCAL Integration 
© 2017 Vector Informatik GmbH 
Version 1.4.0 
3 
based on template version 6.0.1 
Contents 
1 
MCAL Integration .......................................................................................................... 4 
1.1 
Type of Integration ............................................................................................. 4 
1.2 
MCAL Location within SIP .................................................................................. 4 
1.3 
Supported µController ........................................................................................ 4 
1.4 
Used MCAL Packages ....................................................................................... 4 
1.5 
Configuration Tools ............................................................................................ 5 
1.6 
Supported Compilers ......................................................................................... 5 
2 
Vector Comment ........................................................................................................... 6 
2.1 
Known Issues .................................................................................................... 6 
2.1.1 
McuDemEventParameterRefs ............................................................ 6 
2.1.2 
SpiDemEventParameterRefs ............................................................. 6 
2.1.3 
Mapping of Fls Code into RAM .......................................................... 6 
3 
Glossary and Abbreviations ........................................................................................ 7 
3.1 
Glossary ............................................................................................................ 7 
3.2 
Abbreviations ..................................................................................................... 7 
4 
Contact .......................................................................................................................... 8
Release Notes 3rdParty MCAL Integration 
© 2017 Vector Informatik GmbH 
Version 1.4.0 
4 
based on template version 6.0.1 
1 
MCAL Integration 
1.1 
Type of Integration 
Comfort Integration 
Vector tool DaVinci Configurator 5 is used for configuration 
> 
as comfort editor for Mcu component 
> 
as generic editor for other MCAL modules 
Recommended workflow: 
Generation and changes in configuration are done in DaVinci Configurator. 
1.2 
MCAL Location within SIP 
The 3rd Party MCAL can be found in .\ThirdParty\Mcal_Rh850P1x\Supply. Please refer to 
chapter 
‘First 
Steps’ 
in 
document 
TechnicalReference_3rdParty-MCAL-
Integration.pdf [1]. 
1.3 
Supported µController 
This integration supports the Renesas RH850P1M target with the following devices: 
R7F701310 
R7F701311 
R7F701314 
R7F701315 
R7F701318 
R7F701319 
R7F701322 
R7F701323 
R7F701362 (configured as R7F701318) 
R7F701363 (configured as R7F701319) 
R7F701366 (configured as R7F701322) 
R7F701367 (configured as R7F701323). 
1.4 
Used MCAL Packages 
> 
AUTOSAR_RH850_P1x_MCAL_Ver4.02.01.D (incl. Spi fix 
AUTOSAR_RH850_P1x_MCAL_Ver4.02.01.001.D_SPI) - mandatory 
> 
AUTOSAR_RH850_P1x_MCAL_Ver4.02.02.D - optional
Release Notes 3rdParty MCAL Integration 
© 2017 Vector Informatik GmbH 
Version 1.4.0 
5 
based on template version 6.0.1 
1.5 
Configuration Tools 
DaVinci Configurator 5 
1.6 
Supported Compilers 
GreenHills (MULTI 6.1.6) and Compiler 2015.1.7
Release Notes 3rdParty MCAL Integration 
© 2017 Vector Informatik GmbH 
Version 1.4.0 
6 
based on template version 6.0.1 
2 
Vector Comment 
Please 
consider 
the 
attached 
TechnicalReference_3rdParty-MCAL-
Integration.pdf [1] for further information regarding Vector integration and setup of a 
project. 
2.1 
Known Issues 
2.1.1 
McuDemEventParameterRefs 
For 
the 
case 
parameters 
MCU_E_WRITE_TIMEOUT_FAILURE 
and 
MCU_E_CLOCK_FAILURE are configured with the same DemEventParameter, the 
following error message appears: 
In fact, the values should not be unique. 
2.1.2 
SpiDemEventParameterRefs 
For 
the 
case 
parameters 
SPI_E_HARDWARE_ERROR 
and 
SPI_E_DATA_TX_TIMEOUT_FAILURE 
are 
configured 
with 
the 
same 
DemEventParameter, the following error message appears: 
In fact, the values should not be unique. 
2.1.3 
Mapping of Fls Code into RAM 
If you face problems during Fls_Init() that the function Fls_FcuClearCache() is not working 
correctly the following hints have to be considered: 
> 
Further information is

[Back to top](#_top)
