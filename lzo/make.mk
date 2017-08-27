# Works with https://github.com/stablecc/make

BLDLIBS += $(BASE)/import/lzo

CPPFLAGS += -I $(BASE)/import/lzo/lzo-2.10/include/lzo

ifeq ($(BLDTYPE),debug)
LDFLAGS += -llzod
else
LDFLAGS += -llzo
endif
