#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Collider2D
struct Collider2D_t646061738;

#include "mscorlib_System_ValueType3507792607.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ContactPoint2D
struct  ContactPoint2D_t3659330976 
{
public:
	// UnityEngine.Vector2 UnityEngine.ContactPoint2D::m_Point
	Vector2_t2243707579  ___m_Point_0;
	// UnityEngine.Vector2 UnityEngine.ContactPoint2D::m_Normal
	Vector2_t2243707579  ___m_Normal_1;
	// UnityEngine.Collider2D UnityEngine.ContactPoint2D::m_Collider
	Collider2D_t646061738 * ___m_Collider_2;
	// UnityEngine.Collider2D UnityEngine.ContactPoint2D::m_OtherCollider
	Collider2D_t646061738 * ___m_OtherCollider_3;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3659330976, ___m_Point_0)); }
	inline Vector2_t2243707579  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector2_t2243707579 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector2_t2243707579  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3659330976, ___m_Normal_1)); }
	inline Vector2_t2243707579  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector2_t2243707579 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector2_t2243707579  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_Collider_2() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3659330976, ___m_Collider_2)); }
	inline Collider2D_t646061738 * get_m_Collider_2() const { return ___m_Collider_2; }
	inline Collider2D_t646061738 ** get_address_of_m_Collider_2() { return &___m_Collider_2; }
	inline void set_m_Collider_2(Collider2D_t646061738 * value)
	{
		___m_Collider_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_Collider_2, value);
	}

	inline static int32_t get_offset_of_m_OtherCollider_3() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3659330976, ___m_OtherCollider_3)); }
	inline Collider2D_t646061738 * get_m_OtherCollider_3() const { return ___m_OtherCollider_3; }
	inline Collider2D_t646061738 ** get_address_of_m_OtherCollider_3() { return &___m_OtherCollider_3; }
	inline void set_m_OtherCollider_3(Collider2D_t646061738 * value)
	{
		___m_OtherCollider_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_OtherCollider_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ContactPoint2D
struct ContactPoint2D_t3659330976_marshaled_pinvoke
{
	Vector2_t2243707579  ___m_Point_0;
	Vector2_t2243707579  ___m_Normal_1;
	Collider2D_t646061738 * ___m_Collider_2;
	Collider2D_t646061738 * ___m_OtherCollider_3;
};
// Native definition for COM marshalling of UnityEngine.ContactPoint2D
struct ContactPoint2D_t3659330976_marshaled_com
{
	Vector2_t2243707579  ___m_Point_0;
	Vector2_t2243707579  ___m_Normal_1;
	Collider2D_t646061738 * ___m_Collider_2;
	Collider2D_t646061738 * ___m_OtherCollider_3;
};
