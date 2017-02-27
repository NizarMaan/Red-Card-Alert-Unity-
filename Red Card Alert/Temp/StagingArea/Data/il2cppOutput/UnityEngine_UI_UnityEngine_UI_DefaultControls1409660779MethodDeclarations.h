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

// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.UI.Selectable
struct Selectable_t1490392188;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UI_UnityEngine_UI_Text356221433.h"
#include "UnityEngine_UI_UnityEngine_UI_Selectable1490392188.h"
#include "UnityEngine_UI_UnityEngine_UI_DefaultControls_Reso2975512894.h"

// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateUIElementRoot(System.String,UnityEngine.Vector2)
extern "C"  GameObject_t1756533147 * DefaultControls_CreateUIElementRoot_m2316420647 (Il2CppObject * __this /* static, unused */, String_t* ___name0, Vector2_t2243707579  ___size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateUIObject(System.String,UnityEngine.GameObject)
extern "C"  GameObject_t1756533147 * DefaultControls_CreateUIObject_m2810394112 (Il2CppObject * __this /* static, unused */, String_t* ___name0, GameObject_t1756533147 * ___parent1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.DefaultControls::SetDefaultTextValues(UnityEngine.UI.Text)
extern "C"  void DefaultControls_SetDefaultTextValues_m1707718380 (Il2CppObject * __this /* static, unused */, Text_t356221433 * ___lbl0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.DefaultControls::SetDefaultColorTransitionValues(UnityEngine.UI.Selectable)
extern "C"  void DefaultControls_SetDefaultColorTransitionValues_m1736608236 (Il2CppObject * __this /* static, unused */, Selectable_t1490392188 * ___slider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.DefaultControls::SetParentAndAlign(UnityEngine.GameObject,UnityEngine.GameObject)
extern "C"  void DefaultControls_SetParentAndAlign_m3048898502 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___child0, GameObject_t1756533147 * ___parent1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.DefaultControls::SetLayerRecursively(UnityEngine.GameObject,System.Int32)
extern "C"  void DefaultControls_SetLayerRecursively_m2909850981 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___go0, int32_t ___layer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreatePanel(UnityEngine.UI.DefaultControls/Resources)
extern "C"  GameObject_t1756533147 * DefaultControls_CreatePanel_m2069659875 (Il2CppObject * __this /* static, unused */, Resources_t2975512894  ___resources0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateButton(UnityEngine.UI.DefaultControls/Resources)
extern "C"  GameObject_t1756533147 * DefaultControls_CreateButton_m717585179 (Il2CppObject * __this /* static, unused */, Resources_t2975512894  ___resources0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateText(UnityEngine.UI.DefaultControls/Resources)
extern "C"  GameObject_t1756533147 * DefaultControls_CreateText_m2538453230 (Il2CppObject * __this /* static, unused */, Resources_t2975512894  ___resources0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateImage(UnityEngine.UI.DefaultControls/Resources)
extern "C"  GameObject_t1756533147 * DefaultControls_CreateImage_m2821562988 (Il2CppObject * __this /* static, unused */, Resources_t2975512894  ___resources0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateRawImage(UnityEngine.UI.DefaultControls/Resources)
extern "C"  GameObject_t1756533147 * DefaultControls_CreateRawImage_m2572997170 (Il2CppObject * __this /* static, unused */, Resources_t2975512894  ___resources0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateSlider(UnityEngine.UI.DefaultControls/Resources)
extern "C"  GameObject_t1756533147 * DefaultControls_CreateSlider_m3525165396 (Il2CppObject * __this /* static, unused */, Resources_t2975512894  ___resources0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateScrollbar(UnityEngine.UI.DefaultControls/Resources)
extern "C"  GameObject_t1756533147 * DefaultControls_CreateScrollbar_m770089625 (Il2CppObject * __this /* static, unused */, Resources_t2975512894  ___resources0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateToggle(UnityEngine.UI.DefaultControls/Resources)
extern "C"  GameObject_t1756533147 * DefaultControls_CreateToggle_m1568873127 (Il2CppObject * __this /* static, unused */, Resources_t2975512894  ___resources0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateInputField(UnityEngine.UI.DefaultControls/Resources)
extern "C"  GameObject_t1756533147 * DefaultControls_CreateInputField_m2017153345 (Il2CppObject * __this /* static, unused */, Resources_t2975512894  ___resources0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateDropdown(UnityEngine.UI.DefaultControls/Resources)
extern "C"  GameObject_t1756533147 * DefaultControls_CreateDropdown_m1384069408 (Il2CppObject * __this /* static, unused */, Resources_t2975512894  ___resources0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateScrollView(UnityEngine.UI.DefaultControls/Resources)
extern "C"  GameObject_t1756533147 * DefaultControls_CreateScrollView_m2735104649 (Il2CppObject * __this /* static, unused */, Resources_t2975512894  ___resources0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.DefaultControls::.cctor()
extern "C"  void DefaultControls__cctor_m564778157 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
