.PHONY: boolt testalt booltest boolbad hoof testalt uconstants ull baz

LCLINT = lclint

# ull and baz added after 2.5q
all: testalt boolt uconstants badcomment hoof boolbad booltest ull baz immutable impabsmodule

testalt:
	${LCLINT} -dump newlint.lcd testalt.c

boolt:
	${LCLINT} -expect 1 +partial +booltype pan_bool_t +booltrue PAN_TRUE +boolfalse PAN_FALSE boolt.c

uconstants:
	${LCLINT} uconstants.c -expect 2

badcomment:
	${LCLINT} badcomment.c -expect 3

hoof:
	${LCLINT} hoof.c -expect 1
	${LCLINT} hoof.c +ignorequals

ignorecmd:
	${LCLINT} +ignorecommand -we

booltest:
	${LCLINT} booltest.c -booltype bool -expect 2
	${LCLINT} booltest.c -booltype bool +boolint
	${LCLINT} booltest.c -booltype bool -predboolint -expect 1

boolbad:
	${LCLINT} -weak -booltype BOOLEAN boolbad.c


ull:
	${LCLINT} ull.c

baz:
	${LCLINT} baz.h bimbim.h -I.

immutable:
	${LCLINT} immutable.c testimmutable.c -expect 2

impabsmodule:
	${LCLINT} +impabstract impabsmodule.c -expect 2
