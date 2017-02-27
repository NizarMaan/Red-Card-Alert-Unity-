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

// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.TextGenerator
struct TextGenerator_t647235000;
// UnityEngine.Texture
struct Texture_t2243626319;
// UnityEngine.Font
struct Font_t4239498691;
// System.String
struct String_t;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t385374196;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Font4239498691.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_TextAnchor112990806.h"
#include "UnityEngine_UnityEngine_HorizontalWrapMode2027154177.h"
#include "UnityEngine_UnityEngine_VerticalWrapMode3668245347.h"
#include "UnityEngine_UnityEngine_FontStyle2764949590.h"
#include "UnityEngine_UnityEngine_TextGenerationSettings2543476768.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UI_UnityEngine_UI_VertexHelper385374196.h"

// System.Void UnityEngine.UI.Text::.ctor()
extern "C"  void Text__ctor_m1798771934 (Text_t356221433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextGenerator UnityEngine.UI.Text::get_cachedTextGenerator()
extern "C"  TextGenerator_t647235000 * Text_get_cachedTextGenerator_m224335893 (Text_t356221433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextGenerator UnityEngine.UI.Text::get_cachedTextGeneratorForLayout()
extern "C"  TextGenerator_t647235000 * Text_get_cachedTextGeneratorForLayout_m1357670532 (Text_t356221433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.UI.Text::get_mainTexture()
extern "C"  Texture_t2243626319 * Text_get_mainTexture_m813502234 (Text_t356221433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::FontTextureChanged()
extern "C"  void Text_FontTextureChanged_m4236993972 (Text_t356221433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Font UnityEngine.UI.Text::get_font()
extern "C"  Font_t4239498691 * Text_get_font_m3115501113 (Text_t356221433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_font(UnityEngine.Font)
extern "C"  void Text_set_font_m1095513810 (Text_t356221433 * __this, Font_t4239498691 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.UI.Text::get_text()
extern "C"  String_t* Text_get_text_m2068535949 (Text_t356221433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_text(System.String)
extern "C"  void Text_set_text_m888865420 (Text_t356221433 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Text::get_supportRichText()
extern "C"  bool Text_get_supportRichText_m3291105891 (Text_t356221433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_supportRichText(System.Boolean)
extern "C"  void Text_set_supportRichText_m3026155622 (Text_t356221433 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Text::get_resizeTextForBestFit()
extern "C"  bool Text_get_resizeTextForBestFit_m1319489526 (Text_t356221433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_resizeTextForBestFit(System.Boolean)
extern "C"  void Text_set_resizeTextForBestFit_m1410334841 (Text_t356221433 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Text::get_resizeTextMinSize()
extern "C"  int32_t Text_get_resizeTextMinSize_m3422718371 (Text_t356221433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_resizeTextMinSize(System.Int32)
extern "C"  void Text_set_resizeTextMinSize_m3072695704 (Text_t356221433 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Text::get_resizeTextMaxSize()
extern "C"  int32_t Text_get_resizeTextMaxSize_m2671487437 (Text_t356221433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_resizeTextMaxSize(System.Int32)
extern "C"  void Text_set_resizeTextMaxSize_m4034967714 (Text_t356221433 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextAnchor UnityEngine.UI.Text::get_alignment()
extern "C"  int32_t Text_get_alignment_m1451596010 (Text_t356221433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_alignment(UnityEngine.TextAnchor)
extern "C"  void Text_set_alignment_m1816221961 (Text_t356221433 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Text::get_alignByGeometry()
extern "C"  bool Text_get_alignByGeometry_m3926457273 (Text_t356221433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_alignByGeometry(System.Boolean)
extern "C"  void Text_set_alignByGeometry_m1514652028 (Text_t356221433 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Text::get_fontSize()
extern "C"  int32_t Text_get_fontSize_m3105730761 (Text_t356221433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_fontSize(System.Int32)
extern "C"  void Text_set_fontSize_m2101304336 (Text_t356221433 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.HorizontalWrapMode UnityEngine.UI.Text::get_horizontalOverflow()
extern "C"  int32_t Text_get_horizontalOverflow_m3717876488 (Text_t356221433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_horizontalOverflow(UnityEngine.HorizontalWrapMode)
extern "C"  void Text_set_horizontalOverflow_m1927259605 (Text_t356221433 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.VerticalWrapMode UnityEngine.UI.Text::get_verticalOverflow()
extern "C"  int32_t Text_get_verticalOverflow_m3134063496 (Text_t356221433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_verticalOverflow(UnityEngine.VerticalWrapMode)
extern "C"  void Text_set_verticalOverflow_m1773740637 (Text_t356221433 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Text::get_lineSpacing()
extern "C"  float Text_get_lineSpacing_m1813883264 (Text_t356221433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_lineSpacing(System.Single)
extern "C"  void Text_set_lineSpacing_m3040793467 (Text_t356221433 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.FontStyle UnityEngine.UI.Text::get_fontStyle()
extern "C"  int32_t Text_get_fontStyle_m1386722317 (Text_t356221433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_fontStyle(UnityEngine.FontStyle)
extern "C"  void Text_set_fontStyle_m1766503514 (Text_t356221433 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Text::get_pixelsPerUnit()
extern "C"  float Text_get_pixelsPerUnit_m1202765365 (Text_t356221433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::OnEnable()
extern "C"  void Text_OnEnable_m820523638 (Text_t356221433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::OnDisable()
extern "C"  void Text_OnDisable_m3232354257 (Text_t356221433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::UpdateGeometry()
extern "C"  void Text_UpdateGeometry_m1148372319 (Text_t356221433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::AssignDefaultFont()
extern "C"  void Text_AssignDefaultFont_m1295571657 (Text_t356221433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextGenerationSettings UnityEngine.UI.Text::GetGenerationSettings(UnityEngine.Vector2)
extern "C"  TextGenerationSettings_t2543476768  Text_GetGenerationSettings_m3659206515 (Text_t356221433 * __this, Vector2_t2243707579  ___extents0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.Text::GetTextAnchorPivot(UnityEngine.TextAnchor)
extern "C"  Vector2_t2243707579  Text_GetTextAnchorPivot_m2651969380 (Il2CppObject * __this /* static, unused */, int32_t ___anchor0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::OnPopulateMesh(UnityEngine.UI.VertexHelper)
extern "C"  void Text_OnPopulateMesh_m835520031 (Text_t356221433 * __this, VertexHelper_t385374196 * ___toFill0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::CalculateLayoutInputHorizontal()
extern "C"  void Text_CalculateLayoutInputHorizontal_m1578553982 (Text_t356221433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::CalculateLayoutInputVertical()
extern "C"  void Text_CalculateLayoutInputVertical_m1732119136 (Text_t356221433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Text::get_minWidth()
extern "C"  float Text_get_minWidth_m1519703499 (Text_t356221433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Text::get_preferredWidth()
extern "C"  float Text_get_preferredWidth_m3352156860 (Text_t356221433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Text::get_flexibleWidth()
extern "C"  float Text_get_flexibleWidth_m2332182958 (Text_t356221433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Text::get_minHeight()
extern "C"  float Text_get_minHeight_m1562513104 (Text_t356221433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Text::get_preferredHeight()
extern "C"  float Text_get_preferredHeight_m452532789 (Text_t356221433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Text::get_flexibleHeight()
extern "C"  float Text_get_flexibleHeight_m2366977369 (Text_t356221433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Text::get_layoutPriority()
extern "C"  int32_t Text_get_layoutPriority_m1088242691 (Text_t356221433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::.cctor()
extern "C"  void Text__cctor_m3352338011 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
