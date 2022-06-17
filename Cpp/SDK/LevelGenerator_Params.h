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
	 * Function LevelGenerator.LevelGenerator_C.RemoveMist
	 */
	struct ALevelGenerator_C_RemoveMist_Params
	{	};

	/**
	 * Function LevelGenerator.LevelGenerator_C.ApplyMist
	 */
	struct ALevelGenerator_C_ApplyMist_Params
	{
	public:
		float                                                      Modifier;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LevelGenerator.LevelGenerator_C.ExecuteUbergraph_LevelGenerator
	 */
	struct ALevelGenerator_C_ExecuteUbergraph_LevelGenerator_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
