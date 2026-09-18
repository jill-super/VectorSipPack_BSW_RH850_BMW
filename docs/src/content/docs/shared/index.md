---
title: "Shared / Common"
description: "Common headers, compiler abstraction and SIP version check."
sidebar:
  order: 0
---

All modules in this layer ship with the Vector MICROSAR SIP unless marked otherwise.

| Module | Origin | Purpose |
|---|---|---|
| [SIP Version Check](./sipversioncheck/) | Vector-provided | Compile-time SIP identity: delivery CBD1700369_D04, SIP 19.06.14 (v_ver.h). |
| [Vector Standard Library](./vstdlib/) | Vector-provided | Optimised memory routines for BSW. |
| [Common Headers](./-common/) | Vector-provided | Std_Types, Platform_Types, Compiler and MemMap headers shared by the whole SIP. |

[Back to top](#_top)
