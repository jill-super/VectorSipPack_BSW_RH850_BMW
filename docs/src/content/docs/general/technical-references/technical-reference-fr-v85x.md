---
title: "Fr V85x"
description: "Converted Vector Technical Reference: TechnicalReference_Fr_V85x.pdf."
---

> **Converted from** [`Doc/TechnicalReferences/TechnicalReference_Fr_V85x.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_Fr_V85x.pdf) (24 pages). Machine-converted with PyMuPDF: running text and structure are preserved as Markdown, but **layout, figures, tables and formulas may differ from the original PDF**. For normative content, always consult the original PDF.

| Property | Value |
|---|---|
| Source | [`TechnicalReference_Fr_V85x.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_Fr_V85x.pdf) |
| Pages | 24 |
| PDF title | MICROSAR Fr ERay |
| Author | Juergen Schaeffer, Mario Kunz, Sebastian Gärtner, Sebastian Schmar, Oliver Reineke, Roland Hocke, Matthias Müller |

## Document outline

- 1 Document Information
  - 1.1 History
  - 1.2 Reference Documents
  - 1.3 Scope of the Document
- 2 Hardware Overview
- 3 Component History
- 4 Introduction
- 5 Functional Description
- 6 Integration
  - 6.1 Scope of Delivery
    - 6.1.1 Static Files
    - 6.1.2 Dynamic Files
  - 6.2 Compiler Abstraction and Memory Mapping
  - 6.3 Critical Sections
  - 6.4 General Integration notes
    - 6.4.1 Calculation of Timeout Loops
  - 6.5 Integration notes for NEC V850
    - 6.5.1 ERay Base Address
    - 6.5.2 FlexRay Memory buffer number
    - 6.5.3 FlexRay Memory Buffer size
    - 6.5.4 Interrupt routines
    - 6.5.5 Timer interrupt
    - 6.5.6 Buffer alignment
  - 6.6 Integration notes for RH850
    - 6.6.1 Buffer alignment
    - 6.6.2 Specifics of RH850 P1x
- 7 API Description
  - 7.1 Type Definitions
  - 7.2 Interrupt Service Routines provided by Fr ERay
  - 7.3
  - 7.4 Services provided by Fr ERay and differs from standard
    - 7.4.1 Fr_EnableAbsoluteTimerIRQ
    - 7.4.2 Fr_DisableAbsoluteTimerIRQ
  - 7.5 Services used by Fr ERay
  - 7.6 Callback Functions
  - 7.7 Configurable Interfaces
    - 7.7.1 Notifications
    - 7.7.2 Callout Functions
- 8 Configuration
  - 8.1 Hardware Fifo

_11 further outline entries in the original._

## Excerpt (first pages)

MICROSAR Fr ERay 
Technical Reference 
Communication Controller E-Ray V850 
Version 1.41 
Authors 
Juergen Schaeffer, Mario Kunz, Sebastian Gärtner, 
Sebastian Schmar, Oliver Reineke, Roland Hocke, 
Matthias Müller 
Status 
Released
Technical Reference MICROSAR Fr ERay Communication Controller E-Ray 
2017, Vector Informatik GmbH 
Version: 1.41 
based on template version 3.1 
2 / 24 
1 
Document Information 
1.1 
History 
Author 
Date 
Version 
Remarks 
Roland Hocke 
2013-05-14 
1.34 
Creation and content copy 
from MSR3 document 
2013-06-26 
1.35 
Remove obsolete MTS 
Roland Hocke 
2014-01-29 
1.37 
Buffer alignment hints 
Matthias Müller 
2015-02-20 
1.38 
Renaming of document name 
Matthias Müller 
2015-09-28 
1.39 
Description of Endinit and 
Protected Register Access 
Matthias Müller 
2015-11-27 
1.40 
ESCAN00080370 The usage 
of the Appl_TricoreAurixInit() 
function is not described in 
the TechRef 
SafeBSW limitations 
Matthias Müller 
2017-02-01 
1.41 
Added hint about the specifics 
of RH850 P1X 
Table 1-1 
History of the document 
1.2 
Reference Documents 
No. 
Title 
Version 
[1] AUTOSAR_SWS_DevelopmentErrorTracer.pdf 
3.2.0 
[2] AUTOSAR_SWS_DiagnosticEventManager.pdf 
4.2.0 
[3] TechnicalReference_Fr.pdf 
1.0 or later 
[4] E-Ray_Errata_Sheet_20100215.pdf and later 
REL20100215 and 
later 
[5] TechnicalReference_SchM.pdf 
2.5 or later 
Table 1-2 
Reference documents 
1.3 
Scope of the Document 
This technical reference describes the specific use of the FlexRay ERay driver software. It 
supplements the general FlexRay driver technical reference [3].
Technical Reference MICROSAR Fr ERay Communication Controller E-Ray 
2017, Vector Informatik GmbH 
Version: 1.41 
based on template version 3.1 
3 / 24 
Please note 
We have configured the programs in accordance with your specifications in the 
questionnaire. Whereas the programs do support other configurations than the one 
specified in your questionnaire, Vector´s release of the programs delivered to your 
company is expressly restricted to the configuration you have specified in the 
questionnaire.
Technical Reference MICROSAR Fr ERay Communication Controller E-Ray 
2017, Vector Informatik GmbH 
Version: 1.41 
based on template version 3.1 
4 / 24 
Contents 
1 
Document Information ................................................................................................... 2 
1.1 
History ............................................................................................................. 2 
1.2 
Reference Documents ..................................................................................... 2 
1.3 
Scope of the Document ................................................................................... 2 
2 
Hardware Overview ........................................................................................................ 7 
3 
Component History ........................................................................................................ 8 
4 
Introduction .................................................................................................................... 9 
5 
Functional Description ................................................................................................ 10 
6 
Integration .................................................................................................................... 11 
6.1 
Scope of Delivery .......................................................................................... 11 
6.1.1 
Static Files ..................................................................................................... 11 
6.1.2 
Dynamic Files................................................................................................ 11 
6.2 
Compiler Abstraction and Memory Mapping .................................................. 11 
6.3 
Critical Sections ............................................................................................ 12 
6.4 
General Integration notes .............................................................................. 14 
6.4.1 
Calculation of Timeout Loops ........................................................................ 14 
6.5 
Integration notes for NEC V850 ..................................................................... 14 
6.5.1 
ERay Base Address ...................................................................................... 14 
6.5.2 
FlexRay Memory buffer number .................................................................... 15 
6.5.3 
FlexRay Memory Buffer size ......................................................................... 15 
6.5.4 
Interrupt routines ........................................................................................... 15 
6.5.5 
Timer interrupt ............................................................................................... 16 
6.5.6 
Buffer alignment ............................................................................................ 16 
6.6 
Integration notes for RH850 .......................................................................... 16 
6.6.1 
Buffer alignment ............................................................................................ 16 
6.6.2 
Specifics of RH850 P1x ................................................................................. 16 
7 
API Description ............................................................................................................ 18 
7.1 
Type Definitions ............................................................................................. 18 
7.2 
Interrupt Service Routines provided by Fr ERay ............................................ 18 
7.4 
Services provided by Fr ERay and differs from standard ............................... 20 
7.4.1 
Fr_EnableAbsoluteTimerIRQ......................................................................... 20 
7.4.2 
Fr_DisableAbsoluteTimerIRQ ......................................

[Back to top](#_top)
