---
title: "CryIf"
description: "Converted Vector Technical Reference: TechnicalReference_CryIf.pdf."
---

> **Converted from** [`Doc/TechnicalReferences/TechnicalReference_CryIf.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_CryIf.pdf) (27 pages). Machine-converted with PyMuPDF: running text and structure are preserved as Markdown, but **layout, figures, tables and formulas may differ from the original PDF**. For normative content, always consult the original PDF.

| Property | Value |
|---|---|
| Source | [`TechnicalReference_CryIf.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_CryIf.pdf) |
| Pages | 27 |
| PDF title | MICROSAR CryIf |
| Author | Markus Schneider, Philipp Ritter |

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
- 4 Integration
  - 4.1 Scope of Delivery
    - 4.1.1 Static Files
    - 4.1.2 Dynamic Files
- 5 API Description
  - 5.1 Services provided by CRYIF
    - 5.1.1 CryIf_InitMemory
    - 5.1.2 CryIf_Init
    - 5.1.3 CryIf_GetVersionInfo
    - 5.1.4 CryIf_ProcessJob
    - 5.1.5 CryIf_CancelJob
    - 5.1.6 CryIf_KeyElementSet
    - 5.1.7 CryIf_KeySetValid
    - 5.1.8 CryIf_KeyElementGet
    - 5.1.9 CryIf_KeyElementCopy
    - 5.1.10 CryIf_KeyCopy
    - 5.1.11 CryIf_RandomSeed
    - 5.1.12 CryIf_KeyGenerate
    - 5.1.13 CryIf_KeyDerive
    - 5.1.14 CryIf_KeyExchangeCalcPubVal
    - 5.1.15 CryIf_KeyExchangeCalcSecret
    - 5.1.16 CryIf_CertificateParse
    - 5.1.17 CryIf_CertificateVerify
  - 5.2 Services used by CRYIF
  - 5.3 Callback Functions
    - 5.3.1 CryIf_CallbackNotification
- 6 Configuration
  - 6.1 Configuration Variants
  - 6.2 Configuration with DaVinci Configurator 5 Pro
    - 6.2.1 General Properties

_6 further outline entries in the original._

## Excerpt (first pages)

MICROSAR CryIf 
Technical Reference 
Crypto Interface 
Version 1.2.0 
Authors 
Markus Schneider, Philipp Ritter 
Status 
Released
Technical Reference MICROSAR CryIf 
© 2017 Vector Informatik GmbH 
Version 1.2.0 
2 
based on template version 6.0.1 
Document Information 
History 
Author 
Date 
Version 
Remarks 
Schneider, Markus 
2017-03-07 
1.01.00 
Initial creation of Technical Reference 
Ritter, Philipp 
2017-05-08 
1.02.00 
Changed chapter 5.1.6, 5.1.7, 5.1.8, 5.1.11 
Reference Documents 
No. 
Source 
Title 
Version 
[1] 
AUTOSAR 
AUTOSAR_SWS_CryptoInterface.pdf 
4.3.0 
[2] 
AUTOSAR 
AUTOSAR_SWS_DET.pdf 
4.3.0
Technical Reference MICROSAR CryIf 
© 2017 Vector Informatik GmbH 
Version 1.2.0 
3 
based on template version 6.0.1 
Contents 
1 
Component History ...................................................................................................... 6 
2 
Introduction................................................................................................................... 7 
2.1 
Architecture Overview ........................................................................................ 7 
3 
Functional Description ................................................................................................. 9 
3.1 
Features ............................................................................................................ 9 
3.2 
Initialization ........................................................................................................ 9 
3.3 
States ................................................................................................................ 9 
3.4 
Main Functions .................................................................................................. 9 
3.5 
Error Handling .................................................................................................... 9 
3.5.1 
Development Error Reporting ............................................................. 9 
4 
Integration ................................................................................................................... 11 
4.1 
Scope of Delivery ............................................................................................. 11 
4.1.1 
Static Files ....................................................................................... 11 
4.1.2 
Dynamic Files .................................................................................. 11 
5 
API Description ........................................................................................................... 12 
5.1 
Services provided by CRYIF ............................................................................ 12 
5.1.1 
CryIf_InitMemory .............................................................................. 12 
5.1.2 
CryIf_Init .......................................................................................... 12 
5.1.3 
CryIf_GetVersionInfo ........................................................................ 13 
5.1.4 
CryIf_ProcessJob ............................................................................. 13 
5.1.5 
CryIf_CancelJob .............................................................................. 14 
5.1.6 
CryIf_KeyElementSet ....................................................................... 15 
5.1.7 
CryIf_KeySetValid ............................................................................ 15 
5.1.8 
CryIf_KeyElementGet ...................................................................... 16 
5.1.9 
CryIf_KeyElementCopy .................................................................... 17 
5.1.10 
CryIf_KeyCopy ................................................................................. 17 
5.1.11 
CryIf_RandomSeed.......................................................................... 18 
5.1.12 
CryIf_KeyGenerate .......................................................................... 19 
5.1.13 
CryIf_KeyDerive ............................................................................... 19 
5.1.14 
CryIf_KeyExchangeCalcPubVal ....................................................... 20 
5.1.15 
CryIf_KeyExchangeCalcSecret ........................................................ 21 
5.1.16 
CryIf_CertificateParse ...................................................................... 21 
5.1.17 
CryIf_CertificateVerify ...................................................................... 22 
5.2 
Services used by CRYIF .................................................................................. 23 
5.3 
Callback Functions ........................................................................................... 23
Technical Reference MICROSAR CryIf 
© 2017 Vector Informatik GmbH 
Version 1.2.0 
4 
based on template version 6.0.1 
5.3.1 
CryIf_CallbackNotification ................................................................ 23 
6 
Configuration .............................................................................................................. 24 
6.1 
Configuration Variants ...................................................................................... 24 
6.2 
Configuration with DaVinci Configurator 5 Pro ................................................. 24 
6.2.1 
General Properties ........................................................................... 24 
6.2.2 
Channel Properties .......................................................................... 24 
6.2.3 
Key Properties ................................................................................. 25 
7 
Glossary and Abbreviations ...................................................................................... 26 
7.1 
Glossary .......................................................................................................... 26 
7.2 
Abbreviations ................................................................................................... 26 
8 
Contact .........

[Back to top](#_top)
