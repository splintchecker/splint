@echo off
setlocal
call setenv.cmd
if "%1"=="" goto compile
if "%1"=="-c" goto compile
if "%1"=="--compile" goto compile
if "%1"=="--test" goto test
if "%1"=="-t" goto test
if "%1"=="--package" goto package
if "%1"=="-p" goto package
"echo.exe" "usage: makeos2 [--compile|-c|--test|-t|--package|-p]"
goto end

:compile
make -C ../src -e -f Makefile.os2 %2 %3 %4 %5 %6 %7 %8 %9
goto end

:test
cd ..\test
echo it's %LARCH_PATH% and %LCLIMPORTDIR%
make SPLINT=%basedir%\bin\splint.exe %2 %3 %4 %4 %5 %6 %7 %8 %9 -e -f Makefile.os2
cd ..\os2
goto end

:package
cd %basedir%\..
rm -f splint-%version%-os2-*.tar*
tar cvf splint-%version%-os2-bin.tar splint-%version%\bin splint-%version%\imports splint-%version%\lib splint-%version%\os2 splint-%version%\test splint-%version%\LICENSE splint-%version%\README
tar cvf splint-%version%-os2-all.tar splint-%version%
cd \export\splint
tar cvf %basedir%\..\splint-%version%-os2-add.tar splint-%version%
gzip %basedir%\..\splint-%version%-os2-*.tar
goto end

:end
endlocal
