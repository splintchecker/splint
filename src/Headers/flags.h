/*
** Copyright (C) University of Virginia, Massachusetts Institue of Technology 1994-2000.
** See ../LICENSE for license information.
**
*/
# ifndef FLAGS_H
# define FLAGS_H


typedef enum 
{
  FK_ABSTRACT, FK_ANSI, FK_BEHAVIOR, 
  FK_COMMENTS, FK_COMPLETE, FK_CONTROL, FK_DEBUG, FK_DECL,
  FK_DEF, FK_DIRECT, FK_DISPLAY, FK_EFFECT, FK_EXPORT,
  FK_EXPOSURE, FK_FORMAT, FK_GLOBAL, FK_GLOBALS, FK_HEADERS,
  FK_HELP, FK_IGNORERET, FK_INIT, FK_ITER, FK_LIBS, FK_LIMITS,
  FK_MACROS, FK_MEMORY, FK_MODIFIES, FK_NAMES, FK_NONE,
  FK_NULL, FK_NT, FK_OPS, FK_PRED, FK_PREPROC, FK_SECRET,
  FK_SUPPRESS, FK_SYNTAX, FK_TYPE, FK_TYPEEQ, FK_NUMBERS, 
  FK_POINTER, FK_UNRECOG, FK_USE, FK_BOOL, FK_ALIAS, 
  FK_PROTOS, FK_SPEC, 
  FK_IMPLICIT, FK_FILES, FK_ERRORS, FK_UNSPEC, 
  FK_SPEED, FK_PARAMS, FK_DEAD, 
  FK_LEAK, FK_ARRAY, FK_OBSOLETE, FK_PREFIX
} flagkind;

extern void listAllCategories (void);
extern void printAlphaFlags (void);
extern void printAllFlags (bool p_desc, bool p_full);

extern void flagcode_recordError (flagcode p_f);
extern void flagcode_recordSuppressed (flagcode p_f);
extern int flagcode_numReported (flagcode p_f);
extern bool flagcode_isNamePrefixFlag (flagcode p_f);

extern /*@only@*/ cstring  describeFlag (cstring p_flagname);
extern flagcode identifyFlag (cstring p_s);
extern void setValueFlag (flagcode p_opt, cstring p_arg);
extern void setStringFlag (flagcode p_opt, /*@only@*/ cstring p_arg);

extern /*@observer@*/ cstring flagcode_name (flagcode p_code) /*@*/ ;
extern int flagcode_valueIndex (flagcode p_f) /*@*/ ;
extern int flagcode_stringIndex (flagcode p_f) /*@*/ ;
extern /*@observer@*/ cstring flagcode_unparse (flagcode p_f) /*@*/ ;
# define flagcode_unparse flagcode_name

extern /*@observer@*/ cstring flagcodeHint (flagcode p_f);

extern flagkind identifyCategory (cstring p_s) /*@*/ ;
extern void printCategory (flagkind p_kind) /*@modifies g_msgstream@*/ ;

extern bool flagcode_isInvalid (flagcode p_f);
# define flagcode_isInvalid(f) ((f) == INVALID_FLAG)

extern bool flagcode_isSkip (flagcode p_f);
# define flagcode_isSkip(f) ((f) == SKIP_FLAG)

extern bool flagcode_isValid (flagcode p_f);
# define flagcode_isValid(f) ((f) != INVALID_FLAG)

extern bool flagcode_isPassThrough (/*@sef@*/ flagcode p_f);
# define flagcode_isPassThrough(f) ((f) == FLG_DEFINE || (f) == FLG_UNDEFINE)

extern bool flagcode_isLibraryFlag (/*@sef@*/ flagcode p_f);
# define flagcode_isLibraryFlag(f) \
   ((f) == FLG_POSIXLIB || (f) == FLG_POSIXSTRICTLIB \
    || (f) == FLG_UNIXLIB || (f) == FLG_UNIXSTRICTLIB \
    || (f) == FLG_STRICTLIB || (f) == FLG_NOLIB \
    || (f) == FLG_ANSILIB)

extern bool flagcode_hasValue (flagcode p_f);
extern bool flagcode_hasString (flagcode p_f);
extern bool flagcode_hasArgument (flagcode p_f);

/*@constant observer cstring DEFAULT_MODE;@*/
# define DEFAULT_MODE (cstring_makeLiteralTemp ("standard"))

extern void flags_initMod (void);

extern bool isMode (cstring p_s);
extern /*@only@*/ cstring describeModes (void);
extern void summarizeErrors (void);

extern bool flagcode_isNameChecksFlag (flagcode p_f);
extern bool flagcode_isIdemFlag (flagcode p_f);
extern bool flagcode_isModeFlag (flagcode p_f);
extern bool flagcode_isSpecialFlag (flagcode p_f);
extern bool flagcode_isGlobalFlag (flagcode p_f);

# else
# error "Multiple include"
# endif













