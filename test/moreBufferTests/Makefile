.PHONY: check

SPLINT = splint
 
check:
	$(SPLINT) -exportlocal +arraybounds +arrayboundsread unrecogCall.c strrchr.c initialization.c simplifyTest.c strncatNotReallyGood.c strncatReallyGood.c -expect 8

