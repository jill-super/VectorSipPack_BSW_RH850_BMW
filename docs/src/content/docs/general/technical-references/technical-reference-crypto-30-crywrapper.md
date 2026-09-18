---
title: "Crypto 30 CryWrapper"
description: "Converted Vector Technical Reference: TechnicalReference_Crypto_30_CryWrapper.pdf."
---

> **Converted from** [`Doc/TechnicalReferences/TechnicalReference_Crypto_30_CryWrapper.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_Crypto_30_CryWrapper.pdf) (38 pages). Machine-converted with PyMuPDF: running text and structure are preserved as Markdown, but **layout, figures, tables and formulas may differ from the original PDF**. For normative content, always consult the original PDF.

| Property | Value |
|---|---|
| Source | [`TechnicalReference_Crypto_30_CryWrapper.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_Crypto_30_CryWrapper.pdf) |
| Pages | 38 |
| PDF title | MICROSAR CRYPTO |
| Author | Tobias Finke |

## Document outline

- 1 Component History
- 2 Introduction
  - 2.1 Architecture Overview
- 3 Functional Description
  - 3.1 Features
    - 3.1.1 Deviations
    - 3.1.2 Additions/ Extensions
    - 3.1.3 Limitations
      - 3.1.3.1 Cryptographic Algorithms and Modes
      - 3.1.3.2 Certificate Handling
      - 3.1.3.3 Key Generation
      - 3.1.3.4 AEAD Det Checks
      - 3.1.3.5 Asynchronous CRY
  - 3.2 Initialization
  - 3.3 Main Functions
  - 3.4 SHE Key Update Protocol
    - 3.4.1 Preconditions
  - 3.5 Error Handling
    - 3.5.1 Development Error Reporting
  - 3.6 Key Management
    - 3.6.1 Custom Key Elements
    - 3.6.2 Import Keys
    - 3.6.3 Export Keys
  - 3.7 Algorithm Parameter Overview
  - 3.8 Crypto Driver Configuration
    - 3.8.1 General Configuration
    - 3.8.2 Configuration of Keys
      - 3.8.2.1 Key Elements
      - 3.8.2.2 Key Types
      - 3.8.2.3 Keys
    - 3.8.3 Wrapping of CRY
      - 3.8.3.1 Configuration of the underlying CRY
      - 3.8.3.2 Algorithms
      - 3.8.3.3 Key Functions
- 4 Integration
  - 4.1 Scope of Delivery
    - 4.1.1 Static Files
    - 4.1.2 Dynamic Files
  - 4.2 Critical Sections
- 5 API Description

_27 further outline entries in the original._

## Excerpt (first pages)

MICROSAR CRYPTO 
Technical Reference 
CRYPTO CRYWRAPPER 
Version 2.1.0 
Authors 
Tobias Finke 
Status 
Released
Technical Reference MICROSAR CRYPTO 
© 2017 Vector Informatik GmbH 
Version 2.1.0 
2 
based on template version 6.0.1 
Document Information 
History 
Author 
Date 
Version 
Remarks 
Tobias Finke 
2016-12-21 
1.00.00 
Initial creation 
Tobias Finke 
2017-10-06 
2.01.00 
Release of component 
Reference Documents 
No. 
Source 
Title 
Version 
[1] 
AUTOSAR 
AUTOSAR_CryptoDriver.pdf 
4.3.0 
[2] 
AUTOSAR 
AUTOSAR_SWS_DET.pdf 
4.3.0 
[3] 
AUTOSAR 
AUTOSAR_TR_BSWModuleList.pdf 
4.3.0 
[4] 
HIS 
2009-04-01 SHE Functional Specification v1.1 (rev439) 
1.1
Technical Reference MICROSAR CRYPTO 
© 2017 Vector Informatik GmbH 
Version 2.1.0 
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
3.1.1 
Deviations .......................................................................................... 9 
3.1.2 
Additions/ Extensions ......................................................................... 9 
3.1.3 
Limitations ........................................................................................ 10 
3.1.3.1 
Cryptographic Algorithms and Modes ............................ 10 
3.1.3.2 
Certificate Handling........................................................ 10 
3.1.3.3 
Key Generation .............................................................. 10 
3.1.3.4 
AEAD Det Checks ......................................................... 10 
3.1.3.5 
Asynchronous CRY ........................................................ 10 
3.2 
Initialization ...................................................................................................... 10 
3.3 
Main Functions ................................................................................................ 10 
3.4 
SHE Key Update Protocol ................................................................................ 10 
3.4.1 
Preconditions ................................................................................... 10 
3.5 
Error Handling .................................................................................................. 11 
3.5.1 
Development Error Reporting ........................................................... 11 
3.6 
Key Management ............................................................................................. 12 
3.6.1 
Custom Key Elements ...................................................................... 12 
3.6.2 
Import Keys ...................................................................................... 13 
3.6.3 
Export Keys ..................................................................................... 14 
3.7 
Algorithm Parameter Overview ........................................................................ 14 
3.8 
Crypto Driver Configuration .............................................................................. 15 
3.8.1 
General Configuration ...................................................................... 15 
3.8.2 
Configuration of Keys ....................................................................... 15 
3.8.2.1 
Key Elements................................................................. 15 
3.8.2.2 
Key Types ...................................................................... 16 
3.8.2.3 
Keys .............................................................................. 16 
3.8.3 
Wrapping of CRY ............................................................................. 17 
3.8.3.1 
Configuration of the underlying CRY .............................. 17 
3.8.3.2 
Algorithms ...................................................................... 17 
3.8.3.3 
Key Functions ................................................................ 19 
4 
Integration ................................................................................................................... 20
Technical Reference MICROSAR CRYPTO 
© 2017 Vector Informatik GmbH 
Version 2.1.0 
4 
based on template version 6.0.1 
4.1 
Scope of Delivery ............................................................................................. 20 
4.1.1 
Static Files ....................................................................................... 20 
4.1.2 
Dynamic Files .................................................................................. 20 
4.2 
Critical Sections ............................................................................................... 21 
5 
API Description ........................................................................................................... 22 
5.1 
Services provided by CRYPTO ........................................................................ 22 
5.1.1 
Crypto_30_CryWrapper_Init ............................................................. 22 
5.1.2 
Crypto_30_CryWrapper_InitMemory ................................................ 22 
5.1.3 
Crypto_30_CryWrapper_GetVersionInfo .......................................... 23 
5.1.4 
Crypto_30_CryWrapper_ProcessJob ............................................... 23 
5.1.5 
Crypto_30_CryWrapper_CancelJob ................................................. 24 
5.2 
Key Management Functions ............................................................................ 25 
5.2.1 
Crypto_30_CryWrapper_KeyCopy .......................

[Back to top](#_top)
