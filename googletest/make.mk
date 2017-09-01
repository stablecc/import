# From https://github.com/google/googletest/releases/tag/release-1.8.0

# Works with https://github.com/stablecc/make

BLDLIBS += $(BASE)/import/googletest

CPPFLAGS += -isystem $(BASE)/import/googletest/include

ifeq ($(BLDTYPE),debug)
LDFLAGS += -lgtestd
else
LDFLAGS += -lgtest
endif
