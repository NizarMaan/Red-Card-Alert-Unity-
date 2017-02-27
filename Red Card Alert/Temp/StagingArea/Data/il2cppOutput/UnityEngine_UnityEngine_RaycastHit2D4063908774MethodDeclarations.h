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

// UnityEngine.Collider2D
struct Collider2D_t646061738;
// UnityEngine.RaycastHit2D
struct RaycastHit2D_t4063908774;
struct RaycastHit2D_t4063908774_marshaled_pinvoke;
struct RaycastHit2D_t4063908774_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RaycastHit2D4063908774.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_point()
extern "C"  Vector2_t2243707579  RaycastHit2D_get_point_m442317739 (RaycastHit2D_t4063908774 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_normal()
extern "C"  Vector2_t2243707579  RaycastHit2D_get_normal_m3768105386 (RaycastHit2D_t4063908774 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.RaycastHit2D::get_fraction()
extern "C"  float RaycastHit2D_get_fraction_m1296150410 (RaycastHit2D_t4063908774 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider2D UnityEngine.RaycastHit2D::get_collider()
extern "C"  Collider2D_t646061738 * RaycastHit2D_get_collider_m2568504212 (RaycastHit2D_t4063908774 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct RaycastHit2D_t4063908774;
struct RaycastHit2D_t4063908774_marshaled_pinvoke;

extern "C" void RaycastHit2D_t4063908774_marshal_pinvoke(const RaycastHit2D_t4063908774& unmarshaled, RaycastHit2D_t4063908774_marshaled_pinvoke& marshaled);
extern "C" void RaycastHit2D_t4063908774_marshal_pinvoke_back(const RaycastHit2D_t4063908774_marshaled_pinvoke& marshaled, RaycastHit2D_t4063908774& unmarshaled);
extern "C" void RaycastHit2D_t4063908774_marshal_pinvoke_cleanup(RaycastHit2D_t4063908774_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct RaycastHit2D_t4063908774;
struct RaycastHit2D_t4063908774_marshaled_com;

extern "C" void RaycastHit2D_t4063908774_marshal_com(const RaycastHit2D_t4063908774& unmarshaled, RaycastHit2D_t4063908774_marshaled_com& marshaled);
extern "C" void RaycastHit2D_t4063908774_marshal_com_back(const RaycastHit2D_t4063908774_marshaled_com& marshaled, RaycastHit2D_t4063908774& unmarshaled);
extern "C" void RaycastHit2D_t4063908774_marshal_com_cleanup(RaycastHit2D_t4063908774_marshaled_com& marshaled);
