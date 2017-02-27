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

// PlayerHandler
struct PlayerHandler_t2376481597;
// Buff
struct Buff_t208977593;
// UnityEngine.Collision2D
struct Collision2D_t1539500754;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Collision2D1539500754.h"
#include "mscorlib_System_String2029220233.h"

// System.Void PlayerHandler::.ctor()
extern "C"  void PlayerHandler__ctor_m3663227086 (PlayerHandler_t2376481597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerHandler::Awake()
extern "C"  void PlayerHandler_Awake_m3873483165 (PlayerHandler_t2376481597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerHandler::Start()
extern "C"  void PlayerHandler_Start_m2870975022 (PlayerHandler_t2376481597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerHandler::Update()
extern "C"  void PlayerHandler_Update_m1101022633 (PlayerHandler_t2376481597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerHandler::OnMouseDown()
extern "C"  void PlayerHandler_OnMouseDown_m2761634738 (PlayerHandler_t2376481597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerHandler::OnMouseDrag()
extern "C"  void PlayerHandler_OnMouseDrag_m716811256 (PlayerHandler_t2376481597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Buff PlayerHandler::GetCurrentBuff()
extern "C"  Buff_t208977593 * PlayerHandler_GetCurrentBuff_m3368183820 (PlayerHandler_t2376481597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerHandler::OnCollisionEnter2D(UnityEngine.Collision2D)
extern "C"  void PlayerHandler_OnCollisionEnter2D_m753924180 (PlayerHandler_t2376481597 * __this, Collision2D_t1539500754 * ___coll0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerHandler::PlaySound(System.String)
extern "C"  void PlayerHandler_PlaySound_m773832569 (PlayerHandler_t2376481597 * __this, String_t* ___objectType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerHandler::showHitIcon(System.Int32)
extern "C"  void PlayerHandler_showHitIcon_m3982715228 (PlayerHandler_t2376481597 * __this, int32_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerHandler::TimerIconActivate()
extern "C"  void PlayerHandler_TimerIconActivate_m2093108317 (PlayerHandler_t2376481597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerHandler::TimerCountDown()
extern "C"  void PlayerHandler_TimerCountDown_m3554160828 (PlayerHandler_t2376481597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
