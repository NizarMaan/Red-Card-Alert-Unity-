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

// UnityEngine.Renderer
struct Renderer_t257310565;
// UnityEngine.Material
struct Material_t193706927;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
extern "C"  void Renderer_set_enabled_m142717579 (Renderer_t257310565 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Renderer::get_material()
extern "C"  Material_t193706927 * Renderer_get_material_m2553789785 (Renderer_t257310565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::set_sortingLayerName(System.String)
extern "C"  void Renderer_set_sortingLayerName_m3726155509 (Renderer_t257310565 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Renderer::get_sortingLayerID()
extern "C"  int32_t Renderer_get_sortingLayerID_m2403577271 (Renderer_t257310565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Renderer::get_sortingOrder()
extern "C"  int32_t Renderer_get_sortingOrder_m1544525007 (Renderer_t257310565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::set_sortingOrder(System.Int32)
extern "C"  void Renderer_set_sortingOrder_m809829562 (Renderer_t257310565 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
