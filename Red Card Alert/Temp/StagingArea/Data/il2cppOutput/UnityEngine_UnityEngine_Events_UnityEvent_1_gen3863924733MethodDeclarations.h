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

// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_t3863924733;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t897193173;
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

// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::.ctor()
extern "C"  void UnityEvent_1__ctor_m4051141261_gshared (UnityEvent_1_t3863924733 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m4051141261(__this, method) ((  void (*) (UnityEvent_1_t3863924733 *, const MethodInfo*))UnityEvent_1__ctor_m4051141261_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C"  void UnityEvent_1_AddListener_m1708363187_gshared (UnityEvent_1_t3863924733 * __this, UnityAction_1_t897193173 * ___call0, const MethodInfo* method);
#define UnityEvent_1_AddListener_m1708363187(__this, ___call0, method) ((  void (*) (UnityEvent_1_t3863924733 *, UnityAction_1_t897193173 *, const MethodInfo*))UnityEvent_1_AddListener_m1708363187_gshared)(__this, ___call0, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C"  void UnityEvent_1_RemoveListener_m670609979_gshared (UnityEvent_1_t3863924733 * __this, UnityAction_1_t897193173 * ___call0, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m670609979(__this, ___call0, method) ((  void (*) (UnityEvent_1_t3863924733 *, UnityAction_1_t897193173 *, const MethodInfo*))UnityEvent_1_RemoveListener_m670609979_gshared)(__this, ___call0, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Boolean>::FindMethod_Impl(System.String,System.Object)
extern "C"  MethodInfo_t * UnityEvent_1_FindMethod_Impl_m3743240374_gshared (UnityEvent_1_t3863924733 * __this, String_t* ___name0, Il2CppObject * ___targetObj1, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m3743240374(__this, ___name0, ___targetObj1, method) ((  MethodInfo_t * (*) (UnityEvent_1_t3863924733 *, String_t*, Il2CppObject *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m3743240374_gshared)(__this, ___name0, ___targetObj1, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Boolean>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C"  BaseInvokableCall_t2229564840 * UnityEvent_1_GetDelegate_m2856963016_gshared (UnityEvent_1_t3863924733 * __this, Il2CppObject * ___target0, MethodInfo_t * ___theFunction1, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m2856963016(__this, ___target0, ___theFunction1, method) ((  BaseInvokableCall_t2229564840 * (*) (UnityEvent_1_t3863924733 *, Il2CppObject *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m2856963016_gshared)(__this, ___target0, ___theFunction1, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Boolean>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C"  BaseInvokableCall_t2229564840 * UnityEvent_1_GetDelegate_m1528404507_gshared (Il2CppObject * __this /* static, unused */, UnityAction_1_t897193173 * ___action0, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m1528404507(__this /* static, unused */, ___action0, method) ((  BaseInvokableCall_t2229564840 * (*) (Il2CppObject * /* static, unused */, UnityAction_1_t897193173 *, const MethodInfo*))UnityEvent_1_GetDelegate_m1528404507_gshared)(__this /* static, unused */, ___action0, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::Invoke(T0)
extern "C"  void UnityEvent_1_Invoke_m667974834_gshared (UnityEvent_1_t3863924733 * __this, bool ___arg00, const MethodInfo* method);
#define UnityEvent_1_Invoke_m667974834(__this, ___arg00, method) ((  void (*) (UnityEvent_1_t3863924733 *, bool, const MethodInfo*))UnityEvent_1_Invoke_m667974834_gshared)(__this, ___arg00, method)
