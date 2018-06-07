/*
˵��
1.ATLģ�����ã�atlbase.h�� CComModule _Module��atlcom.h��
2.����̳���ATLģ��ӿ�IDispEventImpl���¼�������EventReceiver��
IDispEventImpl��ģ�������һ����1��
�ڶ������¼������������EventReceiver��
�������������¼��ӿ�ID��ָ��
���ĸ���������ID��ָ��
�����������1
������������0.
3.Ҫע����Ӷ�ComEvent�����ռ������
4.�¼�ӳ��DrawEventResponse��
BEGIN_SINK_MAP��SINK_ENTRY_EX��END_SINK_MAP��������Ҫһ�飬����ʵ�ֶ��¼���ӳ�䡣
BEGIN_SINK_MAP�Ĳ�����EventReceiver
SINK_ENTRY_EX��һ��������1���ڶ����������¼��ӿڵ�ID,��ֵ������IDispEventImplʹ�õ��¼�IDһ��
�������������¼���DispId
���ĸ�������DrawEventResponse�ľ���ʵ�֡�
7.ATL�ҽӺ�ȡ���¼�pReceiver->DispEventAdvise(pPaint)��pReceiver->DispEventUnadvise(pPaint)��
���������Advise��ôCom���Invoke�ᷢ��m_vec�ĳ�ԱΪ0��
*/

#include <stdio.h>
#include <atlbase.h>
#include <atlcom.h>

#include"../Test_Com_Event/Test_Com_Event_i.h"
#import "../x64/Debug/Test_Com_Event.dll" named_guids
CComModule _Module;//����ȫ�֣�������invok��ʧ��
class EventClass :public IDispEventImpl<1, EventClass, &DIID__ITest_EventEvents,&LIBID_Test_Com_EventLib,1,0>
{
public:
	BEGIN_SINK_MAP(EventClass)
		SINK_ENTRY_EX(1, DIID__ITest_EventEvents, 1, EventNotify)
	END_SINK_MAP()

	STDMETHOD(EventNotify)(unsigned long long  i);
};
STDMETHODIMP EventClass::EventNotify(unsigned long long  i)
{
	printf("EventReceiver : %lld/n", i);
	return S_OK;
}

int main(int argc,char*argv[])
{
	CoInitialize(NULL);
//	_Module.Init(NULL, (HINSTANCE)GetModuleHandle(NULL));
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
//	_Module.Term();
	CoUninitialize();
	return 0;
}