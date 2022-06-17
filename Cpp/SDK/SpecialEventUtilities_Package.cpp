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
	 * 		Name   -> Function SpecialEventUtilities.RespawnableInteractable.OnUnhidden
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ARespawnableInteractable::OnUnhidden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpecialEventUtilities.RespawnableInteractable.OnUnhidden");
		
		ARespawnableInteractable_OnUnhidden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04B952C0
	 * 		Name   -> Function SpecialEventUtilities.RespawnableInteractable.OnRep_IsHidden
	 * 		Flags  -> (Final, Native, Private)
	 */
	void ARespawnableInteractable::OnRep_IsHidden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpecialEventUtilities.RespawnableInteractable.OnRep_IsHidden");
		
		ARespawnableInteractable_OnRep_IsHidden_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function SpecialEventUtilities.RespawnableInteractable.OnHidden
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ARespawnableInteractable::OnHidden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpecialEventUtilities.RespawnableInteractable.OnHidden");
		
		ARespawnableInteractable_OnHidden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04B95290
	 * 		Name   -> Function SpecialEventUtilities.RespawnableInteractable.IsHidden
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ARespawnableInteractable::IsHidden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpecialEventUtilities.RespawnableInteractable.IsHidden");
		
		ARespawnableInteractable_IsHidden_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ARespawnableInteractable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARespawnableInteractable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SpecialEventUtilities.RespawnableInteractable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0376CF00
	 * 		Name   -> Function SpecialEventUtilities.RespawningEventComponent.DBD_ForceRespawnSpecialEventObject
	 * 		Flags  -> (Final, Exec, Native, Private)
	 */
	void URespawningEventComponent::DBD_ForceRespawnSpecialEventObject()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpecialEventUtilities.RespawningEventComponent.DBD_ForceRespawnSpecialEventObject");
		
		URespawningEventComponent_DBD_ForceRespawnSpecialEventObject_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04B95C20
	 * 		Name   -> Function SpecialEventUtilities.RespawningEventComponent.Authority_OnIsInteractingWithAnyRespawnableInteractableChanged
	 * 		Flags  -> (Native, Protected)
	 * Parameters:
	 * 		class ARespawnableInteractable*                    RespawnableInteractable                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsInteracting                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URespawningEventComponent::Authority_OnIsInteractingWithAnyRespawnableInteractableChanged(class ARespawnableInteractable* RespawnableInteractable, bool IsInteracting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpecialEventUtilities.RespawningEventComponent.Authority_OnIsInteractingWithAnyRespawnableInteractableChanged");
		
		URespawningEventComponent_Authority_OnIsInteractingWithAnyRespawnableInteractableChanged_Params params {};
		params.RespawnableInteractable = RespawnableInteractable;
		params.IsInteracting = IsInteracting;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction URespawningEventComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URespawningEventComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SpecialEventUtilities.RespawningEventComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction URespawnableTrigger.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URespawnableTrigger::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SpecialEventUtilities.RespawnableTrigger");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04B94E50
	 * 		Name   -> Function SpecialEventUtilities.InteractionRespawnableTrigger.Authority_OnNewRespawnableSubscribed
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class ARespawnableInteractable*                    newRespawnableInteractable                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInteractionRespawnableTrigger::Authority_OnNewRespawnableSubscribed(class ARespawnableInteractable* newRespawnableInteractable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpecialEventUtilities.InteractionRespawnableTrigger.Authority_OnNewRespawnableSubscribed");
		
		UInteractionRespawnableTrigger_Authority_OnNewRespawnableSubscribed_Params params {};
		params.newRespawnableInteractable = newRespawnableInteractable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04B94DC0
	 * 		Name   -> Function SpecialEventUtilities.InteractionRespawnableTrigger.Authority_OnInteractionEnded
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class ARespawnableInteractable*                    RespawnableInteractable                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInteractionRespawnableTrigger::Authority_OnInteractionEnded(class ARespawnableInteractable* RespawnableInteractable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpecialEventUtilities.InteractionRespawnableTrigger.Authority_OnInteractionEnded");
		
		UInteractionRespawnableTrigger_Authority_OnInteractionEnded_Params params {};
		params.RespawnableInteractable = RespawnableInteractable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UInteractionRespawnableTrigger.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInteractionRespawnableTrigger::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SpecialEventUtilities.InteractionRespawnableTrigger");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04B95590
	 * 		Name   -> Function SpecialEventUtilities.RespawnablePositioner.Authority_OnIsInteractingChangedEvent
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ARespawnableInteractable*                    RespawnableInteractable                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsInteracting                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URespawnablePositioner::Authority_OnIsInteractingChangedEvent(class ARespawnableInteractable* RespawnableInteractable, bool IsInteracting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpecialEventUtilities.RespawnablePositioner.Authority_OnIsInteractingChangedEvent");
		
		URespawnablePositioner_Authority_OnIsInteractingChangedEvent_Params params {};
		params.RespawnableInteractable = RespawnableInteractable;
		params.IsInteracting = IsInteracting;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04B95500
	 * 		Name   -> Function SpecialEventUtilities.RespawnablePositioner.Authority_GetRespawnables
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class ARespawnableInteractable*> URespawnablePositioner::Authority_GetRespawnables()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpecialEventUtilities.RespawnablePositioner.Authority_GetRespawnables");
		
		URespawnablePositioner_Authority_GetRespawnables_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction URespawnablePositioner.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URespawnablePositioner::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SpecialEventUtilities.RespawnablePositioner");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction URespawnableStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URespawnableStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SpecialEventUtilities.RespawnableStrategy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction URespawnFurthestFromPlayersStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URespawnFurthestFromPlayersStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SpecialEventUtilities.RespawnFurthestFromPlayersStrategy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction URespawningEventUtilities.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URespawningEventUtilities::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SpecialEventUtilities.RespawningEventUtilities");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTimedRespawnableTrigger.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTimedRespawnableTrigger::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SpecialEventUtilities.TimedRespawnableTrigger");
		return ptr;
	}

}


