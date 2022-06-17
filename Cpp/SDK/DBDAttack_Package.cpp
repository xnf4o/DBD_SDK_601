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
	 * 		Name   -> PredefindFunction UPounceAttack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPounceAttack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDAttack.PounceAttack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPounceAttackOpenSubstate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPounceAttackOpenSubstate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDAttack.PounceAttackOpenSubstate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPounceAttackHittingSubstate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPounceAttackHittingSubstate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDAttack.PounceAttackHittingSubstate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPounceAttackSuccessSubstate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPounceAttackSuccessSubstate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDAttack.PounceAttackSuccessSubstate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPounceAttackMissSubstate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPounceAttackMissSubstate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDAttack.PounceAttackMissSubstate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPounceAttackObstructSubstate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPounceAttackObstructSubstate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDAttack.PounceAttackObstructSubstate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDAttack.PounceAttackOpenSubstateCosmetic.OnLungeAttackStartCosmetic
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  SlasherPlayer                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPounceAttackOpenSubstateCosmetic::OnLungeAttackStartCosmetic(class ADBDPlayer* SlasherPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDAttack.PounceAttackOpenSubstateCosmetic.OnLungeAttackStartCosmetic");
		
		UPounceAttackOpenSubstateCosmetic_OnLungeAttackStartCosmetic_Params params {};
		params.SlasherPlayer = SlasherPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDAttack.PounceAttackOpenSubstateCosmetic.OnLungeAttackEndCosmetic
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  SlasherPlayer                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPounceAttackOpenSubstateCosmetic::OnLungeAttackEndCosmetic(class ADBDPlayer* SlasherPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDAttack.PounceAttackOpenSubstateCosmetic.OnLungeAttackEndCosmetic");
		
		UPounceAttackOpenSubstateCosmetic_OnLungeAttackEndCosmetic_Params params {};
		params.SlasherPlayer = SlasherPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDAttack.PounceAttackOpenSubstateCosmetic.OnLocallyObservedChangedCosmetic
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  SlasherPlayer                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPounceAttackOpenSubstateCosmetic::OnLocallyObservedChangedCosmetic(class ADBDPlayer* SlasherPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDAttack.PounceAttackOpenSubstateCosmetic.OnLocallyObservedChangedCosmetic");
		
		UPounceAttackOpenSubstateCosmetic_OnLocallyObservedChangedCosmetic_Params params {};
		params.SlasherPlayer = SlasherPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041D00A0
	 * 		Name   -> Function DBDAttack.PounceAttackOpenSubstateCosmetic.OnLocallyObservedChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ADBDPlayer*                                  SlasherPlayer                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPounceAttackOpenSubstateCosmetic::OnLocallyObservedChanged(class ADBDPlayer* SlasherPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDAttack.PounceAttackOpenSubstateCosmetic.OnLocallyObservedChanged");
		
		UPounceAttackOpenSubstateCosmetic_OnLocallyObservedChanged_Params params {};
		params.SlasherPlayer = SlasherPlayer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041D0000
	 * 		Name   -> Function DBDAttack.PounceAttackOpenSubstateCosmetic.IsLungeAttackAugmented
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class ADBDPlayer*                                  SlasherPlayer                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPounceAttackOpenSubstateCosmetic::IsLungeAttackAugmented(class ADBDPlayer* SlasherPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDAttack.PounceAttackOpenSubstateCosmetic.IsLungeAttackAugmented");
		
		UPounceAttackOpenSubstateCosmetic_IsLungeAttackAugmented_Params params {};
		params.SlasherPlayer = SlasherPlayer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPounceAttackOpenSubstateCosmetic.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPounceAttackOpenSubstateCosmetic::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDAttack.PounceAttackOpenSubstateCosmetic");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USlashAttack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USlashAttack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDAttack.SlashAttack");
		return ptr;
	}

}


