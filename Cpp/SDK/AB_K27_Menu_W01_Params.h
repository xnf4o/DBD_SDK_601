#pragma once

/**
 * Name: DBD
 * Version: 601
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function AB_K27_Menu_W01.AB_K27_Menu_W01_C.AnimGraph
	 */
	struct UAB_K27_Menu_W01_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function AB_K27_Menu_W01.AB_K27_Menu_W01_C.AnimNotify_ResetPlayInterrupt
	 */
	struct UAB_K27_Menu_W01_C_AnimNotify_ResetPlayInterrupt_Params
	{	};

	/**
	 * Function AB_K27_Menu_W01.AB_K27_Menu_W01_C.PlayWeaponInterrupt
	 */
	struct UAB_K27_Menu_W01_C_PlayWeaponInterrupt_Params
	{
	public:
		int32_t                                                    WeaponID;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AB_K27_Menu_W01.AB_K27_Menu_W01_C.AnimNotify_Test_prestige
	 */
	struct UAB_K27_Menu_W01_C_AnimNotify_Test_prestige_Params
	{	};

	/**
	 * Function AB_K27_Menu_W01.AB_K27_Menu_W01_C.ExecuteUbergraph_AB_K27_Menu_W01
	 */
	struct UAB_K27_Menu_W01_C_ExecuteUbergraph_AB_K27_Menu_W01_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
