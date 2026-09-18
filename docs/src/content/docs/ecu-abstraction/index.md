---
title: "ECU Abstraction"
description: "Hardware-independent abstraction of MCU peripherals."
sidebar:
  order: 0
---

All modules in this layer ship with the Vector MICROSAR SIP unless marked otherwise.

| Module | Origin | Purpose |
|---|---|---|
| [I/O Hardware Abstraction](./iohwab/) | Vector-provided | Signal-level I/O abstraction between MCAL and RTE/SWCs. |
| [Memory Abstraction Interface](./memif/) | Vector-provided | Abstracts FEE/EA devices behind a common API for NvM. |
| [Watchdog Interface](./wdgif/) | Vector-provided | Abstracts internal/external watchdogs for WdgM. |

[Back to top](#_top)
