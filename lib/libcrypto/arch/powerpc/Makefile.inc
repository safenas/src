# $OpenBSD: Makefile.inc,v 1.13 2024/11/01 12:56:38 jsing Exp $

# powerpc-specific libcrypto build rules

# slower than C code
#CFLAGS+= -DAES_ASM
#SSLASM+= aes aes-ppc aes-ppc
# bn
SSLASM+= bn ppc bn-ppc
SSLASM+= bn ppc-mont ppc-mont
CFLAGS+= -DOPENSSL_BN_ASM_MONT
# sha
SSLASM+= sha sha1-ppc sha1-ppc
SSLASM+= sha sha512-ppc sha256-ppc

.for dir src dst in ${SSLASM}
SRCS+=	${dst}.S
GENERATED+=${dst}.S
${dst}.S: ${LCRYPTO_SRC}/${dir}/asm/${src}.pl
	/usr/bin/perl \
		${LCRYPTO_SRC}/${dir}/asm/${src}.pl linux32 ${.TARGET} > ${.TARGET}
.endfor
