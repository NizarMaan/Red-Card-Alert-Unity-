#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PreviewAnimator
struct  PreviewAnimator_t998981887  : public MonoBehaviour_t1158329972
{
public:
	// System.Single PreviewAnimator::_moveSpeed
	float ____moveSpeed_2;
	// System.Single PreviewAnimator::offset
	float ___offset_3;
	// System.Boolean PreviewAnimator::moveup
	bool ___moveup_4;

public:
	inline static int32_t get_offset_of__moveSpeed_2() { return static_cast<int32_t>(offsetof(PreviewAnimator_t998981887, ____moveSpeed_2)); }
	inline float get__moveSpeed_2() const { return ____moveSpeed_2; }
	inline float* get_address_of__moveSpeed_2() { return &____moveSpeed_2; }
	inline void set__moveSpeed_2(float value)
	{
		____moveSpeed_2 = value;
	}

	inline static int32_t get_offset_of_offset_3() { return static_cast<int32_t>(offsetof(PreviewAnimator_t998981887, ___offset_3)); }
	inline float get_offset_3() const { return ___offset_3; }
	inline float* get_address_of_offset_3() { return &___offset_3; }
	inline void set_offset_3(float value)
	{
		___offset_3 = value;
	}

	inline static int32_t get_offset_of_moveup_4() { return static_cast<int32_t>(offsetof(PreviewAnimator_t998981887, ___moveup_4)); }
	inline bool get_moveup_4() const { return ___moveup_4; }
	inline bool* get_address_of_moveup_4() { return &___moveup_4; }
	inline void set_moveup_4(bool value)
	{
		___moveup_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
