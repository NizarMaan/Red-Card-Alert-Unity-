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
#include "UnityEngine_UnityEngine_Bounds3033363703.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void UnityEngine.Bounds::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void Bounds__ctor_m1202659404 (Bounds_t3033363703 * __this, Vector3_t2243707580  ___center0, Vector3_t2243707580  ___size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Bounds::GetHashCode()
extern "C"  int32_t Bounds_GetHashCode_m4284443179 (Bounds_t3033363703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::Equals(System.Object)
extern "C"  bool Bounds_Equals_m839506137 (Bounds_t3033363703 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::get_center()
extern "C"  Vector3_t2243707580  Bounds_get_center_m129401026 (Bounds_t3033363703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::set_center(UnityEngine.Vector3)
extern "C"  void Bounds_set_center_m2069004927 (Bounds_t3033363703 * __this, Vector3_t2243707580  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
extern "C"  Vector3_t2243707580  Bounds_get_size_m1728027642 (Bounds_t3033363703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::set_size(UnityEngine.Vector3)
extern "C"  void Bounds_set_size_m3943815629 (Bounds_t3033363703 * __this, Vector3_t2243707580  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::get_extents()
extern "C"  Vector3_t2243707580  Bounds_get_extents_m4077324178 (Bounds_t3033363703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::set_extents(UnityEngine.Vector3)
extern "C"  void Bounds_set_extents_m2829577033 (Bounds_t3033363703 * __this, Vector3_t2243707580  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::get_min()
extern "C"  Vector3_t2243707580  Bounds_get_min_m2405290441 (Bounds_t3033363703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::get_max()
extern "C"  Vector3_t2243707580  Bounds_get_max_m4247050707 (Bounds_t3033363703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::op_Equality(UnityEngine.Bounds,UnityEngine.Bounds)
extern "C"  bool Bounds_op_Equality_m2161830280 (Il2CppObject * __this /* static, unused */, Bounds_t3033363703  ___lhs0, Bounds_t3033363703  ___rhs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::op_Inequality(UnityEngine.Bounds,UnityEngine.Bounds)
extern "C"  bool Bounds_op_Inequality_m2315096783 (Il2CppObject * __this /* static, unused */, Bounds_t3033363703  ___lhs0, Bounds_t3033363703  ___rhs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::SetMinMax(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void Bounds_SetMinMax_m1523110422 (Bounds_t3033363703 * __this, Vector3_t2243707580  ___min0, Vector3_t2243707580  ___max1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::Encapsulate(UnityEngine.Vector3)
extern "C"  void Bounds_Encapsulate_m3688171368 (Bounds_t3033363703 * __this, Vector3_t2243707580  ___point0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Bounds::ToString()
extern "C"  String_t* Bounds_ToString_m1966597703 (Bounds_t3033363703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
