# Unit test for googletest. Works with https://github.com/stablecc/make

BASE = ../../..

NAME = crypto_test

CPPFLAGS += -I src

SRCS = src/validat1.cpp src/validat2.cpp src/validat3.cpp src/datatest.cpp src/regtest.cpp main.cc 
XX = src/test.cpp src/bench1.cpp src/bench2.cpp src/validat1.cpp src/validat2.cpp src/validat3.cpp src/adhoc.cpp src/datatest.cpp src/regtest.cpp src/fipsalgt.cpp src/dlltest.cpp

include $(BASE)/import/googletest/make.mk
include $(BASE)/import/crypto/make.mk

include $(BASE)/make/app.mk
