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
	 * 		Name   -> PredefindFunction UAutodidact.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutodidact::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheSpirit.Autodidact");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDeliverance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeliverance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheSpirit.Deliverance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DC4940
	 * 		Name   -> Function TheSpirit.Diversion.Authority_OnOwningSurvivorImmobilizedStateChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		ECamperImmobilizeState                             oldImmobilizeState                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECamperImmobilizeState                             newImmobilizeState                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDiversion::Authority_OnOwningSurvivorImmobilizedStateChanged(ECamperImmobilizeState oldImmobilizeState, ECamperImmobilizeState newImmobilizeState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheSpirit.Diversion.Authority_OnOwningSurvivorImmobilizedStateChanged");
		
		UDiversion_Authority_OnOwningSurvivorImmobilizedStateChanged_Params params {};
		params.oldImmobilizeState = oldImmobilizeState;
		params.newImmobilizeState = newImmobilizeState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DC4870
	 * 		Name   -> Function TheSpirit.Diversion.Authority_OnOwningSurvivorDamageStateChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		ECamperDamageState                                 oldDamageState                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECamperDamageState                                 CurrentDamageState                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDiversion::Authority_OnOwningSurvivorDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState CurrentDamageState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheSpirit.Diversion.Authority_OnOwningSurvivorDamageStateChanged");
		
		UDiversion_Authority_OnOwningSurvivorDamageStateChanged_Params params {};
		params.oldDamageState = oldDamageState;
		params.CurrentDamageState = CurrentDamageState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDiversion.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDiversion::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheSpirit.Diversion");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDriedCherryBlossom.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDriedCherryBlossom::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheSpirit.DriedCherryBlossom");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UKatsumoriTalisman.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKatsumoriTalisman::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheSpirit.KatsumoriTalisman");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DC4F80
	 * 		Name   -> Function TheSpirit.OwningPlayerInSpiritHuskRange.OnKillerSet
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class ASlasherPlayer*                              killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOwningPlayerInSpiritHuskRange::OnKillerSet(class ASlasherPlayer* killer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheSpirit.OwningPlayerInSpiritHuskRange.OnKillerSet");
		
		UOwningPlayerInSpiritHuskRange_OnKillerSet_Params params {};
		params.killer = killer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UOwningPlayerInSpiritHuskRange.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOwningPlayerInSpiritHuskRange::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheSpirit.OwningPlayerInSpiritHuskRange");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheSpirit.Rancor.SpawnBubbleAtSurvivorsLocation
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void URancor::SpawnBubbleAtSurvivorsLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheSpirit.Rancor.SpawnBubbleAtSurvivorsLocation");
		
		URancor_SpawnBubbleAtSurvivorsLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DC5250
	 * 		Name   -> Function TheSpirit.Rancor.GetSurvivorRevealDuration
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float URancor::GetSurvivorRevealDuration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheSpirit.Rancor.GetSurvivorRevealDuration");
		
		URancor_GetSurvivorRevealDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction URancor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URancor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheSpirit.Rancor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USpiritDynamicAccessoryAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpiritDynamicAccessoryAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheSpirit.SpiritDynamicAccessoryAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USpiritFury.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpiritFury::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheSpirit.SpiritFury");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USpiritHuskAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpiritHuskAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheSpirit.SpiritHuskAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USpiritHuskActivePhaseWalkAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpiritHuskActivePhaseWalkAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheSpirit.SpiritHuskActivePhaseWalkAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DC5A90
	 * 		Name   -> Function TheSpirit.SpiritHuskOutlineUpdateStrategy.OnSlasherSet
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ASlasherPlayer*                              Slasher                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USpiritHuskOutlineUpdateStrategy::OnSlasherSet(class ASlasherPlayer* Slasher)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheSpirit.SpiritHuskOutlineUpdateStrategy.OnSlasherSet");
		
		USpiritHuskOutlineUpdateStrategy_OnSlasherSet_Params params {};
		params.Slasher = Slasher;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USpiritHuskOutlineUpdateStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpiritHuskOutlineUpdateStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheSpirit.SpiritHuskOutlineUpdateStrategy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UThrowRockInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UThrowRockInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheSpirit.ThrowRockInteraction");
		return ptr;
	}

}


