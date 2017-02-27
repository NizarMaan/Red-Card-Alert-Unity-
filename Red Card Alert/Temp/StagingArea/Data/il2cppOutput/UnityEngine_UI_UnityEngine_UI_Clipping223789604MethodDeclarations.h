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

// System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D>
struct List_1_t525307096;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"

// UnityEngine.Rect UnityEngine.UI.Clipping::FindCullAndClipWorldRect(System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D>,System.Boolean&)
extern "C"  Rect_t3681755626  Clipping_FindCullAndClipWorldRect_m3959472775 (Il2CppObject * __this /* static, unused */, List_1_t525307096 * ___rectMaskParents0, bool* ___validRect1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.UI.Clipping::RectIntersect(UnityEngine.Rect,UnityEngine.Rect)
extern "C"  Rect_t3681755626  Clipping_RectIntersect_m2607162704 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___a0, Rect_t3681755626  ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
