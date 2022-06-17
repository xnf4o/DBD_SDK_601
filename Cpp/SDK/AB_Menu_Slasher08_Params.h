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
	 * Function AB_Menu_Slasher08.AB_Menu_Slasher08_C.AnimGraph
	 */
	struct UAB_Menu_Slasher08_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function AB_Menu_Slasher08.AB_Menu_Slasher08_C.GetKiller
	 */
	struct UAB_Menu_Slasher08_C_GetKiller_Params
	{
	public:
		class ABP_Menu_Slasher08_C*                                Menu_Slasher_08;                                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AB_Menu_Slasher08.AB_Menu_Slasher08_C.BlueprintUpdateAnimation
	 */
	struct UAB_Menu_Slasher08_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AB_Menu_Slasher08.AB_Menu_Slasher08_C.AnimNotify_FX_MakeHatchetAppear
	 */
	struct UAB_Menu_Slasher08_C_AnimNotify_FX_MakeHatchetAppear_Params
	{	};

	/**
	 * Function AB_Menu_Slasher08.AB_Menu_Slasher08_C.AnimNotify_FX_MakeHatchetDisappear
	 */
	struct UAB_Menu_Slasher08_C_AnimNotify_FX_MakeHatchetDisappear_Params
	{	};

	/**
	 * Function AB_Menu_Slasher08.AB_Menu_Slasher08_C.ExecuteUbergraph_AB_Menu_Slasher08
	 */
	struct UAB_Menu_Slasher08_C_ExecuteUbergraph_AB_Menu_Slasher08_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
