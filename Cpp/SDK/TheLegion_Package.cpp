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
	 * 		Name   -> PredefindFunction UAddon_Frenzy_ColdDirt.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddon_Frenzy_ColdDirt::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheLegion.Addon_Frenzy_ColdDirt");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBaseFrenzyMixtapeAddon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseFrenzyMixtapeAddon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheLegion.BaseFrenzyMixtapeAddon");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAddon_Frenzy_FranksMixTape.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddon_Frenzy_FranksMixTape::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheLegion.Addon_Frenzy_FranksMixTape");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAddon_Frenzy_FumingMixTape.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddon_Frenzy_FumingMixTape::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheLegion.Addon_Frenzy_FumingMixTape");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAddon_Frenzy_JoeysMixTape.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddon_Frenzy_JoeysMixTape::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheLegion.Addon_Frenzy_JoeysMixTape");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAddon_Frenzy_MuralSketch.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddon_Frenzy_MuralSketch::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheLegion.Addon_Frenzy_MuralSketch");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAddon_Frenzy_NeverSleepPills.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddon_Frenzy_NeverSleepPills::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheLegion.Addon_Frenzy_NeverSleepPills");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAddon_Frenzy_StolenSketchBook.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddon_Frenzy_StolenSketchBook::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheLegion.Addon_Frenzy_StolenSketchBook");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBaseImposeEffectOnFrenzyBleedout.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseImposeEffectOnFrenzyBleedout::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheLegion.BaseImposeEffectOnFrenzyBleedout");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFrenzyAttack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFrenzyAttack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheLegion.FrenzyAttack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFrenzyAttackHittingSubstate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFrenzyAttackHittingSubstate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheLegion.FrenzyAttackHittingSubstate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFrenzyAttackSuccessSubstate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFrenzyAttackSuccessSubstate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheLegion.FrenzyAttackSuccessSubstate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D5BBD0
	 * 		Name   -> Function TheLegion.FrenzyComponent.StartFrenzy
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UFrenzyComponent::StartFrenzy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheLegion.FrenzyComponent.StartFrenzy");
		
		UFrenzyComponent_StartFrenzy_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D5BB40
	 * 		Name   -> Function TheLegion.FrenzyComponent.SetStartingFrenzy
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               startingFrenzy                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFrenzyComponent::SetStartingFrenzy(bool startingFrenzy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheLegion.FrenzyComponent.SetStartingFrenzy");
		
		UFrenzyComponent_SetStartingFrenzy_Params params {};
		params.startingFrenzy = startingFrenzy;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D5BAB0
	 * 		Name   -> Function TheLegion.FrenzyComponent.SetObjectState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UGameplayTagContainerComponent*              objectState                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFrenzyComponent::SetObjectState(class UGameplayTagContainerComponent* objectState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheLegion.FrenzyComponent.SetObjectState");
		
		UFrenzyComponent_SetObjectState_Params params {};
		params.objectState = objectState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D5BA90
	 * 		Name   -> Function TheLegion.FrenzyComponent.ResumeFrenzyChargeDepletion
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UFrenzyComponent::ResumeFrenzyChargeDepletion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheLegion.FrenzyComponent.ResumeFrenzyChargeDepletion");
		
		UFrenzyComponent_ResumeFrenzyChargeDepletion_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D5BA70
	 * 		Name   -> Function TheLegion.FrenzyComponent.PauseFrenzyChargeDepletion
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UFrenzyComponent::PauseFrenzyChargeDepletion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheLegion.FrenzyComponent.PauseFrenzyChargeDepletion");
		
		UFrenzyComponent_PauseFrenzyChargeDepletion_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D5BA50
	 * 		Name   -> Function TheLegion.FrenzyComponent.OnMoriStarted
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UFrenzyComponent::OnMoriStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheLegion.FrenzyComponent.OnMoriStarted");
		
		UFrenzyComponent_OnMoriStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D5B940
	 * 		Name   -> Function TheLegion.FrenzyComponent.OnGameEventDispatched
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                gameEventType                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UFrenzyComponent::OnGameEventDispatched(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheLegion.FrenzyComponent.OnGameEventDispatched");
		
		UFrenzyComponent_OnGameEventDispatched_Params params {};
		params.gameEventType = gameEventType;
		params.GameEventData = GameEventData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D5B920
	 * 		Name   -> Function TheLegion.FrenzyComponent.OnFrenzyCooldownStarted
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UFrenzyComponent::OnFrenzyCooldownStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheLegion.FrenzyComponent.OnFrenzyCooldownStarted");
		
		UFrenzyComponent_OnFrenzyCooldownStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D5B8E0
	 * 		Name   -> Function TheLegion.FrenzyComponent.IsStartingFrenzy
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UFrenzyComponent::IsStartingFrenzy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheLegion.FrenzyComponent.IsStartingFrenzy");
		
		UFrenzyComponent_IsStartingFrenzy_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D5B8A0
	 * 		Name   -> Function TheLegion.FrenzyComponent.IsInFrenzyCooldown
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UFrenzyComponent::IsInFrenzyCooldown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheLegion.FrenzyComponent.IsInFrenzyCooldown");
		
		UFrenzyComponent_IsInFrenzyCooldown_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D5B860
	 * 		Name   -> Function TheLegion.FrenzyComponent.IsInFrenzy
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UFrenzyComponent::IsInFrenzy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheLegion.FrenzyComponent.IsInFrenzy");
		
		UFrenzyComponent_IsInFrenzy_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D5B840
	 * 		Name   -> Function TheLegion.FrenzyComponent.InitializeFrenzy
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UFrenzyComponent::InitializeFrenzy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheLegion.FrenzyComponent.InitializeFrenzy");
		
		UFrenzyComponent_InitializeFrenzy_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D5B810
	 * 		Name   -> Function TheLegion.FrenzyComponent.HasStartedInjuredBleedoutDuringThisFrenzy
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UFrenzyComponent::HasStartedInjuredBleedoutDuringThisFrenzy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheLegion.FrenzyComponent.HasStartedInjuredBleedoutDuringThisFrenzy");
		
		UFrenzyComponent_HasStartedInjuredBleedoutDuringThisFrenzy_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D5B790
	 * 		Name   -> Function TheLegion.FrenzyComponent.EndFrenzy
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EFrenzyEndReason                                   Reason                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFrenzyComponent::EndFrenzy(EFrenzyEndReason Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheLegion.FrenzyComponent.EndFrenzy");
		
		UFrenzyComponent_EndFrenzy_Params params {};
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D5B750
	 * 		Name   -> Function TheLegion.FrenzyComponent.CanStartFrenzy
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UFrenzyComponent::CanStartFrenzy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheLegion.FrenzyComponent.CanStartFrenzy");
		
		UFrenzyComponent_CanStartFrenzy_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D5B720
	 * 		Name   -> Function TheLegion.FrenzyComponent.CanManuallyEndFrenzy
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UFrenzyComponent::CanManuallyEndFrenzy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheLegion.FrenzyComponent.CanManuallyEndFrenzy");
		
		UFrenzyComponent_CanManuallyEndFrenzy_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFrenzyComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFrenzyComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheLegion.FrenzyComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UJoeysMixtapeEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UJoeysMixtapeEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheLegion.JoeysMixtapeEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULegionAttackPicker.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULegionAttackPicker::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheLegion.LegionAttackPicker");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D5C3C0
	 * 		Name   -> Function TheLegion.LegionCheatComponent.DBD_LegionFrenzyForever
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void ULegionCheatComponent::DBD_LegionFrenzyForever()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheLegion.LegionCheatComponent.DBD_LegionFrenzyForever");
		
		ULegionCheatComponent_DBD_LegionFrenzyForever_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULegionCheatComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULegionCheatComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheLegion.LegionCheatComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D5C550
	 * 		Name   -> Function TheLegion.LegionKillerAnalyticsComponent.SetGameEventDispatcher
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UGameEventDispatcher*                        GameEventDispatcher                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULegionKillerAnalyticsComponent::SetGameEventDispatcher(class UGameEventDispatcher* GameEventDispatcher)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheLegion.LegionKillerAnalyticsComponent.SetGameEventDispatcher");
		
		ULegionKillerAnalyticsComponent_SetGameEventDispatcher_Params params {};
		params.GameEventDispatcher = GameEventDispatcher;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULegionKillerAnalyticsComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULegionKillerAnalyticsComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheLegion.LegionKillerAnalyticsComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D5C890
	 * 		Name   -> Function TheLegion.LegionSurvivorAnalyticsComponent.SetGameEventDispatcher
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UGameEventDispatcher*                        GameEventDispatcher                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULegionSurvivorAnalyticsComponent::SetGameEventDispatcher(class UGameEventDispatcher* GameEventDispatcher)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheLegion.LegionSurvivorAnalyticsComponent.SetGameEventDispatcher");
		
		ULegionSurvivorAnalyticsComponent_SetGameEventDispatcher_Params params {};
		params.GameEventDispatcher = GameEventDispatcher;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D5C780
	 * 		Name   -> Function TheLegion.LegionSurvivorAnalyticsComponent.OnGameEventDispatched
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                gameEventType                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULegionSurvivorAnalyticsComponent::OnGameEventDispatched(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheLegion.LegionSurvivorAnalyticsComponent.OnGameEventDispatched");
		
		ULegionSurvivorAnalyticsComponent_OnGameEventDispatched_Params params {};
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
	 * 		Name   -> PredefindFunction ULegionSurvivorAnalyticsComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULegionSurvivorAnalyticsComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheLegion.LegionSurvivorAnalyticsComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMadgrit.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMadgrit::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheLegion.Madgrit");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D5CCA0
	 * 		Name   -> Function TheLegion.ModifyFrenzyFOVEffect.Authority_OnFrenzyTierIncreased
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		int32_t                                            tier                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModifyFrenzyFOVEffect::Authority_OnFrenzyTierIncreased(int32_t tier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheLegion.ModifyFrenzyFOVEffect.Authority_OnFrenzyTierIncreased");
		
		UModifyFrenzyFOVEffect_Authority_OnFrenzyTierIncreased_Params params {};
		params.tier = tier;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UModifyFrenzyFOVEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UModifyFrenzyFOVEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheLegion.ModifyFrenzyFOVEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UOnSelfMendImposeEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnSelfMendImposeEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheLegion.OnSelfMendImposeEffect");
		return ptr;
	}

}


