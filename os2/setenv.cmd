rem **********************************************************************
rem Configure me: This is needed because the test targets are made in
rem               different directories, so absolute paths in the 
rem               environment variables are needed.
rem **********************************************************************
set version=3.0.0.16
set basedir=e:\usr\src\lclint-%version%
set LARCH_PATH=%basedir%\lib
set LCLIMPORTDIR=%basedir%\imports
set LCLBINARY=%basedir%\bin\lclint.exe 
