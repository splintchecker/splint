.PHONY: tainted file

LCLINT = lclint

all: file sockets struct nullbranch osd

file:
	${LCLINT} -mts file file1.c -expect 4
	${LCLINT} -mts file file2.c -varuse -fcnuse -expect 2
	${LCLINT} -mts file file3.c -varuse -fcnuse -expect 2
	${LCLINT} -mts file file4.c -varuse -fcnuse -exportlocal -expect 1 
	${LCLINT} -mts file file5.c -varuse -fcnuse -exportlocal -expect 5
	${LCLINT} -mts file file6.c -varuse -fcnuse -exportlocal -expect 2
	${LCLINT} -mts file filebad.c -expect 3

sockets:
	${LCLINT} sockets.mts sockets.c -expect 3
	${LCLINT} sockets.mts sockets2.c -expect 2

struct:
	${LCLINT} -mts file struct.c -expect 1

nullbranch:
	${LCLINT} -mts file nullbranch.c -expect 2

osd:
	${LCLINT} -mts file osd.c -expect 2
