PORTNAME=	g15daemon
PORTVERSION=	3.0.2
CATEGORIES=	sysutils
MASTER_SITES=	https://gitlab.com/menelkir/${PORTNAME}/-/archive/${PORTVERSION}/

MAINTAINER=	menelkir@itroll.org
COMMENT=	Daemon for use the G-Buttons and draw on the G15 LCD

LICENSE=	GPLv2

LIB_DEPENDS+=	libg15.so:sysutils/libg15 \
		libg15render.so:sysutils/libg15render \
		libinput.so:x11/libinput

USES=		compiler:gcc-c++11-lib gmake localbase libtool

USE_LDCONFIG=	yes

GNU_CONFIGURE=	yes
CONFIGURE_ARGS+=	--sysconfdir=${LOCALBASE}/etc

CFLAGS+=	-fcommon

USE_RC_SUBR=	g15daemon

INSTALL_TARGET=	install-strip

.include <bsd.port.mk>
