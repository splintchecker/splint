@echo off
rem *****************************************************************
rem run splint from the source\os2 directory with proper environment
rem *****************************************************************
setlocal
call setenv.cmd
echo it's %LCLBINARY%, %LARCH_PATH% and %LCLIMPORTDIR%
%LCLBINARY% %1 %2 %3 %4 %5 %6 %7 %8 %9
endlocal
