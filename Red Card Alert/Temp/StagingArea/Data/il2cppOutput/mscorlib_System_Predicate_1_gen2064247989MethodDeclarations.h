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

// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t2064247989;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "UnityEngine_UnityEngine_UILineInfo3621277874.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Predicate`1<UnityEngine.UILineInfo>::.ctor(System.Object,System.IntPtr)
extern "C"  void Predicate_1__ctor_m784266182_gshared (Predicate_1_t2064247989 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Predicate_1__ctor_m784266182(__this, ___object0, ___method1, method) ((  void (*) (Predicate_1_t2064247989 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m784266182_gshared)(__this, ___object0, ___method1, method)
// System.Boolean System.Predicate`1<UnityEngine.UILineInfo>::Invoke(T)
extern "C"  bool Predicate_1_Invoke_m577088274_gshared (Predicate_1_t2064247989 * __this, UILineInfo_t3621277874  ___obj0, const MethodInfo* method);
#define Predicate_1_Invoke_m577088274(__this, ___obj0, method) ((  bool (*) (Predicate_1_t2064247989 *, UILineInfo_t3621277874 , const MethodInfo*))Predicate_1_Invoke_m577088274_gshared)(__this, ___obj0, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UILineInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Predicate_1_BeginInvoke_m2329589669_gshared (Predicate_1_t2064247989 * __this, UILineInfo_t3621277874  ___obj0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m2329589669(__this, ___obj0, ___callback1, ___object2, method) ((  Il2CppObject * (*) (Predicate_1_t2064247989 *, UILineInfo_t3621277874 , AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Predicate_1_BeginInvoke_m2329589669_gshared)(__this, ___obj0, ___callback1, ___object2, method)
// System.Boolean System.Predicate`1<UnityEngine.UILineInfo>::EndInvoke(System.IAsyncResult)
extern "C"  bool Predicate_1_EndInvoke_m3442731496_gshared (Predicate_1_t2064247989 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Predicate_1_EndInvoke_m3442731496(__this, ___result0, method) ((  bool (*) (Predicate_1_t2064247989 *, Il2CppObject *, const MethodInfo*))Predicate_1_EndInvoke_m3442731496_gshared)(__this, ___result0, method)
