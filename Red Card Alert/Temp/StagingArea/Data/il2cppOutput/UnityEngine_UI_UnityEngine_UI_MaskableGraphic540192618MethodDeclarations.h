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

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t540192618;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t3778758259;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_UI_MaskableGraphic_Cull3778758259.h"
#include "UnityEngine_UnityEngine_Material193706927.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"

// System.Void UnityEngine.UI.MaskableGraphic::.ctor()
extern "C"  void MaskableGraphic__ctor_m1454660053 (MaskableGraphic_t540192618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::get_onCullStateChanged()
extern "C"  CullStateChangedEvent_t3778758259 * MaskableGraphic_get_onCullStateChanged_m3012302562 (MaskableGraphic_t540192618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskableGraphic::set_onCullStateChanged(UnityEngine.UI.MaskableGraphic/CullStateChangedEvent)
extern "C"  void MaskableGraphic_set_onCullStateChanged_m87987059 (MaskableGraphic_t540192618 * __this, CullStateChangedEvent_t3778758259 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.MaskableGraphic::get_maskable()
extern "C"  bool MaskableGraphic_get_maskable_m4135222746 (MaskableGraphic_t540192618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskableGraphic::set_maskable(System.Boolean)
extern "C"  void MaskableGraphic_set_maskable_m370947381 (MaskableGraphic_t540192618 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.UI.MaskableGraphic::GetModifiedMaterial(UnityEngine.Material)
extern "C"  Material_t193706927 * MaskableGraphic_GetModifiedMaterial_m1389843550 (MaskableGraphic_t540192618 * __this, Material_t193706927 * ___baseMaterial0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskableGraphic::Cull(UnityEngine.Rect,System.Boolean)
extern "C"  void MaskableGraphic_Cull_m3130802047 (MaskableGraphic_t540192618 * __this, Rect_t3681755626  ___clipRect0, bool ___validRect1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskableGraphic::UpdateCull(System.Boolean)
extern "C"  void MaskableGraphic_UpdateCull_m3420980261 (MaskableGraphic_t540192618 * __this, bool ___cull0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskableGraphic::SetClipRect(UnityEngine.Rect,System.Boolean)
extern "C"  void MaskableGraphic_SetClipRect_m3871029457 (MaskableGraphic_t540192618 * __this, Rect_t3681755626  ___clipRect0, bool ___validRect1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskableGraphic::OnEnable()
extern "C"  void MaskableGraphic_OnEnable_m694112877 (MaskableGraphic_t540192618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskableGraphic::OnDisable()
extern "C"  void MaskableGraphic_OnDisable_m2605143092 (MaskableGraphic_t540192618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskableGraphic::OnTransformParentChanged()
extern "C"  void MaskableGraphic_OnTransformParentChanged_m2569356350 (MaskableGraphic_t540192618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskableGraphic::ParentMaskStateChanged()
extern "C"  void MaskableGraphic_ParentMaskStateChanged_m3643747340 (MaskableGraphic_t540192618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskableGraphic::OnCanvasHierarchyChanged()
extern "C"  void MaskableGraphic_OnCanvasHierarchyChanged_m2012659245 (MaskableGraphic_t540192618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.UI.MaskableGraphic::get_rootCanvasRect()
extern "C"  Rect_t3681755626  MaskableGraphic_get_rootCanvasRect_m2245431682 (MaskableGraphic_t540192618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskableGraphic::UpdateClipParent()
extern "C"  void MaskableGraphic_UpdateClipParent_m3533760836 (MaskableGraphic_t540192618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskableGraphic::RecalculateClipping()
extern "C"  void MaskableGraphic_RecalculateClipping_m3715887610 (MaskableGraphic_t540192618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskableGraphic::RecalculateMasking()
extern "C"  void MaskableGraphic_RecalculateMasking_m3836406258 (MaskableGraphic_t540192618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.MaskableGraphic::UnityEngine.UI.IClippable.get_gameObject()
extern "C"  GameObject_t1756533147 * MaskableGraphic_UnityEngine_UI_IClippable_get_gameObject_m954171032 (MaskableGraphic_t540192618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
