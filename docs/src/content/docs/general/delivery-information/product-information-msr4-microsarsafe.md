---
title: "ProductInformation 2 MSR4-MICROSARSafe"
description: "Converted delivery document: ProductInformation_2_MSR4-MICROSARSafe.pdf."
---

> **Converted from** [`Doc/DeliveryInformation/ProductInformation_2_MSR4-MICROSARSafe.pdf`](../../../../../../Doc/DeliveryInformation/ProductInformation_2_MSR4-MICROSARSafe.pdf) (68 pages). Machine-converted with PyMuPDF: running text and structure are preserved as Markdown, but **layout, figures, tables and formulas may differ from the original PDF**. For normative content, always consult the original PDF.

| Property | Value |
|---|---|
| Source | [`ProductInformation_2_MSR4-MICROSARSafe.pdf`](../../../../../../Doc/DeliveryInformation/ProductInformation_2_MSR4-MICROSARSafe.pdf) |
| Pages | 68 |
| PDF title | MICROSAR Safe |
| Author | Jonas Wolf |

## Document outline

- 1 Introduction
  - 1.1 Purpose
  - 1.2 Scope
  - 1.3 Overview
- 2 Safety Concept
  - 2.1 Overview
  - 2.2 Partitioning Options
  - 2.3 Safety Concept
    - 2.3.1 Technical Solution
    - 2.3.2 Tool Confidence
  - 2.4 Technical Safety Requirements
    - 2.4.1 Initialization
    - 2.4.2 Self-test
    - 2.4.3 Reset of ECU
    - 2.4.4 Data Consistency
    - 2.4.5 Non-volatile Memory
    - 2.4.6 Hard Real-time Scheduling
    - 2.4.7 Memory Protection
    - 2.4.8 Communication
      - 2.4.8.1 Inter ECU Communication
      - 2.4.8.2 Intra ECU Communication
    - 2.4.9 Monitoring of Software
    - 2.4.10 Operating Modes
    - 2.4.11 Peripheral In- and output
  - 2.5 Assumptions
    - 2.5.1 Environment
      - 2.5.1.1 Safety Concept
      - 2.5.1.2 Use of MICROSAR Safe Components
      - 2.5.1.3 Partitioning
      - 2.5.1.4 Resources
    - 2.5.2 Process
- 3 Delivery Process
  - 3.1 Overview
  - 3.2 Deliverables
    - 3.2.1 Safety Manual
    - 3.2.2 Verification Tools
    - 3.2.3 Safety Case
  - 3.3 Prerequisites
  - 3.4 Prototype SIPs and Evaluation Bundles
- 4 Components of MICROSAR Safe

_28 further outline entries in the original._

## Excerpt (first pages)

MICROSAR Safe 
Product Information 
Version 1.9.1 
Authors 
Jonas Wolf 
Status 
Released
Product Information MICROSAR Safe 
© 2017 Vector Informatik GmbH 
Version 1.9.1 
2 
based on template version 5.12.0 
Document Information 
History 
Author 
Date 
Version 
Remarks 
Jonas Wolf 
2015-10-31 
1.0.0 
Initial creation. 
Jonas Wolf 
2015-11-13 
1.0.1 
Remove GPT safety feature, add COM 
constraints 
Jonas Wolf 
2015-11-26 
1.0.2 
Adapt release types 
Jonas Wolf 
2015-12-01 
1.0.3 
Review of TSRs finished 
Jonas Wolf 
2015-12-10 
1.0.4 
Review comments by visrn 
Jonas Wolf 
2015-12-17 
1.0.5 
Safety manager mail contact details 
changed 
Jonas Wolf 
2016-01-19 
1.1.0 
Review by vismoe; Partitioning details 
added. 
Jonas Wolf 
2016-01-19 
1.1.1 
Fix term for SafeWDG 
Jonas Wolf 
2016-01-26 
1.1.2 
Fix typos 
Jonas Wolf 
2016-01-29 
1.1.3 
Update information from safety manual 
Jonas Wolf 
2016-03-08 
1.2.0 
Update information from safety manual 
Update roadmap 
Update Safety Case delivery 
Update of format 
Update delivery process 
Jonas Wolf 
2016-06-28 
1.2.1 
Update of lead time for production delivery 
Jonas Wolf 
2016-08-08 
1.3.0 
Update of roadmap 
Jonas Wolf 
2016-08-08 
1.3.1 
Remove constraint of PDUR 
Jonas Wolf 
2016-09-05 
1.3.2 
Update of roadmap 
Jonas Wolf 
2016-10-26 
1.4.0 
Update on XCP and AMD cluster 
Update on Ethernet 
Update on lead time for Safety Case for 
ASIL A/B 
Update of document structure 
Jonas Wolf 
2016-12-12 
1.4.1 
Update on Ethernet availability 
Jonas Wolf 
2017-01-10 
1.5.0 
Availability information revised 
Moved TLS to Ethernet cluster 
Removed constraint on COM 
Jonas Wolf 
2017-03-16 
1.6.0 
Added information that post build is not 
recommended 
Detail information on delivery dates 
Update to AUTOSAR 4.3 
Update of availability 
Rene Isau 
2017-03-23 
1.6.1 
Corrected minor typos 
Rene Isau 
2017-03-27 
1.6.2 
Updated delivery time for Safety Case 
Jonas Wolf 
2017-06-20 
1.7.0 
Introduced new delivery type
Product Information MICROSAR Safe 
© 2017 Vector Informatik GmbH 
Version 1.9.1 
3 
based on template version 5.12.0 
Production (Safety-ready) 
Update of Technical Safety Requirements 
Jonas Wolf 
2017-07-14 
1.7.1 
Added information on SOMEIPTP 
Jonas Wolf 
2017-08-15 
1.8.0 
Added information on vSENT, SafeETH, 
XFs, OEM SWCs 
Update of illustrations to fix typos 
Jonas Wolf 
2017-08-17 
1.8.1 
Added information on Safety Case 
Jonas Wolf 
2017-08-18 
1.9.0 
Simplification of delivery process and more 
information on issue reporting 
Incorporate safety manual updates 
Jonas Wolf 
2017-12-12 
1.9.1 
Make information about delivery process 
more precise 
Reference Documents 
No. 
Source 
Title 
Version 
[1] 
ISO 
ISO 26262 
Road vehicles — Functional safety 
2011/2012
Product Information MICROSAR Safe 
© 2017 Vector Informatik GmbH 
Version 1.9.1 
4 
based on template version 5.12.0 
Contents 
1 
Introduction................................................................................................................... 8 
1.1 
Purpose ............................................................................................................. 8 
1.2 
Scope ................................................................................................................ 8 
1.3 
Overview ............................................................................................................ 8 
2 
Safety Concept ............................................................................................................. 9 
2.1 
Overview ............................................................................................................ 9 
2.2 
Partitioning Options ............................................................................................ 9 
2.3 
Safety Concept ................................................................................................ 10 
2.3.1 
Technical Solution ............................................................................ 10 
2.3.2 
Tool Confidence ............................................................................... 11 
2.4 
Technical Safety Requirements ........................................................................ 12 
2.4.1 
Initialization ...................................................................................... 12 
2.4.2 
Self-test ............................................................................................ 12 
2.4.3 
Reset of ECU ................................................................................... 12 
2.4.4 
Data Consistency ............................................................................. 13 
2.4.5 
Non-volatile Memory ........................................................................ 13 
2.4.6 
Hard Real-time Scheduling .............................................................. 14 
2.4.7 
Memory Protection ........................................................................... 14 
2.4.8 
Communication ................................................................................ 14 
2.4.8.1 
Inter ECU Communication ............................................. 14 
2.4.8.2 
Intra ECU Communication ............................................. 15 
2.4.9 
Monitoring of Software ..................................................................... 16 
2.4.10 
Operating Modes ............................................................................. 17 
2.4.11 
Peripheral In- and output .................................................................. 17 
2.5 
Assumptions .................................................................................................... 18 
2.5.1 
Environment ..................................................................................... 18 
2.5.1.1 
Safety Concept .............................................................. 18 
2.5.1.2 
Use of MICROSAR Safe Components ........................... 19 
2.5.1.3 
Partitioning ...................

[Back to top](#_top)
