// dllmain.h: 模块类的声明。

class CTest_Com_EventModule : public ATL::CAtlDllModuleT< CTest_Com_EventModule >
{
public :
	DECLARE_LIBID(LIBID_Test_Com_EventLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_TEST_COM_EVENT, "{C76ADB2A-9378-46DE-9BB6-9B2877E242C9}")
};

extern class CTest_Com_EventModule _AtlModule;
