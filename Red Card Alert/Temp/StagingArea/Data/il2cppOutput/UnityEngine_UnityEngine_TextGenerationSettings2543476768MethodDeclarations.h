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

// UnityEngine.TextGenerationSettings
struct TextGenerationSettings_t2543476768;
struct TextGenerationSettings_t2543476768_marshaled_pinvoke;
struct TextGenerationSettings_t2543476768_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_TextGenerationSettings2543476768.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// System.Boolean UnityEngine.TextGenerationSettings::CompareColors(UnityEngine.Color,UnityEngine.Color)
extern "C"  bool TextGenerationSettings_CompareColors_m991725620 (TextGenerationSettings_t2543476768 * __this, Color_t2020392075  ___left0, Color_t2020392075  ___right1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextGenerationSettings::CompareVector2(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  bool TextGenerationSettings_CompareVector2_m592645251 (TextGenerationSettings_t2543476768 * __this, Vector2_t2243707579  ___left0, Vector2_t2243707579  ___right1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextGenerationSettings::Equals(UnityEngine.TextGenerationSettings)
extern "C"  bool TextGenerationSettings_Equals_m3944651893 (TextGenerationSettings_t2543476768 * __this, TextGenerationSettings_t2543476768  ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct TextGenerationSettings_t2543476768;
struct TextGenerationSettings_t2543476768_marshaled_pinvoke;

extern "C" void TextGenerationSettings_t2543476768_marshal_pinvoke(const TextGenerationSettings_t2543476768& unmarshaled, TextGenerationSettings_t2543476768_marshaled_pinvoke& marshaled);
extern "C" void TextGenerationSettings_t2543476768_marshal_pinvoke_back(const TextGenerationSettings_t2543476768_marshaled_pinvoke& marshaled, TextGenerationSettings_t2543476768& unmarshaled);
extern "C" void TextGenerationSettings_t2543476768_marshal_pinvoke_cleanup(TextGenerationSettings_t2543476768_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct TextGenerationSettings_t2543476768;
struct TextGenerationSettings_t2543476768_marshaled_com;

extern "C" void TextGenerationSettings_t2543476768_marshal_com(const TextGenerationSettings_t2543476768& unmarshaled, TextGenerationSettings_t2543476768_marshaled_com& marshaled);
extern "C" void TextGenerationSettings_t2543476768_marshal_com_back(const TextGenerationSettings_t2543476768_marshaled_com& marshaled, TextGenerationSettings_t2543476768& unmarshaled);
extern "C" void TextGenerationSettings_t2543476768_marshal_com_cleanup(TextGenerationSettings_t2543476768_marshaled_com& marshaled);
