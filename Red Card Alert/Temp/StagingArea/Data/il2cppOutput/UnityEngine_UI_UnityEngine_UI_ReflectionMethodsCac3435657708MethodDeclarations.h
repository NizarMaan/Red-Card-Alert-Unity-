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

// UnityEngine.UI.ReflectionMethodsCache/RaycastAllCallback
struct RaycastAllCallback_t3435657708;
// System.Object
struct Il2CppObject;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t1214023521;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "UnityEngine_UnityEngine_Ray2469606224.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void UnityEngine.UI.ReflectionMethodsCache/RaycastAllCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void RaycastAllCallback__ctor_m3281594834 (RaycastAllCallback_t3435657708 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.UI.ReflectionMethodsCache/RaycastAllCallback::Invoke(UnityEngine.Ray,System.Single,System.Int32)
extern "C"  RaycastHitU5BU5D_t1214023521* RaycastAllCallback_Invoke_m981876639 (RaycastAllCallback_t3435657708 * __this, Ray_t2469606224  ___r0, float ___f1, int32_t ___i2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UnityEngine.UI.ReflectionMethodsCache/RaycastAllCallback::BeginInvoke(UnityEngine.Ray,System.Single,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * RaycastAllCallback_BeginInvoke_m861412204 (RaycastAllCallback_t3435657708 * __this, Ray_t2469606224  ___r0, float ___f1, int32_t ___i2, AsyncCallback_t163412349 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.UI.ReflectionMethodsCache/RaycastAllCallback::EndInvoke(System.IAsyncResult)
extern "C"  RaycastHitU5BU5D_t1214023521* RaycastAllCallback_EndInvoke_m2007065444 (RaycastAllCallback_t3435657708 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
