---
title: "IpduM"
description: "Converted Vector Technical Reference: TechnicalReference_IpduM.pdf."
---

> **Converted from** [`Doc/TechnicalReferences/TechnicalReference_IpduM.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_IpduM.pdf) (25 pages). Machine-converted with PyMuPDF: running text and structure are preserved as Markdown, but **layout, figures, tables and formulas may differ from the original PDF**. For normative content, always consult the original PDF.

| Property | Value |
|---|---|
| Source | [`TechnicalReference_IpduM.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_IpduM.pdf) |
| Pages | 25 |
| PDF title | YourTopic |
| Author | Safiulla Shakir, Markus Bart, Gunnar Meiss |

## Document outline

- 1 Component History
- 2 Introduction
  - 2.1 Architecture Overview
- 3 Functional Description
  - 3.1 Features
  - 3.2 Initialization
  - 3.3 States
  - 3.4 Main Functions
  - 3.5 Error Handling
    - 3.5.1 Development Error Reporting
  - 3.6 nPdu-to-Frame mapping for CAN-FD
- 4 Integration
  - 4.1 Scope of Delivery
    - 4.1.1 Static Files
    - 4.1.2 Dynamic Files
  - 4.2 Critical Sections
- 5 API Description
  - 5.1 Services provided by IPDUM
    - 5.1.1 IpduM_InitMemory
    - 5.1.2 IpduM_Init
    - 5.1.3 IpduM_Transmit
    - 5.1.4 IpduM_MainFunction
    - 5.1.5 IpduM_GetVersionInfo
  - 5.2 Services used by IPDUM
  - 5.3 Callback Functions
    - 5.3.1 IpduM_RxIndication
    - 5.3.2 IpduM_TxConfirmation
    - 5.3.3 IpduM_TriggerTransmit
- 6 Configuration
  - 6.1 Configuration of Post-Build
- 7 AUTOSAR Standard Compliance
  - 7.1 Deviations
  - 7.2 Additions/ Extensions
  - 7.3 Limitations
- 8 Glossary and Abbreviations
  - 8.1 Glossary
  - 8.2 Abbreviations
- 9 Contact

## Excerpt (first pages)

MICROSAR I-PDU Multiplexer 
Technical Reference 
Version 2.06.00 
Authors 
Safiulla Shakir, Markus Bart, Gunnar Meiss 
Status 
Released
Technical Reference MICROSAR I-PDU Multiplexer 
© 2016 Vector Informatik GmbH 
Version 2.06.00 
2 
based on template version 5.2.0 
Document Information 
History 
Author 
Date 
Version 
Remarks 
Safiulla Shakir 
2011-12-06 
1.00.00 
Initial CFG5 version derived from 
TechnicalReference_ASR_IpduM.pdf 
Markus Bart 
2012-08-23 
2.00.00 
ESCAN00058313 
AR4-160: Support AUTOSAR 4.0.3 
Markus Bart 
2013-01-29 
2.01.00 
ESCAN00063294 
AR4-197: Support BIG_ENDIAN Copy 
Segments in IpduM 
Gunnar Meiss 
2013-04-04 
2.02.00 
ESCAN00064368 
AR4-325: Post-Build Loadable 
Markus Bart 
2014-11-05 
2.03.00 
AR4-698: Post-Build Selectable (Identity 
Manager) 
Markus Bart 
2014-12-01 
2.04.00 
FEAT-229: Support 16bit selector in IpduM 
[AR4-927] 
Markus Bart 
2015-08-11 
2.05.00 
FEAT-1315: IPDUM for CAN-FD 
supporting nPdu2Frame-Mapping 
Gunnar Meiss 
2016-02-25 
2.06.00 
FEAT-1631: Trigger Transmit API with 
SduLength In/Out according to ASR4.2.2 
Reference Documents 
No. 
Source 
Title 
Version 
[1] 
AUTOSAR 
AUTOSAR_SWS_IPDUMultiplexer.pdf 
2.2.0 
[2] 
AUTOSAR 
AUTOSAR_TR_BSWModuleList.pdf 
1.6.0 
[3] 
Vector 
TechnicalReference_PostBuildLoadable.pdf 
1.0.0 
Caution 
We have configured the programs in accordance with your specifications in the 
questionnaire. Whereas the programs do support other configurations than the one 
specified in your questionnaire, Vector´s release of the programs delivered to your 
company is expressly restricted to the configuration you have specified in the 
questionnaire. 
Caution 
This symbol calls your attention to warnings.
Technical Reference MICROSAR I-PDU Multiplexer 
© 2016 Vector Informatik GmbH 
Version 2.06.00 
3 
based on template version 5.2.0 
Contents 
1 
Component History ........................................................................................................ 6 
2 
Introduction .................................................................................................................... 7 
2.1 
Architecture Overview .............................................................................................. 8 
3 
Functional Description ................................................................................................ 10 
3.1 
Features ................................................................................................................. 10 
3.2 
Initialization ............................................................................................................ 11 
3.3 
States ..................................................................................................................... 11 
3.4 
Main Functions ....................................................................................................... 11 
3.5 
Error Handling ........................................................................................................ 11 
3.5.1 
Development Error Reporting ........................................................................ 11 
3.6 
nPdu-to-Frame mapping for CAN-FD ..................................................................... 12 
4 
Integration .................................................................................................................... 13 
4.1 
Scope of Delivery ................................................................................................... 13 
4.1.1 
Static Files .................................................................................................... 13 
4.1.2 
Dynamic Files ............................................................................................... 13 
4.2 
Critical Sections ..................................................................................................... 14 
5 
API Description ............................................................................................................ 15 
5.1 
Services provided by IPDUM .................................................................................. 15 
5.1.1 
IpduM_InitMemory ........................................................................................ 15 
5.1.2 
IpduM_Init ..................................................................................................... 15 
5.1.3 
IpduM_Transmit ............................................................................................ 16 
5.1.4 
IpduM_MainFunction ..................................................................................... 17 
5.1.5 
IpduM_GetVersionInfo ................................................................................... 17 
5.2 
Services used by IPDUM........................................................................................ 18 
5.3 
Callback Functions ................................................................................................. 19 
5.3.1 
IpduM_RxIndication ...................................................................................... 19 
5.3.2 
IpduM_TxConfirmation .................................................................................. 19 
5.3.3 
IpduM_TriggerTransmit ................................................................................. 20 
6 
Configuration................................................................................................................ 21 
6.1 
Configuration of Post-Build ..................................................................................... 21 
7 
AUTOSAR Standard Compliance ................................................................................ 22 
7.1 
Deviations .............................................................................................................. 22 
7.2 
Additions/ Extensions ............................................................................................. 22
Technical Reference MICROSAR I-PDU Multiplexer 
© 2016 V

[Back to top](#_top)
