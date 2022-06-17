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
	 * Function BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.IsInMenuPlayer
	 */
	struct ABP_Menu_BaseSlasher_C_IsInMenuPlayer_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.UpdateHeight
	 */
	struct ABP_Menu_BaseSlasher_C_UpdateHeight_Params
	{	};

	/**
	 * Function BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.TML_DissolveSlasher__FinishedFunc
	 */
	struct ABP_Menu_BaseSlasher_C_TML_DissolveSlasher__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.TML_DissolveSlasher__UpdateFunc
	 */
	struct ABP_Menu_BaseSlasher_C_TML_DissolveSlasher__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.BndEvt__BP_Menu_BaseSlasher_CustomizedAudio_K2Node_ComponentBoundEvent_1_OutfitCustomizedAudioChangedDelegate__DelegateSignature
	 */
	struct ABP_Menu_BaseSlasher_C_BndEvt__BP_Menu_BaseSlasher_CustomizedAudio_K2Node_ComponentBoundEvent_1_OutfitCustomizedAudioChangedDelegate__DelegateSignature_Params
	{
	public:
		class FName                                                outfitAudioStateCollection;                              // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.ReceiveBeginPlay
	 */
	struct ABP_Menu_BaseSlasher_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.BeginDestroySequence_Internal
	 */
	struct ABP_Menu_BaseSlasher_C_BeginDestroySequence_Internal_Params
	{	};

	/**
	 * Function BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.BeginSmokeIn
	 */
	struct ABP_Menu_BaseSlasher_C_BeginSmokeIn_Params
	{	};

	/**
	 * Function BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.RestartInSequence_Internal
	 */
	struct ABP_Menu_BaseSlasher_C_RestartInSequence_Internal_Params
	{	};

	/**
	 * Function BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.BndEvt__CustomizedAudio_K2Node_ComponentBoundEvent_0_CustomizedAudioChangedDelegate__DelegateSignature
	 */
	struct ABP_Menu_BaseSlasher_C_BndEvt__CustomizedAudio_K2Node_ComponentBoundEvent_0_CustomizedAudioChangedDelegate__DelegateSignature_Params
	{
	public:
		EAudioCustomizationCategory                                Category;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              switchState;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.RemoveAssetsBeforeDestroy
	 */
	struct ABP_Menu_BaseSlasher_C_RemoveAssetsBeforeDestroy_Params
	{	};

	/**
	 * Function BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.ExecuteUbergraph_BP_Menu_BaseSlasher
	 */
	struct ABP_Menu_BaseSlasher_C_ExecuteUbergraph_BP_Menu_BaseSlasher_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
