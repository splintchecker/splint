.PHONY: check

LCLINT = lclint -exportlocal
 
check:
	$(LCLINT) +arraybounds maxsetannotations.c
	$(LCLINT) +arraybounds maxsetnoannotations.c -expect 1
