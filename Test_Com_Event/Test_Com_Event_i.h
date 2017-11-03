

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


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


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __Test_Com_Event_i_h__
#define __Test_Com_Event_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ITest_Event_FWD_DEFINED__
#define __ITest_Event_FWD_DEFINED__
typedef interface ITest_Event ITest_Event;

#endif 	/* __ITest_Event_FWD_DEFINED__ */


#ifndef ___ITest_EventEvents_FWD_DEFINED__
#define ___ITest_EventEvents_FWD_DEFINED__
typedef interface _ITest_EventEvents _ITest_EventEvents;

#endif 	/* ___ITest_EventEvents_FWD_DEFINED__ */


#ifndef __Test_Event_FWD_DEFINED__
#define __Test_Event_FWD_DEFINED__

#ifdef __cplusplus
typedef class Test_Event Test_Event;
#else
typedef struct Test_Event Test_Event;
#endif /* __cplusplus */

#endif 	/* __Test_Event_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __ITest_Event_INTERFACE_DEFINED__
#define __ITest_Event_INTERFACE_DEFINED__

/* interface ITest_Event */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ITest_Event;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F86E7E46-9E4A-422B-A00B-52A459891ADA")
    ITest_Event : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Test_FuncA( 
            /* [in] */ int num) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITest_EventVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITest_Event * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITest_Event * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITest_Event * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITest_Event * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITest_Event * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITest_Event * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITest_Event * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Test_FuncA )( 
            ITest_Event * This,
            /* [in] */ int num);
        
        END_INTERFACE
    } ITest_EventVtbl;

    interface ITest_Event
    {
        CONST_VTBL struct ITest_EventVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITest_Event_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITest_Event_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITest_Event_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITest_Event_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITest_Event_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITest_Event_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITest_Event_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITest_Event_Test_FuncA(This,num)	\
    ( (This)->lpVtbl -> Test_FuncA(This,num) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITest_Event_INTERFACE_DEFINED__ */



#ifndef __Test_Com_EventLib_LIBRARY_DEFINED__
#define __Test_Com_EventLib_LIBRARY_DEFINED__

/* library Test_Com_EventLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_Test_Com_EventLib;

#ifndef ___ITest_EventEvents_DISPINTERFACE_DEFINED__
#define ___ITest_EventEvents_DISPINTERFACE_DEFINED__

/* dispinterface _ITest_EventEvents */
/* [uuid] */ 


EXTERN_C const IID DIID__ITest_EventEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("956B1EC8-F407-459C-94A3-7F2E93201F1E")
    _ITest_EventEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _ITest_EventEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _ITest_EventEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _ITest_EventEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _ITest_EventEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _ITest_EventEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _ITest_EventEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _ITest_EventEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _ITest_EventEvents * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } _ITest_EventEventsVtbl;

    interface _ITest_EventEvents
    {
        CONST_VTBL struct _ITest_EventEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _ITest_EventEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _ITest_EventEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _ITest_EventEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _ITest_EventEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _ITest_EventEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _ITest_EventEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _ITest_EventEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___ITest_EventEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_Test_Event;

#ifdef __cplusplus

class DECLSPEC_UUID("18BBF49D-5271-4006-84DD-94D06FC58B35")
Test_Event;
#endif
#endif /* __Test_Com_EventLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


