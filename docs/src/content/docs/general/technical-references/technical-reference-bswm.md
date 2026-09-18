---
title: "BswM"
description: "Converted Vector Technical Reference: TechnicalReference_BswM.pdf."
---

> **Converted from** [`Doc/TechnicalReferences/TechnicalReference_BswM.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_BswM.pdf) (66 pages). Machine-converted with PyMuPDF: running text and structure are preserved as Markdown, but **layout, figures, tables and formulas may differ from the original PDF**. For normative content, always consult the original PDF.

| Property | Value |
|---|---|
| Source | [`TechnicalReference_BswM.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_BswM.pdf) |
| Pages | 66 |
| PDF title | Basic Software Mode Manager |
| Author | Leticia Garcia Herrera, Thomas Kuhl, Philipp Ritter |

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
  - 3.4 Mode Management
    - 3.4.1 Immediate Mode Handling
    - 3.4.2 Forced Immediate Mode Handling
    - 3.4.3 Deferred Mode Handling
  - 3.5 Execution of Action Lists
  - 3.6 Error Handling
    - 3.6.1 Development Error Reporting
    - 3.6.2 Production Code Error Reporting
- 4 Integration
  - 4.1 Scope of Delivery
    - 4.1.1 Static Files
    - 4.1.2 Dynamic Files
  - 4.2 Initialization of Other Software Modules
    - 4.2.1 Using the Basic Editor
    - 4.2.2 Using the Comfort View
  - 4.3 Support of Preconfigured State Machines (Auto-Configuration)
    - 4.3.1 Initialization
    - 4.3.2 ECU State Handling
    - 4.3.3 Communication Control
    - 4.3.4 Service Discovery Control
  - 4.4 Critical Sections
  - 4.5 Cyclic Task
  - 4.6 NvM – BswM configuration
- 5 API Description
  - 5.1 Type Definitions
  - 5.2 Services Provided by BswM
    - 5.2.1 BswM_InitMemory
    - 5.2.2 BswM_Init
    - 5.2.3 BswM_Deinit
    - 5.2.4 BswM_GetVersionInfo
    - 5.2.5 BswM_RequestMode

_71 further outline entries in the original._

## Excerpt (first pages)

MICROSAR BswM 
Technical Reference 
Version 7.00.00 
Authors 
Leticia Garcia Herrera, Thomas Kuhl, Philipp Ritter, 
Jochen Vorreiter 
Status 
Released
Technical Reference Basic Software Mode Manager 
© 2016 Vector Informatik GmbH 
Version 7.00.00 
2 
based on template version 4.11.3 
Document Information 
History 
Author 
Date 
Version 
Remarks 
Leticia Garcia, Thomas Kuhl 
2012-08-02 
1.00.00 
Creation of document. 
Leticia Garcia, Thomas Kuhl 
2012-09-27 
1.01.00 
Addition of feature, support of 
EthSM . Chapters 3.1, 4.1, 
5.2and 6.3. 
Leticia Garcia, Thomas Kuhl 
2013-01-31 
1.02.00 
Addition of feature, support of 
NvM. Chapter 3.1, 4.1, 5.2 
and 5.3. 
Leticia Garcia, Thomas Kuhl 
2012-03-26 
1.03.00 
Support of Post-build variant. 
Chapters 4.1, 4.2, 5.1and 5.2. 
Deviation from AUTOSAR. 
Header included: 
Com_Types.h. Chapter 6.1 
Leticia Garcia 
2013-10-21 
2.00.00 
Addition of extension in 
chapter 6.2. 
Deletion of limitations in 
chapter 6.3. 
DET errors added in chapter 
3.6.1. 
Dynamic files added in 
chapter 4.1.2. 
Chapter 4.2 was changed. 
Chapter 4.3 was added. 
Leticia Garcia 
2013-12-04 
2.00.01 
Chapter 3.3 was extended. 
Chapter 3.4.2 was added. 
Chapter 3.6.1 error code 
added. 
Chapter 4.5 was extended 
Chapter 6.2 was extended. 
Leticia Garcia 
2013-02-18 
2.01.00 
Extended chapters: 3.1, 3.1.2, 
3.6.1, 4.1.1, 5.2.15, 5.2.16, 
5.2.33, 5.2.34, 5.2.35, 5.2.36 
5.3 and 6.2.1. 
Added chapters: 4.3.3, 5.6, 
and 6.2.2. Removed deviation 
about 
Com_IpduGroupControl 
usage. 
Philipp Ritter 
2014-06-13 
3.00.00 
Extended chapters: 3.1.2, 3.5, 
5.6.1, 6.2.1, 6.2.8 
Added chapters: 5.2.37, 
6.2.10, 6.2.11 
Updated Figures: Figure 3-2,
Technical Reference Basic Software Mode Manager 
© 2016 Vector Informatik GmbH 
Version 7.00.00 
3 
based on template version 4.11.3 
Figure 3-3 
Philipp Ritter 
2014-10-22 
4.00.00 
Extended Chapters: 3.1, 
3.6.1, 4.1.1, 4.3.3, 5.2.4 
Added chapters: 5.2.38 
Philipp Ritter 
2015-02-02 
5.00.00 
Extended chapters: 3.6.1, 
4.3.3, 6.3.3, 6.3.4 
Added chapters: 5.2.19 
Removed: Limitation for 
multiple configurations 
Philipp Ritter 
2015-07-29 
6.00.00 
Extended chapters: 3.1, 3.1.2, 
3.6.1, 4.3.3, 5.3 
Added chapters: 4.3.4, 
5.2.23, 5.2.27, 5.2.28, 5.2.29, 
5.2.30, 5.2.31, 5.2.32 
Philipp Ritter 
2015-12-10 
6.00.01 
Updated Figure 4-6 
Jochen Vorreiter 
2016-11-15 
7.00.00 
Added chapters: 5.2.8 and 
5.2.12 
Reference Documents 
No. 
Source 
Title 
Version 
[1] AUTOSAR 
AUTOSAR_SWS_BSWModeManager.pdf 
1.4.0 
[2] AUTOSAR 
AUTOSAR_EXP_ModemanagementGuide 
2.1.0 
[3] AUTOSAR 
AUTOSAR_SWS_DevelopmentErrorTracer.pdf 
3.2.0 
[4] AUTOSAR 
AUTOSAR_TR_BSWModuleList.pdf 
1.6.0 
[5] AUTOSAR 
AUTOSAR_SWS_DiagnosticEventManager.pdf 
4.2.0 
[6] Vector 
TechnicalReference_Rte.pdf 
see delivery 
[7] Vector 
TechnicalReference_PostBuildLoadable.pdf 
see delivery 
[8] Vector 
TechnicalReference_Com.pdf 
see delivery 
[9] Vector 
TechnicalReference_IdentityManager.pdf 
see delivery
Technical Reference Basic Software Mode Manager 
© 2016 Vector Informatik GmbH 
Version 7.00.00 
4 
based on template version 4.11.3 
Scope of the Document 
This technical reference describes the general use of the AUTOSAR Basic Software 
module BSW Mode Manager (BswM). 
Caution 
We have configured the programs in accordance with your specifications in the 
questionnaire. Whereas the programs do support other configurations than the one 
specified in your questionnaire, Vector’s release of the programs delivered to your 
company is expressly restricted to the configuration you have specified in the 
questionnaire.
Technical Reference Basic Software Mode Manager 
© 2016 Vector Informatik GmbH 
Version 7.00.00 
5 
based on template version 4.11.3 
Contents 
1 
Component History .................................................................................................... 10 
2 
Introduction................................................................................................................. 11 
2.1 
Architecture Overview ...................................................................................... 11 
3 
Functional Description ............................................................................................... 13 
3.1 
Features .......................................................................................................... 13 
3.1.1 
Deviations ........................................................................................ 14 
3.1.2 
Additions/ Extensions ....................................................................... 14 
3.2 
Initialization ...................................................................................................... 14 
3.3 
States .............................................................................................................. 14 
3.4 
Mode Management .......................................................................................... 16 
3.4.1 
Immediate Mode Handling ............................................................... 17 
3.4.2 
Forced Immediate Mode Handling ................................................... 17 
3.4.3 
Deferred Mode Handling .................................................................. 17 
3.5 
Execution of Action Lists .................................................................................. 20 
3.6 
Error Handling .................................................................................................. 20 
3.6.1 
Development Error Reporting ........................................................... 20 
3.6.2 
Production Code Error Reporting ..................................................... 22 
4 
Integration ................................................................................................................... 23 
4.1 
Scope of Delivery ............................................................................................. 23 
4.1.1 
Static Files .....................................................

[Back to top](#_top)
