#	$OpenBSD: Makefile,v 1.5 2024/04/22 07:31:54 anton Exp $

PROG=	clienttest
LDADD=	${SSL_INT} -lcrypto
DPADD=	${LIBSSL} ${LIBCRYPTO}
WARNINGS=	Yes
CFLAGS+=	-DLIBRESSL_INTERNAL -Werror

.include <bsd.regress.mk>
