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

// UnityEngine.UI.Button
struct Button_t2872111280;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t2455055323;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1599784723;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t2681005625;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_UI_Button_ButtonClicked2455055323.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve1599784723.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_BaseEventD2681005625.h"

// System.Void UnityEngine.UI.Button::.ctor()
extern "C"  void Button__ctor_m975719067 (Button_t2872111280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
extern "C"  ButtonClickedEvent_t2455055323 * Button_get_onClick_m1595880935 (Button_t2872111280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::set_onClick(UnityEngine.UI.Button/ButtonClickedEvent)
extern "C"  void Button_set_onClick_m1628519680 (Button_t2872111280 * __this, ButtonClickedEvent_t2455055323 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::Press()
extern "C"  void Button_Press_m73991540 (Button_t2872111280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
extern "C"  void Button_OnPointerClick_m2524861687 (Button_t2872111280 * __this, PointerEventData_t1599784723 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnSubmit(UnityEngine.EventSystems.BaseEventData)
extern "C"  void Button_OnSubmit_m1639047670 (Button_t2872111280 * __this, BaseEventData_t2681005625 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.UI.Button::OnFinishSubmit()
extern "C"  Il2CppObject * Button_OnFinishSubmit_m1646528571 (Button_t2872111280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
