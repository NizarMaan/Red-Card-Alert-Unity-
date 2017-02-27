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

// UnityEngine.EventSystems.TouchInputModule
struct TouchInputModule_t2561058385;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1599784723;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve1599784723.h"

// System.Void UnityEngine.EventSystems.TouchInputModule::.ctor()
extern "C"  void TouchInputModule__ctor_m1061183348 (TouchInputModule_t2561058385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.TouchInputModule::get_allowActivationOnStandalone()
extern "C"  bool TouchInputModule_get_allowActivationOnStandalone_m2481272568 (TouchInputModule_t2561058385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::set_allowActivationOnStandalone(System.Boolean)
extern "C"  void TouchInputModule_set_allowActivationOnStandalone_m527533109 (TouchInputModule_t2561058385 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.TouchInputModule::get_forceModuleActive()
extern "C"  bool TouchInputModule_get_forceModuleActive_m1857469782 (TouchInputModule_t2561058385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::set_forceModuleActive(System.Boolean)
extern "C"  void TouchInputModule_set_forceModuleActive_m2262939823 (TouchInputModule_t2561058385 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::UpdateModule()
extern "C"  void TouchInputModule_UpdateModule_m2189145225 (TouchInputModule_t2561058385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.TouchInputModule::IsModuleSupported()
extern "C"  bool TouchInputModule_IsModuleSupported_m348464278 (TouchInputModule_t2561058385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.TouchInputModule::ShouldActivateModule()
extern "C"  bool TouchInputModule_ShouldActivateModule_m336123208 (TouchInputModule_t2561058385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.TouchInputModule::UseFakeInput()
extern "C"  bool TouchInputModule_UseFakeInput_m2112019004 (TouchInputModule_t2561058385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::Process()
extern "C"  void TouchInputModule_Process_m1373751353 (TouchInputModule_t2561058385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::FakeTouches()
extern "C"  void TouchInputModule_FakeTouches_m1587220368 (TouchInputModule_t2561058385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::ProcessTouchEvents()
extern "C"  void TouchInputModule_ProcessTouchEvents_m2913538643 (TouchInputModule_t2561058385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::ProcessTouchPress(UnityEngine.EventSystems.PointerEventData,System.Boolean,System.Boolean)
extern "C"  void TouchInputModule_ProcessTouchPress_m3303316799 (TouchInputModule_t2561058385 * __this, PointerEventData_t1599784723 * ___pointerEvent0, bool ___pressed1, bool ___released2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::DeactivateModule()
extern "C"  void TouchInputModule_DeactivateModule_m541440648 (TouchInputModule_t2561058385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.TouchInputModule::ToString()
extern "C"  String_t* TouchInputModule_ToString_m2508456245 (TouchInputModule_t2561058385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
