/*
** constraintList.c
*/

# include <ctype.h> /* for isdigit */
# include "lclintMacros.nf"
# include "basic.h"
# include "cgrammar.h"
# include "cgrammar_tokens.h"

# include "exprChecks.h"
# include "aliasChecks.h"
# include "exprNodeSList.h"
# include "exprData.i"

/*@i33*/
/*@-fcnuse*/

/*@notnull@*/ constraintList constraintList_new () {
constraintList ret;

ret = dmalloc ( sizeof (*ret) );
llassert ( ret != NULL);
 
ret->numconstraints = 0;
/*@i22@*/ret->constraints = dmalloc (INITIALCONSTRAINTLISTSIZE * sizeof (constraint) ); 
ret->size = INITIALCONSTRAINTLISTSIZE; 
return ret; 
}

void exprNode_printfileloc (exprNode e)
{
  DPRINTF ((" %q ", fileloc_unparse (exprNode_getfileloc (e) ) ) );
}

void constraintList_debugPrint ( char * s )
{
  DPRINTF((s) );
}

void constraintList_print (constraintList cl)
{

  int i;
  if (constraintList_isUndefined (cl) )
    {
      constraintList_debugPrint("Constraint List undefined\n");
      return;
    }
  for (i = 0; i < cl->numconstraints; i++)
    {
      constraint_print (cl->constraints[i]);
    }

}
    
void constraintList_resolve (constraintList cl)
{
  int i;
  if (constraintList_isUndefined (cl) )
    {
       constraintList_debugPrint("Constraint List empty \n");
      return;
    }
   for (i = 0; i < cl->numconstraints; i++)
    {
       constraintList_debugPrint("Trying to resolve:\n");
      constraint_print (cl->constraints[i]);
      if ( constraint_resolve (cl->constraints[i] ) )
	 constraintList_debugPrint ("resolve sucessfully\n");
      else
	 constraintList_debugPrint ("not resolved sucessfully\n");
	
    }
}
constraintList  constraintList_get (exprNode e1 )
{
  return e1->constraints;
}

constraintList constraintList_exprNodemerge (exprNode e1, exprNode e2)
{
  constraintList ret;
  if ( (e1 != NULL) && (e2 != NULL) )
    {
      ret = constraintList_merge (e1->constraints, e2->constraints);
    }
  else if ( (e1 == NULL) && (e2 == NULL) )
    ret = constraintList_merge ( (constraintList)NULL,  (constraintList)NULL );
  else if (e1 == NULL)
    ret = constraintList_merge ( (constraintList)NULL, e2->constraints);
  else
    ret = constraintList_merge (e1->constraints, (constraintList)NULL );
  return ret;
}


constraintList constraintList_merge (constraintList cl1, constraintList cl2)
{
  constraintList ret;
  int i;
  ret = constraintList_undefined; 
  if  (constraintList_isDefined (cl1) )
    {
      for (i = 0; i < cl1->numconstraints; i++)
	{
	  ret = constraintList_add (ret, cl1->constraints[i]);
	}
    }
  if  (constraintList_isDefined (cl2) )
    {
      for (i = 0; i < cl2->numconstraints; i++)
	{
	  ret = constraintList_add (ret, cl2->constraints[i]);
	}
    }
  return ret;


}

constraintList constraintList_add (constraintList constraints, constraint newconstr)
{
  constraintList ret;
  
  if (  constraintList_isUndefined(constraints) )
    {
      ret = constraintList_new ();
    }
  else
    {
      ret = constraints;
    }
  
  llassert (constraintList_isDefined (ret) );
  
  
  ret->constraints[ret->numconstraints] = newconstr;
  
  ret->numconstraints++;
  if (ret->numconstraints == ret->size)
    {
      ret->constraints = realloc (ret->constraints, sizeof (constraint) * (ret->size*2) );
      ret->size *= 2;
    }
  return ret;
  
}
/*@=fcnuse*/
