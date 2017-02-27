#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PlayerHandler
struct PlayerHandler_t2376481597;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_Buff_BuffType1306580025.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Buff
struct  Buff_t208977593  : public Il2CppObject
{
public:
	// Buff/BuffType Buff::buff
	int32_t ___buff_0;
	// System.Single Buff::duration
	float ___duration_1;
	// System.Single Buff::startTime
	float ___startTime_2;
	// PlayerHandler Buff::_playerScript
	PlayerHandler_t2376481597 * ____playerScript_3;

public:
	inline static int32_t get_offset_of_buff_0() { return static_cast<int32_t>(offsetof(Buff_t208977593, ___buff_0)); }
	inline int32_t get_buff_0() const { return ___buff_0; }
	inline int32_t* get_address_of_buff_0() { return &___buff_0; }
	inline void set_buff_0(int32_t value)
	{
		___buff_0 = value;
	}

	inline static int32_t get_offset_of_duration_1() { return static_cast<int32_t>(offsetof(Buff_t208977593, ___duration_1)); }
	inline float get_duration_1() const { return ___duration_1; }
	inline float* get_address_of_duration_1() { return &___duration_1; }
	inline void set_duration_1(float value)
	{
		___duration_1 = value;
	}

	inline static int32_t get_offset_of_startTime_2() { return static_cast<int32_t>(offsetof(Buff_t208977593, ___startTime_2)); }
	inline float get_startTime_2() const { return ___startTime_2; }
	inline float* get_address_of_startTime_2() { return &___startTime_2; }
	inline void set_startTime_2(float value)
	{
		___startTime_2 = value;
	}

	inline static int32_t get_offset_of__playerScript_3() { return static_cast<int32_t>(offsetof(Buff_t208977593, ____playerScript_3)); }
	inline PlayerHandler_t2376481597 * get__playerScript_3() const { return ____playerScript_3; }
	inline PlayerHandler_t2376481597 ** get_address_of__playerScript_3() { return &____playerScript_3; }
	inline void set__playerScript_3(PlayerHandler_t2376481597 * value)
	{
		____playerScript_3 = value;
		Il2CppCodeGenWriteBarrier(&____playerScript_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
