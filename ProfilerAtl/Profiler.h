#pragma once

#include "resource.h"
#include "ProfilerAtl.h"
#include "CorProfilerCallbackDefaultImpl.h"

class ATL_NO_VTABLE CProfiler :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CProfiler, &CLSID_Profiler>,
	public CorProfilerCallbackDefaultImpl
{
public:
	CProfiler();

	DECLARE_REGISTRY_RESOURCEID(IDR_PROFILER)
	BEGIN_COM_MAP(CProfiler)
		COM_INTERFACE_ENTRY(ICorProfilerCallback)
		COM_INTERFACE_ENTRY(ICorProfilerCallback2)
	END_COM_MAP()
	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct();
	void FinalRelease();

    STDMETHOD(Initialize)(IUnknown *pICorProfilerInfoUnk);
    STDMETHOD(Shutdown)();

	STDMETHODIMP ExceptionThrown(ObjectID thrownObjectID);
	STDMETHODIMP ExceptionCatcherEnter(FunctionID functionID, ObjectID objectID);

    void LogLine(char* pszFmtString, ... );
	void Log(char* pMsg, ...);

private:
	CComQIPtr<ICorProfilerInfo> iCorProfilerInfo;

	HANDLE hLogFile;

	HRESULT SetEventMask();
	void CreateLogFile();
	void CloseLogFile();
};

OBJECT_ENTRY_AUTO(__uuidof(Profiler), CProfiler)
