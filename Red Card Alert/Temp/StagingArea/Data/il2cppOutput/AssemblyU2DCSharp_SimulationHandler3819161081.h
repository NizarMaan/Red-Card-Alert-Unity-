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
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.UI.Image
struct Image_t2042527209;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimulationHandler
struct  SimulationHandler_t3819161081  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 SimulationHandler::score
	int32_t ___score_2;
	// UnityEngine.GameObject SimulationHandler::point
	GameObject_t1756533147 * ___point_3;
	// UnityEngine.GameObject SimulationHandler::panel
	GameObject_t1756533147 * ___panel_4;
	// UnityEngine.GameObject SimulationHandler::exampleBall
	GameObject_t1756533147 * ___exampleBall_5;
	// UnityEngine.GameObject SimulationHandler::examplePlayer
	GameObject_t1756533147 * ___examplePlayer_6;
	// UnityEngine.GameObject SimulationHandler::indexFinger
	GameObject_t1756533147 * ___indexFinger_7;
	// UnityEngine.GameObject SimulationHandler::exampleYellowCard0
	GameObject_t1756533147 * ___exampleYellowCard0_8;
	// UnityEngine.GameObject SimulationHandler::exampleYellowCard1
	GameObject_t1756533147 * ___exampleYellowCard1_9;
	// UnityEngine.GameObject SimulationHandler::gameoverPanel
	GameObject_t1756533147 * ___gameoverPanel_10;
	// UnityEngine.UI.Text SimulationHandler::scoreLabel
	Text_t356221433 * ___scoreLabel_11;
	// UnityEngine.UI.Text SimulationHandler::gameOverText
	Text_t356221433 * ___gameOverText_12;
	// UnityEngine.UI.Text SimulationHandler::instructionSet0
	Text_t356221433 * ___instructionSet0_13;
	// UnityEngine.UI.Text SimulationHandler::instructionSet1
	Text_t356221433 * ___instructionSet1_14;
	// UnityEngine.UI.Image SimulationHandler::hit_icon0
	Image_t2042527209 * ___hit_icon0_15;
	// UnityEngine.UI.Image SimulationHandler::hit_icon1
	Image_t2042527209 * ___hit_icon1_16;
	// System.Boolean SimulationHandler::gameOver
	bool ___gameOver_17;
	// System.Single SimulationHandler::timer
	float ___timer_18;

public:
	inline static int32_t get_offset_of_score_2() { return static_cast<int32_t>(offsetof(SimulationHandler_t3819161081, ___score_2)); }
	inline int32_t get_score_2() const { return ___score_2; }
	inline int32_t* get_address_of_score_2() { return &___score_2; }
	inline void set_score_2(int32_t value)
	{
		___score_2 = value;
	}

	inline static int32_t get_offset_of_point_3() { return static_cast<int32_t>(offsetof(SimulationHandler_t3819161081, ___point_3)); }
	inline GameObject_t1756533147 * get_point_3() const { return ___point_3; }
	inline GameObject_t1756533147 ** get_address_of_point_3() { return &___point_3; }
	inline void set_point_3(GameObject_t1756533147 * value)
	{
		___point_3 = value;
		Il2CppCodeGenWriteBarrier(&___point_3, value);
	}

	inline static int32_t get_offset_of_panel_4() { return static_cast<int32_t>(offsetof(SimulationHandler_t3819161081, ___panel_4)); }
	inline GameObject_t1756533147 * get_panel_4() const { return ___panel_4; }
	inline GameObject_t1756533147 ** get_address_of_panel_4() { return &___panel_4; }
	inline void set_panel_4(GameObject_t1756533147 * value)
	{
		___panel_4 = value;
		Il2CppCodeGenWriteBarrier(&___panel_4, value);
	}

	inline static int32_t get_offset_of_exampleBall_5() { return static_cast<int32_t>(offsetof(SimulationHandler_t3819161081, ___exampleBall_5)); }
	inline GameObject_t1756533147 * get_exampleBall_5() const { return ___exampleBall_5; }
	inline GameObject_t1756533147 ** get_address_of_exampleBall_5() { return &___exampleBall_5; }
	inline void set_exampleBall_5(GameObject_t1756533147 * value)
	{
		___exampleBall_5 = value;
		Il2CppCodeGenWriteBarrier(&___exampleBall_5, value);
	}

	inline static int32_t get_offset_of_examplePlayer_6() { return static_cast<int32_t>(offsetof(SimulationHandler_t3819161081, ___examplePlayer_6)); }
	inline GameObject_t1756533147 * get_examplePlayer_6() const { return ___examplePlayer_6; }
	inline GameObject_t1756533147 ** get_address_of_examplePlayer_6() { return &___examplePlayer_6; }
	inline void set_examplePlayer_6(GameObject_t1756533147 * value)
	{
		___examplePlayer_6 = value;
		Il2CppCodeGenWriteBarrier(&___examplePlayer_6, value);
	}

	inline static int32_t get_offset_of_indexFinger_7() { return static_cast<int32_t>(offsetof(SimulationHandler_t3819161081, ___indexFinger_7)); }
	inline GameObject_t1756533147 * get_indexFinger_7() const { return ___indexFinger_7; }
	inline GameObject_t1756533147 ** get_address_of_indexFinger_7() { return &___indexFinger_7; }
	inline void set_indexFinger_7(GameObject_t1756533147 * value)
	{
		___indexFinger_7 = value;
		Il2CppCodeGenWriteBarrier(&___indexFinger_7, value);
	}

	inline static int32_t get_offset_of_exampleYellowCard0_8() { return static_cast<int32_t>(offsetof(SimulationHandler_t3819161081, ___exampleYellowCard0_8)); }
	inline GameObject_t1756533147 * get_exampleYellowCard0_8() const { return ___exampleYellowCard0_8; }
	inline GameObject_t1756533147 ** get_address_of_exampleYellowCard0_8() { return &___exampleYellowCard0_8; }
	inline void set_exampleYellowCard0_8(GameObject_t1756533147 * value)
	{
		___exampleYellowCard0_8 = value;
		Il2CppCodeGenWriteBarrier(&___exampleYellowCard0_8, value);
	}

	inline static int32_t get_offset_of_exampleYellowCard1_9() { return static_cast<int32_t>(offsetof(SimulationHandler_t3819161081, ___exampleYellowCard1_9)); }
	inline GameObject_t1756533147 * get_exampleYellowCard1_9() const { return ___exampleYellowCard1_9; }
	inline GameObject_t1756533147 ** get_address_of_exampleYellowCard1_9() { return &___exampleYellowCard1_9; }
	inline void set_exampleYellowCard1_9(GameObject_t1756533147 * value)
	{
		___exampleYellowCard1_9 = value;
		Il2CppCodeGenWriteBarrier(&___exampleYellowCard1_9, value);
	}

	inline static int32_t get_offset_of_gameoverPanel_10() { return static_cast<int32_t>(offsetof(SimulationHandler_t3819161081, ___gameoverPanel_10)); }
	inline GameObject_t1756533147 * get_gameoverPanel_10() const { return ___gameoverPanel_10; }
	inline GameObject_t1756533147 ** get_address_of_gameoverPanel_10() { return &___gameoverPanel_10; }
	inline void set_gameoverPanel_10(GameObject_t1756533147 * value)
	{
		___gameoverPanel_10 = value;
		Il2CppCodeGenWriteBarrier(&___gameoverPanel_10, value);
	}

	inline static int32_t get_offset_of_scoreLabel_11() { return static_cast<int32_t>(offsetof(SimulationHandler_t3819161081, ___scoreLabel_11)); }
	inline Text_t356221433 * get_scoreLabel_11() const { return ___scoreLabel_11; }
	inline Text_t356221433 ** get_address_of_scoreLabel_11() { return &___scoreLabel_11; }
	inline void set_scoreLabel_11(Text_t356221433 * value)
	{
		___scoreLabel_11 = value;
		Il2CppCodeGenWriteBarrier(&___scoreLabel_11, value);
	}

	inline static int32_t get_offset_of_gameOverText_12() { return static_cast<int32_t>(offsetof(SimulationHandler_t3819161081, ___gameOverText_12)); }
	inline Text_t356221433 * get_gameOverText_12() const { return ___gameOverText_12; }
	inline Text_t356221433 ** get_address_of_gameOverText_12() { return &___gameOverText_12; }
	inline void set_gameOverText_12(Text_t356221433 * value)
	{
		___gameOverText_12 = value;
		Il2CppCodeGenWriteBarrier(&___gameOverText_12, value);
	}

	inline static int32_t get_offset_of_instructionSet0_13() { return static_cast<int32_t>(offsetof(SimulationHandler_t3819161081, ___instructionSet0_13)); }
	inline Text_t356221433 * get_instructionSet0_13() const { return ___instructionSet0_13; }
	inline Text_t356221433 ** get_address_of_instructionSet0_13() { return &___instructionSet0_13; }
	inline void set_instructionSet0_13(Text_t356221433 * value)
	{
		___instructionSet0_13 = value;
		Il2CppCodeGenWriteBarrier(&___instructionSet0_13, value);
	}

	inline static int32_t get_offset_of_instructionSet1_14() { return static_cast<int32_t>(offsetof(SimulationHandler_t3819161081, ___instructionSet1_14)); }
	inline Text_t356221433 * get_instructionSet1_14() const { return ___instructionSet1_14; }
	inline Text_t356221433 ** get_address_of_instructionSet1_14() { return &___instructionSet1_14; }
	inline void set_instructionSet1_14(Text_t356221433 * value)
	{
		___instructionSet1_14 = value;
		Il2CppCodeGenWriteBarrier(&___instructionSet1_14, value);
	}

	inline static int32_t get_offset_of_hit_icon0_15() { return static_cast<int32_t>(offsetof(SimulationHandler_t3819161081, ___hit_icon0_15)); }
	inline Image_t2042527209 * get_hit_icon0_15() const { return ___hit_icon0_15; }
	inline Image_t2042527209 ** get_address_of_hit_icon0_15() { return &___hit_icon0_15; }
	inline void set_hit_icon0_15(Image_t2042527209 * value)
	{
		___hit_icon0_15 = value;
		Il2CppCodeGenWriteBarrier(&___hit_icon0_15, value);
	}

	inline static int32_t get_offset_of_hit_icon1_16() { return static_cast<int32_t>(offsetof(SimulationHandler_t3819161081, ___hit_icon1_16)); }
	inline Image_t2042527209 * get_hit_icon1_16() const { return ___hit_icon1_16; }
	inline Image_t2042527209 ** get_address_of_hit_icon1_16() { return &___hit_icon1_16; }
	inline void set_hit_icon1_16(Image_t2042527209 * value)
	{
		___hit_icon1_16 = value;
		Il2CppCodeGenWriteBarrier(&___hit_icon1_16, value);
	}

	inline static int32_t get_offset_of_gameOver_17() { return static_cast<int32_t>(offsetof(SimulationHandler_t3819161081, ___gameOver_17)); }
	inline bool get_gameOver_17() const { return ___gameOver_17; }
	inline bool* get_address_of_gameOver_17() { return &___gameOver_17; }
	inline void set_gameOver_17(bool value)
	{
		___gameOver_17 = value;
	}

	inline static int32_t get_offset_of_timer_18() { return static_cast<int32_t>(offsetof(SimulationHandler_t3819161081, ___timer_18)); }
	inline float get_timer_18() const { return ___timer_18; }
	inline float* get_address_of_timer_18() { return &___timer_18; }
	inline void set_timer_18(float value)
	{
		___timer_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
