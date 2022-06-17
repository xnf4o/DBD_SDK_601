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
	 * Function BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.IsPlayingMenuInterrupt
	 */
	struct ABP_Menu_Base_Camper_C_IsPlayingMenuInterrupt_Params
	{
	public:
		bool                                                       IsPlayingAnimation;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.Set Height
	 */
	struct ABP_Menu_Base_Camper_C_Set_Height_Params
	{	};

	/**
	 * Function BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.GetCharmSpawnerComponent
	 */
	struct ABP_Menu_Base_Camper_C_GetCharmSpawnerComponent_Params
	{
	public:
		class UCharmSpawnerComponent*                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.UserConstructionScript
	 */
	struct ABP_Menu_Base_Camper_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.Dissolve__FinishedFunc
	 */
	struct ABP_Menu_Base_Camper_C_Dissolve__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.Dissolve__UpdateFunc
	 */
	struct ABP_Menu_Base_Camper_C_Dissolve__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.BndEvt__BP_Menu_Base_Camper_CustomizedAudio_K2Node_ComponentBoundEvent_1_OutfitCustomizedAudioChangedDelegate__DelegateSignature
	 */
	struct ABP_Menu_Base_Camper_C_BndEvt__BP_Menu_Base_Camper_CustomizedAudio_K2Node_ComponentBoundEvent_1_OutfitCustomizedAudioChangedDelegate__DelegateSignature_Params
	{
	public:
		class FName                                                outfitAudioStateCollection;                              // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.ReceiveBeginPlay
	 */
	struct ABP_Menu_Base_Camper_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.BeginDestroySequence_Internal
	 */
	struct ABP_Menu_Base_Camper_C_BeginDestroySequence_Internal_Params
	{	};

	/**
	 * Function BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.BeginSmokeIn
	 */
	struct ABP_Menu_Base_Camper_C_BeginSmokeIn_Params
	{	};

	/**
	 * Function BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.RestartInSequence_Internal
	 */
	struct ABP_Menu_Base_Camper_C_RestartInSequence_Internal_Params
	{	};

	/**
	 * Function BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.BndEvt__CustomizedAudio_K2Node_ComponentBoundEvent_0_CustomizedAudioChangedDelegate__DelegateSignature
	 */
	struct ABP_Menu_Base_Camper_C_BndEvt__CustomizedAudio_K2Node_ComponentBoundEvent_0_CustomizedAudioChangedDelegate__DelegateSignature_Params
	{
	public:
		EAudioCustomizationCategory                                Category;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              switchState;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.ExecuteUbergraph_BP_Menu_Base_Camper
	 */
	struct ABP_Menu_Base_Camper_C_ExecuteUbergraph_BP_Menu_Base_Camper_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
