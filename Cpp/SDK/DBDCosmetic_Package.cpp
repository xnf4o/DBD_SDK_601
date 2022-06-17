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
	 * 		RVA    -> 0x042AF4E0
	 * 		Name   -> Function DBDCosmetic.SurvivorCosmeticHelperActor.IsLocallyObserved
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ASurvivorCosmeticHelperActor::IsLocallyObserved()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCosmetic.SurvivorCosmeticHelperActor.IsLocallyObserved");
		
		ASurvivorCosmeticHelperActor_IsLocallyObserved_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042AF4B0
	 * 		Name   -> Function DBDCosmetic.SurvivorCosmeticHelperActor.GetSurvivor
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class ACamperPlayer* ASurvivorCosmeticHelperActor::GetSurvivor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCosmetic.SurvivorCosmeticHelperActor.GetSurvivor");
		
		ASurvivorCosmeticHelperActor_GetSurvivor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042AF480
	 * 		Name   -> Function DBDCosmetic.SurvivorCosmeticHelperActor.GetMaterialHelper
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class UMaterialHelper* ASurvivorCosmeticHelperActor::GetMaterialHelper()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCosmetic.SurvivorCosmeticHelperActor.GetMaterialHelper");
		
		ASurvivorCosmeticHelperActor_GetMaterialHelper_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042AF450
	 * 		Name   -> Function DBDCosmetic.SurvivorCosmeticHelperActor.GetCustomizedSkeletalMesh
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class UCustomizedSkeletalMesh* ASurvivorCosmeticHelperActor::GetCustomizedSkeletalMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCosmetic.SurvivorCosmeticHelperActor.GetCustomizedSkeletalMesh");
		
		ASurvivorCosmeticHelperActor_GetCustomizedSkeletalMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042AF420
	 * 		Name   -> Function DBDCosmetic.SurvivorCosmeticHelperActor.GetAudioComponent
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class UAkComponent* ASurvivorCosmeticHelperActor::GetAudioComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCosmetic.SurvivorCosmeticHelperActor.GetAudioComponent");
		
		ASurvivorCosmeticHelperActor_GetAudioComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDCosmetic.SurvivorCosmeticHelperActor.Cosmetic_OnSurvivorLinked
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ACamperPlayer*                               survivorLinked                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASurvivorCosmeticHelperActor::Cosmetic_OnSurvivorLinked(class ACamperPlayer* survivorLinked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCosmetic.SurvivorCosmeticHelperActor.Cosmetic_OnSurvivorLinked");
		
		ASurvivorCosmeticHelperActor_Cosmetic_OnSurvivorLinked_Params params {};
		params.survivorLinked = survivorLinked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDCosmetic.SurvivorCosmeticHelperActor.Cosmetic_OnIsLocallyObservingSurvivorChanged
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsLocallyObservingSurvivor                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASurvivorCosmeticHelperActor::Cosmetic_OnIsLocallyObservingSurvivorChanged(bool IsLocallyObservingSurvivor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCosmetic.SurvivorCosmeticHelperActor.Cosmetic_OnIsLocallyObservingSurvivorChanged");
		
		ASurvivorCosmeticHelperActor_Cosmetic_OnIsLocallyObservingSurvivorChanged_Params params {};
		params.IsLocallyObservingSurvivor = IsLocallyObservingSurvivor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDCosmetic.SurvivorCosmeticHelperActor.Cosmetic_OnIsGettingMoriedStatusChanged
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isGettingMoried                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASurvivorCosmeticHelperActor::Cosmetic_OnIsGettingMoriedStatusChanged(bool isGettingMoried)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCosmetic.SurvivorCosmeticHelperActor.Cosmetic_OnIsGettingMoriedStatusChanged");
		
		ASurvivorCosmeticHelperActor_Cosmetic_OnIsGettingMoriedStatusChanged_Params params {};
		params.isGettingMoried = isGettingMoried;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ASurvivorCosmeticHelperActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASurvivorCosmeticHelperActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCosmetic.SurvivorCosmeticHelperActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USurvivorCosmeticHelperSpawnerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USurvivorCosmeticHelperSpawnerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCosmetic.SurvivorCosmeticHelperSpawnerComponent");
		return ptr;
	}

}


