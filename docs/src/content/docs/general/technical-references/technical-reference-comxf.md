---
title: "ComXf"
description: "Converted Vector Technical Reference: TechnicalReference_ComXf.pdf."
---

> **Converted from** [`Doc/TechnicalReferences/TechnicalReference_ComXf.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_ComXf.pdf) (15 pages). Machine-converted with PyMuPDF: running text and structure are preserved as Markdown, but **layout, figures, tables and formulas may differ from the original PDF**. For normative content, always consult the original PDF.

| Property | Value |
|---|---|
| Source | [`TechnicalReference_ComXf.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_ComXf.pdf) |
| Pages | 15 |
| PDF title | MICROSAR COM Based Transformer |
| Author | Cornelius Reuss, Sascha Sommer, Katharina Benkert |

## Document outline

- 1 Component History
- 2 Introduction
  - 2.1 Architecture Overview
- 3 Functional Description
  - 3.1 Features
    - 3.1.1 Deviations
  - 3.2 Initialization
  - 3.3 States
  - 3.4 Main Functions
  - 3.5 Error Handling
    - 3.5.1 Development Error Reporting
    - 3.5.2 Production Code Error Reporting
- 4 Integration
  - 4.1 Scope of Delivery
    - 4.1.1 Static Files
    - 4.1.2 Dynamic Files
- 5 API Description
  - 5.1 Services provided by ComXf
    - 5.1.1 ComXf_Init
    - 5.1.2 ComXf_DeInit
    - 5.1.3 ComXf_GetVersionInfo
    - 5.1.4 ComXf_<transformerId>
    - 5.1.5 ComXf_Inv_<transformerId>
- 6 Configuration
  - 6.1 Configuration Variants
  - 6.2 Enabling / Disabling of data transformation
- 7 Glossary and Abbreviations
  - 7.1 Glossary
  - 7.2 Abbreviations
- 8 Contact

## Excerpt (first pages)

MICROSAR COM Based Transformer 
Technical Reference 
Version 1.8.0 
Authors 
Cornelius Reuss, Sascha Sommer, Katharina Benkert 
Status 
Released
Technical Reference MICROSAR COM Based Transformer 
© 2017 Vector Informatik GmbH 
Version 1.8.0 
2 
based on template version 5.12.0 
Document Information 
History 
Author 
Date 
Version 
Remarks 
Cornelius Reuss 
2015-07-07 
1.0.0 
Initial version 
Cornelius Reuss 
2016-02-26 
1.1.0 
New Layout 
Sascha Sommer 
2016-05-17 
1.2.0 
Version update only 
Sascha Sommer 
2016-05-17 
1.3.0 
Version update only 
Cornelius Reuss 
2016-06-23 
1.4.0 
Version update only 
Katharina Benkert 
2016-11-17 
1.5.0 
Version update only 
Bernd Sigle 
2017-03-20 
1.6.0 
Version update only 
Bernd Sigle 
2017-06-06 
1.7.0 
Version update only 
Bernd Sigle 
2017-08-17 
1.8.0 
Support for AUTOSAR 4.3.0 
Reference Documents 
No. 
Source 
Title 
Version 
[1] 
AUTOSAR 
AUTOSAR_SWS_COMBasedTransformer.pdf 
4.3.0 
[2] 
AUTOSAR 
AUTOSAR_TR_BSWModuleList.pdf 
4.3.0 
[3] 
AUTOSAR 
AUTOSAR_SWS_COM.pdf 
4.3.0 
Scope of the Document 
This technical reference describes the general use of the COM Based Transformer. 
Caution 
We have configured the programs in accordance with your specifications in the 
questionnaire. Whereas the programs do support other configurations than the one 
specified in your questionnaire, Vector´s release of the programs delivered to your 
company is expressly restricted to the configuration you have specified in the 
questionnaire.
Technical Reference MICROSAR COM Based Transformer 
© 2017 Vector Informatik GmbH 
Version 1.8.0 
3 
based on template version 5.12.0 
Contents 
1 
Component History ...................................................................................................... 5 
2 
Introduction................................................................................................................... 6 
2.1 
Architecture Overview ........................................................................................ 6 
3 
Functional Description ................................................................................................. 7 
3.1 
Features ............................................................................................................ 7 
3.1.1 
Deviations .......................................................................................... 7 
3.2 
Initialization ........................................................................................................ 7 
3.3 
States ................................................................................................................ 7 
3.4 
Main Functions .................................................................................................. 7 
3.5 
Error Handling .................................................................................................... 7 
3.5.1 
Development Error Reporting ............................................................. 7 
3.5.2 
Production Code Error Reporting ....................................................... 8 
4 
Integration ..................................................................................................................... 9 
4.1 
Scope of Delivery ............................................................................................... 9 
4.1.1 
Static Files ......................................................................................... 9 
4.1.2 
Dynamic Files .................................................................................... 9 
5 
API Description ........................................................................................................... 10 
5.1 
Services provided by ComXf ............................................................................ 10 
5.1.1 
ComXf_Init ....................................................................................... 10 
5.1.2 
ComXf_DeInit................................................................................... 10 
5.1.3 
ComXf_GetVersionInfo .................................................................... 11 
5.1.4 
ComXf_<transformerId> ................................................................... 11 
5.1.5 
ComXf_Inv_<transformerId> ............................................................ 12 
6 
Configuration .............................................................................................................. 13 
6.1 
Configuration Variants ...................................................................................... 13 
6.2 
Enabling / Disabling of data transformation ...................................................... 13 
7 
Glossary and Abbreviations ...................................................................................... 14 
7.1 
Glossary .......................................................................................................... 14 
7.2 
Abbreviations ................................................................................................... 14 
8 
Contact ........................................................................................................................ 15
Technical Reference MICROSAR COM Based Transformer 
© 2017 Vector Informatik GmbH 
Version 1.8.0 
4 
based on template version 5.12.0 
Illustrations 
Figure 2-1 
AUTOSAR Architecture Overview ............................................................... 6 
Figure 6-1 
Enable Data Transformation ..................................................................... 13 
Tables 
Table 1-1 
Component history...................................................................................... 5 
Table 3-1 
Supported AUTOSAR standard conform features ....................................... 7 
Table 3-2 
Not supported AUTOSAR standard conform features ................................. 7 
Table 4-1 
Static files ...................................................................................................

[Back to top](#_top)
