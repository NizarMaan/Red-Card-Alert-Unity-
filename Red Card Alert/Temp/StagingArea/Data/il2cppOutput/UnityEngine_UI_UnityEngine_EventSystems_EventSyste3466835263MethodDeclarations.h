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

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t3466835263;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t1295781545;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t2681005625;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1599784723;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t3685274804;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_EventSyste3466835263.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_BaseEventD2681005625.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResul21186376.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve1599784723.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_BaseInputM1295781545.h"

// System.Void UnityEngine.EventSystems.EventSystem::.ctor()
extern "C"  void EventSystem__ctor_m1527188780 (EventSystem_t3466835263 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
extern "C"  EventSystem_t3466835263 * EventSystem_get_current_m319019811 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::set_current(UnityEngine.EventSystems.EventSystem)
extern "C"  void EventSystem_set_current_m1323649628 (Il2CppObject * __this /* static, unused */, EventSystem_t3466835263 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.EventSystem::get_sendNavigationEvents()
extern "C"  bool EventSystem_get_sendNavigationEvents_m2901780066 (EventSystem_t3466835263 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::set_sendNavigationEvents(System.Boolean)
extern "C"  void EventSystem_set_sendNavigationEvents_m716064957 (EventSystem_t3466835263 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.EventSystem::get_pixelDragThreshold()
extern "C"  int32_t EventSystem_get_pixelDragThreshold_m101324298 (EventSystem_t3466835263 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::set_pixelDragThreshold(System.Int32)
extern "C"  void EventSystem_set_pixelDragThreshold_m4117460693 (EventSystem_t3466835263 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::get_currentInputModule()
extern "C"  BaseInputModule_t1295781545 * EventSystem_get_currentInputModule_m1374574615 (EventSystem_t3466835263 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::get_firstSelectedGameObject()
extern "C"  GameObject_t1756533147 * EventSystem_get_firstSelectedGameObject_m4059087516 (EventSystem_t3466835263 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::set_firstSelectedGameObject(UnityEngine.GameObject)
extern "C"  void EventSystem_set_firstSelectedGameObject_m3191072275 (EventSystem_t3466835263 * __this, GameObject_t1756533147 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::get_currentSelectedGameObject()
extern "C"  GameObject_t1756533147 * EventSystem_get_currentSelectedGameObject_m701101735 (EventSystem_t3466835263 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::get_lastSelectedGameObject()
extern "C"  GameObject_t1756533147 * EventSystem_get_lastSelectedGameObject_m3864279412 (EventSystem_t3466835263 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::UpdateModules()
extern "C"  void EventSystem_UpdateModules_m3722131450 (EventSystem_t3466835263 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.EventSystem::get_alreadySelecting()
extern "C"  bool EventSystem_get_alreadySelecting_m784345345 (EventSystem_t3466835263 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::SetSelectedGameObject(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData)
extern "C"  void EventSystem_SetSelectedGameObject_m2232036508 (EventSystem_t3466835263 * __this, GameObject_t1756533147 * ___selected0, BaseEventData_t2681005625 * ___pointer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::get_baseEventDataCache()
extern "C"  BaseEventData_t2681005625 * EventSystem_get_baseEventDataCache_m4294741599 (EventSystem_t3466835263 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::SetSelectedGameObject(UnityEngine.GameObject)
extern "C"  void EventSystem_SetSelectedGameObject_m2211816110 (EventSystem_t3466835263 * __this, GameObject_t1756533147 * ___selected0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.EventSystem::RaycastComparer(UnityEngine.EventSystems.RaycastResult,UnityEngine.EventSystems.RaycastResult)
extern "C"  int32_t EventSystem_RaycastComparer_m3838020280 (Il2CppObject * __this /* static, unused */, RaycastResult_t21186376  ___lhs0, RaycastResult_t21186376  ___rhs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::RaycastAll(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
extern "C"  void EventSystem_RaycastAll_m4000413739 (EventSystem_t3466835263 * __this, PointerEventData_t1599784723 * ___eventData0, List_1_t3685274804 * ___raycastResults1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.EventSystem::IsPointerOverGameObject()
extern "C"  bool EventSystem_IsPointerOverGameObject_m1128779390 (EventSystem_t3466835263 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.EventSystem::IsPointerOverGameObject(System.Int32)
extern "C"  bool EventSystem_IsPointerOverGameObject_m2415000115 (EventSystem_t3466835263 * __this, int32_t ___pointerId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::OnEnable()
extern "C"  void EventSystem_OnEnable_m1189606128 (EventSystem_t3466835263 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::OnDisable()
extern "C"  void EventSystem_OnDisable_m3467371551 (EventSystem_t3466835263 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::TickModules()
extern "C"  void EventSystem_TickModules_m80607774 (EventSystem_t3466835263 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::OnApplicationFocus(System.Boolean)
extern "C"  void EventSystem_OnApplicationFocus_m646593152 (EventSystem_t3466835263 * __this, bool ___hasFocus0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::Update()
extern "C"  void EventSystem_Update_m3937231239 (EventSystem_t3466835263 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::ChangeEventModule(UnityEngine.EventSystems.BaseInputModule)
extern "C"  void EventSystem_ChangeEventModule_m454625580 (EventSystem_t3466835263 * __this, BaseInputModule_t1295781545 * ___module0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.EventSystem::ToString()
extern "C"  String_t* EventSystem_ToString_m3531129045 (EventSystem_t3466835263 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::.cctor()
extern "C"  void EventSystem__cctor_m2297021437 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
