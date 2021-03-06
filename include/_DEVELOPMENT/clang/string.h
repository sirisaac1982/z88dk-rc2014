
// automatically generated by m4 from headers in proto subdir


#ifndef _STRING_H
#define _STRING_H

#include <stddef.h>

#ifndef _SIZE_T_DEFINED
#define _SIZE_T_DEFINED
typedef unsigned int  size_t;
#endif

#ifndef NULL
#define NULL            ((void*)(0))
#endif

extern int bcmp(void *b1,void *b2,size_t len);


extern void bcopy(const void *src,void *dst,size_t len);


extern void bzero(void *mem,size_t n);


extern char *index(char *s,int c);


extern char *rindex(char *s,int c);


extern char *strset(char *s,int c);


extern char *strnset(char *s,int c,size_t n);


extern void *rawmemchr(const void *mem,int c);



extern char *_memlwr_(void *p,size_t n);


extern char *_memstrcpy_(void *p,char *s,size_t n);


extern char *_memupr_(void *p,size_t n);


extern char *_strrstrip_(char *s);


extern int ffs(int i);


extern int ffsl(long i);


extern void *memccpy(void *dst,void *src,int c,size_t n);


extern void *memchr(void *s,int c,size_t n);


extern int memcmp(void *s1,void *s2,size_t n);


extern void *memcpy(void *dst,void *src,size_t n);


extern void *memmem(void *haystack,size_t haystack_len,void *needle,size_t needle_len);


extern void *memmove(void *dst,void *src,size_t n);


extern void *memrchr(void *s,int c,size_t n);


extern void *memset(void *s,int c,size_t n);


extern void *memswap(void *s1,void *s2,size_t n);


extern char *stpcpy(char *dst,char *src);


extern char *stpncpy(char *dst,char *src,size_t n);


extern int strcasecmp(char *s1,char *s2);


extern char *strcat(char *dst,char *src);


extern char *strchr(char *s,int c);


extern char *strchrnul(char *s,int c);


extern int strcmp(char *s1,char *s2);


extern int strcoll(char *s1,char *s2);


extern char *strcpy(char *dst,char *src);


extern size_t strcspn(char *s,char *nspn);


extern char *strdup(char *s);


extern char *strerror(int errnum);


extern int stricmp(char *s1,char *s2);


extern size_t strlcat(char *dst,char *src,size_t n);


extern size_t strlcpy(char *dst,char *src,size_t n);


extern size_t strlen(char *s);


extern char *strlwr(char *s);


extern int strncasecmp(char *s1,char *s2,size_t n);


extern char *strncat(char *dst,char *src,size_t n);


extern char *strnchr(char *s,size_t n,int c);


extern int strncmp(char *s1,char *s2,size_t n);


extern char *strncpy(char *dst,char *src,size_t n);


extern char *strndup(char *s,size_t n);


extern int strnicmp(char *s1,char *s2,size_t n);


extern size_t strnlen(char *s,size_t max_len);


extern char strpbrk(char *s,char *set);


extern char *strrchr(char *s,int c);


extern size_t strrcspn(char *s,char *set);


extern char *strrev(char *s);


extern size_t strrspn(char *s,char *set);


extern char *strrstrip(char *s);


extern char *strsep(char **s,char *delim);


extern size_t strspn(char *s,char *pfx);


extern char *strstr(char *s,char *subs);


extern char *strstrip(char *s);


extern char *strtok(char *s,char *delim);


extern char *strtok_r(char *s,char *delim,char **last_s);


extern char *strupr(char *s);


extern size_t strxfrm(char *dst,char *src,size_t n);



#ifdef __CLANG

   extern int ffsll(long long i);
   
#endif

#ifdef __SDCC

   extern int ffsll(long long i) __preserves_regs(b,c);
   extern int ffsll_callee(long long i) __preserves_regs(b,c) __z88dk_callee;
   #define ffsll(a) ffsll_callee(a)

   #ifndef __SDCC_DISABLE_BUILTIN

   #undef memcpy
   #undef strcpy
   #undef strncpy
   #undef strchr
   #undef memset

   #define memcpy(dst, src, n)          __builtin_memcpy(dst, src, n)
   #define strcpy(dst, src)             __builtin_strcpy(dst, src)
   #define strncpy(dst, src, n)         __builtin_strncpy(dst, src, n)
   #define strchr(s, c)                 __builtin_strchr(s, c)
   #define memset(dst, c, n)            __builtin_memset(dst, c, n)

   #endif

#endif

#endif
