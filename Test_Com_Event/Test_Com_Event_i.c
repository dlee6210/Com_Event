

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Thu Nov 02 17:39:06 2017
 */
/* Compiler settings for Test_Com_Event.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0603 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_ITest_Event,0xF86E7E46,0x9E4A,0x422B,0xA0,0x0B,0x52,0xA4,0x59,0x89,0x1A,0xDA);


MIDL_DEFINE_GUID(IID, LIBID_Test_Com_EventLib,0x9B0ACC87,0x96CC,0x4EEA,0xAE,0x4D,0x97,0xA3,0x5C,0x14,0xE9,0x75);


MIDL_DEFINE_GUID(IID, DIID__ITest_EventEvents,0x956B1EC8,0xF407,0x459C,0x94,0xA3,0x7F,0x2E,0x93,0x20,0x1F,0x1E);


MIDL_DEFINE_GUID(CLSID, CLSID_Test_Event,0x18BBF49D,0x5271,0x4006,0x84,0xDD,0x94,0xD0,0x6F,0xC5,0x8B,0x35);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



