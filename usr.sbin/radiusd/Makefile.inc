#	$OpenBSD: Makefile.inc,v 1.3 2024/07/02 16:18:11 deraadt Exp $

.PATH:		${.CURDIR}/..
CFLAGS+=	-I${.CURDIR}/..
CFLAGS+=	-Wall -Wextra -Wshadow -Wno-unused-parameter
CFLAGS+=	-Wstrict-prototypes -Wmissing-prototypes
CFLAGS+=	-Wmissing-declarations -Wpointer-arith

#DEGUG=		-g
#CFLAGS+=	-DRADIUSD_DEBUG -DEAP2MSCHAP_DEBUG
#CFLAGS+=	-Werror
