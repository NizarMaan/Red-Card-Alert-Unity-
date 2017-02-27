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

// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t3443095683;
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

// System.Void UnityEngine.Events.UnityAction`1<System.Single>::.ctor(System.Object,System.IntPtr)
extern "C"  void UnityAction_1__ctor_m2172708761_gshared (UnityAction_1_t3443095683 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define UnityAction_1__ctor_m2172708761(__this, ___object0, ___method1, method) ((  void (*) (UnityAction_1_t3443095683 *, Il2CppObject *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m2172708761_gshared)(__this, ___object0, ___method1, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::Invoke(T0)
extern "C"  void UnityAction_1_Invoke_m2563206587_gshared (UnityAction_1_t3443095683 * __this, float ___arg00, const MethodInfo* method);
#define UnityAction_1_Invoke_m2563206587(__this, ___arg00, method) ((  void (*) (UnityAction_1_t3443095683 *, float, const MethodInfo*))UnityAction_1_Invoke_m2563206587_gshared)(__this, ___arg00, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Single>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * UnityAction_1_BeginInvoke_m4162767106_gshared (UnityAction_1_t3443095683 * __this, float ___arg00, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define UnityAction_1_BeginInvoke_m4162767106(__this, ___arg00, ___callback1, ___object2, method) ((  Il2CppObject * (*) (UnityAction_1_t3443095683 *, float, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))UnityAction_1_BeginInvoke_m4162767106_gshared)(__this, ___arg00, ___callback1, ___object2, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::EndInvoke(System.IAsyncResult)
extern "C"  void UnityAction_1_EndInvoke_m3175338521_gshared (UnityAction_1_t3443095683 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define UnityAction_1_EndInvoke_m3175338521(__this, ___result0, method) ((  void (*) (UnityAction_1_t3443095683 *, Il2CppObject *, const MethodInfo*))UnityAction_1_EndInvoke_m3175338521_gshared)(__this, ___result0, method)
