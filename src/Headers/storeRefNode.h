/*
** Copyright (C) University of Virginia, Massachusetts Institue of Technology 1994-2000.
** See ../LICENSE for license information.
*/

typedef enum {
  SRN_TERM, SRN_TYPE, SRN_OBJ, SRN_SPECIAL
  } storeRefNodeKind;

typedef struct _storeRefNode {
  storeRefNodeKind kind;
  union {
    struct _termNode *term;         /* for SRN_TERM */
    lclTypeSpecNode type;  /* for SRN_OBJ and SRN_TYPE */
    sRef ref;                       /* for SRN_SPECIAL */
  } content;
} *storeRefNode;

extern storeRefNode storeRefNode_copy (storeRefNode p_x);

extern bool storeRefNode_isTerm (storeRefNode p_x);
# define storeRefNode_isTerm(x) ((x)->kind == SRN_TERM)

extern bool storeRefNode_isObj (storeRefNode p_x);
# define storeRefNode_isObj(x) ((x)->kind == SRN_OBJ)

extern bool storeRefNode_isType (storeRefNode p_x);
# define storeRefNode_isType(x) ((x)->kind == SRN_TYPE)

extern bool storeRefNode_isSpecial (storeRefNode p_x);
# define storeRefNode_isSpecial(x) ((x)->kind == SRN_SPECIAL)

extern void storeRefNode_free (/*@only@*/ /*@null@*/ storeRefNode p_x);
