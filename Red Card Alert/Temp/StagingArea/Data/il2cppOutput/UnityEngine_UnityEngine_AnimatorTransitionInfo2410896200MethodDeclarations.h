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

// System.String
struct String_t;
// UnityEngine.AnimatorTransitionInfo
struct AnimatorTransitionInfo_t2410896200;
struct AnimatorTransitionInfo_t2410896200_marshaled_pinvoke;
struct AnimatorTransitionInfo_t2410896200_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_AnimatorTransitionInfo2410896200.h"
#include "mscorlib_System_String2029220233.h"

// System.Boolean UnityEngine.AnimatorTransitionInfo::IsName(System.String)
extern "C"  bool AnimatorTransitionInfo_IsName_m2561957738 (AnimatorTransitionInfo_t2410896200 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AnimatorTransitionInfo::IsUserName(System.String)
extern "C"  bool AnimatorTransitionInfo_IsUserName_m3771933881 (AnimatorTransitionInfo_t2410896200 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_fullPathHash()
extern "C"  int32_t AnimatorTransitionInfo_get_fullPathHash_m2689544352 (AnimatorTransitionInfo_t2410896200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_nameHash()
extern "C"  int32_t AnimatorTransitionInfo_get_nameHash_m460043277 (AnimatorTransitionInfo_t2410896200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_userNameHash()
extern "C"  int32_t AnimatorTransitionInfo_get_userNameHash_m971244190 (AnimatorTransitionInfo_t2410896200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AnimatorTransitionInfo::get_normalizedTime()
extern "C"  float AnimatorTransitionInfo_get_normalizedTime_m2741999844 (AnimatorTransitionInfo_t2410896200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_anyState()
extern "C"  bool AnimatorTransitionInfo_get_anyState_m3474272231 (AnimatorTransitionInfo_t2410896200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_entry()
extern "C"  bool AnimatorTransitionInfo_get_entry_m1140118520 (AnimatorTransitionInfo_t2410896200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_exit()
extern "C"  bool AnimatorTransitionInfo_get_exit_m3018502934 (AnimatorTransitionInfo_t2410896200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct AnimatorTransitionInfo_t2410896200;
struct AnimatorTransitionInfo_t2410896200_marshaled_pinvoke;

extern "C" void AnimatorTransitionInfo_t2410896200_marshal_pinvoke(const AnimatorTransitionInfo_t2410896200& unmarshaled, AnimatorTransitionInfo_t2410896200_marshaled_pinvoke& marshaled);
extern "C" void AnimatorTransitionInfo_t2410896200_marshal_pinvoke_back(const AnimatorTransitionInfo_t2410896200_marshaled_pinvoke& marshaled, AnimatorTransitionInfo_t2410896200& unmarshaled);
extern "C" void AnimatorTransitionInfo_t2410896200_marshal_pinvoke_cleanup(AnimatorTransitionInfo_t2410896200_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct AnimatorTransitionInfo_t2410896200;
struct AnimatorTransitionInfo_t2410896200_marshaled_com;

extern "C" void AnimatorTransitionInfo_t2410896200_marshal_com(const AnimatorTransitionInfo_t2410896200& unmarshaled, AnimatorTransitionInfo_t2410896200_marshaled_com& marshaled);
extern "C" void AnimatorTransitionInfo_t2410896200_marshal_com_back(const AnimatorTransitionInfo_t2410896200_marshaled_com& marshaled, AnimatorTransitionInfo_t2410896200& unmarshaled);
extern "C" void AnimatorTransitionInfo_t2410896200_marshal_com_cleanup(AnimatorTransitionInfo_t2410896200_marshaled_com& marshaled);
