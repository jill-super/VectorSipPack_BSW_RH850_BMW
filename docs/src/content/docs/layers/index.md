---
title: "AUTOSAR layers"
description: "How this repository maps onto the AUTOSAR layered architecture."
sidebar:
  order: 1
---

The repository is a complete Vector MICROSAR SIP plus BMW application extensions. Every module page states its **origin** (Vector MICROSAR, BMW custom, or third-party).

| Layer | Content in this repo |
|---|---|
| [Application Software (ASW)](./../asw/) | BMW application extensions, bootloader apps and integration glue. — 0 module pages (+7 BMW application pages) |
| [Complex Device Drivers (CDD)](./../cdd/) | Hardware-adjacent drivers: the Vector FBL flash wrapper for RH850. — 1 module pages |
| [Services](./../services/) | System services: memory, diagnostics, security, OS, mode management, E2E. — 16 module pages |
| [ECU Abstraction](./../ecu-abstraction/) | Hardware-independent abstraction of MCU peripherals. — 3 module pages |
| [MCAL](./../mcal/) | Microcontroller Abstraction Layer for Renesas RH850 P1x. — 1 module pages |
| [Communication](./../communication/) | COM stack incl. the FlexRay cluster: Fr, FrIf, FrSM, FrTp, PduR, XCP. — 13 module pages |
| [Shared / Common](./../shared/) | Common headers, compiler abstraction and SIP version check. — 3 module pages |
| [Configuration & Tooling](./../tools/) | DaVinci Configurator, generators, HexView, RteAnalyzer, BSWMD. — 0 module pages |

## Origin legend

| Origin | Meaning |
|---|---|
| Vector-provided | Proprietary Vector MICROSAR code — configure in DaVinci, do not hand-edit |
| Custom (BMW) | In-house BMW code under `Applications/`, `IntegrationFiles` |
| Third-party | Renesas MCAL and GNU/Cygwin tooling, integrated via Vector helpers |

[Back to top](#_top)
