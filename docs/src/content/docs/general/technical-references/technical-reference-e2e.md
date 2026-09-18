---
title: "E2E"
description: "Converted Vector Technical Reference: TechnicalReference_E2E.pdf."
---

> **Converted from** [`Doc/TechnicalReferences/TechnicalReference_E2E.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_E2E.pdf) (26 pages). Machine-converted with PyMuPDF: running text and structure are preserved as Markdown, but **layout, figures, tables and formulas may differ from the original PDF**. For normative content, always consult the original PDF.

| Property | Value |
|---|---|
| Source | [`TechnicalReference_E2E.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_E2E.pdf) |
| Pages | 26 |
| PDF title | MICROSAR E2E |
| Author | Michael Goß |

## Document outline

- 1 Component History
- 2 Introduction
  - 2.1 Architecture Overview
- 3 Functional Description
  - 3.1 Features
  - 3.2 E2E Communication Protection
    - 3.2.1 Communication Faults
    - 3.2.2 Fault Model
    - 3.2.3 Protection mechanisms
    - 3.2.4 Detected Communication Faults
  - 3.3 Initialization
  - 3.4 States
  - 3.5 Main Functions
  - 3.6 Error Handling
- 4 Integration
  - 4.1 Scope of Delivery
    - 4.1.1 Static Files
    - 4.1.2 Dynamic Files
  - 4.2 Include Structure
  - 4.3 Make
  - 4.4 Critical Sections
  - 4.5 Invocation of Protect and Check service
- 5 API Description
  - 5.1 Type Definitions
  - 5.2 Services provided by E2E
    - 5.2.1 E2E_PXXProtect
    - 5.2.2 E2E_PXXProtectInit
    - 5.2.3 E2E_PXXCheck
    - 5.2.4 E2E_PXXCheckInit
    - 5.2.5 E2E_PXXMapStatusToSM
    - 5.2.6 E2E_SMCheck
    - 5.2.7 E2E_SMCheckInit
  - 5.3 Services used by E2E
  - 5.4 Callback Functions
  - 5.5 Configurable Interfaces
- 6 Configuration
- 7 Glossary and Abbreviations
  - 7.1 Glossary
  - 7.2 Abbreviations
- 8 Contact

## Excerpt (first pages)

MICROSAR E2E 
Technical Reference 
Version 1.02.00 
Authors 
Michael Goß 
Status 
Released
Technical Reference MICROSAR E2E 
© 2017 Vector Informatik GmbH 
Version 1.02.00 
2 
based on template version 5.12.0 
Document Information 
History 
Author 
Date 
Version 
Remarks 
Michael Goß 
2015-07-03 
1.00.00 
Initial version 
Michael Goß 
2015-10-21 
1.01.00 
Support of JLR E2E profile 
Michael Goß 
2016-11-25 
1.02.00 
Support of E2E profile 7 
Reference Documents 
No. 
Source 
Title 
Version 
[1] 
AUTOSAR 
AUTOSAR_SWS_E2ELibrary.pdf 
V4.2.1 
[2] 
AUTOSAR 
AUTOSAR_SWS_E2ELibrary.pdf 
V4.3.0 
[3] 
AUTOSAR 
AUTOSAR_TR_BSWModuleList.pdf 
V4.2.1 
Scope of the Document 
This technical reference describes the general use of the E2E library basis software. The 
E2E Library was developed according to ISO 26262 for use in safety-related items. There 
are no aspects which are controller specific. 
Caution 
We have configured the programs in accordance with your specifications in the 
questionnaire. Whereas the programs do support other configurations than the one 
specified in your questionnaire, Vector´s release of the programs delivered to your 
company is expressly restricted to the configuration you have specified in the 
questionnaire.
Technical Reference MICROSAR E2E 
© 2017 Vector Informatik GmbH 
Version 1.02.00 
3 
based on template version 5.12.0 
Contents 
1 
Component History ...................................................................................................... 6 
2 
Introduction................................................................................................................... 7 
2.1 
Architecture Overview ........................................................................................ 8 
3 
Functional Description ............................................................................................... 10 
3.1 
Features .......................................................................................................... 10 
3.2 
E2E Communication Protection ....................................................................... 10 
3.2.1 
Communication Faults ..................................................................... 10 
3.2.2 
Fault Model ...................................................................................... 11 
3.2.3 
Protection mechanisms .................................................................... 11 
3.2.4 
Detected Communication Faults ...................................................... 12 
3.3 
Initialization ...................................................................................................... 12 
3.4 
States .............................................................................................................. 12 
3.5 
Main Functions ................................................................................................ 13 
3.6 
Error Handling .................................................................................................. 13 
4 
Integration ................................................................................................................... 14 
4.1 
Scope of Delivery ............................................................................................. 14 
4.1.1 
Static Files ....................................................................................... 14 
4.1.2 
Dynamic Files .................................................................................. 14 
4.2 
Include Structure .............................................................................................. 15 
4.3 
Make ................................................................................................................ 15 
4.4 
Critical Sections ............................................................................................... 16 
4.5 
Invocation of Protect and Check service .......................................................... 16 
5 
API Description ........................................................................................................... 17 
5.1 
Type Definitions ............................................................................................... 17 
5.2 
Services provided by E2E ................................................................................ 18 
5.2.1 
E2E_PXXProtect .............................................................................. 18 
5.2.2 
E2E_PXXProtectInit ......................................................................... 19 
5.2.3 
E2E_PXXCheck ............................................................................... 20 
5.2.4 
E2E_PXXCheckInit .......................................................................... 20 
5.2.5 
E2E_PXXMapStatusToSM ............................................................... 21 
5.2.6 
E2E_SMCheck ................................................................................. 21 
5.2.7 
E2E_SMCheckInit ............................................................................ 22 
5.3 
Services used by E2E ...................................................................................... 23 
5.4 
Callback Functions ........................................................................................... 23 
5.5 
Configurable Interfaces .................................................................................... 23
Technical Reference MICROSAR E2E 
© 2017 Vector Informatik GmbH 
Version 1.02.00 
4 
based on template version 5.12.0 
6 
Configuration .............................................................................................................. 24 
7 
Glossary and Abbreviations ...................................................................................... 25 
7.1 
Glossary .......................................................................................................... 25 
7.2 
Abbreviations ............................................................

[Back to top](#_top)
