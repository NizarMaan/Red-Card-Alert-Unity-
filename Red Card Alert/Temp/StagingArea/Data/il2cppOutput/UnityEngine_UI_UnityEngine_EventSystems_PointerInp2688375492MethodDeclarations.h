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

// UnityEngine.EventSystems.PointerInputModule/ButtonState
struct ButtonState_t2688375492;
// UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData
struct MouseButtonEventData_t3709210170;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerInp3709210170.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve2981963041.h"

// System.Void UnityEngine.EventSystems.PointerInputModule/ButtonState::.ctor()
extern "C"  void ButtonState__ctor_m3254029884 (ButtonState_t2688375492 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData UnityEngine.EventSystems.PointerInputModule/ButtonState::get_eventData()
extern "C"  MouseButtonEventData_t3709210170 * ButtonState_get_eventData_m1293357996 (ButtonState_t2688375492 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerInputModule/ButtonState::set_eventData(UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData)
extern "C"  void ButtonState_set_eventData_m2662364259 (ButtonState_t2688375492 * __this, MouseButtonEventData_t3709210170 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerInputModule/ButtonState::get_button()
extern "C"  int32_t ButtonState_get_button_m356129561 (ButtonState_t2688375492 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerInputModule/ButtonState::set_button(UnityEngine.EventSystems.PointerEventData/InputButton)
extern "C"  void ButtonState_set_button_m1616426664 (ButtonState_t2688375492 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
