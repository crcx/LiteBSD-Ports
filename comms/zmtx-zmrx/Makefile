# zmtx-zmrx Makefile
V= 1.02
PORT= zmtx-zmrx
MAN1= zmrx.0 zmtx.0
CLEANFILES+=*.o zmrx zmtx

CFLAGS+= -DSUNOS4 -ffunction-sections -fdata-sections
LDFLAGS+= -Wl,--gc-sections -s

all:	zmtx zmrx

zmtx:	zmtx.o zmdm.o crctab.o
	$(CC) $(CFLAGS) $(LDFLAGS) -o zmtx zmtx.o zmdm.o crctab.o -lc -lgcc

zmrx:	zmrx.o zmdm.o crctab.o
	$(CC) $(CFLAGS) $(LDFLAGS) -o zmrx zmrx.o zmdm.o crctab.o -lc -lgcc

do-install:
	nroff -man zmrx.1 > zmrx.0
	nroff -man zmtx.1 > zmtx.0
	install -d ${DESTDIR}${PREFIX}/bin
	install -d ${DESTDIR}${PREFIX}/man/man1
	install -c -m 555 zmrx ${DESTDIR}${PREFIX}/bin
	install -c -m 555 zmtx ${DESTDIR}${PREFIX}/bin
	install -c -m 444 zmrx.0 ${DESTDIR}${PREFIX}/man/man1
	install -c -m 444 zmtx.0 ${DESTDIR}${PREFIX}/man/man1

.include <bsd.port.mk>
