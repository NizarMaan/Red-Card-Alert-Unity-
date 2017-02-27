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

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t2681005625;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t3466835263;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t1295781545;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_EventSyste3466835263.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"

// System.Void UnityEngine.EventSystems.BaseEventData::.ctor(UnityEngine.EventSystems.EventSystem)
extern "C"  void BaseEventData__ctor_m2641010888 (BaseEventData_t2681005625 * __this, EventSystem_t3466835263 * ___eventSystem0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.BaseEventData::get_currentInputModule()
extern "C"  BaseInputModule_t1295781545 * BaseEventData_get_currentInputModule_m3609433875 (BaseEventData_t2681005625 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.BaseEventData::get_selectedObject()
extern "C"  GameObject_t1756533147 * BaseEventData_get_selectedObject_m3551206992 (BaseEventData_t2681005625 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseEventData::set_selectedObject(UnityEngine.GameObject)
extern "C"  void BaseEventData_set_selectedObject_m2198139983 (BaseEventData_t2681005625 * __this, GameObject_t1756533147 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
