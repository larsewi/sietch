#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.71])
AC_INIT([sietch],
        [0.0.1],
        [https://github.com/larsewi/siech/issues],
        [siech],
        [https://github.com/larsewi/siech])
AC_CONFIG_SRCDIR([src/sietch.c])
AC_CONFIG_HEADERS([config.h])
AC_CONFIG_MACRO_DIR([m4])

AM_INIT_AUTOMAKE([-Wall -Werror foreign subdir-objects])

# Checks for programs.
AC_PROG_CXX
AC_PROG_AWK
AC_PROG_CC
AC_PROG_CPP
AC_PROG_INSTALL
AC_PROG_LN_S
AC_PROG_MAKE_SET
AM_PROG_AR

LT_INIT

AC_DEFINE([DEFAULT_BUFFER_CAPACITY], 1024,
          [Default initial buffer capacity allocated by siech])

# Checks for libraries.

# With openssl library.
AC_ARG_WITH([openssl], AS_HELP_STRING([--with-openssl], [use openssl]))
AM_CONDITIONAL([WITH_OPENSSL], [test "x$with_openssl" = "xyes"])
AS_IF([test "x$with_openssl" = "xyes"], [PKG_CHECK_MODULES([OPENSSL], [openssl])])

# Checks for header files.
AC_CHECK_HEADER_STDBOOL
AC_FUNC_ALLOCA
AC_CHECK_HEADERS([malloc.h stdint.h unistd.h])

# Checks for typedefs, structures, and compiler characteristics.
AC_TYPE_SIZE_T
AC_TYPE_SSIZE_T

# Checks for library functions.
AC_FUNC_MALLOC
AC_FUNC_REALLOC
AC_CHECK_FUNCS([memset strerror])

AC_CONFIG_TESTDIR([tests])
AC_CONFIG_FILES([Makefile
                 src/Makefile
                 tests/Makefile])
AC_OUTPUT