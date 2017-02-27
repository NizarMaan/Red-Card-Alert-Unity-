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

// UnityEngine.Canvas
struct Canvas_t209405766;
// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_t3522132132;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RenderMode4280533217.h"
#include "UnityEngine_UnityEngine_Canvas_WillRenderCanvases3522132132.h"

// UnityEngine.RenderMode UnityEngine.Canvas::get_renderMode()
extern "C"  int32_t Canvas_get_renderMode_m1816014618 (Canvas_t209405766 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Canvas::get_isRootCanvas()
extern "C"  bool Canvas_get_isRootCanvas_m2407426044 (Canvas_t209405766 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.Canvas::get_worldCamera()
extern "C"  Camera_t189460977 * Canvas_get_worldCamera_m1187332710 (Canvas_t209405766 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Canvas::get_scaleFactor()
extern "C"  float Canvas_get_scaleFactor_m1115379735 (Canvas_t209405766 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Canvas::set_scaleFactor(System.Single)
extern "C"  void Canvas_set_scaleFactor_m298557412 (Canvas_t209405766 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Canvas::get_referencePixelsPerUnit()
extern "C"  float Canvas_get_referencePixelsPerUnit_m1520474171 (Canvas_t209405766 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Canvas::set_referencePixelsPerUnit(System.Single)
extern "C"  void Canvas_set_referencePixelsPerUnit_m1969549562 (Canvas_t209405766 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Canvas::get_pixelPerfect()
extern "C"  bool Canvas_get_pixelPerfect_m730801767 (Canvas_t209405766 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Canvas::get_renderOrder()
extern "C"  int32_t Canvas_get_renderOrder_m2874842494 (Canvas_t209405766 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Canvas::get_overrideSorting()
extern "C"  bool Canvas_get_overrideSorting_m3223770298 (Canvas_t209405766 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Canvas::set_overrideSorting(System.Boolean)
extern "C"  void Canvas_set_overrideSorting_m3982973573 (Canvas_t209405766 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Canvas::get_sortingOrder()
extern "C"  int32_t Canvas_get_sortingOrder_m3120854436 (Canvas_t209405766 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Canvas::set_sortingOrder(System.Int32)
extern "C"  void Canvas_set_sortingOrder_m2922819993 (Canvas_t209405766 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Canvas::get_targetDisplay()
extern "C"  int32_t Canvas_get_targetDisplay_m316548313 (Canvas_t209405766 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Canvas::get_sortingLayerID()
extern "C"  int32_t Canvas_get_sortingLayerID_m1396307660 (Canvas_t209405766 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Canvas::set_sortingLayerID(System.Int32)
extern "C"  void Canvas_set_sortingLayerID_m537411565 (Canvas_t209405766 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Canvas UnityEngine.Canvas::get_rootCanvas()
extern "C"  Canvas_t209405766 * Canvas_get_rootCanvas_m1790974328 (Canvas_t209405766 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Canvas::GetDefaultCanvasMaterial()
extern "C"  Material_t193706927 * Canvas_GetDefaultCanvasMaterial_m1290649642 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Canvas::GetETC1SupportedCanvasMaterial()
extern "C"  Material_t193706927 * Canvas_GetETC1SupportedCanvasMaterial_m1927784046 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Canvas::add_willRenderCanvases(UnityEngine.Canvas/WillRenderCanvases)
extern "C"  void Canvas_add_willRenderCanvases_m3467125643 (Il2CppObject * __this /* static, unused */, WillRenderCanvases_t3522132132 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Canvas::remove_willRenderCanvases(UnityEngine.Canvas/WillRenderCanvases)
extern "C"  void Canvas_remove_willRenderCanvases_m1070419298 (Il2CppObject * __this /* static, unused */, WillRenderCanvases_t3522132132 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Canvas::SendWillRenderCanvases()
extern "C"  void Canvas_SendWillRenderCanvases_m3796535067 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Canvas::ForceUpdateCanvases()
extern "C"  void Canvas_ForceUpdateCanvases_m2446828475 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
