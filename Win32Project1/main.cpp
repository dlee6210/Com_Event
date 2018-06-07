/*
说明
1.ATL模块引用：atlbase.h、 CComModule _Module和atlcom.h，
2.定义继承自ATL模板接口IDispEventImpl的事件接收类EventReceiver。
IDispEventImpl的模板参数第一个是1，
第二个是事件接收类的名字EventReceiver，
第三个参数是事件接口ID的指针
第四个参数是类ID的指针
第五个参数是1
第六个参数是0.
3.要注意添加对ComEvent命名空间的引用
4.事件映射DrawEventResponse。
BEGIN_SINK_MAP、SINK_ENTRY_EX、END_SINK_MAP三个必须要一组，才能实现对事件的映射。
BEGIN_SINK_MAP的参数是EventReceiver
SINK_ENTRY_EX第一个参数是1，第二个参数是事件接口的ID,该值必须与IDispEventImpl使用的事件ID一致
第三个参数是事件的DispId
第四个参数是DrawEventResponse的具体实现。
7.ATL挂接和取消事件pReceiver->DispEventAdvise(pPaint)和pReceiver->DispEventUnadvise(pPaint)。
如果不调用Advise那么Com里的Invoke会发现m_vec的成员为0；
*/

#include <stdio.h>
#include <atlbase.h>
#include <atlcom.h>

#include"../Test_Com_Event/Test_Com_Event_i.h"
#import "../x64/Debug/Test_Com_Event.dll" named_guids
CComModule _Module;//声明全局，否则在invok会失败
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