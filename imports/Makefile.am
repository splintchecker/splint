# Forget about $(srcdir)
# We have to copy the sources to $(builddir) manually
VPATH =

IMPORTS_STDLIB_LCS = stdlib.lcs

IMPORTS_LIB_LCS = \
  assert.lcs ctype.lcs errno.lcs \
  limits.lcs locale.lcs math.lcs \
  setjmp.lcs signal.lcs stdarg.lcs \
  stdio.lcs string.lcs \
  strings.lcs time.lcs

IMPORTS_LCS = $(IMPORTS_STDLIB_LCS) $(IMPORTS_LIB_LCS)

IMPORTS_LCL = $(subst .lcs,.lcl,$(IMPORTS_LCS))

## List of files
imports_DATA = $(IMPORTS_LCL) $(IMPORTS_LCS)

all: $(IMPORTS_LCS)

# stdlib.lcs must be built first
$(IMPORTS_LIB_LCS): $(IMPORTS_STDLIB_LCS)

## Rules to make splint & the dumps
SPLINT = $(top_builddir)/src/splint$(EXEEXT)

# Copy the sources to $(builddir)
%.lcl: $(srcdir)/%.lcl
	cp $^ $@

# Build .lcs files in-place
%.lcs: %.lcl
	LARCH_PATH="$(top_builddir)/lib:$(top_srcdir)/lib" $(SPLINT) $<

## Put these files in $prefix/share/lclint/imports
importsdir = $(pkgdatadir)/imports

## Include them in the distribution
EXTRA_DIST = $(imports_DATA)

## Clean generated files
CLEANFILES = *.lcl *.lcs
