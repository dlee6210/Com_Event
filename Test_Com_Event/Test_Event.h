// Test_Event.h : CTest_Event 的声明

#pragma once
#include "resource.h"       // 主符号



#include "Test_Com_Event_i.h"
#include "_ITest_EventEvents_CP.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Windows CE 平台(如不提供完全 DCOM 支持的 Windows Mobile 平台)上无法正确支持单线程 COM 对象。定义 _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA 可强制 ATL 支持创建单线程 COM 对象实现并允许使用其单线程 COM 对象实现。rgs 文件中的线程模型已被设置为“Free”，原因是该模型是非 DCOM Windows CE 平台支持的唯一线程模型。"
#endif

using namespace ATL;


// CTest_Event

class ATL_NO_VTABLE CTest_Event :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CTest_Event, &CLSID_Test_Event>,
	public IConnectionPointContainerImpl<CTest_Event>,
	public CProxy_ITest_EventEvents<CTest_Event>,
	public IDispatchImpl<ITest_Event, &IID_ITest_Event, &LIBID_Test_Com_EventLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CTest_Event()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_TEST_EVENT)


BEGIN_COM_MAP(CTest_Event)
	COM_INTERFACE_ENTRY(ITest_Event)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(IConnectionPointContainer)
END_COM_MAP()

BEGIN_CONNECTION_POINT_MAP(CTest_Event)
	CONNECTION_POINT_ENTRY(__uuidof(_ITest_EventEvents))
END_CONNECTION_POINT_MAP()


	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}

public:
	virtual HRESULT STDMETHODCALLTYPE Test_FuncA(int num);


};

OBJECT_ENTRY_AUTO(__uuidof(Test_Event), CTest_Event)
