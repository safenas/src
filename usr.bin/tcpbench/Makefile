#	$OpenBSD: Makefile,v 1.10 2022/08/15 09:06:54 claudio Exp $

PROG=	tcpbench
LDADD=	-lm -levent -ltls -lcrypto
DPADD=	${LIBM} ${LIBEVENT} ${LIBTLS} ${LIBCRYPTO}

.include <bsd.prog.mk>
