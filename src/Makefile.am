## Note: starting comments with ## means they don't end up in Makefile

AUTOMAKE_OPTIONS = 1.5 foreign

SUFFIXES = .h .c .o .l .check

# Check files before compiling; requires splint!
CHECK = 1

# Some preferences
### We use the no-lines option to prevent confusion with splint flag settings.
### Should fix splint to avoid this...
YFLAGS = -v -t -d --debug --no-lines
LFLAGS = -L

BISON_SRC = cgrammar.y  llgrammar.y  mtgrammar.y  signature.y


## We only build Splint
bin_PROGRAMS = splint

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

SPLINTSRC = exprNode.c exprChecks.c llmain.c
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


HEADERSRC = Headers/abstBodyNode.h           Headers/ltokenList.h \
          Headers/abstract.h               Headers/macrocache.h \
          Headers/abstractNode.h           Headers/mapping.h \
          Headers/message.h \
          Headers/aliasStack.h             Headers/messageLog.h \
          Headers/aliasTable.h             Headers/metaStateConstraint.h \
          Headers/annotationInfo.h         Headers/metaStateConstraintList.h \
          Headers/annotationTable.h        Headers/metaStateExpression.h \
          Headers/arrayQualNode.h          Headers/metaStateInfo.h \
          Headers/basic.h                  Headers/metaStateSpecifier.h \
          Headers/bool.h                   Headers/metaStateTable.h \
          Headers/boolStack.h              Headers/misc.h \
          Headers/cgrammar.h               Headers/modifiesClause.h \
          Headers/cgrammar_tokens.h        Headers/modifyNode.h \
          Headers/checking.h               Headers/mtAnnotationDecl.h \
          Headers/clabstract.h             Headers/mtAnnotationList.h \
          Headers/claimNode.h              Headers/mtAnnotationsNode.h \
          Headers/clause.h                 Headers/mtContextNode.h \
          Headers/clauseStack.h            Headers/mtDeclarationNode.h \
          Headers/code.h                   Headers/mtDeclarationPiece.h \
          Headers/constants.h              Headers/mtDeclarationPieces.h \
          Headers/constDeclarationNode.h   Headers/mtDefaultsDecl.h \
          Headers/constraintExprData.h     Headers/mtDefaultsDeclList.h \
          Headers/constraintExpr.h         Headers/mtDefaultsNode.h \
          Headers/constraint.h             Headers/mtgrammar.h \
          Headers/constraintList2.h        Headers/mtgrammar.tab.h \
          Headers/constraintList.h         Headers/mtgrammar_tokens.h \
          Headers/constraintOutput.h       Headers/mtincludes.h \
          Headers/constraintResolve.h      Headers/mtLoseReference.h \
          Headers/constraintTerm.h         Headers/mtLoseReferenceList.h \
          Headers/context.h                Headers/mtMergeClause.h \
          Headers/cpperror.h               Headers/mtMergeClauseList.h \
          Headers/cppexp.h                 Headers/mtMergeItem.h \
          Headers/cpp.h                    Headers/mtMergeNode.h \
          Headers/cpphash.h                Headers/mtreader.h \
          Headers/cpplib.h                 Headers/mtscanner.h \
          Headers/cprim.h                  Headers/mttok.h \
          Headers/cscanner.h               Headers/mtTransferAction.h \
          Headers/cstring.h                Headers/mtTransferClause.h \
          Headers/cstringList.h            Headers/mtTransferClauseList.h \
          Headers/cstringSList.h           Headers/mtValuesNode.h \
          Headers/cstringTable.h           Headers/multiVal.h \
          Headers/ctokens.h                Headers/nameChecks.h \
          Headers/ctypeList.h              Headers/nameNode.h \
          Headers/CTypesNode.h             Headers/opFormNode.h \
          Headers/cvar.h                   Headers/osd.h \
          Headers/declaratorInvNode.h      Headers/pairNode.h \
          Headers/declaratorInvNodeList.h  Headers/pairNodeList.h \
          Headers/declaratorNode.h         Headers/paramNode.h \
          Headers/declaratorNodeList.h     Headers/paramNodeList.h \
          Headers/dmalloc.h                Headers/portab.h \
          Headers/ekind.h                  Headers/pp.h \
          Headers/enumNameList.h           Headers/privateNode.h \
          Headers/enumNameSList.h          Headers/programNode.h \
          Headers/enumSpecNode.h           Headers/programNodeList.h \
          Headers/exportNode.h             Headers/qtype.h \
          Headers/exposedNode.h            Headers/qual.h \
          Headers/exprChecks.h             Headers/qualList.h \
          Headers/exprData.h               Headers/quantifiedTermNode.h \
          Headers/exprNode.h               Headers/quantifierNode.h \
          Headers/exprNodeList.h           Headers/quantifierNodeList.h \
          Headers/exprNodeSList.h          Headers/randomNumbers.h \
          Headers/fcnNode.h                Headers/rangeTable.h \
          Headers/fcnNodeList.h            Headers/reader.h \
          Headers/fileId.h                 Headers/refTable-branch.h \
          Headers/fileIdList.h             Headers/renamingNode.h \
          Headers/fileLib.h                Headers/replaceNode.h \
          Headers/fileloc.h                Headers/replaceNodeList.h \
          Headers/filelocList.h            Headers/scan.h \
          Headers/filelocStack.h           Headers/scanline.h \
          Headers/fileTable.h              Headers/sgrammar_tokens.h \
          Headers/flag_codes.h             Headers/sHerald.h \
          Headers/flagMarker.h             Headers/shift.h \
          Headers/flagMarkerList.h         Headers/signature2.h \
          Headers/flags.h                  Headers/signature_gen.h \
          Headers/flagSpec.h               Headers/signature.h \
          Headers/forwardTypes.h           Headers/signNode.h \
          Headers/functionClause.h         Headers/sigNode.h \
          Headers/functionClauseList.h     Headers/sigNodeSet.h \
          Headers/functionConstraint.h     Headers/sort.h \
          Headers/general.h                Headers/sortList.h \
          Headers/genericTable.h           Headers/sortSet.h \
          Headers/globalList.h             Headers/sortSetList.h \
          Headers/globalsClause.h          Headers/source.h \
          Headers/globals.h                Headers/specialClauses.h \
          Headers/globSet.h                Headers/sRef.h \
          Headers/gram.h                   Headers/sRefList.h \
          Headers/guardSet.h               Headers/sRefSet.h \
          Headers/handle.h                 Headers/sRefSetList.h \
          Headers/hashTable.h              Headers/sRefSetStack.h \
          Headers/idDecl.h                 Headers/sRefTable.h \
          Headers/idDeclList.h             Headers/stateClause.h \
          Headers/importNode.h             Headers/stateClauseList.h \
          Headers/importNodeList.h         Headers/stateCombinationTable.h \
          Headers/imports.h                Headers/stateInfo.h \
          Headers/initDeclNode.h           Headers/stateValue.h \
          Headers/initDeclNodeList.h       Headers/stDeclNode.h \
          Headers/inputStream.h            Headers/stDeclNodeList.h \
          Headers/interfaceNode.h          Headers/stmtNode.h \
          Headers/interfaceNodeList.h      Headers/storeRefNode.h \
          Headers/intSet.h                 Headers/storeRefNodeList.h \
          Headers/intTable.h               Headers/strOrUnionNode.h \
          Headers/iterNode.h               Headers/structNames.h \
          Headers/lcl_constants.h          Headers/symtable.h \
          Headers/lclctypes.h              Headers/syntable.h \
          Headers/lclForwardTypes.h        Headers/system_constants.h \
          Headers/lclinit.h                Headers/taggedUnionNode.h \
          Headers/lcllib.h                 Headers/termNode.h \
          Headers/lclMisc.h                Headers/termNodeList.h \
          Headers/lclPredicateNode.h       Headers/tmpname.h \
          Headers/lclscan.h                Headers/tokentable.h \
          Headers/lclscanline.h            Headers/traitRefNode.h \
          Headers/lclsyntable.h            Headers/traitRefNodeList.h \
          Headers/lcltokentable.h          Headers/transferChecks.h \
          Headers/lclTypeSpecNode.h        Headers/typeExpr.h \
          Headers/lctype.h                 Headers/typeIdSet.h \
          Headers/letDeclNode.h            Headers/typeNameNode.h \
          Headers/letDeclNodeList.h        Headers/typeNameNodeList.h \
          Headers/lh.h                     Headers/typeNamePack.h \
          Headers/limwr.h                  Headers/typeNode.h \
          Headers/llbasic.h                Headers/uentry.h \
          Headers/llerror.h                Headers/uentryList.h \
          Headers/llglobals.h              Headers/usymId.h \
          Headers/llgrammar2.h             Headers/usymIdSet.h \
          Headers/llgrammar_gen2.h         Headers/usymtab-branch.h \
          Headers/llgrammar_gen.h          Headers/usymtab.h \
          Headers/llgrammar.h              Headers/usymtab_interface.h \
          Headers/llmain.h                 Headers/valueMatrix.h \
          Headers/lltok.h                  Headers/valueTable.h \
          Headers/lslinit.h                Headers/varDeclarationNode.h \
          Headers/lslOp.h                  Headers/varDeclarationNodeList.h \
          Headers/lslOpList.h              Headers/varKinds.h \
          Headers/lslOpSet.h               Headers/varNode.h \
          Headers/lslparse.h               Headers/varNodeList.h \
          Headers/lsymbol.h                Headers/version.h \
          Headers/lsymbolList.h            Headers/warnClause.h \
          Headers/lsymbolSet.h             Headers/ynm.h \
          Headers/ltoken.h   Headers/splintMacros.nf  

IFILES =  ctbase.i  cttable.i  exprDataQuite.i

## Non-built files we need to distribute
EXTRA_DIST = DATE $(BISON_SRC) bison.head bison.reset $(HEADERSRC)  \
            flags.def cscanner.l flex.head flex.reset $(IFILES) \
 Headers/256_random_numbers.nf  Headers/splintMacros.nf	Headers/reservedNames.nf


#Files that are used on systems that do not have bison or yacc
DER_BISON_FILES = signature.c.der  cgrammar.c.der  mtgrammar.c.der \
                  llgrammar.c.der 
DER_FILES = $(DER_BISON_FILES)


COMMONSRC = $(OVERFLOWCHSRC) $(CPPSRC) $(CSRC) $(CHECKSRC) $(GENERALSRC) \
            $(GLOBSRC) $(IFACESRC) $(LISTSRC) $(SETSRC) $(METASTATESRC)

ALLSRC = $(GRAMSRC) $(COMMONSRC) $(SPLINTSRC) $(DER_FILES) $(HEADERSRC)

#files to run Splint on
LINTSRC = $(GRAMSRC) $(COMMONSRC) $(SPLINTSRC) 

#ALLSRC = $(COMMONSRC) $(SPLINTSRC) $(DER_FILES) $(HEADERSRC)

LCLSRC = $(LCLSETSRC) $(LCLLISTSRC) $(LSLSRC) $(CMNSRC) $(LCLONLYSRC) \
         $(LCLGRAMSRC)

lcl_SOURCES = $(LCLSRC)

splint_SOURCES = $(ALLSRC)
splint_LDADD = $(LCLOBJ) @LEXLIB@

# Ensure the LCL objects get built if needed
splint_DEPENDENCIES = $(LCLOBJ)

# Keep it fake
.PHONY: lcl$(EXEEXT)
lcl$(EXEEXT):
	@echo "This is a fake target"; \
	 echo "Use configure's --with-lcl option to enable lcl"

## Sources that need to be built
BUILT_SOURCES = Headers/signature_gen.h Headers/cgrammar_tokens.h \
                Headers/llgrammar_gen.h Headers/llgrammar_gen2.h \
                Headers/mtgrammar_tokens.h signature.c cgrammar.c \
                llgrammar.c mtgrammar.c Headers/flag_codes.gen \
                $(DER_FILES)

## Grammars

Headers/signature_gen.h signature.c: signature.c.der signature.y
	if test x$(BISON) = xno; then \
	  $(CP) signature.c.der signature.c; \
	else \
	  $(BISON) $(YFLAGS) -p lsl signature.y; \
	  $(CAT) bison.head signature.tab.c bison.reset >signature.c; \
	  $(CP) signature.c signature.c.der; \
	  $(MV) Headers/signature_gen.h Headers/signature_gen.bak; \
	  $(CAT) bison.head signature.tab.h bison.reset >Headers/signature_gen.h; \
	  $(RM) signature.tab.c signature.tab.h; \
	fi

## 11/29/001 drl added copy so that the file cgrammar.c.der is created

Headers/cgrammar_tokens.h cgrammar.c: cgrammar.c.der cgrammar.y
	if test x$(BISON) = xno; then \
	  $(CP) cgrammar.c.der cgrammar.c; \
	else \
	  echo '* Expect 141 shift/reduce conflicts and 111 reduce/reduce conflicts.'; \
	  echo '* (see cgrammar.y for explanation)'; \
	  $(BISON) $(YFLAGS) cgrammar.y; \
	  $(CAT) bison.head cgrammar.tab.c bison.reset >cgrammar.c; \
	  $(CP) cgrammar.c cgrammar.c.der; \
	  $(MV) Headers/cgrammar_tokens.h Headers/cgrammar_tokens.bak; \
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
	  $(MV) Headers/mtgrammar_tokens.h Headers/mtgrammar_tokens.bak; \
	  $(CAT) bison.head mtgrammar.tab.h bison.reset >Headers/mtgrammar_tokens.h; \
	  $(RM) mtgrammar.tab.c mtgrammar.tab.h; \
	fi

## 11/29/001 drl added copy so that the file llgrammar.c.der is created

Headers/llgrammar_gen.h Headers/llgrammar_gen2.h llgrammar.c: llgrammar.c.der llgrammar.y
	if test x$(BISON) = xno; then \
	  $(CP) llgrammar.c.der llgrammar.c; \
	else \
	  echo '* Expect 2 shift/reduce conflicts'; \
	  $(BISON) $(YFLAGS) -p yl llgrammar.y; \
	  $(CAT) bison.head llgrammar.tab.c bison.reset >llgrammar.c; \
	  $(CP) llgrammar.c llgrammar.c.der; \
	  $(MV) Headers/llgrammar_gen2.h Headers/llgrammar_gen2.bak; \
	  $(CAT) bison.head llgrammar.tab.h bison.reset >Headers/llgrammar_gen2.h; \
	  $(MV) Headers/llgrammar_gen.h Headers/llgrammar_gen.bak; \
	  $(CAT) bison.head llgrammar.tab.h bison.reset >Headers/llgrammar_gen.h; \
	  $(RM) llgrammar.tab.c llgrammar.tab.h; \
	fi

cscanner.c: cscanner.l
	$(LEX) $(LFLAGS) cscanner.l 
	$(CAT) flex.head @LEX_OUTPUT_ROOT@.c flex.reset > cscanner.c

Headers/flag_codes.gen: flags.def
	grep "FLG_" flags.def > Headers/flag_codes.gen

## Checking rules

CHECKS = $(subst .c,.check,$(splint_SOURCES))

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

lintnew: splintme

splintme: 
	./splint $(DEFAULT_INCLUDES) $(DEFS) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) +singleinclude $(LINTSRC) $(LCLSRC) -dump lclint \
                    +forcehints -misplacedsharequal +showsourceloc -unrecogcomments \
                    -supcounts -fcnuse -exportlocal -constuse -mts file -mts filerw

lintbuffercheck: 
	./splint $(DEFAULT_INCLUDES) $(DEFS) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) +singleinclude $(LINTSRC) $(LCLSRC) -dump lclint \
                    +forcehints -misplacedsharequal +showsourceloc -unrecogcomments \
                    -supcounts -fcnuse -exportlocal -constuse -mts file -mts filerw +arraybounds +arrayboundsread +implictconstraint


all: splint$(EXEEXT)
CLEANFILES = splint$(EXEEXT)
