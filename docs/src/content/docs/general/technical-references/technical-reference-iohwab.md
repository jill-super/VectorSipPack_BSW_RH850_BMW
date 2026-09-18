---
title: "IoHwAb"
description: "Converted Vector Technical Reference: TechnicalReference_IoHwAb.pdf."
---

> **Converted from** [`Doc/TechnicalReferences/TechnicalReference_IoHwAb.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_IoHwAb.pdf) (33 pages). Machine-converted with PyMuPDF: running text and structure are preserved as Markdown, but **layout, figures, tables and formulas may differ from the original PDF**. For normative content, always consult the original PDF.

| Property | Value |
|---|---|
| Source | [`TechnicalReference_IoHwAb.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_IoHwAb.pdf) |
| Pages | 33 |
| PDF title | YourTopic |
| Author | Christoph Ederer |

## Excerpt (first pages)

MICROSAR IOHWAB 
Technical Reference 
Version 3.00.02 
Authors 
Christian Leder 
Status 
Released
Technical Reference MICROSAR IOHWAB 
2014, Vector Informatik GmbH 
Version: 3.00.02 
based on template version 5.6.0 
2 / 33 
Document Information 
History 
Author 
Date 
Version 
Remarks 
Christian Marchl 
2007-02-09 
1.00.00 
Initial version 
Christian Marchl 
2007-08-09 
1.01.00 
Typos corrected; Added description for 
component name field 
Christian Marchl 
2007-12-13 
1.01.01 
Version adapted according to new 
version scheme 
Christoph Ederer 
2008-05-21 
2.00.00 
Transfer of the document to new 
Technical Reference template; Adapted 
descriptions and screenshots to new 
software version 
Christoph Ederer 
2008-07-11 
2.00.01 
Update of document due to changes in 
DCM interface and RTE usage 
Christoph Ederer 
2009-01-14 
2.01.00 
Update of the naming of graphical 
elements in the configuration, 
Screenshots reworked, DCM 
subfunctions reworked, Added 
description of default value in 
configuration 
Christoph Ederer 
2009-03-23 
2.01.01 
Updated development error detection 
in GUI description, toolchain naming 
updated, hints added to chapter 4.1.2 
Christoph Ederer 
2009-07-21 
2.02.00 
Updated description of the generation 
process (user blocks, autom. SWC 
generation), updated AUTOSAR figure, 
added information on user defined 
signals 
Christoph Ederer 
2009-09-25 
2.02.01 
Reworked description of DCM interface 
Christoph Ederer 
2010-11-26 
2.02.02 
> Added chapter 4.3 Critical Sections 
> GUI description updated 
> Added information about necessary 
make process modifications to 4.1.2 
Christoph Ederer 
2011-03-02 
2.02.03 
Reworked the service descriptions in 
chapters 5.4.3, 5.4.7 and 5.4.10: 
parameter ‘signal’ is [inout], now 
Christoph Ederer 
2013-04-10 
3.00.00 
> Component rework and update to 
AUTOSAR 4 
> Update to new Configuration Tooling 
‘DaVinci Configurator 5’ 
Christian Leder 
2014-03-14 
3.00.01 
Generated file adapted from IoHwAb.c 
to IoHwAb_30.c 
Christian Leder 
2014-06-18 
3.00.02 
ReturnType changed in CS port 
operation
Technical Reference MICROSAR IOHWAB 
2014, Vector Informatik GmbH 
Version: 3.00.02 
based on template version 5.6.0 
3 / 33 
Reference Documents 
No. 
Source 
Title 
Version 
[1] 
AUTOSAR 
AUTOSAR_SWS_IOHardwareAbstraction.pdf 
(available at: 
http://www.autosar.org/download/R4.0/AUTOSAR_SWS_IOHa
rdwareAbstraction.pdf) 
V3.2.0 
[2] 
AUTOSAR 
AUTOSAR_SWS_DevelopmentErrorTracer.pdf 
(available at: 
http://www.autosar.org/download/R4.0/AUTOSAR_SWS_Deve
lopmentErrorTracer.pdf) 
V3.2.0 
[3] 
AUTOSAR 
AUTOSAR_TR_BSWModuleList.pdf 
(available at: 
http://www.autosar.org/download/R4.0/AUTOSAR_TR_BSWM
oduleList.pdf) 
V1.6.0 
[4] 
AUTOSAR 
AUTOSAR_EXP_VFB.pdf 
(available at: 
http://www.autosar.org/download/R4.0/AUTOSAR_EXP_VFB.
pdf) 
V2.2.0 
Caution 
We have configured the programs in accordance with your specifications in the 
questionnaire. Whereas the programs do support other configurations than the one 
specified in your questionnaire, Vector´s release of the programs delivered to your 
company is expressly restricted to the configuration you have specified in the 
questionnaire.
Technical Reference MICROSAR IOHWAB 
2014, Vector Informatik GmbH 
Version: 3.00.02 
based on template version 5.6.0 
4 / 33 
Contents 
1 
Component History ...................................................................................................... 7 
2 
Introduction................................................................................................................... 8 
2.1 
Architecture Overview ........................................................................................ 9 
3 
Functional Description ............................................................................................... 11 
3.1 
Features .......................................................................................................... 11 
3.2 
Initialization ...................................................................................................... 11 
3.3 
States .............................................................................................................. 11 
3.4 
Main Functions ................................................................................................ 12 
3.5 
Error Handling .................................................................................................. 12 
3.5.1 
Development Error Reporting ........................................................... 12 
3.5.2 
Production Code Error Reporting ..................................................... 12 
4 
Integration ................................................................................................................... 13 
4.1 
Scope of Delivery ............................................................................................. 13 
4.1.1 
Static Files ....................................................................................... 13 
4.1.2 
Dynamic Files .................................................................................. 13 
4.2 
Critical Sections ............................................................................................... 14 
4.3 
Generated Template Files ................................................................................ 15 
4.3.1 
User Blocks ...................................................................................... 15 
4.3.2 
Unrecognized/Deleted Signals ......................................................... 16 
5 
API Description ........................................................................................................... 17 
5.1 
Type Definitions ............................................................................................... 17 
5.2 
Services provided by IOHWAB ........................................................................ 17 
5.2.1 
IoHwAb_Init ...................................................

[Back to top](#_top)
