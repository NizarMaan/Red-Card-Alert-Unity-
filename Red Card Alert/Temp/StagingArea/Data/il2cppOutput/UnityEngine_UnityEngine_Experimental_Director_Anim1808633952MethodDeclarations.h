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

// System.Type
struct Type_t;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Experimental.Director.Playable>
struct IEnumerable_1_t3959672593;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Experimental_Director_Anim1693994278.h"
#include "UnityEngine_UnityEngine_Experimental_Director_Play3667545548.h"
#include "mscorlib_System_Type1303803226.h"

// System.Int32 UnityEngine.Experimental.Director.AnimationPlayableUtilities::AddInputValidated(UnityEngine.Experimental.Director.AnimationPlayable,UnityEngine.Experimental.Director.Playable,System.Type)
extern "C"  int32_t AnimationPlayableUtilities_AddInputValidated_m3676524933 (Il2CppObject * __this /* static, unused */, AnimationPlayable_t1693994278  ___target0, Playable_t3667545548  ___input1, Type_t * ___typeofTarget2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.AnimationPlayableUtilities::SetInputValidated(UnityEngine.Experimental.Director.AnimationPlayable,UnityEngine.Experimental.Director.Playable,System.Int32,System.Type)
extern "C"  bool AnimationPlayableUtilities_SetInputValidated_m2748997465 (Il2CppObject * __this /* static, unused */, AnimationPlayable_t1693994278  ___target0, Playable_t3667545548  ___source1, int32_t ___index2, Type_t * ___typeofTarget3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.AnimationPlayableUtilities::SetInputsValidated(UnityEngine.Experimental.Director.AnimationPlayable,System.Collections.Generic.IEnumerable`1<UnityEngine.Experimental.Director.Playable>,System.Type)
extern "C"  bool AnimationPlayableUtilities_SetInputsValidated_m2696856860 (Il2CppObject * __this /* static, unused */, AnimationPlayable_t1693994278  ___target0, Il2CppObject* ___sources1, Type_t * ___typeofTarget2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.AnimationPlayableUtilities::RemoveInputValidated(UnityEngine.Experimental.Director.AnimationPlayable,System.Int32,System.Type)
extern "C"  bool AnimationPlayableUtilities_RemoveInputValidated_m438691908 (Il2CppObject * __this /* static, unused */, AnimationPlayable_t1693994278  ___target0, int32_t ___index1, Type_t * ___typeofTarget2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.AnimationPlayableUtilities::RemoveAllInputsValidated(UnityEngine.Experimental.Director.AnimationPlayable,System.Type)
extern "C"  bool AnimationPlayableUtilities_RemoveAllInputsValidated_m1936894983 (Il2CppObject * __this /* static, unused */, AnimationPlayable_t1693994278  ___target0, Type_t * ___typeofTarget1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
