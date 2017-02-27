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

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1599784723;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t3466835263;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Camera
struct Camera_t189460977;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_EventSyste3466835263.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResul21186376.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve2981963041.h"

// System.Void UnityEngine.EventSystems.PointerEventData::.ctor(UnityEngine.EventSystems.EventSystem)
extern "C"  void PointerEventData__ctor_m3674067728 (PointerEventData_t1599784723 * __this, EventSystem_t3466835263 * ___eventSystem0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_pointerEnter()
extern "C"  GameObject_t1756533147 * PointerEventData_get_pointerEnter_m2114522773 (PointerEventData_t1599784723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerEnter(UnityEngine.GameObject)
extern "C"  void PointerEventData_set_pointerEnter_m1440587006 (PointerEventData_t1599784723 * __this, GameObject_t1756533147 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_lastPress()
extern "C"  GameObject_t1756533147 * PointerEventData_get_lastPress_m3835070463 (PointerEventData_t1599784723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_lastPress(UnityEngine.GameObject)
extern "C"  void PointerEventData_set_lastPress_m882263356 (PointerEventData_t1599784723 * __this, GameObject_t1756533147 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_rawPointerPress()
extern "C"  GameObject_t1756533147 * PointerEventData_get_rawPointerPress_m448871540 (PointerEventData_t1599784723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_rawPointerPress(UnityEngine.GameObject)
extern "C"  void PointerEventData_set_rawPointerPress_m1484888025 (PointerEventData_t1599784723 * __this, GameObject_t1756533147 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_pointerDrag()
extern "C"  GameObject_t1756533147 * PointerEventData_get_pointerDrag_m2740415629 (PointerEventData_t1599784723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerDrag(UnityEngine.GameObject)
extern "C"  void PointerEventData_set_pointerDrag_m3543074708 (PointerEventData_t1599784723 * __this, GameObject_t1756533147 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::get_pointerCurrentRaycast()
extern "C"  RaycastResult_t21186376  PointerEventData_get_pointerCurrentRaycast_m1374279130 (PointerEventData_t1599784723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerCurrentRaycast(UnityEngine.EventSystems.RaycastResult)
extern "C"  void PointerEventData_set_pointerCurrentRaycast_m2431897513 (PointerEventData_t1599784723 * __this, RaycastResult_t21186376  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::get_pointerPressRaycast()
extern "C"  RaycastResult_t21186376  PointerEventData_get_pointerPressRaycast_m3131640124 (PointerEventData_t1599784723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerPressRaycast(UnityEngine.EventSystems.RaycastResult)
extern "C"  void PointerEventData_set_pointerPressRaycast_m2551142399 (PointerEventData_t1599784723 * __this, RaycastResult_t21186376  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerEventData::get_eligibleForClick()
extern "C"  bool PointerEventData_get_eligibleForClick_m2497780621 (PointerEventData_t1599784723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_eligibleForClick(System.Boolean)
extern "C"  void PointerEventData_set_eligibleForClick_m2036057844 (PointerEventData_t1599784723 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.PointerEventData::get_pointerId()
extern "C"  int32_t PointerEventData_get_pointerId_m2835313597 (PointerEventData_t1599784723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerId(System.Int32)
extern "C"  void PointerEventData_set_pointerId_m2349910516 (PointerEventData_t1599784723 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
extern "C"  Vector2_t2243707579  PointerEventData_get_position_m2131765015 (PointerEventData_t1599784723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_position(UnityEngine.Vector2)
extern "C"  void PointerEventData_set_position_m794507622 (PointerEventData_t1599784723 * __this, Vector2_t2243707579  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_delta()
extern "C"  Vector2_t2243707579  PointerEventData_get_delta_m1072163964 (PointerEventData_t1599784723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_delta(UnityEngine.Vector2)
extern "C"  void PointerEventData_set_delta_m3672873329 (PointerEventData_t1599784723 * __this, Vector2_t2243707579  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_pressPosition()
extern "C"  Vector2_t2243707579  PointerEventData_get_pressPosition_m1206276610 (PointerEventData_t1599784723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pressPosition(UnityEngine.Vector2)
extern "C"  void PointerEventData_set_pressPosition_m2094137883 (PointerEventData_t1599784723 * __this, Vector2_t2243707579  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::get_worldPosition()
extern "C"  Vector3_t2243707580  PointerEventData_get_worldPosition_m3746978956 (PointerEventData_t1599784723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_worldPosition(UnityEngine.Vector3)
extern "C"  void PointerEventData_set_worldPosition_m192283671 (PointerEventData_t1599784723 * __this, Vector3_t2243707580  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::get_worldNormal()
extern "C"  Vector3_t2243707580  PointerEventData_get_worldNormal_m1704987468 (PointerEventData_t1599784723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_worldNormal(UnityEngine.Vector3)
extern "C"  void PointerEventData_set_worldNormal_m2025727441 (PointerEventData_t1599784723 * __this, Vector3_t2243707580  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.EventSystems.PointerEventData::get_clickTime()
extern "C"  float PointerEventData_get_clickTime_m2587872034 (PointerEventData_t1599784723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_clickTime(System.Single)
extern "C"  void PointerEventData_set_clickTime_m3931922487 (PointerEventData_t1599784723 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.PointerEventData::get_clickCount()
extern "C"  int32_t PointerEventData_get_clickCount_m4064532478 (PointerEventData_t1599784723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_clickCount(System.Int32)
extern "C"  void PointerEventData_set_clickCount_m2095939005 (PointerEventData_t1599784723 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_scrollDelta()
extern "C"  Vector2_t2243707579  PointerEventData_get_scrollDelta_m1283145047 (PointerEventData_t1599784723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_scrollDelta(UnityEngine.Vector2)
extern "C"  void PointerEventData_set_scrollDelta_m4002219844 (PointerEventData_t1599784723 * __this, Vector2_t2243707579  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerEventData::get_useDragThreshold()
extern "C"  bool PointerEventData_get_useDragThreshold_m1801224989 (PointerEventData_t1599784723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_useDragThreshold(System.Boolean)
extern "C"  void PointerEventData_set_useDragThreshold_m2778439880 (PointerEventData_t1599784723 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerEventData::get_dragging()
extern "C"  bool PointerEventData_get_dragging_m220490640 (PointerEventData_t1599784723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_dragging(System.Boolean)
extern "C"  void PointerEventData_set_dragging_m915629341 (PointerEventData_t1599784723 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::get_button()
extern "C"  int32_t PointerEventData_get_button_m2339189303 (PointerEventData_t1599784723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_button(UnityEngine.EventSystems.PointerEventData/InputButton)
extern "C"  void PointerEventData_set_button_m3279441906 (PointerEventData_t1599784723 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerEventData::IsPointerMoving()
extern "C"  bool PointerEventData_IsPointerMoving_m3603045889 (PointerEventData_t1599784723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerEventData::IsScrolling()
extern "C"  bool PointerEventData_IsScrolling_m1971908975 (PointerEventData_t1599784723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.EventSystems.PointerEventData::get_enterEventCamera()
extern "C"  Camera_t189460977 * PointerEventData_get_enterEventCamera_m1539996745 (PointerEventData_t1599784723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.EventSystems.PointerEventData::get_pressEventCamera()
extern "C"  Camera_t189460977 * PointerEventData_get_pressEventCamera_m724559964 (PointerEventData_t1599784723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_pointerPress()
extern "C"  GameObject_t1756533147 * PointerEventData_get_pointerPress_m880101744 (PointerEventData_t1599784723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerPress(UnityEngine.GameObject)
extern "C"  void PointerEventData_set_pointerPress_m1418261989 (PointerEventData_t1599784723 * __this, GameObject_t1756533147 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.PointerEventData::ToString()
extern "C"  String_t* PointerEventData_ToString_m1218584363 (PointerEventData_t1599784723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
