---
title: "AN-ISC-8-1153_ThirdPartyModules"
description: "Converted Vector application note: AN-ISC-8-1153_ThirdPartyModules.pdf."
---

> **Converted from** [`Doc/ApplicationNotes/AN-ISC-8-1153_ThirdPartyModules.pdf`](../../../../../../Doc/ApplicationNotes/AN-ISC-8-1153_ThirdPartyModules.pdf) (10 pages). Machine-converted with PyMuPDF: running text and structure are preserved as Markdown, but **layout, figures, tables and formulas may differ from the original PDF**. For normative content, always consult the original PDF.

| Property | Value |
|---|---|
| Source | [`AN-ISC-8-1153_ThirdPartyModules.pdf`](../../../../../../Doc/ApplicationNotes/AN-ISC-8-1153_ThirdPartyModules.pdf) |
| Pages | 10 |
| PDF title | Third Party Modules |
| Author | Sven Hesselmann |

## Document outline

- 1.0 Overview
- 2.0 Integration in DaVinci Configurator 5
  - 2.1 Configuration With CFG5
    - 2.1.1 Adding of BSWMD File
    - 2.1.2 Adding a Module to the Current Project
  - 2.2 External Generation Step
    - 2.2.1 Manual Set-Up
    - 2.2.2 Automatic Set-Up
  - 2.3 Internal Behavior Description
    - 2.3.1 Example for Internal Behavior Description
    - 2.3.2 Templates for Internal Behavior Description
  - 2.4 RTE configuration
  - 2.5 CDD Configuration
- 3.0 Settings.xml
- 4.0 Integration Into the Build Project
  - 4.1 Compiler_Cfg.h
  - 4.2 MemMap.h
- 5.0 Additional Resources
- 6.0 Contacts

## Excerpt (first pages)

Third Party Modules 
Version 1.0 
2013-07-24 
Application Note AN-ISC-8-1153 
Author(s) 
Sven Hesselmann 
Restrictions 
Customer confidential - Vector decides 
Abstract 
Introduction how to integrate 3rd partly modules into the MICROSAR4 stack 
Table of Contents 
 1 
Copyright © 2013 - Vector Informatik GmbH 
Contact Information: www.vector.com or +49-711-80 670-0 
1.0 
Overview .......................................................................................................................................................... 1 
2.0 
Integration in DaVinci Configurator 5 ............................................................................................................... 2 
2.1 
Configuration With CFG5 .............................................................................................................................. 2 
2.1.1 
Adding of BSWMD File ............................................................................................................................... 2 
2.1.2 
Adding a Module to the Current Project ..................................................................................................... 3 
2.2 
External Generation Step .............................................................................................................................. 4 
2.2.1 
Manual Set-Up ............................................................................................................................................ 5 
2.2.2 
Automatic Set-Up ........................................................................................................................................ 5 
2.3 
Internal Behavior Description ........................................................................................................................ 5 
2.3.1 
Example for Internal Behavior Description ................................................................................................. 5 
2.3.2 
Templates for Internal Behavior Description .............................................................................................. 6 
2.4 
RTE configuration .......................................................................................................................................... 7 
2.5 
CDD Configuration ........................................................................................................................................ 7 
3.0 
Settings.xml ..................................................................................................................................................... 8 
4.0 
Integration Into the Build Project ...................................................................................................................... 8 
4.1 
Compiler_Cfg.h ............................................................................................................................................. 9 
4.2 
MemMap.h .................................................................................................................................................... 9 
5.0 
Additional Resources ..................................................................................................................................... 10 
6.0 
Contacts ......................................................................................................................................................... 10 
1.0 Overview 
This application note describes integration of third party modules (i.e. MCAL) into DaVinci Configurator Pro 5 
(CFG5 for short) and the MICROSAR stack for AUTOSAR Release 4.x. 
This application note uses the MCU module as an example.
Third Party Modules 
2 
Application Note AN-ISC-8-1153 
Figure 1 – Overview of BSWMD file of MCU 
2.0 Integration in DaVinci Configurator 5 
For integration of a module into a MICROSAR stack, different things have to be done. 
If the module fulfills one of the following list points, check this chapter for the description. 
The module: 
• 
has parts, generated based on the configuration (i.e. ECUC file) 
• 
requires the SCHM API for Exclusive Area handling 
• 
has cyclic MainFunction calls 
• 
needs access to communication PDUs 
2.1 Configuration With CFG5 
If the module shall be configured within the CFG5, the tool requires its modules description in a BSWMD file (basis 
software module description). Also the module has to be added to the configuration. 
2.1.1 Adding of BSWMD File 
Provide an additional search path for BSWMD files within your configuration. The BSWMD file must end with 
.arxml to be noticed by CFG5. 
Open Project|Project Setting|Modules|Additional Definitions and Add the path to the module’s BSWMD file as 
shown in the following screenshots.
Third Party Modules 
3 
Application Note AN-ISC-8-1153 
Figure 2 – Modules|Additional Definitions 
Figure 3 – BSWMD added 
Now the CFG5 knows the module and it can be added to the configuration. But before the configuration has to be 
closed and opened again. 
2.1.2 Adding a Module to the Current Project 
For adding the module to the current configuration, open Project|Project Settings|Modules and Add it with the 
blue plus. If the path to the module is within the delivered SIP, you will find it in Select from SIP otherwise in 
Select additional definition (see screenshots below).
Third Party Modules 
4 
Application Note AN-ISC-8-1153 
Figure 4 – Module Assistant 
Figure 5 – Module Definitions 
Now the module is within your project, configure it using the Basic Editor. 
2.2 External Generation Step 
If the module has parts generated based on the configuration of the ECUC file and the generation shall be started 
from the CFG5, the generation list has to be extended. The configuration of the generation steps for third-party 
modules can either be done manually or by a configuration file, making it easier to reuse your module for further 
projects.
Third Party Modules 
5 
Application Note AN-ISC-8-1153 
2.2.1 Manual S

[Back to top](#_top)
