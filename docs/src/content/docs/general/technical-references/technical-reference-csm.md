---
title: "Csm"
description: "Converted Vector Technical Reference: TechnicalReference_Csm.pdf."
---

> **Converted from** [`Doc/TechnicalReferences/TechnicalReference_Csm.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_Csm.pdf) (42 pages). Machine-converted with PyMuPDF: running text and structure are preserved as Markdown, but **layout, figures, tables and formulas may differ from the original PDF**. For normative content, always consult the original PDF.

| Property | Value |
|---|---|
| Source | [`TechnicalReference_Csm.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_Csm.pdf) |
| Pages | 42 |
| PDF title | MICROSAR CSM |
| Author | Markus Schneider, Anant Gupta |

## Document outline

- 1 Component History
- 2 Introduction
  - 2.1 Architecture Overview
- 3 Functional Description
  - 3.1 Features
    - 3.1.1 Deviations
  - 3.2 Initialization
  - 3.3 Main Functions
  - 3.4 Error Handling
    - 3.4.1 Development Error Reporting
- 4 Integration
  - 4.1 Scope of Delivery
    - 4.1.1 Static Files
    - 4.1.2 Dynamic Files
  - 4.2 Critical Sections
- 5 API Description
  - 5.1 Type Definitions
  - 5.2 Services provided by CSM
    - 5.2.1 Csm_Init
    - 5.2.2 Csm_InitMemory
    - 5.2.3 Csm_GetVersionInfo
    - 5.2.4 Csm_CancelJob
    - 5.2.5 Csm_KeyElementSet
    - 5.2.6 Csm_KeySetValid
    - 5.2.7 Csm_KeyElementGet
    - 5.2.8 Csm_KeyElementCopy
    - 5.2.9 Csm_KeyCopy
    - 5.2.10 Csm_RandomSeed
    - 5.2.11 Csm_KeyGenerate
    - 5.2.12 Csm_KeyDerive
    - 5.2.13 Csm_KeyExchangeCalcPubVal
    - 5.2.14 Csm_KeyExchangeCalcSecret
    - 5.2.15 Csm_CertificateParse
    - 5.2.16 Csm_CertificateVerify
    - 5.2.17 Csm_Hash
    - 5.2.18 Csm_MacGenerate
    - 5.2.19 Csm_MacVerify
    - 5.2.20 Csm_Encrypt
    - 5.2.21 Csm_Decrypt
    - 5.2.22 Csm_AEADEncrypt

_26 further outline entries in the original._

## Excerpt (first pages)

MICROSAR CSM 
Technical Reference 
Cryptographic Service Manager 
Version 1.03.00 
Authors 
Markus Schneider, Anant Gupta 
Status 
Released
Technical Reference MICROSAR CSM 
© 2017 Vector Informatik GmbH 
Version 1.03.00 
2 
based on template version 6.0.1 
Document Information 
History 
Author 
Date 
Version 
Remarks 
Schneider, Markus 
2017-03-14 
1.01.00 
Initial Creation for ASR 4.3 
Gupta, Anant 
2017-03-17 
1.01.00 
Add configurational details 
Schneider, Markus 
2017-05-08 
1.02.00 
3.1.1 Added backward compatible static 
definition limitation 
5 Adapted to Specification 
Schneider, Markus 
2017-06-07 
1.03.00 
Adapted chapter 4.2 
Added information about SecureCounter 
Removed API description for 
SecureCounter 
Reference Documents 
No. 
Source 
Title 
Version 
[1] 
AUTOSAR 
AUTOSAR_SWS_CryptoServiceManager.pdf 
4.3.0 
[2] 
AUTOSAR 
AUTOSAR_SWS_DET.pdf 
4.3.0
Technical Reference MICROSAR CSM 
© 2017 Vector Informatik GmbH 
Version 1.03.00 
3 
based on template version 6.0.1 
Contents 
1 
Component History ...................................................................................................... 7 
2 
Introduction................................................................................................................... 8 
2.1 
Architecture Overview ........................................................................................ 8 
3 
Functional Description ............................................................................................... 10 
3.1 
Features .......................................................................................................... 10 
3.1.1 
Deviations ........................................................................................ 10 
3.2 
Initialization ...................................................................................................... 10 
3.3 
Main Functions ................................................................................................ 10 
3.4 
Error Handling .................................................................................................. 11 
3.4.1 
Development Error Reporting ........................................................... 11 
4 
Integration ................................................................................................................... 13 
4.1 
Scope of Delivery ............................................................................................. 13 
4.1.1 
Static Files ....................................................................................... 13 
4.1.2 
Dynamic Files .................................................................................. 13 
4.2 
Critical Sections ............................................................................................... 13 
5 
API Description ........................................................................................................... 14 
5.1 
Type Definitions ............................................................................................... 14 
5.2 
Services provided by CSM ............................................................................... 14 
5.2.1 
Csm_Init ........................................................................................... 14 
5.2.2 
Csm_InitMemory .............................................................................. 15 
5.2.3 
Csm_GetVersionInfo ........................................................................ 15 
5.2.4 
Csm_CancelJob ............................................................................... 16 
5.2.5 
Csm_KeyElementSet ....................................................................... 17 
5.2.6 
Csm_KeySetValid ............................................................................ 17 
5.2.7 
Csm_KeyElementGet ....................................................................... 18 
5.2.8 
Csm_KeyElementCopy .................................................................... 19 
5.2.9 
Csm_KeyCopy ................................................................................. 20 
5.2.10 
Csm_RandomSeed .......................................................................... 20 
5.2.11 
Csm_KeyGenerate .......................................................................... 21 
5.2.12 
Csm_KeyDerive ............................................................................... 21 
5.2.13 
Csm_KeyExchangeCalcPubVal ....................................................... 22 
5.2.14 
Csm_KeyExchangeCalcSecret ........................................................ 23 
5.2.15 
Csm_CertificateParse ...................................................................... 24 
5.2.16 
Csm_CertificateVerify ....................................................................... 24 
5.2.17 
Csm_Hash ....................................................................................... 25
Technical Reference MICROSAR CSM 
© 2017 Vector Informatik GmbH 
Version 1.03.00 
4 
based on template version 6.0.1 
5.2.18 
Csm_MacGenerate .......................................................................... 26 
5.2.19 
Csm_MacVerify ................................................................................ 26 
5.2.20 
Csm_Encrypt ................................................................................... 27 
5.2.21 
Csm_Decrypt ................................................................................... 28 
5.2.22 
Csm_AEADEncrypt .......................................................................... 29 
5.2.23 
Csm_AEADDecrypt.......................................................................... 30 
5.2.24 
Csm_SignatureGenerate ................................................................. 31 
5.2.25 
Csm_SignatureVerify ....................................................................... 32 
5.2.26 
Csm_RandomGenerate ................................................................... 33 
5.3 
Servi

[Back to top](#_top)
