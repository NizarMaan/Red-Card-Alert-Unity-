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

// UnityEngine.Events.InvokableCall`2<System.Object,System.Object>
struct InvokableCall_2_t3799696166;
// System.Object
struct Il2CppObject;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t3614634134;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Reflection_MethodInfo3330546337.h"

// System.Void UnityEngine.Events.InvokableCall`2<System.Object,System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C"  void InvokableCall_2__ctor_m974169948_gshared (InvokableCall_2_t3799696166 * __this, Il2CppObject * ___target0, MethodInfo_t * ___theFunction1, const MethodInfo* method);
#define InvokableCall_2__ctor_m974169948(__this, ___target0, ___theFunction1, method) ((  void (*) (InvokableCall_2_t3799696166 *, Il2CppObject *, MethodInfo_t *, const MethodInfo*))InvokableCall_2__ctor_m974169948_gshared)(__this, ___target0, ___theFunction1, method)
// System.Void UnityEngine.Events.InvokableCall`2<System.Object,System.Object>::Invoke(System.Object[])
extern "C"  void InvokableCall_2_Invoke_m1071013389_gshared (InvokableCall_2_t3799696166 * __this, ObjectU5BU5D_t3614634134* ___args0, const MethodInfo* method);
#define InvokableCall_2_Invoke_m1071013389(__this, ___args0, method) ((  void (*) (InvokableCall_2_t3799696166 *, ObjectU5BU5D_t3614634134*, const MethodInfo*))InvokableCall_2_Invoke_m1071013389_gshared)(__this, ___args0, method)
// System.Boolean UnityEngine.Events.InvokableCall`2<System.Object,System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern "C"  bool InvokableCall_2_Find_m1763382885_gshared (InvokableCall_2_t3799696166 * __this, Il2CppObject * ___targetObj0, MethodInfo_t * ___method1, const MethodInfo* method);
#define InvokableCall_2_Find_m1763382885(__this, ___targetObj0, ___method1, method) ((  bool (*) (InvokableCall_2_t3799696166 *, Il2CppObject *, MethodInfo_t *, const MethodInfo*))InvokableCall_2_Find_m1763382885_gshared)(__this, ___targetObj0, ___method1, method)
