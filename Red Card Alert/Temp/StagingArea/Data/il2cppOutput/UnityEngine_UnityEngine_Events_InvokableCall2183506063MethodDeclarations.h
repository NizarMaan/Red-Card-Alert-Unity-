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

// UnityEngine.Events.InvokableCall
struct InvokableCall_t2183506063;
// System.Object
struct Il2CppObject;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t4025899511;
// System.Object[]
struct ObjectU5BU5D_t3614634134;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Reflection_MethodInfo3330546337.h"
#include "UnityEngine_UnityEngine_Events_UnityAction4025899511.h"

// System.Void UnityEngine.Events.InvokableCall::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C"  void InvokableCall__ctor_m1854031676 (InvokableCall_t2183506063 * __this, Il2CppObject * ___target0, MethodInfo_t * ___theFunction1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCall::.ctor(UnityEngine.Events.UnityAction)
extern "C"  void InvokableCall__ctor_m738302370 (InvokableCall_t2183506063 * __this, UnityAction_t4025899511 * ___action0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCall::add_Delegate(UnityEngine.Events.UnityAction)
extern "C"  void InvokableCall_add_Delegate_m1598143083 (InvokableCall_t2183506063 * __this, UnityAction_t4025899511 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCall::remove_Delegate(UnityEngine.Events.UnityAction)
extern "C"  void InvokableCall_remove_Delegate_m3290603664 (InvokableCall_t2183506063 * __this, UnityAction_t4025899511 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCall::Invoke(System.Object[])
extern "C"  void InvokableCall_Invoke_m250936937 (InvokableCall_t2183506063 * __this, ObjectU5BU5D_t3614634134* ___args0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Events.InvokableCall::Find(System.Object,System.Reflection.MethodInfo)
extern "C"  bool InvokableCall_Find_m932898921 (InvokableCall_t2183506063 * __this, Il2CppObject * ___targetObj0, MethodInfo_t * ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
