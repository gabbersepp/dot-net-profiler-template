#include "stdafx.h"
#include "CorProfilerCallbackDefaultImpl.h"

CorProfilerCallbackDefaultImpl::CorProfilerCallbackDefaultImpl() {}

#pragma warning(push)
#pragma warning(disable : 26812)

HRESULT __stdcall CorProfilerCallbackDefaultImpl::Initialize(IUnknown *pICorProfilerInfoUnk)
{
    return S_OK;
}

HRESULT __stdcall CorProfilerCallbackDefaultImpl::Shutdown()
{
    return S_OK;
}

HRESULT __stdcall CorProfilerCallbackDefaultImpl::AppDomainCreationStarted(AppDomainID appDomainID)
{
    return S_OK;
}

HRESULT __stdcall CorProfilerCallbackDefaultImpl::AppDomainCreationFinished(AppDomainID appDomainID, HRESULT hrStatus)
{
    return S_OK;
}

HRESULT __stdcall CorProfilerCallbackDefaultImpl::AppDomainShutdownStarted(AppDomainID appDomainID)
{
    return S_OK;
}

HRESULT __stdcall CorProfilerCallbackDefaultImpl::AppDomainShutdownFinished(AppDomainID appDomainID, HRESULT hrStatus)
{
    return S_OK;
}

HRESULT __stdcall CorProfilerCallbackDefaultImpl::AssemblyLoadStarted(AssemblyID assemblyID)
{
    return S_OK;
}

HRESULT __stdcall CorProfilerCallbackDefaultImpl::AssemblyLoadFinished(AssemblyID assemblyID, HRESULT hrStatus)
{
    return S_OK;
}

HRESULT __stdcall CorProfilerCallbackDefaultImpl::AssemblyUnloadStarted(AssemblyID assemblyID)
{
    return S_OK;
}

HRESULT __stdcall CorProfilerCallbackDefaultImpl::AssemblyUnloadFinished(AssemblyID assemblyID, HRESULT hrStatus)
{
    return S_OK;
}

HRESULT __stdcall CorProfilerCallbackDefaultImpl::ModuleLoadStarted(ModuleID moduleID)
{
    return S_OK;
}

HRESULT __stdcall CorProfilerCallbackDefaultImpl::ModuleLoadFinished(ModuleID moduleID, HRESULT hrStatus)
{
    return S_OK;
}

HRESULT __stdcall CorProfilerCallbackDefaultImpl::ModuleUnloadStarted(ModuleID moduleID)
{
    return S_OK;
}
	  
HRESULT __stdcall CorProfilerCallbackDefaultImpl::ModuleUnloadFinished(ModuleID moduleID, HRESULT hrStatus)
{
	return S_OK;
}

HRESULT __stdcall CorProfilerCallbackDefaultImpl::ModuleAttachedToAssembly(ModuleID moduleID, AssemblyID assemblyID)
{
    return S_OK;
}

HRESULT __stdcall CorProfilerCallbackDefaultImpl::ClassLoadStarted(ClassID classID)
{
    return S_OK;
}

HRESULT __stdcall CorProfilerCallbackDefaultImpl::ClassLoadFinished(ClassID classID, HRESULT hrStatus)
{
    return S_OK;
}

HRESULT __stdcall CorProfilerCallbackDefaultImpl::ClassUnloadStarted(ClassID classID)
{
    return S_OK;
}

HRESULT __stdcall CorProfilerCallbackDefaultImpl::ClassUnloadFinished(ClassID classID, HRESULT hrStatus)
{
    return S_OK;
}

HRESULT __stdcall CorProfilerCallbackDefaultImpl::FunctionUnloadStarted(FunctionID functionID)
{
    return S_OK;
}

HRESULT __stdcall CorProfilerCallbackDefaultImpl::JITCompilationStarted(FunctionID functionID, BOOL fIsSafeToBlock)
{
    return S_OK;
}

HRESULT __stdcall CorProfilerCallbackDefaultImpl::JITCompilationFinished(FunctionID functionID, HRESULT hrStatus, BOOL fIsSafeToBlock)
{
    return S_OK;
}

HRESULT __stdcall CorProfilerCallbackDefaultImpl::JITCachedFunctionSearchStarted(FunctionID functionID, BOOL *pbUseCachedFunction)
{
    return S_OK;
}

HRESULT __stdcall CorProfilerCallbackDefaultImpl::JITCachedFunctionSearchFinished(FunctionID functionID, COR_PRF_JIT_CACHE result)
{
    return S_OK;
}

HRESULT __stdcall CorProfilerCallbackDefaultImpl::JITFunctionPitched(FunctionID functionID)
{
    return S_OK;
}

HRESULT __stdcall CorProfilerCallbackDefaultImpl::JITInlining(FunctionID callerID, FunctionID calleeID, BOOL *pfShouldInline)
{
    return S_OK;
}

HRESULT __stdcall CorProfilerCallbackDefaultImpl::UnmanagedToManagedTransition(FunctionID functionID, COR_PRF_TRANSITION_REASON reason)
{
    return S_OK;
}

HRESULT __stdcall CorProfilerCallbackDefaultImpl::ManagedToUnmanagedTransition(FunctionID functionID, COR_PRF_TRANSITION_REASON reason)
{
    return S_OK;
}

HRESULT __stdcall CorProfilerCallbackDefaultImpl::ThreadCreated(ThreadID threadID)
{
    return S_OK;
}

HRESULT __stdcall CorProfilerCallbackDefaultImpl::ThreadDestroyed(ThreadID threadID)
{
    return S_OK;
}

HRESULT __stdcall CorProfilerCallbackDefaultImpl::ThreadAssignedToOSThread(ThreadID managedThreadID, DWORD osThreadID) 
{
    return S_OK;
}

HRESULT __stdcall CorProfilerCallbackDefaultImpl::RemotingClientInvocationStarted()
{
    return S_OK;
}

HRESULT __stdcall CorProfilerCallbackDefaultImpl::RemotingClientSendingMessage(GUID *pCookie, BOOL fIsAsync)
{
    return S_OK;
}

HRESULT __stdcall CorProfilerCallbackDefaultImpl::RemotingClientReceivingReply(GUID *pCookie, BOOL fIsAsync)
{
    return S_OK;
}

HRESULT __stdcall CorProfilerCallbackDefaultImpl::RemotingClientInvocationFinished()
{
	return S_OK;
}

HRESULT __stdcall CorProfilerCallbackDefaultImpl::RemotingServerReceivingMessage(GUID *pCookie, BOOL fIsAsync)
{
    return S_OK;
}

HRESULT __stdcall CorProfilerCallbackDefaultImpl::RemotingServerInvocationStarted()
{
    return S_OK;
}

HRESULT __stdcall CorProfilerCallbackDefaultImpl::RemotingServerInvocationReturned()
{
    return S_OK;
}

HRESULT __stdcall CorProfilerCallbackDefaultImpl::RemotingServerSendingReply(GUID *pCookie, BOOL fIsAsync)
{
    return S_OK;
}

HRESULT __stdcall CorProfilerCallbackDefaultImpl::RuntimeSuspendStarted(COR_PRF_SUSPEND_REASON suspendReason)
{
    return S_OK;
}

HRESULT __stdcall CorProfilerCallbackDefaultImpl::RuntimeSuspendFinished()
{
    return S_OK;
}

HRESULT __stdcall CorProfilerCallbackDefaultImpl::RuntimeSuspendAborted()
{
    return S_OK;
}

HRESULT __stdcall CorProfilerCallbackDefaultImpl::RuntimeResumeStarted()
{
    return S_OK;
}

HRESULT __stdcall CorProfilerCallbackDefaultImpl::RuntimeResumeFinished()
{
    return S_OK;
}

HRESULT __stdcall CorProfilerCallbackDefaultImpl::RuntimeThreadSuspended(ThreadID threadID)
{
    return S_OK;
}

HRESULT __stdcall CorProfilerCallbackDefaultImpl::RuntimeThreadResumed(ThreadID threadID)
{
    return S_OK;
}

HRESULT __stdcall CorProfilerCallbackDefaultImpl::MovedReferences(ULONG cmovedObjectIDRanges, ObjectID oldObjectIDRangeStart[], ObjectID newObjectIDRangeStart[], ULONG cObjectIDRangeLength[])
{
    return S_OK;
}

HRESULT __stdcall CorProfilerCallbackDefaultImpl::ObjectAllocated(ObjectID objectID, ClassID classID)
{
    return S_OK;
}

HRESULT __stdcall CorProfilerCallbackDefaultImpl::ObjectsAllocatedByClass(ULONG classCount, ClassID classIDs[], ULONG objects[])
{
    return S_OK;
}

HRESULT __stdcall CorProfilerCallbackDefaultImpl::ObjectReferences(ObjectID objectID, ClassID classID, ULONG objectRefs, ObjectID objectRefIDs[])
{
    return S_OK;
}

HRESULT __stdcall CorProfilerCallbackDefaultImpl::RootReferences(ULONG rootRefs, ObjectID rootRefIDs[])
{
    return S_OK;
}

HRESULT __stdcall CorProfilerCallbackDefaultImpl::ExceptionThrown(ObjectID thrownObjectID)
{
    return S_OK;
}

HRESULT __stdcall CorProfilerCallbackDefaultImpl::ExceptionUnwindFunctionEnter(FunctionID functionID)
{
    return S_OK;
}

HRESULT __stdcall CorProfilerCallbackDefaultImpl::ExceptionUnwindFunctionLeave()
{
    return S_OK;
}

HRESULT __stdcall CorProfilerCallbackDefaultImpl::ExceptionSearchFunctionEnter(FunctionID functionID)
{
    return S_OK;
}

HRESULT __stdcall CorProfilerCallbackDefaultImpl::ExceptionSearchFunctionLeave()
{
    return S_OK;
}

HRESULT __stdcall CorProfilerCallbackDefaultImpl::ExceptionSearchFilterEnter(FunctionID functionID)
{
    return S_OK;
}

HRESULT __stdcall CorProfilerCallbackDefaultImpl::ExceptionSearchFilterLeave()
{
    return S_OK;
}

HRESULT __stdcall CorProfilerCallbackDefaultImpl::ExceptionSearchCatcherFound(FunctionID functionID)
{
    return S_OK;
}

HRESULT __stdcall CorProfilerCallbackDefaultImpl::ExceptionCLRCatcherFound()
{
    return S_OK;
}

HRESULT __stdcall CorProfilerCallbackDefaultImpl::ExceptionCLRCatcherExecute()
{
    return S_OK;
}

HRESULT __stdcall CorProfilerCallbackDefaultImpl::ExceptionOSHandlerEnter(FunctionID functionID)
{
    return S_OK;
}

HRESULT __stdcall CorProfilerCallbackDefaultImpl::ExceptionOSHandlerLeave(FunctionID functionID)
{
    return S_OK;
}

HRESULT __stdcall CorProfilerCallbackDefaultImpl::ExceptionUnwindFinallyEnter(FunctionID functionID)
{
    return S_OK;
}

HRESULT __stdcall CorProfilerCallbackDefaultImpl::ExceptionUnwindFinallyLeave()
{
    return S_OK;
}

HRESULT __stdcall CorProfilerCallbackDefaultImpl::ExceptionCatcherEnter(FunctionID functionID,
    											 ObjectID objectID)
{
    return S_OK;
}

HRESULT __stdcall CorProfilerCallbackDefaultImpl::ExceptionCatcherLeave()
{
    return S_OK;
}

HRESULT __stdcall CorProfilerCallbackDefaultImpl::COMClassicVTableCreated(ClassID wrappedClassID, REFGUID implementedIID, void *pVTable, ULONG cSlots)
{
    return S_OK;
}

HRESULT __stdcall CorProfilerCallbackDefaultImpl::COMClassicVTableDestroyed(ClassID wrappedClassID, REFGUID implementedIID, void *pVTable)
{
    return S_OK;
}

HRESULT __stdcall CorProfilerCallbackDefaultImpl::ThreadNameChanged(ThreadID threadID, ULONG cchName, WCHAR name[])
{
	return S_OK;
}

HRESULT __stdcall CorProfilerCallbackDefaultImpl::GarbageCollectionStarted(int cGenerations, BOOL generationCollected[], COR_PRF_GC_REASON reason)
{
	return S_OK;
}

HRESULT __stdcall CorProfilerCallbackDefaultImpl::SurvivingReferences(ULONG cSurvivingObjectIDRanges, ObjectID objectIDRangeStart[], ULONG cObjectIDRangeLength[])
{
    return S_OK;
}

HRESULT __stdcall CorProfilerCallbackDefaultImpl::GarbageCollectionFinished()
{
    return S_OK;
}

HRESULT __stdcall CorProfilerCallbackDefaultImpl::FinalizeableObjectQueued(DWORD finalizerFlags, ObjectID objectID)
{
    return S_OK;
}

HRESULT __stdcall CorProfilerCallbackDefaultImpl::RootReferences2(ULONG cRootRefs, ObjectID rootRefIDs[], COR_PRF_GC_ROOT_KIND rootKinds[], COR_PRF_GC_ROOT_FLAGS rootFlags[], UINT_PTR rootIDs[])
{
    return S_OK;
}
#pragma warning(pop) 

HRESULT __stdcall CorProfilerCallbackDefaultImpl::HandleCreated(GCHandleID handleID, ObjectID initialObjectID)
{
    return S_OK;
}

HRESULT __stdcall CorProfilerCallbackDefaultImpl::HandleDestroyed(GCHandleID handleID)
{
    return S_OK;
}

