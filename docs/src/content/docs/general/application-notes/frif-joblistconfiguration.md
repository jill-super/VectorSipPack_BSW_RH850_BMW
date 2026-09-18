---
title: "AN-ISC-8-1140_FrIf_JobListConfiguration"
description: "Converted Vector application note: AN-ISC-8-1140_FrIf_JobListConfiguration.pdf."
---

> **Converted from** [`Doc/ApplicationNotes/AN-ISC-8-1140_FrIf_JobListConfiguration.pdf`](../../../../../../Doc/ApplicationNotes/AN-ISC-8-1140_FrIf_JobListConfiguration.pdf) (10 pages). Machine-converted with PyMuPDF: running text and structure are preserved as Markdown, but **layout, figures, tables and formulas may differ from the original PDF**. For normative content, always consult the original PDF.

| Property | Value |
|---|---|
| Source | [`AN-ISC-8-1140_FrIf_JobListConfiguration.pdf`](../../../../../../Doc/ApplicationNotes/AN-ISC-8-1140_FrIf_JobListConfiguration.pdf) |
| Pages | 10 |
| PDF title | JobList Configuration of FlexRay Interface |
| Author | Oliver, Reineke; Drescher, Markus |

## Document outline

- 1.0 Overview
  - 1.1 What is the Job List about?
    - 1.1.1 Communication Jobs
  - 1.2 Job List Configuration
    - 1.2.1 Scheduling Algorithm – Default
    - 1.2.2 Scheduling Algorithm – Concatenated Jobs
    - 1.2.3 Scheduling Algorithm – User Defined
  - 1.3 Synchronisation of BSW main functions
- 2.0 Configuration aspects
  - 2.1 PDUs with decoupled transmission
    - 2.1.1 Optimal BSW main function placement
      - 2.1.1.1 FRTP Main Function placement
      - 2.1.1.2 FRNM Main Function placement
    - 2.1.2 Wrong FRIFJob configurations
  - 2.2 PDUs with immediate transmission
- 3.0 Contacts

## Excerpt (first pages)

JobList Configuration of FlexRay Interface 
Version 1.2 
2014-03-19 
Application Note AN-ISC-8-1140 
Author(s) 
Oliver, Reineke; Drescher, Markus 
Restrictions 
Customer confidential - AUTOSAR only 
Abstract 
This application notes describes how the FlexRay Interface JobList is configured. 
Table of Contents 
 1 
Copyright © 2014 - Vector Informatik GmbH 
Contact Information: www.vector-informatik.com or ++49-711-80 670-0 
1.0 
Overview .......................................................................................................................................................... 1 
1.1 
What is the Job List about? ........................................................................................................................... 1 
1.1.1 
Communication Jobs .................................................................................................................................. 1 
1.2 
Job List Configuration .................................................................................................................................... 2 
1.2.1 
Scheduling Algorithm – Default .................................................................................................................. 2 
1.2.2 
Scheduling Algorithm – Concatenated Jobs ............................................................................................... 3 
1.2.3 
Scheduling Algorithm – User Defined ......................................................................................................... 3 
1.3 
Synchronisation of BSW main functions ....................................................................................................... 3 
2.0 
Configuration aspects ...................................................................................................................................... 4 
2.1 
PDUs with decoupled transmission ............................................................................................................... 5 
2.1.1 
Optimal BSW main function placement ...................................................................................................... 5 
2.1.2 
Wrong FRIFJob configurations ................................................................................................................... 8 
2.2 
PDUs with immediate transmission ............................................................................................................... 9 
3.0 
Contacts ......................................................................................................................................................... 10 
1.0 Overview 
The following application note describes how to configure the FRIF Job List. 
1.1 What is the Job List about? 
Receive and transmit buffers of the FlexRay CC (communication controller) may only be accessed at well defined 
points in time in order to avoid concurrent access to the buffers by the hardware and the software. To provide this 
synchronous access, the FlexRay Interface defines a FlexRay Job List for each cluster. The cluster’s FlexRay Job 
List is executed by its Job List Execution (JLE) function using an absolute timer of the FlexRay CC. 
1.1.1 Communication Jobs 
A FlexRay Job List is a list of communication jobs that are sorted according to the time when they shall be 
executed. This start time defines when the respective JLE function shall be called. The communication operations 
specify the actual actions to process within the communication job.
JobList Configuration of FlexRay Interface 
2 
Application Note AN-ISC-8-1140 
According the AUTOSAR SWS the FlexRay Interface supports the following communication operations that can be 
performed for each receive or transmit buffer: 
• 
Decoupled Transmission 
• 
Receive and Indicate 
• 
Tx Confirmation 
1.2 Job List Configuration 
As the FRIF Job List configuration is difficult and error-prone, GENy offers the possibility to calculate the 
scheduling of the communication operations. The FlexRay Interface supports the following configuration 
mechanisms (SchedulingAlgorithms) in GENy: 
• 
Default 
• 
Concatenated Jobs 
• 
User Defined 
1.2.1 Scheduling Algorithm – Default 
The default scheduling algorithm divides the FlexRay cycle into x segments of the same size, where x is the 
number of Tx or Rx jobs. Depending on the start slot and end slot of these segments the start time of the 
corresponding task and the maximum ISR delay is automatically calculated. 
Example: 
For a cycle with a length of 5000 macro ticks which is divided into a static segment of 3000 macro ticks length and 
a dynamic segment of 2000 macro ticks length, the following segments (Segment 0 and Segment 1 in Figure 1) 
arise: 
Figure 1 – Default Scheduling Algorithm 
Note: 
A TxConf job is needed if a Tx job performs the decoupled transmission for a FlexRay frame with 
at least one PDU that shall be confirmed to the upper layer component. The Default Scheduling 
Algorithm takes the first job after the last slot of the Tx job as TxConf job. 
In the example above Rx1 is the TxConf job for Tx1 (because it is the first job after Segment 0) and 
Rx0 is the TxConf job for Tx0 (because it is the first Job after Segment 1).
JobList Configuration of FlexRay Interface 
3 
Application Note AN-ISC-8-1140 
1.2.2 Scheduling Algorithm – Concatenated Jobs 
In contrast to the default algorithm the Concatenated Jobs algorithm configures the start time of an Rx and the 
following Tx FRIF job to the same macrotick parameter and enables the Job Concatenation Enable option. As one 
timer interrupt is used to activate an Rx and Tx FRIF job, this algorithm can be used to reduce the interrupt load of 
the FlexRay Interface. 
Figure 2 – Concatenated Jobs Scheduling Algorithm 
Note: 
Due to the job concatenation it is not possible to achieve both shortest possible indication times 
after reception and latest data for transmission. 
For example in the picture above the concatenated jobs Rx0

[Back to top](#_top)
