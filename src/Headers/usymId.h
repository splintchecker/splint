# ifndef USYMID_H
# define USYMID_H

/*@i32 make them abstract/? */
typedef int usymId;
typedef usymId typeId;

extern bool usymId_equal (usymId p_u1, usymId p_u2) /*@*/ ;
# define usymId_equal(u1,u2) ((u1) == (u2))

/*@constant usymId USYMIDINVALID;@*/
# define USYMIDINVALID -17

/*@constant typeId typeId_invalid;@*/
# define typeId_invalid USYMIDINVALID

# else
# error "Multiple include"
# endif
