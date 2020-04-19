// Implementation of DLL Exports.

#include "stdafx.h"
#include "resource.h"
#include "ProfilerAtl.h"

class CProfilerAtlModule : public CAtlDllModuleT< CProfilerAtlModule >
{
public :
	DECLARE_LIBID(LIBID_ProfilerAtlLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_ProfilerAtl, "{e0e210a6-9ed6-461c-9677-819b58e64234}")
};

CProfilerAtlModule _AtlModule;

#ifdef _MANAGED
#pragma managed(push, off)
#endif

// DLL Entry Point
extern "C" BOOL WINAPI DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID lpReserved)
{
	hInstance;
    return _AtlModule.DllMain(dwReason, lpReserved); 
}

#ifdef _MANAGED
#pragma managed(pop)
#endif

STDAPI DllCanUnloadNow(void)
{
    return _AtlModule.DllCanUnloadNow();
}

STDAPI DllGetClassObject(REFCLSID rclsid, REFIID riid, LPVOID* ppv)
{
    return _AtlModule.DllGetClassObject(rclsid, riid, ppv);
}

STDAPI DllRegisterServer(void)
{
    HRESULT hr = _AtlModule.DllRegisterServer();
	return hr;
}

STDAPI DllUnregisterServer(void)
{
	HRESULT hr = _AtlModule.DllUnregisterServer();
	return hr;
}

