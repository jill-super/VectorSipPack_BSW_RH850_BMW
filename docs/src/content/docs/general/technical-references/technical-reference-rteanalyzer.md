---
title: "RteAnalyzer"
description: "Converted Vector Technical Reference: TechnicalReference_RteAnalyzer.pdf."
---

> **Converted from** [`Doc/TechnicalReferences/TechnicalReference_RteAnalyzer.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_RteAnalyzer.pdf) (30 pages). Machine-converted with PyMuPDF: running text and structure are preserved as Markdown, but **layout, figures, tables and formulas may differ from the original PDF**. For normative content, always consult the original PDF.

| Property | Value |
|---|---|
| Source | [`TechnicalReference_RteAnalyzer.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_RteAnalyzer.pdf) |
| Pages | 30 |
| PDF title | MICROSAR RTE Analyzer |
| Author | Sascha Sommer |

## Document outline

- 1 RTE Analyzer History
- 2 Introduction
- 3 Functional Description
- 4 RTE Analysis and Integration
  - 4.1 Scope of Delivery
    - 4.1.1 Static Files
    - 4.1.2 Dynamic Files
  - 4.2 Restrictions
  - 4.3 RTE Analyzer Command Line Options
  - 4.4 Analysis Report Contents
    - 4.4.1 Analyzed Files
    - 4.4.2 Configuration Parameters
    - 4.4.3 Findings
    - 4.4.4 Configuration Feedback
    - 4.4.5 Template Variant Check
  - 4.5 Integration into DaVinci CFG
- 5 Glossary and Abbreviations
  - 5.1 Glossary
  - 5.2 Abbreviations
- 6 Additional Copyrights
- 7 Contact

## Excerpt (first pages)

MICROSAR RTE Analyzer 
Technical Reference 
Version 1.0.0 
Authors 
Sascha Sommer 
Status 
Released
Technical Reference MICROSAR RTE Analyzer 
© 2017 Vector Informatik GmbH 
Version 1.0.0 
2 
based on template version 5.12.0 
Document Information 
History 
Author 
Date 
Version 
Remarks 
Sascha Sommer 
2015-09-25 
0.5 
Initial creation for RTE Analyzer 0.5.0 
Sascha Sommer 
2016-02-26 
0.6 
Update for RTE Analyzer 0.6.0 
Sascha Sommer 
2016-07-07 
0.7 
Described Configuration Feedback and 
Template Variant Check 
Sascha Sommer 
2016-10-20 
0.8 
Configuration Feedback extensions 
Sascha Sommer 
Charu Pathni 
2017-03-23 
0.9 
Updated for RTE Analyzer 0.9.0 
Removed BETA disclaimer 
Fixed chapter numbering 
Sascha Sommer 
2017-05-09 
1.0 
Update for RTE Analyzer 1.0.0 
Reference Documents 
No. 
Source 
Title 
Version 
[1] 
ISO 
ISO/IEC 9899:1990, Programming languages -C 
Second 
edition 
[2] 
AUTOSAR 
AUTOSAR_SWS_RTE.pdf 
4.2.2 
Scope of the Document 
This technical reference describes the general use of the MICROSAR RTE Analyzer static 
code analysis tool. This document is relevant for developers that want to integrate a 
generated RTE into an ECU with functional safety requirements. All aspects that concern 
the generation of the RTE are described in the technical reference of the RTE. 
Caution 
We have configured the programs in accordance with your specifications in the 
questionnaire. Whereas the programs do support other configurations than the one 
specified in your questionnaire, Vector´s release of the programs delivered to your 
company is expressly restricted to the configuration you have specified in the 
questionnaire.
Technical Reference MICROSAR RTE Analyzer 
© 2017 Vector Informatik GmbH 
Version 1.0.0 
3 
based on template version 5.12.0
Technical Reference MICROSAR RTE Analyzer 
© 2017 Vector Informatik GmbH 
Version 1.0.0 
4 
based on template version 5.12.0 
Contents 
1 
RTE Analyzer History ................................................................................................... 6 
2 
Introduction................................................................................................................... 7 
3 
Functional Description ................................................................................................. 8 
4 
RTE Analysis and Integration .................................................................................... 10 
4.1 
Scope of Delivery ............................................................................................. 10 
4.1.1 
Static Files ....................................................................................... 10 
4.1.2 
Dynamic Files .................................................................................. 12 
4.2 
Restrictions ...................................................................................................... 13 
4.3 
RTE Analyzer Command Line Options ............................................................. 13 
4.4 
Analysis Report Contents ................................................................................. 14 
4.4.1 
Analyzed Files .................................................................................. 14 
4.4.2 
Configuration Parameters ................................................................ 14 
4.4.3 
Findings ........................................................................................... 15 
4.4.4 
Configuration Feedback ................................................................... 22 
4.4.5 
Template Variant Check ................................................................... 24 
4.5 
Integration into DaVinci CFG............................................................................ 24 
5 
Glossary and Abbreviations ...................................................................................... 28 
5.1 
Glossary .......................................................................................................... 28 
5.2 
Abbreviations ................................................................................................... 28 
6 
Additional Copyrights ................................................................................................ 29 
7 
Contact ........................................................................................................................ 30
Technical Reference MICROSAR RTE Analyzer 
© 2017 Vector Informatik GmbH 
Version 1.0.0 
5 
based on template version 5.12.0 
Tables 
Table 1-1 
RTE Analyzer history .................................................................................. 6 
Table 3-1 
Supported features .................................................................................... 9 
Table 4-1 
Static files ................................................................................................. 11 
Table 4-2 
Assumed platform type sizes .................................................................... 12 
Table 4-3 
Generated files ......................................................................................... 13 
Table 4-4 
RTE Analyzer Command Line Options ...................................................... 14 
Table 4-5 
Analysis parameters that are extracted from the configuration .................. 15 
Table 4-6 
RTE Analyzer Findings ............................................................................. 22 
Table 5-1 
Glossary ................................................................................................... 28 
Table 5-2 
Abbreviations ............................................................................................ 28 
Table 6-1 
Free and Open Source Software Licenses ............................................... 29 
Figures 
Figure 4-1 
Project menu ............................................................................................ 25 
Figure 4-2 
External generation steps .......................................................

[Back to top](#_top)
