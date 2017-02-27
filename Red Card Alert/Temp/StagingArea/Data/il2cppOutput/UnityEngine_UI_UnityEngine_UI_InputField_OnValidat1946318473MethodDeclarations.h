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

// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t1946318473;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void UnityEngine.UI.InputField/OnValidateInput::.ctor(System.Object,System.IntPtr)
extern "C"  void OnValidateInput__ctor_m2251999735 (OnValidateInput_t1946318473 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UnityEngine.UI.InputField/OnValidateInput::Invoke(System.String,System.Int32,System.Char)
extern "C"  Il2CppChar OnValidateInput_Invoke_m1269079811 (OnValidateInput_t1946318473 * __this, String_t* ___text0, int32_t ___charIndex1, Il2CppChar ___addedChar2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UnityEngine.UI.InputField/OnValidateInput::BeginInvoke(System.String,System.Int32,System.Char,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnValidateInput_BeginInvoke_m308045828 (OnValidateInput_t1946318473 * __this, String_t* ___text0, int32_t ___charIndex1, Il2CppChar ___addedChar2, AsyncCallback_t163412349 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UnityEngine.UI.InputField/OnValidateInput::EndInvoke(System.IAsyncResult)
extern "C"  Il2CppChar OnValidateInput_EndInvoke_m1038889725 (OnValidateInput_t1946318473 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
