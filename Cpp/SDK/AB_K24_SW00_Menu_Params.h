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
	 * Function AB_K24_SW00_Menu.AB_K24_SW00_Menu_C.AnimGraph
	 */
	struct UAB_K24_SW00_Menu_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function AB_K24_SW00_Menu.AB_K24_SW00_Menu_C.ExecuteUbergraph_AB_K24_SW00_Menu
	 */
	struct UAB_K24_SW00_Menu_C_ExecuteUbergraph_AB_K24_SW00_Menu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
