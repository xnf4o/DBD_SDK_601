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
	 * 		Name   -> Function Gnome2021.Gnome.Cosmetic_OnStoppedInteracting
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void AGnome::Cosmetic_OnStoppedInteracting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gnome2021.Gnome.Cosmetic_OnStoppedInteracting");
		
		AGnome_Cosmetic_OnStoppedInteracting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function Gnome2021.Gnome.Cosmetic_OnStartedInteracting
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  interactingPlayer                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              interactionDuration                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGnome::Cosmetic_OnStartedInteracting(class ADBDPlayer* interactingPlayer, float interactionDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gnome2021.Gnome.Cosmetic_OnStartedInteracting");
		
		AGnome_Cosmetic_OnStartedInteracting_Params params {};
		params.interactingPlayer = interactingPlayer;
		params.interactionDuration = interactionDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function Gnome2021.Gnome.Cosmetic_OnInteractionCompleted
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  interactingPlayer                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGnome::Cosmetic_OnInteractionCompleted(class ADBDPlayer* interactingPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gnome2021.Gnome.Cosmetic_OnInteractionCompleted");
		
		AGnome_Cosmetic_OnInteractionCompleted_Params params {};
		params.interactingPlayer = interactingPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AGnome.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGnome::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Gnome2021.Gnome");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04B668D0
	 * 		Name   -> Function Gnome2021.GnomeEventComponent.Authority_OnEndGameStarted
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                gameEventType                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGnomeEventComponent::Authority_OnEndGameStarted(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gnome2021.GnomeEventComponent.Authority_OnEndGameStarted");
		
		UGnomeEventComponent_Authority_OnEndGameStarted_Params params {};
		params.gameEventType = gameEventType;
		params.GameEventData = GameEventData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGnomeEventComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGnomeEventComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Gnome2021.GnomeEventComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGnomeInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGnomeInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Gnome2021.GnomeInteraction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGnomePlayerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGnomePlayerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Gnome2021.GnomePlayerComponent");
		return ptr;
	}

}


