@echo off
setlocal
call setenv.cmd
if "%1"=="" goto icc
if "%1"=="--icc" goto icc
if "%1"=="-i" goto icc
if "%1"=="--emx" goto emx
if "%1"=="-e" goto emx
if "%1"=="--gcc" goto gcc
if "%1"=="-g" goto gcc
if "%1"=="--oldconf" goto oldconf
if "%1"=="-o" goto oldconf
if "%1"=="--test" goto test
if "%1"=="-t" goto test
if "%1"=="--package" goto package
if "%1"=="-p" goto package
"echo.exe" "usage: makeos2 [--emx|-e|--gcc|-g|--icc|-i|--oldconf|-o|--test|-t|--package|-p]"
goto end

:emx
set COMPILER=gcc-emx
goto initial

:gcc
set COMPILER=gcc-os2
goto initial

:icc
set COMPILER=icc-os2
goto initial

:initial
sh -c "export TODAY=`date.exe`; export LCL_DATE=`date.exe | cut -d ' ' -f 2,3,6`; make -e -f Makefile.os2 %2 %3 %4 %5 %6 %7 %8 %9"
goto end

:oldconf
if not exist ..\src\Headers\local_constants.h copy local_constants.h ..\src\Headers\local_constants.h
if not exist ..\src\Headers\heral.h copy local_constants.h ..\src\Headers\herald.h
make -f Makefile.os2 --directory=../src --warn-undefined-variables %2 %3 %4 %5 %6 %7 %8 %9 
if not exist ..\bin mv ..\src\lclint.exe ..\bin
if errorlevel 0 mv ..\src\lclint.exe ..\bin
goto end

:test
cd ..\test
echo it's %LARCH_PATH% and %LCLIMPORTDIR%
make LCLINT=%basedir%\bin\lclint %2 %3 %4 %4 %5 %6 %7 %8 %9 -e -f Makefile-test.os2
cd ..\os2
goto end

:package
cd %basedir%\..
rm -f lclint-%version%-os2-*.tar*
tar cvf lclint-%version%-os2-bin.tar lclint-%version%\bin lclint-%version%\imports lclint-%version%\lib lclint-%version%\os2 lclint-%version%\test lclint-%version%\BUFFERCHECKING lclint-%version%\LICENSE lclint-%version%\README
tar cvf lclint-%version%-os2-all.tar lclint-%version%
cd \export\lclint
tar cvf %basedir%\..\lclint-%version%-os2-add.tar lclint-%version%
gzip %basedir%\..\lclint-%version%-os2-*.tar
goto end

:end
endlocal
