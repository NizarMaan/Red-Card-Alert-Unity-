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

// UnityEngine.UI.LayoutGroup
struct LayoutGroup_t3962498969;
// UnityEngine.RectOffset
struct RectOffset_t3387826427;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// System.Collections.Generic.List`1<UnityEngine.RectTransform>
struct List_1_t2719087314;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RectOffset3387826427.h"
#include "UnityEngine_UnityEngine_TextAnchor112990806.h"
#include "UnityEngine_UnityEngine_RectTransform3349966182.h"

// System.Void UnityEngine.UI.LayoutGroup::.ctor()
extern "C"  void LayoutGroup__ctor_m3071146208 (LayoutGroup_t3962498969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.UI.LayoutGroup::get_padding()
extern "C"  RectOffset_t3387826427 * LayoutGroup_get_padding_m1653511445 (LayoutGroup_t3962498969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::set_padding(UnityEngine.RectOffset)
extern "C"  void LayoutGroup_set_padding_m3084511076 (LayoutGroup_t3962498969 * __this, RectOffset_t3387826427 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextAnchor UnityEngine.UI.LayoutGroup::get_childAlignment()
extern "C"  int32_t LayoutGroup_get_childAlignment_m496467742 (LayoutGroup_t3962498969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::set_childAlignment(UnityEngine.TextAnchor)
extern "C"  void LayoutGroup_set_childAlignment_m2866109247 (LayoutGroup_t3962498969 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.LayoutGroup::get_rectTransform()
extern "C"  RectTransform_t3349966182 * LayoutGroup_get_rectTransform_m3026223669 (LayoutGroup_t3962498969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.RectTransform> UnityEngine.UI.LayoutGroup::get_rectChildren()
extern "C"  List_1_t2719087314 * LayoutGroup_get_rectChildren_m3126219228 (LayoutGroup_t3962498969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::CalculateLayoutInputHorizontal()
extern "C"  void LayoutGroup_CalculateLayoutInputHorizontal_m212315684 (LayoutGroup_t3962498969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::get_minWidth()
extern "C"  float LayoutGroup_get_minWidth_m4111745491 (LayoutGroup_t3962498969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::get_preferredWidth()
extern "C"  float LayoutGroup_get_preferredWidth_m3571965798 (LayoutGroup_t3962498969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::get_flexibleWidth()
extern "C"  float LayoutGroup_get_flexibleWidth_m2184969652 (LayoutGroup_t3962498969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::get_minHeight()
extern "C"  float LayoutGroup_get_minHeight_m2270010946 (LayoutGroup_t3962498969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::get_preferredHeight()
extern "C"  float LayoutGroup_get_preferredHeight_m3901163825 (LayoutGroup_t3962498969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::get_flexibleHeight()
extern "C"  float LayoutGroup_get_flexibleHeight_m1179676157 (LayoutGroup_t3962498969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.LayoutGroup::get_layoutPriority()
extern "C"  int32_t LayoutGroup_get_layoutPriority_m341239179 (LayoutGroup_t3962498969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::OnEnable()
extern "C"  void LayoutGroup_OnEnable_m2827489872 (LayoutGroup_t3962498969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::OnDisable()
extern "C"  void LayoutGroup_OnDisable_m110368921 (LayoutGroup_t3962498969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::OnDidApplyAnimationProperties()
extern "C"  void LayoutGroup_OnDidApplyAnimationProperties_m3910136911 (LayoutGroup_t3962498969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::GetTotalMinSize(System.Int32)
extern "C"  float LayoutGroup_GetTotalMinSize_m2600700952 (LayoutGroup_t3962498969 * __this, int32_t ___axis0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::GetTotalPreferredSize(System.Int32)
extern "C"  float LayoutGroup_GetTotalPreferredSize_m1139568599 (LayoutGroup_t3962498969 * __this, int32_t ___axis0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::GetTotalFlexibleSize(System.Int32)
extern "C"  float LayoutGroup_GetTotalFlexibleSize_m906156187 (LayoutGroup_t3962498969 * __this, int32_t ___axis0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::GetStartOffset(System.Int32,System.Single)
extern "C"  float LayoutGroup_GetStartOffset_m3380559173 (LayoutGroup_t3962498969 * __this, int32_t ___axis0, float ___requiredSpaceWithoutPadding1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::GetAlignmentOnAxis(System.Int32)
extern "C"  float LayoutGroup_GetAlignmentOnAxis_m1783063916 (LayoutGroup_t3962498969 * __this, int32_t ___axis0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::SetLayoutInputForAxis(System.Single,System.Single,System.Single,System.Int32)
extern "C"  void LayoutGroup_SetLayoutInputForAxis_m239459768 (LayoutGroup_t3962498969 * __this, float ___totalMin0, float ___totalPreferred1, float ___totalFlexible2, int32_t ___axis3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::SetChildAlongAxis(UnityEngine.RectTransform,System.Int32,System.Single)
extern "C"  void LayoutGroup_SetChildAlongAxis_m1615929339 (LayoutGroup_t3962498969 * __this, RectTransform_t3349966182 * ___rect0, int32_t ___axis1, float ___pos2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::SetChildAlongAxis(UnityEngine.RectTransform,System.Int32,System.Single,System.Single)
extern "C"  void LayoutGroup_SetChildAlongAxis_m2732017156 (LayoutGroup_t3962498969 * __this, RectTransform_t3349966182 * ___rect0, int32_t ___axis1, float ___pos2, float ___size3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutGroup::get_isRootLayoutGroup()
extern "C"  bool LayoutGroup_get_isRootLayoutGroup_m4290112166 (LayoutGroup_t3962498969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::OnRectTransformDimensionsChange()
extern "C"  void LayoutGroup_OnRectTransformDimensionsChange_m4072843968 (LayoutGroup_t3962498969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::OnTransformChildrenChanged()
extern "C"  void LayoutGroup_OnTransformChildrenChanged_m2182477150 (LayoutGroup_t3962498969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::SetDirty()
extern "C"  void LayoutGroup_SetDirty_m3600378958 (LayoutGroup_t3962498969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.UI.LayoutGroup::DelayedSetDirty(UnityEngine.RectTransform)
extern "C"  Il2CppObject * LayoutGroup_DelayedSetDirty_m4276695617 (LayoutGroup_t3962498969 * __this, RectTransform_t3349966182 * ___rectTransform0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
