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

// UnityEngine.Mesh
struct Mesh_t1356156583;
// System.Array
struct Il2CppArray;
// System.Object
struct Il2CppObject;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1440998580;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t1658499504;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t686124026;
// UnityEngine.Color32[]
struct Color32U5BU5D_t30278651;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t1612828712;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_t1612828713;
// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_t243638650;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t1612828711;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Mesh1356156583.h"
#include "UnityEngine_UnityEngine_Mesh_InternalShaderChannel3331827198.h"
#include "UnityEngine_UnityEngine_Mesh_InternalVertexChannel2178520045.h"
#include "mscorlib_System_Array3829468939.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void UnityEngine.Mesh::.ctor()
extern "C"  void Mesh__ctor_m2975981674 (Mesh_t1356156583 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::Internal_Create(UnityEngine.Mesh)
extern "C"  void Mesh_Internal_Create_m1486058998 (Il2CppObject * __this /* static, unused */, Mesh_t1356156583 * ___mono0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::Clear(System.Boolean)
extern "C"  void Mesh_Clear_m3100797454 (Mesh_t1356156583 * __this, bool ___keepVertexLayout0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::Clear()
extern "C"  void Mesh_Clear_m231813403 (Mesh_t1356156583 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Mesh::get_canAccess()
extern "C"  bool Mesh_get_canAccess_m2763498171 (Mesh_t1356156583 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::PrintErrorCantAccessMesh(UnityEngine.Mesh/InternalShaderChannel)
extern "C"  void Mesh_PrintErrorCantAccessMesh_m2827771108 (Mesh_t1356156583 * __this, int32_t ___channel0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::PrintErrorCantAccessMeshForIndices()
extern "C"  void Mesh_PrintErrorCantAccessMeshForIndices_m3276222682 (Mesh_t1356156583 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::PrintErrorBadSubmeshIndexTriangles()
extern "C"  void Mesh_PrintErrorBadSubmeshIndexTriangles_m3830862268 (Mesh_t1356156583 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::PrintErrorBadSubmeshIndexIndices()
extern "C"  void Mesh_PrintErrorBadSubmeshIndexIndices_m2104981732 (Mesh_t1356156583 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetArrayForChannelImpl(UnityEngine.Mesh/InternalShaderChannel,UnityEngine.Mesh/InternalVertexChannelType,System.Int32,System.Array,System.Int32)
extern "C"  void Mesh_SetArrayForChannelImpl_m271696022 (Mesh_t1356156583 * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, Il2CppArray * ___values3, int32_t ___arraySize4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array UnityEngine.Mesh::GetAllocArrayFromChannelImpl(UnityEngine.Mesh/InternalShaderChannel,UnityEngine.Mesh/InternalVertexChannelType,System.Int32)
extern "C"  Il2CppArray * Mesh_GetAllocArrayFromChannelImpl_m1663415136 (Mesh_t1356156583 * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Mesh::HasChannel(UnityEngine.Mesh/InternalShaderChannel)
extern "C"  bool Mesh_HasChannel_m3616583481 (Mesh_t1356156583 * __this, int32_t ___channel0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array UnityEngine.Mesh::ExtractArrayFromList(System.Object)
extern "C"  Il2CppArray * Mesh_ExtractArrayFromList_m1349408169 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___list0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] UnityEngine.Mesh::GetIndicesImpl(System.Int32)
extern "C"  Int32U5BU5D_t3030399641* Mesh_GetIndicesImpl_m2398977086 (Mesh_t1356156583 * __this, int32_t ___submesh0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetTrianglesImpl(System.Int32,System.Array,System.Int32,System.Boolean)
extern "C"  void Mesh_SetTrianglesImpl_m2743099196 (Mesh_t1356156583 * __this, int32_t ___submesh0, Il2CppArray * ___triangles1, int32_t ___arraySize2, bool ___calculateBounds3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetTriangles(System.Collections.Generic.List`1<System.Int32>,System.Int32)
extern "C"  void Mesh_SetTriangles_m2017297103 (Mesh_t1356156583 * __this, List_1_t1440998580 * ___triangles0, int32_t ___submesh1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetTriangles(System.Collections.Generic.List`1<System.Int32>,System.Int32,System.Boolean)
extern "C"  void Mesh_SetTriangles_m2506325172 (Mesh_t1356156583 * __this, List_1_t1440998580 * ___triangles0, int32_t ___submesh1, bool ___calculateBounds2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::RecalculateBounds()
extern "C"  void Mesh_RecalculateBounds_m3559909024 (Mesh_t1356156583 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mesh::get_subMeshCount()
extern "C"  int32_t Mesh_get_subMeshCount_m1945011773 (Mesh_t1356156583 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh/InternalShaderChannel UnityEngine.Mesh::GetUVChannel(System.Int32)
extern "C"  int32_t Mesh_GetUVChannel_m364477864 (Mesh_t1356156583 * __this, int32_t ___uvIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mesh::DefaultDimensionForChannel(UnityEngine.Mesh/InternalShaderChannel)
extern "C"  int32_t Mesh_DefaultDimensionForChannel_m153181993 (Il2CppObject * __this /* static, unused */, int32_t ___channel0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetSizedArrayForChannel(UnityEngine.Mesh/InternalShaderChannel,UnityEngine.Mesh/InternalVertexChannelType,System.Int32,System.Array,System.Int32)
extern "C"  void Mesh_SetSizedArrayForChannel_m299035387 (Mesh_t1356156583 * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, Il2CppArray * ___values3, int32_t ___valuesCount4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UnityEngine.Mesh::get_vertices()
extern "C"  Vector3U5BU5D_t1172311765* Mesh_get_vertices_m626989480 (Mesh_t1356156583 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UnityEngine.Mesh::get_normals()
extern "C"  Vector3U5BU5D_t1172311765* Mesh_get_normals_m1837187359 (Mesh_t1356156583 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4[] UnityEngine.Mesh::get_tangents()
extern "C"  Vector4U5BU5D_t1658499504* Mesh_get_tangents_m2910922714 (Mesh_t1356156583 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] UnityEngine.Mesh::get_uv()
extern "C"  Vector2U5BU5D_t686124026* Mesh_get_uv_m3811151337 (Mesh_t1356156583 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] UnityEngine.Mesh::get_uv2()
extern "C"  Vector2U5BU5D_t686124026* Mesh_get_uv2_m3215494975 (Mesh_t1356156583 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32[] UnityEngine.Mesh::get_colors32()
extern "C"  Color32U5BU5D_t30278651* Mesh_get_colors32_m4153271224 (Mesh_t1356156583 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetVertices(System.Collections.Generic.List`1<UnityEngine.Vector3>)
extern "C"  void Mesh_SetVertices_m3500868388 (Mesh_t1356156583 * __this, List_1_t1612828712 * ___inVertices0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetNormals(System.Collections.Generic.List`1<UnityEngine.Vector3>)
extern "C"  void Mesh_SetNormals_m3341225499 (Mesh_t1356156583 * __this, List_1_t1612828712 * ___inNormals0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetTangents(System.Collections.Generic.List`1<UnityEngine.Vector4>)
extern "C"  void Mesh_SetTangents_m282399504 (Mesh_t1356156583 * __this, List_1_t1612828713 * ___inTangents0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetColors(System.Collections.Generic.List`1<UnityEngine.Color32>)
extern "C"  void Mesh_SetColors_m3438776703 (Mesh_t1356156583 * __this, List_1_t243638650 * ___inColors0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetUVs(System.Int32,System.Collections.Generic.List`1<UnityEngine.Vector2>)
extern "C"  void Mesh_SetUVs_m841280343 (Mesh_t1356156583 * __this, int32_t ___channel0, List_1_t1612828711 * ___uvs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Mesh::CheckCanAccessSubmesh(System.Int32,System.Boolean)
extern "C"  bool Mesh_CheckCanAccessSubmesh_m1826512193 (Mesh_t1356156583 * __this, int32_t ___submesh0, bool ___errorAboutTriangles1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Mesh::CheckCanAccessSubmeshTriangles(System.Int32)
extern "C"  bool Mesh_CheckCanAccessSubmeshTriangles_m3203185587 (Mesh_t1356156583 * __this, int32_t ___submesh0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Mesh::CheckCanAccessSubmeshIndices(System.Int32)
extern "C"  bool Mesh_CheckCanAccessSubmeshIndices_m2098382465 (Mesh_t1356156583 * __this, int32_t ___submesh0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] UnityEngine.Mesh::GetIndices(System.Int32)
extern "C"  Int32U5BU5D_t3030399641* Mesh_GetIndices_m3085881884 (Mesh_t1356156583 * __this, int32_t ___submesh0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
