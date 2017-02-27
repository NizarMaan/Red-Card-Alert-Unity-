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

// UnityEngine.UI.CanvasUpdateRegistry
struct CanvasUpdateRegistry_t1780385998;
// UnityEngine.UI.ICanvasElement
struct ICanvasElement_t986520779;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"

// System.Void UnityEngine.UI.CanvasUpdateRegistry::.ctor()
extern "C"  void CanvasUpdateRegistry__ctor_m4037208045 (CanvasUpdateRegistry_t1780385998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.CanvasUpdateRegistry UnityEngine.UI.CanvasUpdateRegistry::get_instance()
extern "C"  CanvasUpdateRegistry_t1780385998 * CanvasUpdateRegistry_get_instance_m862315367 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.CanvasUpdateRegistry::ObjectValidForUpdate(UnityEngine.UI.ICanvasElement)
extern "C"  bool CanvasUpdateRegistry_ObjectValidForUpdate_m855695984 (CanvasUpdateRegistry_t1780385998 * __this, Il2CppObject * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasUpdateRegistry::CleanInvalidItems()
extern "C"  void CanvasUpdateRegistry_CleanInvalidItems_m1402635291 (CanvasUpdateRegistry_t1780385998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasUpdateRegistry::PerformUpdate()
extern "C"  void CanvasUpdateRegistry_PerformUpdate_m2200492017 (CanvasUpdateRegistry_t1780385998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.CanvasUpdateRegistry::ParentCount(UnityEngine.Transform)
extern "C"  int32_t CanvasUpdateRegistry_ParentCount_m2367607495 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___child0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.CanvasUpdateRegistry::SortLayoutList(UnityEngine.UI.ICanvasElement,UnityEngine.UI.ICanvasElement)
extern "C"  int32_t CanvasUpdateRegistry_SortLayoutList_m2784178105 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___x0, Il2CppObject * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasUpdateRegistry::RegisterCanvasElementForLayoutRebuild(UnityEngine.UI.ICanvasElement)
extern "C"  void CanvasUpdateRegistry_RegisterCanvasElementForLayoutRebuild_m669674528 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.CanvasUpdateRegistry::TryRegisterCanvasElementForLayoutRebuild(UnityEngine.UI.ICanvasElement)
extern "C"  bool CanvasUpdateRegistry_TryRegisterCanvasElementForLayoutRebuild_m1686817711 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.CanvasUpdateRegistry::InternalRegisterCanvasElementForLayoutRebuild(UnityEngine.UI.ICanvasElement)
extern "C"  bool CanvasUpdateRegistry_InternalRegisterCanvasElementForLayoutRebuild_m1102256627 (CanvasUpdateRegistry_t1780385998 * __this, Il2CppObject * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasUpdateRegistry::RegisterCanvasElementForGraphicRebuild(UnityEngine.UI.ICanvasElement)
extern "C"  void CanvasUpdateRegistry_RegisterCanvasElementForGraphicRebuild_m2988449662 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.CanvasUpdateRegistry::TryRegisterCanvasElementForGraphicRebuild(UnityEngine.UI.ICanvasElement)
extern "C"  bool CanvasUpdateRegistry_TryRegisterCanvasElementForGraphicRebuild_m1107442775 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.CanvasUpdateRegistry::InternalRegisterCanvasElementForGraphicRebuild(UnityEngine.UI.ICanvasElement)
extern "C"  bool CanvasUpdateRegistry_InternalRegisterCanvasElementForGraphicRebuild_m752997547 (CanvasUpdateRegistry_t1780385998 * __this, Il2CppObject * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasUpdateRegistry::UnRegisterCanvasElementForRebuild(UnityEngine.UI.ICanvasElement)
extern "C"  void CanvasUpdateRegistry_UnRegisterCanvasElementForRebuild_m1497083313 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasUpdateRegistry::InternalUnRegisterCanvasElementForLayoutRebuild(UnityEngine.UI.ICanvasElement)
extern "C"  void CanvasUpdateRegistry_InternalUnRegisterCanvasElementForLayoutRebuild_m3740187734 (CanvasUpdateRegistry_t1780385998 * __this, Il2CppObject * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasUpdateRegistry::InternalUnRegisterCanvasElementForGraphicRebuild(UnityEngine.UI.ICanvasElement)
extern "C"  void CanvasUpdateRegistry_InternalUnRegisterCanvasElementForGraphicRebuild_m300585424 (CanvasUpdateRegistry_t1780385998 * __this, Il2CppObject * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.CanvasUpdateRegistry::IsRebuildingLayout()
extern "C"  bool CanvasUpdateRegistry_IsRebuildingLayout_m1677873278 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.CanvasUpdateRegistry::IsRebuildingGraphics()
extern "C"  bool CanvasUpdateRegistry_IsRebuildingGraphics_m1758776983 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasUpdateRegistry::.cctor()
extern "C"  void CanvasUpdateRegistry__cctor_m3809354476 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
