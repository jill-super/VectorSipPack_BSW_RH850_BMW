---
title: "MSSV"
description: "Converted Vector Technical Reference: TechnicalReference_MSSV.pdf."
---

> **Converted from** [`Doc/TechnicalReferences/TechnicalReference_MSSV.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_MSSV.pdf) (22 pages). Machine-converted with PyMuPDF: running text and structure are preserved as Markdown, but **layout, figures, tables and formulas may differ from the original PDF**. For normative content, always consult the original PDF.

| Property | Value |
|---|---|
| Source | [`TechnicalReference_MSSV.pdf`](../../../../../../Doc/TechnicalReferences/TechnicalReference_MSSV.pdf) |
| Pages | 22 |
| PDF title | YourTopic |
| Author | Markus Groß, Patrick Markl |

## Excerpt (first pages)

MICROSAR Safe Silence Verifier 
Technical Reference 
Version 1.4 
Authors 
Markus Groß, Patrick Markl 
Status 
Released
Technical Reference MICROSAR Safe Silence Verifier 
2014, Vector Informatik GmbH 
Version: 1.4 
based on template version 4.11.3 
2 / 22 
Document Information 
History 
Author 
Date 
Version Remarks 
Markus Groß 
2012-07-24 1.0 
Initial version 
Patrick Markl 
2012-08-22 1.1 
Changes after review 
Markus Groß 
2012-11-15 1.2 
Add information about third party libraries 
Markus Groß 
2013-01-15 1.3 
Update to reflect changes 
Patrick Markl 
2014-03-03 1.4 
Added restrictions chapter 
Reference Documents 
No. 
Source 
Title 
Version 
[1] 
ISO 
ISO/IEC 9899:1990, Programming languages -C 
Second 
edition
Technical Reference MICROSAR Safe Silence Verifier 
2014, Vector Informatik GmbH 
Version: 1.4 
based on template version 4.11.3 
3 / 22 
Contents 
1 
Introduction................................................................................................................... 6 
1.1 
Intended audience ............................................................................................. 6 
2 
Functional Description ................................................................................................. 7 
2.1 
Required Environment ....................................................................................... 7 
2.2 
Restrictions ........................................................................................................ 7 
2.3 
Command Line Parameters ............................................................................... 7 
2.3.1 
Option -h, --help ................................................................................. 8 
2.3.2 
Option --version ................................................................................. 8 
2.3.3 
Option -v, --verbose ............................................................................ 8 
2.3.4 
Option --crcCheck .............................................................................. 8 
2.3.5 
Option --openReport .......................................................................... 8 
2.3.6 
Option --stats ................................................................................ 8 
2.3.7 
Option -l, --logFile .............................................................................. 8 
2.3.8 
Option -r, --reportFile .......................................................................... 9 
2.3.9 
Option -p, --pluginDir .......................................................................... 9 
2.3.10 
Option -D, --define ............................................................................. 9 
2.3.11 
Option –i, --inputDir ............................................................................ 9 
2.3.12 
Command Line Usage ....................................................................... 9 
2.3.12.1 
Option Only Parameters .................................................. 9 
2.3.12.2 
Parameters Requiring A Value ....................................... 10 
2.3.12.3 
Examples ....................................................................... 10 
3 
Analysis Report .......................................................................................................... 11 
3.1.1 
Structure .......................................................................................... 11 
3.1.1.1 
Header ........................................................................... 11 
3.1.1.2 
Information about Environment ...................................... 11 
3.1.1.3 
Detailed Log Output ....................................................... 11 
3.2 
Error Messages ............................................................................................... 12 
3.3 
Steps if the Analysis Fails ................................................................................ 13 
4 
Integration ................................................................................................................... 14 
4.1 
Deliverables ..................................................................................................... 14 
4.2 
GENy ............................................................................................................... 14 
4.3 
DaVinci Configurator Pro 5............................................................................... 16 
5 
Third Party Libraries ................................................................................................... 18 
5.1 
Boost ............................................................................................................... 18 
5.2 
ChaiScript ........................................................................................................ 18
Technical Reference MICROSAR Safe Silence Verifier 
2014, Vector Informatik GmbH 
Version: 1.4 
based on template version 4.11.3 
4 / 22 
5.3 
LLVM/Clang ..................................................................................................... 19 
5.4 
OpenBSD regex ............................................................................................... 20 
6 
Contact ........................................................................................................................ 22
Technical Reference MICROSAR Safe Silence Verifier 
2014, Vector Informatik GmbH 
Version: 1.4 
based on template version 4.11.3 
5 / 22 
Tables 
Table 2-1 
Command Line Parameters ........................................................................ 8 
Table 3-1 
Message classes and their value .............................................................. 13 
Table 4-1 
Locations of Deliverables in an SIP .......................................................... 14
Technical Reference MICROSAR Safe Silence Verifier 
2014, Vector Informatik GmbH 
Version: 1.4 
based on template version 4.11.3 
6 / 22 
1 
Introduction 
MICROSAR Safe Silence Verifier (MSSV) is a command li

[Back to top](#_top)
