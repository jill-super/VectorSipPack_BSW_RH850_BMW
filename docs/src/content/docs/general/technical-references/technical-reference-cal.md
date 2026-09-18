---
title: "Cal"
description: "Converted Vector Technical Reference: TechnicalReference_Cal.pdf."
---

> **Converted from** [`Doc/TechnicalReferences/TechnicalReference_Cal.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_Cal.pdf) (49 pages). Machine-converted with PyMuPDF: running text and structure are preserved as Markdown, but **layout, figures, tables and formulas may differ from the original PDF**. For normative content, always consult the original PDF.

| Property | Value |
|---|---|
| Source | [`TechnicalReference_Cal.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_Cal.pdf) |
| Pages | 49 |
| PDF title | MICROSAR Crypto Abstraction Library |
| Author | Wladimir Gerber, Markus Schneider |

## Document outline

- 1 Introduction
  - 1.1 Architecture Overview
- 2 Functional Description
  - 2.1 Features
  - 2.2 Initialization
  - 2.3 States
    - 2.3.1 Streaming Approach
  - 2.4 Error Handling
    - 2.4.1 Development Error Reporting
    - 2.4.2 Production Code Error Reporting
- 3 Integration
  - 3.1 Scope of Delivery
    - 3.1.1 Static Files
    - 3.1.2 Dynamic Files
    - 3.1.3 Include Structure
  - 3.2 Compiler Abstraction and Memory Mapping
- 4 API Description
  - 4.1 Type Definitions
  - 4.2 Services provided by CAL
    - 4.2.1 Cal_SymDecryptStart
    - 4.2.2 Cal_SymDecryptUpdate
    - 4.2.3 Cal_SymDecryptFinish
    - 4.2.4 Cal_SymEncryptStart
    - 4.2.5 Cal_SymEncryptUpdate
    - 4.2.6 Cal_SymEncryptFinish
    - 4.2.7 Cal_KeyDeriveStart
    - 4.2.8 Cal_KeyDeriveUpdate
    - 4.2.9 Cal_KeyDeriveFinish
    - 4.2.10 Cal_KeyExchangeCalcSecretStart
    - 4.2.11 Cal_KeyExchangeCalcSecretUpdate
    - 4.2.12 Cal_KeyExchangeCalcSecretFinish
    - 4.2.13 Cal_KeyExchangeCalcPubVal
    - 4.2.14 Cal_RandomSeedStart
    - 4.2.15 Cal_RandomSeedUpdate
    - 4.2.16 Cal_RandomSeedFinish
    - 4.2.17 Cal_RandomGenerate
    - 4.2.18 Cal_SignatureVerifyStart
    - 4.2.19 Cal_SignatureVerifyUpdate
    - 4.2.20 Cal_SignatureVerifyFinish
    - 4.2.21 Cal_HashStart

_35 further outline entries in the original._

## Excerpt (first pages)

MICROSAR Crypto Abstraction Library 
Technical Reference 
Version 2.2 
Authors 
Wladimir Gerber, Markus Schneider 
Status 
Released
Technical Reference MICROSAR Crypto Abstraction Library 
2014, Vector Informatik GmbH 
Version: 2.2 
based on template version 5.2.0 
2 / 49 
Document Information 
History 
Author 
Date 
Version 
Remarks 
Wladimir Gerber 
2012-10-01 
1.0 
Initial version 
Markus Schneider 
2013-04-03 
2.0 
Updated for AUTOSAR 4; 
Adapting chapter 3.1.3, 5 and chapter 7.1 
Markus Schneider 
2013-10-14 
2.1 
Update of chapter ‘5 Configuration’ 
Markus Schneider 
2014-10-15 
2.2 
Added SymEncrypt, KeyDerive and 
KeyExchange services; Removed chapter 
“Component History” 
Reference Documents 
No. 
Source 
Title 
Version 
[1] 
AUTOSAR 
AUTOSAR_SWS_CryptoAbstractionLibrary.pdf 
V1.2.0 
R4.0 
Rev 3 
[2] 
AUTOSAR 
AUTOSAR_TR_BSWModuleList.pdf 
V1.6.0 
R4.0 
Rev 3 
Scope of the Document 
This technical reference describes the general use of the Microsar Crypto Abstraction 
Library (CAL) software.
Technical Reference MICROSAR Crypto Abstraction Library 
2014, Vector Informatik GmbH 
Version: 2.2 
based on template version 5.2.0 
3 / 49 
Contents 
1 
Introduction................................................................................................................... 8 
1.1 
Architecture Overview ........................................................................................ 9 
2 
Functional Description ............................................................................................... 11 
2.1 
Features .......................................................................................................... 11 
2.2 
Initialization ...................................................................................................... 12 
2.3 
States .............................................................................................................. 12 
2.3.1 
Streaming Approach......................................................................... 13 
2.4 
Error Handling .................................................................................................. 13 
2.4.1 
Development Error Reporting ........................................................... 13 
2.4.2 
Production Code Error Reporting ..................................................... 13 
3 
Integration ................................................................................................................... 14 
3.1 
Scope of Delivery ............................................................................................. 14 
3.1.1 
Static Files ....................................................................................... 14 
3.1.2 
Dynamic Files .................................................................................. 15 
3.1.3 
Include Structure .............................................................................. 16 
3.2 
Compiler Abstraction and Memory Mapping ..................................................... 16 
4 
API Description ........................................................................................................... 18 
4.1 
Type Definitions ............................................................................................... 18 
4.2 
Services provided by CAL ................................................................................ 19 
4.2.1 
Cal_SymDecryptStart ....................................................................... 19 
4.2.2 
Cal_SymDecryptUpdate ................................................................... 20 
4.2.3 
Cal_SymDecryptFinish ..................................................................... 20 
4.2.4 
Cal_SymEncryptStart ....................................................................... 21 
4.2.5 
Cal_SymEncryptUpdate ................................................................... 22 
4.2.6 
Cal_SymEncryptFinish ..................................................................... 23 
4.2.7 
Cal_KeyDeriveStart.......................................................................... 23 
4.2.8 
Cal_KeyDeriveUpdate ...................................................................... 24 
4.2.9 
Cal_KeyDeriveFinish ........................................................................ 25 
4.2.10 
Cal_KeyExchangeCalcSecretStart ................................................... 25 
4.2.11 
Cal_KeyExchangeCalcSecretUpdate ............................................... 26 
4.2.12 
Cal_KeyExchangeCalcSecretFinish ................................................. 27 
4.2.13 
Cal_KeyExchangeCalcPubVal ......................................................... 27 
4.2.14 
Cal_RandomSeedStart .................................................................... 28 
4.2.15 
Cal_RandomSeedUpdate ................................................................ 29 
4.2.16 
Cal_RandomSeedFinish .................................................................. 29 
4.2.17 
Cal_RandomGenerate ..................................................................... 30
Technical Reference MICROSAR Crypto Abstraction Library 
2014, Vector Informatik GmbH 
Version: 2.2 
based on template version 5.2.0 
4 / 49 
4.2.18 
Cal_SignatureVerifyStart .................................................................. 30 
4.2.19 
Cal_SignatureVerifyUpdate .............................................................. 31 
4.2.20 
Cal_SignatureVerifyFinish ................................................................ 32 
4.2.21 
Cal_HashStart .................................................................................. 32 
4.2.22 
Cal_HashUpdate .............................................................................. 33 
4.2.23 
Cal_HashFinish ................................................................................ 33 
4.2.24 
Cal_SymKeyExtractStart .................................................................. 34 
4.2.25 
Cal_SymKeyExtrac

[Back to top](#_top)
