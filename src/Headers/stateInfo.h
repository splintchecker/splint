/*
** Copyright (C) University of Virginia, Massachusetts Institue of Technology 1994-2001.
** See ../LICENSE for license information.
*/
/*
** stateInfo.h
*/

# ifndef STATEINFO_H
# define STATEINFO_H

typedef /*@null@*/ struct s_stateInfo *stateInfo ;


/*@null@*/ struct s_stateInfo
{
  /*@only@*/ fileloc  loc;
  /*@observer@*/ sRef ref;
  /*@null@*/ stateInfo previous;
} ;

/*@constant null stateInfo stateInfo_undefined@*/
# define stateInfo_undefined (NULL)

extern /*@falsewhennull@*/ bool stateInfo_isDefined (stateInfo p_s) /*@*/ ;
# define stateInfo_isDefined(p_s) ((p_s) != stateInfo_undefined)

extern void stateInfo_free (/*@only@*/ stateInfo p_a);

extern /*@only@*/ stateInfo stateInfo_update (/*@only@*/ stateInfo p_old, stateInfo p_newinfo);

extern /*@only@*/ stateInfo stateInfo_updateLoc (/*@only@*/ stateInfo p_old, fileloc p_loc) ;

extern /*@only@*/ stateInfo 
    stateInfo_updateRefLoc (/*@only@*/ stateInfo p_old, /*@exposed@*/ sRef p_ref, fileloc p_loc) ;

extern /*@only@*/ stateInfo stateInfo_copy (stateInfo p_a); 

extern /*@only@*/ /*@notnull@*/ stateInfo stateInfo_currentLoc (void) ;
extern /*@only@*/ /*@notnull@*/ stateInfo stateInfo_makeLoc (fileloc p_loc) ;
extern /*@only@*/ stateInfo stateInfo_makeRefLoc (/*@exposed@*/ sRef p_ref, fileloc p_loc) ;

extern /*@observer@*/ fileloc stateInfo_getLoc (stateInfo p_info) ;
extern /*@only@*/ cstring stateInfo_unparse (stateInfo p_s) /*@*/ ;

extern void stateInfo_display (stateInfo p_s, /*@only@*/ cstring p_sname) /*@modifies g_errorstream@*/ ;

# else
# error "Multiple include"
# endif
