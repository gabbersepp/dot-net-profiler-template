#include <assert.h>
#include "winnt.h"
#include "stdafx.h"
#include "Profiler.h"
#include <iostream>

const wchar_t* LogFileName = L"Profiler.log";

CProfiler* iCorProfilerCallback = NULL;

CProfiler::CProfiler() 
{
	hLogFile = INVALID_HANDLE_VALUE;
}

HRESULT CProfiler::FinalConstruct()
{
	CreateLogFile();

	return S_OK;
}

void CProfiler::FinalRelease()
{
	CloseLogFile();
}

HRESULT __stdcall CProfiler::ExceptionThrown(ObjectID thrownObjectID)
{
	LogLine("exception was thrown\r\n");
	std::cout << "\t\tFrom profiler: exception was thrown\r\n";

	return S_OK;
}

HRESULT __stdcall CProfiler::ExceptionCatcherEnter(FunctionID functionID, ObjectID objectID) {
	LogLine("yeah some nice guy catched that exception. Well done!");
	std::cout << "\t\tFrom profiler: yeah some nice guy catched that exception. Well done!\r\n";

	return S_OK;
}

HRESULT __stdcall CProfiler::Initialize(IUnknown *pICorProfilerInfoUnk)
{
	iCorProfilerCallback = this;
	LogLine("Initializing...");

    HRESULT hr = pICorProfilerInfoUnk->QueryInterface(IID_ICorProfilerInfo, (LPVOID*)&iCorProfilerInfo);
	if (FAILED(hr)) {
		LogLine("Could not find ICorProfilerInfo");
		return E_FAIL;
	}

	hr = SetEventMask();
	if (FAILED(hr)) {
		LogLine("Error setting event mask");
	}

    return S_OK;
}

HRESULT __stdcall CProfiler::Shutdown()
{
	iCorProfilerCallback = NULL;

    return S_OK;
}

void CProfiler::CreateLogFile()
{
	::DeleteFile(LogFileName);
	hLogFile = CreateFile(LogFileName, GENERIC_WRITE, 0, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
}

void CProfiler::CloseLogFile()
{
	if (hLogFile != INVALID_HANDLE_VALUE)
	{
		CloseHandle(hLogFile);
		hLogFile = INVALID_HANDLE_VALUE;
	}
}

void CProfiler::LogLine(char* pMsg, ...) {
	va_list args;
	va_start(args, pMsg);
	Log(pMsg, args);
	Log("\r\n");
	va_end(args);
}

void CProfiler::Log(char *pMsg, ...)
{
	CHAR buffer[4096]; DWORD dwWritten = 0;

	if(hLogFile != INVALID_HANDLE_VALUE)
	{
		va_list args;
		va_start( args, pMsg);
		vsprintf_s(buffer, 4096, pMsg, args);
		va_end( args );

		WriteFile(hLogFile, buffer, (DWORD)strlen(buffer), &dwWritten, NULL);
	}
}

HRESULT CProfiler::SetEventMask()
{
	DWORD eventMask = (DWORD)(COR_PRF_MONITOR_EXCEPTIONS);
	return iCorProfilerInfo->SetEventMask(eventMask);
}
