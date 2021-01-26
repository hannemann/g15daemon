# $FreeBSD$

PORTNAME=	g15daemon
PORTVERSION=	1.9.5.5
CATEGORIES=	sysutils

MAINTAINER=	menelkir@itroll.org
COMMENT=	Daemon for use the G-Buttons and draw on the G15 LCD

LICENSE=	GPLv2

LIB_DEPENDS+=	libg15.so:sysutils/libg15 \
		libg15render.so:sysutils/libg15render

USES=		compiler:gcc-c++11-lib gmake localbase libtool

USE_GITLAB=	yes
GL_ACCOUNT=	menelkir
GL_PROJECT=	${PORTNAME}
GL_COMMIT=	b4773bdb2e145ce8a33db061fab25321a4a9a710

USE_LDCONFIG=	yes

GNU_CONFIGURE=	yes

CFLAGS+=	-std=c99 -fcommon

USE_RC_SUBR=	g15daemon

INSTALL_TARGET=	install-strip

.include <bsd.port.mk>
