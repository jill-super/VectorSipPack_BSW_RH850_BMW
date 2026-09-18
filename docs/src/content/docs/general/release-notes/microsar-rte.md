---
title: "ReleaseNotes_MICROSAR_RTE.htm"
description: "Release note: ReleaseNotes_MICROSAR_RTE.htm."
---

> Converted from [`Doc/ReleaseNotes/ReleaseNotes_MICROSAR_RTE.htm`](../../../../../../Doc/ReleaseNotes/ReleaseNotes_MICROSAR_RTE.htm). HTML formatting simplified to Markdown.

MICROSAR RTE Release Notes
<!-- body { font-size:12pt;font-family:arial,sans-serif; color:#000000; background-color: #E5E5E5;}
 h1 {font-size:18pt; font-family:arial,sans-serif}
 h2 {font-size:16pt; font-family:arial,sans-serif}
 h3 {font-size:12pt; font-family:arial,sans-serif}
 h4 {font-size:10pt; font-family:arial,sans-serif}
 p,td,th,address,ul,ol,li {font-size:10pt; font-family:arial,sans-serif}
 th {background-color: #D0D0E0;}
 pre {font-size:10pt;}
 p.small {font-size:8pt; font-family:arial,sans-serif}
 a {font-family:arial,sans-serif}
 /* from W3-REC.css: */ @media screen { /* hide from IE3 */ a:hover { background: #FE0 }}
 //-->
MICROSAR RTE Release Notes
Copyright (c) 2017 Vector Informatik GmbH. All rights reserved.
Table of contents
MICROSAR RTE 4.16.0 - DaVinci Developer Version 3.13.x
MICROSAR RTE 4.15.0 - DaVinci Developer Version 3.13.x
MICROSAR RTE 4.14.0 - DaVinci Developer Version 3.13.x
MICROSAR RTE 4.13.1 - DaVinci Developer Version 3.13.x
MICROSAR RTE 4.13.0 - DaVinci Developer Version 3.13.x
MICROSAR RTE 4.12.1 - DaVinci Developer Version 3.13.x
MICROSAR RTE 4.12.0 - DaVinci Developer Version 3.13.x
MICROSAR RTE 4.11.0 - DaVinci Developer Version 3.12.x
MICROSAR RTE 4.10.0 - DaVinci Developer Version 3.12.x
MICROSAR RTE 4.9.0 - DaVinci Developer Version 3.12.x
MICROSAR RTE 4.8.1 - DaVinci Developer Version 3.11.x
MICROSAR RTE 4.8.0 - DaVinci Developer Version 3.11.x
MICROSAR RTE 4.7.1 - DaVinci Developer Version 3.10.x
MICROSAR RTE 4.7.0 - DaVinci Developer Version 3.10.x
MICROSAR RTE 4.6.0 - DaVinci Developer Version 3.9.x
MICROSAR RTE 4.5.0 - DaVinci Developer Version 3.9.x
MICROSAR RTE 4.4.2 - DaVinci Developer Version 3.8.x
MICROSAR RTE 4.4.1 - DaVinci Developer Version 3.8.x
MICROSAR RTE 4.4.0 - DaVinci Developer Version 3.8.x
MICROSAR RTE 4.3.0 - DaVinci Developer Version 3.7.x
MICROSAR RTE 4.2.1 - DaVinci Developer Version 3.6.x
MICROSAR RTE 4.2.0 - DaVinci Developer Version 3.6.x
MICROSAR RTE 4.1.3 - DaVinci Developer Version 3.5.x
MICROSAR RTE 4.1.2 - DaVinci Developer Version 3.5.x
MICROSAR RTE 4.1.1 - DaVinci Developer Version 3.5.x
MICROSAR RTE 4.1.0 - DaVinci Developer Version 3.5.x
MICROSAR RTE 4.0.0 - DaVinci Developer Version 3.4.x
MICROSAR RTE 3.90.0 - DaVinci Developer Version 3.3.x
MICROSAR RTE 2.22.0 - DaVinci Developer Version 3.3.x
MICROSAR RTE 2.21.0 - DaVinci Developer Version 3.2.x
MICROSAR RTE 2.20.1 - DaVinci Developer Version 3.1.x
MICROSAR RTE 2.20.0 - DaVinci Developer Version 3.1.x
MICROSAR RTE 2.19.1 - DaVinci Developer Version 3.0 (SP5)
MICROSAR RTE 2.19.0 - DaVinci Developer Version 3.0 (SP5)
MICROSAR RTE 2.18.2 - DaVinci Developer Version 3.0 (SP4)
MICROSAR RTE 2.18.1 - DaVinci Developer Version 3.0 (SP4)
MICROSAR RTE 2.18.0 - DaVinci Developer Version 3.0 (SP4)
MICROSAR RTE 2.17.6 - DaVinci Developer Version 3.0 (SP3)
MICROSAR RTE 2.17.5 - DaVinci Developer Version 3.0 (SP3)
MICROSAR RTE 2.17.4 - DaVinci Developer Version 3.0 (SP3)
MICROSAR RTE 2.17.3 - DaVinci Developer Version 3.0 (SP3)
MICROSAR RTE 2.17.2 - DaVinci Developer Version 3.0 (SP3)
MICROSAR RTE 2.17.1 - DaVinci Developer Version 3.0 (SP3)
MICROSAR RTE 2.17.0 - DaVinci Developer Version 3.0 (SP3)
MICROSAR RTE 2.16.1 - DaVinci Developer Version 3.0 (SP2)
MICROSAR RTE 2.16.0 - DaVinci Developer Version 3.0 (SP2)
MICROSAR RTE 2.15.5 - DaVinci Developer Version 3.0 (SP1)
MICROSAR RTE 2.15.4 - DaVinci Developer Version 3.0 (SP1)
MICROSAR RTE 2.15.3 - DaVinci Developer Version 3.0 (SP1)
MICROSAR RTE 2.15.2 - DaVinci Developer Version 3.0 (SP1)
MICROSAR RTE 2.15.1 - DaVinci Developer Version 3.0 (SP1)
MICROSAR RTE 2.15.0 - DaVinci Developer Version 3.0 (SP1)
MICROSAR RTE 2.14.0 - DaVinci Developer Version 3.0 (SP1)
MICROSAR RTE 2.13.0 - DaVinci Developer Version 3.0
MICROSAR RTE 2.12.1 - DaVinci Tool Suite Version 2.3 (SP7)
MICROSAR RTE 2.12.0 - DaVinci Tool Suite Version 2.3 (SP7)
MICROSAR RTE 2.11.0 - DaVinci Tool Suite Version 2.3 (SP6)
MICROSAR RTE 2.10.3 - DaVinci Tool Suite Version 2.3 (SP5)
MICROSAR RTE 2.10.2 - DaVinci Tool Suite Version 2.3 (SP5)
MICROSAR RTE 2.10.1 - DaVinci Tool Suite Version 2.3 (SP5)
MICROSAR RTE 2.10.0 - DaVinci Tool Suite Version 2.3 (SP5)
MICROSAR RTE 2.9.4 - DaVinci Tool Suite Version 2.3 (SP4)
MICROSAR RTE 2.9.3 - DaVinci Tool Suite Version 2.3 (SP4)
MICROSAR RTE 2.9.2 - DaVinci Tool Suite Version 2.3 (SP4)
MICROSAR RTE 2.9.1 - DaVinci Tool Suite Version 2.3 (SP4)
MICROSAR RTE 2.9.0 - DaVinci Tool Suite Version 2.3 (SP4)
MICROSAR RTE 2.8.1 - DaVinci Tool Suite Version 2.3 (SP3)
MICROSAR RTE 2.8.0 - DaVinci Tool Suite Version 2.3 (SP3)
MICROSAR RTE 2.7.1 - DaVinci Tool Suite Version 2.3 (SP2)
MICROSAR RTE 2.7.0 - DaVinci Tool Suite Version 2.3 (SP2)
MICROSAR RTE 2.6.5 - DaVinci Tool Suite Version 2.3 (SP1)
MICROSAR RTE 2.6.4 - DaVinci Tool Suite Version 2.3 (SP1)
MICROSAR RTE 2.6.3 - DaVinci Tool Suite Version 2.3 (SP1)
MICROSAR RTE 2.6.2 - DaVinci Tool Suite Version 2.3 (SP1)
MICROSAR RTE 2.6.1 - DaVinci Tool Suite Version 2.3 (SP1)
MICROSAR RTE 2.6.0 - DaVinci Tool Suite Version 2.3 (SP1)
MICROSAR RTE 2.5.0 - DaVinci Tool Suite Version 2.3
MICROSAR RTE 2.4.2 Beta - DaVinci Tool Suite Version 2.3 Beta
MICROSAR RTE 2.4.1 Beta - DaVinci Tool Suite Version 2.3 Beta
MICROSAR RTE 2.4.0 Beta - DaVinci Tool Suite Version 2.3 Beta
MICROSAR RTE 2.3.0 - DaVinci Tool Suite Version 2.2 (SP3)
MICROSAR RTE 2.2.4 - DaVinci Tool Suite Version 2.2 (SP2)
MICROSAR RTE 2.2.2 - DaVinci Tool Suite Version 2.2 (SP1)
MICROSAR RTE 2.2.1 - DaVinci Tool Suite Version 2.2
Additional Information
MICROSAR RTE 4.16.0 - DaVinci Developer Version 3.13.x
RTE features
PDU meta data is now included in transaction handle for client-server calls
Plain array implementation datatypes can now be used in combination with shared axis
The display format from datatypes is now used for A2L generation
A2L now also takes data constraint ranges into account
Measurement objects for calibration SWCs are now only generated if the interface has calibration enabled
Unused tasks that contain r…

[Back to top](#_top)
