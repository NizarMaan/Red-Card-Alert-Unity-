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

// UnityEngine.TrackedReference
struct TrackedReference_t1045890189;
// System.Object
struct Il2CppObject;
struct TrackedReference_t1045890189_marshaled_pinvoke;
struct TrackedReference_t1045890189_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_TrackedReference1045890189.h"
#include "mscorlib_System_Object2689449295.h"

// System.Boolean UnityEngine.TrackedReference::op_Equality(UnityEngine.TrackedReference,UnityEngine.TrackedReference)
extern "C"  bool TrackedReference_op_Equality_m3491334086 (Il2CppObject * __this /* static, unused */, TrackedReference_t1045890189 * ___x0, TrackedReference_t1045890189 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TrackedReference::Equals(System.Object)
extern "C"  bool TrackedReference_Equals_m3153703389 (TrackedReference_t1045890189 * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TrackedReference::GetHashCode()
extern "C"  int32_t TrackedReference_GetHashCode_m811248179 (TrackedReference_t1045890189 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct TrackedReference_t1045890189;
struct TrackedReference_t1045890189_marshaled_pinvoke;

extern "C" void TrackedReference_t1045890189_marshal_pinvoke(const TrackedReference_t1045890189& unmarshaled, TrackedReference_t1045890189_marshaled_pinvoke& marshaled);
extern "C" void TrackedReference_t1045890189_marshal_pinvoke_back(const TrackedReference_t1045890189_marshaled_pinvoke& marshaled, TrackedReference_t1045890189& unmarshaled);
extern "C" void TrackedReference_t1045890189_marshal_pinvoke_cleanup(TrackedReference_t1045890189_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct TrackedReference_t1045890189;
struct TrackedReference_t1045890189_marshaled_com;

extern "C" void TrackedReference_t1045890189_marshal_com(const TrackedReference_t1045890189& unmarshaled, TrackedReference_t1045890189_marshaled_com& marshaled);
extern "C" void TrackedReference_t1045890189_marshal_com_back(const TrackedReference_t1045890189_marshaled_com& marshaled, TrackedReference_t1045890189& unmarshaled);
extern "C" void TrackedReference_t1045890189_marshal_com_cleanup(TrackedReference_t1045890189_marshaled_com& marshaled);
