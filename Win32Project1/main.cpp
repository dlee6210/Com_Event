/*
˵��
1.ATLģ�����ã���Ҫ��stdafx.h������atlbase.h��extern CComModule _Module��atlcom.h����ComCall_CPlusPlus.CPP������ATL::CComModule _Module;
2.����̳���ATLģ��ӿ�IDispEventImpl���¼�������EventReceiver��IDispEventImpl��ģ�������һ����0���ڶ������¼������������EventReceiver���������������¼��ӿ�ID��ָ�루ʹ�� &(__uuidof(ComEvent::IEvent))�����㣩�����ĸ���������ID��ָ�루ʹ�� &(__uuidof(ComEvent::__ComEvent))�����㣩�������������1��������������0.
3.Ҫע����Ӷ�ComEvent�����ռ������
4.�¼�ӳ��DrawEventResponse��BEGIN_SINK_MAP��SINK_ENTRY_EX��END_SINK_MAP��������Ҫһ�飬����ʵ�ֶ��¼���ӳ�䡣
BEGIN_SINK_MAP�Ĳ�����EventReceiver
SINK_ENTRY_EX��һ��������0���ڶ����������¼��ӿڵ�ID(ʹ��__uuidof(ComEvent::IEvent)�����㣬��ֵ������IDispEventImplʹ�õ��¼�IDһ��)�����ĸ��������¼���DispId��������COM�������ʱ�����ֵ20��һ��Ҫ�����ֵ����Ȼ������������������DrawEventResponse�ľ���ʵ�֡�
5.��ʼ��COM���ͷ�ʵ����CoInitialize(NULL)��  CoUninitialize()����Ҫ���
6.ATLʵʼ��_Module.Init
7.ATL�ҽӺ�ȡ���¼�pReceiver->DispEventAdvise(pPaint)��pReceiver->DispEventUnadvise(pPaint)��
*/

#include <stdio.h>
#include <atlbase.h>
#include <atlcom.h>

#include"../Test_Com_Event/Test_Com_Event_i.h"
#import "D:\quanwei\����\Com\Test_write_read\Debug\Test_Com_Event.dll" named_guids/*, no_namespace*/
CComModule _Module;
class EventClass :public IDispEventImpl<1, EventClass, &DIID__ITest_EventEvents,&LIBID_Test_Com_EventLib,1,0>
{
public:
	BEGIN_SINK_MAP(EventClass)
		SINK_ENTRY_EX(1, DIID__ITest_EventEvents, 1, EventNotify)
	END_SINK_MAP()

	STDMETHOD(EventNotify)(int i);
};
STDMETHODIMP EventClass::EventNotify(int i)
{
	printf("EventReceiver : %d/n", i);
	return S_OK;
}

int main(int argc,char*argv[])
{
	CoInitialize(NULL);
	_Module.Init(NULL, (HINSTANCE)GetModuleHandle(NULL));
	//
	ITest_Event *pV;
	HRESULT hr; 
	hr = ::CoCreateInstance(
		CLSID_Test_Event,
		NULL, 
		CLSCTX_INPROC_SERVER, IID_ITest_Event, 
		(void**)&pV
		);
	EventClass * pReceiver = new EventClass;
	pReceiver->DispEventAdvise(pV);
	pV->Test_FuncA(1);
	//
	pReceiver->DispEventUnadvise(pV);
	//
	_Module.Term();
	CoUninitialize();
	return 0;
}