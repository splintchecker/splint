all:
	lclint -nolib +impconj ansi.h -dump ansi 
	lclint -nolib +impconj -DSTRICT ansi.h -dump ansistrict
	lclint -nolib +impconj ansi.h posix.h -dump posix
	lclint -nolib +impconj -DSTRICT ansi.h posix.h -dump posixstrict
	lclint -nolib +impconj ansi.h posix.h unix.h -dump unix
	lclint -nolib +impconj -DSTRICT ansi.h posix.h unix.h -dump unixstrict

