---
title: "AN-ISC-8-1207_Synchronization_Cry_Fls"
description: "Converted Vector application note: AN-ISC-8-1207_Synchronization_Cry_Fls.pdf."
---

> **Converted from** [`Doc/ApplicationNotes/AN-ISC-8-1207_Synchronization_Cry_Fls.pdf`](../../../../../../Doc/ApplicationNotes/AN-ISC-8-1207_Synchronization_Cry_Fls.pdf) (8 pages). Machine-converted with PyMuPDF: running text and structure are preserved as Markdown, but **layout, figures, tables and formulas may differ from the original PDF**. For normative content, always consult the original PDF.

| Property | Value |
|---|---|
| Source | [`AN-ISC-8-1207_Synchronization_Cry_Fls.pdf`](../../../../../../Doc/ApplicationNotes/AN-ISC-8-1207_Synchronization_Cry_Fls.pdf) |
| Pages | 8 |
| PDF title | Synchronization between AUTOSAR Cry and Fls |
| Author | Bernhard Wissinger |

## Document outline

- 1 Introduction
  - 1.1 Access Conflict Types
  - 1.2 Dependency of Access Conflics to the ECU use case
- 2 Use Case Description
- 3 Synchronization Methods of SecOC and Fls
  - 3.1 Prevent Execution of SecOC_MainFunction
  - 3.2 Prevent Execution of Cry Function
  - 3.3 Optimized Execution Prevention
  - 3.4 Interrupt Fls Operation
  - 3.5 Asynchronous Operation of SecOC
- 4 Synchronization Method for Key Management
- 5 Contacts

## Excerpt (first pages)

Synchronization between AUTOSAR Cry and Fls 
Version 1.00.03 
2017-08-14 
Application Note AN-ISC-8-1207 
Author 
Bernhard Wissinger 
Restrictions 
Customer Confidential – Vector decides 
Abstract 
AUTOSAR Crypto and Flash Driver might access a common hardware resource. This 
application note describes possible synchronization mechanisms. 
Table of Contents 
1 
Introduction ................................................................................................................................... 2
1.1 
Access Conflict Types .......................................................................................................... 2
1.2 
Dependency of Access Conflics to the ECU use case ........................................................ 3
2 
Use Case Description ................................................................................................................... 3
3 
Synchronization Methods of SecOC and Fls ............................................................................. 4
3.1 
Prevent Execution of SecOC_MainFunction ....................................................................... 4
3.2 
Prevent Execution of Cry Function ...................................................................................... 5
3.3 
Optimized Execution Prevention .......................................................................................... 5
3.4 
Interrupt Fls Operation ......................................................................................................... 6
3.5 
Asynchronous Operation of SecOC ..................................................................................... 7
4 
Synchronization Method for Key Management .......................................................................... 8
5 
Contacts ......................................................................................................................................... 8
Synchronization between AUTOSAR Cry and Fls 
Copyright © 2017 - Vector Informatik GmbH 
2 
Contact Information: www.vector.com or +49-711-80 670-0 
1 
Introduction 
AUTOSAR defines Crypto Driver (Cry) and Flash Driver (Fls) as MCAL modules for independent 
hardware modules. But as the crypto module also provides key storage functionality, this is often 
implemented in the microcontroller by using a shared flash unit. This can lead to race conditions, if 
AUTOSAR Crypto Driver and Flash Driver are used concurrently. 
Figure 1 - Race Condition during Flash Memory Access 
This application note describes several synchronization methods and gives advice which method 
should be applied. The synchronization itself must be implemented by the application during the 
integration of the MICROSAR stack, as the used method depends on the system layout and 
requirements. 
Caution 
The occurrence and effect of the race condition heavily depends on the used 
microcontroller. Please double-check whether your specific hardware is affected and 
confirm whether the methods described in this application note are applicable to your 
system. 
Caution 
The examples in this application note are not thoroughly tested. The user must verify the 
functionality for the intended use case. Vector´s liability shall be expressly excluded to the 
extent admissible by law or statute. 
1.1 Access Conflict Types 
Table 1 lists possible access conflict types. In this application note, it is assumed that each of these 
combinations will lead to a race condition and must be prevented. E.g. even if the Crypto driver 
performs only a read access to the key (like MacVerify), a parallel read access of the flash driver to 
the hardware is not allowed. 
If the used microcontroller is less restrictive, a less restrictive synchronization scheme might be 
applied. Such optimized synchronization scheme is not covered by this application note. 
Flash Module
Crypto Module
Flash Memory
Flash Driver
Crypto Driver
Hardware
Software
No Synchronization
Race Condition
Synchronization between AUTOSAR Cry and Fls 
Copyright © 2017 - Vector Informatik GmbH 
3 
Contact Information: www.vector.com or +49-711-80 670-0 
Crypto Driver 
Flash Driver 
Conflict 
Use Key (e.g. MacVerify, MacGenerate) 
Read Flash Memory 
Read / Read 
Write Key (e.g. KeyElementSet) 
Read Flash Memory 
Write / Read 
Use Key (e.g. MacVerify, MacGenerate) 
Write Flash Memory 
Read / Write 
Write Key (e.g. KeyElementSet) 
Write Flash Memory 
Write / Write 
Table 1 - Access Conflict Types 
1.2 Dependency of Access Conflics to the ECU use case 
The possibility of an access conflict heavily depends on the ECU use case. As an access conflict can 
only happen if the Flash module and Crypto module are used at the same time, a detailed analysis of 
this use case is needed. 
> 
E.g. if the Crypto module is used only during ECU run state for secure communication, whereas 
Flash module access is limited to ECU startup and shutdown, no access conflict might occur. 
> 
The access conflict might be limited to system startup, in case the Crypto module can cache the 
keys in secure RAM and therefore has no need to access data flash during later usage. 
The potential access conflicts need to be analyzed by the user. This application note gives an 
example how to solve such a conflict for secure communication and data flash access. 
Caution 
The occurrence and effect of access conflicts heavily depend on the ECU use case. 
Please analyze the specific Crypto and Flash use cases in your ECU to confirm potential 
conflicts and to judge for the appropriate resolution method. 
2 
Use Case Description 
The synchronization methods are discussed based on three different users of Crypto and Flash Driver. 
Please adapt the described concepts in case of a different use case shall be implemented. 
Caution 
The described behavior of the Fls module is implementation-specific. Please confirm this 
behavior for the used Fls module. 
User 
Functionality 
Call context of hardware access 
Nonvolatile Memory 
Fls: R

[Back to top](#_top)
