CC=icc -q -W2 -Dunlink=unlink -O+ -G5 -Gf+ -Gi+ -Gs+ 
CFLAGS=
CPPFLAGS=-I.\Headers -DSTDC_HEADERS=1 -DOS2 
BISON=bison
FLEX=flex
YFLAGS=-v -t -d
LFLAGS=
SYSTEM_LIBDIR="\\usr\\include"
DEFAULT_LCLIMPORTDIR="\\usr\\lib\\lclint\\imports"
DEFAULT_LARCHPATH=".;\\usr\\lib\\lclint\\lib"
DEFAULT_CPPCMD="cpp "
LINKFLAGS=-B/noe setargv.obj fl.lib lclint.def
O=.obj
E=.exe
OFLAG=-felclint.exe
CAT=type
MV=mv
CP=cp
ECHO="echo.exe"
