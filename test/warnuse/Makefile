.PHONY: warnuse

LCLINT = lclint

all: warnuse warngets

warnuse:
	${LCLINT} warnuse.c -expect 4
	${LCLINT} warnuse.c -warnuse -expect 1
	${LCLINT} warnuse.c -warnuse +bufferoverflow -expect 1
	${LCLINT} warnuse.c -bufferoverflow -expect 2

warngets:
	${LCLINT} warngets.c -expect 1
