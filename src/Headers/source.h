/*
** Copyright (C) University of Virginia, Massachusetts Institue of Technology 1994-2000.
** See ../LICENSE for license information.
*/
/*
** source.h
*/

# ifndef TSOURCE_H
# define TSOURCE_H

/*@constant int STUBMAXRECORDSIZE; @*/
# define STUBMAXRECORDSIZE 800

typedef struct {
    char	*name;
    /*@dependent@*/ /*@null@*/ FILE *file;
    char	 buffer[STUBMAXRECORDSIZE+1];
    unsigned int lineNo;
    bool	 echo, fromString;
    /*@owned@*/ /*@null@*/ char *stringSource;
    /*@null@*/ /*@dependent@*/ char *stringSourceTail;
} tsource; /* renamed from "source" to avoid cc parse bug on lex.yy.c */

extern void tsource_free (/*@null@*/ /*@only@*/ tsource *p_s);
extern bool tsource_close (tsource *p_s) 
   /*@modifies *p_s, fileSystem@*/ ; 
extern tsource *
  tsource_create (/*@temp@*/ char *p_name, char *p_suffix, bool p_echo) /*@*/ ;
extern tsource *tsource_fromString (char *p_name, char *p_str) /*@*/ ;
extern /*@dependent@*/ /*@null@*/ char *tsource_nextLine(tsource *p_s) 
   /*@modifies *p_s@*/ ;
extern bool tsource_open (tsource *p_s) /*@modifies p_s, fileSystem@*/ ;
extern bool tsource_getPath (char *p_path, tsource *p_s)
   /*@modifies *p_s@*/ ;

# ifndef NOLCL
extern /*@observer@*/ char *tsource_fileName (tsource *p_s) /*@*/ ;
# define tsource_fileName(pS) ((pS)->name)

extern bool tsource_isOpen (/*@sef@*/ tsource *p_s) /*@*/ ;
# define tsource_isOpen(pS)  ((pS)->file != 0 || (pS)->fromString)

extern unsigned int tsource_thisLineNumber(tsource *p_s) /*@*/ ;
# define tsource_thisLineNumber(pS)	((pS)->lineNo)

extern char *specFullName (char *p_specfile, /*@out@*/ char **p_inpath) 
   /*@modifies *p_inpath@*/ ;

# endif

# else
# error "Multiple include"
# endif





