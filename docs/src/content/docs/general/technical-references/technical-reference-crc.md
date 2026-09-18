---
title: "Crc"
description: "Converted Vector Technical Reference: TechnicalReference_Crc.pdf."
---

> **Converted from** [`Doc/TechnicalReferences/TechnicalReference_Crc.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_Crc.pdf) (23 pages). Machine-converted with PyMuPDF: running text and structure are preserved as Markdown, but **layout, figures, tables and formulas may differ from the original PDF**. For normative content, always consult the original PDF.

| Property | Value |
|---|---|
| Source | [`TechnicalReference_Crc.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_Crc.pdf) |
| Pages | 23 |
| PDF title | MICROSAR CRC |
| Author | Michael Goß |

## Document outline

- 1 Component History
- 2 Introduction
  - 2.1 Architecture Overview
- 3 Functional Description
  - 3.1 Features
    - 3.1.1 Deviations
    - 3.1.2 Additions/ Extensions
  - 3.2 Initialization
  - 3.3 States
  - 3.4 Main Functions
  - 3.5 Error Handling
    - 3.5.1 Development Error Reporting
    - 3.5.2 Production Code Error Reporting
    - 3.5.3 Parameter Checking
- 4 Integration
  - 4.1 Scope of Delivery
    - 4.1.1 Static Files
    - 4.1.2 Dynamic Files
  - 4.2 Include Structure
- 5 API Description
  - 5.1 Type Definitions
  - 5.2 Interrupt Service Routines provided by CRC
  - 5.3 Services provided by CRC
    - 5.3.1 Crc_CalculateCRC8
    - 5.3.2 Crc_CalculateCRC8H2F
    - 5.3.3 Crc_CalculateCRC16
    - 5.3.4 Crc_CalculateCRC32
    - 5.3.5 Crc_CalculateCRC32P4
    - 5.3.6 Crc_CalculateCRC64
    - 5.3.7 Crc_GetVersionInfo
  - 5.4 Services used by CRC
  - 5.5 Callback Functions
  - 5.6 Configurable Interfaces
    - 5.6.1 Notifications
    - 5.6.2 Callout Functions
    - 5.6.3 Hook Functions
- 6 Configuration
  - 6.1 Configuration Variants
- 7 Glossary and Abbreviations
  - 7.1 Glossary

_2 further outline entries in the original._

## Excerpt (first pages)

MICROSAR CRC 
Technical Reference 
Version 4.03.00 
Authors 
Michael Goß 
Status 
Released
Technical Reference MICROSAR CRC 
© 2016 Vector Informatik GmbH 
Version 4.03.00 
2 
based on template version 5.9.0 
Document Information 
History 
Author 
Date 
Version 
Remarks 
Tobias Schmid 
2006-12-13 
1.0 
Initial Version 
Tobias Schmid 
2008-01-21 
3.00.00 
Update to ASR 2.1 
Changed versioning to new notation 
Claudia Mausz 
2008-05-19 
4.00.00 
Update to ASR 3 
Add Crc8 calculation 
Michael Goß 
2014-11-18 
4.01.00 
Update to ASR 4 
Add Crc8H2F calculation 
Michael Goß 
2015-05-08 
4.02.00 
SafeBSW 
Add Crc32P4 calculation 
Michael Goß 
2016-11-24 
4.03.00 
Add Crc64 calculation 
Reference Documents 
No. 
Source 
Title 
Version 
[1] 
AUTOSAR 
AUTOSAR_SWS_CRCLibrary.pdf 
V4.2.0 
[2] 
AUTOSAR 
AUTOSAR_SWS_CRCLibrary.pdf 
V4.3.0 
[3] 
AUTOSAR 
AUTOSAR_TR_BSWModuleList.pdf 
V1.6.0 
Scope of the Document 
This technical reference describes the general use of the CRC library basis software. 
There are no aspects which are controller specific. 
Caution 
We have configured the programs in accordance with your specifications in the 
questionnaire. Whereas the programs do support other configurations than the one 
specified in your questionnaire, Vector´s release of the programs delivered to your 
company is expressly restricted to the configuration you have specified in the 
questionnaire.
Technical Reference MICROSAR CRC 
© 2016 Vector Informatik GmbH 
Version 4.03.00 
3 
based on template version 5.9.0 
Contents 
1 
Component History ...................................................................................................... 6 
2 
Introduction................................................................................................................... 7 
2.1 
Architecture Overview ........................................................................................ 8 
3 
Functional Description ................................................................................................. 9 
3.1 
Features ............................................................................................................ 9 
3.1.1 
Deviations .......................................................................................... 9 
3.1.2 
Additions/ Extensions ....................................................................... 10 
3.2 
Initialization ...................................................................................................... 10 
3.3 
States .............................................................................................................. 10 
3.4 
Main Functions ................................................................................................ 10 
3.5 
Error Handling .................................................................................................. 10 
3.5.1 
Development Error Reporting ........................................................... 10 
3.5.2 
Production Code Error Reporting ..................................................... 10 
3.5.3 
Parameter Checking ........................................................................ 10 
4 
Integration ................................................................................................................... 11 
4.1 
Scope of Delivery ............................................................................................. 11 
4.1.1 
Static Files ....................................................................................... 11 
4.1.2 
Dynamic Files .................................................................................. 11 
4.2 
Include Structure .............................................................................................. 11 
5 
API Description ........................................................................................................... 12 
5.1 
Type Definitions ............................................................................................... 12 
5.2 
Interrupt Service Routines provided by CRC .................................................... 12 
5.3 
Services provided by CRC ............................................................................... 12 
5.3.1 
Crc_CalculateCRC8 ......................................................................... 12 
5.3.2 
Crc_CalculateCRC8H2F .................................................................. 13 
5.3.3 
Crc_CalculateCRC16 ....................................................................... 14 
5.3.4 
Crc_CalculateCRC32 ....................................................................... 15 
5.3.5 
Crc_CalculateCRC32P4 .................................................................. 17 
5.3.6 
Crc_CalculateCRC64 ....................................................................... 18 
5.3.7 
Crc_GetVersionInfo .......................................................................... 19 
5.4 
Services used by CRC ..................................................................................... 19 
5.5 
Callback Functions ........................................................................................... 20 
5.6 
Configurable Interfaces .................................................................................... 20 
5.6.1 
Notifications ..................................................................................... 20 
5.6.2 
Callout Functions ............................................................................. 20
Technical Reference MICROSAR CRC 
© 2016 Vector Informatik GmbH 
Version 4.03.00 
4 
based on template version 5.9.0 
5.6.3 
Hook Functions ................................................................................ 20 
6 
Configuration .............................................................................................................. 21 
6.1 
Configuration Variants .....................................................................................

[Back to top](#_top)
