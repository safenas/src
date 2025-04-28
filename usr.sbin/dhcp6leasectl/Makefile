#	$OpenBSD: Makefile,v 1.2 2021/09/15 15:18:23 florian Exp $

PROG=	dhcp6leasectl
SRCS=	dhcp6leasectl.c

MAN=	dhcp6leasectl.8

CFLAGS+= -Wall
CFLAGS+= -Wstrict-prototypes -Wmissing-prototypes
CFLAGS+= -Wmissing-declarations
CFLAGS+= -Wshadow -Wpointer-arith -Wcast-qual
CFLAGS+= -Wsign-compare
CFLAGS+= -I${.CURDIR} -I${.CURDIR}/../../sbin/dhcp6leased
LDADD=	-lutil
DPADD=	${LIBUTIL}

.include <bsd.prog.mk>
