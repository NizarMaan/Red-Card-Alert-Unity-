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

// UnityEngine.UI.VertexHelper
struct VertexHelper_t385374196;
// UnityEngine.Mesh
struct Mesh_t1356156583;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t3048644023;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t573379950;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1440998580;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Mesh1356156583.h"
#include "UnityEngine_UnityEngine_UIVertex1204258818.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Color32874517518.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Vector42243707581.h"

// System.Void UnityEngine.UI.VertexHelper::.ctor()
extern "C"  void VertexHelper__ctor_m732625615 (VertexHelper_t385374196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::.ctor(UnityEngine.Mesh)
extern "C"  void VertexHelper__ctor_m1386464415 (VertexHelper_t385374196 * __this, Mesh_t1356156583 * ___m0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::Clear()
extern "C"  void VertexHelper_Clear_m648714328 (VertexHelper_t385374196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.VertexHelper::get_currentVertCount()
extern "C"  int32_t VertexHelper_get_currentVertCount_m1723889923 (VertexHelper_t385374196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.VertexHelper::get_currentIndexCount()
extern "C"  int32_t VertexHelper_get_currentIndexCount_m136081244 (VertexHelper_t385374196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::PopulateUIVertex(UnityEngine.UIVertex&,System.Int32)
extern "C"  void VertexHelper_PopulateUIVertex_m1570922497 (VertexHelper_t385374196 * __this, UIVertex_t1204258818 * ___vertex0, int32_t ___i1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::SetUIVertex(UnityEngine.UIVertex,System.Int32)
extern "C"  void VertexHelper_SetUIVertex_m2397401947 (VertexHelper_t385374196 * __this, UIVertex_t1204258818  ___vertex0, int32_t ___i1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::FillMesh(UnityEngine.Mesh)
extern "C"  void VertexHelper_FillMesh_m1891350547 (VertexHelper_t385374196 * __this, Mesh_t1356156583 * ___mesh0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::Dispose()
extern "C"  void VertexHelper_Dispose_m2847257624 (VertexHelper_t385374196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::AddVert(UnityEngine.Vector3,UnityEngine.Color32,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector3,UnityEngine.Vector4)
extern "C"  void VertexHelper_AddVert_m4073901784 (VertexHelper_t385374196 * __this, Vector3_t2243707580  ___position0, Color32_t874517518  ___color1, Vector2_t2243707579  ___uv02, Vector2_t2243707579  ___uv13, Vector3_t2243707580  ___normal4, Vector4_t2243707581  ___tangent5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::AddVert(UnityEngine.Vector3,UnityEngine.Color32,UnityEngine.Vector2)
extern "C"  void VertexHelper_AddVert_m2953034489 (VertexHelper_t385374196 * __this, Vector3_t2243707580  ___position0, Color32_t874517518  ___color1, Vector2_t2243707579  ___uv02, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::AddVert(UnityEngine.UIVertex)
extern "C"  void VertexHelper_AddVert_m3290455716 (VertexHelper_t385374196 * __this, UIVertex_t1204258818  ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::AddTriangle(System.Int32,System.Int32,System.Int32)
extern "C"  void VertexHelper_AddTriangle_m3666051761 (VertexHelper_t385374196 * __this, int32_t ___idx00, int32_t ___idx11, int32_t ___idx22, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::AddUIVertexQuad(UnityEngine.UIVertex[])
extern "C"  void VertexHelper_AddUIVertexQuad_m280792808 (VertexHelper_t385374196 * __this, UIVertexU5BU5D_t3048644023* ___verts0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::AddUIVertexStream(System.Collections.Generic.List`1<UnityEngine.UIVertex>,System.Collections.Generic.List`1<System.Int32>)
extern "C"  void VertexHelper_AddUIVertexStream_m3599763288 (VertexHelper_t385374196 * __this, List_1_t573379950 * ___verts0, List_1_t1440998580 * ___indices1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::AddUIVertexTriangleStream(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern "C"  void VertexHelper_AddUIVertexTriangleStream_m4009409241 (VertexHelper_t385374196 * __this, List_1_t573379950 * ___verts0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::GetUIVertexStream(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern "C"  void VertexHelper_GetUIVertexStream_m3849188814 (VertexHelper_t385374196 * __this, List_1_t573379950 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::.cctor()
extern "C"  void VertexHelper__cctor_m1150948588 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
