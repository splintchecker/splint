typedef struct {
  int s;
} *sigNode;

typedef struct {
  int s;
} *nameNode;


typedef struct {
  int s;
} *typeNameNode;

typedef int ltoken;

typedef struct {
  ltoken tok;
  typeNameNode typename; 
  int isCType;
  union {
    struct { 
      /*@only@*/ /*@null@*/ nameNode name; 
      /*@only@*/ /*@null@*/ sigNode signature;
    } renamesortname;
    ltoken ctype; 
  } content;
} *replaceNode; 

/*@only@*/ replaceNode
makeReplaceNameNode (ltoken t, /*@only@*/ typeNameNode tn, /*@only@*/ nameNode nn)
{
  replaceNode r = (replaceNode) malloc (sizeof (*r));
  assert (r != NULL);
  r->tok = t;
  r->isCType = FALSE;
  r->typename = tn;
  r->content.renamesortname.name = nn;
  r->content.renamesortname.signature = (sigNode)NULL;
  
  return (r);
}
