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

// UnityEngine.UI.RectMask2D
struct RectMask2D_t1156185964;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.UI.IClippable
struct IClippable_t1941276057;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"

// System.Void UnityEngine.UI.RectMask2D::.ctor()
extern "C"  void RectMask2D__ctor_m2406004327 (RectMask2D_t1156185964 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.UI.RectMask2D::get_canvasRect()
extern "C"  Rect_t3681755626  RectMask2D_get_canvasRect_m176109918 (RectMask2D_t1156185964 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.RectMask2D::get_rectTransform()
extern "C"  RectTransform_t3349966182 * RectMask2D_get_rectTransform_m130488702 (RectMask2D_t1156185964 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RectMask2D::OnEnable()
extern "C"  void RectMask2D_OnEnable_m1538644099 (RectMask2D_t1156185964 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RectMask2D::OnDisable()
extern "C"  void RectMask2D_OnDisable_m1995667256 (RectMask2D_t1156185964 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.RectMask2D::IsRaycastLocationValid(UnityEngine.Vector2,UnityEngine.Camera)
extern "C"  bool RectMask2D_IsRaycastLocationValid_m2489402131 (RectMask2D_t1156185964 * __this, Vector2_t2243707579  ___sp0, Camera_t189460977 * ___eventCamera1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RectMask2D::PerformClipping()
extern "C"  void RectMask2D_PerformClipping_m1232012832 (RectMask2D_t1156185964 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RectMask2D::AddClippable(UnityEngine.UI.IClippable)
extern "C"  void RectMask2D_AddClippable_m2808547408 (RectMask2D_t1156185964 * __this, Il2CppObject * ___clippable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RectMask2D::RemoveClippable(UnityEngine.UI.IClippable)
extern "C"  void RectMask2D_RemoveClippable_m1579973877 (RectMask2D_t1156185964 * __this, Il2CppObject * ___clippable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RectMask2D::OnTransformParentChanged()
extern "C"  void RectMask2D_OnTransformParentChanged_m2601128726 (RectMask2D_t1156185964 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RectMask2D::OnCanvasHierarchyChanged()
extern "C"  void RectMask2D_OnCanvasHierarchyChanged_m2610677147 (RectMask2D_t1156185964 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
