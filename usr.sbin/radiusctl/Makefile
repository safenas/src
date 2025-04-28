#	$OpenBSD: Makefile,v 1.3 2020/02/24 07:07:11 dlg Exp $
PROG=		radiusctl
SRCS=		radiusctl.c parser.c chap_ms.c json.c
MAN=		radiusctl.8
CFLAGS+=	-Wall -Wextra -Wno-unused-parameter
CFLAGS+=	-I${.CURDIR}/../radiusd
LDADD+=		-lradius -lcrypto -levent -lutil
DPADD+=		${LIBRADIUS} ${LIBCRYPTO} ${LIBEVENT} ${LIBUTIL}

.include <bsd.prog.mk>
