
/*stuff from the unix specification*/

/*things from stdio.h */
extern void clearerr (FILE *stream) /*@modifies *stream@*/ ;

extern char * ctermid (/*@returned@*/ /*@out@*/ /*@null@*/ char *s)
     /*@modifies *s @*/ 
     //     /*@requires maxSet(s) >= ( L_ctermid - 1) @*/ /*ensures maxRead(s) <= ( L_ctermid - 1) /\ maxRead(s) >= 0 */

       /*DRL 9-11-001 I've modified the definition in ansi.h to remove modifies SystemState and I've added a requires and ensures*/ ;

      /*check returns*/
     
            /* cuserid is in the 1988 version of POSIX but removed in 1990 */
         extern char *
 cuserid (/*@null@*/ /*@out@*/ char *s)
         /*@modifies *s@*/
     // /*@requires maxSet(s) >= ( L_ctermid - 1) @*/ /*@ensures maxRead(s) <= ( L_ctermid - 1) /\ maxRead(s) >= 0  /\ maxRead(result) <= ( L_ctermid - 1) /\ maxRead(result) >= 0 @*/
      ;

      extern int fclose (FILE *stream) /*@modifies *stream, errno, fileSystem;@*/ ;
  
 extern /*@null@*/ /*@dependent@*/ FILE *fdopen (int fd, const char *type)
    /*@modifies errno, fileSystem@*/;

 extern int feof (FILE *stream) /*@modifies errno@*/ ;
 extern int ferror (FILE *stream) /*@modifies errno@*/ ;
 extern int fflush (/*@null@*/ FILE *stream) 
    /*@modifies *stream, errno, fileSystem;@*/ ;

 extern int fgetc (FILE *stream) 
  /*@modifies fileSystem, *stream, errno@*/ ;

  extern int fgetpos (FILE *stream, /*@out@*/ fpos_t *pos)
      /*@modifies *pos, errno@*/ /*@requires maxSet(pos) >= 0@*/
      /*@ensures maxRead(pos) >= 0 @*/;

      extern /*@null@*/ char *
   fgets (/*@returned@*/ /*@out@*/ char *s, int n, FILE *stream)
     /*@modifies fileSystem, *s, *stream, errno@*/
     /*@requires MaxSet(s) >= (n -1); @*/
      /*@ensures MaxRead(s) <= (n -1) /\ MaxRead(s) >= 0; @*/ ;

 extern int fileno (FILE *fp) /*@modifies errno@*/;

 extern void flockfile (FILE *file) /*@modifies *file, fileSystem@*/ ;

     extern FILE * fopen (char *filename, char *mode)  /*@modifies errno, fileSystem;@*/ ;

 # ifdef STRICT
 /*@printflike@*/ 
 extern int fprintf (FILE *stream, char *format, ...)
    /*@modifies fileSystem, *stream, errno@*/ ;
 # else
 /*@printflike@*/ 
 extern int /*@alt void@*/ fprintf (FILE *stream, char *format, ...)
    /*@modifies fileSystem, *stream, errno@*/ ;
 # endif

    extern int fputc (int /*@alt char@*/ c, FILE *stream)
  /*@modifies fileSystem, *stream, errno@*/ ;

 extern int fputs (char *s, FILE *stream)
  /*@modifies fileSystem, *stream, errno@*/ ;
 extern size_t 
   fread (/*@out@*/ void *ptr, size_t size, size_t nobj, FILE *stream)
   /*@modifies fileSystem, *ptr, *stream, errno@*/ 
   /*requires maxSet(ptr) >= (size - 1) @*/ /*@ensures maxRead(ptr) == (size - 1) @*/ 
      ;
   extern /*@null@*/ FILE *freopen (char *filename, char *mode, FILE *stream) 
  /*@modifies *stream, fileSystem, errno@*/ ;

  /*@scanflike@*/ 
 extern int fscanf (FILE *stream, char *format, ...)
    /*@modifies fileSystem, *stream, errno@*/ ;
 extern int fseek (FILE *stream, long int offset, int whence)
   /*@modifies fileSystem, *stream, errno@*/ ;

  extern int fseeko (FILE *stream, off_t offset, int whence)
   /*@modifies fileSystem, *stream, errno@*/ ;
  
 extern int fsetpos (FILE *stream, fpos_t *pos)
  /*@modifies fileSystem, *stream, errno@*/ ;

  extern long int ftell(FILE *stream) /*@modifies errno@*/ ;

  extern off_t ftello(FILE *stream) /*@modifies errno@*/ ;

  extern void ftrylockfile (FILE *file) /*@modifies *file, fileSystem@*/ ;
 
 extern void funlockfile (FILE *file) /*@modifies *file, fileSystem;@*/ ;

 extern size_t fwrite (void *ptr, size_t size, size_t nobj, FILE *stream)
  /*@modifies fileSystem, *stream, errno@*/
      /*@requires maxRead(ptr) >= size @*/;

 extern int getc (/*@sef@*/ FILE *stream)
      /*@modifies fileSystem, *stream, errno@*/ ; /*drl added errno */

 extern int getchar (void) /*@globals stdin@*/ /*@modifies fileSystem, *stdin, errno@*/ ; /*drl added errno */

 extern int  getc_unlocked (/*@sef@*/ FILE *stream)
      /*@modifies fileSystem, *stream, errno@*/ ; /*Drl added 09-18-001 */

 extern int getchar_unlocked (void) /*@globals stdin@*/ /*@modifies fileSystem, *stdin, errno@*/ ; /*Drl added 09-18-001 */

 /*@unchecked@*/ extern char *optarg;
 /*@unchecked@*/ extern int optind;
 /*@unchecked@*/ extern int optopt;
 /*@unchecked@*/ extern int opterr;
 /*@unchecked@*/ extern int optreset;

 extern int getopt (int argc, char * const *argv, const char *optstring)
 	/*@globals optarg, optind, optopt, opterr, optreset@*/
 	/*@modifies optarg, optind, optopt@*/
      /*@requires maxRead(argv) >= (argc - 1) @*/
     
      ;

 	extern /*@null@*/ char *gets (/*@out@*/ char *s) 
   /*@warn bufferoverflowhigh
  "Use of gets leads to a buffer overflow vulnerability.  Use fgets instead"@*/
 /*@globals stdin@*/ /*@modifies fileSystem, *s, *stdin, errno@*/ ;

 extern int getw (FILE *stream) /*@modifies fileSystem, *stream, errno@*/ ; /*drl added 09-18-001 */ /*legacy */ 


 extern int pclose (FILE *stream) /*@modifies fileSystem, *stream, errno@*/ ;

 extern void perror (/*@null@*/ char *s) 
   /*@globals errno, stderr@*/ /*@modifies fileSystem, *stderr@*/ ; 

 extern /*@dependent@*/ /*@null@*/ FILE *popen (char *command, char *ttype)
    /*@modifies fileSystem, errno@*/ ;

 # ifdef STRICT
 /*@printflike@*/ 
 extern int printf (char *format, ...) 
    /*@globals stdout@*/
    /*@modifies fileSystem, *stdout@*/ ;
 # else
 /*@printflike@*/ 
 extern int /*@alt void@*/ printf (char *format, ...) 
    /*@globals stdout@*/
    /*@modifies fileSystem, *stdout@*/ ;
 # endif

 extern int putc (int /*@alt char@*/ c, /*@sef@*/ FILE *stream)
   /*@modifies fileSystem, *stream, errno;@*/
      /*drl added errno 09-18-001 */ ;

      extern int putchar (int /*@alt char@*/ c)
      /*@globals stdout@*/ /*@modifies fileSystem, *stdout, errno@*/
      /*drl added errno 09-18-001 */ ; 

      extern int putc_unlocked (int /*@alt char@*/ c, /*@sef@*/ FILE *stream)
   /*@modifies fileSystem, *stream, errno;@*/
  /*Drl added 09-19-001 */ ;

      extern int putchar_unlocked (int /*@alt char@*/ c)
      /*@globals stdout@*/ /*@modifies fileSystem, *stdout, errno@*/
    /*Drl added 09-19-001 */ ;

    extern int puts (const char *s)
   /*@globals stdout@*/ /*@modifies fileSystem, *stdout, errno@*/
    /*drl added errno 09-19-001 */ ;
     
      
   extern int putw(int w, FILE *stream)
  /*@modifies fileSystem, *stream, errno@*/ 
      /*Drl added 09-19-001 */ /*legacy*/ ;

    extern int remove (char *filename) /*@modifies fileSystem, errno@*/ ;

    extern int rename (char *old, char *new) /*@modifies fileSystem, errno@*/
  ;
 
 extern void rewind (FILE *stream) /*@modifies *stream, fileSystem, errno@*/ 
  /*drl added errno AND fileSystem 09-19-001 */ ;
  
 /*@scanflike@*/
 extern int scanf(char *format, ...)
   /*@globals stdin@*/
  /*@modifies fileSystem, *stdin, errno@*/
  /*drl added errno 09-19-001 */ ;

  extern void setbuf (FILE *stream, /*@null@*/ /*@exposed@*/ char *buf) 
    /*@modifies fileSystem, *stream, *buf@*/ 
     // /*@requires maxSet(buf) >= (BUFSIZ - 1) @*/
     ;

    extern int setvbuf (FILE *stream, /*@null@*/ /*@exposed@*/ char *buf, 
            int mode, size_t size)
      /*@modifies fileSystem, *stream, *buf@*/  /*@requires maxSet(buf) >= (size - 1) @*/ ;

 # ifdef STRICT
 /*@printflike@*/ 
 extern int snprintf (/*@out@*/ char *s,  size_t n, char *format, ...) 
    /*@modifies *s@*/

      /*@requires maxSet(s) >= (n - 1) @*/
      ;
     
 # else

    /*@printflike@*/ 
 extern int /*@alt void@*/ snprintf (/*@out@*/ char *s, size_t n, char *format, ...) 
    /*@modifies *s@*/
     /*@requires maxSet(s) >= (n - 1) @*/
      ;
 # endif

   
 # ifdef STRICT
 /*@printflike@*/ 
 extern int sprintf (/*@out@*/ char *s, char *format, ...) 
    /*@modifies *s@*/ ;
 # else

    /*@printflike@*/ 
 extern int /*@alt void@*/ sprintf (/*@out@*/ char *s, char *format, ...) 
    /*@modifies *s@*/ ;

 # endif

    /*@scanflike@*/
    int sscanf (/*@out@*/ char *s, char *format, ...) 
    /* modifies extra arguments */ /*@modifies errno@*/
  /*drl added errno 09-19-001 */ ;


 extern /*@null@*/ char *tempnam (char *dir, /*@null@*/ char *pfx) 
    /*@modifies internalState, errno@*/
      /*@ensures maxSet(result) >= 0 /\ maxRead(result) >= 0 @*/
      /*warn that "Between the time a pathname is created and the file is opened, it is possible
      for some other process to create a file with the same name. Applications may find tmpfile()
      more useful. " */
     
      /*drl added errno 09-19-001 */

      ;


 extern /*@null@*/ FILE *tmpfile (void) /*@modifies fileSystem, errno@*/
 /*drl added errno 09-19-001 */
      ;

 extern /*@observer@*/ char *
 tmpnam (/*@out@*/ /*@null@*/ /*@returned@*/ char *s) 
   /*@modifies *s, internalState @*/
     //      /*@requires maxSet(s) >= (L_tmpnam - 1) @*/
      /*warn Between the time a pathname is created and the file is opened, it is possible for some other
        process to create a file with the same name. Applications may find tmpfile() more useful. */
      ;
     
 extern int ungetc (int /*@alt char@*/ c, FILE *stream)
  /*@modifies fileSystem, *stream @*/

      /*drl REMOVED errno 09-19-001*/
      ;

      int vfprintf (FILE *stream, char *format, va_list arg)
    /*@modifies fileSystem, *stream, arg, errno@*/ ;

 int  vprintf (const char *format, va_list arg)
    /*@globals stdout@*/
    /*@modifies fileSystem, *stdout@*/ ;

    int vsnprintf (/*@out@*/ char *str, size_t size, const char *format, va_list ap)

     /*@modifies str@*/   /*@requires maxSet(str) >= (size - 1) @*/
   ;

  int vsprintf (/*@out@*/ char *str, const char *format, va_list ap)
   /*@warn bufferoverflowhigh "Use vsnprintf instead"@*/
      /*@modifies str@*/  ;


      extern char  *optarg; 
      extern int    opterr; 
      extern int    optind;  /*(LEGACY)*/
      extern int    optopt;   

