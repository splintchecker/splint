/*
** Copyright (C) University of Virginia, Massachusetts Institue of Technology 1994-2000.
** See ../LICENSE for license information.
*/
# ifndef constraintLIST_H
# define constraintLIST_H

typedef /*@only@*/ constraint o_constraint;

abst_typedef struct _constraintList
{
  int nelements;
  int nspace;
  /*@reldef@*/ /*@relnull@*/ o_constraint  *elements;
} *constraintList;

/*@iter constraintList_elements (sef constraintList x, yield exposed constraint el); @*/
# define constraintList_elements(x, m_el) \
   { int m_ind; constraint *m_elements = &((x)->elements[0]); \
     for (m_ind = 0 ; m_ind < (x)->nelements; m_ind++) \
       { constraint m_el = *(m_elements++); 

# define end_constraintList_elements }}

extern /*@only@*/ constraintList constraintList_new(void);
extern constraintList constraintList_add (/*@returned@*/ constraintList p_s, /*@only@*/ constraint p_el) ;

extern constraintList constraintList_addList (/*@returned@*/ constraintList s, /*@only@*/constraintList new);


extern constraintList constraintList_copy (constraintList p_s);

//extern /*@only@*/ cstring constraintList_unparse (constraintList p_s) ;
extern void constraintList_free (/*@only@*/ constraintList p_s) ;


extern constraintList constraintList_copy (constraintList s);

extern cstring constraintList_print (constraintList s);

extern cstring
constraintList_printDetailed (constraintList s);


extern constraintList
constraintList_logicalOr (constraintList l1, constraintList l2);

extern constraintList constraintList_preserveOrig (constraintList c);

/*@constant int constraintListBASESIZE;@*/


# define constraintListBASESIZE SMALLBASESIZE

# else
# error "Multiple include"
# endif




