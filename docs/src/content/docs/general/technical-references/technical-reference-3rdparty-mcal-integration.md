---
title: "3rdParty-MCAL-Integration"
description: "Converted Vector Technical Reference: TechnicalReference_3rdParty-MCAL-Integration.pdf."
---

> **Converted from** [`Doc/TechnicalReferences/TechnicalReference_3rdParty-MCAL-Integration.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_3rdParty-MCAL-Integration.pdf) (31 pages). Machine-converted with PyMuPDF: running text and structure are preserved as Markdown, but **layout, figures, tables and formulas may differ from the original PDF**. For normative content, always consult the original PDF.

| Property | Value |
|---|---|
| Source | [`TechnicalReference_3rdParty-MCAL-Integration.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_3rdParty-MCAL-Integration.pdf) |
| Pages | 31 |
| PDF title | MCAL Integration Package |
| Author | Andrej Gazvoda, Günther Piehler, Roland Süß, Ingo Wuttke |

## Document outline

- 1 Purpose of the document
- 2 Introduction
  - 2.1 Responsibility
  - 2.2 Support requests
  - 2.3 Mix between AUTOSAR specification versions
- 3 First Steps
  - 3.1 Delivery structure
  - 3.2 Starting up
    - 3.2.1 MCAL delivered within Vector SIP
    - 3.2.2 MCAL not contained within Vector SIP
    - 3.2.3 MCAL Update needed
- 4 Workflow
  - 4.1 Single configuration tool usage
  - 4.2 Mixed configuration tool usage
  - 4.3 Split configuration tool usage
- 5 Configuration tools
  - 5.1 Vector DaVinci Configurator
  - 5.2 EB tresos™
    - 5.2.1 Setting up a new Configuration Project
    - 5.2.2 Project Details
    - 5.2.3 Selection of components
    - 5.2.4 Creation of importers and exporters
    - 5.2.5 Configure the MCAL components
    - 5.2.6 Generation of the 3rd party MCAL
  - 5.3 Configuration hints for parallel usage of DaVinci Configurator and EB tresos™
    - 5.3.1 Vector DaVinci Configurator 5
    - 5.3.2 EB tresos™
- 6 Restrictions
  - 6.1 UNC path usage
- 7 Known Issues
  - 7.1 Long path names
  - 7.2 Missing configuration items within imported configuration
  - 7.3 Configuration Export with EB tresos™ Version 13.0.0
  - 7.4 Error messages regarding CommonPublishedInformation with EB tresos™
- 8 Frequently Asked Questions
- 9 Glossary and Abbreviations
  - 9.1 Glossary
  - 9.2 Abbreviations
- 10 Contact

## Excerpt (first pages)

MCAL Integration Package 
Technical Reference 
Basics and workflows 
Version 1.04.00 
Authors 
Andrej Gazvoda, Günther Piehler, Roland Süß, Ingo 
Wuttke 
Status 
Released
Technical Reference MCAL Integration Package 
© 2016 Vector Informatik GmbH 
Version 1.04.00 
2 
based on template version 5.2.0 
Document Information 
History 
Author 
Date 
Version 
Remarks 
Roland Süß ; Ingo Wuttke 
2015-02-27 
1.00.00 
Initial Ideas, usage as 
Application Note; Porting to 
Technical Reference 
template; adding detailed 
description about 3rd party 
tools etc. 
Günther Piehler 
2015-04-24 
1.00.01 
Review; small changes to 
increase understandability; 
Known Issue for missing 
config items added  
released 
Andrej Gazvoda; Roland Süß 
2015-06-30 
1.00.02 
7.3 / 7.4 - Added known 
issues regarding EB tresos™ 
tool 
Günther Piehler 
2015-07-17 
1.01.00 
2.3 - Introduction of Mixed 
AUTOSAR use case 
3 ff - Extend description of 
MCAL preparation 
(prerequisites) 
4 - hint about recommended 
workflow added 
Günther Piehler 
2015-10-26 
1.01.01 
3.2.2 / 3.2.3 - parameter 
corrected 
4 – added hint for MCAL 
Integration video 
Günther Piehler 
2016-01-26 
1.02.00 
4.2 - added hint for “round 
trip” ability 
general - new CI applied 
Günther Piehler 
2016-07-05 
1.03.00 
Page 3 - Added further useful 
documents as reference 
Günther Piehler 
2016-09-27 
1.04.00 
1 – completely new 
Reference to QuickStart 
document deleted (replaced 
within this document); 
Reference to ScreenCase 
and ReleaseNote added 
Hints for AUTOSAR3 <-> 
AUTOSAR4 differentiation 
added 
3.2.2 – non-interactive mode 
introduced 
3.2.3 – reference to Release 
Notes added for further info
Technical Reference MCAL Integration Package 
© 2016 Vector Informatik GmbH 
Version 1.04.00 
3 
based on template version 5.2.0 
6 – completely new 
7 – issue for “MCAL and SIP 
storage location” removed 
8 – hint to “generate all” 
added 
Reference Documents 
No. 
Source 
Title 
Version 
[1] 
Vector 
Product Information MICROSAR Vector SLP4 
1.03.02 
[2] 
Vector 
Catalog – Product Information MICROSAR – Chapter MCAL 
V1.3 – 
2015-02 
[3] 
Vector 
Application Note “AN-ISC-8-1153_ThirdPartyModules.pdf” 
Latest 
(e.g. 1.0) 
[4] 
Vector 
Application Note “AN-ISC-8-1171_Tresos_LicenseHandling.pdf” 
Latest 
(e.g. 
1.00.01) 
[5] 
Vector 
Application Note “AN-ISC-8-1180_MCAL-Integration-Variants.pdf” Latest 
(e.g. 0.9) 
[6] 
Vector 
Release Note 
“ReleaseNotes_3rdPartyMCAL_VectorIntegration.pdf” 
As 
provided 
within 
your SIP 
[7] 
Vector 
ScreenCast_McalIntegration_Tresos.pdf 
As 
provided 
within 
your SIP 
Caution 
We have configured the programs in accordance with your specifications in the 
questionnaire. Whereas the programs do support other configurations than the one 
specified in your questionnaire, Vector´s release of the programs delivered to your 
company is expressly restricted to the configuration you have specified in the 
questionnaire.
Technical Reference MCAL Integration Package 
© 2016 Vector Informatik GmbH 
Version 1.04.00 
4 
based on template version 5.2.0 
Contents 
1 
Purpose of the document ............................................................................................. 7 
2 
Introduction................................................................................................................... 8 
2.1 
Responsibility ..................................................................................................... 8 
2.2 
Support requests................................................................................................ 9 
2.3 
Mix between AUTOSAR specification versions .................................................. 9 
3 
First Steps ................................................................................................................... 10 
3.1 
Delivery structure ............................................................................................. 10 
3.2 
Starting up ....................................................................................................... 11 
3.2.1 
MCAL delivered within Vector SIP .................................................... 11 
3.2.2 
MCAL not contained within Vector SIP ............................................. 11 
3.2.3 
MCAL Update needed ...................................................................... 13 
4 
Workflow ..................................................................................................................... 14 
4.1 
Single configuration tool usage ........................................................................ 14 
4.2 
Mixed configuration tool usage......................................................................... 15 
4.3 
Split configuration tool usage ........................................................................... 17 
5 
Configuration tools ..................................................................................................... 19 
5.1 
Vector DaVinci Configurator ............................................................................. 19 
5.2 
EB tresos™ ...................................................................................................... 19 
5.2.1 
Setting up a new Configuration Project ............................................ 19 
5.2.2 
Project Details .................................................................................. 20 
5.2.3 
Selection of components .................................................................. 21 
5.2.4 
Creation of importers and exporters ................................................. 22 
5.2.5 
Configure the MCAL components .................................................... 23 
5.2.6 
Generation of the 3rd party MCAL .................................................... 23 
5.3 
Configuration hints for parallel usage of DaVinci Configurator and EB 
tresos™ ........................................................................................................... 23 
5.3.1 
V

[Back to top](#_top)
