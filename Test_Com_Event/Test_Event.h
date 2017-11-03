// Test_Event.h : CTest_Event ������

#pragma once
#include "resource.h"       // ������



#include "Test_Com_Event_i.h"
#include "_ITest_EventEvents_CP.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Windows CE ƽ̨(�粻�ṩ��ȫ DCOM ֧�ֵ� Windows Mobile ƽ̨)���޷���ȷ֧�ֵ��߳� COM ���󡣶��� _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA ��ǿ�� ATL ֧�ִ������߳� COM ����ʵ�ֲ�����ʹ���䵥�߳� COM ����ʵ�֡�rgs �ļ��е��߳�ģ���ѱ�����Ϊ��Free����ԭ���Ǹ�ģ���Ƿ� DCOM Windows CE ƽ̨֧�ֵ�Ψһ�߳�ģ�͡�"
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
