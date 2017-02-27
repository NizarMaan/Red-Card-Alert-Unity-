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

// UnityEngine.Events.InvokableCall`1<System.Object>
struct InvokableCall_1_t883776152;
// System.Object
struct Il2CppObject;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t4056035046;
// System.Object[]
struct ObjectU5BU5D_t3614634134;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Reflection_MethodInfo3330546337.h"

// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C"  void InvokableCall_1__ctor_m54675381_gshared (InvokableCall_1_t883776152 * __this, Il2CppObject * ___target0, MethodInfo_t * ___theFunction1, const MethodInfo* method);
#define InvokableCall_1__ctor_m54675381(__this, ___target0, ___theFunction1, method) ((  void (*) (InvokableCall_1_t883776152 *, Il2CppObject *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m54675381_gshared)(__this, ___target0, ___theFunction1, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C"  void InvokableCall_1__ctor_m833213021_gshared (InvokableCall_1_t883776152 * __this, UnityAction_1_t4056035046 * ___action0, const MethodInfo* method);
#define InvokableCall_1__ctor_m833213021(__this, ___action0, method) ((  void (*) (InvokableCall_1_t883776152 *, UnityAction_1_t4056035046 *, const MethodInfo*))InvokableCall_1__ctor_m833213021_gshared)(__this, ___action0, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::add_Delegate(UnityEngine.Events.UnityAction`1<T1>)
extern "C"  void InvokableCall_1_add_Delegate_m4009721884_gshared (InvokableCall_1_t883776152 * __this, UnityAction_1_t4056035046 * ___value0, const MethodInfo* method);
#define InvokableCall_1_add_Delegate_m4009721884(__this, ___value0, method) ((  void (*) (InvokableCall_1_t883776152 *, UnityAction_1_t4056035046 *, const MethodInfo*))InvokableCall_1_add_Delegate_m4009721884_gshared)(__this, ___value0, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::remove_Delegate(UnityEngine.Events.UnityAction`1<T1>)
extern "C"  void InvokableCall_1_remove_Delegate_m527482931_gshared (InvokableCall_1_t883776152 * __this, UnityAction_1_t4056035046 * ___value0, const MethodInfo* method);
#define InvokableCall_1_remove_Delegate_m527482931(__this, ___value0, method) ((  void (*) (InvokableCall_1_t883776152 *, UnityAction_1_t4056035046 *, const MethodInfo*))InvokableCall_1_remove_Delegate_m527482931_gshared)(__this, ___value0, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::Invoke(System.Object[])
extern "C"  void InvokableCall_1_Invoke_m1715547918_gshared (InvokableCall_1_t883776152 * __this, ObjectU5BU5D_t3614634134* ___args0, const MethodInfo* method);
#define InvokableCall_1_Invoke_m1715547918(__this, ___args0, method) ((  void (*) (InvokableCall_1_t883776152 *, ObjectU5BU5D_t3614634134*, const MethodInfo*))InvokableCall_1_Invoke_m1715547918_gshared)(__this, ___args0, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern "C"  bool InvokableCall_1_Find_m1325295794_gshared (InvokableCall_1_t883776152 * __this, Il2CppObject * ___targetObj0, MethodInfo_t * ___method1, const MethodInfo* method);
#define InvokableCall_1_Find_m1325295794(__this, ___targetObj0, ___method1, method) ((  bool (*) (InvokableCall_1_t883776152 *, Il2CppObject *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m1325295794_gshared)(__this, ___targetObj0, ___method1, method)
