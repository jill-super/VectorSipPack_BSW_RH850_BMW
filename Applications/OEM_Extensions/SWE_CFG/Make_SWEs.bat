copy ..\EPS\Appl\EPS.sx .\APPL\in_EPS.sx
copy ..\BTLD\Appl\BTLD.sx .\BTLD\in_BTLD.sx
C:\EC-Apps\ESG\SWE-Generator\SWE-Generator.exe -gui off -mode swegen -config .\BTLD\BTLD.cfg -outputpath .\BTLD -log BTLD-msr.log -par in_BTLD.sx
copy .\BTLD\btld_000064bd_001_000_000.msr .\BLU\in_btld_000064bd_001_000_000.msr
copy ..\BLU\Appl\BLU_EPS.sx .\BLU\in_BLU_EPS.sx
C:\EC-Apps\ESG\SWE-Generator\SWE-Generator.exe -gui off -mode swegen -config .\BLU\BLU.cfg -outputpath .\BLU -log BLU-msr.log -par in_BLU_EPS.sx -par in_btld_000064bd_001_000_000.msr
C:\EC-Apps\ESG\SWE-Generator\SWE-Generator.exe -gui off -mode compress -compressmode compressconvert -efficiency 50 -compressinput .\BTLD\btld_000064bd_001_000_000.msr -outputpath .\BTLD -log .\BTLD\BTLD-bsw.log
C:\EC-Apps\ESG\SWE-Generator\SWE-Generator.exe -gui off -mode compress -compressmode compressconvert -efficiency 50 -compressinput .\BLU\btld_000064bd_001_000_000.msr -outputpath .\BLU -log .\BLU\BLU-bsw.log
