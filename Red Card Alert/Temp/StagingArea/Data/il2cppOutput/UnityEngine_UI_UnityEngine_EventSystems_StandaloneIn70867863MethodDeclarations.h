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

// UnityEngine.EventSystems.StandaloneInputModule
struct StandaloneInputModule_t70867863;
// System.String
struct String_t;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1599784723;
// UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData
struct MouseButtonEventData_t3709210170;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_Standalone2680906638.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve1599784723.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerInp3709210170.h"

// System.Void UnityEngine.EventSystems.StandaloneInputModule::.ctor()
extern "C"  void StandaloneInputModule__ctor_m3609748260 (StandaloneInputModule_t70867863 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.StandaloneInputModule/InputMode UnityEngine.EventSystems.StandaloneInputModule::get_inputMode()
extern "C"  int32_t StandaloneInputModule_get_inputMode_m1415645893 (StandaloneInputModule_t70867863 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::get_allowActivationOnMobileDevice()
extern "C"  bool StandaloneInputModule_get_allowActivationOnMobileDevice_m1246375011 (StandaloneInputModule_t70867863 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::set_allowActivationOnMobileDevice(System.Boolean)
extern "C"  void StandaloneInputModule_set_allowActivationOnMobileDevice_m2631121618 (StandaloneInputModule_t70867863 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::get_forceModuleActive()
extern "C"  bool StandaloneInputModule_get_forceModuleActive_m2184063714 (StandaloneInputModule_t70867863 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::set_forceModuleActive(System.Boolean)
extern "C"  void StandaloneInputModule_set_forceModuleActive_m3901349979 (StandaloneInputModule_t70867863 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.EventSystems.StandaloneInputModule::get_inputActionsPerSecond()
extern "C"  float StandaloneInputModule_get_inputActionsPerSecond_m2449438113 (StandaloneInputModule_t70867863 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::set_inputActionsPerSecond(System.Single)
extern "C"  void StandaloneInputModule_set_inputActionsPerSecond_m3943984234 (StandaloneInputModule_t70867863 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.EventSystems.StandaloneInputModule::get_repeatDelay()
extern "C"  float StandaloneInputModule_get_repeatDelay_m3025279 (StandaloneInputModule_t70867863 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::set_repeatDelay(System.Single)
extern "C"  void StandaloneInputModule_set_repeatDelay_m2820945738 (StandaloneInputModule_t70867863 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.StandaloneInputModule::get_horizontalAxis()
extern "C"  String_t* StandaloneInputModule_get_horizontalAxis_m4084030083 (StandaloneInputModule_t70867863 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::set_horizontalAxis(System.String)
extern "C"  void StandaloneInputModule_set_horizontalAxis_m3742956176 (StandaloneInputModule_t70867863 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.StandaloneInputModule::get_verticalAxis()
extern "C"  String_t* StandaloneInputModule_get_verticalAxis_m869584459 (StandaloneInputModule_t70867863 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::set_verticalAxis(System.String)
extern "C"  void StandaloneInputModule_set_verticalAxis_m1165235646 (StandaloneInputModule_t70867863 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.StandaloneInputModule::get_submitButton()
extern "C"  String_t* StandaloneInputModule_get_submitButton_m2045676570 (StandaloneInputModule_t70867863 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::set_submitButton(System.String)
extern "C"  void StandaloneInputModule_set_submitButton_m3946853219 (StandaloneInputModule_t70867863 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.StandaloneInputModule::get_cancelButton()
extern "C"  String_t* StandaloneInputModule_get_cancelButton_m1563746440 (StandaloneInputModule_t70867863 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::set_cancelButton(System.String)
extern "C"  void StandaloneInputModule_set_cancelButton_m2642677329 (StandaloneInputModule_t70867863 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::UpdateModule()
extern "C"  void StandaloneInputModule_UpdateModule_m683437289 (StandaloneInputModule_t70867863 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::IsModuleSupported()
extern "C"  bool StandaloneInputModule_IsModuleSupported_m623598506 (StandaloneInputModule_t70867863 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::ShouldActivateModule()
extern "C"  bool StandaloneInputModule_ShouldActivateModule_m221601604 (StandaloneInputModule_t70867863 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::ActivateModule()
extern "C"  void StandaloneInputModule_ActivateModule_m76610285 (StandaloneInputModule_t70867863 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::DeactivateModule()
extern "C"  void StandaloneInputModule_DeactivateModule_m2952848884 (StandaloneInputModule_t70867863 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::Process()
extern "C"  void StandaloneInputModule_Process_m2811362425 (StandaloneInputModule_t70867863 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::ProcessTouchEvents()
extern "C"  bool StandaloneInputModule_ProcessTouchEvents_m3610522827 (StandaloneInputModule_t70867863 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::ProcessTouchPress(UnityEngine.EventSystems.PointerEventData,System.Boolean,System.Boolean)
extern "C"  void StandaloneInputModule_ProcessTouchPress_m774618611 (StandaloneInputModule_t70867863 * __this, PointerEventData_t1599784723 * ___pointerEvent0, bool ___pressed1, bool ___released2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::SendSubmitEventToSelectedObject()
extern "C"  bool StandaloneInputModule_SendSubmitEventToSelectedObject_m3421155293 (StandaloneInputModule_t70867863 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::GetRawMoveVector()
extern "C"  Vector2_t2243707579  StandaloneInputModule_GetRawMoveVector_m2001528411 (StandaloneInputModule_t70867863 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::SendMoveEventToSelectedObject()
extern "C"  bool StandaloneInputModule_SendMoveEventToSelectedObject_m393857214 (StandaloneInputModule_t70867863 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::ProcessMouseEvent()
extern "C"  void StandaloneInputModule_ProcessMouseEvent_m3840335260 (StandaloneInputModule_t70867863 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::ForceAutoSelect()
extern "C"  bool StandaloneInputModule_ForceAutoSelect_m1167170508 (StandaloneInputModule_t70867863 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::ProcessMouseEvent(System.Int32)
extern "C"  void StandaloneInputModule_ProcessMouseEvent_m3217430289 (StandaloneInputModule_t70867863 * __this, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::SendUpdateEventToSelectedObject()
extern "C"  bool StandaloneInputModule_SendUpdateEventToSelectedObject_m547288770 (StandaloneInputModule_t70867863 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::ProcessMousePress(UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData)
extern "C"  void StandaloneInputModule_ProcessMousePress_m3394019419 (StandaloneInputModule_t70867863 * __this, MouseButtonEventData_t3709210170 * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
