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

// System.Delegate
struct Delegate_t3022476291;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_MethodInfo3330546337.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Delegate3022476291.h"

// System.Delegate UnityEngineInternal.NetFxCoreExtensions::CreateDelegate(System.Reflection.MethodInfo,System.Type,System.Object)
extern "C"  Delegate_t3022476291 * NetFxCoreExtensions_CreateDelegate_m2492743074 (Il2CppObject * __this /* static, unused */, MethodInfo_t * ___self0, Type_t * ___delegateType1, Il2CppObject * ___target2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo UnityEngineInternal.NetFxCoreExtensions::GetMethodInfo(System.Delegate)
extern "C"  MethodInfo_t * NetFxCoreExtensions_GetMethodInfo_m2715372889 (Il2CppObject * __this /* static, unused */, Delegate_t3022476291 * ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
