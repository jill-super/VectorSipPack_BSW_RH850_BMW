---
title: "AN-ISC-8-1196_Distributing_BSW_Components_across_Partitions"
description: "Converted Vector application note: AN-ISC-8-1196_Distributing_BSW_Components_across_Partitions.pdf."
---

> **Converted from** [`Doc/ApplicationNotes/AN-ISC-8-1196_Distributing_BSW_Components_across_Partitions.pdf`](../../../../../../Doc/ApplicationNotes/AN-ISC-8-1196_Distributing_BSW_Components_across_Partitions.pdf) (7 pages). Machine-converted with PyMuPDF: running text and structure are preserved as Markdown, but **layout, figures, tables and formulas may differ from the original PDF**. For normative content, always consult the original PDF.

| Property | Value |
|---|---|
| Source | [`AN-ISC-8-1196_Distributing_BSW_Components_across_Partitions.pdf`](../../../../../../Doc/ApplicationNotes/AN-ISC-8-1196_Distributing_BSW_Components_across_Partitions.pdf) |
| Pages | 7 |
| PDF title | Distributing BSW Components across Partitions |
| Author | Wolf, Jonas |

## Document outline

- 1 Overview
- 2 Introduction of Partitioning
- 3 Techniques for Crossing Partitions
  - 3.1 Trusted Functions
  - 3.2 Non-trusted Functions
  - 3.3 Inter OS Application Communicator (IOC)
  - 3.4 Sharing Data
- 4 Hooking into Interfaces
  - 4.1 Example Code
    - 4.1.1 Source File of A (A\A.c)
    - 4.1.2 Header File of B (B\B.h)
    - 4.1.3 Source File of B (B\B.c)
    - 4.1.4 Header File of Bmod (Bmod\Bmod.h)
    - 4.1.5 Header File of Bmod (Bmod\B.h)
    - 4.1.6 Source File of Bmod (Bmod\Bmod.c)
- 5 Additional Resources
- 6 Contacts

## Excerpt (first pages)

Distributing BSW Components across Partitions 
Version 1.2 
2017-05-17 
Application Note AN-ISC-8-1196 
Author 
Wolf, Jonas 
Restrictions 
Customer Confidential – Vector decides 
Abstract 
MICROSAR BSW is supposed to be executed in one memory partition (with some 
exceptions). Architectural constraints, e.g. a safety concept, may require distributing 
MICROSAR BSW across different memory partitions. This application note describes 
the general approach and common techniques for distribution. 
Table of Contents 
1 
Overview ........................................................................................................................................ 2
2 
Introduction of Partitioning .......................................................................................................... 2
3 
Techniques for Crossing Partitions ............................................................................................ 3
3.1 
Trusted Functions ................................................................................................................ 3
3.2 
Non-trusted Functions .......................................................................................................... 3
3.3 
Inter OS Application Communicator (IOC) ........................................................................... 3
3.4 
Sharing Data ........................................................................................................................ 3
4 
Hooking into Interfaces ................................................................................................................ 4
4.1 
Example Code...................................................................................................................... 6
4.1.1 Source File of A (A\A.c) ....................................................................................................... 6
4.1.2 Header File of B (B\B.h) ....................................................................................................... 6
4.1.3 Source File of B (B\B.c) ....................................................................................................... 6
4.1.4 Header File of Bmod (Bmod\Bmod.h) .................................................................................. 6
4.1.5 Header File of Bmod (Bmod\B.h) ......................................................................................... 7
4.1.6 Source File of Bmod (Bmod\Bmod.c) .................................................................................. 7
5 
Additional Resources ................................................................................................................... 7
6 
Contacts ......................................................................................................................................... 7
Distributing BSW Components across Partitions 
Copyright © 2017 - Vector Informatik GmbH 
2 
Contact Information: www.vector.com or +49-711-80 670-0 
1 
Overview 
AUTOSAR was initially developed for single core microcontrollers without memory protection unit 
(MPU). The availability of more powerful microcontrollers and the introduction of ISO 26262 led to new 
concepts in AUTOSAR addressing these changes. 
This document provides an approach how to distribute basic software across partitions on one core. 
Distributing the basic software across different cores is out of scope of this application note. The term 
basic software is used in this application note for all software components below the Runtime 
Environment (RTE), i.e. AUTOSAR modules, like ECUM or COM as well as complex drivers (CDs). 
Above the RTE, i.e. for application software components (SWC), partitioning is usually automatically 
handled by configuration of the RTE. Thus, this is also out of scope for this application note. 
Figure 1-1 Basic Software 
Apart from a few exceptions it is not possible to distribute the basic software into different partitions by 
configuration. This application note describes an approach for partitioning the basic software. It details 
the available techniques for implementing the partition crossing and shows an example use-case. 
An AUTOSAR operating system with Scalability Class 3 (SC3) and an MPU is required for memory 
partitioning. The term partition and OS Application are used synonymously. 
2 
Introduction of Partitioning 
Use the following three step approach to introduce working and effective partitioning of the basic 
software: 
1. Define partitioning scheme 
Use the software architecture of the ECU to describe the partitions and assign all SWCs and basic 
software components to a partition. Assignment to a partition is mainly defined by your safety 
concept. Partitions can be used if software components with different quality levels are to be 
executed on one ECU. 
2. Identify interfaces between components 
Use the information from the Technical References and the software architecture of the ECU to 
identify the interfaces between basic software components. Interfaces between software 
components are called functions and shared data. 
Make yourself aware of buffer ownership and also assign any buffers to a partition. 
3. Select technique to implement partition crossing 
Select one of the techniques from Section 3 to implement a crossing of partitions. 
Application SWCs 
RTE 
OS 
AUTOSAR Modules 
Complex 
Drivers
Distributing BSW Components across Partitions 
Copyright © 2017 - Vector Informatik GmbH 
3 
Contact Information: www.vector.com or +49-711-80 670-0 
Note 
A lot of interfaces between BSW modules can be deactivated by configuration. Evaluate 
whether deactivation of the interface is an option and deactivate the interface if possible. 
This may especially apply for interfaces to DEM and DET. If the interface is deactivated, 
there is no need to introduce cross-partition calls. 
3 
Techniques for Crossing Partitions 
3.1 Trusted Functions 
Trusted Functions are services exported by truste

[Back to top](#_top)
