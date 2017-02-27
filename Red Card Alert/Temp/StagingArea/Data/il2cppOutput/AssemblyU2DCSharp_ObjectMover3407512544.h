#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Animator
struct Animator_t69676727;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ObjectMover
struct  ObjectMover_t3407512544  : public MonoBehaviour_t1158329972
{
public:
	// System.Single ObjectMover::move_speed
	float ___move_speed_2;
	// UnityEngine.GameObject ObjectMover::top_lft
	GameObject_t1756533147 * ___top_lft_3;
	// UnityEngine.GameObject ObjectMover::_player
	GameObject_t1756533147 * ____player_4;
	// System.Boolean ObjectMover::slowed
	bool ___slowed_5;
	// UnityEngine.Animator ObjectMover::animator
	Animator_t69676727 * ___animator_6;

public:
	inline static int32_t get_offset_of_move_speed_2() { return static_cast<int32_t>(offsetof(ObjectMover_t3407512544, ___move_speed_2)); }
	inline float get_move_speed_2() const { return ___move_speed_2; }
	inline float* get_address_of_move_speed_2() { return &___move_speed_2; }
	inline void set_move_speed_2(float value)
	{
		___move_speed_2 = value;
	}

	inline static int32_t get_offset_of_top_lft_3() { return static_cast<int32_t>(offsetof(ObjectMover_t3407512544, ___top_lft_3)); }
	inline GameObject_t1756533147 * get_top_lft_3() const { return ___top_lft_3; }
	inline GameObject_t1756533147 ** get_address_of_top_lft_3() { return &___top_lft_3; }
	inline void set_top_lft_3(GameObject_t1756533147 * value)
	{
		___top_lft_3 = value;
		Il2CppCodeGenWriteBarrier(&___top_lft_3, value);
	}

	inline static int32_t get_offset_of__player_4() { return static_cast<int32_t>(offsetof(ObjectMover_t3407512544, ____player_4)); }
	inline GameObject_t1756533147 * get__player_4() const { return ____player_4; }
	inline GameObject_t1756533147 ** get_address_of__player_4() { return &____player_4; }
	inline void set__player_4(GameObject_t1756533147 * value)
	{
		____player_4 = value;
		Il2CppCodeGenWriteBarrier(&____player_4, value);
	}

	inline static int32_t get_offset_of_slowed_5() { return static_cast<int32_t>(offsetof(ObjectMover_t3407512544, ___slowed_5)); }
	inline bool get_slowed_5() const { return ___slowed_5; }
	inline bool* get_address_of_slowed_5() { return &___slowed_5; }
	inline void set_slowed_5(bool value)
	{
		___slowed_5 = value;
	}

	inline static int32_t get_offset_of_animator_6() { return static_cast<int32_t>(offsetof(ObjectMover_t3407512544, ___animator_6)); }
	inline Animator_t69676727 * get_animator_6() const { return ___animator_6; }
	inline Animator_t69676727 ** get_address_of_animator_6() { return &___animator_6; }
	inline void set_animator_6(Animator_t69676727 * value)
	{
		___animator_6 = value;
		Il2CppCodeGenWriteBarrier(&___animator_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
