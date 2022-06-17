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
	 * 		RVA    -> 0x042FD660
	 * 		Name   -> Function DBDInteraction.ActivePhaseWalkInteraction.OnPowerCollected
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ADBDPlayer*                                  collector                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UActivePhaseWalkInteraction::OnPowerCollected(class ADBDPlayer* collector)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDInteraction.ActivePhaseWalkInteraction.OnPowerCollected");
		
		UActivePhaseWalkInteraction_OnPowerCollected_Params params {};
		params.collector = collector;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042FD5D0
	 * 		Name   -> Function DBDInteraction.ActivePhaseWalkInteraction.OnPlayerLocallyObservedChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UActivePhaseWalkInteraction::OnPlayerLocallyObservedChanged(class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDInteraction.ActivePhaseWalkInteraction.OnPlayerLocallyObservedChanged");
		
		UActivePhaseWalkInteraction_OnPlayerLocallyObservedChanged_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042FD150
	 * 		Name   -> Function DBDInteraction.ActivePhaseWalkInteraction.GetChargeTime
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	float UActivePhaseWalkInteraction::GetChargeTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDInteraction.ActivePhaseWalkInteraction.GetChargeTime");
		
		UActivePhaseWalkInteraction_GetChargeTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDInteraction.ActivePhaseWalkInteraction.Cosmetic_ResetChargeVFX
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UActivePhaseWalkInteraction::Cosmetic_ResetChargeVFX(class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDInteraction.ActivePhaseWalkInteraction.Cosmetic_ResetChargeVFX");
		
		UActivePhaseWalkInteraction_Cosmetic_ResetChargeVFX_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UActivePhaseWalkInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActivePhaseWalkInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDInteraction.ActivePhaseWalkInteraction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBaseLockerInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseLockerInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDInteraction.BaseLockerInteraction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042FD2C0
	 * 		Name   -> Function DBDInteraction.BaseStalkModeInteraction.GetStalkerComponent
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class UStalkerComponent* UBaseStalkModeInteraction::GetStalkerComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDInteraction.BaseStalkModeInteraction.GetStalkerComponent");
		
		UBaseStalkModeInteraction_GetStalkerComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042FCFC0
	 * 		Name   -> Function DBDInteraction.BaseStalkModeInteraction.CanStalk
	 * 		Flags  -> (Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UBaseStalkModeInteraction::CanStalk()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDInteraction.BaseStalkModeInteraction.CanStalk");
		
		UBaseStalkModeInteraction_CanStalk_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBaseStalkModeInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseStalkModeInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDInteraction.BaseStalkModeInteraction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042FD6F0
	 * 		Name   -> Function DBDInteraction.BasicChargeableInteraction.OnRep_SpawnedChargeable
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UBasicChargeableInteraction::OnRep_SpawnedChargeable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDInteraction.BasicChargeableInteraction.OnRep_SpawnedChargeable");
		
		UBasicChargeableInteraction_OnRep_SpawnedChargeable_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBasicChargeableInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBasicChargeableInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDInteraction.BasicChargeableInteraction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042FD320
	 * 		Name   -> Function DBDInteraction.BlessTotem.GetTotem
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
	 */
	class ATotem* UBlessTotem::GetTotem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDInteraction.BlessTotem.GetTotem");
		
		UBlessTotem_GetTotem_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBlessTotem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlessTotem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDInteraction.BlessTotem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCleanseTotem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCleanseTotem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDInteraction.CleanseTotem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042FD200
	 * 		Name   -> Function DBDInteraction.CollectItemInteraction.GetItem
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class ACollectable* UCollectItemInteraction::GetItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDInteraction.CollectItemInteraction.GetItem");
		
		UCollectItemInteraction_GetItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCollectItemInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCollectItemInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDInteraction.CollectItemInteraction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCollectItemFromSearchableInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCollectItemFromSearchableInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDInteraction.CollectItemFromSearchableInteraction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042FCE10
	 * 		Name   -> Function DBDInteraction.DestroyDemogorgonPortalInteraction.Authority_OnChargeApplied
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		float                                              individualChargeAmount                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              totalChargeAmount                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      chargeInstigator                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               wasCoop                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDestroyDemogorgonPortalInteraction::Authority_OnChargeApplied(float individualChargeAmount, float totalChargeAmount, class AActor* chargeInstigator, bool wasCoop, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDInteraction.DestroyDemogorgonPortalInteraction.Authority_OnChargeApplied");
		
		UDestroyDemogorgonPortalInteraction_Authority_OnChargeApplied_Params params {};
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
	 * 		Name   -> PredefindFunction UDestroyDemogorgonPortalInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDestroyDemogorgonPortalInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDInteraction.DestroyDemogorgonPortalInteraction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042FD230
	 * 		Name   -> Function DBDInteraction.DropItemInteraction.GetItem
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class ACollectable* UDropItemInteraction::GetItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDInteraction.DropItemInteraction.GetItem");
		
		UDropItemInteraction_GetItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDropItemInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDropItemInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDInteraction.DropItemInteraction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UEscapeMapInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEscapeMapInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDInteraction.EscapeMapInteraction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042FCD40
	 * 		Name   -> Function DBDInteraction.GeneratorDamageInteraction.Authority_DamageGenerator
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, Const)
	 * Parameters:
	 * 		class ADBDPlayer*                                  damageBy                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AGenerator*                                  Generator                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeneratorDamageInteraction::Authority_DamageGenerator(class ADBDPlayer* damageBy, class AGenerator* Generator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDInteraction.GeneratorDamageInteraction.Authority_DamageGenerator");
		
		UGeneratorDamageInteraction_Authority_DamageGenerator_Params params {};
		params.damageBy = damageBy;
		params.Generator = Generator;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGeneratorDamageInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeneratorDamageInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDInteraction.GeneratorDamageInteraction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042FD7A0
	 * 		Name   -> Function DBDInteraction.GeneratorRepairInteraction.SetIsObstructed
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               obstructed                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeneratorRepairInteraction::SetIsObstructed(bool obstructed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDInteraction.GeneratorRepairInteraction.SetIsObstructed");
		
		UGeneratorRepairInteraction_SetIsObstructed_Params params {};
		params.obstructed = obstructed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042FD290
	 * 		Name   -> Function DBDInteraction.GeneratorRepairInteraction.GetOwningGenerator
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class AGenerator* UGeneratorRepairInteraction::GetOwningGenerator()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDInteraction.GeneratorRepairInteraction.GetOwningGenerator");
		
		UGeneratorRepairInteraction_GetOwningGenerator_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGeneratorRepairInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeneratorRepairInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDInteraction.GeneratorRepairInteraction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042FD3B0
	 * 		Name   -> Function DBDInteraction.GeneratorToolboxRepairInteraction.HasChargedToolBox
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGeneratorToolboxRepairInteraction::HasChargedToolBox(class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDInteraction.GeneratorToolboxRepairInteraction.HasChargedToolBox");
		
		UGeneratorToolboxRepairInteraction_HasChargedToolBox_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042FD180
	 * 		Name   -> Function DBDInteraction.GeneratorToolboxRepairInteraction.GetInteractionTextWhenEmpty
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString UGeneratorToolboxRepairInteraction::GetInteractionTextWhenEmpty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDInteraction.GeneratorToolboxRepairInteraction.GetInteractionTextWhenEmpty");
		
		UGeneratorToolboxRepairInteraction_GetInteractionTextWhenEmpty_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGeneratorToolboxRepairInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeneratorToolboxRepairInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDInteraction.GeneratorToolboxRepairInteraction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042FD2F0
	 * 		Name   -> Function DBDInteraction.HealInteraction.GetTargetSurvivor
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class ACamperPlayer* UHealInteraction::GetTargetSurvivor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDInteraction.HealInteraction.GetTargetSurvivor");
		
		UHealInteraction_GetTargetSurvivor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDInteraction.HealInteraction.Authority_OnChargeApplied
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		float                                              individualChargeAmount                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              totalChargeAmount                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      chargeInstigator                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               wasCoop                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHealInteraction::Authority_OnChargeApplied(float individualChargeAmount, float totalChargeAmount, class AActor* chargeInstigator, bool wasCoop, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDInteraction.HealInteraction.Authority_OnChargeApplied");
		
		UHealInteraction_Authority_OnChargeApplied_Params params {};
		params.individualChargeAmount = individualChargeAmount;
		params.totalChargeAmount = totalChargeAmount;
		params.chargeInstigator = chargeInstigator;
		params.wasCoop = wasCoop;
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHealInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHealInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDInteraction.HealInteraction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042FD260
	 * 		Name   -> Function DBDInteraction.HookSurvivorDefinition.GetMeatHook
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class AMeatHook* UHookSurvivorDefinition::GetMeatHook()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDInteraction.HookSurvivorDefinition.GetMeatHook");
		
		UHookSurvivorDefinition_GetMeatHook_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHookSurvivorDefinition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHookSurvivorDefinition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDInteraction.HookSurvivorDefinition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UItemCraftInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UItemCraftInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDInteraction.ItemCraftInteraction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042FD4D0
	 * 		Name   -> Function DBDInteraction.LinkedVomitInteraction.IsVomiting
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ULinkedVomitInteraction::IsVomiting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDInteraction.LinkedVomitInteraction.IsVomiting");
		
		ULinkedVomitInteraction_IsVomiting_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042FD350
	 * 		Name   -> Function DBDInteraction.LinkedVomitInteraction.GetVomitStateComponent
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class UVomitStateComponent* ULinkedVomitInteraction::GetVomitStateComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDInteraction.LinkedVomitInteraction.GetVomitStateComponent");
		
		ULinkedVomitInteraction_GetVomitStateComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULinkedVomitInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULinkedVomitInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDInteraction.LinkedVomitInteraction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULockerFakeEnterInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULockerFakeEnterInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDInteraction.LockerFakeEnterInteraction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042FD0C0
	 * 		Name   -> Function DBDInteraction.SearchChestInteractionBase.FireChestScoreEvent
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USearchChestInteractionBase::FireChestScoreEvent(class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDInteraction.SearchChestInteractionBase.FireChestScoreEvent");
		
		USearchChestInteractionBase_FireChestScoreEvent_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USearchChestInteractionBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USearchChestInteractionBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDInteraction.SearchChestInteractionBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042FCFF0
	 * 		Name   -> Function DBDInteraction.OpenChestInteraction.CollectItemIfEmptyHanded
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable)
	 * Parameters:
	 * 		class ACollectable*                                Collectable                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ADBDPlayer*                                  Player                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOpenChestInteraction::CollectItemIfEmptyHanded(class ACollectable* Collectable, class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDInteraction.OpenChestInteraction.CollectItemIfEmptyHanded");
		
		UOpenChestInteraction_CollectItemIfEmptyHanded_Params params {};
		params.Collectable = Collectable;
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UOpenChestInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOpenChestInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDInteraction.OpenChestInteraction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UOpenHatchInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOpenHatchInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDInteraction.OpenHatchInteraction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPalletPullUpInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPalletPullUpInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDInteraction.PalletPullUpInteraction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USearchOpenedChestInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USearchOpenedChestInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDInteraction.SearchOpenedChestInteraction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USetGroundPortalInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USetGroundPortalInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDInteraction.SetGroundPortalInteraction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USetTrapInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USetTrapInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDInteraction.SetTrapInteraction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USnuffTotem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USnuffTotem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDInteraction.SnuffTotem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDInteraction.TeleportToDemogorgonPortalInteraction.OnTeleportInteractionCanceledVFX
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void UTeleportToDemogorgonPortalInteraction::OnTeleportInteractionCanceledVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDInteraction.TeleportToDemogorgonPortalInteraction.OnTeleportInteractionCanceledVFX");
		
		UTeleportToDemogorgonPortalInteraction_OnTeleportInteractionCanceledVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042FD710
	 * 		Name   -> Function DBDInteraction.TeleportToDemogorgonPortalInteraction.OnSlasherSet
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ASlasherPlayer*                              Slasher                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTeleportToDemogorgonPortalInteraction::OnSlasherSet(class ASlasherPlayer* Slasher)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDInteraction.TeleportToDemogorgonPortalInteraction.OnSlasherSet");
		
		UTeleportToDemogorgonPortalInteraction_OnSlasherSet_Params params {};
		params.Slasher = Slasher;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTeleportToDemogorgonPortalInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTeleportToDemogorgonPortalInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDInteraction.TeleportToDemogorgonPortalInteraction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042FD450
	 * 		Name   -> Function DBDInteraction.ThrowInteraction.InitThrowCancellationExitTime
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		float                                              value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UThrowInteraction::InitThrowCancellationExitTime(float value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDInteraction.ThrowInteraction.InitThrowCancellationExitTime");
		
		UThrowInteraction_InitThrowCancellationExitTime_Params params {};
		params.value = value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042FD380
	 * 		Name   -> Function DBDInteraction.ThrowInteraction.HasCancelledThrow
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UThrowInteraction::HasCancelledThrow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDInteraction.ThrowInteraction.HasCancelledThrow");
		
		UThrowInteraction_HasCancelledThrow_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UThrowInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UThrowInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDInteraction.ThrowInteraction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UUnhook.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnhook::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDInteraction.Unhook");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042FD500
	 * 		Name   -> Function DBDInteraction.UnhookReplicationComponent.Multicast_SetPlayerBeingUnhooked
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		class UUnhook*                                     unhookInteraction                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ACamperPlayer*                               playerBeingUnhooked                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUnhookReplicationComponent::Multicast_SetPlayerBeingUnhooked(class UUnhook* unhookInteraction, class ACamperPlayer* playerBeingUnhooked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDInteraction.UnhookReplicationComponent.Multicast_SetPlayerBeingUnhooked");
		
		UUnhookReplicationComponent_Multicast_SetPlayerBeingUnhooked_Params params {};
		params.unhookInteraction = unhookInteraction;
		params.playerBeingUnhooked = playerBeingUnhooked;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UUnhookReplicationComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnhookReplicationComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDInteraction.UnhookReplicationComponent");
		return ptr;
	}

}


