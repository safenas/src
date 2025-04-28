#	$OpenBSD: Makefile,v 1.3 2014/07/08 15:53:52 jsing Exp $

.include <bsd.own.mk>

PROG=	hmactest
LDADD=	-lcrypto
DPADD=	${LIBCRYPTO}
WARNINGS=	Yes
CFLAGS+=	-DLIBRESSL_INTERNAL
# The bounded attribute for HMAC_Init_ex() warns for gcc, breaking compilation
.if ${COMPILER_VERSION:L} == "clang"
CFLAGS+=	-Werror
.endif

.include <bsd.regress.mk>
