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

// Buff
struct Buff_t208977593;
// PlayerHandler
struct PlayerHandler_t2376481597;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Buff_BuffType1306580025.h"
#include "AssemblyU2DCSharp_PlayerHandler2376481597.h"

// System.Void Buff::.ctor()
extern "C"  void Buff__ctor_m212976708 (Buff_t208977593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Buff::.ctor(Buff/BuffType)
extern "C"  void Buff__ctor_m3826057975 (Buff_t208977593 * __this, int32_t ___buffType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Buff::.ctor(Buff/BuffType,PlayerHandler)
extern "C"  void Buff__ctor_m4020174554 (Buff_t208977593 * __this, int32_t ___buffType0, PlayerHandler_t2376481597 * ____playerScript1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Buff::Configure(Buff/BuffType)
extern "C"  void Buff_Configure_m566636483 (Buff_t208977593 * __this, int32_t ___buff0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Buff::Invulnerable()
extern "C"  void Buff_Invulnerable_m1805355739 (Buff_t208977593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Buff::InvulnerableOff()
extern "C"  void Buff_InvulnerableOff_m1740925944 (Buff_t208977593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Buff::RemoveHit(PlayerHandler)
extern "C"  void Buff_RemoveHit_m2353212664 (Buff_t208977593 * __this, PlayerHandler_t2376481597 * ____playerScript0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Buff::CollectAll()
extern "C"  void Buff_CollectAll_m3621036427 (Buff_t208977593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Buff::SlowCards(System.Boolean)
extern "C"  void Buff_SlowCards_m2962500035 (Buff_t208977593 * __this, bool ___activate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Buff::Deactivate()
extern "C"  void Buff_Deactivate_m2344047724 (Buff_t208977593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
