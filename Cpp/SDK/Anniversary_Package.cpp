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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCrownPickupInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCrownPickupInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Anniversary.CrownPickupInteraction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0410AE10
	 * 		Name   -> Function Anniversary.CrownPillarInteractable.Local_OnIntroCompleted
	 * 		Flags  -> (Final, Native, Private)
	 */
	void ACrownPillarInteractable::Local_OnIntroCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anniversary.CrownPillarInteractable.Local_OnIntroCompleted");
		
		ACrownPillarInteractable_Local_OnIntroCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0410ADE0
	 * 		Name   -> Function Anniversary.CrownPillarInteractable.IsLocallyObservedPlayerEquippedWithAnniversaryOffering
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ACrownPillarInteractable::IsLocallyObservedPlayerEquippedWithAnniversaryOffering()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anniversary.CrownPillarInteractable.IsLocallyObservedPlayerEquippedWithAnniversaryOffering");
		
		ACrownPillarInteractable_IsLocallyObservedPlayerEquippedWithAnniversaryOffering_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function Anniversary.CrownPillarInteractable.Cosmetic_OnStoppedInteracting
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void ACrownPillarInteractable::Cosmetic_OnStoppedInteracting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anniversary.CrownPillarInteractable.Cosmetic_OnStoppedInteracting");
		
		ACrownPillarInteractable_Cosmetic_OnStoppedInteracting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function Anniversary.CrownPillarInteractable.Cosmetic_OnStartedInteracting
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  interactingPlayer                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              interactionDuration                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACrownPillarInteractable::Cosmetic_OnStartedInteracting(class ADBDPlayer* interactingPlayer, float interactionDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anniversary.CrownPillarInteractable.Cosmetic_OnStartedInteracting");
		
		ACrownPillarInteractable_Cosmetic_OnStartedInteracting_Params params {};
		params.interactingPlayer = interactingPlayer;
		params.interactionDuration = interactionDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function Anniversary.CrownPillarInteractable.Cosmetic_OnInteractionCompleted
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  interactingPlayer                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACrownPillarInteractable::Cosmetic_OnInteractionCompleted(class ADBDPlayer* interactingPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anniversary.CrownPillarInteractable.Cosmetic_OnInteractionCompleted");
		
		ACrownPillarInteractable_Cosmetic_OnInteractionCompleted_Params params {};
		params.interactingPlayer = interactingPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function Anniversary.CrownPillarInteractable.Cosmetic_OnInteractionCancelled
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void ACrownPillarInteractable::Cosmetic_OnInteractionCancelled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anniversary.CrownPillarInteractable.Cosmetic_OnInteractionCancelled");
		
		ACrownPillarInteractable_Cosmetic_OnInteractionCancelled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ACrownPillarInteractable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACrownPillarInteractable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Anniversary.CrownPillarInteractable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCrownPillarOutlineUpdateStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCrownPillarOutlineUpdateStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Anniversary.CrownPillarOutlineUpdateStrategy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0410B420
	 * 		Name   -> Function Anniversary.CrownPlayerComponent.OnRep_hasInteractedWithCrownPillarThisGame
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UCrownPlayerComponent::OnRep_hasInteractedWithCrownPillarThisGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anniversary.CrownPlayerComponent.OnRep_hasInteractedWithCrownPillarThisGame");
		
		UCrownPlayerComponent_OnRep_hasInteractedWithCrownPillarThisGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function Anniversary.CrownPlayerComponent.Cosmetic_SetVFXParticlesVisibility
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCrownPlayerComponent::Cosmetic_SetVFXParticlesVisibility(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anniversary.CrownPlayerComponent.Cosmetic_SetVFXParticlesVisibility");
		
		UCrownPlayerComponent_Cosmetic_SetVFXParticlesVisibility_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCrownPlayerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCrownPlayerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Anniversary.CrownPlayerComponent");
		return ptr;
	}

}


