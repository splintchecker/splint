IMPORTS_LCL = stdlib.lcl \
  assert.lcl ctype.lcl errno.lcl \
  limits.lcl locale.lcl math.lcl \
  setjmp.lcl signal.lcl stdarg.lcl \
  stdio.lcl string.lcl \
  strings.lcl time.lcl

IMPORTS_LCS = stdlib.lcs \
  assert.lcs ctype.lcs errno.lcs \
  limits.lcs locale.lcs math.lcs \
  setjmp.lcs signal.lcs stdarg.lcs \
  stdio.lcs string.lcs \
  strings.lcs time.lcs

## List of files
imports_DATA = $(IMPORTS_LCL) $(IMPORTS_LCS)

all: $(IMPORTS_LCS)

## Rules to make splint & the dumps
SPLINT = $(top_builddir)/src/splint$(EXEEXT)

%.lcs: %.lcl
	$(SPLINT) $<

## Put these files in $prefix/share/lclint/imports
importsdir = $(pkgdatadir)/imports

## Include them in the distribution
EXTRA_DIST = $(imports_DATA)

## Clean generated files
CLEANFILES = $(IMPORTS_LCS)
