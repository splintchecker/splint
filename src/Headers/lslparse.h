/*
** Copyright (C) University of Virginia, Massachusetts Institue of Technology 1994-2000.
** See ../LICENSE for license information.
**
*/
/*
** lslparse.h
*/

extern /*@dependent@*/ /*@null@*/ lslOp g_importedlslOp;
extern bool g_lslParsingTraits;

/*@-namechecks@*/
extern int lsldebug; /* defined by bison (not a bool) */
/*@=namechecks@*/

extern lsymbol processTraitSortId (lsymbol p_sortid); 
extern int parseSignatures (cstring p_infile);
extern /*@only@*/ lslOp parseOpLine (char *p_fname, char *p_line);
extern void readlsignatures (interfaceNode p_n);
extern void callLSL (char *p_specfile, /*@only@*/ char *p_text);
