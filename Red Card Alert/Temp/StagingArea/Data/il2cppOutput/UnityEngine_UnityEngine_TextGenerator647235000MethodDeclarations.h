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

// UnityEngine.TextGenerator
struct TextGenerator_t647235000;
// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
struct List_1_t2425757932;
// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
struct List_1_t2990399006;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t573379950;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.Generic.IList`1<UnityEngine.UIVertex>
struct IList_1_t1745199419;
// System.Collections.Generic.IList`1<UnityEngine.UICharInfo>
struct IList_1_t3597577401;
// System.Collections.Generic.IList`1<UnityEngine.UILineInfo>
struct IList_1_t4162218475;
// UnityEngine.Font
struct Font_t4239498691;
// System.Object
struct Il2CppObject;
struct TextGenerator_t647235000_marshaled_pinvoke;
struct TextGenerator_t647235000_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_TextGenerationSettings2543476768.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UnityEngine_TextGenerationError780770201.h"
#include "UnityEngine_UnityEngine_Font4239498691.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_FontStyle2764949590.h"
#include "UnityEngine_UnityEngine_VerticalWrapMode3668245347.h"
#include "UnityEngine_UnityEngine_HorizontalWrapMode2027154177.h"
#include "UnityEngine_UnityEngine_TextAnchor112990806.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_TextGenerator647235000.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void UnityEngine.TextGenerator::.ctor()
extern "C"  void TextGenerator__ctor_m11880227 (TextGenerator_t647235000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::.ctor(System.Int32)
extern "C"  void TextGenerator__ctor_m1169691060 (TextGenerator_t647235000 * __this, int32_t ___initialCapacity0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::Finalize()
extern "C"  void TextGenerator_Finalize_m4242493229 (TextGenerator_t647235000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::System.IDisposable.Dispose()
extern "C"  void TextGenerator_System_IDisposable_Dispose_m1042601388 (TextGenerator_t647235000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextGenerationSettings UnityEngine.TextGenerator::ValidatedSettings(UnityEngine.TextGenerationSettings)
extern "C"  TextGenerationSettings_t2543476768  TextGenerator_ValidatedSettings_m1640214759 (TextGenerator_t647235000 * __this, TextGenerationSettings_t2543476768  ___settings0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::Invalidate()
extern "C"  void TextGenerator_Invalidate_m3217235344 (TextGenerator_t647235000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::GetCharacters(System.Collections.Generic.List`1<UnityEngine.UICharInfo>)
extern "C"  void TextGenerator_GetCharacters_m2554471692 (TextGenerator_t647235000 * __this, List_1_t2425757932 * ___characters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::GetLines(System.Collections.Generic.List`1<UnityEngine.UILineInfo>)
extern "C"  void TextGenerator_GetLines_m1873042509 (TextGenerator_t647235000 * __this, List_1_t2990399006 * ___lines0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::GetVertices(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern "C"  void TextGenerator_GetVertices_m4090838925 (TextGenerator_t647235000 * __this, List_1_t573379950 * ___vertices0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.TextGenerator::GetPreferredWidth(System.String,UnityEngine.TextGenerationSettings)
extern "C"  float TextGenerator_GetPreferredWidth_m3480985839 (TextGenerator_t647235000 * __this, String_t* ___str0, TextGenerationSettings_t2543476768  ___settings1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.TextGenerator::GetPreferredHeight(System.String,UnityEngine.TextGenerationSettings)
extern "C"  float TextGenerator_GetPreferredHeight_m274483688 (TextGenerator_t647235000 * __this, String_t* ___str0, TextGenerationSettings_t2543476768  ___settings1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextGenerator::PopulateWithErrors(System.String,UnityEngine.TextGenerationSettings,UnityEngine.GameObject)
extern "C"  bool TextGenerator_PopulateWithErrors_m467881283 (TextGenerator_t647235000 * __this, String_t* ___str0, TextGenerationSettings_t2543476768  ___settings1, GameObject_t1756533147 * ___context2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextGenerator::Populate(System.String,UnityEngine.TextGenerationSettings)
extern "C"  bool TextGenerator_Populate_m4139823822 (TextGenerator_t647235000 * __this, String_t* ___str0, TextGenerationSettings_t2543476768  ___settings1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextGenerationError UnityEngine.TextGenerator::PopulateWithError(System.String,UnityEngine.TextGenerationSettings)
extern "C"  int32_t TextGenerator_PopulateWithError_m1145441211 (TextGenerator_t647235000 * __this, String_t* ___str0, TextGenerationSettings_t2543476768  ___settings1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextGenerationError UnityEngine.TextGenerator::PopulateAlways(System.String,UnityEngine.TextGenerationSettings)
extern "C"  int32_t TextGenerator_PopulateAlways_m1595123368 (TextGenerator_t647235000 * __this, String_t* ___str0, TextGenerationSettings_t2543476768  ___settings1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<UnityEngine.UIVertex> UnityEngine.TextGenerator::get_verts()
extern "C"  Il2CppObject* TextGenerator_get_verts_m3124035267 (TextGenerator_t647235000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<UnityEngine.UICharInfo> UnityEngine.TextGenerator::get_characters()
extern "C"  Il2CppObject* TextGenerator_get_characters_m459389093 (TextGenerator_t647235000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<UnityEngine.UILineInfo> UnityEngine.TextGenerator::get_lines()
extern "C"  Il2CppObject* TextGenerator_get_lines_m916366224 (TextGenerator_t647235000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::Init()
extern "C"  void TextGenerator_Init_m293029225 (TextGenerator_t647235000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::Dispose_cpp()
extern "C"  void TextGenerator_Dispose_cpp_m1755131202 (TextGenerator_t647235000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextGenerator::Populate_Internal(System.String,UnityEngine.Font,UnityEngine.Color,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,UnityEngine.VerticalWrapMode,UnityEngine.HorizontalWrapMode,System.Boolean,UnityEngine.TextAnchor,UnityEngine.Vector2,UnityEngine.Vector2,System.Boolean,System.Boolean,UnityEngine.TextGenerationError&)
extern "C"  bool TextGenerator_Populate_Internal_m1817393161 (TextGenerator_t647235000 * __this, String_t* ___str0, Font_t4239498691 * ___font1, Color_t2020392075  ___color2, int32_t ___fontSize3, float ___scaleFactor4, float ___lineSpacing5, int32_t ___style6, bool ___richText7, bool ___resizeTextForBestFit8, int32_t ___resizeTextMinSize9, int32_t ___resizeTextMaxSize10, int32_t ___verticalOverFlow11, int32_t ___horizontalOverflow12, bool ___updateBounds13, int32_t ___anchor14, Vector2_t2243707579  ___extents15, Vector2_t2243707579  ___pivot16, bool ___generateOutOfBounds17, bool ___alignByGeometry18, int32_t* ___error19, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextGenerator::Populate_Internal_cpp(System.String,UnityEngine.Font,UnityEngine.Color,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean,System.Boolean,System.UInt32&)
extern "C"  bool TextGenerator_Populate_Internal_cpp_m223771997 (TextGenerator_t647235000 * __this, String_t* ___str0, Font_t4239498691 * ___font1, Color_t2020392075  ___color2, int32_t ___fontSize3, float ___scaleFactor4, float ___lineSpacing5, int32_t ___style6, bool ___richText7, bool ___resizeTextForBestFit8, int32_t ___resizeTextMinSize9, int32_t ___resizeTextMaxSize10, int32_t ___verticalOverFlow11, int32_t ___horizontalOverflow12, bool ___updateBounds13, int32_t ___anchor14, float ___extentsX15, float ___extentsY16, float ___pivotX17, float ___pivotY18, bool ___generateOutOfBounds19, bool ___alignByGeometry20, uint32_t* ___error21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextGenerator::INTERNAL_CALL_Populate_Internal_cpp(UnityEngine.TextGenerator,System.String,UnityEngine.Font,UnityEngine.Color&,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean,System.Boolean,System.UInt32&)
extern "C"  bool TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m2616440843 (Il2CppObject * __this /* static, unused */, TextGenerator_t647235000 * ___self0, String_t* ___str1, Font_t4239498691 * ___font2, Color_t2020392075 * ___color3, int32_t ___fontSize4, float ___scaleFactor5, float ___lineSpacing6, int32_t ___style7, bool ___richText8, bool ___resizeTextForBestFit9, int32_t ___resizeTextMinSize10, int32_t ___resizeTextMaxSize11, int32_t ___verticalOverFlow12, int32_t ___horizontalOverflow13, bool ___updateBounds14, int32_t ___anchor15, float ___extentsX16, float ___extentsY17, float ___pivotX18, float ___pivotY19, bool ___generateOutOfBounds20, bool ___alignByGeometry21, uint32_t* ___error22, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.TextGenerator::get_rectExtents()
extern "C"  Rect_t3681755626  TextGenerator_get_rectExtents_m1925360043 (TextGenerator_t647235000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::INTERNAL_get_rectExtents(UnityEngine.Rect&)
extern "C"  void TextGenerator_INTERNAL_get_rectExtents_m661810980 (TextGenerator_t647235000 * __this, Rect_t3681755626 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::GetVerticesInternal(System.Object)
extern "C"  void TextGenerator_GetVerticesInternal_m393921805 (TextGenerator_t647235000 * __this, Il2CppObject * ___vertices0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextGenerator::get_characterCount()
extern "C"  int32_t TextGenerator_get_characterCount_m970885214 (TextGenerator_t647235000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextGenerator::get_characterCountVisible()
extern "C"  int32_t TextGenerator_get_characterCountVisible_m1506817214 (TextGenerator_t647235000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::GetCharactersInternal(System.Object)
extern "C"  void TextGenerator_GetCharactersInternal_m1809798004 (TextGenerator_t647235000 * __this, Il2CppObject * ___characters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextGenerator::get_lineCount()
extern "C"  int32_t TextGenerator_get_lineCount_m4287181941 (TextGenerator_t647235000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::GetLinesInternal(System.Object)
extern "C"  void TextGenerator_GetLinesInternal_m2194096229 (TextGenerator_t647235000 * __this, Il2CppObject * ___lines0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct TextGenerator_t647235000;
struct TextGenerator_t647235000_marshaled_pinvoke;

extern "C" void TextGenerator_t647235000_marshal_pinvoke(const TextGenerator_t647235000& unmarshaled, TextGenerator_t647235000_marshaled_pinvoke& marshaled);
extern "C" void TextGenerator_t647235000_marshal_pinvoke_back(const TextGenerator_t647235000_marshaled_pinvoke& marshaled, TextGenerator_t647235000& unmarshaled);
extern "C" void TextGenerator_t647235000_marshal_pinvoke_cleanup(TextGenerator_t647235000_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct TextGenerator_t647235000;
struct TextGenerator_t647235000_marshaled_com;

extern "C" void TextGenerator_t647235000_marshal_com(const TextGenerator_t647235000& unmarshaled, TextGenerator_t647235000_marshaled_com& marshaled);
extern "C" void TextGenerator_t647235000_marshal_com_back(const TextGenerator_t647235000_marshaled_com& marshaled, TextGenerator_t647235000& unmarshaled);
extern "C" void TextGenerator_t647235000_marshal_com_cleanup(TextGenerator_t647235000_marshaled_com& marshaled);
