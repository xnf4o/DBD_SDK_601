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
	 * 		Name   -> PredefindFunction UCannibalAnalyticsComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCannibalAnalyticsComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheCannibal.CannibalAnalyticsComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCannibalChainsawAttack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCannibalChainsawAttack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheCannibal.CannibalChainsawAttack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCannibalChainsawAttackOpenSubstate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCannibalChainsawAttackOpenSubstate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheCannibal.CannibalChainsawAttackOpenSubstate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCannibalChainsawAttackHittingSubstate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCannibalChainsawAttackHittingSubstate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheCannibal.CannibalChainsawAttackHittingSubstate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCannibalChainsawAttackSuccessSubstate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCannibalChainsawAttackSuccessSubstate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheCannibal.CannibalChainsawAttackSuccessSubstate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCannibalChainsawAttackMissSubstate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCannibalChainsawAttackMissSubstate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheCannibal.CannibalChainsawAttackMissSubstate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCannibalChainsawAttackObstructSubstate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCannibalChainsawAttackObstructSubstate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheCannibal.CannibalChainsawAttackObstructSubstate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCannibalChainsawHitEventAddon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCannibalChainsawHitEventAddon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheCannibal.CannibalChainsawHitEventAddon");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04BC9570
	 * 		Name   -> Function TheCannibal.CannibalChainsawPowerComponent.Server_OnTantrumPowerChargeFull
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
	 */
	void UCannibalChainsawPowerComponent::Server_OnTantrumPowerChargeFull()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheCannibal.CannibalChainsawPowerComponent.Server_OnTantrumPowerChargeFull");
		
		UCannibalChainsawPowerComponent_Server_OnTantrumPowerChargeFull_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04BC94E0
	 * 		Name   -> Function TheCannibal.CannibalChainsawPowerComponent.OnRep_NumPowerCharges
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		int32_t                                            previousNumPowerCharges                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCannibalChainsawPowerComponent::OnRep_NumPowerCharges(int32_t previousNumPowerCharges)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheCannibal.CannibalChainsawPowerComponent.OnRep_NumPowerCharges");
		
		UCannibalChainsawPowerComponent_OnRep_NumPowerCharges_Params params {};
		params.previousNumPowerCharges = previousNumPowerCharges;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04BC94C0
	 * 		Name   -> Function TheCannibal.CannibalChainsawPowerComponent.OnLevelReadyToPlay
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UCannibalChainsawPowerComponent::OnLevelReadyToPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheCannibal.CannibalChainsawPowerComponent.OnLevelReadyToPlay");
		
		UCannibalChainsawPowerComponent_OnLevelReadyToPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x049F8270
	 * 		Name   -> Function TheCannibal.CannibalChainsawPowerComponent.Multicast_OnTantrumPowerChargeFull
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 */
	void UCannibalChainsawPowerComponent::Multicast_OnTantrumPowerChargeFull()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheCannibal.CannibalChainsawPowerComponent.Multicast_OnTantrumPowerChargeFull");
		
		UCannibalChainsawPowerComponent_Multicast_OnTantrumPowerChargeFull_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04BC94A0
	 * 		Name   -> Function TheCannibal.CannibalChainsawPowerComponent.Local_OnTantrumPowerChargeFull
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UCannibalChainsawPowerComponent::Local_OnTantrumPowerChargeFull()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheCannibal.CannibalChainsawPowerComponent.Local_OnTantrumPowerChargeFull");
		
		UCannibalChainsawPowerComponent_Local_OnTantrumPowerChargeFull_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04BC9470
	 * 		Name   -> Function TheCannibal.CannibalChainsawPowerComponent.GetNumberOfChainsawPowerCharges
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UCannibalChainsawPowerComponent::GetNumberOfChainsawPowerCharges()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheCannibal.CannibalChainsawPowerComponent.GetNumberOfChainsawPowerCharges");
		
		UCannibalChainsawPowerComponent_GetNumberOfChainsawPowerCharges_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04BC9450
	 * 		Name   -> Function TheCannibal.CannibalChainsawPowerComponent.Authority_OnChainsawPowerChargeFull
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UCannibalChainsawPowerComponent::Authority_OnChainsawPowerChargeFull()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheCannibal.CannibalChainsawPowerComponent.Authority_OnChainsawPowerChargeFull");
		
		UCannibalChainsawPowerComponent_Authority_OnChainsawPowerChargeFull_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCannibalChainsawPowerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCannibalChainsawPowerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheCannibal.CannibalChainsawPowerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCannibalChainsawRevInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCannibalChainsawRevInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheCannibal.CannibalChainsawRevInteraction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x049D9E10
	 * 		Name   -> Function TheCannibal.CannibalPowerPresentationItemProgressComponent.SetCannibalChainsawPowerComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UCannibalChainsawPowerComponent*             cannibalPowerChainsawComponent                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCannibalPowerPresentationItemProgressComponent::SetCannibalChainsawPowerComponent(class UCannibalChainsawPowerComponent* cannibalPowerChainsawComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheCannibal.CannibalPowerPresentationItemProgressComponent.SetCannibalChainsawPowerComponent");
		
		UCannibalPowerPresentationItemProgressComponent_SetCannibalChainsawPowerComponent_Params params {};
		params.cannibalPowerChainsawComponent = cannibalPowerChainsawComponent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCannibalPowerPresentationItemProgressComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCannibalPowerPresentationItemProgressComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheCannibal.CannibalPowerPresentationItemProgressComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCarburetorTuningGuideAddon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCarburetorTuningGuideAddon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheCannibal.CarburetorTuningGuideAddon");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UIridescentLeatherAddon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIridescentLeatherAddon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheCannibal.IridescentLeatherAddon");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UShopLubricantAddon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShopLubricantAddon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheCannibal.ShopLubricantAddon");
		return ptr;
	}

}


