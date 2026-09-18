---
title: "Cry 30 Rh850Icus"
description: "Converted Vector Technical Reference: TechnicalReference_Cry_30_Rh850Icus.pdf."
---

> **Converted from** [`Doc/TechnicalReferences/TechnicalReference_Cry_30_Rh850Icus.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_Cry_30_Rh850Icus.pdf) (81 pages). Machine-converted with PyMuPDF: running text and structure are preserved as Markdown, but **layout, figures, tables and formulas may differ from the original PDF**. For normative content, always consult the original PDF.

| Property | Value |
|---|---|
| Source | [`TechnicalReference_Cry_30_Rh850Icus.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_Cry_30_Rh850Icus.pdf) |
| Pages | 81 |
| PDF title | MICROSAR CRY DRIVER |
| Author | Tobias Finke |

## Document outline

- 1 Component History
- 2 Introduction
  - 2.1 Architecture Overview
- 3 Functional Description
  - 3.1 Features
  - 3.2 Initialization
  - 3.3 States
  - 3.4 Main Functions
  - 3.5 Asynchronous Handling
  - 3.6 Key Handling
  - 3.7 Key Mapping
  - 3.8 Key Update
  - 3.9 General procedure of service execution
  - 3.10 Timeout Handling
  - 3.11 Error Handling
    - 3.11.1 Development Error Reporting
    - 3.11.2 Production Code Error Reporting
  - 3.12 Self Test
- 4 Integration
  - 4.1 Scope of Delivery
    - 4.1.1 Static Files
    - 4.1.2 Dynamic Files
    - 4.1.3 Callout Files
  - 4.2 Critical Sections
  - 4.3 Include Structure
  - 4.4 Compiler Abstraction and Memory Mapping
- 5 API Description
  - 5.1 Interfaces Overview
  - 5.2 Type Definitions
  - 5.3 Structures
    - 5.3.1 Configuration structures
      - 5.3.1.1 Cry_30_Rh850Icus_AesEncrypt128ConfigType
      - 5.3.1.2 Cry_30_Rh850Icus_AesDecrypt128ConfigType
      - 5.3.1.3 Cry_30_Rh850Icus_CmacAes128GenConfigType
      - 5.3.1.4 Cry_30_Rh850Icus_CmacAes128VerConfigType
      - 5.3.1.5 Cry_30_Rh850Icus_KeyExtractConfigType
      - 5.3.1.6 Cry_30_Rh850Icus_KeyWrapSymConfigType
      - 5.3.1.7 Cry_30_Rh850Icus_RngConfigType
  - 5.4 Services provided by CRY_30_RH850ICUS
    - 5.4.1 Cry_30_Rh850Icus_Init

_60 further outline entries in the original._

## Excerpt (first pages)

MICROSAR CRY DRIVER 
Technical Reference 
DrvCry_Rh850Icus 
Version 1.06.01 
Authors 
Tobias Finke 
Status 
Released
Technical Reference MICROSAR CRY DRIVER 
© 2017 Vector Informatik GmbH 
Version 1.06.01 
2 
Based on template version 5.2.0 
Document Information 
History 
Author 
Date 
Version 
Remarks 
Tobias Finke 
2015-05-22 
1.00.00 
Initial Version of MICROSAR CRY DRIVER 
Tobias Finke 
2015-07-28 
1.01.00 
- Added Sym Key Wrapping Service. 
- Added prerequisites for the Initialization. 
- Added Limitation for multiple calls of 
some Cry_<Primitive>Update() functions. 
Tobias Finke 
2015-08-20 
1.02.00 
- Added Limitation: Different Services can’t 
be accessed in parallel. 
- Added description for aborting services. 
- Changed include structure. 
Tobias Finke 
2016-01-11 
1.02.01 
- Cry_ShePrngGenerate accepts a 
resultLength smaller than 16 byte. 
Tobias Finke 
2016-06-17 
1.03.00 
- Config option if length of mac in 
MacVerify is interpreted as bits. 
- Config option how keyIds are mapped. 
- Config option for ICUS base address. 
- Change in the way how M4 and M5 are 
returned after key provisioning. 
Tobias Finke 
2016-08-01 
1.03.01 
- Added Timeout-API 
- Changed default mapping in the mapped 
Use-Case for RAM_KEY from 0xEE to 
0x00. 
Tobias Finke 
2016-11-24 
1.04.00 
- Added Configuration with DaVinci 
Configurator 5 
- Removed 
SymKeyWrapForkeyProvisioning 
Tobias Finke 
2017-04-06 
1.05.00 
- Updated function descriptions 
- Config option for FHVE support 
- Config option for hardware error code 
callout 
- Config option for data flash control 
callouts 
- Config option for data flash 
synchronization callouts. 
- Description of exclusive areas 
Tobias Finke 
2017-04-13 
1.05.01 
- Fixed formatting and spelling 
Tobias Finke 
2017-07.14 
1.05.02 
- Adaption to base component 
Tobias Finke 
2017-10-12 
1.06.00 
- Added Self Test 
- SafeBsw Release 
Tobias Finke 
2017-10-19 
1.06.01 
- Changed include structure
Technical Reference MICROSAR CRY DRIVER 
© 2017 Vector Informatik GmbH 
Version 1.06.01 
3 
Based on template version 5.2.0 
Reference Documents 
No. 
Source 
Title 
Version 
[1] 
AUTOSAR 
AUTOSAR_SWS_CryptoServiceManager.pdf 
1.2.0 
[2] 
AUTOSAR 
AUTOSAR_TR_BSWModuleList.pdf 
1.6.0 
[3] 
HIS 
SHE - Functional Specification 
1.1 
[4] 
RENESAS 
User’s Manual: RH850/F1L ICUSB 
1.00 
Caution 
This symbol calls your attention to warnings. 
Caution 
We have configured the programs in accordance with your specifications in the 
questionnaire. Whereas the programs do support other configurations than the one 
specified in your questionnaire, Vector´s release of the programs delivered to your 
company is expressly restricted to the configuration you have specified in the 
questionnaire.
Technical Reference MICROSAR CRY DRIVER 
© 2017 Vector Informatik GmbH 
Version 1.06.01 
4 
Based on template version 5.2.0 
Contents 
1 
Component History ...................................................................................................... 9 
2 
Introduction................................................................................................................. 11 
2.1 
Architecture Overview ...................................................................................... 12 
3 
Functional Description ............................................................................................... 14 
3.1 
Features .......................................................................................................... 14 
3.2 
Initialization ...................................................................................................... 14 
3.3 
States .............................................................................................................. 15 
3.4 
Main Functions ................................................................................................ 16 
3.5 
Asynchronous Handling ................................................................................... 16 
3.6 
Key Handling ................................................................................................... 17 
3.7 
Key Mapping .................................................................................................... 17 
3.8 
Key Update ...................................................................................................... 18 
3.9 
General procedure of service execution ........................................................... 18 
3.10 
Timeout Handling ............................................................................................. 21 
3.11 
Error Handling .................................................................................................. 23 
3.11.1 
Development Error Reporting ........................................................... 23 
3.11.2 
Production Code Error Reporting ..................................................... 23 
3.12 
Self Test ........................................................................................................... 23 
4 
Integration ................................................................................................................... 24 
4.1 
Scope of Delivery ............................................................................................. 24 
4.1.1 
Static Files ....................................................................................... 24 
4.1.2 
Dynamic Files .................................................................................. 25 
4.1.3 
Callout Files ..................................................................................... 25 
4.2 
Critical Sections ............................................................................................... 26 
4.3 
Include Structure .............................................................................................. 27 
4.4 
Compiler Abstraction and Memory Mapping ..................................................... 28 
5 
API Description .

[Back to top](#_top)
