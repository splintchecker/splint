dnl Process with autoconf to create a configure script  -*- Autoconf -*-
AC_PREREQ(2.50)
AC_INIT([LCLint], [3.0.0.19], [lclint-bug@cs.virginia.edu], [lclint])

dnl This MUST precede any other macro
AC_CONFIG_AUX_DIR([config])

dnl Set up the source directory
AC_CONFIG_SRCDIR([src/lclinit.c])

dnl Deduce host
AC_CANONICAL_HOST

dnl Set up automake & the configuration header
AM_INIT_AUTOMAKE(AC_PACKAGE_TARNAME, AC_PACKAGE_VERSION, AC_PACKAGE_BUGREPORT)
AM_CONFIG_HEADER([config.h:config.hin])

dnl Prepare for LCLint processing of config.h
AH_TOP([/*@-constmacros@*/])
AH_BOTTOM([/*@=constmacros@*/])

dnl Checks for programs.
AC_PROG_CXX
AC_PROG_CC
AC_PROG_CPP
AM_PROG_LEX
AC_PROG_INSTALL
AC_PROG_MAKE_SET
AC_PROG_LN_S
AC_CHECK_PROG(BISON, bison, bison, no)
AC_CHECK_PROG(GREP, grep, grep, grep-is-missing)
AC_CHECK_PROG(DIFF, diff, diff, diff-is-missing)
AC_CHECK_PROG(CAT, cat, cat, cat-is-missing)
AC_CHECK_PROG(RM, rm, rm, rm-is-missing)
AC_CHECK_PROG(MV, mv, mv, mv-is-missing)
AC_CHECK_PROG(CP, cp, cp, cp-is-missing)

dnl Checks for header files.
dnl Currently all disable, as the source files don't care about the results
dnl AC_HEADER_DIRENT
dnl AC_HEADER_STDC
dnl AC_CHECK_HEADERS([alloca.h errno.h fcntl.h float.h limits.h locale.h malloc.h stddef.h stdlib.h string.h strings.h sys/time.h unistd.h])

dnl Checks for typedefs, structures, and compiler characteristics.
dnl Currently all disable, as the source files don't care about the results
dnl AC_C_CONST
dnl AC_TYPE_UID_T
dnl AC_TYPE_MODE_T
dnl AC_TYPE_OFF_T
dnl AC_TYPE_PID_T
dnl AC_TYPE_SIZE_T
dnl AC_STRUCT_ST_BLOCKS
dnl AC_CHECK_MEMBERS([struct stat.st_rdev])
dnl AC_DECL_SYS_SIGLIST
dnl AC_HEADER_TIME
dnl AC_STRUCT_TM
dnl AC_CHECK_TYPES([ptrdiff_t])

dnl Checks for library functions.
dnl Currently all disable, as the source files don't care about the results
dnl AC_FUNC_ALLOCA
dnl AC_FUNC_CHOWN
dnl AC_FUNC_GETPGRP
dnl AC_PROG_GCC_TRADITIONAL
dnl AC_FUNC_LSTAT
dnl AC_FUNC_MALLOC
dnl AC_FUNC_MEMCMP
dnl AC_FUNC_MKTIME
dnl AC_FUNC_MMAP
dnl AC_FUNC_SETVBUF_REVERSED
dnl AC_TYPE_SIGNAL
dnl AC_FUNC_STAT
dnl AC_FUNC_STRCOLL
dnl AC_FUNC_STRERROR_R
dnl AC_FUNC_VFORK
dnl AC_FUNC_VPRINTF
dnl AC_FUNC_WAIT3
dnl AC_CHECK_FUNCS([alarm atexit btowc bzero dup2 endgrent endpwent fchdir floor ftruncate getcwd getgroups gethostname gettimeofday isascii iswprint lchown localeconv mblen mbrlen mbrtowc memchr memmove memset mkdir mkfifo modf munmap pathconf pow putenv realpath regcomp rint rmdir rpmatch select setenv socket sqrt strcasecmp strchr strcspn strdup strerror strftime strncasecmp strpbrk strrchr strspn strstr strtod strtol strtoul strtoull tzset uname utime vprintf])

LCLOBJ='$(lcl_OBJECTS)'
AC_ARG_WITH([lcl],
            AC_HELP_STRING([--without-lcl],
                           [don't include support for LCL files]),
            ac_cv_use_lcl=$withval, 
            AC_CACHE_CHECK([whether to include support for LCL files],
                           ac_cv_use_lcl, ac_cv_use_lcl=yes))
if test x$ac_cv_use_lcl != xyes; then
  LCLOBJ=
  AC_DEFINE(NOLCL, 1, [Define to disable support LCL files])
fi
AC_SUBST(LCLOBJ)

# Make sure we have an actual value for $prefix
myprefix=$prefix
test x$myprefix = xNONE && myprefix=$ac_default_prefix

# cpplib.h defines 2 include dirs; one is $includedir, the other is gcc's
# include dir.  Not the most portable setup, but let's do our best.
if test x$ac_cv_c_compiler_gnu = xyes; then
  dnl Make sure to override NLS; this assumes gcc prints only
  dnl   Reading specs from blah
  dnl   gcc version blah

# This breaks on gcc-3.0 on redhat fixing drl 11-15-2001
#  GCC_INCLUDE_DIR=`LANGUAGE= LANG= $CC -v 2>&1 | sed -e '/^gcc/ d' -e 's/.* \(.*\)specs/\1include/'`
 GCC_INCLUDE_DIR=/usr/lib/gcc-lib/i386-linux/2.7.2.1/include
#  GCC_INCLUDE_DIR=`LANGUAGE= LANG= $CC -v 2>&1 | sed -n -e '/^gcc/ d' -e 's/.* \(.*\)specs/\1include/p'`
  AC_DEFINE_UNQUOTED(GCC_INCLUDE_DIR, "$GCC_INCLUDE_DIR",
                     [gcc's private include directory])
fi
AC_DEFINE_UNQUOTED(GCC_INCLUDE_DIR2, "$myprefix/include",
                   [the system's main include directory])

# These used to be in local_constants.h
AC_DEFINE_UNQUOTED(SYSTEM_LIBDIR, "$myprefix/include",
                   [The system's main include directory])
AC_DEFINE_UNQUOTED(DEFAULT_LARCHPATH,
                   ".$PATH_SEPARATOR$myprefix/share/lclint/lib$PATH_SEPARATOR`pwd`/lib$PATH_SEPARATOR",
                   [The directory where LCLint's library files live])
AC_DEFINE_UNQUOTED(DEFAULT_LCLIMPORTDIR, "$myprefix/share/lclint/imports$PATH_SEPARATOR`pwd`/imports",
                   [LCLint's imports directory])

# These used to be in herald.h
LCL_PARSE_VERSION="AC_PACKAGE_NAME AC_PACKAGE_VERSION"
AC_DEFINE_UNQUOTED(LCL_VERSION,
                   "$LCL_PARSE_VERSION --- `cat $srcdir/src/DATE`",
                   [LCLint's version number and release date])
AC_DEFINE_UNQUOTED(LCL_PARSE_VERSION, "$LCL_PARSE_VERSION",
                   [LCLint's version number])
AC_DEFINE_UNQUOTED(LCL_COMPILE,
                   "Compiled using $CC $CFLAGS on `uname -a` by `whoami`",
                   [String describing who compiled this binary and how])


dnl TODO: Use result AC_CANONICAL_HOST to figure out what to define
AC_DEFINE(UNIX, 1, [Define if you're on a Unixy system])

dnl AC_CONFIG_FILES([test/Makefile
dnl                  test/ensuresclauses/Makefile
dnl                  test/conditions/Makefile
dnl                  test/db2/Makefile
dnl                  test/warnuse/Makefile
dnl                  test/tainted/Makefile
dnl                  test/fileio/Makefile
dnl                  test/tests2.4/Makefile
dnl                  test/db3/Makefile
dnl                  test/metastate/Makefile
dnl                  test/mergestate/Makefile
dnl                  test/tests2.5/Makefile
dnl                  test/tests2.2/Makefile
dnl                  test/db1/Makefile])

AC_CONFIG_FILES([Makefile imports/Makefile lib/Makefile src/Makefile
                 test/Makefile])
AC_OUTPUT








