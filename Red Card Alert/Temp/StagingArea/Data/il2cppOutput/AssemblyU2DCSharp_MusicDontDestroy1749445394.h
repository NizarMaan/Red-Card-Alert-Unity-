#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Image
struct Image_t2042527209;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MusicDontDestroy
struct  MusicDontDestroy_t1749445394  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Image MusicDontDestroy::toggleMuteON
	Image_t2042527209 * ___toggleMuteON_3;
	// UnityEngine.UI.Image MusicDontDestroy::toggleMuteOFF
	Image_t2042527209 * ___toggleMuteOFF_4;

public:
	inline static int32_t get_offset_of_toggleMuteON_3() { return static_cast<int32_t>(offsetof(MusicDontDestroy_t1749445394, ___toggleMuteON_3)); }
	inline Image_t2042527209 * get_toggleMuteON_3() const { return ___toggleMuteON_3; }
	inline Image_t2042527209 ** get_address_of_toggleMuteON_3() { return &___toggleMuteON_3; }
	inline void set_toggleMuteON_3(Image_t2042527209 * value)
	{
		___toggleMuteON_3 = value;
		Il2CppCodeGenWriteBarrier(&___toggleMuteON_3, value);
	}

	inline static int32_t get_offset_of_toggleMuteOFF_4() { return static_cast<int32_t>(offsetof(MusicDontDestroy_t1749445394, ___toggleMuteOFF_4)); }
	inline Image_t2042527209 * get_toggleMuteOFF_4() const { return ___toggleMuteOFF_4; }
	inline Image_t2042527209 ** get_address_of_toggleMuteOFF_4() { return &___toggleMuteOFF_4; }
	inline void set_toggleMuteOFF_4(Image_t2042527209 * value)
	{
		___toggleMuteOFF_4 = value;
		Il2CppCodeGenWriteBarrier(&___toggleMuteOFF_4, value);
	}
};

struct MusicDontDestroy_t1749445394_StaticFields
{
public:
	// System.Boolean MusicDontDestroy::Muted
	bool ___Muted_2;

public:
	inline static int32_t get_offset_of_Muted_2() { return static_cast<int32_t>(offsetof(MusicDontDestroy_t1749445394_StaticFields, ___Muted_2)); }
	inline bool get_Muted_2() const { return ___Muted_2; }
	inline bool* get_address_of_Muted_2() { return &___Muted_2; }
	inline void set_Muted_2(bool value)
	{
		___Muted_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
