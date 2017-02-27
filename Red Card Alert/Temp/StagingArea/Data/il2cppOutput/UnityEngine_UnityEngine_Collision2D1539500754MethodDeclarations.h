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

// UnityEngine.Collision2D
struct Collision2D_t1539500754;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// UnityEngine.Collider2D
struct Collider2D_t646061738;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t1215651809;
struct Collision2D_t1539500754_marshaled_pinvoke;
struct Collision2D_t1539500754_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// System.Void UnityEngine.Collision2D::.ctor()
extern "C"  void Collision2D__ctor_m2559810705 (Collision2D_t1539500754 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Collision2D::get_enabled()
extern "C"  bool Collision2D_get_enabled_m1627968529 (Collision2D_t1539500754 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody2D UnityEngine.Collision2D::get_rigidbody()
extern "C"  Rigidbody2D_t502193897 * Collision2D_get_rigidbody_m4058558226 (Collision2D_t1539500754 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider2D UnityEngine.Collision2D::get_collider()
extern "C"  Collider2D_t646061738 * Collision2D_get_collider_m3330356936 (Collision2D_t1539500754 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Collision2D::get_transform()
extern "C"  Transform_t3275118058 * Collision2D_get_transform_m314016758 (Collision2D_t1539500754 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Collision2D::get_gameObject()
extern "C"  GameObject_t1756533147 * Collision2D_get_gameObject_m4234358314 (Collision2D_t1539500754 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::get_contacts()
extern "C"  ContactPoint2DU5BU5D_t1215651809* Collision2D_get_contacts_m2230578195 (Collision2D_t1539500754 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Collision2D::get_relativeVelocity()
extern "C"  Vector2_t2243707579  Collision2D_get_relativeVelocity_m2410092780 (Collision2D_t1539500754 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Collision2D_t1539500754;
struct Collision2D_t1539500754_marshaled_pinvoke;

extern "C" void Collision2D_t1539500754_marshal_pinvoke(const Collision2D_t1539500754& unmarshaled, Collision2D_t1539500754_marshaled_pinvoke& marshaled);
extern "C" void Collision2D_t1539500754_marshal_pinvoke_back(const Collision2D_t1539500754_marshaled_pinvoke& marshaled, Collision2D_t1539500754& unmarshaled);
extern "C" void Collision2D_t1539500754_marshal_pinvoke_cleanup(Collision2D_t1539500754_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Collision2D_t1539500754;
struct Collision2D_t1539500754_marshaled_com;

extern "C" void Collision2D_t1539500754_marshal_com(const Collision2D_t1539500754& unmarshaled, Collision2D_t1539500754_marshaled_com& marshaled);
extern "C" void Collision2D_t1539500754_marshal_com_back(const Collision2D_t1539500754_marshaled_com& marshaled, Collision2D_t1539500754& unmarshaled);
extern "C" void Collision2D_t1539500754_marshal_com_cleanup(Collision2D_t1539500754_marshaled_com& marshaled);
