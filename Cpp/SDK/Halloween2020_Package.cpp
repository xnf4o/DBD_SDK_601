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
	 * 		RVA    -> 0x04B888B0
	 * 		Name   -> Function Halloween2020.BlightedSerumAddon.OnRep_DashInteraction
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UBlightedSerumAddon::OnRep_DashInteraction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Halloween2020.BlightedSerumAddon.OnRep_DashInteraction");
		
		UBlightedSerumAddon_OnRep_DashInteraction_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function Halloween2020.BlightedSerumAddon.OnBlightedDashEnabledVfxSfx
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBlightedSerumAddon::OnBlightedDashEnabledVfxSfx()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Halloween2020.BlightedSerumAddon.OnBlightedDashEnabledVfxSfx");
		
		UBlightedSerumAddon_OnBlightedDashEnabledVfxSfx_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBlightedSerumAddon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlightedSerumAddon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Halloween2020.BlightedSerumAddon");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04B88A40
	 * 		Name   -> Function Halloween2020.BlightedSerumCollisionInteraction.SetCooldownInteraction
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UBlightedSerumCooldownInteraction*           cooldownInteraction                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBlightedSerumCollisionInteraction::SetCooldownInteraction(class UBlightedSerumCooldownInteraction* cooldownInteraction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Halloween2020.BlightedSerumCollisionInteraction.SetCooldownInteraction");
		
		UBlightedSerumCollisionInteraction_SetCooldownInteraction_Params params {};
		params.cooldownInteraction = cooldownInteraction;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBlightedSerumCollisionInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlightedSerumCollisionInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Halloween2020.BlightedSerumCollisionInteraction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBlightedSerumCooldownInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlightedSerumCooldownInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Halloween2020.BlightedSerumCooldownInteraction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04B88A40
	 * 		Name   -> Function Halloween2020.BlightedSerumDashInteraction.SetCooldownInteraction
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UBlightedSerumCooldownInteraction*           cooldownInteraction                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBlightedSerumDashInteraction::SetCooldownInteraction(class UBlightedSerumCooldownInteraction* cooldownInteraction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Halloween2020.BlightedSerumDashInteraction.SetCooldownInteraction");
		
		UBlightedSerumDashInteraction_SetCooldownInteraction_Params params {};
		params.cooldownInteraction = cooldownInteraction;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04B88D80
	 * 		Name   -> Function Halloween2020.BlightedSerumDashInteraction.SetCollisionInteraction
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UBlightedSerumCollisionInteraction*          collisionInteraction                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBlightedSerumDashInteraction::SetCollisionInteraction(class UBlightedSerumCollisionInteraction* collisionInteraction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Halloween2020.BlightedSerumDashInteraction.SetCollisionInteraction");
		
		UBlightedSerumDashInteraction_SetCollisionInteraction_Params params {};
		params.collisionInteraction = collisionInteraction;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBlightedSerumDashInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlightedSerumDashInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Halloween2020.BlightedSerumDashInteraction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04B890F0
	 * 		Name   -> Function Halloween2020.ToxinPlantInteractable.SetToxinPlantComplete
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               IsComplete                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AToxinPlantInteractable::SetToxinPlantComplete(bool IsComplete)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Halloween2020.ToxinPlantInteractable.SetToxinPlantComplete");
		
		AToxinPlantInteractable_SetToxinPlantComplete_Params params {};
		params.IsComplete = IsComplete;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function Halloween2020.ToxinPlantInteractable.OnToxinPlantComplete
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AToxinPlantInteractable::OnToxinPlantComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Halloween2020.ToxinPlantInteractable.OnToxinPlantComplete");
		
		AToxinPlantInteractable_OnToxinPlantComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function Halloween2020.ToxinPlantInteractable.OnSalvageInteractionStart
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AToxinPlantInteractable::OnSalvageInteractionStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Halloween2020.ToxinPlantInteractable.OnSalvageInteractionStart");
		
		AToxinPlantInteractable_OnSalvageInteractionStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function Halloween2020.ToxinPlantInteractable.OnSalvageInteractionFinished
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AToxinPlantInteractable::OnSalvageInteractionFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Halloween2020.ToxinPlantInteractable.OnSalvageInteractionFinished");
		
		AToxinPlantInteractable_OnSalvageInteractionFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03EC6820
	 * 		Name   -> Function Halloween2020.ToxinPlantInteractable.IsToxinPlantComplete
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AToxinPlantInteractable::IsToxinPlantComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Halloween2020.ToxinPlantInteractable.IsToxinPlantComplete");
		
		AToxinPlantInteractable_IsToxinPlantComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AToxinPlantInteractable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AToxinPlantInteractable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Halloween2020.ToxinPlantInteractable");
		return ptr;
	}

}


