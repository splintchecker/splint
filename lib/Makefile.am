## Note: starting comments with ## means they don't end up in Makefile

AUTOMAKE_OPTIONS = 1.5 foreign

## Put these files in $prefix/share/splint/lib
splintlibdir = $(pkgdatadir)/lib

UnixHeaders = stdio.h stdlib.h

## List of files
splintlib_DATA = \
  ansi.h ansi.lcd ansistrict.lcd posix.h posix.lcd posixstrict.lcd \
  unix.h unix.lcd unixstrict.lcd CTrait.syms CTraitGen.lcl bool.h \
  file.mts file.xh filerw.mts filerw.xh \
  lclinit.lci linux.h lslinit.lsi tainted.mts tainted.xh \
  stdio.h stdlib.h $(UnixHeaders)

## Include them in the distribution
EXTRA_DIST = $(splintlib_DATA)


## Rules to make splint & the dumps

SPLINT = $(top_builddir)/src/splint$(EXEEXT)

$(SPLINT):
	cd $(top_builddir)/src; $(MAKE)

ansi.lcd: ansi.h $(SPLINT)
	-$(SPLINT) -nof -nolib +impconj ansi.h -dump ansi
	@touch $@

ansistrict.lcd: ansi.h $(SPLINT)
	-$(SPLINT) -nof -nolib +impconj -DSTRICT ansi.h -dump ansistrict
	@touch $@

posix.lcd: ansi.h posix.h $(SPLINT)
	-$(SPLINT) -nof -nolib +impconj ansi.h posix.h -dump posix
	@touch $@

posixstrict.lcd: ansi.h posix.h $(SPLINT)
	-$(SPLINT) -nof -nolib +impconj -DSTRICT ansi.h posix.h -dump posixstrict
	@touch $@

unix.lcd: ansi.h posix.h unix.h $(UnixHeaders) $(SPLINT)
	-$(SPLINT) -nof -incondefs -nolib +impconj ansi.h posix.h unix.h stdio.h stdlib.h -dump unix
	@touch $@

unixstrict.lcd: ansi.h posix.h unix.h $(UnixHeaders) $(SPLINT)
	-$(SPLINT) -nof -incondefs -nolib +impconj -DSTRICT ansi.h posix.h unix.h  stdio.h stdlib.h  -dump unixstrict
	@touch $@
