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

// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "UnityEngine_UnityEngine_Experimental_Director_Play3667545548.h"
#include "UnityEngine_UnityEngine_Experimental_Director_Play3250302433.h"
#include "mscorlib_System_Object2689449295.h"

// System.Object UnityEngine.Experimental.Director.Playables::CastToInternal(System.Type,System.IntPtr,System.Int32)
extern "C"  Il2CppObject * Playables_CastToInternal_m2786985142 (Il2CppObject * __this /* static, unused */, Type_t * ___castType0, IntPtr_t ___handle1, int32_t ___version2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playables::InternalDestroy(UnityEngine.Experimental.Director.Playable&)
extern "C"  void Playables_InternalDestroy_m3873600434 (Il2CppObject * __this /* static, unused */, Playable_t3667545548 * ___playable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playables::INTERNAL_CALL_InternalDestroy(UnityEngine.Experimental.Director.Playable&)
extern "C"  void Playables_INTERNAL_CALL_InternalDestroy_m763661895 (Il2CppObject * __this /* static, unused */, Playable_t3667545548 * ___playable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playables::ConnectInternal(UnityEngine.Experimental.Director.Playable&,UnityEngine.Experimental.Director.Playable&,System.Int32,System.Int32)
extern "C"  bool Playables_ConnectInternal_m2792280857 (Il2CppObject * __this /* static, unused */, Playable_t3667545548 * ___source0, Playable_t3667545548 * ___target1, int32_t ___sourceOutputPort2, int32_t ___targetInputPort3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playables::INTERNAL_CALL_ConnectInternal(UnityEngine.Experimental.Director.Playable&,UnityEngine.Experimental.Director.Playable&,System.Int32,System.Int32)
extern "C"  bool Playables_INTERNAL_CALL_ConnectInternal_m3834915264 (Il2CppObject * __this /* static, unused */, Playable_t3667545548 * ___source0, Playable_t3667545548 * ___target1, int32_t ___sourceOutputPort2, int32_t ___targetInputPort3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playables::DisconnectInternal(UnityEngine.Experimental.Director.Playable&,System.Int32)
extern "C"  void Playables_DisconnectInternal_m21696045 (Il2CppObject * __this /* static, unused */, Playable_t3667545548 * ___target0, int32_t ___inputPort1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playables::INTERNAL_CALL_DisconnectInternal(UnityEngine.Experimental.Director.Playable&,System.Int32)
extern "C"  void Playables_INTERNAL_CALL_DisconnectInternal_m2526207778 (Il2CppObject * __this /* static, unused */, Playable_t3667545548 * ___target0, int32_t ___inputPort1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playables::CheckInputBounds(UnityEngine.Experimental.Director.Playable,System.Int32)
extern "C"  bool Playables_CheckInputBounds_m2953342617 (Il2CppObject * __this /* static, unused */, Playable_t3667545548  ___playable0, int32_t ___inputIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playables::IsValid(UnityEngine.Experimental.Director.Playable)
extern "C"  bool Playables_IsValid_m3689585029 (Il2CppObject * __this /* static, unused */, Playable_t3667545548  ___playable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Experimental.Director.Playables::GetInputCountValidated(UnityEngine.Experimental.Director.Playable,System.Type)
extern "C"  int32_t Playables_GetInputCountValidated_m163517061 (Il2CppObject * __this /* static, unused */, Playable_t3667545548  ___playable0, Type_t * ___typeofPlayable1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Experimental.Director.Playables::GetOutputCountValidated(UnityEngine.Experimental.Director.Playable,System.Type)
extern "C"  int32_t Playables_GetOutputCountValidated_m3428930850 (Il2CppObject * __this /* static, unused */, Playable_t3667545548  ___playable0, Type_t * ___typeofPlayable1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Experimental.Director.PlayState UnityEngine.Experimental.Director.Playables::GetPlayStateValidated(UnityEngine.Experimental.Director.Playable,System.Type)
extern "C"  int32_t Playables_GetPlayStateValidated_m2756684446 (Il2CppObject * __this /* static, unused */, Playable_t3667545548  ___playable0, Type_t * ___typeofPlayable1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playables::SetPlayStateValidated(UnityEngine.Experimental.Director.Playable,UnityEngine.Experimental.Director.PlayState,System.Type)
extern "C"  void Playables_SetPlayStateValidated_m770460097 (Il2CppObject * __this /* static, unused */, Playable_t3667545548  ___playable0, int32_t ___playState1, Type_t * ___typeofPlayable2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double UnityEngine.Experimental.Director.Playables::GetTimeValidated(UnityEngine.Experimental.Director.Playable,System.Type)
extern "C"  double Playables_GetTimeValidated_m788360268 (Il2CppObject * __this /* static, unused */, Playable_t3667545548  ___playable0, Type_t * ___typeofPlayable1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playables::SetTimeValidated(UnityEngine.Experimental.Director.Playable,System.Double,System.Type)
extern "C"  void Playables_SetTimeValidated_m3858295249 (Il2CppObject * __this /* static, unused */, Playable_t3667545548  ___playable0, double ___time1, Type_t * ___typeofPlayable2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double UnityEngine.Experimental.Director.Playables::GetDurationValidated(UnityEngine.Experimental.Director.Playable,System.Type)
extern "C"  double Playables_GetDurationValidated_m4005203433 (Il2CppObject * __this /* static, unused */, Playable_t3667545548  ___playable0, Type_t * ___typeofPlayable1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playables::SetDurationValidated(UnityEngine.Experimental.Director.Playable,System.Double,System.Type)
extern "C"  void Playables_SetDurationValidated_m1466172352 (Il2CppObject * __this /* static, unused */, Playable_t3667545548  ___playable0, double ___duration1, Type_t * ___typeofPlayable2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Experimental.Director.Playable UnityEngine.Experimental.Director.Playables::GetInputValidated(UnityEngine.Experimental.Director.Playable,System.Int32,System.Type)
extern "C"  Playable_t3667545548  Playables_GetInputValidated_m2433189843 (Il2CppObject * __this /* static, unused */, Playable_t3667545548  ___playable0, int32_t ___inputPort1, Type_t * ___typeofPlayable2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Experimental.Director.Playable UnityEngine.Experimental.Director.Playables::GetOutputValidated(UnityEngine.Experimental.Director.Playable,System.Int32,System.Type)
extern "C"  Playable_t3667545548  Playables_GetOutputValidated_m1886200224 (Il2CppObject * __this /* static, unused */, Playable_t3667545548  ___playable0, int32_t ___outputPort1, Type_t * ___typeofPlayable2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playables::SetInputWeightValidated(UnityEngine.Experimental.Director.Playable,System.Int32,System.Single,System.Type)
extern "C"  void Playables_SetInputWeightValidated_m3780238668 (Il2CppObject * __this /* static, unused */, Playable_t3667545548  ___playable0, int32_t ___inputIndex1, float ___weight2, Type_t * ___typeofPlayable3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Experimental.Director.Playables::GetInputWeightValidated(UnityEngine.Experimental.Director.Playable,System.Int32,System.Type)
extern "C"  float Playables_GetInputWeightValidated_m2453142047 (Il2CppObject * __this /* static, unused */, Playable_t3667545548  ___playable0, int32_t ___index1, Type_t * ___typeofPlayable2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playables::Equals(UnityEngine.Experimental.Director.Playable,System.Object)
extern "C"  bool Playables_Equals_m3918086298 (Il2CppObject * __this /* static, unused */, Playable_t3667545548  ___isAPlayable0, Il2CppObject * ___mightBeAnythingOrNull1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
