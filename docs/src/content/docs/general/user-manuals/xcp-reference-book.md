---
title: "XCP ReferenceBook V3.0 EN"
description: "Converted user manual: XCP_ReferenceBook_V3.0_EN.pdf."
---

> **Converted from** [`Doc/UserManuals/XCP_ReferenceBook_V3.0_EN.pdf`](../../../../../../Doc/UserManuals/XCP_ReferenceBook_V3.0_EN.pdf) (116 pages). Machine-converted with PyMuPDF: running text and structure are preserved as Markdown, but **layout, figures, tables and formulas may differ from the original PDF**. For normative content, always consult the original PDF.

| Property | Value |
|---|---|
| Source | [`XCP_ReferenceBook_V3.0_EN.pdf`](../../../../../../Doc/UserManuals/XCP_ReferenceBook_V3.0_EN.pdf) |
| Pages | 116 |
| PDF title | XCP – The Standard Protocol for ECU Development |
| Author | Vector Informatik GmbH: Andreas Patzer | Rainer Zaiser |

## Document outline

- Table of Contents
- Introduction
- 1 Fundamentals of the XCP Protocol
  - 1.1 XCP Protocol Layer
    - 1.1.1 Identification Field
    - 1.1.2 Timestamp
    - 1.1.3 Data Field
  - 1.2 Exchange of CTOs
    - 1.2.1 XCP Command Structure
    - 1.2.2 CMD
    - 1.2.3 RES
    - 1.2.4 ERR
    - 1.2.5 EV
    - 1.2.6 SERV
    - 1.2.7 Calibrating Parameters in the Slave
  - 1.3 Exchanging DTOs – Synchronous Data Exchange
    - 1.3.1 Measurement Methods: Polling versus DAQ
    - 1.3.2 DAQ Measurement Method
    - 1.3.3 STIM Calibration Method
    - 1.3.4 XCP Packet Addressing for DAQ and STIM
    - 1.3.5 Bypassing = DAQ + STIM
  - 1.3.6. Time Correlation and Synchronization
    - 1.3.6.1 Multicast
    - 1.3.6.2. Grandmaster Clock
  - 1.4 XCP Transport Layers
    - 1.4.1 CAN
    - 1.4.2 CAN FD
    - 1.4.3 FlexRay
    - 1.4.4 Ethernet
    - 1.4.5 SxI
    - 1.4.6 USB
    - 1.4.7 LIN
  - 1.5 XCP Services
    - 1.5.1 Memory Page Switching
    - 1.5.2 Saving Memory Pages – Data Page Freezing
    - 1.5.3 Flash Programming
    - 1.5.4 Automatic Detection of the Slave
    - 1.5.5 Block Transfer Mode for Upload, Download and Flashing
    - 1.5.6 Cold Start Measurement (during Power-On)
    - 1.5.7 Security Mechanisms with XCP

_35 further outline entries in the original._

## Excerpt (first pages)

Andreas Patzer | Rainer Zaiser
XCP – The Standard Protocol
for ECU Development
Fundamentals and Application Areas
Andreas Patzer | Rainer Zaiser
XCP – The Standard Protocol for ECU Development
Date December 2016
Reproduction only with expressed permission from 
Vector Informatik GmbH, Ingersheimer Str. 24, 70499 Stuttgart, Germany
© 2016 by Vector Informatik GmbH. All rights reserved. This book is only intended for personal use, but not 
for technical or commercial use. It may not be used as a basis for contracts of any kind. All information in this 
book was compiled with the greatest possible care, but Vector Informatik does not assume any guarantee or 
warranty whatsoever for the correctness of the information it contains. The liability of Vector Informatik is 
excluded, except for malicious intent or gross negligence, to the extent that laws do not make it legally liable. 
Information contained in this book may be protected by copyright and / or patent rights. Product names of 
software, hardware and other product names that are used in this book may be registered brands or otherwise 
protected by branding laws, regardless of whether or not they are identified as registered brands.
XCP
The Standard Protocol
for ECU Development
Fundamentals and Application Areas
Andreas Patzer, Rainer Zaiser 
Vector Informatik GmbH
Table of Contents
Introduction........................................................................................................................................... 7
1 Fundamentals of the XCP Protocol...........................................................................................13
1.1 XCP Protocol Layer................................................................................................................. 19
1.1.1 
Identification Field........................................................................................................21
1.1.2 
Timestamp......................................................................................................................21
1.1.3 
Data Field....................................................................................................................... 22
1.2 Exchange of CTOs................................................................................................................... 22
1.2.1 
XCP Command Structure........................................................................................... 22
1.2.2 CMD................................................................................................................................. 25
1.2.3 RES..................................................................................................................................28
1.2.4 ERR..................................................................................................................................28
1.2.5 EV..................................................................................................................................... 29
1.2.6 SERV................................................................................................................................ 29
1.2.7 Calibrating Parameters in the Slave........................................................................ 29
1.3 Exchanging DTOs – Synchronous Data Exchange.........................................................32
1.3.1 
Measurement Methods: Polling versus DAQ.......................................................... 33
1.3.2 DAQ Measurement Method....................................................................................... 34
1.3.3 STIM Calibration Method........................................................................................... 42
1.3.4 XCP Packet Addressing for DAQ and STIM............................................................ 43
1.3.5 Bypassing = DAQ + STIM............................................................................................45
1.3.6 Time Correlation and Synchronization....................................................................45
1.4 XCP Transport Layers............................................................................................................49
1.4.1 
CAN.................................................................................................................................. 49
1.4.2 CAN FD........................................................................................................................... 52
1.4.3 FlexRay............................................................................................................................ 54
1.4.4 Ethernet.......................................................................................................................... 57
1.4.5 SxI..................................................................................................................................... 59
1.4.6 USB................................................................................................................................. 60
1.4.7 LIN................................................................................................................................... 60
1.5 XCP Services............................................................................................................................. 61
1.5.1 
Memory Page Swapping..............................................................................................61
1.5.2 Saving Memory Pages – Data Page Freezing.......................................................63
1.5.3 Flash Programming...................................................................................................... 63
1.5.4 Automatic Detection of the Slave............................................................................65
1.5.5 Block Transfer Mode for Upload, Download and Flashing.................................66
1.5.6 Cold Start Measurement............................................

[Back to top](#_top)
