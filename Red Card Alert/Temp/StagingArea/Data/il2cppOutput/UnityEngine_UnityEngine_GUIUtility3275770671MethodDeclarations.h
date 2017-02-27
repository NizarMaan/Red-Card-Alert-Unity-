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

// UnityEngine.GUISkin
struct GUISkin_t1436893342;
// System.Exception
struct Exception_t1927440687;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Exception1927440687.h"
#include "mscorlib_System_String2029220233.h"

// System.Single UnityEngine.GUIUtility::get_pixelsPerPoint()
extern "C"  float GUIUtility_get_pixelsPerPoint_m2667928361 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::set_guiIsExiting(System.Boolean)
extern "C"  void GUIUtility_set_guiIsExiting_m2362636745 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIUtility::get_hotControl()
extern "C"  int32_t GUIUtility_get_hotControl_m466901769 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISkin UnityEngine.GUIUtility::GetDefaultSkin()
extern "C"  GUISkin_t1436893342 * GUIUtility_GetDefaultSkin_m2022075576 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::BeginGUI(System.Int32,System.Int32,System.Int32)
extern "C"  void GUIUtility_BeginGUI_m2907220931 (Il2CppObject * __this /* static, unused */, int32_t ___skinMode0, int32_t ___instanceID1, int32_t ___useGUILayout2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::EndGUI(System.Int32)
extern "C"  void GUIUtility_EndGUI_m3538781391 (Il2CppObject * __this /* static, unused */, int32_t ___layoutType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIUtility::EndGUIFromException(System.Exception)
extern "C"  bool GUIUtility_EndGUIFromException_m2091524531 (Il2CppObject * __this /* static, unused */, Exception_t1927440687 * ___exception0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIUtility::ShouldRethrowException(System.Exception)
extern "C"  bool GUIUtility_ShouldRethrowException_m1990329277 (Il2CppObject * __this /* static, unused */, Exception_t1927440687 * ___exception0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::CheckOnGUI()
extern "C"  void GUIUtility_CheckOnGUI_m4284398968 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIUtility::Internal_GetPixelsPerPoint()
extern "C"  float GUIUtility_Internal_GetPixelsPerPoint_m1770975086 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIUtility::Internal_GetHotControl()
extern "C"  int32_t GUIUtility_Internal_GetHotControl_m2510727642 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIUtility::get_keyboardControl()
extern "C"  int32_t GUIUtility_get_keyboardControl_m2418463643 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUIUtility::get_systemCopyBuffer()
extern "C"  String_t* GUIUtility_get_systemCopyBuffer_m396434174 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::set_systemCopyBuffer(System.String)
extern "C"  void GUIUtility_set_systemCopyBuffer_m2040945785 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISkin UnityEngine.GUIUtility::Internal_GetDefaultSkin(System.Int32)
extern "C"  GUISkin_t1436893342 * GUIUtility_Internal_GetDefaultSkin_m2135852437 (Il2CppObject * __this /* static, unused */, int32_t ___skinMode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::Internal_ExitGUI()
extern "C"  void GUIUtility_Internal_ExitGUI_m2271097629 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIUtility::Internal_GetGUIDepth()
extern "C"  int32_t GUIUtility_Internal_GetGUIDepth_m1699616910 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::.cctor()
extern "C"  void GUIUtility__cctor_m46116445 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
