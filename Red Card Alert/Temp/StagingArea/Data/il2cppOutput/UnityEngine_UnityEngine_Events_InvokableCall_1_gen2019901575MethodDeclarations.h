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

// UnityEngine.Events.InvokableCall`1<System.Boolean>
struct InvokableCall_1_t2019901575;
// System.Object
struct Il2CppObject;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t897193173;
// System.Object[]
struct ObjectU5BU5D_t3614634134;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Reflection_MethodInfo3330546337.h"

// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C"  void InvokableCall_1__ctor_m874046876_gshared (InvokableCall_1_t2019901575 * __this, Il2CppObject * ___target0, MethodInfo_t * ___theFunction1, const MethodInfo* method);
#define InvokableCall_1__ctor_m874046876(__this, ___target0, ___theFunction1, method) ((  void (*) (InvokableCall_1_t2019901575 *, Il2CppObject *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m874046876_gshared)(__this, ___target0, ___theFunction1, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C"  void InvokableCall_1__ctor_m2693793190_gshared (InvokableCall_1_t2019901575 * __this, UnityAction_1_t897193173 * ___action0, const MethodInfo* method);
#define InvokableCall_1__ctor_m2693793190(__this, ___action0, method) ((  void (*) (InvokableCall_1_t2019901575 *, UnityAction_1_t897193173 *, const MethodInfo*))InvokableCall_1__ctor_m2693793190_gshared)(__this, ___action0, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::add_Delegate(UnityEngine.Events.UnityAction`1<T1>)
extern "C"  void InvokableCall_1_add_Delegate_m3048312905_gshared (InvokableCall_1_t2019901575 * __this, UnityAction_1_t897193173 * ___value0, const MethodInfo* method);
#define InvokableCall_1_add_Delegate_m3048312905(__this, ___value0, method) ((  void (*) (InvokableCall_1_t2019901575 *, UnityAction_1_t897193173 *, const MethodInfo*))InvokableCall_1_add_Delegate_m3048312905_gshared)(__this, ___value0, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::remove_Delegate(UnityEngine.Events.UnityAction`1<T1>)
extern "C"  void InvokableCall_1_remove_Delegate_m1481038152_gshared (InvokableCall_1_t2019901575 * __this, UnityAction_1_t897193173 * ___value0, const MethodInfo* method);
#define InvokableCall_1_remove_Delegate_m1481038152(__this, ___value0, method) ((  void (*) (InvokableCall_1_t2019901575 *, UnityAction_1_t897193173 *, const MethodInfo*))InvokableCall_1_remove_Delegate_m1481038152_gshared)(__this, ___value0, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::Invoke(System.Object[])
extern "C"  void InvokableCall_1_Invoke_m769918017_gshared (InvokableCall_1_t2019901575 * __this, ObjectU5BU5D_t3614634134* ___args0, const MethodInfo* method);
#define InvokableCall_1_Invoke_m769918017(__this, ___args0, method) ((  void (*) (InvokableCall_1_t2019901575 *, ObjectU5BU5D_t3614634134*, const MethodInfo*))InvokableCall_1_Invoke_m769918017_gshared)(__this, ___args0, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Boolean>::Find(System.Object,System.Reflection.MethodInfo)
extern "C"  bool InvokableCall_1_Find_m951110817_gshared (InvokableCall_1_t2019901575 * __this, Il2CppObject * ___targetObj0, MethodInfo_t * ___method1, const MethodInfo* method);
#define InvokableCall_1_Find_m951110817(__this, ___targetObj0, ___method1, method) ((  bool (*) (InvokableCall_1_t2019901575 *, Il2CppObject *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m951110817_gshared)(__this, ___targetObj0, ___method1, method)
