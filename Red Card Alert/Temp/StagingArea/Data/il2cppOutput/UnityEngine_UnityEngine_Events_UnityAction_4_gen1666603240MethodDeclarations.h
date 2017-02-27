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

// UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>
struct UnityAction_4_t1666603240;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void UnityAction_4__ctor_m2053485839_gshared (UnityAction_4_t1666603240 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define UnityAction_4__ctor_m2053485839(__this, ___object0, ___method1, method) ((  void (*) (UnityAction_4_t1666603240 *, Il2CppObject *, IntPtr_t, const MethodInfo*))UnityAction_4__ctor_m2053485839_gshared)(__this, ___object0, ___method1, method)
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::Invoke(T0,T1,T2,T3)
extern "C"  void UnityAction_4_Invoke_m3312096275_gshared (UnityAction_4_t1666603240 * __this, Il2CppObject * ___arg00, Il2CppObject * ___arg11, Il2CppObject * ___arg22, Il2CppObject * ___arg33, const MethodInfo* method);
#define UnityAction_4_Invoke_m3312096275(__this, ___arg00, ___arg11, ___arg22, ___arg33, method) ((  void (*) (UnityAction_4_t1666603240 *, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, const MethodInfo*))UnityAction_4_Invoke_m3312096275_gshared)(__this, ___arg00, ___arg11, ___arg22, ___arg33, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T0,T1,T2,T3,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * UnityAction_4_BeginInvoke_m3427746322_gshared (UnityAction_4_t1666603240 * __this, Il2CppObject * ___arg00, Il2CppObject * ___arg11, Il2CppObject * ___arg22, Il2CppObject * ___arg33, AsyncCallback_t163412349 * ___callback4, Il2CppObject * ___object5, const MethodInfo* method);
#define UnityAction_4_BeginInvoke_m3427746322(__this, ___arg00, ___arg11, ___arg22, ___arg33, ___callback4, ___object5, method) ((  Il2CppObject * (*) (UnityAction_4_t1666603240 *, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))UnityAction_4_BeginInvoke_m3427746322_gshared)(__this, ___arg00, ___arg11, ___arg22, ___arg33, ___callback4, ___object5, method)
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  void UnityAction_4_EndInvoke_m3887055469_gshared (UnityAction_4_t1666603240 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define UnityAction_4_EndInvoke_m3887055469(__this, ___result0, method) ((  void (*) (UnityAction_4_t1666603240 *, Il2CppObject *, const MethodInfo*))UnityAction_4_EndInvoke_m3887055469_gshared)(__this, ___result0, method)
