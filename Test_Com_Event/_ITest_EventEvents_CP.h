#pragma once

using namespace ATL;

template <class T>
class CProxy_ITest_EventEvents : public IConnectionPointImpl<T, &__uuidof( _ITest_EventEvents ), CComDynamicUnkArray>
{
	// 警告:  此类可以由向导重新生成
public:
	HRESULT OnTest_Notify(int num)
	{
		HRESULT hr = S_OK;
		T * pThis = static_cast<T *>(this);
		int cConnections = m_vec.GetSize();

		for (int iConnection = 0; iConnection < cConnections; iConnection++)
		{
			pThis->Lock();
			CComPtr<IUnknown> punkConnection = m_vec.GetAt(iConnection);
			pThis->Unlock();

			IDispatch * pConnection = static_cast<IDispatch *>(punkConnection.p);

			if (pConnection)
			{

				CComVariant avarParams[1];//two parameters
				avarParams[0] = num;	            avarParams[0].vt = VT_I4;

				CComVariant varResult;

				DISPPARAMS params = { avarParams, NULL, 1, 0 };
				hr = pConnection->Invoke(1, IID_NULL, LOCALE_USER_DEFAULT, DISPATCH_METHOD, &params, &varResult, NULL, NULL);

			}
		}
		return hr;
	}
};
