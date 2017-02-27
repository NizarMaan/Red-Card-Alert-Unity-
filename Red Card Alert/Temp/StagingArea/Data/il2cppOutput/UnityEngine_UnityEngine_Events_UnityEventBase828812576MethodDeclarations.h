#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t828812576;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.PersistentCall
struct PersistentCall_t3793436469;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t2229564840;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Type[]
struct TypeU5BU5D_t1664964607;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Events_PersistentCall3793436469.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Events_PersistentListenerMo857969000.h"
#include "mscorlib_System_Type1303803226.h"
#include "UnityEngine_UnityEngine_Events_BaseInvokableCall2229564840.h"
#include "mscorlib_System_Reflection_MethodInfo3330546337.h"

// System.Void UnityEngine.Events.UnityEventBase::.ctor()
extern "C"  void UnityEventBase__ctor_m4062111756 (UnityEventBase_t828812576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEventBase::UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize()
extern "C"  void UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_m1773826808 (UnityEventBase_t828812576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEventBase::UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize()
extern "C"  void UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_m3058501374 (UnityEventBase_t828812576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod(UnityEngine.Events.PersistentCall)
extern "C"  MethodInfo_t * UnityEventBase_FindMethod_m3336182189 (UnityEventBase_t828812576 * __this, PersistentCall_t3793436469 * ___call0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod(System.String,System.Object,UnityEngine.Events.PersistentListenerMode,System.Type)
extern "C"  MethodInfo_t * UnityEventBase_FindMethod_m723454189 (UnityEventBase_t828812576 * __this, String_t* ___name0, Il2CppObject * ___listener1, int32_t ___mode2, Type_t * ___argumentType3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEventBase::DirtyPersistentCalls()
extern "C"  void UnityEventBase_DirtyPersistentCalls_m2596210672 (UnityEventBase_t828812576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEventBase::RebuildPersistentCallsIfNeeded()
extern "C"  void UnityEventBase_RebuildPersistentCallsIfNeeded_m1583202007 (UnityEventBase_t828812576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEventBase::AddCall(UnityEngine.Events.BaseInvokableCall)
extern "C"  void UnityEventBase_AddCall_m1842680419 (UnityEventBase_t828812576 * __this, BaseInvokableCall_t2229564840 * ___call0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEventBase::RemoveListener(System.Object,System.Reflection.MethodInfo)
extern "C"  void UnityEventBase_RemoveListener_m2645959491 (UnityEventBase_t828812576 * __this, Il2CppObject * ___targetObj0, MethodInfo_t * ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEventBase::Invoke(System.Object[])
extern "C"  void UnityEventBase_Invoke_m2706435282 (UnityEventBase_t828812576 * __this, ObjectU5BU5D_t3614634134* ___parameters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Events.UnityEventBase::ToString()
extern "C"  String_t* UnityEventBase_ToString_m433343709 (UnityEventBase_t828812576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::GetValidMethodInfo(System.Object,System.String,System.Type[])
extern "C"  MethodInfo_t * UnityEventBase_GetValidMethodInfo_m1834951552 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, String_t* ___functionName1, TypeU5BU5D_t1664964607* ___argumentTypes2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
