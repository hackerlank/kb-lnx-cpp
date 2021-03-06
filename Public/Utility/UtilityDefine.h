#ifndef _UtilityDefine_H_
#define _UtilityDefine_H_

#if defined(WIN32) || defined(WIN64)
#define __WIN_SERVER__
#else
#define __UNIX_SERVER__
#endif

#include <signal.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <assert.h>
#include <errno.h>
#include <iostream>
#include <vector>
#include <map>
#include <list>
#include <bitset>
#include <deque>
#include <assert.h>
#include <string>

#include <ext/hash_map>
using namespace __gnu_cxx;
//#include <tr1/unordered_map>
//using std::tr1::unordered_map;

#include <sys/types.h>
#include <sys/time.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#include <unistd.h>
#include <pthread.h>
#include <semaphore.h>
#include <stdio.h>

typedef int64_t		INT64;
typedef int32_t		INT32;
typedef int16_t		INT16;
typedef int8_t		INT8;
typedef uint64_t	UINT64;
typedef uint32_t	UINT32;
typedef uint16_t	UINT16;
typedef uint8_t		UINT8;
typedef int         BOOL;

//typedef uint8_t   BYTE;
typedef uint16_t    WORD;
typedef uint32_t	DWORD, DWORD_PTR;
typedef uint16_t	USHORT;
typedef double		DOUBLE;
typedef float		FLOAT;
typedef int64_t     __int64, __time64_t;
typedef int			errno_t;

typedef float               FLOAT;
typedef double				DOUBLE;
typedef int                 INT;
typedef unsigned int        UINT;
typedef char				TCHAR;
typedef char				CHAR;
typedef short				SHORT;
typedef unsigned short		USHORT;
typedef char				*LPSTR, *PSTR;
typedef const char			*LPCSTR, *PCSTR;
typedef unsigned char		BYTE, *LPBYTE;

typedef void				VOID, *LPVOID;
typedef long				LONG;
typedef unsigned long		ULONG;
typedef long long		    LLONG;

#define TRUE	1
#define FALSE	0

#define Sleep(ms) usleep(1000*ms)
#define	MAKEDWORD(a, b) ((DWORD)(((WORD)((DWORD_PTR)(a) & 0xffff)) | ((DWORD)((WORD)((DWORD_PTR)(b) & 0xffff))) << 16))
#define _ASSERT(_tf) assert(_tf)
#define LOWORD(l) ((WORD)((DWORD_PTR)(l) & 0xffff))
#define HIWORD(l) ((WORD)((DWORD_PTR)(l) >> 16))

#define ASSERT(t) assert(t)

#define MAX(a,b) (((a)>=(b))?(a):(b))
#define MIN(a,b) (((a)<(b))?(a):(b))

#define TRUE	1
#define FALSE	0

#define INVALID_SOCKET	-1
#define	SOCKET_ERROR	-1

#define SAFE_DELETE( p) { if ( p) { delete ( p); ( p) = NULL; } }

#endif // _UTILITYCOMMON_H_
