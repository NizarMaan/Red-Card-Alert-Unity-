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

// UnityEngine.UI.ScrollRect
struct ScrollRect_t1199013257;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// UnityEngine.UI.Scrollbar
struct Scrollbar_t3248359358;
// UnityEngine.UI.ScrollRect/ScrollRectEvent
struct ScrollRectEvent_t3529018992;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1599784723;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RectTransform3349966182.h"
#include "UnityEngine_UI_UnityEngine_UI_ScrollRect_MovementTy905360158.h"
#include "UnityEngine_UI_UnityEngine_UI_Scrollbar3248359358.h"
#include "UnityEngine_UI_UnityEngine_UI_ScrollRect_Scrollbar3834843475.h"
#include "UnityEngine_UI_UnityEngine_UI_ScrollRect_ScrollRec3529018992.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate1528800019.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve1599784723.h"
#include "UnityEngine_UnityEngine_Bounds3033363703.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"

// System.Void UnityEngine.UI.ScrollRect::.ctor()
extern "C"  void ScrollRect__ctor_m2760636366 (ScrollRect_t1199013257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::get_content()
extern "C"  RectTransform_t3349966182 * ScrollRect_get_content_m1116544752 (ScrollRect_t1199013257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_content(UnityEngine.RectTransform)
extern "C"  void ScrollRect_set_content_m1046034367 (ScrollRect_t1199013257 * __this, RectTransform_t3349966182 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ScrollRect::get_horizontal()
extern "C"  bool ScrollRect_get_horizontal_m2408340743 (ScrollRect_t1199013257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_horizontal(System.Boolean)
extern "C"  void ScrollRect_set_horizontal_m3740662372 (ScrollRect_t1199013257 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ScrollRect::get_vertical()
extern "C"  bool ScrollRect_get_vertical_m3957330783 (ScrollRect_t1199013257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_vertical(System.Boolean)
extern "C"  void ScrollRect_set_vertical_m1010550418 (ScrollRect_t1199013257 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.ScrollRect/MovementType UnityEngine.UI.ScrollRect::get_movementType()
extern "C"  int32_t ScrollRect_get_movementType_m1025861213 (ScrollRect_t1199013257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_movementType(UnityEngine.UI.ScrollRect/MovementType)
extern "C"  void ScrollRect_set_movementType_m3292965850 (ScrollRect_t1199013257 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_elasticity()
extern "C"  float ScrollRect_get_elasticity_m3987376518 (ScrollRect_t1199013257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_elasticity(System.Single)
extern "C"  void ScrollRect_set_elasticity_m4144797413 (ScrollRect_t1199013257 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ScrollRect::get_inertia()
extern "C"  bool ScrollRect_get_inertia_m1220046273 (ScrollRect_t1199013257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_inertia(System.Boolean)
extern "C"  void ScrollRect_set_inertia_m2575649134 (ScrollRect_t1199013257 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_decelerationRate()
extern "C"  float ScrollRect_get_decelerationRate_m1979153358 (ScrollRect_t1199013257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_decelerationRate(System.Single)
extern "C"  void ScrollRect_set_decelerationRate_m3237363647 (ScrollRect_t1199013257 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_scrollSensitivity()
extern "C"  float ScrollRect_get_scrollSensitivity_m1160815603 (ScrollRect_t1199013257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_scrollSensitivity(System.Single)
extern "C"  void ScrollRect_set_scrollSensitivity_m1818737642 (ScrollRect_t1199013257 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::get_viewport()
extern "C"  RectTransform_t3349966182 * ScrollRect_get_viewport_m3177057249 (ScrollRect_t1199013257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_viewport(UnityEngine.RectTransform)
extern "C"  void ScrollRect_set_viewport_m323693490 (ScrollRect_t1199013257 * __this, RectTransform_t3349966182 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::get_horizontalScrollbar()
extern "C"  Scrollbar_t3248359358 * ScrollRect_get_horizontalScrollbar_m4261690441 (ScrollRect_t1199013257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_horizontalScrollbar(UnityEngine.UI.Scrollbar)
extern "C"  void ScrollRect_set_horizontalScrollbar_m552664892 (ScrollRect_t1199013257 * __this, Scrollbar_t3248359358 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::get_verticalScrollbar()
extern "C"  Scrollbar_t3248359358 * ScrollRect_get_verticalScrollbar_m2455612493 (ScrollRect_t1199013257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_verticalScrollbar(UnityEngine.UI.Scrollbar)
extern "C"  void ScrollRect_set_verticalScrollbar_m2903688658 (ScrollRect_t1199013257 * __this, Scrollbar_t3248359358 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.ScrollRect/ScrollbarVisibility UnityEngine.UI.ScrollRect::get_horizontalScrollbarVisibility()
extern "C"  int32_t ScrollRect_get_horizontalScrollbarVisibility_m4152068235 (ScrollRect_t1199013257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_horizontalScrollbarVisibility(UnityEngine.UI.ScrollRect/ScrollbarVisibility)
extern "C"  void ScrollRect_set_horizontalScrollbarVisibility_m3790647510 (ScrollRect_t1199013257 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.ScrollRect/ScrollbarVisibility UnityEngine.UI.ScrollRect::get_verticalScrollbarVisibility()
extern "C"  int32_t ScrollRect_get_verticalScrollbarVisibility_m2829757187 (ScrollRect_t1199013257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_verticalScrollbarVisibility(UnityEngine.UI.ScrollRect/ScrollbarVisibility)
extern "C"  void ScrollRect_set_verticalScrollbarVisibility_m2424788384 (ScrollRect_t1199013257 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_horizontalScrollbarSpacing()
extern "C"  float ScrollRect_get_horizontalScrollbarSpacing_m2466213724 (ScrollRect_t1199013257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_horizontalScrollbarSpacing(System.Single)
extern "C"  void ScrollRect_set_horizontalScrollbarSpacing_m2029313035 (ScrollRect_t1199013257 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_verticalScrollbarSpacing()
extern "C"  float ScrollRect_get_verticalScrollbarSpacing_m793718754 (ScrollRect_t1199013257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_verticalScrollbarSpacing(System.Single)
extern "C"  void ScrollRect_set_verticalScrollbarSpacing_m2356851539 (ScrollRect_t1199013257 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.ScrollRect/ScrollRectEvent UnityEngine.UI.ScrollRect::get_onValueChanged()
extern "C"  ScrollRectEvent_t3529018992 * ScrollRect_get_onValueChanged_m2013130908 (ScrollRect_t1199013257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_onValueChanged(UnityEngine.UI.ScrollRect/ScrollRectEvent)
extern "C"  void ScrollRect_set_onValueChanged_m3957749575 (ScrollRect_t1199013257 * __this, ScrollRectEvent_t3529018992 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::get_viewRect()
extern "C"  RectTransform_t3349966182 * ScrollRect_get_viewRect_m2663817630 (ScrollRect_t1199013257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::get_velocity()
extern "C"  Vector2_t2243707579  ScrollRect_get_velocity_m2019475793 (ScrollRect_t1199013257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_velocity(UnityEngine.Vector2)
extern "C"  void ScrollRect_set_velocity_m65591334 (ScrollRect_t1199013257 * __this, Vector2_t2243707579  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::get_rectTransform()
extern "C"  RectTransform_t3349966182 * ScrollRect_get_rectTransform_m1256747885 (ScrollRect_t1199013257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::Rebuild(UnityEngine.UI.CanvasUpdate)
extern "C"  void ScrollRect_Rebuild_m3423824761 (ScrollRect_t1199013257 * __this, int32_t ___executing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::LayoutComplete()
extern "C"  void ScrollRect_LayoutComplete_m1484602527 (ScrollRect_t1199013257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::GraphicUpdateComplete()
extern "C"  void ScrollRect_GraphicUpdateComplete_m4293381620 (ScrollRect_t1199013257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::UpdateCachedData()
extern "C"  void ScrollRect_UpdateCachedData_m2107447137 (ScrollRect_t1199013257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnEnable()
extern "C"  void ScrollRect_OnEnable_m2748112742 (ScrollRect_t1199013257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnDisable()
extern "C"  void ScrollRect_OnDisable_m2695050977 (ScrollRect_t1199013257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ScrollRect::IsActive()
extern "C"  bool ScrollRect_IsActive_m4078699278 (ScrollRect_t1199013257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::EnsureLayoutHasRebuilt()
extern "C"  void ScrollRect_EnsureLayoutHasRebuilt_m2073458811 (ScrollRect_t1199013257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::StopMovement()
extern "C"  void ScrollRect_StopMovement_m1824352159 (ScrollRect_t1199013257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnScroll(UnityEngine.EventSystems.PointerEventData)
extern "C"  void ScrollRect_OnScroll_m3346515304 (ScrollRect_t1199013257 * __this, PointerEventData_t1599784723 * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnInitializePotentialDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void ScrollRect_OnInitializePotentialDrag_m3110658189 (ScrollRect_t1199013257 * __this, PointerEventData_t1599784723 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void ScrollRect_OnBeginDrag_m4285253530 (ScrollRect_t1199013257 * __this, PointerEventData_t1599784723 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void ScrollRect_OnEndDrag_m2473889850 (ScrollRect_t1199013257 * __this, PointerEventData_t1599784723 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void ScrollRect_OnDrag_m1424848249 (ScrollRect_t1199013257 * __this, PointerEventData_t1599784723 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::SetContentAnchoredPosition(UnityEngine.Vector2)
extern "C"  void ScrollRect_SetContentAnchoredPosition_m1194305206 (ScrollRect_t1199013257 * __this, Vector2_t2243707579  ___position0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::LateUpdate()
extern "C"  void ScrollRect_LateUpdate_m653657617 (ScrollRect_t1199013257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::UpdatePrevData()
extern "C"  void ScrollRect_UpdatePrevData_m3092887300 (ScrollRect_t1199013257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::UpdateScrollbars(UnityEngine.Vector2)
extern "C"  void ScrollRect_UpdateScrollbars_m3921404746 (ScrollRect_t1199013257 * __this, Vector2_t2243707579  ___offset0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::get_normalizedPosition()
extern "C"  Vector2_t2243707579  ScrollRect_get_normalizedPosition_m1640825682 (ScrollRect_t1199013257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_normalizedPosition(UnityEngine.Vector2)
extern "C"  void ScrollRect_set_normalizedPosition_m854787777 (ScrollRect_t1199013257 * __this, Vector2_t2243707579  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_horizontalNormalizedPosition()
extern "C"  float ScrollRect_get_horizontalNormalizedPosition_m3769146345 (ScrollRect_t1199013257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_horizontalNormalizedPosition(System.Single)
extern "C"  void ScrollRect_set_horizontalNormalizedPosition_m3654350248 (ScrollRect_t1199013257 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_verticalNormalizedPosition()
extern "C"  float ScrollRect_get_verticalNormalizedPosition_m1701804869 (ScrollRect_t1199013257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_verticalNormalizedPosition(System.Single)
extern "C"  void ScrollRect_set_verticalNormalizedPosition_m18991718 (ScrollRect_t1199013257 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::SetHorizontalNormalizedPosition(System.Single)
extern "C"  void ScrollRect_SetHorizontalNormalizedPosition_m1084560733 (ScrollRect_t1199013257 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::SetVerticalNormalizedPosition(System.Single)
extern "C"  void ScrollRect_SetVerticalNormalizedPosition_m216554321 (ScrollRect_t1199013257 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::SetNormalizedPosition(System.Single,System.Int32)
extern "C"  void ScrollRect_SetNormalizedPosition_m3782185980 (ScrollRect_t1199013257 * __this, float ___value0, int32_t ___axis1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::RubberDelta(System.Single,System.Single)
extern "C"  float ScrollRect_RubberDelta_m2533506730 (Il2CppObject * __this /* static, unused */, float ___overStretching0, float ___viewSize1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnRectTransformDimensionsChange()
extern "C"  void ScrollRect_OnRectTransformDimensionsChange_m3940143462 (ScrollRect_t1199013257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ScrollRect::get_hScrollingNeeded()
extern "C"  bool ScrollRect_get_hScrollingNeeded_m717195555 (ScrollRect_t1199013257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ScrollRect::get_vScrollingNeeded()
extern "C"  bool ScrollRect_get_vScrollingNeeded_m2581071961 (ScrollRect_t1199013257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::CalculateLayoutInputHorizontal()
extern "C"  void ScrollRect_CalculateLayoutInputHorizontal_m2532225422 (ScrollRect_t1199013257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::CalculateLayoutInputVertical()
extern "C"  void ScrollRect_CalculateLayoutInputVertical_m3287140208 (ScrollRect_t1199013257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_minWidth()
extern "C"  float ScrollRect_get_minWidth_m3151814267 (ScrollRect_t1199013257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_preferredWidth()
extern "C"  float ScrollRect_get_preferredWidth_m3354182892 (ScrollRect_t1199013257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_flexibleWidth()
extern "C"  float ScrollRect_get_flexibleWidth_m3410614750 (ScrollRect_t1199013257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_minHeight()
extern "C"  float ScrollRect_get_minHeight_m2662466048 (ScrollRect_t1199013257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_preferredHeight()
extern "C"  float ScrollRect_get_preferredHeight_m4220788453 (ScrollRect_t1199013257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_flexibleHeight()
extern "C"  float ScrollRect_get_flexibleHeight_m731107497 (ScrollRect_t1199013257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.ScrollRect::get_layoutPriority()
extern "C"  int32_t ScrollRect_get_layoutPriority_m3562155219 (ScrollRect_t1199013257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::SetLayoutHorizontal()
extern "C"  void ScrollRect_SetLayoutHorizontal_m3486408020 (ScrollRect_t1199013257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::SetLayoutVertical()
extern "C"  void ScrollRect_SetLayoutVertical_m1225848090 (ScrollRect_t1199013257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::UpdateScrollbarVisibility()
extern "C"  void ScrollRect_UpdateScrollbarVisibility_m2738472183 (ScrollRect_t1199013257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::UpdateOneScrollbarVisibility(System.Boolean,System.Boolean,UnityEngine.UI.ScrollRect/ScrollbarVisibility,UnityEngine.UI.Scrollbar)
extern "C"  void ScrollRect_UpdateOneScrollbarVisibility_m3990871387 (Il2CppObject * __this /* static, unused */, bool ___xScrollingNeeded0, bool ___xAxisEnabled1, int32_t ___scrollbarVisibility2, Scrollbar_t3248359358 * ___scrollbar3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::UpdateScrollbarLayout()
extern "C"  void ScrollRect_UpdateScrollbarLayout_m1731749879 (ScrollRect_t1199013257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::UpdateBounds()
extern "C"  void ScrollRect_UpdateBounds_m3266596336 (ScrollRect_t1199013257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::InternalUpdateBounds(UnityEngine.Bounds&,UnityEngine.Vector2&,UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C"  void ScrollRect_InternalUpdateBounds_m3222992353 (Il2CppObject * __this /* static, unused */, Bounds_t3033363703 * ___viewBounds0, Vector2_t2243707579 * ___contentPivot1, Vector3_t2243707580 * ___contentSize2, Vector3_t2243707580 * ___contentPos3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds UnityEngine.UI.ScrollRect::GetBounds()
extern "C"  Bounds_t3033363703  ScrollRect_GetBounds_m1950012700 (ScrollRect_t1199013257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds UnityEngine.UI.ScrollRect::InternalGetBounds(UnityEngine.Vector3[],UnityEngine.Matrix4x4&)
extern "C"  Bounds_t3033363703  ScrollRect_InternalGetBounds_m1871388050 (Il2CppObject * __this /* static, unused */, Vector3U5BU5D_t1172311765* ___corners0, Matrix4x4_t2933234003 * ___viewWorldToLocalMatrix1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::CalculateOffset(UnityEngine.Vector2)
extern "C"  Vector2_t2243707579  ScrollRect_CalculateOffset_m1659273054 (ScrollRect_t1199013257 * __this, Vector2_t2243707579  ___delta0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::InternalCalculateOffset(UnityEngine.Bounds&,UnityEngine.Bounds&,System.Boolean,System.Boolean,UnityEngine.UI.ScrollRect/MovementType,UnityEngine.Vector2&)
extern "C"  Vector2_t2243707579  ScrollRect_InternalCalculateOffset_m3083065267 (Il2CppObject * __this /* static, unused */, Bounds_t3033363703 * ___viewBounds0, Bounds_t3033363703 * ___contentBounds1, bool ___horizontal2, bool ___vertical3, int32_t ___movementType4, Vector2_t2243707579 * ___delta5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::SetDirty()
extern "C"  void ScrollRect_SetDirty_m93243192 (ScrollRect_t1199013257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::SetDirtyCaching()
extern "C"  void ScrollRect_SetDirtyCaching_m1491302821 (ScrollRect_t1199013257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.ScrollRect::UnityEngine.UI.ICanvasElement.get_transform()
extern "C"  Transform_t3275118058 * ScrollRect_UnityEngine_UI_ICanvasElement_get_transform_m3611711997 (ScrollRect_t1199013257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
