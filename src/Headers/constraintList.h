/*
** Copyright (C) University of Virginia, Massachusetts Institue of Technology 1994-2000.
** See ../LICENSE for license information.
*/
# ifndef constraintLIST_H
# define constraintLIST_H

typedef /*@only@*/ /*@notnull@*/ constraint o_constraint;

struct _constraintList
{
  int nelements;
  int nspace;
  /*@reldef@*/ /*@relnull@*/ o_constraint  *elements;
} ;

/*@constant null constraintList constraintList_undefined;@*/

# define constraintList_undefined ((constraintList)NULL)

extern /*@falsenull@*/ bool constraintList_isDefined (constraintList p_e) /*@*/ ;
extern /*@unused@*/ /*@truenull@*/ bool constraintList_isUndefined (constraintList p_e) /*@*/ ;
extern /*@truenull@*/ /*@unused@*/ bool constraintList_isError (constraintList p_e) /*@*/ ;

# define constraintList_isDefined(e)    ((e) != constraintList_undefined)
# define constraintList_isUndefined(e)  ((e) == constraintList_undefined)
# define constraintList_isError(e)      ((e) == constraintList_undefined)



/*@iter constraintList_elements (sef constraintList x, yield exposed constraint el); @*/
# define constraintList_elements(x, m_el) \
   { int m_ind; constraint *m_elements = &((x)->elements[0]); \
     for (m_ind = 0 ; m_ind < (x)->nelements; m_ind++) \
       { constraint m_el = *(m_elements++); 

# define end_constraintList_elements }}

extern /*@only@*/ constraintList constraintList_makeNew(void) /*@*/;
extern constraintList constraintList_add (/*@returned@*/ constraintList p_s, /*@only@*/ constraint p_el) /*@modifies p_s@*/ ;

extern constraintList constraintList_addList (/*@returned@*/ constraintList p_s, /*@only@*/constraintList new) /*@modifies p_s@*/  ;


extern constraintList constraintList_copy ( /*@observer@*/ constraintList p_s) /*@*/ ;

//extern /*@only@*/ cstring constraintList_unparse ( /*@observer@*/ constraintList p_s) ;
extern void constraintList_free (/*@only@*/ constraintList p_s) ;




extern cstring constraintList_print ( /*@observer@*/ constraintList s) /*@*/;

extern cstring
constraintList_printDetailed ( /*@observer@*/ constraintList s) /*@*/;


extern /*@only@*/ constraintList
constraintList_logicalOr ( /*@observer@*/ constraintList l1, /*@observer@*/  constraintList l2);

extern constraintList constraintList_preserveOrig (/*@returned@*/ constraintList c);

/*@constant int constraintListBASESIZE;@*/

# define constraintListBASESIZE SMALLBASESIZE


/*@unused@*/ extern  /*@only@*/ constraintList constraintList_doSRefFixBaseParam (constraintList preconditions, exprNodeList arglist) /*@modifies preconditions@*/;

extern constraintList constraintList_togglePost (/*@returned@*/ constraintList c) /*@modifies c@*/;

extern  /*@only@*/ constraintList constraintList_doSRefFixConstraintParam ( /*@only@*/ constraintList preconditions, exprNodeList arglist) /*@modifies preconditions@*/;

extern constraintList getPostConditions (exprNode fcn, exprNodeList arglist, exprNode fcnCall) /*@*/;

/*@only@*/ constraintList constraintList_doFixResult ( /*@only@*/ constraintList postconditions, exprNode fcnCall) /*@modifies postconditions@*/;

constraintList constraintList_addGeneratingExpr (/*@returned@*/ constraintList c, exprNode e) /*@modifies c@*/;

# else
# error "Multiple include"
# endif




