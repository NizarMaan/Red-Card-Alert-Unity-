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


#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Plane3727654732.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Ray2469606224.h"

// System.Void UnityEngine.Plane::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void Plane__ctor_m3187718367 (Plane_t3727654732 * __this, Vector3_t2243707580  ___inNormal0, Vector3_t2243707580  ___inPoint1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Plane::get_normal()
extern "C"  Vector3_t2243707580  Plane_get_normal_m1872443823 (Plane_t3727654732 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Plane::get_distance()
extern "C"  float Plane_get_distance_m1834776091 (Plane_t3727654732 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Plane::Raycast(UnityEngine.Ray,System.Single&)
extern "C"  bool Plane_Raycast_m2870142810 (Plane_t3727654732 * __this, Ray_t2469606224  ___ray0, float* ___enter1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
