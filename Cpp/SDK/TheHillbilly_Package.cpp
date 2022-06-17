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
	 * 		Name   -> PredefindFunction UChainsawAnalyticsBaseComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChainsawAnalyticsBaseComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheHillbilly.ChainsawAnalyticsBaseComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHillbillyChainsawAttack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHillbillyChainsawAttack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheHillbilly.HillbillyChainsawAttack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHillbillyChainsawAttackOpenSubstate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHillbillyChainsawAttackOpenSubstate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheHillbilly.HillbillyChainsawAttackOpenSubstate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHillbillyChainsawAttackHittingSubstate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHillbillyChainsawAttackHittingSubstate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheHillbilly.HillbillyChainsawAttackHittingSubstate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHillbillyChainsawAttackSuccessSubstate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHillbillyChainsawAttackSuccessSubstate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheHillbilly.HillbillyChainsawAttackSuccessSubstate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHillbillyChainsawAttackMissSubstate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHillbillyChainsawAttackMissSubstate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheHillbilly.HillbillyChainsawAttackMissSubstate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHillbillyChainsawAttackObstructSubstate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHillbillyChainsawAttackObstructSubstate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheHillbilly.HillbillyChainsawAttackObstructSubstate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C43DC0
	 * 		Name   -> Function TheHillbilly.ChainsawRevInteraction.OnLevelReadyToPlay
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UChainsawRevInteraction::OnLevelReadyToPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheHillbilly.ChainsawRevInteraction.OnLevelReadyToPlay");
		
		UChainsawRevInteraction_OnLevelReadyToPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UChainsawRevInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChainsawRevInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheHillbilly.ChainsawRevInteraction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UApexMufflerAddon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UApexMufflerAddon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheHillbilly.ApexMufflerAddon");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHillbillyAnalyticsComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHillbillyAnalyticsComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheHillbilly.HillbillyAnalyticsComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHillbillyAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHillbillyAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheHillbilly.HillbillyAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHillbillyChainsawHitEventAddon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHillbillyChainsawHitEventAddon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheHillbilly.HillbillyChainsawHitEventAddon");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C45010
	 * 		Name   -> Function TheHillbilly.HillbillyChainsawOverheatComponent.OnRep_IsChainsawOverheating
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UHillbillyChainsawOverheatComponent::OnRep_IsChainsawOverheating()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheHillbilly.HillbillyChainsawOverheatComponent.OnRep_IsChainsawOverheating");
		
		UHillbillyChainsawOverheatComponent_OnRep_IsChainsawOverheating_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C44FF0
	 * 		Name   -> Function TheHillbilly.HillbillyChainsawOverheatComponent.OnLevelReadyToPlay
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UHillbillyChainsawOverheatComponent::OnLevelReadyToPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheHillbilly.HillbillyChainsawOverheatComponent.OnLevelReadyToPlay");
		
		UHillbillyChainsawOverheatComponent_OnLevelReadyToPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C44F20
	 * 		Name   -> Function TheHillbilly.HillbillyChainsawOverheatComponent.OnHeatChargeUpdate
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		float                                              currentCharge                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              previosCharge                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHillbillyChainsawOverheatComponent::OnHeatChargeUpdate(float currentCharge, float previosCharge)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheHillbilly.HillbillyChainsawOverheatComponent.OnHeatChargeUpdate");
		
		UHillbillyChainsawOverheatComponent_OnHeatChargeUpdate_Params params {};
		params.currentCharge = currentCharge;
		params.previosCharge = previosCharge;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C44EF0
	 * 		Name   -> Function TheHillbilly.HillbillyChainsawOverheatComponent.IsChainsawOverheating
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UHillbillyChainsawOverheatComponent::IsChainsawOverheating()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheHillbilly.HillbillyChainsawOverheatComponent.IsChainsawOverheating");
		
		UHillbillyChainsawOverheatComponent_IsChainsawOverheating_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C44ED0
	 * 		Name   -> Function TheHillbilly.HillbillyChainsawOverheatComponent.Authority_OnHeatChargeFull
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UHillbillyChainsawOverheatComponent::Authority_OnHeatChargeFull()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheHillbilly.HillbillyChainsawOverheatComponent.Authority_OnHeatChargeFull");
		
		UHillbillyChainsawOverheatComponent_Authority_OnHeatChargeFull_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C44EB0
	 * 		Name   -> Function TheHillbilly.HillbillyChainsawOverheatComponent.Authority_OnHeatChargeEmpty
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UHillbillyChainsawOverheatComponent::Authority_OnHeatChargeEmpty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheHillbilly.HillbillyChainsawOverheatComponent.Authority_OnHeatChargeEmpty");
		
		UHillbillyChainsawOverheatComponent_Authority_OnHeatChargeEmpty_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHillbillyChainsawOverheatComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHillbillyChainsawOverheatComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheHillbilly.HillbillyChainsawOverheatComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHillbillyChainsawRevInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHillbillyChainsawRevInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheHillbilly.HillbillyChainsawRevInteraction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHillbillyChainsawSubAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHillbillyChainsawSubAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheHillbilly.HillbillyChainsawSubAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x049D9E10
	 * 		Name   -> Function TheHillbilly.HillbillyOverheatPresentationItemProgressComponent.SetHillbillyChainsawOverheatComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UHillbillyChainsawOverheatComponent*         HillbillyChainsawOverheatComponent                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHillbillyOverheatPresentationItemProgressComponent::SetHillbillyChainsawOverheatComponent(class UHillbillyChainsawOverheatComponent* HillbillyChainsawOverheatComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheHillbilly.HillbillyOverheatPresentationItemProgressComponent.SetHillbillyChainsawOverheatComponent");
		
		UHillbillyOverheatPresentationItemProgressComponent_SetHillbillyChainsawOverheatComponent_Params params {};
		params.HillbillyChainsawOverheatComponent = HillbillyChainsawOverheatComponent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHillbillyOverheatPresentationItemProgressComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHillbillyOverheatPresentationItemProgressComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheHillbilly.HillbillyOverheatPresentationItemProgressComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UIridescentBrickAddon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIridescentBrickAddon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheHillbilly.IridescentBrickAddon");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULightbornAuraRevealEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULightbornAuraRevealEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheHillbilly.LightbornAuraRevealEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULightbornBlindFailedIndicatorCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULightbornBlindFailedIndicatorCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheHillbilly.LightbornBlindFailedIndicatorCondition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULoProChainsAddon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULoProChainsAddon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheHillbilly.LoProChainsAddon");
		return ptr;
	}

}


