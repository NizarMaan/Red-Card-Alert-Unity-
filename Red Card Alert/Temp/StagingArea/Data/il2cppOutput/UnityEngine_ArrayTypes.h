#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// UnityEngine.Object
struct Object_t1021602117;
// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.Behaviour
struct Behaviour_t955675639;
// UnityEngine.Component
struct Component_t3819376471;
// UnityEngine.Display
struct Display_t3666191348;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// UnityEngine.GUILayoutOption
struct GUILayoutOption_t4183744904;
// UnityEngine.GUILayoutEntry
struct GUILayoutEntry_t3828586629;
// UnityEngine.GUILayoutUtility/LayoutCache
struct LayoutCache_t3120781045;
// UnityEngine.GUIStyle
struct GUIStyle_t1799908754;
// UnityEngine.DisallowMultipleComponent
struct DisallowMultipleComponent_t2656950;
// UnityEngine.ExecuteInEditMode
struct ExecuteInEditMode_t3043633143;
// UnityEngine.RequireComponent
struct RequireComponent_t864575032;
// UnityEngine.Events.PersistentCall
struct PersistentCall_t3793436469;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t2229564840;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;
// UnityEngine.Sprite
struct Sprite_t309593783;
// UnityEngine.Canvas
struct Canvas_t209405766;
// UnityEngine.Font
struct Font_t4239498691;
// UnityEngine.CanvasGroup
struct CanvasGroup_t3296560743;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;

#include "mscorlib_System_Array3829468939.h"
#include "UnityEngine_UnityEngine_Object1021602117.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"
#include "UnityEngine_UnityEngine_Behaviour955675639.h"
#include "UnityEngine_UnityEngine_Component3819376471.h"
#include "UnityEngine_UnityEngine_Display3666191348.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UnityEngine_Keyframe1449471340.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Vector42243707581.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Color32874517518.h"
#include "UnityEngine_UnityEngine_Experimental_Director_Play3667545548.h"
#include "UnityEngine_UnityEngine_ContactPoint1376425630.h"
#include "UnityEngine_UnityEngine_RaycastHit87180320.h"
#include "UnityEngine_UnityEngine_Rigidbody2D502193897.h"
#include "UnityEngine_UnityEngine_RaycastHit2D4063908774.h"
#include "UnityEngine_UnityEngine_ContactPoint2D3659330976.h"
#include "UnityEngine_UnityEngine_UIVertex1204258818.h"
#include "UnityEngine_UnityEngine_UICharInfo3056636800.h"
#include "UnityEngine_UnityEngine_UILineInfo3621277874.h"
#include "UnityEngine_UnityEngine_GUILayoutOption4183744904.h"
#include "UnityEngine_UnityEngine_GUILayoutEntry3828586629.h"
#include "UnityEngine_UnityEngine_GUILayoutUtility_LayoutCac3120781045.h"
#include "UnityEngine_UnityEngine_GUIStyle1799908754.h"
#include "UnityEngine_UnityEngine_DisallowMultipleComponent2656950.h"
#include "UnityEngine_UnityEngine_ExecuteInEditMode3043633143.h"
#include "UnityEngine_UnityEngine_RequireComponent864575032.h"
#include "UnityEngine_UnityEngine_SendMouseEvents_HitInfo1761367055.h"
#include "UnityEngine_UnityEngine_Events_PersistentCall3793436469.h"
#include "UnityEngine_UnityEngine_Events_BaseInvokableCall2229564840.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Sprite309593783.h"
#include "UnityEngine_UnityEngine_Canvas209405766.h"
#include "UnityEngine_UnityEngine_Font4239498691.h"
#include "UnityEngine_UnityEngine_CanvasGroup3296560743.h"
#include "UnityEngine_UnityEngine_RectTransform3349966182.h"

#pragma once
// UnityEngine.Object[]
struct ObjectU5BU5D_t4217747464  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Object_t1021602117 * m_Items[1];

public:
	inline Object_t1021602117 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Object_t1021602117 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Object_t1021602117 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Object_t1021602117 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Object_t1021602117 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Object_t1021602117 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Camera[]
struct CameraU5BU5D_t3079764780  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Camera_t189460977 * m_Items[1];

public:
	inline Camera_t189460977 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Camera_t189460977 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Camera_t189460977 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Camera_t189460977 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Camera_t189460977 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Camera_t189460977 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Behaviour[]
struct BehaviourU5BU5D_t4084040270  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Behaviour_t955675639 * m_Items[1];

public:
	inline Behaviour_t955675639 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Behaviour_t955675639 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Behaviour_t955675639 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Behaviour_t955675639 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Behaviour_t955675639 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Behaviour_t955675639 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Component[]
struct ComponentU5BU5D_t4136971630  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Component_t3819376471 * m_Items[1];

public:
	inline Component_t3819376471 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Component_t3819376471 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Component_t3819376471 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Component_t3819376471 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Component_t3819376471 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Component_t3819376471 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Display[]
struct DisplayU5BU5D_t1314630077  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Display_t3666191348 * m_Items[1];

public:
	inline Display_t3666191348 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Display_t3666191348 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Display_t3666191348 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Display_t3666191348 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Display_t3666191348 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Display_t3666191348 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) GameObject_t1756533147 * m_Items[1];

public:
	inline GameObject_t1756533147 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t1756533147 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t1756533147 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline GameObject_t1756533147 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t1756533147 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t1756533147 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t449065829  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Keyframe_t1449471340  m_Items[1];

public:
	inline Keyframe_t1449471340  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Keyframe_t1449471340 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Keyframe_t1449471340  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Keyframe_t1449471340  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Keyframe_t1449471340 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Keyframe_t1449471340  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Vector3_t2243707580  m_Items[1];

public:
	inline Vector3_t2243707580  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t2243707580 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t2243707580  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t2243707580  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t2243707580 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t2243707580  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t1658499504  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Vector4_t2243707581  m_Items[1];

public:
	inline Vector4_t2243707581  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector4_t2243707581 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector4_t2243707581  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector4_t2243707581  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector4_t2243707581 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector4_t2243707581  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t686124026  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Vector2_t2243707579  m_Items[1];

public:
	inline Vector2_t2243707579  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t2243707579 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t2243707579  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t2243707579  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t2243707579 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t2243707579  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Color32[]
struct Color32U5BU5D_t30278651  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Color32_t874517518  m_Items[1];

public:
	inline Color32_t874517518  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color32_t874517518 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color32_t874517518  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color32_t874517518  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color32_t874517518 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color32_t874517518  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Experimental.Director.Playable[]
struct PlayableU5BU5D_t4034110853  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Playable_t3667545548  m_Items[1];

public:
	inline Playable_t3667545548  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Playable_t3667545548 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Playable_t3667545548  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Playable_t3667545548  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Playable_t3667545548 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Playable_t3667545548  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t1084937515  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) ContactPoint_t1376425630  m_Items[1];

public:
	inline ContactPoint_t1376425630  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ContactPoint_t1376425630 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ContactPoint_t1376425630  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ContactPoint_t1376425630  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ContactPoint_t1376425630 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ContactPoint_t1376425630  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t1214023521  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) RaycastHit_t87180320  m_Items[1];

public:
	inline RaycastHit_t87180320  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RaycastHit_t87180320 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RaycastHit_t87180320  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RaycastHit_t87180320  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RaycastHit_t87180320 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RaycastHit_t87180320  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Rigidbody2D[]
struct Rigidbody2DU5BU5D_t4025623380  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Rigidbody2D_t502193897 * m_Items[1];

public:
	inline Rigidbody2D_t502193897 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Rigidbody2D_t502193897 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Rigidbody2D_t502193897 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Rigidbody2D_t502193897 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Rigidbody2D_t502193897 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Rigidbody2D_t502193897 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.RaycastHit2D[]
struct RaycastHit2DU5BU5D_t4176517891  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) RaycastHit2D_t4063908774  m_Items[1];

public:
	inline RaycastHit2D_t4063908774  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RaycastHit2D_t4063908774 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RaycastHit2D_t4063908774  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RaycastHit2D_t4063908774  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RaycastHit2D_t4063908774 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RaycastHit2D_t4063908774  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t1215651809  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) ContactPoint2D_t3659330976  m_Items[1];

public:
	inline ContactPoint2D_t3659330976  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ContactPoint2D_t3659330976 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ContactPoint2D_t3659330976  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ContactPoint2D_t3659330976  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ContactPoint2D_t3659330976 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ContactPoint2D_t3659330976  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t3048644023  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) UIVertex_t1204258818  m_Items[1];

public:
	inline UIVertex_t1204258818  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UIVertex_t1204258818 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UIVertex_t1204258818  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UIVertex_t1204258818  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UIVertex_t1204258818 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UIVertex_t1204258818  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.UICharInfo[]
struct UICharInfoU5BU5D_t2749705857  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) UICharInfo_t3056636800  m_Items[1];

public:
	inline UICharInfo_t3056636800  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UICharInfo_t3056636800 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UICharInfo_t3056636800  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UICharInfo_t3056636800  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UICharInfo_t3056636800 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UICharInfo_t3056636800  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.UILineInfo[]
struct UILineInfoU5BU5D_t3471944775  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) UILineInfo_t3621277874  m_Items[1];

public:
	inline UILineInfo_t3621277874  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UILineInfo_t3621277874 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UILineInfo_t3621277874  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UILineInfo_t3621277874  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UILineInfo_t3621277874 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UILineInfo_t3621277874  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t2108882777  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) GUILayoutOption_t4183744904 * m_Items[1];

public:
	inline GUILayoutOption_t4183744904 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GUILayoutOption_t4183744904 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GUILayoutOption_t4183744904 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline GUILayoutOption_t4183744904 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GUILayoutOption_t4183744904 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GUILayoutOption_t4183744904 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.GUILayoutEntry[]
struct GUILayoutEntryU5BU5D_t1552524232  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) GUILayoutEntry_t3828586629 * m_Items[1];

public:
	inline GUILayoutEntry_t3828586629 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GUILayoutEntry_t3828586629 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GUILayoutEntry_t3828586629 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline GUILayoutEntry_t3828586629 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GUILayoutEntry_t3828586629 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GUILayoutEntry_t3828586629 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.GUILayoutUtility/LayoutCache[]
struct LayoutCacheU5BU5D_t4112805272  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) LayoutCache_t3120781045 * m_Items[1];

public:
	inline LayoutCache_t3120781045 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LayoutCache_t3120781045 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LayoutCache_t3120781045 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline LayoutCache_t3120781045 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LayoutCache_t3120781045 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LayoutCache_t3120781045 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.GUIStyle[]
struct GUIStyleU5BU5D_t2497716199  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) GUIStyle_t1799908754 * m_Items[1];

public:
	inline GUIStyle_t1799908754 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GUIStyle_t1799908754 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GUIStyle_t1799908754 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline GUIStyle_t1799908754 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GUIStyle_t1799908754 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GUIStyle_t1799908754 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.DisallowMultipleComponent[]
struct DisallowMultipleComponentU5BU5D_t674354611  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) DisallowMultipleComponent_t2656950 * m_Items[1];

public:
	inline DisallowMultipleComponent_t2656950 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DisallowMultipleComponent_t2656950 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DisallowMultipleComponent_t2656950 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline DisallowMultipleComponent_t2656950 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DisallowMultipleComponent_t2656950 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DisallowMultipleComponent_t2656950 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.ExecuteInEditMode[]
struct ExecuteInEditModeU5BU5D_t1783660110  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) ExecuteInEditMode_t3043633143 * m_Items[1];

public:
	inline ExecuteInEditMode_t3043633143 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ExecuteInEditMode_t3043633143 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ExecuteInEditMode_t3043633143 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline ExecuteInEditMode_t3043633143 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ExecuteInEditMode_t3043633143 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ExecuteInEditMode_t3043633143 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.RequireComponent[]
struct RequireComponentU5BU5D_t2214070761  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) RequireComponent_t864575032 * m_Items[1];

public:
	inline RequireComponent_t864575032 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RequireComponent_t864575032 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RequireComponent_t864575032 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RequireComponent_t864575032 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RequireComponent_t864575032 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RequireComponent_t864575032 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.SendMouseEvents/HitInfo[]
struct HitInfoU5BU5D_t934504150  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) HitInfo_t1761367055  m_Items[1];

public:
	inline HitInfo_t1761367055  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline HitInfo_t1761367055 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, HitInfo_t1761367055  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline HitInfo_t1761367055  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline HitInfo_t1761367055 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, HitInfo_t1761367055  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Events.PersistentCall[]
struct PersistentCallU5BU5D_t823172184  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) PersistentCall_t3793436469 * m_Items[1];

public:
	inline PersistentCall_t3793436469 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PersistentCall_t3793436469 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PersistentCall_t3793436469 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline PersistentCall_t3793436469 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PersistentCall_t3793436469 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PersistentCall_t3793436469 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Events.BaseInvokableCall[]
struct BaseInvokableCallU5BU5D_t2280978105  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) BaseInvokableCall_t2229564840 * m_Items[1];

public:
	inline BaseInvokableCall_t2229564840 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BaseInvokableCall_t2229564840 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BaseInvokableCall_t2229564840 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline BaseInvokableCall_t2229564840 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BaseInvokableCall_t2229564840 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BaseInvokableCall_t2229564840 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Transform[]
struct TransformU5BU5D_t3764228911  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Transform_t3275118058 * m_Items[1];

public:
	inline Transform_t3275118058 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_t3275118058 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_t3275118058 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Transform_t3275118058 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_t3275118058 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_t3275118058 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.MonoBehaviour[]
struct MonoBehaviourU5BU5D_t3035069757  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) MonoBehaviour_t1158329972 * m_Items[1];

public:
	inline MonoBehaviour_t1158329972 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MonoBehaviour_t1158329972 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MonoBehaviour_t1158329972 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline MonoBehaviour_t1158329972 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MonoBehaviour_t1158329972 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MonoBehaviour_t1158329972 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t3359083662  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Sprite_t309593783 * m_Items[1];

public:
	inline Sprite_t309593783 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Sprite_t309593783 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Sprite_t309593783 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Sprite_t309593783 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Sprite_t309593783 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Sprite_t309593783 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Canvas[]
struct CanvasU5BU5D_t4075570403  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Canvas_t209405766 * m_Items[1];

public:
	inline Canvas_t209405766 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Canvas_t209405766 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Canvas_t209405766 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Canvas_t209405766 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Canvas_t209405766 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Canvas_t209405766 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Font[]
struct FontU5BU5D_t4130692050  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Font_t4239498691 * m_Items[1];

public:
	inline Font_t4239498691 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Font_t4239498691 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Font_t4239498691 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Font_t4239498691 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Font_t4239498691 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Font_t4239498691 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.CanvasGroup[]
struct CanvasGroupU5BU5D_t184887326  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) CanvasGroup_t3296560743 * m_Items[1];

public:
	inline CanvasGroup_t3296560743 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CanvasGroup_t3296560743 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CanvasGroup_t3296560743 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline CanvasGroup_t3296560743 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CanvasGroup_t3296560743 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CanvasGroup_t3296560743 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.RectTransform[]
struct RectTransformU5BU5D_t3948421699  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) RectTransform_t3349966182 * m_Items[1];

public:
	inline RectTransform_t3349966182 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RectTransform_t3349966182 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RectTransform_t3349966182 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RectTransform_t3349966182 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RectTransform_t3349966182 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RectTransform_t3349966182 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
