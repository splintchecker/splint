LCLINT = lclint

all:
	-${LCLINT} -nolib +impconj ansi.h -dump ansi 
	-${LCLINT} -nolib +impconj -DSTRICT ansi.h -dump ansistrict
	-${LCLINT} -nolib +impconj ansi.h posix.h -dump posix
	-${LCLINT} -nolib +impconj -DSTRICT ansi.h posix.h -dump posixstrict
	-${LCLINT} -nolib +impconj ansi.h posix.h unix.h -dump unix
	-${LCLINT} -nolib +impconj -DSTRICT ansi.h posix.h unix.h -dump unixstrict

