@echo off
rem *****************************************************************************
rem * MAKESUPPORT_DIR has to be set to MakeSupport root directory
rem * There MUSTN'T be any blanks between the '=' sign and the path string
rem * Example: 
rem *     set MAKESUPPORT_DIR=..\..\MakeSupport
rem *****************************************************************************

set MAKESUPPORT_DIR=..\..\..\MakeSupport

rem *****************************************************************************
rem * DO NOT EDIT ANYTHING BELOW THIS
rem *****************************************************************************

if "%MAKESUPPORT_DIR% "==" "   goto ErrorNotSet
if not exist %MAKESUPPORT_DIR% goto ErrorWrongPath

set PATH_TARGET_USAGE_LOG=\\vistrpesfs1\Project2\CAN_Base\CANtate\zMakesupport\Data
set PATH_OLD=%PATH%
set PATH=%MAKESUPPORT_DIR%\cmd;%PATH%
set CYGWIN=nodosfilewarning

rem *****************************************************************************
rem * Run make and store its return value afterwards.
rem * The return value is passed to the caller of m.bat at the end of the file.
rem *****************************************************************************
%MAKESUPPORT_DIR%\cmd\make %1 %2 %3 %4 %5 %6 %7 %8 %9
SET GNU_MAKE_RETURN_CODE=%ERRORLEVEL%
set PATH=%PATH_OLD%
set PATH_OLD=

:TargetUsageLogging
setlocal EnableDelayedExpansion
if %1!==! (
    set target=build
) else (
    set target=%1
)

if not exist "%PATH_TARGET_USAGE_LOG%" goto End
set MakeSupportTargetUsageLog=%PATH_TARGET_USAGE_LOG%\StatisticLog_%USERNAME%.txt
set MakeSupportTargetUsageLogTMP=%PATH_TARGET_USAGE_LOG%\StatisticLog_TMP_%USERNAME%_%DATE%_%RANDOM%.txt
if not exist "%MakeSupportTargetUsageLog%" type NUL > %MakeSupportTargetUsageLog%
if not exist "%MakeSupportTargetUsageLogTMP%" type NUL > %MakeSupportTargetUsageLogTMP%
set ActionUsageCount=1
for /F "tokens=1,2*" %%a in (%MakeSupportTargetUsageLog%) do (
    if "%%a"=="%target%" (
        REM - action match: increase usage counter
        set ActionUsageCount=%%b
        set /a ActionUsageCount+=1
        echo %%a !ActionUsageCount! %DATE%>>"%MakeSupportTargetUsageLogTMP%"
    ) else (
        REM - action not match
        echo %%a %%b %%c>>"%MakeSupportTargetUsageLogTMP%"
    )
)
if !ActionUsageCount! equ 1 (
    REM - action not found: create new entry
    echo %target% 1 %DATE%>>"%MakeSupportTargetUsageLogTMP%"
)
type %MakeSupportTargetUsageLogTMP% > %MakeSupportTargetUsageLog%
del "%MakeSupportTargetUsageLogTMP%" >nul
set MakeSupportTargetUsageLog=
set MakeSupportTargetUsageLogTMP=
set ActionUsageCount=
goto End

:ErrorNotSet
echo ************************************************************************
echo BRS warning: MAKESUPPORT_DIR has to be set to MakeSupport\cmd directory!
echo              Please correct setting in this batch file and try again!
echo ************************************************************************
goto End

:ErrorWrongPath
echo ************************************************************************
echo BRS warning: %MAKESUPPORT_DIR% does not exist
echo              Please correct setting in this batch file and try again!
echo ************************************************************************
goto End

:End
set MAKESUPPORT_DIR=
exit /b %GNU_MAKE_RETURN_CODE%
