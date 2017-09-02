# Works with https://github.com/stablecc/make

BLDLIBS += $(BASE)/import/crypto

# hide the headers
#CPPFLAGS += -I $(BASE)/import/crypto/crypto-5.6.5
#CXXFLAGS += -DCRYPTOPP_NO_UNALIGNED_DATA_ACCESS -DLITTLE_ENDIAN
#-DNO_OS_DEPENDENCE

ifeq ($(BLDTYPE),debug)
LDFLAGS += -lcryptoccd
else
LDFLAGS += -lcryptocc
endif
