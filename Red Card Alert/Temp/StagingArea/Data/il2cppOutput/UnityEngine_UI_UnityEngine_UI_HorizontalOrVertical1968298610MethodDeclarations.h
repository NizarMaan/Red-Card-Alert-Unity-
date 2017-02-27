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

// UnityEngine.UI.HorizontalOrVerticalLayoutGroup
struct HorizontalOrVerticalLayoutGroup_t1968298610;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RectTransform3349966182.h"

// System.Void UnityEngine.UI.HorizontalOrVerticalLayoutGroup::.ctor()
extern "C"  void HorizontalOrVerticalLayoutGroup__ctor_m653248149 (HorizontalOrVerticalLayoutGroup_t1968298610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.HorizontalOrVerticalLayoutGroup::get_spacing()
extern "C"  float HorizontalOrVerticalLayoutGroup_get_spacing_m2859152439 (HorizontalOrVerticalLayoutGroup_t1968298610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.HorizontalOrVerticalLayoutGroup::set_spacing(System.Single)
extern "C"  void HorizontalOrVerticalLayoutGroup_set_spacing_m3025554466 (HorizontalOrVerticalLayoutGroup_t1968298610 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::get_childForceExpandWidth()
extern "C"  bool HorizontalOrVerticalLayoutGroup_get_childForceExpandWidth_m227100883 (HorizontalOrVerticalLayoutGroup_t1968298610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.HorizontalOrVerticalLayoutGroup::set_childForceExpandWidth(System.Boolean)
extern "C"  void HorizontalOrVerticalLayoutGroup_set_childForceExpandWidth_m1140293254 (HorizontalOrVerticalLayoutGroup_t1968298610 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::get_childForceExpandHeight()
extern "C"  bool HorizontalOrVerticalLayoutGroup_get_childForceExpandHeight_m1996274628 (HorizontalOrVerticalLayoutGroup_t1968298610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.HorizontalOrVerticalLayoutGroup::set_childForceExpandHeight(System.Boolean)
extern "C"  void HorizontalOrVerticalLayoutGroup_set_childForceExpandHeight_m2651098941 (HorizontalOrVerticalLayoutGroup_t1968298610 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::get_childControlWidth()
extern "C"  bool HorizontalOrVerticalLayoutGroup_get_childControlWidth_m1500349643 (HorizontalOrVerticalLayoutGroup_t1968298610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.HorizontalOrVerticalLayoutGroup::set_childControlWidth(System.Boolean)
extern "C"  void HorizontalOrVerticalLayoutGroup_set_childControlWidth_m4209477792 (HorizontalOrVerticalLayoutGroup_t1968298610 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::get_childControlHeight()
extern "C"  bool HorizontalOrVerticalLayoutGroup_get_childControlHeight_m2959164442 (HorizontalOrVerticalLayoutGroup_t1968298610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.HorizontalOrVerticalLayoutGroup::set_childControlHeight(System.Boolean)
extern "C"  void HorizontalOrVerticalLayoutGroup_set_childControlHeight_m4186773425 (HorizontalOrVerticalLayoutGroup_t1968298610 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.HorizontalOrVerticalLayoutGroup::CalcAlongAxis(System.Int32,System.Boolean)
extern "C"  void HorizontalOrVerticalLayoutGroup_CalcAlongAxis_m309111836 (HorizontalOrVerticalLayoutGroup_t1968298610 * __this, int32_t ___axis0, bool ___isVertical1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.HorizontalOrVerticalLayoutGroup::SetChildrenAlongAxis(System.Int32,System.Boolean)
extern "C"  void HorizontalOrVerticalLayoutGroup_SetChildrenAlongAxis_m671331202 (HorizontalOrVerticalLayoutGroup_t1968298610 * __this, int32_t ___axis0, bool ___isVertical1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.HorizontalOrVerticalLayoutGroup::GetChildSizes(UnityEngine.RectTransform,System.Int32,System.Boolean,System.Boolean,System.Single&,System.Single&,System.Single&)
extern "C"  void HorizontalOrVerticalLayoutGroup_GetChildSizes_m408010150 (HorizontalOrVerticalLayoutGroup_t1968298610 * __this, RectTransform_t3349966182 * ___child0, int32_t ___axis1, bool ___controlSize2, bool ___childForceExpand3, float* ___min4, float* ___preferred5, float* ___flexible6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
