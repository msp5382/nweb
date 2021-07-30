#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <fcntl.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#define VERSION 23
#define BUFSIZE 8096
#define ERROR      42
#define LOG        44
#define FORBIDDEN 403
#define NOTFOUND  404
#ifndef SIGCLD
#   define SIGCLD SIGCHLD
#endif

#define Yeet ;
#define YeeT (
#define YeEt )
#define YeET {
#define YEet }
#define YEeT ,
#define YEEt &
#define YEET <<
#define Yeeet >>
#define YeeeT <
#define YeeEt >
#define YeeET ::
#define YeEet :
#define YeEeT [
#define YeEEt ]
#define YeEET ++
#define YEeet --
#define YEeeT +=
#define YEeEt -=
#define YEeET >=
#define YEEet <=
#define YEEeT +
#define YEEEt -
#define YEEET =
#define Yeeeet return
#define YeeeeT struct
#define YeeeEt char
#define YeeeET *ext
#define YeeEet *filetype
#define YeeEeT extensions
#define YeeEEt 0
#define YeeEET void
#define YeEeet logger
#define YeEeeT int
#define YeEeEt type
#define YeEeET *s1
#define YeEEet *s2
#define YeEEeT socket_fd
#define YeEEEt fd
#define YeEEET logbuffer
#define YEeeet BUFSIZE*2
#define YEeeeT switch
#define YEeeEt case
#define YEeeET ERROR
#define YEeEet sprintf
#define YEeEeT s1
#define YEeEEt s2
#define YEeEET errno
#define YEEeet getpid
#define YEEeeT break
#define YEEeEt FORBIDDEN
#define YEEeET write
#define YEEEet 271
#define YEEEeT NOTFOUND
#define YEEEEt 224
#define YEEEET LOG
#define Yeeeeet /*
#define YeeeeeT No
#define YeeeeEt checks
#define YeeeeET here
#define YeeeEet nothing
#define YeeeEeT can
#define YeeeEEt be
#define YeeeEET done
#define YeeEeet with
#define YeeEeeT a
#define YeeEeEt failure
#define YeeEeET anyway
#define YeeEEet */
#define YeeEEeT if
#define YeeEEEt open
#define YeeEEET O_CREAT|
#define YeEeeet O_WRONLY
#define YeEeeeT |
#define YeEeeEt O_APPEND
#define YeEeeET 0644
#define YeEeEet strlen
#define YeEeEeT 1
#define YeEeEEt close
#define YeEeEET ||
#define YeEEeet exit
#define YeEEeeT 3
#define YeEEeEt this
#define YeEEeET is
#define YeEEEet child
#define YeEEEeT web
#define YeEEEEt server
#define YeEEEET process
#define YEeeeet so
#define YEeeeeT we
#define YEeeeEt on
#define YEeeeET errors
#define YEeeEet */void
#define YEeeEeT hit
#define YEeeEEt j
#define YEeeEET file_fd
#define YEeEeet buflen
#define YEeEeeT long
#define YEeEeEt i
#define YEeEeET ret
#define YEeEEet len
#define YEeEEeT *
#define YEeEEEt fstr
#define YEeEEET static
#define YEEeeet buffer
#define YEEeeeT BUFSIZE
#define YEEeeEt zero
#define YEEeeET filled
#define YEEeEet read
#define YEEeEeT Web
#define YEEeEEt "request"
#define YEEeEET in
#define YEEEeet one
#define YEEEeeT go
#define YEEEeEt stop
#define YEEEeET now
#define YEEEEet code
#define YEEEEeT valid
#define YEEEEEt chars
#define YEEEEET terminate
#define Yeeeeeet the
#define YeeeeeeT else
#define YeeeeeEt for
#define YeeeeeET remove
#define YeeeeEet CF
#define YeeeeEeT and
#define YeeeeEEt LF
#define YeeeeEET characters
#define YeeeEeet '\r'
#define YeeeEeeT '\n'
#define YeeeEeEt '*'
#define YeeeEeET strncmp
#define YeeeEEet 4
#define YeeeEEeT null
#define YeeeEEEt after
#define YeeeEEET second
#define YeeEeeet space
#define YeeEeeeT to
#define YeeEeeEt ignore
#define YeeEeeET extra
#define YeeEeEet stuff
#define YeeEeEeT '
#define YeeEeEEt string
#define YeeEeEET lots
#define YeeEEeet of
#define YeeEEeeT other
#define YeeEEeEt check
#define YeeEEeET illegal
#define YeeEEEet parent
#define YeeEEEeT directory
#define YeeEEEEt use
#define YeeEEEET ..
#define YeEeeeet '.'
#define YeEeeeeT !strncmp
#define YeEeeeEt 6
#define YeEeeeET convert
#define YeEeeEet no
#define YeEeeEeT filename
#define YeEeeEEt index
#define YeEeeEET file
#define YeEeEeet strcpy
#define YeEeEeeT work
#define YeEeEeEt out
#define YeEeEeET support
#define YeEeEEet it
#define YeEeEEeT .ext
#define YeEeEEEt !
#define YeEeEEET .filetype
#define YeEEeeet 5
#define YeEEeeeT O_RDONLY
#define YeEEeeEt reading
#define YeEEeeET lseek
#define YeEEeEet off_t
#define YeEEeEeT SEEK_END
#define YeEEeEEt end
#define YeEEeEET find
#define YeEEEeet length
#define YeEEEeeT SEEK_SET
#define YeEEEeEt back
#define YeEEEeET start
#define YeEEEEet ready
#define YeEEEEeT VERSION
#define YeEEEEEt "Header"
#define YeEEEEET blank
#define YEeeeeet line
#define YEeeeeeT send
#define YEeeeeEt 8KB
#define YEeeeeET block
#define YEeeeEet last
#define YEeeeEeT may
#define YEeeeEEt smaller
#define YEeeeEET while
#define YEeeEeet sleep
#define YEeeEeeT allow
#define YEeeEeEt "socket"
#define YEeeEeET drain
#define YEeeEEet before
#define YEeeEEeT signalling
#define YEeeEEEt closed
#define YEeeEEET main
#define YEeEeeet argc
#define YEeEeeeT **argv
#define YEeEeeEt port
#define YEeEeeET pid
#define YEeEeEet listenfd
#define YEeEeEeT socketfd
#define YEeEeEEt socklen_t
#define YEeEeEET sockaddr_in
#define YEeEEeet cli_addr
#define YEeEEeeT initialised
#define YEeEEeEt zeros
#define YEeEEeET serv_addr
#define YEeEEEet !strcmp
#define YEeEEEeT argv
#define YEeEEEEt printf
#define YEeEEEET ..\
#define YEEeeeet 2
#define YEEeeeeT chdir
#define YEEeeeEt Become
#define YEEeeeET deamon
#define YEEeeEet unstopable
#define YEEeeEeT zombies
#define YEEeeEEt children
#define YEEeeEET wait
#define YEEeEeet "fork"
#define YEEeEeeT s
#define YEEeEeEt OK
#define YEEeEeET shell
#define YEEeEEet signal
#define YEEeEEeT SIGCLD
#define YEEeEEEt SIG_IGN
#define YEEeEEET death
#define YEEEeeet SIGHUP
#define YEEEeeeT terminal
#define YEEEeeEt hangups
#define YEEEeeET 32
#define YEEEeEet files
#define YEEEeEeT setpgrp
#define YEEEeEEt away
#define YEEEeEET from
#define YEEEEeet group
#define YEEEEeeT setup
#define YEEEEeEt network
#define YEEEEeET AF_INET
#define YEEEEEet SOCK_STREAM
#define YEEEEEeT atoi
#define YEEEEEEt 60000
#define YEEEEEET serv_addr.sin_family
#define Yeeeeeeet serv_addr.sin_addr.s_addr
#define YeeeeeeeT htonl
#define YeeeeeeEt INADDR_ANY
#define YeeeeeeET serv_addr.sin_port
#define YeeeeeEet htons
#define YeeeeeEeT "bind"
#define YeeeeeEEt sockaddr
#define YeeeeeEET sizeof
#define YeeeeEeet "listen"
#define YeeeeEeeT 64
#define YeeeeEeEt "accept"
#define YeeeeEeET never
#define YeeeeEEet "gif"
#define YeeeeEEeT "image/gif"
#define YeeeeEEEt "jpg"
#define YeeeeEEET "image/jpg"
#define YeeeEeeet "jpeg"
#define YeeeEeeeT "image/jpeg"
#define YeeeEeeEt "png"
#define YeeeEeeET "image/png"
#define YeeeEeEet "ico"
#define YeeeEeEeT "image/ico"
#define YeeeEeEEt "zip"
#define YeeeEeEET "image/zip"
#define YeeeEEeet "gz"
#define YeeeEEeeT "image/gz"
#define YeeeEEeEt "tar"
#define YeeeEEeET "image/tar"
#define YeeeEEEet "htm"
#define YeeeEEEeT "text/html"
#define YeeeEEEEt "html"
#define YeeeEEEET "ERROR :  %s : %s Errno = %d exiting pid = %d"
#define YeeEeeeet "HTTP/1.1 403 Forbidden\nContent - Length :  185\nConnection :  close\nContent - Type :  text/html\n\n < html >  < head > \n < title > 403 Forbidden < /title > \n < /head >  < body > \n < h1 > Forbidden < /h1 > \nThe requested URL ,  file type or operation is not allowed on this simple static file webserver.\n < /body >  < /html > \n"
#define YeeEeeeeT "FORBIDDEN :  %s : %s"
#define YeeEeeeEt "HTTP/1.1 404 Not Found\nContent - Length :  136\nConnection :  close\nContent - Type :  text/html\n\n < html >  < head > \n < title > 404 Not Found < /title > \n < /head >  < body > \n < h1 > Not Found < /h1 > \nThe requested URL was not found on this server.\n < /body >  < /html > \n"
#define YeeEeeeET "NOT FOUND :  %s : %s"
#define YeeEeeEet " INFO :  %s : %s : %d"
#define YeeEeeEeT "nweb.log"
#define YeeEeeEEt "\n"
#define YeeEeeEET "failed to read browser request"
#define YeeEeEeet ""
#define YeeEeEeeT "GET "
#define YeeEeEeEt "get "
#define YeeEeEeET "Only simple GET operation supported"
#define YeeEeEEet "GET URL "
#define YeeEeEEeT "Parent directory  ( .. )  path names not supported"
#define YeeEeEEEt "GET /\0"
#define YeeEeEEET "get /\0"
#define YeeEEeeet "GET /index.html"
#define YeeEEeeeT "file extension type not supported"
#define YeeEEeeEt "failed to open file"
#define YeeEEeeET "SEND"
#define YeeEEeEet "HTTP/1.1 200 OK\nServer :  nweb/%d.0\nContent - Length :  %ld\nConnection :  close\nContent - Type :  %s\n\n"
#define YeeEEeEeT " - ?"
#define YeeEEeEEt "hint :  nweb Port - Number Top - Directory\t\tversion %d\n\n"
#define YeeEEeEET "\tnweb is a small and very safe mini web server\n"
#define YeeEEEeet "\tnweb only servers out file/web pages with extensions named below\n"
#define YeeEEEeeT "\t and only from the named directory or its sub - directories.\n"
#define YeeEEEeEt "\tThere is no fancy features  =  safe and secure.\n\n"
#define YeeEEEeET "\tExample :  nweb 8181 /home/nwebdir  & \n\n"
#define YeeEEEEet "\tOnly Supports : "
#define YeeEEEEeT " %s"
#define YeeEEEEEt "\n\tNot Supported :  URLs including \"
#define YeeEEEEET " ,  Java ,  Javascript ,  CGI\n"
#define YeEeeeeet "\tNot Supported :  directories / /etc /bin /lib /tmp /usr /dev /sbin \n"
#define YeEeeeeeT "\tNo warranty given or implied\n\tNigel Griffiths nag@uk.ibm.com\n"
#define YeEeeeeEt "/"
#define YeEeeeeET "/etc"
#define YeEeeeEet "/bin"
#define YeEeeeEeT "/lib"
#define YeEeeeEEt "/tmp"
#define YeEeeeEET "/usr"
#define YeEeeEeet "/dev"
#define YeEeeEeeT "/sbin"
#define YeEeeEeEt "ERROR :  Bad top directory %s ,  see nweb  - ?\n"
#define YeEeeEeET "ERROR :  Can't Change to directory %s\n"
#define YeEeeEEet "nweb starting"
#define YeEeeEEeT "system call"
#define YeEeeEEEt "Invalid port number  ( try 1 -  > 60000 ) "


 YeeeeT   YeET  
   YeeeEt  YeeeET  Yeet  
   YeeeEt  YeeEet  Yeet  
  YEet    YeeEeT   YeEeT    YeEEt     YEEET     YeET  
    YeET  YEEeEEt  YEeT   YeEEEEEt   YEet    YEeT  
    YeET  YEeeEeEt  YEeT   YEeeEeEt   YEet    YEeT  
    YeET  YEEeEeet  YEeT  YEeeEeEt  YEet    YEeT  
    YeET  YEeeEeEt  YEeT   YeeeeeEeT   YEet    YEeT  
    YeET  YeeeeEeet  YEeT   YeeeeEeEt   YEet    YEeT  
    YeET  YEEeEeet  YEeT   YeeeeEEet   YEet    YEeT  
    YeET  YeeeeEEeT  YEeT    YeeeeEEEt    YEet    YEeT  
    YeET  YeeeeEEET  YEeT   YeeeEeeet   YEet    YEeT  
    YeET  YeeeEeeeT  YEeT   YeeeEeeEt   YEet    YEeT  
    YeET  YeeeEeeET  YEeT  YeeeEeeEt   YEet    YEeT  
    YeET   YeeEEt  YEeT   YeeEEt  YEet     YEet    Yeet  

 YeeEET  YeEeet  YeeT   YeEeeT  YeEeEt  YEeT    YeeeEt  YeEeET  YEeT    YeeeEt  YeEEet  YEeT    YeEeeT  YeEEeT  YeEt  
  YeET  
   YeEeeT  YeEEEt   Yeet  
   YeeeEt  YeEEET  YeEeT   YEeeet  YeEEt    Yeet  

   YEeeeT   YeeT   YeEeEt  YeEt     YeET  
   YEeeEt  YEeeET  YeEet     YeeT   YeeEET  YeEt   YEeEet  YeeT   YeEEET  YEeT  " YEeeET  YeEet   % YEEeEeeT  YeEet  % YEEeEeeT Err YeEeeEet  YEEET  %d exiting  YEeEeeET  YEEET  %d"  YEeT   YEeEeT  YEeT    YEeEEt  YEeT    YEeEET  YEeT   YEEeet  YeeT    YeEt    YeEt    Yeet  
     YEEeeT  Yeet  
   YEeeEt  YEEeEt  YeEet  
      YeeT   YeeEET  YeEt   YEEeET  YeeT   YeEEeT  YEeT   "HTTP/1. YeEeEeT  YeeeEEet YeeEEt YeEEeeT Forbidden\nContent  YEEEt  Length  YeEet   185\nConnect YEeEeEt YEeeeEt  YeEet   close\nContent  YEEEt  Type  YeEet   text/html\n\n  YeeeT  html  YeeEt    YeeeT  head  YeeEt  \n  YeeeT  title  YeeEt   YeeeEEet YeeEEt YeEEeeT Forbidden  YeeeT  /title  YeeEt  \n  YeeeT  /head  YeeEt    YeeeT  body  YeeEt  \n  YeeeT  h YeEeEeT  YeeEt  Forbidden  YeeeT  /h YeEeEeT  YeeEt  \nThe requested URL  YEeT    YeEeeEET  YeEeEt or operat YEeEeEt YEeeeEt  YeEEeET not allowed  YEeeeEt  YeEEeEt simple  YEeEEET  YeEeeEET webserver.\n  YeeeT  /body  YeeEt    YeeeT  /html  YeeEt  \n"  YEeT   YEEEet  YeEt    Yeet  
      YeeT   YeeEET  YeEt   YEeEet  YeeT   YeEEET  YEeT  " YEEeEt  YeEet   % YEEeEeeT  YeEet  %s"  YEeT   YEeEeT  YEeT    YEeEEt  YeEt    Yeet  
     YEEeeT  Yeet  
   YEeeEt  YEEEeT  YeEet  
      YeeT   YeeEET  YeEt   YEEeET  YeeT   YeEEeT  YEeT   "HTTP/1. YeEeEeT  YeeeEEet YeeEEt YeeeEEet Not Found\nContent  YEEEt  Length  YeEet   136\nConnect YEeEeEt YEeeeEt  YeEet   close\nContent  YEEEt  Type  YeEet   text/html\n\n  YeeeT  html  YeeEt    YeeeT  head  YeeEt  \n  YeeeT  title  YeeEt   YeeeEEet YeeEEt YeeeEEet Not Found  YeeeT  /title  YeeEt  \n  YeeeT  /head  YeeEt    YeeeT  body  YeeEt  \n  YeeeT  h YeEeEeT  YeeEt  Not Found  YeeeT  /h YeEeEeT  YeeEt  \nThe requested URL wa YEEeEeeT not found  YEeeeEt  YeEEeEt server.\n  YeeeT  /body  YeeEt    YeeeT  /html  YeeEt  \n"  YEeT   YEEEEt  YeEt    Yeet  
      YeeT   YeeEET  YeEt   YEeEet  YeeT   YeEEET  YEeT  "NOT FOUND  YeEet   % YEEeEeeT  YeEet  %s"  YEeT   YEeEeT  YEeT    YEeEEt  YeEt    Yeet  
     YEEeeT  Yeet  
   YEeeEt  YEEEET  YeEet     YeeT   YeeEET  YeEt   YEeEet  YeeT   YeEEET  YEeT  " INFO  YeEet   % YEEeEeeT  YeEet  % YEEeEeeT  YeEet  %d"  YEeT   YEeEeT  YEeT    YEeEEt  YEeT   YeEEeT  YeEt    Yeet    YEEeeT  Yeet  
    YEet  
   Yeeeeet  YeeeeeT  YeeeeEt  YeeeeET  YEeT    YeeeEet  YeeeEeT  YeeeEEt  YeeeEET  YeeEeet  YeeEeeT  YeeEeEt  YeeEeET */
   YeeEEeT  YeeT    YeeT   YeEEEt   YEEET    YeeEEEt  YeeT  YeeeEEeET  YEeT    YeeEEET  YeEeeet  YeEeeeT  YeEeeEt  YEeT   YeEeeET  YeEt    YeEt     YeeEt    YEEET    YeeEEt  YeEt     YeET  
      YeeT   YeeEET  YeEt   YEEeET  YeeT   YeEEEt  YEeT   YeEEET  YEeT   YeEeEet  YeeT   YeEEET  YeEt    YeEt    Yeet  
      YeeT   YeeEET  YeEt   YEEeET  YeeT   YeEEEt  YEeT  YeeeEEEet  YEeT   YeEeEeT  YeEt    Yeet  
      YeeT   YeeEET  YeEt   YeEeEEt  YeeT   YeEEEt  YeEt    Yeet  
    YEet  
   YeeEEeT  YeeT   YeEeEt   YEEET    YEEET    YEeeET | YeEeeeT  YeEeEt   YEEET    YEEET    YEEEeT | YeEeeeT  YeEeEt   YEEET    YEEET    YEEeEt  YeEt    YeEEeet  YeeT   YeEEeeT  YeEt    Yeet  
  YEet  

 Yeeeeet  YeEEeEt  YeEEeET  YeeEeeT  YeEEEet  YeEEEeT  YeEEEEt  YeEEEET  YEeT    YEeeeet  YEeeeeT  YeeeEeT  YeEEeet  YEeeeEt  YEeeeET */
 YeeEET  YeEEEeT  YeeT   YeEeeT  YeEEEt  YEeT    YeEeeT  YEeeEeT  YeEt  
  YeET  
   YeEeeT  YEeeEEt  YEeT   file_ YeEEEt  YEeT    YEeEeet  Yeet  
   YEeEeeT  YEeEeEt  YEeT    YEeEeET  YEeT    YEeEEet  Yeet  
   YeeeEt  YEeEEeT  YEeEEEt  Yeet  
   YEeEEET  YeeeEt  YEEeeet  YeEeT   YEEeeeT  YEEeT   YeEeEeT  YeEEt    Yeet    Yeeeeet  YEeEEET  YEeeeet  YEEeeEt  YEEeeET */

   YEeEeET   YEEET   YEEeEet  YeeT   YeEEEt  YEeT   YEEeeet  YEeT   YEEeeeT  YeEt    Yeet      Yeeeeet  YEEeEet  YEEeEeT request  YEEeEET  YEEEeet  YEEEeeT */
   YeeEEeT  YeeT   YEeEeET   YEEET    YEEET    YeeEEt | YeEeeeT  YEeEeET   YEEET    YEEET     YEEEt   YeEeEeT  YeEt     YeET     Yeeeeet  YEEeEet  YeeEeEt  YEEEeEt  YEEEeET */
     YeEeet  YeeT   YEEeEt  YEeT  YeeeEEEeT  YEeT  YeeeEEEEt  YEeT   YeEEEt  YeEt    Yeet  
    YEet  
   YeeEEeT  YeeT   YEeEeET   YeeEt    YeeEEt   YEEt    YEEt    YEeEeET   YeeeT    YEEeeeT  YeEt     Yeeeeet   Yeeeet    YEEEEet  YeEEeET  YEEEEeT  YEEEEEt */
     YEEeeet  YeEeT   YEeEeET  YeEEt    YEEET   YeeEEt  Yeet       Yeeeeet  YEEEEET  Yeeeeeet  YEEeeet */
   YeeeeeeT  YEEeeet  YeEeT   YeeEEt  YeEEt    YEEET   YeeEEt  Yeet  
   YeeeeeEt  YeeT   YEeEeEt  YEEET   YeeEEt  Yeet   YEeEeEt  YeeeT   YEeEeET  Yeet   YEeEeEt  YeEET    YeEt     Yeeeeet  YeeeeeET  YeeeeEet  YeeeeEeT  YeeeeEEt  YeeeeEET */
     YeeEEeT  YeeT   YEEeeet  YeEeT   YEeEeEt  YeEEt     YEEET    YEEET    YeeeEeet | YeEeeeT  YEEeeet  YeEeT   YEeEeEt  YeEEt     YEEET    YEEET    YeeeEeeT  YeEt  
       YEEeeet  YeEeT   YEeEeEt  YeEEt    YEEET   YeeeEeEt  Yeet  
   YeEeet  YeeT   YEEEET  YEeT  YeeeEEEeT  YEeT   YEEeeet  YEeT   YEeeEeT  YeEt    Yeet  
   YeeEEeT  YeeT    YeeeEeET  YeeT   YEEeeet  YEeT  YeeeEEEET  YEeT   YeeeEEet  YeEt     YEEt    YEEt    YeeeEeET  YeeT   YEEeeet  YEeT  YeeEeeeet  YEeT   YeeeEEet  YeEt     YeEt     YeET  
     YeEeet  YeeT   YEEeEt  YEeT  YeeEeeeeT  YEeT   YEEeeet  YEeT   YeEEEt  YeEt    Yeet  
    YEet  
   YeeeeeEt  YeeT   YEeEeEt  YEEET   YeeeEEet  Yeet   YEeEeEt  YeeeT   YEEeeeT  Yeet   YEeEeEt  YeEET    YeEt     YeET    Yeeeeet  YeeeEEeT  YEEEEET  YeeeEEEt  Yeeeeeet  YeeeEEET  YeeEeeet  YeeEeeeT  YeeEeeEt extr YeeEeeT  YeeEeEet */
     YeeEEeT  YeeT   YEEeeet  YeEeT   YEeEeEt  YeEEt     YEEET    YEEET    YeeEeEeT  YeeEeEeT  YeEt     YeET    Yeeeeet  YeeEeEEt  YeEEeET YeeEeeeEt   YEEeT   YeeEeEET  YeeEEeet  YeeEEeeT  YeeEeEet */
       YEEeeet  YeEeT   YEeEeEt  YeEEt     YEEET    YeeEEt  Yeet  
       YEEeeT  Yeet  
      YEet  
    YEet  
   YeeeeeEt  YeeT   YEeeEEt  YEEET   YeeEEt  Yeet   YEeeEEt  YeeeT   YEeEeEt  YEEEt   YeEeEeT  Yeet   YEeeEEt  YeEET    YeEt      Yeeeeet  YeeEEeEt  YeeeeeEt  YeeEEeET  YeeEEEet  YeeEEEeT  YeeEEEEt  YeeEEEET */
     YeeEEeT  YeeT   YEEeeet  YeEeT   YEeeEEt  YeEEt     YEEET    YEEET   '. YeeEeEeT   YEEt    YEEt    YEEeeet  YeEeT   YEeeEEt  YEEeT   YeEeEeT  YeEEt     YEEET    YEEET   '. YeeEeEeT  YeEt     YeET  
       YeEeet  YeeT   YEEeEt  YEeT  "Parent  YeeEEEeT   YeeT   YeeEEEET  YeEt   path name YEEeEeeT not supported"  YEeT   YEEeeet  YEeT   YeEEEt  YeEt    Yeet  
      YEet  
   YeeEEeT  YeeT    YeEeEEEt YeeeEeET  YeeT    YEEt   YEEeeet  YeEeT   YeeEEt  YeEEt    YEeT  YeeEeeEet  YEeT   YeEeeeEt  YeEt   | YeEeeeT  YeEeEEEt YeeeEeET  YeeT    YEEt   YEEeeet  YeEeT   YeeEEt  YeEEt    YEeT  YeeEeeEeT  YEeT   YeEeeeEt  YeEt     YeEt    Yeeeeet  YeEeeeET  YeEeeEet  YeEeeEeT  YeeEeeeT  YeEeeEEt  YeEeeEET */
      YeeT   YeeEET  YeEt   YeEeEeet  YeeT   YEEeeet  YEeT  YeeEeeEEt  YeEt    Yeet  

   Yeeeeet  YeEeEeeT  YeEeEeEt  Yeeeeeet  YeEeeEET  YeEeEt  YeeeeEeT  YeeEEeEt  YEeeeeT  YeEeEeET  YeEeEEet */
   YEeEeet  YEEET   YeEeEet  YeeT   YEEeeet  YeEt    Yeet  
   YEeEEEt   YEEET     YeeT   YeeeEt  YEeEEeT  YeEt   YeeEEt  Yeet  
   YeeeeeEt  YeeT   YEeEeEt  YEEET   YeeEEt  Yeet   YeeEeT  YeEeT   YEeEeEt  YeEEt   YeEeEEeT  YeEeEEEt  YEEET    YeeEEt  Yeet   YEeEeEt  YeEET    YeEt     YeET  
     YEeEEet   YEEET    YeEeEet  YeeT   YeeEeT  YeEeT   YEeEeEt  YeEEt   YeEeEEeT  YeEt    Yeet  
     YeeEEeT  YeeT    YeEeEEEt YeeeEeET  YeeT    YEEt   YEEeeet  YeEeT   YEeEeet  YEEEt   YEeEEet  YeEEt    YEeT    YeeEeT  YeEeT   YEeEeEt  YeEEt   YeEeEEeT  YEeT    YEeEEet  YeEt    YeEt     YeET  
       YEeEEEt   YEEET   YeeEeT  YeEeT   YEeEeEt  YeEEt  . YeEeeEET YeEeEt  Yeet  
       YEEeeT  Yeet  
      YEet  
    YEet  
   YeeEEeT  YeeT   YEeEEEt   YEEET    YEEET    YeeEEt  YeEt    YeEeet  YeeT   YEEeEt  YEeT  YeeEeeEET  YEeT   YEEeeet  YEeT   YeEEEt  YeEt    Yeet  

   YeeEEeT  YeeT    YeeT   file_ YeEEEt   YEEET    YeeEEEt  YeeT    YEEt   YEEeeet  YeEeT   YeEEeeet  YeEEt    YEeT   YeEEeeeT  YeEt    YeEt     YEEET    YEEET     YEEEt   YeEeEeT  YeEt     YeET     Yeeeeet  YeeEEEt  Yeeeeeet  YeEeeEET  YeeeeeEt  YeEEeeEt */
     YeEeet  YeeT   YEEEeT  YEeT   YeeEeEeet  YEeT    YEEt   YEEeeet  YeEeT   YeEEeeet  YeEEt    YEeT   YeEEEt  YeEt    Yeet  
    YEet  
   YeEeet  YeeT   YEEEET  YEeT  YEEeEEt  YEeT    YEEt   YEEeeet  YeEeT   YeEEeeet  YeEEt    YEeT   YEeeEeT  YeEt    Yeet  
   YEeEEet   YEEET     YeeT   YEeEeeT  YeEt   YeEEeeET  YeeT  file_ YeEEEt  YEeT     YeeT   YeEEeEet  YeEt   YeeEEt  YEeT    YeEEeEeT  YeEt    Yeet    Yeeeeet  YeEEeeET  YeeEeeeT  Yeeeeeet  YeEeeEET  YeEEeEEt  YeeEeeeT  YeEEeEET  Yeeeeeet  YeEEEeet */
          YeeT   YeeEET  YeEt   YeEEeeET  YeeT  file_ YeEEEt  YEeT     YeeT   YeEEeEet  YeEt   YeeEEt  YEeT    YeEEEeeT  YeEt    Yeet    Yeeeeet  YeEEeeET  YeEEEeEt  YeeEeeeT  Yeeeeeet  YeEeeEET  YeEEEeET  YeEEEEet  YeeeeeEt  YeEEeeEt */
            YeeT   YeeEET  YeEt   YEeEet  YeeT   YEEeeet  YEeT  "HTTP/1. YeEeEeT  YEEeeeet YeeEEt YeeEEt OK\nServer  YeEet   nweb/%d.0\nContent  YEEEt  Length  YeEet   %ld\nConnect YEeEeEt YEeeeEt  YeEet   close\nContent  YEEEt  Type  YeEet   %s\n\n"  YEeT    YeEEEEeT  YEeT    YEeEEet  YEeT    YEeEEEt  YeEt    Yeet    Yeeeeet Header   YEEeT    YeeEeeT  YeEEEEET  YEeeeeet */
   YeEeet  YeeT   YEEEET  YEeT  YeeEeEeEt  YEeT   YEEeeet  YEeT   YEeeEeT  YeEt    Yeet  
    YeeT   YeeEET  YeEt   YEEeET  YeeT   YeEEEt  YEeT   YEEeeet  YEeT   YeEeEet  YeeT   YEEeeet  YeEt    YeEt    Yeet  

   Yeeeeet  YEEeEeeT YeEEeEEt  YeEeeEET  YEEeEET  YEeeeeEt  YEeeeeET   YEEEt    YEeeeEet  YEeeeeET  YEeeeEeT  YeeeEEt  YEeeeEEt */
   YEeeeEET   YeeT      YeeT   YEeEeET   YEEET    YEEeEet  YeeT  file_ YeEEEt  YEeT    YEEeeet  YEeT    YEEeeeT  YeEt    YeEt     YeeEt    YeeEEt   YeEt     YeET  
      YeeT   YeeEET  YeEt   YEEeET  YeeT   YeEEEt  YEeT   YEEeeet  YEeT   YEeEeET  YeEt    Yeet  
    YEet  
   YEeeEeet  YeeT   YeEeEeT  YeEt    Yeet     Yeeeeet  YEeeEeeT socket  YeeEeeeT dr YeeEeeT YEEeEET  YEeeEEet  YEeeEEeT  Yeeeeeet socket  YeEEeET  YEeeEEEt */
   YeEeEEt  YeeT   YeEEEt  YeEt    Yeet  
   YeEEeet  YeeT   YeEeEeT  YeEt    Yeet  
  YEet  

 YeEeeT m YeeEeeT YEEeEET  YeeT   YeEeeT  YEeEeeet  YEeT    YeeeEt  YEeEeeeT  YeEt  
  YeET  
   YeEeeT  YEeEeEt  YEeT    YEeEeeEt  YEeT    YEeEeeET  YEeT   listen YeEEEt  YEeT   socket YeEEEt  YEeT    YEeeEeT  Yeet  
   YEeEeEEt  YeEEEeet  Yeet  
   YEeEEET  YeeeeT sockaddr_ YEEeEET  YEeEEeet  Yeet    Yeeeeet  YEeEEET   YEEET    YEeEEeeT  YeeEeeeT  YEeEEeEt */
   YEeEEET  YeeeeT sockaddr_ YEEeEET  YEeEEeET  Yeet    Yeeeeet  YEeEEET   YEEET    YEeEEeeT  YeeEeeeT  YEeEEeEt */

   YeeEEeT  YeeT    YEeEeeet   YeeeT    YeEEeeT  | YeEeeeT  YEeEeeet   YeeEt    YeEEeeT | YeEeeeT  YEeEEEet  YeeT   YEeEEEeT  YeEeT   YeEeEeT  YeEEt    YEeT   "  YEEEt  ?"  YeEt     YeEt     YeET  
      YeeT   YeeEET  YeEt   YEeEEEEt  YeeT  "h YeEeeT  YeEet   n YeEEEeT Port  YEEEt  Number Top  YEEEt  Directory\t\tver YEEeEeeT YEeEeEt YEeeeEt %d\n\n"
  YeeEeEEeT
  YeeEeEEEt
  "\t  YeeeeEeT only  YEEEeEET  Yeeeeeet named  YeeEEEeT or it YEEeEeeT sub  YEEEt  directories.\n"
  "\tT YeeeeET  YeEEeET  YeEeeEet fancy feature YEEeEeeT   YEEET   safe  YeeeeEeT secure.\n\n"
  "\tExample  YeEet   n YeEEEeT 818 YeEeEeT /home/nwebdir   YEEt  \n\n"
  "\tOnly Sup YEeEeeEt YEEeEeeT  YeEet  "  YEeT    YeEEEEeT  YeEt    Yeet  
     YeeeeeEt  YeeT   YEeEeEt  YEEET   YeeEEt  Yeet   YeeEeT  YeEeT   YEeEeEt  YeEEt   YeEeEEeT  YeEeEEEt  YEEET    YeeEEt  Yeet   YEeEeEt  YeEET    YeEt  
        YeeT   YeeEET  YeEt   YEeEEEEt  YeeT  YeeEEeeET  YEeT   YeeEeT  YeEeT   YEeEeEt  YeEEt   YeEeEEeT  YeEt    Yeet  

      YeeT   YeeEET  YeEt   YEeEEEEt  YeeT  "\n\tNot Supported  YeEet   URL YEEeEeeT including \"..\"  YEeT   Jav YeeEeeT  YEeT   Javascript  YEeT   CGI\n"
  "\tNot Supported  YeEet   directorie YEEeEeeT / /etc /b YEEeEET /lib /tmp /usr /dev /sb YEEeEET \n"
  YeeEEeEEt    YeEt    Yeet  
     YeEEeet  YeeT   YeeEEt  YeEt    Yeet  
    YEet  
   YeeEEeT  YeeT    YeEeEEEt YeeeEeET  YeeT   YEeEEEeT  YeEeT   YEEeeeet  YeEEt    YEeT  YeeEEeEET     YEeT   YEEeeeet   YeEt   | YeEeeeT  YeEeEEEt YeeeEeET  YeeT   YEeEEEeT  YeEeT   YEEeeeet  YeEEt    YEeT  YeeEEEeet  YEeT    YeEEeeet   YeEt   ||
       YeEeEEEt YeeeEeET  YeeT   YEeEEEeT  YeEeT   YEEeeeet  YeEEt    YEeT  YeeEEEeeT  YEeT   YeEEeeet   YeEt   | YeEeeeT  YeEeEEEt YeeeEeET  YeeT   YEeEEEeT  YeEeT   YEEeeeet  YeEEt    YEeT  YeeEEEeEt  YEeT    YeEEeeet   YeEt   ||
       YeEeEEEt YeeeEeET  YeeT   YEeEEEeT  YeEeT   YEEeeeet  YeEEt    YEeT  YeeEEEeET  YEeT   YeEEeeet   YeEt   | YeEeeeT  YeEeEEEt YeeeEeET  YeeT   YEeEEEeT  YeEeT   YEEeeeet  YeEEt    YEeT  YeeEEEEet  YEeT    YeEEeeet   YeEt   ||
       YeEeEEEt YeeeEeET  YeeT   YEeEEEeT  YeEeT   YEEeeeet  YeEEt    YEeT  YeeEEEEeT  YEeT   YeEEeeet   YeEt   | YeEeeeT  YeEeEEEt YeeeEeET  YeeT   YEeEEEeT  YeEeT   YEEeeeet  YeEEt    YEeT  YeeEEEEEt  YEeT   YeEeeeEt  YeEt     YeEt    YeET  
      YeeT   YeeEET  YeEt   YEeEEEEt  YeeT  " YEeeET  YeEet   Bad top  YeeEEEeT % YEEeEeeT  YEeT   see n YeEEEeT   YEEEt  ?\n"  YEeT   YEeEEEeT  YeEeT   YEEeeeet  YeEEt    YeEt    Yeet  
     YeEEeet  YeeT   YeEEeeT  YeEt    Yeet  
    YEet  
   YeeEEeT  YeeT   YEEeeeeT  YeeT   YEeEEEeT  YeEeT   YEEeeeet  YeEEt    YeEt     YEEET    YEEET     YEEEt   YeEeEeT  YeEt    YeET  
      YeeT   YeeEET  YeEt   YEeEEEEt  YeeT  " YEeeET  YeEet   Can't Change  YeeEeeeT  YeeEEEeT %s\n"  YEeT   YEeEEEeT  YeEeT   YEEeeeet  YeEEt    YeEt    Yeet  
     YeEEeet  YeeT   YeeeEEet  YeEt    Yeet  
    YEet  
   Yeeeeet  YEEeeeEt deam YEeeeEt   YEEeT    YEEeeEet  YeeeeEeT  YeEeeEet  YEEeeEeT  YEEeeEEt   YeeT    YEEET    YeEeeEet w YeeEeeT YeEeEEet  YeeT    YeEt    YeEt   */
   YeeEEeT  YeeT  fork  YeeT    YeEt    YeEeEEEt  YEEET    YeeEEt  YeEt  
      Yeeeet    YeeEEt  Yeet    Yeeeeet  YeeEEEet   Yeeeet   YEEeEeeT  YEEeEeEt  YeeEeeeT  YEEeEeET */
    YeeT   YeeEET  YeEt   YEEeEEet  YeeT   YEEeEEeT  YEeT    YEEeEEEt  YeEt    Yeet    Yeeeeet  YeeEeeEt  YeEEEet  YEEeEEET */
    YeeT   YeeEET  YeEt   YEEeEEet  YeeT   YEEEeeet  YEeT    YEEeEEEt  YeEt    Yeet    Yeeeeet  YeeEeeEt  YEEEeeeT hangup YEEeEeeT */
   YeeeeeEt  YeeT   YEeEeEt  YEEET   YeeEEt  Yeet   YEeEeEt  YeeeT   YeEEeeT YEEeeeet  Yeet   YEeEeEt  YeEET    YeEt  
      YeeT   YeeEET  YeEt   YeEeEEt  YeeT   YEeEeEt  YeEt    Yeet       Yeeeeet  YeEeEEt  YeeEEEt file YEEeEeeT */
    YeeT   YeeEET  YeEt   YEEEeEeT  YeeT    YeEt    Yeet       Yeeeeet  YEEeeT  YEEEeEEt  YEEEeEET  YeEEEET  YEEEEeet */
   YeEeet  YeeT   YEEEET  YEeT  YeEeeeeeT  YEeT   YEeEEEeT  YeEeT   YeEeEeT  YeEEt    YEeT   YEEeet  YeeT    YeEt    YeEt    Yeet  
   Yeeeeet  YEEEEeeT  Yeeeeeet net YeEeEeeT socket */
   YeeEEeT  YeeT    YeeT  listen YeEEEt   YEEET   socket  YeeT   YEEEEeET  YEeT    YEEEEEet  YEeT   YeeEEt  YeEt    YeEt     YeeeT   YeeEEt  YeEt  
     YeEeet  YeeT   YEeeET  YEeT   YeEeeeeEt  YEeT  YeEeeeeET  YEeT   YeeEEt  YeEt    Yeet  
   YEeEeeEt   YEEET    YeeEeeT YeeEeeeT YEeEeEt  YeeT   YEeEEEeT  YeEeT   YeEeEeT  YeEEt    YeEt    Yeet  
   YeeEEeT  YeeT   YEeEeeEt   YeeeT    YeeEEt | YeEeeeT  YEeEeeEt   YeeEt   YeEeeeEt YeeEEt YeeEEt YeeEEt YeeEEt  YeEt  
     YeEeet  YeeT   YEeeET  YEeT  "In YEEEEeT  YEeEeeEt number   YeeT  try  YeEeEeT  YEEEt    YeeEt   YeEeeeEt YeeEEt YeeEEt YeeEEt YeeEEt  YeEt  "  YEeT   YEeEEEeT  YeEeT   YeEeEeT  YeEEt    YEeT   YeeEEt  YeEt    Yeet  
   YEEEEEET   YEEET    YEEEEeET  Yeet  
   Yeeeeeeet   YEEET    YeeeeeeeT  YeeT   YeeeeeeEt  YeEt    Yeet  
  serv_addr.sin_ YEeEeeEt   YEEET   hton YEEeEeeT  YeeT   YEeEeeEt  YeEt    Yeet  
   YeeEEeT  YeeT  bind  YeeT  listen YeEEEt  YEeT     YeeT   YeeeeT  YeeeeeEEt  YEeEEeT  YeEt    YEEt   YEeEEeET  YEeT  size YeeEEeet  YeeT   YEeEEeET  YeEt    YeEt     YeeeT   YeeEEt  YeEt  
     YeEeet  YeeT   YEeeET  YEeT  YeEeeeeEt  YEeT  YeEeeeEEt  YEeT   YeeEEt  YeEt    Yeet  
   YeeEEeT  YeeT   listen  YeeT  listen YeEEEt  YEeT   YeEeeeEt YeeeEEet  YeEt     YeeeT   YeeEEt  YeEt  
     YeEeet  YeeT   YEeeET  YEeT  YeEeeeeEt  YEeT  YeEeeEeet  YEeT   YeeEEt  YeEt    Yeet  
   YeeeeeEt  YeeT   YEeeEeT  YEEET   YeEeEeT  Yeet     Yeet   YEeeEeT  YeEET    YeEt     YeET  
     YeEEEeet   YEEET   size YeeEEeet  YeeT   YEeEEeet  YeEt    Yeet  
     YeeEEeT  YeeT    YeeT  socket YeEEEt   YEEET   accept  YeeT  listen YeEEEt  YEeT     YeeT   YeeeeT  YeeeeeEEt  YEeEEeT  YeEt    YEEt   YEeEEeet  YEeT     YEEt   YeEEEeet  YeEt    YeEt     YeeeT    YeeEEt  YeEt  
       YeEeet  YeeT   YEeeET  YEeT  YeEeeeeEt  YEeT  YeEeeEeEt  YEeT   YeeEEt  YeEt    Yeet  
     YeeEEeT  YeeT    YeeT   YEeEeeET   YEEET   fork  YeeT    YeEt    YeEt     YeeeT    YeeEEt  YeEt     YeET  
       YeEeet  YeeT   YEeeET  YEeT  YeEeeeeEt  YEeT  YeEeeEEet  YEeT   YeeEEt  YeEt    Yeet  
      YEet  
     YeeeeeeT   YeET  
       YeeEEeT  YeeT   YEeEeeET   YEEET    YEEET    YeeEEt  YeEt     YeET      Yeeeeet  YeEEEet */
          YeeT   YeeEET  YeEt   YeEeEEt  YeeT  listen YeEEEt  YeEt    Yeet  
         YeEEEeT  YeeT  socket YeEEEt  YEeT   YEeeEeT  YeEt    Yeet    Yeeeeet  YeeeeEeET   Yeeeet   YEEeEeeT */
        YEet    YeeeeeeT   YeET      Yeeeeet  YeeEEEet */
          YeeT   YeeEET  YeEt   YeEeEEt  YeeT  socket YeEEEt  YeEt    Yeet  
        YEet  
      YEet  
    YEet  
  YEet  
