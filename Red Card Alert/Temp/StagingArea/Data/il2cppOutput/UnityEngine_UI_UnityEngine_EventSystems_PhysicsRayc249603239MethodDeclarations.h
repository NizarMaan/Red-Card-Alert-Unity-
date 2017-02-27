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

// UnityEngine.EventSystems.PhysicsRaycaster
struct PhysicsRaycaster_t249603239;
// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1599784723;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t3685274804;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_LayerMask3188175821.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve1599784723.h"
#include "UnityEngine_UnityEngine_RaycastHit87180320.h"

// System.Void UnityEngine.EventSystems.PhysicsRaycaster::.ctor()
extern "C"  void PhysicsRaycaster__ctor_m746296182 (PhysicsRaycaster_t249603239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.EventSystems.PhysicsRaycaster::get_eventCamera()
extern "C"  Camera_t189460977 * PhysicsRaycaster_get_eventCamera_m1229921653 (PhysicsRaycaster_t249603239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.PhysicsRaycaster::get_depth()
extern "C"  int32_t PhysicsRaycaster_get_depth_m3042587512 (PhysicsRaycaster_t249603239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.PhysicsRaycaster::get_finalEventMask()
extern "C"  int32_t PhysicsRaycaster_get_finalEventMask_m3654277131 (PhysicsRaycaster_t249603239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.LayerMask UnityEngine.EventSystems.PhysicsRaycaster::get_eventMask()
extern "C"  LayerMask_t3188175821  PhysicsRaycaster_get_eventMask_m746934396 (PhysicsRaycaster_t249603239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PhysicsRaycaster::set_eventMask(UnityEngine.LayerMask)
extern "C"  void PhysicsRaycaster_set_eventMask_m2504275837 (PhysicsRaycaster_t249603239 * __this, LayerMask_t3188175821  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PhysicsRaycaster::Raycast(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
extern "C"  void PhysicsRaycaster_Raycast_m3086016990 (PhysicsRaycaster_t249603239 * __this, PointerEventData_t1599784723 * ___eventData0, List_1_t3685274804 * ___resultAppendList1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.PhysicsRaycaster::<Raycast>m__0(UnityEngine.RaycastHit,UnityEngine.RaycastHit)
extern "C"  int32_t PhysicsRaycaster_U3CRaycastU3Em__0_m267334242 (Il2CppObject * __this /* static, unused */, RaycastHit_t87180320  ___r10, RaycastHit_t87180320  ___r21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
