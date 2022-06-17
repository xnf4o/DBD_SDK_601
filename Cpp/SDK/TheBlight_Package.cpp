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
	 * 		Name   -> PredefindFunction UActivateBlightPower.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActivateBlightPower::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheBlight.ActivateBlightPower");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAddon_TheBlight_14.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddon_TheBlight_14::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheBlight.Addon_TheBlight_14");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAddon_TheBlight_15.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddon_TheBlight_15::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheBlight.Addon_TheBlight_15");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheBlight.Addon_TheBlight_18.SpawnParticleOnSurvivor
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ACamperPlayer*                               CamperPlayer                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAddon_TheBlight_18::SpawnParticleOnSurvivor(class ACamperPlayer* CamperPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheBlight.Addon_TheBlight_18.SpawnParticleOnSurvivor");
		
		UAddon_TheBlight_18_SpawnParticleOnSurvivor_Params params {};
		params.CamperPlayer = CamperPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04BC12F0
	 * 		Name   -> Function TheBlight.Addon_TheBlight_18.Multicast_SpawnParticleOnSurvivors
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		TArray<class ACamperPlayer*>                       survivors                                                  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UAddon_TheBlight_18::Multicast_SpawnParticleOnSurvivors(TArray<class ACamperPlayer*> survivors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheBlight.Addon_TheBlight_18.Multicast_SpawnParticleOnSurvivors");
		
		UAddon_TheBlight_18_Multicast_SpawnParticleOnSurvivors_Params params {};
		params.survivors = survivors;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAddon_TheBlight_18.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddon_TheBlight_18::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheBlight.Addon_TheBlight_18");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAddon_TheBlight_19.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddon_TheBlight_19::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheBlight.Addon_TheBlight_19");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAddon_TheBlight_20.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddon_TheBlight_20::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheBlight.Addon_TheBlight_20");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAddon_TheBlight_21.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddon_TheBlight_21::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheBlight.Addon_TheBlight_21");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAddon_TheBlight_ConsecutiveDashSpeedBonus.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddon_TheBlight_ConsecutiveDashSpeedBonus::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheBlight.Addon_TheBlight_ConsecutiveDashSpeedBonus");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAddon_TheBlight_SoulChemical.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddon_TheBlight_SoulChemical::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheBlight.Addon_TheBlight_SoulChemical");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBlightAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlightAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheBlight.BlightAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBlightAttackPicker.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlightAttackPicker::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheBlight.BlightAttackPicker");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBlightDashAttack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlightDashAttack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheBlight.BlightDashAttack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBlightDashAttackOpenSubstate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlightDashAttackOpenSubstate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheBlight.BlightDashAttackOpenSubstate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBlightDashAttackSuccessSubstate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlightDashAttackSuccessSubstate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheBlight.BlightDashAttackSuccessSubstate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBlightDashAttackMissSubstate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlightDashAttackMissSubstate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheBlight.BlightDashAttackMissSubstate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBlightDashAttackObstructSubstate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlightDashAttackObstructSubstate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheBlight.BlightDashAttackObstructSubstate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04BC13B0
	 * 		Name   -> Function TheBlight.BlightPower.OnPowerStateChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		EWallGrabState                                     previousState                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EWallGrabState                                     NewState                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABlightPower::OnPowerStateChanged(EWallGrabState previousState, EWallGrabState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheBlight.BlightPower.OnPowerStateChanged");
		
		ABlightPower_OnPowerStateChanged_Params params {};
		params.previousState = previousState;
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ABlightPower.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABlightPower::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheBlight.BlightPower");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheBlight.BlightPowerEstimatedCollisionIndicator.OnShowIndicator_Cosmetic
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void ABlightPowerEstimatedCollisionIndicator::OnShowIndicator_Cosmetic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheBlight.BlightPowerEstimatedCollisionIndicator.OnShowIndicator_Cosmetic");
		
		ABlightPowerEstimatedCollisionIndicator_OnShowIndicator_Cosmetic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheBlight.BlightPowerEstimatedCollisionIndicator.OnHideIndicator_Cosmetic
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void ABlightPowerEstimatedCollisionIndicator::OnHideIndicator_Cosmetic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheBlight.BlightPowerEstimatedCollisionIndicator.OnHideIndicator_Cosmetic");
		
		ABlightPowerEstimatedCollisionIndicator_OnHideIndicator_Cosmetic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ABlightPowerEstimatedCollisionIndicator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABlightPowerEstimatedCollisionIndicator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheBlight.BlightPowerEstimatedCollisionIndicator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04BC1180
	 * 		Name   -> Function TheBlight.BlightPowerState.GetStateDuration
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UBlightPowerState::GetStateDuration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheBlight.BlightPowerState.GetStateDuration");
		
		UBlightPowerState_GetStateDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBlightPowerState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlightPowerState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheBlight.BlightPowerState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBlightPowerStateAdjusting.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlightPowerStateAdjusting::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheBlight.BlightPowerStateAdjusting");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBlightPowerStateDash.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlightPowerStateDash::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheBlight.BlightPowerStateDash");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBlightPowerStateAttack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlightPowerStateAttack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheBlight.BlightPowerStateAttack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04BC14E0
	 * 		Name   -> Function TheBlight.BlightPowerStateComponent.Server_SetWallGrabState
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
	 * Parameters:
	 * 		EWallGrabState                                     NewState                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBlightPowerStateComponent::Server_SetWallGrabState(EWallGrabState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheBlight.BlightPowerStateComponent.Server_SetWallGrabState");
		
		UBlightPowerStateComponent_Server_SetWallGrabState_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04BC14C0
	 * 		Name   -> Function TheBlight.BlightPowerStateComponent.ResetDashTokens
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UBlightPowerStateComponent::ResetDashTokens()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheBlight.BlightPowerStateComponent.ResetDashTokens");
		
		UBlightPowerStateComponent_ResetDashTokens_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04BC14A0
	 * 		Name   -> Function TheBlight.BlightPowerStateComponent.OnRep_StateTimer
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UBlightPowerStateComponent::OnRep_StateTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheBlight.BlightPowerStateComponent.OnRep_StateTimer");
		
		UBlightPowerStateComponent_OnRep_StateTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04BC1480
	 * 		Name   -> Function TheBlight.BlightPowerStateComponent.OnRep_DashTokens
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UBlightPowerStateComponent::OnRep_DashTokens()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheBlight.BlightPowerStateComponent.OnRep_DashTokens");
		
		UBlightPowerStateComponent_OnRep_DashTokens_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04BC1390
	 * 		Name   -> Function TheBlight.BlightPowerStateComponent.OnLevelReadyToPlay
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UBlightPowerStateComponent::OnLevelReadyToPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheBlight.BlightPowerStateComponent.OnLevelReadyToPlay");
		
		UBlightPowerStateComponent_OnLevelReadyToPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04BC1240
	 * 		Name   -> Function TheBlight.BlightPowerStateComponent.Multicast_SetWallGrabState
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private, NetValidate)
	 * Parameters:
	 * 		EWallGrabState                                     NewState                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBlightPowerStateComponent::Multicast_SetWallGrabState(EWallGrabState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheBlight.BlightPowerStateComponent.Multicast_SetWallGrabState");
		
		UBlightPowerStateComponent_Multicast_SetWallGrabState_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04BC11F0
	 * 		Name   -> Function TheBlight.BlightPowerStateComponent.GetStateTimeRemaining
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UBlightPowerStateComponent::GetStateTimeRemaining()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheBlight.BlightPowerStateComponent.GetStateTimeRemaining");
		
		UBlightPowerStateComponent_GetStateTimeRemaining_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04BC1220
	 * 		Name   -> Function TheBlight.BlightPowerStateComponent.GetStateTimer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UTimerObject* UBlightPowerStateComponent::GetStateTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheBlight.BlightPowerStateComponent.GetStateTimer");
		
		UBlightPowerStateComponent_GetStateTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04BC11B0
	 * 		Name   -> Function TheBlight.BlightPowerStateComponent.GetStateTimeElapsed
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UBlightPowerStateComponent::GetStateTimeElapsed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheBlight.BlightPowerStateComponent.GetStateTimeElapsed");
		
		UBlightPowerStateComponent_GetStateTimeElapsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04BC10F0
	 * 		Name   -> Function TheBlight.BlightPowerStateComponent.GetPowerStateByEnum
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EWallGrabState                                     StateEnum                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UBlightPowerState* UBlightPowerStateComponent::GetPowerStateByEnum(EWallGrabState StateEnum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheBlight.BlightPowerStateComponent.GetPowerStateByEnum");
		
		UBlightPowerStateComponent_GetPowerStateByEnum_Params params {};
		params.StateEnum = StateEnum;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04BC10C0
	 * 		Name   -> Function TheBlight.BlightPowerStateComponent.GetPowerState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EWallGrabState UBlightPowerStateComponent::GetPowerState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheBlight.BlightPowerStateComponent.GetPowerState");
		
		UBlightPowerStateComponent_GetPowerState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04BC1090
	 * 		Name   -> Function TheBlight.BlightPowerStateComponent.GetLookAngleDegrees
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UBlightPowerStateComponent::GetLookAngleDegrees()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheBlight.BlightPowerStateComponent.GetLookAngleDegrees");
		
		UBlightPowerStateComponent_GetLookAngleDegrees_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04BC1070
	 * 		Name   -> Function TheBlight.BlightPowerStateComponent.GetDashTokensRemaining
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	unsigned char UBlightPowerStateComponent::GetDashTokensRemaining()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheBlight.BlightPowerStateComponent.GetDashTokensRemaining");
		
		UBlightPowerStateComponent_GetDashTokensRemaining_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04BC1040
	 * 		Name   -> Function TheBlight.BlightPowerStateComponent.GetCurrentPowerState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UBlightPowerState* UBlightPowerStateComponent::GetCurrentPowerState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheBlight.BlightPowerStateComponent.GetCurrentPowerState");
		
		UBlightPowerStateComponent_GetCurrentPowerState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04BC1000
	 * 		Name   -> Function TheBlight.BlightPowerStateComponent.CanDash
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UBlightPowerStateComponent::CanDash()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheBlight.BlightPowerStateComponent.CanDash");
		
		UBlightPowerStateComponent_CanDash_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBlightPowerStateComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlightPowerStateComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheBlight.BlightPowerStateComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBlightPowerStateCooldown.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlightPowerStateCooldown::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheBlight.BlightPowerStateCooldown");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBlightPowerStateHolding.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlightPowerStateHolding::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheBlight.BlightPowerStateHolding");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBlightPowerStateInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlightPowerStateInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheBlight.BlightPowerStateInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBlightPowerStateLethalDash.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlightPowerStateLethalDash::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheBlight.BlightPowerStateLethalDash");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBlightPowerStateNonLethalDash.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlightPowerStateNonLethalDash::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheBlight.BlightPowerStateNonLethalDash");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBlightPowerStateReady.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlightPowerStateReady::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheBlight.BlightPowerStateReady");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheBlight.BuiltToLast.OnBuiltToLastTrigger_Cosmetic
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void UBuiltToLast::OnBuiltToLastTrigger_Cosmetic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheBlight.BuiltToLast.OnBuiltToLastTrigger_Cosmetic");
		
		UBuiltToLast_OnBuiltToLastTrigger_Cosmetic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBuiltToLast.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBuiltToLast::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheBlight.BuiltToLast");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDesperateMeasures.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDesperateMeasures::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheBlight.DesperateMeasures");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheBlight.DragonsGrip.OnRevealSurvivor
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Instigator                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDragonsGrip::OnRevealSurvivor(class ADBDPlayer* Instigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheBlight.DragonsGrip.OnRevealSurvivor");
		
		UDragonsGrip_OnRevealSurvivor_Params params {};
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04A76CA0
	 * 		Name   -> Function TheBlight.DragonsGrip.Multicast_OnRevealSurvivor
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		class ADBDPlayer*                                  survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDragonsGrip::Multicast_OnRevealSurvivor(class ADBDPlayer* survivor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheBlight.DragonsGrip.Multicast_OnRevealSurvivor");
		
		UDragonsGrip_Multicast_OnRevealSurvivor_Params params {};
		params.survivor = survivor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDragonsGrip.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDragonsGrip::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheBlight.DragonsGrip");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHexBloodFavor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHexBloodFavor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheBlight.HexBloodFavor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04BC0F30
	 * 		Name   -> Function TheBlight.HexUndying.Authority_UpdateHexPerkStatusView
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UGameplayModifierContainer*                  GameplayModifierContainer                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsApplicable                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHexUndying::Authority_UpdateHexPerkStatusView(class UGameplayModifierContainer* GameplayModifierContainer, bool IsApplicable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheBlight.HexUndying.Authority_UpdateHexPerkStatusView");
		
		UHexUndying_Authority_UpdateHexPerkStatusView_Params params {};
		params.GameplayModifierContainer = GameplayModifierContainer;
		params.IsApplicable = IsApplicable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04BC0EA0
	 * 		Name   -> Function TheBlight.HexUndying.Authority_OnSurvivorAdded
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ACamperPlayer*                               survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHexUndying::Authority_OnSurvivorAdded(class ACamperPlayer* survivor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheBlight.HexUndying.Authority_OnSurvivorAdded");
		
		UHexUndying_Authority_OnSurvivorAdded_Params params {};
		params.survivor = survivor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04BC0D90
	 * 		Name   -> Function TheBlight.HexUndying.Authority_OnCamperCleansedHexPerk
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                GameplayTag                                                (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UHexUndying::Authority_OnCamperCleansedHexPerk(const struct FGameplayTag& GameplayTag, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheBlight.HexUndying.Authority_OnCamperCleansedHexPerk");
		
		UHexUndying_Authority_OnCamperCleansedHexPerk_Params params {};
		params.GameplayTag = GameplayTag;
		params.GameEventData = GameEventData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHexUndying.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHexUndying::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheBlight.HexUndying");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVisionary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVisionary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheBlight.Visionary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UWallGrabInteractionDefinition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWallGrabInteractionDefinition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheBlight.WallGrabInteractionDefinition");
		return ptr;
	}

}


