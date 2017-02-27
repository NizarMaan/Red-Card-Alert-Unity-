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

// UnityEngine.Display
struct Display_t3666191348;
// System.IntPtr[]
struct IntPtrU5BU5D_t169632028;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Void UnityEngine.Display::.ctor()
extern "C"  void Display__ctor_m2167115811 (Display_t3666191348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::.ctor(System.IntPtr)
extern "C"  void Display__ctor_m563295973 (Display_t3666191348 * __this, IntPtr_t ___nativeDisplay0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Display::get_renderingWidth()
extern "C"  int32_t Display_get_renderingWidth_m2127568366 (Display_t3666191348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Display::get_renderingHeight()
extern "C"  int32_t Display_get_renderingHeight_m3408216949 (Display_t3666191348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Display::get_systemWidth()
extern "C"  int32_t Display_get_systemWidth_m957394103 (Display_t3666191348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Display::get_systemHeight()
extern "C"  int32_t Display_get_systemHeight_m3377672024 (Display_t3666191348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Display::RelativeMouseAt(UnityEngine.Vector3)
extern "C"  Vector3_t2243707580  Display_RelativeMouseAt_m3983394520 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___inputMouseCoordinates0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::RecreateDisplayList(System.IntPtr[])
extern "C"  void Display_RecreateDisplayList_m3412638488 (Il2CppObject * __this /* static, unused */, IntPtrU5BU5D_t169632028* ___nativeDisplay0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::FireDisplaysUpdated()
extern "C"  void Display_FireDisplaysUpdated_m3557250167 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::GetSystemExtImpl(System.IntPtr,System.Int32&,System.Int32&)
extern "C"  void Display_GetSystemExtImpl_m2990495607 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeDisplay0, int32_t* ___w1, int32_t* ___h2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::GetRenderingExtImpl(System.IntPtr,System.Int32&,System.Int32&)
extern "C"  void Display_GetRenderingExtImpl_m3739199112 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeDisplay0, int32_t* ___w1, int32_t* ___h2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Display::RelativeMouseAtImpl(System.Int32,System.Int32,System.Int32&,System.Int32&)
extern "C"  int32_t Display_RelativeMouseAtImpl_m1974885337 (Il2CppObject * __this /* static, unused */, int32_t ___x0, int32_t ___y1, int32_t* ___rx2, int32_t* ___ry3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::.cctor()
extern "C"  void Display__cctor_m7440126 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
