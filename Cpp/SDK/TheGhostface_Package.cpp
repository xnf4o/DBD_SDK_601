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
	 * 		Name   -> PredefindFunction UAddon_Ghost_DriversLicense.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddon_Ghost_DriversLicense::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheGhostface.Addon_Ghost_DriversLicense");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAddon_Ghost_OlsensAddressBook.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddon_Ghost_OlsensAddressBook::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheGhostface.Addon_Ghost_OlsensAddressBook");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C37420
	 * 		Name   -> Function TheGhostface.GhostChargeStalkModeInteraction.GetStealthComponent
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class UGhostStealthComponent* UGhostChargeStalkModeInteraction::GetStealthComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheGhostface.GhostChargeStalkModeInteraction.GetStealthComponent");
		
		UGhostChargeStalkModeInteraction_GetStealthComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGhostChargeStalkModeInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGhostChargeStalkModeInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheGhostface.GhostChargeStalkModeInteraction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGhostfaceCrouchAttack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGhostfaceCrouchAttack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheGhostface.GhostfaceCrouchAttack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C37B30
	 * 		Name   -> Function TheGhostface.GhostKillerAnalyticsComponent.Local_OnStalkModeChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               IsInStalkMode                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGhostKillerAnalyticsComponent::Local_OnStalkModeChanged(bool IsInStalkMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheGhostface.GhostKillerAnalyticsComponent.Local_OnStalkModeChanged");
		
		UGhostKillerAnalyticsComponent_Local_OnStalkModeChanged_Params params {};
		params.IsInStalkMode = IsInStalkMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C37AB0
	 * 		Name   -> Function TheGhostface.GhostKillerAnalyticsComponent.Local_OnLeanStateChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		ELeanState                                         leanState                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGhostKillerAnalyticsComponent::Local_OnLeanStateChanged(ELeanState leanState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheGhostface.GhostKillerAnalyticsComponent.Local_OnLeanStateChanged");
		
		UGhostKillerAnalyticsComponent_Local_OnLeanStateChanged_Params params {};
		params.leanState = leanState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C37A20
	 * 		Name   -> Function TheGhostface.GhostKillerAnalyticsComponent.Local_OnIsStealthChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               IsStealth                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGhostKillerAnalyticsComponent::Local_OnIsStealthChanged(bool IsStealth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheGhostface.GhostKillerAnalyticsComponent.Local_OnIsStealthChanged");
		
		UGhostKillerAnalyticsComponent_Local_OnIsStealthChanged_Params params {};
		params.IsStealth = IsStealth;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C37910
	 * 		Name   -> Function TheGhostface.GhostKillerAnalyticsComponent.Authority_OnStalkChargePercentChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UChargeableComponent*                        ChargeableComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PercentCompletionChange                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TotalPercentComplete                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGhostKillerAnalyticsComponent::Authority_OnStalkChargePercentChanged(class UChargeableComponent* ChargeableComponent, float PercentCompletionChange, float TotalPercentComplete)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheGhostface.GhostKillerAnalyticsComponent.Authority_OnStalkChargePercentChanged");
		
		UGhostKillerAnalyticsComponent_Authority_OnStalkChargePercentChanged_Params params {};
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
	 * 		RVA    -> 0x04C37800
	 * 		Name   -> Function TheGhostface.GhostKillerAnalyticsComponent.Authority_OnPreAttackSuccess
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                GameplayTag                                                (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGhostKillerAnalyticsComponent::Authority_OnPreAttackSuccess(const struct FGameplayTag& GameplayTag, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheGhostface.GhostKillerAnalyticsComponent.Authority_OnPreAttackSuccess");
		
		UGhostKillerAnalyticsComponent_Authority_OnPreAttackSuccess_Params params {};
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
	 * 		Name   -> PredefindFunction UGhostKillerAnalyticsComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGhostKillerAnalyticsComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheGhostface.GhostKillerAnalyticsComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C381A0
	 * 		Name   -> Function TheGhostface.GhostStalkedComponent.OnKillerSpottedChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ADBDPlayer*                                  spotter                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               spotted                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGhostStalkedComponent::OnKillerSpottedChanged(class ADBDPlayer* spotter, bool spotted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheGhostface.GhostStalkedComponent.OnKillerSpottedChanged");
		
		UGhostStalkedComponent_OnKillerSpottedChanged_Params params {};
		params.spotter = spotter;
		params.spotted = spotted;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> DelegateFunction TheGhostface.GhostStalkedComponent.OnIsSpottingKiller__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		bool                                               isSpotting                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGhostStalkedComponent::OnIsSpottingKiller__DelegateSignature(bool isSpotting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction TheGhostface.GhostStalkedComponent.OnIsSpottingKiller__DelegateSignature");
		
		UGhostStalkedComponent_OnIsSpottingKiller__DelegateSignature_Params params {};
		params.isSpotting = isSpotting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> DelegateFunction TheGhostface.GhostStalkedComponent.OnIsMarkedChanged__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		bool                                               IsMarked                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGhostStalkedComponent::OnIsMarkedChanged__DelegateSignature(bool IsMarked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction TheGhostface.GhostStalkedComponent.OnIsMarkedChanged__DelegateSignature");
		
		UGhostStalkedComponent_OnIsMarkedChanged__DelegateSignature_Params params {};
		params.IsMarked = IsMarked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheGhostface.GhostStalkedComponent.Local_OnSpotKiller
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UGhostStalkedComponent::Local_OnSpotKiller()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheGhostface.GhostStalkedComponent.Local_OnSpotKiller");
		
		UGhostStalkedComponent_Local_OnSpotKiller_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C38170
	 * 		Name   -> Function TheGhostface.GhostStalkedComponent.IsMarked
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UGhostStalkedComponent::IsMarked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheGhostface.GhostStalkedComponent.IsMarked");
		
		UGhostStalkedComponent_IsMarked_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C0B640
	 * 		Name   -> Function TheGhostface.GhostStalkedComponent.Initialize
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ASlasherPlayer*                              killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGhostStalkedComponent::Initialize(class ASlasherPlayer* killer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheGhostface.GhostStalkedComponent.Initialize");
		
		UGhostStalkedComponent_Initialize_Params params {};
		params.killer = killer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D89D70
	 * 		Name   -> Function TheGhostface.GhostStalkedComponent.DBD_DebugGhost
	 * 		Flags  -> (Final, Exec, Native, Private)
	 * Parameters:
	 * 		bool                                               debug                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGhostStalkedComponent::DBD_DebugGhost(bool debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheGhostface.GhostStalkedComponent.DBD_DebugGhost");
		
		UGhostStalkedComponent_DBD_DebugGhost_Params params {};
		params.debug = debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042E2360
	 * 		Name   -> Function TheGhostface.GhostStalkedComponent.Client_OnSpotKiller
	 * 		Flags  -> (Net, Native, Event, Public, NetClient)
	 */
	void UGhostStalkedComponent::Client_OnSpotKiller()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheGhostface.GhostStalkedComponent.Client_OnSpotKiller");
		
		UGhostStalkedComponent_Client_OnSpotKiller_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C38070
	 * 		Name   -> Function TheGhostface.GhostStalkedComponent.Authority_OnStalkedChargeFull
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		bool                                               COMPLETED                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              instigatorsForCompletion                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGhostStalkedComponent::Authority_OnStalkedChargeFull(bool COMPLETED, TArray<class AActor*> instigatorsForCompletion)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheGhostface.GhostStalkedComponent.Authority_OnStalkedChargeFull");
		
		UGhostStalkedComponent_Authority_OnStalkedChargeFull_Params params {};
		params.COMPLETED = COMPLETED;
		params.instigatorsForCompletion = instigatorsForCompletion;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGhostStalkedComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGhostStalkedComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheGhostface.GhostStalkedComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C38610
	 * 		Name   -> Function TheGhostface.GhostStalkPowerComponent.RefreshSurvivorMaximumSightDistance
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
	 */
	void UGhostStalkPowerComponent::RefreshSurvivorMaximumSightDistance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheGhostface.GhostStalkPowerComponent.RefreshSurvivorMaximumSightDistance");
		
		UGhostStalkPowerComponent_RefreshSurvivorMaximumSightDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C38590
	 * 		Name   -> Function TheGhostface.GhostStalkPowerComponent.OnLeanStateChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		ELeanState                                         leanState                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGhostStalkPowerComponent::OnLeanStateChanged(ELeanState leanState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheGhostface.GhostStalkPowerComponent.OnLeanStateChanged");
		
		UGhostStalkPowerComponent_OnLeanStateChanged_Params params {};
		params.leanState = leanState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C38500
	 * 		Name   -> Function TheGhostface.GhostStalkPowerComponent.OnIsCrouchedChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               isCrouched                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGhostStalkPowerComponent::OnIsCrouchedChanged(bool isCrouched)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheGhostface.GhostStalkPowerComponent.OnIsCrouchedChanged");
		
		UGhostStalkPowerComponent_OnIsCrouchedChanged_Params params {};
		params.isCrouched = isCrouched;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C38470
	 * 		Name   -> Function TheGhostface.GhostStalkPowerComponent.Authority_OnStalkModeChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               IsInStalkMode                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGhostStalkPowerComponent::Authority_OnStalkModeChanged(bool IsInStalkMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheGhostface.GhostStalkPowerComponent.Authority_OnStalkModeChanged");
		
		UGhostStalkPowerComponent_Authority_OnStalkModeChanged_Params params {};
		params.IsInStalkMode = IsInStalkMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGhostStalkPowerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGhostStalkPowerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheGhostface.GhostStalkPowerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C39030
	 * 		Name   -> Function TheGhostface.GhostStealthComponent.SetRedStainVisibility
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               visible                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGhostStealthComponent::SetRedStainVisibility(bool visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheGhostface.GhostStealthComponent.SetRedStainVisibility");
		
		UGhostStealthComponent_SetRedStainVisibility_Params params {};
		params.visible = visible;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> DelegateFunction TheGhostface.GhostStealthComponent.OnSuccessfulAttackInStealth__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGhostStealthComponent::OnSuccessfulAttackInStealth__DelegateSignature(class ADBDPlayer* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction TheGhostface.GhostStealthComponent.OnSuccessfulAttackInStealth__DelegateSignature");
		
		UGhostStealthComponent_OnSuccessfulAttackInStealth__DelegateSignature_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> DelegateFunction TheGhostface.GhostStealthComponent.OnStealthStateChanged__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		EGhostStealthState                                 stealthState                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGhostStealthComponent::OnStealthStateChanged__DelegateSignature(EGhostStealthState stealthState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction TheGhostface.GhostStealthComponent.OnStealthStateChanged__DelegateSignature");
		
		UGhostStealthComponent_OnStealthStateChanged__DelegateSignature_Params params {};
		params.stealthState = stealthState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> DelegateFunction TheGhostface.GhostStealthComponent.OnStealthCancelledByPlayer__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGhostStealthComponent::OnStealthCancelledByPlayer__DelegateSignature(class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction TheGhostface.GhostStealthComponent.OnStealthCancelledByPlayer__DelegateSignature");
		
		UGhostStealthComponent_OnStealthCancelledByPlayer__DelegateSignature_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C38FB0
	 * 		Name   -> Function TheGhostface.GhostStealthComponent.OnRep_StealthState
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		EGhostStealthState                                 previousState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGhostStealthComponent::OnRep_StealthState(EGhostStealthState previousState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheGhostface.GhostStealthComponent.OnRep_StealthState");
		
		UGhostStealthComponent_OnRep_StealthState_Params params {};
		params.previousState = previousState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> DelegateFunction TheGhostface.GhostStealthComponent.OnIsStealthChanged__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		bool                                               IsStealth                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGhostStealthComponent::OnIsStealthChanged__DelegateSignature(bool IsStealth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction TheGhostface.GhostStealthComponent.OnIsStealthChanged__DelegateSignature");
		
		UGhostStealthComponent_OnIsStealthChanged__DelegateSignature_Params params {};
		params.IsStealth = IsStealth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> DelegateFunction TheGhostface.GhostStealthComponent.OnIsBeingSpotChanged__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class ADBDPlayer*                                  spotter                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               isBeingSpot                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGhostStealthComponent::OnIsBeingSpotChanged__DelegateSignature(class ADBDPlayer* spotter, bool isBeingSpot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction TheGhostface.GhostStealthComponent.OnIsBeingSpotChanged__DelegateSignature");
		
		UGhostStealthComponent_OnIsBeingSpotChanged__DelegateSignature_Params params {};
		params.spotter = spotter;
		params.isBeingSpot = isBeingSpot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x049E7870
	 * 		Name   -> Function TheGhostface.GhostStealthComponent.Multicast_OnPlayerSpottedKiller
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		class ADBDPlayer*                                  spotter                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGhostStealthComponent::Multicast_OnPlayerSpottedKiller(class ADBDPlayer* spotter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheGhostface.GhostStealthComponent.Multicast_OnPlayerSpottedKiller");
		
		UGhostStealthComponent_Multicast_OnPlayerSpottedKiller_Params params {};
		params.spotter = spotter;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C38E90
	 * 		Name   -> Function TheGhostface.GhostStealthComponent.Multicast_OnIsBeingSpottedChanged
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		class ADBDPlayer*                                  spotter                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               isBeingSpotted                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               onlyUpdateSurvivor                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGhostStealthComponent::Multicast_OnIsBeingSpottedChanged(class ADBDPlayer* spotter, bool isBeingSpotted, bool onlyUpdateSurvivor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheGhostface.GhostStealthComponent.Multicast_OnIsBeingSpottedChanged");
		
		UGhostStealthComponent_Multicast_OnIsBeingSpottedChanged_Params params {};
		params.spotter = spotter;
		params.isBeingSpotted = isBeingSpotted;
		params.onlyUpdateSurvivor = onlyUpdateSurvivor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C38E00
	 * 		Name   -> Function TheGhostface.GhostStealthComponent.Multicast_BroadcastOnSuccessfulAttackInStealth
	 * 		Flags  -> (Final, Net, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGhostStealthComponent::Multicast_BroadcastOnSuccessfulAttackInStealth(class ADBDPlayer* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheGhostface.GhostStealthComponent.Multicast_BroadcastOnSuccessfulAttackInStealth");
		
		UGhostStealthComponent_Multicast_BroadcastOnSuccessfulAttackInStealth_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C38DD0
	 * 		Name   -> Function TheGhostface.GhostStealthComponent.IsStealthReadyToActivate
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UGhostStealthComponent::IsStealthReadyToActivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheGhostface.GhostStealthComponent.IsStealthReadyToActivate");
		
		UGhostStealthComponent_IsStealthReadyToActivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C38DA0
	 * 		Name   -> Function TheGhostface.GhostStealthComponent.IsStealth
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UGhostStealthComponent::IsStealth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheGhostface.GhostStealthComponent.IsStealth");
		
		UGhostStealthComponent_IsStealth_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C38D80
	 * 		Name   -> Function TheGhostface.GhostStealthComponent.GetStealthState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EGhostStealthState UGhostStealthComponent::GetStealthState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheGhostface.GhostStealthComponent.GetStealthState");
		
		UGhostStealthComponent_GetStealthState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C38D50
	 * 		Name   -> Function TheGhostface.GhostStealthComponent.GetStealthChargePercent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UGhostStealthComponent::GetStealthChargePercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheGhostface.GhostStealthComponent.GetStealthChargePercent");
		
		UGhostStealthComponent_GetStealthChargePercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0376CF00
	 * 		Name   -> Function TheGhostface.GhostStealthComponent.DBD_ResetGhostStealth
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UGhostStealthComponent::DBD_ResetGhostStealth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheGhostface.GhostStealthComponent.DBD_ResetGhostStealth");
		
		UGhostStealthComponent_DBD_ResetGhostStealth_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C2D2E0
	 * 		Name   -> Function TheGhostface.GhostStealthComponent.Client_SpawnMarkerOnCharacter
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetClient)
	 * Parameters:
	 * 		class ACharacter*                                  revealer                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGhostStealthComponent::Client_SpawnMarkerOnCharacter(class ACharacter* revealer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheGhostface.GhostStealthComponent.Client_SpawnMarkerOnCharacter");
		
		UGhostStealthComponent_Client_SpawnMarkerOnCharacter_Params params {};
		params.revealer = revealer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C38D30
	 * 		Name   -> Function TheGhostface.GhostStealthComponent.Authority_TryActivateStealth
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 */
	void UGhostStealthComponent::Authority_TryActivateStealth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheGhostface.GhostStealthComponent.Authority_TryActivateStealth");
		
		UGhostStealthComponent_Authority_TryActivateStealth_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0376CF00
	 * 		Name   -> Function TheGhostface.GhostStealthComponent.Authority_ResetGhostStealth
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGhostStealthComponent::Authority_ResetGhostStealth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheGhostface.GhostStealthComponent.Authority_ResetGhostStealth");
		
		UGhostStealthComponent_Authority_ResetGhostStealth_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGhostStealthComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGhostStealthComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheGhostface.GhostStealthComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C39250
	 * 		Name   -> Function TheGhostface.TheGhostUtilities.IsKillerStealth
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTheGhostUtilities::STATIC_IsKillerStealth(class AActor* killer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheGhostface.TheGhostUtilities.IsKillerStealth");
		
		UTheGhostUtilities_IsKillerStealth_Params params {};
		params.killer = killer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTheGhostUtilities.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTheGhostUtilities::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheGhostface.TheGhostUtilities");
		return ptr;
	}

}


