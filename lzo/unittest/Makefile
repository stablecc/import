# Unit test for googletest. Works with https://github.com/stablecc/make

BASE = ../../..

NAME = lzo_test

CPPFLAGS += -isystem ../lzo-2.10/include -I ../lzo-2.10

SRCS = lzotest/lzotest.c

include $(BASE)/import/lzo/make.mk

include $(BASE)/make/app.mk
