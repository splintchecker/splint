@echo off
rem *****************************************************************
rem run LCLint from the source\os2 directory with proper environment
rem *****************************************************************
setlocal
set base=e:\usr\src\lclint-3.0.0.16
set LARCH_PATH=%base%\lib
set LCLIMPORTDIR=%base%\imports
set LCLBINARY=%base%\bin\lclint.exe 
echo it's %LCLBINARY%, %LARCH_PATH% and %LCLIMPORTDIR%
%LCLBINARY% %1 %2 %3 %4 %5 %6 %7 %8 %9
endlocal
