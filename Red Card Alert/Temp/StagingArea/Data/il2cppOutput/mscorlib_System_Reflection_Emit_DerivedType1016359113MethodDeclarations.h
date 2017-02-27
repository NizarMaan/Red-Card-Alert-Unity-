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

// System.Reflection.Emit.DerivedType
struct DerivedType_t1016359113;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t1664964607;
// System.Reflection.EventInfo
struct EventInfo_t;
// System.String
struct String_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t125053523;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.Binder
struct Binder_t3404612058;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t963192633;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t152480188;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t2851816542;
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t1996683371;
// System.Object
struct Il2CppObject;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Globalization.CultureInfo
struct CultureInfo_t3500843524;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Reflection.Assembly
struct Assembly_t4268412390;
// System.Reflection.Module
struct Module_t4282841206;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Reflection_BindingFlags1082350898.h"
#include "mscorlib_System_Reflection_Binder3404612058.h"
#include "mscorlib_System_Reflection_CallingConventions1097349142.h"
#include "mscorlib_System_Reflection_TypeAttributes2229518203.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Globalization_CultureInfo3500843524.h"
#include "mscorlib_System_RuntimeTypeHandle2330101084.h"

// System.Void System.Reflection.Emit.DerivedType::.ctor(System.Type)
extern "C"  void DerivedType__ctor_m4154637955 (DerivedType_t1016359113 * __this, Type_t * ___elementType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.DerivedType::create_unmanaged_type(System.Type)
extern "C"  void DerivedType_create_unmanaged_type_m3164160613 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.DerivedType::GetInterfaces()
extern "C"  TypeU5BU5D_t1664964607* DerivedType_GetInterfaces_m2710649328 (DerivedType_t1016359113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.DerivedType::GetElementType()
extern "C"  Type_t * DerivedType_GetElementType_m659905870 (DerivedType_t1016359113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.Reflection.Emit.DerivedType::GetEvent(System.String,System.Reflection.BindingFlags)
extern "C"  EventInfo_t * DerivedType_GetEvent_m2165020195 (DerivedType_t1016359113 * __this, String_t* ___name0, int32_t ___bindingAttr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Reflection.Emit.DerivedType::GetField(System.String,System.Reflection.BindingFlags)
extern "C"  FieldInfo_t * DerivedType_GetField_m3960169619 (DerivedType_t1016359113 * __this, String_t* ___name0, int32_t ___bindingAttr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo[] System.Reflection.Emit.DerivedType::GetFields(System.Reflection.BindingFlags)
extern "C"  FieldInfoU5BU5D_t125053523* DerivedType_GetFields_m2946331416 (DerivedType_t1016359113 * __this, int32_t ___bindingAttr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.DerivedType::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  MethodInfo_t * DerivedType_GetMethodImpl_m2649456432 (DerivedType_t1016359113 * __this, String_t* ___name0, int32_t ___bindingAttr1, Binder_t3404612058 * ___binder2, int32_t ___callConvention3, TypeU5BU5D_t1664964607* ___types4, ParameterModifierU5BU5D_t963192633* ___modifiers5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.DerivedType::GetMethods(System.Reflection.BindingFlags)
extern "C"  MethodInfoU5BU5D_t152480188* DerivedType_GetMethods_m165266904 (DerivedType_t1016359113 * __this, int32_t ___bindingAttr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Reflection.Emit.DerivedType::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  PropertyInfo_t * DerivedType_GetPropertyImpl_m1383673951 (DerivedType_t1016359113 * __this, String_t* ___name0, int32_t ___bindingAttr1, Binder_t3404612058 * ___binder2, Type_t * ___returnType3, TypeU5BU5D_t1664964607* ___types4, ParameterModifierU5BU5D_t963192633* ___modifiers5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Reflection.Emit.DerivedType::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  ConstructorInfo_t2851816542 * DerivedType_GetConstructorImpl_m129806456 (DerivedType_t1016359113 * __this, int32_t ___bindingAttr0, Binder_t3404612058 * ___binder1, int32_t ___callConvention2, TypeU5BU5D_t1664964607* ___types3, ParameterModifierU5BU5D_t963192633* ___modifiers4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.TypeAttributes System.Reflection.Emit.DerivedType::GetAttributeFlagsImpl()
extern "C"  int32_t DerivedType_GetAttributeFlagsImpl_m876862795 (DerivedType_t1016359113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.DerivedType::HasElementTypeImpl()
extern "C"  bool DerivedType_HasElementTypeImpl_m919717594 (DerivedType_t1016359113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.DerivedType::IsArrayImpl()
extern "C"  bool DerivedType_IsArrayImpl_m684825803 (DerivedType_t1016359113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.DerivedType::IsByRefImpl()
extern "C"  bool DerivedType_IsByRefImpl_m587660994 (DerivedType_t1016359113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.DerivedType::IsPointerImpl()
extern "C"  bool DerivedType_IsPointerImpl_m411817681 (DerivedType_t1016359113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.DerivedType::IsPrimitiveImpl()
extern "C"  bool DerivedType_IsPrimitiveImpl_m346837491 (DerivedType_t1016359113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.DerivedType::GetConstructors(System.Reflection.BindingFlags)
extern "C"  ConstructorInfoU5BU5D_t1996683371* DerivedType_GetConstructors_m3174158156 (DerivedType_t1016359113 * __this, int32_t ___bindingAttr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.DerivedType::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
extern "C"  Il2CppObject * DerivedType_InvokeMember_m4149586013 (DerivedType_t1016359113 * __this, String_t* ___name0, int32_t ___invokeAttr1, Binder_t3404612058 * ___binder2, Il2CppObject * ___target3, ObjectU5BU5D_t3614634134* ___args4, ParameterModifierU5BU5D_t963192633* ___modifiers5, CultureInfo_t3500843524 * ___culture6, StringU5BU5D_t1642385972* ___namedParameters7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.DerivedType::IsInstanceOfType(System.Object)
extern "C"  bool DerivedType_IsInstanceOfType_m1209218194 (DerivedType_t1016359113 * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.DerivedType::IsAssignableFrom(System.Type)
extern "C"  bool DerivedType_IsAssignableFrom_m149150570 (DerivedType_t1016359113 * __this, Type_t * ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.DerivedType::get_ContainsGenericParameters()
extern "C"  bool DerivedType_get_ContainsGenericParameters_m3700679213 (DerivedType_t1016359113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.DerivedType::MakeGenericType(System.Type[])
extern "C"  Type_t * DerivedType_MakeGenericType_m742223168 (DerivedType_t1016359113 * __this, TypeU5BU5D_t1664964607* ___typeArguments0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.DerivedType::MakeByRefType()
extern "C"  Type_t * DerivedType_MakeByRefType_m1445183672 (DerivedType_t1016359113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.DerivedType::ToString()
extern "C"  String_t* DerivedType_ToString_m747960775 (DerivedType_t1016359113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Emit.DerivedType::get_Assembly()
extern "C"  Assembly_t4268412390 * DerivedType_get_Assembly_m1990356726 (DerivedType_t1016359113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.DerivedType::get_AssemblyQualifiedName()
extern "C"  String_t* DerivedType_get_AssemblyQualifiedName_m2010127631 (DerivedType_t1016359113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.DerivedType::get_FullName()
extern "C"  String_t* DerivedType_get_FullName_m4188379454 (DerivedType_t1016359113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.DerivedType::get_Name()
extern "C"  String_t* DerivedType_get_Name_m1748632995 (DerivedType_t1016359113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.DerivedType::get_Module()
extern "C"  Module_t4282841206 * DerivedType_get_Module_m2877391270 (DerivedType_t1016359113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.DerivedType::get_Namespace()
extern "C"  String_t* DerivedType_get_Namespace_m3902616023 (DerivedType_t1016359113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Reflection.Emit.DerivedType::get_TypeHandle()
extern "C"  RuntimeTypeHandle_t2330101084  DerivedType_get_TypeHandle_m1486870245 (DerivedType_t1016359113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.DerivedType::get_UnderlyingSystemType()
extern "C"  Type_t * DerivedType_get_UnderlyingSystemType_m3904230233 (DerivedType_t1016359113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.DerivedType::IsDefined(System.Type,System.Boolean)
extern "C"  bool DerivedType_IsDefined_m555719351 (DerivedType_t1016359113 * __this, Type_t * ___attributeType0, bool ___inherit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.DerivedType::GetCustomAttributes(System.Boolean)
extern "C"  ObjectU5BU5D_t3614634134* DerivedType_GetCustomAttributes_m731216224 (DerivedType_t1016359113 * __this, bool ___inherit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.DerivedType::GetCustomAttributes(System.Type,System.Boolean)
extern "C"  ObjectU5BU5D_t3614634134* DerivedType_GetCustomAttributes_m4010730569 (DerivedType_t1016359113 * __this, Type_t * ___attributeType0, bool ___inherit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
