## Note: starting comments with ## means they don't end up in Makefile

AUTOMAKE_OPTIONS = 1.5 foreign

## Put these files in $prefix/share/lclint/lib
lclintlibdir = $(pkgdatadir)/lib

## List of files
lclintlib_DATA = \
  ansi.h ansi.lcd ansistrict.lcd posix.h posix.lcd posixstrict.lcd \
  unix.h unix.lcd unixstrict.lcd CTrait.syms CTraitGen.lcl bool.h \
  file.mts file.xh filerw.mts filerw.xh \
  lclinit.lci linux.h lslinit.lsi tainted.mts tainted.xh

## Include them in the distribution
EXTRA_DIST = $(lclintlib_DATA)

## Rules to make lclint & the dumps

LCLINT = $(top_builddir)/bin/lclint$(EXEEXT)

$(LCLINT):
	cd $(top_builddir)/src; $(MAKE)

ansi.lcd: ansi.h $(LCLINT)
	-$(LCLINT) -nolib +impconj ansi.h -dump ansi
	@touch $@

ansistrict.lcd: ansi.h $(LCLINT)
	-$(LCLINT) -nolib +impconj -DSTRICT ansi.h -dump ansistrict
	@touch $@

posix.lcd: ansi.h posix.h $(LCLINT)
	-$(LCLINT) -nolib +impconj ansi.h posix.h -dump posix
	@touch $@

posixstrict.lcd: ansi.h posix.h $(LCLINT)
	-$(LCLINT) -nolib +impconj -DSTRICT ansi.h posix.h -dump posixstrict
	@touch $@

unix.lcd: ansi.h posix.h unix.h $(LCLINT)
	-$(LCLINT) -nolib +impconj ansi.h posix.h unix.h -dump unix
	@touch $@

unixstrict.lcd: ansi.h posix.h unix.h $(LCLINT)
	-$(LCLINT) -nolib +impconj -DSTRICT ansi.h posix.h unix.h -dump unixstrict
	@touch $@
