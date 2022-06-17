/**
 * Name: DBD
 * Version: 601
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.IsPlayingMenuInterrupt
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsPlayingAnimation                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Menu_Base_Camper_C::IsPlayingMenuInterrupt(bool IsPlayingAnimation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.IsPlayingMenuInterrupt");
		
		ABP_Menu_Base_Camper_C_IsPlayingMenuInterrupt_Params params {};
		params.IsPlayingAnimation = IsPlayingAnimation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.Set Height
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Base_Camper_C::Set_Height()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.Set Height");
		
		ABP_Menu_Base_Camper_C_Set_Height_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.GetCharmSpawnerComponent
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	class UCharmSpawnerComponent* ABP_Menu_Base_Camper_C::GetCharmSpawnerComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.GetCharmSpawnerComponent");
		
		ABP_Menu_Base_Camper_C_GetCharmSpawnerComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Base_Camper_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.UserConstructionScript");
		
		ABP_Menu_Base_Camper_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.Dissolve__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Menu_Base_Camper_C::Dissolve__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.Dissolve__FinishedFunc");
		
		ABP_Menu_Base_Camper_C_Dissolve__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.Dissolve__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Menu_Base_Camper_C::Dissolve__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.Dissolve__UpdateFunc");
		
		ABP_Menu_Base_Camper_C_Dissolve__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.BndEvt__BP_Menu_Base_Camper_CustomizedAudio_K2Node_ComponentBoundEvent_1_OutfitCustomizedAudioChangedDelegate__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        outfitAudioStateCollection                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Menu_Base_Camper_C::BndEvt__BP_Menu_Base_Camper_CustomizedAudio_K2Node_ComponentBoundEvent_1_OutfitCustomizedAudioChangedDelegate__DelegateSignature(const class FName& outfitAudioStateCollection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.BndEvt__BP_Menu_Base_Camper_CustomizedAudio_K2Node_ComponentBoundEvent_1_OutfitCustomizedAudioChangedDelegate__DelegateSignature");
		
		ABP_Menu_Base_Camper_C_BndEvt__BP_Menu_Base_Camper_CustomizedAudio_K2Node_ComponentBoundEvent_1_OutfitCustomizedAudioChangedDelegate__DelegateSignature_Params params {};
		params.outfitAudioStateCollection = outfitAudioStateCollection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_Menu_Base_Camper_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.ReceiveBeginPlay");
		
		ABP_Menu_Base_Camper_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.BeginDestroySequence_Internal
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_Menu_Base_Camper_C::BeginDestroySequence_Internal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.BeginDestroySequence_Internal");
		
		ABP_Menu_Base_Camper_C_BeginDestroySequence_Internal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.BeginSmokeIn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Base_Camper_C::BeginSmokeIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.BeginSmokeIn");
		
		ABP_Menu_Base_Camper_C_BeginSmokeIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.RestartInSequence_Internal
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_Menu_Base_Camper_C::RestartInSequence_Internal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.RestartInSequence_Internal");
		
		ABP_Menu_Base_Camper_C_RestartInSequence_Internal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.BndEvt__CustomizedAudio_K2Node_ComponentBoundEvent_0_CustomizedAudioChangedDelegate__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		EAudioCustomizationCategory                        Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      switchState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_Menu_Base_Camper_C::BndEvt__CustomizedAudio_K2Node_ComponentBoundEvent_0_CustomizedAudioChangedDelegate__DelegateSignature(EAudioCustomizationCategory Category, const class FString& switchState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.BndEvt__CustomizedAudio_K2Node_ComponentBoundEvent_0_CustomizedAudioChangedDelegate__DelegateSignature");
		
		ABP_Menu_Base_Camper_C_BndEvt__CustomizedAudio_K2Node_ComponentBoundEvent_0_CustomizedAudioChangedDelegate__DelegateSignature_Params params {};
		params.Category = Category;
		params.switchState = switchState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.ExecuteUbergraph_BP_Menu_Base_Camper
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Menu_Base_Camper_C::ExecuteUbergraph_BP_Menu_Base_Camper(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.ExecuteUbergraph_BP_Menu_Base_Camper");
		
		ABP_Menu_Base_Camper_C_ExecuteUbergraph_BP_Menu_Base_Camper_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_Menu_Base_Camper_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Menu_Base_Camper_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Menu_Base_Camper.BP_Menu_Base_Camper_C");
		return ptr;
	}

}


