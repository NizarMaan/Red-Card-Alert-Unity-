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

// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_t2110227463;
// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t3438463199;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t2229564840;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Reflection_MethodInfo3330546337.h"

// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::.ctor()
extern "C"  void UnityEvent_1__ctor_m3244234683_gshared (UnityEvent_1_t2110227463 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m3244234683(__this, method) ((  void (*) (UnityEvent_1_t2110227463 *, const MethodInfo*))UnityEvent_1__ctor_m3244234683_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C"  void UnityEvent_1_AddListener_m846589010_gshared (UnityEvent_1_t2110227463 * __this, UnityAction_1_t3438463199 * ___call0, const MethodInfo* method);
#define UnityEvent_1_AddListener_m846589010(__this, ___call0, method) ((  void (*) (UnityEvent_1_t2110227463 *, UnityAction_1_t3438463199 *, const MethodInfo*))UnityEvent_1_AddListener_m846589010_gshared)(__this, ___call0, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C"  void UnityEvent_1_RemoveListener_m2851793905_gshared (UnityEvent_1_t2110227463 * __this, UnityAction_1_t3438463199 * ___call0, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m2851793905(__this, ___call0, method) ((  void (*) (UnityEvent_1_t2110227463 *, UnityAction_1_t3438463199 *, const MethodInfo*))UnityEvent_1_RemoveListener_m2851793905_gshared)(__this, ___call0, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Int32>::FindMethod_Impl(System.String,System.Object)
extern "C"  MethodInfo_t * UnityEvent_1_FindMethod_Impl_m4083384818_gshared (UnityEvent_1_t2110227463 * __this, String_t* ___name0, Il2CppObject * ___targetObj1, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m4083384818(__this, ___name0, ___targetObj1, method) ((  MethodInfo_t * (*) (UnityEvent_1_t2110227463 *, String_t*, Il2CppObject *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m4083384818_gshared)(__this, ___name0, ___targetObj1, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Int32>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C"  BaseInvokableCall_t2229564840 * UnityEvent_1_GetDelegate_m3311025800_gshared (UnityEvent_1_t2110227463 * __this, Il2CppObject * ___target0, MethodInfo_t * ___theFunction1, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m3311025800(__this, ___target0, ___theFunction1, method) ((  BaseInvokableCall_t2229564840 * (*) (UnityEvent_1_t2110227463 *, Il2CppObject *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m3311025800_gshared)(__this, ___target0, ___theFunction1, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Int32>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C"  BaseInvokableCall_t2229564840 * UnityEvent_1_GetDelegate_m3475403017_gshared (Il2CppObject * __this /* static, unused */, UnityAction_1_t3438463199 * ___action0, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m3475403017(__this /* static, unused */, ___action0, method) ((  BaseInvokableCall_t2229564840 * (*) (Il2CppObject * /* static, unused */, UnityAction_1_t3438463199 *, const MethodInfo*))UnityEvent_1_GetDelegate_m3475403017_gshared)(__this /* static, unused */, ___action0, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::Invoke(T0)
extern "C"  void UnityEvent_1_Invoke_m1805498302_gshared (UnityEvent_1_t2110227463 * __this, int32_t ___arg00, const MethodInfo* method);
#define UnityEvent_1_Invoke_m1805498302(__this, ___arg00, method) ((  void (*) (UnityEvent_1_t2110227463 *, int32_t, const MethodInfo*))UnityEvent_1_Invoke_m1805498302_gshared)(__this, ___arg00, method)
