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
make -f Makefile.os2 confclean
make -e -f Makefile.os2 %2 %3 %4 %5 %6 %7 %8 %9
goto end

:oldconf
make -f Makefile.os2 --directory=../src --warn-undefined-variables %2 %3 %4 %5 %6 %7 %8 %9 
make -f Makefile.os2 --directory=../lib --warn-undefined-variables %2 %3 %4 %5 %6 %7 %8 %9 
goto end

:test
cd ..\test
echo it's %LARCH_PATH% and %LCLIMPORTDIR%
make LCLINT=%basedir%\bin\splint %2 %3 %4 %4 %5 %6 %7 %8 %9 -e -f Makefile.os2
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
