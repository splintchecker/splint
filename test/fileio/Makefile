.PHONY: filerw fileopen

LCLINT = lclint

all: filerw fileopen filebranch

filerw:
	${LCLINT} -mts file -mts filerw filerw.c -expect 3

fileopen:
	${LCLINT} -mts file -mts filerw file.c -expect 3

filebranch:
	${LCLINT} -mts file filebranch.c
