AC_INIT([Splint],[3.1.2],[splint-bug@splint.org])
dnl This MUST precede any other macro
AC_CONFIG_AUX_DIR([config-aux])

AC_CANONICAL_TARGET

dnl Set up automake & the configuration header
AM_INIT_AUTOMAKE([foreign])
AC_CONFIG_HEADERS([config.h])

dnl Set up the source directory
AC_CONFIG_SRCDIR([src/lclinit.c])

dnl Prepare for Splint processing of config.h
AH_TOP([/*@ -macroconstdecl@*/])
AH_BOTTOM([/*@ =macroconstdecl@*/])

dnl Checks for programs.
AC_PROG_GREP
AC_PROG_SED
AC_CHECK_PROG(DIFF, diff, diff, no)
AC_CHECK_PROG(FLEX, flex, flex, no)
AC_CHECK_PROG(BISON, bison, bison, no)
AC_PROG_CC

dnl Checks for header files.
dnl Currently all disable, as the source files don't care about the results
dnl AC_HEADER_DIRENT
dnl m4_warn([obsolete],
[The preprocessor macro `STDC_HEADERS' is obsolete.
  Except in unusual embedded environments, you can safely include all
  ISO C90 headers unconditionally.])dnl
# Autoupdate added the next two lines to ensure that your configure
# script's behavior did not change.  They are probably safe to remove.
AC_CHECK_INCLUDES_DEFAULT
AC_PROG_EGREP

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
dnl AC_CHECK_DECLS([sys_siglist],[],[],[#include <signal.h>
/* NetBSD declares sys_siglist in unistd.h.  */
#ifdef HAVE_UNISTD_H
# include <unistd.h>
#endif
])

dnl m4_warn([obsolete],
[Update your code to rely only on HAVE_SYS_TIME_H,
then remove this warning and the obsolete code below it.
All current systems provide time.h; it need not be checked for.
Not all systems provide sys/time.h, but those that do, all allow
you to include it and time.h simultaneously.])dnl
AC_CHECK_HEADERS_ONCE([sys/time.h])
# Obsolete code to be removed.
if test $ac_cv_header_sys_time_h = yes; then
  AC_DEFINE([TIME_WITH_SYS_TIME],[1],[Define to 1 if you can safely include both <sys/time.h>
	     and <time.h>.  This macro is obsolete.])
fi
# End of obsolete code.

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
dnl m4_warn([obsolete],
[your code may safely assume C89 semantics that RETSIGTYPE is void.
Remove this warning and the `AC_CACHE_CHECK' when you adjust the code.])dnl
AC_CACHE_CHECK([return type of signal handlers],[ac_cv_type_signal],[AC_COMPILE_IFELSE(
[AC_LANG_PROGRAM([#include <sys/types.h>
#include <signal.h>
],
		 [return *(signal (0, 0)) (0) == 1;])],
		   [ac_cv_type_signal=int],
		   [ac_cv_type_signal=void])])
AC_DEFINE_UNQUOTED([RETSIGTYPE],[$ac_cv_type_signal],[Define as the return type of signal handlers
		    (`int' or `void').])

dnl AC_FUNC_STAT
dnl AC_FUNC_STRCOLL
dnl AC_FUNC_STRERROR_R
dnl AC_FUNC_FORK
dnl AC_FUNC_VPRINTF
dnl AC_FUNC_WAIT3
dnl AC_CHECK_FUNCS([alarm atexit btowc bzero dup2 endgrent endpwent fchdir floor ftruncate getcwd getgroups gethostname gettimeofday isascii iswprint lchown localeconv mblen mbrlen mbrtowc memchr memmove memset mkdir mkfifo modf munmap pathconf pow putenv realpath regcomp rint rmdir rpmatch select setenv socket sqrt strcasecmp strchr strcspn strdup strerror strftime strncasecmp strpbrk strrchr strspn strstr strtod strtol strtoul strtoull tzset uname utime vprintf])

# Make sure we have an actual value for $prefix
myprefix=$prefix
test x$myprefix = xNONE && myprefix=$ac_default_prefix

### Yuck!  This is really kludgey, but I don't understand autoconf well
### enough to do something simple that always works.  Hopefully this does.

# cpplib.h defines 2 include dirs; one is $includedir, the other is gcc's
# include dir.  Not the most portable setup, but let's do our best.

if test x$GCC = xyes; then
  dnl Make sure to override NLS; this assumes gcc prints only
  dnl   Reading specs from blah
  dnl   gcc version blah

# This breaks on gcc-3.0 on redhat fixing drl 11-15-2001
#  GCC_INCLUDE_DIR=`LANGUAGE= LANG= $CC -v 2>&1 | sed -e '/^gcc/ d' -e 's/.* \(.*\)specs/\1include/'`
GCC_INCLUDE_DIR=/usr/include
# was /usr/lib/gcc-lib/i386-linux/2.7.2.1/include
#  GCC_INCLUDE_DIR=`LANGUAGE= LANG= $CC -v 2>&1 | sed -n -e '/^gcc/ d' -e 's/.* \(.*\)specs/\1include/p'`
  AC_DEFINE_UNQUOTED(GCC_INCLUDE_DIR, "$GCC_INCLUDE_DIR",
                     [system include directory])
else
GCC_INCLUDE_DIR=/usr/include
AC_DEFINE_UNQUOTED(GCC_INCLUDE_DIR, "$GCC_INCLUDE_DIR", [system include directory])
fi

AC_DEFINE_UNQUOTED(GCC_INCLUDE_DIR2, "$myprefix/include",
                   [alternate include directory])

# These used to be in local_constants.h
AC_DEFINE_UNQUOTED(SYSTEM_LIBDIR, "$myprefix/include",
                   [The system's main include directory])
AC_DEFINE_UNQUOTED(DEFAULT_LARCHPATH,
                   ".$PATH_SEPARATOR$myprefix/share/splint/lib$PATH_SEPARATOR`pwd`/lib$PATH_SEPARATOR",
                   [The directory where Splint's library files live])
AC_DEFINE_UNQUOTED(DEFAULT_LCLIMPORTDIR, ".$PATH_SEPARATOR$myprefix/share/splint/imports$PATH_SEPARATOR`pwd`/imports",
                   [Splint's imports directory])

# These used to be in herald.h
LCL_PARSE_VERSION="AC_PACKAGE_NAME AC_PACKAGE_VERSION"
AC_DEFINE_UNQUOTED(SPLINT_VERSION,
                   "$LCL_PARSE_VERSION --- `date +"%d %b %Y"`",
                   [Splint's version number and configure/build date])
AC_DEFINE_UNQUOTED(LCL_PARSE_VERSION, "$LCL_PARSE_VERSION",
                   [Splint's version number])
AC_DEFINE_UNQUOTED(LCL_COMPILE,
                   "Compiled using $CC $CFLAGS on `uname -a` by `whoami`",
                   [String describing who compiled this binary and how])

dnl TODO: Use result AC_CANONICAL_TARGET to figure out what to define 

AC_DEFINE(UNIX, 1, [Define if you're on a Unixy system])

#just define some Header constants for now...

UNAME=`uname`
AC_DEFINE_UNQUOTED(UNAME, "${UNAME}", uname output)

AC_DEFINE_UNQUOTED(BUILD, "${build}", build)
AC_DEFINE_UNQUOTED(HOST, "${host}", host)
AC_DEFINE_UNQUOTED(TARGET, "${target}", target)

AC_DEFINE_UNQUOTED(BUILD_ALIAS, "${build_alias}", build_alias)
AC_DEFINE_UNQUOTED(HOST_ALIAS, "${host_alias}", host_alias)
AC_DEFINE_UNQUOTED(TARGET_ALIAS, "${TARGET_ALIAS}", target_alias)

AC_DEFINE_UNQUOTED(BUILD_CPU, "${build_cpu}", build_cpu)
AC_DEFINE_UNQUOTED(HOST_CPU, "$host_cpu", host_cpu)
AC_DEFINE_UNQUOTED(TARGET_CPU, "${target_cpu}", target_cpu)

AC_DEFINE_UNQUOTED(BUILD_VENDOR, "${build_vendor}", build_vendor)
AC_DEFINE_UNQUOTED(HOST_VENDOR, "${host_vendor}", host_vendor)
AC_DEFINE_UNQUOTED(TARGET_VENDOR, "${target_vendor}", target_vendor)

AC_DEFINE_UNQUOTED(BUILD_OS, "${build_os}", build_os)
AC_DEFINE_UNQUOTED(HOST_OS, "${host_os}", host_os)
AC_DEFINE_UNQUOTED(TARGET_OS,"${target_os}", target_os)

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
                 test/Makefile doc/Makefile])
AC_OUTPUT
