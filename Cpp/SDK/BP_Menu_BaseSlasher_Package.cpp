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
	 * 		Name   -> Function BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.IsInMenuPlayer
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool ABP_Menu_BaseSlasher_C::IsInMenuPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.IsInMenuPlayer");
		
		ABP_Menu_BaseSlasher_C_IsInMenuPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.UpdateHeight
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_BaseSlasher_C::UpdateHeight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.UpdateHeight");
		
		ABP_Menu_BaseSlasher_C_UpdateHeight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.TML_DissolveSlasher__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Menu_BaseSlasher_C::TML_DissolveSlasher__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.TML_DissolveSlasher__FinishedFunc");
		
		ABP_Menu_BaseSlasher_C_TML_DissolveSlasher__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.TML_DissolveSlasher__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Menu_BaseSlasher_C::TML_DissolveSlasher__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.TML_DissolveSlasher__UpdateFunc");
		
		ABP_Menu_BaseSlasher_C_TML_DissolveSlasher__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.BndEvt__BP_Menu_BaseSlasher_CustomizedAudio_K2Node_ComponentBoundEvent_1_OutfitCustomizedAudioChangedDelegate__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        outfitAudioStateCollection                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Menu_BaseSlasher_C::BndEvt__BP_Menu_BaseSlasher_CustomizedAudio_K2Node_ComponentBoundEvent_1_OutfitCustomizedAudioChangedDelegate__DelegateSignature(const class FName& outfitAudioStateCollection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.BndEvt__BP_Menu_BaseSlasher_CustomizedAudio_K2Node_ComponentBoundEvent_1_OutfitCustomizedAudioChangedDelegate__DelegateSignature");
		
		ABP_Menu_BaseSlasher_C_BndEvt__BP_Menu_BaseSlasher_CustomizedAudio_K2Node_ComponentBoundEvent_1_OutfitCustomizedAudioChangedDelegate__DelegateSignature_Params params {};
		params.outfitAudioStateCollection = outfitAudioStateCollection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_Menu_BaseSlasher_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.ReceiveBeginPlay");
		
		ABP_Menu_BaseSlasher_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.BeginDestroySequence_Internal
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_Menu_BaseSlasher_C::BeginDestroySequence_Internal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.BeginDestroySequence_Internal");
		
		ABP_Menu_BaseSlasher_C_BeginDestroySequence_Internal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.BeginSmokeIn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_BaseSlasher_C::BeginSmokeIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.BeginSmokeIn");
		
		ABP_Menu_BaseSlasher_C_BeginSmokeIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.RestartInSequence_Internal
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_Menu_BaseSlasher_C::RestartInSequence_Internal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.RestartInSequence_Internal");
		
		ABP_Menu_BaseSlasher_C_RestartInSequence_Internal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.BndEvt__CustomizedAudio_K2Node_ComponentBoundEvent_0_CustomizedAudioChangedDelegate__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		EAudioCustomizationCategory                        Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      switchState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_Menu_BaseSlasher_C::BndEvt__CustomizedAudio_K2Node_ComponentBoundEvent_0_CustomizedAudioChangedDelegate__DelegateSignature(EAudioCustomizationCategory Category, const class FString& switchState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.BndEvt__CustomizedAudio_K2Node_ComponentBoundEvent_0_CustomizedAudioChangedDelegate__DelegateSignature");
		
		ABP_Menu_BaseSlasher_C_BndEvt__CustomizedAudio_K2Node_ComponentBoundEvent_0_CustomizedAudioChangedDelegate__DelegateSignature_Params params {};
		params.Category = Category;
		params.switchState = switchState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.RemoveAssetsBeforeDestroy
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_BaseSlasher_C::RemoveAssetsBeforeDestroy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.RemoveAssetsBeforeDestroy");
		
		ABP_Menu_BaseSlasher_C_RemoveAssetsBeforeDestroy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.ExecuteUbergraph_BP_Menu_BaseSlasher
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Menu_BaseSlasher_C::ExecuteUbergraph_BP_Menu_BaseSlasher(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.ExecuteUbergraph_BP_Menu_BaseSlasher");
		
		ABP_Menu_BaseSlasher_C_ExecuteUbergraph_BP_Menu_BaseSlasher_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_Menu_BaseSlasher_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Menu_BaseSlasher_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C");
		return ptr;
	}

}


