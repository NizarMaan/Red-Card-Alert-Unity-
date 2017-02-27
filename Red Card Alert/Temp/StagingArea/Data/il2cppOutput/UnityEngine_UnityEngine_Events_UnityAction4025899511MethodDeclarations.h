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

// UnityEngine.Events.UnityAction
struct UnityAction_t4025899511;
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

// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
extern "C"  void UnityAction__ctor_m2649891629 (UnityAction_t4025899511 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityAction::Invoke()
extern "C"  void UnityAction_Invoke_m3703026869 (UnityAction_t4025899511 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UnityEngine.Events.UnityAction::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * UnityAction_BeginInvoke_m407736228 (UnityAction_t4025899511 * __this, AsyncCallback_t163412349 * ___callback0, Il2CppObject * ___object1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityAction::EndInvoke(System.IAsyncResult)
extern "C"  void UnityAction_EndInvoke_m2252669283 (UnityAction_t4025899511 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
