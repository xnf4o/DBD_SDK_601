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
	 * 		RVA    -> 0x041CC980
	 * 		Name   -> Function DBDAnimation.PlayerAnimInstance.OnLevelReadyToPlay
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UPlayerAnimInstance::OnLevelReadyToPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDAnimation.PlayerAnimInstance.OnLevelReadyToPlay");
		
		UPlayerAnimInstance_OnLevelReadyToPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041CC8D0
	 * 		Name   -> Function DBDAnimation.PlayerAnimInstance.OnIntroCompleted
	 * 		Flags  -> (Native, Protected)
	 */
	void UPlayerAnimInstance::OnIntroCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDAnimation.PlayerAnimInstance.OnIntroCompleted");
		
		UPlayerAnimInstance_OnIntroCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041CC610
	 * 		Name   -> Function DBDAnimation.PlayerAnimInstance.HasBeenNotified
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        AnimNotify                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPlayerAnimInstance::HasBeenNotified(const class FName& AnimNotify)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDAnimation.PlayerAnimInstance.HasBeenNotified");
		
		UPlayerAnimInstance_HasBeenNotified_Params params {};
		params.AnimNotify = AnimNotify;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041CC5E0
	 * 		Name   -> Function DBDAnimation.PlayerAnimInstance.GetOwningPlayer
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class ADBDPlayer* UPlayerAnimInstance::GetOwningPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDAnimation.PlayerAnimInstance.GetOwningPlayer");
		
		UPlayerAnimInstance_GetOwningPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPlayerAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDAnimation.PlayerAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041C9D20
	 * 		Name   -> Function DBDAnimation.BaseSurvivorAnimInstance.GetOwningSurvivor
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class ACamperPlayer* UBaseSurvivorAnimInstance::GetOwningSurvivor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDAnimation.BaseSurvivorAnimInstance.GetOwningSurvivor");
		
		UBaseSurvivorAnimInstance_GetOwningSurvivor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBaseSurvivorAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseSurvivorAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDAnimation.BaseSurvivorAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAimOffsetSurvivorSubAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAimOffsetSurvivorSubAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDAnimation.AimOffsetSurvivorSubAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041C9C10
	 * 		Name   -> Function DBDAnimation.ArmIKSurvivorSubAnimInstance.ChangeMode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EArmIkMode                                         newMode                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArmIKSurvivorSubAnimInstance::ChangeMode(EArmIkMode newMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDAnimation.ArmIKSurvivorSubAnimInstance.ChangeMode");
		
		UArmIKSurvivorSubAnimInstance_ChangeMode_Params params {};
		params.newMode = newMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UArmIKSurvivorSubAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UArmIKSurvivorSubAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDAnimation.ArmIKSurvivorSubAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041C9CC0
	 * 		Name   -> Function DBDAnimation.BaseKillerAnimInstance.GetOwningKiller
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class ASlasherPlayer* UBaseKillerAnimInstance::GetOwningKiller()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDAnimation.BaseKillerAnimInstance.GetOwningKiller");
		
		UBaseKillerAnimInstance_GetOwningKiller_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0413DC50
	 * 		Name   -> Function DBDAnimation.BaseKillerAnimInstance.DBD_ForceAnimPOV
	 * 		Flags  -> (Final, Exec, Native, Private)
	 * Parameters:
	 * 		int32_t                                            animPOV                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBaseKillerAnimInstance::DBD_ForceAnimPOV(int32_t animPOV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDAnimation.BaseKillerAnimInstance.DBD_ForceAnimPOV");
		
		UBaseKillerAnimInstance_DBD_ForceAnimPOV_Params params {};
		params.animPOV = animPOV;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBaseKillerAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseKillerAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDAnimation.BaseKillerAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBasePlayerAttackSubAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBasePlayerAttackSubAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDAnimation.BasePlayerAttackSubAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041C9CC0
	 * 		Name   -> Function DBDAnimation.BaseKillerAttackSubAnimInstance.GetOwningKiller
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class ASlasherPlayer* UBaseKillerAttackSubAnimInstance::GetOwningKiller()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDAnimation.BaseKillerAttackSubAnimInstance.GetOwningKiller");
		
		UBaseKillerAttackSubAnimInstance_GetOwningKiller_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBaseKillerAttackSubAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseKillerAttackSubAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDAnimation.BaseKillerAttackSubAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBaseKillerWeaponAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseKillerWeaponAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDAnimation.BaseKillerWeaponAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDAnimation.BaseMenuAnimInstance.OnCustomizationChanged
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class FName>                                customizationArray                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UBaseMenuAnimInstance::OnCustomizationChanged(TArray<class FName> customizationArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDAnimation.BaseMenuAnimInstance.OnCustomizationChanged");
		
		UBaseMenuAnimInstance_OnCustomizationChanged_Params params {};
		params.customizationArray = customizationArray;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041C9CF0
	 * 		Name   -> Function DBDAnimation.BaseMenuAnimInstance.GetOwningMenuPlayer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class ADBDMenuPlayer* UBaseMenuAnimInstance::GetOwningMenuPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDAnimation.BaseMenuAnimInstance.GetOwningMenuPlayer");
		
		UBaseMenuAnimInstance_GetOwningMenuPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041C9C90
	 * 		Name   -> Function DBDAnimation.BaseMenuAnimInstance.GetCurrentMenu
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EGameFlowStep UBaseMenuAnimInstance::GetCurrentMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDAnimation.BaseMenuAnimInstance.GetCurrentMenu");
		
		UBaseMenuAnimInstance_GetCurrentMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBaseMenuAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseMenuAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDAnimation.BaseMenuAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBasePowerSubAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBasePowerSubAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDAnimation.BasePowerSubAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBreathingSurvivorSubAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBreathingSurvivorSubAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDAnimation.BreathingSurvivorSubAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041C9E60
	 * 		Name   -> Function DBDAnimation.ChestAnimInstance.OnSearchedChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               searched                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChestAnimInstance::OnSearchedChanged(bool searched)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDAnimation.ChestAnimInstance.OnSearchedChanged");
		
		UChestAnimInstance_OnSearchedChanged_Params params {};
		params.searched = searched;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UChestAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChestAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDAnimation.ChestAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCrowAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCrowAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDAnimation.CrowAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDynamicAccessoryAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDynamicAccessoryAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDAnimation.DynamicAccessoryAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFaceCorrectionSurvivorSubAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFaceCorrectionSurvivorSubAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDAnimation.FaceCorrectionSurvivorSubAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041C9F10
	 * 		Name   -> Function DBDAnimation.GeneratorAnimInstance.SetSkillCheckSuccess
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               success                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeneratorAnimInstance::SetSkillCheckSuccess(bool success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDAnimation.GeneratorAnimInstance.SetSkillCheckSuccess");
		
		UGeneratorAnimInstance_SetSkillCheckSuccess_Params params {};
		params.success = success;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGeneratorAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeneratorAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDAnimation.GeneratorAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHagDynamicAccessoryAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHagDynamicAccessoryAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDAnimation.HagDynamicAccessoryAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHatchAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHatchAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDAnimation.HatchAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041C9EF0
	 * 		Name   -> Function DBDAnimation.HealSurvivorSubAnimInstance.ResetHealerSkillCheckFailed
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UHealSurvivorSubAnimInstance::ResetHealerSkillCheckFailed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDAnimation.HealSurvivorSubAnimInstance.ResetHealerSkillCheckFailed");
		
		UHealSurvivorSubAnimInstance_ResetHealerSkillCheckFailed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041C9D90
	 * 		Name   -> Function DBDAnimation.HealSurvivorSubAnimInstance.OnHealerSkillCheckResponseAesthetic
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		bool                                               success                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ADBDPlayer*                                  healer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHealSurvivorSubAnimInstance::OnHealerSkillCheckResponseAesthetic(bool success, class ADBDPlayer* healer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDAnimation.HealSurvivorSubAnimInstance.OnHealerSkillCheckResponseAesthetic");
		
		UHealSurvivorSubAnimInstance_OnHealerSkillCheckResponseAesthetic_Params params {};
		params.success = success;
		params.healer = healer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHealSurvivorSubAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHealSurvivorSubAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDAnimation.HealSurvivorSubAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UInteractionSurvivorSubAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInteractionSurvivorSubAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDAnimation.InteractionSurvivorSubAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041C9D50
	 * 		Name   -> Function DBDAnimation.KillerAnimInstance.GetWeaponCustomizationId
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class FName UKillerAnimInstance::GetWeaponCustomizationId()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDAnimation.KillerAnimInstance.GetWeaponCustomizationId");
		
		UKillerAnimInstance_GetWeaponCustomizationId_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UKillerAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKillerAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDAnimation.KillerAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UKillerAttackSubAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKillerAttackSubAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDAnimation.KillerAttackSubAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UKillerLocomotionSubAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKillerLocomotionSubAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDAnimation.KillerLocomotionSubAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULegIKSurvivorSubAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULegIKSurvivorSubAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDAnimation.LegIKSurvivorSubAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULocomotionLookAtSurvivorSubAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULocomotionLookAtSurvivorSubAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDAnimation.LocomotionLookAtSurvivorSubAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULocomotionPredictor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULocomotionPredictor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDAnimation.LocomotionPredictor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULocomotionSurvivorSubAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULocomotionSurvivorSubAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDAnimation.LocomotionSurvivorSubAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULookAtKillerSubAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULookAtKillerSubAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDAnimation.LookAtKillerSubAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041CC840
	 * 		Name   -> Function DBDAnimation.LookAtTargetKillerSubAnimInstance.OnChaseStarted
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULookAtTargetKillerSubAnimInstance::OnChaseStarted(class ADBDPlayer* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDAnimation.LookAtTargetKillerSubAnimInstance.OnChaseStarted");
		
		ULookAtTargetKillerSubAnimInstance_OnChaseStarted_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041CC770
	 * 		Name   -> Function DBDAnimation.LookAtTargetKillerSubAnimInstance.OnChaseEnded
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              chaseTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULookAtTargetKillerSubAnimInstance::OnChaseEnded(class ADBDPlayer* Target, float chaseTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDAnimation.LookAtTargetKillerSubAnimInstance.OnChaseEnded");
		
		ULookAtTargetKillerSubAnimInstance_OnChaseEnded_Params params {};
		params.Target = Target;
		params.chaseTime = chaseTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULookAtTargetKillerSubAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULookAtTargetKillerSubAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDAnimation.LookAtTargetKillerSubAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULookAtThreatSurvivorSubAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULookAtThreatSurvivorSubAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDAnimation.LookAtThreatSurvivorSubAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMeshRotationCorrectionSubAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshRotationCorrectionSubAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDAnimation.MeshRotationCorrectionSubAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UOpenChestSurvivorSubAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOpenChestSurvivorSubAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDAnimation.OpenChestSurvivorSubAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041CC8F0
	 * 		Name   -> Function DBDAnimation.PalletAnimInstance.OnKillerSet
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ASlasherPlayer*                              killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPalletAnimInstance::OnKillerSet(class ASlasherPlayer* killer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDAnimation.PalletAnimInstance.OnKillerSet");
		
		UPalletAnimInstance_OnKillerSet_Params params {};
		params.killer = killer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPalletAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPalletAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDAnimation.PalletAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction URBTSurvivorSubAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URBTSurvivorSubAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDAnimation.RBTSurvivorSubAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction URepairGeneratorSubAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URepairGeneratorSubAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDAnimation.RepairGeneratorSubAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction URepairGeneratorSurvivorSubAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URepairGeneratorSurvivorSubAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDAnimation.RepairGeneratorSurvivorSubAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USabotageSurvivorSubAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USabotageSurvivorSubAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDAnimation.SabotageSurvivorSubAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041CCAB0
	 * 		Name   -> Function DBDAnimation.ScreamSurvivorSubAnimInstance.ResetScreamTrigger
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UScreamSurvivorSubAnimInstance::ResetScreamTrigger()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDAnimation.ScreamSurvivorSubAnimInstance.ResetScreamTrigger");
		
		UScreamSurvivorSubAnimInstance_ResetScreamTrigger_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UScreamSurvivorSubAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScreamSurvivorSubAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDAnimation.ScreamSurvivorSubAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D9DC40
	 * 		Name   -> Function DBDAnimation.SkillCheckFailureTracker.ResetSkillCheckFailed
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void USkillCheckFailureTracker::ResetSkillCheckFailed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDAnimation.SkillCheckFailureTracker.ResetSkillCheckFailed");
		
		USkillCheckFailureTracker_ResetSkillCheckFailed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041CC9A0
	 * 		Name   -> Function DBDAnimation.SkillCheckFailureTracker.OnSkillCheckFailed
	 * 		Flags  -> (Native, Protected, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USkillCheckFailureTracker::OnSkillCheckFailed(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDAnimation.SkillCheckFailureTracker.OnSkillCheckFailed");
		
		USkillCheckFailureTracker_OnSkillCheckFailed_Params params {};
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
	 * 		Name   -> PredefindFunction USkillCheckFailureTracker.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USkillCheckFailureTracker::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDAnimation.SkillCheckFailureTracker");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USurvivorAimableArmSensor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USurvivorAimableArmSensor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDAnimation.SurvivorAimableArmSensor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USurvivorAimableSubAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USurvivorAimableSubAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDAnimation.SurvivorAimableSubAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDAnimation.SurvivorAnimInstance.SetAudioRummageAkEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USurvivorAnimInstance::SetAudioRummageAkEvent(const class FName& Distance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDAnimation.SurvivorAnimInstance.SetAudioRummageAkEvent");
		
		USurvivorAnimInstance_SetAudioRummageAkEvent_Params params {};
		params.Distance = Distance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDAnimation.SurvivorAnimInstance.OnInfectiousFrightScream
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void USurvivorAnimInstance::OnInfectiousFrightScream()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDAnimation.SurvivorAnimInstance.OnInfectiousFrightScream");
		
		USurvivorAnimInstance_OnInfectiousFrightScream_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041CC6C0
	 * 		Name   -> Function DBDAnimation.SurvivorAnimInstance.IsPlayingMontageByName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        MontageID                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USurvivorAnimInstance::IsPlayingMontageByName(const class FName& MontageID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDAnimation.SurvivorAnimInstance.IsPlayingMontageByName");
		
		USurvivorAnimInstance_IsPlayingMontageByName_Params params {};
		params.MontageID = MontageID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDAnimation.SurvivorAnimInstance.AddAudioRepairRateRadius
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USurvivorAnimInstance::AddAudioRepairRateRadius(int32_t Distance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDAnimation.SurvivorAnimInstance.AddAudioRepairRateRadius");
		
		USurvivorAnimInstance_AddAudioRepairRateRadius_Params params {};
		params.Distance = Distance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USurvivorAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USurvivorAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDAnimation.SurvivorAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041CD0F0
	 * 		Name   -> Function DBDAnimation.Turn180Component.Server_SetSettings
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
	 * Parameters:
	 * 		float                                              Timestamp                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTurn180Settings                            Settings                                                   (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UTurn180Component::Server_SetSettings(float Timestamp, const struct FTurn180Settings& Settings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDAnimation.Turn180Component.Server_SetSettings");
		
		UTurn180Component_Server_SetSettings_Params params {};
		params.Timestamp = Timestamp;
		params.Settings = Settings;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTurn180Component.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTurn180Component::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDAnimation.Turn180Component");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041CD0D0
	 * 		Name   -> Function DBDAnimation.WakerObjectAnimInstance.ResetReappearTimer
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable)
	 */
	void UWakerObjectAnimInstance::ResetReappearTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDAnimation.WakerObjectAnimInstance.ResetReappearTimer");
		
		UWakerObjectAnimInstance_ResetReappearTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDAnimation.WakerObjectAnimInstance.OnReappear
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UWakerObjectAnimInstance::OnReappear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDAnimation.WakerObjectAnimInstance.OnReappear");
		
		UWakerObjectAnimInstance_OnReappear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041CD0A0
	 * 		Name   -> Function DBDAnimation.WakerObjectAnimInstance.GetWakerObjectStarted
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UWakerObjectAnimInstance::GetWakerObjectStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDAnimation.WakerObjectAnimInstance.GetWakerObjectStarted");
		
		UWakerObjectAnimInstance_GetWakerObjectStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041CD070
	 * 		Name   -> Function DBDAnimation.WakerObjectAnimInstance.GetWakerObjectChargeComplete
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UWakerObjectAnimInstance::GetWakerObjectChargeComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDAnimation.WakerObjectAnimInstance.GetWakerObjectChargeComplete");
		
		UWakerObjectAnimInstance_GetWakerObjectChargeComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041CD040
	 * 		Name   -> Function DBDAnimation.WakerObjectAnimInstance.GetWakerObjectCharge
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
	 */
	float UWakerObjectAnimInstance::GetWakerObjectCharge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDAnimation.WakerObjectAnimInstance.GetWakerObjectCharge");
		
		UWakerObjectAnimInstance_GetWakerObjectCharge_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041CD010
	 * 		Name   -> Function DBDAnimation.WakerObjectAnimInstance.GetWakerObject
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
	 */
	class AWakerObject* UWakerObjectAnimInstance::GetWakerObject()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDAnimation.WakerObjectAnimInstance.GetWakerObject");
		
		UWakerObjectAnimInstance_GetWakerObject_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UWakerObjectAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWakerObjectAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDAnimation.WakerObjectAnimInstance");
		return ptr;
	}

}


