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
	 * 		Name   -> PredefindFunction UTimedStatusEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTimedStatusEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.TimedStatusEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAbilityStealthUndetectableEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbilityStealthUndetectableEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.AbilityStealthUndetectableEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAdjustableCooldownStatusEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAdjustableCooldownStatusEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.AdjustableCooldownStatusEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UExhaustedEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UExhaustedEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.ExhaustedEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0429DD30
	 * 		Name   -> Function DBDCompetence.ActivatableExhaustedEffect.Authority_Start
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Duration                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UActivatableExhaustedEffect::Authority_Start(float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.ActivatableExhaustedEffect.Authority_Start");
		
		UActivatableExhaustedEffect_Authority_Start_Params params {};
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0429D6F0
	 * 		Name   -> Function DBDCompetence.ActivatableExhaustedEffect.Authority_OnHookCamper
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                GameEvent                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UActivatableExhaustedEffect::Authority_OnHookCamper(const struct FGameplayTag& GameEvent, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.ActivatableExhaustedEffect.Authority_OnHookCamper");
		
		UActivatableExhaustedEffect_Authority_OnHookCamper_Params params {};
		params.GameEvent = GameEvent;
		params.GameEventData = GameEventData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UActivatableExhaustedEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActivatableExhaustedEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.ActivatableExhaustedEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UActivateOnEventTimedStatusEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActivateOnEventTimedStatusEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.ActivateOnEventTimedStatusEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDCompetence.Alert.OnPerkActivate_Cosmetic
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void UAlert::OnPerkActivate_Cosmetic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.Alert.OnPerkActivate_Cosmetic");
		
		UAlert_OnPerkActivate_Cosmetic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAlert.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAlert::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.Alert");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAlertKillerRevealEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAlertKillerRevealEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.AlertKillerRevealEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAllHexTotemsAreActive.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAllHexTotemsAreActive::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.AllHexTotemsAreActive");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0429E040
	 * 		Name   -> Function DBDCompetence.AnyActorPairQueryRangeIsTrue.OnInRangeChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               InRange                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnyActorPairQueryRangeIsTrue::OnInRangeChanged(bool InRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.AnyActorPairQueryRangeIsTrue.OnInRangeChanged");
		
		UAnyActorPairQueryRangeIsTrue_OnInRangeChanged_Params params {};
		params.InRange = InRange;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAnyActorPairQueryRangeIsTrue.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnyActorPairQueryRangeIsTrue::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.AnyActorPairQueryRangeIsTrue");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0429D960
	 * 		Name   -> Function DBDCompetence.AnyMeansNecessary.Authority_OnPalletPullUpStarted
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                GameplayTag                                                (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UAnyMeansNecessary::Authority_OnPalletPullUpStarted(const struct FGameplayTag& GameplayTag, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.AnyMeansNecessary.Authority_OnPalletPullUpStarted");
		
		UAnyMeansNecessary_Authority_OnPalletPullUpStarted_Params params {};
		params.GameplayTag = GameplayTag;
		params.GameEventData = GameEventData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0429DA70
	 * 		Name   -> Function DBDCompetence.AnyMeansNecessary.Authority_OnPalletPulledUp
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                GameplayTag                                                (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UAnyMeansNecessary::Authority_OnPalletPulledUp(const struct FGameplayTag& GameplayTag, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.AnyMeansNecessary.Authority_OnPalletPulledUp");
		
		UAnyMeansNecessary_Authority_OnPalletPulledUp_Params params {};
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
	 * 		Name   -> PredefindFunction UAnyMeansNecessary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnyMeansNecessary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.AnyMeansNecessary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0429E6A0
	 * 		Name   -> Function DBDCompetence.AnySurvivorHasObjectState.OnSurvivorRemoved
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class ACamperPlayer*                               survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnySurvivorHasObjectState::OnSurvivorRemoved(class ACamperPlayer* survivor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.AnySurvivorHasObjectState.OnSurvivorRemoved");
		
		UAnySurvivorHasObjectState_OnSurvivorRemoved_Params params {};
		params.survivor = survivor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0429E610
	 * 		Name   -> Function DBDCompetence.AnySurvivorHasObjectState.OnSurvivorAdded
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class ACamperPlayer*                               survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnySurvivorHasObjectState::OnSurvivorAdded(class ACamperPlayer* survivor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.AnySurvivorHasObjectState.OnSurvivorAdded");
		
		UAnySurvivorHasObjectState_OnSurvivorAdded_Params params {};
		params.survivor = survivor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAnySurvivorHasObjectState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnySurvivorHasObjectState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.AnySurvivorHasObjectState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBabysitter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBabysitter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.Babysitter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBabysitterEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBabysitterEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.BabysitterEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBaseIsPerkUsableCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseIsPerkUsableCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.BaseIsPerkUsableCondition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0429E970
	 * 		Name   -> Function DBDCompetence.BaseIsPlayerPerformingInteraction.UpdateIsTrue
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class UInteractionDefinition*                      InteractionDefinition                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBaseIsPlayerPerformingInteraction::UpdateIsTrue(class UInteractionDefinition* InteractionDefinition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.BaseIsPlayerPerformingInteraction.UpdateIsTrue");
		
		UBaseIsPlayerPerformingInteraction_UpdateIsTrue_Params params {};
		params.InteractionDefinition = InteractionDefinition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0429E7A0
	 * 		Name   -> Function DBDCompetence.BaseIsPlayerPerformingInteraction.SetInteractionSemantics
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FGameplayTagContainer                       interactionSemantics                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UBaseIsPlayerPerformingInteraction::SetInteractionSemantics(const struct FGameplayTagContainer& interactionSemantics)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.BaseIsPlayerPerformingInteraction.SetInteractionSemantics");
		
		UBaseIsPlayerPerformingInteraction_SetInteractionSemantics_Params params {};
		params.interactionSemantics = interactionSemantics;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBaseIsPlayerPerformingInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseIsPlayerPerformingInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.BaseIsPlayerPerformingInteraction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0429E860
	 * 		Name   -> Function DBDCompetence.BaseLingeringStatusEffect.SetLingerDuration
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		float                                              lingerDuration                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBaseLingeringStatusEffect::SetLingerDuration(float lingerDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.BaseLingeringStatusEffect.SetLingerDuration");
		
		UBaseLingeringStatusEffect_SetLingerDuration_Params params {};
		params.lingerDuration = lingerDuration;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0429D600
	 * 		Name   -> Function DBDCompetence.BaseLingeringStatusEffect.Authority_DeactivateEffect
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UBaseLingeringStatusEffect::Authority_DeactivateEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.BaseLingeringStatusEffect.Authority_DeactivateEffect");
		
		UBaseLingeringStatusEffect_Authority_DeactivateEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0429D5E0
	 * 		Name   -> Function DBDCompetence.BaseLingeringStatusEffect.Authority_ActivateEffect
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UBaseLingeringStatusEffect::Authority_ActivateEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.BaseLingeringStatusEffect.Authority_ActivateEffect");
		
		UBaseLingeringStatusEffect_Authority_ActivateEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBaseLingeringStatusEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseLingeringStatusEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.BaseLingeringStatusEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0429E500
	 * 		Name   -> Function DBDCompetence.BetterTogether.OnStartedGeneratorRepair
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                GameplayTag                                                (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UBetterTogether::OnStartedGeneratorRepair(const struct FGameplayTag& GameplayTag, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.BetterTogether.OnStartedGeneratorRepair");
		
		UBetterTogether_OnStartedGeneratorRepair_Params params {};
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
	 * 		Name   -> PredefindFunction UBetterTogether.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBetterTogether::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.BetterTogether");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDCompetence.BlessedStatusEffect.OnExitBoonRange
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintCallable, BlueprintEvent)
	 */
	void UBlessedStatusEffect::OnExitBoonRange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.BlessedStatusEffect.OnExitBoonRange");
		
		UBlessedStatusEffect_OnExitBoonRange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDCompetence.BlessedStatusEffect.OnEnterBoonRange
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintCallable, BlueprintEvent)
	 */
	void UBlessedStatusEffect::OnEnterBoonRange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.BlessedStatusEffect.OnEnterBoonRange");
		
		UBlessedStatusEffect_OnEnterBoonRange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0429DED0
	 * 		Name   -> Function DBDCompetence.BlessedStatusEffect.GetBoundTotem
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class ATotem* UBlessedStatusEffect::GetBoundTotem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.BlessedStatusEffect.GetBoundTotem");
		
		UBlessedStatusEffect_GetBoundTotem_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0429DEA0
	 * 		Name   -> Function DBDCompetence.BlessedStatusEffect.GetBoonTotemBlessingRange
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	float UBlessedStatusEffect::GetBoonTotemBlessingRange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.BlessedStatusEffect.GetBoonTotemBlessingRange");
		
		UBlessedStatusEffect_GetBoonTotemBlessingRange_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0429DCA0
	 * 		Name   -> Function DBDCompetence.BlessedStatusEffect.Authority_OnSurvivorRemovedFromGame
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ACamperPlayer*                               survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBlessedStatusEffect::Authority_OnSurvivorRemovedFromGame(class ACamperPlayer* survivor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.BlessedStatusEffect.Authority_OnSurvivorRemovedFromGame");
		
		UBlessedStatusEffect_Authority_OnSurvivorRemovedFromGame_Params params {};
		params.survivor = survivor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBlessedStatusEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlessedStatusEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.BlessedStatusEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBloodEcho.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBloodEcho::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.BloodEcho");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBoonDestroyer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBoonDestroyer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.BoonDestroyer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0429DC10
	 * 		Name   -> Function DBDCompetence.BoonPerk.Authority_OnSurvivorRemoved
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ACamperPlayer*                               survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBoonPerk::Authority_OnSurvivorRemoved(class ACamperPlayer* survivor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.BoonPerk.Authority_OnSurvivorRemoved");
		
		UBoonPerk_Authority_OnSurvivorRemoved_Params params {};
		params.survivor = survivor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBoonPerk.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBoonPerk::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.BoonPerk");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBoonTotemIsActive.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBoonTotemIsActive::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.BoonTotemIsActive");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0429E470
	 * 		Name   -> Function DBDCompetence.Breakout.OnSlasherSet
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ASlasherPlayer*                              Slasher                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBreakout::OnSlasherSet(class ASlasherPlayer* Slasher)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.Breakout.OnSlasherSet");
		
		UBreakout_OnSlasherSet_Params params {};
		params.Slasher = Slasher;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0429E250
	 * 		Name   -> Function DBDCompetence.Breakout.OnRep_IsPerkActive
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UBreakout::OnRep_IsPerkActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.Breakout.OnRep_IsPerkActive");
		
		UBreakout_OnRep_IsPerkActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0429DB80
	 * 		Name   -> Function DBDCompetence.Breakout.Authority_OnRangeChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               InRange                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBreakout::Authority_OnRangeChanged(bool InRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.Breakout.Authority_OnRangeChanged");
		
		UBreakout_Authority_OnRangeChanged_Params params {};
		params.InRange = InRange;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0429D640
	 * 		Name   -> Function DBDCompetence.Breakout.Authority_ImposeWiggleStatusEffect
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ACamperPlayer*                               survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBreakout::Authority_ImposeWiggleStatusEffect(class ACamperPlayer* survivor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.Breakout.Authority_ImposeWiggleStatusEffect");
		
		UBreakout_Authority_ImposeWiggleStatusEffect_Params params {};
		params.survivor = survivor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBreakout.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBreakout::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.Breakout");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBuckleUp.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBuckleUp::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.BuckleUp");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0429D620
	 * 		Name   -> Function DBDCompetence.Camaraderie.Authority_EnablePerk
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UCamaraderie::Authority_EnablePerk()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.Camaraderie.Authority_EnablePerk");
		
		UCamaraderie_Authority_EnablePerk_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCamaraderie.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCamaraderie::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.Camaraderie");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCollectableOwnerSubjectProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCollectableOwnerSubjectProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.CollectableOwnerSubjectProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0429E750
	 * 		Name   -> Function DBDCompetence.CorruptIntervention.Server_ActivatePerk
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
	 */
	void UCorruptIntervention::Server_ActivatePerk()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.CorruptIntervention.Server_ActivatePerk");
		
		UCorruptIntervention_Server_ActivatePerk_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0429E210
	 * 		Name   -> Function DBDCompetence.CorruptIntervention.OnRep_BlockedGenerators
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UCorruptIntervention::OnRep_BlockedGenerators()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.CorruptIntervention.OnRep_BlockedGenerators");
		
		UCorruptIntervention_OnRep_BlockedGenerators_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0429E020
	 * 		Name   -> Function DBDCompetence.CorruptIntervention.Local_OnIntroCompleted
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UCorruptIntervention::Local_OnIntroCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.CorruptIntervention.Local_OnIntroCompleted");
		
		UCorruptIntervention_Local_OnIntroCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCorruptIntervention.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCorruptIntervention::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.CorruptIntervention");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCruelConfinement.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCruelConfinement::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.CruelConfinement");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDarkDevotion.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDarkDevotion::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.DarkDevotion");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDarkSense.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDarkSense::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.DarkSense");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0429DF00
	 * 		Name   -> Function DBDCompetence.DBDConditionFactory.IsPlayerPerformingInteraction
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FGameplayTagContainer                       interactionSemantics                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UIsPlayerPerformingInteraction* UDBDConditionFactory::STATIC_IsPlayerPerformingInteraction(const struct FGameplayTagContainer& interactionSemantics)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.DBDConditionFactory.IsPlayerPerformingInteraction");
		
		UDBDConditionFactory_IsPlayerPerformingInteraction_Params params {};
		params.interactionSemantics = interactionSemantics;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0429DDB0
	 * 		Name   -> Function DBDCompetence.DBDConditionFactory.DoesPerkHaveToken
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UPerk*                                       Perk                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDoesPerkHaveToken* UDBDConditionFactory::STATIC_DoesPerkHaveToken(class UPerk* Perk)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.DBDConditionFactory.DoesPerkHaveToken");
		
		UDBDConditionFactory_DoesPerkHaveToken_Params params {};
		params.Perk = Perk;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDBDConditionFactory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDBDConditionFactory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.DBDConditionFactory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDeadMansSwitchEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeadMansSwitchEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.DeadMansSwitchEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDeceptionEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeceptionEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.DeceptionEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0429E730
	 * 		Name   -> Function DBDCompetence.DecisiveStrike.OnUnhookedTimerEnded
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UDecisiveStrike::OnUnhookedTimerEnded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.DecisiveStrike.OnUnhookedTimerEnded");
		
		UDecisiveStrike_OnUnhookedTimerEnded_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0429E2B0
	 * 		Name   -> Function DBDCompetence.DecisiveStrike.OnSkillCheck
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               hadInput                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               success                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Bonus                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESkillCheckCustomType                              Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDecisiveStrike::OnSkillCheck(bool hadInput, bool success, bool Bonus, ESkillCheckCustomType Type, class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.DecisiveStrike.OnSkillCheck");
		
		UDecisiveStrike_OnSkillCheck_Params params {};
		params.hadInput = hadInput;
		params.success = success;
		params.Bonus = Bonus;
		params.Type = Type;
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0429E230
	 * 		Name   -> Function DBDCompetence.DecisiveStrike.OnRep_HasBeenAttempted
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UDecisiveStrike::OnRep_HasBeenAttempted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.DecisiveStrike.OnRep_HasBeenAttempted");
		
		UDecisiveStrike_OnRep_HasBeenAttempted_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0429E160
	 * 		Name   -> Function DBDCompetence.DecisiveStrike.OnPickUpEnded
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ADBDPlayer*                                  picker                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDecisiveStrike::OnPickUpEnded(class ADBDPlayer* picker)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.DecisiveStrike.OnPickUpEnded");
		
		UDecisiveStrike_OnPickUpEnded_Params params {};
		params.picker = picker;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0429E0D0
	 * 		Name   -> Function DBDCompetence.DecisiveStrike.OnOwnerPickedUp
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ADBDPlayer*                                  picker                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDecisiveStrike::OnOwnerPickedUp(class ADBDPlayer* picker)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.DecisiveStrike.OnOwnerPickedUp");
		
		UDecisiveStrike_OnOwnerPickedUp_Params params {};
		params.picker = picker;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDecisiveStrike.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDecisiveStrike::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.DecisiveStrike");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0429D8D0
	 * 		Name   -> Function DBDCompetence.DelayedHealEffect.Authority_OnOwningCamperPickedUp
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ADBDPlayer*                                  picker                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDelayedHealEffect::Authority_OnOwningCamperPickedUp(class ADBDPlayer* picker)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.DelayedHealEffect.Authority_OnOwningCamperPickedUp");
		
		UDelayedHealEffect_Authority_OnOwningCamperPickedUp_Params params {};
		params.picker = picker;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0429D800
	 * 		Name   -> Function DBDCompetence.DelayedHealEffect.Authority_OnOwningCamperHealthChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		ECamperDamageState                                 before                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECamperDamageState                                 after                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDelayedHealEffect::Authority_OnOwningCamperHealthChanged(ECamperDamageState before, ECamperDamageState after)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.DelayedHealEffect.Authority_OnOwningCamperHealthChanged");
		
		UDelayedHealEffect_Authority_OnOwningCamperHealthChanged_Params params {};
		params.before = before;
		params.after = after;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0429D6D0
	 * 		Name   -> Function DBDCompetence.DelayedHealEffect.Authority_OnActivationTimerComplete
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UDelayedHealEffect::Authority_OnActivationTimerComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.DelayedHealEffect.Authority_OnActivationTimerComplete");
		
		UDelayedHealEffect_Authority_OnActivationTimerComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDelayedHealEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDelayedHealEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.DelayedHealEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDidGameEventOccurred.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDidGameEventOccurred::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.DidGameEventOccurred");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0429E1F0
	 * 		Name   -> Function DBDCompetence.Distortion.OnRep_AuraBlockIsActive
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UDistortion::OnRep_AuraBlockIsActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.Distortion.OnRep_AuraBlockIsActive");
		
		UDistortion_OnRep_AuraBlockIsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0429D5B0
	 * 		Name   -> Function DBDCompetence.Distortion.AuraBlockCanBeActive
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UDistortion::AuraBlockCanBeActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.Distortion.AuraBlockCanBeActive");
		
		UDistortion_AuraBlockCanBeActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDistortion.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDistortion::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.Distortion");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0429E8E0
	 * 		Name   -> Function DBDCompetence.DoesPerkHaveToken.SetPerk
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UPerk*                                       Perk                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDoesPerkHaveToken::SetPerk(class UPerk* Perk)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.DoesPerkHaveToken.SetPerk");
		
		UDoesPerkHaveToken_SetPerk_Params params {};
		params.Perk = Perk;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0429E270
	 * 		Name   -> Function DBDCompetence.DoesPerkHaveToken.OnRep_Perk
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UDoesPerkHaveToken::OnRep_Perk()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.DoesPerkHaveToken.OnRep_Perk");
		
		UDoesPerkHaveToken_OnRep_Perk_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDoesPerkHaveToken.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDoesPerkHaveToken::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.DoesPerkHaveToken");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0429E290
	 * 		Name   -> Function DBDCompetence.DownedByBasicAttack.OnRep_ReplicatedIsTrue
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UDownedByBasicAttack::OnRep_ReplicatedIsTrue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.DownedByBasicAttack.OnRep_ReplicatedIsTrue");
		
		UDownedByBasicAttack_OnRep_ReplicatedIsTrue_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDownedByBasicAttack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDownedByBasicAttack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.DownedByBasicAttack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042A3F20
	 * 		Name   -> Function DBDCompetence.DyingLight.OnObsessionChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ACamperPlayer*                               newObsession                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ACamperPlayer*                               previousObsession                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDyingLight::OnObsessionChanged(class ACamperPlayer* newObsession, class ACamperPlayer* previousObsession)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.DyingLight.OnObsessionChanged");
		
		UDyingLight_OnObsessionChanged_Params params {};
		params.newObsession = newObsession;
		params.previousObsession = previousObsession;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDyingLight.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDyingLight::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.DyingLight");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UEnduranceHighlightEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnduranceHighlightEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.EnduranceHighlightEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UExposedEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UExposedEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.ExposedEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFixated.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFixated::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.Fixated");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042A35A0
	 * 		Name   -> Function DBDCompetence.FlipFlop.Authority_OnPickedUp
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ADBDPlayer*                                  picker                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlipFlop::Authority_OnPickedUp(class ADBDPlayer* picker)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.FlipFlop.Authority_OnPickedUp");
		
		UFlipFlop_Authority_OnPickedUp_Params params {};
		params.picker = picker;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFlipFlop.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFlipFlop::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.FlipFlop");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFurtiveChase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFurtiveChase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.FurtiveChase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042A4A50
	 * 		Name   -> Function DBDCompetence.GateBlockerEffect.RemoveCantEscapeFlag
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UGateBlockerEffect::RemoveCantEscapeFlag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.GateBlockerEffect.RemoveCantEscapeFlag");
		
		UGateBlockerEffect_RemoveCantEscapeFlag_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGateBlockerEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGateBlockerEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.GateBlockerEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHasFlag.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHasFlag::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.HasFlag");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042A4440
	 * 		Name   -> Function DBDCompetence.HasPlayerReachedWiggleFillPercentCondition.OnRep_IsWigglePercentReached
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UHasPlayerReachedWiggleFillPercentCondition::OnRep_IsWigglePercentReached()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.HasPlayerReachedWiggleFillPercentCondition.OnRep_IsWigglePercentReached");
		
		UHasPlayerReachedWiggleFillPercentCondition_OnRep_IsWigglePercentReached_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042A3490
	 * 		Name   -> Function DBDCompetence.HasPlayerReachedWiggleFillPercentCondition.Authority_OnOwnerWiggleChargePercentChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UChargeableComponent*                        ChargeableComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PercentCompletionChange                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TotalPercentComplete                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHasPlayerReachedWiggleFillPercentCondition::Authority_OnOwnerWiggleChargePercentChanged(class UChargeableComponent* ChargeableComponent, float PercentCompletionChange, float TotalPercentComplete)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.HasPlayerReachedWiggleFillPercentCondition.Authority_OnOwnerWiggleChargePercentChanged");
		
		UHasPlayerReachedWiggleFillPercentCondition_Authority_OnOwnerWiggleChargePercentChanged_Params params {};
		params.ChargeableComponent = ChargeableComponent;
		params.PercentCompletionChange = PercentCompletionChange;
		params.TotalPercentComplete = TotalPercentComplete;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHasPlayerReachedWiggleFillPercentCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHasPlayerReachedWiggleFillPercentCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.HasPlayerReachedWiggleFillPercentCondition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042A4210
	 * 		Name   -> Function DBDCompetence.HeadOn.OnPawnOverlapExit
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHeadOn::OnPawnOverlapExit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.HeadOn.OnPawnOverlapExit");
		
		UHeadOn_OnPawnOverlapExit_Params params {};
		params.HitComponent = HitComponent;
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
	 * 		RVA    -> 0x042A3FF0
	 * 		Name   -> Function DBDCompetence.HeadOn.OnPawnOverlapEnter
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UHeadOn::OnPawnOverlapEnter(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.HeadOn.OnPawnOverlapEnter");
		
		UHeadOn_OnPawnOverlapEnter_Params params {};
		params.HitComponent = HitComponent;
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
	 * 		RVA    -> 0x042A3C20
	 * 		Name   -> Function DBDCompetence.HeadOn.OnHeadOnAnimationComplete
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UHeadOn::OnHeadOnAnimationComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.HeadOn.OnHeadOnAnimationComplete");
		
		UHeadOn_OnHeadOnAnimationComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042A3B50
	 * 		Name   -> Function DBDCompetence.HeadOn.Multicast_StunPlayer
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		class UObject*                                     stunnableInterfaceUObject                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ADBDPlayer*                                  stunner                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHeadOn::Multicast_StunPlayer(class UObject* stunnableInterfaceUObject, class ADBDPlayer* stunner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.HeadOn.Multicast_StunPlayer");
		
		UHeadOn_Multicast_StunPlayer_Params params {};
		params.stunnableInterfaceUObject = stunnableInterfaceUObject;
		params.stunner = stunner;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042A3860
	 * 		Name   -> Function DBDCompetence.HeadOn.CanApplyHeadOnInteraction
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UHeadOn::CanApplyHeadOnInteraction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.HeadOn.CanApplyHeadOnInteraction");
		
		UHeadOn_CanApplyHeadOnInteraction_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042A3470
	 * 		Name   -> Function DBDCompetence.HeadOn.Authority_ActivatePerk
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 */
	void UHeadOn::Authority_ActivatePerk()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.HeadOn.Authority_ActivatePerk");
		
		UHeadOn_Authority_ActivatePerk_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHeadOn.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHeadOn::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.HeadOn");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042A4820
	 * 		Name   -> Function DBDCompetence.HemorrhageStatusEffect.OnStoppedHealing
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Instigator                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ADBDPlayer*                                  Target                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHemorrhageStatusEffect::OnStoppedHealing(class ADBDPlayer* Instigator, class ADBDPlayer* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.HemorrhageStatusEffect.OnStoppedHealing");
		
		UHemorrhageStatusEffect_OnStoppedHealing_Params params {};
		params.Instigator = Instigator;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042A3630
	 * 		Name   -> Function DBDCompetence.HemorrhageStatusEffect.Authority_OnSurvivorHealed
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FCamperHealResult                           healResult                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UHemorrhageStatusEffect::Authority_OnSurvivorHealed(const struct FCamperHealResult& healResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.HemorrhageStatusEffect.Authority_OnSurvivorHealed");
		
		UHemorrhageStatusEffect_Authority_OnSurvivorHealed_Params params {};
		params.healResult = healResult;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHemorrhageStatusEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHemorrhageStatusEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.HemorrhageStatusEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042A4C50
	 * 		Name   -> Function DBDCompetence.HexPerk.UpdateCursedStatusViewOnLocalPlayer
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UHexPerk::UpdateCursedStatusViewOnLocalPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.HexPerk.UpdateCursedStatusViewOnLocalPlayer");
		
		UHexPerk_UpdateCursedStatusViewOnLocalPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042A48F0
	 * 		Name   -> Function DBDCompetence.HexPerk.ReceiveGameplayEvent
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EDBDScoreTypes                                     gameplayEventType                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Instigator                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHexPerk::ReceiveGameplayEvent(EDBDScoreTypes gameplayEventType, float amount, class AActor* Instigator, class AActor* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.HexPerk.ReceiveGameplayEvent");
		
		UHexPerk_ReceiveGameplayEvent_Params params {};
		params.gameplayEventType = gameplayEventType;
		params.amount = amount;
		params.Instigator = Instigator;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042A44A0
	 * 		Name   -> Function DBDCompetence.HexPerk.OnRep_PlayersWhoKnowCurse
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		TArray<class ADBDPlayer*>                          oldPlayersWhoKnowCurse                                     (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UHexPerk::OnRep_PlayersWhoKnowCurse(TArray<class ADBDPlayer*> oldPlayersWhoKnowCurse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.HexPerk.OnRep_PlayersWhoKnowCurse");
		
		UHexPerk_OnRep_PlayersWhoKnowCurse_Params params {};
		params.oldPlayersWhoKnowCurse = oldPlayersWhoKnowCurse;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042A3C40
	 * 		Name   -> Function DBDCompetence.HexPerk.OnHexPerkGameplayEvent
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		EDBDScoreTypes                                     gameplayEventType                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Instigator                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHexPerk::OnHexPerkGameplayEvent(EDBDScoreTypes gameplayEventType, float amount, class AActor* Instigator, class AActor* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.HexPerk.OnHexPerkGameplayEvent");
		
		UHexPerk_OnHexPerkGameplayEvent_Params params {};
		params.gameplayEventType = gameplayEventType;
		params.amount = amount;
		params.Instigator = Instigator;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042A3AB0
	 * 		Name   -> Function DBDCompetence.HexPerk.IsCurseRevealedToPlayer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UHexPerk::IsCurseRevealedToPlayer(class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.HexPerk.IsCurseRevealedToPlayer");
		
		UHexPerk_IsCurseRevealedToPlayer_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042A3770
	 * 		Name   -> Function DBDCompetence.HexPerk.Authority_SetCurseRevealedToPlayer
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               revealed                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHexPerk::Authority_SetCurseRevealedToPlayer(class ADBDPlayer* Player, bool revealed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.HexPerk.Authority_SetCurseRevealedToPlayer");
		
		UHexPerk_Authority_SetCurseRevealedToPlayer_Params params {};
		params.Player = Player;
		params.revealed = revealed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042A36E0
	 * 		Name   -> Function DBDCompetence.HexPerk.Authority_RevealCurseToAllSurvivors
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               revealed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHexPerk::Authority_RevealCurseToAllSurvivors(bool revealed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.HexPerk.Authority_RevealCurseToAllSurvivors");
		
		UHexPerk_Authority_RevealCurseToAllSurvivors_Params params {};
		params.revealed = revealed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDCompetence.HexPerk.Authority_Reactivate_BP
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ATotem*                                      Totem                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHexPerk::Authority_Reactivate_BP(class ATotem* Totem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.HexPerk.Authority_Reactivate_BP");
		
		UHexPerk_Authority_Reactivate_BP_Params params {};
		params.Totem = Totem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHexPerk.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHexPerk::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.HexPerk");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHexHauntedGround.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHexHauntedGround::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.HexHauntedGround");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042A3840
	 * 		Name   -> Function DBDCompetence.HexRuin.Authority_SetupCurseOnAllGenerators
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UHexRuin::Authority_SetupCurseOnAllGenerators()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.HexRuin.Authority_SetupCurseOnAllGenerators");
		
		UHexRuin_Authority_SetupCurseOnAllGenerators_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHexRuin.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHexRuin::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.HexRuin");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042A4BC0
	 * 		Name   -> Function DBDCompetence.HighestLevelAndClosestEffectCondition.SetCurrentEffectLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Level                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHighestLevelAndClosestEffectCondition::SetCurrentEffectLevel(int32_t Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.HighestLevelAndClosestEffectCondition.SetCurrentEffectLevel");
		
		UHighestLevelAndClosestEffectCondition_SetCurrentEffectLevel_Params params {};
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042A3960
	 * 		Name   -> Function DBDCompetence.HighestLevelAndClosestEffectCondition.InitEffectArrays
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        effectIDLevel1                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        effectIDLevel2                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        effectIDLevel3                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHighestLevelAndClosestEffectCondition::InitEffectArrays(const class FName& effectIDLevel1, const class FName& effectIDLevel2, const class FName& effectIDLevel3)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.HighestLevelAndClosestEffectCondition.InitEffectArrays");
		
		UHighestLevelAndClosestEffectCondition_InitEffectArrays_Params params {};
		params.effectIDLevel1 = effectIDLevel1;
		params.effectIDLevel2 = effectIDLevel2;
		params.effectIDLevel3 = effectIDLevel3;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHighestLevelAndClosestEffectCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHighestLevelAndClosestEffectCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.HighestLevelAndClosestEffectCondition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042A4A70
	 * 		Name   -> Function DBDCompetence.ImAllEars.Server_OnCamperLoudNoise
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
	 * Parameters:
	 * 		struct FGameplayTag                                GameplayTag                                                (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UImAllEars::Server_OnCamperLoudNoise(const struct FGameplayTag& GameplayTag, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.ImAllEars.Server_OnCamperLoudNoise");
		
		UImAllEars_Server_OnCamperLoudNoise_Params params {};
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
	 * 		Name   -> PredefindFunction UImAllEars.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UImAllEars::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.ImAllEars");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UImmediateUndetectableEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UImmediateUndetectableEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.ImmediateUndetectableEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDCompetence.OnEventBaseAddon.OnEventFired
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UOnEventBaseAddon::OnEventFired(const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.OnEventBaseAddon.OnEventFired");
		
		UOnEventBaseAddon_OnEventFired_Params params {};
		params.GameEventData = GameEventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UOnEventBaseAddon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnEventBaseAddon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.OnEventBaseAddon");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UImposeStatusEffectOnEventAddon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UImposeStatusEffectOnEventAddon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.ImposeStatusEffectOnEventAddon");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDCompetence.InfectiousFright.RevealSurvivorLocation
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ACamperPlayer*                               Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInfectiousFright::RevealSurvivorLocation(class ACamperPlayer* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.InfectiousFright.RevealSurvivorLocation");
		
		UInfectiousFright_RevealSurvivorLocation_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042A4460
	 * 		Name   -> Function DBDCompetence.InfectiousFright.OnRep_PerkActivationCount
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UInfectiousFright::OnRep_PerkActivationCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.InfectiousFright.OnRep_PerkActivationCount");
		
		UInfectiousFright_OnRep_PerkActivationCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UInfectiousFright.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInfectiousFright::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.InfectiousFright");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042A4480
	 * 		Name   -> Function DBDCompetence.InnerStrength.OnRep_PerkEnabled
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UInnerStrength::OnRep_PerkEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.InnerStrength.OnRep_PerkEnabled");
		
		UInnerStrength_OnRep_PerkEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042A4370
	 * 		Name   -> Function DBDCompetence.InnerStrength.OnPlayerImmobilizeStateChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		ECamperImmobilizeState                             oldImmobilizeState                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECamperImmobilizeState                             newImmobilizeState                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInnerStrength::OnPlayerImmobilizeStateChanged(ECamperImmobilizeState oldImmobilizeState, ECamperImmobilizeState newImmobilizeState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.InnerStrength.OnPlayerImmobilizeStateChanged");
		
		UInnerStrength_OnPlayerImmobilizeStateChanged_Params params {};
		params.oldImmobilizeState = oldImmobilizeState;
		params.newImmobilizeState = newImmobilizeState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UInnerStrength.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInnerStrength::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.InnerStrength");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UInsidious.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInsidious::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.Insidious");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UInsidiousEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInsidiousEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.InsidiousEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UIsActivationTimerActive.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIsActivationTimerActive::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.IsActivationTimerActive");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UIsActivationTimerActiveAndNotPaused.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIsActivationTimerActiveAndNotPaused::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.IsActivationTimerActiveAndNotPaused");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042A3DA0
	 * 		Name   -> Function DBDCompetence.IsBestProveThyselfEffectInRange.OnInRangeChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               InRange                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UProveThyselfEffect*                         ProveThyselfEffect                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIsBestProveThyselfEffectInRange::OnInRangeChanged(bool InRange, class UProveThyselfEffect* ProveThyselfEffect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.IsBestProveThyselfEffectInRange.OnInRangeChanged");
		
		UIsBestProveThyselfEffectInRange_OnInRangeChanged_Params params {};
		params.InRange = InRange;
		params.ProveThyselfEffect = ProveThyselfEffect;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UIsBestProveThyselfEffectInRange.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIsBestProveThyselfEffectInRange::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.IsBestProveThyselfEffectInRange");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UIsBoonBlessed.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIsBoonBlessed::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.IsBoonBlessed");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UIsClosestEffectCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIsClosestEffectCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.IsClosestEffectCondition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UIsCooldownTimerActive.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIsCooldownTimerActive::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.IsCooldownTimerActive");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UIsHexCursed.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIsHexCursed::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.IsHexCursed");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042A45B0
	 * 		Name   -> Function DBDCompetence.IsHighestLevelAndClosestOriginatingEffect.OnStatusEffectAddedOrRemoved
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UStatusEffect*                               effect                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Valid                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIsHighestLevelAndClosestOriginatingEffect::OnStatusEffectAddedOrRemoved(class UStatusEffect* effect, bool Valid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.IsHighestLevelAndClosestOriginatingEffect.OnStatusEffectAddedOrRemoved");
		
		UIsHighestLevelAndClosestOriginatingEffect_OnStatusEffectAddedOrRemoved_Params params {};
		params.effect = effect;
		params.Valid = Valid;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UIsHighestLevelAndClosestOriginatingEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIsHighestLevelAndClosestOriginatingEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.IsHighestLevelAndClosestOriginatingEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042A4750
	 * 		Name   -> Function DBDCompetence.IsHighestTierOriginatingPerk.OnStatusEffectApplicableChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UGameplayModifierContainer*                  GameplayModifierContainer                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsApplicable                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIsHighestTierOriginatingPerk::OnStatusEffectApplicableChanged(class UGameplayModifierContainer* GameplayModifierContainer, bool IsApplicable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.IsHighestTierOriginatingPerk.OnStatusEffectApplicableChanged");
		
		UIsHighestTierOriginatingPerk_OnStatusEffectApplicableChanged_Params params {};
		params.GameplayModifierContainer = GameplayModifierContainer;
		params.IsApplicable = IsApplicable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042A4680
	 * 		Name   -> Function DBDCompetence.IsHighestTierOriginatingPerk.OnStatusEffectAddedOrRemoved
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UStatusEffect*                               effect                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Valid                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIsHighestTierOriginatingPerk::OnStatusEffectAddedOrRemoved(class UStatusEffect* effect, bool Valid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.IsHighestTierOriginatingPerk.OnStatusEffectAddedOrRemoved");
		
		UIsHighestTierOriginatingPerk_OnStatusEffectAddedOrRemoved_Params params {};
		params.effect = effect;
		params.Valid = Valid;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UIsHighestTierOriginatingPerk.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIsHighestTierOriginatingPerk::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.IsHighestTierOriginatingPerk");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UIsInAnyHookedSurvivorOriginatorAuraReadingRange.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIsInAnyHookedSurvivorOriginatorAuraReadingRange::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.IsInAnyHookedSurvivorOriginatorAuraReadingRange");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042A3E70
	 * 		Name   -> Function DBDCompetence.IsInRangeOfOriginatingPlayer.OnInRangeChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               InRange                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIsInRangeOfOriginatingPlayer::OnInRangeChanged(bool InRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.IsInRangeOfOriginatingPlayer.OnInRangeChanged");
		
		UIsInRangeOfOriginatingPlayer_OnInRangeChanged_Params params {};
		params.InRange = InRange;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UIsInRangeOfOriginatingPlayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIsInRangeOfOriginatingPlayer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.IsInRangeOfOriginatingPlayer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UIsLifetimeActive.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIsLifetimeActive::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.IsLifetimeActive");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UIsOnHitSprintEffectActive.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIsOnHitSprintEffectActive::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.IsOnHitSprintEffectActive");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042A4590
	 * 		Name   -> Function DBDCompetence.IsOriginatingPerkBoundToTotems.OnRep_TotemCount
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UIsOriginatingPerkBoundToTotems::OnRep_TotemCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.IsOriginatingPerkBoundToTotems.OnRep_TotemCount");
		
		UIsOriginatingPerkBoundToTotems_OnRep_TotemCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042A3890
	 * 		Name   -> Function DBDCompetence.IsOriginatingPerkBoundToTotems.Init
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EComparisonOperation                               comparisonOperator                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            totemCount                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIsOriginatingPerkBoundToTotems::Init(EComparisonOperation comparisonOperator, int32_t totemCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.IsOriginatingPerkBoundToTotems.Init");
		
		UIsOriginatingPerkBoundToTotems_Init_Params params {};
		params.comparisonOperator = comparisonOperator;
		params.totemCount = totemCount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UIsOriginatingPerkBoundToTotems.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIsOriginatingPerkBoundToTotems::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.IsOriginatingPerkBoundToTotems");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UIsOriginatingPerkUsableCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIsOriginatingPerkUsableCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.IsOriginatingPerkUsableCondition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042A3F00
	 * 		Name   -> Function DBDCompetence.IsOwningPlayerInRangeFromHook.OnLevelReadyToPlay
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UIsOwningPlayerInRangeFromHook::OnLevelReadyToPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.IsOwningPlayerInRangeFromHook.OnLevelReadyToPlay");
		
		UIsOwningPlayerInRangeFromHook_OnLevelReadyToPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UIsOwningPlayerInRangeFromHook.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIsOwningPlayerInRangeFromHook::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.IsOwningPlayerInRangeFromHook");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UIsOwningPlayerInHookRangeWhenKillerCarry.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIsOwningPlayerInHookRangeWhenKillerCarry::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.IsOwningPlayerInHookRangeWhenKillerCarry");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UIsOwningPlayerLastSurvivor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIsOwningPlayerLastSurvivor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.IsOwningPlayerLastSurvivor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UIsOwningSurvivorAuraRevealedToKiller.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIsOwningSurvivorAuraRevealedToKiller::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.IsOwningSurvivorAuraRevealedToKiller");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UIsPerkUsableCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIsPerkUsableCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.IsPerkUsableCondition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042AA910
	 * 		Name   -> Function DBDCompetence.IsPlayerPerfInteractionWithNoItem.OnCollectableChargeStateChange
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               Empty                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIsPlayerPerfInteractionWithNoItem::OnCollectableChargeStateChange(bool Empty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.IsPlayerPerfInteractionWithNoItem.OnCollectableChargeStateChange");
		
		UIsPlayerPerfInteractionWithNoItem_OnCollectableChargeStateChange_Params params {};
		params.Empty = Empty;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UIsPlayerPerfInteractionWithNoItem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIsPlayerPerfInteractionWithNoItem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.IsPlayerPerfInteractionWithNoItem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042AAA50
	 * 		Name   -> Function DBDCompetence.IsPlayerPerformingItemInteraction.OnCollectablePickedUp
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIsPlayerPerformingItemInteraction::OnCollectablePickedUp(class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.IsPlayerPerformingItemInteraction.OnCollectablePickedUp");
		
		UIsPlayerPerformingItemInteraction_OnCollectablePickedUp_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042AAA30
	 * 		Name   -> Function DBDCompetence.IsPlayerPerformingItemInteraction.OnCollectableDropped
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UIsPlayerPerformingItemInteraction::OnCollectableDropped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.IsPlayerPerformingItemInteraction.OnCollectableDropped");
		
		UIsPlayerPerformingItemInteraction_OnCollectableDropped_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042AA9A0
	 * 		Name   -> Function DBDCompetence.IsPlayerPerformingItemInteraction.OnCollectableChargeStateChange
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               Empty                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIsPlayerPerformingItemInteraction::OnCollectableChargeStateChange(bool Empty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.IsPlayerPerformingItemInteraction.OnCollectableChargeStateChange");
		
		UIsPlayerPerformingItemInteraction_OnCollectableChargeStateChange_Params params {};
		params.Empty = Empty;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UIsPlayerPerformingItemInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIsPlayerPerformingItemInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.IsPlayerPerformingItemInteraction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042AAE80
	 * 		Name   -> Function DBDCompetence.IsPlayerPerformingInteraction.UpdateIsTrue
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UInteractionDefinition*                      InteractionDefinition                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIsPlayerPerformingInteraction::UpdateIsTrue(class UInteractionDefinition* InteractionDefinition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.IsPlayerPerformingInteraction.UpdateIsTrue");
		
		UIsPlayerPerformingInteraction_UpdateIsTrue_Params params {};
		params.InteractionDefinition = InteractionDefinition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0429E7A0
	 * 		Name   -> Function DBDCompetence.IsPlayerPerformingInteraction.SetInteractionSemantics
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FGameplayTagContainer                       interactionSemantics                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UIsPlayerPerformingInteraction::SetInteractionSemantics(const struct FGameplayTagContainer& interactionSemantics)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.IsPlayerPerformingInteraction.SetInteractionSemantics");
		
		UIsPlayerPerformingInteraction_SetInteractionSemantics_Params params {};
		params.interactionSemantics = interactionSemantics;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UIsPlayerPerformingInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIsPlayerPerformingInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.IsPlayerPerformingInteraction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UIsSubjectInteractingWithOriginatingPlayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIsSubjectInteractingWithOriginatingPlayer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.IsSubjectInteractingWithOriginatingPlayer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UKillerConditionalSpeedCurveEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKillerConditionalSpeedCurveEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.KillerConditionalSpeedCurveEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UKillerIsLowOnAmmo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKillerIsLowOnAmmo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.KillerIsLowOnAmmo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042AAD70
	 * 		Name   -> Function DBDCompetence.KillerSubjectProvider.RegisterWhenKillerSet
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ASlasherPlayer*                              killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UKillerSubjectProvider::RegisterWhenKillerSet(class ASlasherPlayer* killer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.KillerSubjectProvider.RegisterWhenKillerSet");
		
		UKillerSubjectProvider_RegisterWhenKillerSet_Params params {};
		params.killer = killer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UKillerSubjectProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKillerSubjectProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.KillerSubjectProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UKindredPerk.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKindredPerk::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.KindredPerk");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042AAE00
	 * 		Name   -> Function DBDCompetence.LingeringBlessedStatusEffect.SetLingerDuration
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		float                                              lingerDuration                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULingeringBlessedStatusEffect::SetLingerDuration(float lingerDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.LingeringBlessedStatusEffect.SetLingerDuration");
		
		ULingeringBlessedStatusEffect_SetLingerDuration_Params params {};
		params.lingerDuration = lingerDuration;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042AA410
	 * 		Name   -> Function DBDCompetence.LingeringBlessedStatusEffect.Authority_OnInRangeChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               InRange                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULingeringBlessedStatusEffect::Authority_OnInRangeChanged(bool InRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.LingeringBlessedStatusEffect.Authority_OnInRangeChanged");
		
		ULingeringBlessedStatusEffect_Authority_OnInRangeChanged_Params params {};
		params.InRange = InRange;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULingeringBlessedStatusEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULingeringBlessedStatusEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.LingeringBlessedStatusEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULingeringBlindnessEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULingeringBlindnessEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.LingeringBlindnessEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULingeringExhaustedEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULingeringExhaustedEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.LingeringExhaustedEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULingeringStateTagStatusEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULingeringStateTagStatusEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.LingeringStateTagStatusEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042AAAE0
	 * 		Name   -> Function DBDCompetence.LuckyBreak.OnDamageStateChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		ECamperDamageState                                 oldDamageState                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECamperDamageState                                 CurrentDamageState                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuckyBreak::OnDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState CurrentDamageState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.LuckyBreak.OnDamageStateChanged");
		
		ULuckyBreak_OnDamageStateChanged_Params params {};
		params.oldDamageState = oldDamageState;
		params.CurrentDamageState = CurrentDamageState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042AA240
	 * 		Name   -> Function DBDCompetence.LuckyBreak.ActivationTimerEnded
	 * 		Flags  -> (Final, Native, Private)
	 */
	void ULuckyBreak::ActivationTimerEnded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.LuckyBreak.ActivationTimerEnded");
		
		ULuckyBreak_ActivationTimerEnded_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULuckyBreak.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULuckyBreak::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.LuckyBreak");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMindBreaker.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMindBreaker::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.MindBreaker");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UNemesis.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNemesis::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.Nemesis");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042AA8C0
	 * 		Name   -> Function DBDCompetence.NoOneLeftBehind.GetSpeedBoostEffect
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UNoOneLeftBehind::GetSpeedBoostEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.NoOneLeftBehind.GetSpeedBoostEffect");
		
		UNoOneLeftBehind_GetSpeedBoostEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UNoOneLeftBehind.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNoOneLeftBehind::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.NoOneLeftBehind");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UObliviousEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UObliviousEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.ObliviousEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UObsessionTargetSubjectProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UObsessionTargetSubjectProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.ObsessionTargetSubjectProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UOnEventSetTimerAddon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnEventSetTimerAddon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.OnEventSetTimerAddon");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UOriginatingEffectIsApplicable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOriginatingEffectIsApplicable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.OriginatingEffectIsApplicable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UOwningPlayerInBoonBlessingRange.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOwningPlayerInBoonBlessingRange::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.OwningPlayerInBoonBlessingRange");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042AAC80
	 * 		Name   -> Function DBDCompetence.OwningPlayerInTotemRange.OnLevelReadyToPlay
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UOwningPlayerInTotemRange::OnLevelReadyToPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.OwningPlayerInTotemRange.OnLevelReadyToPlay");
		
		UOwningPlayerInTotemRange_OnLevelReadyToPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UOwningPlayerInTotemRange.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOwningPlayerInTotemRange::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.OwningPlayerInTotemRange");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UOwningPlayerInDullTotemRange.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOwningPlayerInDullTotemRange::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.OwningPlayerInDullTotemRange");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UOwningSlasherHasBeenStill.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOwningSlasherHasBeenStill::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.OwningSlasherHasBeenStill");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPharmacyPerk.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPharmacyPerk::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.PharmacyPerk");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042AAD50
	 * 		Name   -> Function DBDCompetence.PlayerIsInExitArea.PlayerExitExitArea
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UPlayerIsInExitArea::PlayerExitExitArea()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.PlayerIsInExitArea.PlayerExitExitArea");
		
		UPlayerIsInExitArea_PlayerExitExitArea_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042AAD30
	 * 		Name   -> Function DBDCompetence.PlayerIsInExitArea.PlayerEnterExitArea
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UPlayerIsInExitArea::PlayerEnterExitArea()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.PlayerIsInExitArea.PlayerEnterExitArea");
		
		UPlayerIsInExitArea_PlayerEnterExitArea_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPlayerIsInExitArea.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerIsInExitArea::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.PlayerIsInExitArea");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPoised.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPoised::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.Poised");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPreventKOEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPreventKOEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.PreventKOEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042AACA0
	 * 		Name   -> Function DBDCompetence.ProveThyself.OnSurvivorInOwnerRangeChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               InRange                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UProveThyself::OnSurvivorInOwnerRangeChanged(bool InRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.ProveThyself.OnSurvivorInOwnerRangeChanged");
		
		UProveThyself_OnSurvivorInOwnerRangeChanged_Params params {};
		params.InRange = InRange;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UProveThyself.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProveThyself::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.ProveThyself");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042AA770
	 * 		Name   -> Function DBDCompetence.RemoveOnOriginatingSurvivorGoneStatusEffect.Authority_OnSurvivorRemoved
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class ACamperPlayer*                               survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URemoveOnOriginatingSurvivorGoneStatusEffect::Authority_OnSurvivorRemoved(class ACamperPlayer* survivor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.RemoveOnOriginatingSurvivorGoneStatusEffect.Authority_OnSurvivorRemoved");
		
		URemoveOnOriginatingSurvivorGoneStatusEffect_Authority_OnSurvivorRemoved_Params params {};
		params.survivor = survivor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction URemoveOnOriginatingSurvivorGoneStatusEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URemoveOnOriginatingSurvivorGoneStatusEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.RemoveOnOriginatingSurvivorGoneStatusEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042AABB0
	 * 		Name   -> Function DBDCompetence.ProveThyselfEffect.OnInRangeOfOriginatorChanged
	 * 		Flags  -> (Native, Protected)
	 * Parameters:
	 * 		bool                                               InRange                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ACamperPlayer*                               survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UProveThyselfEffect::OnInRangeOfOriginatorChanged(bool InRange, class ACamperPlayer* survivor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.ProveThyselfEffect.OnInRangeOfOriginatorChanged");
		
		UProveThyselfEffect_OnInRangeOfOriginatorChanged_Params params {};
		params.InRange = InRange;
		params.survivor = survivor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UProveThyselfEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProveThyselfEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.ProveThyselfEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UResiliencePerk.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UResiliencePerk::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.ResiliencePerk");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USaboteur.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USaboteur::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.Saboteur");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USecondsToRateModifierBaseAddon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USecondsToRateModifierBaseAddon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.SecondsToRateModifierBaseAddon");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USecondWind.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USecondWind::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.SecondWind");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USpawnEffectsOnAllSurvivorsBaseAddon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpawnEffectsOnAllSurvivorsBaseAddon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.SpawnEffectsOnAllSurvivorsBaseAddon");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USimpleSpawnEffectsOnAllSurvivorsAddon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USimpleSpawnEffectsOnAllSurvivorsAddon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.SimpleSpawnEffectsOnAllSurvivorsAddon");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USingleGateBlockerEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USingleGateBlockerEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.SingleGateBlockerEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDCompetence.SmallGame.VFXTotemFound
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void USmallGame::VFXTotemFound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.SmallGame.VFXTotemFound");
		
		USmallGame_VFXTotemFound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDCompetence.SmallGame.SearchForTotems
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void USmallGame::SearchForTotems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.SmallGame.SearchForTotems");
		
		USmallGame_SearchForTotems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042AA8F0
	 * 		Name   -> Function DBDCompetence.SmallGame.Multicast_TotemFound
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Protected)
	 */
	void USmallGame::Multicast_TotemFound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.SmallGame.Multicast_TotemFound");
		
		USmallGame_Multicast_TotemFound_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042AA890
	 * 		Name   -> Function DBDCompetence.SmallGame.GetDetectionConeAngle
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
	 */
	float USmallGame::GetDetectionConeAngle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.SmallGame.GetDetectionConeAngle");
		
		USmallGame_GetDetectionConeAngle_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042AA800
	 * 		Name   -> Function DBDCompetence.SmallGame.Authority_SetTotemDetected
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USmallGame::Authority_SetTotemDetected(bool value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.SmallGame.Authority_SetTotemDetected");
		
		USmallGame_Authority_SetTotemDetected_Params params {};
		params.value = value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USmallGame.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USmallGame::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.SmallGame");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042AA6E0
	 * 		Name   -> Function DBDCompetence.SoleSurvivor.Authority_OnSurvivorAdded
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ACamperPlayer*                               survivor                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USoleSurvivor::Authority_OnSurvivorAdded(class ACamperPlayer* survivor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.SoleSurvivor.Authority_OnSurvivorAdded");
		
		USoleSurvivor_Authority_OnSurvivorAdded_Params params {};
		params.survivor = survivor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USoleSurvivor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoleSurvivor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.SoleSurvivor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042AA4A0
	 * 		Name   -> Function DBDCompetence.Solidarity.Authority_OnSkillCheckResponse
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               success                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Bonus                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               TriggerLoudNoise                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               hadInput                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESkillCheckCustomType                              Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ChargeChange                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USolidarity::Authority_OnSkillCheckResponse(bool success, bool Bonus, class ADBDPlayer* Player, bool TriggerLoudNoise, bool hadInput, ESkillCheckCustomType Type, float ChargeChange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.Solidarity.Authority_OnSkillCheckResponse");
		
		USolidarity_Authority_OnSkillCheckResponse_Params params {};
		params.success = success;
		params.Bonus = Bonus;
		params.Player = Player;
		params.TriggerLoudNoise = TriggerLoudNoise;
		params.hadInput = hadInput;
		params.Type = Type;
		params.ChargeChange = ChargeChange;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042AA260
	 * 		Name   -> Function DBDCompetence.Solidarity.Authority_OnHealthChargeApplied
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		float                                              individualChargeAmount                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              totalChargeAmount                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      chargeInstigator                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               wasCoop                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USolidarity::Authority_OnHealthChargeApplied(float individualChargeAmount, float totalChargeAmount, class AActor* chargeInstigator, bool wasCoop, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.Solidarity.Authority_OnHealthChargeApplied");
		
		USolidarity_Authority_OnHealthChargeApplied_Params params {};
		params.individualChargeAmount = individualChargeAmount;
		params.totalChargeAmount = totalChargeAmount;
		params.chargeInstigator = chargeInstigator;
		params.wasCoop = wasCoop;
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USolidarity.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USolidarity::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.Solidarity");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USpawningEffectPerk.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpawningEffectPerk::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.SpawningEffectPerk");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USpiesFromTheShadows.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpiesFromTheShadows::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.SpiesFromTheShadows");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USpineChillPerk.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpineChillPerk::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.SpineChillPerk");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042AD960
	 * 		Name   -> Function DBDCompetence.SprintBurst.GetSprintDuration
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
	 */
	float USprintBurst::GetSprintDuration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.SprintBurst.GetSprintDuration");
		
		USprintBurst_GetSprintDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042AD930
	 * 		Name   -> Function DBDCompetence.SprintBurst.GetExhaustedDuration
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
	 */
	float USprintBurst::GetExhaustedDuration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.SprintBurst.GetExhaustedDuration");
		
		USprintBurst_GetExhaustedDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042AD800
	 * 		Name   -> Function DBDCompetence.SprintBurst.Authority_OnIsRunningAndMovingChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               IsRunningAndMoving                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USprintBurst::Authority_OnIsRunningAndMovingChanged(bool IsRunningAndMoving)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.SprintBurst.Authority_OnIsRunningAndMovingChanged");
		
		USprintBurst_Authority_OnIsRunningAndMovingChanged_Params params {};
		params.IsRunningAndMoving = IsRunningAndMoving;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USprintBurst.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USprintBurst::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.SprintBurst");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042ADAA0
	 * 		Name   -> Function DBDCompetence.StatsSystemUtilities.InitStatBP
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FTunableStat                                theStat                                                    (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UStatsSystemUtilities::STATIC_InitStatBP(struct FTunableStat* theStat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.StatsSystemUtilities.InitStatBP");
		
		UStatsSystemUtilities_InitStatBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (theStat != nullptr)
			*theStat = params.theStat;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042AD990
	 * 		Name   -> Function DBDCompetence.StatsSystemUtilities.GetStatValueBP
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FTunableStat                                theStat                                                    (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UStatsSystemUtilities::STATIC_GetStatValueBP(const struct FTunableStat& theStat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.StatsSystemUtilities.GetStatValueBP");
		
		UStatsSystemUtilities_GetStatValueBP_Params params {};
		params.theStat = theStat;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UStatsSystemUtilities.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStatsSystemUtilities::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.StatsSystemUtilities");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UStatusEffectOriginatorSubjectProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStatusEffectOriginatorSubjectProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.StatusEffectOriginatorSubjectProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042AD890
	 * 		Name   -> Function DBDCompetence.Surge.Client_TriggerEffects
	 * 		Flags  -> (Final, Net, Native, Event, Private, NetClient)
	 * Parameters:
	 * 		TArray<class AGenerator*>                          generators                                                 (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void USurge::Client_TriggerEffects(TArray<class AGenerator*> generators)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.Surge.Client_TriggerEffects");
		
		USurge_Client_TriggerEffects_Params params {};
		params.generators = generators;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USurge.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USurge::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.Surge");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USurvivorWasRecentlyUnhookedEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USurvivorWasRecentlyUnhookedEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.SurvivorWasRecentlyUnhookedEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTestAnyActorPairQueryRangeIsTrue.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTestAnyActorPairQueryRangeIsTrue::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.TestAnyActorPairQueryRangeIsTrue");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ATestCollectable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATestCollectable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.TestCollectable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ATestDBDGameState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATestDBDGameState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.TestDBDGameState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042ADC70
	 * 		Name   -> Function DBDCompetence.TheMettleOfMan.OnRep_NumTokenSoFar
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UTheMettleOfMan::OnRep_NumTokenSoFar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.TheMettleOfMan.OnRep_NumTokenSoFar");
		
		UTheMettleOfMan_OnRep_NumTokenSoFar_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042ADC50
	 * 		Name   -> Function DBDCompetence.TheMettleOfMan.OnRep_CurrentPhase
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UTheMettleOfMan::OnRep_CurrentPhase()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.TheMettleOfMan.OnRep_CurrentPhase");
		
		UTheMettleOfMan_OnRep_CurrentPhase_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTheMettleOfMan.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTheMettleOfMan::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.TheMettleOfMan");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042ADC30
	 * 		Name   -> Function DBDCompetence.ThrillingTremors.OnRep_BlockedGenerators
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UThrillingTremors::OnRep_BlockedGenerators()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.ThrillingTremors.OnRep_BlockedGenerators");
		
		UThrillingTremors_OnRep_BlockedGenerators_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UThrillingTremors.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UThrillingTremors::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.ThrillingTremors");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTimedObliviousEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTimedObliviousEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.TimedObliviousEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UWeddingRing.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeddingRing::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.WeddingRing");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDCompetence.YamaokaFamilyCrest.RevealSurvivor
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ACamperPlayer*                               survivorToReveal                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UYamaokaFamilyCrest::RevealSurvivor(class ACamperPlayer* survivorToReveal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.YamaokaFamilyCrest.RevealSurvivor");
		
		UYamaokaFamilyCrest_RevealSurvivor_Params params {};
		params.survivorToReveal = survivorToReveal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042ADC10
	 * 		Name   -> Function DBDCompetence.YamaokaFamilyCrest.OnRep_AddonActivationCount
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UYamaokaFamilyCrest::OnRep_AddonActivationCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDCompetence.YamaokaFamilyCrest.OnRep_AddonActivationCount");
		
		UYamaokaFamilyCrest_OnRep_AddonActivationCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UYamaokaFamilyCrest.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UYamaokaFamilyCrest::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.YamaokaFamilyCrest");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UZanshinTactics.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UZanshinTactics::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDCompetence.ZanshinTactics");
		return ptr;
	}

}


