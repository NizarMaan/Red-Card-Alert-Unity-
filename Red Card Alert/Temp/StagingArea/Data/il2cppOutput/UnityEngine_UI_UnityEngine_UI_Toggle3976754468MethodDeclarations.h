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

// UnityEngine.UI.Toggle
struct Toggle_t3976754468;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_t1030026315;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1599784723;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t2681005625;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_UI_ToggleGroup1030026315.h"
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate1528800019.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve1599784723.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_BaseEventD2681005625.h"

// System.Void UnityEngine.UI.Toggle::.ctor()
extern "C"  void Toggle__ctor_m272261215 (Toggle_t3976754468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::get_group()
extern "C"  ToggleGroup_t1030026315 * Toggle_get_group_m83566222 (Toggle_t3976754468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::set_group(UnityEngine.UI.ToggleGroup)
extern "C"  void Toggle_set_group_m3833595685 (Toggle_t3976754468 * __this, ToggleGroup_t1030026315 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::Rebuild(UnityEngine.UI.CanvasUpdate)
extern "C"  void Toggle_Rebuild_m929023818 (Toggle_t3976754468 * __this, int32_t ___executing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::LayoutComplete()
extern "C"  void Toggle_LayoutComplete_m3333019142 (Toggle_t3976754468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::GraphicUpdateComplete()
extern "C"  void Toggle_GraphicUpdateComplete_m491158481 (Toggle_t3976754468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::OnEnable()
extern "C"  void Toggle_OnEnable_m559022123 (Toggle_t3976754468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::OnDisable()
extern "C"  void Toggle_OnDisable_m1946363040 (Toggle_t3976754468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::OnDidApplyAnimationProperties()
extern "C"  void Toggle_OnDidApplyAnimationProperties_m325835214 (Toggle_t3976754468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::SetToggleGroup(UnityEngine.UI.ToggleGroup,System.Boolean)
extern "C"  void Toggle_SetToggleGroup_m3009136959 (Toggle_t3976754468 * __this, ToggleGroup_t1030026315 * ___newGroup0, bool ___setMemberValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Toggle::get_isOn()
extern "C"  bool Toggle_get_isOn_m366838229 (Toggle_t3976754468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::set_isOn(System.Boolean)
extern "C"  void Toggle_set_isOn_m4022556286 (Toggle_t3976754468 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::Set(System.Boolean)
extern "C"  void Toggle_Set_m861914546 (Toggle_t3976754468 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::Set(System.Boolean,System.Boolean)
extern "C"  void Toggle_Set_m3604285137 (Toggle_t3976754468 * __this, bool ___value0, bool ___sendCallback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::PlayEffect(System.Boolean)
extern "C"  void Toggle_PlayEffect_m3950629415 (Toggle_t3976754468 * __this, bool ___instant0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::Start()
extern "C"  void Toggle_Start_m551422251 (Toggle_t3976754468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::InternalToggle()
extern "C"  void Toggle_InternalToggle_m2323729210 (Toggle_t3976754468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
extern "C"  void Toggle_OnPointerClick_m2582949427 (Toggle_t3976754468 * __this, PointerEventData_t1599784723 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::OnSubmit(UnityEngine.EventSystems.BaseEventData)
extern "C"  void Toggle_OnSubmit_m2130445678 (Toggle_t3976754468 * __this, BaseEventData_t2681005625 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.Toggle::UnityEngine.UI.ICanvasElement.get_transform()
extern "C"  Transform_t3275118058 * Toggle_UnityEngine_UI_ICanvasElement_get_transform_m4177274032 (Toggle_t3976754468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
