#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// player
struct player_t1147742565;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// System.Object
struct Il2CppObject;
// UnityEngine.Collision2D
struct Collision2D_t1539500754;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214MethodDeclarations.h"
#include "AssemblyU2DCSharp_player1147742565.h"
#include "AssemblyU2DCSharp_player1147742565MethodDeclarations.h"
#include "mscorlib_System_Void1841601450.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Component3819376471MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Rigidbody2D502193897.h"
#include "UnityEngine_UnityEngine_Component3819376471.h"
#include "mscorlib_System_Single2076509932.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "UnityEngine_UnityEngine_Input1785128008MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Rigidbody2D502193897MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Time31991979MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector32243707580MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform3275118058MethodDeclarations.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Vector22243707579MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Collision2D1539500754.h"
#include "UnityEngine_UnityEngine_Collision2D1539500754MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObject1756533147MethodDeclarations.h"
#include "mscorlib_System_String2029220233MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"

// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  Il2CppObject * Component_GetComponent_TisIl2CppObject_m4109961936_gshared (Component_t3819376471 * __this, const MethodInfo* method);
#define Component_GetComponent_TisIl2CppObject_m4109961936(__this, method) ((  Il2CppObject * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m4109961936_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
#define Component_GetComponent_TisRigidbody2D_t502193897_m3702757851(__this, method) ((  Rigidbody2D_t502193897 * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m4109961936_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void player::.ctor()
extern "C"  void player__ctor_m4144406576 (player_t1147742565 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void player::Start()
extern const MethodInfo* Component_GetComponent_TisRigidbody2D_t502193897_m3702757851_MethodInfo_var;
extern const uint32_t player_Start_m1004576464_MetadataUsageId;
extern "C"  void player_Start_m1004576464 (player_t1147742565 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (player_Start_m1004576464_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rigidbody2D_t502193897 * L_0 = Component_GetComponent_TisRigidbody2D_t502193897_m3702757851(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t502193897_m3702757851_MethodInfo_var);
		__this->set_playerRigidbody2D_2(L_0);
		__this->set_jumpforce_3((250.0f));
		__this->set_speed_4((3.0f));
		__this->set_isJumping_5((bool)0);
		return;
	}
}
// System.Void player::Update()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral842948034;
extern Il2CppCodeGenString* _stringLiteral855845486;
extern const uint32_t player_Update_m2878195153_MetadataUsageId;
extern "C"  void player_Update_m2878195153 (player_t1147742565 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (player_Update_m2878195153_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetButtonDown_m2792523731(NULL /*static, unused*/, _stringLiteral842948034, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_003c;
		}
	}
	{
		bool L_1 = __this->get_isJumping_5();
		if (L_1)
		{
			goto IL_003c;
		}
	}
	{
		Rigidbody2D_t502193897 * L_2 = __this->get_playerRigidbody2D_2();
		float L_3 = __this->get_jumpforce_3();
		Vector2_t2243707579  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Vector2__ctor_m3067419446(&L_4, (0.0f), L_3, /*hidden argument*/NULL);
		Rigidbody2D_AddForce_m3200488178(L_2, L_4, /*hidden argument*/NULL);
		__this->set_isJumping_5((bool)1);
	}

IL_003c:
	{
		Transform_t3275118058 * L_5 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		float L_6 = Input_GetAxis_m2098048324(NULL /*static, unused*/, _stringLiteral855845486, /*hidden argument*/NULL);
		Vector3_t2243707580  L_7;
		memset(&L_7, 0, sizeof(L_7));
		Vector3__ctor_m2720820983(&L_7, L_6, (0.0f), /*hidden argument*/NULL);
		float L_8 = Time_get_deltaTime_m2233168104(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t2243707580  L_9 = Vector3_op_Multiply_m1351554733(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		float L_10 = __this->get_speed_4();
		Vector3_t2243707580  L_11 = Vector3_op_Multiply_m1351554733(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		Transform_Translate_m3316827744(L_5, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void player::OnCollisionStay2D(UnityEngine.Collision2D)
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2024493761;
extern const uint32_t player_OnCollisionStay2D_m979457009_MetadataUsageId;
extern "C"  void player_OnCollisionStay2D_m979457009 (player_t1147742565 * __this, Collision2D_t1539500754 * ___coll0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (player_OnCollisionStay2D_m979457009_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collision2D_t1539500754 * L_0 = ___coll0;
		GameObject_t1756533147 * L_1 = Collision2D_get_gameObject_m4234358314(L_0, /*hidden argument*/NULL);
		String_t* L_2 = GameObject_get_tag_m1425941094(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_2, _stringLiteral2024493761, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		__this->set_isJumping_5((bool)0);
	}

IL_0021:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
