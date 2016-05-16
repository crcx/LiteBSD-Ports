/*
 * configuration for markdown, generated Sun May 15 22:17:39 EDT 2016
 * by retrobsd@debian
 */
#ifndef __AC_MARKDOWN_D
#define __AC_MARKDOWN_D 1


#define OS_LITEBSD 1
#define THEME_CF 1
#define while(x) while( (x) != 0 )
#define if(x) if( (x) != 0 )
#define DWORD unsigned long
#define WORD unsigned short
#define BYTE unsigned char
#define HAVE_BASENAME 1
#define HAVE_LIBGEN_H 1
#define HAVE_STDLIB_H 1
#define HAVE_PWD_H 1
#define HAVE_GETPWUID 1
#define HAVE_SRANDOM 1
#define INITRNG(x) srandom((unsigned int)x)
#define HAVE_BZERO 1
#define HAVE_RANDOM 1
#define COINTOSS() (random()&1)
#define HAVE_STRCASECMP 1
#define HAVE_STRNCASECMP 1
#define HAVE_FCHDIR 1
#define TABSTOP 4
#define HAVE_MALLOC_H 1
#define PATH_FIND "/usr/bin/find"
#define PATH_SED "/usr/bin/sed"

#endif/* __AC_MARKDOWN_D */
