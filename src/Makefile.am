## Note: starting comments with ## means they don't end up in Makefile

AUTOMAKE_OPTIONS = 1.5 foreign

SUFFIXES = .h .c .o .l .check

# Check files before compiling; requires lclint!
CHECK = 1

# Some preferences
YFLAGS = -v -t -d --debug

## Non-built files we need to distribute
EXTRA_DIST = DATE

## We only build LCLint
bin_PROGRAMS = lclint

## This is a fake program, so we can easily substitute in the extra LCL objects
EXTRA_PROGRAMS = lcl

AM_CPPFLAGS = -IHeaders

## The main sources

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

## These are only used if LCL is enabled

LCLONLYSRC = usymtab_interface.c abstract.c ltoken.c lclscanline.c \
             lclsyntable.c lcltokentable.c sort.c symtable.c lclinit.c \
             shift.c lclscan.c lsymbol.c mapping.c

LSLSRC = tokentable.c scan.c scanline.c lslparse.c \
         lh.c checking.c lclctypes.c imports.c lslinit.c syntable.c 

LCLGRAMSRC = llgrammar.c signature.c

LCLSETSRC  = lsymbolSet.c sigNodeSet.c lslOpSet.c sortSet.c

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
lclint_LDADD = $(LCLOBJ) @LEXLIB@

# Ensure the LCL objects get built if needed
lclint_DEPENDENCIES = $(LCLOBJ)

# Keep it fake
.PHONY: lcl$(EXEEXT)
lcl$(EXEEXT):
	@echo "This is a fake target"; \
	 echo "Use configure's --with-lcl option to enable lcl"

## Sources that need to be built
BUILT_SOURCES = Headers/signature_gen.h Headers/cgrammar_tokens.h \
                Headers/llgrammar_gen.h Headers/llgrammar_gen2.h \
                Headers/mtgrammar_tokens.h signature.c cgrammar.c \
                llgrammar.c mtgrammar.c Headers/flag_codes.gen

## Grammars

Headers/signature_gen.h signature.c: signature.c.der signature.y
	if test x$(BISON) = xno; then \
	  $(CP) signature.c.der signature.c; \
	else \
	  $(BISON) $(YFLAGS) -p lsl signature.y; \
	  $(CAT) bison.head signature.tab.c bison.reset >signature.c; \
	  -$(MV) Headers/signature_gen.h Headers/signature_gen.bak; \
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
	  -$(MV) Headers/cgrammar_tokens.h Headers/cgrammar_tokens.bak; \
	  $(CAT) bison.head cgrammar.tab.h bison.reset >Headers/cgrammar_tokens.h; \
	  $(RM) cgrammar.tab.c cgrammar.tab.h; \
	fi

## 10/16/001 drl added copy so that the file mtgrammar.c.der is created
## also removed the dependency for this file on mtgrammary.c  

Headers/mtgrammar_tokens.h mtgrammar.c: mtgrammar.y
	if test x$(BISON) = xno; then \
	  $(CP) mtgrammar.c.der mtgrammar.c; \
	else \
	  $(BISON) $(YFLAGS) -p mt mtgrammar.y; \
	  $(CAT) bison.head mtgrammar.tab.c bison.reset >mtgrammar.c; \
	  $(CP) mtgrammar.c mtgrammar.c.der; \
	  -$(MV) Headers/mtgrammar_tokens.h Headers/mtgrammar_tokens.bak; \
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
	  -$(MV) Headers/llgrammar_gen2.h Headers/llgrammar_gen2.bak; \
	  $(CAT) bison.head llgrammar.tab.h bison.reset >Headers/llgrammar_gen2.h; \
	  0$(MV) Headers/llgrammar_gen.h Headers/llgrammar_gen.bak; \
	  $(CAT) bison.head llgrammar.tab.h bison.reset >Headers/llgrammar_gen.h; \
	  $(RM) llgrammar.tab.c llgrammar.tab.h; \
	fi

cscanner.c: cscanner.l
	$(LEX) $(LFLAGS) cscanner.l 
	$(CAT) flex.head @LEX_OUTPUT_ROOT@.c flex.reset > cscanner.c

Headers/flag_codes.gen: flags.def
	grep "FLG_" flags.def > Headers/flag_codes.gen

## Checking rules

CHECKS = $(subst .c,.check,$(lclint_SOURCES))

## Other rules

.PHONY: nocheck
nocheck:
	$(MAKE) CHECK=0

.PHONY: test
test:
	cd ../test; ${MAKE} --no-print-directory

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

all: lclint$(EXEEXT)
CLEANFILES = lclint$(EXEEXT)
