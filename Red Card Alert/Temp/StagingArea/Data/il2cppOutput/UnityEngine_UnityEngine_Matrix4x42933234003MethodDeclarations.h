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

// System.Object
struct Il2CppObject;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"
#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector42243707581.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Single UnityEngine.Matrix4x4::get_Item(System.Int32,System.Int32)
extern "C"  float Matrix4x4_get_Item_m312280350 (Matrix4x4_t2933234003 * __this, int32_t ___row0, int32_t ___column1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Matrix4x4::get_Item(System.Int32)
extern "C"  float Matrix4x4_get_Item_m3317262185 (Matrix4x4_t2933234003 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Matrix4x4::GetHashCode()
extern "C"  int32_t Matrix4x4_GetHashCode_m3649708037 (Matrix4x4_t2933234003 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Matrix4x4::Equals(System.Object)
extern "C"  bool Matrix4x4_Equals_m1321236479 (Matrix4x4_t2933234003 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Matrix4x4::GetColumn(System.Int32)
extern "C"  Vector4_t2243707581  Matrix4x4_GetColumn_m1367096730 (Matrix4x4_t2933234003 * __this, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint3x4(UnityEngine.Vector3)
extern "C"  Vector3_t2243707580  Matrix4x4_MultiplyPoint3x4_m1007952212 (Matrix4x4_t2933234003 * __this, Vector3_t2243707580  ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Matrix4x4::ToString()
extern "C"  String_t* Matrix4x4_ToString_m1982554457 (Matrix4x4_t2933234003 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
