## This file currently uses GNU Make features; those should really be replaced
## by configure-time handling.

AUTOMAKE_OPTIONS = 1.5 foreign

## Use this to configure diff output
DIFFFLAGS = -u

## Set up the lclint commands

LCLINT    = $(top_builddir)/bin/lclint$(EXEEXT)
LCLINTP   = @$(LCLINT)

# Make sure .lclintrc files are not used so test results do not
# depend on local settings.
LCLINTRN  = $(LCLINTP) -nof -hints -booltype "bool"
LCLINTR   = $(LCLINTRN) -exportlocal +debugfcnconstraint

## Currently disabled tests:
##  fileio tainted mergestate nullret nullassign warnuse metastate \
##  nullret nullassign warnuse

###
### !!! 
### These tests have been temporarily removed because of problems with the new build process:
###   fileio tainted mergestate metastate help sizeoftest bufferTest \
###   tests2.2 tests2.2a tests2.4 tests2.5 
###   simplebufferConstraintTests moreBufferTests globalbufferannotation \
###   maxset strchr for

UNITTESTS = \
  abstptr abstract alias alttypes ansireserved argorder \
  args blocks break cases cast charlit clauses commentchar compdestroy \
  constannot controldepth csyntax czechnames czechoslovaknames deadparam \
  decl enum exports external fields flags forbody format freearray \
  funcpointer glob globals impabstract init inparam internal iter keep libs \
  linked lintcomments list macros macrosef merge modifies modtest moduncon \
  mongoincludes mystrncat noeffect null observer oldstyle outglob outparam \
  postnotnull preds prefixes printflike rc refcounts release repexpose \
  returned sharing slovaknames specclauses special stack staticarray strings \
  structassign typequals ud ulstypes union unreachable unsignedcompare \
  unused ullint void
UNITEXPECTS = $(addsuffix .expect, $(UNITTESTS))

INTEGTESTS = db1 db2 db3
INTEGEXPECTS = $(addsuffix .expect, $(INTEGTESTS))

LCLINTTESTS = $(UNITTESTS) $(INTEGTESTS)

QUICKTESTS = db3

.PHONY: all check
all check: fulltest

.PHONY: version
version:
	-$(LCLINTP) -help version

.PHONY: help
help:
	-@$(LCLINTP)
	-@LARCH_PATH=/dev/null $(LCLINTP) empty.lcl
	-@$(LCLINTP) -help
	-@$(LCLINTP) -asdf
	-@$(LCLINTP) +boolint +boolint 
	-@$(LCLINTP) -help flags alpha
	-@$(LCLINTP) -help flags all

.PHONY: clean-local
clean-local:
	-rm -f *~ #*# *.o *.lcs a.out
	-cd db1; $(MAKE) clean
	-cd db2; $(MAKE) clean
	-cd db3; $(MAKE) clean

## All tests need lclint to be built

$(LCLINTTESTS): $(LCLINT)

$(LCLINT):
	cd $(top_builddir)/src; $(MAKE)

## This is a kludgey way of processing the output to make it match exactly
## The last matcher is the most annoying, as it can differ (the first two are
##  pretty much fixed); usually, you'll have 'make[1]:', but on DOS it is
##  'make.exe[1]:' (it might even be 'c:/path/to/make.exe[1]:', but that's
##  not supported).
## The tests should really be re-done as shell-scripts or something... maybe
##  autotest could be used once it's finished.
CLEANOUTPUT = $(GREP) -v "LCLint 3." | $(GREP) -v "$(LCLINT)" | $(GREP) -v "^make.*\[[1-9]*\]:"

## Not real C code

.c.expect:
	$(MAKE) $* |& $(CLEANOUTPUT) >$*.expect && cat $*.expect

.c.diff:
	$(MAKE) $* |& $(CLEANOUTPUT) >$*.out && diff $*.expect $*.out

.PHONY: expects
expects:
	@echo "Saving old expects..."; \
	 cat *.expect >expects-`date +"%y-%m-%d-%H"`
	@for TEST in $(UNITTESTS) $(INTEGTESTS); do \
	   echo "Making $$TEST.expect..."; \
	   $(MAKE) $$TEST 2>&1 | $(CLEANOUTPUT) >$$TEST.expect; \
	   cat $$TEST.expect; \
	 done

.PHONY: quicktest
quicktest:
	@for TEST in $(QUICKTESTS); do \
	   echo "Checking $$TEST..."; \
	   $(MAKE) $$TEST 2>&1 | $(CLEANOUTPUT) >$$TEST.out && \
	     $(DIFF) $(DIFFFLAGS) $$TEST.expect $$TEST.out || \
               echo "*** FAIL ***"; \
	 done

.PHONY: fulltest
fulltest:
	@echo "Testing $(PACKAGE) $(VERSION)..."
	@echo
	@echo "Version Info:"
	@$(LCLINTP) -help version
	@$(LCLINTP) -help vars
	@echo ""
	@echo "Unit tests:"
	@echo ""
	@for TEST in $(UNITTESTS); do \
	   echo "Checking $$TEST..."; \
	   $(MAKE) $$TEST 2>&1 | $(CLEANOUTPUT) >$$TEST.out && \
	     $(DIFF) $(DIFFFLAGS) $$TEST.expect $$TEST.out || \
               echo "*** FAIL ***"; \
	 done

#!!!!
#	@echo ""
#	@echo "Integration tests:"
#	@echo ""
#	@for TEST in $(INTEGTESTS); do \
#	   echo "Checking $$TEST..."; \
#	   $(MAKE) $$TEST 2>&1 | $(CLEANOUTPUT) >$$TEST.out && \
#	     $(DIFF) $(DIFFFLAGS) $$TEST.expect $$TEST.out || \
#               echo "*** FAIL ***"; \
#	 done

## Rules for tests start here

SUBDIRTESTS = metastate mergestate tainted fileio warnuse ensuresclauses

.PHONY: abstptr
abstptr:
	$(LCLINTR) abstptr -expect 9
	$(LCLINTR) abstptr +voidabstract -expect 6

.PHONY: abstract
abstract:
	$(LCLINTR) abst_t.lcl commentcmd.c -expect 15

.PHONY: alias
alias:
	$(LCLINTR) +lh mut
	$(LCLINTR) mut alias +globalias -expect 19
	$(LCLINTR) mut alias2 +globalias -expect 17
	$(LCLINTR) +lh alias3 -expect 14 
	$(LCLINTR) +lh alias4 +boolint
	$(LCLINTR) alias4 -pred +retalias -expect 6
	$(LCLINTR) +lh alias5 +memchecks -null -specundef -expect 5

.PHONY: alttypes
alttypes:
	$(LCLINTR) alttypes.c -expect 2

###
### evans 2001-06-07 - updated nameCheck.c to reflect C9X.
### Reports one new errors for ansireserved.c - wctomb is bad even as a local
###    variable (could be a macro?)
### Reports 3 additional errors for +checks; no longer suppresses name errors
###    in the presense of other errors.
###

.PHONY: ansireserved
ansireserved:
	$(LCLINTR) ansireserved.c +ansireserved -nolib -expect 9
	$(LCLINTR) ansireserved.c +ansireserved +ansireservedlocal -nolib -expect 11
	$(LCLINTRN) ansireserved.c +checks -exportlocal -exportheadervar -exportheader -expect 12
	$(LCLINTR) ansireserved2.c +ansireserved -expect 1

.PHONY: argorder
argorder:
	$(LCLINTR) argorder.c -expect 4
	$(LCLINTR) argorder2  -expect 5
	$(LCLINTR) argorder3.c -expect 8
	$(LCLINTR) argorder4 -expect 9
	$(LCLINTR) argorder4 -evalorder -expect 1
	$(LCLINTR) argorder5.c +evalorderuncon -expect 3

.PHONY: args
args:
	$(LCLINTR) args -noeffect -expect 12

.PHONY: blocks
blocks:
	$(LCLINTR) blocks.c -expect 4
	$(LCLINTR) blocks.c +ifblock +elseifcomplete -expect 7
	$(LCLINTR) blocks.c -ifempty +whileempty +whileblock -expect 3
	$(LCLINTR) blocks.c -ifempty +forempty +forblock -expect 3
	$(LCLINTR) blocks.c +allempty -expect 6
	$(LCLINTRN) blocks.c +strict -exportlocal +partial -exportheader -expect 11

.PHONY: break
break:
	$(LCLINTR) break.c -expect 4
	$(LCLINTR) break.c +deepbreak -expect 6
	$(LCLINTR) break.c +deepbreak -looploopbreak -expect 5

.PHONY: cases
cases: 
	$(LCLINTR) cases.c -expect 5
	$(LCLINTR) cases2.c -expect 2
	$(LCLINTRN) cases2.c +checks -exportlocal -exportheader -expect 3
	$(LCLINTRN) cases2.c +checks -exportlocal -exportheader -branchstate -expect 3

.PHONY: cast
cast:
	$(LCLINTR) cast -accessmodule -expect 20
	$(LCLINTRN) cast2.c +checks -exportlocal -exportheader -expect 3

### Two addition errors detected with 2.5 with -numliteral.

.PHONY: charlit
charlit:
	$(LCLINTR) +hints charlit.c -expect 4
	$(LCLINTR) +hints -numliteral charlit.c -expect 6
	$(LCLINTR) +hints charlit.c +charintliteral +ignoresigns

.PHONY: clauses
clauses: 
	$(LCLINTR) clauses.c +memchecks -expect 4
	$(LCLINTR) clauses2.c +memchecks 
	$(LCLINTR) clauses3.c +memchecks -expect 2
	$(LCLINTR) clauses3.c +memchecks +unixlib -expect 3

.PHONY: commentchar
commentchar:
	$(LCLINTR) commentchar.c -expect 4
	$(LCLINTR) -commentchar '#' commentchar.c -expect 4

.PHONY: controldepth
controldepth:
	$(LCLINTR) +hints -controlnestdepth 2 controldepth.c -expect 2
	$(LCLINTR) +hints -controlnestdepth 1 controldepth.c -expect 2

.PHONY: compdestroy
compdestroy:
	$(LCLINTRN) compdestroy.c +checks -exportlocal -exportheader -expect 1
	$(LCLINTRN) compdestroy.c +checks -exportlocal -exportheader +strictdestroy -expect 2
	$(LCLINTRN) compdestroy.c +checks -exportlocal -exportheader +strictdestroy +strictusereleased -expect 3
	$(LCLINTRN) compdestroy.c +strict +partial -exportheader -expect 3

.PHONY: constannot
constannot:
	${LCLINTRN} constannot.c +arraybounds  -exportlocal -expect 2

.PHONY: csyntax
csyntax:
	$(LCLINTR) +quiet -incondefs csyntax.c -expect 1 
	$(LCLINTR) +quiet csyntax2.c -expect 2
	$(LCLINTR) +quiet csyntax3.c -expect 1
	$(LCLINTR) +quiet -incondefs csyntax4.c
	$(LCLINTR) +quiet csyntax5.c
	$(LCLINTR) +quiet csyntax6.c
	$(LCLINTR) +quiet csyntax7.c
	$(LCLINTR) +quiet csyntax8.c
	$(LCLINTR) +quiet csyntax9.c
	$(LCLINTR) +quiet csyntax10.c
	$(LCLINTR) +quiet csyntax11.c
	$(LCLINTR) +quiet csyntax12.c
	$(LCLINTR) +quiet csyntax13.c -expect 1
	$(LCLINTR) +quiet csyntax14.c
	$(LCLINTR) +quiet csyntax15.c
	$(LCLINTR) +quiet csyntax16.c -expect 2
	$(LCLINTR) +quiet csyntax17.c -expect 3

.PHONY: czechnames
czechnames:
	$(LCLINTR) czechnames.c
	$(LCLINTR) +hints +czech czechnames.c -expect 2
	$(LCLINTR) +hints +czech -czechvars czechnames.c -expect 1
	$(LCLINTR) +hints +czech -accessczech czechnames.c -expect 6

.PHONY: czechoslovaknames
czechoslovaknames:
	$(LCLINTR) +hints +czechoslovak czechnames.c -expect 1
	$(LCLINTR) +hints +czechoslovak slovaknames.c -expect 1
	$(LCLINTR) +hints +czechoslovak +slovakvars slovaknames.c -expect 2

###
### deadparam added 2001-05-27
###

.PHONY: deadparam
deadparam:
	${LCLINTR} deadparam.c -expect 3

#
# Was expect 3 before 2.4.  Earlier versions did not handle implicit
# function pointers correctly.
#

.PHONY: decl
decl:
	$(LCLINTR) decl.c -expect 2
	$(LCLINTRN) decl.c +strict -exportlocal -expect 5
	$(LCLINTR) decl2 -expect 4

.PHONY: enum
enum:
	$(LCLINTR) enum -expect 16
	$(LCLINTR) enum -misscase -expect 14

.PHONY: exports
exports:
	$(LCLINTR) exports.c +exporttype +exportvar +exportfcn +topuse +typeuse -expect 6
	$(LCLINTR) exports.c +exportany -expect 3
	$(LCLINTR) exports.c

.PHONY: external
external:
	$(LCLINTR) external.c +partial
	$(LCLINTR) external.c +partial +distinctexternalnames -expect 2
	$(LCLINTR) external.c -nolib +partial -externalnamelength 3 -expect 3
	$(LCLINTR) external.c -nolib +partial -externalnamelength 3 +externalnamecaseinsensitive -expect 3
	$(LCLINTR) external.c +partial -externalnamelength 3 -expect 4

.PHONY: fields
fields:
	$(LCLINTR) fields.c +memchecks -expect 6
	$(LCLINTR) fields2.c +memchecks -expect 5
	$(LCLINTR) fields3.c +memchecks

.PHONY: flags
flags:
	$(LCLINTR) flags.c -expect 8
	$(LCLINTR) +nocomments flags.c -expect 2

### Added 2001-06-02

.PHONY: forbody
forbody:
	${LCLINTR} forbody.c -expect 2

### Added 2001-06-03
.PHONY: format
format:
	${LCLINTR} format.c -expect 3
	${LCLINTR} format.c -formatconst 

# two new errors (invalid lhs)

.PHONY: funcpointer
funcpointer:
	$(LCLINTR) +memchecks +noparams funcpointer.c -expect 18

.PHONY: glob
glob:
	$(LCLINTR) glob -expect 4
	$(LCLINTR) glob -globuse -expect 3
	$(LCLINTR) glob +globunspec -expect 6

.PHONY: globals
globals:
	$(LCLINTR) -modifies globals.c -expect 5
	$(LCLINTR) -modifies globals.c +allglobals -expect 6
	$(LCLINTR) -modifies globals.c +impcheckedglobals -expect 6
	$(LCLINTR) -modifies globals.c -globals -checkstrictglobals -expect 2
	$(LCLINTR) -modifies globals.c +globunspec -expect 6
	$(LCLINTR) -modifies globals.c +globunspec +allglobals -expect 8

# Was -accessfile
.PHONY: impabstract
impabstract: 
	$(LCLINTR) -accessmodule impabstract.c 
	$(LCLINTR) -accessmodule +hints +impabstract impabstract.c -expect 2
	$(LCLINTR) -accessmodule +hints +impabstract impabstract -expect 4

### evans 2001-10-14: Expected errors updated
.PHONY: init
init:
	$(LCLINTR) init.c -expect 14
	$(LCLINTRN) init.c +checks -exportlocal -exportheadervar -expect 17


.PHONY: inparam
inparam:
	$(LCLINTR) inparam.c -expect 2
	$(LCLINTR) +impouts inparam.c -expect 1

.PHONY: internal
internal:
	$(LCLINTR) internal.c -expect 1
	$(LCLINTR) internal.c +distinctinternalnames -expect 2
	$(LCLINTR) internal.c -internalnamelen 28 -expect 3
	$(LCLINTR) internal.c +internalnamecaseinsensitive -expect 3
	$(LCLINTR) internal.c +internalnamecaseinsensitive +internalnamelookalike -expect 11

###
### iter
### 2001-06-06: Error message for iter.lcl:3,6 fixed to iter.lcl:3:6
### 

.PHONY: iter
iter:
	$(LCLINTR) iter -expect 14 -lclexpect 1
	$(LCLINTR) iter2.c -expect 12

.PHONY: keep
keep:
	$(LCLINTR) keep.c +memchecks -expect 6

### libs
### 2001-05-22: 2 new errors found (fixed spec of signal)
### 2001-05-30: 3 new errors found (formatconst)

.PHONY: libs
libs:
	$(LCLINTR) libs.c +longunsignedunsignedintegral -expect 18
	$(LCLINTR) libs.c -expect 22
	$(LCLINTR) libs.c +globunspec +modunspec -expect 25
	$(LCLINTR) libs.c +strictlib +globunspec +modunspec -expect 42

.PHONY: lintcomments
lintcomments:
	$(LCLINTR) lintcomments.c -expect 4
	$(LCLINTR) lintcomments.c -warnlintcomments -expect 1
	$(LCLINTR) lintcomments.c -lintcomments -expect 4

.PHONY: list
list:
	$(LCLINTR) list.c -expect 3

.PHONY: macros
macros:
	$(LCLINTR) macros -expect 17 
	$(LCLINTR) macros.c +allmacros -expect 34
	$(LCLINTR) macros.c +fcnmacros -expect 31


.PHONY: macrosef
macrosef:
	$(LCLINTR) macrosef -expect 4
	$(LCLINTR) macrosef.c +allmacros -expect 3
	$(LCLINTR) macrosef.c +allmacros +sefuncon -expect 4

.PHONY: merge
merge:
	$(LCLINTRN) merge.c +checks -exportlocal -exportheadervar -exportheader -expect 3

.PHONY: modifies
modifies:
	$(LCLINTR) modifies.c modclient.c +impcheckedstatics +mustmod -expect 7

.PHONY: modtest
modtest:
	$(LCLINTR) modtest -expect 10
	$(LCLINTR) modtest +modunspec -expect 13
	$(LCLINTR) modtest +mustmod -expect 14

.PHONY: moduncon
moduncon:
	$(LCLINTR) moduncon.c +moduncon -memchecks -expect 4
	$(LCLINTRN) moduncon.c +strict -exportlocal -expect 22

.PHONY: mongoincludes
mongoincludes:
	$(LCLINTR) mongoincludes.c -includenest 1 -expect 19
	$(LCLINTR) mongoincludes.c -includenest 2 -expect 10
	$(LCLINTR) mongoincludes.c -includenest 3 -expect 4
	$(LCLINTR) mongoincludes.c -includenest 4 -expect 1
	$(LCLINTR) mongoincludes.c -includenest 5 -expect 0

.PHONY: mystrncat
mystrncat:
	$(LCLINTR) mystrncat.c +arraybounds  +arrayboundsread -expect 4 

.PHONY: noeffect
noeffect:
	${LCLINT} -nof noeffect.c +allmacros +checks -expect 3

.PHONY: null
null: 
	$(LCLINTR) null1.c -expect 14
	$(LCLINTR) null1.c -null -expect 4
	$(LCLINTR) null2.c -expect 10
	$(LCLINTR) null3.c -expect 15
	$(LCLINTR) null3.c -warnunixlib +unixlib -expect 16
	$(LCLINTR) null4.c -expect 1
	$(LCLINTR) null5.c -expect 4
	$(LCLINTR) null6 -expect 4
	$(LCLINTR) +quiet null6.lcl -dump null6
	$(LCLINTR) null6.c -load null6 -expect 4

### Added for 3.0 (bugs reported by Kevin Broady)

.PHONY: nullret
nullret:
	$(LCLINTR) nullret.c -expect 2
	$(LCLINTR) -nullret nullret.c -expect 1

.PHONY: nullassign
nullassign:
	$(LCLINTR) nullassign.c -expect 2
	$(LCLINTR) -nullassign nullassign.c -expect 1


#
# Before 2.4, expected one more because error was reported both as 
# dependent and observer.
#

.PHONY: observer
observer:
	$(LCLINTRN) observer +checks -exportlocal -exportheader -expect 9
	$(LCLINTRN) observer.c +checks -exportlocal -exportheader -expect 8
	$(LCLINTR) observer.c -expect 7

.PHONY: oldstyle
oldstyle:
	$(LCLINTR) oldstyle -expect 3

.PHONY: outglob
outglob:
	$(LCLINTR) outglob -expect 10

.PHONY: outparam
outparam:
	$(LCLINTR) outparam -expect 12

### evans 2001-08-26: postnotnull new

.PHONY: postnotnull
postnotnull:
	${LCLINTR} postnotnull.c -expect 1
#
# Four new +fcnuse errors for -strict (evans 2001-07-22)
# 

.PHONY: preds
preds:
	$(LCLINTR) +hints preds.c -expect 6
	$(LCLINTRN) +hints preds.c -weak -expect 1
	$(LCLINTRN) +hints preds.c -strict -exportlocal -exportheader -expect 12

.PHONY: prefixes
prefixes:
	$(LCLINTR) prefixes.c +partial
	$(LCLINTRN) prefixes.c +allmacros +checks -exportlocal +partial -exportheader -exportheadervar -expect 4
	$(LCLINTR) prefixes.c -typeprefix "T" -expect 2
	$(LCLINTR) prefixes.c -typeprefix "^" -expect 1
	$(LCLINTR) prefixes.c -typeprefix "^*" -expect 2
	$(LCLINTR) prefixes.c -typeprefix "^%*" -expect 2
	$(LCLINTR) prefixes.c -typeprefix "^~*" -expect 2
	$(LCLINTR) prefixes.c -typeprefix "^" +typeprefixexclude -expect 7
	$(LCLINTR) prefixes.c -filestaticprefix "^^" -expect 4
	$(LCLINTR) prefixes.c -filestaticprefix "^#" -expect 5
	$(LCLINTR) prefixes.c -filestaticprefix "^?&x" -expect 5
	$(LCLINTR) prefixes.c -globalprefix "G" -expect 1
	$(LCLINTR) prefixes.c -globalprefix "&G?_^" -expect 1
	$(LCLINTR) prefixes.c -externalprefix "G" -expect 5
	$(LCLINTR) prefixes.c -typeprefix "T" -externalprefix "G" -expect 4
	$(LCLINTR) prefixes.c -localprefix "?*" +localprefixexclude -expect 13

.PHONY: printflike
printflike:
	$(LCLINTR) printflike.c -expect 6
	$(LCLINTR) printflike.c -warnlintcomments -expect 5

.PHONY: rc
rc:
	$(LCLINTR) -DMYSTERY='"a flag\"wicked cool"' rc.c -expect 1
	$(LCLINTR) -DMYSTERY=12 rc.c -expect 1
	$(LCLINTR) -f rc1.lclintrc rc.c -expect 1
	$(LCLINTR) -UMYSTERY -f rc1.lclintrc rc.c -expect 1
	$(LCLINTR) -f rc3.lclintrc rc.c -expect 1

.PHONY: refcounts
refcounts:
	$(LCLINTR) refcounts.c -expect 7 

.PHONY: release
release:
	$(LCLINTR) release.c +memchecks -expect 1

.PHONY: repexpose
repexpose:
	$(LCLINTR) +lh repexpose +memchecks -expect 12
	$(LCLINTR) repexpose +memchecks +retalias -expect 15
	$(LCLINTRN) repexpose +checks -exportlocal -expect 27

### returned added 2001-05-27
### (Bug discovered checking lclint sources.)

.PHONY: returned
returned:
	${LCLINTR} returned.c -expect 1

.PHONY: sharing
sharing: 
	$(LCLINTR) sharing1.c -expect 21
	$(LCLINTR) sharing3.c -expect  3
	$(LCLINTR) sharing4.c -expect 13
	$(LCLINTR) sharing4.c -paramimptemp -expect 12
	$(LCLINTR) sharing5.c -expect 6

.PHONY: slovaknames
slovaknames:
	$(LCLINTR) +hints slovaknames.c -expect 1
	$(LCLINTR) +hints slovaknames.c +accessslovak 
	$(LCLINTR) +hints +slovak slovaknames.c -expect 3
	$(LCLINTR) +hints +slovak -slovakvars slovaknames.c -expect 2
	$(LCLINTR) +hints +slovak -accessslovak slovaknames.c -expect 7

.PHONY: specclauses
specclauses:
	$(LCLINTR) specclauses.c -expect 6
	$(LCLINTR) specclauses2.c -expect 8
	$(LCLINTR) specclauses3.c -expect 6
	$(LCLINTR) specclauses4.c -expect 3
	$(LCLINTR) specclauses5.c -expect 3

.PHONY: special
special:
	$(LCLINTR) special -expect 20
	$(LCLINTR) special -relaxquals -expect 22

.PHONY: stack
stack:
	$(LCLINTR) stack.c -expect 5
	$(LCLINTR) stack.c -stackref

.PHONY: staticarray
staticarray:
	$(LCLINTR) staticarray.c -expect 3

.PHONY: strings
strings:
	$(LCLINTR) strings.c -expect 3
	$(LCLINTR) -readonlystrings -expect 1 strings.c
	$(LCLINTR) +modobserverstrict -maintype -expect 4 strings.c

.PHONY: structassign
structassign:
	$(LCLINTR) structassign.c -expect 4

.PHONY: typequals
typequals:
	$(LCLINTR) typequals.c tq.lcl -expect 5
	$(LCLINTR) typequals.c -expect 2

.PHONY: ud
ud:
	$(LCLINTR) ud.c -expect 9
	$(LCLINTR) ud2 -specundef -expect 3

.PHONY: ulstypes
ulstypes:
	$(LCLINTR) ulstypes.c -expect 8
	$(LCLINTR) ulstypes.c +ignorequals 
	$(LCLINTRN) ulstypes.c +strict -exportheader -exportheadervar -expect 28
# 3 more detected with version 2.5 (change in -numliteral setting)

.PHONY: union
union:
	$(LCLINTR) +memchecks union.c -expect 8

.PHONY: unreachable
unreachable:
	$(LCLINTR) unreachable.c -expect 5
	$(LCLINTR) -unreachable unreachable.c -expect 2
	$(LCLINTR) switch.c -expect 4

.PHONY: unsignedcompare
unsignedcompare:
	${LCLINTR} +posixlib unsignedcompare.c -expect 4


###
### 2001-06-08 evans: 2 new errors after fixing ansireserved name checks
###

.PHONY: unused
unused:
	$(LCLINTRN) unused.c +checks -exportlocal -expect 5
	$(LCLINTRN) unused.c +checks -exportlocal +topuse -expect 8

###
### 2001-06-10: Provided by Jim Zalenka
###

.PHONY: ullint
ullint:
	${LCLINTRN} ullint.c -expect 5
	${LCLINTRN} ullint.c +charint +charintliteral -expect 2

.PHONY: void
void:
	${LCLINTRN} void.c -expect 2

###
### New since 2.5q:
###

.PHONY: linked
linked:
	${LCLINTR} linked.c -expect 4
	${LCLINTR} linked2.c -expect 3
	${LCLINTR} linked3.c -expect 5
	${LCLINTR} linked4.c -expect 6
	${LCLINTR} linked5.c -expect 4
	${LCLINTR} linked6.c -expect 4

.PHONY: freearray
freearray:
	${LCLINTR} freearray.c -expect 1

###
### Bugs fixed and new features since version 2.1b
###

SUBDIRTESTS += tests2.2

.PHONY: tests2.2a
tests2.2a:
	@cd tests2.2a ; \
	$(LCLINTR) erik.c -expect 1 ; \
	$(LCLINTR) boolcomp.c -expect 5 ; \
	$(LCLINTR) boolenum.c ; \
	$(LCLINTR) addassign.c -expect 1; \
	$(LCLINTR) toralf.c -expect 5 ; \
	$(LCLINTR) fred.c -booltype Bool ; \
	$(LCLINTR) sizeof.c ; \
	$(LCLINTR) arrayparam.c -expect 5 ; \
	$(LCLINTR) notreached.c ; \
	$(LCLINTR) duff.c -casebreak -firstcase ; \
	$(LCLINTR) obviousloop.c -expect 4 ; \
	$(LCLINTR) bitops.c +bitwisesigned -expect 11 ; \
	$(LCLINTR) bitops.c -expect 5 ; \
	$(LCLINTR) isalpha.c +strictlib -expect 1 ; \
	$(LCLINTR) isalpha.c -expect 1 ; \
	$(LCLINTR) dobb.c ; \
	$(LCLINTR) popik.c -expect 11

SUBDIRTESTS += tests2.4

.PHONY: sizeotest
sizeoftest:
	@cd sizeoftest; \
	$(LCLINTR) +arraybounds  +arrayboundsread sizeof.c

.PHONY: bufferTest
bufferTest:
	@cd bufferTest; \
	$(LCLINTR) +arraybounds  +arrayboundsread test4.c test6.c

.PHONY: simplebufferConstraintTests
simplebufferConstraintTests:
	@cd simplebufferConstraintTests; \
	$(LCLINTR) +arraybounds  +arrayboundsread m.c  sizeof.c  test3.c  test7.c

.PHONY: moreBufferTests
moreBufferTests:
	@cd moreBufferTests; \
	$(LCLINTR) +arraybounds  +arrayboundsread  unrecogCall.c strrchr.c initialization.c simplifyTest.c strncatNotReallyGood.c strncatReallyGood.c

.PHONY: maxset
maxset:
	@cd maxset; \
	$(LCLINTR) +arraybounds maxsetannotations.c; \
	$(LCLINTR) +arraybounds maxsetnoannotations.c -expect 1

.PHONY: globalbufferannotation
globalbufferannotation:
	@cd globalbufferannotation; \
	$(LCLINTR) +arraybounds  +arrayboundsread globalvariable.c

.PHONY: strchr
strchr:
	@cd strchr; \
	$(LCLINTR) +arraybounds +arrayboundsread  strchr.c -expect 2

.PHONY: for
for:
	@cd for; $(LCLINTR) +arraybounds +arrayboundsread for.c

SUBDIRTESTS += tests2.5

## Integration Tests

## evans 2000-12-22
## db2: 2 errors are no longer reported, since eref is immutable.
## Need to clarify what it means for an object to be immutable;
## there should be 2 types with different storage requirements.

SUBDIRTESTS += db1 db2 db3

.PHONY: $(SUBDIRTESTS)
$(SUBDIRTESTS):
	cd $@; $(MAKE) LCLINT="$(LCLINTRN)"
