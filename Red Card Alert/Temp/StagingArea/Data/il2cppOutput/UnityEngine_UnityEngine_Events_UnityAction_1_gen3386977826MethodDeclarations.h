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

// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
struct UnityAction_1_t3386977826;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::.ctor(System.Object,System.IntPtr)
extern "C"  void UnityAction_1__ctor_m3329809356_gshared (UnityAction_1_t3386977826 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define UnityAction_1__ctor_m3329809356(__this, ___object0, ___method1, method) ((  void (*) (UnityAction_1_t3386977826 *, Il2CppObject *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m3329809356_gshared)(__this, ___object0, ___method1, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::Invoke(T0)
extern "C"  void UnityAction_1_Invoke_m2771701188_gshared (UnityAction_1_t3386977826 * __this, Color_t2020392075  ___arg00, const MethodInfo* method);
#define UnityAction_1_Invoke_m2771701188(__this, ___arg00, method) ((  void (*) (UnityAction_1_t3386977826 *, Color_t2020392075 , const MethodInfo*))UnityAction_1_Invoke_m2771701188_gshared)(__this, ___arg00, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Color>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * UnityAction_1_BeginInvoke_m2192647899_gshared (UnityAction_1_t3386977826 * __this, Color_t2020392075  ___arg00, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define UnityAction_1_BeginInvoke_m2192647899(__this, ___arg00, ___callback1, ___object2, method) ((  Il2CppObject * (*) (UnityAction_1_t3386977826 *, Color_t2020392075 , AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))UnityAction_1_BeginInvoke_m2192647899_gshared)(__this, ___arg00, ___callback1, ___object2, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::EndInvoke(System.IAsyncResult)
extern "C"  void UnityAction_1_EndInvoke_m2603848420_gshared (UnityAction_1_t3386977826 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define UnityAction_1_EndInvoke_m2603848420(__this, ___result0, method) ((  void (*) (UnityAction_1_t3386977826 *, Il2CppObject *, const MethodInfo*))UnityAction_1_EndInvoke_m2603848420_gshared)(__this, ___result0, method)
