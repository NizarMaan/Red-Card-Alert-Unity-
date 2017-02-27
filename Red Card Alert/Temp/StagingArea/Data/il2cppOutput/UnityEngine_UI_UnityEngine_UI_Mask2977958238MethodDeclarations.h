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

// UnityEngine.UI.Mask
struct Mask_t2977958238;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// UnityEngine.UI.Graphic
struct Graphic_t2426225576;
// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.Material
struct Material_t193706927;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"
#include "UnityEngine_UnityEngine_Material193706927.h"

// System.Void UnityEngine.UI.Mask::.ctor()
extern "C"  void Mask__ctor_m1716732261 (Mask_t2977958238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.Mask::get_rectTransform()
extern "C"  RectTransform_t3349966182 * Mask_get_rectTransform_m3304369086 (Mask_t2977958238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Mask::get_showMaskGraphic()
extern "C"  bool Mask_get_showMaskGraphic_m916796405 (Mask_t2977958238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Mask::set_showMaskGraphic(System.Boolean)
extern "C"  void Mask_set_showMaskGraphic_m2985320778 (Mask_t2977958238 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Graphic UnityEngine.UI.Mask::get_graphic()
extern "C"  Graphic_t2426225576 * Mask_get_graphic_m775949552 (Mask_t2977958238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Mask::MaskEnabled()
extern "C"  bool Mask_MaskEnabled_m2584190482 (Mask_t2977958238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Mask::OnSiblingGraphicEnabledDisabled()
extern "C"  void Mask_OnSiblingGraphicEnabledDisabled_m865494155 (Mask_t2977958238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Mask::OnEnable()
extern "C"  void Mask_OnEnable_m501850981 (Mask_t2977958238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Mask::OnDisable()
extern "C"  void Mask_OnDisable_m2648774416 (Mask_t2977958238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Mask::IsRaycastLocationValid(UnityEngine.Vector2,UnityEngine.Camera)
extern "C"  bool Mask_IsRaycastLocationValid_m62488857 (Mask_t2977958238 * __this, Vector2_t2243707579  ___sp0, Camera_t189460977 * ___eventCamera1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.UI.Mask::GetModifiedMaterial(UnityEngine.Material)
extern "C"  Material_t193706927 * Mask_GetModifiedMaterial_m99213640 (Mask_t2977958238 * __this, Material_t193706927 * ___baseMaterial0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
