.PHONY: check

SPLINT = splint -exportlocal
 
check:
	$(SPLINT) +arraybounds maxsetannotations.c
	$(SPLINT) +arraybounds maxsetnoannotations.c -expect 1
