---
title: "Rte"
description: "Converted Vector Technical Reference: TechnicalReference_Rte.pdf."
---

> **Converted from** [`Doc/TechnicalReferences/TechnicalReference_Rte.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_Rte.pdf) (145 pages). Machine-converted with PyMuPDF: running text and structure are preserved as Markdown, but **layout, figures, tables and formulas may differ from the original PDF**. For normative content, always consult the original PDF.

| Property | Value |
|---|---|
| Source | [`TechnicalReference_Rte.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_Rte.pdf) |
| Pages | 145 |
| PDF title | MICROSAR RTE |
| Author | PES1.3 |

## Document outline

- 1 Component History
- 2 Introduction
  - 2.1 Architecture Overview
- 3 Functional Description
  - 3.1 Features
    - 3.1.1 Deviations
    - 3.1.2 Additions/ Extensions
    - 3.1.3 Limitations
  - 3.2 Initialization
  - 3.3 AUTOSAR ECUs
  - 3.4 AUTOSAR Software Components
  - 3.5 Runnable Entities
  - 3.6 Triggering of Runnable Entities
    - 3.6.1 Time Triggered Runnables
    - 3.6.2 Data Received Triggered Runnables
    - 3.6.3 Data Reception Error Triggered Runnables
    - 3.6.4 Data Send Completed Triggered Runnables
    - 3.6.5 Mode Switch Triggered Runnables
    - 3.6.6 Mode Switched Acknowledge Triggered Runnables
    - 3.6.7 Operation Invocation Triggered Runnables
    - 3.6.8 Asynchronous Server Call Return Triggered Runnables
    - 3.6.9 Init Triggered Runnables
    - 3.6.10 Background Triggered Runnables
  - 3.7 Exclusive Areas
    - 3.7.1 OS Interrupt Blocking
    - 3.7.2 All Interrupt Blocking
    - 3.7.3 OS Resource
    - 3.7.4 Cooperative Runnable Placement
  - 3.8 Error Handling
    - 3.8.1 Development Error Reporting
- 4 RTE Generation and Integration
  - 4.1 Scope of Delivery
  - 4.2 RTE Generation
    - 4.2.1 Command Line Options
    - 4.2.2 RTE Generator Command Line Options
    - 4.2.3 Generation Path
  - 4.3 MICROSAR RTE generation modes
    - 4.3.1 RTE Generation Phase
    - 4.3.2 RTE Contract Phase Generation
    - 4.3.3 Template Code Generation for Application Software Components

_130 further outline entries in the original._

## Excerpt (first pages)

MICROSAR RTE 
Technical Reference 
Version 4.16.0 
Author 
PES1.3 
Status 
Released
Technical Reference MICROSAR RTE 
© 2017 Vector Informatik GmbH 
Version 4.16.0 
2 
based on template version 3.5 
Document Information 
History 
Author 
Date 
Version Remarks 
Bernd Sigle 
2005-11-14 2.0.0 
Document completely reworked and adapted to 
AUTOSAR RTE 
Bernd Sigle 
2006-04-20 2.0.1 
API description for Rte_IRead / Rte_IWrite added, 
description of used OS/COM services added 
Bernd Sigle 
2006-07-11 2.0.2 
API description for Rte_Receive / Rte_Send added; 
Adaptation to RTE SWS 1.0.0 Final 
Martin Schlodder 2006-11-02 2.0.3 
Separation of RTE and target package 
Martin Schlodder 2006-11-15 2.0.4 
Client/Server communication 
Martin Schlodder 2006-12-21 2.0.5 
Serialized client/server communication 
Martin Schlodder 2007-01-17 2.0.6 
Array data types 
Martin Schlodder 2007-02-14 2.0.7 
Added exclusive areas, removed description of 
TargetPackages 
Bernd Sigle 
2007-02-19 2.0.8 
Added transmission acknowledgement handling and 
minor rework of the document 
Bernd Sigle 
2007-04-25 2.0.9 
Added Rte_IStatus 
Martin Schlodder 2007-04-27 2.0.10 
Added IRV and Const/Enum 
Martin Schlodder 
Bernd Sigle 
2007-05-01 2.1.0 
Completed documentation for Version 2.2 
Bernd Sigle 
2007-07-27 2.1.1 
Added Rte_InitMemory, Rte_IWriteRef Runnable. 
Added description of runnable activation offset und 
updated picture of MICROSAR architecture. 
Martin Schlodder 2007-08-03 2.1.2 
Added description of template update. 
Martin Schlodder 
Bernd Sigle 
2007-11-16 2.1.3 
Added warning regarding IWrite / IrvIWrite. 
Added API descriptions of VFB trace hooks. 
Updated data type info for nested types. 
Martin Schlodder 
Bernd Sigle 
2008-02-06 2.1.4 
Updated descriptions on template merging and task 
mapping. 
Added description of Rte_Pim, Rte_CData, 
Rte_Calprm and Rte_Result. 
Added support of string data type. 
Updated command line argument description. 
Added NvRAM mapping description. 
Added chapter about compiler abstraction and 
memory mapping. 
Hannes Futter 
2008-03-11 2.1.5 
Additional command line switches to support direct 
generation on xml and dcf files. 
Bernd Sigle 
2008-03-26 2.2.0 
Updated description of NV Memory Mapping and 
Chapter about limitations added. 
Chapter about compiler and memory abstraction 
updated. 
Support for AUTOSAR Release 3.0 added.
Technical Reference MICROSAR RTE 
© 2017 Vector Informatik GmbH 
Version 4.16.0 
3 
based on template version 3.5 
Bernd Sigle 
2008-04-16 2.3.0 
Added description about A2L file generation and 
updated command line options and example calls to 
cover also the AUTOSAR XML input files. 
Bernd Sigle 
2008-07-16 2.4.0 
Removed limitations for multiple instantiation and 
compatibility mode support. 
Bernd Sigle 
2008-08-13 2.5.0 
Added description of indirect APIs Rte_Port, Rte_Ports 
and Rte_NPorts. Added description of platform 
dependent resource calculation. 
Bernd Sigle 
2008-10-23 2.6.0 
Added description of memory protection support. 
Bernd Sigle 
2009-01-23 2.7.0 
Added description of mode management APIs 
Rte_Mode and Rte_Switch and updated description of 
Rte_Feedback. 
Added description of Rte_Invalidate and 
Rte_IInvalidate and added new Com APIs. 
Added additional runnable trigger events and removed 
section for runnables without trigger, which is no 
longer supported. 
Deviation for [rte_sws_2648] added. 
Usage of new document template 
Bernd Sigle 
2009-03-26 2.8.0 
Removed limitations for unconnected ports and for 
data type generation. 
Sascha Sommer 
Bernd Sigle 
2009-08-11 2.9.0 
Added description about usage of basic / extended 
task 
Added description of command line parameter -v 
Sascha Sommer 
Bernd Sigle 
2009-10-22 2.10.0 
Added a warning for VFB trace hooks that prevent 
macro optimizations 
Explained that the Activation task attribute has to be 
set for basic tasks 
Init-Runnables no longer need to have a special suffix 
Explained the new periodic trigger implementation 
dialog. 
Server runnables with CanBeInvokedConcurrently set 
to false do not need to be mapped to tasks when the 
calling clients cannot interrupt each other 
Resource Usage is now listed in a HTML report 
Updated version of referenced documents and of 
supported AUTOSAR release. 
Updated examples with new workspace file extension. 
Added new defines for memory mapping. 
Bernd Sigle 
2010-04-09 2.11.0 
Added description of user header file Rte_UserTypes.h 
Updated component history and interface functions to 
the OS. Added pictures of Rte Interfaces and Rte 
Include Structure. Updated picture of MICROSAR 
architecture. Rework of chapter structure. 
Bernd Sigle 
2010-05-25 2.11.1 
Added description of RTE optimization mode
Technical Reference MICROSAR RTE 
© 2017 Vector Informatik GmbH 
Version 4.16.0 
4 
based on template version 3.5 
Bernd Sigle 
Sascha Sommer 
2010-05-26 2.12.0 
Added new measurement chapter, added description 
of COM Rx Filter, macros for access of invalid value, 
initial value, lower and upper limit, added support of 
minimum start interval and second array passing 
variant. Support of AUTOSAR Release 3.1 (RTE SWS 
2.2.0) 
Bernd Sigle 
2010-07-22 2.13.0 
Added online calibration support. Removed limitation 
of missing transmission error detection 
Bernd Sigle 
2010-09-28 2.13.1 
Added more detailed description of extended record 
data type compatibility rule 
Bernd Sigle 
2010-11-23 2.14.0 
Removed obsolete command line parameters –bo, –bc 
and –bn. 
Stephanie Schaaf 
Bernd Sigle 
Sascha Sommer 
2011-07-25 2.15.0 
Added general support of AUTOSAR Release 3.2.1 
(RTE SWS 2.4.0). 
Added support of never received status. 
Added support of S/R update handling. 
Mentioned that –g c and –g i ignore service 
components when –m specifies an ECU project. 
Explained RTE usage with Non-Trusted BSW 
Added hint for FUNC_P2CONST() problems 
Explained measurement of COM signals 
Stephanie Schaaf 
Bernd Sigle 
Sascha Sommer 
2012-01-25 2.16.0 
Enhanced command li

[Back to top](#_top)
