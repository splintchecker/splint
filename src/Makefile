# Makefile.in generated automatically by automake 1.5 from Makefile.am.

# Copyright 1994, 1995, 1996, 1997, 1998, 1999, 2000, 2001
# Free Software Foundation, Inc.
# This Makefile.in is free software; the Free Software Foundation
# gives unlimited permission to copy and/or distribute it,
# with or without modifications, as long as this notice is preserved.

# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY, to the extent permitted by law; without
# even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE.



SHELL = /bin/sh

srcdir = .
top_srcdir = ..

prefix = /usr/local
exec_prefix = ${prefix}

bindir = ${exec_prefix}/bin
sbindir = ${exec_prefix}/sbin
libexecdir = ${exec_prefix}/libexec
datadir = ${prefix}/share
sysconfdir = ${prefix}/etc
sharedstatedir = ${prefix}/com
localstatedir = ${prefix}/var
libdir = ${exec_prefix}/lib
infodir = ${prefix}/info
mandir = ${prefix}/man
includedir = ${prefix}/include
oldincludedir = /usr/include
pkgdatadir = $(datadir)/lclint
pkglibdir = $(libdir)/lclint
pkgincludedir = $(includedir)/lclint
top_builddir = ..

ACLOCAL = ${SHELL} /net/af10/evans/LCLintDev/config/missing --run aclocal
AUTOCONF = ${SHELL} /net/af10/evans/LCLintDev/config/missing --run autoconf
AUTOMAKE = ${SHELL} /net/af10/evans/LCLintDev/config/missing --run automake
AUTOHEADER = ${SHELL} /net/af10/evans/LCLintDev/config/missing --run autoheader

INSTALL = /usr/bin/install -c
INSTALL_PROGRAM = ${INSTALL}
INSTALL_DATA = ${INSTALL} -m 644
INSTALL_SCRIPT = ${INSTALL}
INSTALL_HEADER = $(INSTALL_DATA)
transform = s,x,x,
NORMAL_INSTALL = :
PRE_INSTALL = :
POST_INSTALL = :
NORMAL_UNINSTALL = :
PRE_UNINSTALL = :
POST_UNINSTALL = :
host_alias = 
host_triplet = i686-pc-linux-gnu
AMTAR = ${SHELL} /net/af10/evans/LCLintDev/config/missing --run tar
AWK = gawk
BISON = bison
CAT = cat
CC = gcc
CP = cp
CPP = gcc -E
CXX = g++
DEPDIR = .deps
DIFF = diff
EXEEXT = 
GREP = grep
INSTALL_STRIP_PROGRAM = ${SHELL} $(install_sh) -c -s
LCLOBJ = $(lcl_OBJECTS)
LEX = flex
LN_S = ln -s
MV = mv
OBJEXT = o
PACKAGE = lclint
RM = rm
VERSION = 3.0.0.19
am__include = include
am__quote = 
install_sh = /net/af10/evans/LCLintDev/config/install-sh

AUTOMAKE_OPTIONS = 1.5 foreign

SUFFIXES = .h .c .o .l .check

# Check files before compiling; requires lclint!
CHECK = 1

# Some preferences
YFLAGS = -v -t -d --debug

EXTRA_DIST = DATE

bin_PROGRAMS = lclint

EXTRA_PROGRAMS = lcl

AM_CPPFLAGS = -IHeaders

SETSRC = globSet.c intSet.c typeIdSet.c guardSet.c usymIdSet.c sRefSet.c

LISTSRC = clauseStack.c filelocStack.c \
          cstringList.c cstringSList.c sRefSetList.c ctypeList.c \
          enumNameList.c enumNameSList.c exprNodeList.c exprNodeSList.c \
          uentryList.c fileIdList.c filelocList.c qualList.c sRefList.c \
          flagMarkerList.c idDeclList.c flagSpec.c


CPPSRC = cppmain.c cpplib.c cppexp.c cpphash.c cpperror.c

CSRC = uentry.c cprim.c macrocache.c qual.c qtype.c stateClause.c \
       stateClauseList.c ctype.c cvar.c clabstract.c idDecl.c clause.c \
       globalsClause.c modifiesClause.c warnClause.c functionClause.c \
       functionClauseList.c metaStateConstraint.c metaStateConstraintList.c \
       metaStateExpression.c metaStateSpecifier.c functionConstraint.c


LCLINTSRC = exprNode.c exprChecks.c llmain.c
CHECKSRC = structNames.c transferChecks.c varKinds.c nameChecks.c

GLOBSRC = context.c globals.c flags.c general.c osd.c reader.c

GRAMSRC = cgrammar.c cscanner.c mtscanner.c mtreader.c mtgrammar.c

OVERFLOWCHSRC = constraintGeneration.c constraintTerm.c \
                constraintExprData.c constraintExpr.c constraint.c \
                constraintList.c constraintResolve.c \
                constraintOutput.c loopHeuristics.c 


GENERALSRC = exprData.c cstring.c fileloc.c message.c inputStream.c \
             fileTable.c cstringTable.c valueTable.c stateValue.c \
             llerror.c messageLog.c flagMarker.c aliasTable.c ynm.c \
             sRefTable.c genericTable.c ekind.c usymtab.c multiVal.c \
             lltok.c sRef.c lcllib.c randomNumbers.c fileLib.c


METASTATESRC = stateInfo.c stateCombinationTable.c metaStateTable.c \
               metaStateInfo.c annotationTable.c annotationInfo.c mttok.c \
               mtDeclarationNode.c mtDeclarationPieces.c mtDeclarationPiece.c \
               mtContextNode.c mtValuesNode.c mtDefaultsNode.c \
               mtAnnotationsNode.c mtMergeNode.c mtAnnotationList.c \
               mtAnnotationDecl.c mtTransferClauseList.c mtTransferClause.c \
               mtTransferAction.c mtLoseReferenceList.c mtLoseReference.c \
               mtDefaultsDeclList.c mtDefaultsDecl.c mtMergeItem.c \
               mtMergeClause.c mtMergeClauseList.c


LCLONLYSRC = usymtab_interface.c abstract.c ltoken.c lclscanline.c \
             lclsyntable.c lcltokentable.c sort.c symtable.c lclinit.c \
             shift.c lclscan.c lsymbol.c mapping.c


LSLSRC = tokentable.c scan.c scanline.c lslparse.c \
         lh.c checking.c lclctypes.c imports.c lslinit.c syntable.c 


LCLGRAMSRC = llgrammar.c signature.c

LCLSETSRC = lsymbolSet.c sigNodeSet.c lslOpSet.c sortSet.c

LCLLISTSRC = initDeclNodeList.c sortList.c declaratorInvNodeList.c \
             interfaceNodeList.c sortSetList.c declaratorNodeList.c \
             letDeclNodeList.c stDeclNodeList.c storeRefNodeList.c \
             lslOpList.c lsymbolList.c termNodeList.c ltokenList.c \
             traitRefNodeList.c pairNodeList.c typeNameNodeList.c \
             fcnNodeList.c paramNodeList.c programNodeList.c \
             varDeclarationNodeList.c varNodeList.c quantifierNodeList.c \
             replaceNodeList.c importNodeList.c


COMMONSRC = $(OVERFLOWCHSRC) $(CPPSRC) $(CSRC) $(CHECKSRC) $(GENERALSRC) \
            $(GLOBSRC) $(IFACESRC) $(LISTSRC) $(SETSRC) $(METASTATESRC)


ALLSRC = $(GRAMSRC) $(COMMONSRC) $(LCLINTSRC)

LCLSRC = $(LCLSETSRC) $(LCLLISTSRC) $(LSLSRC) $(CMNSRC) $(LCLONLYSRC) \
         $(LCLGRAMSRC)


lcl_SOURCES = $(LCLSRC)

lclint_SOURCES = $(ALLSRC)
lclint_LDADD = $(LCLOBJ) -lfl

# Ensure the LCL objects get built if needed
lclint_DEPENDENCIES = $(LCLOBJ)

BUILT_SOURCES = Headers/signature_gen.h Headers/cgrammar_tokens.h \
                Headers/llgrammar_gen.h Headers/llgrammar_gen2.h \
                Headers/mtgrammar_tokens.h signature.c cgrammar.c \
                llgrammar.c mtgrammar.c Headers/flag_codes.gen


CHECKS = $(subst .c,.check,$(lclint_SOURCES))

CLEANFILES = $(top_builddir)/bin/lclint$(EXEEXT)
subdir = src
mkinstalldirs = $(SHELL) $(top_srcdir)/config/mkinstalldirs
CONFIG_HEADER = $(top_builddir)/config.h
CONFIG_CLEAN_FILES =
EXTRA_PROGRAMS = lcl$(EXEEXT)
bin_PROGRAMS = lclint$(EXEEXT)
PROGRAMS = $(bin_PROGRAMS)

am_lcl_OBJECTS = lsymbolSet.$(OBJEXT) sigNodeSet.$(OBJEXT) \
	lslOpSet.$(OBJEXT) sortSet.$(OBJEXT) initDeclNodeList.$(OBJEXT) \
	sortList.$(OBJEXT) declaratorInvNodeList.$(OBJEXT) \
	interfaceNodeList.$(OBJEXT) sortSetList.$(OBJEXT) \
	declaratorNodeList.$(OBJEXT) letDeclNodeList.$(OBJEXT) \
	stDeclNodeList.$(OBJEXT) storeRefNodeList.$(OBJEXT) \
	lslOpList.$(OBJEXT) lsymbolList.$(OBJEXT) \
	termNodeList.$(OBJEXT) ltokenList.$(OBJEXT) \
	traitRefNodeList.$(OBJEXT) pairNodeList.$(OBJEXT) \
	typeNameNodeList.$(OBJEXT) fcnNodeList.$(OBJEXT) \
	paramNodeList.$(OBJEXT) programNodeList.$(OBJEXT) \
	varDeclarationNodeList.$(OBJEXT) varNodeList.$(OBJEXT) \
	quantifierNodeList.$(OBJEXT) replaceNodeList.$(OBJEXT) \
	importNodeList.$(OBJEXT) tokentable.$(OBJEXT) scan.$(OBJEXT) \
	scanline.$(OBJEXT) lslparse.$(OBJEXT) lh.$(OBJEXT) \
	checking.$(OBJEXT) lclctypes.$(OBJEXT) imports.$(OBJEXT) \
	lslinit.$(OBJEXT) syntable.$(OBJEXT) \
	usymtab_interface.$(OBJEXT) abstract.$(OBJEXT) ltoken.$(OBJEXT) \
	lclscanline.$(OBJEXT) lclsyntable.$(OBJEXT) \
	lcltokentable.$(OBJEXT) sort.$(OBJEXT) symtable.$(OBJEXT) \
	lclinit.$(OBJEXT) shift.$(OBJEXT) lclscan.$(OBJEXT) \
	lsymbol.$(OBJEXT) mapping.$(OBJEXT) llgrammar.$(OBJEXT) \
	signature.$(OBJEXT)
lcl_OBJECTS = $(am_lcl_OBJECTS)
lcl_LDADD = $(LDADD)
lcl_DEPENDENCIES =
lcl_LDFLAGS =
am_lclint_OBJECTS = cgrammar.$(OBJEXT) cscanner.$(OBJEXT) \
	mtscanner.$(OBJEXT) mtreader.$(OBJEXT) mtgrammar.$(OBJEXT) \
	constraintGeneration.$(OBJEXT) constraintTerm.$(OBJEXT) \
	constraintExprData.$(OBJEXT) constraintExpr.$(OBJEXT) \
	constraint.$(OBJEXT) constraintList.$(OBJEXT) \
	constraintResolve.$(OBJEXT) constraintOutput.$(OBJEXT) \
	loopHeuristics.$(OBJEXT) cppmain.$(OBJEXT) cpplib.$(OBJEXT) \
	cppexp.$(OBJEXT) cpphash.$(OBJEXT) cpperror.$(OBJEXT) \
	uentry.$(OBJEXT) cprim.$(OBJEXT) macrocache.$(OBJEXT) \
	qual.$(OBJEXT) qtype.$(OBJEXT) stateClause.$(OBJEXT) \
	stateClauseList.$(OBJEXT) ctype.$(OBJEXT) cvar.$(OBJEXT) \
	clabstract.$(OBJEXT) idDecl.$(OBJEXT) clause.$(OBJEXT) \
	globalsClause.$(OBJEXT) modifiesClause.$(OBJEXT) \
	warnClause.$(OBJEXT) functionClause.$(OBJEXT) \
	functionClauseList.$(OBJEXT) metaStateConstraint.$(OBJEXT) \
	metaStateConstraintList.$(OBJEXT) metaStateExpression.$(OBJEXT) \
	metaStateSpecifier.$(OBJEXT) functionConstraint.$(OBJEXT) \
	structNames.$(OBJEXT) transferChecks.$(OBJEXT) \
	varKinds.$(OBJEXT) nameChecks.$(OBJEXT) exprData.$(OBJEXT) \
	cstring.$(OBJEXT) fileloc.$(OBJEXT) message.$(OBJEXT) \
	inputStream.$(OBJEXT) fileTable.$(OBJEXT) \
	cstringTable.$(OBJEXT) valueTable.$(OBJEXT) \
	stateValue.$(OBJEXT) llerror.$(OBJEXT) messageLog.$(OBJEXT) \
	flagMarker.$(OBJEXT) aliasTable.$(OBJEXT) ynm.$(OBJEXT) \
	sRefTable.$(OBJEXT) genericTable.$(OBJEXT) ekind.$(OBJEXT) \
	usymtab.$(OBJEXT) multiVal.$(OBJEXT) lltok.$(OBJEXT) \
	sRef.$(OBJEXT) lcllib.$(OBJEXT) randomNumbers.$(OBJEXT) \
	fileLib.$(OBJEXT) context.$(OBJEXT) globals.$(OBJEXT) \
	flags.$(OBJEXT) general.$(OBJEXT) osd.$(OBJEXT) \
	reader.$(OBJEXT) clauseStack.$(OBJEXT) filelocStack.$(OBJEXT) \
	cstringList.$(OBJEXT) cstringSList.$(OBJEXT) \
	sRefSetList.$(OBJEXT) ctypeList.$(OBJEXT) \
	enumNameList.$(OBJEXT) enumNameSList.$(OBJEXT) \
	exprNodeList.$(OBJEXT) exprNodeSList.$(OBJEXT) \
	uentryList.$(OBJEXT) fileIdList.$(OBJEXT) filelocList.$(OBJEXT) \
	qualList.$(OBJEXT) sRefList.$(OBJEXT) flagMarkerList.$(OBJEXT) \
	idDeclList.$(OBJEXT) flagSpec.$(OBJEXT) globSet.$(OBJEXT) \
	intSet.$(OBJEXT) typeIdSet.$(OBJEXT) guardSet.$(OBJEXT) \
	usymIdSet.$(OBJEXT) sRefSet.$(OBJEXT) stateInfo.$(OBJEXT) \
	stateCombinationTable.$(OBJEXT) metaStateTable.$(OBJEXT) \
	metaStateInfo.$(OBJEXT) annotationTable.$(OBJEXT) \
	annotationInfo.$(OBJEXT) mttok.$(OBJEXT) \
	mtDeclarationNode.$(OBJEXT) mtDeclarationPieces.$(OBJEXT) \
	mtDeclarationPiece.$(OBJEXT) mtContextNode.$(OBJEXT) \
	mtValuesNode.$(OBJEXT) mtDefaultsNode.$(OBJEXT) \
	mtAnnotationsNode.$(OBJEXT) mtMergeNode.$(OBJEXT) \
	mtAnnotationList.$(OBJEXT) mtAnnotationDecl.$(OBJEXT) \
	mtTransferClauseList.$(OBJEXT) mtTransferClause.$(OBJEXT) \
	mtTransferAction.$(OBJEXT) mtLoseReferenceList.$(OBJEXT) \
	mtLoseReference.$(OBJEXT) mtDefaultsDeclList.$(OBJEXT) \
	mtDefaultsDecl.$(OBJEXT) mtMergeItem.$(OBJEXT) \
	mtMergeClause.$(OBJEXT) mtMergeClauseList.$(OBJEXT) \
	exprNode.$(OBJEXT) exprChecks.$(OBJEXT) llmain.$(OBJEXT)
lclint_OBJECTS = $(am_lclint_OBJECTS)
lclint_LDFLAGS =

DEFS = -DHAVE_CONFIG_H
DEFAULT_INCLUDES =  -I. -I$(srcdir) -I$(top_builddir)
CPPFLAGS = 
LDFLAGS = 
LIBS = 
depcomp = $(SHELL) $(top_srcdir)/config/depcomp
DEP_FILES = $(DEPDIR)/abstract.Po $(DEPDIR)/aliasTable.Po \
	$(DEPDIR)/annotationInfo.Po \
	$(DEPDIR)/annotationTable.Po $(DEPDIR)/cgrammar.Po \
	$(DEPDIR)/checking.Po $(DEPDIR)/clabstract.Po \
	$(DEPDIR)/clause.Po $(DEPDIR)/clauseStack.Po \
	$(DEPDIR)/constraint.Po $(DEPDIR)/constraintExpr.Po \
	$(DEPDIR)/constraintExprData.Po \
	$(DEPDIR)/constraintGeneration.Po \
	$(DEPDIR)/constraintList.Po \
	$(DEPDIR)/constraintOutput.Po \
	$(DEPDIR)/constraintResolve.Po \
	$(DEPDIR)/constraintTerm.Po $(DEPDIR)/context.Po \
	$(DEPDIR)/cpperror.Po $(DEPDIR)/cppexp.Po \
	$(DEPDIR)/cpphash.Po $(DEPDIR)/cpplib.Po \
	$(DEPDIR)/cppmain.Po $(DEPDIR)/cprim.Po \
	$(DEPDIR)/cscanner.Po $(DEPDIR)/cstring.Po \
	$(DEPDIR)/cstringList.Po $(DEPDIR)/cstringSList.Po \
	$(DEPDIR)/cstringTable.Po $(DEPDIR)/ctype.Po \
	$(DEPDIR)/ctypeList.Po $(DEPDIR)/cvar.Po \
	$(DEPDIR)/declaratorInvNodeList.Po \
	$(DEPDIR)/declaratorNodeList.Po $(DEPDIR)/ekind.Po \
	$(DEPDIR)/enumNameList.Po \
	$(DEPDIR)/enumNameSList.Po $(DEPDIR)/exprChecks.Po \
	$(DEPDIR)/exprData.Po $(DEPDIR)/exprNode.Po \
	$(DEPDIR)/exprNodeList.Po \
	$(DEPDIR)/exprNodeSList.Po $(DEPDIR)/fcnNodeList.Po \
	$(DEPDIR)/fileIdList.Po $(DEPDIR)/fileLib.Po \
	$(DEPDIR)/fileTable.Po $(DEPDIR)/fileloc.Po \
	$(DEPDIR)/filelocList.Po $(DEPDIR)/filelocStack.Po \
	$(DEPDIR)/flagMarker.Po $(DEPDIR)/flagMarkerList.Po \
	$(DEPDIR)/flagSpec.Po $(DEPDIR)/flags.Po \
	$(DEPDIR)/functionClause.Po \
	$(DEPDIR)/functionClauseList.Po \
	$(DEPDIR)/functionConstraint.Po \
	$(DEPDIR)/general.Po $(DEPDIR)/genericTable.Po \
	$(DEPDIR)/globSet.Po $(DEPDIR)/globals.Po \
	$(DEPDIR)/globalsClause.Po $(DEPDIR)/guardSet.Po \
	$(DEPDIR)/idDecl.Po $(DEPDIR)/idDeclList.Po \
	$(DEPDIR)/importNodeList.Po $(DEPDIR)/imports.Po \
	$(DEPDIR)/initDeclNodeList.Po \
	$(DEPDIR)/inputStream.Po $(DEPDIR)/intSet.Po \
	$(DEPDIR)/interfaceNodeList.Po \
	$(DEPDIR)/lclctypes.Po $(DEPDIR)/lclinit.Po \
	$(DEPDIR)/lcllib.Po $(DEPDIR)/lclscan.Po \
	$(DEPDIR)/lclscanline.Po $(DEPDIR)/lclsyntable.Po \
	$(DEPDIR)/lcltokentable.Po \
	$(DEPDIR)/letDeclNodeList.Po $(DEPDIR)/lh.Po \
	$(DEPDIR)/llerror.Po $(DEPDIR)/llgrammar.Po \
	$(DEPDIR)/llmain.Po $(DEPDIR)/lltok.Po \
	$(DEPDIR)/loopHeuristics.Po $(DEPDIR)/lslOpList.Po \
	$(DEPDIR)/lslOpSet.Po $(DEPDIR)/lslinit.Po \
	$(DEPDIR)/lslparse.Po $(DEPDIR)/lsymbol.Po \
	$(DEPDIR)/lsymbolList.Po $(DEPDIR)/lsymbolSet.Po \
	$(DEPDIR)/ltoken.Po $(DEPDIR)/ltokenList.Po \
	$(DEPDIR)/macrocache.Po $(DEPDIR)/mapping.Po \
	$(DEPDIR)/message.Po $(DEPDIR)/messageLog.Po \
	$(DEPDIR)/metaStateConstraint.Po \
	$(DEPDIR)/metaStateConstraintList.Po \
	$(DEPDIR)/metaStateExpression.Po \
	$(DEPDIR)/metaStateInfo.Po \
	$(DEPDIR)/metaStateSpecifier.Po \
	$(DEPDIR)/metaStateTable.Po \
	$(DEPDIR)/modifiesClause.Po \
	$(DEPDIR)/mtAnnotationDecl.Po \
	$(DEPDIR)/mtAnnotationList.Po \
	$(DEPDIR)/mtAnnotationsNode.Po \
	$(DEPDIR)/mtContextNode.Po \
	$(DEPDIR)/mtDeclarationNode.Po \
	$(DEPDIR)/mtDeclarationPiece.Po \
	$(DEPDIR)/mtDeclarationPieces.Po \
	$(DEPDIR)/mtDefaultsDecl.Po \
	$(DEPDIR)/mtDefaultsDeclList.Po \
	$(DEPDIR)/mtDefaultsNode.Po \
	$(DEPDIR)/mtLoseReference.Po \
	$(DEPDIR)/mtLoseReferenceList.Po \
	$(DEPDIR)/mtMergeClause.Po \
	$(DEPDIR)/mtMergeClauseList.Po \
	$(DEPDIR)/mtMergeItem.Po $(DEPDIR)/mtMergeNode.Po \
	$(DEPDIR)/mtTransferAction.Po \
	$(DEPDIR)/mtTransferClause.Po \
	$(DEPDIR)/mtTransferClauseList.Po \
	$(DEPDIR)/mtValuesNode.Po $(DEPDIR)/mtgrammar.Po \
	$(DEPDIR)/mtreader.Po $(DEPDIR)/mtscanner.Po \
	$(DEPDIR)/mttok.Po $(DEPDIR)/multiVal.Po \
	$(DEPDIR)/nameChecks.Po $(DEPDIR)/osd.Po \
	$(DEPDIR)/pairNodeList.Po \
	$(DEPDIR)/paramNodeList.Po \
	$(DEPDIR)/programNodeList.Po $(DEPDIR)/qtype.Po \
	$(DEPDIR)/qual.Po $(DEPDIR)/qualList.Po \
	$(DEPDIR)/quantifierNodeList.Po \
	$(DEPDIR)/randomNumbers.Po $(DEPDIR)/reader.Po \
	$(DEPDIR)/replaceNodeList.Po $(DEPDIR)/sRef.Po \
	$(DEPDIR)/sRefList.Po $(DEPDIR)/sRefSet.Po \
	$(DEPDIR)/sRefSetList.Po $(DEPDIR)/sRefTable.Po \
	$(DEPDIR)/scan.Po $(DEPDIR)/scanline.Po \
	$(DEPDIR)/shift.Po $(DEPDIR)/sigNodeSet.Po \
	$(DEPDIR)/signature.Po $(DEPDIR)/sort.Po \
	$(DEPDIR)/sortList.Po $(DEPDIR)/sortSet.Po \
	$(DEPDIR)/sortSetList.Po \
	$(DEPDIR)/stDeclNodeList.Po \
	$(DEPDIR)/stateClause.Po \
	$(DEPDIR)/stateClauseList.Po \
	$(DEPDIR)/stateCombinationTable.Po \
	$(DEPDIR)/stateInfo.Po $(DEPDIR)/stateValue.Po \
	$(DEPDIR)/storeRefNodeList.Po \
	$(DEPDIR)/structNames.Po $(DEPDIR)/symtable.Po \
	$(DEPDIR)/syntable.Po $(DEPDIR)/termNodeList.Po \
	$(DEPDIR)/tokentable.Po \
	$(DEPDIR)/traitRefNodeList.Po \
	$(DEPDIR)/transferChecks.Po $(DEPDIR)/typeIdSet.Po \
	$(DEPDIR)/typeNameNodeList.Po $(DEPDIR)/uentry.Po \
	$(DEPDIR)/uentryList.Po $(DEPDIR)/usymIdSet.Po \
	$(DEPDIR)/usymtab.Po $(DEPDIR)/usymtab_interface.Po \
	$(DEPDIR)/valueTable.Po \
	$(DEPDIR)/varDeclarationNodeList.Po \
	$(DEPDIR)/varKinds.Po $(DEPDIR)/varNodeList.Po \
	$(DEPDIR)/warnClause.Po $(DEPDIR)/ynm.Po
COMPILE = $(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) \
	$(CPPFLAGS) $(AM_CFLAGS) $(CFLAGS)
CCLD = $(CC)
LINK = $(CCLD) $(AM_CFLAGS) $(CFLAGS) $(AM_LDFLAGS) $(LDFLAGS) -o $@
CFLAGS = -g -O2
DIST_SOURCES = $(lcl_SOURCES) $(lclint_SOURCES)
DIST_COMMON = Makefile.am Makefile.in
SOURCES = $(lcl_SOURCES) $(lclint_SOURCES)

all: $(BUILT_SOURCES)
	$(MAKE) $(AM_MAKEFLAGS) all-am

.SUFFIXES:
.SUFFIXES: .h .c .o .l .check .obj
$(srcdir)/Makefile.in:  Makefile.am  $(top_srcdir)/configure.ac $(ACLOCAL_M4)
	cd $(top_srcdir) && \
	  $(AUTOMAKE) --foreign  src/Makefile
Makefile:  $(srcdir)/Makefile.in  $(top_builddir)/config.status
	cd $(top_builddir) && \
	  CONFIG_HEADERS= CONFIG_LINKS= \
	  CONFIG_FILES=$(subdir)/$@ $(SHELL) ./config.status
install-binPROGRAMS: $(bin_PROGRAMS)
	@$(NORMAL_INSTALL)
	$(mkinstalldirs) $(DESTDIR)$(bindir)
	@list='$(bin_PROGRAMS)'; for p in $$list; do \
	  p1=`echo $$p|sed 's/$(EXEEXT)$$//'`; \
	  if test -f $$p \
	  ; then \
	    f=`echo $$p1|sed '$(transform);s/$$/$(EXEEXT)/'`; \
	   echo " $(INSTALL_PROGRAM_ENV) $(INSTALL_PROGRAM) $$p $(DESTDIR)$(bindir)/$$f"; \
	   $(INSTALL_PROGRAM_ENV) $(INSTALL_PROGRAM) $$p $(DESTDIR)$(bindir)/$$f; \
	  else :; fi; \
	done

uninstall-binPROGRAMS:
	@$(NORMAL_UNINSTALL)
	@list='$(bin_PROGRAMS)'; for p in $$list; do \
	  f=`echo $$p|sed 's/$(EXEEXT)$$//;$(transform);s/$$/$(EXEEXT)/'`; \
	  echo " rm -f $(DESTDIR)$(bindir)/$$f"; \
	  rm -f $(DESTDIR)$(bindir)/$$f; \
	done

clean-binPROGRAMS:
	-test -z "$(bin_PROGRAMS)" || rm -f $(bin_PROGRAMS)
lclint$(EXEEXT): $(lclint_OBJECTS) $(lclint_DEPENDENCIES) 
	@rm -f lclint$(EXEEXT)
	$(LINK) $(lclint_LDFLAGS) $(lclint_OBJECTS) $(lclint_LDADD) $(LIBS)

mostlyclean-compile:
	-rm -f *.$(OBJEXT) core *.core

distclean-compile:
	-rm -f *.tab.c

include $(DEPDIR)/abstract.Po
include $(DEPDIR)/aliasTable.Po
include $(DEPDIR)/annotationInfo.Po
include $(DEPDIR)/annotationTable.Po
include $(DEPDIR)/cgrammar.Po
include $(DEPDIR)/checking.Po
include $(DEPDIR)/clabstract.Po
include $(DEPDIR)/clause.Po
include $(DEPDIR)/clauseStack.Po
include $(DEPDIR)/constraint.Po
include $(DEPDIR)/constraintExpr.Po
include $(DEPDIR)/constraintExprData.Po
include $(DEPDIR)/constraintGeneration.Po
include $(DEPDIR)/constraintList.Po
include $(DEPDIR)/constraintOutput.Po
include $(DEPDIR)/constraintResolve.Po
include $(DEPDIR)/constraintTerm.Po
include $(DEPDIR)/context.Po
include $(DEPDIR)/cpperror.Po
include $(DEPDIR)/cppexp.Po
include $(DEPDIR)/cpphash.Po
include $(DEPDIR)/cpplib.Po
include $(DEPDIR)/cppmain.Po
include $(DEPDIR)/cprim.Po
include $(DEPDIR)/cscanner.Po
include $(DEPDIR)/cstring.Po
include $(DEPDIR)/cstringList.Po
include $(DEPDIR)/cstringSList.Po
include $(DEPDIR)/cstringTable.Po
include $(DEPDIR)/ctype.Po
include $(DEPDIR)/ctypeList.Po
include $(DEPDIR)/cvar.Po
include $(DEPDIR)/declaratorInvNodeList.Po
include $(DEPDIR)/declaratorNodeList.Po
include $(DEPDIR)/ekind.Po
include $(DEPDIR)/enumNameList.Po
include $(DEPDIR)/enumNameSList.Po
include $(DEPDIR)/exprChecks.Po
include $(DEPDIR)/exprData.Po
include $(DEPDIR)/exprNode.Po
include $(DEPDIR)/exprNodeList.Po
include $(DEPDIR)/exprNodeSList.Po
include $(DEPDIR)/fcnNodeList.Po
include $(DEPDIR)/fileIdList.Po
include $(DEPDIR)/fileLib.Po
include $(DEPDIR)/fileTable.Po
include $(DEPDIR)/fileloc.Po
include $(DEPDIR)/filelocList.Po
include $(DEPDIR)/filelocStack.Po
include $(DEPDIR)/flagMarker.Po
include $(DEPDIR)/flagMarkerList.Po
include $(DEPDIR)/flagSpec.Po
include $(DEPDIR)/flags.Po
include $(DEPDIR)/functionClause.Po
include $(DEPDIR)/functionClauseList.Po
include $(DEPDIR)/functionConstraint.Po
include $(DEPDIR)/general.Po
include $(DEPDIR)/genericTable.Po
include $(DEPDIR)/globSet.Po
include $(DEPDIR)/globals.Po
include $(DEPDIR)/globalsClause.Po
include $(DEPDIR)/guardSet.Po
include $(DEPDIR)/idDecl.Po
include $(DEPDIR)/idDeclList.Po
include $(DEPDIR)/importNodeList.Po
include $(DEPDIR)/imports.Po
include $(DEPDIR)/initDeclNodeList.Po
include $(DEPDIR)/inputStream.Po
include $(DEPDIR)/intSet.Po
include $(DEPDIR)/interfaceNodeList.Po
include $(DEPDIR)/lclctypes.Po
include $(DEPDIR)/lclinit.Po
include $(DEPDIR)/lcllib.Po
include $(DEPDIR)/lclscan.Po
include $(DEPDIR)/lclscanline.Po
include $(DEPDIR)/lclsyntable.Po
include $(DEPDIR)/lcltokentable.Po
include $(DEPDIR)/letDeclNodeList.Po
include $(DEPDIR)/lh.Po
include $(DEPDIR)/llerror.Po
include $(DEPDIR)/llgrammar.Po
include $(DEPDIR)/llmain.Po
include $(DEPDIR)/lltok.Po
include $(DEPDIR)/loopHeuristics.Po
include $(DEPDIR)/lslOpList.Po
include $(DEPDIR)/lslOpSet.Po
include $(DEPDIR)/lslinit.Po
include $(DEPDIR)/lslparse.Po
include $(DEPDIR)/lsymbol.Po
include $(DEPDIR)/lsymbolList.Po
include $(DEPDIR)/lsymbolSet.Po
include $(DEPDIR)/ltoken.Po
include $(DEPDIR)/ltokenList.Po
include $(DEPDIR)/macrocache.Po
include $(DEPDIR)/mapping.Po
include $(DEPDIR)/message.Po
include $(DEPDIR)/messageLog.Po
include $(DEPDIR)/metaStateConstraint.Po
include $(DEPDIR)/metaStateConstraintList.Po
include $(DEPDIR)/metaStateExpression.Po
include $(DEPDIR)/metaStateInfo.Po
include $(DEPDIR)/metaStateSpecifier.Po
include $(DEPDIR)/metaStateTable.Po
include $(DEPDIR)/modifiesClause.Po
include $(DEPDIR)/mtAnnotationDecl.Po
include $(DEPDIR)/mtAnnotationList.Po
include $(DEPDIR)/mtAnnotationsNode.Po
include $(DEPDIR)/mtContextNode.Po
include $(DEPDIR)/mtDeclarationNode.Po
include $(DEPDIR)/mtDeclarationPiece.Po
include $(DEPDIR)/mtDeclarationPieces.Po
include $(DEPDIR)/mtDefaultsDecl.Po
include $(DEPDIR)/mtDefaultsDeclList.Po
include $(DEPDIR)/mtDefaultsNode.Po
include $(DEPDIR)/mtLoseReference.Po
include $(DEPDIR)/mtLoseReferenceList.Po
include $(DEPDIR)/mtMergeClause.Po
include $(DEPDIR)/mtMergeClauseList.Po
include $(DEPDIR)/mtMergeItem.Po
include $(DEPDIR)/mtMergeNode.Po
include $(DEPDIR)/mtTransferAction.Po
include $(DEPDIR)/mtTransferClause.Po
include $(DEPDIR)/mtTransferClauseList.Po
include $(DEPDIR)/mtValuesNode.Po
include $(DEPDIR)/mtgrammar.Po
include $(DEPDIR)/mtreader.Po
include $(DEPDIR)/mtscanner.Po
include $(DEPDIR)/mttok.Po
include $(DEPDIR)/multiVal.Po
include $(DEPDIR)/nameChecks.Po
include $(DEPDIR)/osd.Po
include $(DEPDIR)/pairNodeList.Po
include $(DEPDIR)/paramNodeList.Po
include $(DEPDIR)/programNodeList.Po
include $(DEPDIR)/qtype.Po
include $(DEPDIR)/qual.Po
include $(DEPDIR)/qualList.Po
include $(DEPDIR)/quantifierNodeList.Po
include $(DEPDIR)/randomNumbers.Po
include $(DEPDIR)/reader.Po
include $(DEPDIR)/replaceNodeList.Po
include $(DEPDIR)/sRef.Po
include $(DEPDIR)/sRefList.Po
include $(DEPDIR)/sRefSet.Po
include $(DEPDIR)/sRefSetList.Po
include $(DEPDIR)/sRefTable.Po
include $(DEPDIR)/scan.Po
include $(DEPDIR)/scanline.Po
include $(DEPDIR)/shift.Po
include $(DEPDIR)/sigNodeSet.Po
include $(DEPDIR)/signature.Po
include $(DEPDIR)/sort.Po
include $(DEPDIR)/sortList.Po
include $(DEPDIR)/sortSet.Po
include $(DEPDIR)/sortSetList.Po
include $(DEPDIR)/stDeclNodeList.Po
include $(DEPDIR)/stateClause.Po
include $(DEPDIR)/stateClauseList.Po
include $(DEPDIR)/stateCombinationTable.Po
include $(DEPDIR)/stateInfo.Po
include $(DEPDIR)/stateValue.Po
include $(DEPDIR)/storeRefNodeList.Po
include $(DEPDIR)/structNames.Po
include $(DEPDIR)/symtable.Po
include $(DEPDIR)/syntable.Po
include $(DEPDIR)/termNodeList.Po
include $(DEPDIR)/tokentable.Po
include $(DEPDIR)/traitRefNodeList.Po
include $(DEPDIR)/transferChecks.Po
include $(DEPDIR)/typeIdSet.Po
include $(DEPDIR)/typeNameNodeList.Po
include $(DEPDIR)/uentry.Po
include $(DEPDIR)/uentryList.Po
include $(DEPDIR)/usymIdSet.Po
include $(DEPDIR)/usymtab.Po
include $(DEPDIR)/usymtab_interface.Po
include $(DEPDIR)/valueTable.Po
include $(DEPDIR)/varDeclarationNodeList.Po
include $(DEPDIR)/varKinds.Po
include $(DEPDIR)/varNodeList.Po
include $(DEPDIR)/warnClause.Po
include $(DEPDIR)/ynm.Po

distclean-depend:
	-rm -rf $(DEPDIR)

.c.o:
	source='$<' object='$@' libtool=no \
	depfile='$(DEPDIR)/$*.Po' tmpdepfile='$(DEPDIR)/$*.TPo' \
	$(CCDEPMODE) $(depcomp) \
	$(COMPILE) -c `test -f $< || echo '$(srcdir)/'`$<

.c.obj:
	source='$<' object='$@' libtool=no \
	depfile='$(DEPDIR)/$*.Po' tmpdepfile='$(DEPDIR)/$*.TPo' \
	$(CCDEPMODE) $(depcomp) \
	$(COMPILE) -c `cygpath -w $<`
CCDEPMODE = depmode=gcc3
uninstall-info-am:

tags: TAGS

ID: $(HEADERS) $(SOURCES) $(LISP) $(TAGS_FILES)
	list='$(SOURCES) $(HEADERS) $(TAGS_FILES)'; \
	unique=`for i in $$list; do \
	    if test -f "$$i"; then echo $$i; else echo $(srcdir)/$$i; fi; \
	  done | \
	  $(AWK) '    { files[$$0] = 1; } \
	       END { for (i in files) print i; }'`; \
	mkid -fID $$unique $(LISP)

TAGS:  $(HEADERS) $(SOURCES)  $(TAGS_DEPENDENCIES) \
		$(TAGS_FILES) $(LISP)
	tags=; \
	here=`pwd`; \
	list='$(SOURCES) $(HEADERS) $(TAGS_FILES)'; \
	unique=`for i in $$list; do \
	    if test -f "$$i"; then echo $$i; else echo $(srcdir)/$$i; fi; \
	  done | \
	  $(AWK) '    { files[$$0] = 1; } \
	       END { for (i in files) print i; }'`; \
	test -z "$(ETAGS_ARGS)$$unique$(LISP)$$tags" \
	  || etags $(ETAGS_ARGS) $$tags  $$unique $(LISP)

GTAGS:
	here=`CDPATH=: && cd $(top_builddir) && pwd` \
	  && cd $(top_srcdir) \
	  && gtags -i $(GTAGS_ARGS) $$here

distclean-tags:
	-rm -f TAGS ID GTAGS GRTAGS GSYMS GPATH

DISTFILES = $(DIST_COMMON) $(DIST_SOURCES) $(TEXINFOS) $(EXTRA_DIST)

top_distdir = ..
distdir = $(top_distdir)/$(PACKAGE)-$(VERSION)

distdir: $(DISTFILES)
	@for file in $(DISTFILES); do \
	  if test -f $$file; then d=.; else d=$(srcdir); fi; \
	  dir=`echo "$$file" | sed -e 's,/[^/]*$$,,'`; \
	  if test "$$dir" != "$$file" && test "$$dir" != "."; then \
	    $(mkinstalldirs) "$(distdir)/$$dir"; \
	  fi; \
	  if test -d $$d/$$file; then \
	    cp -pR $$d/$$file $(distdir) \
	    || exit 1; \
	  else \
	    test -f $(distdir)/$$file \
	    || cp -p $$d/$$file $(distdir)/$$file \
	    || exit 1; \
	  fi; \
	done
check-am: all-am
check: check-am
all-am: Makefile $(PROGRAMS)

installdirs:
	$(mkinstalldirs) $(DESTDIR)$(bindir)

install: install-am
install-exec: install-exec-am
install-data: install-data-am
uninstall: uninstall-am

install-am: all-am
	@$(MAKE) $(AM_MAKEFLAGS) install-exec-am install-data-am

installcheck: installcheck-am
install-strip:
	$(MAKE) $(AM_MAKEFLAGS) INSTALL_PROGRAM="$(INSTALL_STRIP_PROGRAM)" \
	  `test -z '$(STRIP)' || \
	    echo "INSTALL_PROGRAM_ENV=STRIPPROG='$(STRIP)'"` install
mostlyclean-generic:

clean-generic:
	-test -z "$(CLEANFILES)" || rm -f $(CLEANFILES)

distclean-generic:
	-rm -f Makefile $(CONFIG_CLEAN_FILES) stamp-h stamp-h[0-9]*

maintainer-clean-generic:
	@echo "This command is intended for maintainers to use"
	@echo "it deletes files that may require special tools to rebuild."
	-test -z "$(BUILT_SOURCES)" || rm -f $(BUILT_SOURCES)
clean: clean-am

clean-am: clean-binPROGRAMS clean-generic mostlyclean-am

distclean: distclean-am

distclean-am: clean-am distclean-compile distclean-depend \
	distclean-generic distclean-tags

dvi: dvi-am

dvi-am:

info: info-am

info-am:

install-data-am:

install-exec-am: install-binPROGRAMS

install-info: install-info-am

install-man:

installcheck-am:

maintainer-clean: maintainer-clean-am

maintainer-clean-am: distclean-am maintainer-clean-generic

mostlyclean: mostlyclean-am

mostlyclean-am: mostlyclean-compile mostlyclean-generic

uninstall-am: uninstall-binPROGRAMS uninstall-info-am

.PHONY: GTAGS all all-am check check-am clean clean-binPROGRAMS \
	clean-generic distclean distclean-compile distclean-depend \
	distclean-generic distclean-tags distdir dvi dvi-am info \
	info-am install install-am install-binPROGRAMS install-data \
	install-data-am install-exec install-exec-am install-info \
	install-info-am install-man install-strip installcheck \
	installcheck-am installdirs maintainer-clean \
	maintainer-clean-generic mostlyclean mostlyclean-compile \
	mostlyclean-generic tags uninstall uninstall-am \
	uninstall-binPROGRAMS uninstall-info-am


# Keep it fake
.PHONY: lcl$(EXEEXT)
lcl$(EXEEXT):
	@echo "This is a fake target"; \
	 echo "Use configure's --with-lcl option to enable lcl"

Headers/signature_gen.h signature.c: signature.c.der signature.y
	if test x$(BISON) = xno; then \
	  $(CP) signature.c.der signature.c; \
	else \
	  $(BISON) $(YFLAGS) -p lsl signature.y; \
	  $(CAT) bison.head signature.tab.c bison.reset >signature.c; \
	  $(MV) Headers/signature_gen.h Headers/signature_gen.bak; \
	  $(CAT) bison.head signature.tab.h bison.reset >Headers/signature_gen.h; \
	  $(RM) signature.tab.c signature.tab.h; \
	fi

Headers/cgrammar_tokens.h cgrammar.c: cgrammar.c.der cgrammar.y
	if test x$(BISON) = xno; then \
	  $(CP) cgrammar.c.der cgrammar.c; \
	else \
	  echo '* Expect 141 shift/reduce conflicts and 111 reduce/reduce conflicts.'; \
	  echo '* (see cgrammar.y for explanation)'; \
	  $(BISON) $(YFLAGS) cgrammar.y; \
	  $(CAT) bison.head cgrammar.tab.c bison.reset >cgrammar.c; \
	  $(MV) Headers/cgrammar_tokens.h Headers/cgrammar_tokens.bak; \
	  $(CAT) bison.head cgrammar.tab.h bison.reset >Headers/cgrammar_tokens.h; \
	  $(RM) cgrammar.tab.c cgrammar.tab.h; \
	fi

Headers/mtgrammar_tokens.h mtgrammar.c: mtgrammar.c.der mtgrammar.y
	if test x$(BISON) = xno; then \
	  $(CP) mtgrammar.c.der mtgrammar.c; \
	else \
	  $(BISON) $(YFLAGS) -p mt mtgrammar.y; \
	  $(CAT) bison.head mtgrammar.tab.c bison.reset >mtgrammar.c; \
	  $(MV) Headers/mtgrammar_tokens.h Headers/mtgrammar_tokens.bak; \
	  $(CAT) bison.head mtgrammar.tab.h bison.reset >Headers/mtgrammar_tokens.h; \
	  $(RM) mtgrammar.tab.c mtgrammar.tab.h; \
	fi

Headers/llgrammar_gen.h Headers/llgrammar_gen2.h llgrammar.c: llgrammar.c.der llgrammar.y
	if test x$(BISON) = xno; then \
	  $(CP) llgrammar.c.der llgrammar.c; \
	else \
	  echo '* Expect 2 shift/reduce conflicts'; \
	  $(BISON) $(YFLAGS) -p yl llgrammar.y; \
	  $(CAT) bison.head llgrammar.tab.c bison.reset >llgrammar.c; \
	  $(MV) Headers/llgrammar_gen2.h Headers/llgrammar_gen2.bak; \
	  $(CAT) bison.head llgrammar.tab.h bison.reset >Headers/llgrammar_gen2.h; \
	  $(MV) Headers/llgrammar_gen.h Headers/llgrammar_gen.bak; \
	  $(CAT) bison.head llgrammar.tab.h bison.reset >Headers/llgrammar_gen.h; \
	  $(RM) llgrammar.tab.c llgrammar.tab.h; \
	fi

cscanner.c: cscanner.l
	$(LEX) $(LFLAGS) cscanner.l 
	$(CAT) flex.head lex.yy.c flex.reset > cscanner.c

Headers/flag_codes.gen: flags.def
	grep "FLG_" flags.def > Headers/flag_codes.gen

.PHONY: nocheck
nocheck:
	$(MAKE) CHECK=0

.PHONY: test
test:
	cd ../; ${MAKE} check

### Automake generates wrong tags
.PHONY: etags
etags:
	maketags

lintnew: 
	./lclint -f lclint.lclintrc $(DEFAULT_INCLUDES) $(DEFS) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) +singleinclude $(ALLSRC) $(LCLSRC) -dump lclint \
                    +forcehints -misplacedsharequal +showsourceloc -unrecogcomments \
                    -supcounts -fcnuse -exportlocal -constuse -mts file -mts filerw

.PHONY: purify
purify: $(lclint_OBJECTS)
	purify $(LINK) -o lclint$(EXEEXT) $^ $(lclint_LDADD)

all: $(top_builddir)/bin/lclint$(EXEEXT)
$(top_builddir)/bin/lclint$(EXEEXT): lclint$(EXEEXT)
	$(CP) $< $@
# Tell versions [3.59,3.63) of GNU make to not export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
