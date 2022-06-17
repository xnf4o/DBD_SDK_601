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
	 * 		RVA    -> 0x04C48E20
	 * 		Name   -> Function TheHuntress.DeadHard.GetExhaustedDuration
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
	 */
	float UDeadHard::GetExhaustedDuration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheHuntress.DeadHard.GetExhaustedDuration");
		
		UDeadHard_GetExhaustedDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDeadHard.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeadHard::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheHuntress.DeadHard");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDeadHardDashInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeadHardDashInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheHuntress.DeadHardDashInteraction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDeadHardEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeadHardEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheHuntress.DeadHardEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHatchetCooldown.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHatchetCooldown::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheHuntress.HatchetCooldown");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C49550
	 * 		Name   -> Function TheHuntress.HatchetLauncher.IsLaunchedHatchetFullyCharged
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UHatchetLauncher::IsLaunchedHatchetFullyCharged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheHuntress.HatchetLauncher.IsLaunchedHatchetFullyCharged");
		
		UHatchetLauncher_IsLaunchedHatchetFullyCharged_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHatchetLauncher.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHatchetLauncher::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheHuntress.HatchetLauncher");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AHatchetProjectile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHatchetProjectile::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheHuntress.HatchetProjectile");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheHuntress.HatchetRack.SetMovableHatchetVisibility
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               visible                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHatchetRack::SetMovableHatchetVisibility(bool visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheHuntress.HatchetRack.SetMovableHatchetVisibility");
		
		AHatchetRack_SetMovableHatchetVisibility_Params params {};
		params.visible = visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AHatchetRack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHatchetRack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheHuntress.HatchetRack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C49AA0
	 * 		Name   -> Function TheHuntress.HatchetThrow.GetOwningHatchetSpawner
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class ATheHuntressPower* UHatchetThrow::GetOwningHatchetSpawner()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheHuntress.HatchetThrow.GetOwningHatchetSpawner");
		
		UHatchetThrow_GetOwningHatchetSpawner_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHatchetThrow.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHatchetThrow::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheHuntress.HatchetThrow");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C49C90
	 * 		Name   -> Function TheHuntress.ReloadHatchet.IsInteractionPossible_Shared
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UReloadHatchet::IsInteractionPossible_Shared(class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheHuntress.ReloadHatchet.IsInteractionPossible_Shared");
		
		UReloadHatchet_IsInteractionPossible_Shared_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UReloadHatchet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReloadHatchet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheHuntress.ReloadHatchet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C4A4A0
	 * 		Name   -> Function TheHuntress.TheHuntressPower.StartHatchetShineCosmetic
	 * 		Flags  -> (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATheHuntressPower::StartHatchetShineCosmetic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheHuntress.TheHuntressPower.StartHatchetShineCosmetic");
		
		ATheHuntressPower_StartHatchetShineCosmetic_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C4A420
	 * 		Name   -> Function TheHuntress.TheHuntressPower.SetPercentThrowStrength
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              percentStrength                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATheHuntressPower::SetPercentThrowStrength(float percentStrength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheHuntress.TheHuntressPower.SetPercentThrowStrength");
		
		ATheHuntressPower_SetPercentThrowStrength_Params params {};
		params.percentStrength = percentStrength;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C4A390
	 * 		Name   -> Function TheHuntress.TheHuntressPower.SetHatchetVisible
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               visible                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATheHuntressPower::SetHatchetVisible(bool visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheHuntress.TheHuntressPower.SetHatchetVisible");
		
		ATheHuntressPower_SetHatchetVisible_Params params {};
		params.visible = visible;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheHuntress.TheHuntressPower.PrintDebugThrowInfo
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ATheHuntressPower::PrintDebugThrowInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheHuntress.TheHuntressPower.PrintDebugThrowInfo");
		
		ATheHuntressPower_PrintDebugThrowInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C4A360
	 * 		Name   -> Function TheHuntress.TheHuntressPower.IsHatchetThrowFullyCharged
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ATheHuntressPower::IsHatchetThrowFullyCharged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheHuntress.TheHuntressPower.IsHatchetThrowFullyCharged");
		
		ATheHuntressPower_IsHatchetThrowFullyCharged_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C4A330
	 * 		Name   -> Function TheHuntress.TheHuntressPower.HasHatchet
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ATheHuntressPower::HasHatchet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheHuntress.TheHuntressPower.HasHatchet");
		
		ATheHuntressPower_HasHatchet_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C4A300
	 * 		Name   -> Function TheHuntress.TheHuntressPower.GetOwningKiller
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class ASlasherPlayer* ATheHuntressPower::GetOwningKiller()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheHuntress.TheHuntressPower.GetOwningKiller");
		
		ATheHuntressPower_GetOwningKiller_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheHuntress.TheHuntressPower.GetHatchetProjectileLauncher
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	class UBaseProjectileLauncher* ATheHuntressPower::GetHatchetProjectileLauncher()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheHuntress.TheHuntressPower.GetHatchetProjectileLauncher");
		
		ATheHuntressPower_GetHatchetProjectileLauncher_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheHuntress.TheHuntressPower.GetHatchetCooldown
	 * 		Flags  -> (Event, Public, BlueprintEvent, Const)
	 */
	class UHatchetCooldown* ATheHuntressPower::GetHatchetCooldown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheHuntress.TheHuntressPower.GetHatchetCooldown");
		
		ATheHuntressPower_GetHatchetCooldown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheHuntress.TheHuntressPower.GetAkAudioHatchetSpawner
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	class UAkComponent* ATheHuntressPower::GetAkAudioHatchetSpawner()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheHuntress.TheHuntressPower.GetAkAudioHatchetSpawner");
		
		ATheHuntressPower_GetAkAudioHatchetSpawner_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheHuntress.TheHuntressPower.Cosmetic_OnThrowInteractionStart
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void ATheHuntressPower::Cosmetic_OnThrowInteractionStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheHuntress.TheHuntressPower.Cosmetic_OnThrowInteractionStart");
		
		ATheHuntressPower_Cosmetic_OnThrowInteractionStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheHuntress.TheHuntressPower.Cosmetic_OnThrowInteractionCancelled
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void ATheHuntressPower::Cosmetic_OnThrowInteractionCancelled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheHuntress.TheHuntressPower.Cosmetic_OnThrowInteractionCancelled");
		
		ATheHuntressPower_Cosmetic_OnThrowInteractionCancelled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ATheHuntressPower.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATheHuntressPower::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheHuntress.TheHuntressPower");
		return ptr;
	}

}


