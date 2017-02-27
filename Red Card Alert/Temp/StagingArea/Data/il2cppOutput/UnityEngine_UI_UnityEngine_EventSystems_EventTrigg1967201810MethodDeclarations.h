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

// UnityEngine.EventSystems.EventTrigger
struct EventTrigger_t1967201810;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct List_1_t2734131178;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t2681005625;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1599784723;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t1524870173;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_EventTrigg2524067914.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_BaseEventD2681005625.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve1599784723.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_AxisEventD1524870173.h"

// System.Void UnityEngine.EventSystems.EventTrigger::.ctor()
extern "C"  void EventTrigger__ctor_m3336772775 (EventTrigger_t1967201810 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry> UnityEngine.EventSystems.EventTrigger::get_triggers()
extern "C"  List_1_t2734131178 * EventTrigger_get_triggers_m3705314690 (EventTrigger_t1967201810 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::set_triggers(System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>)
extern "C"  void EventTrigger_set_triggers_m644949167 (EventTrigger_t1967201810 * __this, List_1_t2734131178 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::Execute(UnityEngine.EventSystems.EventTriggerType,UnityEngine.EventSystems.BaseEventData)
extern "C"  void EventTrigger_Execute_m75316349 (EventTrigger_t1967201810 * __this, int32_t ___id0, BaseEventData_t2681005625 * ___eventData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnPointerEnter(UnityEngine.EventSystems.PointerEventData)
extern "C"  void EventTrigger_OnPointerEnter_m4065444657 (EventTrigger_t1967201810 * __this, PointerEventData_t1599784723 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnPointerExit(UnityEngine.EventSystems.PointerEventData)
extern "C"  void EventTrigger_OnPointerExit_m2119176877 (EventTrigger_t1967201810 * __this, PointerEventData_t1599784723 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void EventTrigger_OnDrag_m2352478440 (EventTrigger_t1967201810 * __this, PointerEventData_t1599784723 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnDrop(UnityEngine.EventSystems.PointerEventData)
extern "C"  void EventTrigger_OnDrop_m2072428555 (EventTrigger_t1967201810 * __this, PointerEventData_t1599784723 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C"  void EventTrigger_OnPointerDown_m2163267835 (EventTrigger_t1967201810 * __this, PointerEventData_t1599784723 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern "C"  void EventTrigger_OnPointerUp_m2791622548 (EventTrigger_t1967201810 * __this, PointerEventData_t1599784723 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
extern "C"  void EventTrigger_OnPointerClick_m413999043 (EventTrigger_t1967201810 * __this, PointerEventData_t1599784723 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnSelect(UnityEngine.EventSystems.BaseEventData)
extern "C"  void EventTrigger_OnSelect_m183653090 (EventTrigger_t1967201810 * __this, BaseEventData_t2681005625 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnDeselect(UnityEngine.EventSystems.BaseEventData)
extern "C"  void EventTrigger_OnDeselect_m3623098765 (EventTrigger_t1967201810 * __this, BaseEventData_t2681005625 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnScroll(UnityEngine.EventSystems.PointerEventData)
extern "C"  void EventTrigger_OnScroll_m626934407 (EventTrigger_t1967201810 * __this, PointerEventData_t1599784723 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnMove(UnityEngine.EventSystems.AxisEventData)
extern "C"  void EventTrigger_OnMove_m3781382851 (EventTrigger_t1967201810 * __this, AxisEventData_t1524870173 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnUpdateSelected(UnityEngine.EventSystems.BaseEventData)
extern "C"  void EventTrigger_OnUpdateSelected_m1418060210 (EventTrigger_t1967201810 * __this, BaseEventData_t2681005625 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnInitializePotentialDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void EventTrigger_OnInitializePotentialDrag_m1969784290 (EventTrigger_t1967201810 * __this, PointerEventData_t1599784723 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void EventTrigger_OnBeginDrag_m122654749 (EventTrigger_t1967201810 * __this, PointerEventData_t1599784723 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void EventTrigger_OnEndDrag_m3420351025 (EventTrigger_t1967201810 * __this, PointerEventData_t1599784723 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnSubmit(UnityEngine.EventSystems.BaseEventData)
extern "C"  void EventTrigger_OnSubmit_m3105572166 (EventTrigger_t1967201810 * __this, BaseEventData_t2681005625 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnCancel(UnityEngine.EventSystems.BaseEventData)
extern "C"  void EventTrigger_OnCancel_m582641728 (EventTrigger_t1967201810 * __this, BaseEventData_t2681005625 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
