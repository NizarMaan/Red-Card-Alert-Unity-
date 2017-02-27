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

// UnityEngine.Experimental.Director.Playable[]
struct PlayableU5BU5D_t4034110853;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Experimental_Director_Play3667545548.h"
#include "UnityEngine_UnityEngine_Experimental_Director_Play3250302433.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void UnityEngine.Experimental.Director.Playable::Destroy()
extern "C"  void Playable_Destroy_m3675363825 (Playable_t3667545548 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playable::IsValid()
extern "C"  bool Playable_IsValid_m2102916683 (Playable_t3667545548 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playable::IsValidInternal(UnityEngine.Experimental.Director.Playable&)
extern "C"  bool Playable_IsValidInternal_m2681498367 (Il2CppObject * __this /* static, unused */, Playable_t3667545548 * ___playable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playable::INTERNAL_CALL_IsValidInternal(UnityEngine.Experimental.Director.Playable&)
extern "C"  bool Playable_INTERNAL_CALL_IsValidInternal_m3509544226 (Il2CppObject * __this /* static, unused */, Playable_t3667545548 * ___playable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playable::Connect(UnityEngine.Experimental.Director.Playable,UnityEngine.Experimental.Director.Playable,System.Int32,System.Int32)
extern "C"  bool Playable_Connect_m1305428597 (Il2CppObject * __this /* static, unused */, Playable_t3667545548  ___source0, Playable_t3667545548  ___target1, int32_t ___sourceOutputPort2, int32_t ___targetInputPort3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::Disconnect(UnityEngine.Experimental.Director.Playable,System.Int32)
extern "C"  void Playable_Disconnect_m2489180239 (Il2CppObject * __this /* static, unused */, Playable_t3667545548  ___target0, int32_t ___inputPort1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Experimental.Director.Playable::get_inputCount()
extern "C"  int32_t Playable_get_inputCount_m1751152777 (Playable_t3667545548 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Experimental.Director.Playable::get_outputCount()
extern "C"  int32_t Playable_get_outputCount_m4289390470 (Playable_t3667545548 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Experimental.Director.PlayState UnityEngine.Experimental.Director.Playable::get_state()
extern "C"  int32_t Playable_get_state_m2895939980 (Playable_t3667545548 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::set_state(UnityEngine.Experimental.Director.PlayState)
extern "C"  void Playable_set_state_m628503053 (Playable_t3667545548 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double UnityEngine.Experimental.Director.Playable::get_time()
extern "C"  double Playable_get_time_m188535056 (Playable_t3667545548 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::set_time(System.Double)
extern "C"  void Playable_set_time_m1337741429 (Playable_t3667545548 * __this, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Experimental.Director.PlayState UnityEngine.Experimental.Director.Playable::GetPlayStateInternal(UnityEngine.Experimental.Director.Playable&)
extern "C"  int32_t Playable_GetPlayStateInternal_m1333214605 (Il2CppObject * __this /* static, unused */, Playable_t3667545548 * ___playable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Experimental.Director.PlayState UnityEngine.Experimental.Director.Playable::INTERNAL_CALL_GetPlayStateInternal(UnityEngine.Experimental.Director.Playable&)
extern "C"  int32_t Playable_INTERNAL_CALL_GetPlayStateInternal_m3560305748 (Il2CppObject * __this /* static, unused */, Playable_t3667545548 * ___playable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::SetPlayStateInternal(UnityEngine.Experimental.Director.Playable&,UnityEngine.Experimental.Director.PlayState)
extern "C"  void Playable_SetPlayStateInternal_m2982991950 (Il2CppObject * __this /* static, unused */, Playable_t3667545548 * ___playable0, int32_t ___playState1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::INTERNAL_CALL_SetPlayStateInternal(UnityEngine.Experimental.Director.Playable&,UnityEngine.Experimental.Director.PlayState)
extern "C"  void Playable_INTERNAL_CALL_SetPlayStateInternal_m1141121823 (Il2CppObject * __this /* static, unused */, Playable_t3667545548 * ___playable0, int32_t ___playState1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double UnityEngine.Experimental.Director.Playable::GetTimeInternal(UnityEngine.Experimental.Director.Playable&)
extern "C"  double Playable_GetTimeInternal_m4193977093 (Il2CppObject * __this /* static, unused */, Playable_t3667545548 * ___playable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double UnityEngine.Experimental.Director.Playable::INTERNAL_CALL_GetTimeInternal(UnityEngine.Experimental.Director.Playable&)
extern "C"  double Playable_INTERNAL_CALL_GetTimeInternal_m1561742350 (Il2CppObject * __this /* static, unused */, Playable_t3667545548 * ___playable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::SetTimeInternal(UnityEngine.Experimental.Director.Playable&,System.Double)
extern "C"  void Playable_SetTimeInternal_m1923258884 (Il2CppObject * __this /* static, unused */, Playable_t3667545548 * ___playable0, double ___time1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::INTERNAL_CALL_SetTimeInternal(UnityEngine.Experimental.Director.Playable&,System.Double)
extern "C"  void Playable_INTERNAL_CALL_SetTimeInternal_m2302691195 (Il2CppObject * __this /* static, unused */, Playable_t3667545548 * ___playable0, double ___time1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double UnityEngine.Experimental.Director.Playable::get_duration()
extern "C"  double Playable_get_duration_m4155589845 (Playable_t3667545548 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::set_duration(System.Double)
extern "C"  void Playable_set_duration_m3772907818 (Playable_t3667545548 * __this, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double UnityEngine.Experimental.Director.Playable::GetDurationInternal(UnityEngine.Experimental.Director.Playable&)
extern "C"  double Playable_GetDurationInternal_m3180992642 (Il2CppObject * __this /* static, unused */, Playable_t3667545548 * ___playable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double UnityEngine.Experimental.Director.Playable::INTERNAL_CALL_GetDurationInternal(UnityEngine.Experimental.Director.Playable&)
extern "C"  double Playable_INTERNAL_CALL_GetDurationInternal_m2061318387 (Il2CppObject * __this /* static, unused */, Playable_t3667545548 * ___playable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::SetDurationInternal(UnityEngine.Experimental.Director.Playable&,System.Double)
extern "C"  void Playable_SetDurationInternal_m3664705881 (Il2CppObject * __this /* static, unused */, Playable_t3667545548 * ___playable0, double ___duration1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::INTERNAL_CALL_SetDurationInternal(UnityEngine.Experimental.Director.Playable&,System.Double)
extern "C"  void Playable_INTERNAL_CALL_SetDurationInternal_m1052618056 (Il2CppObject * __this /* static, unused */, Playable_t3667545548 * ___playable0, double ___duration1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Experimental.Director.Playable::GetInputCountInternal(UnityEngine.Experimental.Director.Playable&)
extern "C"  int32_t Playable_GetInputCountInternal_m3354921878 (Il2CppObject * __this /* static, unused */, Playable_t3667545548 * ___playable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Experimental.Director.Playable::INTERNAL_CALL_GetInputCountInternal(UnityEngine.Experimental.Director.Playable&)
extern "C"  int32_t Playable_INTERNAL_CALL_GetInputCountInternal_m2921284003 (Il2CppObject * __this /* static, unused */, Playable_t3667545548 * ___playable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Experimental.Director.Playable::GetOutputCountInternal(UnityEngine.Experimental.Director.Playable&)
extern "C"  int32_t Playable_GetOutputCountInternal_m354236047 (Il2CppObject * __this /* static, unused */, Playable_t3667545548 * ___playable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Experimental.Director.Playable::INTERNAL_CALL_GetOutputCountInternal(UnityEngine.Experimental.Director.Playable&)
extern "C"  int32_t Playable_INTERNAL_CALL_GetOutputCountInternal_m224211058 (Il2CppObject * __this /* static, unused */, Playable_t3667545548 * ___playable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Experimental.Director.Playable[] UnityEngine.Experimental.Director.Playable::GetInputs()
extern "C"  PlayableU5BU5D_t4034110853* Playable_GetInputs_m2701651284 (Playable_t3667545548 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Experimental.Director.Playable UnityEngine.Experimental.Director.Playable::GetInput(System.Int32)
extern "C"  Playable_t3667545548  Playable_GetInput_m2343344472 (Playable_t3667545548 * __this, int32_t ___inputPort0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Experimental.Director.Playable UnityEngine.Experimental.Director.Playable::GetInputInternal(UnityEngine.Experimental.Director.Playable&,System.Int32)
extern "C"  Playable_t3667545548  Playable_GetInputInternal_m2831827086 (Il2CppObject * __this /* static, unused */, Playable_t3667545548 * ___playable0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::INTERNAL_CALL_GetInputInternal(UnityEngine.Experimental.Director.Playable&,System.Int32,UnityEngine.Experimental.Director.Playable&)
extern "C"  void Playable_INTERNAL_CALL_GetInputInternal_m1720243548 (Il2CppObject * __this /* static, unused */, Playable_t3667545548 * ___playable0, int32_t ___index1, Playable_t3667545548 * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Experimental.Director.Playable UnityEngine.Experimental.Director.Playable::GetOutput(System.Int32)
extern "C"  Playable_t3667545548  Playable_GetOutput_m1530310341 (Playable_t3667545548 * __this, int32_t ___outputPort0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Experimental.Director.Playable UnityEngine.Experimental.Director.Playable::GetOutputInternal(UnityEngine.Experimental.Director.Playable&,System.Int32)
extern "C"  Playable_t3667545548  Playable_GetOutputInternal_m1788163321 (Il2CppObject * __this /* static, unused */, Playable_t3667545548 * ___playable0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::INTERNAL_CALL_GetOutputInternal(UnityEngine.Experimental.Director.Playable&,System.Int32,UnityEngine.Experimental.Director.Playable&)
extern "C"  void Playable_INTERNAL_CALL_GetOutputInternal_m1864790245 (Il2CppObject * __this /* static, unused */, Playable_t3667545548 * ___playable0, int32_t ___index1, Playable_t3667545548 * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::SetInputWeightFromIndexInternal(UnityEngine.Experimental.Director.Playable&,System.Int32,System.Single)
extern "C"  void Playable_SetInputWeightFromIndexInternal_m1264185407 (Il2CppObject * __this /* static, unused */, Playable_t3667545548 * ___playable0, int32_t ___index1, float ___weight2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::INTERNAL_CALL_SetInputWeightFromIndexInternal(UnityEngine.Experimental.Director.Playable&,System.Int32,System.Single)
extern "C"  void Playable_INTERNAL_CALL_SetInputWeightFromIndexInternal_m2039337128 (Il2CppObject * __this /* static, unused */, Playable_t3667545548 * ___playable0, int32_t ___index1, float ___weight2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playable::SetInputWeight(System.Int32,System.Single)
extern "C"  bool Playable_SetInputWeight_m3424075019 (Playable_t3667545548 * __this, int32_t ___inputIndex0, float ___weight1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Experimental.Director.Playable::GetInputWeight(System.Int32)
extern "C"  float Playable_GetInputWeight_m745267058 (Playable_t3667545548 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Experimental.Director.Playable::GetInputWeightInternal(UnityEngine.Experimental.Director.Playable&,System.Int32)
extern "C"  float Playable_GetInputWeightInternal_m381407588 (Il2CppObject * __this /* static, unused */, Playable_t3667545548 * ___playable0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Experimental.Director.Playable::INTERNAL_CALL_GetInputWeightInternal(UnityEngine.Experimental.Director.Playable&,System.Int32)
extern "C"  float Playable_INTERNAL_CALL_GetInputWeightInternal_m3329579253 (Il2CppObject * __this /* static, unused */, Playable_t3667545548 * ___playable0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playable::Equals(System.Object)
extern "C"  bool Playable_Equals_m3780922516 (Playable_t3667545548 * __this, Il2CppObject * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Experimental.Director.Playable::GetHashCode()
extern "C"  int32_t Playable_GetHashCode_m291506040 (Playable_t3667545548 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playable::CheckInputBounds(System.Int32)
extern "C"  bool Playable_CheckInputBounds_m1458023351 (Playable_t3667545548 * __this, int32_t ___inputIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playable::CheckInputBounds(System.Int32,System.Boolean)
extern "C"  bool Playable_CheckInputBounds_m1095657528 (Playable_t3667545548 * __this, int32_t ___inputIndex0, bool ___acceptAny1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
