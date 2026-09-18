---
title: "AN-ISC-8-1208_DaVinciTeamAndPlatformSupport"
description: "Converted Vector application note: AN-ISC-8-1208_DaVinciTeamAndPlatformSupport.pdf."
---

> **Converted from** [`Doc/ApplicationNotes/AN-ISC-8-1208_DaVinciTeamAndPlatformSupport.pdf`](../../../../../../Doc/ApplicationNotes/AN-ISC-8-1208_DaVinciTeamAndPlatformSupport.pdf) (19 pages). Machine-converted with PyMuPDF: running text and structure are preserved as Markdown, but **layout, figures, tables and formulas may differ from the original PDF**. For normative content, always consult the original PDF.

| Property | Value |
|---|---|
| Source | [`AN-ISC-8-1208_DaVinciTeamAndPlatformSupport.pdf`](../../../../../../Doc/ApplicationNotes/AN-ISC-8-1208_DaVinciTeamAndPlatformSupport.pdf) |
| Pages | 19 |
| PDF title | DaVinci Team and Platform Support |
| Author | Wernicke, Matthias |

## Document outline

- 1 Overview
  - 1.1 Abbreviations
- 2 Background
  - 2.1 Collaboration (multi-user)
  - 2.2 Product Line Approach
- 3 Diff and Merge
  - 3.1 Concepts
  - 3.2 Project Merge
  - 3.3 Merge Approaches (2-way, 3-way)
  - 3.4 Object Identification
  - 3.5 Project Merge in a Multi-User Development Process
- 4 Platform Functions
  - 4.1 Concepts
  - 4.2 Definition of Platform Functions
  - 4.3 Function Assignment
  - 4.4 Selective Merge based on Platform Functions
  - 4.5 Tips and tricks
- 5 Library Mechanisms
  - 5.1 Concepts
  - 5.2 Sharing BSW Module Configurations
  - 5.3 Sharing SWCs between DaVinci projects
  - 5.4 Sharing SWCs from a third-party tool
- 6 Configuration Management
  - 6.1 Concepts
  - 6.2 DaVinci project files in CM repository
  - 6.3 Working Copy
  - 6.4 File Granularity
  - 6.5 Branches and Synchronization Points
- 7 Contacts

## Excerpt (first pages)

DaVinci Team and Platform Support 
Version 1.0.1 
2017-09-06 
Application Note AN-ISC-8-1208 
Author 
Wernicke, Matthias 
Restrictions 
Customer Confidential – Vector decides 
Abstract 
This application note describes how to organize DaVinci projects optimally for 
development with large teams. 
Table of Contents 
1 
Overview ........................................................................................................................................ 2
1.1 
Abbreviations ....................................................................................................................... 2
2 
Background ................................................................................................................................... 2
2.1 
Collaboration (multi-user) ..................................................................................................... 2
2.2 
Product Line Approach ........................................................................................................ 3
3 
Diff and Merge ............................................................................................................................... 4
3.1 
Concepts .............................................................................................................................. 4
3.2 
Project Merge ....................................................................................................................... 5
3.3 
Merge Approaches (2-way, 3-way) ...................................................................................... 5
3.4 
Object Identification ............................................................................................................. 7
3.5 
Project Merge in a Multi-User Development Process .......................................................... 7
4 
Platform Functions ........................................................................................................................ 9
4.1 
Concepts .............................................................................................................................. 9
4.2 
Definition of Platform Functions .........................................................................................10
4.3 
Function Assignment .........................................................................................................11
4.4 
Selective Merge based on Platform Functions ..................................................................11
4.5 
Tips and tricks ....................................................................................................................12
5 
Library Mechanisms....................................................................................................................13
5.1 
Concepts ............................................................................................................................13
5.2 
Sharing BSW Module Configurations ................................................................................13
5.3 
Sharing SWCs between DaVinci projects ..........................................................................14
5.4 
Sharing SWCs from a third-party tool ................................................................................14
6 
Configuration Management ........................................................................................................15
6.1 
Concepts ............................................................................................................................15
6.2 
DaVinci project files in CM repository ................................................................................15
6.3 
Working Copy .....................................................................................................................16
6.4 
File Granularity ...................................................................................................................16
6.5 
Branches and Synchronization Points ...............................................................................18
7 
Contacts .......................................................................................................................................19
DaVinci Team and Platform Support 
Copyright © 2017 - Vector Informatik GmbH 
2 
Contact Information: www.vector.com or +49-711-80 670-0 
1 
Overview 
This application note describes how to organize DaVinci projects and how to use the DaVinci tool 
features optimally to 
> 
Enable collaborative development of a project with a team of developers 
> 
Enable a product line approach 
It covers aspects of 
> 
Configuration management 
> 
Management of libraries of AUTOSAR models (SWCs, EcuC) 
> 
Diff and merge of AUTOSAR models 
> 
Platform development support 
Required tool versions: 
> 
DaVinci Configurator Pro 5.16 or later 
> 
DaVinci Developer 4.1 or later 
1.1 Abbreviations 
Term 
Meaning 
CM 
Configuration Management 
DEV 
DaVinci Developer 
CFG PRO 
DaVinci Configurator Pro 
SDG 
Special Data Group 
UUID 
Universally Unique Identifier 
ARXML 
AUTOSAR XML 
SWC 
Software Component 
ECUC 
ECU Configuration 
DCF 
DaVinci Configuration File 
SIP 
Software Integration Package 
SVN 
Subversion 
2 
Background 
AUTOSAR ECU SW is typically developed by a project team of several, sometimes dozens of team 
members. To organize the work, following approaches are typically used 
> 
Collaboration 
> 
Product Line Approach 
These approaches also have to be applied to the DaVinci projects. 
2.1 Collaboration (multi-user) 
Several project members work on the same SWC or the same BSW module. Parallel working must be 
possible. Reserved editing of the DaVinci project by one user is normally not accepted since it blocks 
the other users.
DaVinci Team and Platform Support 
Copyright © 2017 - Vector Informatik GmbH 
3 
Contact Information: www.vector.com or +49-711-80 670-0 
Figure 1 - Collaboration 
The DaVinci tools support collaboration w

[Back to top](#_top)
