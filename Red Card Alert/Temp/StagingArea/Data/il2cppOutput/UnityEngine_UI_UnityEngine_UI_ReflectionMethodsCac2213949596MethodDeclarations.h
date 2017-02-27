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

// UnityEngine.UI.ReflectionMethodsCache/GetRayIntersectionAllCallback
struct GetRayIntersectionAllCallback_t2213949596;
// System.Object
struct Il2CppObject;
// UnityEngine.RaycastHit2D[]
struct RaycastHit2DU5BU5D_t4176517891;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "UnityEngine_UnityEngine_Ray2469606224.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void UnityEngine.UI.ReflectionMethodsCache/GetRayIntersectionAllCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void GetRayIntersectionAllCallback__ctor_m958408444 (GetRayIntersectionAllCallback_t2213949596 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D[] UnityEngine.UI.ReflectionMethodsCache/GetRayIntersectionAllCallback::Invoke(UnityEngine.Ray,System.Single,System.Int32)
extern "C"  RaycastHit2DU5BU5D_t4176517891* GetRayIntersectionAllCallback_Invoke_m3406736891 (GetRayIntersectionAllCallback_t2213949596 * __this, Ray_t2469606224  ___r0, float ___f1, int32_t ___i2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UnityEngine.UI.ReflectionMethodsCache/GetRayIntersectionAllCallback::BeginInvoke(UnityEngine.Ray,System.Single,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * GetRayIntersectionAllCallback_BeginInvoke_m1307032462 (GetRayIntersectionAllCallback_t2213949596 * __this, Ray_t2469606224  ___r0, float ___f1, int32_t ___i2, AsyncCallback_t163412349 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D[] UnityEngine.UI.ReflectionMethodsCache/GetRayIntersectionAllCallback::EndInvoke(System.IAsyncResult)
extern "C"  RaycastHit2DU5BU5D_t4176517891* GetRayIntersectionAllCallback_EndInvoke_m3877463464 (GetRayIntersectionAllCallback_t2213949596 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
