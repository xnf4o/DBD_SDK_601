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
	 * Function TileBase01.TileBase01_C.SelectSpawnPoint
	 */
	struct ATileBase01_C_SelectSpawnPoint_Params
	{
	public:
		TArray<class UTileSpawnPoint*>                             Array;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	};

	/**
	 * Function TileBase01.TileBase01_C.SetupGeneratorDrivenElements
	 */
	struct ATileBase01_C_SetupGeneratorDrivenElements_Params
	{
	public:
		class AActor*                                              GeneratorSpawnPoint;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class UChildActorComponent*>                        GeneratorDrivenElements;                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	};

	/**
	 * Function TileBase01.TileBase01_C.ReceiveTick
	 */
	struct ATileBase01_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TileBase01.TileBase01_C.OnLevelLoaded
	 */
	struct ATileBase01_C_OnLevelLoaded_Params
	{	};

	/**
	 * Function TileBase01.TileBase01_C.SetGeneratorDrivenObjects
	 */
	struct ATileBase01_C_SetGeneratorDrivenObjects_Params
	{
	public:
		class UTileSpawnPoint*                                     SpawnPoint;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              spawnedObject;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TileBase01.TileBase01_C.SetGeneratorDrivenScoreEvent
	 */
	struct ATileBase01_C_SetGeneratorDrivenScoreEvent_Params
	{
	public:
		TArray<class AActor*>                                      generators;                                              // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function TileBase01.TileBase01_C.KNY_StartSnowstorm
	 */
	struct ATileBase01_C_KNY_StartSnowstorm_Params
	{	};

	/**
	 * Function TileBase01.TileBase01_C.ExecuteUbergraph_TileBase01
	 */
	struct ATileBase01_C_ExecuteUbergraph_TileBase01_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
