/*
** Copyright (C) University of Virginia, Massachusetts Institue of Technology 1994-2001.
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
extern int parseSignatures (/*@only@*/ cstring p_infile);
extern /*@only@*/ lslOp parseOpLine (cstring p_fname, cstring p_line);
extern void readlsignatures (interfaceNode p_n);
extern void callLSL (cstring p_specfile, /*@only@*/ cstring p_text);
