# ifndef FORWARDTYPES_H
# define FORWARDTYPES_H

# ifndef NOLCL
# include "lclForwardTypes.h"
# endif

abst_typedef /*@dependent@*/ /*@null@*/ struct _sRef *sRef;
abst_typedef /*@null@*/ struct _uentry *uentry;
immut_typedef int typeIdSet;
typedef /*@only@*/ uentry o_uentry;
abst_typedef /*@null@*/ struct _idDecl *idDecl;
abst_typedef /*@null@*/ struct _usymtab  *usymtab;
abst_typedef /*@null@*/ struct _exprNode *exprNode;


abst_typedef /*@null@*/ struct _guardSet *guardSet;
abst_typedef /*@null@*/ struct _sRefSet *sRefSet;
abst_typedef /*@null@*/ struct _aliasTable *aliasTable;
abst_typedef /*@null@*/ struct __fileloc *fileloc;

abst_typedef /*@null@*/ struct _environmentTable *environmentTable;

abst_typedef /*@null@*/ struct _constraint *constraint;
abst_typedef struct _constraintList  *constraintList;


/* DRL modified 9 26 00 */

abst_typedef struct constraintExpr_ * constraintExpr;

/*@-cppnames@*/
typedef int bool;
/*@=cppnames@*/

abst_typedef /*@null@*/ char *cstring;
typedef /*@only@*/ cstring o_cstring;

immut_typedef int ctype;

/* sRef -> bool */
typedef bool (*sRefTest) (sRef);

/* sRef, fileloc -> void, modifies sRef */
typedef void (*sRefMod) (sRef, fileloc);

/* sRef -> void */
typedef void (*sRefShower) (sRef);

# else
# error "Multiple include"
# endif




