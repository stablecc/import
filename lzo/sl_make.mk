# Works with https://github.com/stablecc/make

BLDLIBS += $(BASE)/import/lzo

# hide the headers
#CPPFLAGS += -isystem $(BASE)/import/lzo/lzo-2.10/include

ifeq ($(BLDTYPE),debug)
LDFLAGS += -llzod
else
LDFLAGS += -llzo
endif
