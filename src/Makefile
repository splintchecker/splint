##################################################
###                                         
### Makefile for LCLint                     
###                                         
### designed for use with gmake (GNU make)  
###                                         
### original version based on LCL Makefile  
### completely revised December 1993        
### revised for 1.4a, November 1994         
### revised for 2.0, February 1996
### revised for 2.2, August 1996
###                                         
### This file should not need to be edited. 
###
### Compilers and tools set using the top-level Makefile override settings
### in this file when make is run from the top directory.
###
### Commands:
###
### make all 
###    builds a release version of lclint from scratch using optimizations
###
### make quick
###    builds a local version of lclint (no optimizations)
###    (does not remake files)
###
### make test
###    runs the test suite 
###    (must have installed test suite from lclint.test.tar.Z)
###

.SUFFIXES : .h .c .o .l .check
.PHONY    : all dorerelease retest rerelease homeversion
.IGNORE   : dorerelease retest rerelease

###
### system information (compilers, flags, directories, etc.)
###

include Makefile.sys

###
### check files before compiling
### (can't be 1 unless you have lclint already!)
###

CHECK = 0 ### set to 1

###
### source files
###

include Makefile.sources

###
### top level
### 

all : dorelease

quick: lclint

lclint : $(OBJ) 
	@echo '// '
	@echo '//  Linking:'
	@echo '// '
	$(CC) -o lclint $(OBJ) $(LINKFLAGS)

###
### grammars
###

###
### -p xx flag to bison renames yyparse ==> xxparse, xxlex ==> xxlex
### this is probably NOT compatible with yacc.
###

signature.c : signature.c.der signature.y
ifdef BISON
	@$(BISON) $(YFLAGS) -p lsl signature.y
	@$(CAT) bison.head signature.tab.c > signature.c
	@$(MV) Headers/signature_gen.h Headers/signature_gen.bak
	@$(CAT) bison.head signature.tab.h > Headers/signature_gen.h
else
	$(CP) signature.c.der signature.c
endif

cgrammar.c : cgrammar.c.der cgrammar.y
ifdef BISON
	$(BISON) $(YFLAGS) cgrammar.y
	@echo '//           Expect 119 shift/reduce conflicts and 114 reduce/reduce conflicts.'
	@echo '//           (see cgrammar.y for explanation)'
	@$(CAT) bison.head cgrammar.tab.c > cgrammar.c
	@$(MV) Headers/cgrammar_tokens.h Headers/cgrammar_tokens.bak
	@$(CAT) bison.head cgrammar.tab.h > Headers/cgrammar_tokens.h
else
	$(CP) cgrammar.c.der cgrammar.c
endif

### llgrammar2.h is necessary so +singleinclude may be used

llgrammar.c  : llgrammar.c.der llgrammar.y
ifdef BISON
	$(BISON) $(YFLAGS) -p yl llgrammar.y
	@echo '//            Expect 2 shift/reduce conflicts.'
	@$(CAT) bison.head llgrammar.tab.c > llgrammar.c
	@$(MV) Headers/llgrammar_gen2.h Headers/llgrammar_gen2.bak
	@$(CAT) bison.head llgrammar.tab.h > Headers/llgrammar_gen2.h
	@$(MV) Headers/llgrammar_gen.h Headers/llgrammar_gen.bak
	@$(CAT) bison.head llgrammar.tab.h > Headers/llgrammar_gen.h
else
	$(CP) llgrammar.c.der llgrammar.c
endif

cscanner.c : cscanner.c.der cscanner.l
ifdef FLEX				
	$(FLEX) $(LFLAGS) cscanner.l 
	$(CAT) flex.head lex.yy.c > cscanner.c
else
	$(CP) cscanner.c.der cscanner.c
endif

###
### compile without warnings
### 

signature.o : signature.c
	$(CC) $(CPPFLAGS) -c $*.c

cgrammar.o : cgrammar.c
	$(CC) $(CPPFLAGS) -c $*.c

llgrammar.o : llgrammar.c
	$(CC) $(CPPFLAGS) -c $*.c

cscanner.o : cscanner.c
	$(CC) $(CPPFLAGS) -c $*.c

###
### header files dependant on grammars
###

Headers/signature2.h : signature.c
Headers/cgrammar2.h : cgrammar.c
Headers/llgrammar.h : llgrammar.c

###
### defaults
###

### Flags for checking a single file
SINGLEFLAGS = +neverinclude -supcounts +partial -showsummary -load lclint.lcd

.c.check: lclint.lcd lclint
	$(LCLINT) $(LINTFLAGS) $(SINGLEFLAGS) $*.c

.c.o:
ifeq ($(CHECK), 1)
	$(LCLINT) $(LINTFLAGS) $(SINGLEFLAGS) $*.c
endif
	@echo '//  Compiling '$*.c' / compiled: '`$(OFILES)`'  (of 120 files)'
	@$(CC) $(CFLAGS) -c $*.c

###
### alternatives (tests, releases, backups, etc.)
###

### -e option makes environment variables take precedence

.PHONY : test quicktest opt up 

opt :
ifneq (,$(findstring csh, $(SHELL)))
	setenv CC '$(CCOPT)' ; $(MAKE) -e lclint
else
	CC="$(CCOPT)" ; export CC ; $(MAKE) -e lclint
endif

updateversion:
	@$(MV) Headers/herald.h Headers/herald.last
	@echo '/* herald.h - created automatically by gmake updateversion */' > Headers/herald.h
	@echo '/*@constant observer char *LCL_VERSION;@*/' >> Headers/herald.h
	@echo '# define LCL_VERSION "LCLint '`cat $(VERSION_NUMBER)`' --- '`cat DATE`'"' \
              >> Headers/herald.h
	@echo '/*@constant observer char *LCL_PARSE_VERSION;@*/' >> Headers/herald.h
	@echo '# define LCL_PARSE_VERSION "LCLint '`cat $(VERSION_NUMBER)`'"' \
              >> Headers/herald.h
	@echo '/*@constant observer char *LCL_COMPILE;@*/' >> Headers/herald.h
	@echo '# define LCL_COMPILE "Compiled using '$(CC)' on '`uname -a`' by '`whoami`'"' >> Headers/herald.h

localconstants:
	@$(MV) Headers/local_constants.h Headers/local_constants.last
	@echo '/* local_constants.h - created automatically by gmake localconstants */' \
                > Headers/local_constants.h
ifndef SYSTEM_LIBDIR
	@echo '*** Fatal Error: SYSTEM_LIBDIR not defined.'
else
	@echo '/*@constant observer char *SYSTEM_LIBDIR;@*/' >> Headers/local_constants.h
	@echo '# define SYSTEM_LIBDIR $(SYSTEM_LIBDIR)' >> Headers/local_constants.h
ifndef DEFAULT_LARCHPATH
	@echo '*** Fatal Error: DEFAULT_LARCHPATH not defined.'
else
	@echo '/*@constant observer char *DEFAULT_LARCHPATH;@*/' >> Headers/local_constants.h
	@echo '# define DEFAULT_LARCHPATH $(DEFAULT_LARCHPATH)' >> Headers/local_constants.h
ifndef DEFAULT_LCLIMPORTDIR
	@echo '*** Fatal Error: DEFAULT_LARCHPATH not defined.'
else
	@echo '/*@constant observer char *DEFAULT_LCLIMPORTDIR;@*/' >> Headers/local_constants.h
	@echo '# define DEFAULT_LCLIMPORTDIR $(DEFAULT_LCLIMPORTDIR)' >> Headers/local_constants.h
endif
endif
endif

dorelease: 
	@echo '// '
	@echo '//  Making LCLint'
	@echo '//  Version '`cat $(VERSION_NUMBER)`
	@echo '// '
	@echo '//  Compiler: '$(CCOPT)
ifdef BISON
	@echo '//  Bison: '$(BISON)
else
	@echo '//  Use derived bison files'
endif
ifdef FLEX
	@echo '//  Flex: '$(FLEX)
else
	@echo '//  Use derived flex files'
endif
	@echo '//  Default cpp command: '$(DEFAULT_CPPCMD)
	@echo '//  System include directory: '$(SYSTEM_LIBDIR)
	@echo '//  Default Larch path: '$(DEFAULT_LARCHPATH)
	@echo '//  Default imports directory: '$(DEFAULT_LCLIMPORTDIR)
	@echo '// '
	@echo '//  Updating version information'
	@$(MAKE) -e updateversion
	@echo '//  Updating local constants'
###	@$(MAKE) -e localconstants
	@echo '// '
	@echo '//  Compiling:'
	@echo '// '
	@$(MAKE) -e opt
	@echo '//  Done Release '`cat $(VERSION_NUMBER)`
	
###
### cleaning
###
### Standard entries to remove files from the directories
###    up       --- remove .o files and grammar derivatives
###    tidy     --- eliminate unwanted files
###    clean    --- delete derived files, except for spec-derived files
###    pristine --- delete all derived files
###

.PHONY .IGNORE : up tidy clean pristine

pristine: clean
	-$(RM) -f *.lcs *.lslo

clean: tidy
	-$(RM) core lclint 
	-$(RM) *.out *.output *.bib *.dvi *.idx *.log *.o *.toc
	-$(RM) cgrammar.c cscanner.c
	-$(RM) test* Headers/*~ Headers/#* 

tidy:
	-$(RM) ,* .,* *.CKP *.BAK .emacs_[0-9]* core a.out *.*~

up: 
	-$(RM) cgrammar.c llgrammar.c signature.c cscanner.c 
	-$(RM) *.o

###
### dependancies
###

depend:
	$(MAKEDEPEND) $(CINCLUDES) $(CFLAGS) -f Makefile.depend $(SRC) $(GRAMS)

###
### analysing dependancies takes a long time and doesn't work terribly
### well, so the are NOT included here.  NOTE carefully, this means if a
### header file is changed manual recompilation may be necessary.
###

### include Makefile.depend

###
### LCLint checking
###

### 
### A library is used for the specifications
###

$(CHECKS): lclint.lcd

###
### other flags are in .lclintrc file
### 

lint: 
	$(LCLINT) -f lclint.lclintrc $(CPPFLAGS) +singleinclude $(ALLSRC) -dump lclint




