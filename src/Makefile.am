AM_CFLAGS = -Wall -Wextra -Werror -Wconversion -Wformat

include_HEADERS = sietch.h
lib_LTLIBRARIES = libsietch.la

libsietch_la_SOURCES = sietch.c \
    sietch-ssl.h

if WITH_OPENSSL
libsietch_la_SOURCES += platform/openssl/sietch-ssl.c
else
libsietch_la_SOURCES += platform/weak/sietch-ssl.c
endif
