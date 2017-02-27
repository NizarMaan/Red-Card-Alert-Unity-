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

// UnityEngine.Material
struct Material_t193706927;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Material193706927.h"
#include "UnityEngine_UnityEngine_Rendering_StencilOp2936374925.h"
#include "UnityEngine_UnityEngine_Rendering_CompareFunction457874581.h"
#include "UnityEngine_UnityEngine_Rendering_ColorWriteMask926634530.h"

// UnityEngine.Material UnityEngine.UI.StencilMaterial::Add(UnityEngine.Material,System.Int32)
extern "C"  Material_t193706927 * StencilMaterial_Add_m1745413071 (Il2CppObject * __this /* static, unused */, Material_t193706927 * ___baseMat0, int32_t ___stencilID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.UI.StencilMaterial::Add(UnityEngine.Material,System.Int32,UnityEngine.Rendering.StencilOp,UnityEngine.Rendering.CompareFunction,UnityEngine.Rendering.ColorWriteMask)
extern "C"  Material_t193706927 * StencilMaterial_Add_m2540251346 (Il2CppObject * __this /* static, unused */, Material_t193706927 * ___baseMat0, int32_t ___stencilID1, int32_t ___operation2, int32_t ___compareFunction3, int32_t ___colorWriteMask4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.UI.StencilMaterial::Add(UnityEngine.Material,System.Int32,UnityEngine.Rendering.StencilOp,UnityEngine.Rendering.CompareFunction,UnityEngine.Rendering.ColorWriteMask,System.Int32,System.Int32)
extern "C"  Material_t193706927 * StencilMaterial_Add_m3307959964 (Il2CppObject * __this /* static, unused */, Material_t193706927 * ___baseMat0, int32_t ___stencilID1, int32_t ___operation2, int32_t ___compareFunction3, int32_t ___colorWriteMask4, int32_t ___readMask5, int32_t ___writeMask6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.StencilMaterial::Remove(UnityEngine.Material)
extern "C"  void StencilMaterial_Remove_m3616154292 (Il2CppObject * __this /* static, unused */, Material_t193706927 * ___customMat0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.StencilMaterial::ClearAll()
extern "C"  void StencilMaterial_ClearAll_m1372779118 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.StencilMaterial::.cctor()
extern "C"  void StencilMaterial__cctor_m2963056855 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
