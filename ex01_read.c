#pragma pack(push,_CRT_PACKING)
  typedef __builtin_va_list __gnuc_va_list;
  typedef __gnuc_va_list va_list;
/* Use GCC builtins */
#pragma pack(pop)

/* Macros for __uuidof template-based emulation */
void __attribute__((__cdecl__)) __debugbreak(void);
extern __inline__ __attribute__((__always_inline__,__gnu_inline__)) void __attribute__((__cdecl__)) __debugbreak(void)
{
  __asm__ __volatile__("int {$}3":);
}
/* mingw-w64 specific functions: */
const char *__mingw_get_crt_info (void);
#pragma pack(push,_CRT_PACKING)
__extension__ typedef unsigned long long size_t;
__extension__ typedef long long ssize_t;
typedef size_t rsize_t;
__extension__ typedef long long intptr_t;
__extension__ typedef unsigned long long uintptr_t;
__extension__ typedef long long ptrdiff_t;
typedef unsigned short wchar_t;
typedef unsigned short wint_t;
typedef unsigned short wctype_t;
typedef int errno_t;
typedef long __time32_t;
__extension__ typedef long long __time64_t;
typedef __time64_t time_t;
struct threadlocaleinfostruct;
struct threadmbcinfostruct;
typedef struct threadlocaleinfostruct *pthreadlocinfo;
typedef struct threadmbcinfostruct *pthreadmbcinfo;
struct __lc_time_data;
typedef struct localeinfo_struct {
  pthreadlocinfo locinfo;
  pthreadmbcinfo mbcinfo;
} _locale_tstruct,*_locale_t;
typedef struct tagLC_ID {
  unsigned short wLanguage;
  unsigned short wCountry;
  unsigned short wCodePage;
} LC_ID,*LPLC_ID;
typedef struct threadlocaleinfostruct {
  int refcount;
  unsigned int lc_codepage;
  unsigned int lc_collate_cp;
  unsigned long lc_handle[6];
  LC_ID lc_id[6];
  struct {
    char *locale;
    wchar_t *wlocale;
    int *refcount;
    int *wrefcount;
  } lc_category[6];
  int lc_clike;
  int mb_cur_max;
  int *lconv_intl_refcount;
  int *lconv_num_refcount;
  int *lconv_mon_refcount;
  struct lconv *lconv;
  int *ctype1_refcount;
  unsigned short *ctype1;
  const unsigned short *pctype;
  const unsigned char *pclmap;
  const unsigned char *pcumap;
  struct __lc_time_data *lc_time_curr;
} threadlocinfo;
#pragma pack(pop)
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
/* Undefine __mingw_<printf> macros.  */
#pragma pack(push,_CRT_PACKING)
  struct _iobuf {
    char *_ptr;
    int _cnt;
    char *_base;
    int _flag;
    int _file;
    int _charbuf;
    int _bufsiz;
    char *_tmpfname;
  };
  typedef struct _iobuf FILE;
  typedef long _off_t;
  typedef long off32_t;
  __extension__ typedef long long _off64_t;
  __extension__ typedef long long off64_t;
typedef off32_t off_t;
  __attribute__ ((__dllimport__)) FILE *__attribute__((__cdecl__)) __iob_func(void);
  __extension__ typedef long long fpos_t;
extern
  __attribute__((__format__ (gnu_scanf, 2, 3))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_sscanf(const char * __restrict__ _Src,const char * __restrict__ _Format,...);
extern
  __attribute__((__format__ (gnu_scanf, 2, 0))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_vsscanf (const char * __restrict__ _Str,const char * __restrict__ Format,va_list argp);
extern
  __attribute__((__format__ (gnu_scanf, 1, 2))) __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __mingw_scanf(const char * __restrict__ _Format,...);
extern
  __attribute__((__format__ (gnu_scanf, 1, 0))) __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __mingw_vscanf(const char * __restrict__ Format, va_list argp);
extern
  __attribute__((__format__ (gnu_scanf, 2, 3))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_fscanf(FILE * __restrict__ _File,const char * __restrict__ _Format,...);
extern
  __attribute__((__format__ (gnu_scanf, 2, 0))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_vfscanf (FILE * __restrict__ fp, const char * __restrict__ Format,va_list argp);
extern
  __attribute__((__format__ (gnu_printf, 3, 0))) __attribute__ ((__nonnull__ (3)))
  int __attribute__((__cdecl__)) __mingw_vsnprintf(char * __restrict__ _DstBuf,size_t _MaxCount,const char * __restrict__ _Format,
                               va_list _ArgList);
extern
  __attribute__((__format__ (gnu_printf, 3, 4))) __attribute__ ((__nonnull__ (3)))
  int __attribute__((__cdecl__)) __mingw_snprintf(char * __restrict__ s, size_t n, const char * __restrict__ format, ...);
extern
  __attribute__((__format__ (gnu_printf, 1, 2))) __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __mingw_printf(const char * __restrict__ , ... ) __attribute__ ((__nothrow__));
extern
  __attribute__((__format__ (gnu_printf, 1, 0))) __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __mingw_vprintf (const char * __restrict__ , va_list) __attribute__ ((__nothrow__));
extern
  __attribute__((__format__ (gnu_printf, 2, 3))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_fprintf (FILE * __restrict__ , const char * __restrict__ , ...) __attribute__ ((__nothrow__));
extern
  __attribute__((__format__ (gnu_printf, 2, 0))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_vfprintf (FILE * __restrict__ , const char * __restrict__ , va_list) __attribute__ ((__nothrow__));
extern
  __attribute__((__format__ (gnu_printf, 2, 3))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_sprintf (char * __restrict__ , const char * __restrict__ , ...) __attribute__ ((__nothrow__));
extern
  __attribute__((__format__ (gnu_printf, 2, 0))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_vsprintf (char * __restrict__ , const char * __restrict__ , va_list) __attribute__ ((__nothrow__));
extern
  __attribute__((__format__ (gnu_printf, 2, 3))) __attribute__((nonnull (1,2)))
  int __attribute__((__cdecl__)) __mingw_asprintf(char ** __restrict__ , const char * __restrict__ , ...) __attribute__ ((__nothrow__));
extern
  __attribute__((__format__ (gnu_printf, 2, 0))) __attribute__((nonnull (1,2)))
  int __attribute__((__cdecl__)) __mingw_vasprintf(char ** __restrict__ , const char * __restrict__ , va_list) __attribute__ ((__nothrow__));
/*
 * Default configuration: simply direct all calls to MSVCRT...
 */
  int __attribute__((__cdecl__)) fprintf(FILE * __restrict__ _File,const char * __restrict__ _Format,...);
  int __attribute__((__cdecl__)) printf(const char * __restrict__ _Format,...);
  int __attribute__((__cdecl__)) sprintf(char * __restrict__ _Dest,const char * __restrict__ _Format,...) ;
  int __attribute__((__cdecl__)) vfprintf(FILE * __restrict__ _File,const char * __restrict__ _Format,va_list _ArgList);
  int __attribute__((__cdecl__)) vprintf(const char * __restrict__ _Format,va_list _ArgList);
  int __attribute__((__cdecl__)) vsprintf(char * __restrict__ _Dest,const char * __restrict__ _Format,va_list _Args) ;
  int __attribute__((__cdecl__)) fscanf(FILE * __restrict__ _File,const char * __restrict__ _Format,...) ;
  int __attribute__((__cdecl__)) scanf(const char * __restrict__ _Format,...) ;
  int __attribute__((__cdecl__)) sscanf(const char * __restrict__ _Src,const char * __restrict__ _Format,...) ;
  int __attribute__((__cdecl__)) __ms_vscanf(const char * __restrict__ Format, va_list argp);
  int __attribute__((__cdecl__)) __ms_vfscanf (FILE * __restrict__ fp, const char * __restrict__ Format,va_list argp);
  int __attribute__((__cdecl__)) __ms_vsscanf (const char * __restrict__ _Str,const char * __restrict__ Format,va_list argp);
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
  __attribute__ ((__nonnull__ (2)))
  int vfscanf (FILE *__stream, const char *__format, __builtin_va_list __local_argv)
  {
    return __ms_vfscanf (__stream, __format, __local_argv);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
  __attribute__ ((__nonnull__ (2)))
  int vsscanf (const char * __restrict__ __source, const char * __restrict__ __format, __builtin_va_list __local_argv)
  {
    return __ms_vsscanf( __source, __format, __local_argv );
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
  __attribute__ ((__nonnull__ (1)))
  int vscanf(const char *__format, __builtin_va_list __local_argv)
  {
    return __ms_vscanf (__format, __local_argv);
  }
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _filbuf(FILE *_File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _flsbuf(int _Ch,FILE *_File);
  __attribute__ ((__dllimport__)) FILE *__attribute__((__cdecl__)) _fsopen(const char *_Filename,const char *_Mode,int _ShFlag);
  void __attribute__((__cdecl__)) clearerr(FILE *_File);
  int __attribute__((__cdecl__)) fclose(FILE *_File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fcloseall(void);
  __attribute__ ((__dllimport__)) FILE *__attribute__((__cdecl__)) _fdopen(int _FileHandle,const char *_Mode);
  int __attribute__((__cdecl__)) feof(FILE *_File);
  int __attribute__((__cdecl__)) ferror(FILE *_File);
  int __attribute__((__cdecl__)) fflush(FILE *_File);
  int __attribute__((__cdecl__)) fgetc(FILE *_File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fgetchar(void);
  int __attribute__((__cdecl__)) fgetpos(FILE * __restrict__ _File ,fpos_t * __restrict__ _Pos); /* 64bit only, no 32bit version */
  int __attribute__((__cdecl__)) fgetpos64(FILE * __restrict__ _File ,fpos_t * __restrict__ _Pos); /* fgetpos already 64bit */
  char *__attribute__((__cdecl__)) fgets(char * __restrict__ _Buf,int _MaxCount,FILE * __restrict__ _File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fileno(FILE *_File);
  __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) _tempnam(const char *_DirName,const char *_FilePrefix);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _flushall(void);
  FILE *__attribute__((__cdecl__)) fopen(const char * __restrict__ _Filename,const char * __restrict__ _Mode) ;
  FILE *fopen64(const char * __restrict__ filename,const char * __restrict__ mode);
  int __attribute__((__cdecl__)) fputc(int _Ch,FILE *_File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fputchar(int _Ch);
  int __attribute__((__cdecl__)) fputs(const char * __restrict__ _Str,FILE * __restrict__ _File);
  size_t __attribute__((__cdecl__)) fread(void * __restrict__ _DstBuf,size_t _ElementSize,size_t _Count,FILE * __restrict__ _File);
  FILE *__attribute__((__cdecl__)) freopen(const char * __restrict__ _Filename,const char * __restrict__ _Mode,FILE * __restrict__ _File) ;
  int __attribute__((__cdecl__)) fsetpos(FILE *_File,const fpos_t *_Pos);
  int __attribute__((__cdecl__)) fsetpos64(FILE *_File,const fpos_t *_Pos); /* fsetpos already 64bit */
  int __attribute__((__cdecl__)) fseek(FILE *_File,long _Offset,int _Origin);
  /* Shouldn't be any fseeko32 in glibc, 32bit to 64bit casting should be fine */
  /* int fseeko32(FILE* stream, _off_t offset, int whence);*/ /* fseeko32 redirects to fseeko64 */
  int fseeko64(FILE* stream, _off64_t offset, int whence);
  int fseeko(FILE* stream, _off_t offset, int whence);
  long __attribute__((__cdecl__)) ftell(FILE *_File);
  /* Returns truncated 64bit off_t */
  _off_t ftello(FILE * stream);
  _off64_t ftello64(FILE * stream);
  __extension__ int __attribute__((__cdecl__)) _fseeki64(FILE *_File,long long _Offset,int _Origin);
  __extension__ long long __attribute__((__cdecl__)) _ftelli64(FILE *_File);
  size_t __attribute__((__cdecl__)) fwrite(const void * __restrict__ _Str,size_t _Size,size_t _Count,FILE * __restrict__ _File);
  int __attribute__((__cdecl__)) getc(FILE *_File);
  int __attribute__((__cdecl__)) getchar(void);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _getmaxstdio(void);
  char *__attribute__((__cdecl__)) gets(char *_Buffer) ;
  int __attribute__((__cdecl__)) _getw(FILE *_File);
  void __attribute__((__cdecl__)) perror(const char *_ErrMsg);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _pclose(FILE *_File);
  __attribute__ ((__dllimport__)) FILE *__attribute__((__cdecl__)) _popen(const char *_Command,const char *_Mode);
  int __attribute__((__cdecl__)) putc(int _Ch,FILE *_File);
  int __attribute__((__cdecl__)) putchar(int _Ch);
  int __attribute__((__cdecl__)) puts(const char *_Str);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _putw(int _Word,FILE *_File);
  int __attribute__((__cdecl__)) remove(const char *_Filename);
  int __attribute__((__cdecl__)) rename(const char *_OldFilename,const char *_NewFilename);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _unlink(const char *_Filename);
  int __attribute__((__cdecl__)) unlink(const char *_Filename) ;
  void __attribute__((__cdecl__)) rewind(FILE *_File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _rmtmp(void);
  void __attribute__((__cdecl__)) setbuf(FILE * __restrict__ _File,char * __restrict__ _Buffer) ;
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _setmaxstdio(int _Max);
  __attribute__ ((__dllimport__)) unsigned int __attribute__((__cdecl__)) _set_output_format(unsigned int _Format);
  __attribute__ ((__dllimport__)) unsigned int __attribute__((__cdecl__)) _get_output_format(void);
  int __attribute__((__cdecl__)) setvbuf(FILE * __restrict__ _File,char * __restrict__ _Buf,int _Mode,size_t _Size);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _scprintf(const char * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snscanf(const char * __restrict__ _Src,size_t _MaxCount,const char * __restrict__ _Format,...) ;
  FILE *__attribute__((__cdecl__)) tmpfile(void) ;
  char *__attribute__((__cdecl__)) tmpnam(char *_Buffer);
  int __attribute__((__cdecl__)) ungetc(int _Ch,FILE *_File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snprintf(char * __restrict__ _Dest,size_t _Count,const char * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vsnprintf(char * __restrict__ _Dest,size_t _Count,const char * __restrict__ _Format,va_list _Args) ;
/* this is here to deal with software defining
 * vsnprintf as _vsnprintf, eg. libxml2.  */
       
       
  int __attribute__((__cdecl__)) __ms_vsnprintf(char * __restrict__ d,size_t n,const char * __restrict__ format,va_list arg)
    ;
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
  __attribute__ ((__nonnull__ (3)))
  int vsnprintf (char * __restrict__ __stream, size_t __n, const char * __restrict__ __format, va_list __local_argv)
  {
    return __ms_vsnprintf (__stream, __n, __format, __local_argv);
  }
  int __attribute__((__cdecl__)) __ms_snprintf(char * __restrict__ s, size_t n, const char * __restrict__ format, ...);
static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
__attribute__ ((__nonnull__ (3)))
int snprintf (char * __restrict__ __stream, size_t __n, const char * __restrict__ __format, ...)
{
  register int __retval;
  __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
  __retval = __ms_vsnprintf (__stream, __n, __format, __local_argv);
  __builtin_va_end( __local_argv );
  return __retval;
}
       
       
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vscprintf(const char * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _set_printf_count_output(int _Value);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _get_printf_count_output(void);
/* __attribute__((__format__ (gnu_wscanf, 2, 3))) */ __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_swscanf(const wchar_t * __restrict__ _Src,const wchar_t * __restrict__ _Format,...);
/* __attribute__((__format__ (gnu_wscanf, 2, 0))) */ __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_vswscanf (const wchar_t * __restrict__ _Str,const wchar_t * __restrict__ Format,va_list argp);
/* __attribute__((__format__ (gnu_wscanf, 1, 2))) */ __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __mingw_wscanf(const wchar_t * __restrict__ _Format,...);
/* __attribute__((__format__ (gnu_wscanf, 1, 0))) */ __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __mingw_vwscanf(const wchar_t * __restrict__ Format, va_list argp);
/* __attribute__((__format__ (gnu_wscanf, 2, 3))) */ __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_fwscanf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...);
/* __attribute__((__format__ (gnu_wscanf, 2, 0))) */ __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_vfwscanf (FILE * __restrict__ fp, const wchar_t * __restrict__ Format,va_list argp);
/* __attribute__((__format__ (gnu_wprintf, 2, 3))) */ __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_fwprintf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...);
/* __attribute__((__format__ (gnu_wprintf, 1, 2))) */ __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __mingw_wprintf(const wchar_t * __restrict__ _Format,...);
/* __attribute__((__format__ (gnu_wprintf, 2, 0))) */__attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_vfwprintf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,va_list _ArgList);
/*__attribute__((__format__ (gnu_wprintf, 1, 0))) */ __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __mingw_vwprintf(const wchar_t * __restrict__ _Format,va_list _ArgList);
/* __attribute__((__format__ (gnu_wprintf, 3, 4))) */ __attribute__ ((__nonnull__ (3)))
  int __attribute__((__cdecl__)) __mingw_snwprintf (wchar_t * __restrict__ s, size_t n, const wchar_t * __restrict__ format, ...);
/* __attribute__((__format__ (gnu_wprintf, 3, 0))) */ __attribute__ ((__nonnull__ (3)))
  int __attribute__((__cdecl__)) __mingw_vsnwprintf (wchar_t * __restrict__ , size_t, const wchar_t * __restrict__ , va_list);
/* __attribute__((__format__ (gnu_wprintf, 2, 3))) */ __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_swprintf(wchar_t * __restrict__ , const wchar_t * __restrict__ , ...);
/* __attribute__((__format__ (gnu_wprintf, 2, 0))) */ __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_vswprintf(wchar_t * __restrict__ , const wchar_t * __restrict__ ,va_list);
  int __attribute__((__cdecl__)) fwscanf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...) ;
  int __attribute__((__cdecl__)) swscanf(const wchar_t * __restrict__ _Src,const wchar_t * __restrict__ _Format,...) ;
  int __attribute__((__cdecl__)) wscanf(const wchar_t * __restrict__ _Format,...) ;
  int __attribute__((__cdecl__)) __ms_vwscanf (const wchar_t * __restrict__ , va_list);
  int __attribute__((__cdecl__)) __ms_vfwscanf (FILE * __restrict__ ,const wchar_t * __restrict__ ,va_list);
  int __attribute__((__cdecl__)) __ms_vswscanf (const wchar_t * __restrict__ ,const wchar_t * __restrict__ ,va_list);
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
  __attribute__ ((__nonnull__ (2)))
  int vfwscanf (FILE *__stream, const wchar_t *__format, __builtin_va_list __local_argv)
  {
    return __ms_vfwscanf (__stream, __format, __local_argv);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
  __attribute__ ((__nonnull__ (2)))
  int vswscanf (const wchar_t * __restrict__ __source, const wchar_t * __restrict__ __format, __builtin_va_list __local_argv)
  {
    return __ms_vswscanf( __source, __format, __local_argv );
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
  __attribute__ ((__nonnull__ (1)))
  int vwscanf(const wchar_t *__format, __builtin_va_list __local_argv)
  {
    return __ms_vwscanf (__format, __local_argv);
  }
  int __attribute__((__cdecl__)) fwprintf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...);
  int __attribute__((__cdecl__)) wprintf(const wchar_t * __restrict__ _Format,...);
  int __attribute__((__cdecl__)) vfwprintf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,va_list _ArgList);
  int __attribute__((__cdecl__)) vwprintf(const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) FILE *__attribute__((__cdecl__)) _wfsopen(const wchar_t *_Filename,const wchar_t *_Mode,int _ShFlag);
  wint_t __attribute__((__cdecl__)) fgetwc(FILE *_File);
  __attribute__ ((__dllimport__)) wint_t __attribute__((__cdecl__)) _fgetwchar(void);
  wint_t __attribute__((__cdecl__)) fputwc(wchar_t _Ch,FILE *_File);
  __attribute__ ((__dllimport__)) wint_t __attribute__((__cdecl__)) _fputwchar(wchar_t _Ch);
  wint_t __attribute__((__cdecl__)) getwc(FILE *_File);
  wint_t __attribute__((__cdecl__)) getwchar(void);
  wint_t __attribute__((__cdecl__)) putwc(wchar_t _Ch,FILE *_File);
  wint_t __attribute__((__cdecl__)) putwchar(wchar_t _Ch);
  wint_t __attribute__((__cdecl__)) ungetwc(wint_t _Ch,FILE *_File);
  wchar_t *__attribute__((__cdecl__)) fgetws(wchar_t * __restrict__ _Dst,int _SizeInWords,FILE * __restrict__ _File);
  int __attribute__((__cdecl__)) fputws(const wchar_t * __restrict__ _Str,FILE * __restrict__ _File);
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _getws(wchar_t *_String) ;
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _putws(const wchar_t *_Str);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _scwprintf(const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _swprintf_c(wchar_t * __restrict__ _DstBuf,size_t _SizeInWords,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vswprintf_c(wchar_t * __restrict__ _DstBuf,size_t _SizeInWords,const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snwprintf(wchar_t * __restrict__ _Dest,size_t _Count,const wchar_t * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vsnwprintf(wchar_t * __restrict__ _Dest,size_t _Count,const wchar_t * __restrict__ _Format,va_list _Args) ;
       
       
  int __attribute__((__cdecl__)) __ms_snwprintf (wchar_t * __restrict__ s, size_t n, const wchar_t * __restrict__ format, ...);
  int __attribute__((__cdecl__)) __ms_vsnwprintf (wchar_t * __restrict__ , size_t, const wchar_t * __restrict__ , va_list);
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
  int snwprintf (wchar_t * __restrict__ s, size_t n, const wchar_t * __restrict__ format, ...)
  {
    int r;
    va_list argp;
    __builtin_va_start (argp, format);
    r = _vsnwprintf (s, n, format, argp);
    __builtin_va_end (argp);
    return r;
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
  int __attribute__((__cdecl__)) vsnwprintf (wchar_t * __restrict__ s, size_t n, const wchar_t * __restrict__ format, va_list arg)
  {
    return _vsnwprintf(s,n,format,arg);
  }
       
       
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _swprintf(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vswprintf(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,va_list _Args);
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
/* __attribute__((__format__ (gnu_wprintf, 3, 0))) */ __attribute__ ((__nonnull__ (3)))
int vswprintf (wchar_t *__stream, size_t __count, const wchar_t *__format, __builtin_va_list __local_argv)
{
  return vsnwprintf( __stream, __count, __format, __local_argv );
}
static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
/* __attribute__((__format__ (gnu_wprintf, 3, 4))) */ __attribute__ ((__nonnull__ (3)))
int swprintf (wchar_t *__stream, size_t __count, const wchar_t *__format, ...)
{
  register int __retval;
  __builtin_va_list __local_argv;
  __builtin_va_start( __local_argv, __format );
  __retval = vswprintf( __stream, __count, __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _wtempnam(const wchar_t *_Directory,const wchar_t *_FilePrefix);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vscwprintf(const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snwscanf(const wchar_t * __restrict__ _Src,size_t _MaxCount,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) FILE *__attribute__((__cdecl__)) _wfdopen(int _FileHandle ,const wchar_t *_Mode);
  __attribute__ ((__dllimport__)) FILE *__attribute__((__cdecl__)) _wfopen(const wchar_t * __restrict__ _Filename,const wchar_t *__restrict__ _Mode) ;
  __attribute__ ((__dllimport__)) FILE *__attribute__((__cdecl__)) _wfreopen(const wchar_t * __restrict__ _Filename,const wchar_t * __restrict__ _Mode,FILE * __restrict__ _OldFile) ;
  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _wperror(const wchar_t *_ErrMsg);
  __attribute__ ((__dllimport__)) FILE *__attribute__((__cdecl__)) _wpopen(const wchar_t *_Command,const wchar_t *_Mode);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wremove(const wchar_t *_Filename);
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _wtmpnam(wchar_t *_Buffer);
  __attribute__ ((__dllimport__)) wint_t __attribute__((__cdecl__)) _fgetwc_nolock(FILE *_File);
  __attribute__ ((__dllimport__)) wint_t __attribute__((__cdecl__)) _fputwc_nolock(wchar_t _Ch,FILE *_File);
  __attribute__ ((__dllimport__)) wint_t __attribute__((__cdecl__)) _ungetwc_nolock(wint_t _Ch,FILE *_File);
  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _lock_file(FILE *_File);
  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _unlock_file(FILE *_File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fclose_nolock(FILE *_File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fflush_nolock(FILE *_File);
  __attribute__ ((__dllimport__)) size_t __attribute__((__cdecl__)) _fread_nolock(void * __restrict__ _DstBuf,size_t _ElementSize,size_t _Count,FILE * __restrict__ _File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fseek_nolock(FILE *_File,long _Offset,int _Origin);
  __attribute__ ((__dllimport__)) long __attribute__((__cdecl__)) _ftell_nolock(FILE *_File);
  __extension__ __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fseeki64_nolock(FILE *_File,long long _Offset,int _Origin);
  __extension__ __attribute__ ((__dllimport__)) long long __attribute__((__cdecl__)) _ftelli64_nolock(FILE *_File);
  __attribute__ ((__dllimport__)) size_t __attribute__((__cdecl__)) _fwrite_nolock(const void * __restrict__ _DstBuf,size_t _Size,size_t _Count,FILE * __restrict__ _File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _ungetc_nolock(int _Ch,FILE *_File);
  char *__attribute__((__cdecl__)) tempnam(const char *_Directory,const char *_FilePrefix) ;
  int __attribute__((__cdecl__)) fcloseall(void) ;
  FILE *__attribute__((__cdecl__)) fdopen(int _FileHandle,const char *_Format) ;
  int __attribute__((__cdecl__)) fgetchar(void) ;
  int __attribute__((__cdecl__)) fileno(FILE *_File) ;
  int __attribute__((__cdecl__)) flushall(void) ;
  int __attribute__((__cdecl__)) fputchar(int _Ch) ;
  int __attribute__((__cdecl__)) getw(FILE *_File) ;
  int __attribute__((__cdecl__)) putw(int _Ch,FILE *_File) ;
  int __attribute__((__cdecl__)) rmtmp(void) ;
/**
 * __mingw_str_wide_utf8
 * Converts a null terminated UCS-2 string to a multibyte (UTF-8) equivalent.
 * Caller is supposed to free allocated buffer with __mingw_str_free().
 * @param[in] wptr Pointer to wide string.
 * @param[out] mbptr Pointer to multibyte string.
 * @param[out] buflen Optional parameter for length of allocated buffer.
 * @return Number of characters converted, 0 for failure.
 *
 * WideCharToMultiByte - http://msdn.microsoft.com/en-us/library/dd374130(VS.85).aspx
 */
int __attribute__((__cdecl__)) __mingw_str_wide_utf8 (const wchar_t * const wptr, char **mbptr, size_t * buflen);
/**
 * __mingw_str_utf8_wide
 * Converts a null terminated UTF-8 string to a UCS-2 equivalent.
 * Caller is supposed to free allocated buffer with __mingw_str_free().
 * @param[out] mbptr Pointer to multibyte string.
 * @param[in] wptr Pointer to wide string.
 * @param[out] buflen Optional parameter for length of allocated buffer.
 * @return Number of characters converted, 0 for failure.
 *
 * MultiByteToWideChar - http://msdn.microsoft.com/en-us/library/dd319072(VS.85).aspx
 */
int __attribute__((__cdecl__)) __mingw_str_utf8_wide (const char *const mbptr, wchar_t ** wptr, size_t * buflen);
/**
 * __mingw_str_free
 * Frees buffer create by __mingw_str_wide_utf8 and __mingw_str_utf8_wide.
 * @param[in] ptr memory block to free.
 *
 */
void __attribute__((__cdecl__)) __mingw_str_free(void *ptr);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wspawnl(int _Mode,const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wspawnle(int _Mode,const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wspawnlp(int _Mode,const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wspawnlpe(int _Mode,const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wspawnv(int _Mode,const wchar_t *_Filename,const wchar_t *const *_ArgList);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wspawnve(int _Mode,const wchar_t *_Filename,const wchar_t *const *_ArgList,const wchar_t *const *_Env);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wspawnvp(int _Mode,const wchar_t *_Filename,const wchar_t *const *_ArgList);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wspawnvpe(int _Mode,const wchar_t *_Filename,const wchar_t *const *_ArgList,const wchar_t *const *_Env);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _spawnv(int _Mode,const char *_Filename,const char *const *_ArgList);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _spawnve(int _Mode,const char *_Filename,const char *const *_ArgList,const char *const *_Env);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _spawnvp(int _Mode,const char *_Filename,const char *const *_ArgList);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _spawnvpe(int _Mode,const char *_Filename,const char *const *_ArgList,const char *const *_Env);
#pragma pack(pop)
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) clearerr_s(FILE *_File);
  int __attribute__((__cdecl__)) fprintf_s(FILE *_File,const char *_Format,...);
  size_t __attribute__((__cdecl__)) fread_s(void *_DstBuf,size_t _DstSize,size_t _ElementSize,size_t _Count,FILE *_File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fscanf_s_l(FILE *_File,const char *_Format,_locale_t _Locale,...);
  int __attribute__((__cdecl__)) printf_s(const char *_Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _scanf_l(const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _scanf_s_l(const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snprintf_c(char *_DstBuf,size_t _MaxCount,const char *_Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vsnprintf_c(char *_DstBuf,size_t _MaxCount,const char *_Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fscanf_l(FILE *_File,const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _sscanf_l(const char *_Src,const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _sscanf_s_l(const char *_Src,const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) sscanf_s(const char *_Src,const char *_Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snscanf_s(const char *_Src,size_t _MaxCount,const char *_Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snscanf_l(const char *_Src,size_t _MaxCount,const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snscanf_s_l(const char *_Src,size_t _MaxCount,const char *_Format,_locale_t _Locale,...);
  int __attribute__((__cdecl__)) vfprintf_s(FILE *_File,const char *_Format,va_list _ArgList);
  int __attribute__((__cdecl__)) vprintf_s(const char *_Format,va_list _ArgList);
  int __attribute__((__cdecl__)) vsnprintf_s(char *_DstBuf,size_t _DstSize,size_t _MaxCount,const char *_Format,va_list _ArgList);
 
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vsnprintf_s(char *_DstBuf,size_t _DstSize,size_t _MaxCount,const char *_Format,va_list _ArgList);
 
  int __attribute__((__cdecl__)) vsprintf_s(char *_DstBuf,size_t _Size,const char *_Format,va_list _ArgList);
 
  int __attribute__((__cdecl__)) sprintf_s(char *_DstBuf,size_t _DstSize,const char *_Format,...);
 
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snprintf_s(char *_DstBuf,size_t _DstSize,size_t _MaxCount,const char *_Format,...);
 
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fprintf_p(FILE *_File,const char *_Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _printf_p(const char *_Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _sprintf_p(char *_Dst,size_t _MaxCount,const char *_Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vfprintf_p(FILE *_File,const char *_Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vprintf_p(const char *_Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vsprintf_p(char *_Dst,size_t _MaxCount,const char *_Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _scprintf_p(const char *_Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vscprintf_p(const char *_Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _printf_l(const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _printf_p_l(const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vprintf_l(const char *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vprintf_p_l(const char *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fprintf_l(FILE *_File,const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fprintf_p_l(FILE *_File,const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vfprintf_l(FILE *_File,const char *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vfprintf_p_l(FILE *_File,const char *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _sprintf_l(char *_DstBuf,const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _sprintf_p_l(char *_DstBuf,size_t _MaxCount,const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vsprintf_l(char *_DstBuf,const char *_Format,_locale_t,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vsprintf_p_l(char *_DstBuf,size_t _MaxCount,const char *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _scprintf_l(const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _scprintf_p_l(const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vscprintf_l(const char *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vscprintf_p_l(const char *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _printf_s_l(const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vprintf_s_l(const char *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fprintf_s_l(FILE *_File,const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vfprintf_s_l(FILE *_File,const char *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _sprintf_s_l(char *_DstBuf,size_t _DstSize,const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vsprintf_s_l(char *_DstBuf,size_t _DstSize,const char *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snprintf_s_l(char *_DstBuf,size_t _DstSize,size_t _MaxCount,const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vsnprintf_s_l(char *_DstBuf,size_t _DstSize,size_t _MaxCount,const char *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snprintf_l(char *_DstBuf,size_t _MaxCount,const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snprintf_c_l(char *_DstBuf,size_t _MaxCount,const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vsnprintf_l(char *_DstBuf,size_t _MaxCount,const char *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vsnprintf_c_l(char *_DstBuf,size_t _MaxCount,const char *,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) fopen_s(FILE **_File,const char *_Filename,const char *_Mode);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) freopen_s(FILE** _File, const char *_Filename, const char *_Mode, FILE *_Stream);
  __attribute__ ((__dllimport__)) char* __attribute__((__cdecl__)) gets_s(char*,rsize_t);
 
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) tmpnam_s(char*,rsize_t);
 
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _getws_s(wchar_t *_Str,size_t _SizeInWords);
 
  int __attribute__((__cdecl__)) fwprintf_s(FILE *_File,const wchar_t *_Format,...);
  int __attribute__((__cdecl__)) wprintf_s(const wchar_t *_Format,...);
  int __attribute__((__cdecl__)) vfwprintf_s(FILE *_File,const wchar_t *_Format,va_list _ArgList);
  int __attribute__((__cdecl__)) vwprintf_s(const wchar_t *_Format,va_list _ArgList);
  int __attribute__((__cdecl__)) vswprintf_s(wchar_t *_Dst,size_t _SizeInWords,const wchar_t *_Format,va_list _ArgList);
 
  int __attribute__((__cdecl__)) swprintf_s(wchar_t *_Dst,size_t _SizeInWords,const wchar_t *_Format,...);
 
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vsnwprintf_s(wchar_t *_DstBuf,size_t _DstSizeInWords,size_t _MaxCount,const wchar_t *_Format,va_list _ArgList);
 
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snwprintf_s(wchar_t *_DstBuf,size_t _DstSizeInWords,size_t _MaxCount,const wchar_t *_Format,...);
 
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wprintf_s_l(const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vwprintf_s_l(const wchar_t *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fwprintf_s_l(FILE *_File,const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vfwprintf_s_l(FILE *_File,const wchar_t *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _swprintf_s_l(wchar_t *_DstBuf,size_t _DstSize,const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vswprintf_s_l(wchar_t *_DstBuf,size_t _DstSize,const wchar_t *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snwprintf_s_l(wchar_t *_DstBuf,size_t _DstSize,size_t _MaxCount,const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vsnwprintf_s_l(wchar_t *_DstBuf,size_t _DstSize,size_t _MaxCount,const wchar_t *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fwscanf_s_l(FILE *_File,const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _swscanf_s_l(const wchar_t *_Src,const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) swscanf_s(const wchar_t *_Src,const wchar_t *_Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snwscanf_s(const wchar_t *_Src,size_t _MaxCount,const wchar_t *_Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snwscanf_s_l(const wchar_t *_Src,size_t _MaxCount,const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wscanf_s_l(const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wfopen_s(FILE **_File,const wchar_t *_Filename,const wchar_t *_Mode);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wfreopen_s(FILE **_File,const wchar_t *_Filename,const wchar_t *_Mode,FILE *_OldFile);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wtmpnam_s(wchar_t *_DstBuf,size_t _SizeInWords);
 
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fwprintf_p(FILE *_File,const wchar_t *_Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wprintf_p(const wchar_t *_Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vfwprintf_p(FILE *_File,const wchar_t *_Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vwprintf_p(const wchar_t *_Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _swprintf_p(wchar_t *_DstBuf,size_t _MaxCount,const wchar_t *_Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vswprintf_p(wchar_t *_DstBuf,size_t _MaxCount,const wchar_t *_Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _scwprintf_p(const wchar_t *_Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vscwprintf_p(const wchar_t *_Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wprintf_l(const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wprintf_p_l(const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vwprintf_l(const wchar_t *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vwprintf_p_l(const wchar_t *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fwprintf_l(FILE *_File,const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fwprintf_p_l(FILE *_File,const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vfwprintf_l(FILE *_File,const wchar_t *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vfwprintf_p_l(FILE *_File,const wchar_t *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _swprintf_c_l(wchar_t *_DstBuf,size_t _MaxCount,const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _swprintf_p_l(wchar_t *_DstBuf,size_t _MaxCount,const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vswprintf_c_l(wchar_t *_DstBuf,size_t _MaxCount,const wchar_t *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vswprintf_p_l(wchar_t *_DstBuf,size_t _MaxCount,const wchar_t *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _scwprintf_l(const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _scwprintf_p_l(const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vscwprintf_p_l(const wchar_t *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snwprintf_l(wchar_t *_DstBuf,size_t _MaxCount,const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vsnwprintf_l(wchar_t *_DstBuf,size_t _MaxCount,const wchar_t *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) __swprintf_l(wchar_t *_Dest,const wchar_t *_Format,_locale_t _Plocinfo,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) __vswprintf_l(wchar_t *_Dest,const wchar_t *_Format,_locale_t _Plocinfo,va_list _Args);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vscwprintf_l(const wchar_t *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fwscanf_l(FILE *_File,const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _swscanf_l(const wchar_t *_Src,const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snwscanf_l(const wchar_t *_Src,size_t _MaxCount,const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wscanf_l(const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) size_t __attribute__((__cdecl__)) _fread_nolock_s(void *_DstBuf,size_t _DstSize,size_t _ElementSize,size_t _Count,FILE *_File);
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
/* Define __mingw_<printf> macros.  */
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
/*
   Copyright (c) 2013 mingw-w64 project

   Permission is hereby granted, free of charge, to any person obtaining a
   copy of this software and associated documentation files (the "Software"),
   to deal in the Software without restriction, including without limitation
   the rights to use, copy, modify, merge, publish, distribute, sublicense,
   and/or sell copies of the Software, and to permit persons to whom the
   Software is furnished to do so, subject to the following conditions:

   The above copyright notice and this permission notice shall be included in
   all copies or substantial portions of the Software.

   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
   IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
   FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
   AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
   LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
   FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
   DEALINGS IN THE SOFTWARE.
*/
/* Windows has rudimentary signals support.  */
  typedef int sig_atomic_t;
  typedef void (*__p_sig_fn_t)(int);
  extern void **__attribute__((__cdecl__)) __pxcptinfoptrs(void);
  __p_sig_fn_t __attribute__((__cdecl__)) signal(int _SigNum,__p_sig_fn_t _Func);
  int __attribute__((__cdecl__)) raise(int _SigNum);
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
/* Copyright (C) 1992-2015 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free
Software Foundation; either version 3, or (at your option) any later
version.

GCC is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */
/* This administrivia gets added to the beginning of limits.h
   if the system has its own version of limits.h.  */
/* We use _GCC_LIMITS_H_ because we want this not to match
   any macros that the system's limits.h uses for its own purposes.  */
/* Use "..." so that we find syslimits.h only in this same directory.  */
/* syslimits.h stands for the system's own limits.h file.
   If we can use it ok unmodified, then we install this text.
   If fixincludes fixes it, then the fixed version is installed
   instead of this text.  */
/* Copyright (C) 1992-2015 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free
Software Foundation; either version 3, or (at your option) any later
version.

GCC is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */
/* This administrivia gets added to the beginning of limits.h
   if the system has its own version of limits.h.  */
/* We use _GCC_LIMITS_H_ because we want this not to match
   any macros that the system's limits.h uses for its own purposes.  */
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
/*
 * File system limits
 *
 * NOTE: Apparently the actual size of PATH_MAX is 260, but a space is
 *       required for the NUL. TODO: Test?
 * NOTE: PATH_MAX is the POSIX equivalent for Microsoft's MAX_PATH; the two
 *       are semantically identical, with a limit of 259 characters for the
 *       path name, plus one for a terminating NUL, for a total of 260.
 */
/* Copyright (C) 1991-2015 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free
Software Foundation; either version 3, or (at your option) any later
version.

GCC is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */
/* Number of bits in a `char'.  */
/* Maximum length of a multibyte character.  */
/* Minimum and maximum values a `signed char' can hold.  */
/* Maximum value an `unsigned char' can hold.  (Minimum is 0).  */
/* Minimum and maximum values a `char' can hold.  */
/* Minimum and maximum values a `signed short int' can hold.  */
/* Maximum value an `unsigned short int' can hold.  (Minimum is 0).  */
/* Minimum and maximum values a `signed int' can hold.  */
/* Maximum value an `unsigned int' can hold.  (Minimum is 0).  */
/* Minimum and maximum values a `signed long int' can hold.
   (Same as `int').  */
/* Maximum value an `unsigned long int' can hold.  (Minimum is 0).  */
/* Minimum and maximum values a `signed long long int' can hold.  */
/* Maximum value an `unsigned long long int' can hold.  (Minimum is 0).  */
/* Minimum and maximum values a `signed long long int' can hold.  */
/* Maximum value an `unsigned long long int' can hold.  (Minimum is 0).  */
/* This administrivia gets added to the end of limits.h
   if the system has its own version of limits.h.  */
#pragma pack(push,_CRT_PACKING)
  typedef int (__attribute__((__cdecl__)) *_onexit_t)(void);
  typedef struct _div_t {
    int quot;
    int rem;
  } div_t;
  typedef struct _ldiv_t {
    long quot;
    long rem;
  } ldiv_t;
#pragma pack(4)
  typedef struct {
    unsigned char ld[10];
  } _LDOUBLE;
#pragma pack()
  typedef struct {
    double x;
  } _CRT_DOUBLE;
  typedef struct {
    float f;
  } _CRT_FLOAT;
       
  typedef struct {
    long double x;
  } _LONGDOUBLE;
       
#pragma pack(4)
  typedef struct {
    unsigned char ld12[12];
  } _LDBL12;
#pragma pack()
  extern int * __imp___mb_cur_max;
  typedef void (__attribute__((__cdecl__)) *_purecall_handler)(void);
  __attribute__ ((__dllimport__)) _purecall_handler __attribute__((__cdecl__)) _set_purecall_handler(_purecall_handler _Handler);
  __attribute__ ((__dllimport__)) _purecall_handler __attribute__((__cdecl__)) _get_purecall_handler(void);
  typedef void (__attribute__((__cdecl__)) *_invalid_parameter_handler)(const wchar_t *,const wchar_t *,const wchar_t *,unsigned int,uintptr_t);
  __attribute__ ((__dllimport__)) _invalid_parameter_handler __attribute__((__cdecl__)) _set_invalid_parameter_handler(_invalid_parameter_handler _Handler);
  __attribute__ ((__dllimport__)) _invalid_parameter_handler __attribute__((__cdecl__)) _get_invalid_parameter_handler(void);
  __attribute__ ((__dllimport__)) extern int *__attribute__((__cdecl__)) _errno(void);
  errno_t __attribute__((__cdecl__)) _set_errno(int _Value);
  errno_t __attribute__((__cdecl__)) _get_errno(int *_Value);
  __attribute__ ((__dllimport__)) unsigned long *__attribute__((__cdecl__)) __doserrno(void);
  errno_t __attribute__((__cdecl__)) _set_doserrno(unsigned long _Value);
  errno_t __attribute__((__cdecl__)) _get_doserrno(unsigned long *_Value);
  extern __attribute__ ((__dllimport__)) char *_sys_errlist[1];
  extern __attribute__ ((__dllimport__)) int _sys_nerr;
  extern int * __imp___argc;
  extern char *** __imp___argv;
  extern wchar_t *** __imp___wargv;
  extern char *** __imp__environ;
  extern wchar_t *** __imp__wenviron;
  extern char ** __imp__pgmptr;
  extern wchar_t ** __imp__wpgmptr;
  errno_t __attribute__((__cdecl__)) _get_pgmptr(char **_Value);
  errno_t __attribute__((__cdecl__)) _get_wpgmptr(wchar_t **_Value);
  extern int * __imp__fmode;
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _set_fmode(int _Mode);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _get_fmode(int *_PMode);
  extern unsigned int * __imp__osplatform;
  extern unsigned int * __imp__osver;
  extern unsigned int * __imp__winver;
  extern unsigned int * __imp__winmajor;
  extern unsigned int * __imp__winminor;
  errno_t __attribute__((__cdecl__)) _get_osplatform(unsigned int *_Value);
  errno_t __attribute__((__cdecl__)) _get_osver(unsigned int *_Value);
  errno_t __attribute__((__cdecl__)) _get_winver(unsigned int *_Value);
  errno_t __attribute__((__cdecl__)) _get_winmajor(unsigned int *_Value);
  errno_t __attribute__((__cdecl__)) _get_winminor(unsigned int *_Value);
  void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) exit(int _Code) __attribute__ ((__noreturn__));
  void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _exit(int _Code) __attribute__ ((__noreturn__));
  /* C99 function name */
  void __attribute__((__cdecl__)) _Exit(int) __attribute__ ((__noreturn__));
       
  void __attribute__((__cdecl__)) __attribute__((noreturn)) abort(void);
       
  __attribute__ ((__dllimport__)) unsigned int __attribute__((__cdecl__)) _set_abort_behavior(unsigned int _Flags,unsigned int _Mask);
  int __attribute__((__cdecl__)) abs(int _X);
  long __attribute__((__cdecl__)) labs(long _X);
  __extension__ long long __attribute__((__cdecl__)) _abs64(long long);
  extern __inline__ __attribute__((__always_inline__,__gnu_inline__)) long long __attribute__((__cdecl__)) _abs64(long long x) {
    return __builtin_llabs(x);
  }
  int __attribute__((__cdecl__)) atexit(void (__attribute__((__cdecl__)) *)(void));
  double __attribute__((__cdecl__)) atof(const char *_String);
  double __attribute__((__cdecl__)) _atof_l(const char *_String,_locale_t _Locale);
  int __attribute__((__cdecl__)) atoi(const char *_Str);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _atoi_l(const char *_Str,_locale_t _Locale);
  long __attribute__((__cdecl__)) atol(const char *_Str);
  __attribute__ ((__dllimport__)) long __attribute__((__cdecl__)) _atol_l(const char *_Str,_locale_t _Locale);
  void *__attribute__((__cdecl__)) bsearch(const void *_Key,const void *_Base,size_t _NumOfElements,size_t _SizeOfElements,int (__attribute__((__cdecl__)) *_PtFuncCompare)(const void *,const void *));
  void __attribute__((__cdecl__)) qsort(void *_Base,size_t _NumOfElements,size_t _SizeOfElements,int (__attribute__((__cdecl__)) *_PtFuncCompare)(const void *,const void *));
  unsigned short __attribute__((__cdecl__)) _byteswap_ushort(unsigned short _Short);
  unsigned long __attribute__((__cdecl__)) _byteswap_ulong (unsigned long _Long);
  __extension__ unsigned long long __attribute__((__cdecl__)) _byteswap_uint64(unsigned long long _Int64);
  div_t __attribute__((__cdecl__)) div(int _Numerator,int _Denominator);
  char *__attribute__((__cdecl__)) getenv(const char *_VarName) ;
  __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) _itoa(int _Value,char *_Dest,int _Radix);
  __extension__ __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) _i64toa(long long _Val,char *_DstBuf,int _Radix) ;
  __extension__ __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) _ui64toa(unsigned long long _Val,char *_DstBuf,int _Radix) ;
  __extension__ __attribute__ ((__dllimport__)) long long __attribute__((__cdecl__)) _atoi64(const char *_String);
  __extension__ __attribute__ ((__dllimport__)) long long __attribute__((__cdecl__)) _atoi64_l(const char *_String,_locale_t _Locale);
  __extension__ __attribute__ ((__dllimport__)) long long __attribute__((__cdecl__)) _strtoi64(const char *_String,char **_EndPtr,int _Radix);
  __extension__ __attribute__ ((__dllimport__)) long long __attribute__((__cdecl__)) _strtoi64_l(const char *_String,char **_EndPtr,int _Radix,_locale_t _Locale);
  __extension__ __attribute__ ((__dllimport__)) unsigned long long __attribute__((__cdecl__)) _strtoui64(const char *_String,char **_EndPtr,int _Radix);
  __extension__ __attribute__ ((__dllimport__)) unsigned long long __attribute__((__cdecl__)) _strtoui64_l(const char *_String,char **_EndPtr,int _Radix,_locale_t _Locale);
  ldiv_t __attribute__((__cdecl__)) ldiv(long _Numerator,long _Denominator);
  __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) _ltoa(long _Value,char *_Dest,int _Radix) ;
  int __attribute__((__cdecl__)) mblen(const char *_Ch,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _mblen_l(const char *_Ch,size_t _MaxCount,_locale_t _Locale);
  __attribute__ ((__dllimport__)) size_t __attribute__((__cdecl__)) _mbstrlen(const char *_Str);
  __attribute__ ((__dllimport__)) size_t __attribute__((__cdecl__)) _mbstrlen_l(const char *_Str,_locale_t _Locale);
  __attribute__ ((__dllimport__)) size_t __attribute__((__cdecl__)) _mbstrnlen(const char *_Str,size_t _MaxCount);
  __attribute__ ((__dllimport__)) size_t __attribute__((__cdecl__)) _mbstrnlen_l(const char *_Str,size_t _MaxCount,_locale_t _Locale);
  int __attribute__((__cdecl__)) mbtowc(wchar_t * __restrict__ _DstCh,const char * __restrict__ _SrcCh,size_t _SrcSizeInBytes);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _mbtowc_l(wchar_t * __restrict__ _DstCh,const char * __restrict__ _SrcCh,size_t _SrcSizeInBytes,_locale_t _Locale);
  size_t __attribute__((__cdecl__)) mbstowcs(wchar_t * __restrict__ _Dest,const char * __restrict__ _Source,size_t _MaxCount);
  __attribute__ ((__dllimport__)) size_t __attribute__((__cdecl__)) _mbstowcs_l(wchar_t * __restrict__ _Dest,const char * __restrict__ _Source,size_t _MaxCount,_locale_t _Locale);
  int __attribute__((__cdecl__)) mkstemp(char *template_name);
  int __attribute__((__cdecl__)) rand(void);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _set_error_mode(int _Mode);
  void __attribute__((__cdecl__)) srand(unsigned int _Seed);
  double __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strtod(const char * __restrict__ _Str,char ** __restrict__ _EndPtr);
  float __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strtof(const char * __restrict__ nptr, char ** __restrict__ endptr);
  long double __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strtold(const char * __restrict__ , char ** __restrict__ );
  /* libmingwex.a provides a c99-compliant strtod() exported as __strtod() */
  extern double __attribute__((__cdecl__)) __attribute__ ((__nothrow__))
  __strtod (const char * __restrict__ , char ** __restrict__);
  float __attribute__((__cdecl__)) __mingw_strtof (const char * __restrict__, char ** __restrict__);
  double __attribute__((__cdecl__)) __mingw_strtod (const char * __restrict__, char ** __restrict__);
  long double __attribute__((__cdecl__)) __mingw_strtold(const char * __restrict__, char ** __restrict__);
  __attribute__ ((__dllimport__)) double __attribute__((__cdecl__)) _strtod_l(const char * __restrict__ _Str,char ** __restrict__ _EndPtr,_locale_t _Locale);
  long __attribute__((__cdecl__)) strtol(const char * __restrict__ _Str,char ** __restrict__ _EndPtr,int _Radix);
  __attribute__ ((__dllimport__)) long __attribute__((__cdecl__)) _strtol_l(const char * __restrict__ _Str,char ** __restrict__ _EndPtr,int _Radix,_locale_t _Locale);
  unsigned long __attribute__((__cdecl__)) strtoul(const char * __restrict__ _Str,char ** __restrict__ _EndPtr,int _Radix);
  __attribute__ ((__dllimport__)) unsigned long __attribute__((__cdecl__)) _strtoul_l(const char * __restrict__ _Str,char ** __restrict__ _EndPtr,int _Radix,_locale_t _Locale);
  int __attribute__((__cdecl__)) system(const char *_Command);
  __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) _ultoa(unsigned long _Value,char *_Dest,int _Radix) ;
  int __attribute__((__cdecl__)) wctomb(char *_MbCh,wchar_t _WCh) ;
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wctomb_l(char *_MbCh,wchar_t _WCh,_locale_t _Locale) ;
  size_t __attribute__((__cdecl__)) wcstombs(char * __restrict__ _Dest,const wchar_t * __restrict__ _Source,size_t _MaxCount) ;
  __attribute__ ((__dllimport__)) size_t __attribute__((__cdecl__)) _wcstombs_l(char * __restrict__ _Dest,const wchar_t * __restrict__ _Source,size_t _MaxCount,_locale_t _Locale) ;
  void *__attribute__((__cdecl__)) calloc(size_t _NumOfElements,size_t _SizeOfElements);
  void __attribute__((__cdecl__)) free(void *_Memory);
  void *__attribute__((__cdecl__)) malloc(size_t _Size);
  void *__attribute__((__cdecl__)) realloc(void *_Memory,size_t _NewSize);
  __attribute__ ((__dllimport__)) void *__attribute__((__cdecl__)) _recalloc(void *_Memory,size_t _Count,size_t _Size);
/* Make sure that X86intrin.h doesn't produce here collisions.  */
       
       
  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _aligned_free(void *_Memory);
  __attribute__ ((__dllimport__)) void *__attribute__((__cdecl__)) _aligned_malloc(size_t _Size,size_t _Alignment);
       
       
  __attribute__ ((__dllimport__)) void *__attribute__((__cdecl__)) _aligned_offset_malloc(size_t _Size,size_t _Alignment,size_t _Offset);
  __attribute__ ((__dllimport__)) void *__attribute__((__cdecl__)) _aligned_realloc(void *_Memory,size_t _Size,size_t _Alignment);
  __attribute__ ((__dllimport__)) void *__attribute__((__cdecl__)) _aligned_recalloc(void *_Memory,size_t _Count,size_t _Size,size_t _Alignment);
  __attribute__ ((__dllimport__)) void *__attribute__((__cdecl__)) _aligned_offset_realloc(void *_Memory,size_t _Size,size_t _Alignment,size_t _Offset);
  __attribute__ ((__dllimport__)) void *__attribute__((__cdecl__)) _aligned_offset_recalloc(void *_Memory,size_t _Count,size_t _Size,size_t _Alignment,size_t _Offset);
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _itow(int _Value,wchar_t *_Dest,int _Radix) ;
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _ltow(long _Value,wchar_t *_Dest,int _Radix) ;
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _ultow(unsigned long _Value,wchar_t *_Dest,int _Radix) ;
  double __attribute__((__cdecl__)) __mingw_wcstod(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr);
  float __attribute__((__cdecl__)) __mingw_wcstof(const wchar_t * __restrict__ nptr, wchar_t ** __restrict__ endptr);
  long double __attribute__((__cdecl__)) __mingw_wcstold(const wchar_t * __restrict__, wchar_t ** __restrict__);
  double __attribute__((__cdecl__)) wcstod(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr);
  float __attribute__((__cdecl__)) wcstof(const wchar_t * __restrict__ nptr, wchar_t ** __restrict__ endptr);
  long double __attribute__((__cdecl__)) wcstold(const wchar_t * __restrict__, wchar_t ** __restrict__);
  __attribute__ ((__dllimport__)) double __attribute__((__cdecl__)) _wcstod_l(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,_locale_t _Locale);
  long __attribute__((__cdecl__)) wcstol(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,int _Radix);
  __attribute__ ((__dllimport__)) long __attribute__((__cdecl__)) _wcstol_l(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,int _Radix,_locale_t _Locale);
  unsigned long __attribute__((__cdecl__)) wcstoul(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,int _Radix);
  __attribute__ ((__dllimport__)) unsigned long __attribute__((__cdecl__)) _wcstoul_l(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,int _Radix,_locale_t _Locale);
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _wgetenv(const wchar_t *_VarName) ;
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wsystem(const wchar_t *_Command);
  __attribute__ ((__dllimport__)) double __attribute__((__cdecl__)) _wtof(const wchar_t *_Str);
  __attribute__ ((__dllimport__)) double __attribute__((__cdecl__)) _wtof_l(const wchar_t *_Str,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wtoi(const wchar_t *_Str);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wtoi_l(const wchar_t *_Str,_locale_t _Locale);
  __attribute__ ((__dllimport__)) long __attribute__((__cdecl__)) _wtol(const wchar_t *_Str);
  __attribute__ ((__dllimport__)) long __attribute__((__cdecl__)) _wtol_l(const wchar_t *_Str,_locale_t _Locale);
  __extension__ __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _i64tow(long long _Val,wchar_t *_DstBuf,int _Radix) ;
  __extension__ __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _ui64tow(unsigned long long _Val,wchar_t *_DstBuf,int _Radix) ;
  __extension__ __attribute__ ((__dllimport__)) long long __attribute__((__cdecl__)) _wtoi64(const wchar_t *_Str);
  __extension__ __attribute__ ((__dllimport__)) long long __attribute__((__cdecl__)) _wtoi64_l(const wchar_t *_Str,_locale_t _Locale);
  __extension__ __attribute__ ((__dllimport__)) long long __attribute__((__cdecl__)) _wcstoi64(const wchar_t *_Str,wchar_t **_EndPtr,int _Radix);
  __extension__ __attribute__ ((__dllimport__)) long long __attribute__((__cdecl__)) _wcstoi64_l(const wchar_t *_Str,wchar_t **_EndPtr,int _Radix,_locale_t _Locale);
  __extension__ __attribute__ ((__dllimport__)) unsigned long long __attribute__((__cdecl__)) _wcstoui64(const wchar_t *_Str,wchar_t **_EndPtr,int _Radix);
  __extension__ __attribute__ ((__dllimport__)) unsigned long long __attribute__((__cdecl__)) _wcstoui64_l(const wchar_t *_Str ,wchar_t **_EndPtr,int _Radix,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _putenv(const char *_EnvString);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wputenv(const wchar_t *_EnvString);
  __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) _fullpath(char *_FullPath,const char *_Path,size_t _SizeInBytes);
  __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) _ecvt(double _Val,int _NumOfDigits,int *_PtDec,int *_PtSign) ;
  __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) _fcvt(double _Val,int _NumOfDec,int *_PtDec,int *_PtSign) ;
  __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) _gcvt(double _Val,int _NumOfDigits,char *_DstBuf) ;
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _atodbl(_CRT_DOUBLE *_Result,char *_Str);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _atoldbl(_LDOUBLE *_Result,char *_Str);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _atoflt(_CRT_FLOAT *_Result,char *_Str);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _atodbl_l(_CRT_DOUBLE *_Result,char *_Str,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _atoldbl_l(_LDOUBLE *_Result,char *_Str,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _atoflt_l(_CRT_FLOAT *_Result,char *_Str,_locale_t _Locale);
/* Remove buggy x86intrin.h definitions if present (see gcc bug 61662). */
/* These prototypes work for x86, x64 (native Windows), and cyginwin64. */
unsigned long __attribute__((__cdecl__)) _lrotl(unsigned long,int);
unsigned long __attribute__((__cdecl__)) _lrotr(unsigned long,int);
  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _makepath(char *_Path,const char *_Drive,const char *_Dir,const char *_Filename,const char *_Ext);
  _onexit_t __attribute__((__cdecl__)) _onexit(_onexit_t _Func);
       
       
  __extension__ unsigned long long __attribute__((__cdecl__)) _rotl64(unsigned long long _Val,int _Shift);
  __extension__ unsigned long long __attribute__((__cdecl__)) _rotr64(unsigned long long Value,int Shift);
       
       
       
       
  unsigned int __attribute__((__cdecl__)) _rotr(unsigned int _Val,int _Shift);
  unsigned int __attribute__((__cdecl__)) _rotl(unsigned int _Val,int _Shift);
       
       
  __extension__ unsigned long long __attribute__((__cdecl__)) _rotr64(unsigned long long _Val,int _Shift);
  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _searchenv(const char *_Filename,const char *_EnvVar,char *_ResultPath) ;
  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _splitpath(const char *_FullPath,char *_Drive,char *_Dir,char *_Filename,char *_Ext) ;
  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _swab(char *_Buf1,char *_Buf2,int _SizeInBytes);
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _wfullpath(wchar_t *_FullPath,const wchar_t *_Path,size_t _SizeInWords);
  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _wmakepath(wchar_t *_ResultPath,const wchar_t *_Drive,const wchar_t *_Dir,const wchar_t *_Filename,const wchar_t *_Ext);
  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _wsearchenv(const wchar_t *_Filename,const wchar_t *_EnvVar,wchar_t *_ResultPath) ;
  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _wsplitpath(const wchar_t *_FullPath,wchar_t *_Drive,wchar_t *_Dir,wchar_t *_Filename,wchar_t *_Ext) ;
  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _beep(unsigned _Frequency,unsigned _Duration) __attribute__ ((__deprecated__));
  /* Not to be confused with  _set_error_mode (int).  */
  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _seterrormode(int _Mode) __attribute__ ((__deprecated__));
  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _sleep(unsigned long _Duration) __attribute__ ((__deprecated__));
  char *__attribute__((__cdecl__)) ecvt(double _Val,int _NumOfDigits,int *_PtDec,int *_PtSign) ;
  char *__attribute__((__cdecl__)) fcvt(double _Val,int _NumOfDec,int *_PtDec,int *_PtSign) ;
  char *__attribute__((__cdecl__)) gcvt(double _Val,int _NumOfDigits,char *_DstBuf) ;
  char *__attribute__((__cdecl__)) itoa(int _Val,char *_DstBuf,int _Radix) ;
  char *__attribute__((__cdecl__)) ltoa(long _Val,char *_DstBuf,int _Radix) ;
  int __attribute__((__cdecl__)) putenv(const char *_EnvString) ;
  void __attribute__((__cdecl__)) swab(char *_Buf1,char *_Buf2,int _SizeInBytes) ;
  char *__attribute__((__cdecl__)) ultoa(unsigned long _Val,char *_Dstbuf,int _Radix) ;
  _onexit_t __attribute__((__cdecl__)) onexit(_onexit_t _Func);
  typedef struct { __extension__ long long quot, rem; } lldiv_t;
  __extension__ lldiv_t __attribute__((__cdecl__)) lldiv(long long, long long);
  __extension__ long long __attribute__((__cdecl__)) llabs(long long);
  __extension__ long long __attribute__((__cdecl__)) strtoll(const char * __restrict__, char ** __restrict, int);
  __extension__ unsigned long long __attribute__((__cdecl__)) strtoull(const char * __restrict__, char ** __restrict__, int);
  /* these are stubs for MS _i64 versions */
  __extension__ long long __attribute__((__cdecl__)) atoll (const char *);
  __extension__ long long __attribute__((__cdecl__)) wtoll (const wchar_t *);
  __extension__ char *__attribute__((__cdecl__)) lltoa (long long, char *, int);
  __extension__ char *__attribute__((__cdecl__)) ulltoa (unsigned long long , char *, int);
  __extension__ wchar_t *__attribute__((__cdecl__)) lltow (long long, wchar_t *, int);
  __extension__ wchar_t *__attribute__((__cdecl__)) ulltow (unsigned long long, wchar_t *, int);
  /* __CRT_INLINE using non-ansi functions */
#pragma pack(pop)
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _dupenv_s(char **_PBuffer,size_t *_PBufferSizeInBytes,const char *_VarName);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _itoa_s(int _Value,char *_DstBuf,size_t _Size,int _Radix);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _i64toa_s(long long _Val,char *_DstBuf,size_t _Size,int _Radix);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _ui64toa_s(unsigned long long _Val,char *_DstBuf,size_t _Size,int _Radix);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _ltoa_s(long _Val,char *_DstBuf,size_t _Size,int _Radix);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) mbstowcs_s(size_t *_PtNumOfCharConverted,wchar_t *_DstBuf,size_t _SizeInWords,const char *_SrcBuf,size_t _MaxCount);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _mbstowcs_s_l(size_t *_PtNumOfCharConverted,wchar_t *_DstBuf,size_t _SizeInWords,const char *_SrcBuf,size_t _MaxCount,_locale_t _Locale);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _ultoa_s(unsigned long _Val,char *_DstBuf,size_t _Size,int _Radix);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wctomb_s_l(int *_SizeConverted,char *_MbCh,size_t _SizeInBytes,wchar_t _WCh,_locale_t _Locale);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) wcstombs_s(size_t *_PtNumOfCharConverted,char *_Dst,size_t _DstSizeInBytes,const wchar_t *_Src,size_t _MaxCountInBytes);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wcstombs_s_l(size_t *_PtNumOfCharConverted,char *_Dst,size_t _DstSizeInBytes,const wchar_t *_Src,size_t _MaxCountInBytes,_locale_t _Locale);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _itow_s (int _Val,wchar_t *_DstBuf,size_t _SizeInWords,int _Radix);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _ltow_s (long _Val,wchar_t *_DstBuf,size_t _SizeInWords,int _Radix);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _ultow_s (unsigned long _Val,wchar_t *_DstBuf,size_t _SizeInWords,int _Radix);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wgetenv_s(size_t *_ReturnSize,wchar_t *_DstBuf,size_t _DstSizeInWords,const wchar_t *_VarName);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wdupenv_s(wchar_t **_Buffer,size_t *_BufferSizeInWords,const wchar_t *_VarName);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _i64tow_s(long long _Val,wchar_t *_DstBuf,size_t _SizeInWords,int _Radix);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _ui64tow_s(unsigned long long _Val,wchar_t *_DstBuf,size_t _SizeInWords,int _Radix);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _ecvt_s(char *_DstBuf,size_t _Size,double _Val,int _NumOfDights,int *_PtDec,int *_PtSign);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _fcvt_s(char *_DstBuf,size_t _Size,double _Val,int _NumOfDec,int *_PtDec,int *_PtSign);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _gcvt_s(char *_DstBuf,size_t _Size,double _Val,int _NumOfDigits);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _makepath_s(char *_PathResult,size_t _Size,const char *_Drive,const char *_Dir,const char *_Filename,const char *_Ext);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _putenv_s(const char *_Name,const char *_Value);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _searchenv_s(const char *_Filename,const char *_EnvVar,char *_ResultPath,size_t _SizeInBytes);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _splitpath_s(const char *_FullPath,char *_Drive,size_t _DriveSize,char *_Dir,size_t _DirSize,char *_Filename,size_t _FilenameSize,char *_Ext,size_t _ExtSize);
 
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wmakepath_s(wchar_t *_PathResult,size_t _SizeInWords,const wchar_t *_Drive,const wchar_t *_Dir,const wchar_t *_Filename,const wchar_t *_Ext);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wputenv_s(const wchar_t *_Name,const wchar_t *_Value);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wsearchenv_s(const wchar_t *_Filename,const wchar_t *_EnvVar,wchar_t *_ResultPath,size_t _SizeInWords);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wsplitpath_s(const wchar_t *_FullPath,wchar_t *_Drive,size_t _DriveSizeInWords,wchar_t *_Dir,size_t _DirSizeInWords,wchar_t *_Filename,size_t _FilenameSizeInWords,wchar_t *_Ext,size_t _ExtSizeInWords);
 
  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) qsort_s(void *_Base,size_t _NumOfElements,size_t _SizeOfElements,int (__attribute__((__cdecl__)) *_PtFuncCompare)(void *,const void *,const void *),void *_Context);
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#pragma pack(push,_CRT_PACKING)
/* Return codes for _heapwalk()  */
/* Values for _heapinfo.useflag */
 /* The structure used to walk through the heap with _heapwalk.  */
  typedef struct _heapinfo {
    int *_pentry;
    size_t _size;
    int _useflag;
  } _HEAPINFO;
  extern unsigned int _amblksiz;
/* Make sure that X86intrin.h doesn't produce here collisions.  */
       
       
       
       
/* Users should really use MS provided versions */
void * __mingw_aligned_malloc (size_t _Size, size_t _Alignment);
void __mingw_aligned_free (void *_Memory);
void * __mingw_aligned_offset_realloc (void *_Memory, size_t _Size, size_t _Alignment, size_t _Offset);
void * __mingw_aligned_realloc (void *_Memory, size_t _Size, size_t _Offset);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _resetstkoflw (void);
  __attribute__ ((__dllimport__)) unsigned long __attribute__((__cdecl__)) _set_malloc_crt_max_wait(unsigned long _NewValue);
  __attribute__ ((__dllimport__)) void *__attribute__((__cdecl__)) _expand(void *_Memory,size_t _NewSize);
  __attribute__ ((__dllimport__)) size_t __attribute__((__cdecl__)) _msize(void *_Memory);
  __attribute__ ((__dllimport__)) size_t __attribute__((__cdecl__)) _get_sbh_threshold(void);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _set_sbh_threshold(size_t _NewValue);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _set_amblksiz(size_t _Value);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _get_amblksiz(size_t *_Value);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _heapadd(void *_Memory,size_t _Size);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _heapchk(void);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _heapmin(void);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _heapset(unsigned int _Fill);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _heapwalk(_HEAPINFO *_EntryInfo);
  __attribute__ ((__dllimport__)) size_t __attribute__((__cdecl__)) _heapused(size_t *_Used,size_t *_Commit);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _get_heap_handle(void);
  static __inline void *_MarkAllocaS(void *_Ptr,unsigned int _Marker) {
    if(_Ptr) {
      *((unsigned int*)_Ptr) = _Marker;
      _Ptr = (char*)_Ptr + 16;
    }
    return _Ptr;
  }
  static __inline void __attribute__((__cdecl__)) _freea(void *_Memory) {
    unsigned int _Marker;
    if(_Memory) {
      _Memory = (char*)_Memory - 16;
      _Marker = *(unsigned int *)_Memory;
      if(_Marker==0xDDDD) {
 free(_Memory);
      }
    }
  }
#pragma pack(pop)
/* Copyright (C) 1989, 1997, 1998, 1999, 2000 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with GCC; see the file COPYING.  If not, write to
the Free Software Foundation, 51 Franklin Street, Fifth Floor,
Boston, MA 02110-1301, USA.  */
/* As a special exception, if you include this header file into source
   files compiled by GCC, this header file does not by itself cause
   the resulting executable to be covered by the GNU General Public
   License.  This exception does not however invalidate any other
   reasons why the executable file might be covered by the GNU General
   Public License.  */
/*
 * ISO C Standard:  7.15  Variable arguments  <stdarg.h>
 */
/* Define __gnuc_va_list.  */
/* Define the standard macros for the user,
   if this invocation was from the user program.  */
/* Define va_list, if desired, from __gnuc_va_list. */
/* We deliberately do not define va_list when called from
   stdio.h, because ANSI C says that stdio.h is not supposed to define
   va_list.  stdio.h needs to have access to that data type, 
   but must not use that name.  It should use the name __gnuc_va_list,
   which is safe because it is reserved for the implementation.  */
/* The macro _VA_LIST_ is the same thing used by this file in Ultrix.
   But on BSD NET2 we must not test or define or undef it.
   (Note that the comments in NET 2's ansi.h
   are incorrect for _VA_LIST_--see stdio.h!)  */
/* The macro _VA_LIST_DEFINED is used in Windows NT 3.5  */
/* include mingw stuff */
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
/* Copyright (C) 1989-2015 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */
/*
 * ISO C Standard:  7.15  Variable arguments  <stdarg.h>
 */
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
  __attribute__ ((__dllimport__)) void *__attribute__((__cdecl__)) _memccpy(void *_Dst,const void *_Src,int _Val,size_t _MaxCount);
  void *__attribute__((__cdecl__)) memchr(const void *_Buf ,int _Val,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _memicmp(const void *_Buf1,const void *_Buf2,size_t _Size);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _memicmp_l(const void *_Buf1,const void *_Buf2,size_t _Size,_locale_t _Locale);
  int __attribute__((__cdecl__)) memcmp(const void *_Buf1,const void *_Buf2,size_t _Size);
  void * __attribute__((__cdecl__)) memcpy(void * __restrict__ _Dst,const void * __restrict__ _Src,size_t _Size) ;
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) memcpy_s (void *_dest,size_t _numberOfElements,const void *_src,size_t _count);
  void * __attribute__((__cdecl__)) mempcpy (void *_Dst, const void *_Src, size_t _Size);
  void * __attribute__((__cdecl__)) memset(void *_Dst,int _Val,size_t _Size);
  void * __attribute__((__cdecl__)) memccpy(void *_Dst,const void *_Src,int _Val,size_t _Size) ;
  int __attribute__((__cdecl__)) memicmp(const void *_Buf1,const void *_Buf2,size_t _Size) ;
  char * __attribute__((__cdecl__)) _strset(char *_Str,int _Val) ;
  char * __attribute__((__cdecl__)) _strset_l(char *_Str,int _Val,_locale_t _Locale) ;
  char * __attribute__((__cdecl__)) strcpy(char * __restrict__ _Dest,const char * __restrict__ _Source);
  char * __attribute__((__cdecl__)) strcat(char * __restrict__ _Dest,const char * __restrict__ _Source);
  int __attribute__((__cdecl__)) strcmp(const char *_Str1,const char *_Str2);
  size_t __attribute__((__cdecl__)) strlen(const char *_Str);
  size_t __attribute__((__cdecl__)) strnlen(const char *_Str,size_t _MaxCount);
  void *__attribute__((__cdecl__)) memmove(void *_Dst,const void *_Src,size_t _Size) ;
  __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) _strdup(const char *_Src);
  char *__attribute__((__cdecl__)) strchr(const char *_Str,int _Val);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _stricmp(const char *_Str1,const char *_Str2);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _strcmpi(const char *_Str1,const char *_Str2);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _stricmp_l(const char *_Str1,const char *_Str2,_locale_t _Locale);
  int __attribute__((__cdecl__)) strcoll(const char *_Str1,const char *_Str2);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _strcoll_l(const char *_Str1,const char *_Str2,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _stricoll(const char *_Str1,const char *_Str2);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _stricoll_l(const char *_Str1,const char *_Str2,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _strncoll (const char *_Str1,const char *_Str2,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _strncoll_l(const char *_Str1,const char *_Str2,size_t _MaxCount,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _strnicoll (const char *_Str1,const char *_Str2,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _strnicoll_l(const char *_Str1,const char *_Str2,size_t _MaxCount,_locale_t _Locale);
  size_t __attribute__((__cdecl__)) strcspn(const char *_Str,const char *_Control);
  __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) _strerror(const char *_ErrMsg) ;
  char *__attribute__((__cdecl__)) strerror(int) ;
  __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) _strlwr(char *_String) ;
  char *strlwr_l(char *_String,_locale_t _Locale) ;
  char *__attribute__((__cdecl__)) strncat(char * __restrict__ _Dest,const char * __restrict__ _Source,size_t _Count) ;
  int __attribute__((__cdecl__)) strncmp(const char *_Str1,const char *_Str2,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _strnicmp(const char *_Str1,const char *_Str2,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _strnicmp_l(const char *_Str1,const char *_Str2,size_t _MaxCount,_locale_t _Locale);
  char *strncpy(char * __restrict__ _Dest,const char * __restrict__ _Source,size_t _Count) ;
  __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) _strnset(char *_Str,int _Val,size_t _MaxCount) ;
  __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) _strnset_l(char *str,int c,size_t count,_locale_t _Locale) ;
  char *__attribute__((__cdecl__)) strpbrk(const char *_Str,const char *_Control);
  char *__attribute__((__cdecl__)) strrchr(const char *_Str,int _Ch);
  __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) _strrev(char *_Str);
  size_t __attribute__((__cdecl__)) strspn(const char *_Str,const char *_Control);
  char *__attribute__((__cdecl__)) strstr(const char *_Str,const char *_SubStr);
  char *__attribute__((__cdecl__)) strtok(char * __restrict__ _Str,const char * __restrict__ _Delim) ;
       
  char *strtok_r(char * __restrict__ _Str, const char * __restrict__ _Delim, char ** __restrict__ __last);
       
  __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) _strupr(char *_String) ;
  __attribute__ ((__dllimport__)) char *_strupr_l(char *_String,_locale_t _Locale) ;
  size_t __attribute__((__cdecl__)) strxfrm(char * __restrict__ _Dst,const char * __restrict__ _Src,size_t _MaxCount);
  __attribute__ ((__dllimport__)) size_t __attribute__((__cdecl__)) _strxfrm_l(char * __restrict__ _Dst,const char * __restrict__ _Src,size_t _MaxCount,_locale_t _Locale);
  char *__attribute__((__cdecl__)) strdup(const char *_Src) ;
  int __attribute__((__cdecl__)) strcmpi(const char *_Str1,const char *_Str2) ;
  int __attribute__((__cdecl__)) stricmp(const char *_Str1,const char *_Str2) ;
  char *__attribute__((__cdecl__)) strlwr(char *_Str) ;
  int __attribute__((__cdecl__)) strnicmp(const char *_Str1,const char *_Str,size_t _MaxCount) ;
  int __attribute__((__cdecl__)) strncasecmp (const char *, const char *, size_t);
  int __attribute__((__cdecl__)) strcasecmp (const char *, const char *);
  char *__attribute__((__cdecl__)) strnset(char *_Str,int _Val,size_t _MaxCount) ;
  char *__attribute__((__cdecl__)) strrev(char *_Str) ;
  char *__attribute__((__cdecl__)) strset(char *_Str,int _Val) ;
  char *__attribute__((__cdecl__)) strupr(char *_Str) ;
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _wcsdup(const wchar_t *_Str);
  wchar_t *__attribute__((__cdecl__)) wcscat(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Source) ;
  wchar_t *__attribute__((__cdecl__)) wcschr(const wchar_t *_Str,wchar_t _Ch);
  int __attribute__((__cdecl__)) wcscmp(const wchar_t *_Str1,const wchar_t *_Str2);
  wchar_t *__attribute__((__cdecl__)) wcscpy(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Source) ;
  size_t __attribute__((__cdecl__)) wcscspn(const wchar_t *_Str,const wchar_t *_Control);
  size_t __attribute__((__cdecl__)) wcslen(const wchar_t *_Str);
  size_t __attribute__((__cdecl__)) wcsnlen(const wchar_t *_Src,size_t _MaxCount);
  wchar_t *wcsncat(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Source,size_t _Count) ;
  int __attribute__((__cdecl__)) wcsncmp(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount);
  wchar_t *wcsncpy(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Source,size_t _Count) ;
  wchar_t *__attribute__((__cdecl__)) _wcsncpy_l(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Source,size_t _Count,_locale_t _Locale) ;
  wchar_t *__attribute__((__cdecl__)) wcspbrk(const wchar_t *_Str,const wchar_t *_Control);
  wchar_t *__attribute__((__cdecl__)) wcsrchr(const wchar_t *_Str,wchar_t _Ch);
  size_t __attribute__((__cdecl__)) wcsspn(const wchar_t *_Str,const wchar_t *_Control);
  wchar_t *__attribute__((__cdecl__)) wcsstr(const wchar_t *_Str,const wchar_t *_SubStr);
  wchar_t *__attribute__((__cdecl__)) wcstok(wchar_t * __restrict__ _Str,const wchar_t * __restrict__ _Delim) ;
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _wcserror(int _ErrNum) ;
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) __wcserror(const wchar_t *_Str) ;
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wcsicmp(const wchar_t *_Str1,const wchar_t *_Str2);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wcsicmp_l(const wchar_t *_Str1,const wchar_t *_Str2,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wcsnicmp(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wcsnicmp_l(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount,_locale_t _Locale);
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _wcsnset(wchar_t *_Str,wchar_t _Val,size_t _MaxCount) ;
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _wcsrev(wchar_t *_Str);
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _wcsset(wchar_t *_Str,wchar_t _Val) ;
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _wcslwr(wchar_t *_String) ;
  __attribute__ ((__dllimport__)) wchar_t *_wcslwr_l(wchar_t *_String,_locale_t _Locale) ;
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _wcsupr(wchar_t *_String) ;
  __attribute__ ((__dllimport__)) wchar_t *_wcsupr_l(wchar_t *_String,_locale_t _Locale) ;
  size_t __attribute__((__cdecl__)) wcsxfrm(wchar_t * __restrict__ _Dst,const wchar_t * __restrict__ _Src,size_t _MaxCount);
  __attribute__ ((__dllimport__)) size_t __attribute__((__cdecl__)) _wcsxfrm_l(wchar_t * __restrict__ _Dst,const wchar_t * __restrict__ _Src,size_t _MaxCount,_locale_t _Locale);
  int __attribute__((__cdecl__)) wcscoll(const wchar_t *_Str1,const wchar_t *_Str2);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wcscoll_l(const wchar_t *_Str1,const wchar_t *_Str2,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wcsicoll(const wchar_t *_Str1,const wchar_t *_Str2);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wcsicoll_l(const wchar_t *_Str1,const wchar_t *_Str2,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wcsncoll(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wcsncoll_l(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wcsnicoll(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wcsnicoll_l(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount,_locale_t _Locale);
  wchar_t *__attribute__((__cdecl__)) wcsdup(const wchar_t *_Str) ;
  int __attribute__((__cdecl__)) wcsicmp(const wchar_t *_Str1,const wchar_t *_Str2) ;
  int __attribute__((__cdecl__)) wcsnicmp(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount) ;
  wchar_t *__attribute__((__cdecl__)) wcsnset(wchar_t *_Str,wchar_t _Val,size_t _MaxCount) ;
  wchar_t *__attribute__((__cdecl__)) wcsrev(wchar_t *_Str) ;
  wchar_t *__attribute__((__cdecl__)) wcsset(wchar_t *_Str,wchar_t _Val) ;
  wchar_t *__attribute__((__cdecl__)) wcslwr(wchar_t *_Str) ;
  wchar_t *__attribute__((__cdecl__)) wcsupr(wchar_t *_Str) ;
  int __attribute__((__cdecl__)) wcsicoll(const wchar_t *_Str1,const wchar_t *_Str2) ;
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _strset_s(char *_Dst,size_t _DstSize,int _Value);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _strerror_s(char *_Buf,size_t _SizeInBytes,const char *_ErrMsg);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) strerror_s(char *_Buf,size_t _SizeInBytes,int _ErrNum);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _strlwr_s(char *_Str,size_t _Size);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _strlwr_s_l(char *_Str,size_t _Size,_locale_t _Locale);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _strnset_s(char *_Str,size_t _Size,int _Val,size_t _MaxCount);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _strupr_s(char *_Str,size_t _Size);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _strupr_s_l(char *_Str,size_t _Size,_locale_t _Locale);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) strncat_s(char *_Dst,size_t _DstSizeInChars,const char *_Src,size_t _MaxCount);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _strncat_s_l(char *_Dst,size_t _DstSizeInChars,const char *_Src,size_t _MaxCount,_locale_t _Locale);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) strcpy_s(char *_Dst, rsize_t _SizeInBytes, const char *_Src);
 
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) strncpy_s(char *_Dst,size_t _DstSizeInChars,const char *_Src,size_t _MaxCount);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _strncpy_s_l(char *_Dst,size_t _DstSizeInChars,const char *_Src,size_t _MaxCount,_locale_t _Locale);
  __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) strtok_s(char *_Str,const char *_Delim,char **_Context);
  __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) _strtok_s_l(char *_Str,const char *_Delim,char **_Context,_locale_t _Locale);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) strcat_s(char *_Dst, rsize_t _SizeInBytes, const char * _Src);
 
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) memmove_s(void *_dest,size_t _numberOfElements,const void *_src,size_t _count);
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) wcstok_s(wchar_t *_Str,const wchar_t *_Delim,wchar_t **_Context);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wcserror_s(wchar_t *_Buf,size_t _SizeInWords,int _ErrNum);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) __wcserror_s(wchar_t *_Buffer,size_t _SizeInWords,const wchar_t *_ErrMsg);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wcsnset_s(wchar_t *_Dst,size_t _DstSizeInWords,wchar_t _Val,size_t _MaxCount);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wcsset_s(wchar_t *_Str,size_t _SizeInWords,wchar_t _Val);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wcslwr_s(wchar_t *_Str,size_t _SizeInWords);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wcslwr_s_l(wchar_t *_Str,size_t _SizeInWords,_locale_t _Locale);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wcsupr_s(wchar_t *_Str,size_t _Size);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wcsupr_s_l(wchar_t *_Str,size_t _Size,_locale_t _Locale);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) wcscpy_s(wchar_t *_Dst, rsize_t _SizeInWords, const wchar_t *_Src);
 
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) wcscat_s(wchar_t * _Dst, rsize_t _SizeInWords, const wchar_t *_Src);
 
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) wcsncat_s(wchar_t *_Dst,size_t _DstSizeInChars,const wchar_t *_Src,size_t _MaxCount);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wcsncat_s_l(wchar_t *_Dst,size_t _DstSizeInChars,const wchar_t *_Src,size_t _MaxCount,_locale_t _Locale);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) wcsncpy_s(wchar_t *_Dst,size_t _DstSizeInChars,const wchar_t *_Src,size_t _MaxCount);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wcsncpy_s_l(wchar_t *_Dst,size_t _DstSizeInChars,const wchar_t *_Src,size_t _MaxCount,_locale_t _Locale);
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _wcstok_s_l(wchar_t *_Str,const wchar_t *_Delim,wchar_t **_Context,_locale_t _Locale);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wcsset_s_l(wchar_t *_Str,size_t _SizeInChars,unsigned int _Val,_locale_t _Locale);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wcsnset_s_l(wchar_t *_Str,size_t _SizeInChars,unsigned int _Val, size_t _Count,_locale_t _Locale);
  extern __inline__ __attribute__((__always_inline__,__gnu_inline__)) size_t __attribute__((__cdecl__)) wcsnlen_s(const wchar_t * _src, size_t _count) {
    return _src ? wcsnlen(_src, _count) : 0;
  }
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
  extern unsigned short ** __imp__pctype;
  extern unsigned short ** __imp__wctype;
  extern unsigned short ** __imp__pwctype;
  /* CRT stuff */
  extern const unsigned char __newclmap[];
  extern const unsigned char __newcumap[];
  extern pthreadlocinfo __ptlocinfo;
  extern pthreadmbcinfo __ptmbcinfo;
  extern int __globallocalestatus;
  extern int __locale_changed;
  extern struct threadlocaleinfostruct __initiallocinfo;
  extern _locale_tstruct __initiallocalestructinfo;
  pthreadlocinfo __attribute__((__cdecl__)) __updatetlocinfo(void);
  pthreadmbcinfo __attribute__((__cdecl__)) __updatetmbcinfo(void);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _isctype(int _C,int _Type);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _isctype_l(int _C,int _Type,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) isalpha(int _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _isalpha_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) isupper(int _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _isupper_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) islower(int _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _islower_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) isdigit(int _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _isdigit_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) isxdigit(int _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _isxdigit_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) isspace(int _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _isspace_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) ispunct(int _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _ispunct_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) isalnum(int _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _isalnum_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) isprint(int _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _isprint_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) isgraph(int _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _isgraph_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) iscntrl(int _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _iscntrl_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) toupper(int _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) tolower(int _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _tolower(int _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _tolower_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _toupper(int _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _toupper_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) __isascii(int _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) __toascii(int _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) __iscsymf(int _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) __iscsym(int _C);
int __attribute__((__cdecl__)) isblank(int _C);
  int __attribute__((__cdecl__)) iswalpha(wint_t _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _iswalpha_l(wint_t _C,_locale_t _Locale);
  int __attribute__((__cdecl__)) iswupper(wint_t _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _iswupper_l(wint_t _C,_locale_t _Locale);
  int __attribute__((__cdecl__)) iswlower(wint_t _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _iswlower_l(wint_t _C,_locale_t _Locale);
  int __attribute__((__cdecl__)) iswdigit(wint_t _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _iswdigit_l(wint_t _C,_locale_t _Locale);
  int __attribute__((__cdecl__)) iswxdigit(wint_t _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _iswxdigit_l(wint_t _C,_locale_t _Locale);
  int __attribute__((__cdecl__)) iswspace(wint_t _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _iswspace_l(wint_t _C,_locale_t _Locale);
  int __attribute__((__cdecl__)) iswpunct(wint_t _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _iswpunct_l(wint_t _C,_locale_t _Locale);
  int __attribute__((__cdecl__)) iswalnum(wint_t _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _iswalnum_l(wint_t _C,_locale_t _Locale);
  int __attribute__((__cdecl__)) iswprint(wint_t _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _iswprint_l(wint_t _C,_locale_t _Locale);
  int __attribute__((__cdecl__)) iswgraph(wint_t _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _iswgraph_l(wint_t _C,_locale_t _Locale);
  int __attribute__((__cdecl__)) iswcntrl(wint_t _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _iswcntrl_l(wint_t _C,_locale_t _Locale);
  int __attribute__((__cdecl__)) iswascii(wint_t _C);
  int __attribute__((__cdecl__)) isleadbyte(int _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _isleadbyte_l(int _C,_locale_t _Locale);
  wint_t __attribute__((__cdecl__)) towupper(wint_t _C);
  __attribute__ ((__dllimport__)) wint_t __attribute__((__cdecl__)) _towupper_l(wint_t _C,_locale_t _Locale);
  wint_t __attribute__((__cdecl__)) towlower(wint_t _C);
  __attribute__ ((__dllimport__)) wint_t __attribute__((__cdecl__)) _towlower_l(wint_t _C,_locale_t _Locale);
  int __attribute__((__cdecl__)) iswctype(wint_t _C,wctype_t _Type);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _iswctype_l(wint_t _C,wctype_t _Type,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) __iswcsymf(wint_t _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _iswcsymf_l(wint_t _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) __iswcsym(wint_t _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _iswcsym_l(wint_t _C,_locale_t _Locale);
  int __attribute__((__cdecl__)) is_wctype(wint_t _C,wctype_t _Type);
int __attribute__((__cdecl__)) iswblank(wint_t _C);
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
/* Posix thread extensions.  */
/* Extension defined as by report VC 10+ defines error-numbers.  */
/* Defined as WSAETIMEDOUT.  */
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#pragma pack(push,_CRT_PACKING)
  typedef long clock_t;
  struct tm {
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
  };
  extern __attribute__ ((__dllimport__)) int _daylight;
  extern __attribute__ ((__dllimport__)) long _dstbias;
  extern __attribute__ ((__dllimport__)) long _timezone;
  extern __attribute__ ((__dllimport__)) char * _tzname[2];
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _get_daylight(int *_Daylight);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _get_dstbias(long *_Daylight_savings_bias);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _get_timezone(long *_Timezone);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _get_tzname(size_t *_ReturnValue,char *_Buffer,size_t _SizeInBytes,int _Index);
  char *__attribute__((__cdecl__)) asctime(const struct tm *_Tm) ;
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) asctime_s (char *_Buf,size_t _SizeInWords,const struct tm *_Tm);
  char *__attribute__((__cdecl__)) _ctime32(const __time32_t *_Time) ;
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _ctime32_s (char *_Buf,size_t _SizeInBytes,const __time32_t *_Time);
  clock_t __attribute__((__cdecl__)) clock(void);
  double __attribute__((__cdecl__)) _difftime32(__time32_t _Time1,__time32_t _Time2);
  struct tm *__attribute__((__cdecl__)) _gmtime32(const __time32_t *_Time) ;
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _gmtime32_s (struct tm *_Tm,const __time32_t *_Time);
  struct tm *__attribute__((__cdecl__)) _localtime32(const __time32_t *_Time) ;
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _localtime32_s (struct tm *_Tm,const __time32_t *_Time);
  size_t __attribute__((__cdecl__)) strftime(char * __restrict__ _Buf,size_t _SizeInBytes,const char * __restrict__ _Format,const struct tm * __restrict__ _Tm);
  __attribute__ ((__dllimport__)) size_t __attribute__((__cdecl__)) _strftime_l(char * __restrict__ _Buf,size_t _Max_size,const char * __restrict__ _Format,const struct tm * __restrict__ _Tm,_locale_t _Locale);
  __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) _strdate(char *_Buffer) ;
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _strdate_s (char *_Buf,size_t _SizeInBytes);
  __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) _strtime(char *_Buffer) ;
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _strtime_s (char *_Buf ,size_t _SizeInBytes);
  __time32_t __attribute__((__cdecl__)) _time32(__time32_t *_Time);
  __time32_t __attribute__((__cdecl__)) _mktime32(struct tm *_Tm);
  __time32_t __attribute__((__cdecl__)) _mkgmtime32(struct tm *_Tm);
  void __attribute__((__cdecl__)) tzset(void) ;
  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _tzset(void);
  double __attribute__((__cdecl__)) _difftime64(__time64_t _Time1,__time64_t _Time2);
  __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) _ctime64(const __time64_t *_Time) ;
  errno_t __attribute__((__cdecl__)) _ctime64_s (char *_Buf,size_t _SizeInBytes,const __time64_t *_Time);
  __attribute__ ((__dllimport__)) struct tm *__attribute__((__cdecl__)) _gmtime64(const __time64_t *_Time) ;
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _gmtime64_s (struct tm *_Tm,const __time64_t *_Time);
  __attribute__ ((__dllimport__)) struct tm *__attribute__((__cdecl__)) _localtime64(const __time64_t *_Time) ;
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _localtime64_s (struct tm *_Tm,const __time64_t *_Time);
  __attribute__ ((__dllimport__)) __time64_t __attribute__((__cdecl__)) _mktime64(struct tm *_Tm);
  __attribute__ ((__dllimport__)) __time64_t __attribute__((__cdecl__)) _mkgmtime64(struct tm *_Tm);
  __attribute__ ((__dllimport__)) __time64_t __attribute__((__cdecl__)) _time64(__time64_t *_Time);
  unsigned __attribute__((__cdecl__)) _getsystime(struct tm *_Tm);
  unsigned __attribute__((__cdecl__)) _setsystime(struct tm *_Tm,unsigned _MilliSec);
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _wasctime(const struct tm *_Tm);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wasctime_s (wchar_t *_Buf,size_t _SizeInWords,const struct tm *_Tm);
  wchar_t *__attribute__((__cdecl__)) _wctime32(const __time32_t *_Time) ;
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wctime32_s (wchar_t *_Buf,size_t _SizeInWords,const __time32_t *_Time);
  size_t __attribute__((__cdecl__)) wcsftime(wchar_t * __restrict__ _Buf,size_t _SizeInWords,const wchar_t * __restrict__ _Format,const struct tm * __restrict__ _Tm);
  __attribute__ ((__dllimport__)) size_t __attribute__((__cdecl__)) _wcsftime_l(wchar_t * __restrict__ _Buf,size_t _SizeInWords,const wchar_t * __restrict__ _Format,const struct tm * __restrict__ _Tm,_locale_t _Locale);
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _wstrdate(wchar_t *_Buffer) ;
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wstrdate_s (wchar_t *_Buf,size_t _SizeInWords);
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _wstrtime(wchar_t *_Buffer) ;
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wstrtime_s (wchar_t *_Buf,size_t _SizeInWords);
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _wctime64(const __time64_t *_Time) ;
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wctime64_s (wchar_t *_Buf,size_t _SizeInWords,const __time64_t *_Time);
  wchar_t *__attribute__((__cdecl__)) _wctime(const time_t *) ;
  errno_t __attribute__((__cdecl__)) _wctime_s(wchar_t *, size_t, const time_t *);
double __attribute__((__cdecl__)) difftime(time_t _Time1,time_t _Time2);
char *__attribute__((__cdecl__)) ctime(const time_t *_Time) ;
struct tm *__attribute__((__cdecl__)) gmtime(const time_t *_Time) ;
struct tm *__attribute__((__cdecl__)) localtime(const time_t *_Time) ;
time_t __attribute__((__cdecl__)) mktime(struct tm *_Tm);
time_t __attribute__((__cdecl__)) _mkgmtime(struct tm *_Tm);
time_t __attribute__((__cdecl__)) time(time_t *_Time);
extern __inline__ __attribute__((__always_inline__,__gnu_inline__)) errno_t __attribute__((__cdecl__)) localtime_s(struct tm *_Tm,const time_t *_Time) { return _localtime64_s(_Tm,_Time); }
extern __inline__ __attribute__((__always_inline__,__gnu_inline__)) errno_t __attribute__((__cdecl__)) gmtime_s(struct tm *_Tm, const time_t *_Time) { return _gmtime64_s(_Tm, _Time); }
extern __inline__ __attribute__((__always_inline__,__gnu_inline__)) errno_t __attribute__((__cdecl__)) ctime_s(char *_Buf,size_t _SizeInBytes,const time_t *_Time) { return _ctime64_s(_Buf,_SizeInBytes,_Time); }
  __attribute__ ((__dllimport__)) extern int daylight;
  __attribute__ ((__dllimport__)) extern long timezone;
  __attribute__ ((__dllimport__)) extern char *tzname[2];
  void __attribute__((__cdecl__)) tzset(void) ;
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
struct timeval
{
 long tv_sec;
 long tv_usec;
};
struct timezone {
  int tz_minuteswest;
  int tz_dsttime;
};
  extern int __attribute__((__cdecl__)) mingw_gettimeofday (struct timeval *p, struct timezone *z);
#pragma pack(pop)
/* Adding timespec definition.  */
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#pragma pack(push,_CRT_PACKING)
  struct __timeb32 {
    __time32_t time;
    unsigned short millitm;
    short timezone;
    short dstflag;
  };
  struct timeb {
    time_t time;
    unsigned short millitm;
    short timezone;
    short dstflag;
  };
  struct __timeb64 {
    __time64_t time;
    unsigned short millitm;
    short timezone;
    short dstflag;
  };
  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _ftime64(struct __timeb64 *_Time);
  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _ftime(struct __timeb64 *);
struct timespec {
  time_t tv_sec; /* Seconds */
  long tv_nsec; /* Nanoseconds */
};
struct itimerspec {
  struct timespec it_interval; /* Timer period */
  struct timespec it_value; /* Timer expiration */
};
  void __attribute__((__cdecl__)) ftime (struct timeb *);
#pragma pack(pop)
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _ftime_s(struct __timeb32 *_Time);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _ftime64_s(struct __timeb64 *_Time);
/* POSIX 2008 says clock_gettime and timespec are defined in time.h header,
   but other systems - like Linux, Solaris, etc - tend to declare such
   recent extensions only if the following guards are met.  */
/*
   Copyright (c) 2011 mingw-w64 project

   Permission is hereby granted, free of charge, to any person obtaining a
   copy of this software and associated documentation files (the "Software"),
   to deal in the Software without restriction, including without limitation
   the rights to use, copy, modify, merge, publish, distribute, sublicense,
   and/or sell copies of the Software, and to permit persons to whom the
   Software is furnished to do so, subject to the following conditions:

   The above copyright notice and this permission notice shall be included in
   all copies or substantial portions of the Software.

   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
   IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
   FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
   AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
   LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
   FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
   DEALINGS IN THE SOFTWARE.
*/
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
/* Posix timers are supported */
/* Monotonic clocks are available.  */
/* CPU-time clocks are available.  */
/* Clock support in threads are available.  */
typedef int clockid_t;
/* Make sure we provide default for WINPTHREAD_API, if not defined.  */
       
/* These should really be dllimport'ed if using winpthread dll */
int __attribute__((__cdecl__)) nanosleep(const struct timespec *request, struct timespec *remain);
int __attribute__((__cdecl__)) clock_nanosleep(clockid_t clock_id, int flags, const struct timespec *request, struct timespec *remain);
int __attribute__((__cdecl__)) clock_getres(clockid_t clock_id, struct timespec *res);
int __attribute__((__cdecl__)) clock_gettime(clockid_t clock_id, struct timespec *tp);
int __attribute__((__cdecl__)) clock_settime(clockid_t clock_id, const struct timespec *tp);
       
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
typedef unsigned short _ino_t;
typedef unsigned short ino_t;
typedef unsigned int _dev_t;
typedef unsigned int dev_t;
__extension__
typedef long long _pid_t;
typedef _pid_t pid_t;
typedef unsigned short _mode_t;
typedef _mode_t mode_t;
typedef unsigned int useconds_t;
__extension__
typedef unsigned long long _sigset_t;
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#pragma pack(push,_CRT_PACKING)
__attribute__ ((__dllimport__)) char* __attribute__((__cdecl__)) _getcwd (char*, int);
  typedef unsigned long _fsize_t;
  struct _finddata32_t {
    unsigned attrib;
    __time32_t time_create;
    __time32_t time_access;
    __time32_t time_write;
    _fsize_t size;
    char name[260];
  };
  struct _finddata32i64_t {
    unsigned attrib;
    __time32_t time_create;
    __time32_t time_access;
    __time32_t time_write;
    __extension__ long long size;
    char name[260];
  };
  struct _finddata64i32_t {
    unsigned attrib;
    __time64_t time_create;
    __time64_t time_access;
    __time64_t time_write;
    _fsize_t size;
    char name[260];
  };
  struct __finddata64_t {
    unsigned attrib;
    __time64_t time_create;
    __time64_t time_access;
    __time64_t time_write;
    __extension__ long long size;
    char name[260];
  };
  struct _wfinddata32_t {
    unsigned attrib;
    __time32_t time_create;
    __time32_t time_access;
    __time32_t time_write;
    _fsize_t size;
    wchar_t name[260];
  };
  struct _wfinddata32i64_t {
    unsigned attrib;
    __time32_t time_create;
    __time32_t time_access;
    __time32_t time_write;
    __extension__ long long size;
    wchar_t name[260];
  };
  struct _wfinddata64i32_t {
    unsigned attrib;
    __time64_t time_create;
    __time64_t time_access;
    __time64_t time_write;
    _fsize_t size;
    wchar_t name[260];
  };
  struct _wfinddata64_t {
    unsigned attrib;
    __time64_t time_create;
    __time64_t time_access;
    __time64_t time_write;
    __extension__ long long size;
    wchar_t name[260];
  };
  /* Some defines for _access nAccessMode (MS doesn't define them, but
  * it doesn't seem to hurt to add them). */
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _access(const char *_Filename,int _AccessMode);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _access_s(const char *_Filename,int _AccessMode);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _chmod(const char *_Filename,int _Mode);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _chsize(int _FileHandle,long _Size) ;
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _chsize_s (int _FileHandle,long long _Size);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _close(int _FileHandle);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _commit(int _FileHandle);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _creat(const char *_Filename,int _PermissionMode) ;
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _dup(int _FileHandle);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _dup2(int _FileHandleSrc,int _FileHandleDst);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _eof(int _FileHandle);
  __attribute__ ((__dllimport__)) long __attribute__((__cdecl__)) _filelength(int _FileHandle);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _findfirst32(const char *_Filename,struct _finddata32_t *_FindData);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _findnext32(intptr_t _FindHandle,struct _finddata32_t *_FindData);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _findclose(intptr_t _FindHandle);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _isatty(int _FileHandle);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _locking(int _FileHandle,int _LockMode,long _NumOfBytes);
  __attribute__ ((__dllimport__)) long __attribute__((__cdecl__)) _lseek(int _FileHandle,long _Offset,int _Origin);
  _off64_t lseek64(int fd,_off64_t offset, int whence);
  __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) _mktemp(char *_TemplateName) ;
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _mktemp_s (char *_TemplateName,size_t _Size);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _pipe(int *_PtHandles,unsigned int _PipeSize,int _TextMode);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _read(int _FileHandle,void *_DstBuf,unsigned int _MaxCharCount);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _setmode(int _FileHandle,int _Mode);
  __attribute__ ((__dllimport__)) long __attribute__((__cdecl__)) _tell(int _FileHandle);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _umask(int _Mode) ;
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _umask_s (int _NewMode,int *_OldMode);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _write(int _FileHandle,const void *_Buf,unsigned int _MaxCharCount);
  __extension__ __attribute__ ((__dllimport__)) long long __attribute__((__cdecl__)) _filelengthi64(int _FileHandle);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _findfirst32i64(const char *_Filename,struct _finddata32i64_t *_FindData);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _findfirst64(const char *_Filename,struct __finddata64_t *_FindData);
  intptr_t __attribute__((__cdecl__)) _findfirst64i32(const char *_Filename,struct _finddata64i32_t *_FindData);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _findnext32i64(intptr_t _FindHandle,struct _finddata32i64_t *_FindData);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _findnext64(intptr_t _FindHandle,struct __finddata64_t *_FindData);
  int __attribute__((__cdecl__)) _findnext64i32(intptr_t _FindHandle,struct _finddata64i32_t *_FindData);
  __extension__ long long __attribute__((__cdecl__)) _lseeki64(int _FileHandle,long long _Offset,int _Origin);
  __extension__ long long __attribute__((__cdecl__)) _telli64(int _FileHandle);
  int __attribute__((__cdecl__)) chdir (const char *) ;
  char *__attribute__((__cdecl__)) getcwd (char *, int) ;
  int __attribute__((__cdecl__)) mkdir (const char *) ;
  char *__attribute__((__cdecl__)) mktemp(char *) ;
  int __attribute__((__cdecl__)) rmdir (const char*) ;
  int __attribute__((__cdecl__)) chmod (const char *, int) ;
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _sopen_s(int *_FileHandle,const char *_Filename,int _OpenFlag,int _ShareFlag,int _PermissionMode);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _open(const char *_Filename,int _OpenFlag,...) ;
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _sopen(const char *_Filename,int _OpenFlag,int _ShareFlag,...) ;
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _waccess(const wchar_t *_Filename,int _AccessMode);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _waccess_s (const wchar_t *_Filename,int _AccessMode);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wchmod(const wchar_t *_Filename,int _Mode);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wcreat(const wchar_t *_Filename,int _PermissionMode) ;
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wfindfirst32(const wchar_t *_Filename,struct _wfinddata32_t *_FindData);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wfindnext32(intptr_t _FindHandle,struct _wfinddata32_t *_FindData);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wunlink(const wchar_t *_Filename);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wrename(const wchar_t *_OldFilename,const wchar_t *_NewFilename);
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _wmktemp(wchar_t *_TemplateName) ;
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wmktemp_s (wchar_t *_TemplateName, size_t _SizeInWords);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wfindfirst32i64(const wchar_t *_Filename,struct _wfinddata32i64_t *_FindData);
  intptr_t __attribute__((__cdecl__)) _wfindfirst64i32(const wchar_t *_Filename,struct _wfinddata64i32_t *_FindData);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wfindfirst64(const wchar_t *_Filename,struct _wfinddata64_t *_FindData);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wfindnext32i64(intptr_t _FindHandle,struct _wfinddata32i64_t *_FindData);
  int __attribute__((__cdecl__)) _wfindnext64i32(intptr_t _FindHandle,struct _wfinddata64i32_t *_FindData);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wfindnext64(intptr_t _FindHandle,struct _wfinddata64_t *_FindData);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wsopen_s(int *_FileHandle,const wchar_t *_Filename,int _OpenFlag,int _ShareFlag,int _PermissionFlag);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wopen(const wchar_t *_Filename,int _OpenFlag,...) ;
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wsopen(const wchar_t *_Filename,int _OpenFlag,int _ShareFlag,...) ;
  int __attribute__((__cdecl__)) __lock_fhandle(int _Filehandle);
  void __attribute__((__cdecl__)) _unlock_fhandle(int _Filehandle);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _get_osfhandle(int _FileHandle);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _open_osfhandle(intptr_t _OSFileHandle,int _Flags);
  int __attribute__((__cdecl__)) access(const char *_Filename,int _AccessMode) ;
  int __attribute__((__cdecl__)) chmod(const char *_Filename,int _AccessMode) ;
  int __attribute__((__cdecl__)) chsize(int _FileHandle,long _Size) ;
  int __attribute__((__cdecl__)) close(int _FileHandle) ;
  int __attribute__((__cdecl__)) creat(const char *_Filename,int _PermissionMode) ;
  int __attribute__((__cdecl__)) dup(int _FileHandle) ;
  int __attribute__((__cdecl__)) dup2(int _FileHandleSrc,int _FileHandleDst) ;
  int __attribute__((__cdecl__)) eof(int _FileHandle) ;
  long __attribute__((__cdecl__)) filelength(int _FileHandle) ;
  int __attribute__((__cdecl__)) isatty(int _FileHandle) ;
  int __attribute__((__cdecl__)) locking(int _FileHandle,int _LockMode,long _NumOfBytes) ;
  long __attribute__((__cdecl__)) lseek(int _FileHandle,long _Offset,int _Origin) ;
  char *__attribute__((__cdecl__)) mktemp(char *_TemplateName) ;
  int __attribute__((__cdecl__)) open(const char *_Filename,int _OpenFlag,...) ;
  int __attribute__((__cdecl__)) read(int _FileHandle,void *_DstBuf,unsigned int _MaxCharCount) ;
  int __attribute__((__cdecl__)) setmode(int _FileHandle,int _Mode) ;
  int __attribute__((__cdecl__)) sopen(const char *_Filename,int _OpenFlag,int _ShareFlag,...) ;
  long __attribute__((__cdecl__)) tell(int _FileHandle) ;
  int __attribute__((__cdecl__)) umask(int _Mode) ;
  int __attribute__((__cdecl__)) write(int _Filehandle,const void *_Buf,unsigned int _MaxCharCount) ;
#pragma pack(pop)
#pragma pack(push,_CRT_PACKING)
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
  struct _stat32 {
    _dev_t st_dev;
   _ino_t st_ino;
    unsigned short st_mode;
    short st_nlink;
    short st_uid;
    short st_gid;
    _dev_t st_rdev;
    _off_t st_size;
    __time32_t st_atime;
    __time32_t st_mtime;
    __time32_t st_ctime;
  };
  struct stat {
    _dev_t st_dev;
    _ino_t st_ino;
    unsigned short st_mode;
    short st_nlink;
    short st_uid;
    short st_gid;
    _dev_t st_rdev;
    _off_t st_size;
    time_t st_atime;
    time_t st_mtime;
    time_t st_ctime;
  };
  struct _stat32i64 {
    _dev_t st_dev;
    _ino_t st_ino;
    unsigned short st_mode;
    short st_nlink;
    short st_uid;
    short st_gid;
    _dev_t st_rdev;
    __extension__ long long st_size;
    __time32_t st_atime;
    __time32_t st_mtime;
    __time32_t st_ctime;
  };
  struct _stat64i32 {
    _dev_t st_dev;
    _ino_t st_ino;
    unsigned short st_mode;
    short st_nlink;
    short st_uid;
    short st_gid;
    _dev_t st_rdev;
    _off_t st_size;
    __time64_t st_atime;
    __time64_t st_mtime;
    __time64_t st_ctime;
  };
  struct _stat64 {
    _dev_t st_dev;
    _ino_t st_ino;
    unsigned short st_mode;
    short st_nlink;
    short st_uid;
    short st_gid;
    _dev_t st_rdev;
    __extension__ long long st_size;
    __time64_t st_atime;
    __time64_t st_mtime;
    __time64_t st_ctime;
  };
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fstat32(int _FileDes,struct _stat32 *_Stat);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _stat32(const char *_Name,struct _stat32 *_Stat);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fstat64(int _FileDes,struct _stat64 *_Stat);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fstat32i64(int _FileDes,struct _stat32i64 *_Stat);
  int __attribute__((__cdecl__)) _fstat64i32(int _FileDes,struct _stat64i32 *_Stat);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _stat64(const char *_Name,struct _stat64 *_Stat);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _stat32i64(const char *_Name,struct _stat32i64 *_Stat);
  int __attribute__((__cdecl__)) _stat64i32(const char *_Name,struct _stat64i32 *_Stat);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wstat32(const wchar_t *_Name,struct _stat32 *_Stat);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wstat32i64(const wchar_t *_Name,struct _stat32i64 *_Stat);
  int __attribute__((__cdecl__)) _wstat64i32(const wchar_t *_Name,struct _stat64i32 *_Stat);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wstat64(const wchar_t *_Name,struct _stat64 *_Stat);
int __attribute__((__cdecl__)) stat(const char *_Filename,struct stat *_Stat);
int __attribute__((__cdecl__)) fstat(int _Desc,struct stat *_Stat);
int __attribute__((__cdecl__)) wstat(const wchar_t *_Filename,struct stat *_Stat);
#pragma pack(pop)
/* Copyright (C) 1992-2015 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free
Software Foundation; either version 3, or (at your option) any later
version.

GCC is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */
/* This administrivia gets added to the beginning of limits.h
   if the system has its own version of limits.h.  */
/* We use _GCC_LIMITS_H_ because we want this not to match
   any macros that the system's limits.h uses for its own purposes.  */
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
int Printf(const char *fmt, ...); /* prototype only */
/*	#define long	long long */
typedef struct S_F_MAP {
 char *fnm;
 int from;
 int upto;
} S_F_MAP;
extern short src_ln1[];
extern short src_ln0[];
extern S_F_MAP src_file1[];
extern S_F_MAP src_file0[];
typedef struct P1 { /* Consumer */
 unsigned _pid : 8; /* 0..255 */
 unsigned _t : 3; /* proctype */
 unsigned _p : 4; /* state    */
} P1;
typedef struct P0 { /* Producer */
 unsigned _pid : 8; /* 0..255 */
 unsigned _t : 3; /* proctype */
 unsigned _p : 4; /* state    */
} P0;
typedef struct P2 { /* np_ */
 unsigned _pid : 8; /* 0..255 */
 unsigned _t : 3; /* proctype */
 unsigned _p : 4; /* state    */
} P2;
typedef struct Trans {
 short atom; /* if &2 = atomic trans; if &8 local */
 short tpe[2]; /* class of operation (for reduction) */
 short qu[6]; /* for conditional selections: qid's  */
 unsigned char ty[6]; /* ditto: type's */
 char *tp; /* src txt of statement */
 int st; /* the nextstate */
 int t_id; /* transition id, unique within proc */
 int forw; /* index forward transition */
 int back; /* index return  transition */
 struct Trans *nxt;
} Trans;
extern unsigned char *Pptr(int);
extern unsigned char *Qptr(int);
typedef struct _Stack { /* for queues and processes */
 short o_delta;
  short o_offset;
  short o_skip;
 short o_delqs;
 short o_boq;
 char *body;
 char *o_name;
 struct _Stack *nxt;
 struct _Stack *lst;
} _Stack;
typedef struct Svtack { /* for complete state vector */
 short o_delta; /* current size of frame */
 short m_delta; /* maximum size of frame */
 char *body;
 struct Svtack *nxt;
 struct Svtack *lst;
} Svtack;
typedef struct State {
 unsigned char _nr_pr;
 unsigned char _nr_qs;
 unsigned char _a_t; /* cycle detection */
 unsigned char _cnt[2]; /* counters, weak fairness */
 unsigned short _vsz;
 unsigned char turn;
 unsigned char sv[1024];
} State;
typedef struct Q0 { /* generic q */
 unsigned char Qlen; /* q_size */
 unsigned char _t;
} Q0;
/** function prototypes **/
char *emalloc(unsigned long);
char *Malloc(unsigned long);
int Boundcheck(int, int, int, int, Trans *);
int addqueue(int, int, int);
/* int atoi(char *); */
/* int abort(void); */
int close(int);
int delproc(int, int);
int endstate(void);
int find_claim(char *);
int h_store(char *, int);
int pan_rand(void);
int q_cond(short, Trans *);
int q_full(int);
int q_len(int);
int q_zero(int);
int qrecv(int, int, int, int);
int unsend(int);
/* void *sbrk(int); */
void spin_assert(int, char *, int, int, Trans *);
void c_chandump(int);
void c_globals(void);
void c_locals(int, int);
void checkcycles(void);
void crack(int, int, Trans *, short *);
void d_sfh(unsigned char *, int);
void d_hash(unsigned char *, int);
void m_hash(unsigned char *, int);
void s_hash(unsigned char *, int);
void delq(int);
void dot_crack(int, int, Trans *);
void do_reach(void);
void pan_exit(int);
void exit(int);
 void hinit(void);
void imed(Trans *, int, int, int);
void new_state(void);
void p_restor(int);
void putpeg(int, int);
void putrail(void);
void q_restor(void);
void retrans(int, int, int, short *, unsigned char *, unsigned char *);
void select_claim(int);
void settable(void);
void setq_claim(int, int, char *, int, char *);
void sv_restor(void);
void sv_save(void);
void tagtable(int, int, int, short *, unsigned char *);
void do_dfs(int, int, int, short *, unsigned char *, unsigned char *);
void unrecv(int, int, int, int, int);
void usage(FILE *);
void wrap_stats(void);
 int q_S_check(int, int);
 int q_R_check(int, int);
 unsigned char q_claim[255 +1];
 char *q_name[255 +1];
 char *p_name[255 +1];
typedef struct Trail Trail;
typedef struct H_el H_el;
struct H_el {
 H_el *nxt;
  unsigned int tagged;
  unsigned int D;
  unsigned long m_K1;
 unsigned long state;
};
struct Trail {
 int st; /* current state */
 int o_tt;
 unsigned char pr; /* process id */
 unsigned char tau; /* 8 bit-flags */
 unsigned char o_pm; /* 8 more bit-flags */
  unsigned char o_n, o_ot; /* to save locals */
 unsigned char o_m;
  short o_To;
  H_el *ostate; /* pointer to stored state */
 Trans *o_t;
  char *p_bup;
  char *q_bup;
 union {
  int oval;
  int *ovals;
 } bup;
}; /* end of struct Trail */
void qsend(int, int, int);
/* end of PAN_H */
char *TrailFile = "ex01.pml"; /* default */
char *trailfilename;
State A_Root; /* seed-state for cycles */
State now; /* the full state-vector */
void
globinit(void)
{
}
 extern short
 *proc_offset, *q_offset;
void
locinit1(int h)
{
}
void
locinit0(int h)
{
}
 int S_A = 0;
H_el **H_tab, **S_Tab;
/* #ifndef BFS_PAR */
 H_el *Lstate;
/* #endif */
Trail *trail, *trpt;
FILE *efd;
unsigned char *this;
long maxdepth=10000;
long omaxdepth=10000;
double quota; /* time limit */
unsigned char *SS, *LL;
unsigned char reversing = 0;
unsigned char HASH_NR = 0;
double memcnt = (double) 0;
double memlim = (double) (1<<30); /* 1 GB */
/* for emalloc: */
static char *have;
static long left = 0L;
static double fragment = (double) 0;
static unsigned long grow;
unsigned int HASH_CONST[] = {
 /* generated by hashgen 421 -- assumes 4 bytes per int */
 0x100d4e63, 0x0fc22f87, 0xa7155c77, 0x78f2c3b9,
 0xde32d207, 0xc27d305b, 0x1bb3fb2b, 0x2798c7a5,
 0x9c675ffd, 0x777d9081, 0x07aef2f1, 0xae08922f,
 0x5bd365b7, 0xed51c47b, 0x9b5aeea1, 0xbcc9d431,
 0x396d8fff, 0xa2fd1367, 0x08616521, 0x5e84991f,
 0x87495bc5, 0x2930039b, 0xceb6a593, 0xfe522d63,
 0x7ff60baf, 0xf89b1fbf, 0x74c01755, 0xe0c559bf,
 0x3669fc47, 0x8756d3bf, 0x14f78445, 0x24c41779,
 0x0af7b129, 0xde22368d, 0x3e1c01e3, 0xaf773e49,
 0x5b762459, 0x86d12911, 0x0953a3af, 0xb66dc23d,
 0x96b3bd4f, 0x19b1dd51, 0xd886fbc3, 0xa7f3a025,
 0xccb48e63, 0x87d8f027, 0x2bea270d, 0xdb0e9379,
 0x78c09f21, 0x0cbbfe07, 0xea4bc7c3, 0x5bfbc3c9,
 0x3c6e53fd, 0xab320cdd, 0x31041409, 0x416e7485,
 0xe41d75fd, 0xc3c5060f, 0x201a9dc1, 0x93dee72b,
 0x6461305f, 0xc571dec5, 0xa1fd21c5, 0xfb421ce1,
 0x7f024b05, 0xfa518819, 0x6c9777fb, 0x0d4d9351,
 0x08b33861, 0xccb9d0f3, 0x34112791, 0xe962d7c9,
 0x8d742211, 0xcd9c47a1, 0x64437b69, 0x5fe40feb,
 0x806113cb, 0x10e1d593, 0x821851b3, 0x057a1ff3,
 0x8ededc0b, 0x90dd5b31, 0x635ff359, 0x68dbcd35,
 0x1050ff4f, 0xdbb07257, 0x486336db, 0x83af1e75,
 0x432f1799, 0xc1d0e7e7, 0x21f4eb5b, 0x881ec2c1,
 0x23f3b539, 0x6cdfb80d, 0x71d474cf, 0x97d5d4a9,
 0xf721d2e5, 0xb5ff3711, 0x3f2e58cd, 0x4e06e3d9,
 0x7d711739, 0x927887df, 0x7d57ad71, 0x232eb767,
 0xe3f5cc51, 0x6576b443, 0xed17bf1f, 0x8828b637,
 0xc940f6ab, 0xc7b830ef, 0x11ed8a13, 0xaff20949,
 0xf28a8465, 0x0da10cf9, 0xb512497d, 0x44accae1,
 0x95e0929f, 0xe08c8901, 0xfd22d6c9, 0xb6a5c029,
 0xaadb428d, 0x6e8a453d, 0x3d5c0195, 0x8bf4ae39,
 0xbf83ab19, 0x3e9dac33, 0xc4df075d, 0x39472d71,
 0xb8647725, 0x1a6d4887, 0x78a03577, 0xafd76ef7,
 0xc1a1d6b3, 0x1afb33c5, 0x87896299, 0x5cc992ef,
 0x7f805d0d, 0x089a039b, 0xa353cc27, 0x57b296b3,
 0x52badec9, 0xc916e431, 0x09171957, 0x14996d51,
 0xe87e32c7, 0xb4fdbb5d, 0xdd216a03, 0x4ddd3fff,
 0x767d5c57, 0x79c97509, 0xab70543b, 0xc5feca4f,
 0x8eb37b89, 0x20a2cefd, 0xf4b00b91, 0xf166593d,
 0x7bf50f65, 0x753e6c8b, 0xfb5b81dd, 0xf2d45ef5,
 0x9741c04f, 0x300da48d, 0x01dc4121, 0xa112cd47,
 0x0223b24b, 0xa89fbce7, 0x681e1f7b, 0xe7c6aedf,
 0x1fd3d523, 0x561ba723, 0xf54042fb, 0x1a516751,
 0xcd085bd5, 0xe74246d5, 0x8b170b5d, 0x249985e9,
 0x5b4d9cf7, 0xe9912323, 0x5fc0f339, 0x41f8f051,
 0x8a296fb1, 0x62909f51, 0x2c05d695, 0x095efccb,
 0xa91574f1, 0x0f5cc6c3, 0x23a2ca2b, 0xc6053ec1,
 0xeb19e081, 0x3d1b3997, 0xb0c5f3cd, 0xe5d85b35,
 0x1cb1bdf1, 0x0c8f278f, 0x518249c3, 0x9f61b68d,
 0xade0919d, 0x779e29c3, 0xdbac9485, 0x2ce149a9,
 0x254c2409, 0x205b34fb, 0xc8ab1a89, 0x6b4a2585,
 0x2303d94b, 0x8fa186b9, 0x49826da5, 0xd23a37ad,
 0x680b18c9, 0xa46fbd7f, 0xe42c2cf9, 0xf7cfcb5f,
 0xb4842b8b, 0xe483780d, 0x66cf756b, 0x3eb73781,
 0x41ca17a5, 0x59f91b0f, 0x92fb67d9, 0x0a5c330f,
 0x46013fdb, 0x3b0634af, 0x9024f533, 0x96a001a7,
 0x15bcd793, 0x3a311fb1, 0x78913b8b, 0x9d4a5ddf,
 0x33189b31, 0xa99e8283, 0xf7cb29e9, 0x12d64a27,
 0xeda770ff, 0xa7320297, 0xbd3c14a5, 0x96d0156f,
 0x0115db95, 0x7f79f52b, 0xa6d52521, 0xa063d4bd,
 0x9cb5e039, 0x42cf8195, 0xcb716835, 0x1bc21273,
 0x5a67ad27, 0x4b3b0545, 0x162cda67, 0x0489166b,
 0x85fd06a9, 0x562b037d, 0x995bc1f3, 0xe144e78b,
 0x1e749f69, 0xa36df057, 0xcfee1667, 0x8c4116b7,
 0x94647fe3, 0xe6899df7, 0x6d218981, 0xf1069079,
 0xd1851a33, 0xf424fc83, 0x24467005, 0xad8caf59,
 0x1ae5da13, 0x497612f9, 0x10f6d1ef, 0xeaf4ff05,
 0x405f030b, 0x693b041d, 0x2065a645, 0x9fec71b3,
 0xc3bd1b0f, 0xf29217a3, 0x0f25e15d, 0xd48c2b97,
 0xce8acf2d, 0x0629489b, 0x1a5b0e01, 0x32d0c059,
 0x2d3664bf, 0xc45f3833, 0xd57f551b, 0xbdd991c5,
 0x9f97da9f, 0xa029c2a9, 0x5dd0cbdf, 0xe237ba41,
 0x62bb0b59, 0x93e7d037, 0x7e495619, 0x51b8282f,
 0x853e8ef3, 0x9b8abbeb, 0x055f66f9, 0x2736f7e5,
 0x8d7e6353, 0x143abb65, 0x4e2bb5b3, 0x872e1adf,
 0x8fcac853, 0xb7cf6e57, 0x12177f3d, 0x1d2da641,
 0x07856425, 0xc0ed53dd, 0x252271d9, 0x79874843,
 0x0aa8c9b5, 0x7e804f93, 0x2d080e09, 0x3929ddfd,
 0x36433dbd, 0xd6568c17, 0xe624e939, 0xb33189ef,
 0x29e68bff, 0x8aae2433, 0xe6335499, 0xc5facd9d,
 0xbd5afc65, 0x7a584fa7, 0xab191435, 0x64bbdeef,
 0x9f5cd8e1, 0xb3a1be05, 0xbd0c1753, 0xb00e2c7f,
 0x6a96e315, 0x96a31589, 0x660af5af, 0xc0438d43,
 0x17637373, 0x6460e8df, 0x7d458de9, 0xd76b923f,
 0x316f045f, 0x3ccbd035, 0x63f64d81, 0xd990d969,
 0x7c860a93, 0x99269ff7, 0x6fbcac8f, 0xd8cc562b,
 0x67141071, 0x09f85ea3, 0x1298f2dd, 0x41fa86e5,
 0xce1d7cf5, 0x6b232c9d, 0x8f093d4b, 0x3203ad4b,
 0x07d70d5f, 0x38c44c75, 0x0887c9ef, 0x1833acf5,
 0xa3607f85, 0x7d367573, 0x0ea4ffc3, 0xad2d09c1,
 0x7a1e664f, 0xef41dff5, 0x03563491, 0x67f30a1f,
 0x5ce5f9ef, 0xa2487a27, 0xe5077957, 0x9beb36fd,
 0x16e41251, 0x216799ef, 0x07181f8d, 0xc191c3cf,
 0xba21cab5, 0x73944eb7, 0xdf9eb69d, 0x5fef6cfd,
 0xd750a6f5, 0x04f3fa43, 0x7cb2d063, 0xd3bdb369,
 0x35f35981, 0x9f294633, 0x5e293517, 0x70e51d05,
 0xf8db618d, 0x66ee05db, 0x835eaa77, 0x166a02c3,
 0xb516f283, 0x94102293, 0x1ace50a5, 0x64072651,
 0x66df7b75, 0x02e1b261, 0x8e6a73b9, 0x19dddfe7,
 0xd551cf39, 0x391c17cb, 0xf4304de5, 0xcd67b8d1,
 0x25873e8d, 0x115b4c71, 0x36e062f3, 0xaec0c7c9,
 0xd929f79d, 0x935a661b, 0xda762b47, 0x170bd76b,
 0x1a955cb5, 0x341fb0ef, 0x7f366cef, 0xc98f60c7,
 0xa4181af3, 0xa94a8837, 0x5fa3bc43, 0x11c638c1,
 0x4e66fabb, 0x30ab85cf, 0x250704ef, 0x8bf3bc07,
 0x6d2cd5ab, 0x613ef9c3, 0xb8e62149, 0x0404fd91,
 0xa04fd9b1, 0xa5e389eb, 0x9543bd23, 0xad6ca1f9,
 0x210c49ab, 0xf8e9532b, 0x854fba89, 0xdc7fc6bb,
 0x48a051a7, 0x6b2f383b, 0x61a4b433, 0xd3af231b,
 0xc5023fc7, 0xa5aa85df, 0xa0cd1157, 0x4206f64d,
 0x3fea31c3, 0x62d510a1, 0x13988957, 0x6a11a033,
 0x46f2a3b7, 0x2784ef85, 0x229eb9eb, 0x9c0c3053,
 0x5b7ead39, 0x82ae9afb, 0xf99e9fb3, 0x914b6459,
 0xaf05edd7, 0xc82710dd, 0x8fc1ea1f, 0x7e0d7a8d,
 0x7c7592e9, 0x65321017, 0xea57553f, 0x4aeb49ff,
 0x5239ae4d, 0x4b4b4585, 0x94091c21, 0x7eaaf4cb,
 0x6b489d6f, 0xecb9c0c3, 0x29a7af63, 0xaf117a0d,
 0x969ea6cd, 0x7658a34d, 0x5fc0bba9, 0x26e99b7f,
 0x7a6f260f, 0xe37c34f1, 0x1a1569bb, 0xc3bc7371,
 0x8567543d, 0xad0c46a9, 0xa1264fd9, 0x16f10b29,
 0x5e00dd3b, 0xf85b6bcd, 0xa2d32d8b, 0x4a3c8d43,
 0x6b33b959, 0x4fd1e6c9, 0x7938b8a9, 0x1ec795c7,
 0xe2ef3409, 0x83c16b9d, 0x0d3fd9eb, 0xeb461ad7,
 0xb09c831d, 0xaf052001, 0x7911164d, 0x1a9dc191,
 0xb52a0815, 0x0f732157, 0xc68c4831, 0x12cf3cbb };
long mreached=0;
int done=0, errors=0, Nrun=1;
int c_init_done=0;
char *c_stack_start = (char *) 0;
double nstates=0, nlinks=0, truncs=0, truncs2=0;
double nlost=0, nShadow=0, hcmp=0, ngrabs=0;
/* int	c_init_run; */
 int t_reverse = 0;
unsigned long nr_states=0; /* nodes in DFA */
long Fa=0, Fh=0, Zh=0, Zn=0;
long PUT=0, PROBE=0, ZAPS=0;
long Ccheck=0, Cholds=0;
int a_cycles=0, upto=1, strict=0, verbose = 0, signoff = 0;
int gui = 0, coltrace = 0, readtrail = 0;
int whichtrail = 0, whichclaim = -1, onlyproc = -1, silent = 0;
char *claimname;
int state_tables=0, fairness=0, no_rck=0, Nr_Trails=0, dodot=0;
char simvals[256];
int TstOnly=0;
unsigned long mask, nmask;
int ssize=24; /* 16M slots */
int hmax=0, svmax=0, smax=0;
int Maxbody=0, XX;
unsigned char *noptr, *noqptr; /* used by Pptr(x) and Qptr(x) */
 State comp_now; /* compressed state vector */
 State comp_msk;
 unsigned char *Mask = (unsigned char *) &comp_msk;
_Stack *stack; /* for queues, processes */
Svtack *svtack; /* for old state vectors */
static unsigned long j1_spin, j2_spin; /* 5.2.1: avoid nameclash with math.h */
static unsigned long j3_spin, j4_spin;
unsigned long K1, K2;
static long A_depth = 0;
long depth = 0;
long depthfound = -1; /* loop detection */
unsigned char warned = 0, iterative = 0, exclusive = 0, like_java = 0, every_error = 0;
unsigned char noasserts = 0, noends = 0, bounded = 0;
unsigned int s_rand = 12345; /* default seed */
void dfs_uerror(char *);
void dfs_Uerror(char *);
void (*uerror)(char *);
void (*Uerror)(char *);
void (*hasher)(unsigned char *, int);
void (*o_hash)(unsigned char *, int, int);
void d_hash(unsigned char *, int);
void m_hash(unsigned char *, int);
void d_sfh(unsigned char *, int);
void o_hash32(unsigned char *, int, int);
void o_hash64(unsigned char *, int, int);
void active_procs(void);
void cleanup(void);
void do_the_search(void);
void find_shorter(int);
void iniglobals(int);
void stopped(int);
void wrapup(void);
int *grab_ints(int);
void ungrab_ints(int *, int);
Trans ***trans; /* 1 ptr per state per proctype */
 short P_o[255], P_o_tmp[255 +1];
 short Q_o[255], Q_o_tmp[255 +1];
 short *proc_offset = (short *) P_o;
 short *q_offset = (short *) Q_o;
unsigned char P_s[255 +1], P_s_tmp[255 +1];
unsigned char Q_s[255 +1], Q_s_tmp[255 +1];
unsigned char *proc_skip = (unsigned char *) P_s;
unsigned char *q_skip = (unsigned char *) Q_s;
unsigned long vsize; /* vector size in bytes */
char *tprefix = "trail"; /* runtime option -tsuffix */
short boq = -1; /* blocked_on_queue status */
int _; /* predefined write-only variable */
short src_ln1 [] = {
   0, 14, 14, 14, 13, 16, 13, 16,
   0, };
S_F_MAP src_file1 [] = {
 { "-", 0, 0 },
 { "ex01.pml", 1, 7 },
 { "-", 8, 9 }
};
unsigned char reached1 [] = {
   0, 1, 0, 0, 0, 1, 1, 0,
   0, };
unsigned char *loopstate1;
short src_ln0 [] = {
   0, 7, 7, 7, 6, 9, 6, 9,
   0, };
S_F_MAP src_file0 [] = {
 { "-", 0, 0 },
 { "ex01.pml", 1, 7 },
 { "-", 8, 9 }
};
unsigned char reached0 [] = {
   0, 1, 0, 0, 0, 1, 1, 0,
   0, };
unsigned char *loopstate0;
unsigned char reached2[3]; /* np_ */
unsigned char *loopstate2; /* np_ */
struct {
 int tp; short *src;
} src_all[] = {
 { 1, &src_ln1[0] },
 { 0, &src_ln0[0] },
 { 0, (short *) 0 }
};
S_F_MAP *flref[] = {
 src_file1,
 src_file0
};
struct {
 char *c; char *t;
} code_lookup[] = {
 { (char *) 0, "" }
};
short Air[] = { (short) (sizeof(P0) - 2), (short) (sizeof(P1) - 2), (short) (sizeof(P2) - 2) };
char *procname[] = {
   "Producer",
   "Consumer",
   ":np_:",
 0
};
enum btypes { NONE=0, N_CLAIM=1, I_PROC=2, A_PROC=3, P_PROC=4, E_TRACE=5, N_TRACE=6 };
int Btypes[] = {
   3, /* Producer */
   3, /* Consumer */
   0 /* :np_: */
};
unsigned char spin_c_typ[1]; /* claim-types */
unsigned char *accpstate[3];
unsigned char *progstate[3];
unsigned char *loopstate[3];
unsigned char *reached[3];
unsigned char *stopstate[3];
unsigned char *visstate[3];
short *mapstate[3];
 int NrStates[3];
int
addproc(int calling_pid, int priority, int n)
{ int j, h = now._nr_pr;
 int k;
 unsigned char *o_this = this;
 if (TstOnly) return (h < 255);
 /* redefine Index only within this procedure */
 if (h >= 255)
  Uerror("too many processes");
 switch (n) {
 case 0: j = sizeof(P0); break;
 case 1: j = sizeof(P1); break;
 case 2: j = sizeof(P2); break;
 default: Uerror("bad proc - addproc");
 }
 if (vsize%8)
  proc_skip[h] = 8 -(vsize%8);
 else
  proc_skip[h] = 0;
  for (k = vsize + (int) proc_skip[h]; k > vsize; k--)
   Mask[k-1] = 1; /* align */
 vsize += (int) proc_skip[h];
 proc_offset[h] = vsize;
 vsize += j;
 now._nr_pr += 1;
 if (fairness && ((int) now._nr_pr + 1 >= (8*2)/2))
 { printf("pan: error: too many processes -- current");
  printf(" max is %d procs (-DNFAIR=%d)\n",
   (8*2)/2 - 2, 2);
  printf("\trecompile with -DNFAIR=%d\n",
   2 +1);
  pan_exit(1);
 }
 now._vsz = vsize;
 hmax = (((hmax)<(vsize)) ? (vsize) : (hmax));
  for (k = 1; k <= Air[n]; k++)
   Mask[vsize - k] = 1; /* pad */
  Mask[vsize-j] = 1; /* _pid */
 if (vsize >= 1024)
 { printf("pan: error, VECTORSZ too small, recompile pan.c");
  printf(" with -DVECTORSZ=N with N>%d\n", (int) vsize);
  Uerror("aborting");
 }
 memset((char *)(((unsigned char *)&now)+(int)proc_offset[h]), 0, j);
 this = (((unsigned char *)&now)+(int)proc_offset[h]);
 if (0 > 0 && h > 0)
 { ((P0 *)this)->_pid = h-0;
 } else
 { ((P0 *)this)->_pid = h;
 }
 switch (n) {
 case 2: /* np_ */
  ((P2 *)(((unsigned char *)&now)+(int)proc_offset[h]))->_t = 2;
  ((P2 *)(((unsigned char *)&now)+(int)proc_offset[h]))->_p = 0;
  reached2[0] = 1;
  accpstate[2][1] = 1;
  break;
 case 1: /* Consumer */
  ((P1 *)(((unsigned char *)&now)+(int)proc_offset[h]))->_t = 1;
  ((P1 *)(((unsigned char *)&now)+(int)proc_offset[h]))->_p = 4;
  reached1[4]=1;
  /* params: */
  /* locals: */
  locinit1(h);
  break;
 case 0: /* Producer */
  ((P0 *)(((unsigned char *)&now)+(int)proc_offset[h]))->_t = 0;
  ((P0 *)(((unsigned char *)&now)+(int)proc_offset[h]))->_p = 4;
  reached0[4]=1;
  /* params: */
  /* locals: */
  locinit0(h);
  break;
 }
 this = o_this;
 return h-0;
}
void
run(void)
{ /* int i; */
 memset((char *)&now, 0, sizeof(State));
 vsize = (unsigned long) (sizeof(State) - 1024);
 now._vsz = vsize;
/* optional provisioning statements, e.g. to */
/* set hidden variables, used as constants */
 settable();
 Maxbody = (((Maxbody)<(((int) sizeof(P0)))) ? (((int) sizeof(P0))) : (Maxbody));
 Maxbody = (((Maxbody)<(((int) sizeof(P1)))) ? (((int) sizeof(P1))) : (Maxbody));
 Maxbody = (((Maxbody)<(((int) sizeof(P2)))) ? (((int) sizeof(P2))) : (Maxbody));
 reached[0] = reached0;
 reached[1] = reached1;
 reached[2] = reached2;
 accpstate[0] = (unsigned char *) emalloc(8);
 accpstate[1] = (unsigned char *) emalloc(8);
 accpstate[2] = (unsigned char *) emalloc(3);
 progstate[0] = (unsigned char *) emalloc(8);
 progstate[1] = (unsigned char *) emalloc(8);
 progstate[2] = (unsigned char *) emalloc(3);
 loopstate0 = loopstate[0] = (unsigned char *) emalloc(8);
 loopstate1 = loopstate[1] = (unsigned char *) emalloc(8);
 loopstate2 = loopstate[2] = (unsigned char *) emalloc(3);
 stopstate[0] = (unsigned char *) emalloc(8);
 stopstate[1] = (unsigned char *) emalloc(8);
 stopstate[2] = (unsigned char *) emalloc(3);
 visstate[0] = (unsigned char *) emalloc(8);
 visstate[1] = (unsigned char *) emalloc(8);
 visstate[2] = (unsigned char *) emalloc(3);
 mapstate[0] = (short *) emalloc(8 * sizeof(short));
 mapstate[1] = (short *) emalloc(8 * sizeof(short));
 mapstate[2] = (short *) emalloc(3 * sizeof(short));
 stopstate[0][7] = 1;
 stopstate[1][7] = 1;
 stopstate[2][2] = 1;
 NrStates[0] = 8;
 NrStates[1] = 8;
 NrStates[2] = 3;
 Maxbody = (((Maxbody)<(sizeof(State)-1024)) ? (sizeof(State)-1024) : (Maxbody));
 if ((Maxbody % 8) != 0)
  Maxbody += 8 - (Maxbody % 8);
 retrans(0, 8, 4, src_ln0, reached0, loopstate0);
 retrans(1, 8, 4, src_ln1, reached1, loopstate1);
 if (state_tables)
 { if (dodot) exit(0);
   printf("\nTransition Type: ");
   printf("A=atomic; D=d_step; L=local; G=global\n");
   printf("Source-State Labels: ");
   printf("p=progress; e=end; a=accept;\n");
   printf("Note: statement merging was used. Only the first\n");
   printf("      stmnt executed in each merge sequence is shown\n");
   printf("      (use spin -a -o3 to disable statement merging)\n");
   pan_exit(0);
 }
 iniglobals(258); /* arg outside range of pids */
 ; /* disable rendez-vous */
 hinit();
 stack = (_Stack *) emalloc(sizeof(_Stack));
 svtack = (Svtack *) emalloc(sizeof(Svtack));
 /* a place to point for Pptr of non-running procs: */
 noqptr = noptr = (unsigned char *) emalloc(Maxbody * sizeof(char));
 active_procs(); /* started after never */
 globinit();
 do_the_search();
}
int
spin_join(int p, int unused)
{ /* fprintf(stderr, "join %d when %d\n ", p, now._nr_pr); */
 return (now._nr_pr <= p); /* process *p has stopped */
}
int
spin_mutex_free(int *m)
{ return (*m == 0);
}
int
spin_mutex_lock(int *m)
{ *m = 1;
 return 1;
}
void
spin_mutex_unlock(int *m)
{ *m = 0;
}
void
spin_mutex_init(int *m, void *val)
{
 if (!val)
 { *m = 0;
 } else
 { Uerror("pthread_mutex_init: unsupported non-default init");
 }
}
int
spin_cond_wait(int *cond, int *lck)
{ /* this version does not scale very far alas */
 if (((P0 *)this)->_pid + 1 >= 8*8)
 { Uerror("pid exceeds range supported by pthread_cond_wait");
 }
 if (((*cond)&1) == 0)
 { spin_mutex_unlock(lck);
  *cond |= (1<<(((P0 *)this)->_pid + 1));
  return 0;
 } else
 { /* if other processes are already waiting */
  /* while our wait flag is 0, then they should go first */
  if (((*cond)&(~(1 | (1<<(((P0 *)this)->_pid + 1))))) != 0)
  { spin_mutex_unlock(lck);
   return 0;
  }
  *cond &= ~1;
  *cond &= ~(1<<(((P0 *)this)->_pid + 1));
  return 1;
 }
}
void
spin_cond_signal(int *cond)
{
 if ( ((*cond)&(~1)) != 0 )
 { *cond |= 1;
 }
}
 int
 cpu_printf(const char *fmt, ...)
 { va_list args;
  __builtin_va_start(args,fmt);
  vprintf(fmt, args);
  __builtin_va_end(args);
  return 1;
 }
int
Printf(const char *fmt, ...)
{ /* Make sure the args to Printf
	 * are always evaluated (e.g., they
	 * could contain a run stmnt)
	 * but do not generate the output
	 * during verification runs
	 * unless explicitly wanted
	 * If this fails on your system
	 * compile SPIN itself -DPRINTF
	 * and this code is not generated
	 */
 if (readtrail)
 { va_list args;
  __builtin_va_start(args,fmt);
  vprintf(fmt, args);
  __builtin_va_end(args);
  return 1;
 }
 return 1;
}
extern void printm(int);
void
pan_exit(int val)
{ void stop_timer(int);
 if (signoff)
 { printf("--end of output--\n");
 }
 if (val == 2)
 { val = 0;
 }
 stop_timer(1);
 exit(val);
}
static char tbuf[2][2048];
char *
transmognify(char *s)
{ char *v, *w;
 int i, toggle = 0;
 if (!s || strlen(s) > 2047) return s;
 memset(tbuf[0], 0, 2048);
 memset(tbuf[1], 0, 2048);
 strcpy(tbuf[toggle], s);
 while ((v = strstr(tbuf[toggle], "{c_code")))
 { *v = '\0'; v++;
  strcpy(tbuf[1-toggle], tbuf[toggle]);
  for (w = v; *w != '}' && *w != '\0'; w++) /* skip */;
  if (*w != '}') return s;
  *w = '\0'; w++;
  for (i = 0; code_lookup[i].c; i++)
   if (strcmp(v, code_lookup[i].c) == 0
   && strlen(v) == strlen(code_lookup[i].c))
   { if (strlen(tbuf[1-toggle])
     + strlen(code_lookup[i].t)
     + strlen(w) > 2047)
     return s;
    strcat(tbuf[1-toggle], code_lookup[i].t);
    break;
   }
  strcat(tbuf[1-toggle], w);
  toggle = 1 - toggle;
 }
 tbuf[toggle][2047] = '\0';
 return tbuf[toggle];
}
void
add_src_txt(int ot, int tt)
{ Trans *t;
 char *q;
 for (t = trans[ot][tt]; t; t = t->nxt)
 { printf("\t\t");
  q = transmognify(t->tp);
  for ( ; q && *q; q++)
   if (*q == '\n')
    printf("\\n");
   else
    putchar(*q);
  printf("\n");
 }
}
char *
find_source(int tp, int s)
{
 if (s >= flref[tp]->from
 && s <= flref[tp]->upto)
 { return flref[tp]->fnm;
 }
 return "ex01.pml"; /* i.e., don't know */
}
void
wrap_trail(void)
{ static int wrap_in_progress = 0;
 int i; short II;
 P0 *z;
 if (wrap_in_progress++) return;
 printf("spin: trail ends after %ld steps\n", depth);
 if (onlyproc >= 0)
 { if (onlyproc >= now._nr_pr) { pan_exit(0); }
  II = onlyproc;
  z = (P0 *)(((unsigned char *)&now)+(int)proc_offset[II]);
  printf("%3ld:	proc %d (%s) ",
   depth, II, procname[z->_t]);
  for (i = 0; src_all[i].src; i++)
   if (src_all[i].tp == (int) z->_t)
   { printf(" %s:%d",
     find_source((int) z->_t, (int) z->_p),
     src_all[i].src[z->_p]);
    break;
   }
  printf(" (state %2d)", z->_p);
  if (!stopstate[z->_t][z->_p])
   printf(" (invalid end state)");
  printf("\n");
  add_src_txt(z->_t, z->_p);
  pan_exit(0);
 }
 printf("#processes %d:\n", now._nr_pr);
 if (depth < 0) depth = 0;
 for (II = 0; II < now._nr_pr; II++)
 { z = (P0 *)(((unsigned char *)&now)+(int)proc_offset[II]);
  printf("%3ld:	proc %d (%s) ",
   depth, II, procname[z->_t]);
  for (i = 0; src_all[i].src; i++)
   if (src_all[i].tp == (int) z->_t)
   { printf(" %s:%d",
     find_source((int) z->_t, (int) z->_p),
     src_all[i].src[z->_p]);
    break;
   }
  printf(" (state %2d)", z->_p);
  if (!stopstate[z->_t][z->_p])
   printf(" (invalid end state)");
  printf("\n");
  add_src_txt(z->_t, z->_p);
 }
 c_globals();
 for (II = 0; II < now._nr_pr; II++)
 { z = (P0 *)(((unsigned char *)&now)+(int)proc_offset[II]);
  c_locals(II, z->_t);
 }
 pan_exit(0);
}
FILE *
findtrail(void)
{ FILE *fd;
 char fnm[512], *q;
 char MyFile[512];
 char MySuffix[16];
 int try_core;
 int candidate_files;
 if (trailfilename != ((void *)0))
 { fd = fopen(trailfilename, "r");
  if (fd == ((void *)0))
  { printf("pan: cannot find %s\n", trailfilename);
   pan_exit(1);
  } /* else */
  goto success;
 }
talk:
 try_core = 1;
 candidate_files = 0;
 tprefix = "trail";
 strcpy(MyFile, TrailFile);
 do { /* see if there's more than one possible trailfile */
  if (whichtrail)
  { sprintf(fnm, "%s%d.%s",
    MyFile, whichtrail, tprefix);
   fd = fopen(fnm, "r");
   if (fd != ((void *)0))
   { candidate_files++;
    if (verbose==100)
     printf("trail%d: %s\n",
      candidate_files, fnm);
    fclose(fd);
   }
   if ((q = strchr(MyFile, '.')) != ((void *)0))
   { *q = '\0';
    sprintf(fnm, "%s%d.%s",
     MyFile, whichtrail, tprefix);
    *q = '.';
    fd = fopen(fnm, "r");
    if (fd != ((void *)0))
    { candidate_files++;
     if (verbose==100)
      printf("trail%d: %s\n",
       candidate_files, fnm);
     fclose(fd);
   } }
  } else
  { sprintf(fnm, "%s.%s", MyFile, tprefix);
   fd = fopen(fnm, "r");
   if (fd != ((void *)0))
   { candidate_files++;
    if (verbose==100)
     printf("trail%d: %s\n",
      candidate_files, fnm);
    fclose(fd);
   }
   if ((q = strchr(MyFile, '.')) != ((void *)0))
   { *q = '\0';
    sprintf(fnm, "%s.%s", MyFile, tprefix);
    *q = '.';
    fd = fopen(fnm, "r");
    if (fd != ((void *)0))
    { candidate_files++;
     if (verbose==100)
      printf("trail%d: %s\n",
       candidate_files, fnm);
     fclose(fd);
  } } }
  tprefix = MySuffix;
  sprintf(tprefix, "cpu%d_trail", try_core++);
 } while (try_core <= 1);
 if (candidate_files != 1)
 { if (verbose != 100)
  { printf("error: there are %d trail files:\n",
    candidate_files);
   verbose = 100;
   goto talk;
  } else
  { printf("pan: rm or mv all except one\n");
   exit(1);
 } }
 try_core = 1;
 strcpy(MyFile, TrailFile); /* restore */
 tprefix = "trail";
try_again:
 if (whichtrail)
 { sprintf(fnm, "%s%d.%s", MyFile, whichtrail, tprefix);
  fd = fopen(fnm, "r");
  if (fd == ((void *)0) && (q = strchr(MyFile, '.')))
  { *q = '\0';
   sprintf(fnm, "%s%d.%s",
    MyFile, whichtrail, tprefix);
   *q = '.';
   fd = fopen(fnm, "r");
  }
 } else
 { sprintf(fnm, "%s.%s", MyFile, tprefix);
  fd = fopen(fnm, "r");
  if (fd == ((void *)0) && (q = strchr(MyFile, '.')))
  { *q = '\0';
   sprintf(fnm, "%s.%s", MyFile, tprefix);
   *q = '.';
   fd = fopen(fnm, "r");
 } }
 if (fd == ((void *)0))
 { if (try_core < 1)
  { tprefix = MySuffix;
   sprintf(tprefix, "cpu%d_trail", try_core++);
   goto try_again;
  }
  printf("pan: cannot find trailfile %s\n", fnm);
  pan_exit(1);
 }
success:
 return fd;
}
unsigned char do_transit(Trans *, short);
void
getrail(void)
{ FILE *fd;
 char *q, *pnm;
 int i, t_id, lastnever = -1; short II;
 Trans *t;
 P0 *z;
 fd = findtrail(); /* exits if unsuccessful */
 while (fscanf(fd, "%ld:%d:%d\n", &depth, &i, &t_id) == 3)
 { if (depth == -1)
  { printf("<<<<<START OF CYCLE>>>>>\n");
  }
  if (depth < 0)
  { continue;
  }
  if (i > now._nr_pr)
  { printf("pan: Error, proc %d invalid pid ", i);
   printf("transition %d\n", t_id);
   break;
  }
  II = i;
  z = (P0 *)(((unsigned char *)&now)+(int)proc_offset[II]);
  for (t = trans[z->_t][z->_p]; t; t = t->nxt)
   if (t->t_id == (unsigned char) t_id)
    break;
  if (!t)
  { for (i = 0; i < NrStates[z->_t]; i++)
   { t = trans[z->_t][i];
    if (t && t->t_id == (unsigned char) t_id)
    { printf("\tRecovered at state %d\n", i);
     z->_p = i;
     goto recovered;
   } }
   printf("pan: Error, proc %d type %d state %d: ",
    II, z->_t, z->_p);
   printf("transition %d not found\n", t_id);
   printf("pan: list of possible transitions in this process:\n");
   if (z->_t >= 0 && z->_t <= 2)
   for (t = trans[z->_t][z->_p]; t; t = t->nxt)
    printf("	t_id %d -- case %d, [%s]\n",
     t->t_id, t->forw, t->tp);
   break; /* pan_exit(1); */
  }
recovered:
  q = transmognify(t->tp);
  if (gui) simvals[0] = '\0';
  pnm = procname[z->_t];
  this = (((unsigned char *)&now)+(int)proc_offset[II]);
  trpt->tau |= 1;
  if (!do_transit(t, II))
  { if (onlyproc >= 0 && II != onlyproc)
    goto moveon;
   if (!verbose) break;
   printf("pan: error, next transition UNEXECUTABLE on replay\n");
   printf("     most likely causes: missing c_track statements\n");
   printf("       or illegal side-effects in c_expr statements\n");
  }
  if (onlyproc >= 0 && II != onlyproc)
   goto moveon;
  if (verbose)
  { printf("%3ld: proc %2d (%s) ", depth, II, pnm);
   for (i = 0; src_all[i].src; i++)
    if (src_all[i].tp == (int) z->_t)
    { printf(" %s:%d ",
      find_source((int) z->_t, (int) z->_p),
      src_all[i].src[z->_p]);
     break;
    }
   printf("(state %d) trans {%d,%d} [%s]\n",
    z->_p, t_id, t->forw, q?q:"");
   c_globals();
   for (i = 0; i < now._nr_pr; i++)
   { c_locals(i, ((P0 *)(((unsigned char *)&now)+(int)proc_offset[i]))->_t);
   }
  } else if (Btypes[z->_t] == N_CLAIM)
  { if (lastnever != (int) z->_p)
   { for (i = 0; src_all[i].src; i++)
     if (src_all[i].tp == (int) z->_t)
     { printf("MSC: ~G %d\n",
       src_all[i].src[z->_p]);
      break;
     }
    if (!src_all[i].src)
     printf("MSC: ~R %d\n", z->_p);
   }
   lastnever = z->_p;
   goto sameas;
  } else if (Btypes[z->_t] != 0) /* not :np_: */
  {
sameas: if (no_rck) goto moveon;
   if (coltrace)
   { printf("%ld: ", depth);
    for (i = 0; i < II; i++)
     printf("\t\t");
    printf("%s(%d):", pnm, II);
    printf("[%s]\n", q?q:"");
   } else if (!silent)
   { if (strlen(simvals) > 0) {
    printf("%3ld:	proc %2d (%s)",
     depth, II, pnm);
    for (i = 0; src_all[i].src; i++)
     if (src_all[i].tp == (int) z->_t)
     { printf(" %s:%d ",
       find_source((int) z->_t, (int) z->_p),
       src_all[i].src[z->_p]);
      break;
     }
    printf("(state %d)	[values: %s]\n", z->_p, simvals);
    }
    printf("%3ld:	proc %2d (%s)",
     depth, II, pnm);
    for (i = 0; src_all[i].src; i++)
     if (src_all[i].tp == (int) z->_t)
     { printf(" %s:%d ",
       find_source((int) z->_t, (int) z->_p),
       src_all[i].src[z->_p]);
      break;
     }
    printf("(state %d)	[%s]\n", z->_p, q?q:"");
   /*	printf("\n");	*/
  } }
moveon: z->_p = t->st;
 }
 wrap_trail();
}
int
f_pid(int pt)
{ int i;
 P0 *z;
 for (i = 0; i < now._nr_pr; i++)
 { z = (P0 *)(((unsigned char *)&now)+(int)proc_offset[i]);
  if (z->_t == (unsigned) pt)
   return 0 +z->_pid;
 }
 return -1;
}
unsigned long TMODE = 0666; /* file permission bits for trail files */
int trcnt=1;
char snap[64], fnm[512];
int
make_trail(void)
{ int fd;
 char *q;
 char MyFile[512];
 int w_flags = 0x0100|0x0001|0x0200;
 if (exclusive == 1 && iterative == 0)
 { w_flags |= 0x0400;
 }
 q = strrchr(TrailFile, '/');
 if (q == ((void *)0)) q = TrailFile; else q++;
 strcpy(MyFile, q); /* TrailFile is not a writable string */
 if (iterative == 0 && Nr_Trails++ > 0)
 {
  sprintf(fnm, "%s%d.%s",
   MyFile, Nr_Trails-1, tprefix);
 } else
 {
  sprintf(fnm, "%s.%s", MyFile, tprefix);
 }
 if ((fd = open(fnm, w_flags, TMODE)) < 0)
 { if ((q = strchr(MyFile, '.')))
  { *q = '\0';
   if (iterative == 0 && Nr_Trails-1 > 0)
    sprintf(fnm, "%s%d.%s",
     MyFile, Nr_Trails-1, tprefix);
   else
    sprintf(fnm, "%s.%s", MyFile, tprefix);
   *q = '.';
   fd = open(fnm, w_flags, TMODE);
 } }
 if (fd < 0)
 { printf("pan: cannot create %s\n", fnm);
  perror("cause");
 } else
 {
  printf("pan: wrote %s\n", fnm);
 }
 return fd;
}
double freq = (double) (1000000);
clock_t start_time;
void
start_timer(void)
{
 start_time = clock();
}
double delta_time;
void
report_time(void)
{
 printf("\npan: elapsed time %.3g seconds\n", delta_time);
 if (delta_time > 0.01)
 { printf("pan: rate %9.8g states/second\n", nstates/delta_time);
  if (verbose)
  { printf("pan: avg transition delay %.5g usec\n",
    delta_time/(nstates+truncs));
 } }
}
void
stop_timer(int report)
{ clock_t stop_time;
 stop_time = clock();
 delta_time = ((double) (stop_time - start_time)) / ((double) 1000);
 if (readtrail || delta_time < 0.00) return;
 if (report)
 { report_time();
 }
}
void
do_the_search(void)
{ int i;
 depth = mreached = 0;
 trpt = &trail[0];
 for (i = 0; i < (int) now._nr_pr; i++)
 { P0 *ptr = (P0 *) (((unsigned char *)&now)+(int)proc_offset[i]);
  if (!(trpt->o_pm&2)
  && accpstate[ptr->_t][ptr->_p])
  { trpt->o_pm |= 2;
   break;
  }
 }
 Mask[0] = Mask[1] = 1; /* _nr_pr, _nr_qs */
 if (!a_cycles)
 { i = &(now._a_t) - (unsigned char *) &now;
  Mask[i] = 1; /* _a_t */
 }
  if (!fairness)
  { int j = 0;
   i = &(now._cnt[0]) - (unsigned char *) &now;
   while (j++ < 2)
    Mask[i++] = 1; /* _cnt[] */
  }
 if (fairness
 && (a_cycles && (trpt->o_pm&2)))
 { now._a_t = 2; /* set the A-bit */
  now._cnt[0] = now._nr_pr + 1;
 }
 c_stack_start = (char *) &i; /* meant to be read-only */
 if (readtrail) getrail(); /* no return */
 start_timer();
  new_state(); /* start 1st DFS */
}
unsigned char
do_transit(Trans *t, short II)
{ unsigned char _m = 0;
 int tt = (int) ((P0 *)this)->_p;
 switch (t->forw) {
 default: Uerror("bad forward move");
 case 0: /* if without executable clauses */
  return 0;
 case 1: /* generic 'goto' or 'skip' */
 
  _m = 3; goto P999;
 case 2: /* generic 'else' */
 
  if (trpt->o_pm&1) return 0;
  _m = 3; goto P999;
   /* PROC Consumer */
 case 3: // STATE 1 - ex01.pml:14 - [((turn==S))] (0:0:0 - 1)
 
  reached[1][1] = 1;
  if (!((now.turn==1)))
   return 0;
  _m = 3; goto P999; /* 0 */
 case 4: // STATE 2 - ex01.pml:14 - [printf('Consumer\\n')] (0:0:0 - 1)
 
  reached[1][2] = 1;
  Printf("Consumer\n");
  _m = 3; goto P999; /* 0 */
 case 5: // STATE 3 - ex01.pml:14 - [turn = F] (0:0:1 - 1)
 
  reached[1][3] = 1;
  (trpt+1)->bup.oval = now.turn;
  now.turn = 2;
  ;
  _m = 3; goto P999; /* 0 */
 case 6: // STATE 7 - ex01.pml:16 - [-end-] (0:0:0 - 1)
 
  reached[1][7] = 1;
  if (!delproc(1, II)) return 0;
  _m = 3; goto P999; /* 0 */
   /* PROC Producer */
 case 7: // STATE 1 - ex01.pml:7 - [((turn==F))] (0:0:0 - 1)
 
  reached[0][1] = 1;
  if (!((now.turn==2)))
   return 0;
  _m = 3; goto P999; /* 0 */
 case 8: // STATE 2 - ex01.pml:7 - [printf('Producer\\n')] (0:0:0 - 1)
 
  reached[0][2] = 1;
  Printf("Producer\n");
  _m = 3; goto P999; /* 0 */
 case 9: // STATE 3 - ex01.pml:7 - [turn = S] (0:0:1 - 1)
 
  reached[0][3] = 1;
  (trpt+1)->bup.oval = now.turn;
  now.turn = 1;
  ;
  _m = 3; goto P999; /* 0 */
 case 10: // STATE 7 - ex01.pml:9 - [-end-] (0:0:0 - 1)
 
  reached[0][7] = 1;
  if (!delproc(1, II)) return 0;
  _m = 3; goto P999; /* 0 */
 case 11: /* np_ */
  if (!((!(trpt->o_pm&4) && !(trpt->tau&128))))
   return 0;
  /* else fall through */
 case 12: /* true */
  _m = 3; goto P999;
 }
P999:
 return _m;
}
int
enabled(int iam, int pid)
{ Trans *t; unsigned char *othis = this;
 int res = 0; int tt; unsigned char ot;
 pid += 0;
 if (pid == iam)
  Uerror("used: enabled(pid=thisproc)");
 if (pid < 0 || pid >= (int) now._nr_pr)
  return 0;
 this = (((unsigned char *)&now)+(int)proc_offset[pid]);
 TstOnly = 1;
 tt = (int) ((P0 *)this)->_p;
 ot = (unsigned char) ((P0 *)this)->_t;
 for (t = trans[ot][tt]; t; t = t->nxt)
  if (do_transit(t, (short) pid))
  { res = 1;
   break;
  }
 TstOnly = 0;
 this = othis;
 return res;
}
void
snap_time(void)
{ clock_t stop_time;
 double delta_time;
 stop_time = clock();
 delta_time = ((double) (stop_time - start_time)) / ((double) 1000);
 if (delta_time > 0.01)
 { printf("t= %8.3g ", delta_time);
  printf("R= %7.0g", nstates/delta_time);
 }
 printf("\n");
 if (quota > 0.1 && delta_time > quota)
 { printf("Time limit of %6.3g minutes exceeded\n", quota/60.0);
  wrapup();
 }
}
void
snapshot(void)
{
 printf("Depth= %7ld States= %8.3g ",
  mreached, nstates);
 printf("Transitions= %8.3g ", nstates+truncs);
 printf("Memory= %9.3f\t", memcnt/1048576.);
 snap_time();
 fflush((&__iob_func()[1]));
}
unsigned char *
Pptr(int x)
{ if (x < 0 || x >= 255
 || !proc_offset[x])
  return noptr;
 else
  return (unsigned char *) (((unsigned char *)&now)+(int)proc_offset[x]);
}
unsigned char *
Qptr(int x)
{ if (x < 0 || x >= 255
 || !q_offset[x])
  return noqptr;
 else
  return (unsigned char *) (((unsigned char *)&now)+(int)q_offset[x]);
}
void
select_claim(int n)
{ if (n != 0) uerror("non-existing claim");
}
int qs_empty(void);
/*
 * new_state() is the main DFS search routine in the verifier
 * it has a lot of code ifdef-ed together to support
 * different search modes, which makes it quite unreadable.
 * if you are studying the code, use the C preprocessor
 * to generate a specific version from the pan.c source,
 * e.g. by saying:
 *	gcc -E -DNOREDUCE -DBITSTATE pan.c > ppan.c
 * and then study the resulting file, instead of this version
 */
void
new_state(void)
{ Trans *t;
 unsigned char _n, _m, ot;
 short II, JJ = 0, kk;
 int tt;
 short From = (now._nr_pr-1), To = (0);
Down:
 trpt->tau &= ~(16|32|64); /* make sure these are off */
 if (depth >= maxdepth)
 { if (!warned)
  { warned = 1;
    printf("error: max search depth too small\n");
  }
  if (bounded)
  { uerror("depth limit reached");
  }
  truncs++;
  (trpt-1)->tau |= 16; /* worstcase guess */
  goto Up;
 }
AllOver:
 /* if atomic or rv move, carry forward previous state */
 trpt->ostate = (trpt-1)->ostate;
 if (boq == -1) { /* if not mid-rv */
  if ((now._a_t&1) && depth > A_depth)
  { int delta = S_A + 2;
   if (!memcmp((char *)&A_Root + delta,
    (char *)&now + delta, vsize - delta))
   {
      if (fairness && now._cnt[1] != 1) /* was > 1 */
      {
    /* treat as new state */
      } else
      { depthfound = A_depth;
    uerror("acceptance cycle");
    goto Up;
   } }
  }
  if (!(trpt->tau&8)) /* if no atomic move */
  {
   II = h_store((char *)&now, vsize);
   /* @hash j1_spin II */
   JJ = (II == 2)?1:0;
   kk = (II == 1 || II == 2);
   if (II == 2 && ((trpt->o_pm&2) || ((trpt-1)->o_pm&2)))
   if (a_cycles && !fairness) /* 5.1.6 -- example by Hirofumi Watanabe */
   if (depth > A_depth) /* forum example by adl */
   {
    II = 3; /* Schwoon & Esparza 2005, Gastin&Moro 2004 */
    goto same_case;
   }
   if (II == 3 && a_cycles && (now._a_t&1))
   {
      if (fairness && now._cnt[1] != 1) /* was > 1 */
      {
    II = 0;
      } else
      {
    nShadow--;
same_case: if (Lstate) depthfound = Lstate->D;
    uerror("acceptance cycle");
    goto Up;
      }
   }
   if ((II && JJ) || (II == 3))
   { /* marker for liveness proviso */
    (trpt-1)->tau |= 16;
    truncs2++;
   }
   if (II)
   { truncs++;
    goto Up;
   }
   if (!kk)
   { static long sdone = (long) 0; long ndone;
    nstates++;
    ndone = (unsigned long) (nstates/(freq));
    if (ndone != sdone)
    { snapshot();
     sdone = ndone;
     if (nstates > ((double)((1L)<<(ssize+1))))
     { void resize_hashtable(void);
      resize_hashtable();
     }
    }
   }
   trpt->ostate = Lstate;
 } }
 if (depth > mreached)
  mreached = depth;
 trpt->tau &= ~(1|2); /* timeout and -request off */
 _n = 0;
 /* Look for a process with only safe transitions */
 /* (special rules apply in the 2nd dfs) */
 if (boq == -1 && From != To
 && (!(now._a_t&1)
     || (a_cycles &&
  !(((char *)&(trpt->ostate->state))[0] & 128))
    ))
 /* attempt Partial Order Reduction as preselect moves */
 { for (II = From; II >= To; II--) {
Resume: /* pick up here if preselect fails */
   this = (((unsigned char *)&now)+(int)proc_offset[II]);
   tt = (int) ((P0 *)this)->_p;
   ot = (unsigned char) ((P0 *)this)->_t;
   if (trans[ot][tt]->atom & 8)
   { t = trans[ot][tt];
    if (t->qu[0] != 0)
    { Ccheck++;
     if (!q_cond(II, t))
     { continue;
     }
     Cholds++;
    }
    From = To = II; /* preselect process */
    trpt->tau |= 32; /* preselect marker */
    goto Again;
   } else
   { continue;
 } } }
 trpt->tau &= ~32;
Again:
 trpt->o_pm &= ~(8|16|32|64); /* clear fairness-marks */
 if (fairness && boq == -1
 && !(trpt->tau&8))
 { /* A_bit = 1; Cnt = N in acc states with A_bit 0 */
  if (!(now._a_t&2))
  { if (a_cycles && (trpt->o_pm&2))
   { /* Accepting state */
    now._a_t |= 2;
    now._cnt[now._a_t&1] = now._nr_pr + 1;
    trpt->o_pm |= 8;
   }
  } else
  { /* A_bit = 0 when Cnt 0 */
   if (now._cnt[now._a_t&1] == 1)
   { now._a_t &= ~2;
    now._cnt[now._a_t&1] = 0;
    trpt->o_pm |= 16;
 } } }
 for (II = From; II >= To; II--) {
  this = (((unsigned char *)&now)+(int)proc_offset[II]);
  tt = (int) ((P0 *)this)->_p;
  ot = (unsigned char) ((P0 *)this)->_t;
  trpt->o_pm &= ~1; /* no move in this pid yet */
  /* Fairness: Cnt++ when Cnt == II */
  trpt->o_pm &= ~64; /* didn't apply rule 2 */
  if (fairness
  && boq == -1
  && !(trpt->o_pm&32)
  && (now._a_t&2)
  && now._cnt[now._a_t&1] == II+2)
  { now._cnt[now._a_t&1] -= 1;
   trpt->o_pm |= (32|64);
  }
  /* check all trans of proc II - escapes first */
  (trpt+1)->pr = (unsigned char) II;
  (trpt+1)->st = tt;
  for (t = trans[ot][tt]; t; t = t->nxt)
  {
   (trpt+1)->o_t = t;
   if (!(_m = do_transit(t, II)))
   { continue;
   }
   if (boq == -1)
    trpt->o_pm |= 1; /* we moved */
   depth++; trpt++;
   trpt->pr = (unsigned char) II;
   trpt->st = tt;
   trpt->o_pm &= ~(2|4);
   if (t->st > 0)
   { ((P0 *)this)->_p = t->st;
/*	moved down		reached[ot][t->st] = 1; */
   }
   if (a_cycles)
   {
   }
   trpt->o_t = t; trpt->o_n = _n;
   trpt->o_ot = ot; trpt->o_tt = tt;
   trpt->o_To = To; trpt->o_m = _m;
   trpt->tau = 0;
   if (boq != -1 || (t->atom&2))
   { trpt->tau |= 8;
   } else
    trpt->tau &= ~8;
   if (boq == -1 && (t->atom&2))
   { From = To = II; nlinks++;
   } else
   { From = (now._nr_pr-1); To = (0);
   }
   goto Down; /* pseudo-recursion */
Up:
   if ((now._a_t&1) && depth <= A_depth)
    return; /* to checkcycles() */
   if (trpt->o_pm&128) /* fairness alg */
   { now._cnt[now._a_t&1] = trpt->bup.oval;
    _n = 1; trpt->o_pm &= ~128;
    depth--; trpt--;
    goto Q999;
   }
   t = trpt->o_t; _n = trpt->o_n;
   ot = trpt->o_ot; II = trpt->pr;
   tt = trpt->o_tt; this = Pptr(II);
   To = trpt->o_To; _m = trpt->o_m;
 switch (t->back) {
 default: Uerror("bad return move");
 case 0: goto R999; /* nothing to undo */
   /* PROC Consumer */
;
  ;
  ;
  ;
 case 5: // STATE 3
  ;
  now.turn = trpt->bup.oval;
  ;
  goto R999;
 case 6: // STATE 7
  ;
  p_restor(II);
  ;
  ;
  goto R999;
   /* PROC Producer */
;
  ;
  ;
  ;
 case 9: // STATE 3
  ;
  now.turn = trpt->bup.oval;
  ;
  goto R999;
 case 10: // STATE 7
  ;
  p_restor(II);
  ;
  ;
  goto R999;
 }
R999: /* jumps here when done */
   /* pass the proviso tags */
   if ((trpt->tau&8) /* rv or atomic */
   && (trpt->tau&16))
    (trpt-1)->tau |= 16;
   depth--; trpt--;
   /* i.e., not set if rv fails */
   if (_m)
   { reached[ot][t->st] = 1;
    reached[ot][tt] = 1;
   }
   if (_m>_n||(_n>3&&_m!=0)) _n=_m;
   ((P0 *)this)->_p = tt;
  } /* all options */
  /* Fairness: undo Rule 2 */
  if ((trpt->o_pm&32)
  && (trpt->o_pm&64))
  { if (trpt->o_pm&1)
   {
    now._cnt[now._a_t&1] += 1;
    trpt->o_pm &= ~(32|64);
   } else
   { if (_n > 0)
    {
     trpt->o_pm &= ~64;
     II = (From+1);
  } } }
  { continue; };
 } /* ALL_P */
 /* Fairness: undo Rule 2 */
 if (trpt->o_pm&32) /* remains if proc blocked */
 {
  now._cnt[now._a_t&1] += 1;
  trpt->o_pm &= ~32;
 }
 if (fairness
 && _n == 0 /* nobody moved */
 && !(trpt->tau&8) /* not an atomic one */
 /* see below  */
 && !((trpt->tau&32) && (_n == 0 || (trpt->tau&16)))
 && now._cnt[now._a_t&1] > 0) /* needed more procs */
 { depth++; trpt++;
  trpt->o_pm |= 128 | ((trpt-1)->o_pm&(2|4));
  trpt->bup.oval = now._cnt[now._a_t&1];
  now._cnt[now._a_t&1] = 1;
  trpt->tau = 0;
  From = (now._nr_pr-1); To = (0);
  goto Down;
 }
Q999: /* returns here with _n>0 when done */;
 if (trpt->o_pm&8)
 { now._a_t &= ~2;
  now._cnt[now._a_t&1] = 0;
  trpt->o_pm &= ~8;
 }
 if (trpt->o_pm&16)
 { now._a_t |= 2;
  now._cnt[now._a_t&1] = 1;
  trpt->o_pm &= ~16;
 }
 /* at least one move that was preselected at this */
 /* level, blocked or truncated at the next level  */
 if ((trpt->tau&32) && (_n == 0 || (trpt->tau&16)))
 {
  if (a_cycles && (trpt->tau&16))
  { if (!(now._a_t&1))
   {
   ((char *)&(trpt->ostate->state))[0] |= 128;
    From = (now._nr_pr-1); To = (0);
    _n = 0; trpt->tau &= ~(16|32|64);
    goto Again; /* do full search */
   } /* else accept reduction */
  } else
  { From = (now._nr_pr-1); To = (0);
   _n = 0; trpt->tau &= ~(16|32|64);
   if ((II >= 0)) /* II already updated */
   { goto Resume;
   } else
   { goto Again;
 } } }
 if (_n == 0 || ((trpt->tau&4) && (trpt->tau&2)))
 {
  /* ok if no procs or we're at maxdepth */
  if ((now._nr_pr == 0 && (!strict || qs_empty()))
  || depth >= maxdepth-1) goto Done; /* undo change from 5.2.3 */
  if ((trpt->tau&8) && !(trpt->tau&4))
  { trpt->tau &= ~(1|8);
   /* 1=timeout, 8=atomic */
   From = (now._nr_pr-1); To = (0);
   goto AllOver;
  }
  if (!noends && !a_cycles && !endstate())
  { depth--; trpt--; /* new 4.2.3 */
   uerror("invalid end state");
   depth++; trpt++;
  }
  else if (a_cycles && (trpt->o_pm&2)) /* new 4.2.4 */
  { depth--; trpt--;
   uerror("accept stutter");
   depth++; trpt++;
  }
 }
Done:
 if (!(trpt->tau&8)) /* not in atomic seqs */
 {
  if (boq == -1)
  {
   { if (trpt->ostate) trpt->ostate->tagged = (S_A)? (trpt->ostate->tagged&~(((now._a_t&1)?2:1) << (now._a_t&2))) : 0; };
  }
  if (_n != 0
  && !(now._a_t&1))
  {
   if (fairness)
   {
    if ((now._a_t&2) /* A-bit */
    && (now._cnt[0] == 1))
     checkcycles();
   } else
   if (a_cycles && (trpt->o_pm&2))
    checkcycles();
  }
 }
 if (depth > 0)
 {
  goto Up;
 }
}
void
spin_assert(int a, char *s, int ii, int tt, Trans *t)
{
 if (!a && !noasserts)
 { char bad[1024];
  strcpy(bad, "assertion violated ");
  if (strlen(s) > 1000)
  { strncpy(&bad[19], (const char *) s, 1000);
   bad[1019] = '\0';
  } else
   strcpy(&bad[19], s);
  uerror(bad);
 }
}
int
Boundcheck(int x, int y, int a1, int a2, Trans *a3)
{
 spin_assert((x >= 0 && x < y), "- invalid array index",
  a1, a2, a3);
 return x;
}
int do_hashgen = 0;
void
wrap_stats(void)
{
 if (nShadow>0)
   printf("%9.8g states, stored (%g visited)\n",
   nstates - nShadow, nstates);
 else
   printf("%9.8g states, stored\n", nstates);
 printf("%9.8g states, matched\n", truncs);
 if (nShadow>0)
 printf("%9.8g transitions (= visited+matched)\n",
  nstates+truncs);
 else
 printf("%9.8g transitions (= stored+matched)\n",
  nstates+truncs);
 printf("%9.8g atomic steps\n", nlinks);
 if (nlost) printf("%g lost messages\n", (double) nlost);
 printf("hash conflicts: %9.8g (resolved)\n", hcmp);
}
void
wrapup(void)
{ double nr1, nr2, nr3 = 0.0, nr4, nr5 = 0.0;
 printf("\n(%s)\n", "Spin Version 6.4.5 -- 1 January 2016");
 if (!done) printf("Warning: Search not completed\n");
 printf("	+ Partial Order Reduction\n");
 if (t_reverse)
 printf("	+ Reverse Transition Ordering\n");
 printf("\nFull statespace search for:\n");
 printf("	never claim         	- (none specified)\n");
 printf("	assertion violations	");
 if (noasserts)
  printf("- (disabled by -A flag)\n");
 else
  printf("+\n");
 printf("	acceptance   cycles 	");
 if (a_cycles)
  printf("+ (fairness %sabled)\n",
   fairness?"en":"dis");
 else printf("- (not selected)\n");
 printf("	invalid end states	");
 if (noends)
  printf("- (disabled by -E flag)\n\n");
 else
  printf("+\n\n");
 printf("State-vector %d byte, depth reached %ld", hmax,
     mreached);
 printf(", errors: %d\n", errors);
 fflush((&__iob_func()[1]));
 wrap_stats();
 printf("\n");
 nr1 = (nstates-nShadow)*
       (double)(hmax+sizeof(H_el)-sizeof(unsigned));
 nr2 = (double) ((maxdepth+3)*sizeof(Trail));
 nr3 = (double) ((1L)<<ssize)*sizeof(H_el *);
 nr4 = (double) (svmax * (sizeof(Svtack) + hmax))
     + (double) (smax * (sizeof(_Stack) + Maxbody * sizeof(char)));
 if (1 /* verbose || memcnt < nr1+nr2+nr3+nr4+nr5 */)
 { double remainder = memcnt;
   double tmp_nr = memcnt-nr3-nr4-(nr2-fragment)-nr5;
  if (tmp_nr < 0.0) tmp_nr = 0.;
  printf("Stats on memory usage (in Megabytes):\n");
  printf("%9.3f	equivalent memory usage for states",
   nr1/1048576.); /* 1024*1024=1048576 */
  printf(" (stored*(State-vector + overhead))\n");
   printf("%9.3f	actual memory usage for states",
    tmp_nr/1048576.);
   remainder -= tmp_nr;
   if (tmp_nr > 0.)
   { if (tmp_nr < nr1)
    { printf(" (compression: %.2f%%)\n",
      (100.0*tmp_nr)/nr1);
    } else
    { printf("\n");
    }
   } else
   { printf(" (less than 1k)\n");
   }
   if (tmp_nr > 0. && tmp_nr < nr1)
   { printf("         	state-vector as stored = %.0f byte",
    (tmp_nr)/(nstates-nShadow) -
    (double) (sizeof(H_el) - sizeof(unsigned)));
    printf(" + %ld byte overhead\n",
    (long int) sizeof(H_el)-sizeof(unsigned));
   }
    printf("%9.3f	memory used for hash table (-w%d)\n",
     nr3/1048576., ssize);
    remainder -= nr3;
  printf("%9.3f	memory used for DFS stack (-m%ld)\n",
   nr2/1048576., maxdepth);
  remainder -= nr2;
  if (remainder - fragment > 1048576.)
  { printf("%9.3f	other (proc and chan stacks)\n",
   (remainder-fragment)/1048576.);
  }
  if (fragment > 1048576.)
  { printf("%9.3f	memory lost to fragmentation\n",
   fragment/1048576.);
  }
  printf("%9.3f	total actual memory usage\n\n",
   memcnt/1048576.);
 }
 else
 printf("%9.3f	memory usage (Mbyte)\n",
  memcnt/1048576.);
 printf("\n");
 if ((done || verbose) && !no_rck) do_reach();
 pan_exit(0);
}
void
stopped(int arg)
{
 printf("Interrupted\n");
 wrapup();
 pan_exit(0);
}
/*
 * super fast hash, based on Paul Hsieh's function
 * http://www.azillionmonkeys.com/qed/hash.html
 */
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
/* ISO C9x  7.18  Integer types <stdint.h>
 * Based on ISO/IEC SC22/WG14 9899 Committee draft (SC22 N2794)
 *
 *  THIS SOFTWARE IS NOT COPYRIGHTED
 *
 *  Contributor: Danny Smith <danny_r_smith_2001@yahoo.co.nz>
 *
 *  This source code is offered for use in the public domain. You may
 *  use, modify or distribute it freely.
 *
 *  This code is distributed in the hope that it will be useful but
 *  WITHOUT ANY WARRANTY. ALL WARRANTIES, EXPRESS OR IMPLIED ARE HEREBY
 *  DISCLAIMED. This includes but is not limited to warranties of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 *  Date: 2000-12-02
 */
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
  __attribute__ ((__dllimport__)) extern unsigned long __attribute__((__cdecl__)) __threadid(void);
  __attribute__ ((__dllimport__)) extern uintptr_t __attribute__((__cdecl__)) __threadhandle(void);
/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */
/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */
/* In 4.3bsd-net2, machine/ansi.h defines these symbols, which are
   defined if the corresponding type is *not* defined.
   FreeBSD-2.1 defines _MACHINE_ANSI_H_ instead of _ANSI_H_ */
/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */
/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */
/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE_TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */
/* Signed type of difference of two pointers.  */
/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
/* Unsigned type of `sizeof' something.  */
/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */
/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
/*  In 4.3bsd-net2, leave these undefined to indicate that size_t, etc.
    are already defined.  */
/*  BSD/OS 3.1 and FreeBSD [23].x require the MACHINE_ANSI_H check here.  */
/* A null pointer constant.  */
/* Copyright (C) 1989-2015 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */
/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */
/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */
/* snaroff@next.com says the NeXT needs this.  */
/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */
/* On 4.3bsd-net2, make sure ansi.h is included, so we have
   one less case to deal with in the following.  */
/* On FreeBSD 5, machine/ansi.h does not exist anymore... */
/* In 4.3bsd-net2, machine/ansi.h defines these symbols, which are
   defined if the corresponding type is *not* defined.
   FreeBSD-2.1 defines _MACHINE_ANSI_H_ instead of _ANSI_H_.
   NetBSD defines _I386_ANSI_H_ and _X86_64_ANSI_H_ instead of _ANSI_H_ */
/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */
/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */
/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE_TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */
/* Signed type of difference of two pointers.  */
/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
/* If this symbol has done its job, get rid of it.  */
/* Unsigned type of `sizeof' something.  */
/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */
/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
/*  In 4.3bsd-net2, leave these undefined to indicate that size_t, etc.
    are already defined.  */
/*  BSD/OS 3.1 and FreeBSD [23].x require the MACHINE_ANSI_H check here.  */
/*  NetBSD 5 requires the I386_ANSI_H and X86_64_ANSI_H checks here.  */
/* A null pointer constant.  */
/* Offset of member MEMBER in a struct of type TYPE. */
/* Type whose alignment is supported in every context and is at least
   as great as that of any standard type not using alignment
   specifiers.  */
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
} max_align_t;
/* 7.18.1.1  Exact-width integer types */
typedef signed char int8_t;
typedef unsigned char uint8_t;
typedef short int16_t;
typedef unsigned short uint16_t;
typedef int int32_t;
typedef unsigned uint32_t;
__extension__ typedef long long int64_t;
__extension__ typedef unsigned long long uint64_t;
/* 7.18.1.2  Minimum-width integer types */
typedef signed char int_least8_t;
typedef unsigned char uint_least8_t;
typedef short int_least16_t;
typedef unsigned short uint_least16_t;
typedef int int_least32_t;
typedef unsigned uint_least32_t;
__extension__ typedef long long int_least64_t;
__extension__ typedef unsigned long long uint_least64_t;
/*  7.18.1.3  Fastest minimum-width integer types
 *  Not actually guaranteed to be fastest for all purposes
 *  Here we use the exact-width types for 8 and 16-bit ints.
 */
typedef signed char int_fast8_t;
typedef unsigned char uint_fast8_t;
typedef short int_fast16_t;
typedef unsigned short uint_fast16_t;
typedef int int_fast32_t;
typedef unsigned int uint_fast32_t;
__extension__ typedef long long int_fast64_t;
__extension__ typedef unsigned long long uint_fast64_t;
/* 7.18.1.5  Greatest-width integer types */
__extension__ typedef long long intmax_t;
__extension__ typedef unsigned long long uintmax_t;
/* 7.18.2  Limits of specified-width integer types */
/* 7.18.2.1  Limits of exact-width integer types */
/* 7.18.2.2  Limits of minimum-width integer types */
/* 7.18.2.3  Limits of fastest minimum-width integer types */
/* 7.18.2.4  Limits of integer types capable of holding
    object pointers */
/* 7.18.2.5  Limits of greatest-width integer types */
/* 7.18.3  Limits of other integer types */
/*
 * wint_t is unsigned short for compatibility with MS runtime
 */
/* 7.18.4  Macros for integer constants */
/* 7.18.4.1  Macros for minimum-width integer constants

    Accoding to Douglas Gwyn <gwyn@arl.mil>:
	"This spec was changed in ISO/IEC 9899:1999 TC1; in ISO/IEC
	9899:1999 as initially published, the expansion was required
	to be an integer constant of precisely matching type, which
	is impossible to accomplish for the shorter types on most
	platforms, because C99 provides no standard way to designate
	an integer constant with width less than that of type int.
	TC1 changed this to require just an integer constant
	*expression* with *promoted* type."

	The trick used here is from Clive D W Feather.
*/
/*  The 'trick' doesn't work in C89 for long long because, without
    suffix, (val) will be evaluated as int, not intmax_t */
/* 7.18.4.2  Macros for greatest-width integer constants */
void
d_sfh(unsigned char *s, int len)
{ uint32_t h = len, tmp;
 int rem;
 rem = len & 3;
 len >>= 2;
 for ( ; len > 0; len--)
 { h += ((((uint32_t)(((const uint8_t *)(s))[1])) << 8) +(uint32_t)(((const uint8_t *)(s))[0]) );
         tmp = (((((uint32_t)(((const uint8_t *)(s+2))[1])) << 8) +(uint32_t)(((const uint8_t *)(s+2))[0]) ) << 11) ^ h;
         h = (h << 16) ^ tmp;
         s += 2*sizeof(uint16_t);
  h += h >> 11;
 }
 switch (rem) {
 case 3: h += ((((uint32_t)(((const uint8_t *)(s))[1])) << 8) +(uint32_t)(((const uint8_t *)(s))[0]) );
  h ^= h << 16;
  h ^= s[sizeof(uint16_t)] << 18;
  h += h >> 11;
  break;
 case 2: h += ((((uint32_t)(((const uint8_t *)(s))[1])) << 8) +(uint32_t)(((const uint8_t *)(s))[0]) );
  h ^= h << 11;
  h += h >> 17;
  break;
 case 1: h += *s;
  h ^= h << 10;
  h += h >> 1;
  break;
 }
 h ^= h << 3;
 h += h >> 5;
 h ^= h << 4;
 h += h >> 17;
 h ^= h << 25;
 h += h >> 6;
 K1 = h;
}
/* 64-bit Jenkins hash, 1997
 * http://burtleburtle.net/bob/c/lookup8.c
 */
void
d_hash(unsigned char *kb, int nbytes)
{ uint8_t *bp;
 uint64_t a = 0, b, c, n;
 const uint64_t *k = (uint64_t *) kb;
 n = nbytes/8; /* nr of words */
 /* extend to multiple of words, if needed */
 a = 8 - (nbytes % 8);
 if (a > 0 && a < 8)
 { n++;
  bp = kb + nbytes;
  switch (a) {
  case 7: *bp++ = 0; /* fall thru */
  case 6: *bp++ = 0; /* fall thru */
  case 5: *bp++ = 0; /* fall thru */
  case 4: *bp++ = 0; /* fall thru */
  case 3: *bp++ = 0; /* fall thru */
  case 2: *bp++ = 0; /* fall thru */
  case 1: *bp = 0;
  case 0: break;
 } }
 b = HASH_CONST[HASH_NR];
 c = 0x9e3779b97f4a7c13LL; /* arbitrary value */
 while (n >= 3)
 { a += k[0];
  b += k[1];
  c += k[2];
  { a -= b; a -= c; a ^= (c>>43); b -= c; b -= a; b ^= (a<<9); c -= a; c -= b; c ^= (b>>8); a -= b; a -= c; a ^= (c>>38); b -= c; b -= a; b ^= (a<<23); c -= a; c -= b; c ^= (b>>5); a -= b; a -= c; a ^= (c>>35); b -= c; b -= a; b ^= (a<<49); c -= a; c -= b; c ^= (b>>11); a -= b; a -= c; a ^= (c>>12); b -= c; b -= a; b ^= (a<<18); c -= a; c -= b; c ^= (b>>22); };
  n -= 3;
  k += 3;
 }
 c += (((uint64_t) nbytes)<<3);
 switch (n) {
 case 2: b += k[1];
 case 1: a += k[0];
 case 0: break;
 }
 { a -= b; a -= c; a ^= (c>>43); b -= c; b -= a; b ^= (a<<9); c -= a; c -= b; c ^= (b>>8); a -= b; a -= c; a ^= (c>>38); b -= c; b -= a; b ^= (a<<23); c -= a; c -= b; c ^= (b>>5); a -= b; a -= c; a ^= (c>>35); b -= c; b -= a; b ^= (a<<49); c -= a; c -= b; c ^= (b>>11); a -= b; a -= c; a ^= (c>>12); b -= c; b -= a; b ^= (a<<18); c -= a; c -= b; c ^= (b>>22); };
 j1_spin = c&nmask; j3_spin = a&7; /* 1st bit */
 j2_spin = b&nmask; j4_spin = (a>>3)&7; /* 2nd bit */
 K1 = c; K2 = b;
}
void
s_hash(unsigned char *cp, int om)
{
 hasher(cp, om); /* sets K1 */
 if (ssize < 8*8)
  j1_spin = K1&mask;
 else
  j1_spin = K1;
}
int *prerand;
void
inirand(void)
{ int i;
 srand(s_rand+HASH_NR);
 prerand = (int *) emalloc((omaxdepth+3)*sizeof(int));
 for (i = 0; i < omaxdepth+3; i++)
 { prerand[i] = rand();
 }
}
int
pan_rand(void)
{ if (!prerand) inirand();
 return prerand[depth];
}
void
set_masks(void)
{
 if (8 == 4 && ssize >= 32)
 { mask = 0xffffffff;
  nmask = mask;
 } else if (8 == 8)
 { mask = (((1L)<<ssize)-1); /* hash init */
  nmask = mask;
 } else if (8 != 4)
 { fprintf((&__iob_func()[2]), "pan: wordsize %ld not supported\n", (long int) 8);
  exit(1);
 } else /* WS == 4 and ssize < 32 */
 { mask = (((1L)<<ssize)-1); /* hash init */
  nmask = (mask>>3);
 }
}
static long reclaim_size;
static char *reclaim_mem;
static H_el **N_tab;
void
reverse_capture(H_el *p)
{ if (!p) return;
 reverse_capture(p->nxt);
 /* last element of list moves first */
 /* to preserve list-order */
 j2_spin = p->m_K1;
 if (ssize < 8*8) /* probably always true */
 { j2_spin &= mask;
 }
 p->nxt = N_tab[j2_spin];
 N_tab[j2_spin] = p;
}
void
resize_hashtable(void)
{
 if (8 == 4 && ssize >= 27 - 1)
 { return; /* cannot increase further */
 }
 ssize += 2; /* 4x size @htable ssize */
 printf("pan: resizing hashtable to -w%d.. ", ssize);
 N_tab = (H_el **) emalloc(((1L)<<ssize)*sizeof(H_el *));
 set_masks(); /* they changed */
 for (j1_spin = 0; j1_spin < ((1L) << (ssize - 2)); j1_spin++)
 { reverse_capture(H_tab[j1_spin]);
 }
 reclaim_mem = (char *) H_tab;
 reclaim_size = ((1L) << (ssize - 2));
 H_tab = N_tab;
 printf(" done\n");
}
unsigned int pp[33];
unsigned int
mul(unsigned int a, unsigned int b, unsigned int p)
{ int c = 0;
 while (a)
 { if (a&1)
  { a ^= 1;
   c ^= b;
  }
  a = (a>>1);
  if (b & 0x80000000)
  { b += b;
   b ^= p;
  } else
  { b += b;
 } }
 return c;
}
unsigned int
ppow(int n, unsigned int p)
{ unsigned int t = 1; int i;
 for (i = 0; i < 32; i++)
 { if (n & (1<<i))
  { t = mul(t, pp[i], p);
 } }
 return t;
}
void
hashgen(void) /* courtesy Jim Reeds, 1995 */
{ unsigned int x, y, p; int i, cnt;
 int ff[5] = { 3, 5, 17, 257, 65537 };
 int nn[5];
 srand(s_rand); /* was: srandom(s_rand) */
 nn[0] = ff[1]*ff[2]*ff[3]*ff[4];
 nn[1] = ff[0]*ff[2]*ff[3]*ff[4];
 nn[2] = ff[0]*ff[1]*ff[3]*ff[4];
 nn[3] = ff[0]*ff[1]*ff[2]*ff[4];
 nn[4] = ff[0]*ff[1]*ff[2]*ff[3];
 for (cnt = 0; cnt < 5000; cnt++)
 { x = 2;
  p = ((rand()<<13)^rand()) | 1; /* used random() before */
  pp[0] = x;
  for (i = 0; i < 32; i++)
  { pp[i+1] = mul(pp[i], pp[i], p);
  }
  if (pp[32] == x)
  { for (i = 0; i < 5; i++)
   { y = ppow(nn[i], p);
    if (y == 1)
    { break;
   } }
   if (y != 1)
   { HASH_CONST[0] = p;
    if (verbose)
    { printf("polynomial: 0x%.8x (%d tries)\n",
      p, cnt);
    }
    return;
 } } }
 fprintf(efd, "pan: could not find a polynomial in %d tries\n", cnt);
 fprintf(efd, "pan: try a different seed with -RSn\n");
 exit(1);
}
int
main(int argc, char *argv[])
{ void to_compile(void);
 efd = (&__iob_func()[2]); /* default */
 if (4 != sizeof(long)
 || 4 != sizeof(int))
 { printf("spin: error, the version of spin ");
  printf("that generated this pan.c assumed a different ");
  printf("wordsize (%d iso %d)\n", 4, (int) sizeof(long));
  exit(1);
 }
 while (argc > 1 && argv[1][0] == '-')
 { switch (argv[1][1]) {
  case 'a': a_cycles = 1; break;
  case 'A': noasserts = 1; break;
  case 'b': bounded = 1; break;
  case 'C': coltrace = 1; goto samething;
  case 'c': upto = atoi(&argv[1][2]); break;
  case 'D': dodot++; state_tables++; break;
  case 'd': state_tables++; break;
  case 'e': every_error = 1; upto = 0; Nr_Trails = 1; break;
  case 'E': noends = 1; break;
  case 'f': fairness = 1; break;
  case 'g': gui = 1; goto samething;
  case 'h':
     if (strncmp(&argv[1][1], "hash", strlen("hash")) == 0)
     { do_hashgen = 1;
    break;
     }
     if (!argv[1][2] || !isdigit((int) argv[1][2]))
     { usage(efd); /* exits */
     }
     HASH_NR = atoi(&argv[1][2])%(sizeof(HASH_CONST)/sizeof(unsigned int));
     break;
  case 'I': iterative = 2; every_error = 1; break;
  case 'i':
     if (strncmp(&argv[1][1], "i_reverse", strlen("i_reverse")) == 0)
     { reversing |= 1;
     } else
     { iterative = 1;
      every_error = 1;
     }
     break;
  case 'J': like_java = 1; break; /* Klaus Havelund */
  case 'l': fprintf(efd, "error: -l not available (compile with -DNP)");
     usage(efd); break;
  case 'M': case 'G':
     fprintf((&__iob_func()[2]), "-M and -G affect only -DBITSTATE\n");
     break;
  case 'm': maxdepth = atoi(&argv[1][2]); break;
  case 'N':
     fprintf((&__iob_func()[2]), "warning: only one claim defined, -N ignored\n");
     if (!isdigit((int)argv[1][2]) && argc > 2 && argv[2][0] != '-')
     { argc--; argv++;
     }
     break;
  case 'n': no_rck = 1; break;
  case 'P':
     if (!readtrail
     && isdigit((int) argv[1][2]))
     { int x = atoi(&argv[1][2]);
    if (x != 0 && x != 1)
    { fprintf(efd, "pan: bad option -P[01], ignored\n");
    }
    if (x == 0)
    { reversing &= ~1;
     break;
    }
    if (x == 1)
    { reversing |= 1;
     break;
    }
    if (verbose)
    fprintf(efd, "pan: reversed *active* process creation %s\n",
     reversing&1?"on":"off");
    break;
     } /* else */
     readtrail = 1; onlyproc = atoi(&argv[1][2]);
     if (argc > 2 && argv[2][0] != '-') /* check next arg */
     { trailfilename = argv[2];
    argc--; argv++; /* skip next arg */
     }
     break;
  case 'p':
     if (strncmp(&argv[1][1], "p_permute", strlen("p_permute")) == 0
     || strncmp(&argv[1][1], "p_rotate", strlen("p_rotate")) == 0
     || strncmp(&argv[1][1], "p_randrot", strlen("p_randrot")) == 0
     || strncmp(&argv[1][1], "p_reverse", strlen("p_reverse")) == 0)
     { fprintf(efd, "option %s required compilation with -DPERMUTED\n",
     argv[1]);
    exit(1);
     }
     fprintf(efd, "invalid option '%s' -- ignored\n", argv[1]);
     break;
  case 'Q': quota = (double) 60.0 * (double) atoi(&argv[1][2]);
     break;
  case 'q': strict = 1; break;
  case 'R':
   if (argv[1][2] == 'S') /* e.g., -RS76842 */
   { s_rand = atoi(&argv[1][3]);
    break;
   }
   usage(efd);
   break;
  case 'r':
     if (strncmp(&argv[1][1], "rhash", strlen("rhash")) == 0)
     { if (s_rand == 12345) /* default seed */
    {
     s_rand = (unsigned int) clock();
    }
    srand(s_rand++);
    fprintf(efd, "option -rhash requires compilation with -DPERMUTED\n");
    exit(1);
     }
samething: readtrail = 1;
     if (isdigit((int)argv[1][2]))
    whichtrail = atoi(&argv[1][2]);
     else if (argc > 2 && argv[2][0] != '-') /* check next arg */
     { trailfilename = argv[2];
    argc--; argv++; /* skip next arg */
     }
     break;
  case 'S': silent = 1; goto samething;
  case 'T':
     if (isdigit((int) argv[1][2]))
     { t_reverse = atoi(&argv[1][2]);
    if (verbose)
    printf("pan: reverse transition ordering %s\n",
     t_reverse?"on":"off");
    break;
     }
     TMODE = 0444;
     break;
  case 't':
     if (strncmp(&argv[1][1], "t_reverse", strlen("t_reverse")) == 0)
     { t_reverse = 1;
    break;
     }
     if (argv[1][2])
     { tprefix = &argv[1][2];
     }
     break;
  case 'u':
     break;
  case 'V': start_timer(); printf("Generated by %s\n", "Spin Version 6.4.5 -- 1 January 2016");
     to_compile(); pan_exit(2); break;
  case 'v': verbose++; break;
  case 'w': ssize = atoi(&argv[1][2]);
     break;
  case 'Y': signoff = 1; break;
  case 'X': efd = (&__iob_func()[1]); break;
  case 'x': exclusive = 1; break;
  case 'z': break; /* ignored for single-core */
  default : fprintf(efd, "saw option -%c\n",
    argv[1][1]); usage(efd); break;
  }
  argc--; argv++;
 }
 if (do_hashgen)
 { hashgen();
 }
 if (fairness && !a_cycles)
 { fprintf(efd, "error: -f requires the use of -a or -l\n");
  usage(efd);
 }
 if (a_cycles)
 { fprintf(efd, "warning: no accept labels are defined, ");
  fprintf(efd, "so option -a has no effect (ignored)\n");
  a_cycles = 0;
 }
 uerror = dfs_uerror;
 Uerror = dfs_Uerror;
 if (ssize <= 32) /* 6.2.0 */
 { hasher = d_sfh;
 } else
 { hasher = d_hash;
 }
 if (iterative && TMODE != 0666)
 { TMODE = 0666;
  fprintf(efd, "warning: -T ignored when -i or -I is used\n");
 }
 if (TMODE == 0666)
  TMODE = 0x0080 | 0x0100;
 else
  TMODE = 0x0100;
 omaxdepth = maxdepth;
 if (8 == 4 && ssize > 27)
 { ssize = 27;
  fprintf(efd, "warning: using -w%d as max usable value\n", ssize);
/*
 *	for emalloc, the lookup table size multiplies by 4 for the pointers
 *	the largest power of 2 that can be represented in a ulong is 1^31
 *	hence the largest number of lookup table slots is 31-4 = 27
 */
 }
 if (iterative && a_cycles)
 fprintf(efd, "warning: -i or -I work for safety properties only\n");
 if (maxdepth <= 0 || ssize <= 1) usage(efd);
 if (iterative != 0 && a_cycles == 0)
 { fprintf(efd, "warning: -i and -I need -DREACH to work accurately\n");
 }
 if (!a_cycles)
 { S_A = 0;
 } else
 { if (!fairness)
  { S_A = 1; /* _a_t */
  } else /* _a_t and _cnt[NFAIR] */
  { S_A = (&(now._cnt[0]) - (unsigned char *) &now) + 2 - 2;
  /* -2 because first two uchars in now are masked */
 } }
 signal(2, stopped);
 set_masks();
 trail = (Trail *) emalloc((maxdepth+3)*sizeof(Trail));
 trail++; /* protect trpt-1 refs at depth 0 */
 trpt = &trail[0]; /* precaution -- in case uerror is called early */
 run();
 done = 1;
 wrapup();
 return 0;
}
void
usage(FILE *fd)
{
 fprintf(fd, "%s\n", "Spin Version 6.4.5 -- 1 January 2016");
 fprintf(fd, "Valid Options are:\n");
 fprintf(fd, "	-a  find acceptance cycles\n");
 fprintf(fd, "	-A  ignore assert() violations\n");
 fprintf(fd, "	-b  consider it an error to exceed the depth-limit\n");
 fprintf(fd, "	-cN stop at Nth error ");
 fprintf(fd, "(defaults to -c1)\n");
 fprintf(fd, "	-D  print state tables in dot-format and stop\n");
 fprintf(fd, "	-d  print state tables and stop\n");
 fprintf(fd, "	-e  create trails for all errors\n");
 fprintf(fd, "	-E  ignore invalid end states\n");
 fprintf(fd, "	-f  add weak fairness (to -a or -l)\n");
 fprintf(fd, "	-hN use different hash-seed N:0..499 (defaults to -h0)\n");
 fprintf(fd, "	-hash generate a random hash-polynomial for -h0 (see also -rhash)\n");
 fprintf(fd, "	      using a seed set with -RSn (default %u)\n", s_rand);
 fprintf(fd, "	-i  search for shortest path to error\n");
 fprintf(fd, "	-I  like -i, but approximate and faster\n");
 fprintf(fd, "	-J  reverse eval order of nested unlesses\n");
 fprintf(fd, "	-l  find non-progress cycles -> ");
 fprintf(fd, "disabled, requires ");
 fprintf(fd, "compilation with -DNP\n");
 fprintf(fd, "	-mN max depth N steps (default=10k)\n");
 fprintf(fd, "	-n  no listing of unreached states\n");
 fprintf(fd, "	-QN set time-limit on execution of N minutes\n");
 fprintf(fd, "	-q  require empty chans in valid end states\n");
 fprintf(fd, "	-r  read and execute trail - can add -v,-n,-PN,-g,-C\n");
 fprintf(fd, "	-r trailfilename  read and execute trail in file\n");
 fprintf(fd, "	-rN read and execute N-th error trail\n");
 fprintf(fd, "	-C  read and execute trail - columnated output (can add -v,-n)\n");
 fprintf(fd, "	-r -PN read and execute trail - restrict trail output to proc N\n");
 fprintf(fd, "	-g  read and execute trail + msc gui support\n");
 fprintf(fd, "	-S  silent replay: only user defined printfs show\n");
 fprintf(fd, "	-RSn use randomization seed n\n");
 fprintf(fd, "	-rhash use random hash-polynomial and randomly choose -p_rotateN, -p_permute, or p_reverse\n");
 fprintf(fd, "	-T  create trail files in read-only mode\n");
 fprintf(fd, "	-t_reverse  reverse order in which transitions are explored\n");
 fprintf(fd, "	-tsuf replace .trail with .suf on trailfiles\n");
 fprintf(fd, "	-V  print SPIN version number\n");
 fprintf(fd, "	-v  verbose -- filenames in unreached state listing\n");
 fprintf(fd, "	-wN hashtable of 2^N entries ");
 fprintf(fd, "(defaults to -w%d)\n", ssize);
 fprintf(fd, "	-x  do not overwrite an existing trail file\n");
 fprintf(fd, "\n	options -r, -C, -PN, -g, and -S can optionally be followed by\n");
 fprintf(fd, "	a filename argument, as in '-r filename', naming the trailfile\n");
 exit(1);
}
char *
Malloc(unsigned long n)
{ char *tmp;
 tmp = (char *) malloc(n);
 if (!tmp)
 {
  printf("pan: out of memory\n");
  printf("hint: to reduce memory, recompile with\n");
  printf("  -DCOLLAPSE # good, fast compression, or\n");
  printf("  -DMA=%d   # better/slower compression, or\n", hmax);
  printf("  -DHC # hash-compaction, approximation\n");
  printf("  -DBITSTATE # supertrace, approximation\n");
  wrapup();
 }
 memcnt += (double) n;
 return tmp;
}
char *
emalloc(unsigned long n) /* never released or reallocated */
{ char *tmp;
 if (n == 0)
         return (char *) ((void *)0);
 if (n&(sizeof(void *)-1)) /* for proper alignment */
         n += sizeof(void *)-(n&(sizeof(void *)-1));
 if ((unsigned long) left < n)
 { grow = (n < (100*1024)) ? (100*1024) : n;
         have = Malloc(grow);
         fragment += (double) left;
         left = grow;
 }
 tmp = have;
 have += (long) n;
 left -= (long) n;
 memset(tmp, 0, n);
 return tmp;
}
void
dfs_Uerror(char *str)
{ /* always fatal */
 uerror(str);
 wrapup();
}
static char unwinding;
void
dfs_uerror(char *str)
{ static char laststr[256];
 int is_cycle;
 if (unwinding) return; /* 1.4.2 */
 if (strncmp(str, laststr, 254))
 printf("pan:%d: %s (at depth %ld)\n", errors+1, str,
  ((depthfound == -1)?depth:depthfound));
 strncpy(laststr, str, 254);
 errors++;
 if (readtrail) { wrap_trail(); return; }
 is_cycle = (strstr(str, " cycle") != (char *) 0);
 if (!is_cycle)
 { depth++; trpt++;
 }
 if ((every_error != 0)
 || errors == upto)
 {
  putrail();
 }
 if (!is_cycle)
 { depth--; trpt--; /* undo */
 }
 if (iterative != 0 && maxdepth > 0)
 { if (maxdepth > depth)
  { maxdepth = (iterative == 1)?(depth+1):(depth/2);
  }
  warned = 1;
  printf("pan: reducing search depth to %ld\n",
   maxdepth);
 } else
 if (errors >= upto && upto != 0)
 {
  wrapup();
 }
 depthfound = -1;
}
int
xrefsrc(int lno, S_F_MAP *mp, int M, int i)
{ Trans *T; int j, retval=1;
 for (T = trans[M][i]; T; T = T->nxt)
 if (T && T->tp)
 { if (strcmp(T->tp, ".(goto)") == 0
  || strncmp(T->tp, "goto :", 6) == 0)
   return 1; /* not reported */
  for (j = 0; j < sizeof(mp); j++)
   if (i >= mp[j].from && i <= mp[j].upto)
   { printf("\t%s:%d", mp[j].fnm, lno);
    break;
   }
  if (j >= sizeof(mp)) /* fnm not found in list */
  { printf("\t%s:%d", "ex01.pml", lno); /* use default */
  }
  printf(", state %d", i);
  if (strcmp(T->tp, "") != 0)
  { char *q;
   q = transmognify(T->tp);
   printf(", \"%s\"", q?q:"");
  } else if (stopstate[M][i])
   printf(", -end state-");
  printf("\n");
  retval = 0; /* reported */
 }
 return retval;
}
void
r_ck(unsigned char *which, int N, int M, short *src, S_F_MAP *mp)
{ int i, m=0;
 if ((enum btypes) Btypes[M] == N_CLAIM
 && claimname != ((void *)0) && strcmp(claimname, procname[M]) != 0)
 { return;
 }
 switch ((enum btypes) Btypes[M]) {
 case P_PROC:
 case A_PROC:
  printf("unreached in proctype %s\n", procname[M]);
  break;
 case I_PROC:
  printf("unreached in init\n");
  break;
 case E_TRACE:
 case N_TRACE:
 case N_CLAIM:
 default:
  printf("unreached in claim %s\n", procname[M]);
  break;
 }
 for (i = 1; i < N; i++)
 { if (which[i] == 0
  && (mapstate[M][i] == 0
  || which[mapstate[M][i]] == 0))
  { m += xrefsrc((int) src[i], mp, M, i);
  } else
  { m++;
 } }
 printf("	(%d of %d states)\n", N-1-m, N-1);
}
void
putrail(void)
{ int fd;
 char snap[64];
 long i, j;
 Trail *trl;
 fd = make_trail();
 if (fd < 0) return;
 sprintf(snap, "-4:-4:-4\n");
 if (write(fd, snap, strlen(snap)) < 0) return;
 i = 1; /* trail starts at position 1 */
 for ( ; i <= depth; i++)
 { if (i == depthfound+1)
  { if (write(fd, "-1:-1:-1\n", 9) != 9)
   { goto notgood;
  } }
  trl = &trail[i];;
  if (!trl->o_t) continue;
  if (trl->o_pm&128) continue;
  sprintf(snap, "%ld:%d:%d\n",
   i, trl->pr, trl->o_t->t_id);
  j = strlen(snap);
  if (write(fd, snap, j) != j)
  {
notgood: printf("pan: error writing trailfile\n");
   close(fd);
   wrapup();
 } }
 close(fd);
}
void
sv_save(void) /* push state vector onto save stack */
{ if (!svtack->nxt)
 { svtack->nxt = (Svtack *) emalloc(sizeof(Svtack));
    svtack->nxt->body = emalloc(vsize*sizeof(char));
    svtack->nxt->lst = svtack;
    svtack->nxt->m_delta = vsize;
    svmax++;
 } else if (vsize > svtack->nxt->m_delta)
 { svtack->nxt->body = emalloc(vsize*sizeof(char));
    svtack->nxt->lst = svtack;
    svtack->nxt->m_delta = vsize;
    svmax++;
 }
 svtack = svtack->nxt;
 svtack->o_delta = vsize; /* don't compress */
 memcpy((char *)(svtack->body), (char *) &now, vsize);
}
void
sv_restor(void) /* pop state vector from save stack */
{
 memcpy((char *)&now, svtack->body, svtack->o_delta);
 if (vsize != svtack->o_delta)
  Uerror("sv_restor");
 if (!svtack->lst)
  Uerror("error: sv_restor");
 svtack = svtack->lst;
}
void
p_restor(int h)
{ int i;
 char *z = (char *) &now;
 proc_offset[h] = stack->o_offset;
 proc_skip[h] = (unsigned char) stack->o_skip;
 p_name[h] = stack->o_name;
 for (i = vsize + stack->o_skip; i > vsize; i--)
  Mask[i-1] = 1; /* align */
 vsize += stack->o_skip;
 memcpy(z+vsize, stack->body, stack->o_delta);
 vsize += stack->o_delta;
  for (i = 1; i <= Air[((P0 *)(((unsigned char *)&now)+(int)proc_offset[h]))->_t]; i++)
   Mask[vsize - i] = 1; /* pad */
  Mask[proc_offset[h]] = 1; /* _pid */
 if (0 > 0 && h > 0)
  ((P0 *)(((unsigned char *)&now)+(int)proc_offset[h]))->_pid = h-0;
 else
  ((P0 *)(((unsigned char *)&now)+(int)proc_offset[h]))->_pid = h;
 now._nr_pr += 1;
 now._vsz = vsize;
 i = stack->o_delqs;
 if (!stack->lst)
  Uerror("error: p_restor");
 stack = stack->lst;
 this = (((unsigned char *)&now)+(int)proc_offset[h]);
 while (i-- > 0)
  q_restor();
}
void
q_restor(void)
{ int h = now._nr_qs;
 char *z = (char *) &now;
  int k, k_end;
 q_offset[h] = stack->o_offset;
 q_skip[h] = (unsigned char) stack->o_skip;
 vsize += stack->o_skip;
 memcpy(z+vsize, stack->body, stack->o_delta);
 vsize += stack->o_delta;
 q_name[h] = stack->o_name;
 now._vsz = vsize;
 now._nr_qs += 1;
  k_end = stack->o_offset;
  k = k_end - stack->o_skip;
  for ( ; k < k_end; k++)
   Mask[k] = 1;
 if (!stack->lst)
  Uerror("error: q_restor");
 stack = stack->lst;
}
typedef struct IntChunks {
 int *ptr;
 struct IntChunks *nxt;
} IntChunks;
IntChunks *filled_chunks[512];
IntChunks *empty_chunks[512];
int *
grab_ints(int nr)
{ IntChunks *z;
 if (nr >= 512) Uerror("cannot happen grab_int");
 if (filled_chunks[nr])
 { z = filled_chunks[nr];
  filled_chunks[nr] = filled_chunks[nr]->nxt;
 } else
 { z = (IntChunks *) emalloc(sizeof(IntChunks));
  z->ptr = (int *) emalloc(nr * sizeof(int));
 }
 z->nxt = empty_chunks[nr];
 empty_chunks[nr] = z;
 return z->ptr;
}
void
ungrab_ints(int *p, int nr)
{ IntChunks *z;
 if (!empty_chunks[nr]) Uerror("cannot happen ungrab_int");
 z = empty_chunks[nr];
 empty_chunks[nr] = empty_chunks[nr]->nxt;
 z->ptr = p;
 z->nxt = filled_chunks[nr];
 filled_chunks[nr] = z;
}
int
delproc(int sav, int h)
{ int d, i=0;
 int o_vsize = vsize;
 if (h+1 != (int) now._nr_pr)
 { return 0;
 }
 while (now._nr_qs
 && q_offset[now._nr_qs-1] > proc_offset[h])
 { delq(sav);
  i++;
 }
 d = vsize - proc_offset[h];
 if (sav)
 { if (!stack->nxt)
  { stack->nxt = (_Stack *) emalloc(sizeof(_Stack));
   stack->nxt->body = emalloc(Maxbody * sizeof(char));
   stack->nxt->lst = stack;
   smax++;
  }
  stack = stack->nxt;
  stack->o_offset = proc_offset[h];
  stack->o_skip = (short) proc_skip[h];
  stack->o_name = p_name[h];
  stack->o_delta = d;
  stack->o_delqs = i;
  memcpy(stack->body, (char *)(((unsigned char *)&now)+(int)proc_offset[h]), d);
 }
 vsize = proc_offset[h];
 now._nr_pr -= 1;
 memset((char *)(((unsigned char *)&now)+(int)proc_offset[h]), 0, d);
 vsize -= (int) proc_skip[h];
  for (i = vsize; i < o_vsize; i++)
   Mask[i] = 0; /* reset */
 now._vsz = vsize;
 return 1;
}
void
delq(int sav)
{ int h = now._nr_qs - 1;
 int d = vsize - q_offset[now._nr_qs - 1];
 int k, o_vsize = vsize;
 if (sav)
 { if (!stack->nxt)
  { stack->nxt = (_Stack *) emalloc(sizeof(_Stack));
   stack->nxt->body = emalloc(Maxbody * sizeof(char));
   stack->nxt->lst = stack;
   smax++;
  }
  stack = stack->nxt;
  stack->o_offset = q_offset[h];
  stack->o_skip = (short) q_skip[h];
  stack->o_name = q_name[h];
  stack->o_delta = d;
  memcpy(stack->body, (char *)(((unsigned char *)&now)+(int)q_offset[h]), d);
 }
 vsize = q_offset[h];
 vsize -= (int) q_skip[h];
  for (k = vsize; k < o_vsize; k++)
   Mask[k] = 0; /* reset */
 now._nr_qs -= 1;
 memset((char *)(((unsigned char *)&now)+(int)q_offset[h]), 0, d);
 now._vsz = vsize;
}
int
qs_empty(void)
{ int i;
 for (i = 0; i < (int) now._nr_qs; i++)
 { if ((((Q0 *)(((unsigned char *)&now)+(int)q_offset[i]))->Qlen) > 0)
   return 0;
 }
 return 1;
}
int
endstate(void)
{ int i; P0 *ptr;
 for (i = 0; i < (int) now._nr_pr; i++)
 { ptr = (P0 *) (((unsigned char *)&now)+(int)proc_offset[i]);
  if (!stopstate[ptr->_t][ptr->_p])
   return 0;
 }
 if (strict) return qs_empty();
 return 1;
}
void
checkcycles(void)
{ unsigned char o_a_t = now._a_t;
  unsigned char o_cnt = now._cnt[1];
   H_el *sv = trpt->ostate; /* save */
 now._a_t |= (1|16|32);
 /* 1 = 2nd DFS; (16|32) to improve hashing */
  now._cnt[1] = now._cnt[0];
 memcpy((char *)&A_Root, (char *)&now, vsize);
 A_depth = depthfound = depth;
  new_state(); /* start 2nd DFS */
 now._a_t = o_a_t;
  now._cnt[1] = o_cnt;
 A_depth = 0; depthfound = -1;
 trpt->ostate = sv; /* restore */
}
H_el *
grab_state(int n)
{ H_el *p;
 int cnt = sizeof(H_el)+n-sizeof(unsigned long);
 if (reclaim_size >= cnt+8)
 { if ((cnt & (8 -1)) != 0) /* alignment */
  { cnt += 8 - (cnt & (8 -1));
  }
  p = (H_el *) reclaim_mem;
  reclaim_mem += cnt;
  reclaim_size -= cnt;
  memset(p, 0, cnt);
 } else
 { p = (H_el *) emalloc(cnt);
 }
 return p;
}
int
compress(char *vin, int n) /* default compression */
{
 char *vv = vin;
 char *v = (char *) &comp_now;
 int i;
 int r = 0, unroll = n/8;
 if (unroll > 0)
 { i = 0;
  while (r++ < unroll)
  { /* unroll 8 times, avoid ifs */
 /* 1 */ *v = *vv++; v += 1 - Mask[i++];
 /* 2 */ *v = *vv++; v += 1 - Mask[i++];
 /* 3 */ *v = *vv++; v += 1 - Mask[i++];
 /* 4 */ *v = *vv++; v += 1 - Mask[i++];
 /* 5 */ *v = *vv++; v += 1 - Mask[i++];
 /* 6 */ *v = *vv++; v += 1 - Mask[i++];
 /* 7 */ *v = *vv++; v += 1 - Mask[i++];
 /* 8 */ *v = *vv++; v += 1 - Mask[i++];
  }
  r = n - i; /* the rest, at most 7 */
  switch (r) {
  case 7: *v = *vv++; v += 1 - Mask[i++];
  case 6: *v = *vv++; v += 1 - Mask[i++];
  case 5: *v = *vv++; v += 1 - Mask[i++];
  case 4: *v = *vv++; v += 1 - Mask[i++];
  case 3: *v = *vv++; v += 1 - Mask[i++];
  case 2: *v = *vv++; v += 1 - Mask[i++];
  case 1: *v = *vv++; v += 1 - Mask[i++];
  case 0: break;
  }
  n = i = v - (char *)&comp_now; /* bytes written so far */
  r = (n+8 -1)/8; /* in words, rounded up */
  r *= 8; /* total bytes to fill  */
  i = r - i; /* remaining bytes      */
  switch (i) {
  case 7: *v++ = 0; /* fall thru */
  case 6: *v++ = 0;
  case 5: *v++ = 0;
  case 4: *v++ = 0;
  case 3: *v++ = 0;
  case 2: *v++ = 0;
  case 1: *v++ = 0;
  case 0: break;
  default: Uerror("unexpected wordsize");
  }
  v -= i;
 } else
 { for (i = 0; i < n; i++, vv++)
   if (!Mask[i]) *v++ = *vv;
  for (i = 0; i < 8 -1; i++)
   *v++ = 0;
  v -= i;
 }
 return v - (char *)&comp_now;
}
 void
 set_H_tab(void)
 {
 H_tab = (H_el **) emalloc(((1L)<<ssize)*sizeof(H_el *));
 }
void
hinit(void)
{
   { set_H_tab(); /* @htable ssize */
   }
}
int
h_store(char *vin, int nin) /* hash table storage */
{ H_el *ntmp;
 H_el *tmp, *olst = (H_el *) 0;
 char *v; int n, m=0;
 v = (char *) &comp_now;
 n = compress(vin, nin);
 if (S_A)
 { v[0] = 0; /* _a_t  */
  if (S_A > 2)
  for (m = 0; m < 2; m++)
   v[m+1] = 0; /* _cnt[] */
  m = 0;
 }
 s_hash((unsigned char *)v, n);
 /* for BFS_PAR we can only get here in BITSTATE mode */
 /* and in that case we don't use locks */
 tmp = H_tab[j1_spin];
 if (!tmp)
 { tmp = grab_state(n);
    H_tab[j1_spin] = tmp;
 } else
 { for (;; hcmp++, olst = tmp, tmp = tmp->nxt)
    { /* skip the _a_t and the _cnt bytes */
  m = memcmp(((char *)&(tmp->state)) + S_A,
   v + S_A, n - S_A);
  if (m == 0) {
  int wasnew = 0;
  if (S_A)
  { if ((((char *)&(tmp->state))[0] & (((now._a_t&1)?2:1) << (now._a_t&2))) != (((now._a_t&1)?2:1) << (now._a_t&2)))
    { wasnew = 1; nShadow++;
   ((char *)&(tmp->state))[0] |= (((now._a_t&1)?2:1) << (now._a_t&2));
    }
    if (S_A > 2)
    { /* 0 <= now._cnt[now._a_t&1] < MAXPROC */
   unsigned int ci, bp; /* index, bit pos */
   ci = (now._cnt[now._a_t&1] / 8);
   bp = (now._cnt[now._a_t&1] - 8*ci);
   if (now._a_t&1) /* use tail-bits in _cnt */
   { ci = (2 - 1) - ci;
    bp = 7 - bp; /* bp = 0..7 */
   }
   ci++; /* skip over _a_t */
   bp = 1 << bp; /* the bit mask */
   if ((((char *)&(tmp->state))[ci] & bp)==0)
   { if (!wasnew)
    { wasnew = 1;
     nShadow++;
    }
    ((char *)&(tmp->state))[ci] |= bp;
   }
     }
     /* else: wasnew == 0, i.e., old state */
  }
  if (wasnew)
  { Lstate = (H_el *) tmp; /* h_store */
   tmp->tagged |= (((now._a_t&1)?2:1) << (now._a_t&2));
   if ((now._a_t&1)
   && (tmp->tagged&(((now._a_t&1)?1:2) << (now._a_t&2)))
   && depth > A_depth)
   {
intersect:
    return 3;
   }
   return 0;
  } else
  if ((S_A)?(tmp->tagged&(((now._a_t&1)?2:1) << (now._a_t&2))):tmp->tagged)
  { Lstate = (H_el *) tmp; /* h_store */
   /* already on current dfs stack */
   /* but may also be on 1st dfs stack */
   if ((now._a_t&1)
   && (tmp->tagged&(((now._a_t&1)?1:2) << (now._a_t&2)))
   && depth > A_depth
   && (!fairness || now._cnt[1] <= 1)
   )
    goto intersect;
   return 2; /* match on stack */
  }
  return 1; /* match outside stack */
        } else if (m < 0)
        { /* insert state before tmp */
   ntmp = grab_state(n);
   ntmp->nxt = tmp;
   if (!olst)
    H_tab[j1_spin] = ntmp;
   else
    olst->nxt = ntmp;
   tmp = ntmp;
   break;
        } else if (!tmp->nxt)
        { /* append after tmp */
   tmp->nxt = grab_state(n);
   tmp = tmp->nxt;
   break;
    } }
 }
 tmp->D = depth;
 if (S_A)
 { v[0] = (((now._a_t&1)?2:1) << (now._a_t&2));
  if (S_A > 2)
  { unsigned int ci, bp; /* as above */
   ci = (now._cnt[now._a_t&1] / 8);
   bp = (now._cnt[now._a_t&1] - 8*ci);
   if (now._a_t&1)
   { ci = (2 - 1) - ci;
    bp = 7 - bp; /* bp = 0..7 */
   }
   v[1+ci] = 1 << bp;
  }
 }
 tmp->m_K1 = K1;
 memcpy(((char *)&(tmp->state)), v, n);
 tmp->tagged = (S_A)?(((now._a_t&1)?2:1) << (now._a_t&2)):(depth+1);
 Lstate = (H_el *) tmp; /* end of h_store */
 return 0;
}
void
o_hash32(unsigned char *s, int len, int h) /* 32-bit, like d_sfh, but with seed */
{ uint32_t tmp;
        int rem;
        rem = len & 3;
        len >>= 2;
        for ( ; len > 0; len--)
        { h += ((((uint32_t)(((const uint8_t *)(s))[1])) << 8) +(uint32_t)(((const uint8_t *)(s))[0]) );
                tmp = (((((uint32_t)(((const uint8_t *)(s+2))[1])) << 8) +(uint32_t)(((const uint8_t *)(s+2))[0]) ) << 11) ^ h;
                h = (h << 16) ^ tmp;
                s += 2*sizeof(uint16_t);
                h += h >> 11;
        }
        switch (rem) {
        case 3: h += ((((uint32_t)(((const uint8_t *)(s))[1])) << 8) +(uint32_t)(((const uint8_t *)(s))[0]) );
                h ^= h << 16;
                h ^= s[sizeof(uint16_t)] << 18;
                h += h >> 11;
                break;
        case 2: h += ((((uint32_t)(((const uint8_t *)(s))[1])) << 8) +(uint32_t)(((const uint8_t *)(s))[0]) );
                h ^= h << 11;
                h += h >> 17;
                break;
        case 1: h += *s;
                h ^= h << 10;
                h += h >> 1;
                break;
        }
        h ^= h << 3;
        h += h >> 5;
        h ^= h << 4;
        h += h >> 17;
        h ^= h << 25;
        h += h >> 6;
        K1 = h;
}
void
o_hash64(unsigned char *kb, int nbytes, int seed)
{ uint8_t *bp;
 uint64_t a, b, c, n;
 const uint64_t *k = (uint64_t *) kb;
 n = nbytes/8; /* nr of 8-byte chunks */
 /* extend to multiple of words, if needed */
 a = 8 - (nbytes % 8);
 if (a > 0 && a < 8)
 { n++;
  bp = kb + nbytes;
  switch (a) {
  case 7: *bp++ = 0; /* fall thru */
  case 6: *bp++ = 0; /* fall thru */
  case 5: *bp++ = 0; /* fall thru */
  case 4: *bp++ = 0; /* fall thru */
  case 3: *bp++ = 0; /* fall thru */
  case 2: *bp++ = 0; /* fall thru */
  case 1: *bp = 0;
  case 0: break;
 } }
 a = (uint64_t) seed;
 b = HASH_CONST[HASH_NR];
 c = 0x9e3779b97f4a7c13LL; /* arbitrary */
 while (n >= 3)
 { a += k[0];
  b += k[1];
  c += k[2];
  { a -= b; a -= c; a ^= (c>>43); b -= c; b -= a; b ^= (a<<9); c -= a; c -= b; c ^= (b>>8); a -= b; a -= c; a ^= (c>>38); b -= c; b -= a; b ^= (a<<23); c -= a; c -= b; c ^= (b>>5); a -= b; a -= c; a ^= (c>>35); b -= c; b -= a; b ^= (a<<49); c -= a; c -= b; c ^= (b>>11); a -= b; a -= c; a ^= (c>>12); b -= c; b -= a; b ^= (a<<18); c -= a; c -= b; c ^= (b>>22); };
  n -= 3;
  k += 3;
 }
 c += (((uint64_t) nbytes)<<3);
 switch (n) {
 case 2: b += k[1];
 case 1: a += k[0];
 case 0: break;
 }
 { a -= b; a -= c; a ^= (c>>43); b -= c; b -= a; b ^= (a<<9); c -= a; c -= b; c ^= (b>>8); a -= b; a -= c; a ^= (c>>38); b -= c; b -= a; b ^= (a<<23); c -= a; c -= b; c ^= (b>>5); a -= b; a -= c; a ^= (c>>35); b -= c; b -= a; b ^= (a<<49); c -= a; c -= b; c ^= (b>>11); a -= b; a -= c; a ^= (c>>12); b -= c; b -= a; b ^= (a<<18); c -= a; c -= b; c ^= (b>>22); };
 K1 = a;
}
void
settable(void)
{ Trans *T;
 Trans *settr(int, int, int, int, int, char *, int, int, int);
 trans = (Trans ***) emalloc(3*sizeof(Trans **));
 /* proctype 1: Consumer */
 trans[1] = (Trans **) emalloc(8*sizeof(Trans *));
 trans[1][5] = settr(11,0,4,1,0,".(goto)", 0, 2, 0);
 T = trans[1][4] = settr(10,0,0,0,0,"DO", 0, 2, 0);
     T->nxt = settr(10,0,1,0,0,"DO", 0, 2, 0);
 trans[1][1] = settr(7,0,2,3,0,"((turn==S))", 1, 2, 0);
 trans[1][2] = settr(8,0,3,4,0,"printf('Consumer\\n')", 0, 2, 0);
 trans[1][3] = settr(9,0,4,5,5,"turn = F", 1, 2, 0);
 trans[1][6] = settr(12,0,7,1,0,"break", 0, 2, 0);
 trans[1][7] = settr(13,0,0,6,6,"-end-", 0, 3500, 0);
 /* proctype 0: Producer */
 trans[0] = (Trans **) emalloc(8*sizeof(Trans *));
 trans[0][5] = settr(4,0,4,1,0,".(goto)", 0, 2, 0);
 T = trans[0][4] = settr(3,0,0,0,0,"DO", 0, 2, 0);
     T->nxt = settr(3,0,1,0,0,"DO", 0, 2, 0);
 trans[0][1] = settr(0,0,2,7,0,"((turn==F))", 1, 2, 0);
 trans[0][2] = settr(1,0,3,8,0,"printf('Producer\\n')", 0, 2, 0);
 trans[0][3] = settr(2,0,4,9,9,"turn = S", 1, 2, 0);
 trans[0][6] = settr(5,0,7,1,0,"break", 0, 2, 0);
 trans[0][7] = settr(6,0,0,10,10,"-end-", 0, 3500, 0);
 /* np_ demon: */
 trans[2] = (Trans **) emalloc(2*sizeof(Trans *));
 T = trans[2][0] = settr(9997,0,1,11,0,"(np_)", 1,2,0);
     T->nxt = settr(9998,0,0,12,0,"(1)", 0,2,0);
 T = trans[2][1] = settr(9999,0,1,11,0,"(np_)", 1,2,0);
}
Trans *
settr( int t_id, int a, int b, int c, int d,
 char *t, int g, int tpe0, int tpe1)
{ Trans *tmp = (Trans *) emalloc(sizeof(Trans));
 tmp->atom = a&(6|32); /* only (2|8|32) have meaning */
 if (!g) tmp->atom |= 8; /* no global references */
 tmp->st = b;
 tmp->tpe[0] = tpe0;
 tmp->tpe[1] = tpe1;
 tmp->tp = t;
 tmp->t_id = t_id;
 tmp->forw = c;
 tmp->back = d;
 return tmp;
}
Trans *
cpytr(Trans *a)
{ Trans *tmp = (Trans *) emalloc(sizeof(Trans));
 int i;
 tmp->atom = a->atom;
 tmp->st = a->st;
 tmp->tpe[0] = a->tpe[0];
 tmp->tpe[1] = a->tpe[1];
 for (i = 0; i < 6; i++)
 { tmp->qu[i] = a->qu[i];
  tmp->ty[i] = a->ty[i];
 }
 tmp->tp = (char *) emalloc(strlen(a->tp)+1);
 strcpy(tmp->tp, a->tp);
 tmp->t_id = a->t_id;
 tmp->forw = a->forw;
 tmp->back = a->back;
 return tmp;
}
int
srinc_set(int n)
{ if (n <= 2) return 1;
 if (n <= 2+ 500) return 2; /* 's' or nfull  */
 if (n <= 2+2*500) return 3; /* 'r' or nempty */
 if (n <= 2+3*500) return 4; /* empty */
 if (n <= 2+4*500) return 5; /* full  */
 if (n == 5*500) return 7;
 if (n == 6*500) return 6;
 if (n == 7*500) return 9;
 Uerror("cannot happen srinc_class");
 return 8;
}
int
srunc(int n, int m)
{ switch(m) {
 case 2: return n-2;
 case 3: return n-2-500;
 case 4: return n-2-2*500;
 case 5: return n-2-3*500;
 case 9:
 case 6: return 257; /* non-zero, and > MAXQ */
 }
 Uerror("cannot happen srunc");
 return 0;
}
int cnt;
int
mark_safety(Trans *t) /* for conditional safety */
{ int g = 0, i, j, k;
 if (!t) return 0;
 if (t->qu[0])
  return (t->qu[1])?2:1; /* marked */
 for (i = 0; i < 2; i++)
 { j = srinc_set(t->tpe[i]);
  if (j >= 7 && j != 9)
   return -1;
  if (j != 1)
  { k = srunc(t->tpe[i], j);
   if (g == 0
   || t->qu[0] != k
   || t->ty[0] != j)
   { t->qu[g] = k;
    t->ty[g] = j;
    g++;
 } } }
 return g;
}
void
retrans(int n, int m, int is, short srcln[], unsigned char reach[], unsigned char lpstate[])
 /* process n, with m states, is=initial state */
{ Trans *T0, *T1, *T2, *T3;
 Trans *T4, *T5; /* t_reverse or has_unless */
 int i;
 int k;
 int g, h, j, aa;
 if (state_tables >= 4)
 { printf("STEP 1 %s\n",
   procname[n]);
  for (i = 1; i < m; i++)
  for (T0 = trans[n][i]; T0; T0 = T0->nxt)
   crack(n, i, T0, srcln);
  return;
 }
 do {
  for (i = 1, cnt = 0; i < m; i++)
  { T2 = trans[n][i];
   T1 = T2?T2->nxt:(Trans *)0;
/* prescan: */ for (T0 = T1; T0; T0 = T0->nxt)
/* choice in choice */ { if (T0->st && trans[n][T0->st]
    && trans[n][T0->st]->nxt)
     break;
   }
   if (T0)
   for (T0 = T1; T0; T0 = T0->nxt)
   { T3 = trans[n][T0->st];
    if (!T3->nxt)
    { T2->nxt = cpytr(T0);
     T2 = T2->nxt;
     imed(T2, T0->st, n, i);
     continue;
    }
    do { T3 = T3->nxt;
     T2->nxt = cpytr(T3);
     T2 = T2->nxt;
     imed(T2, T0->st, n, i);
    } while (T3->nxt);
    cnt++;
   }
  }
 } while (cnt);
 if (state_tables >= 3)
 { printf("STEP 2 %s\n",
   procname[n]);
  for (i = 1; i < m; i++)
  for (T0 = trans[n][i]; T0; T0 = T0->nxt)
   crack(n, i, T0, srcln);
  return;
 }
 for (i = 1; i < m; i++)
 { if (trans[n][i] && trans[n][i]->nxt) /* optimize */
  { T1 = trans[n][i]->nxt;
   srcln[i] = srcln[T1->st]; /* Oyvind Teig, 5.2.0 */
   if (!trans[n][T1->st]) continue;
   T0 = cpytr(trans[n][T1->st]);
   trans[n][i] = T0;
   reach[T1->st] = 1;
   imed(T0, T1->st, n, i);
   for (T1 = T1->nxt; T1; T1 = T1->nxt)
   {
  /*		srcln[i] = srcln[T1->st];  gh: not useful */
    if (!trans[n][T1->st]) continue;
    T0->nxt = cpytr(trans[n][T1->st]);
    T0 = T0->nxt;
    reach[T1->st] = 1;
    imed(T0, T1->st, n, i);
 } } }
 if (state_tables >= 2)
 { printf("STEP 3 %s\n",
   procname[n]);
  for (i = 1; i < m; i++)
  for (T0 = trans[n][i]; T0; T0 = T0->nxt)
   crack(n, i, T0, srcln);
  return;
 }
 for (i = 1; i < m; i++)
 { if (a_cycles)
  { /* moves through these states are visible */
   if (accpstate[n][i] || visstate[n][i])
    goto degrade;
   for (T1 = trans[n][i]; T1; T1 = T1->nxt)
    if (accpstate[n][T1->st])
     goto degrade;
  }
  T1 = trans[n][i];
  if (!T1) continue;
  g = mark_safety(T1); /* V3.3.1 */
  if (g < 0) goto degrade; /* global */
  /* check if mixing of guards preserves reduction */
  if (T1->nxt)
  { k = 0;
   for (T0 = T1; T0; T0 = T0->nxt)
   { if (!(T0->atom&8))
     goto degrade;
    for (aa = 0; aa < 2; aa++)
    { j = srinc_set(T0->tpe[aa]);
     if (j >= 7 && j != 9)
      goto degrade;
     if (T0->tpe[aa]
     && T0->tpe[aa]
     != T1->tpe[0])
      k = 1;
   } }
   /* g = 0;	V3.3.1 */
   if (k) /* non-uniform selection */
   for (T0 = T1; T0; T0 = T0->nxt)
   for (aa = 0; aa < 2; aa++)
   { j = srinc_set(T0->tpe[aa]);
    if (j != 1)
    { k = srunc(T0->tpe[aa], j);
     for (h = 0; h < 6; h++)
      if (T1->qu[h] == k
      && T1->ty[h] == j)
       break;
     if (h >= 6)
     { T1->qu[g%6] = k;
      T1->ty[g%6] = j;
      g++;
   } } }
   if (g > 6)
   { T1->qu[0] = 0; /* turn it off */
    printf("pan: warning, line %d, ",
     srcln[i]);
     printf("too many stmnt types (%d)",
     g);
      printf(" in selection\n");
     goto degrade;
   }
  }
  /* mark all options global if >=1 is global */
  for (T1 = trans[n][i]; T1; T1 = T1->nxt)
   if (!(T1->atom&8)) break;
  if (T1)
degrade: for (T1 = trans[n][i]; T1; T1 = T1->nxt)
   T1->atom &= ~8; /* mark as unsafe */
  /* can only mix 'r's or 's's if on same chan */
  /* and not mixed with other local operations */
  T1 = trans[n][i];
  if (!T1 || T1->qu[0]) continue;
  j = T1->tpe[0];
  if (T1->nxt && T1->atom&8)
  { if (j == 5*500)
    { printf("warning: line %d ", srcln[i]);
   printf("mixed condition ");
   printf("(defeats reduction)\n");
   goto degrade;
    }
    for (T0 = T1; T0; T0 = T0->nxt)
    for (aa = 0; aa < 2; aa++)
    if (T0->tpe[aa] && T0->tpe[aa] != j)
    { printf("warning: line %d ", srcln[i]);
   printf("[%d-%d] mixed %stion ",
    T0->tpe[aa], j,
    (j==5*500)?"condi":"selec");
   printf("(defeats reduction)\n");
   printf("	'%s' <-> '%s'\n",
    T1->tp, T0->tp);
   goto degrade;
  } }
 }
 for (i = 1; i < m; i++)
 { T2 = trans[n][i];
  if (!T2
  || T2->nxt
  || strncmp(T2->tp, ".(goto)", 7)
  || !stopstate[n][i])
   continue;
  stopstate[n][T2->st] = 1;
 }
 if (state_tables && !verbose)
 { if (dodot)
  { char buf[256], *q = buf, *p = procname[n];
   while (*p != '\0')
   { if (*p != ':')
    { *q++ = *p;
    }
    p++;
   }
   *q = '\0';
   printf("digraph ");
   switch (Btypes[n]) {
   case I_PROC: printf("init {\n"); break;
   case N_CLAIM: printf("claim_%s {\n", buf); break;
   case E_TRACE: printf("notrace {\n"); break;
   case N_TRACE: printf("trace {\n"); break;
   default: printf("p_%s {\n", buf); break;
   }
   printf("size=\"8,10\";\n");
   printf("  GT [shape=box,style=dotted,label=\"%s\"];\n", buf);
   printf("  GT -> S%d;\n", is);
  } else
  { switch (Btypes[n]) {
   case I_PROC: printf("init\n"); break;
   case N_CLAIM: printf("claim %s\n", procname[n]); break;
   case E_TRACE: printf("notrace assertion\n"); break;
   case N_TRACE: printf("trace assertion\n"); break;
   default: printf("proctype %s\n", procname[n]); break;
  } }
  for (i = 1; i < m; i++)
  { reach[i] = 1;
  }
  tagtable(n, m, is, srcln, reach);
  if (dodot) printf("}\n");
 } else
 for (i = 1; i < m; i++)
 { int nrelse;
  if (Btypes[n] != N_CLAIM)
  { for (T0 = trans[n][i]; T0; T0 = T0->nxt)
   { if (T0->st == i
    && strcmp(T0->tp, "(1)") == 0)
    { printf("error: proctype '%s' ",
      procname[n]);
       printf("line %d, state %d: has un",
      srcln[i], i);
     printf("conditional self-loop\n");
     pan_exit(1);
  } } }
  nrelse = 0;
  for (T0 = trans[n][i]; T0; T0 = T0->nxt)
  { if (strcmp(T0->tp, "else") == 0)
    nrelse++;
  }
  if (nrelse > 1)
  { printf("error: proctype '%s' state",
    procname[n]);
     printf(" %d, inherits %d", i, nrelse);
     printf(" 'else' stmnts\n");
   pan_exit(1);
 } }
 if (state_tables)
 do_dfs(n, m, is, srcln, reach, lpstate);
 if (!t_reverse)
 { return;
 }
 /* process n, with m states, is=initial state -- reverse list */
 if (!state_tables && Btypes[n] != N_CLAIM)
 { for (i = 1; i < m; i++)
  { Trans *Tx = (Trans *) 0; /* list of escapes */
   Trans *Ty = (Trans *) 0; /* its tail element */
   T1 = (Trans *) 0; /* reversed list */
   T2 = (Trans *) 0; /* its tail */
   T3 = (Trans *) 0; /* remembers possible 'else' */
   /* find unless-escapes, they should go first */
   T4 = T5 = T0 = trans[n][i];
   /* T4 points to first non-escape, T5 to its parent, T0 to original list */
   if (T4 != T0) /* there was at least one escape */
   { T3 = T5->nxt; /* start of non-escapes */
    T5->nxt = (Trans *) 0; /* separate */
    Tx = T0; /* start of the escapes */
    Ty = T5; /* its tail */
    T0 = T3; /* the rest, to be reversed */
   }
   /* T0 points to first non-escape, Tx to the list of escapes, Ty to its tail */
   /* first tail-add non-escape transitions, reversed */
   T3 = (Trans *) 0;
   for (T5 = T0; T5; T5 = T4)
   { T4 = T5->nxt;
    if (strcmp(T5->tp, "else") == 0)
    { T3 = T5;
     T5->nxt = (Trans *) 0;
    } else
    { T5->nxt = T1;
     if (!T1) { T2 = T5; }
     T1 = T5;
   } }
   /* T3 points to a possible else, which is removed from the list */
   /* T1 points to the reversed list so far (without escapes) */
   /* T2 points to the tail element -- where the else should go */
   if (T2 && T3)
   { T2->nxt = T3; /* add else */
   } else
   { if (T3) /* there was an else, but there's no tail */
    { if (!T1) /* and no reversed list */
     { T1 = T3; /* odd, but possible */
     } else /* even stranger */
     { T1->nxt = T3;
   } } }
   /* add in the escapes, to that they appear at the front */
   if (Tx && Ty) { Ty->nxt = T1; T1 = Tx; }
   trans[n][i] = T1;
   /* reversed, with escapes first and else last */
 } }
 if (state_tables && verbose)
 { printf("FINAL proctype %s\n",
   procname[n]);
  for (i = 1; i < m; i++)
  for (T0 = trans[n][i]; T0; T0 = T0->nxt)
   crack(n, i, T0, srcln);
 }
}
void
imed(Trans *T, int v, int n, int j) /* set intermediate state */
{ progstate[n][T->st] |= progstate[n][v];
 accpstate[n][T->st] |= accpstate[n][v];
 stopstate[n][T->st] |= stopstate[n][v];
 mapstate[n][j] = T->st;
}
void
tagtable(int n, int m, int is, short srcln[], unsigned char reach[])
{ Trans *z;
 if (is >= m || !trans[n][is]
 || is <= 0 || reach[is] == 0)
  return;
 reach[is] = 0;
 if (state_tables)
 for (z = trans[n][is]; z; z = z->nxt)
 { if (dodot)
   dot_crack(n, is, z);
  else
   crack(n, is, z, srcln);
 }
 for (z = trans[n][is]; z; z = z->nxt)
 {
  tagtable(n, m, z->st, srcln, reach);
 }
}
extern Trans *t_id_lkup[];
void
dfs_table(int n, int m, int is, short srcln[], unsigned char reach[], unsigned char lpstate[])
{ Trans *z;
 if (is >= m || is <= 0 || !trans[n][is])
  return;
 if ((reach[is] & (4|8|16)) != 0)
 { if ((reach[is] & (8|16)) == 16) /* on stack, not yet recorded */
  { lpstate[is] = 1;
   reach[is] |= 8; /* recorded */
   if (state_tables && verbose)
   { printf("state %d line %d is a loopstate\n", is, srcln[is]);
  } }
  return;
 }
 reach[is] |= (4|16); /* visited | onstack */
 for (z = trans[n][is]; z; z = z->nxt)
 { t_id_lkup[z->t_id] = z;
  dfs_table(n, m, z->st, srcln, reach, lpstate);
 }
 reach[is] &= ~16; /* no longer on stack */
}
void
do_dfs(int n, int m, int is, short srcln[], unsigned char reach[], unsigned char lpstate[])
{ int i;
 dfs_table(n, m, is, srcln, reach, lpstate);
 for (i = 0; i < m; i++)
  reach[i] &= ~(4|8|16);
}
void
crack(int n, int j, Trans *z, short srcln[])
{ int i;
 if (!z) return;
 printf("	state %3d -(tr %3d)-> state %3d  ",
  j, z->forw, z->st);
 printf("[id %3d tp %3d", z->t_id, z->tpe[0]);
 if (z->tpe[1]) printf(",%d", z->tpe[1]);
 printf("]");
 printf(" [%s%s%s%s%s] %s:%d => ",
  z->atom&6?"A":z->atom&32?"D":"-",
  accpstate[n][j]?"a" :"-",
  stopstate[n][j]?"e" : "-",
  progstate[n][j]?"p" : "-",
  z->atom & 8 ?"L":"G",
  "ex01.pml", srcln[j]);
 for (i = 0; z->tp[i]; i++)
  if (z->tp[i] == '\n')
   printf("\\n");
  else
   putchar(z->tp[i]);
 if (verbose && z->qu[0])
 { printf("\t[");
  for (i = 0; i < 6; i++)
   if (z->qu[i])
    printf("(%d,%d)",
    z->qu[i], z->ty[i]);
  printf("]");
 }
 printf("\n");
 fflush((&__iob_func()[1]));
}
/* spin -a m.pml; cc -o pan pan.c; ./pan -D | dot -Tps > foo.ps; ps2pdf foo.ps */
void
dot_crack(int n, int j, Trans *z)
{ int i;
 if (!z) return;
 printf("	S%d -> S%d  [color=black", j, z->st);
 if (z->atom&6) printf(",style=dashed");
 else if (z->atom&32) printf(",style=dotted");
 else if (z->atom&8) printf(",style=solid");
 else printf(",style=bold");
 printf(",label=\"");
 for (i = 0; z->tp[i]; i++)
 { if (z->tp[i] == '\\'
  && z->tp[i+1] == 'n')
  { i++; printf(" ");
  } else
  { putchar(z->tp[i]);
 } }
 printf("\"];\n");
 if (accpstate[n][j]) printf("  S%d [color=red,style=bold];\n", j);
 else if (progstate[n][j]) printf("  S%d [color=green,style=bold];\n", j);
 if (stopstate[n][j]) printf("  S%d [color=blue,style=bold,shape=box];\n", j);
}
void
do_reach(void)
{
 r_ck(reached0, 8, 0, src_ln0, src_file0);
 r_ck(reached1, 8, 1, src_ln1, src_file1);
}
void
iniglobals(int calling_pid)
{
  now.turn = 2;
}
int
addqueue(int calling_pid, int n, int is_rv)
{ int j=0, i = now._nr_qs;
 int k;
 if (i >= 255)
  Uerror("too many queues");
 switch (n) {
 default: Uerror("bad queue - addqueue");
 }
 if (vsize%8)
  q_skip[i] = 8 -(vsize%8);
 else
  q_skip[i] = 0;
  k = vsize;
   if (is_rv) k += j;
  for (k += (int) q_skip[i]; k > vsize; k--)
   Mask[k-1] = 1;
 vsize += (int) q_skip[i];
 q_offset[i] = vsize;
 vsize += j;
 now._nr_qs += 1;
 now._vsz = vsize;
 hmax = (((hmax)<(vsize)) ? (vsize) : (hmax));
 if (vsize >= 1024)
  Uerror("VECTORSZ is too small, edit pan.h");
 if (j > 0)
 { memset((char *)(((unsigned char *)&now)+(int)q_offset[i]), 0, j);
 }
 ((Q0 *)(((unsigned char *)&now)+(int)q_offset[i]))->_t = n;
 return i+1;
}
void
setq_claim(int x, int m, char *s, int y, char *p)
{ if (x == 0)
 uerror("x[rs] claim on uninitialized channel");
 if (x < 0 || x > 255)
  Uerror("cannot happen setq_claim");
 q_claim[x] |= m;
 p_name[y] = p;
 q_name[x] = s;
 if (m&2) q_S_check(x, y);
 if (m&1) q_R_check(x, y);
}
short q_sender[255 +1];
int
q_S_check(int x, int who)
{ if (!q_sender[x])
 { q_sender[x] = who+1;
 } else
 if (q_sender[x] != who+1)
 { printf("pan: xs assertion violated: ");
  printf("access to chan <%s> (%d)\npan: by ",
   q_name[x], x-1);
  if (q_sender[x] > 0 && p_name[q_sender[x]-1])
   printf("%s (proc %d) and by ",
   p_name[q_sender[x]-1], q_sender[x]-1);
  printf("%s (proc %d)\n",
   p_name[who], who);
  uerror("error, partial order reduction invalid");
 }
 return 1;
}
short q_recver[255 +1];
int
q_R_check(int x, int who)
{
 if (!q_recver[x])
 { q_recver[x] = who+1;
 } else
 if (q_recver[x] != who+1)
 { printf("pan: xr assertion violated: ");
  printf("access to chan %s (%d)\npan: ",
   q_name[x], x-1);
  if (q_recver[x] > 0 && p_name[q_recver[x]-1])
   printf("by %s (proc %d) and ",
   p_name[q_recver[x]-1], q_recver[x]-1);
  printf("by %s (proc %d)\n",
   p_name[who], who);
  uerror("error, partial order reduction invalid");
 }
 return 1;
}
int
q_len(int x)
{ if (!x--)
 uerror("ref to uninitialized chan name (len)");
 return ((Q0 *)(((unsigned char *)&now)+(int)q_offset[x]))->Qlen;
}
int
q_full(int from)
{ if (!from--)
 uerror("ref to uninitialized chan name (qfull)");
 switch(((Q0 *)(((unsigned char *)&now)+(int)q_offset[from]))->_t) {
 case 0: printf("queue %d was deleted\n", from+1);
 }
 Uerror("bad queue - q_full");
 return 0;
}
int
unsend(int into)
{ int _m=0, j; unsigned char *z;
 if (!into--)
  uerror("ref to uninitialized chan (unsend)");
 z = (((unsigned char *)&now)+(int)q_offset[into]);
 j = ((Q0 *)z)->Qlen;
 ((Q0 *)z)->Qlen = --j;
 switch (((Q0 *)(((unsigned char *)&now)+(int)q_offset[into]))->_t) {
 default: Uerror("bad queue - unsend");
 }
 return _m;
}
void
unrecv(int from, int slot, int fld, int fldvar, int strt)
{ int j; unsigned char *z;
 if (!from--)
  uerror("ref to uninitialized chan (unrecv)");
 z = (((unsigned char *)&now)+(int)q_offset[from]);
 j = ((Q0 *)z)->Qlen;
 if (strt) ((Q0 *)z)->Qlen = j+1;
 switch (((Q0 *)(((unsigned char *)&now)+(int)q_offset[from]))->_t) {
 default: Uerror("bad queue - qrecv");
 }
}
int
q_cond(short II, Trans *t)
{ int i = 0;
 for (i = 0; i < 6; i++)
 { if (t->ty[i] == 6) return 1;
  if (t->ty[i] == 9)
   return (II+1 == (short) now._nr_pr && II+1 < 255);
  switch (t->qu[i]) {
  case 0: break;
  default: Uerror("unknown qid - q_cond");
    return 0;
  }
 }
 return 1;
}
void
to_compile(void)
{ char ctd[2048], carg[128];
 strcpy(ctd, "");
 if (2 != 2)
 { sprintf(carg, "-DNFAIR=%d ", 2);
  strcat(ctd, carg);
 }
 if (1024 != 1024)
 { sprintf(carg, "-DVECTORSZ=%d ", 1024);
  strcat(ctd, carg);
 }
 printf("Compiled as: cc -o pan %span.c\n", ctd);
}
void
active_procs(void)
{
 if (reversing == 0) {
  addproc(256, 1, 0);
  addproc(256, 1, 1);
 } else {
  addproc(256, 1, 1);
  addproc(256, 1, 0);
 }
}
void
c_globals(void)
{ /* int i; */
 printf("global vars:\n");
 printf("	mtype  F:	2\n");
 printf("	mtype  S:	1\n");
 printf("	mtype  turn:	%d\n", now.turn);
}
void
c_locals(int pid, int tp)
{ /* int i; */
 switch(tp) {
 case 1:
  /* none */
  break;
 case 0:
  /* none */
  break;
 }
}
void
printm(int x)
{
 switch (x) {
 case 1: Printf("S"); break;
 case 2: Printf("F"); break;
 default: Printf("%d", x);
 }
}
void
c_chandump(int unused)
{ unused++; /* avoid complaints */
}
Trans *t_id_lkup[14];
/* end of pan.c */
