all:
	-../bin/lclint -nolib +impconj ansi.h -dump ansi 
	-../bin/lclint -nolib +impconj -DSTRICT ansi.h -dump ansistrict
	-../bin/lclint -nolib +impconj ansi.h posix.h -dump posix
	-../bin/lclint -nolib +impconj -DSTRICT ansi.h posix.h -dump posixstrict
	-../bin/lclint -nolib +impconj ansi.h posix.h unix.h -dump unix
	-../bin/lclint -nolib +impconj -DSTRICT ansi.h posix.h unix.h -dump unixstrict

