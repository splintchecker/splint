/*
** Copyright (C) University of Virginia, Massachusetts Institue of Technology 1994-2000.
** See ../LICENSE for license information.
**
*/
/*
** fileTable.h
*/

# ifndef FILETABLE_H
# define FILETABLE_H

/*@constant int FTBASESIZE; @*/
# define FTBASESIZE 64

/* moved to fileloc.h
**    typedef int fileId;
*/

typedef enum { FILE_NORMAL, FILE_LSLTEMP, FILE_NODELETE,
	       FILE_HEADER, FILE_MACROS } fileType;

typedef struct _ftentry
{
  bool     ftemp     BOOLBITS;
  bool     fsystem   BOOLBITS;
  bool     fspecial  BOOLBITS;
  cstring  fname;
  cstring  basename;
  fileType ftype;
  fileId   fder;
} *ftentry;

typedef /*@only@*/ ftentry o_ftentry;

abst_typedef /*@null@*/ struct _fileTable
{
  int nentries;
  int nspace;
  hashTable htable;
  /*@reldef@*/ /*@only@*/ o_ftentry *elements;
} *fileTable ;

/*@constant null fileTable fileTable_undefined; @*/
# define fileTable_undefined ((fileTable) NULL)

extern /*@unused@*/ /*@truenull@*/ bool 
  fileTable_isUndefined (/*@null@*/ fileTable p_f) /*@*/ ;
extern /*@unused@*/ /*@falsenull@*/ bool 
  fileTable_isDefined (/*@null@*/ fileTable p_f) /*@*/ ;

# define fileTable_isUndefined(ft) ((ft) == fileTable_undefined)
# define fileTable_isDefined(ft) ((ft) != fileTable_undefined)
extern /*@observer@*/ cstring fileTable_getName (fileTable p_ft, fileId p_fid) /*@*/ ; 
extern /*@observer@*/ cstring fileTable_getNameBase (fileTable p_ft, fileId p_fid) ; 
extern fileId fileTable_addFile (fileTable p_ft, cstring p_name)
   /*@modifies p_ft@*/ ;
extern fileId fileTable_addHeaderFile (fileTable p_ft, cstring p_name)
   /*@modifies p_ft@*/ ;
extern fileId fileTable_addLibraryFile (fileTable p_ft, cstring p_name)
   /*@modifies p_ft@*/ ;

# ifndef NOLCL
extern fileId fileTable_addLCLFile (fileTable p_ft, cstring p_name)
   /*@modifies p_ft@*/ ;

extern fileId fileTable_addltemp (fileTable p_ft);

# endif

extern /*@notnull@*/ /*@only@*/ fileTable fileTable_create (void) /*@*/ ;
extern fileId fileTable_lookup (fileTable p_ft, cstring p_s) /*@*/ ;
extern fileId fileTable_addCTempFile (fileTable p_ft, fileId p_fid)
   /*@modifies p_ft@*/ ;
extern fileId fileTable_addFileOnly (fileTable p_ft, /*@only@*/ cstring p_name)
   /*@modifies p_ft@*/ ;

# ifndef NOLCL
extern fileId fileTable_addImportFile (fileTable p_ft, cstring p_name)
   /*@modifies p_ft@*/ ;
# endif

extern fileId fileTable_addMacrosFile (fileTable p_ft)
   /*@modifies p_ft@*/ ;
extern /*@observer@*/ cstring fileTable_getRootName (fileTable p_ft, fileId p_fid) /*@*/ ;
extern bool fileTable_isHeader       (fileTable p_ft, fileId p_fid) /*@*/ ;
extern bool fileId_isHeader (fileId p_f) /*@*/ ;
# define fileId_isHeader(f)          (fileTable_isHeader (context_fileTable(), f))

extern bool fileTable_sameBase (fileTable p_ft, fileId p_f1, fileId p_f2);
extern void fileTable_cleanup (fileTable p_ft) /*@modifies fileSystem@*/;
extern fileId fileTable_lookupBase (fileTable p_ft, cstring p_base) /*@modifies p_ft@*/ ;
extern void fileTable_printTemps (fileTable p_ft) /*@modifies g_msgstream@*/ ;
extern /*@unused@*/ /*@only@*/ cstring fileTable_unparse (fileTable p_ft) /*@*/ ;
extern bool fileTable_exists (fileTable p_ft, cstring p_s) /*@*/ ;
extern void fileTable_free (/*@only@*/ fileTable p_f);
extern bool fileTable_isSpecialFile (fileTable p_ft, fileId p_fid) /*@*/ ;
extern bool fileTable_isSystemFile (fileTable p_ft, fileId p_fid) /*@*/ ;

/*@-czechfcns@*/
extern /*@observer@*/ cstring fileName (fileId p_fid) /*@*/ ;
extern /*@observer@*/ cstring fileNameBase (fileId p_fid) /*@*/ ;
extern /*@observer@*/ cstring rootFileName (fileId p_fid) /*@*/ ;
/*@=czechfcns@*/

# define fileName(fid)     (fileTable_getName(context_fileTable(), fid))
# define fileNameBase(fid) (fileTable_getNameBase(context_fileTable(), fid))
# define rootFileName(fid) (fileTable_getRootName(context_fileTable(), fid))

extern void fileTable_noDelete (fileTable, cstring);
extern bool fileId_baseEqual (/*@sef@*/ fileId p_t1, /*@sef@*/ fileId p_t2) /*@*/ ;
# define fileId_baseEqual(t1,t2) \
  (fileId_equal (t1, t2) || fileTable_sameBase (context_fileTable (), t1, t2))

# else
# error "Multiple include"
#endif

