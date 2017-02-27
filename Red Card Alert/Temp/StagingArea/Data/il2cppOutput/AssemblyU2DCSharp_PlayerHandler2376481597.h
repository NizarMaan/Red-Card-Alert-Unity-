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
// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// Buff
struct Buff_t208977593;
// PlayerHandler
struct PlayerHandler_t2376481597;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerHandler
struct  PlayerHandler_t2376481597  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject PlayerHandler::top_lft
	GameObject_t1756533147 * ___top_lft_2;
	// UnityEngine.GameObject PlayerHandler::top_rgt
	GameObject_t1756533147 * ___top_rgt_3;
	// UnityEngine.GameObject PlayerHandler::btm_lft
	GameObject_t1756533147 * ___btm_lft_4;
	// UnityEngine.GameObject PlayerHandler::btm_rgt
	GameObject_t1756533147 * ___btm_rgt_5;
	// UnityEngine.GameObject PlayerHandler::yellowCard
	GameObject_t1756533147 * ___yellowCard_6;
	// UnityEngine.GameObject PlayerHandler::redCard
	GameObject_t1756533147 * ___redCard_7;
	// UnityEngine.UI.Image PlayerHandler::hit_icon0
	Image_t2042527209 * ___hit_icon0_8;
	// UnityEngine.UI.Image PlayerHandler::hit_icon1
	Image_t2042527209 * ___hit_icon1_9;
	// UnityEngine.UI.Image PlayerHandler::buffTimerIcon
	Image_t2042527209 * ___buffTimerIcon_10;
	// UnityEngine.UI.Text PlayerHandler::score_text
	Text_t356221433 * ___score_text_11;
	// UnityEngine.GameObject PlayerHandler::_player
	GameObject_t1756533147 * ____player_14;
	// System.Int32 PlayerHandler::yellow_count
	int32_t ___yellow_count_15;
	// UnityEngine.Color PlayerHandler::originalTrailColor
	Color_t2020392075  ___originalTrailColor_16;
	// UnityEngine.AudioClip PlayerHandler::orb_SFX
	AudioClip_t1932558630 * ___orb_SFX_17;
	// UnityEngine.AudioClip PlayerHandler::yellowCard_SFX
	AudioClip_t1932558630 * ___yellowCard_SFX_18;
	// UnityEngine.AudioClip PlayerHandler::redCard_SFX
	AudioClip_t1932558630 * ___redCard_SFX_19;
	// UnityEngine.AudioClip PlayerHandler::ballpickup_SFX
	AudioClip_t1932558630 * ___ballpickup_SFX_20;
	// UnityEngine.Vector3 PlayerHandler::playerScreenPoint
	Vector3_t2243707580  ___playerScreenPoint_21;
	// UnityEngine.Vector3 PlayerHandler::playerMouseOffset
	Vector3_t2243707580  ___playerMouseOffset_22;
	// Buff PlayerHandler::currentBuff
	Buff_t208977593 * ___currentBuff_23;
	// System.Int32 PlayerHandler::ballCombo
	int32_t ___ballCombo_24;
	// PlayerHandler PlayerHandler::_playerScript
	PlayerHandler_t2376481597 * ____playerScript_25;
	// UnityEngine.GameObject PlayerHandler::vulnTimerIcon
	GameObject_t1756533147 * ___vulnTimerIcon_26;
	// UnityEngine.GameObject PlayerHandler::slowTimerIcon
	GameObject_t1756533147 * ___slowTimerIcon_27;
	// UnityEngine.GameObject PlayerHandler::currentTimer
	GameObject_t1756533147 * ___currentTimer_28;

public:
	inline static int32_t get_offset_of_top_lft_2() { return static_cast<int32_t>(offsetof(PlayerHandler_t2376481597, ___top_lft_2)); }
	inline GameObject_t1756533147 * get_top_lft_2() const { return ___top_lft_2; }
	inline GameObject_t1756533147 ** get_address_of_top_lft_2() { return &___top_lft_2; }
	inline void set_top_lft_2(GameObject_t1756533147 * value)
	{
		___top_lft_2 = value;
		Il2CppCodeGenWriteBarrier(&___top_lft_2, value);
	}

	inline static int32_t get_offset_of_top_rgt_3() { return static_cast<int32_t>(offsetof(PlayerHandler_t2376481597, ___top_rgt_3)); }
	inline GameObject_t1756533147 * get_top_rgt_3() const { return ___top_rgt_3; }
	inline GameObject_t1756533147 ** get_address_of_top_rgt_3() { return &___top_rgt_3; }
	inline void set_top_rgt_3(GameObject_t1756533147 * value)
	{
		___top_rgt_3 = value;
		Il2CppCodeGenWriteBarrier(&___top_rgt_3, value);
	}

	inline static int32_t get_offset_of_btm_lft_4() { return static_cast<int32_t>(offsetof(PlayerHandler_t2376481597, ___btm_lft_4)); }
	inline GameObject_t1756533147 * get_btm_lft_4() const { return ___btm_lft_4; }
	inline GameObject_t1756533147 ** get_address_of_btm_lft_4() { return &___btm_lft_4; }
	inline void set_btm_lft_4(GameObject_t1756533147 * value)
	{
		___btm_lft_4 = value;
		Il2CppCodeGenWriteBarrier(&___btm_lft_4, value);
	}

	inline static int32_t get_offset_of_btm_rgt_5() { return static_cast<int32_t>(offsetof(PlayerHandler_t2376481597, ___btm_rgt_5)); }
	inline GameObject_t1756533147 * get_btm_rgt_5() const { return ___btm_rgt_5; }
	inline GameObject_t1756533147 ** get_address_of_btm_rgt_5() { return &___btm_rgt_5; }
	inline void set_btm_rgt_5(GameObject_t1756533147 * value)
	{
		___btm_rgt_5 = value;
		Il2CppCodeGenWriteBarrier(&___btm_rgt_5, value);
	}

	inline static int32_t get_offset_of_yellowCard_6() { return static_cast<int32_t>(offsetof(PlayerHandler_t2376481597, ___yellowCard_6)); }
	inline GameObject_t1756533147 * get_yellowCard_6() const { return ___yellowCard_6; }
	inline GameObject_t1756533147 ** get_address_of_yellowCard_6() { return &___yellowCard_6; }
	inline void set_yellowCard_6(GameObject_t1756533147 * value)
	{
		___yellowCard_6 = value;
		Il2CppCodeGenWriteBarrier(&___yellowCard_6, value);
	}

	inline static int32_t get_offset_of_redCard_7() { return static_cast<int32_t>(offsetof(PlayerHandler_t2376481597, ___redCard_7)); }
	inline GameObject_t1756533147 * get_redCard_7() const { return ___redCard_7; }
	inline GameObject_t1756533147 ** get_address_of_redCard_7() { return &___redCard_7; }
	inline void set_redCard_7(GameObject_t1756533147 * value)
	{
		___redCard_7 = value;
		Il2CppCodeGenWriteBarrier(&___redCard_7, value);
	}

	inline static int32_t get_offset_of_hit_icon0_8() { return static_cast<int32_t>(offsetof(PlayerHandler_t2376481597, ___hit_icon0_8)); }
	inline Image_t2042527209 * get_hit_icon0_8() const { return ___hit_icon0_8; }
	inline Image_t2042527209 ** get_address_of_hit_icon0_8() { return &___hit_icon0_8; }
	inline void set_hit_icon0_8(Image_t2042527209 * value)
	{
		___hit_icon0_8 = value;
		Il2CppCodeGenWriteBarrier(&___hit_icon0_8, value);
	}

	inline static int32_t get_offset_of_hit_icon1_9() { return static_cast<int32_t>(offsetof(PlayerHandler_t2376481597, ___hit_icon1_9)); }
	inline Image_t2042527209 * get_hit_icon1_9() const { return ___hit_icon1_9; }
	inline Image_t2042527209 ** get_address_of_hit_icon1_9() { return &___hit_icon1_9; }
	inline void set_hit_icon1_9(Image_t2042527209 * value)
	{
		___hit_icon1_9 = value;
		Il2CppCodeGenWriteBarrier(&___hit_icon1_9, value);
	}

	inline static int32_t get_offset_of_buffTimerIcon_10() { return static_cast<int32_t>(offsetof(PlayerHandler_t2376481597, ___buffTimerIcon_10)); }
	inline Image_t2042527209 * get_buffTimerIcon_10() const { return ___buffTimerIcon_10; }
	inline Image_t2042527209 ** get_address_of_buffTimerIcon_10() { return &___buffTimerIcon_10; }
	inline void set_buffTimerIcon_10(Image_t2042527209 * value)
	{
		___buffTimerIcon_10 = value;
		Il2CppCodeGenWriteBarrier(&___buffTimerIcon_10, value);
	}

	inline static int32_t get_offset_of_score_text_11() { return static_cast<int32_t>(offsetof(PlayerHandler_t2376481597, ___score_text_11)); }
	inline Text_t356221433 * get_score_text_11() const { return ___score_text_11; }
	inline Text_t356221433 ** get_address_of_score_text_11() { return &___score_text_11; }
	inline void set_score_text_11(Text_t356221433 * value)
	{
		___score_text_11 = value;
		Il2CppCodeGenWriteBarrier(&___score_text_11, value);
	}

	inline static int32_t get_offset_of__player_14() { return static_cast<int32_t>(offsetof(PlayerHandler_t2376481597, ____player_14)); }
	inline GameObject_t1756533147 * get__player_14() const { return ____player_14; }
	inline GameObject_t1756533147 ** get_address_of__player_14() { return &____player_14; }
	inline void set__player_14(GameObject_t1756533147 * value)
	{
		____player_14 = value;
		Il2CppCodeGenWriteBarrier(&____player_14, value);
	}

	inline static int32_t get_offset_of_yellow_count_15() { return static_cast<int32_t>(offsetof(PlayerHandler_t2376481597, ___yellow_count_15)); }
	inline int32_t get_yellow_count_15() const { return ___yellow_count_15; }
	inline int32_t* get_address_of_yellow_count_15() { return &___yellow_count_15; }
	inline void set_yellow_count_15(int32_t value)
	{
		___yellow_count_15 = value;
	}

	inline static int32_t get_offset_of_originalTrailColor_16() { return static_cast<int32_t>(offsetof(PlayerHandler_t2376481597, ___originalTrailColor_16)); }
	inline Color_t2020392075  get_originalTrailColor_16() const { return ___originalTrailColor_16; }
	inline Color_t2020392075 * get_address_of_originalTrailColor_16() { return &___originalTrailColor_16; }
	inline void set_originalTrailColor_16(Color_t2020392075  value)
	{
		___originalTrailColor_16 = value;
	}

	inline static int32_t get_offset_of_orb_SFX_17() { return static_cast<int32_t>(offsetof(PlayerHandler_t2376481597, ___orb_SFX_17)); }
	inline AudioClip_t1932558630 * get_orb_SFX_17() const { return ___orb_SFX_17; }
	inline AudioClip_t1932558630 ** get_address_of_orb_SFX_17() { return &___orb_SFX_17; }
	inline void set_orb_SFX_17(AudioClip_t1932558630 * value)
	{
		___orb_SFX_17 = value;
		Il2CppCodeGenWriteBarrier(&___orb_SFX_17, value);
	}

	inline static int32_t get_offset_of_yellowCard_SFX_18() { return static_cast<int32_t>(offsetof(PlayerHandler_t2376481597, ___yellowCard_SFX_18)); }
	inline AudioClip_t1932558630 * get_yellowCard_SFX_18() const { return ___yellowCard_SFX_18; }
	inline AudioClip_t1932558630 ** get_address_of_yellowCard_SFX_18() { return &___yellowCard_SFX_18; }
	inline void set_yellowCard_SFX_18(AudioClip_t1932558630 * value)
	{
		___yellowCard_SFX_18 = value;
		Il2CppCodeGenWriteBarrier(&___yellowCard_SFX_18, value);
	}

	inline static int32_t get_offset_of_redCard_SFX_19() { return static_cast<int32_t>(offsetof(PlayerHandler_t2376481597, ___redCard_SFX_19)); }
	inline AudioClip_t1932558630 * get_redCard_SFX_19() const { return ___redCard_SFX_19; }
	inline AudioClip_t1932558630 ** get_address_of_redCard_SFX_19() { return &___redCard_SFX_19; }
	inline void set_redCard_SFX_19(AudioClip_t1932558630 * value)
	{
		___redCard_SFX_19 = value;
		Il2CppCodeGenWriteBarrier(&___redCard_SFX_19, value);
	}

	inline static int32_t get_offset_of_ballpickup_SFX_20() { return static_cast<int32_t>(offsetof(PlayerHandler_t2376481597, ___ballpickup_SFX_20)); }
	inline AudioClip_t1932558630 * get_ballpickup_SFX_20() const { return ___ballpickup_SFX_20; }
	inline AudioClip_t1932558630 ** get_address_of_ballpickup_SFX_20() { return &___ballpickup_SFX_20; }
	inline void set_ballpickup_SFX_20(AudioClip_t1932558630 * value)
	{
		___ballpickup_SFX_20 = value;
		Il2CppCodeGenWriteBarrier(&___ballpickup_SFX_20, value);
	}

	inline static int32_t get_offset_of_playerScreenPoint_21() { return static_cast<int32_t>(offsetof(PlayerHandler_t2376481597, ___playerScreenPoint_21)); }
	inline Vector3_t2243707580  get_playerScreenPoint_21() const { return ___playerScreenPoint_21; }
	inline Vector3_t2243707580 * get_address_of_playerScreenPoint_21() { return &___playerScreenPoint_21; }
	inline void set_playerScreenPoint_21(Vector3_t2243707580  value)
	{
		___playerScreenPoint_21 = value;
	}

	inline static int32_t get_offset_of_playerMouseOffset_22() { return static_cast<int32_t>(offsetof(PlayerHandler_t2376481597, ___playerMouseOffset_22)); }
	inline Vector3_t2243707580  get_playerMouseOffset_22() const { return ___playerMouseOffset_22; }
	inline Vector3_t2243707580 * get_address_of_playerMouseOffset_22() { return &___playerMouseOffset_22; }
	inline void set_playerMouseOffset_22(Vector3_t2243707580  value)
	{
		___playerMouseOffset_22 = value;
	}

	inline static int32_t get_offset_of_currentBuff_23() { return static_cast<int32_t>(offsetof(PlayerHandler_t2376481597, ___currentBuff_23)); }
	inline Buff_t208977593 * get_currentBuff_23() const { return ___currentBuff_23; }
	inline Buff_t208977593 ** get_address_of_currentBuff_23() { return &___currentBuff_23; }
	inline void set_currentBuff_23(Buff_t208977593 * value)
	{
		___currentBuff_23 = value;
		Il2CppCodeGenWriteBarrier(&___currentBuff_23, value);
	}

	inline static int32_t get_offset_of_ballCombo_24() { return static_cast<int32_t>(offsetof(PlayerHandler_t2376481597, ___ballCombo_24)); }
	inline int32_t get_ballCombo_24() const { return ___ballCombo_24; }
	inline int32_t* get_address_of_ballCombo_24() { return &___ballCombo_24; }
	inline void set_ballCombo_24(int32_t value)
	{
		___ballCombo_24 = value;
	}

	inline static int32_t get_offset_of__playerScript_25() { return static_cast<int32_t>(offsetof(PlayerHandler_t2376481597, ____playerScript_25)); }
	inline PlayerHandler_t2376481597 * get__playerScript_25() const { return ____playerScript_25; }
	inline PlayerHandler_t2376481597 ** get_address_of__playerScript_25() { return &____playerScript_25; }
	inline void set__playerScript_25(PlayerHandler_t2376481597 * value)
	{
		____playerScript_25 = value;
		Il2CppCodeGenWriteBarrier(&____playerScript_25, value);
	}

	inline static int32_t get_offset_of_vulnTimerIcon_26() { return static_cast<int32_t>(offsetof(PlayerHandler_t2376481597, ___vulnTimerIcon_26)); }
	inline GameObject_t1756533147 * get_vulnTimerIcon_26() const { return ___vulnTimerIcon_26; }
	inline GameObject_t1756533147 ** get_address_of_vulnTimerIcon_26() { return &___vulnTimerIcon_26; }
	inline void set_vulnTimerIcon_26(GameObject_t1756533147 * value)
	{
		___vulnTimerIcon_26 = value;
		Il2CppCodeGenWriteBarrier(&___vulnTimerIcon_26, value);
	}

	inline static int32_t get_offset_of_slowTimerIcon_27() { return static_cast<int32_t>(offsetof(PlayerHandler_t2376481597, ___slowTimerIcon_27)); }
	inline GameObject_t1756533147 * get_slowTimerIcon_27() const { return ___slowTimerIcon_27; }
	inline GameObject_t1756533147 ** get_address_of_slowTimerIcon_27() { return &___slowTimerIcon_27; }
	inline void set_slowTimerIcon_27(GameObject_t1756533147 * value)
	{
		___slowTimerIcon_27 = value;
		Il2CppCodeGenWriteBarrier(&___slowTimerIcon_27, value);
	}

	inline static int32_t get_offset_of_currentTimer_28() { return static_cast<int32_t>(offsetof(PlayerHandler_t2376481597, ___currentTimer_28)); }
	inline GameObject_t1756533147 * get_currentTimer_28() const { return ___currentTimer_28; }
	inline GameObject_t1756533147 ** get_address_of_currentTimer_28() { return &___currentTimer_28; }
	inline void set_currentTimer_28(GameObject_t1756533147 * value)
	{
		___currentTimer_28 = value;
		Il2CppCodeGenWriteBarrier(&___currentTimer_28, value);
	}
};

struct PlayerHandler_t2376481597_StaticFields
{
public:
	// System.Int32 PlayerHandler::_SCORE
	int32_t ____SCORE_12;
	// System.Boolean PlayerHandler::gameOver
	bool ___gameOver_13;

public:
	inline static int32_t get_offset_of__SCORE_12() { return static_cast<int32_t>(offsetof(PlayerHandler_t2376481597_StaticFields, ____SCORE_12)); }
	inline int32_t get__SCORE_12() const { return ____SCORE_12; }
	inline int32_t* get_address_of__SCORE_12() { return &____SCORE_12; }
	inline void set__SCORE_12(int32_t value)
	{
		____SCORE_12 = value;
	}

	inline static int32_t get_offset_of_gameOver_13() { return static_cast<int32_t>(offsetof(PlayerHandler_t2376481597_StaticFields, ___gameOver_13)); }
	inline bool get_gameOver_13() const { return ___gameOver_13; }
	inline bool* get_address_of_gameOver_13() { return &___gameOver_13; }
	inline void set_gameOver_13(bool value)
	{
		___gameOver_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
