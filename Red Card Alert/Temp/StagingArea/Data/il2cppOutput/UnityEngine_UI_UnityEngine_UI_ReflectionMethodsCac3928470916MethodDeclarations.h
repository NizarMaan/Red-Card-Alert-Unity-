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

// UnityEngine.UI.ReflectionMethodsCache/Raycast3DCallback
struct Raycast3DCallback_t3928470916;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "UnityEngine_UnityEngine_Ray2469606224.h"
#include "UnityEngine_UnityEngine_RaycastHit87180320.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void UnityEngine.UI.ReflectionMethodsCache/Raycast3DCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void Raycast3DCallback__ctor_m1572862580 (Raycast3DCallback_t3928470916 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ReflectionMethodsCache/Raycast3DCallback::Invoke(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C"  bool Raycast3DCallback_Invoke_m2271859924 (Raycast3DCallback_t3928470916 * __this, Ray_t2469606224  ___r0, RaycastHit_t87180320 * ___hit1, float ___f2, int32_t ___i3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UnityEngine.UI.ReflectionMethodsCache/Raycast3DCallback::BeginInvoke(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Raycast3DCallback_BeginInvoke_m3028685017 (Raycast3DCallback_t3928470916 * __this, Ray_t2469606224  ___r0, RaycastHit_t87180320 * ___hit1, float ___f2, int32_t ___i3, AsyncCallback_t163412349 * ___callback4, Il2CppObject * ___object5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ReflectionMethodsCache/Raycast3DCallback::EndInvoke(UnityEngine.RaycastHit&,System.IAsyncResult)
extern "C"  bool Raycast3DCallback_EndInvoke_m3234280377 (Raycast3DCallback_t3928470916 * __this, RaycastHit_t87180320 * ___hit0, Il2CppObject * ___result1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
