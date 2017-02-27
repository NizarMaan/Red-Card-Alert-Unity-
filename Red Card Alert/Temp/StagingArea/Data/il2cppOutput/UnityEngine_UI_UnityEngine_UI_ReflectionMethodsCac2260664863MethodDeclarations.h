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

// UnityEngine.UI.ReflectionMethodsCache/Raycast2DCallback
struct Raycast2DCallback_t2260664863;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "UnityEngine_UnityEngine_RaycastHit2D4063908774.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void UnityEngine.UI.ReflectionMethodsCache/Raycast2DCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void Raycast2DCallback__ctor_m652601653 (Raycast2DCallback_t2260664863 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D UnityEngine.UI.ReflectionMethodsCache/Raycast2DCallback::Invoke(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
extern "C"  RaycastHit2D_t4063908774  Raycast2DCallback_Invoke_m3172972373 (Raycast2DCallback_t2260664863 * __this, Vector2_t2243707579  ___p10, Vector2_t2243707579  ___p21, float ___f2, int32_t ___i3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UnityEngine.UI.ReflectionMethodsCache/Raycast2DCallback::BeginInvoke(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Raycast2DCallback_BeginInvoke_m4219004388 (Raycast2DCallback_t2260664863 * __this, Vector2_t2243707579  ___p10, Vector2_t2243707579  ___p21, float ___f2, int32_t ___i3, AsyncCallback_t163412349 * ___callback4, Il2CppObject * ___object5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D UnityEngine.UI.ReflectionMethodsCache/Raycast2DCallback::EndInvoke(System.IAsyncResult)
extern "C"  RaycastHit2D_t4063908774  Raycast2DCallback_EndInvoke_m780407171 (Raycast2DCallback_t2260664863 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
