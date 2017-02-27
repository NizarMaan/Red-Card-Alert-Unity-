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

// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t2295673753;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t2229564840;
// System.Object
struct Il2CppObject;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t3614634134;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Events_BaseInvokableCall2229564840.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Reflection_MethodInfo3330546337.h"

// System.Void UnityEngine.Events.InvokableCallList::.ctor()
extern "C"  void InvokableCallList__ctor_m1209277579 (InvokableCallList_t2295673753 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::AddPersistentInvokableCall(UnityEngine.Events.BaseInvokableCall)
extern "C"  void InvokableCallList_AddPersistentInvokableCall_m1312060710 (InvokableCallList_t2295673753 * __this, BaseInvokableCall_t2229564840 * ___call0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::AddListener(UnityEngine.Events.BaseInvokableCall)
extern "C"  void InvokableCallList_AddListener_m786891050 (InvokableCallList_t2295673753 * __this, BaseInvokableCall_t2229564840 * ___call0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::RemoveListener(System.Object,System.Reflection.MethodInfo)
extern "C"  void InvokableCallList_RemoveListener_m3776101648 (InvokableCallList_t2295673753 * __this, Il2CppObject * ___targetObj0, MethodInfo_t * ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::ClearPersistent()
extern "C"  void InvokableCallList_ClearPersistent_m3606847843 (InvokableCallList_t2295673753 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::Invoke(System.Object[])
extern "C"  void InvokableCallList_Invoke_m1839244635 (InvokableCallList_t2295673753 * __this, ObjectU5BU5D_t3614634134* ___parameters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
