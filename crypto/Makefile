# Builds googletest shared lib. Works with https://github.com/stablecc/make

BASE = ../..

NAME = cryptocc

# some include <config.h>
CPPFLAGS += -I crypto-5.6.5
CXXFLAGS += -DCRYPTOPP_NO_UNALIGNED_DATA_ACCESS -DLITTLE_ENDIAN
#-DNO_OS_DEPENDENCE

VPATH = crypto-5.6.5
# removed poly1305.cpp, this file was not found
# according to the GNUmakefile, cryptlib.cpp cpu.cpp integer.cpp need to come first
SRCS = \
	cryptlib.cpp cpu.cpp integer.cpp \
	keccak.cpp \
	shacal2.cpp md5.cpp shark.cpp zinflate.cpp gf2n.cpp \
	salsa.cpp xtr.cpp oaep.cpp polynomi.cpp rc2.cpp default.cpp wait.cpp wake.cpp twofish.cpp \
	iterhash.cpp adler32.cpp elgamal.cpp marss.cpp blowfish.cpp ecp.cpp filters.cpp strciphr.cpp \
	camellia.cpp ida.cpp zlib.cpp des.cpp crc.cpp algparam.cpp dessp.cpp tea.cpp eax.cpp network.cpp \
	emsa2.cpp pkcspad.cpp squaretb.cpp idea.cpp authenc.cpp hmac.cpp zdeflate.cpp xtrcrypt.cpp \
	queue.cpp mars.cpp rc5.cpp blake2.cpp hrtimer.cpp eprecomp.cpp hex.cpp dsa.cpp sha.cpp \
	fips140.cpp gzip.cpp seal.cpp files.cpp base32.cpp vmac.cpp tigertab.cpp sharkbox.cpp \
	safer.cpp randpool.cpp esign.cpp arc4.cpp osrng.cpp skipjack.cpp seed.cpp sha3.cpp sosemanuk.cpp \
	bfinit.cpp rabin.cpp 3way.cpp rw.cpp rdrand.cpp rsa.cpp rdtables.cpp gost.cpp socketft.cpp tftables.cpp \
	nbtheory.cpp panama.cpp modes.cpp rijndael.cpp casts.cpp chacha.cpp gfpcrypt.cpp dll.cpp ec2n.cpp \
	blumshub.cpp algebra.cpp basecode.cpp base64.cpp cbcmac.cpp rc6.cpp dh2.cpp gf256.cpp mqueue.cpp misc.cpp pssr.cpp \
	channels.cpp tiger.cpp cast.cpp rng.cpp square.cpp asn.cpp whrlpool.cpp md4.cpp dh.cpp ccm.cpp md2.cpp mqv.cpp \
	gf2_32.cpp ttmac.cpp luc.cpp trdlocal.cpp pubkey.cpp gcm.cpp ripemd.cpp eccrypto.cpp serpent.cpp cmac.cpp

XX = cryptlib.cpp cpu.cpp integer.cpp shacal2.cpp md5.cpp shark.cpp zinflate.cpp gf2n.cpp \
	salsa.cpp xtr.cpp oaep.cpp polynomi.cpp rc2.cpp default.cpp wait.cpp wake.cpp twofish.cpp \
	iterhash.cpp adler32.cpp elgamal.cpp marss.cpp blowfish.cpp ecp.cpp filters.cpp strciphr.cpp \
	camellia.cpp ida.cpp zlib.cpp des.cpp crc.cpp algparam.cpp dessp.cpp tea.cpp eax.cpp network.cpp \
	emsa2.cpp pkcspad.cpp squaretb.cpp idea.cpp authenc.cpp hmac.cpp zdeflate.cpp xtrcrypt.cpp \
	queue.cpp mars.cpp rc5.cpp blake2.cpp hrtimer.cpp eprecomp.cpp hex.cpp dsa.cpp sha.cpp \
	fips140.cpp gzip.cpp seal.cpp files.cpp base32.cpp vmac.cpp tigertab.cpp sharkbox.cpp \
	safer.cpp randpool.cpp esign.cpp arc4.cpp osrng.cpp skipjack.cpp seed.cpp sha3.cpp sosemanuk.cpp \
	bfinit.cpp rabin.cpp 3way.cpp rw.cpp rdrand.cpp rsa.cpp rdtables.cpp gost.cpp socketft.cpp tftables.cpp \
	nbtheory.cpp panama.cpp modes.cpp rijndael.cpp casts.cpp chacha.cpp gfpcrypt.cpp poly1305.cpp dll.cpp ec2n.cpp \
	blumshub.cpp algebra.cpp basecode.cpp base64.cpp cbcmac.cpp rc6.cpp dh2.cpp gf256.cpp mqueue.cpp misc.cpp pssr.cpp \
	channels.cpp tiger.cpp cast.cpp rng.cpp square.cpp asn.cpp whrlpool.cpp md4.cpp dh.cpp ccm.cpp md2.cpp mqv.cpp \
	gf2_32.cpp ttmac.cpp luc.cpp trdlocal.cpp pubkey.cpp gcm.cpp ripemd.cpp eccrypto.cpp serpent.cpp cmac.cpp

include $(BASE)/make/sl.mk
