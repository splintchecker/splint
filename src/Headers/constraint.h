typedef enum
{
  LT, LTE, GT, GTE, EQ, NONNEGATIVE, POSITIVE
}
arithType;

typedef enum
{
 BUFFSIZE, STRINGLEN, VALUE
}
constraintType;

typedef struct constraint {
  exprNode expr1;
  exprNode expr2;
  arithType restriction;
  constraintType kind;  
} constraint;


#define max_constraints 10

struct _constraintList {
  constraint constraints[max_constraints];
  int numconstraints;
} ;

typedef struct _constraintList *constraintList;
typedef struct _constraintList constraintList_;

/*@constant null constraintList constraintList_undefined; @*/
# define constraintList_undefined      ((constraintList) NULL)
# define constraintList_isDefined(s)   ((s) != constraintList_undefined)
# define constraintList_isUndefined(s) ((s) == constraintList_undefined)
//# define constraintList_isEmpty(s)     (constraint_size(s) == 0)

constraintList constraintList_new ();
constraintList constraintList_init (constraintList);
constraintList constraintList_add (constraintList, constraint);
constraintList constraintList_merge (constraintList, constraintList);
constraintList constraintList_exprNodemerge (exprNode, exprNode);

void constraintList_print (constraintList);

constraint constraint_create (exprNode e1, exprNode e2,  arithType restriction, constraintType kind);
extern  cstring exprNode_generateConstraints (exprNode e);
