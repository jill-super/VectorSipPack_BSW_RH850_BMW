@echo off

echo.
echo * Run HexView to generate flashrom *
echo.

if "%1" == "" goto wrongParameter

@echo [C_EXPORT]                                                                          >  %~dp0\%~n1.ini
@echo Decryption=1         ;  0=Off,  1=On                                                >> %~dp0\%~n1.ini
@echo Decryptvalue=0xCA    ; Value for encryption using XOR with each uchar/ushort/ulong  >> %~dp0\%~n1.ini
@echo Prefix=flashDrv                                                                     >> %~dp0\%~n1.ini
@echo WordSize=0           ; 0=uchar, 1=ushort, 2=ulong                                   >> %~dp0\%~n1.ini
@echo WordType=0           ; 0=Intel, 1=Motorola (only used if wordsize > 0).             >> %~dp0\%~n1.ini
@echo CreateMemmap=1                                                                      >> %~dp0\%~n1.ini
@echo CreateMemmapPerSection=0                                                            >> %~dp0\%~n1.ini

set HEXVIEWEXEGLOBAL="D:\Uti\HexView\HexView.exe"
set HEXVIEWEXELOCAL="%~d0%~p0..\..\..\Misc\HexView\HexView.exe"

if "%HEXVIEWEXEGLOBAL% "==" " goto TryHexVievNotLocal
if not exist %HEXVIEWEXEGLOBAL% goto TryHexVievNotLocal
set HEXVIEWEXE=%HEXVIEWEXEGLOBAL%
goto runHexView

:TryHexVievNotLocal
if "%HEXVIEWEXELOCAL% "==" " goto HexViewNotFound
if not exist %HEXVIEWEXELOCAL% goto HexViewNotFound
set HEXVIEWEXE=%HEXVIEWEXELOCAL%

:runHexView
echo Removing old flashrom.
if exist "%~d0%~p0..\flashrom.c" del /F "%~d0%~p0..\flashrom.c"
if exist "%~d0%~p0..\flashrom.h" del /F "%~d0%~p0..\flashrom.h"
if exist "%~d0%~p0..\flashrom.c" goto RemoveFlashRomError
if exist "%~d0%~p0..\flashrom.h" goto RemoveFlashRomError
echo Run HexView.
%HEXVIEWEXE% %1 /s /FAFF /XC -o %~d0%~p0..\flashrom.c
if not exist "%~d0%~p0..\flashrom.c" goto FlashRomNotBuild
color 2F
echo flashrom built.
goto end

:RemoveFlashRomError
color 4F
echo flashrom could not get deleted.
pause
goto end

:FlashRomNotBuild
color 4F
echo HexView did not build the flashrom.
pause
goto end

:HexViewNotFound
color 4F
echo HexView not found.
pause
goto end

:wrongParameter
color 4F
echo Hexfile not found. Command line should look like this "MkFlashRom.bat FlashDrv.hex"
pause

:end
