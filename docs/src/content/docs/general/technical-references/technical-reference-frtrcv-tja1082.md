---
title: "FrTrcv Tja1082"
description: "Converted Vector Technical Reference: TechnicalReference_FrTrcv_Tja1082.pdf."
---

> **Converted from** [`Doc/TechnicalReferences/TechnicalReference_FrTrcv_Tja1082.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_FrTrcv_Tja1082.pdf) (28 pages). Machine-converted with PyMuPDF: running text and structure are preserved as Markdown, but **layout, figures, tables and formulas may differ from the original PDF**. For normative content, always consult the original PDF.

| Property | Value |
|---|---|
| Source | [`TechnicalReference_FrTrcv_Tja1082.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_FrTrcv_Tja1082.pdf) |
| Pages | 28 |
| PDF title | MICROSAR FlexRay Transceiver Driver |

## Document outline

- 1 Component History
- 2 Introduction
  - 2.1 Supported Devices
  - 2.2 Architecture Overview
- 3 Functional Description
  - 3.1 Features
    - 3.1.1 Deviations
      - 3.1.1.1 AUTOSAR 4
    - 3.1.2 Limitations
      - 3.1.2.1 Error indication
  - 3.2 Initialization
    - 3.2.1 High-Level Initialization
    - 3.2.2 Low-Level Initialization
  - 3.3 States
  - 3.4 Main Functions
  - 3.5 Error Handling
    - 3.5.1 Development Error Reporting
    - 3.5.2 Production Code Error Reporting
- 4 Integration
  - 4.1 Scope of Delivery
    - 4.1.1 Static Files
    - 4.1.2 Dynamic Files
  - 4.2 Critical Sections
    - 4.2.1 FRTRCV_30_TJA1082_EXCLUSIVE_AREA_0
  - 4.3 The Software Timers
- 5 API Description
  - 5.1 Type Definitions
  - 5.2 Services provided by FlexRay Transceiver Driver
    - 5.2.1.1 FrTrcv_30_Tja1082_InitMemory: Initialization of Transceiver Driver
    - 5.2.1.2 FrTrcv_30_Tja1082_Init: Initialization of Transceiver Driver
    - 5.2.1.3 FrTrcv_30_Tja1082_MainFunction: Main Function of Transceiver Driver
    - 5.2.1.4 FrTrcv_30_Tja1082_GetVersionInfo: Read Version Information of the Driver
    - 5.2.1.5 FrTrcv_30_Tja1082_SetTransceiverMode: Set the Transceiver in the requested mode
    - 5.2.1.6 FrTrcv_30_Tja1082_GetTransceiverMode: Get the current Transceiver mode
    - 5.2.1.7 FrTrcv_30_Tja1082_GetTransceiverWUReason: Get the wake up reason
    - 5.2.1.8 FrTrcv_30_Tja1082_ClearTransceiverWakeup: Clear pending wake up events
    - 5.2.1.9 FrTrcv_30_Tja1082_GetTransceiverError: Read current Transceiver error
    - 5.2.1.10 FrTrcv_30_Tja1082_DisableTransceiverBranch: Disable an individual branch
    - 5.2.1.11 FrTrcv_30_Tja1082_EnableTransceiverBranch: Disable an individual branch
  - 5.3 Services used by FlexRay Transceiver Driver

_11 further outline entries in the original._

## Excerpt (first pages)

MICROSAR FlexRay Transceiver Driver 
Technical Reference 
Tja1082 
Version 2.00.00 
Status 
Released
Technical Reference MICROSAR FlexRay Transceiver Driver 
© 2017 Vector Informatik GmbH 
Version 2.00.00 
1 
based on template version 5.7.1 
Document Information 
History 
Date 
Version 
Remarks 
2014-05-15 
1.00.00 
Creation of document 
2015-05-27 
1.00.01 
ESCAN00078929: Missing explanation of API 
FrTrcv_30_Tja1082_GetVersionInfo 
ESCAN00077241 AR3-2679: Description BCD-coded return-value 
of XXX_GetVersionInfo() in TechRef 
2016-11-04 
1.01.00 
Support of AUTOSAR 3 
2017-08-25 
2.00.00 
Rework for SafeBsw 
Reference Documents 
No. 
Source 
Title 
Version 
[1] 
AUTOSAR 
AUTOSAR_SWS_FlexRayTransceiverDriver.pdf 
1.5.0 
[2] 
AUTOSAR 
AUTOSAR_SWS_DET.pdf 
2.2.1 
[3] 
AUTOSAR 
AUTOSAR_SWS_DEM.pdf 
2.2.0 
[4] 
AUTOSAR 
AUTOSAR_BasicSoftwareModules.pdf 
1.0.0 
[5] 
NXP 
TJA1082.pdf 
Rev.6 
[6] 
NXP 
TJA1083.pdf 
Rev.1 
Scope of the Document 
This technical reference describes the general use of the FlexRay Transceiver Driver basis 
software for Tja1082 or Tja1083. Please refer to your Release Notes to get a detailed 
description of the platform (Host, CC, Compiler, Transceiver) your Vector FlexRay Bundle 
has been configured for. 
Caution 
We have configured the programs in accordance with your specifications in the 
questionnaire. Whereas the programs do support other configurations than the one 
specified in your questionnaire, Vector´s release of the programs delivered to your 
company is expressly restricted to the configuration you have specified in the 
questionnaire.
Technical Reference MICROSAR FlexRay Transceiver Driver 
© 2017 Vector Informatik GmbH 
Version 2.00.00 
2 
based on template version 5.7.1 
Contents 
1 
Component History ...................................................................................................... 5 
2 
Introduction................................................................................................................... 6 
2.1 
Supported Devices ............................................................................................. 7 
2.2 
Architecture Overview ........................................................................................ 7 
3 
Functional Description ................................................................................................. 8 
3.1 
Features ............................................................................................................ 8 
3.1.1 
Deviations .......................................................................................... 8 
3.1.1.1 
AUTOSAR 4 .................................................................... 8 
3.1.2 
Limitations .......................................................................................... 8 
3.1.2.1 
Error indication ................................................................. 8 
3.2 
Initialization ........................................................................................................ 8 
3.2.1 
High-Level Initialization ...................................................................... 8 
3.2.2 
Low-Level Initialization ....................................................................... 9 
3.3 
States ................................................................................................................ 9 
3.4 
Main Functions .................................................................................................. 9 
3.5 
Error Handling .................................................................................................... 9 
3.5.1 
Development Error Reporting ............................................................. 9 
3.5.2 
Production Code Error Reporting ..................................................... 10 
4 
Integration ................................................................................................................... 11 
4.1 
Scope of Delivery ............................................................................................. 11 
4.1.1 
Static Files ....................................................................................... 11 
4.1.2 
Dynamic Files .................................................................................. 11 
4.2 
Critical Sections ............................................................................................... 11 
4.2.1 
FRTRCV_30_TJA1082_EXCLUSIVE_AREA_0 ............................... 11 
4.3 
The Software Timers ........................................................................................ 11 
5 
API Description ........................................................................................................... 13 
5.1 
Type Definitions ............................................................................................... 13 
5.2 
Services provided by FlexRay Transceiver Driver ............................................ 15 
5.2.1.1 
FrTrcv_30_Tja1082_InitMemory: Initialization of 
Transceiver Driver .......................................................... 15 
5.2.1.2 
FrTrcv_30_Tja1082_Init: Initialization of Transceiver 
Driver ............................................................................. 15 
5.2.1.3 
FrTrcv_30_Tja1082_MainFunction: Main Function of 
Transceiver Driver .......................................................... 16
Technical Reference MICROSAR FlexRay Transceiver Driver 
© 2017 Vector Informatik GmbH 
Version 2.00.00 
3 
based on template version 5.7.1 
5.2.1.4 
FrTrcv_30_Tja1082_GetVersionInfo: Read Version 
Information of the Driver ................................................ 16 
5.2.1.5 
FrTrcv_30_Tja1082_SetTransceiverMode: Set the 
Transceiver in the requested mode ................................ 17 
5.2.1.6 
FrTrcv_30_Tja1082_GetTransceiverMode: Get the 
current Transceiver mode .............................................. 18 
5.2.1.7 
FrTrcv_30_Tja1082_GetTransceiverWUReason: Get

[Back to top](#_top)
