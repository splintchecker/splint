# ifndef LCL_FORWARDTYPES_H
# define LCL_FORWARDTYPES_H

typedef struct _termNode *termNode;
typedef /*@null@*/ struct _lclTypeSpecNode *lclTypeSpecNode;
abst_typedef struct _termNodeList *termNodeList;
typedef unsigned int sort;
typedef long unsigned lsymbol;
typedef struct _typeExpr *typeExpr;
abst_typedef /*@null@*/ struct _ltoken *ltoken;
typedef unsigned int ltokenCode;

# else
# error "Multiple include"
# endif
