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

// System.Comparison`1<UnityEngine.RaycastHit>
struct Comparison_1_t1348919171;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "UnityEngine_UnityEngine_RaycastHit87180320.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Comparison`1<UnityEngine.RaycastHit>::.ctor(System.Object,System.IntPtr)
extern "C"  void Comparison_1__ctor_m1178069812_gshared (Comparison_1_t1348919171 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Comparison_1__ctor_m1178069812(__this, ___object0, ___method1, method) ((  void (*) (Comparison_1_t1348919171 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m1178069812_gshared)(__this, ___object0, ___method1, method)
// System.Int32 System.Comparison`1<UnityEngine.RaycastHit>::Invoke(T,T)
extern "C"  int32_t Comparison_1_Invoke_m1670081898_gshared (Comparison_1_t1348919171 * __this, RaycastHit_t87180320  ___x0, RaycastHit_t87180320  ___y1, const MethodInfo* method);
#define Comparison_1_Invoke_m1670081898(__this, ___x0, ___y1, method) ((  int32_t (*) (Comparison_1_t1348919171 *, RaycastHit_t87180320 , RaycastHit_t87180320 , const MethodInfo*))Comparison_1_Invoke_m1670081898_gshared)(__this, ___x0, ___y1, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.RaycastHit>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Comparison_1_BeginInvoke_m2330243615_gshared (Comparison_1_t1348919171 * __this, RaycastHit_t87180320  ___x0, RaycastHit_t87180320  ___y1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m2330243615(__this, ___x0, ___y1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Comparison_1_t1348919171 *, RaycastHit_t87180320 , RaycastHit_t87180320 , AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Comparison_1_BeginInvoke_m2330243615_gshared)(__this, ___x0, ___y1, ___callback2, ___object3, method)
// System.Int32 System.Comparison`1<UnityEngine.RaycastHit>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t Comparison_1_EndInvoke_m3762228136_gshared (Comparison_1_t1348919171 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Comparison_1_EndInvoke_m3762228136(__this, ___result0, method) ((  int32_t (*) (Comparison_1_t1348919171 *, Il2CppObject *, const MethodInfo*))Comparison_1_EndInvoke_m3762228136_gshared)(__this, ___result0, method)
