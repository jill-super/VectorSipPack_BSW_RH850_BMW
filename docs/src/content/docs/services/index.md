---
title: "Services"
description: "System services: memory, diagnostics, security, OS, mode management, E2E."
sidebar:
  order: 0
---

All modules in this layer ship with the Vector MICROSAR SIP unless marked otherwise.

| Module | Origin | Purpose |
|---|---|---|
| [BSW Mode Manager](./bswm/) | Vector-provided | Arbitrates mode requests (communication, ECU state) and executes action lists. |
| [Cryptographic Abstraction Library (Cal)](./cal/) | Vector-provided | Crypto abstraction: hash, MAC generation/verification, signatures, symmetric encrypt/decrypt. |
| [CRC Library](./crc/) | Vector-provided | CRC-8/16/32 routines used by E2E, NvM and safety paths. |
| [Crypto Interface](./cryif/) | Vector-provided | Multiplexes crypto jobs from Csm to the underlying crypto drivers. |
| [Crypto Driver (RH850 ICUS)](./cry-30-rh850icus/) | Vector-provided | Hardware-accelerated AES, CMAC, RNG and key extraction on Renesas RH850 ICU-S. |
| [Crypto Driver Wrapper](./crypto-30-crywrapper/) | Vector-provided | AUTOSAR Crypto driver wrapping RH850 ICUS primitives, incl. key management. |
| [Crypto Service Manager](./csm/) | Vector-provided | Asynchronous crypto job interface for SecOC, Dcm and applications. |
| [Diagnostic Communication Manager](./dcm/) | Vector-provided | UDS diagnostics over FlexRay (via FrTp): sessions, services, security access. |
| [Diagnostic Event Manager](./dem/) | Vector-provided | Fault memory, DTC status, debouncing and DTR/OBD interfaces. |
| [Default Error Tracer](./det/) | Vector-provided | Development error reporting hook for BSW modules. |
| [End-to-End Protection Library](./e2e/) | Vector-provided | E2E profiles (P01/P02/P04/P05/P06/P11/P22/…) for safety-related communication. |
| [ECU State Manager](./ecum/) | Vector-provided | Startup/shutdown, sleep/wake and driver initialisation sequencing. |
| [Flash EEPROM Emulation](./fee-30-smallsector/) | Vector-provided | FEE with small-sector support on RH850 data flash for NvM persistence. |
| [NVRAM Manager](./nvm/) | Vector-provided | Block-based NV data management: redundancy, callbacks, implicit/explicit synchronisation. |
| [Operating System (MICROSAR OS Gen7)](./os/) | Vector-provided | AUTOSAR multi-core OS: tasks, alarms, schedule tables, memory protection, IOC. |
| [Watchdog Manager](./wdgm/) | Vector-provided | Supervision of alive/logical/program-flow checkpoints, triggers via WdgIf. |

[Back to top](#_top)
