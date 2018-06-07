// Test_Event.cpp : CTest_Event µÄÊµÏÖ

#include "stdafx.h"
#include "Test_Event.h"


// CTest_Event

HRESULT CTest_Event::Test_FuncA(int num)
{
	OnTest_Notify(num);
	return S_OK;
}