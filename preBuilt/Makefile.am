## Note: starting comments with ## means they don't end up in Makefile

AUTOMAKE_OPTIONS = 1.5 foreign

SUFFIXES = .h .c .o .l .check

# Check files before compiling; requires splint!
CHECK = 1

# Some preferences
### We use the no-lines option to prevent confusion with splint flag settings.
### Should fix splint to avoid this...
YFLAGS = -v -t -d --debug --no-lines
LFLAGS = -L


## We only build Splint
bin_PROGRAMS = splint

.PHONY: all

EXTRA_DIST = splint

DIST_SOURCES =

#chessy hack so it doesn't try to build splint
splint$(EXEEXT): ;

#don't delete ./splint
clean: ;

