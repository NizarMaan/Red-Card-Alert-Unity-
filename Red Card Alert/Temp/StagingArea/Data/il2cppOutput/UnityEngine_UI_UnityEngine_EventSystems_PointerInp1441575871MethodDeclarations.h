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

// UnityEngine.EventSystems.PointerInputModule
struct PointerInputModule_t1441575871;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1599784723;
// UnityEngine.EventSystems.PointerInputModule/MouseState
struct MouseState_t3572864619;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t2681005625;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve1599784723.h"
#include "UnityEngine_UnityEngine_Touch407273883.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve1414739712.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_BaseEventD2681005625.h"

// System.Void UnityEngine.EventSystems.PointerInputModule::.ctor()
extern "C"  void PointerInputModule__ctor_m3738792102 (PointerInputModule_t1441575871 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerInputModule::GetPointerData(System.Int32,UnityEngine.EventSystems.PointerEventData&,System.Boolean)
extern "C"  bool PointerInputModule_GetPointerData_m1695674453 (PointerInputModule_t1441575871 * __this, int32_t ___id0, PointerEventData_t1599784723 ** ___data1, bool ___create2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerInputModule::RemovePointerData(UnityEngine.EventSystems.PointerEventData)
extern "C"  void PointerInputModule_RemovePointerData_m4158548017 (PointerInputModule_t1441575871 * __this, PointerEventData_t1599784723 * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.PointerEventData UnityEngine.EventSystems.PointerInputModule::GetTouchPointerEventData(UnityEngine.Touch,System.Boolean&,System.Boolean&)
extern "C"  PointerEventData_t1599784723 * PointerInputModule_GetTouchPointerEventData_m2233913269 (PointerInputModule_t1441575871 * __this, Touch_t407273883  ___input0, bool* ___pressed1, bool* ___released2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerInputModule::CopyFromTo(UnityEngine.EventSystems.PointerEventData,UnityEngine.EventSystems.PointerEventData)
extern "C"  void PointerInputModule_CopyFromTo_m2185451090 (PointerInputModule_t1441575871 * __this, PointerEventData_t1599784723 * ___from0, PointerEventData_t1599784723 * ___to1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.PointerEventData/FramePressState UnityEngine.EventSystems.PointerInputModule::StateForMouseButton(System.Int32)
extern "C"  int32_t PointerInputModule_StateForMouseButton_m4138338639 (PointerInputModule_t1441575871 * __this, int32_t ___buttonId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.PointerInputModule/MouseState UnityEngine.EventSystems.PointerInputModule::GetMousePointerEventData()
extern "C"  MouseState_t3572864619 * PointerInputModule_GetMousePointerEventData_m858768156 (PointerInputModule_t1441575871 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.PointerInputModule/MouseState UnityEngine.EventSystems.PointerInputModule::GetMousePointerEventData(System.Int32)
extern "C"  MouseState_t3572864619 * PointerInputModule_GetMousePointerEventData_m2487315095 (PointerInputModule_t1441575871 * __this, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.PointerEventData UnityEngine.EventSystems.PointerInputModule::GetLastPointerEventData(System.Int32)
extern "C"  PointerEventData_t1599784723 * PointerInputModule_GetLastPointerEventData_m3072437281 (PointerInputModule_t1441575871 * __this, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerInputModule::ShouldStartDrag(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Boolean)
extern "C"  bool PointerInputModule_ShouldStartDrag_m4163638715 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___pressPos0, Vector2_t2243707579  ___currentPos1, float ___threshold2, bool ___useDragThreshold3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerInputModule::ProcessMove(UnityEngine.EventSystems.PointerEventData)
extern "C"  void PointerInputModule_ProcessMove_m3200120346 (PointerInputModule_t1441575871 * __this, PointerEventData_t1599784723 * ___pointerEvent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerInputModule::ProcessDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void PointerInputModule_ProcessDrag_m3152814395 (PointerInputModule_t1441575871 * __this, PointerEventData_t1599784723 * ___pointerEvent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerInputModule::IsPointerOverGameObject(System.Int32)
extern "C"  bool PointerInputModule_IsPointerOverGameObject_m461717429 (PointerInputModule_t1441575871 * __this, int32_t ___pointerId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerInputModule::ClearSelection()
extern "C"  void PointerInputModule_ClearSelection_m3640318585 (PointerInputModule_t1441575871 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.PointerInputModule::ToString()
extern "C"  String_t* PointerInputModule_ToString_m1701780667 (PointerInputModule_t1441575871 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerInputModule::DeselectIfSelectionChanged(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData)
extern "C"  void PointerInputModule_DeselectIfSelectionChanged_m3360889170 (PointerInputModule_t1441575871 * __this, GameObject_t1756533147 * ___currentOverGo0, BaseEventData_t2681005625 * ___pointerEvent1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
