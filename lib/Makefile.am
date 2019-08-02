SPLINT = $(top_builddir)/src/splint$(EXEEXT)

## List of files
splintlib_DATA = \
  standard.h standard.lcd standardstrict.lcd posix.h posix.lcd posixstrict.lcd \
  unix.h unix.lcd unixstrict.lcd CTrait.syms CTraitGen.lcl bool.h \
  file.mts file.xh filerw.mts filerw.xh \
  lclinit.lci linux.h lslinit.lsi tainted.mts tainted.xh \
  stdio.h stdlib.h

## Put these files in $prefix/share/splint/lib
splintlibdir = $(pkgdatadir)/lib

## Include them in the distribution
EXTRA_DIST = $(splintlib_DATA)

# Get rid of lcd files if the user does a make clean
CLEANFILES = *.lcd

standard.lcd: standard.h
	$(SPLINT) -nof -nolib +impconj $^ -dump standard

standardstrict.lcd: standard.h
	$(SPLINT) -nof -nolib +impconj -DSTRICT $^ -dump standardstrict

posix.lcd: standard.h posix.h
	$(SPLINT) -nof -nolib +impconj $^ -dump posix

posixstrict.lcd: standard.h posix.h
	$(SPLINT) -nof -nolib +impconj -DSTRICT $^ -dump posixstrict

unix.lcd: standard.h posix.h unix.h stdio.h stdlib.h
	$(SPLINT) -supcounts -nof -incondefs -nolib +impconj $^ -dump unix

unixstrict.lcd: standard.h posix.h unix.h stdio.h stdlib.h
	$(SPLINT) -supcounts -nof -incondefs -nolib +impconj -DSTRICT $^ -dump unixstrict
