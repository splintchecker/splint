/*
** Copyright (C) University of Virginia, Massachusetts Institue of Technology 1994-2000.
** See ../LICENSE for license information.
**
*/

# ifndef BASIC_H
# define BASIC_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <ctype.h>
# include <float.h>
# include "general.h"
# include "ynm.h"
# include "message.h" 
# include "fileloc.h"
# include "globals.h"
# include "qual.h"
# include "lltok.h"
# include "clause.h"
# include "cstringSList.h"
# include "cstringList.h"
# include "flag_codes.h"
# include "flags.h"
# include "llerror.h" 
# include "source.h"
# include "qualList.h"

# ifndef NOLCL
# include "code.h"
# include "mapping.h"
# include "sort.h"
# include "lclctypes.h"
# include "paramNode.h"
# include "paramNodeList.h"
# include "lsymbol.h"
# include "abstract.h"
# include "symtable.h"
# endif

# include "exprNodeList.h"
# include "cprim.h"
# include "hashTable.h"
# include "filelocList.h"
# include "enumNameList.h"
# include "enumNameSList.h"
# include "varKinds.h"
# include "sRefSet.h"
# include "ekind.h"
# include "usymIdSet.h"
# include "uentryList.h"
# include "globSet.h"
# include "ctypeList.h"
# include "aliasTable.h"
# include "usymtab.h"
# include "lctype.h"
# include "qtype.h"
# include "idDecl.h"
# include "multiVal.h"
# include "specialClauses.h"
# include "uentry.h"
# include "sRef.h"
# include "guardSet.h"
# include "constraint.h"
# include "exprNode.h"
# include "exprData.h"
# include "typeIdSet.h"
# include "idDeclList.h"
# include "clabstract.h"
# include "sRefSetList.h"
# include "flagMarker.h"
# include "flagMarkerList.h"
# include "macrocache.h"
# include "fileTable.h"
# include "messageLog.h"
# include "clauseStack.h"
# include "context.h"
# include "constants.h"
# include "local_constants.h"


# else
# error "Multiple include"
# endif

