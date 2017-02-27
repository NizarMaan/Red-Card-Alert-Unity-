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

// UnityEngine.UI.ClipperRegistry
struct ClipperRegistry_t1349564894;
// UnityEngine.UI.IClipper
struct IClipper_t900477982;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.ClipperRegistry::.ctor()
extern "C"  void ClipperRegistry__ctor_m3214473537 (ClipperRegistry_t1349564894 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.ClipperRegistry UnityEngine.UI.ClipperRegistry::get_instance()
extern "C"  ClipperRegistry_t1349564894 * ClipperRegistry_get_instance_m2127642875 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ClipperRegistry::Cull()
extern "C"  void ClipperRegistry_Cull_m594384023 (ClipperRegistry_t1349564894 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ClipperRegistry::Register(UnityEngine.UI.IClipper)
extern "C"  void ClipperRegistry_Register_m582125837 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ClipperRegistry::Unregister(UnityEngine.UI.IClipper)
extern "C"  void ClipperRegistry_Unregister_m2938209708 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
