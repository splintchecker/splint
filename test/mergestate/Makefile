.PHONY: tainted 

LCLINT = lclint

all: tainted 

tainted:
	${LCLINT} -mts taintednm taintednm.c -mustfree -exportlocal -expect 2
	${LCLINT} -mts tainted taintednm.c -mustfree -exportlocal -expect 4
