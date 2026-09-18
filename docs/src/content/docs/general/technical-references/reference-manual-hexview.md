---
title: "ReferenceManual HexView"
description: "Converted Vector Technical Reference: ReferenceManual_HexView.pdf."
---

> **Converted from** [`Doc/TechnicalReferences/ReferenceManual_HexView.pdf`](../../../../../../Doc/TechnicalReferences/ReferenceManual_HexView.pdf) (121 pages). Machine-converted with PyMuPDF: running text and structure are preserved as Markdown, but **layout, figures, tables and formulas may differ from the original PDF**. For normative content, always consult the original PDF.

| Property | Value |
|---|---|
| Source | [`ReferenceManual_HexView.pdf`](../../../../../../Doc/TechnicalReferences/ReferenceManual_HexView.pdf) |
| Pages | 121 |
| PDF title | HexView |
| Author | Armin Happel |

## Document outline

- 1 Introduction
  - 1.1 Important notes
  - 1.2 Release notes
    - 1.2.1 Hexview V1.11.00
  - 1.3 Terminology
- 2 User Interface
  - 2.1 With a Double Click to the Main Menu
    - 2.1.1 Edit a HEX data line
    - 2.1.2 Change the base address of a data block, erase it or jump directly to the beginning of the block data
  - 2.2 Menu
    - 2.2.1 Menu: “File”
      - 2.2.1.1 New
      - 2.2.1.2 Open
      - 2.2.1.2.1 Auto-file format analysing process
      - 2.2.1.3 Merge
      - 2.2.1.4 Compare
      - 2.2.1.5 Save
      - 2.2.1.6 Save as
      - 2.2.1.7 Log Commands
      - 2.2.1.8 Import
      - 2.2.1.8.1 Import Intel-Hex/Motorola S-Record
      - 2.2.1.8.2 Read 16-Bit Intel Hex
      - 2.2.1.8.3 Import binary data
      - 2.2.1.8.4 Import HEX ASCII
      - 2.2.1.8.5 Import GM data
      - 2.2.1.8.6 Import Fiat data
      - 2.2.1.8.7 Import Ford Ihex data
      - 2.2.1.8.8 Import Ford VBF data
      - 2.2.1.8.9 Import GAC binary file
      - 2.2.1.9 Export
      - 2.2.1.9.1 Export as S-Record
      - 2.2.1.9.2 Export as Intel-HEX
      - 2.2.1.9.3 Export as HEX-ASCII
      - 2.2.1.9.4 Export as CCP Flashkernel
      - 2.2.1.9.5 Export as C-Array
      - 2.2.1.9.6 Export Mime coded data
      - 2.2.1.9.7 Export Binary data
      - 2.2.1.9.8 Export binary block data
      - 2.2.1.9.9 Export Fiat Binary File
      - 2.2.1.9.10 Export Ford Ihex data container

_104 further outline entries in the original._

## Excerpt (first pages)

Reference Manual HexView 
© 2017 Vector Informatik GmbH 
Version 1.11.01 
1 
based on template version 5.1.0 
HexView 
Reference Manual 
Version 1.11.01 
Authors 
Armin Happel 
Status 
Released
Reference Manual HexView 
© 2017 Vector Informatik GmbH 
Version 1.11.01 
2 
based on template version 5.1.0 
Document Information 
History 
Author 
Date 
Version 
Remarks 
Vishp 
2006-02-21 
1.0 
> Creation 
Vishp 
2006-07-14 
1.1 
> Description of new features for V1.2.0 
> Main features are: 
> Support for Ford-VBF and Ford-IHex in 
dialogs 
> Compare-Feature 
> Auto-detect file format on file open/save 
Vishp 
2006-09-27 
1.2 
> Description of new features for V1.3.0 
> Merge and compare uses now the auto-
filetype detection 
> Merge operation available from 
commandline 
> Address calculation from banked to linear 
addresses from commandline 
> Checksum calculation feature from 
commandline places results into file or data. 
Vishp 
2006-12-07 
1.3 
> Description of new features for V1.4.0 
> Commandline: Checksum operates on 
selected section. Multiple checksum areas 
can be specified from the commandline. 
> Postbuild operation added 
> Fixing Ford IHex configuration problem for 
flashindicator and File-Browse in the dialog 
> Option /CR (cut-section) added to the 
commandline 
> Delete and Cut&paste with internal 
clipboard added. 
> Description of the commandline processing 
order added to the document 
> Program returns a value depending on the 
status of operation 
> New option combination /XG with /MPFH to 
re-position existing NOAM to adjusted 
NOAR-fields 
> Goto start of a block (double-click to block 
descriptor) 
> Find ASCII string in data was added 
Vishp 
2007-07-09 
1.31 
> Description of new features for V1.4.6 
> Support part number in GM-files (option /pn)
Reference Manual HexView 
© 2017 Vector Informatik GmbH 
Version 1.11.01 
3 
based on template version 5.1.0 
from the commandline and reading the file 
Vishp 
2007-09-19 
1.4 
> Description of new features for V1.5 
> Start CANflash from within Hexview 
> Create partial datafiles for Fiat-export 
> Support VBF V2.4 for Ford 
> Support Align Erase (/AE) 
> Use ranges instead of start and end address 
> Creation of a validation structure 
> New About-dialog with personalized license 
info 
Vishp 
2008-01-31 
1.5 
> Fixing wrong description of checksum 
calculation for method 8 (see Table 3-3, 
index 8) 
Vishp 
2009-05-19 
1.6 
> Description of new features for V1.6 
> Fixing problem when HEX-file contain 
addresses until 0xFFFF.FFFF 
> Extend expdatproc interface to allow 
insertion of data processing results into 
HEX-file 
> Now browse for data processing parameter 
file 
> Intel-HEX record length now adjustable 
> This document can now be opened from 
Help menu 
> Allow to select multiple post build files 
> Generate structured hex file from Eeprom 
data set 
> C-array generation supports structured list, 
Ansi-C and memmap. 
Vishp 
2009-11-27 
1.06.01 
> Fixing problems with path names using a 
colon, e.g. “D:” 
> Minor corrections in the documentation 
(CRC calculation algorithms) 
Vishp 
2010-10-11 
1.06.04 
> AccessParameter for Fiat export now 
editable. 
> Export binary blocks from commandline 
interface 
Vishp 
2011-12-05 
1.07.00 
> Fixing Windows7 problems in dialogs. 
> Faster HEX read operation 
> Support dsPIC copy and ghost byte 
clearance 
> Export splitted binary data files per segment 
> Add checksum to last data bytes (@end)
Reference Manual HexView 
© 2017 Vector Informatik GmbH 
Version 1.11.01 
4 
based on template version 5.1.0 
> Further support for compress+sign 
> Padding for data encryption 
> Scanning memory for EepM data (for 
development) 
> S5 records are now tolerated. 
> Swapping words or longwords 
Vishp 
2012-09-15 
1.08.00 
> Solving further Win7 problems in dialogs. 
> Adding SHA256 in checksum and data 
processing DLL 
> Record type specifier in the commandline for 
Intel-HEX and Motorola S-Records. 
> Add import and Export for HEX ASCII data 
through commandline 
> Generate signature header for GM 
> Support for VBF V2.5 (Volvo) 
Vishp 
2014-03-11 
1.08.04 
> Correcting padding mode for AES 
> Add support for IV-Vector w/ AES-CBC 
> Support for VBF V3.0 (Ford) 
> Improvements for the GM-header signature 
generation for cyber security. 
> Corrections on address range definition for 
data processing. 
> Ford-VBF allows now to omit the erase 
table. Editable now in the GUI. 
> Call to CANflash removed. 
> Description for validation structure 
generation added. 
> Support multiple part numbers for VBF 
> Merging files over commandline supports 
now wildcards. 
> Order of identifiers for VBF corrected. 
> Expdatproc V1.08.04 added 
> RSA encryption/decryption byte order 
corrected. 
> Padding mode for AES corrected 
> IV can be specified explicitly for AES 
CBC in the parameter 
Vishp 
2014-04-07 
1.08.05 
> Commandline option to export MIME coded 
files 
Vishp 
2014-05-19 
1.08.06 
> Export/Import of GAC binary files 
Vishp 
2014-01-16 
1.09.00 
> Import and Export of MIME coded files 
(BASE64) 
> Correct description of /remap in the
Reference Manual HexView 
© 2017 Vector Informatik GmbH 
Version 1.11.01 
5 
based on template version 5.1.0 
commandline overview 
> New expdatproc included, rework RSA 
encryption/decryption, crypto-library 
replaced with Vector crypto-lib.. 
> ARLE compression/decompression added. 
> Support GM compressed envelope 
> Incorrect length of imported MIME data 
> Wrong update of erase information in ini file 
for VBF 
> Message "out of memory" displayed when 
opening BIN-files 
> File type recognition failure with files that 
have no extensions 
> Checksum calculation over a fixed range, 
even if there are wholes in the internal data 
Commandline: /cs<csum-method-
number>:@<address>;!<range>|<fillpattern> 
Example: /cs9:@0x8000;!0x9000-
0xBFFF|CAFÉ 
Vishp 
2015-04-13 
1.09.01 
> Validation struct inserted as separate block. 
> Support for VBF V4.0 
> Support spl

[Back to top](#_top)
