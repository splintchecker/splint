/*
** unix.h
*/

/*@-nextlinemacros@*/

/*
** Extra stuff in some unixen, not in posix.
*/

/*@unchecked@*/ int signgam;

typedef /*@integraltype@*/ clockid_t;

extern void bcopy (char *b1, /*@out@*/ char *b2, int length) 
   /*@modifies *b2@*/ ;  /* Yes, the second parameter is the out param! */

extern int /*@alt lltX_bool@*/ bcmp (char *b1, char *b2, int length) /*@*/ ;
   /* Return value is NOT like strcmp! */

extern void bzero (/*@out@*/ char *b1, int length) /*@modifies *b1@*/ ;
extern int ffs (int i) /*@*/ ;
extern int symlink (char *name1, char *name2) /*@modifies fileSystem@*/ ;

extern int 
  setvbuf_unlocked (FILE *stream, /*@null@*/ /*@exposed@*/ char *buf, 
		    int mode, size_t size)
  /*@modifies internalState@*/ ;

extern void 
  setbuffer (FILE *stream, /*@null@*/ /*@exposed@*/ char *buf, int size)
  /*@modifies internalState@*/ ;

extern void setlinebuf (FILE *stream) /*@modifies internalState@*/ ;

extern int strerror_r (int errnum, /*@out@*/ char *strerrbuf, int buflen)
  /*@modifies strerrbuf@*/ ;

extern size_t 
  fread_unlocked (/*@out@*/ void *ptr, size_t size, size_t nitems, 
		  FILE *stream) 
  /*@modifies *stream, *ptr;@*/ ;

extern size_t 
  fwrite_unlocked (void *pointer, size_t size, size_t num_items, FILE *stream)
  /*@modifies *stream;@*/ ;

extern void funlockfile (FILE *file) /*@modifies *file;@*/ ;
extern void flockfile (FILE *file) /*@modifies *file@*/ ;

extern void /*@alt void * @*/ 
  memccpy (/*@returned@*/ /*@out@*/ void *s1, 
	   /*@unique@*/ void *s2, int c, size_t n) 
  /*@modifies *s1@*/ ;

extern int strcasecmp (char *s1, char *s2) /*@*/ ;
extern int strncasecmp (char *s1, char *s2, int n) /*@*/ ;
extern char *strdup (char *s) /*@*/ ;

extern /*@null@*/ char *tempnam (char *dir, /*@null@*/ char *pfx) 
   /*@modifies internalState@*/ ;

extern /*@null@*/ /*@dependent@*/ char *
  index (/*@returned@*/ char *s, char c) /*@*/ ;

extern /*@null@*/ /*@dependent@*/ char *
  rindex (/*@returned@*/ char *s, char c) /*@*/ ;

extern /*@dependent@*/ /*@null@*/ FILE *popen (char *command, char *ttype)
   /*@modifies fileSystem, errno@*/ ;
extern int pclose (FILE *stream) /*@modifies fileSystem, *stream, errno@*/ ;

extern double cbrt (double x) /*@modifies errno@*/ ;
extern double rint (double x) /*@*/ ;
extern double trunc (double x) /*@*/ ; 

/*@constant int ENOTBLK@*/
/*@constant int ETXTBSY@*/
/*@constant int EWOULDBLOCK@*/
/*@constant int EINPROGRESS@*/
/*@constant int EALREADY@*/
/*@constant int ENOTSOCK@*/
/*@constant int EDESTADDRREQ@*/
/*@constant int EMSGSIZE@*/
/*@constant int EPROTOTYPE@*/
/*@constant int ENOPROTOOPT@*/
/*@constant int EPROTONOSUPPORT@*/
/*@constant int ESOCKTNOSUPPORT@*/
/*@constant int EOPNOTSUPP@*/
/*@constant int EPFNOSUPPORT@*/
/*@constant int EAFNOSUPPORT@*/
/*@constant int EADDRINUSE@*/
/*@constant int EADDRNOTAVAIL@*/
/*@constant int ENETDOWN@*/
/*@constant int ENETUNREACH@*/
/*@constant int ENETRESET@*/
/*@constant int ECONNABORTED@*/
/*@constant int ECONNRESET@*/
/*@constant int ENOBUFS@*/
/*@constant int EISCONN@*/
/*@constant int ENOTCONN@*/
/*@constant int ESHUTDOWN@*/
/*@constant int ETOOMANYREFS@*/
/*@constant int ETIMEDOUT@*/
/*@constant int ECONNREFUSED@*/
/*@constant int ENAMETOOLONG@*/
/*@constant int EHOSTDOWN@*/
/*@constant int EHOSTUNREACH@*/
/*@constant int ENOTEMPTY@*/
/*@constant int EPROCLIM@*/
/*@constant int EUSERS@*/
/*@constant int EDQUOT@*/
/*@constant int ESTALE@*/
/*@constant int EREMOTE@*/
/*@constant int ENOMSG@*/
/*@constant int EIDRM@*/
/*@constant int EALIGN@*/
/*@constant int EDEADLK@*/
/*@constant int ENOLCK@*/
/*@constant int ENOSYS@*/
/*@constant int EACTIVE@*/
/*@constant int ENOACTIVE@*/
/*@constant int ENORESOURCES@*/
/*@constant int ENOSYSTEM@*/
/*@constant int ENODUST@*/
/*@constant int EDUPNOCONN@*/
/*@constant int EDUPNODISCONN@*/
/*@constant int EDUPNOTCNTD@*/
/*@constant int EDUPNOTIDLE@*/
/*@constant int EDUPNOTWAIT@*/
/*@constant int EDUPNOTRUN@*/
/*@constant int EDUPBADOPCODE@*/
/*@constant int EDUPINTRANSIT@*/
/*@constant int EDUPTOOMANYCPUS@*/
/*@constant int ELOOP@*/

/*@constant int LOCK_MAX@*/
/*@constant int FCHR_MAX@*/
/*@constant int USI_MAX@*/
/*@constant int WORD_BIT@*/
/*@constant int LONG_BIT@*/
/*@constant long NAME_MAX@*/
/*@constant long NGROUPS_MAX@*/
/*@constant long MAX_INPUT@*/
/*@constant long MAX_CANON@*/
/*@constant int MAX_CHAR@*/
/*@constant long OPEN_MAX@*/
/*@constant int PASS_MAX@*/
/*@constant int PATH_MAX@*/
/*@constant int PID_MAX@*/
/*@constant int SYSPID_MAX@*/
/*@constant long PIPE_BUF@*/
/*@constant int PIPE_MAX@*/
/*@constant int PROC_MAX@*/
/*@constant int STD_BLK@*/
/*@constant int SYS_NMLN@*/
/*@constant int SYS_OPEN@*/
/*@constant int NZERO@*/
/*@constant int UID_MAX@*/
/*@constant long MB_LEN_MAX@*/
/*@constant int NL_ARGMAX@*/
/*@constant int NL_MSGMAX@*/
/*@constant int NL_NMAX@*/
/*@constant int NL_SETMAX@*/
/*@constant int NL_TEXTMAX@*/
/*@constant int NL_LBLMAX@*/
/*@constant int NL_LANGMAX @*/

/*@constant double M_E@*/
/*@constant double M_LOG2E@*/
/*@constant double M_LOG10E@*/
/*@constant double M_LN2@*/
/*@constant double M_LN10@*/
/*@constant double M_PI@*/
/*@constant double M_PI_2@*/
/*@constant double M_PI_4@*/
/*@constant double M_1_PI@*/
/*@constant double M_2_PI@*/
/*@constant double M_2_SQRTPI@*/
/*@constant double M_SQRT2@*/
/*@constant double M_SQRT1_2@*/ 

/*@constant double MAXFLOAT@*/
/*@constant double HUGE@*/
 
/*@constant int DOMAIN@*/
/*@constant int SING@*/
/*@constant int OVERFLOW@*/
/*@constant int UNDERFLOW@*/
/*@constant int TLOSS@*/
/*@constant int PLOSS@*/

extern /*@unchecked@*/ int daylight;
extern /*@unchecked@*/ long timezone;
extern /*@unchecked@*/ char *tzname[];

/*@-incondefs@*/
extern void tzset(void) /*@modifies daylight, timezone, tzname@*/ ;
/*@=incondefs@*/

typedef	unsigned char uchar_t;
typedef	unsigned short ushort_t;
typedef	unsigned int uint_t;
typedef unsigned long ulong_t;
typedef	volatile unsigned char vuchar_t;
typedef	volatile unsigned short	vushort_t;
typedef	volatile unsigned int vuint_t;
typedef volatile unsigned long vulong_t;
typedef long label_t;
typedef int level_t;
typedef	/*@integraltype@*/ daddr_t;
typedef	char *caddr_t;	
typedef long *qaddr_t; 
typedef char *addr_t;
typedef long physadr_t;
typedef short cnt_t;
typedef	int chan_t;	
typedef unsigned long rlim_t;
typedef	int paddr_t;
typedef /*@integraltype@*/ key_t;
typedef	void *mid_t;
typedef char slab_t[12];	
typedef ulong_t	shmatt_t;	
typedef ulong_t	msgqnum_t;	
typedef ulong_t	msglen_t;
typedef long timer_t;
typedef	uchar_t uchar;
typedef	ushort_t ushort;
typedef	uint_t uint;
typedef ulong_t	ulong;
typedef	uchar_t	u_char;
typedef	ushort_t u_short;
typedef	uint_t u_int;
typedef	ulong_t	u_long;
typedef	vuchar_t vu_char;
typedef	vushort_t vu_short;
typedef	vuint_t	vu_int;
typedef	vulong_t vu_long;
typedef	long swblk_t;
typedef u_long fixpt_t;
typedef long segsz_t;
typedef /*@abstract@*/ fd_set;

/* Check ISO C99 inttypes.h ... */
typedef unsigned int u_int32_t;
typedef unsigned int uint32_t;

typedef unsigned short int u_int16_t;
typedef unsigned short int uint16_t;

int ttyname_r (int fg, /*@out@*/ char *buffer, int len) /*@modifies buffer@*/ ;
int ioctl (int d, int /*@alt long@*/ request, /*@out@*/ void *arg) 
   /*@modifies *arg, errno@*/ ;  /* depends on request! */

pid_t vfork (void) /*@modifies fileSystem@*/ ;


 struct iovec {
	void    *iov_base;
	size_t   iov_len;
};

/*@constant int UIO_MAXIOV@*/   /* BSD */
/*@constant int IOV_MAX@*/      /* supposedly SVR4 */

	extern ssize_t
readv (int fd, const struct iovec iov[], int iovcnt)
	/*@modifies iov[].iov_base, fileSystem, errno@*/;

	extern ssize_t
writev (int fd, const struct iovec iov[], int iovcnt)
	/*@modifies errno@*/;

/*________________________________________________________________________
 * poll.h
 */

 struct poll {
	int fd;
	short events;
	short revents;
};

/*@constant short POLLIN@*/
/*@constant short POLLRDNORM@*/
/*@constant short POLLRDBAND@*/
/*@constant short POLLPRI@*/
/*@constant short POLLOUT@*/
/*@constant short POLLWRNORM@*/
/*@constant short POLLWRBAND@*/
/*@constant short POLLERR@*/
/*@constant short POLLHUP@*/
/*@constant short POLLNVAL@*/

extern int poll (struct poll pollfd[], unsigned long nfds, int timeout)
  /*@modifies pollfd[].revents, errno@*/ ;

/*
** free does not take null
*/

/*@-incondefs@*/
extern void free (/*@notnull@*/ /*@out@*/ /*@only@*/ void *p) /*@modifies *p@*/ ;
/*@=incondefs@*/

/*________________________________________________________________________
 * sys/socket.h
 */

/*@constant int SOCK_STREAM@*/
/*@constant int SOCK_DGRAM@*/
/*@constant int SOCK_RAW@*/
/*@constant int SOCK_RDM@*/
/*@constant int SOCK_SEQPACKET@*/
/*@constant int SO_DEBUG@*/
/*@constant int SO_ACCEPTCONN@*/
/*@constant int SO_REUSEADDR@*/
/*@constant int SO_KEEPALIVE@*/
/*@constant int SO_DONTROUTE@*/
/*@constant int SO_BROADCAST@*/
/*@constant int SO_USELOOPBACK@*/
/*@constant int SO_LINGER@*/
/*@constant int SO_OOBINLINE@*/
/*@constant int SO_REUSEPORT@*/
/*@constant int SO_SNDBUF@*/
/*@constant int SO_RCVBUF@*/
/*@constant int SO_SNDLOWAT@*/
/*@constant int SO_RCVLOWAT@*/
/*@constant int SO_SNDTIMEO@*/
/*@constant int SO_RCVTIMEO@*/
/*@constant int SO_ERROR@*/
/*@constant int SO_TYPE@*/
/*@constant int SOL_SOCKET@*/
/*@constant int AF_UNSPEC@*/
/*@constant int AF_LOCAL@*/
/*@constant int AF_UNIX@*/
/*@constant int AF_INET@*/
/*@constant int AF_IMPLINK@*/
/*@constant int AF_PUP@*/
/*@constant int AF_CHAOS@*/
/*@constant int AF_NS@*/
/*@constant int AF_ISO@*/
/*@constant int AF_OSI@*/
/*@constant int AF_ECMA@*/
/*@constant int AF_DATAKIT@*/
/*@constant int AF_CCITT@*/
/*@constant int AF_SNA@*/
/*@constant int AF_DECnet@*/
/*@constant int AF_DLI@*/
/*@constant int AF_LAT@*/
/*@constant int AF_HYLINK@*/
/*@constant int AF_APPLETALK@*/
/*@constant int AF_ROUTE@*/
/*@constant int AF_LINK@*/
/*@constant int pseudo_AF_XTP@*/
/*@constant int AF_COIP@*/
/*@constant int AF_CNT@*/
/*@constant int pseudo_AF_RTIP@*/
/*@constant int AF_IPX@*/
/*@constant int AF_SIP@*/
/*@constant int pseudo_AF_PIP@*/
/*@constant int AF_ISDN@*/
/*@constant int AF_E164@*/
/*@constant int AF_MAX@*/
/*@constant int MSG_OOB@*/
/*@constant int MSG_PEEK@*/
/*@constant int MSG_DONTROUTE@*/
/*@constant int MSG_EOR@*/
/*@constant int MSG_TRUNC@*/
/*@constant int MSG_CTRUNC@*/
/*@constant int MSG_WAITALL@*/
/*@constant int MSG_DONTWAIT@*/
/*@constant int MSG_EOF@*/
/*@constant int MSG_COMPAT@*/
/*@constant int PF_UNSPEC@*/
/*@constant int PF_LOCAL@*/
/*@constant int PF_UNIX@*/
/*@constant int PF_INET@*/
/*@constant int PF_IMPLINK@*/
/*@constant int PF_PUP@*/
/*@constant int PF_CHAOS@*/
/*@constant int PF_NS@*/
/*@constant int PF_ISO@*/
/*@constant int PF_OSI@*/
/*@constant int PF_ECMA@*/
/*@constant int PF_DATAKIT@*/
/*@constant int PF_CCITT@*/
/*@constant int PF_SNA@*/
/*@constant int PF_DECnet@*/
/*@constant int PF_DLI@*/
/*@constant int PF_LAT@*/
/*@constant int PF_HYLINK@*/
/*@constant int PF_APPLETALK@*/
/*@constant int PF_ROUTE@*/
/*@constant int PF_LINK@*/
/*@constant int PF_XTP@*/
/*@constant int PF_COIP@*/
/*@constant int PF_CNT@*/
/*@constant int PF_SIP@*/
/*@constant int PF_IPX@*/
/*@constant int PF_RTIP@*/
/*@constant int PF_PIP@*/
/*@constant int PF_ISDN@*/
/*@constant int PF_MAX@*/
/*@constant int NET_MAXID@*/
/*@constant int NET_RT_DUMP@*/
/*@constant int NET_RT_FLAGS@*/
/*@constant int NET_RT_IFLIST@*/
/*@constant int NET_RT_MAXID@*/
/*@constant int SOMAXCONN@*/
/*@constant int SCM_RIGHTS@*/

 struct sockaddr {
	u_char	sa_len;			/* total length */
	u_char	sa_family;		/* address family */
	char	sa_data[14];		/* actually longer; address value */
};

 struct linger {
	int	l_onoff;		/* option on/off */
	int	l_linger;		/* linger time */
};

 struct sockproto {
	u_short	sp_family;		/* address family */
	u_short	sp_protocol;		/* protocol */
};
 struct msghdr {
	caddr_t	msg_name;		/* optional address */
	u_int	msg_namelen;		/* size of address */
	struct	iovec *msg_iov;		/* scatter/gather array */
	u_int	msg_iovlen;		/* # elements in msg_iov */
	caddr_t	msg_control;		/* ancillary data, see below */
	u_int	msg_controllen;		/* ancillary data buffer len */
	int	msg_flags;		/* flags on received message */
};

 struct cmsghdr {
	u_int	cmsg_len;		/* data byte count, including hdr */
	int	cmsg_level;		/* originating protocol */
	int	cmsg_type;		/* protocol-specific type */
/* followed by	u_char  cmsg_data[]; */
};

	extern int
accept (int s, struct sockaddr *addr, int *addrlen)
	/*@modifies *addrlen, errno@*/;

	extern int
bind (int s, struct sockaddr *name, int namelen)
	/*@modifies errno, fileSystem@*/;

	extern int
connect (int s, struct sockaddr *name, int namelen)
	/*@modifies errno, internalState@*/;

int getpeername (int s, /*@out@*/ struct sockaddr *name, size_t *namelen)
	/*@modifies *name, *namelen, errno@*/;

int getsockname (int s, struct sockaddr *address, size_t *address_len)
  /*?requires maxSet(address) > *address_len@*/ 
  /*@modifies *address, *address_len, errno@*/;

int getsockopt (int s, int level, int optname, /*@out@*/ void *optval, size_t *optlen)
	/*@modifies *optval, *optlen, errno@*/;

	extern int
listen (int s, int backlog)
	/*@modifies errno, internalState@*/;

	extern ssize_t
recv (int s, /*@out@*/ void *buf, size_t len, int flags)
	/*@modifies *buf, errno@*/;

	extern ssize_t
recvfrom (int s, void *buf, size_t len, int flags, /*@null@*/ struct sockaddr *from, int *fromlen)
	/*@modifies *buf, *from, *fromlen, errno@*/;

	extern ssize_t
recvmsg (int s, struct msghdr *msg, int flags)
	/*@modifies msg->msg_iov->iov_base[], errno@*/;

	extern ssize_t
send (int s, const void *msg, size_t len, int flags)
	/*@modifies errno@*/;

	extern ssize_t
sendto (int s, const void *msg, size_t len, int flags, const struct sockaddr *to, int tolen)
	/*@modifies errno@*/;

	extern ssize_t
sendmsg (int s, const struct msghdr *msg, int flags)
	/*@modifies errno@*/;

	extern int
setsockopt (int s, int level, int optname, const void *optval, int optlen)
	/*@modifies internalState, errno@*/;

	extern int
shutdown (int s, int how)
	/*@modifies errno@*/;

	extern int
socket (int domain, int type, int protocol)
	/*@modifies errno@*/;

	extern int
socketpair (int d, int type, int protocol, /*@out@*/ int *sv)
	/*@modifies errno@*/;

/*@constant int BADSIG@*/
/*@constant int SA_ONSTACK@*/
/*@constant int SA_RESTART@*/
/*@constant int SA_DISABLE@*/
/*@constant int SIGBUS@*/
/*@constant int SIGEMT@*/
/*@constant int SIGINFO@*/
/*@constant int SIGIO@*/
/*@constant int SIGIOT@*/
/*@constant int SIGPOLL@*/
/*@constant int SIGPROF@*/
/*@constant int SIGPWR@*/
/*@constant int SIGSYS@*/
/*@constant int SIGTRAP@*/
/*@constant int SIGURG@*/
/*@constant int SIGVTALRM@*/
/*@constant int SIGWINCH@*/
/*@constant int SIGXCPU@*/
/*@constant int SIGXFSZ@*/

extern void psignal (int sig, const char *msg)
   /*@modifies fileSystem@*/;

/*@unchecked@*/ extern char *optarg;
/*@unchecked@*/ extern int optind;
/*@unchecked@*/ extern int optopt;
/*@unchecked@*/ extern int opterr;
/*@unchecked@*/ extern int optreset;

	extern int
getopt (int argc, char * const *argv, const char *optstring)
	/*@globals optarg, optind, optopt, opterr, optreset@*/
	/*@modifies optarg, optind, optopt@*/;

	extern int
setenv (const char *name, const char *value, int overwrite)
	/*@globals environ@*/
	/*@modifies *environ, errno@*/;

	extern int
putenv (const char *string)
	/*@globals environ@*/
	/*@modifies *environ, errno@*/;

	extern void
unsetenv (const char *name)
	/*@globals environ@*/
	/*@modifies *environ@*/;

/*________________________________________________________________________
 * sys/wait.h
 */

	extern int
WCOREDUMP (int x)
	/*@*/;

	extern int
W_EXITCODE (int ret, int sig)
	/*@*/;

	extern int
W_STOPCODE (int sig)
	/*@*/;

/*@constant int WAIT_ANY@*/
/*@constant int WAIT_MYPGRP@*/
/*@constant int WSTOPPED@*/

	extern pid_t
wait3 (int *statloc, int options, /*@null@*/ /*@out@*/ struct rusage *rusage)
	/*@modifies *statloc, *rusage, errno@*/;

	extern pid_t
wait4 (pid_t p, int *statloc, int opt, /*@null@*/ /*@out@*/ struct rusage *r)
	/*@modifies *statloc, *r, errno@*/;

struct timeval {
  long	tv_sec;
  long	tv_usec;
} ;

struct timespec {
  long	ts_sec;
  long	ts_nsec;
} ;

struct timezone {
  int	tz_minuteswest;
  int	tz_dsttime;
} ;

/*@constant int DST_NONE@*/
/*@constant int DST_USA@*/
/*@constant int DST_AUST@*/
/*@constant int DST_WET@*/
/*@constant int DST_MET@*/
/*@constant int DST_EET@*/
/*@constant int DST_CAN@*/

/*@constant int ITIMER_PROF@*/
/*@constant int ITIMER_REAL@*/
/*@constant int ITIMER_VIRTUAL@*/

 struct itimerval {
	struct	timeval it_interval;
	struct	timeval it_value;
};

 struct clockinfo {
	int	hz;
	int	tick;
	int	stathz;
	int	profhz;
};

	extern int
adjtime (const struct timeval *delta, /*@null@*/ /*@out@*/ struct timeval *olddelta)
	/*@modifies internalState, *olddelta, errno@*/;

	extern int
getitimer (int which, /*@out@*/ struct itimerval *value)
	/*@modifies errno, *value*/;

	extern int
gettimeofday (/*@null@*/ /*@out@*/ struct timeval *tp, /*@null@*/ /*@out@*/ struct timezone *tzp)
	/*@modifies *tp, *tzp, errno@*/;

	extern int
setitimer (int which, struct itimerval *val, /*@null@*/ /*@out@*/ struct itimerval *oval)
	/*@modifies *oval, errno, internalState*/;

	extern int
settimeofday (const struct timeval *t, const struct timezone *z)
	/*@modifies internalState, errno@*/;

	extern int
utimes (const char *file, /*@null@*/ const struct timeval *times)
	/*@modifies fileSystem, errno*/;

/*________________________________________________________________________
 * sys/mman.h
 */

/*@constant int PROT_READ@*/
/*@constant int PROT_WRITE@*/
/*@constant int PROT_EXEC@*/
/*@constant int MAP_SHARED@*/
/*@constant int MAP_PRIVATE@*/
/*@constant int MAP_COPY@*/
/*@constant int MAP_FIXED@*/
/*@constant int MAP_RENAME@*/
/*@constant int MAP_NORESERVE@*/
/*@constant int MAP_INHERIT@*/
/*@constant int MAP_NOEXTEND@*/
/*@constant int MAP_HASSEMAPHORE@*/
/*@constant int MS_ASYNC@*/
/*@constant int MS_INVALIDATE@*/
/*@constant int MAP_FILE@*/
/*@constant int MAP_ANON@*/
/*@constant int MADV_NORMAL@*/
/*@constant int MADV_RANDOM@*/
/*@constant int MADV_SEQUENTIAL@*/
/*@constant int MADV_WILLNEED@*/
/*@constant int MADV_DONTNEED@*/

	extern caddr_t
mmap (/*@null@*/ /*@returned@*/ caddr_t addr, size_t len, int prot, int flags, int fd, off_t offset)
	/*@modifies addr@*/;

	extern int
madvise (caddr_t addr, int len, int behav)
	/*@*/;

	extern int
mprotect (caddr_t addr, int len, int prot)
	/*@*/;

	extern int
munmap (caddr_t addr, size_t len)
	/*@*/;

	extern int
msync (caddr_t addr, int len, int flags)
	/*@*/;

	extern int
mlock (caddr_t addr, size_t len)
	/*@*/;

	extern int
munlock (caddr_t addr, size_t len)
	/*@*/;


/*________________________________________________________________________
 * sys/ioctl.h
 */

 struct winsize {
	unsigned short	ws_row;
	unsigned short	ws_col;
	unsigned short	ws_xpixel;
	unsigned short	ws_ypixel;
};

/*@constant int TIOCMODG@*/
/*@constant int TIOCMODS@*/
/*@constant int TIOCM_LE@*/
/*@constant int TIOCM_DTR@*/
/*@constant int TIOCM_RTS@*/
/*@constant int TIOCM_ST@*/
/*@constant int TIOCM_SR@*/
/*@constant int TIOCM_CTS@*/
/*@constant int TIOCM_CAR@*/
/*@constant int TIOCM_CD@*/
/*@constant int TIOCM_RNG@*/
/*@constant int TIOCM_RI@*/
/*@constant int TIOCM_DSR@*/
/*@constant int TIOCEXCL@*/
/*@constant int TIOCNXCL@*/
/*@constant int TIOCFLUSH@*/
/*@constant int TIOCGETA@*/
/*@constant int TIOCSETA@*/
/*@constant int TIOCSETAW@*/
/*@constant int TIOCSETAF@*/
/*@constant int TIOCGETD@*/
/*@constant int TIOCSETD@*/
/*@constant int TIOCSBRK@*/
/*@constant int TIOCCBRK@*/
/*@constant int TIOCSDTR@*/
/*@constant int TIOCCDTR@*/
/*@constant int TIOCGPGRP@*/
/*@constant int TIOCSPGRP@*/
/*@constant int TIOCOUTQ@*/
/*@constant int TIOCSTI@*/
/*@constant int TIOCNOTTY@*/
/*@constant int TIOCPKT@*/
/*@constant int TIOCPKT_DATA@*/
/*@constant int TIOCPKT_FLUSHREAD@*/
/*@constant int TIOCPKT_FLUSHWRITE@*/
/*@constant int TIOCPKT_STOP@*/
/*@constant int TIOCPKT_START@*/
/*@constant int TIOCPKT_NOSTOP@*/
/*@constant int TIOCPKT_DOSTOP@*/
/*@constant int TIOCPKT_IOCTL@*/
/*@constant int TIOCSTOP@*/
/*@constant int TIOCSTART@*/
/*@constant int TIOCMSET@*/
/*@constant int TIOCMBIS@*/
/*@constant int TIOCMBIC@*/
/*@constant int TIOCMGET@*/
/*@constant int TIOCREMOTE@*/
/*@constant int TIOCGWINSZ@*/
/*@constant int TIOCSWINSZ@*/
/*@constant int TIOCUCNTL@*/
/*@constant int TIOCSTAT@*/
/*@constant int TIOCCONS@*/
/*@constant int TIOCSCTTY@*/
/*@constant int TIOCEXT@*/
/*@constant int TIOCSIG@*/
/*@constant int TIOCDRAIN@*/
/*@constant int TIOCMSDTRWAIT@*/
/*@constant int TIOCMGDTRWAIT@*/
/*@constant int TIOCTIMESTAMP@*/
/*@constant int TIOCSDRAINWAIT@*/
/*@constant int TIOCGDRAINWAIT@*/
/*@constant int TTYDISC@*/
/*@constant int TABLDISC@*/
/*@constant int SLIPDISC@*/
/*@constant int PPPDISC@*/

/*@constant int MAXHOSTNAMELEN@*/

	extern void
FD_CLR (int n, fd_set *p)
	/*@modifies *p@*/;

	extern void
FD_COPY (fd_set *f, /*@out@*/ fd_set *t)
	/*@modifies *t@*/;

	extern int /*@alt lltX_bool@*/
FD_ISSET (int n, fd_set *p)
	/*@*/;

	extern void
FD_SET (int n, fd_set *p)
	/*@modifies *p@*/;

	extern void
FD_ZERO (fd_set /*@out@*/ *p)
	/*@modifies *p@*/;

	extern int
fchdir (int fd)
	/*@modifies internalState, errno@*/;

	extern int
fchown (int fd, uid_t owner, gid_t group)
	/*@modifies errno, fileSystem@*/;

	extern int
fsync (int fd)
	/*@modifies errno, fileSystem@*/;

	extern int
ftruncate (int fd, off_t length)
	/*@modifies errno, fileSystem@*/;

int gethostname (/*@out@*/ char *address, size_t address_len) 
   /*:errorstatus@*/
   /*@modifies address@*/ ;

int initgroups (const char *name, int basegid)
   /*@modifies internalState@*/;

	extern int
lchown (const char *path, uid_t owner, gid_t group)
	/*@modifies errno, fileSystem@*/;

	extern int
readlink (const char *path, /*@out@*/ char *buf, int size)
	/*@modifies *buf, errno@*/;

	extern int
select (int mfd, fd_set /*@null@*/ *r, fd_set /*@null@*/ *w, fd_set /*@null@*/ *e, struct timeval *t)
	/*@modifies *r, *w, *e, *t, errno@*/;

	extern int
setegid (gid_t egid)
	/*@modifies errno, internalState@*/;

	extern int
seteuid (uid_t euid)
	/*@modifies errno, internalState@*/;

	extern int
setgroups (int ngroups, const gid_t *gidset)
	/*@modifies errno, internalState@*/;

	extern int
setregid (gid_t rgid, gid_t egid)
	/*@modifies errno, internalState@*/;

	extern int
setreuid (gid_t ruid, gid_t euid)
	/*@modifies errno, internalState@*/;

	extern void
sync (void)
	/*@modifies fileSystem@*/;

	extern int
symlink (const char *path, const char *path2)
	/*@modifies fileSystem@*/;

	extern int
truncate (const char *name, off_t length)
	/*@modifies errno, fileSystem@*/;

/*@constant int EBADRPC@*/
/*@constant int ERPCMISMATCH@*/
/*@constant int EPROGUNAVAIL@*/
/*@constant int EPROGMISMATCH@*/
/*@constant int EPROCUNAVAIL@*/
/*@constant int EFTYPE@*/
/*@constant int EAUTH@*/
/*@constant int ENEEDAUTH@*/
/*@constant int ELAST@*/

/*________________________________________________________________________
 * tar.h
 */

/*@unchecked@*/ extern char *TMAGIC;
/*@constant int TMAGLEN@*/
/*@unchecked@*/ extern char *TVERSION;
/*@constant int TVERSLEN@*/

/*@constant int REGTYPE@*/
/*@constant int AREGTYPE@*/
/*@constant int LNKTYPE@*/
/*@constant int SYMTYPE@*/
/*@constant int CHRTYPE@*/
/*@constant int BLKTYPE@*/
/*@constant int DIRTYPE@*/
/*@constant int FIFOTYPE@*/
/*@constant int CONTTYPE@*/

/*@constant int TSUID@*/
/*@constant int TSGID@*/
/*@constant int TSVTX@*/

/*@constant int TUREAD@*/
/*@constant int TUWRITE@*/
/*@constant int TUEXEC@*/
/*@constant int TGREAD@*/
/*@constant int TGWRITE@*/
/*@constant int TGEXEC@*/
/*@constant int TOREAD@*/
/*@constant int TOWRITE@*/
/*@constant int TOEXEC@*/

struct ipc_perm {
  uid_t	uid;	/* user id */
  gid_t	gid;	/* group id */
  uid_t	cuid;	/* creator user id */
  gid_t	cgid;	/* creator group id */
  mode_t	mode;	/* r/w permission */
  ulong	seq;	/* slot usage sequence number */
  key_t	key;	/* user specified msg/sem/shm key */
} ;

/*@constant int	IPC_R@*/
/*@constant int	IPC_W@*/
/*@constant int	IPC_M@*/
/*@constant int	IPC_CREAT@*/
/*@constant int	IPC_EXCL@*/
/*@constant int	IPC_NOWAIT@*/
/*@constant key_t IPC_PRIVATE@*/
/*@constant int IPC_RMID@*/
/*@constant int IPC_SET@*/
/*@constant int IPC_STAT@*/

/*________________________________________________________________________
 * sys/msg.h
 */

 struct msqid_ds {
	struct	ipc_perm msg_perm;	/* msg queue permission bits */
	struct	msg *msg_first;	/* first message in the queue */
	struct	msg *msg_last;	/* last message in the queue */
	u_long	msg_cbytes;	/* number of bytes in use on the queue */
	u_long	msg_qnum;	/* number of msgs in the queue */
	u_long	msg_qbytes;	/* max # of bytes on the queue */
	pid_t	msg_lspid;	/* pid of last msgsnd() */
	pid_t	msg_lrpid;	/* pid of last msgrcv() */
	time_t	msg_stime;	/* time of last msgsnd() */
	time_t	msg_rtime;	/* time of last msgrcv() */
	time_t	msg_ctime;	/* time of last msgctl() */
};

 struct mymesg {
	long	mtype;		/* message type (+ve integer) */
	char	mtext[];	/* message body */
};

/*@constant int MSG_NOERROR@*/
/*@constant int MSGMAX@*/
/*@constant int MSGMNB@*/
/*@constant int MSGMNI@*/
/*@constant int MSGTQL@*/

	extern int
msgctl (int id , int cmd, /*@out@*/ struct msqid_ds *buf)
	/*@modifies errno, *buf@*/;

	extern int
msgget (key_t key, int flag)
	/*@modifies errno@*/;

	extern int
msgrcv (int id, /*@out@*/ void *ptr, size_t nbytes, long type, int flags)
	/*@modifies errno, *ptr@*/;

	extern int
msgsnd (int id, const void *ptr, size_t nbytes, int flag)
	/*@modifies errno@*/;

/*________________________________________________________________________
 * sys/sem.h
 */

 struct semid_ds {
	struct ipc_perm sem_perm;
	struct sem     *sem_base;
	ushort          sem_nsems;
	time_t          sem_otime;
	time_t          sem_ctime;
};

 struct sem {
	ushort semval;
	pid_t  sempid;
	ushort semncnt;
	ushort semzcnt;
};

 union semun {
	int val;
	struct semid_ds *buf;
	ushort *array;
};

 struct sembuf {
	ushort sem_num;
	short sem_op;
	short sem_flg;
};

/*@constant int SEM_A@*/
/*@constant int SEMAEM@*/
/*@constant int SEMMNI@*/
/*@constant int SEMMNS@*/
/*@constant int SEMMNU@*/
/*@constant int SEMMSL@*/
/*@constant int SEMOPN@*/
/*@constant int SEM_R@*/
/*@constant int SEMUME@*/
/*@constant int SEM_UNDO@*/
/*@constant int SEMVMX@*/
/*@constant int GETVAL@*/
/*@constant int SETVAL@*/
/*@constant int GETPID@*/
/*@constant int GETNCNT@*/
/*@constant int GETZCNT@*/
/*@constant int GETALL@*/
/*@constant int SETALL@*/

/*@constant int ERMID@*/

	extern int
semctl (int id, int semnum, int cmd, union semun arg)
	/*@modifies errno@*/;

	extern int
semget (key_t key, int nsems, int flag)
	/*@modifies errno@*/;

	extern int
semop (int id, struct sembuf *semoparray, size_t nops)
	/*@modifies errno@*/;

/*________________________________________________________________________
 * sys/shm.h
 */

 struct shmid_ds {
	struct ipc_perm shm_perm;
	int shm_segsz;
	ushort shm_lkcnt;
	pid_t shm_lpid;
	pid_t shm_cpid;
	ulong shm_nattch;
	ulong shm_cnattch;
	time_t shm_atime;
	time_t shm_dtime;
	time_t shm_ctime;
};

/*@constant int SHMLBA@*/
/*@constant int SHM_LOCK@*/
/*@constant int SHMMAX@*/
/*@constant int SHMMIN@*/
/*@constant int SHMMNI@*/
/*@constant int SHM_R@*/
/*@constant int SHM_RDONLY@*/
/*@constant int SHM_RND@*/
/*@constant int SHMSEG@*/
/*@constant int SHM_W@*/
/*@constant int SHM_UNLOCK@*/

	void *
shmat (int id, /*@null@*/ void *addr, int flag)
	/*@modifies errno@*/;

	extern int
shmctl (int id, int cmd, /*@out@*/ struct shmid_ds *buf)
	/*@modifies errno, *buf@*/;

	extern int
shmdt (void *addr)
	/*@modifies errno@*/;

	extern int
shmget (key_t key, int size, int flag)
	/*@modifies errno@*/;

/*________________________________________________________________________
 * syslog.h
 */

/*@constant int LOG_EMERG@*/
/*@constant int LOG_ALERT@*/
/*@constant int LOG_CRIT@*/
/*@constant int LOG_ERR@*/
/*@constant int LOG_WARNING@*/
/*@constant int LOG_NOTICE@*/
/*@constant int LOG_INFO@*/
/*@constant int LOG_DEBUG@*/

/*@constant int LOG_KERN@*/
/*@constant int LOG_USER@*/
/*@constant int LOG_MAIL@*/
/*@constant int LOG_DAEMON@*/
/*@constant int LOG_AUTH@*/
/*@constant int LOG_SYSLOG@*/
/*@constant int LOG_LPR@*/
/*@constant int LOG_NEWS@*/
/*@constant int LOG_UUCP@*/
/*@constant int LOG_CRON@*/
/*@constant int LOG_AUTHPRIV@*/
/*@constant int LOG_FTP@*/
/*@constant int LOG_LOCAL0@*/
/*@constant int LOG_LOCAL1@*/
/*@constant int LOG_LOCAL2@*/
/*@constant int LOG_LOCAL3@*/
/*@constant int LOG_LOCAL4@*/
/*@constant int LOG_LOCAL5@*/
/*@constant int LOG_LOCAL6@*/
/*@constant int LOG_LOCAL7@*/

/*@constant int LOG_PID@*/
/*@constant int LOG_CONS@*/
/*@constant int LOG_ODELAY@*/
/*@constant int LOG_NDELAY@*/
/*@constant int LOG_NOWAIT@*/
/*@constant int LOG_PERROR@*/

	extern int
LOG_MASK (int pri)
	/*@*/;

	extern int
LOG_UPTO (int pri)
	/*@*/;

	extern void
closelog (void)
	/*@modifies fileSystem@*/;

	extern void
openlog (const char *ident, int logopt, int facility)
	/*@modifies fileSystem@*/;

	extern int
setlogmask (int maskpri)
	/*@modifies internalState@*/;

	extern void /*@printflike@*/
syslog (int priority, const char *message, ...)
	/*@modifies fileSystem@*/;

	extern void
vsyslog (int priority, const char *message, va_list args)
	/*@modifies fileSystem@*/;

/*________________________________________________________________________
 * pwd.h
 */

	extern extern void
endpwent (void)
	/*@modifies internalState@*/;

	extern /*@null@*/ struct passwd *
getpwent (void)
	/*@modifies internalState@*/;

	extern int
setpassent (int stayopen)
	/*@modifies internalState@*/;

	extern int
setpwent (void)
	/*@modifies internalState@*/;

/*________________________________________________________________________
 * grp.h
 */

	extern void
endgrent (void)
	/*@modifies internalState@*/;

	extern /*@null@*/ struct group *
getgrent (void)
	/*@modifies internalState@*/;

	extern int
setgrent (void)
	/*@modifies internalState@*/;

	extern void
setgrfile (const char *name)
	/*@modifies internalState@*/;

	extern int
setgroupent (int stayopen)
	/*@modifies internalState@*/;

/*________________________________________________________________________
 * sys/stat.h
 */

/*@constant int S_ISTXT@*/
/*@constant int S_IREAD@*/
/*@constant int S_IWRITE@*/
/*@constant int S_IEXEC@*/
/*@constant int S_IFMT@*/
/*@constant int S_IFIFO@*/
/*@constant int S_IFCHR@*/
/*@constant int S_IFDIR@*/
/*@constant int S_IFBLK@*/
/*@constant int S_IFREG@*/
/*@constant int S_IFLNK@*/
/*@constant int S_IFSOCK@*/
/*@constant int S_ISVTX@*/
/*@constant int S_ISVTX@*/
/*@constant int SF_SETTABLE@*/
/*@constant int SF_ARCHIVED@*/
/*@constant int ACCESSPERMS@*/
/*@constant int ALLPERMS@*/
/*@constant int DEFFILEMODE@*/
/*@constant int S_BLKSIZE@*/
/*@constant int SF_IMMUTABLE@*/
/*@constant int SF_APPEND@*/
/*@constant int UF_NODUMP@*/
/*@constant int UF_IMMUTABLE@*/
/*@constant int UF_APPEND@*/

	extern int /*@alt lltX_bool@*/
S_ISLNK (/*@sef@*/ mode_t m)
	/*@*/;

	extern int /*@alt lltX_bool@*/
S_ISSOCK (/*@sef@*/ mode_t m)
	/*@*/;

	extern int
chflags (const char *path, u_long flags)
	/*@modifies fileSystem, errno@*/;

	extern int
fchflags (int fd, u_long flags)
	/*@modifies fileSystem, errno@*/;

	extern int
fchmod (int fd, mode_t mode)
	/*@modifies fileSystem, errno@*/;

	extern int
lstat (const char *path, /*@out@*/ struct stat *buf)
	/*@modifies errno, *buf@*/;

/*________________________________________________________________________
 * stropts.h
 */

/*@constant int FMNAMESZ@*/
/*@constant int MSG_BAND@*/
/*@constant int MSG_HIPRI@*/
/*@constant int RS_HIPRI@*/
/*@constant int S_INPUT@*/
/*@constant int S_RDNORM@*/
/*@constant int S_RDBAND@*/
/*@constant int S_BANDURG@*/
/*@constant int S_HIPRI@*/
/*@constant int S_OUTPUT@*/
/*@constant int S_WRNORM@*/
/*@constant int S_WRBAND@*/
/*@constant int S_MSG@*/
/*@constant int S_ERROR@*/
/*@constant int S_HANGUP@*/

 struct strbuf {
	int maxlen;
	int len;
	char *buf;
}

 struct str_mlist {
	char l_name[];
}

 struct str_list {
	int sl_nmods;
	struct str_mlist *sl_modlist;
}

	extern int
getmsg (int fd, /*@out@*/ struct strbuf *c, /*@out@*/ struct strbuf *d, int *f)
	/*@modifies *c, *d, errno@*/;

	extern int
getpmsg (int fd, /*@out@*/ struct strbuf *c, /*@out@*/ struct strbuf *d, int *b, int *f)
	/*@modifies *b, *c, *d, errno@*/;

	extern int
putmsg (int fd, const struct strbuf *c, const struct strbuf *d, int *f)
	/*@modifies internalState, errno@*/;

	extern int
putpmsg (int fd, const struct strbuf *c, const struct strbuf *d, int b, int *f)
	/*@modifies internalState, errno@*/;

/*________________________________________________________________________
 * sys/resource.h
 */

/*@constant int RLIMIT_CPU@*/
/*@constant int RLIMIT_FSIZE@*/
/*@constant int RLIMIT_DATA@*/
/*@constant int RLIMIT_STACK@*/
/*@constant int RLIMIT_CORE@*/
/*@constant int RLIMIT_RSS@*/
/*@constant int RLIMIT_MEMLOCK@*/
/*@constant int RLIMIT_NPROC@*/
/*@constant int RLIMIT_NOFILE@*/
/*@constant int RLIM_NLIMITS@*/
/*@constant int RLIM_INFINITY@*/
/*@constant int PRIO_MIN@*/
/*@constant int PRIO_MAX@*/
/*@constant int PRIO_PROCESS@*/
/*@constant int PRIO_PGRP@*/
/*@constant int PRIO_USER@*/
/*@constant int RUSAGE_SELF@*/
/*@constant int RUSAGE_CHILDREN@*/

 struct rusage {
	struct timeval ru_utime;        /* user time used */
	struct timeval ru_stime;        /* system time used */
	long    ru_maxrss;              /* max resident set size */
	long    ru_ixrss;               /* integral shared memory size */
	long    ru_idrss;               /* integral unshared data " */
	long    ru_isrss;               /* integral unshared stack " */
	long    ru_minflt;              /* page reclaims */
	long    ru_majflt;              /* page faults */
	long    ru_nswap;               /* swaps */
	long    ru_inblock;             /* block input operations */
	long    ru_oublock;             /* block output operations */
	long    ru_msgsnd;              /* messages sent */
	long    ru_msgrcv;              /* messages received */
	long    ru_nsignals;            /* signals received */
	long    ru_nvcsw;               /* voluntary context switches */
	long    ru_nivcsw;              /* involuntary " */
};

 struct rlimit {
	long  rlim_cur;
	long  rlim_max;
};

 struct loadavg {
	unsigned long ldavg[3];
	long fscale;
};

	extern int
getpriority (int which, int who)
	/*@modifies errno@*/;

	extern int
getrlimit (int res, /*@out@*/ struct rlimit *rlp)
	/*@modifies *rlp, errno@*/;

	extern int
getrusage (int who, /*@out@*/ struct rusage *rusage)
	/*@modifies *rusage, errno@*/;

	extern int
setpriority (int which, int who, int prio)
	/*@modifies errno, internalState@*/;

	extern int
setrlimit (int resource, const struct rlimit *rlp)
	/*@modifies errno, internalState@*/;


/*
** in <netdb.h>
*/

struct servent
{
  /*@observer@*/ char *s_name;			/* Official service name.  */
  /*@observer@*/ char **s_aliases;		/* Alias list.  */
  int s_port;			                /* Port number.  */
  /*@observer@*/ char *s_proto;		        /* Protocol to use.  */
} ;

/*@observer@*/ /*@dependent@*/ /*@null@*/ struct servent *getservbyname (const char *name, /*@null@*/ const char *proto) 
     /*@warn multithreaded "Unsafe in multithreaded applications, use getsrvbyname_r instead"@*/ ;

struct servent *getservbyname_r (const char *name, /*@null@*/ const char *proto, /*@out@*/ /*@returned@*/ struct servent *result, /*@out@*/ char *buffer, int buflen) 
     /*@requires maxSet (buffer) >= buflen@*/ ;


/*@observer@*/ /*@dependent@*/ struct servent *getservbyport (int port, /*@null@*/ const char *proto)
     /*@warn multithreaded "Unsafe in multithreaded applications, use getservbyport_r instead"@*/ ;

struct servent *getservbyport_r (int port, /*@null@*/ const char *proto, /*@out@*/ /*@returned@*/ struct servent *result, /*@out@*/ char *buffer, int buflen)
     /*@requires maxSet (buffer) >= buflen@*/ ;

/*@null@*/ struct servent *getservent (void);

/*@null@*/ struct servent *getservent_r (struct servent *result, char *buffer, int buflen);

int setservent (int stayopen);

int endservent (void);


extern int h_errno;

/*@null@*/ /*@observer@*/ struct hostent *gethostbyname (/*@nullterminated@*/ /*@notnull@*/ const char *name)
     /*@warn multithreaded "Unsafe in multithreaded applications, use gethostbyname_r instead"@*/ 
     /*@modifies h_errno@*/ ;

struct hostent *gethostbyname_r (/*@nullterminated@*/ const char *name, /*@notnull@*/ /*@returned@*/ struct hostent *hent, /*@out@*/ /*@exposed@*/ char *buffer, int bufsize, /*@out@*/ int *h_errnop)
     /*@requires maxSet(buffer) >= bufsize@*/ ;

/*@null@*/ /*@observer@*/ struct hostent *gethostbyaddr (/*@notnull@*/ const void *addr, size_t addrlen, int type) 
     /*@requires maxRead(addr) == addrlen@*/ /*@i534 ??? is this right? */
     /*@warn multithreaded "Unsafe in multithreaded applications, use gethostbyaddr_r instead"@*/ 
     /*@modifies h_errno@*/ ;

struct hostent *gethostbyaddr_r (/*@notnull@*/ const void *addr, size_t addrlen, int type, 
				 /*@returned@*/ /*@out@*/ struct hostent *hent, 
				 /*@exposed@*/ /*@out@*/ char *buffer, int bufsize, /*@out@*/ int *h_errnop)
     /*@requires maxRead(addr) == addrlen 
          /\ maxSet(buffer) >= bufsize@*/ /*@i534 ??? is this right? */ ;

/*@observer@*/ /*@null@*/ struct hostent *gethostent (void)
    /*@warn multithreaded "Unsafe in multithreaded applications, use gethostent_r instead"@*/ ;

struct hostent *gethostent_r (/*@out@*/ /*@returned@*/ struct hostent *hent, /*@exposed@*/ /*@out@*/ char *buffer, int bufsize)
     /*@requires maxSet(buffer) >= bufsize@*/ ;

     /*@i534 need to annotate these: */
struct hostent *fgethostent(FILE *f);

struct hostent *fgethostent_r(FILE*f, struct hostent *hent, char buffer, int bufsize);

void sethostent(int stayopen);

void endhostent(void);

void herror(const char *string);

char *hstrerror(int err);

struct hostent {
  /*@observer@*/ /*@nullterminated@*/ char *h_name;   /* official name of host */
  /*@observer@*/ /*@nullterminated@*/ char * /*:observer@*/ /*:nullterminated@*/ *h_aliases;   /* alias list */
  int  h_addrtype;   /* host address type*/
  int  h_length;   /* length ofaddress*/
  /*@observer@*/ /*@nullterminated@*/ char * /*:observer@*/ /*:nullterminated@*/ *h_addr_list; /* list of addressesfrom name server */
  /*@observer@*/ /*@nullterminated@*/ char *h_addr; /* first address in list (backward compatibility) */
} ;

/*
** arpa/inet.h
*/

typedef uint32_t in_addr_t;

struct in_addr
{
  in_addr_t s_addr;
};

typedef uint16_t in_port_t;

in_addr_t htonl (in_addr_t hostlong) /*@*/ ;
in_port_t htons (in_port_t hostshort) /*@*/ ;
in_addr_t ntohl (in_addr_t netlong) /*@*/ ;
in_port_t ntohs (in_port_t netshort) /*@*/ ;

/*
** unistd.h
*/

int chroot (/*@notnull@*/ /*@nullterminated@*/ const char *path)
   /*:statusreturn@*/
   /*@warn superuser "Only super-user processes may call chroot."@*/
     /*: other wanings? */ ;

int fchroot (int fildes)
   /*:statusreturn@*/
   /*@warn superuser "Only super-user processes may call fchroot."@*/ ;
