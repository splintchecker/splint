.PHONY: emptycase enumtest duffs bitfields bugs tests hexconstants innercomment nothing offsetof komazi print syslog error ulrich cpptest longlong subdir fink driverstub alignof source emptycase enumtest duffs bitfields bugs tests hexconstants innercomment nothing offsetof komazi print syslog error ulrich cpptest longlong subdir fink driverstub alignof source

LCLINT = lclint

all: emptycase enumtest duffs bitfields bugs tests hexconstants innercomment nothing offsetof komazi print syslog error ulrich cpptest longlong subdir fink driverstub alignof source emptycase enumtest duffs bitfields bugs tests hexconstants innercomment nothing offsetof komazi print syslog error ulrich cpptest longlong subdir fink driverstub alignof source

emptycase:
	$(LCLINT) emptycase.c 

enumtest:
	$(LCLINT) enumtest.c -expect 2

duffs:
	$(LCLINT) duffs.c -expect 7

bitfields:
	$(LCLINT) bitfields.c

bugs:
	$(LCLINT) bug1.c ; \
	$(LCLINT) bug2.c -expect 5 ; \
	$(LCLINT) bug3.c -expect 3

tests:
	$(LCLINT) test0.c ; \
	$(LCLINT) test1.c ; \
	$(LCLINT) test2.c 

hexconstants:
	$(LCLINT) hexconstants.c -expect 1 ; \
	$(LCLINT) +checks hexconstants.c -expect 4

innercomment:
	$(LCLINT) innercomment.c 

nothing:
	$(LCLINT) nothing.c 

offsetof:
	$(LCLINT) offsetof.c -expect 2 

komazi:
	$(LCLINT) komazi.c 

print:
	$(LCLINT) print.c 

syslog:
	$(LCLINT) syslog.c -warnunixlib +unixlib 

error:
	$(LCLINT) error.c -expect 1 

ulrich:
	$(LCLINT) ulrich.c -expect 1

cpptest:
	$(LCLINT) cpptest.c '-D__P(x)=x' -expect 1

longlong:
	$(LCLINT) longlong.c -expect 4

subdir:
	$(LCLINT) subdir/main.c subdir/main.lcl

fink:
	$(LCLINT) fink.c 

driverstub:
	$(LCLINT) driverstub.c

alignof:
	$(LCLINT) alignof.c -expect 2

source:
	$(LCLINT) -D DBL_MANT_DIG=25 source.c
