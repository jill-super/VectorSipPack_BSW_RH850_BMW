---
title: "DaVinciConfigurator Licenses"
description: "Converted Vector Technical Reference: TechnicalReference_DaVinciConfigurator_Licenses.pdf."
---

> **Converted from** [`Doc/TechnicalReferences/TechnicalReference_DaVinciConfigurator_Licenses.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_DaVinciConfigurator_Licenses.pdf) (16 pages). Machine-converted with PyMuPDF: running text and structure are preserved as Markdown, but **layout, figures, tables and formulas may differ from the original PDF**. For normative content, always consult the original PDF.

| Property | Value |
|---|---|
| Source | [`TechnicalReference_DaVinciConfigurator_Licenses.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_DaVinciConfigurator_Licenses.pdf) |
| Pages | 16 |
| PDF title | DaVinci Configurator License Handling |
| Author | Michael Hoffmann |

## Document outline

- 1 Introduction
- 2 License Information
  - 2.1 SIP Based License
  - 2.2 Software Based License
  - 2.3 Hardware Based Licenses
  - 2.4 License Display
  - 2.5 Display of License Server Configuration and Options
- 3 License Server Configuration
  - 3.1 Server Configuration
    - 3.1.1 Settings
  - 3.2 Server Option Usage Configuration
  - 3.3 Settings File Example
- 4 Pool Licence Handling
  - 4.1 Standard Licenses
    - 4.1.1 Adding License Options
    - 4.1.2 Return and Extend a Standard License
  - 4.2 Sporadic Licenses
- 5 SIP License
- 6 DaVinci Developer License
- 7 Abbreviations
  - 7.1 Abbreviations
- 8 Contact

## Excerpt (first pages)

DaVinci Configurator License Handling 
Technical Reference 
Version 1.5 
Authors 
Michael Hoffmann 
Status 
Released
Technical Reference DaVinci Configurator License Handling 
© 2016 Vector Informatik GmbH 
Version 1.5 
2 
based on template version 4.11.3 
Document Information 
History 
Author 
Date 
Version 
Remarks 
Michael Hoffmann 
2014-01-02 
1.0 
Michael Hoffmann 
2014-02-14 
1.1 
Server Configuration in 3.1 
changed 
Michael Hoffmann 
2015-02-10 
1.2 
Server Configuration in 3.1 
changed; VTT option added 
Michael Hoffmann 
2015-04-27 
1.3 
DaVinci_CFG floating server 
option added 
Michael Hoffmann 
2015-05-21 
1.4 
Pool based licenses added 
Michael Hoffmann 
2016-02-01 
1.5 
Template update 
Caution 
We have configured the programs in accordance with your specifications in the 
questionnaire. Whereas the programs do support other configurations than the one 
specified in your questionnaire, Vector´s release of the programs delivered to your 
company is expressly restricted to the configuration you have specified in the 
questionnaire.
Technical Reference DaVinci Configurator License Handling 
© 2016 Vector Informatik GmbH 
Version 1.5 
3 
based on template version 4.11.3 
Contents 
1 
Introduction................................................................................................................... 5 
2 
License Information ...................................................................................................... 6 
2.1 
SIP Based License ............................................................................................. 6 
2.2 
Software Based License .................................................................................... 6 
2.3 
Hardware Based Licenses ................................................................................. 6 
2.4 
License Display .................................................................................................. 7 
2.5 
Display of License Server Configuration and Options ........................................ 7 
3 
License Server Configuration ...................................................................................... 8 
3.1 
Server Configuration .......................................................................................... 8 
3.1.1 
Settings .............................................................................................. 9 
3.2 
Server Option Usage Configuration ................................................................. 10 
3.3 
Settings File Example ...................................................................................... 10 
4 
Pool Licence Handling ............................................................................................... 12 
4.1 
Standard Licenses ........................................................................................... 12 
4.1.1 
Adding License Options ................................................................... 12 
4.1.2 
Return and Extend a Standard License ............................................ 12 
4.2 
Sporadic Licenses ............................................................................................ 12 
5 
SIP License ................................................................................................................. 13 
6 
DaVinci Developer License ........................................................................................ 14 
7 
Abbreviations .............................................................................................................. 15 
7.1 
Abbreviations ................................................................................................... 15 
8 
Contact ........................................................................................................................ 16
Technical Reference DaVinci Configurator License Handling 
© 2016 Vector Informatik GmbH 
Version 1.5 
4 
based on template version 4.11.3 
Illustrations 
- 
Tables 
Table 2-1 
License appearance ................................................................................... 7 
Table 3-1 
Settings file locations .................................................................................. 8 
Table 3-2 
License precedence.................................................................................... 9 
Table 3-3 
Server options .......................................................................................... 10
Technical Reference DaVinci Configurator License Handling 
© 2016 Vector Informatik GmbH 
Version 1.5 
5 
based on template version 4.11.3 
1 
Introduction 
The DaVinci Configurator application can be activated by a SIP license and dongle or 
FlexNet based license. Both, the dongle and the FlexNet based license, provide the .PRO 
option + supplemental options. These options activate additional product functionality 
within the DaVinci Configurator. 
This document describes in which order the available licenses are applied and used by the 
DaVinci Configurator.
Technical Reference DaVinci Configurator License Handling 
© 2016 Vector Informatik GmbH 
Version 1.5 
6 
based on template version 4.11.3 
2 
License Information 
Detailed information about the current available and used licenses can be obtained by 
starting the DaVinci Configurator application and opening the ‘Licenses’ dialog (Help > 
Licenses). 
This dialog shows the current SIP license details (‘Show SIP License Details’ button) and 
the current tool license details (‘Show Tool License Details’). 
The tool license details dialog provides three sections: 
 SIP-based licenses 
 Software-based licenses 
 Hardware-based licenses (USB-dongle) 
2.1 
SIP Based License 
This section shows the currently available SIP license. A SIP license activates the BASE 
option of the DaVinci Configurator application. 
2.2 
Software Based License 
This table lists all available FlexNet license information (server based or local) that can 
potentially be use

[Back to top](#_top)
