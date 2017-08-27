# Builds googletest shared lib. Works with https://github.com/stablecc/make

BASE = ../..

NAME = lzo

# some include <config.h>
CPPFLAGS += -isystem . -isystem lzo-2.10/include -I lzo-2.10/src

SRCS = \
	lzo-2.10/src/lzo1.c lzo-2.10/src/lzo1_99.c lzo-2.10/src/lzo1a.c lzo-2.10/src/lzo1a_99.c lzo-2.10/src/lzo1b_1.c \
	lzo-2.10/src/lzo1b_2.c lzo-2.10/src/lzo1b_3.c lzo-2.10/src/lzo1b_4.c lzo-2.10/src/lzo1b_5.c lzo-2.10/src/lzo1b_6.c \
	lzo-2.10/src/lzo1b_7.c lzo-2.10/src/lzo1b_8.c lzo-2.10/src/lzo1b_9.c lzo-2.10/src/lzo1b_99.c lzo-2.10/src/lzo1b_9x.c \
	lzo-2.10/src/lzo1b_cc.c lzo-2.10/src/lzo1b_d1.c lzo-2.10/src/lzo1b_d2.c lzo-2.10/src/lzo1b_rr.c \
	lzo-2.10/src/lzo1b_xx.c lzo-2.10/src/lzo1c_1.c lzo-2.10/src/lzo1c_2.c lzo-2.10/src/lzo1c_3.c lzo-2.10/src/lzo1c_4.c \
	lzo-2.10/src/lzo1c_5.c lzo-2.10/src/lzo1c_6.c lzo-2.10/src/lzo1c_7.c lzo-2.10/src/lzo1c_8.c lzo-2.10/src/lzo1c_9.c \
	lzo-2.10/src/lzo1c_99.c lzo-2.10/src/lzo1c_9x.c lzo-2.10/src/lzo1c_cc.c lzo-2.10/src/lzo1c_d1.c \
	lzo-2.10/src/lzo1c_d2.c lzo-2.10/src/lzo1c_rr.c lzo-2.10/src/lzo1c_xx.c lzo-2.10/src/lzo1f_1.c \
	lzo-2.10/src/lzo1f_9x.c lzo-2.10/src/lzo1f_d1.c lzo-2.10/src/lzo1f_d2.c lzo-2.10/src/lzo1x_1.c \
	lzo-2.10/src/lzo1x_1k.c lzo-2.10/src/lzo1x_1l.c lzo-2.10/src/lzo1x_1o.c lzo-2.10/src/lzo1x_9x.c \
	lzo-2.10/src/lzo1x_d1.c lzo-2.10/src/lzo1x_d2.c lzo-2.10/src/lzo1x_d3.c lzo-2.10/src/lzo1x_o.c \
	lzo-2.10/src/lzo1y_1.c lzo-2.10/src/lzo1y_9x.c lzo-2.10/src/lzo1y_d1.c lzo-2.10/src/lzo1y_d2.c \
	lzo-2.10/src/lzo1y_d3.c lzo-2.10/src/lzo1y_o.c lzo-2.10/src/lzo1z_9x.c lzo-2.10/src/lzo1z_d1.c \
	lzo-2.10/src/lzo1z_d2.c lzo-2.10/src/lzo1z_d3.c lzo-2.10/src/lzo2a_9x.c lzo-2.10/src/lzo2a_d1.c \
	lzo-2.10/src/lzo2a_d2.c lzo-2.10/src/lzo_crc.c lzo-2.10/src/lzo_init.c lzo-2.10/src/lzo_ptr.c \
	lzo-2.10/src/lzo_str.c lzo-2.10/src/lzo_util.c

include $(BASE)/make/sl.mk
