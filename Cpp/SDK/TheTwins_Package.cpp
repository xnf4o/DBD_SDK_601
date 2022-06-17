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
	 * 		Name   -> PredefindFunction UAddon_K22Power_11.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddon_K22Power_11::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheTwins.Addon_K22Power_11");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAddon_K22Power_12.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddon_K22Power_12::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheTwins.Addon_K22Power_12");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAddon_K22Power_15.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddon_K22Power_15::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheTwins.Addon_K22Power_15");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAddon_K22Power_17.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddon_K22Power_17::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheTwins.Addon_K22Power_17");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E024B0
	 * 		Name   -> Function TheTwins.Addon_K22Power_18.Authority_OnTwinSet
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AConjoinedTwin*                              twin                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAddon_K22Power_18::Authority_OnTwinSet(class AConjoinedTwin* twin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.Addon_K22Power_18.Authority_OnTwinSet");
		
		UAddon_K22Power_18_Authority_OnTwinSet_Params params {};
		params.twin = twin;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAddon_K22Power_18.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddon_K22Power_18::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheTwins.Addon_K22Power_18");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAddon_K22Power_19.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddon_K22Power_19::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheTwins.Addon_K22Power_19");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAddon_K22Power_20.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddon_K22Power_20::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheTwins.Addon_K22Power_20");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAddon_K22Power_21.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddon_K22Power_21::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheTwins.Addon_K22Power_21");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAddon_K22Power_9.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddon_K22Power_9::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheTwins.Addon_K22Power_9");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAddon_K22Power_10.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddon_K22Power_10::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheTwins.Addon_K22Power_10");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAISkill_FindInteractable_CrushTwin.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_FindInteractable_CrushTwin::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheTwins.AISkill_FindInteractable_CrushTwin");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAISkill_Interaction_RemoveTwin.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_Interaction_RemoveTwin::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheTwins.AISkill_Interaction_RemoveTwin");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAppraisal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAppraisal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheTwins.Appraisal");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheTwins.PossessPlayer.Cosmetic_OnPossessStart
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPossessPlayer::Cosmetic_OnPossessStart(class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.PossessPlayer.Cosmetic_OnPossessStart");
		
		UPossessPlayer_Cosmetic_OnPossessStart_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheTwins.PossessPlayer.Cosmetic_OnPossessCancelled
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPossessPlayer::Cosmetic_OnPossessCancelled(class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.PossessPlayer.Cosmetic_OnPossessCancelled");
		
		UPossessPlayer_Cosmetic_OnPossessCancelled_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPossessPlayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPossessPlayer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheTwins.PossessPlayer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E08310
	 * 		Name   -> Function TheTwins.PossessTheConjoinedTwin.OnTwinSet
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AConjoinedTwin*                              twin                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPossessTheConjoinedTwin::OnTwinSet(class AConjoinedTwin* twin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.PossessTheConjoinedTwin.OnTwinSet");
		
		UPossessTheConjoinedTwin_OnTwinSet_Params params {};
		params.twin = twin;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E07F80
	 * 		Name   -> Function TheTwins.PossessTheConjoinedTwin.OnPowerCollected
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ADBDPlayer*                                  collector                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPossessTheConjoinedTwin::OnPowerCollected(class ADBDPlayer* collector)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.PossessTheConjoinedTwin.OnPowerCollected");
		
		UPossessTheConjoinedTwin_OnPowerCollected_Params params {};
		params.collector = collector;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPossessTheConjoinedTwin.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPossessTheConjoinedTwin::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheTwins.PossessTheConjoinedTwin");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAutoPossessTheConjoinedTwin.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutoPossessTheConjoinedTwin::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheTwins.AutoPossessTheConjoinedTwin");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBaseTwinInspectLocker.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseTwinInspectLocker::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheTwins.BaseTwinInspectLocker");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E02730
	 * 		Name   -> Function TheTwins.BeingPossessedInteraction.OnLevelReadyToPlay
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UBeingPossessedInteraction::OnLevelReadyToPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.BeingPossessedInteraction.OnLevelReadyToPlay");
		
		UBeingPossessedInteraction_OnLevelReadyToPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBeingPossessedInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBeingPossessedInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheTwins.BeingPossessedInteraction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBrotherBlindFlashlightableLightingStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBrotherBlindFlashlightableLightingStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheTwins.BrotherBlindFlashlightableLightingStrategy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheTwins.ChargeTwinJumpInteraction.Cosmetic_OnJumpReadyChanged
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  twin                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Ready                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChargeTwinJumpInteraction::Cosmetic_OnJumpReadyChanged(class ADBDPlayer* twin, bool Ready)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.ChargeTwinJumpInteraction.Cosmetic_OnJumpReadyChanged");
		
		UChargeTwinJumpInteraction_Cosmetic_OnJumpReadyChanged_Params params {};
		params.twin = twin;
		params.Ready = Ready;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UChargeTwinJumpInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChargeTwinJumpInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheTwins.ChargeTwinJumpInteraction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E02960
	 * 		Name   -> Function TheTwins.ConjoinedTwin.Server_SendAttackInput
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	 * Parameters:
	 * 		bool                                               Pressed                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AConjoinedTwin::Server_SendAttackInput(bool Pressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.ConjoinedTwin.Server_SendAttackInput");
		
		AConjoinedTwin_Server_SendAttackInput_Params params {};
		params.Pressed = Pressed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E02600
	 * 		Name   -> Function TheTwins.ConjoinedTwin.OnFinishedPlayingEvent
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AConjoinedTwin::OnFinishedPlayingEvent(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.ConjoinedTwin.OnFinishedPlayingEvent");
		
		AConjoinedTwin_OnFinishedPlayingEvent_Params params {};
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
	 * 		Name   -> Function TheTwins.ConjoinedTwin.Cosmetic_OnOnGroundUncontrolledChanged
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               onGroundAndUncontrolled                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AConjoinedTwin::Cosmetic_OnOnGroundUncontrolledChanged(bool onGroundAndUncontrolled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.ConjoinedTwin.Cosmetic_OnOnGroundUncontrolledChanged");
		
		AConjoinedTwin_Cosmetic_OnOnGroundUncontrolledChanged_Params params {};
		params.onGroundAndUncontrolled = onGroundAndUncontrolled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E02300
	 * 		Name   -> Function TheTwins.ConjoinedTwin.Authority_OnFirecrackerInRangeBegin
	 * 		Flags  -> (Final, Native, Protected, HasOutParms)
	 * Parameters:
	 * 		struct FFirecrackerEffectData                      effectData                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AConjoinedTwin::Authority_OnFirecrackerInRangeBegin(const struct FFirecrackerEffectData& effectData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.ConjoinedTwin.Authority_OnFirecrackerInRangeBegin");
		
		AConjoinedTwin_Authority_OnFirecrackerInRangeBegin_Params params {};
		params.effectData = effectData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AConjoinedTwin.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AConjoinedTwin::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheTwins.ConjoinedTwin");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E025A0
	 * 		Name   -> Function TheTwins.ConjoinedTwinAnimInstance.GetOwningConjoinedTwin
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class AConjoinedTwin* UConjoinedTwinAnimInstance::GetOwningConjoinedTwin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.ConjoinedTwinAnimInstance.GetOwningConjoinedTwin");
		
		UConjoinedTwinAnimInstance_GetOwningConjoinedTwin_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UConjoinedTwinAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConjoinedTwinAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheTwins.ConjoinedTwinAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AConjoinedTwinInteractable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AConjoinedTwinInteractable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheTwins.ConjoinedTwinInteractable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UConjoinedTwinStateMachine.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConjoinedTwinStateMachine::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheTwins.ConjoinedTwinStateMachine");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCoupDeGrace.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoupDeGrace::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheTwins.CoupDeGrace");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheTwins.Deception.OnOwningPlayerFakedEnteringLockerCosmetic
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void UDeception::OnOwningPlayerFakedEnteringLockerCosmetic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.Deception.OnOwningPlayerFakedEnteringLockerCosmetic");
		
		UDeception_OnOwningPlayerFakedEnteringLockerCosmetic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDeception.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeception::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheTwins.Deception");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDestroyTwin.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDestroyTwin::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheTwins.DestroyTwin");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheTwins.Hoarder.Local_ThrowBubbleIndicator
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EPerkInteractionObjectType                         camperInteractionType                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      objectActor                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ACamperPlayer*                               interactingCamperPlayer                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHoarder::Local_ThrowBubbleIndicator(EPerkInteractionObjectType camperInteractionType, class AActor* objectActor, class ACamperPlayer* interactingCamperPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.Hoarder.Local_ThrowBubbleIndicator");
		
		UHoarder_Local_ThrowBubbleIndicator_Params params {};
		params.camperInteractionType = camperInteractionType;
		params.objectActor = objectActor;
		params.interactingCamperPlayer = interactingCamperPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E02540
	 * 		Name   -> Function TheTwins.Hoarder.GetBubbleIndicatorLifetime
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	float UHoarder::GetBubbleIndicatorLifetime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.Hoarder.GetBubbleIndicatorLifetime");
		
		UHoarder_GetBubbleIndicatorLifetime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoarder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoarder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheTwins.Hoarder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E02750
	 * 		Name   -> Function TheTwins.IsTwinRecallReady.OnLevelReadyToPlay
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UIsTwinRecallReady::OnLevelReadyToPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.IsTwinRecallReady.OnLevelReadyToPlay");
		
		UIsTwinRecallReady_OnLevelReadyToPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UIsTwinRecallReady.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIsTwinRecallReady::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheTwins.IsTwinRecallReady");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK22AchievementTagTeam.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK22AchievementTagTeam::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheTwins.K22AchievementTagTeam");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E027B0
	 * 		Name   -> Function TheTwins.K22Power.OnRep_ConjoinedTwin
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AK22Power::OnRep_ConjoinedTwin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.K22Power.OnRep_ConjoinedTwin");
		
		AK22Power_OnRep_ConjoinedTwin_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E02790
	 * 		Name   -> Function TheTwins.K22Power.OnPowerChargeEmpty
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AK22Power::OnPowerChargeEmpty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.K22Power.OnPowerChargeEmpty");
		
		AK22Power_OnPowerChargeEmpty_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E02710
	 * 		Name   -> Function TheTwins.K22Power.OnFirstAttachmentToSister
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AK22Power::OnFirstAttachmentToSister()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.K22Power.OnFirstAttachmentToSister");
		
		AK22Power_OnFirstAttachmentToSister_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E02570
	 * 		Name   -> Function TheTwins.K22Power.GetConjoinedTwin
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class AConjoinedTwin* AK22Power::GetConjoinedTwin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.K22Power.GetConjoinedTwin");
		
		AK22Power_GetConjoinedTwin_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E023A0
	 * 		Name   -> Function TheTwins.K22Power.Authority_OnPossessTwinChargePercentChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UChargeableComponent*                        ChargeableComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PercentCompletionChange                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TotalPercentComplete                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK22Power::Authority_OnPossessTwinChargePercentChanged(class UChargeableComponent* ChargeableComponent, float PercentCompletionChange, float TotalPercentComplete)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.K22Power.Authority_OnPossessTwinChargePercentChanged");
		
		AK22Power_Authority_OnPossessTwinChargePercentChanged_Params params {};
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
	 * 		RVA    -> 0x04E021F0
	 * 		Name   -> Function TheTwins.K22Power.Authority_OnDestroyTwinChargePercentChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UChargeableComponent*                        ChargeableComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PercentCompletionChange                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TotalPercentComplete                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK22Power::Authority_OnDestroyTwinChargePercentChanged(class UChargeableComponent* ChargeableComponent, float PercentCompletionChange, float TotalPercentComplete)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.K22Power.Authority_OnDestroyTwinChargePercentChanged");
		
		AK22Power_Authority_OnDestroyTwinChargePercentChanged_Params params {};
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
	 * 		Name   -> PredefindFunction AK22Power.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AK22Power::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheTwins.K22Power");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E027F0
	 * 		Name   -> Function TheTwins.K22PowerChargePresentationItemProgressComponent.OnTwinSet
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AConjoinedTwin*                              twin                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK22PowerChargePresentationItemProgressComponent::OnTwinSet(class AConjoinedTwin* twin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.K22PowerChargePresentationItemProgressComponent.OnTwinSet");
		
		UK22PowerChargePresentationItemProgressComponent_OnTwinSet_Params params {};
		params.twin = twin;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK22PowerChargePresentationItemProgressComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK22PowerChargePresentationItemProgressComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheTwins.K22PowerChargePresentationItemProgressComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK22ScoreComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK22ScoreComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheTwins.K22ScoreComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UKillerBeingPossessedInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKillerBeingPossessedInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheTwins.KillerBeingPossessedInteraction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E02A20
	 * 		Name   -> Function TheTwins.PossessionComponent.Server_StartPossessionOf
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
	 * Parameters:
	 * 		class ADBDPlayer*                                  playerToPossess                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               shouldStartBeingPossessedInteraction                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPossessionComponent::Server_StartPossessionOf(class ADBDPlayer* playerToPossess, bool shouldStartBeingPossessedInteraction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.PossessionComponent.Server_StartPossessionOf");
		
		UPossessionComponent_Server_StartPossessionOf_Params params {};
		params.playerToPossess = playerToPossess;
		params.shouldStartBeingPossessedInteraction = shouldStartBeingPossessedInteraction;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E02910
	 * 		Name   -> Function TheTwins.PossessionComponent.Server_NotifyPossessionDone
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
	 */
	void UPossessionComponent::Server_NotifyPossessionDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.PossessionComponent.Server_NotifyPossessionDone");
		
		UPossessionComponent_Server_NotifyPossessionDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E02770
	 * 		Name   -> Function TheTwins.PossessionComponent.OnLevelReadyToPlay
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UPossessionComponent::OnLevelReadyToPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.PossessionComponent.OnLevelReadyToPlay");
		
		UPossessionComponent_OnLevelReadyToPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C38E00
	 * 		Name   -> Function TheTwins.PossessionComponent.Multicast_StartPossessionOf
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		class ADBDPlayer*                                  playerToPossess                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPossessionComponent::Multicast_StartPossessionOf(class ADBDPlayer* playerToPossess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.PossessionComponent.Multicast_StartPossessionOf");
		
		UPossessionComponent_Multicast_StartPossessionOf_Params params {};
		params.playerToPossess = playerToPossess;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x049F8270
	 * 		Name   -> Function TheTwins.PossessionComponent.Multicast_NotifyPossessionDone
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 */
	void UPossessionComponent::Multicast_NotifyPossessionDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.PossessionComponent.Multicast_NotifyPossessionDone");
		
		UPossessionComponent_Multicast_NotifyPossessionDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E025D0
	 * 		Name   -> Function TheTwins.PossessionComponent.IsPossessed
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UPossessionComponent::IsPossessed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.PossessionComponent.IsPossessed");
		
		UPossessionComponent_IsPossessed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04B14920
	 * 		Name   -> Function TheTwins.PossessionComponent.IsDormant
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UPossessionComponent::IsDormant()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.PossessionComponent.IsDormant");
		
		UPossessionComponent_IsDormant_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheTwins.PossessionComponent.CosmeticLocal_OnUncontrolled
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPossessionComponent::CosmeticLocal_OnUncontrolled(class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.PossessionComponent.CosmeticLocal_OnUncontrolled");
		
		UPossessionComponent_CosmeticLocal_OnUncontrolled_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheTwins.PossessionComponent.CosmeticLocal_OnControlled
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPossessionComponent::CosmeticLocal_OnControlled(class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.PossessionComponent.CosmeticLocal_OnControlled");
		
		UPossessionComponent_CosmeticLocal_OnControlled_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheTwins.PossessionComponent.Cosmetic_OnControlledChanged
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsControlled                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPossessionComponent::Cosmetic_OnControlledChanged(class ADBDPlayer* Player, bool IsControlled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.PossessionComponent.Cosmetic_OnControlledChanged");
		
		UPossessionComponent_Cosmetic_OnControlledChanged_Params params {};
		params.Player = Player;
		params.IsControlled = IsControlled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x049E80D0
	 * 		Name   -> Function TheTwins.PossessionComponent.Client_StartStateMachineDriverChangeProcess
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetClient)
	 */
	void UPossessionComponent::Client_StartStateMachineDriverChangeProcess()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.PossessionComponent.Client_StartStateMachineDriverChangeProcess");
		
		UPossessionComponent_Client_StartStateMachineDriverChangeProcess_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPossessionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPossessionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheTwins.PossessionComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E027D0
	 * 		Name   -> Function TheTwins.KillerPossessionComponent.OnRep_ShouldDeactivateCollisionsWithSurvivors
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UKillerPossessionComponent::OnRep_ShouldDeactivateCollisionsWithSurvivors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.KillerPossessionComponent.OnRep_ShouldDeactivateCollisionsWithSurvivors");
		
		UKillerPossessionComponent_OnRep_ShouldDeactivateCollisionsWithSurvivors_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UKillerPossessionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKillerPossessionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheTwins.KillerPossessionComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> DelegateFunction TheTwins.PossessNegationEffectComponent.PlayCantPossessSound__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UPossessNegationEffectComponent::PlayCantPossessSound__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction TheTwins.PossessNegationEffectComponent.PlayCantPossessSound__DelegateSignature");
		
		UPossessNegationEffectComponent_PlayCantPossessSound__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x049F8270
	 * 		Name   -> Function TheTwins.PossessNegationEffectComponent.OnLevelReadyToPlay
	 * 		Flags  -> (Native, Protected)
	 */
	void UPossessNegationEffectComponent::OnLevelReadyToPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.PossessNegationEffectComponent.OnLevelReadyToPlay");
		
		UPossessNegationEffectComponent_OnLevelReadyToPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPossessNegationEffectComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPossessNegationEffectComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheTwins.PossessNegationEffectComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E02880
	 * 		Name   -> Function TheTwins.KillerPossessNegationEffectComponent.OnTwinSet
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AConjoinedTwin*                              twin                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UKillerPossessNegationEffectComponent::OnTwinSet(class AConjoinedTwin* twin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.KillerPossessNegationEffectComponent.OnTwinSet");
		
		UKillerPossessNegationEffectComponent_OnTwinSet_Params params {};
		params.twin = twin;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UKillerPossessNegationEffectComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKillerPossessNegationEffectComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheTwins.KillerPossessNegationEffectComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UOppression.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOppression::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheTwins.Oppression");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPossessTheKiller.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPossessTheKiller::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheTwins.PossessTheKiller");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPowerStruggle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPowerStruggle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheTwins.PowerStruggle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E083A0
	 * 		Name   -> Function TheTwins.PushTwinOnLockerInteraction.OnTwinSet
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AConjoinedTwin*                              twin                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPushTwinOnLockerInteraction::OnTwinSet(class AConjoinedTwin* twin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.PushTwinOnLockerInteraction.OnTwinSet");
		
		UPushTwinOnLockerInteraction_OnTwinSet_Params params {};
		params.twin = twin;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E082B0
	 * 		Name   -> Function TheTwins.PushTwinOnLockerInteraction.OnRep_PushTwinOnLockerChargeable
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UPushTwinOnLockerInteraction::OnRep_PushTwinOnLockerChargeable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.PushTwinOnLockerInteraction.OnRep_PushTwinOnLockerChargeable");
		
		UPushTwinOnLockerInteraction_OnRep_PushTwinOnLockerChargeable_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E07150
	 * 		Name   -> Function TheTwins.PushTwinOnLockerInteraction.Authority_OnPlayerInLockerChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ADBDPlayer*                                  previousPlayerInLocker                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ADBDPlayer*                                  newPlayerInLocker                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPushTwinOnLockerInteraction::Authority_OnPlayerInLockerChanged(class ADBDPlayer* previousPlayerInLocker, class ADBDPlayer* newPlayerInLocker)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.PushTwinOnLockerInteraction.Authority_OnPlayerInLockerChanged");
		
		UPushTwinOnLockerInteraction_Authority_OnPlayerInLockerChanged_Params params {};
		params.previousPlayerInLocker = previousPlayerInLocker;
		params.newPlayerInLocker = newPlayerInLocker;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPushTwinOnLockerInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPushTwinOnLockerInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheTwins.PushTwinOnLockerInteraction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E08430
	 * 		Name   -> Function TheTwins.RecallTwin.OnTwinSet
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AConjoinedTwin*                              twin                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URecallTwin::OnTwinSet(class AConjoinedTwin* twin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.RecallTwin.OnTwinSet");
		
		URecallTwin_OnTwinSet_Params params {};
		params.twin = twin;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction URecallTwin.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URecallTwin::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheTwins.RecallTwin");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E084C0
	 * 		Name   -> Function TheTwins.ReleaseConjoinedTwin.OnTwinSet
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AConjoinedTwin*                              twin                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UReleaseConjoinedTwin::OnTwinSet(class AConjoinedTwin* twin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.ReleaseConjoinedTwin.OnTwinSet");
		
		UReleaseConjoinedTwin_OnTwinSet_Params params {};
		params.twin = twin;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E082D0
	 * 		Name   -> Function TheTwins.ReleaseConjoinedTwin.OnRep_ReleaseAnimationWentToTheEnd
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UReleaseConjoinedTwin::OnRep_ReleaseAnimationWentToTheEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.ReleaseConjoinedTwin.OnRep_ReleaseAnimationWentToTheEnd");
		
		UReleaseConjoinedTwin_OnRep_ReleaseAnimationWentToTheEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E08010
	 * 		Name   -> Function TheTwins.ReleaseConjoinedTwin.OnPowerCollected
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ADBDPlayer*                                  collector                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UReleaseConjoinedTwin::OnPowerCollected(class ADBDPlayer* collector)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.ReleaseConjoinedTwin.OnPowerCollected");
		
		UReleaseConjoinedTwin_OnPowerCollected_Params params {};
		params.collector = collector;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E07D00
	 * 		Name   -> Function TheTwins.ReleaseConjoinedTwin.OnKillerStunned
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UReleaseConjoinedTwin::OnKillerStunned(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.ReleaseConjoinedTwin.OnKillerStunned");
		
		UReleaseConjoinedTwin_OnKillerStunned_Params params {};
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
	 * 		Name   -> Function TheTwins.ReleaseConjoinedTwin.Cosmetic_OnReleaseTwinInteractionUpdateStart
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  sister                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AConjoinedTwin*                              brother                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UReleaseConjoinedTwin::Cosmetic_OnReleaseTwinInteractionUpdateStart(class ADBDPlayer* sister, class AConjoinedTwin* brother)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.ReleaseConjoinedTwin.Cosmetic_OnReleaseTwinInteractionUpdateStart");
		
		UReleaseConjoinedTwin_Cosmetic_OnReleaseTwinInteractionUpdateStart_Params params {};
		params.sister = sister;
		params.brother = brother;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheTwins.ReleaseConjoinedTwin.Cosmetic_OnReleaseTwinInteractionUpdate
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  sister                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AConjoinedTwin*                              brother                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UReleaseConjoinedTwin::Cosmetic_OnReleaseTwinInteractionUpdate(class ADBDPlayer* sister, class AConjoinedTwin* brother, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.ReleaseConjoinedTwin.Cosmetic_OnReleaseTwinInteractionUpdate");
		
		UReleaseConjoinedTwin_Cosmetic_OnReleaseTwinInteractionUpdate_Params params {};
		params.sister = sister;
		params.brother = brother;
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheTwins.ReleaseConjoinedTwin.Cosmetic_OnReleaseChargeComplete
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  sister                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AConjoinedTwin*                              brother                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UReleaseConjoinedTwin::Cosmetic_OnReleaseChargeComplete(class ADBDPlayer* sister, class AConjoinedTwin* brother)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.ReleaseConjoinedTwin.Cosmetic_OnReleaseChargeComplete");
		
		UReleaseConjoinedTwin_Cosmetic_OnReleaseChargeComplete_Params params {};
		params.sister = sister;
		params.brother = brother;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheTwins.ReleaseConjoinedTwin.Cosmetic_OnReleaseCancelled
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  sister                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AConjoinedTwin*                              brother                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UReleaseConjoinedTwin::Cosmetic_OnReleaseCancelled(class ADBDPlayer* sister, class AConjoinedTwin* brother)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.ReleaseConjoinedTwin.Cosmetic_OnReleaseCancelled");
		
		UReleaseConjoinedTwin_Cosmetic_OnReleaseCancelled_Params params {};
		params.sister = sister;
		params.brother = brother;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UReleaseConjoinedTwin.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReleaseConjoinedTwin::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheTwins.ReleaseConjoinedTwin");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E080A0
	 * 		Name   -> Function TheTwins.RemoveTwin.OnRemoveMontageEnd
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		struct FAnimationMontageDescriptor                 Montage                                                    (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		bool                                               interrupted                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ADBDPlayer*                                  destroyingPlayer                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URemoveTwin::OnRemoveMontageEnd(const struct FAnimationMontageDescriptor& Montage, bool interrupted, class ADBDPlayer* destroyingPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.RemoveTwin.OnRemoveMontageEnd");
		
		URemoveTwin_OnRemoveMontageEnd_Params params {};
		params.Montage = Montage;
		params.interrupted = interrupted;
		params.destroyingPlayer = destroyingPlayer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction URemoveTwin.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URemoveTwin::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheTwins.RemoveTwin");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E08550
	 * 		Name   -> Function TheTwins.SisterBlindFlashlightableLightingStrategy.OnTwinSet
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AConjoinedTwin*                              twin                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USisterBlindFlashlightableLightingStrategy::OnTwinSet(class AConjoinedTwin* twin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.SisterBlindFlashlightableLightingStrategy.OnTwinSet");
		
		USisterBlindFlashlightableLightingStrategy_OnTwinSet_Params params {};
		params.twin = twin;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USisterBlindFlashlightableLightingStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USisterBlindFlashlightableLightingStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheTwins.SisterBlindFlashlightableLightingStrategy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C0B640
	 * 		Name   -> Function TheTwins.TheTwinsCheatComponent.Multicast_TrySendThePlayerBackInKiller
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		class UTwinPossessionComponent*                    TwinPossessionComponent                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTheTwinsCheatComponent::Multicast_TrySendThePlayerBackInKiller(class UTwinPossessionComponent* TwinPossessionComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.TheTwinsCheatComponent.Multicast_TrySendThePlayerBackInKiller");
		
		UTheTwinsCheatComponent_Multicast_TrySendThePlayerBackInKiller_Params params {};
		params.TwinPossessionComponent = TwinPossessionComponent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0376CF00
	 * 		Name   -> Function TheTwins.TheTwinsCheatComponent.DBD_TwinDestroyTheTwin
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UTheTwinsCheatComponent::DBD_TwinDestroyTheTwin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.TheTwinsCheatComponent.DBD_TwinDestroyTheTwin");
		
		UTheTwinsCheatComponent_DBD_TwinDestroyTheTwin_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTheTwinsCheatComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTheTwinsCheatComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheTwins.TheTwinsCheatComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D7A170
	 * 		Name   -> Function TheTwins.TwinAOELingeringStatusEffect.Authority_OnInRangeChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               InRange                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTwinAOELingeringStatusEffect::Authority_OnInRangeChanged(bool InRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.TwinAOELingeringStatusEffect.Authority_OnInRangeChanged");
		
		UTwinAOELingeringStatusEffect_Authority_OnInRangeChanged_Params params {};
		params.InRange = InRange;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTwinAOELingeringStatusEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTwinAOELingeringStatusEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheTwins.TwinAOELingeringStatusEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E08220
	 * 		Name   -> Function TheTwins.TwinAttachmentComponent.OnRep_AttachedPlayer
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ADBDPlayer*                                  oldAttachedPlayer                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTwinAttachmentComponent::OnRep_AttachedPlayer(class ADBDPlayer* oldAttachedPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.TwinAttachmentComponent.OnRep_AttachedPlayer");
		
		UTwinAttachmentComponent_OnRep_AttachedPlayer_Params params {};
		params.oldAttachedPlayer = oldAttachedPlayer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E07E30
	 * 		Name   -> Function TheTwins.TwinAttachmentComponent.OnMoriMontageEnd
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		struct FAnimationMontageDescriptor                 Montage                                                    (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		bool                                               interrupted                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTwinAttachmentComponent::OnMoriMontageEnd(const struct FAnimationMontageDescriptor& Montage, bool interrupted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.TwinAttachmentComponent.OnMoriMontageEnd");
		
		UTwinAttachmentComponent_OnMoriMontageEnd_Params params {};
		params.Montage = Montage;
		params.interrupted = interrupted;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E07E10
	 * 		Name   -> Function TheTwins.TwinAttachmentComponent.OnLevelReadyToPlay
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UTwinAttachmentComponent::OnLevelReadyToPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.TwinAttachmentComponent.OnLevelReadyToPlay");
		
		UTwinAttachmentComponent_OnLevelReadyToPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E07C30
	 * 		Name   -> Function TheTwins.TwinAttachmentComponent.OnImmobilizedStateChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		ECamperImmobilizeState                             oldImmobilizeState                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECamperImmobilizeState                             newImmobilizeState                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTwinAttachmentComponent::OnImmobilizedStateChanged(ECamperImmobilizeState oldImmobilizeState, ECamperImmobilizeState newImmobilizeState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.TwinAttachmentComponent.OnImmobilizedStateChanged");
		
		UTwinAttachmentComponent_OnImmobilizedStateChanged_Params params {};
		params.oldImmobilizeState = oldImmobilizeState;
		params.newImmobilizeState = newImmobilizeState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E07A10
	 * 		Name   -> Function TheTwins.TwinAttachmentComponent.OnAttachedSurvivorDamageStateChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		ECamperDamageState                                 oldState                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECamperDamageState                                 NewState                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTwinAttachmentComponent::OnAttachedSurvivorDamageStateChanged(ECamperDamageState oldState, ECamperDamageState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.TwinAttachmentComponent.OnAttachedSurvivorDamageStateChanged");
		
		UTwinAttachmentComponent_OnAttachedSurvivorDamageStateChanged_Params params {};
		params.oldState = oldState;
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x049F8270
	 * 		Name   -> Function TheTwins.TwinAttachmentComponent.Multicast_QuickDestroyTwin
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 */
	void UTwinAttachmentComponent::Multicast_QuickDestroyTwin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.TwinAttachmentComponent.Multicast_QuickDestroyTwin");
		
		UTwinAttachmentComponent_Multicast_QuickDestroyTwin_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E074A0
	 * 		Name   -> Function TheTwins.TwinAttachmentComponent.IsAttachedToSurvivor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTwinAttachmentComponent::IsAttachedToSurvivor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.TwinAttachmentComponent.IsAttachedToSurvivor");
		
		UTwinAttachmentComponent_IsAttachedToSurvivor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E07470
	 * 		Name   -> Function TheTwins.TwinAttachmentComponent.IsAttachedToSister
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTwinAttachmentComponent::IsAttachedToSister()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.TwinAttachmentComponent.IsAttachedToSister");
		
		UTwinAttachmentComponent_IsAttachedToSister_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheTwins.TwinAttachmentComponent.Cosmetic_OnTwinDetachedFromSurvivor
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ADBDPlayer*                                  brother                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTwinAttachmentComponent::Cosmetic_OnTwinDetachedFromSurvivor(class ADBDPlayer* survivor, class ADBDPlayer* brother)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.TwinAttachmentComponent.Cosmetic_OnTwinDetachedFromSurvivor");
		
		UTwinAttachmentComponent_Cosmetic_OnTwinDetachedFromSurvivor_Params params {};
		params.survivor = survivor;
		params.brother = brother;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheTwins.TwinAttachmentComponent.Cosmetic_OnTwinDetachedFromSister
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  sister                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ADBDPlayer*                                  brother                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTwinAttachmentComponent::Cosmetic_OnTwinDetachedFromSister(class ADBDPlayer* sister, class ADBDPlayer* brother)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.TwinAttachmentComponent.Cosmetic_OnTwinDetachedFromSister");
		
		UTwinAttachmentComponent_Cosmetic_OnTwinDetachedFromSister_Params params {};
		params.sister = sister;
		params.brother = brother;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheTwins.TwinAttachmentComponent.Cosmetic_OnTwinAttachedToSurvivor
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ADBDPlayer*                                  brother                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTwinAttachmentComponent::Cosmetic_OnTwinAttachedToSurvivor(class ADBDPlayer* survivor, class ADBDPlayer* brother)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.TwinAttachmentComponent.Cosmetic_OnTwinAttachedToSurvivor");
		
		UTwinAttachmentComponent_Cosmetic_OnTwinAttachedToSurvivor_Params params {};
		params.survivor = survivor;
		params.brother = brother;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheTwins.TwinAttachmentComponent.Cosmetic_OnTwinAttachedToSister
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  sister                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ADBDPlayer*                                  brother                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               isFirstAttachment                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTwinAttachmentComponent::Cosmetic_OnTwinAttachedToSister(class ADBDPlayer* sister, class ADBDPlayer* brother, bool isFirstAttachment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.TwinAttachmentComponent.Cosmetic_OnTwinAttachedToSister");
		
		UTwinAttachmentComponent_Cosmetic_OnTwinAttachedToSister_Params params {};
		params.sister = sister;
		params.brother = brother;
		params.isFirstAttachment = isFirstAttachment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E07220
	 * 		Name   -> Function TheTwins.TwinAttachmentComponent.Authority_OnRemoveTwinChargePercentChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UChargeableComponent*                        ChargeableComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PercentCompletionChange                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TotalPercentComplete                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTwinAttachmentComponent::Authority_OnRemoveTwinChargePercentChanged(class UChargeableComponent* ChargeableComponent, float PercentCompletionChange, float TotalPercentComplete)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.TwinAttachmentComponent.Authority_OnRemoveTwinChargePercentChanged");
		
		UTwinAttachmentComponent_Authority_OnRemoveTwinChargePercentChanged_Params params {};
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
	 * 		Name   -> PredefindFunction UTwinAttachmentComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTwinAttachmentComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheTwins.TwinAttachmentComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E07350
	 * 		Name   -> Function TheTwins.TwinBaseAddon.Authority_OnTwinSet
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AConjoinedTwin*                              twin                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTwinBaseAddon::Authority_OnTwinSet(class AConjoinedTwin* twin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.TwinBaseAddon.Authority_OnTwinSet");
		
		UTwinBaseAddon_Authority_OnTwinSet_Params params {};
		params.twin = twin;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTwinBaseAddon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTwinBaseAddon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheTwins.TwinBaseAddon");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E070C0
	 * 		Name   -> Function TheTwins.TwinBaseKillerInstinctEffect.Authority_OnInRangeChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               InRange                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTwinBaseKillerInstinctEffect::Authority_OnInRangeChanged(bool InRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.TwinBaseKillerInstinctEffect.Authority_OnInRangeChanged");
		
		UTwinBaseKillerInstinctEffect_Authority_OnInRangeChanged_Params params {};
		params.InRange = InRange;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTwinBaseKillerInstinctEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTwinBaseKillerInstinctEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheTwins.TwinBaseKillerInstinctEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTwinBeingPossessedInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTwinBeingPossessedInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheTwins.TwinBeingPossessedInteraction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTwinCharacterMovementComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTwinCharacterMovementComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheTwins.TwinCharacterMovementComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheTwins.TwinDestructionComponent.OnTwinQuickDestroy
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AConjoinedTwin*                              owningTwin                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTwinDestructionComponent::OnTwinQuickDestroy(class AConjoinedTwin* owningTwin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.TwinDestructionComponent.OnTwinQuickDestroy");
		
		UTwinDestructionComponent_OnTwinQuickDestroy_Params params {};
		params.owningTwin = owningTwin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E07AE0
	 * 		Name   -> Function TheTwins.TwinDestructionComponent.OnDyingMontageEnd
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		struct FAnimationMontageDescriptor                 Montage                                                    (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		bool                                               interrupted                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTwinDestructionComponent::OnDyingMontageEnd(const struct FAnimationMontageDescriptor& Montage, bool interrupted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.TwinDestructionComponent.OnDyingMontageEnd");
		
		UTwinDestructionComponent_OnDyingMontageEnd_Params params {};
		params.Montage = Montage;
		params.interrupted = interrupted;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheTwins.TwinDestructionComponent.Cosmetic_OnTwinDestroyedFromSurvivorRemove
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AConjoinedTwin*                              owningTwin                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTwinDestructionComponent::Cosmetic_OnTwinDestroyedFromSurvivorRemove(class AConjoinedTwin* owningTwin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.TwinDestructionComponent.Cosmetic_OnTwinDestroyedFromSurvivorRemove");
		
		UTwinDestructionComponent_Cosmetic_OnTwinDestroyedFromSurvivorRemove_Params params {};
		params.owningTwin = owningTwin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheTwins.TwinDestructionComponent.Cosmetic_OnTwinDestroyedFromKick
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AConjoinedTwin*                              owningTwin                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTwinDestructionComponent::Cosmetic_OnTwinDestroyedFromKick(class AConjoinedTwin* owningTwin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.TwinDestructionComponent.Cosmetic_OnTwinDestroyedFromKick");
		
		UTwinDestructionComponent_Cosmetic_OnTwinDestroyedFromKick_Params params {};
		params.owningTwin = owningTwin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E07330
	 * 		Name   -> Function TheTwins.TwinDestructionComponent.Authority_OnTwinQuickDestroyOver
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Protected, BlueprintCallable)
	 */
	void UTwinDestructionComponent::Authority_OnTwinQuickDestroyOver()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.TwinDestructionComponent.Authority_OnTwinQuickDestroyOver");
		
		UTwinDestructionComponent_Authority_OnTwinQuickDestroyOver_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTwinDestructionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTwinDestructionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheTwins.TwinDestructionComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTwinFirstPersonViewComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTwinFirstPersonViewComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheTwins.TwinFirstPersonViewComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTwinHuskAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTwinHuskAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheTwins.TwinHuskAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04A6B1D0
	 * 		Name   -> Function TheTwins.TwinHuskStateComponent.IsDeadFromSurvivorBack
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTwinHuskStateComponent::IsDeadFromSurvivorBack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.TwinHuskStateComponent.IsDeadFromSurvivorBack");
		
		UTwinHuskStateComponent_IsDeadFromSurvivorBack_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTwinHuskStateComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTwinHuskStateComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheTwins.TwinHuskStateComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTwinInspectEmptyLocker.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTwinInspectEmptyLocker::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheTwins.TwinInspectEmptyLocker");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTwinInspectOccupiedLocker.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTwinInspectOccupiedLocker::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheTwins.TwinInspectOccupiedLocker");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E08630
	 * 		Name   -> Function TheTwins.TwinJumpAttack.Server_StopJump
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	 */
	void UTwinJumpAttack::Server_StopJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.TwinJumpAttack.Server_StopJump");
		
		UTwinJumpAttack_Server_StopJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E085E0
	 * 		Name   -> Function TheTwins.TwinJumpAttack.Server_OnJumpStartTwin
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	 */
	void UTwinJumpAttack::Server_OnJumpStartTwin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.TwinJumpAttack.Server_OnJumpStartTwin");
		
		UTwinJumpAttack_Server_OnJumpStartTwin_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E082F0
	 * 		Name   -> Function TheTwins.TwinJumpAttack.OnRep_ShouldTwinHaveJumpObjectType
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UTwinJumpAttack::OnRep_ShouldTwinHaveJumpObjectType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.TwinJumpAttack.OnRep_ShouldTwinHaveJumpObjectType");
		
		UTwinJumpAttack_OnRep_ShouldTwinHaveJumpObjectType_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E07980
	 * 		Name   -> Function TheTwins.TwinJumpAttack.Multicast_SetIsForbiddenLandingLocation
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		bool                                               isForbiddenLocation                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTwinJumpAttack::Multicast_SetIsForbiddenLandingLocation(bool isForbiddenLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.TwinJumpAttack.Multicast_SetIsForbiddenLandingLocation");
		
		UTwinJumpAttack_Multicast_SetIsForbiddenLandingLocation_Params params {};
		params.isForbiddenLocation = isForbiddenLocation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E07960
	 * 		Name   -> Function TheTwins.TwinJumpAttack.Multicast_DestroyTwinOnWrongLanding
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 */
	void UTwinJumpAttack::Multicast_DestroyTwinOnWrongLanding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.TwinJumpAttack.Multicast_DestroyTwinOnWrongLanding");
		
		UTwinJumpAttack_Multicast_DestroyTwinOnWrongLanding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E078D0
	 * 		Name   -> Function TheTwins.TwinJumpAttack.Multicast_AttachToSurvivor
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		class ADBDPlayer*                                  survivorToAttachTo                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTwinJumpAttack::Multicast_AttachToSurvivor(class ADBDPlayer* survivorToAttachTo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.TwinJumpAttack.Multicast_AttachToSurvivor");
		
		UTwinJumpAttack_Multicast_AttachToSurvivor_Params params {};
		params.survivorToAttachTo = survivorToAttachTo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheTwins.TwinJumpAttack.Cosmetic_OnJumpStarted
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AConjoinedTwin*                              owningTwin                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTwinJumpAttack::Cosmetic_OnJumpStarted(class AConjoinedTwin* owningTwin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.TwinJumpAttack.Cosmetic_OnJumpStarted");
		
		UTwinJumpAttack_Cosmetic_OnJumpStarted_Params params {};
		params.owningTwin = owningTwin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheTwins.TwinJumpAttack.Cosmetic_OnJumpObstructed
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasDefaults, BlueprintEvent)
	 * Parameters:
	 * 		class AConjoinedTwin*                              owningTwin                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPhysicalMaterial*                           PhysicalMaterial                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Normal                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTwinJumpAttack::Cosmetic_OnJumpObstructed(class AConjoinedTwin* owningTwin, class UPhysicalMaterial* PhysicalMaterial, const struct FVector& position, const struct FVector& Normal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.TwinJumpAttack.Cosmetic_OnJumpObstructed");
		
		UTwinJumpAttack_Cosmetic_OnJumpObstructed_Params params {};
		params.owningTwin = owningTwin;
		params.PhysicalMaterial = PhysicalMaterial;
		params.position = position;
		params.Normal = Normal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheTwins.TwinJumpAttack.Cosmetic_OnJumpLanded
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AConjoinedTwin*                              owningTwin                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTwinJumpAttack::Cosmetic_OnJumpLanded(class AConjoinedTwin* owningTwin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.TwinJumpAttack.Cosmetic_OnJumpLanded");
		
		UTwinJumpAttack_Cosmetic_OnJumpLanded_Params params {};
		params.owningTwin = owningTwin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheTwins.TwinJumpAttack.Cosmetic_OnJumpCooldownChanged
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isInJumpCooldown                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AConjoinedTwin*                              owningTwin                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTwinJumpAttack::Cosmetic_OnJumpCooldownChanged(bool isInJumpCooldown, class AConjoinedTwin* owningTwin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.TwinJumpAttack.Cosmetic_OnJumpCooldownChanged");
		
		UTwinJumpAttack_Cosmetic_OnJumpCooldownChanged_Params params {};
		params.isInJumpCooldown = isInJumpCooldown;
		params.owningTwin = owningTwin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheTwins.TwinJumpAttack.Cosmetic_OnIsForbiddenLandingLocationChanged
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isForbiddenLocation                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AConjoinedTwin*                              twin                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTwinJumpAttack::Cosmetic_OnIsForbiddenLandingLocationChanged(bool isForbiddenLocation, class AConjoinedTwin* twin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.TwinJumpAttack.Cosmetic_OnIsForbiddenLandingLocationChanged");
		
		UTwinJumpAttack_Cosmetic_OnIsForbiddenLandingLocationChanged_Params params {};
		params.isForbiddenLocation = isForbiddenLocation;
		params.twin = twin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E073E0
	 * 		Name   -> Function TheTwins.TwinJumpAttack.Client_Debug_PrintFinalDecisionOnScreen
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetClient)
	 * Parameters:
	 * 		bool                                               foundPath                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTwinJumpAttack::Client_Debug_PrintFinalDecisionOnScreen(bool foundPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.TwinJumpAttack.Client_Debug_PrintFinalDecisionOnScreen");
		
		UTwinJumpAttack_Client_Debug_PrintFinalDecisionOnScreen_Params params {};
		params.foundPath = foundPath;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTwinJumpAttack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTwinJumpAttack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheTwins.TwinJumpAttack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E076B0
	 * 		Name   -> Function TheTwins.TwinJumpAttackOpenSubstate.Local_OnTwinOverlapEnter
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UTwinJumpAttackOpenSubstate::Local_OnTwinOverlapEnter(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.TwinJumpAttackOpenSubstate.Local_OnTwinOverlapEnter");
		
		UTwinJumpAttackOpenSubstate_Local_OnTwinOverlapEnter_Params params {};
		params.HitComponent = HitComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E074D0
	 * 		Name   -> Function TheTwins.TwinJumpAttackOpenSubstate.Local_OnTwinCapsuleHit
	 * 		Flags  -> (Final, Native, Private, HasOutParms, HasDefaults)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NormalImpulse                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UTwinJumpAttackOpenSubstate::Local_OnTwinCapsuleHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.TwinJumpAttackOpenSubstate.Local_OnTwinCapsuleHit");
		
		UTwinJumpAttackOpenSubstate_Local_OnTwinCapsuleHit_Params params {};
		params.HitComponent = HitComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.NormalImpulse = NormalImpulse;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTwinJumpAttackOpenSubstate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTwinJumpAttackOpenSubstate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheTwins.TwinJumpAttackOpenSubstate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTwinJumpAttackSuccessSubstate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTwinJumpAttackSuccessSubstate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheTwins.TwinJumpAttackSuccessSubstate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTwinJumpAttackMissSubstate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTwinJumpAttackMissSubstate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheTwins.TwinJumpAttackMissSubstate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTwinJumpAttackObstructSubstate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTwinJumpAttackObstructSubstate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheTwins.TwinJumpAttackObstructSubstate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheTwins.TwinJumpAudioMutedEffect.Cosmetic_OnTwinUnmuted
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void UTwinJumpAudioMutedEffect::Cosmetic_OnTwinUnmuted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.TwinJumpAudioMutedEffect.Cosmetic_OnTwinUnmuted");
		
		UTwinJumpAudioMutedEffect_Cosmetic_OnTwinUnmuted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheTwins.TwinJumpAudioMutedEffect.Cosmetic_OnTwinMuted
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void UTwinJumpAudioMutedEffect::Cosmetic_OnTwinMuted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.TwinJumpAudioMutedEffect.Cosmetic_OnTwinMuted");
		
		UTwinJumpAudioMutedEffect_Cosmetic_OnTwinMuted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTwinJumpAudioMutedEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTwinJumpAudioMutedEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheTwins.TwinJumpAudioMutedEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E09C60
	 * 		Name   -> Function TheTwins.TwinJumpTargetVisibleEffect.OnJumpTargetTick
	 * 		Flags  -> (Final, Native, Private, HasDefaults)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTwinJumpTargetVisibleEffect::OnJumpTargetTick(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.TwinJumpTargetVisibleEffect.OnJumpTargetTick");
		
		UTwinJumpTargetVisibleEffect_OnJumpTargetTick_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E09C40
	 * 		Name   -> Function TheTwins.TwinJumpTargetVisibleEffect.OnHideTargetPosition
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UTwinJumpTargetVisibleEffect::OnHideTargetPosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.TwinJumpTargetVisibleEffect.OnHideTargetPosition");
		
		UTwinJumpTargetVisibleEffect_OnHideTargetPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTwinJumpTargetVisibleEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTwinJumpTargetVisibleEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheTwins.TwinJumpTargetVisibleEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E0A050
	 * 		Name   -> Function TheTwins.TwinLockerBlockerComponent.OnPushedMontageStopped
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		struct FAnimationMontageDescriptor                 montageDescriptor                                          (ConstParm, Parm, NativeAccessSpecifierPublic)
	 */
	void UTwinLockerBlockerComponent::OnPushedMontageStopped(const struct FAnimationMontageDescriptor& montageDescriptor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.TwinLockerBlockerComponent.OnPushedMontageStopped");
		
		UTwinLockerBlockerComponent_OnPushedMontageStopped_Params params {};
		params.montageDescriptor = montageDescriptor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E09F10
	 * 		Name   -> Function TheTwins.TwinLockerBlockerComponent.OnPushedMontageStarted
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		struct FAnimationMontageDescriptor                 montageDescriptor                                          (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		float                                              Rate                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTwinLockerBlockerComponent::OnPushedMontageStarted(const struct FAnimationMontageDescriptor& montageDescriptor, float Rate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.TwinLockerBlockerComponent.OnPushedMontageStarted");
		
		UTwinLockerBlockerComponent_OnPushedMontageStarted_Params params {};
		params.montageDescriptor = montageDescriptor;
		params.Rate = Rate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E09DC0
	 * 		Name   -> Function TheTwins.TwinLockerBlockerComponent.OnPushedMontageEnded
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		struct FAnimationMontageDescriptor                 montageDescriptor                                          (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		bool                                               interrupted                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTwinLockerBlockerComponent::OnPushedMontageEnded(const struct FAnimationMontageDescriptor& montageDescriptor, bool interrupted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.TwinLockerBlockerComponent.OnPushedMontageEnded");
		
		UTwinLockerBlockerComponent_OnPushedMontageEnded_Params params {};
		params.montageDescriptor = montageDescriptor;
		params.interrupted = interrupted;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E09CF0
	 * 		Name   -> Function TheTwins.TwinLockerBlockerComponent.OnPlayerInLockerChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ADBDPlayer*                                  previousPlayerInLocker                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ADBDPlayer*                                  newPlayerInLocker                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTwinLockerBlockerComponent::OnPlayerInLockerChanged(class ADBDPlayer* previousPlayerInLocker, class ADBDPlayer* newPlayerInLocker)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.TwinLockerBlockerComponent.OnPlayerInLockerChanged");
		
		UTwinLockerBlockerComponent_OnPlayerInLockerChanged_Params params {};
		params.previousPlayerInLocker = previousPlayerInLocker;
		params.newPlayerInLocker = newPlayerInLocker;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E09B80
	 * 		Name   -> Function TheTwins.TwinLockerBlockerComponent.IsTwinAttachedToLocker
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTwinLockerBlockerComponent::IsTwinAttachedToLocker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.TwinLockerBlockerComponent.IsTwinAttachedToLocker");
		
		UTwinLockerBlockerComponent_IsTwinAttachedToLocker_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheTwins.TwinLockerBlockerComponent.Cosmetic_OnTwinOnLockerChanged
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isOnLocker                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTwinLockerBlockerComponent::Cosmetic_OnTwinOnLockerChanged(bool isOnLocker)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.TwinLockerBlockerComponent.Cosmetic_OnTwinOnLockerChanged");
		
		UTwinLockerBlockerComponent_Cosmetic_OnTwinOnLockerChanged_Params params {};
		params.isOnLocker = isOnLocker;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E09B60
	 * 		Name   -> Function TheTwins.TwinLockerBlockerComponent.Authority_OnLevelReadyToPlay
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UTwinLockerBlockerComponent::Authority_OnLevelReadyToPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.TwinLockerBlockerComponent.Authority_OnLevelReadyToPlay");
		
		UTwinLockerBlockerComponent_Authority_OnLevelReadyToPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTwinLockerBlockerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTwinLockerBlockerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheTwins.TwinLockerBlockerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTwinLullabyRangeAdditiveEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTwinLullabyRangeAdditiveEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheTwins.TwinLullabyRangeAdditiveEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTwinOutlineUpdateStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTwinOutlineUpdateStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheTwins.TwinOutlineUpdateStrategy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTwinPlacerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTwinPlacerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheTwins.TwinPlacerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTwinPossessionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTwinPossessionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheTwins.TwinPossessionComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTwinPossessNegationEffectComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTwinPossessNegationEffectComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheTwins.TwinPossessNegationEffectComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTwinsAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTwinsAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheTwins.TwinsAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTwinsSurvivorSubAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTwinsSurvivorSubAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheTwins.TwinsSurvivorSubAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTwinStateHelperComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTwinStateHelperComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheTwins.TwinStateHelperComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTwinStunnableComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTwinStunnableComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheTwins.TwinStunnableComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042AAD70
	 * 		Name   -> Function TheTwins.TwinSubjectProvider.OnTwinSet
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AConjoinedTwin*                              twin                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTwinSubjectProvider::OnTwinSet(class AConjoinedTwin* twin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.TwinSubjectProvider.OnTwinSet");
		
		UTwinSubjectProvider_OnTwinSet_Params params {};
		params.twin = twin;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E09BB0
	 * 		Name   -> Function TheTwins.TwinSubjectProvider.ListenToTwinSet
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ASlasherPlayer*                              killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTwinSubjectProvider::ListenToTwinSet(class ASlasherPlayer* killer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheTwins.TwinSubjectProvider.ListenToTwinSet");
		
		UTwinSubjectProvider_ListenToTwinSet_Params params {};
		params.killer = killer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTwinSubjectProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTwinSubjectProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheTwins.TwinSubjectProvider");
		return ptr;
	}

}


