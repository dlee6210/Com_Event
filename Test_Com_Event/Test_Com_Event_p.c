

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Thu Jun 07 15:52:53 2018
 */
/* Compiler settings for Test_Com_Event.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.00.0603 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if defined(_M_AMD64)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif /* __RPCPROXY_H_VERSION__ */


#include "Test_Com_Event_i.h"

#define TYPE_FORMAT_STRING_SIZE   3                                 
#define PROC_FORMAT_STRING_SIZE   39                                
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _Test_Com_Event_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } Test_Com_Event_MIDL_TYPE_FORMAT_STRING;

typedef struct _Test_Com_Event_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } Test_Com_Event_MIDL_PROC_FORMAT_STRING;

typedef struct _Test_Com_Event_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } Test_Com_Event_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const Test_Com_Event_MIDL_TYPE_FORMAT_STRING Test_Com_Event__MIDL_TypeFormatString;
extern const Test_Com_Event_MIDL_PROC_FORMAT_STRING Test_Com_Event__MIDL_ProcFormatString;
extern const Test_Com_Event_MIDL_EXPR_FORMAT_STRING Test_Com_Event__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITest_Event_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ITest_Event_ProxyInfo;



#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif

static const Test_Com_Event_MIDL_PROC_FORMAT_STRING Test_Com_Event__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure Test_FuncA */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x7 ),	/* 7 */
/*  8 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 16 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter num */

/* 26 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 28 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 30 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 32 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 34 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 36 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const Test_Com_Event_MIDL_TYPE_FORMAT_STRING Test_Com_Event__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */

			0x0
        }
    };


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IDispatch, ver. 0.0,
   GUID={0x00020400,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: ITest_Event, ver. 0.0,
   GUID={0xF86E7E46,0x9E4A,0x422B,{0xA0,0x0B,0x52,0xA4,0x59,0x89,0x1A,0xDA}} */

#pragma code_seg(".orpc")
static const unsigned short ITest_Event_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO ITest_Event_ProxyInfo =
    {
    &Object_StubDesc,
    Test_Com_Event__MIDL_ProcFormatString.Format,
    &ITest_Event_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ITest_Event_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    Test_Com_Event__MIDL_ProcFormatString.Format,
    &ITest_Event_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(8) _ITest_EventProxyVtbl = 
{
    &ITest_Event_ProxyInfo,
    &IID_ITest_Event,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* ITest_Event::Test_FuncA */
};


static const PRPC_STUB_FUNCTION ITest_Event_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl _ITest_EventStubVtbl =
{
    &IID_ITest_Event,
    &ITest_Event_ServerInfo,
    8,
    &ITest_Event_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    Test_Com_Event__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
    0,
    0x800025b, /* MIDL Version 8.0.603 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

const CInterfaceProxyVtbl * const _Test_Com_Event_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_ITest_EventProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _Test_Com_Event_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_ITest_EventStubVtbl,
    0
};

PCInterfaceName const _Test_Com_Event_InterfaceNamesList[] = 
{
    "ITest_Event",
    0
};

const IID *  const _Test_Com_Event_BaseIIDList[] = 
{
    &IID_IDispatch,
    0
};


#define _Test_Com_Event_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _Test_Com_Event, pIID, n)

int __stdcall _Test_Com_Event_IID_Lookup( const IID * pIID, int * pIndex )
{
    
    if(!_Test_Com_Event_CHECK_IID(0))
        {
        *pIndex = 0;
        return 1;
        }

    return 0;
}

const ExtendedProxyFileInfo Test_Com_Event_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _Test_Com_Event_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _Test_Com_Event_StubVtblList,
    (const PCInterfaceName * ) & _Test_Com_Event_InterfaceNamesList,
    (const IID ** ) & _Test_Com_Event_BaseIIDList,
    & _Test_Com_Event_IID_Lookup, 
    1,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* defined(_M_AMD64)*/

