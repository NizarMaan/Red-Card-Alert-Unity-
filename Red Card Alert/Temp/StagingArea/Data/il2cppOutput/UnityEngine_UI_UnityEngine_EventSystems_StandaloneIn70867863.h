#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "UnityEngine_UI_UnityEngine_EventSystems_PointerInp1441575871.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.StandaloneInputModule
struct  StandaloneInputModule_t70867863  : public PointerInputModule_t1441575871
{
public:
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_PrevActionTime
	float ___m_PrevActionTime_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_LastMoveVector
	Vector2_t2243707579  ___m_LastMoveVector_15;
	// System.Int32 UnityEngine.EventSystems.StandaloneInputModule::m_ConsecutiveMoveCount
	int32_t ___m_ConsecutiveMoveCount_16;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_LastMousePosition
	Vector2_t2243707579  ___m_LastMousePosition_17;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_MousePosition
	Vector2_t2243707579  ___m_MousePosition_18;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_HorizontalAxis
	String_t* ___m_HorizontalAxis_19;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_VerticalAxis
	String_t* ___m_VerticalAxis_20;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_SubmitButton
	String_t* ___m_SubmitButton_21;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_CancelButton
	String_t* ___m_CancelButton_22;
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_InputActionsPerSecond
	float ___m_InputActionsPerSecond_23;
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_RepeatDelay
	float ___m_RepeatDelay_24;
	// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::m_ForceModuleActive
	bool ___m_ForceModuleActive_25;

public:
	inline static int32_t get_offset_of_m_PrevActionTime_14() { return static_cast<int32_t>(offsetof(StandaloneInputModule_t70867863, ___m_PrevActionTime_14)); }
	inline float get_m_PrevActionTime_14() const { return ___m_PrevActionTime_14; }
	inline float* get_address_of_m_PrevActionTime_14() { return &___m_PrevActionTime_14; }
	inline void set_m_PrevActionTime_14(float value)
	{
		___m_PrevActionTime_14 = value;
	}

	inline static int32_t get_offset_of_m_LastMoveVector_15() { return static_cast<int32_t>(offsetof(StandaloneInputModule_t70867863, ___m_LastMoveVector_15)); }
	inline Vector2_t2243707579  get_m_LastMoveVector_15() const { return ___m_LastMoveVector_15; }
	inline Vector2_t2243707579 * get_address_of_m_LastMoveVector_15() { return &___m_LastMoveVector_15; }
	inline void set_m_LastMoveVector_15(Vector2_t2243707579  value)
	{
		___m_LastMoveVector_15 = value;
	}

	inline static int32_t get_offset_of_m_ConsecutiveMoveCount_16() { return static_cast<int32_t>(offsetof(StandaloneInputModule_t70867863, ___m_ConsecutiveMoveCount_16)); }
	inline int32_t get_m_ConsecutiveMoveCount_16() const { return ___m_ConsecutiveMoveCount_16; }
	inline int32_t* get_address_of_m_ConsecutiveMoveCount_16() { return &___m_ConsecutiveMoveCount_16; }
	inline void set_m_ConsecutiveMoveCount_16(int32_t value)
	{
		___m_ConsecutiveMoveCount_16 = value;
	}

	inline static int32_t get_offset_of_m_LastMousePosition_17() { return static_cast<int32_t>(offsetof(StandaloneInputModule_t70867863, ___m_LastMousePosition_17)); }
	inline Vector2_t2243707579  get_m_LastMousePosition_17() const { return ___m_LastMousePosition_17; }
	inline Vector2_t2243707579 * get_address_of_m_LastMousePosition_17() { return &___m_LastMousePosition_17; }
	inline void set_m_LastMousePosition_17(Vector2_t2243707579  value)
	{
		___m_LastMousePosition_17 = value;
	}

	inline static int32_t get_offset_of_m_MousePosition_18() { return static_cast<int32_t>(offsetof(StandaloneInputModule_t70867863, ___m_MousePosition_18)); }
	inline Vector2_t2243707579  get_m_MousePosition_18() const { return ___m_MousePosition_18; }
	inline Vector2_t2243707579 * get_address_of_m_MousePosition_18() { return &___m_MousePosition_18; }
	inline void set_m_MousePosition_18(Vector2_t2243707579  value)
	{
		___m_MousePosition_18 = value;
	}

	inline static int32_t get_offset_of_m_HorizontalAxis_19() { return static_cast<int32_t>(offsetof(StandaloneInputModule_t70867863, ___m_HorizontalAxis_19)); }
	inline String_t* get_m_HorizontalAxis_19() const { return ___m_HorizontalAxis_19; }
	inline String_t** get_address_of_m_HorizontalAxis_19() { return &___m_HorizontalAxis_19; }
	inline void set_m_HorizontalAxis_19(String_t* value)
	{
		___m_HorizontalAxis_19 = value;
		Il2CppCodeGenWriteBarrier(&___m_HorizontalAxis_19, value);
	}

	inline static int32_t get_offset_of_m_VerticalAxis_20() { return static_cast<int32_t>(offsetof(StandaloneInputModule_t70867863, ___m_VerticalAxis_20)); }
	inline String_t* get_m_VerticalAxis_20() const { return ___m_VerticalAxis_20; }
	inline String_t** get_address_of_m_VerticalAxis_20() { return &___m_VerticalAxis_20; }
	inline void set_m_VerticalAxis_20(String_t* value)
	{
		___m_VerticalAxis_20 = value;
		Il2CppCodeGenWriteBarrier(&___m_VerticalAxis_20, value);
	}

	inline static int32_t get_offset_of_m_SubmitButton_21() { return static_cast<int32_t>(offsetof(StandaloneInputModule_t70867863, ___m_SubmitButton_21)); }
	inline String_t* get_m_SubmitButton_21() const { return ___m_SubmitButton_21; }
	inline String_t** get_address_of_m_SubmitButton_21() { return &___m_SubmitButton_21; }
	inline void set_m_SubmitButton_21(String_t* value)
	{
		___m_SubmitButton_21 = value;
		Il2CppCodeGenWriteBarrier(&___m_SubmitButton_21, value);
	}

	inline static int32_t get_offset_of_m_CancelButton_22() { return static_cast<int32_t>(offsetof(StandaloneInputModule_t70867863, ___m_CancelButton_22)); }
	inline String_t* get_m_CancelButton_22() const { return ___m_CancelButton_22; }
	inline String_t** get_address_of_m_CancelButton_22() { return &___m_CancelButton_22; }
	inline void set_m_CancelButton_22(String_t* value)
	{
		___m_CancelButton_22 = value;
		Il2CppCodeGenWriteBarrier(&___m_CancelButton_22, value);
	}

	inline static int32_t get_offset_of_m_InputActionsPerSecond_23() { return static_cast<int32_t>(offsetof(StandaloneInputModule_t70867863, ___m_InputActionsPerSecond_23)); }
	inline float get_m_InputActionsPerSecond_23() const { return ___m_InputActionsPerSecond_23; }
	inline float* get_address_of_m_InputActionsPerSecond_23() { return &___m_InputActionsPerSecond_23; }
	inline void set_m_InputActionsPerSecond_23(float value)
	{
		___m_InputActionsPerSecond_23 = value;
	}

	inline static int32_t get_offset_of_m_RepeatDelay_24() { return static_cast<int32_t>(offsetof(StandaloneInputModule_t70867863, ___m_RepeatDelay_24)); }
	inline float get_m_RepeatDelay_24() const { return ___m_RepeatDelay_24; }
	inline float* get_address_of_m_RepeatDelay_24() { return &___m_RepeatDelay_24; }
	inline void set_m_RepeatDelay_24(float value)
	{
		___m_RepeatDelay_24 = value;
	}

	inline static int32_t get_offset_of_m_ForceModuleActive_25() { return static_cast<int32_t>(offsetof(StandaloneInputModule_t70867863, ___m_ForceModuleActive_25)); }
	inline bool get_m_ForceModuleActive_25() const { return ___m_ForceModuleActive_25; }
	inline bool* get_address_of_m_ForceModuleActive_25() { return &___m_ForceModuleActive_25; }
	inline void set_m_ForceModuleActive_25(bool value)
	{
		___m_ForceModuleActive_25 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
