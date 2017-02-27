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

// UnityEngine.UI.Graphic
struct Graphic_t2426225576;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// UnityEngine.Canvas
struct Canvas_t209405766;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t261436805;
// UnityEngine.Texture
struct Texture_t2243626319;
// UnityEngine.Mesh
struct Mesh_t1356156583;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t573379950;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t385374196;
// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.Events.UnityAction
struct UnityAction_t4025899511;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_Material193706927.h"
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate1528800019.h"
#include "UnityEngine_UnityEngine_Mesh1356156583.h"
#include "UnityEngine_UI_UnityEngine_UI_VertexHelper385374196.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "UnityEngine_UnityEngine_Events_UnityAction4025899511.h"

// System.Void UnityEngine.UI.Graphic::.ctor()
extern "C"  void Graphic__ctor_m821539719 (Graphic_t2426225576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.UI.Graphic::get_defaultGraphicMaterial()
extern "C"  Material_t193706927 * Graphic_get_defaultGraphicMaterial_m2470009671 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.UI.Graphic::get_color()
extern "C"  Color_t2020392075  Graphic_get_color_m1212532578 (Graphic_t2426225576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color)
extern "C"  void Graphic_set_color_m646149893 (Graphic_t2426225576 * __this, Color_t2020392075  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Graphic::get_raycastTarget()
extern "C"  bool Graphic_get_raycastTarget_m1853836438 (Graphic_t2426225576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::set_raycastTarget(System.Boolean)
extern "C"  void Graphic_set_raycastTarget_m1229173591 (Graphic_t2426225576 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Graphic::get_useLegacyMeshGeneration()
extern "C"  bool Graphic_get_useLegacyMeshGeneration_m1366444625 (Graphic_t2426225576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::set_useLegacyMeshGeneration(System.Boolean)
extern "C"  void Graphic_set_useLegacyMeshGeneration_m3023904722 (Graphic_t2426225576 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::SetAllDirty()
extern "C"  void Graphic_SetAllDirty_m576427258 (Graphic_t2426225576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::SetLayoutDirty()
extern "C"  void Graphic_SetLayoutDirty_m2641374957 (Graphic_t2426225576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::SetVerticesDirty()
extern "C"  void Graphic_SetVerticesDirty_m1607014370 (Graphic_t2426225576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::SetMaterialDirty()
extern "C"  void Graphic_SetMaterialDirty_m292020964 (Graphic_t2426225576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnRectTransformDimensionsChange()
extern "C"  void Graphic_OnRectTransformDimensionsChange_m1610753363 (Graphic_t2426225576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnBeforeTransformParentChanged()
extern "C"  void Graphic_OnBeforeTransformParentChanged_m1866292273 (Graphic_t2426225576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnTransformParentChanged()
extern "C"  void Graphic_OnTransformParentChanged_m966389462 (Graphic_t2426225576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Graphic::get_depth()
extern "C"  int32_t Graphic_get_depth_m3526566553 (Graphic_t2426225576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.Graphic::get_rectTransform()
extern "C"  RectTransform_t3349966182 * Graphic_get_rectTransform_m2697395074 (Graphic_t2426225576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Canvas UnityEngine.UI.Graphic::get_canvas()
extern "C"  Canvas_t209405766 * Graphic_get_canvas_m274525322 (Graphic_t2426225576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::CacheCanvas()
extern "C"  void Graphic_CacheCanvas_m3279754427 (Graphic_t2426225576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::get_canvasRenderer()
extern "C"  CanvasRenderer_t261436805 * Graphic_get_canvasRenderer_m2902370808 (Graphic_t2426225576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.UI.Graphic::get_defaultMaterial()
extern "C"  Material_t193706927 * Graphic_get_defaultMaterial_m1022773737 (Graphic_t2426225576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.UI.Graphic::get_material()
extern "C"  Material_t193706927 * Graphic_get_material_m254656232 (Graphic_t2426225576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material)
extern "C"  void Graphic_set_material_m329335629 (Graphic_t2426225576 * __this, Material_t193706927 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.UI.Graphic::get_materialForRendering()
extern "C"  Material_t193706927 * Graphic_get_materialForRendering_m2600868951 (Graphic_t2426225576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.UI.Graphic::get_mainTexture()
extern "C"  Texture_t2243626319 * Graphic_get_mainTexture_m3801744081 (Graphic_t2426225576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnEnable()
extern "C"  void Graphic_OnEnable_m2900261811 (Graphic_t2426225576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnDisable()
extern "C"  void Graphic_OnDisable_m2360886868 (Graphic_t2426225576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnCanvasHierarchyChanged()
extern "C"  void Graphic_OnCanvasHierarchyChanged_m403140731 (Graphic_t2426225576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::Rebuild(UnityEngine.UI.CanvasUpdate)
extern "C"  void Graphic_Rebuild_m2617722358 (Graphic_t2426225576 * __this, int32_t ___update0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::LayoutComplete()
extern "C"  void Graphic_LayoutComplete_m2652866634 (Graphic_t2426225576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::GraphicUpdateComplete()
extern "C"  void Graphic_GraphicUpdateComplete_m4264068569 (Graphic_t2426225576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::UpdateMaterial()
extern "C"  void Graphic_UpdateMaterial_m3800030205 (Graphic_t2426225576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::UpdateGeometry()
extern "C"  void Graphic_UpdateGeometry_m2431537946 (Graphic_t2426225576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::DoMeshGeneration()
extern "C"  void Graphic_DoMeshGeneration_m2913299565 (Graphic_t2426225576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::DoLegacyMeshGeneration()
extern "C"  void Graphic_DoLegacyMeshGeneration_m774157818 (Graphic_t2426225576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh UnityEngine.UI.Graphic::get_workerMesh()
extern "C"  Mesh_t1356156583 * Graphic_get_workerMesh_m2117245518 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnFillVBO(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern "C"  void Graphic_OnFillVBO_m1723985607 (Graphic_t2426225576 * __this, List_1_t573379950 * ___vbo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnPopulateMesh(UnityEngine.Mesh)
extern "C"  void Graphic_OnPopulateMesh_m2598985015 (Graphic_t2426225576 * __this, Mesh_t1356156583 * ___m0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnPopulateMesh(UnityEngine.UI.VertexHelper)
extern "C"  void Graphic_OnPopulateMesh_m1138026564 (Graphic_t2426225576 * __this, VertexHelper_t385374196 * ___vh0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnDidApplyAnimationProperties()
extern "C"  void Graphic_OnDidApplyAnimationProperties_m1356293874 (Graphic_t2426225576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::SetNativeSize()
extern "C"  void Graphic_SetNativeSize_m114608337 (Graphic_t2426225576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Graphic::Raycast(UnityEngine.Vector2,UnityEngine.Camera)
extern "C"  bool Graphic_Raycast_m3582517890 (Graphic_t2426225576 * __this, Vector2_t2243707579  ___sp0, Camera_t189460977 * ___eventCamera1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.Graphic::PixelAdjustPoint(UnityEngine.Vector2)
extern "C"  Vector2_t2243707579  Graphic_PixelAdjustPoint_m451653269 (Graphic_t2426225576 * __this, Vector2_t2243707579  ___point0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.UI.Graphic::GetPixelAdjustedRect()
extern "C"  Rect_t3681755626  Graphic_GetPixelAdjustedRect_m245815321 (Graphic_t2426225576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::CrossFadeColor(UnityEngine.Color,System.Single,System.Boolean,System.Boolean)
extern "C"  void Graphic_CrossFadeColor_m3333074325 (Graphic_t2426225576 * __this, Color_t2020392075  ___targetColor0, float ___duration1, bool ___ignoreTimeScale2, bool ___useAlpha3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::CrossFadeColor(UnityEngine.Color,System.Single,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void Graphic_CrossFadeColor_m346191098 (Graphic_t2426225576 * __this, Color_t2020392075  ___targetColor0, float ___duration1, bool ___ignoreTimeScale2, bool ___useAlpha3, bool ___useRGB4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.UI.Graphic::CreateColorFromAlpha(System.Single)
extern "C"  Color_t2020392075  Graphic_CreateColorFromAlpha_m2614574534 (Il2CppObject * __this /* static, unused */, float ___alpha0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::CrossFadeAlpha(System.Single,System.Single,System.Boolean)
extern "C"  void Graphic_CrossFadeAlpha_m4067047552 (Graphic_t2426225576 * __this, float ___alpha0, float ___duration1, bool ___ignoreTimeScale2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::RegisterDirtyLayoutCallback(UnityEngine.Events.UnityAction)
extern "C"  void Graphic_RegisterDirtyLayoutCallback_m2729784980 (Graphic_t2426225576 * __this, UnityAction_t4025899511 * ___action0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::UnregisterDirtyLayoutCallback(UnityEngine.Events.UnityAction)
extern "C"  void Graphic_UnregisterDirtyLayoutCallback_m1724443555 (Graphic_t2426225576 * __this, UnityAction_t4025899511 * ___action0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::RegisterDirtyVerticesCallback(UnityEngine.Events.UnityAction)
extern "C"  void Graphic_RegisterDirtyVerticesCallback_m4169445219 (Graphic_t2426225576 * __this, UnityAction_t4025899511 * ___action0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::UnregisterDirtyVerticesCallback(UnityEngine.Events.UnityAction)
extern "C"  void Graphic_UnregisterDirtyVerticesCallback_m1526739224 (Graphic_t2426225576 * __this, UnityAction_t4025899511 * ___action0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::RegisterDirtyMaterialCallback(UnityEngine.Events.UnityAction)
extern "C"  void Graphic_RegisterDirtyMaterialCallback_m4098705381 (Graphic_t2426225576 * __this, UnityAction_t4025899511 * ___action0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::UnregisterDirtyMaterialCallback(UnityEngine.Events.UnityAction)
extern "C"  void Graphic_UnregisterDirtyMaterialCallback_m819829270 (Graphic_t2426225576 * __this, UnityAction_t4025899511 * ___action0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::.cctor()
extern "C"  void Graphic__cctor_m1643894470 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.Graphic::UnityEngine.UI.ICanvasElement.get_transform()
extern "C"  Transform_t3275118058 * Graphic_UnityEngine_UI_ICanvasElement_get_transform_m3293453116 (Graphic_t2426225576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
