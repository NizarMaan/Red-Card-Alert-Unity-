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

// UnityEngine.UI.Slider
struct Slider_t297367283;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t2111116400;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1599784723;
// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t1524870173;
// UnityEngine.UI.Selectable
struct Selectable_t1490392188;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RectTransform3349966182.h"
#include "UnityEngine_UI_UnityEngine_UI_Slider_Direction1525323322.h"
#include "UnityEngine_UI_UnityEngine_UI_Slider_SliderEvent2111116400.h"
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate1528800019.h"
#include "UnityEngine_UI_UnityEngine_UI_Slider_Axis375128448.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve1599784723.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_AxisEventD1524870173.h"

// System.Void UnityEngine.UI.Slider::.ctor()
extern "C"  void Slider__ctor_m3124136916 (Slider_t297367283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.Slider::get_fillRect()
extern "C"  RectTransform_t3349966182 * Slider_get_fillRect_m3981597768 (Slider_t297367283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_fillRect(UnityEngine.RectTransform)
extern "C"  void Slider_set_fillRect_m2483082889 (Slider_t297367283 * __this, RectTransform_t3349966182 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.Slider::get_handleRect()
extern "C"  RectTransform_t3349966182 * Slider_get_handleRect_m2416838927 (Slider_t297367283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_handleRect(UnityEngine.RectTransform)
extern "C"  void Slider_set_handleRect_m4274581402 (Slider_t297367283 * __this, RectTransform_t3349966182 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::get_direction()
extern "C"  int32_t Slider_get_direction_m2992255637 (Slider_t297367283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_direction(UnityEngine.UI.Slider/Direction)
extern "C"  void Slider_set_direction_m612975266 (Slider_t297367283 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Slider::get_minValue()
extern "C"  float Slider_get_minValue_m749054492 (Slider_t297367283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_minValue(System.Single)
extern "C"  void Slider_set_minValue_m1484509981 (Slider_t297367283 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Slider::get_maxValue()
extern "C"  float Slider_get_maxValue_m3319962262 (Slider_t297367283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_maxValue(System.Single)
extern "C"  void Slider_set_maxValue_m2951480075 (Slider_t297367283 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Slider::get_wholeNumbers()
extern "C"  bool Slider_get_wholeNumbers_m4228975260 (Slider_t297367283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_wholeNumbers(System.Boolean)
extern "C"  void Slider_set_wholeNumbers_m2922063719 (Slider_t297367283 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Slider::get_value()
extern "C"  float Slider_get_value_m4182660424 (Slider_t297367283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_value(System.Single)
extern "C"  void Slider_set_value_m3092569199 (Slider_t297367283 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Slider::get_normalizedValue()
extern "C"  float Slider_get_normalizedValue_m4164062921 (Slider_t297367283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_normalizedValue(System.Single)
extern "C"  void Slider_set_normalizedValue_m3093868078 (Slider_t297367283 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::get_onValueChanged()
extern "C"  SliderEvent_t2111116400 * Slider_get_onValueChanged_m4261003214 (Slider_t297367283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_onValueChanged(UnityEngine.UI.Slider/SliderEvent)
extern "C"  void Slider_set_onValueChanged_m1751815187 (Slider_t297367283 * __this, SliderEvent_t2111116400 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Slider::get_stepSize()
extern "C"  float Slider_get_stepSize_m195019090 (Slider_t297367283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::Rebuild(UnityEngine.UI.CanvasUpdate)
extern "C"  void Slider_Rebuild_m3442875945 (Slider_t297367283 * __this, int32_t ___executing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::LayoutComplete()
extern "C"  void Slider_LayoutComplete_m2237060187 (Slider_t297367283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::GraphicUpdateComplete()
extern "C"  void Slider_GraphicUpdateComplete_m4151779134 (Slider_t297367283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnEnable()
extern "C"  void Slider_OnEnable_m2886106036 (Slider_t297367283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnDisable()
extern "C"  void Slider_OnDisable_m3161005185 (Slider_t297367283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnDidApplyAnimationProperties()
extern "C"  void Slider_OnDidApplyAnimationProperties_m3202463395 (Slider_t297367283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::UpdateCachedReferences()
extern "C"  void Slider_UpdateCachedReferences_m3161887229 (Slider_t297367283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Slider::ClampValue(System.Single)
extern "C"  float Slider_ClampValue_m2851810895 (Slider_t297367283 * __this, float ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::Set(System.Single)
extern "C"  void Slider_Set_m3835352751 (Slider_t297367283 * __this, float ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::Set(System.Single,System.Boolean)
extern "C"  void Slider_Set_m2698239572 (Slider_t297367283 * __this, float ___input0, bool ___sendCallback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnRectTransformDimensionsChange()
extern "C"  void Slider_OnRectTransformDimensionsChange_m4109401172 (Slider_t297367283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Slider/Axis UnityEngine.UI.Slider::get_axis()
extern "C"  int32_t Slider_get_axis_m162140813 (Slider_t297367283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Slider::get_reverseValue()
extern "C"  bool Slider_get_reverseValue_m3146075392 (Slider_t297367283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::UpdateVisuals()
extern "C"  void Slider_UpdateVisuals_m1325504022 (Slider_t297367283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::UpdateDrag(UnityEngine.EventSystems.PointerEventData,UnityEngine.Camera)
extern "C"  void Slider_UpdateDrag_m1963963631 (Slider_t297367283 * __this, PointerEventData_t1599784723 * ___eventData0, Camera_t189460977 * ___cam1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Slider::MayDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  bool Slider_MayDrag_m102620117 (Slider_t297367283 * __this, PointerEventData_t1599784723 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C"  void Slider_OnPointerDown_m753374106 (Slider_t297367283 * __this, PointerEventData_t1599784723 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void Slider_OnDrag_m626220953 (Slider_t297367283 * __this, PointerEventData_t1599784723 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnMove(UnityEngine.EventSystems.AxisEventData)
extern "C"  void Slider_OnMove_m641164662 (Slider_t297367283 * __this, AxisEventData_t1524870173 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Slider::FindSelectableOnLeft()
extern "C"  Selectable_t1490392188 * Slider_FindSelectableOnLeft_m3136767885 (Slider_t297367283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Slider::FindSelectableOnRight()
extern "C"  Selectable_t1490392188 * Slider_FindSelectableOnRight_m3896773838 (Slider_t297367283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Slider::FindSelectableOnUp()
extern "C"  Selectable_t1490392188 * Slider_FindSelectableOnUp_m15474611 (Slider_t297367283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Slider::FindSelectableOnDown()
extern "C"  Selectable_t1490392188 * Slider_FindSelectableOnDown_m4061980806 (Slider_t297367283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnInitializePotentialDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void Slider_OnInitializePotentialDrag_m3681330709 (Slider_t297367283 * __this, PointerEventData_t1599784723 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::SetDirection(UnityEngine.UI.Slider/Direction,System.Boolean)
extern "C"  void Slider_SetDirection_m2177048756 (Slider_t297367283 * __this, int32_t ___direction0, bool ___includeRectLayouts1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.Slider::UnityEngine.UI.ICanvasElement.get_transform()
extern "C"  Transform_t3275118058 * Slider_UnityEngine_UI_ICanvasElement_get_transform_m413816645 (Slider_t297367283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
