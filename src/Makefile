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
.PHONY    : all dorerelease retest rerelease homeversion test updateversion
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

#LCLINT = //tmp/lclint-2.5q/bin/lclint
LCLINTNEW = //afs/cert.org/usr/dlaroche/evLCLintDev/bin/lclint
#LCLINTNEW = /home/drl7x/evLCLintDev/evLCLintDev/bin/lclint
LCLINT = ../bin/lclint

###
### source files
###

include Makefile.sources

###
### top level
### 

all : dorelease

quick: lclint

nocheck:
	CHECK=0; export CHECK; ${MAKE} -e 

lclint : $(OBJ) 
	@echo '// '
	@echo '//  Linking:'
	@echo '// '
	$(CC) -o lclint $(OBJ) $(LINKFLAGS)

purify: ${OBJ}
	purify ${CC} -o lclint ${OBJ} ${LINKFLAGS}

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
	@$(CAT) bison.head signature.tab.c bison.reset > signature.c
	-@$(MV) Headers/signature_gen.h Headers/signature_gen.bak
	@$(CAT) bison.head signature.tab.h bison.reset > Headers/signature_gen.h
else
	$(CP) signature.c.der signature.c
endif

cgrammar.c : cgrammar.c.der cgrammar.y
ifdef BISON
	$(BISON) $(YFLAGS) cgrammar.y
	@echo '//           Expect 119 shift/reduce conflicts and 115 reduce/reduce conflicts.'
	@echo '//           (see cgrammar.y for explanation)'
	@$(CAT) bison.head cgrammar.tab.c bison.reset > cgrammar.c
	-@$(MV) Headers/cgrammar_tokens.h Headers/cgrammar_tokens.bak
	@$(CAT) bison.head cgrammar.tab.h bison.reset > Headers/cgrammar_tokens.h
	@$(RM) cgrammar.tab.c cgrammar.tab.h
	chmod 600 cgrammar.c 
	chmod 600 Headers/cgrammar_tokens.h
else
	$(CP) cgrammar.c.der cgrammar.c
endif

mtgrammar.c: mtgrammar.y
ifdef BISON
	$(BISON) $(YFLAGS) -p mt mtgrammar.y
	@$(CAT) bison.head mtgrammar.tab.c bison.reset > mtgrammar.c
#	@$(MV) Headers/mtgrammar_tokens.h Headers/mtgrammar_tokens.bak
	@$(CAT) bison.head mtgrammar.tab.h bison.reset > Headers/mtgrammar_tokens.h
	@$(RM) mtgrammar.tab.c mtgrammar.tab.h
	chmod 600 mtgrammar.c 
	chmod 600 Headers/mtgrammar_tokens.h
else
	$(CP) mtgrammar.c.der mtgrammar.c
endif

### llgrammar2.h is necessary so +singleinclude may be used

llgrammar.c  : llgrammar.c.der llgrammar.y
ifdef BISON
	$(BISON) $(YFLAGS) -p yl llgrammar.y
	@echo '//            Expect 2 shift/reduce conflicts.'
	@$(CAT) bison.head llgrammar.tab.c bison.reset > llgrammar.c
	-@$(MV) Headers/llgrammar_gen2.h Headers/llgrammar_gen2.bak
	@$(CAT) bison.head llgrammar.tab.h bison.reset > Headers/llgrammar_gen2.h
	-@$(MV) Headers/llgrammar_gen.h Headers/llgrammar_gen.bak
	@$(CAT) bison.head llgrammar.tab.h bison.reset > Headers/llgrammar_gen.h
	@$(RM) llgrammar.tab.c llgrammar.tab.h
	chmod 400 llgrammar.c 
	chmod 400 Headers/llgrammar_gen.h
	chmod 400 Headers/llgrammar_gen2.h
else
	$(CP) llgrammar.c.der llgrammar.c
endif

cscanner.c : cscanner.c.der cscanner.l
ifdef FLEX				
	$(FLEX) $(LFLAGS) cscanner.l 
	-chmod 600 cscanner.c
	$(CAT) flex.head lex.yy.c flex.reset > cscanner.c
	chmod 400 cscanner.c
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

cscanner.o : cscanner.c
	$(CC) $(CPPFLAGS) -c $*.c

llgrammar.o : llgrammar.c
	$(CC) $(CPPFLAGS) -c $*.c


###
### header files dependant on grammars
###

Headers/signature2.h : signature.c
Headers/signature_gen.h : signature.c
Headers/cgrammar2.h : cgrammar.c
Headers/cgrammar_tokens.h : cgrammar.c
Headers/llgrammar.h : llgrammar.c

Headers/flag_codes.gen : flags.def
	grep "FLG_" flags.def > Headers/flag_codes.gen

###
### defaults
###

### Flags for checking a single file
SINGLEFLAGS = -f lclint.lclintrc -supcounts +partial -unrecogcomments

LCLINT29 = ${HOME}/lclint-2.9c/src/lclint 

.c.check: lclint.lcd lclint
	-../bin/lclint $(CPPFLAGS) $(LINTFLAGS) $(SINGLEFLAGS) -load lclint.lcd +neverinclude $*.c +showsourceloc -mts file
#	-$(LCLINT29) $(CPPFLAGS) $(LINTFLAGS) $(SINGLEFLAGS) -load lclint.lcd +neverinclude $*.c +showsourceloc

lcllib.c: Headers/llgrammar.h
clabstract.c: Headers/cgrammar_tokens.h 
scan.c: Headers/signature2.h  Headers/signature_gen.h
stateClause.c: Headers/cgrammar_tokens.h 


.c.o:
ifeq ($(CHECK), 1)
	${MAKE} $*.check
endif
	@echo '//  Compiling '$*.c' / compiled: '`$(OFILES)`'  (of 161 files)'
	$(CC) $(CFLAGS) -c $*.c

###
### alternatives (tests, releases, backups, etc.)
###

### -e option makes environment variables take precedence

.PHONY : test quicktest opt up backup

backup:
	tar zcvf ../lclint-`date +%Y-%d-%m-%H-%M`.tgz ${ALLSRC} ${GRAMS} Headers/*.h *.i flags.def

betarelease:
	mkdir ~/temp/lclint-`cat ${VERSION_NUMBER}`
	mkdir ~/temp/lclint-`cat ${VERSION_NUMBER}`/src
	cp Makefile* ${ALLSRC} ${GRAMS} *.i flags.def ~/temp/lclint-`cat ${VERSION_NUMBER}`/src/
	cp -r Headers ~/temp/lclint-`cat ${VERSION_NUMBER}`/src/
	cp -r ../lib ~/temp/lclint-`cat ${VERSION_NUMBER}`/lib
	cp -r ../imports ~/temp/lclint-`cat ${VERSION_NUMBER}`/imports
	cp -r ../test ~/temp/lclint-`cat ${VERSION_NUMBER}`/test
	cp ../configure ../Makefile* ../README ~/temp/lclint-`cat ${VERSION_NUMBER}`/
	cd ~/temp/lclint-`cat ${VERSION_NUMBER}`; rm */*.core ; tar zcvf ~/public_html/lclint/lclint-`cat ~/lclint-dev/src/${VERSION_NUMBER}`-beta.tgz *
	chmod 644 ~/public_html/lclint/lclint-`cat ${VERSION_NUMBER}`.tgz

opt :
ifneq (,$(findstring csh, $(SHELL)))
	setenv CC '$(CCOPT)' ; $(MAKE) -e lclint
else
	CC="$(CCOPT)" ; export CC ; $(MAKE) -e lclint
endif

updateversion:
	-@$(MV) Headers/herald.h Headers/herald.last
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
	@echo 'Making tags'
	./maketags
	@echo '// '
	@echo '//  Updating version information'
	@$(MAKE) -e updateversion
	@echo '//  Updating local constants'
	@$(MAKE) -e localconstants
	@echo '//  Updating flags'
	@$(MAKE) -e Headers/flag_codes.gen
	@echo '// '
	@echo '//  Compiling:'
	@echo '// '
	@$(MAKE) -e opt
	@echo '//  Done Release'	
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
	-$(RM)  signature.c signature.tab.c  signature.tab.h
	-$(RM)  llgrammar.c llgrammar.tab.c llgrammar.tab.h
	-$(RM)  Headers/cgrammar_tokens.h
	-$(RM)  lex.yy.c
	-$(RM)  cgrammar.tab.h
	-$(RM)  Headers/*_gen.h* Headers/*_gen2.h*

clean: tidy
	-$(RM) core lclint 
	-$(RM) *.out *.output *.bib *.dvi *.idx *.log *.o *.toc
	-$(RM) cgrammar.c cscanner.c
	-$(RM) test* Headers/*~ Headers/#* 

tidy:
	-$(RM) ,* .,* *.CKP *.BAK .emacs_[0-9]* core a.out *.*~

up: 
	-$(RM) cgrammar.c llgrammar.c signature.c cscanner.c mtgrammar.c *.tab.[c,h]
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

flags: flags.def
	grep "FLG_" flags.def > Headers/flag_codes.gen
	touch flags.c

###
### other flags are in .lclintrc file
### 

tags:
	etags ${ALLSRC} ${GRAMS} Headers/*.h *.i

lintweak: 
	${HOME}/lclint-build/lclint-2.5q-freebsdbin/lclint -f weak.lclintrc $(CPPFLAGS) +singleinclude $(ALLSRC)

lintnew: 
	${LCLINTNEW} -f lclint.lclintrc $(CPPFLAGS) +singleinclude $(ALLSRC) -dump lclint +forcehints -misplacedsharequal +showsourceloc -unrecogcomments -supcounts -fcnuse -exportlocal -constuse -mts file

lint: 
	../bin/lclint -f lclint.lclintrc $(CPPFLAGS) +singleinclude $(ALLSRC) -dump lclint +forcehints -misplacedsharequal +showsourceloc -unrecogcomments -supcounts -fcnuse -exportlocal -constuse 

# -mts file

lintabstract: 
	lclint -f lclint.lclintrc $(CPPFLAGS) +singleinclude -dump lclint +forcehints -misplacedsharequal +showsourceloc -unrecogcomments -supcounts -fcnuse -exportlocal -constuse test.c +partial

# -fcnuse -constuse -exportlocal -supcounts

lintnodestroy: 
	lclint -f lclint.lclintrc $(CPPFLAGS) +singleinclude $(ALLSRC) -dump lclint +forcehints -misplacedsharequal -unrecogcomments -fcnuse -constuse -exportlocal -supcounts -compdestroy

linttest: 
	lclint -f lclint.lclintrc $(CPPFLAGS) +singleinclude +forcehints -misplacedsharequal +showsourceloc -unrecogcomments -fcnuse -constuse -exportlocal -supcounts test.c

linttest1g: 
	lclint -f lclint.lclintrc $(CPPFLAGS) +singleinclude test.c -dump lclint +forcehints -misplacedsharequal +showsourceloc -unrecogcomments -fcnuse -constuse -exportlocal -supcounts +partial

lint26: 
	${HOME}/lclint-2.6b/bin/lclint -f lclint.lclintrc $(CPPFLAGS) +singleinclude $(ALLSRC) -dump lclint +forcehints -misplacedsharequal +showsourceloc -unrecogcomments -fcnuse -constuse -exportlocal -supcounts

lint28: 
	${HOME}/lclint-2.8a/bin/lclint -f lclint.lclintrc $(CPPFLAGS) +singleinclude $(ALLSRC) -dump lclint +forcehints -misplacedsharequal +showsourceloc -unrecogcomments -fcnuse -constuse -exportlocal -supcounts

lint29: 
	${HOME}/lclint-2.9a/bin/lclint -f lclint.lclintrc $(CPPFLAGS) -larchpath .:${HOME}/lclint-2.9a/lib/ +singleinclude $(ALLSRC) -dump lclint +forcehints -misplacedsharequal +showsourceloc -unrecogcomments -fcnuse -constuse -exportlocal -supcounts

lintm: 
	lclint-2.5m -f lclint.lclintrc $(CPPFLAGS) +singleinclude $(ALLSRC) -dump lclint

test:
	cp lclint ../bin/lclint
	cd ..; ${MAKE} test

libs:
	cd ../lib ; ${MAKE} 

myall:
	-$(RM) -f ../bin/lclint; \
	${MAKE} -C ..

ctype.o: ctbase.i cttable.i
#exprNode.o: exprData.i

ctype.c: ctbase.i cttable.i

tokentable.c: Headers/signature_gen.h

#lint: 
#	$(LCLINT) -f lclint.lclintrc $(CPPFLAGS) +forcehints +singleinclude -exportlocal -exportheader -abstract -namechecks -protoparammatch -temptrans -boolops $(ALLSRC) -dump  lclint
