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

// UnityEngine.EventSystems.BaseInput
struct BaseInput_t621514313;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_IMECompositionMode1898275508.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Touch407273883.h"
#include "mscorlib_System_String2029220233.h"

// System.Void UnityEngine.EventSystems.BaseInput::.ctor()
extern "C"  void BaseInput__ctor_m3561125274 (BaseInput_t621514313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.BaseInput::get_compositionString()
extern "C"  String_t* BaseInput_get_compositionString_m3933000737 (BaseInput_t621514313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.IMECompositionMode UnityEngine.EventSystems.BaseInput::get_imeCompositionMode()
extern "C"  int32_t BaseInput_get_imeCompositionMode_m4145003637 (BaseInput_t621514313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseInput::set_imeCompositionMode(UnityEngine.IMECompositionMode)
extern "C"  void BaseInput_set_imeCompositionMode_m396396632 (BaseInput_t621514313 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.BaseInput::get_compositionCursorPos()
extern "C"  Vector2_t2243707579  BaseInput_get_compositionCursorPos_m3148596268 (BaseInput_t621514313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseInput::set_compositionCursorPos(UnityEngine.Vector2)
extern "C"  void BaseInput_set_compositionCursorPos_m2632248731 (BaseInput_t621514313 * __this, Vector2_t2243707579  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.BaseInput::get_mousePresent()
extern "C"  bool BaseInput_get_mousePresent_m3571192771 (BaseInput_t621514313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.BaseInput::GetMouseButtonDown(System.Int32)
extern "C"  bool BaseInput_GetMouseButtonDown_m4155388530 (BaseInput_t621514313 * __this, int32_t ___button0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.BaseInput::GetMouseButtonUp(System.Int32)
extern "C"  bool BaseInput_GetMouseButtonUp_m32571233 (BaseInput_t621514313 * __this, int32_t ___button0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.BaseInput::GetMouseButton(System.Int32)
extern "C"  bool BaseInput_GetMouseButton_m4259774470 (BaseInput_t621514313 * __this, int32_t ___button0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.BaseInput::get_mousePosition()
extern "C"  Vector2_t2243707579  BaseInput_get_mousePosition_m3084489624 (BaseInput_t621514313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.BaseInput::get_mouseScrollDelta()
extern "C"  Vector2_t2243707579  BaseInput_get_mouseScrollDelta_m3812720566 (BaseInput_t621514313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.BaseInput::get_touchSupported()
extern "C"  bool BaseInput_get_touchSupported_m2908998898 (BaseInput_t621514313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.BaseInput::get_touchCount()
extern "C"  int32_t BaseInput_get_touchCount_m998724785 (BaseInput_t621514313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Touch UnityEngine.EventSystems.BaseInput::GetTouch(System.Int32)
extern "C"  Touch_t407273883  BaseInput_GetTouch_m10856855 (BaseInput_t621514313 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.EventSystems.BaseInput::GetAxisRaw(System.String)
extern "C"  float BaseInput_GetAxisRaw_m2857136273 (BaseInput_t621514313 * __this, String_t* ___axisName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.BaseInput::GetButtonDown(System.String)
extern "C"  bool BaseInput_GetButtonDown_m321343820 (BaseInput_t621514313 * __this, String_t* ___buttonName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
