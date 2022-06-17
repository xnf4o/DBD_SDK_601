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
	 * Function BP_ExposerCrow.BP_ExposerCrow_C.SetTunableValues
	 */
	struct ABP_ExposerCrow_C_SetTunableValues_Params
	{	};

	/**
	 * Function BP_ExposerCrow.BP_ExposerCrow_C.Crow Dissolve__FinishedFunc
	 */
	struct ABP_ExposerCrow_C_Crow_Dissolve__FinishedFunc_Params
	{	};

	/**
	 * Function BP_ExposerCrow.BP_ExposerCrow_C.Crow Dissolve__UpdateFunc
	 */
	struct ABP_ExposerCrow_C_Crow_Dissolve__UpdateFunc_Params
	{	};

	/**
	 * Function BP_ExposerCrow.BP_ExposerCrow_C.Timeline_1__FinishedFunc
	 */
	struct ABP_ExposerCrow_C_Timeline_1__FinishedFunc_Params
	{	};

	/**
	 * Function BP_ExposerCrow.BP_ExposerCrow_C.Timeline_1__UpdateFunc
	 */
	struct ABP_ExposerCrow_C_Timeline_1__UpdateFunc_Params
	{	};

	/**
	 * Function BP_ExposerCrow.BP_ExposerCrow_C.StartExitSequence
	 */
	struct ABP_ExposerCrow_C_StartExitSequence_Params
	{
	public:
		bool                                                       withRandomDelay;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ExposerCrow.BP_ExposerCrow_C.ReceiveBeginPlay
	 */
	struct ABP_ExposerCrow_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_ExposerCrow.BP_ExposerCrow_C.StartSpawnSequence
	 */
	struct ABP_ExposerCrow_C_StartSpawnSequence_Params
	{
	public:
		bool                                                       withRandomDelay;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ExposerCrow.BP_ExposerCrow_C.SetIsInteriorBP
	 */
	struct ABP_ExposerCrow_C_SetIsInteriorBP_Params
	{
	public:
		bool                                                       interior;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ExposerCrow.BP_ExposerCrow_C.CustomEvent_2
	 */
	struct ABP_ExposerCrow_C_CustomEvent_2_Params
	{
	public:
		EAkResult                                                  Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ExposerCrow.BP_ExposerCrow_C.ExecuteUbergraph_BP_ExposerCrow
	 */
	struct ABP_ExposerCrow_C_ExecuteUbergraph_BP_ExposerCrow_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
