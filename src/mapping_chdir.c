

int
#ifdef __STDC__
mapping_chdir(/*@nullterminated@*/  char *orig_path) /*@bufferConstraint MaxRead(mapped_path) <= 198;MaxRead(orig_path) <= 199;  (MaxRead(orig_path) + MaxRead(mapped_path)) <= (MaxSet(mapped_path) -1 );@*/
#else
mapping_chdir( orig_path )
  /*@nullterminated@*/    char *orig_path;
#endif
{
      int ret;
      char *sl, *path;

      strcpy( old_mapped_path, mapped_path );
      /*b changed from 
	path = &pathspace[0]; */
      
      path = pathspace;
      strcpy( path, orig_path );

      /* / at start of path, set the start of the mapped_path to / */
      if( path[0] == '/' ){
              mapped_path[0] = '/';
              mapped_path[1] = '\0';
              path++;
      }

      while( (sl = strchr( path, '/' )) ){
              char *dir, *last;
              dir = path;
              *sl = '\0';
              path = sl + 1;
              if( *dir )
                      do_elem( dir );
              if( *path == '\0' )
                      break;
      }
      if( *path )
              do_elem( path );

      if( (ret = chdir( mapped_path )) < 0 ){
              strcpy( mapped_path, old_mapped_path );
      }

      return ret;
}
/* From now on use the mapping version */

#define chdir(d) mapping_chdir(d)
#define getwd(d) mapping_getwd(d)
#define getcwd(d,u) mapping_getwd(d)

int f()
{
  struct passwd *chroot_pw;
  
  if ((chroot_pw = getpwuid (pw->pw_uid)) != NULL)
    if (/*strcpy ("kl", "hjklhjklhjkljhjklhjkhjkhjklhjkl") && */mapping_chdir (chroot_pw->pw_dir)/* >= 0 */)
		      {
			char f[1];
			///	mapping_chdir (chroot_pw->pw_dir);
			strcpy (f, "hjklhjklhjkljhjklhjkhjkhjklhjkl");
			home = sgetsave (chroot_pw->pw_dir);
			
		      }
}
