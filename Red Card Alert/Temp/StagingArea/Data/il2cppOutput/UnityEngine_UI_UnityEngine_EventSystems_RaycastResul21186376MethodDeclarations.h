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

// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.String
struct String_t;
// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t21186376;
struct RaycastResult_t21186376_marshaled_pinvoke;
struct RaycastResult_t21186376_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResul21186376.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"

// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::get_gameObject()
extern "C"  GameObject_t1756533147 * RaycastResult_get_gameObject_m2999022658 (RaycastResult_t21186376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.RaycastResult::set_gameObject(UnityEngine.GameObject)
extern "C"  void RaycastResult_set_gameObject_m1138581891 (RaycastResult_t21186376 * __this, GameObject_t1756533147 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.RaycastResult::get_isValid()
extern "C"  bool RaycastResult_get_isValid_m2482925612 (RaycastResult_t21186376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.RaycastResult::Clear()
extern "C"  void RaycastResult_Clear_m3672940136 (RaycastResult_t21186376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.RaycastResult::ToString()
extern "C"  String_t* RaycastResult_ToString_m2233441736 (RaycastResult_t21186376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct RaycastResult_t21186376;
struct RaycastResult_t21186376_marshaled_pinvoke;

extern "C" void RaycastResult_t21186376_marshal_pinvoke(const RaycastResult_t21186376& unmarshaled, RaycastResult_t21186376_marshaled_pinvoke& marshaled);
extern "C" void RaycastResult_t21186376_marshal_pinvoke_back(const RaycastResult_t21186376_marshaled_pinvoke& marshaled, RaycastResult_t21186376& unmarshaled);
extern "C" void RaycastResult_t21186376_marshal_pinvoke_cleanup(RaycastResult_t21186376_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct RaycastResult_t21186376;
struct RaycastResult_t21186376_marshaled_com;

extern "C" void RaycastResult_t21186376_marshal_com(const RaycastResult_t21186376& unmarshaled, RaycastResult_t21186376_marshaled_com& marshaled);
extern "C" void RaycastResult_t21186376_marshal_com_back(const RaycastResult_t21186376_marshaled_com& marshaled, RaycastResult_t21186376& unmarshaled);
extern "C" void RaycastResult_t21186376_marshal_com_cleanup(RaycastResult_t21186376_marshaled_com& marshaled);
