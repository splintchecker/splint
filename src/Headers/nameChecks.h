/*
** Copyright (C) University of Virginia, Massachusetts Institue of Technology 1994-2000.
** See ../LICENSE for license information.
**
*/

# ifndef NAMECHECKS_H
# define NAMECHECKS_H

extern bool checkCppName (cstring p_name, fileloc p_loc) /*@modifies g_msgstream@*/ ;
extern void checkGlobalName (uentry p_ue);
extern void checkLocalName (uentry p_ue);
extern void checkPrefix (uentry p_ue);
extern bool checkAnsiName (cstring p_name, fileloc p_loc);
extern void checkParamNames (uentry p_ue) /*@modifies g_msgstream@*/ ;

# else
# error "Multiple include"
# endif
