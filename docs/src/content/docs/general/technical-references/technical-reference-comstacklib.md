---
title: "ComStackLib"
description: "Converted Vector Technical Reference: TechnicalReference_ComStackLib.pdf."
---

> **Converted from** [`Doc/TechnicalReferences/TechnicalReference_ComStackLib.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_ComStackLib.pdf) (41 pages). Machine-converted with PyMuPDF: running text and structure are preserved as Markdown, but **layout, figures, tables and formulas may differ from the original PDF**. For normative content, always consult the original PDF.

| Property | Value |
|---|---|
| Source | [`TechnicalReference_ComStackLib.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_ComStackLib.pdf) |
| Pages | 41 |
| PDF title | MICROSAR ComStackLib |
| Author | Gunnar Meiss |

## Document outline

- 1 Component History
- 2 Introduction
  - 2.1 Architecture Overview
- 3 Functional Description
  - 3.1 CONFIG-CLASS of Data
  - 3.2 CONFIG-CLASS PRE-COMPILE Optimizations
    - 3.2.1 Optimize Const Data to Defines
    - 3.2.2 Optimize Bool Data in Structs
    - 3.2.3 Data Deduplication and Reduction
      - 3.2.3.1 Equal Data
      - 3.2.3.2 Unary and Binary Operations
    - 3.2.4 Data Streaming
  - 3.3 CONFIG-CLASS Independent Optimizations
    - 3.3.1 Sort Struct Elements
    - 3.3.2 Optimize Data Types
  - 3.4 SELECTABLE Optimizations
    - 3.4.1 Merge of VAR and CONST Based Data
  - 3.5 Freedom from Interference
- 4 Integration
  - 4.1 Dynamic Files
  - 4.2 IMPLEMENTATION-CONFIG-VARIANT dependent Data
  - 4.3 Optimization Levels
  - 4.4 MISRA, PRQA and Compiler Warnings
    - 4.4.1 General
    - 4.4.2 Bitfields
    - 4.4.3 <MSN>_Has Macros in the SELECTABLE Use Case
- 5 Configuration
  - 5.1 Configuration Variants
  - 5.2 Configuration with a GCE
- 6 Glossary and Abbreviations
  - 6.1 Glossary
  - 6.2 Abbreviations
- 7 Contact

## Excerpt (first pages)

MICROSAR ComStackLib 
Technical Reference 
ComStackLib based BSW generators 
Version 2.01.00 
Authors 
Gunnar Meiss 
Status 
Released
Technical Reference MICROSAR ComStackLib 
© 2017 Vector Informatik GmbH 
Version 2.01.00 
2 
based on template version 5.5.0 
Document Information 
History 
Author 
Date 
Version Remarks 
Gunnar Meiss 2013-03-25 1.00.00 
initial version 
Gunnar Meiss 2013-08-23 1.01.00 
ESCAN00068919 Remove 
<MSN>UseSignedDataTypesInIndexArrays 
ESCAN00070017 Remove <MSN>_Resource.xml 
Gunnar Meiss 2014-10-06 2.00.00 
ESCAN00078776 AR4-698: Post-Build Selectable 
(Identity Manager) 
Gunnar Meiss 2014-12-19 2.00.01 
ESCAN00080380 Minor typing and grammar corrections 
Gunnar Meiss 2016-03-30 2.00.02 
ESCAN00089127 Extend MD_CSL_3355_3356 with the 
aspects of the PRQA Rule 3358 and 3359 
ESCAN00089126 Support a justification for PRQA Rule 
310 and PCSymbolicNonDereferenciateablePointers 
Added chapter Freedom from Interference 
Gunnar Meiss 2016-07-19 2.00.03 
ESCAN00091055 Extend 
MD_CSL_3355_3356_3358_3359 with the aspects of 
PRQA Rule 3325 
Gunnar Meiss 2017-03-24 2.01.00 
STORYC-534: <MSN>MinimizeNumericalDataTypes is 
always enabled 
Reference Documents 
No. 
Source 
Title 
Version 
[1] 
Vector 
Compliance Documentation MISRA-C:2004 / MICROSAR 
2.2.0 
Scope of the Document 
This technical reference describes the general use of the ComStackLib based BSW 
generators.
Technical Reference MICROSAR ComStackLib 
© 2017 Vector Informatik GmbH 
Version 2.01.00 
3 
based on template version 5.5.0 
Caution 
We have configured the programs in accordance with your specifications in the 
questionnaire. Whereas the programs do support other configurations than the one 
specified in your questionnaire, Vector´s release of the programs delivered to your 
company is expressly restricted to the configuration you have specified in the 
questionnaire.
Technical Reference MICROSAR ComStackLib 
© 2017 Vector Informatik GmbH 
Version 2.01.00 
4 
based on template version 5.5.0 
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
CONFIG-CLASS of Data .................................................................................. 10 
3.2 
CONFIG-CLASS PRE-COMPILE Optimizations .............................................. 10 
3.2.1 
Optimize Const Data to Defines ....................................................... 10 
3.2.2 
Optimize Bool Data in Structs .......................................................... 11 
3.2.3 
Data Deduplication and Reduction ................................................... 12 
3.2.3.1 
Equal Data ..................................................................... 13 
3.2.3.2 
Unary and Binary Operations ......................................... 14 
3.2.4 
Data Streaming ................................................................................ 15 
3.3 
CONFIG-CLASS Independent Optimizations ................................................... 16 
3.3.1 
Sort Struct Elements ........................................................................ 16 
3.3.2 
Optimize Data Types ........................................................................ 17 
3.4 
SELECTABLE Optimizations ............................................................................ 18 
3.4.1 
Merge of VAR and CONST Based Data ........................................... 18 
3.5 
Freedom from Interference .............................................................................. 18 
4 
Integration ................................................................................................................... 19 
4.1 
Dynamic Files .................................................................................................. 19 
4.2 
IMPLEMENTATION-CONFIG-VARIANT dependent Data ................................ 21 
4.3 
Optimization Levels .......................................................................................... 22 
4.4 
MISRA, PRQA and Compiler Warnings ............................................................ 24 
4.4.1 
General ............................................................................................ 24 
4.4.2 
Bitfields ............................................................................................ 31 
4.4.3 
<MSN>_Has Macros in the SELECTABLE Use Case ...................... 32 
5 
Configuration .............................................................................................................. 33 
5.1 
Configuration Variants ...................................................................................... 33 
5.2 
Configuration with a GCE ................................................................................. 33 
6 
Glossary and Abbreviations ...................................................................................... 39 
6.1 
Glossary .......................................................................................................... 39 
6.2 
Abbreviations ................................................................................................... 40 
7 
Contact ........................................................................................................................ 41
Technical Reference MICROSAR ComStackLib 
© 2017 Vector Informatik GmbH 
Version 2.01.00 
5 
based on template version 5.5.0 
Illustrations 
Figure 2-1 
Embedded Code Aspects ........................................................................... 7 
Figure 2-2 
AUTOSAR 4.2 Architecture Overview ........................

[Back to top](#_top)
