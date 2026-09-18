---
title: "Communication"
description: "COM stack incl. the FlexRay cluster: Fr, FrIf, FrSM, FrTp, PduR, XCP."
sidebar:
  order: 0
---

All modules in this layer ship with the Vector MICROSAR SIP unless marked otherwise.

| Module | Origin | Purpose |
|---|---|---|
| [AUTOSAR COM](./com/) | Vector-provided | Signal/PDU communication: packing, filtering, notifications, gateway support. |
| [Communication Manager](./comm/) | Vector-provided | Coordinates BusSM network state machines and user channel requests. |
| [E2E Transformer](./e2exf/) | Vector-provided | E2E transformer (E2EXf) for RTE-level protection. |
| [FlexRay Driver](./fr/) | Vector-provided | RH850 FlexRay controller driver: message buffers, interrupts, synchronisation. |
| [FlexRay Interface](./frif/) | Vector-provided | Hardware-independent FlexRay abstraction: job lists, LPDU Tx/Rx, timers. |
| [FlexRay State Manager](./frsm/) | Vector-provided | FlexRay cluster/node state machine (startup, wakeup, halt). |
| [FlexRay Transceiver Driver](./frtrcv-30-tja1082/) | Vector-provided | Driver for the NXP TJA1082 FlexRay transceiver. |
| [XCP on FlexRay](./frxcp/) | Vector-provided | Measurement/calibration protocol mapped onto FlexRay. |
| [I-PDU Multiplexer](./ipdum/) | Vector-provided | Multiplexed I-PDUs (static/dynamic parts) for FlexRay frames. |
| [PDU Router](./pdur/) | Vector-provided | Routes I-PDUs between interfaces (FrIf), transport (FrTp) and upper layers. |
| [Secure Onboard Communication](./secoc/) | Vector-provided | PDU authentication with freshness management (uses Csm/Cry). |
| [FlexRay Transport Protocol](./tp-iso10681/) | Vector-provided | FrTp (ISO 10681): segmentation/reassembly for Dcm/XCP over FlexRay. |
| [Universal Measurement & Calibration (XCP)](./xcp/) | Vector-provided | XCP core: DAQ/STIM, calibration, seed-and-key hooks. |

[Back to top](#_top)
