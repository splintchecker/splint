.PHONY: filerw fileopen

LCLINT = lclint

all: filerw fileopen

filerw:
	${LCLINT} -mts file -mts filerw filerw.c -expect 3

fileopen:
	${LCLINT} -mts file -mts filerw file.c -expect 3

