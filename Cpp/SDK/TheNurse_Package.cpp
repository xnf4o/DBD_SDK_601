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
	 * 		Name   -> PredefindFunction UActivateByBlinkAttackTimedEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActivateByBlinkAttackTimedEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheNurse.ActivateByBlinkAttackTimedEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheNurse.AnxiousGaspAddon.PlayScream
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent, Const)
	 * Parameters:
	 * 		class ACamperPlayer*                               survivor                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnxiousGaspAddon::PlayScream(class ACamperPlayer* survivor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheNurse.AnxiousGaspAddon.PlayScream");
		
		UAnxiousGaspAddon_PlayScream_Params params {};
		params.survivor = survivor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D76B20
	 * 		Name   -> Function TheNurse.AnxiousGaspAddon.OnDetectorOverlapBegin
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UAnxiousGaspAddon::OnDetectorOverlapBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheNurse.AnxiousGaspAddon.OnDetectorOverlapBegin");
		
		UAnxiousGaspAddon_OnDetectorOverlapBegin_Params params {};
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAnxiousGaspAddon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnxiousGaspAddon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheNurse.AnxiousGaspAddon");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBaseInstantBlinkInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseInstantBlinkInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheNurse.BaseInstantBlinkInteraction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAutomaticBlinkInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutomaticBlinkInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheNurse.AutomaticBlinkInteraction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBadMansLastBreathAddon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBadMansLastBreathAddon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheNurse.BadMansLastBreathAddon");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04B044C0
	 * 		Name   -> Function TheNurse.BalancedLanding.Server_WarnBalancedLandingPredicted
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer, BlueprintCallable)
	 */
	void UBalancedLanding::Server_WarnBalancedLandingPredicted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheNurse.BalancedLanding.Server_WarnBalancedLandingPredicted");
		
		UBalancedLanding_Server_WarnBalancedLandingPredicted_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042AA8F0
	 * 		Name   -> Function TheNurse.BalancedLanding.Client_UnvalidateBalanceLanding
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetClient)
	 */
	void UBalancedLanding::Client_UnvalidateBalanceLanding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheNurse.BalancedLanding.Client_UnvalidateBalanceLanding");
		
		UBalancedLanding_Client_UnvalidateBalanceLanding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBalancedLanding.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBalancedLanding::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheNurse.BalancedLanding");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBaseNursePerk.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseNursePerk::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheNurse.BaseNursePerk");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBlinkAttack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlinkAttack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheNurse.BlinkAttack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBlinkAttackSuccessSubstate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlinkAttackSuccessSubstate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheNurse.BlinkAttackSuccessSubstate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBlinkBackInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlinkBackInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheNurse.BlinkBackInteraction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBlinkIndicatorController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlinkIndicatorController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheNurse.BlinkIndicatorController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBlinkInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlinkInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheNurse.BlinkInteraction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D78220
	 * 		Name   -> Function TheNurse.BlinkPlayerComponent.Server_StartBlink
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer)
	 * Parameters:
	 * 		struct FBlinkParams                                Params                                                     (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UBlinkPlayerComponent::Server_StartBlink(const struct FBlinkParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheNurse.BlinkPlayerComponent.Server_StartBlink");
		
		UBlinkPlayerComponent_Server_StartBlink_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042E2360
	 * 		Name   -> Function TheNurse.BlinkPlayerComponent.Server_EndBlink
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer)
	 */
	void UBlinkPlayerComponent::Server_EndBlink()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheNurse.BlinkPlayerComponent.Server_EndBlink");
		
		UBlinkPlayerComponent_Server_EndBlink_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D78150
	 * 		Name   -> Function TheNurse.BlinkPlayerComponent.Multicast_StartBlink
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		struct FBlinkParams                                Params                                                     (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UBlinkPlayerComponent::Multicast_StartBlink(const struct FBlinkParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheNurse.BlinkPlayerComponent.Multicast_StartBlink");
		
		UBlinkPlayerComponent_Multicast_StartBlink_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x049F8270
	 * 		Name   -> Function TheNurse.BlinkPlayerComponent.Multicast_EndBlink
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 */
	void UBlinkPlayerComponent::Multicast_EndBlink()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheNurse.BlinkPlayerComponent.Multicast_EndBlink");
		
		UBlinkPlayerComponent_Multicast_EndBlink_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D78040
	 * 		Name   -> Function TheNurse.BlinkPlayerComponent.Local_OnMovementModeChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ACharacter*                                  Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMovementMode                                      PrevMovementMode                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      PreviousCustomMode                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBlinkPlayerComponent::Local_OnMovementModeChanged(class ACharacter* Character, EMovementMode PrevMovementMode, unsigned char PreviousCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheNurse.BlinkPlayerComponent.Local_OnMovementModeChanged");
		
		UBlinkPlayerComponent_Local_OnMovementModeChanged_Params params {};
		params.Character = Character;
		params.PrevMovementMode = PrevMovementMode;
		params.PreviousCustomMode = PreviousCustomMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBlinkPlayerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlinkPlayerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheNurse.BlinkPlayerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBlinkPowerDebugComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlinkPowerDebugComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheNurse.BlinkPowerDebugComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBlinkPowerEventDispatcher.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlinkPowerEventDispatcher::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheNurse.BlinkPowerEventDispatcher");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ABlinkPowerItem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABlinkPowerItem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheNurse.BlinkPowerItem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D794A0
	 * 		Name   -> Function TheNurse.BlinkPowerPlayerComponent.Setup
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FBlinkPowerSetupParams                      Params                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UBlinkPowerPlayerComponent::Setup(const struct FBlinkPowerSetupParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheNurse.BlinkPowerPlayerComponent.Setup");
		
		UBlinkPowerPlayerComponent_Setup_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04A96560
	 * 		Name   -> Function TheNurse.BlinkPowerPlayerComponent.Server_TriggerCooldown
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer)
	 * Parameters:
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBlinkPowerPlayerComponent::Server_TriggerCooldown(float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheNurse.BlinkPowerPlayerComponent.Server_TriggerCooldown");
		
		UBlinkPowerPlayerComponent_Server_TriggerCooldown_Params params {};
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D79410
	 * 		Name   -> Function TheNurse.BlinkPowerPlayerComponent.Server_TriggerChainBlink
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer)
	 * Parameters:
	 * 		int32_t                                            remainingBlinkCharges                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBlinkPowerPlayerComponent::Server_TriggerChainBlink(int32_t remainingBlinkCharges)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheNurse.BlinkPowerPlayerComponent.Server_TriggerChainBlink");
		
		UBlinkPowerPlayerComponent_Server_TriggerChainBlink_Params params {};
		params.remainingBlinkCharges = remainingBlinkCharges;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04A16A80
	 * 		Name   -> Function TheNurse.BlinkPowerPlayerComponent.Server_SetState
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer)
	 * Parameters:
	 * 		EBlinkPowerState                                   State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBlinkPowerPlayerComponent::Server_SetState(EBlinkPowerState State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheNurse.BlinkPowerPlayerComponent.Server_SetState");
		
		UBlinkPowerPlayerComponent_Server_SetState_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C0B640
	 * 		Name   -> Function TheNurse.BlinkPowerPlayerComponent.Server_InterruptDuringChainBlink
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer)
	 * Parameters:
	 * 		class AActor*                                      interruptedPlayer                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBlinkPowerPlayerComponent::Server_InterruptDuringChainBlink(class AActor* interruptedPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheNurse.BlinkPowerPlayerComponent.Server_InterruptDuringChainBlink");
		
		UBlinkPowerPlayerComponent_Server_InterruptDuringChainBlink_Params params {};
		params.interruptedPlayer = interruptedPlayer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D79390
	 * 		Name   -> Function TheNurse.BlinkPowerPlayerComponent.OnRep_BlinkState
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		EBlinkPowerState                                   oldState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBlinkPowerPlayerComponent::OnRep_BlinkState(EBlinkPowerState oldState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheNurse.BlinkPowerPlayerComponent.OnRep_BlinkState");
		
		UBlinkPowerPlayerComponent_OnRep_BlinkState_Params params {};
		params.oldState = oldState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D79370
	 * 		Name   -> Function TheNurse.BlinkPowerPlayerComponent.OnRep_BlinkCharges
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UBlinkPowerPlayerComponent::OnRep_BlinkCharges()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheNurse.BlinkPowerPlayerComponent.OnRep_BlinkCharges");
		
		UBlinkPowerPlayerComponent_OnRep_BlinkCharges_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D79350
	 * 		Name   -> Function TheNurse.BlinkPowerPlayerComponent.OnLevelReadyToPlay
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UBlinkPowerPlayerComponent::OnLevelReadyToPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheNurse.BlinkPowerPlayerComponent.OnLevelReadyToPlay");
		
		UBlinkPowerPlayerComponent_OnLevelReadyToPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D792D0
	 * 		Name   -> Function TheNurse.BlinkPowerPlayerComponent.OnAttackStarted
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		EAttackType                                        attackType                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBlinkPowerPlayerComponent::OnAttackStarted(EAttackType attackType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheNurse.BlinkPowerPlayerComponent.OnAttackStarted");
		
		UBlinkPowerPlayerComponent_OnAttackStarted_Params params {};
		params.attackType = attackType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D79250
	 * 		Name   -> Function TheNurse.BlinkPowerPlayerComponent.OnAttackFinished
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		EAttackType                                        attackType                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBlinkPowerPlayerComponent::OnAttackFinished(EAttackType attackType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheNurse.BlinkPowerPlayerComponent.OnAttackFinished");
		
		UBlinkPowerPlayerComponent_OnAttackFinished_Params params {};
		params.attackType = attackType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D79220
	 * 		Name   -> Function TheNurse.BlinkPowerPlayerComponent.IsChargingBlink
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UBlinkPowerPlayerComponent::IsChargingBlink()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheNurse.BlinkPowerPlayerComponent.IsChargingBlink");
		
		UBlinkPowerPlayerComponent_IsChargingBlink_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D791F0
	 * 		Name   -> Function TheNurse.BlinkPowerPlayerComponent.IsChargeFull
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UBlinkPowerPlayerComponent::IsChargeFull()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheNurse.BlinkPowerPlayerComponent.IsChargeFull");
		
		UBlinkPowerPlayerComponent_IsChargeFull_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D791C0
	 * 		Name   -> Function TheNurse.BlinkPowerPlayerComponent.IsBlinking
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UBlinkPowerPlayerComponent::IsBlinking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheNurse.BlinkPowerPlayerComponent.IsBlinking");
		
		UBlinkPowerPlayerComponent_IsBlinking_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D79190
	 * 		Name   -> Function TheNurse.BlinkPowerPlayerComponent.GetRechargeProgressPercent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UBlinkPowerPlayerComponent::GetRechargeProgressPercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheNurse.BlinkPowerPlayerComponent.GetRechargeProgressPercent");
		
		UBlinkPowerPlayerComponent_GetRechargeProgressPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D79160
	 * 		Name   -> Function TheNurse.BlinkPowerPlayerComponent.GetPowerState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EBlinkPowerState UBlinkPowerPlayerComponent::GetPowerState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheNurse.BlinkPowerPlayerComponent.GetPowerState");
		
		UBlinkPowerPlayerComponent_GetPowerState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D79130
	 * 		Name   -> Function TheNurse.BlinkPowerPlayerComponent.GetCooldownTimerDuration
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UBlinkPowerPlayerComponent::GetCooldownTimerDuration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheNurse.BlinkPowerPlayerComponent.GetCooldownTimerDuration");
		
		UBlinkPowerPlayerComponent_GetCooldownTimerDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D79100
	 * 		Name   -> Function TheNurse.BlinkPowerPlayerComponent.GetCooldownRemainingTime
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UBlinkPowerPlayerComponent::GetCooldownRemainingTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheNurse.BlinkPowerPlayerComponent.GetCooldownRemainingTime");
		
		UBlinkPowerPlayerComponent_GetCooldownRemainingTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D790D0
	 * 		Name   -> Function TheNurse.BlinkPowerPlayerComponent.GetCooldownProgressPercent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UBlinkPowerPlayerComponent::GetCooldownProgressPercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheNurse.BlinkPowerPlayerComponent.GetCooldownProgressPercent");
		
		UBlinkPowerPlayerComponent_GetCooldownProgressPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D790A0
	 * 		Name   -> Function TheNurse.BlinkPowerPlayerComponent.GetChainBlinkTimerDuration
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UBlinkPowerPlayerComponent::GetChainBlinkTimerDuration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheNurse.BlinkPowerPlayerComponent.GetChainBlinkTimerDuration");
		
		UBlinkPowerPlayerComponent_GetChainBlinkTimerDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D79070
	 * 		Name   -> Function TheNurse.BlinkPowerPlayerComponent.GetChainBlinkRemainingTime
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UBlinkPowerPlayerComponent::GetChainBlinkRemainingTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheNurse.BlinkPowerPlayerComponent.GetChainBlinkRemainingTime");
		
		UBlinkPowerPlayerComponent_GetChainBlinkRemainingTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D79040
	 * 		Name   -> Function TheNurse.BlinkPowerPlayerComponent.GetChainBlinkProgressPercent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UBlinkPowerPlayerComponent::GetChainBlinkProgressPercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheNurse.BlinkPowerPlayerComponent.GetChainBlinkProgressPercent");
		
		UBlinkPowerPlayerComponent_GetChainBlinkProgressPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D79010
	 * 		Name   -> Function TheNurse.BlinkPowerPlayerComponent.GetBlinkCharges
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UBlinkPowerPlayerComponent::GetBlinkCharges()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheNurse.BlinkPowerPlayerComponent.GetBlinkCharges");
		
		UBlinkPowerPlayerComponent_GetBlinkCharges_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBlinkPowerPlayerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlinkPowerPlayerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheNurse.BlinkPowerPlayerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBlinkTargetFinder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlinkTargetFinder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheNurse.BlinkTargetFinder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMatchboxAddon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMatchboxAddon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheNurse.MatchboxAddon");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheNurse.NurseAnimInstance.OnBlinkTriggered
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UNurseAnimInstance::OnBlinkTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheNurse.NurseAnimInstance.OnBlinkTriggered");
		
		UNurseAnimInstance_OnBlinkTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UNurseAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNurseAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheNurse.NurseAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UNurseAttackPicker.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNurseAttackPicker::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheNurse.NurseAttackPicker");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UNurseBurnable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNurseBurnable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheNurse.NurseBurnable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D79D00
	 * 		Name   -> Function TheNurse.NurseHelper.GetBlinkPowerItem
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ABlinkPowerItem* UNurseHelper::STATIC_GetBlinkPowerItem(class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheNurse.NurseHelper.GetBlinkPowerItem");
		
		UNurseHelper_GetBlinkPowerItem_Params params {};
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
	 * 		Name   -> PredefindFunction UNurseHelper.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNurseHelper::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheNurse.NurseHelper");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USpasmodicBreathAddon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpasmodicBreathAddon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheNurse.SpasmodicBreathAddon");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D7A170
	 * 		Name   -> Function TheNurse.StreetwiseEffect.Authority_OnInRangeChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               InRange                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UStreetwiseEffect::Authority_OnInRangeChanged(bool InRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheNurse.StreetwiseEffect.Authority_OnInRangeChanged");
		
		UStreetwiseEffect_Authority_OnInRangeChanged_Params params {};
		params.InRange = InRange;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UStreetwiseEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStreetwiseEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheNurse.StreetwiseEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UThanatophobiaEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UThanatophobiaEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheNurse.ThanatophobiaEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UThanatophobiaPerk.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UThanatophobiaPerk::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheNurse.ThanatophobiaPerk");
		return ptr;
	}

}


