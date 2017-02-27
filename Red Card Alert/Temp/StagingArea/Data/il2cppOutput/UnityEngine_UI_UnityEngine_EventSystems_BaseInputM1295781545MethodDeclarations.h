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

// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t1295781545;
// UnityEngine.EventSystems.BaseInput
struct BaseInput_t621514313;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t3466835263;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t3685274804;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1599784723;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t1524870173;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t2681005625;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResul21186376.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_MoveDirect1406276862.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve1599784723.h"

// System.Void UnityEngine.EventSystems.BaseInputModule::.ctor()
extern "C"  void BaseInputModule__ctor_m1627580670 (BaseInputModule_t1295781545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::get_input()
extern "C"  BaseInput_t621514313 * BaseInputModule_get_input_m4128771778 (BaseInputModule_t1295781545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseInputModule::get_eventSystem()
extern "C"  EventSystem_t3466835263 * BaseInputModule_get_eventSystem_m2822730343 (BaseInputModule_t1295781545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseInputModule::OnEnable()
extern "C"  void BaseInputModule_OnEnable_m1038176666 (BaseInputModule_t1295781545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseInputModule::OnDisable()
extern "C"  void BaseInputModule_OnDisable_m608782571 (BaseInputModule_t1295781545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.BaseInputModule::FindFirstRaycast(System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
extern "C"  RaycastResult_t21186376  BaseInputModule_FindFirstRaycast_m797745207 (Il2CppObject * __this /* static, unused */, List_1_t3685274804 * ___candidates0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.MoveDirection UnityEngine.EventSystems.BaseInputModule::DetermineMoveDirection(System.Single,System.Single)
extern "C"  int32_t BaseInputModule_DetermineMoveDirection_m617996563 (Il2CppObject * __this /* static, unused */, float ___x0, float ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.MoveDirection UnityEngine.EventSystems.BaseInputModule::DetermineMoveDirection(System.Single,System.Single,System.Single)
extern "C"  int32_t BaseInputModule_DetermineMoveDirection_m981952744 (Il2CppObject * __this /* static, unused */, float ___x0, float ___y1, float ___deadZone2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.BaseInputModule::FindCommonRoot(UnityEngine.GameObject,UnityEngine.GameObject)
extern "C"  GameObject_t1756533147 * BaseInputModule_FindCommonRoot_m2696088443 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___g10, GameObject_t1756533147 * ___g21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseInputModule::HandlePointerExitAndEnter(UnityEngine.EventSystems.PointerEventData,UnityEngine.GameObject)
extern "C"  void BaseInputModule_HandlePointerExitAndEnter_m1570886840 (BaseInputModule_t1295781545 * __this, PointerEventData_t1599784723 * ___currentPointerData0, GameObject_t1756533147 * ___newEnterTarget1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.AxisEventData UnityEngine.EventSystems.BaseInputModule::GetAxisEventData(System.Single,System.Single,System.Single)
extern "C"  AxisEventData_t1524870173 * BaseInputModule_GetAxisEventData_m3903709281 (BaseInputModule_t1295781545 * __this, float ___x0, float ___y1, float ___moveDeadZone2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::GetBaseEventData()
extern "C"  BaseEventData_t2681005625 * BaseInputModule_GetBaseEventData_m2147217514 (BaseInputModule_t1295781545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.BaseInputModule::IsPointerOverGameObject(System.Int32)
extern "C"  bool BaseInputModule_IsPointerOverGameObject_m1383495815 (BaseInputModule_t1295781545 * __this, int32_t ___pointerId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.BaseInputModule::ShouldActivateModule()
extern "C"  bool BaseInputModule_ShouldActivateModule_m2899747874 (BaseInputModule_t1295781545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseInputModule::DeactivateModule()
extern "C"  void BaseInputModule_DeactivateModule_m194840002 (BaseInputModule_t1295781545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseInputModule::ActivateModule()
extern "C"  void BaseInputModule_ActivateModule_m832071241 (BaseInputModule_t1295781545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseInputModule::UpdateModule()
extern "C"  void BaseInputModule_UpdateModule_m833403621 (BaseInputModule_t1295781545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.BaseInputModule::IsModuleSupported()
extern "C"  bool BaseInputModule_IsModuleSupported_m4272494372 (BaseInputModule_t1295781545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
