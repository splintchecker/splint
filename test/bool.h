#ifndef BOOL_H
#define BOOL_H

/*@-cppnames@*/
/*@-exporttype@*/
typedef int bool;
/*@=exporttype@*/
/*@=cppnames@*/

#ifndef FALSE
/*@constant unused bool FALSE@*/
#define FALSE 0
#endif

#ifndef TRUE
/*@constant unused bool TRUE@*/
#define TRUE (! FALSE)
#endif

/*@-slovakfcns@*/
extern void bool_initMod (void);
# define bool_initMod()

extern /*@observer@*/ char *bool_unparse (bool);
# define bool_unparse(b) ((b) ? "true" : "false" )

extern bool bool_not (bool);
# define bool_not(b) ((b) ? FALSE : TRUE)

extern bool bool_equal (bool, bool);
# define bool_equal(a,b) ((a) ? (b) : !(b))
/*@=slovakfcns@*/

# endif
