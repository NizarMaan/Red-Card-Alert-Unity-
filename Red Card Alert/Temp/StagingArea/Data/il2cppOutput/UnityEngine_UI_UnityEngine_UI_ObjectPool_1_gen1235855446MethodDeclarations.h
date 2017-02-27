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

// UnityEngine.UI.ObjectPool`1<System.Object>
struct ObjectPool_1_t1235855446;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t4056035046;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
extern "C"  void ObjectPool_1__ctor_m1532275833_gshared (ObjectPool_1_t1235855446 * __this, UnityAction_1_t4056035046 * ___actionOnGet0, UnityAction_1_t4056035046 * ___actionOnRelease1, const MethodInfo* method);
#define ObjectPool_1__ctor_m1532275833(__this, ___actionOnGet0, ___actionOnRelease1, method) ((  void (*) (ObjectPool_1_t1235855446 *, UnityAction_1_t4056035046 *, UnityAction_1_t4056035046 *, const MethodInfo*))ObjectPool_1__ctor_m1532275833_gshared)(__this, ___actionOnGet0, ___actionOnRelease1, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countAll()
extern "C"  int32_t ObjectPool_1_get_countAll_m4217365918_gshared (ObjectPool_1_t1235855446 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countAll_m4217365918(__this, method) ((  int32_t (*) (ObjectPool_1_t1235855446 *, const MethodInfo*))ObjectPool_1_get_countAll_m4217365918_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::set_countAll(System.Int32)
extern "C"  void ObjectPool_1_set_countAll_m1742773675_gshared (ObjectPool_1_t1235855446 * __this, int32_t ___value0, const MethodInfo* method);
#define ObjectPool_1_set_countAll_m1742773675(__this, ___value0, method) ((  void (*) (ObjectPool_1_t1235855446 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m1742773675_gshared)(__this, ___value0, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countActive()
extern "C"  int32_t ObjectPool_1_get_countActive_m2655657865_gshared (ObjectPool_1_t1235855446 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countActive_m2655657865(__this, method) ((  int32_t (*) (ObjectPool_1_t1235855446 *, const MethodInfo*))ObjectPool_1_get_countActive_m2655657865_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countInactive()
extern "C"  int32_t ObjectPool_1_get_countInactive_m763736764_gshared (ObjectPool_1_t1235855446 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countInactive_m763736764(__this, method) ((  int32_t (*) (ObjectPool_1_t1235855446 *, const MethodInfo*))ObjectPool_1_get_countInactive_m763736764_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Object>::Get()
extern "C"  Il2CppObject * ObjectPool_1_Get_m3724675538_gshared (ObjectPool_1_t1235855446 * __this, const MethodInfo* method);
#define ObjectPool_1_Get_m3724675538(__this, method) ((  Il2CppObject * (*) (ObjectPool_1_t1235855446 *, const MethodInfo*))ObjectPool_1_Get_m3724675538_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::Release(T)
extern "C"  void ObjectPool_1_Release_m1615270002_gshared (ObjectPool_1_t1235855446 * __this, Il2CppObject * ___element0, const MethodInfo* method);
#define ObjectPool_1_Release_m1615270002(__this, ___element0, method) ((  void (*) (ObjectPool_1_t1235855446 *, Il2CppObject *, const MethodInfo*))ObjectPool_1_Release_m1615270002_gshared)(__this, ___element0, method)
