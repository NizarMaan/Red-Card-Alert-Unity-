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

// UnityEngine.UI.ToggleGroup
struct ToggleGroup_t1030026315;
// UnityEngine.UI.Toggle
struct Toggle_t3976754468;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Toggle>
struct IEnumerable_1_t4268881513;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_UI_Toggle3976754468.h"

// System.Void UnityEngine.UI.ToggleGroup::.ctor()
extern "C"  void ToggleGroup__ctor_m2685216210 (ToggleGroup_t1030026315 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ToggleGroup::get_allowSwitchOff()
extern "C"  bool ToggleGroup_get_allowSwitchOff_m3835712425 (ToggleGroup_t1030026315 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ToggleGroup::set_allowSwitchOff(System.Boolean)
extern "C"  void ToggleGroup_set_allowSwitchOff_m2945603446 (ToggleGroup_t1030026315 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ToggleGroup::ValidateToggleIsInGroup(UnityEngine.UI.Toggle)
extern "C"  void ToggleGroup_ValidateToggleIsInGroup_m3420956585 (ToggleGroup_t1030026315 * __this, Toggle_t3976754468 * ___toggle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ToggleGroup::NotifyToggleOn(UnityEngine.UI.Toggle)
extern "C"  void ToggleGroup_NotifyToggleOn_m997426227 (ToggleGroup_t1030026315 * __this, Toggle_t3976754468 * ___toggle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ToggleGroup::UnregisterToggle(UnityEngine.UI.Toggle)
extern "C"  void ToggleGroup_UnregisterToggle_m1686703375 (ToggleGroup_t1030026315 * __this, Toggle_t3976754468 * ___toggle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ToggleGroup::RegisterToggle(UnityEngine.UI.Toggle)
extern "C"  void ToggleGroup_RegisterToggle_m3118973598 (ToggleGroup_t1030026315 * __this, Toggle_t3976754468 * ___toggle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ToggleGroup::AnyTogglesOn()
extern "C"  bool ToggleGroup_AnyTogglesOn_m840462814 (ToggleGroup_t1030026315 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Toggle> UnityEngine.UI.ToggleGroup::ActiveToggles()
extern "C"  Il2CppObject* ToggleGroup_ActiveToggles_m2659510444 (ToggleGroup_t1030026315 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ToggleGroup::SetAllTogglesOff()
extern "C"  void ToggleGroup_SetAllTogglesOff_m4062279257 (ToggleGroup_t1030026315 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ToggleGroup::<AnyTogglesOn>m__0(UnityEngine.UI.Toggle)
extern "C"  bool ToggleGroup_U3CAnyTogglesOnU3Em__0_m1218114300 (Il2CppObject * __this /* static, unused */, Toggle_t3976754468 * ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ToggleGroup::<ActiveToggles>m__1(UnityEngine.UI.Toggle)
extern "C"  bool ToggleGroup_U3CActiveTogglesU3Em__1_m4052653494 (Il2CppObject * __this /* static, unused */, Toggle_t3976754468 * ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
