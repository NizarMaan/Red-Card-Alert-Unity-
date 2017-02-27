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

// UnityEngine.Experimental.Director.CustomAnimationPlayable
struct CustomAnimationPlayable_t3423099547;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Experimental.Director.Playable>
struct IEnumerable_1_t3959672593;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Experimental_Director_Play3667545548.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "UnityEngine_UnityEngine_Experimental_Director_Cust3423099547.h"
#include "UnityEngine_UnityEngine_Experimental_Director_Anim1693994278.h"
#include "UnityEngine_UnityEngine_Experimental_Director_Fram1120735295.h"
#include "UnityEngine_UnityEngine_Experimental_Director_Play3250302433.h"

// System.Void UnityEngine.Experimental.Director.CustomAnimationPlayable::.ctor()
extern "C"  void CustomAnimationPlayable__ctor_m2580931540 (CustomAnimationPlayable_t3423099547 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Experimental.Director.Playable UnityEngine.Experimental.Director.CustomAnimationPlayable::get_node()
extern "C"  Playable_t3667545548  CustomAnimationPlayable_get_node_m2279367825 (CustomAnimationPlayable_t3423099547 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.CustomAnimationPlayable::SetHandle(System.Int32,System.IntPtr)
extern "C"  void CustomAnimationPlayable_SetHandle_m1081373665 (CustomAnimationPlayable_t3423099547 * __this, int32_t ___version0, IntPtr_t ___playableHandle1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.CustomAnimationPlayable::Destroy()
extern "C"  void CustomAnimationPlayable_Destroy_m4140105698 (CustomAnimationPlayable_t3423099547 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Experimental.Director.Playable UnityEngine.Experimental.Director.CustomAnimationPlayable::op_Implicit(UnityEngine.Experimental.Director.CustomAnimationPlayable)
extern "C"  Playable_t3667545548  CustomAnimationPlayable_op_Implicit_m2651548371 (Il2CppObject * __this /* static, unused */, CustomAnimationPlayable_t3423099547 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Experimental.Director.AnimationPlayable UnityEngine.Experimental.Director.CustomAnimationPlayable::op_Implicit(UnityEngine.Experimental.Director.CustomAnimationPlayable)
extern "C"  AnimationPlayable_t1693994278  CustomAnimationPlayable_op_Implicit_m3677069457 (Il2CppObject * __this /* static, unused */, CustomAnimationPlayable_t3423099547 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.CustomAnimationPlayable::PrepareFrame(UnityEngine.Experimental.Director.FrameData)
extern "C"  void CustomAnimationPlayable_PrepareFrame_m919887762 (CustomAnimationPlayable_t3423099547 * __this, FrameData_t1120735295  ___info0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.CustomAnimationPlayable::OnSetTime(System.Single)
extern "C"  void CustomAnimationPlayable_OnSetTime_m462197633 (CustomAnimationPlayable_t3423099547 * __this, float ___localTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.CustomAnimationPlayable::OnSetPlayState(UnityEngine.Experimental.Director.PlayState)
extern "C"  void CustomAnimationPlayable_OnSetPlayState_m1903832042 (CustomAnimationPlayable_t3423099547 * __this, int32_t ___newState0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Experimental.Director.CustomAnimationPlayable::get_inputCount()
extern "C"  int32_t CustomAnimationPlayable_get_inputCount_m1506970144 (CustomAnimationPlayable_t3423099547 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Experimental.Director.Playable UnityEngine.Experimental.Director.CustomAnimationPlayable::GetInput(System.Int32)
extern "C"  Playable_t3667545548  CustomAnimationPlayable_GetInput_m627183837 (CustomAnimationPlayable_t3423099547 * __this, int32_t ___inputPort0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Experimental.Director.CustomAnimationPlayable::get_outputCount()
extern "C"  int32_t CustomAnimationPlayable_get_outputCount_m1726567977 (CustomAnimationPlayable_t3423099547 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Experimental.Director.Playable UnityEngine.Experimental.Director.CustomAnimationPlayable::GetOutput(System.Int32)
extern "C"  Playable_t3667545548  CustomAnimationPlayable_GetOutput_m2109551724 (CustomAnimationPlayable_t3423099547 * __this, int32_t ___outputPort0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Experimental.Director.CustomAnimationPlayable::GetInputWeight(System.Int32)
extern "C"  float CustomAnimationPlayable_GetInputWeight_m4080635817 (CustomAnimationPlayable_t3423099547 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.CustomAnimationPlayable::SetInputWeight(System.Int32,System.Single)
extern "C"  void CustomAnimationPlayable_SetInputWeight_m2832273536 (CustomAnimationPlayable_t3423099547 * __this, int32_t ___inputIndex0, float ___weight1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Experimental.Director.PlayState UnityEngine.Experimental.Director.CustomAnimationPlayable::get_state()
extern "C"  int32_t CustomAnimationPlayable_get_state_m4168755227 (CustomAnimationPlayable_t3423099547 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.CustomAnimationPlayable::set_state(UnityEngine.Experimental.Director.PlayState)
extern "C"  void CustomAnimationPlayable_set_state_m3118907084 (CustomAnimationPlayable_t3423099547 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double UnityEngine.Experimental.Director.CustomAnimationPlayable::get_time()
extern "C"  double CustomAnimationPlayable_get_time_m2832957799 (CustomAnimationPlayable_t3423099547 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.CustomAnimationPlayable::set_time(System.Double)
extern "C"  void CustomAnimationPlayable_set_time_m1063048916 (CustomAnimationPlayable_t3423099547 * __this, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double UnityEngine.Experimental.Director.CustomAnimationPlayable::get_duration()
extern "C"  double CustomAnimationPlayable_get_duration_m347792240 (CustomAnimationPlayable_t3423099547 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.CustomAnimationPlayable::set_duration(System.Double)
extern "C"  void CustomAnimationPlayable_set_duration_m1049843503 (CustomAnimationPlayable_t3423099547 * __this, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Experimental.Director.CustomAnimationPlayable::AddInput(UnityEngine.Experimental.Director.Playable)
extern "C"  int32_t CustomAnimationPlayable_AddInput_m3120035390 (CustomAnimationPlayable_t3423099547 * __this, Playable_t3667545548  ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.CustomAnimationPlayable::SetInput(UnityEngine.Experimental.Director.Playable,System.Int32)
extern "C"  bool CustomAnimationPlayable_SetInput_m2588862758 (CustomAnimationPlayable_t3423099547 * __this, Playable_t3667545548  ___source0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.CustomAnimationPlayable::SetInputs(System.Collections.Generic.IEnumerable`1<UnityEngine.Experimental.Director.Playable>)
extern "C"  bool CustomAnimationPlayable_SetInputs_m1393448423 (CustomAnimationPlayable_t3423099547 * __this, Il2CppObject* ___sources0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.CustomAnimationPlayable::RemoveInput(System.Int32)
extern "C"  bool CustomAnimationPlayable_RemoveInput_m238782147 (CustomAnimationPlayable_t3423099547 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.CustomAnimationPlayable::RemoveAllInputs()
extern "C"  bool CustomAnimationPlayable_RemoveAllInputs_m636888422 (CustomAnimationPlayable_t3423099547 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
