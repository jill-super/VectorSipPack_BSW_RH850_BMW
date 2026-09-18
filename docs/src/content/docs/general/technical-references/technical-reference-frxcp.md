---
title: "FrXcp"
description: "Converted Vector Technical Reference: TechnicalReference_FrXcp.pdf."
---

> **Converted from** [`Doc/TechnicalReferences/TechnicalReference_FrXcp.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_FrXcp.pdf) (37 pages). Machine-converted with PyMuPDF: running text and structure are preserved as Markdown, but **layout, figures, tables and formulas may differ from the original PDF**. For normative content, always consult the original PDF.

| Property | Value |
|---|---|
| Source | [`TechnicalReference_FrXcp.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_FrXcp.pdf) |
| Pages | 37 |
| PDF title | Technical Reference |
| Author | Andreas Herkommer |

## Document outline

- 1 Document Information
  - 1.1 History
  - 1.2 Reference Documents
  - 1.3 Scope of this document
- 2 Overview
  - 2.1 Abbreviations and Items
  - 2.2 Naming Conventions
  - 2.3 Architecture Overview
    - 2.3.1 XCP Architecture
    - 2.3.2 Detailed Architecture of XCP
    - 2.3.3 Include structure
- 3 Functional Description
  - 3.1 Overview of the Functional Scope
- 4 Integration into the Application
  - 4.1 XCP Transport Layer Files
  - 4.2 Auxiliary Files
  - 4.3 Version Changes
  - 4.4 Initialization
  - 4.5 Main Functions
  - 4.6 Critical Sections
    - 4.6.1 FRXCP_EXCLUSIVE_AREA_0
    - 4.6.2 FRXCP_EXCLUSIVE_AREA_1
    - 4.6.3 FRXCP_EXCLUSIVE_AREA_2
  - 4.7 PDU Mode
  - 4.8 PDUs
  - 4.9 Initialized Memory
  - 4.10 Memory Mapping
  - 4.11 Activation Macros
  - 4.12 Integration Notes
    - 4.12.1 Alignment
    - 4.12.2 CANape Buffer ID
    - 4.12.3 Resume Mode
      - 4.12.3.1 Store FrXcp data to NVM
      - 4.12.3.2 Restore FrXcp data from NVM
- 5 Configuration
  - 5.1 A2L File
  - 5.2 Manual Configuration
    - 5.2.1 Pre-Compile Configuration
    - 5.2.2 Link Time & Post Build Configuration
- 6 Description of the API

_32 further outline entries in the original._

## Excerpt (first pages)

XCP on FlexRay 
Technical Reference 
Version 1.13.00 
Status 
Released
Technical Reference XCP on FlexRay 
2016, Vector Informatik GmbH 
Version: 1.13.00 
1 
Document Information 
1.1 
History 
Date 
Version Remarks 
2007-06-11 1.00.00 
Creation of document 
2007-07-09 1.01.00 
Support of AUTOSAR Memory Mapping 
2007-07-30 1.02.00 
New GENy GUI features 
2007-09-10 1.03.00 
Update for Vector-Release 
2008-02-25 1.04.00 
New Feature “Use Tx Confirmation” 
2009-02-09 1.05.00 
Support of Ecuc Import/Export 
2009-09-09 1.06.00 
Support a2l export 
2010-08-25 1.07.00 
ESCAN00044862: Multiple Transport Layer support 
2010-12-10 1.08.00 
ESCAN00046308: AR3-297 AR3-894: Support PduInfoType 
instead of the DataPtr 
2011-08-11 1.09.00 
Support of Post Build configuration variant 
2012-11-09 1.10.00 
Added Option for AMD Runtime Measurement 
ESCAN00058756 Describe use case for PDU length 
ESCAN00065888 Cluster Name should be Cluster ID 
ESCAN00066648 Describe usage of new Exclusive Areas 
2013-09-10 1.11.00 
ESCAN00070207 Optimization - 32bit copy 
ESCAN00070081 Describe resume mode 
ESCAN00069779 Missing description of "Set PduMode Support" 
Feature in GENy 
ESCAN00067440 Max CTO must not be greater than Max DTO 
2014-08-15 1.11.01 
ESCAN00077234 AR3-2679: Description BCD-coded return-
value of FrXcp_GetVersionInfo() in TechRef 
2015-05-05 1.12.00 
Removed chapter GENy 
ESCAN00083373 Tx Confirmation Timeout Timer 
ESCAN00083375 Missing entries in root config structure 
2016-10-13 1.13.00 
ESCAN00092303 FrXcp_Control API replaced by global Variable 
Table 1-1 History of the Document 
1.2 
Reference Documents 
Index and Document Name 
[1] XCP -Part 2- Protocol Layer Specification -1.1.pdf 
[2] XCP -Part 3- Transport Layer Specification XCP on FlexRay -1.1.pdf 
[3] API specification of Development Error Tracer, Version 1.0.0 of 2005-07-08 
[4] Specification of Platform Types Version 1.1.0 of 2005-04-29
Technical Reference XCP on FlexRay 
2016, Vector Informatik GmbH 
Version: 1.13.00 
[5] Specification of Standard Types Version 1.0.3 of 2005-12-13 
[6] TechnicalReference_Asr_Xcp.pdf 
Table 1-2 Reference Documents 
1.3 
Scope of this document 
This document describes the features, API, configuration and integration of the XCP 
Transport Layer for FlexRay. The XCP Protocol Layer, which is already described within a 
separate document [6], is not covered by this document. 
Please also refer to “The Universal Measurement and Calibration Protocol Family” 
specification by ASAM e.V.
Technical Reference XCP on FlexRay 
2016, Vector Informatik GmbH 
Version: 1.13.00 
Contents 
1 
Document Information ................................................................................................. 2 
1.1 
History ............................................................................................................... 2 
1.2 
Reference Documents ....................................................................................... 2 
1.3 
Scope of this document...................................................................................... 3 
2 
Overview ....................................................................................................................... 8 
2.1 
Abbreviations and Items ..................................................................................... 8 
2.2 
Naming Conventions .......................................................................................... 9 
2.3 
Architecture Overview ........................................................................................ 9 
2.3.1 
XCP Architecture ................................................................................ 9 
2.3.2 
Detailed Architecture of XCP ............................................................ 11 
2.3.3 
Include structure .............................................................................. 11 
3 
Functional Description ............................................................................................... 12 
3.1 
Overview of the Functional Scope .................................................................... 12 
4 
Integration into the Application ................................................................................. 13 
4.1 
XCP Transport Layer Files ............................................................................... 13 
4.2 
Auxiliary Files ................................................................................................... 14 
4.3 
Version Changes.............................................................................................. 14 
4.4 
Initialization ...................................................................................................... 14 
4.5 
Main Functions ................................................................................................ 14 
4.6 
Critical Sections ............................................................................................... 14 
4.6.1 
FRXCP_EXCLUSIVE_AREA_0 ....................................................... 15 
4.6.2 
FRXCP_EXCLUSIVE_AREA_1 ....................................................... 15 
4.6.3 
FRXCP_EXCLUSIVE_AREA_2 ....................................................... 15 
4.7 
PDU Mode ....................................................................................................... 15 
4.8 
PDUs ............................................................................................................... 15 
4.9 
Initialized Memory ............................................................................................ 16 
4.10 
Memory Mapping ............................................................................................. 16 
4.11 
Activation Macros ............................................................................................. 16 
4.12 
Integration Notes.............................................................................................. 16 
4.12.1 
Ali

[Back to top](#_top)
