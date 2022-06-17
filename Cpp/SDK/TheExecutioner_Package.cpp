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
	 * 		RVA    -> 0x04C077A0
	 * 		Name   -> Function TheExecutioner.ActivateTormentModeInteraction.SetTormentMode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ATormentMode*                                tormentModeComponent                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UActivateTormentModeInteraction::SetTormentMode(class ATormentMode* tormentModeComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.ActivateTormentModeInteraction.SetTormentMode");
		
		UActivateTormentModeInteraction_SetTormentMode_Params params {};
		params.tormentModeComponent = tormentModeComponent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UActivateTormentModeInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActivateTormentModeInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheExecutioner.ActivateTormentModeInteraction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAddon_TormentMode_17.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddon_TormentMode_17::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheExecutioner.Addon_TormentMode_17");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAddon_TormentMode_18.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddon_TormentMode_18::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheExecutioner.Addon_TormentMode_18");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAddon_TormentMode_19.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddon_TormentMode_19::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheExecutioner.Addon_TormentMode_19");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAddon_TormentMode_20.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddon_TormentMode_20::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheExecutioner.Addon_TormentMode_20");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAddon_TormentMode_21.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddon_TormentMode_21::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheExecutioner.Addon_TormentMode_21");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheExecutioner.AgonyComponent.ShowAgonyBarbWireFX_Cosmetic
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void UAgonyComponent::ShowAgonyBarbWireFX_Cosmetic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.AgonyComponent.ShowAgonyBarbWireFX_Cosmetic");
		
		UAgonyComponent_ShowAgonyBarbWireFX_Cosmetic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheExecutioner.AgonyComponent.OnTrailEffectStop_Cosmetic
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void UAgonyComponent::OnTrailEffectStop_Cosmetic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.AgonyComponent.OnTrailEffectStop_Cosmetic");
		
		UAgonyComponent_OnTrailEffectStop_Cosmetic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheExecutioner.AgonyComponent.OnTrailEffectStart_Cosmetic
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void UAgonyComponent::OnTrailEffectStart_Cosmetic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.AgonyComponent.OnTrailEffectStart_Cosmetic");
		
		UAgonyComponent_OnTrailEffectStart_Cosmetic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C07100
	 * 		Name   -> Function TheExecutioner.AgonyComponent.OnShowBarbWireFXOnGameEvent
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UAgonyComponent::OnShowBarbWireFXOnGameEvent(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.AgonyComponent.OnShowBarbWireFXOnGameEvent");
		
		UAgonyComponent_OnShowBarbWireFXOnGameEvent_Params params {};
		params.gameEventType = gameEventType;
		params.GameEventData = GameEventData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C070C0
	 * 		Name   -> Function TheExecutioner.AgonyComponent.OnRep_IsInAgony
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UAgonyComponent::OnRep_IsInAgony()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.AgonyComponent.OnRep_IsInAgony");
		
		UAgonyComponent_OnRep_IsInAgony_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheExecutioner.AgonyComponent.OnLocallyObservedChanged
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsLocallyObserved                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAgonyComponent::OnLocallyObservedChanged(bool IsLocallyObserved)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.AgonyComponent.OnLocallyObservedChanged");
		
		UAgonyComponent_OnLocallyObservedChanged_Params params {};
		params.IsLocallyObserved = IsLocallyObserved;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheExecutioner.AgonyComponent.OnHitInAgony_Cosmetic
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void UAgonyComponent::OnHitInAgony_Cosmetic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.AgonyComponent.OnHitInAgony_Cosmetic");
		
		UAgonyComponent_OnHitInAgony_Cosmetic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheExecutioner.AgonyComponent.OnHitByTormentAttackTrail_Cosmetic
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void UAgonyComponent::OnHitByTormentAttackTrail_Cosmetic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.AgonyComponent.OnHitByTormentAttackTrail_Cosmetic");
		
		UAgonyComponent_OnHitByTormentAttackTrail_Cosmetic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C06E90
	 * 		Name   -> Function TheExecutioner.AgonyComponent.OnHideBarbWireFXOnGameEvent
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UAgonyComponent::OnHideBarbWireFXOnGameEvent(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.AgonyComponent.OnHideBarbWireFXOnGameEvent");
		
		UAgonyComponent_OnHideBarbWireFXOnGameEvent_Params params {};
		params.gameEventType = gameEventType;
		params.GameEventData = GameEventData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheExecutioner.AgonyComponent.OnAgonyChanged_Cosmetic
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsInAgony                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAgonyComponent::OnAgonyChanged_Cosmetic(bool IsInAgony)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.AgonyComponent.OnAgonyChanged_Cosmetic");
		
		UAgonyComponent_OnAgonyChanged_Cosmetic_Params params {};
		params.IsInAgony = IsInAgony;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C06BD0
	 * 		Name   -> Function TheExecutioner.AgonyComponent.IsInAgony
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UAgonyComponent::IsInAgony()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.AgonyComponent.IsInAgony");
		
		UAgonyComponent_IsInAgony_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C06BA0
	 * 		Name   -> Function TheExecutioner.AgonyComponent.IsAgonyMoriable
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UAgonyComponent::IsAgonyMoriable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.AgonyComponent.IsAgonyMoriable");
		
		UAgonyComponent_IsAgonyMoriable_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheExecutioner.AgonyComponent.HideAgonyBarbWireFX_Cosmetic
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void UAgonyComponent::HideAgonyBarbWireFX_Cosmetic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.AgonyComponent.HideAgonyBarbWireFX_Cosmetic");
		
		UAgonyComponent_HideAgonyBarbWireFX_Cosmetic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C06880
	 * 		Name   -> Function TheExecutioner.AgonyComponent.Authority_OnDrainStageChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		int32_t                                            DrainStage                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ADBDPlayer*                                  Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAgonyComponent::Authority_OnDrainStageChanged(int32_t DrainStage, class ADBDPlayer* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.AgonyComponent.Authority_OnDrainStageChanged");
		
		UAgonyComponent_Authority_OnDrainStageChanged_Params params {};
		params.DrainStage = DrainStage;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C06860
	 * 		Name   -> Function TheExecutioner.AgonyComponent.Authority_OnAttackTrailDamageCooldownTimerDone
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UAgonyComponent::Authority_OnAttackTrailDamageCooldownTimerDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.AgonyComponent.Authority_OnAttackTrailDamageCooldownTimerDone");
		
		UAgonyComponent_Authority_OnAttackTrailDamageCooldownTimerDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAgonyComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAgonyComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheExecutioner.AgonyComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAgonyMoriInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAgonyMoriInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheExecutioner.AgonyMoriInteraction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAgonySubAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAgonySubAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheExecutioner.AgonySubAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C06AA0
	 * 		Name   -> Function TheExecutioner.BaseTormentTrailPoint.EndOfDisapearCosmetic
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void ABaseTormentTrailPoint::EndOfDisapearCosmetic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.BaseTormentTrailPoint.EndOfDisapearCosmetic");
		
		ABaseTormentTrailPoint_EndOfDisapearCosmetic_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheExecutioner.BaseTormentTrailPoint.DisappearCosmetic
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABaseTormentTrailPoint::DisappearCosmetic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.BaseTormentTrailPoint.DisappearCosmetic");
		
		ABaseTormentTrailPoint_DisappearCosmetic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ABaseTormentTrailPoint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABaseTormentTrailPoint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheExecutioner.BaseTormentTrailPoint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C06950
	 * 		Name   -> Function TheExecutioner.BloodPact.Authority_OnInRangeChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               InRange                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBloodPact::Authority_OnInRangeChanged(bool InRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.BloodPact.Authority_OnInRangeChanged");
		
		UBloodPact_Authority_OnInRangeChanged_Params params {};
		params.InRange = InRange;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBloodPact.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBloodPact::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheExecutioner.BloodPact");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x049F8270
	 * 		Name   -> Function TheExecutioner.DeathBedAntiCampComponent.Multicast_TriggerDeathBedRelocate
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 */
	void UDeathBedAntiCampComponent::Multicast_TriggerDeathBedRelocate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.DeathBedAntiCampComponent.Multicast_TriggerDeathBedRelocate");
		
		UDeathBedAntiCampComponent_Multicast_TriggerDeathBedRelocate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C069E0
	 * 		Name   -> Function TheExecutioner.DeathBedAntiCampComponent.Authority_OnInRangeChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               InRange                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDeathBedAntiCampComponent::Authority_OnInRangeChanged(bool InRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.DeathBedAntiCampComponent.Authority_OnInRangeChanged");
		
		UDeathBedAntiCampComponent_Authority_OnInRangeChanged_Params params {};
		params.InRange = InRange;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDeathBedAntiCampComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeathBedAntiCampComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheExecutioner.DeathBedAntiCampComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C07830
	 * 		Name   -> Function TheExecutioner.DeathBedInteractable.TeleportCamperToDeathBed
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable)
	 */
	void ADeathBedInteractable::TeleportCamperToDeathBed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.DeathBedInteractable.TeleportCamperToDeathBed");
		
		ADeathBedInteractable_TeleportCamperToDeathBed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheExecutioner.DeathBedInteractable.StartPlayerAbsorbedByGround
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ADeathBedInteractable::StartPlayerAbsorbedByGround()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.DeathBedInteractable.StartPlayerAbsorbedByGround");
		
		ADeathBedInteractable_StartPlayerAbsorbedByGround_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C07710
	 * 		Name   -> Function TheExecutioner.DeathBedInteractable.SetInDeathBedCamper
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ACamperPlayer*                               CamperPlayer                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADeathBedInteractable::SetInDeathBedCamper(class ACamperPlayer* CamperPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.DeathBedInteractable.SetInDeathBedCamper");
		
		ADeathBedInteractable_SetInDeathBedCamper_Params params {};
		params.CamperPlayer = CamperPlayer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C07440
	 * 		Name   -> Function TheExecutioner.DeathBedInteractable.PlayerOverlapZoneEndOverlap
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADeathBedInteractable::PlayerOverlapZoneEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.DeathBedInteractable.PlayerOverlapZoneEndOverlap");
		
		ADeathBedInteractable_PlayerOverlapZoneEndOverlap_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C07230
	 * 		Name   -> Function TheExecutioner.DeathBedInteractable.PlayerOverlapZoneBeginOverlap
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void ADeathBedInteractable::PlayerOverlapZoneBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.DeathBedInteractable.PlayerOverlapZoneBeginOverlap");
		
		ADeathBedInteractable_PlayerOverlapZoneBeginOverlap_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheExecutioner.DeathBedInteractable.OnSkillCheckFailed_Cosmetic
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void ADeathBedInteractable::OnSkillCheckFailed_Cosmetic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.DeathBedInteractable.OnSkillCheckFailed_Cosmetic");
		
		ADeathBedInteractable_OnSkillCheckFailed_Cosmetic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C07210
	 * 		Name   -> Function TheExecutioner.DeathBedInteractable.OnSkillCheckFailed
	 * 		Flags  -> (Final, Native, Private)
	 */
	void ADeathBedInteractable::OnSkillCheckFailed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.DeathBedInteractable.OnSkillCheckFailed");
		
		ADeathBedInteractable_OnSkillCheckFailed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheExecutioner.DeathBedInteractable.OnRescueCancelled
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ADeathBedInteractable::OnRescueCancelled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.DeathBedInteractable.OnRescueCancelled");
		
		ADeathBedInteractable_OnRescueCancelled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheExecutioner.DeathBedInteractable.OnRelocateStart_Cosmetic
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void ADeathBedInteractable::OnRelocateStart_Cosmetic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.DeathBedInteractable.OnRelocateStart_Cosmetic");
		
		ADeathBedInteractable_OnRelocateStart_Cosmetic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C06E70
	 * 		Name   -> Function TheExecutioner.DeathBedInteractable.OnDeathBedDeathEnd
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ADeathBedInteractable::OnDeathBedDeathEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.DeathBedInteractable.OnDeathBedDeathEnd");
		
		ADeathBedInteractable_OnDeathBedDeathEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C06CD0
	 * 		Name   -> Function TheExecutioner.DeathBedInteractable.Multicast_RelocateToOtherDeathBed
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		class ADeathBedInteractable*                       deathBed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ACamperPlayer*                               CamperPlayer                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADeathBedInteractable::Multicast_RelocateToOtherDeathBed(class ADeathBedInteractable* deathBed, class ACamperPlayer* CamperPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.DeathBedInteractable.Multicast_RelocateToOtherDeathBed");
		
		ADeathBedInteractable_Multicast_RelocateToOtherDeathBed_Params params {};
		params.deathBed = deathBed;
		params.CamperPlayer = CamperPlayer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C06AF0
	 * 		Name   -> Function TheExecutioner.DeathBedInteractable.GetRescuerSnapPosition
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FVector ADeathBedInteractable::GetRescuerSnapPosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.DeathBedInteractable.GetRescuerSnapPosition");
		
		ADeathBedInteractable_GetRescuerSnapPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04AB1390
	 * 		Name   -> Function TheExecutioner.DeathBedInteractable.GetMontagePlayer
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
	 */
	class UMontagePlayer* ADeathBedInteractable::GetMontagePlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.DeathBedInteractable.GetMontagePlayer");
		
		ADeathBedInteractable_GetMontagePlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C06AC0
	 * 		Name   -> Function TheExecutioner.DeathBedInteractable.GetInDeathBedCamper
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class ACamperPlayer* ADeathBedInteractable::GetInDeathBedCamper()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.DeathBedInteractable.GetInDeathBedCamper");
		
		ADeathBedInteractable_GetInDeathBedCamper_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheExecutioner.DeathBedInteractable.FX_SurvivorSavedFromDeathBed
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void ADeathBedInteractable::FX_SurvivorSavedFromDeathBed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.DeathBedInteractable.FX_SurvivorSavedFromDeathBed");
		
		ADeathBedInteractable_FX_SurvivorSavedFromDeathBed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheExecutioner.DeathBedInteractable.FX_DeathBedAppear
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void ADeathBedInteractable::FX_DeathBedAppear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.DeathBedInteractable.FX_DeathBedAppear");
		
		ADeathBedInteractable_FX_DeathBedAppear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheExecutioner.DeathBedInteractable.DeathBedDisappear
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ADeathBedInteractable::DeathBedDisappear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.DeathBedInteractable.DeathBedDisappear");
		
		ADeathBedInteractable_DeathBedDisappear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C06A70
	 * 		Name   -> Function TheExecutioner.DeathBedInteractable.CanRescueSurvivor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ADeathBedInteractable::CanRescueSurvivor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.DeathBedInteractable.CanRescueSurvivor");
		
		ADeathBedInteractable_CanRescueSurvivor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C067D0
	 * 		Name   -> Function TheExecutioner.DeathBedInteractable.ActivateDeathBed
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADeathBedInteractable::ActivateDeathBed(bool value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.DeathBedInteractable.ActivateDeathBed");
		
		ADeathBedInteractable_ActivateDeathBed_Params params {};
		params.value = value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ADeathBedInteractable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADeathBedInteractable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheExecutioner.DeathBedInteractable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDeathBedOutlineUpdateStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeathBedOutlineUpdateStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheExecutioner.DeathBedOutlineUpdateStrategy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C06B30
	 * 		Name   -> Function TheExecutioner.DeathBedRescueInteraction.GetRescuerSnapPosition
	 * 		Flags  -> (Final, Native, Private, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FVector UDeathBedRescueInteraction::GetRescuerSnapPosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.DeathBedRescueInteraction.GetRescuerSnapPosition");
		
		UDeathBedRescueInteraction_GetRescuerSnapPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDeathBedRescueInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeathBedRescueInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheExecutioner.DeathBedRescueInteraction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C070E0
	 * 		Name   -> Function TheExecutioner.Deathbound.OnRep_SurvivorsToReveal
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UDeathbound::OnRep_SurvivorsToReveal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.Deathbound.OnRep_SurvivorsToReveal");
		
		UDeathbound_OnRep_SurvivorsToReveal_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheExecutioner.Deathbound.MakeSurvivorScream
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ACamperPlayer*                               survivor                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDeathbound::MakeSurvivorScream(class ACamperPlayer* survivor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.Deathbound.MakeSurvivorScream");
		
		UDeathbound_MakeSurvivorScream_Params params {};
		params.survivor = survivor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C06B70
	 * 		Name   -> Function TheExecutioner.Deathbound.GetRevealLocationDuration
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UDeathbound::GetRevealLocationDuration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.Deathbound.GetRevealLocationDuration");
		
		UDeathbound_GetRevealLocationDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDeathbound.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeathbound::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheExecutioner.Deathbound");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C07650
	 * 		Name   -> Function TheExecutioner.ExecutionerTormentAttack.Server_TormentTryHitTargetNotInCoolDown
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UExecutionerTormentAttack::Server_TormentTryHitTargetNotInCoolDown(class ADBDPlayer* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.ExecutionerTormentAttack.Server_TormentTryHitTargetNotInCoolDown");
		
		UExecutionerTormentAttack_Server_TormentTryHitTargetNotInCoolDown_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C06DA0
	 * 		Name   -> Function TheExecutioner.ExecutionerTormentAttack.Multicast_TormentHitTarget
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               hitCosmeticOnly                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UExecutionerTormentAttack::Multicast_TormentHitTarget(class ADBDPlayer* Target, bool hitCosmeticOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.ExecutionerTormentAttack.Multicast_TormentHitTarget");
		
		UExecutionerTormentAttack_Multicast_TormentHitTarget_Params params {};
		params.Target = Target;
		params.hitCosmeticOnly = hitCosmeticOnly;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UExecutionerTormentAttack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UExecutionerTormentAttack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheExecutioner.ExecutionerTormentAttack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UExecutionerTormentAttackSuccessSubstate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UExecutionerTormentAttackSuccessSubstate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheExecutioner.ExecutionerTormentAttackSuccessSubstate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UExecutionerTormentAttackMissSubstate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UExecutionerTormentAttackMissSubstate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheExecutioner.ExecutionerTormentAttackMissSubstate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UExecutionerTormentAttackObstructSubstate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UExecutionerTormentAttackObstructSubstate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheExecutioner.ExecutionerTormentAttackObstructSubstate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UForcedPenance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UForcedPenance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheExecutioner.ForcedPenance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04B057E0
	 * 		Name   -> Function TheExecutioner.MobileTormentTrailRenderer.Multicast_RemoveInstance
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Public)
	 * Parameters:
	 * 		class ABaseTormentTrailPoint*                      TrailPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMobileTormentTrailRenderer::Multicast_RemoveInstance(class ABaseTormentTrailPoint* TrailPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.MobileTormentTrailRenderer.Multicast_RemoveInstance");
		
		AMobileTormentTrailRenderer_Multicast_RemoveInstance_Params params {};
		params.TrailPoint = TrailPoint;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C06C00
	 * 		Name   -> Function TheExecutioner.MobileTormentTrailRenderer.Multicast_AddInstance
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Public)
	 * Parameters:
	 * 		class ABaseTormentTrailPoint*                      TrailPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               isAttackTrailPoint                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMobileTormentTrailRenderer::Multicast_AddInstance(class ABaseTormentTrailPoint* TrailPoint, bool isAttackTrailPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.MobileTormentTrailRenderer.Multicast_AddInstance");
		
		AMobileTormentTrailRenderer_Multicast_AddInstance_Params params {};
		params.TrailPoint = TrailPoint;
		params.isAttackTrailPoint = isAttackTrailPoint;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AMobileTormentTrailRenderer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMobileTormentTrailRenderer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheExecutioner.MobileTormentTrailRenderer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C07590
	 * 		Name   -> Function TheExecutioner.RepressedAlliance.Server_OnActionInputPressed
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
	 * Parameters:
	 * 		class AGenerator*                                  Generator                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URepressedAlliance::Server_OnActionInputPressed(class AGenerator* Generator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.RepressedAlliance.Server_OnActionInputPressed");
		
		URepressedAlliance_Server_OnActionInputPressed_Params params {};
		params.Generator = Generator;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C07030
	 * 		Name   -> Function TheExecutioner.RepressedAlliance.OnRep_CurrentRepairInteractionWithAbility
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UInteractionDefinition*                      oldRepairInteraction                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URepressedAlliance::OnRep_CurrentRepairInteractionWithAbility(class UInteractionDefinition* oldRepairInteraction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.RepressedAlliance.OnRep_CurrentRepairInteractionWithAbility");
		
		URepressedAlliance_OnRep_CurrentRepairInteractionWithAbility_Params params {};
		params.oldRepairInteraction = oldRepairInteraction;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C06FA0
	 * 		Name   -> Function TheExecutioner.RepressedAlliance.OnRep_BlockedGenerator
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AGenerator*                                  oldGenerator                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URepressedAlliance::OnRep_BlockedGenerator(class AGenerator* oldGenerator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.RepressedAlliance.OnRep_BlockedGenerator");
		
		URepressedAlliance_OnRep_BlockedGenerator_Params params {};
		params.oldGenerator = oldGenerator;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction URepressedAlliance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URepressedAlliance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheExecutioner.RepressedAlliance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C0ACA0
	 * 		Name   -> Function TheExecutioner.SendToDeathBedInteraction.Multicast_SendCamperToDeathBed
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		class ADeathBedInteractable*                       deathBed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USendToDeathBedInteraction::Multicast_SendCamperToDeathBed(class ADeathBedInteractable* deathBed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.SendToDeathBedInteraction.Multicast_SendCamperToDeathBed");
		
		USendToDeathBedInteraction_Multicast_SendCamperToDeathBed_Params params {};
		params.deathBed = deathBed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C0AA20
	 * 		Name   -> Function TheExecutioner.SendToDeathBedInteraction.GetOwningSurvivor
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
	 */
	class ACamperPlayer* USendToDeathBedInteraction::GetOwningSurvivor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.SendToDeathBedInteraction.GetOwningSurvivor");
		
		USendToDeathBedInteraction_GetOwningSurvivor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheExecutioner.SendToDeathBedInteraction.FX_InteractionStart
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void USendToDeathBedInteraction::FX_InteractionStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.SendToDeathBedInteraction.FX_InteractionStart");
		
		USendToDeathBedInteraction_FX_InteractionStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheExecutioner.SendToDeathBedInteraction.FX_InteractionCancel
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void USendToDeathBedInteraction::FX_InteractionCancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.SendToDeathBedInteraction.FX_InteractionCancel");
		
		USendToDeathBedInteraction_FX_InteractionCancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USendToDeathBedInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USendToDeathBedInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheExecutioner.SendToDeathBedInteraction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheExecutioner.SoulGuard.Authority_ShowOnKOPreventedFX
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void USoulGuard::Authority_ShowOnKOPreventedFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.SoulGuard.Authority_ShowOnKOPreventedFX");
		
		USoulGuard_Authority_ShowOnKOPreventedFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C0A950
	 * 		Name   -> Function TheExecutioner.SoulGuard.Authority_OnSurvivorHealed
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FCamperHealResult                           healResult                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void USoulGuard::Authority_OnSurvivorHealed(const struct FCamperHealResult& healResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.SoulGuard.Authority_OnSurvivorHealed");
		
		USoulGuard_Authority_OnSurvivorHealed_Params params {};
		params.healResult = healResult;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USoulGuard.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoulGuard::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheExecutioner.SoulGuard");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTormentTrailDetectorComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTormentTrailDetectorComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheExecutioner.TormentTrailDetectorComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USurvivorTormentTrailDetector.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USurvivorTormentTrailDetector::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheExecutioner.SurvivorTormentTrailDetector");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheExecutioner.TheExecutionerAnimInstance.NoInputFeedbackCosmetic
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void UTheExecutionerAnimInstance::NoInputFeedbackCosmetic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.TheExecutionerAnimInstance.NoInputFeedbackCosmetic");
		
		UTheExecutionerAnimInstance_NoInputFeedbackCosmetic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTheExecutionerAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTheExecutionerAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheExecutioner.TheExecutionerAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04A26410
	 * 		Name   -> Function TheExecutioner.TheExecutionerCheatComponent.DBD_SetCanBeAgonyMoriedOnLocallyControlledPlayer
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		bool                                               value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      localPlayerId                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTheExecutionerCheatComponent::DBD_SetCanBeAgonyMoriedOnLocallyControlledPlayer(bool value, const class FString& localPlayerId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.TheExecutionerCheatComponent.DBD_SetCanBeAgonyMoriedOnLocallyControlledPlayer");
		
		UTheExecutionerCheatComponent_DBD_SetCanBeAgonyMoriedOnLocallyControlledPlayer_Params params {};
		params.value = value;
		params.localPlayerId = localPlayerId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04A26410
	 * 		Name   -> Function TheExecutioner.TheExecutionerCheatComponent.DBD_SetAgonyOnLocallyControlledPlayer
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		bool                                               value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      localPlayerId                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTheExecutionerCheatComponent::DBD_SetAgonyOnLocallyControlledPlayer(bool value, const class FString& localPlayerId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.TheExecutionerCheatComponent.DBD_SetAgonyOnLocallyControlledPlayer");
		
		UTheExecutionerCheatComponent_DBD_SetAgonyOnLocallyControlledPlayer_Params params {};
		params.value = value;
		params.localPlayerId = localPlayerId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0376CF00
	 * 		Name   -> Function TheExecutioner.TheExecutionerCheatComponent.DBD_LocalKillSurvivorInDeathBed
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UTheExecutionerCheatComponent::DBD_LocalKillSurvivorInDeathBed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.TheExecutionerCheatComponent.DBD_LocalKillSurvivorInDeathBed");
		
		UTheExecutionerCheatComponent_DBD_LocalKillSurvivorInDeathBed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D89D70
	 * 		Name   -> Function TheExecutioner.TheExecutionerCheatComponent.DBD_DisplayAllDeathBed
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		bool                                               value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTheExecutionerCheatComponent::DBD_DisplayAllDeathBed(bool value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.TheExecutionerCheatComponent.DBD_DisplayAllDeathBed");
		
		UTheExecutionerCheatComponent_DBD_DisplayAllDeathBed_Params params {};
		params.value = value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0376CF00
	 * 		Name   -> Function TheExecutioner.TheExecutionerCheatComponent.DBD_DeathBedPlayStruggleHitReaction
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UTheExecutionerCheatComponent::DBD_DeathBedPlayStruggleHitReaction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.TheExecutionerCheatComponent.DBD_DeathBedPlayStruggleHitReaction");
		
		UTheExecutionerCheatComponent_DBD_DeathBedPlayStruggleHitReaction_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTheExecutionerCheatComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTheExecutionerCheatComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheExecutioner.TheExecutionerCheatComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C0B350
	 * 		Name   -> Function TheExecutioner.TrailControllerBase.RemoveTormentTrailController
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void ATrailControllerBase::RemoveTormentTrailController()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.TrailControllerBase.RemoveTormentTrailController");
		
		ATrailControllerBase_RemoveTormentTrailController_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C0B230
	 * 		Name   -> Function TheExecutioner.TrailControllerBase.OnTrailPointDeath
	 * 		Flags  -> (Native, Protected)
	 * Parameters:
	 * 		class ABaseTormentTrailPoint*                      baseTrailPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATrailControllerBase::OnTrailPointDeath(class ABaseTormentTrailPoint* baseTrailPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.TrailControllerBase.OnTrailPointDeath");
		
		ATrailControllerBase_OnTrailPointDeath_Params params {};
		params.baseTrailPoint = baseTrailPoint;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C0AEF0
	 * 		Name   -> Function TheExecutioner.TrailControllerBase.OnAcquireChanged
	 * 		Flags  -> (Native, Protected)
	 * Parameters:
	 * 		bool                                               acquired                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATrailControllerBase::OnAcquireChanged(bool acquired)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.TrailControllerBase.OnAcquireChanged");
		
		ATrailControllerBase_OnAcquireChanged_Params params {};
		params.acquired = acquired;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheExecutioner.TrailControllerBase.ActivateCosmetic
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATrailControllerBase::ActivateCosmetic(bool value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.TrailControllerBase.ActivateCosmetic");
		
		ATrailControllerBase_ActivateCosmetic_Params params {};
		params.value = value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ATrailControllerBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATrailControllerBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheExecutioner.TrailControllerBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C0B2C0
	 * 		Name   -> Function TheExecutioner.TormentAttackTrailController.OnTrailPointRemovedCosmetic
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATormentAttackTrailController::OnTrailPointRemovedCosmetic(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.TormentAttackTrailController.OnTrailPointRemovedCosmetic");
		
		ATormentAttackTrailController_OnTrailPointRemovedCosmetic_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C0B120
	 * 		Name   -> Function TheExecutioner.TormentAttackTrailController.OnStartTrailTimerDone
	 * 		Flags  -> (Final, Native, Private)
	 */
	void ATormentAttackTrailController::OnStartTrailTimerDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.TormentAttackTrailController.OnStartTrailTimerDone");
		
		ATormentAttackTrailController_OnStartTrailTimerDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C0B050
	 * 		Name   -> Function TheExecutioner.TormentAttackTrailController.OnIntervalBetweenPointsTimerDone
	 * 		Flags  -> (Final, Native, Private)
	 */
	void ATormentAttackTrailController::OnIntervalBetweenPointsTimerDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.TormentAttackTrailController.OnIntervalBetweenPointsTimerDone");
		
		ATormentAttackTrailController_OnIntervalBetweenPointsTimerDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheExecutioner.TormentAttackTrailController.OnAttackTrailStartCosmetic
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void ATormentAttackTrailController::OnAttackTrailStartCosmetic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.TormentAttackTrailController.OnAttackTrailStartCosmetic");
		
		ATormentAttackTrailController_OnAttackTrailStartCosmetic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C0AD30
	 * 		Name   -> Function TheExecutioner.TormentAttackTrailController.Multicast_StartAttackTrail
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private, HasDefaults)
	 * Parameters:
	 * 		float                                              serverTimeSpawn                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector_NetQuantize10                       Location                                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Rotation                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ATormentAttackTrailController::Multicast_StartAttackTrail(float serverTimeSpawn, const struct FVector_NetQuantize10& Location, const struct FRotator& Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.TormentAttackTrailController.Multicast_StartAttackTrail");
		
		ATormentAttackTrailController_Multicast_StartAttackTrail_Params params {};
		params.serverTimeSpawn = serverTimeSpawn;
		params.Location = Location;
		params.Rotation = Rotation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C0AA00
	 * 		Name   -> Function TheExecutioner.TormentAttackTrailController.DisplayAttackTrailSpawnSign
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 */
	void ATormentAttackTrailController::DisplayAttackTrailSpawnSign()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.TormentAttackTrailController.DisplayAttackTrailSpawnSign");
		
		ATormentAttackTrailController_DisplayAttackTrailSpawnSign_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ATormentAttackTrailController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATormentAttackTrailController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheExecutioner.TormentAttackTrailController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheExecutioner.TormentAttackTrailPoint.DisplayTrailSplineMesh
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class USplineComponent*                            splinemesh                                                 (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            indexInTrail                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATormentAttackTrailPoint::DisplayTrailSplineMesh(class USplineComponent* splinemesh, int32_t indexInTrail)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.TormentAttackTrailPoint.DisplayTrailSplineMesh");
		
		ATormentAttackTrailPoint_DisplayTrailSplineMesh_Params params {};
		params.splinemesh = splinemesh;
		params.indexInTrail = indexInTrail;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ATormentAttackTrailPoint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATormentAttackTrailPoint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheExecutioner.TormentAttackTrailPoint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C0B3C0
	 * 		Name   -> Function TheExecutioner.TormentMode.Server_RequestMoreActorInAttackPool
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
	 */
	void ATormentMode::Server_RequestMoreActorInAttackPool()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.TormentMode.Server_RequestMoreActorInAttackPool");
		
		ATormentMode_Server_RequestMoreActorInAttackPool_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheExecutioner.TormentMode.OnTormentModeStop_Cosmetic
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void ATormentMode::OnTormentModeStop_Cosmetic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.TormentMode.OnTormentModeStop_Cosmetic");
		
		ATormentMode_OnTormentModeStop_Cosmetic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheExecutioner.TormentMode.OnTormentModeStart_Cosmetic
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void ATormentMode::OnTormentModeStart_Cosmetic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.TormentMode.OnTormentModeStart_Cosmetic");
		
		ATormentMode_OnTormentModeStart_Cosmetic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C0B140
	 * 		Name   -> Function TheExecutioner.TormentMode.OnTormentModeChargeEmpty
	 * 		Flags  -> (Final, Native, Private)
	 */
	void ATormentMode::OnTormentModeChargeEmpty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.TormentMode.OnTormentModeChargeEmpty");
		
		ATormentMode_OnTormentModeChargeEmpty_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C0AC70
	 * 		Name   -> Function TheExecutioner.TormentMode.IsInTormentMode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ATormentMode::IsInTormentMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.TormentMode.IsInTormentMode");
		
		ATormentMode_IsInTormentMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ATormentMode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATormentMode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheExecutioner.TormentMode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTormentModeCooldownInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTormentModeCooldownInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheExecutioner.TormentModeCooldownInteraction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheExecutioner.Tormentor.GetTormentTrailSpawnPoint
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintEvent)
	 */
	struct FVector UTormentor::GetTormentTrailSpawnPoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.Tormentor.GetTormentTrailSpawnPoint");
		
		UTormentor_GetTormentTrailSpawnPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheExecutioner.Tormentor.GetTormentTrailAttackSpawnPoint
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintEvent)
	 */
	struct FVector UTormentor::GetTormentTrailAttackSpawnPoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.Tormentor.GetTormentTrailAttackSpawnPoint");
		
		UTormentor_GetTormentTrailAttackSpawnPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTormentor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTormentor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheExecutioner.Tormentor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C0B4C0
	 * 		Name   -> Function TheExecutioner.TormentTrailController.Server_SpawnTormentTrailPoint
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer, HasDefaults, NetValidate)
	 * Parameters:
	 * 		class ATormentTrailPoint*                          TrailPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector_NetQuantize10                       Location                                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Rotation                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ATormentTrailController::Server_SpawnTormentTrailPoint(class ATormentTrailPoint* TrailPoint, const struct FVector_NetQuantize10& Location, const struct FRotator& Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.TormentTrailController.Server_SpawnTormentTrailPoint");
		
		ATormentTrailController_Server_SpawnTormentTrailPoint_Params params {};
		params.TrailPoint = TrailPoint;
		params.Location = Location;
		params.Rotation = Rotation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ATormentTrailController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATormentTrailController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheExecutioner.TormentTrailController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C0B370
	 * 		Name   -> Function TheExecutioner.TormentTrailPoint.Server_RemoveTrailPoint
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
	 */
	void ATormentTrailPoint::Server_RemoveTrailPoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.TormentTrailPoint.Server_RemoveTrailPoint");
		
		ATormentTrailPoint_Server_RemoveTrailPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheExecutioner.TormentTrailPoint.RefreshTrailPointCosmetic
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		ETrailPointRefreshReason                           trailPointRefreshReason                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATormentTrailPoint::RefreshTrailPointCosmetic(ETrailPointRefreshReason trailPointRefreshReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.TormentTrailPoint.RefreshTrailPointCosmetic");
		
		ATormentTrailPoint_RefreshTrailPointCosmetic_Params params {};
		params.trailPointRefreshReason = trailPointRefreshReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C0AE60
	 * 		Name   -> Function TheExecutioner.TormentTrailPoint.OnAcquireChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               acquired                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATormentTrailPoint::OnAcquireChanged(bool acquired)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.TormentTrailPoint.OnAcquireChanged");
		
		ATormentTrailPoint_OnAcquireChanged_Params params {};
		params.acquired = acquired;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x034F6A70
	 * 		Name   -> Function TheExecutioner.TormentTrailPoint.Multicast_TriggerTrailPointDisappear
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 */
	void ATormentTrailPoint::Multicast_TriggerTrailPointDisappear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.TormentTrailPoint.Multicast_TriggerTrailPointDisappear");
		
		ATormentTrailPoint_Multicast_TriggerTrailPointDisappear_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C0AA50
	 * 		Name   -> Function TheExecutioner.TormentTrailPoint.GetTrailLocationAndTangeant
	 * 		Flags  -> (Final, Native, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            indexInTrail                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USplineComponent*                            SplineComponent                                            (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     outStartLocation                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     outStartTangent                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     outEndLocation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     outEndTangent                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATormentTrailPoint::GetTrailLocationAndTangeant(int32_t indexInTrail, class USplineComponent* SplineComponent, struct FVector* outStartLocation, struct FVector* outStartTangent, struct FVector* outEndLocation, struct FVector* outEndTangent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.TormentTrailPoint.GetTrailLocationAndTangeant");
		
		ATormentTrailPoint_GetTrailLocationAndTangeant_Params params {};
		params.indexInTrail = indexInTrail;
		params.SplineComponent = SplineComponent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (outStartLocation != nullptr)
			*outStartLocation = params.outStartLocation;
		if (outStartTangent != nullptr)
			*outStartTangent = params.outStartTangent;
		if (outEndLocation != nullptr)
			*outEndLocation = params.outEndLocation;
		if (outEndTangent != nullptr)
			*outEndTangent = params.outEndTangent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheExecutioner.TormentTrailPoint.AddTrailCosmetic
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class USplineComponent*                            SplineComponent                                            (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      indexInTrail                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATormentTrailPoint::AddTrailCosmetic(class USplineComponent* SplineComponent, unsigned char indexInTrail)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.TormentTrailPoint.AddTrailCosmetic");
		
		ATormentTrailPoint_AddTrailCosmetic_Params params {};
		params.SplineComponent = SplineComponent;
		params.indexInTrail = indexInTrail;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheExecutioner.TormentTrailPoint.ActivateCosmetic
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATormentTrailPoint::ActivateCosmetic(bool value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.TormentTrailPoint.ActivateCosmetic");
		
		ATormentTrailPoint_ActivateCosmetic_Params params {};
		params.value = value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ATormentTrailPoint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATormentTrailPoint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheExecutioner.TormentTrailPoint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C0B160
	 * 		Name   -> Function TheExecutioner.TormentTrailPointCollectionComponent.OnTrailAcquireChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ATormentTrailPoint*                          TrailPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTormentTrailPointCollectionComponent::OnTrailAcquireChanged(class ATormentTrailPoint* TrailPoint, bool value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.TormentTrailPointCollectionComponent.OnTrailAcquireChanged");
		
		UTormentTrailPointCollectionComponent_OnTrailAcquireChanged_Params params {};
		params.TrailPoint = TrailPoint;
		params.value = value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTormentTrailPointCollectionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTormentTrailPointCollectionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheExecutioner.TormentTrailPointCollectionComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C0B6D0
	 * 		Name   -> Function TheExecutioner.TormentTrailSpawnerComponent.Sever_SpawnTrailController
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer, HasDefaults, NetValidate)
	 * Parameters:
	 * 		class ATormentTrailController*                     trailController                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector_NetQuantize10                       Location                                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Rotation                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UTormentTrailSpawnerComponent::Sever_SpawnTrailController(class ATormentTrailController* trailController, const struct FVector_NetQuantize10& Location, const struct FRotator& Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.TormentTrailSpawnerComponent.Sever_SpawnTrailController");
		
		UTormentTrailSpawnerComponent_Sever_SpawnTrailController_Params params {};
		params.trailController = trailController;
		params.Location = Location;
		params.Rotation = Rotation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C0B640
	 * 		Name   -> Function TheExecutioner.TormentTrailSpawnerComponent.Server_StopTrailController
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer)
	 * Parameters:
	 * 		class ATormentTrailController*                     trailController                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTormentTrailSpawnerComponent::Server_StopTrailController(class ATormentTrailController* trailController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.TormentTrailSpawnerComponent.Server_StopTrailController");
		
		UTormentTrailSpawnerComponent_Server_StopTrailController_Params params {};
		params.trailController = trailController;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C0B410
	 * 		Name   -> Function TheExecutioner.TormentTrailSpawnerComponent.Server_RequestMoreActorInPool
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
	 * Parameters:
	 * 		ETrailType                                         trailType                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTormentTrailSpawnerComponent::Server_RequestMoreActorInPool(ETrailType trailType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.TormentTrailSpawnerComponent.Server_RequestMoreActorInPool");
		
		UTormentTrailSpawnerComponent_Server_RequestMoreActorInPool_Params params {};
		params.trailType = trailType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C0B070
	 * 		Name   -> Function TheExecutioner.TormentTrailSpawnerComponent.OnLevelReadyToPlay
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UTormentTrailSpawnerComponent::OnLevelReadyToPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.TormentTrailSpawnerComponent.OnLevelReadyToPlay");
		
		UTormentTrailSpawnerComponent_OnLevelReadyToPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C0AF80
	 * 		Name   -> Function TheExecutioner.TormentTrailSpawnerComponent.OnInRangeChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               InRange                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Actor                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTormentTrailSpawnerComponent::OnInRangeChanged(bool InRange, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.TormentTrailSpawnerComponent.OnInRangeChanged");
		
		UTormentTrailSpawnerComponent_OnInRangeChanged_Params params {};
		params.InRange = InRange;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTormentTrailSpawnerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTormentTrailSpawnerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheExecutioner.TormentTrailSpawnerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTrailEffectLastingTimeBaseAddon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTrailEffectLastingTimeBaseAddon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheExecutioner.TrailEffectLastingTimeBaseAddon");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C0B090
	 * 		Name   -> Function TheExecutioner.TrailOfTorment.OnRep_HighlightGenerator
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AGenerator*                                  _oldHighlightedGenerator                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTrailOfTorment::OnRep_HighlightGenerator(class AGenerator* _oldHighlightedGenerator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheExecutioner.TrailOfTorment.OnRep_HighlightGenerator");
		
		UTrailOfTorment_OnRep_HighlightGenerator_Params params {};
		params._oldHighlightedGenerator = _oldHighlightedGenerator;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTrailOfTorment.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTrailOfTorment::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheExecutioner.TrailOfTorment");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTrailPointOutlineUpdateStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTrailPointOutlineUpdateStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheExecutioner.TrailPointOutlineUpdateStrategy");
		return ptr;
	}

}


