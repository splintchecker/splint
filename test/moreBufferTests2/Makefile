.PHONY: check

#SPLINT = splint
 
check:
	$(SPLINT) -exportlocal +bounds unknownsize.c arrayConstExpr.c -expect 1
	$(SPLINT) -exportlocal +bounds fixedArrayType.c -expect 1

