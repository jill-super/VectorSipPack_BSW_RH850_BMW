---
title: "Readme CBD1700369 D04"
description: "Converted delivery document: Readme_CBD1700369_D04.pdf."
---

> **Converted from** [`Doc/DeliveryInformation/Readme_CBD1700369_D04.pdf`](../../../../../../Doc/DeliveryInformation/Readme_CBD1700369_D04.pdf) (1 pages). Machine-converted with PyMuPDF: running text and structure are preserved as Markdown, but **layout, figures, tables and formulas may differ from the original PDF**. For normative content, always consult the original PDF.

| Property | Value |
|---|---|
| Source | [`Readme_CBD1700369_D04.pdf`](../../../../../../Doc/DeliveryInformation/Readme_CBD1700369_D04.pdf) |
| Pages | 1 |
| Author | Trinh, Nam |

## Excerpt (first pages)

Readme CBD1700369 D04 
 Note / Integration hints 
BAC modules 
In our integration we used the latest BMW BAC modules which were available 
(BAC4.3 Version 3.5.0). However, we faced some issues with the BAC modules 
which forced us to modify the code of the BAC modules to be able to do a complete 
flash process successfully. Both issues were submitted to BMW and we suppose they 
get fixed in one of the next BAC4.3 releases. 
We added the modified you your SIP in the folder “IntegrationFiles”: 
The patches are marked in the files with @@@patchedByVector. You can replace the 
original files with these ones as long as these issues exist. 
At BMW the issue are registered as BAC-6612 and BAC-6828. 
DiagSystemTest 
One testcase (3.1.4) of the DiagSystemTest could not be performed successfully 
since the test suite just stops the CANoe measurement when running this testcase. 
Please contact BMW in case you’re facing the same issue.

[Back to top](#_top)
