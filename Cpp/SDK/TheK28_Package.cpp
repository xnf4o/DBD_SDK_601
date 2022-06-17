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
	 * 		Name   -> PredefindFunction UAddon_K28Power_04.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddon_K28Power_04::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK28.Addon_K28Power_04");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAddon_K28Power_16.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddon_K28Power_16::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK28.Addon_K28Power_16");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAddon_K28Power_17.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddon_K28Power_17::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK28.Addon_K28Power_17");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D49460
	 * 		Name   -> Function TheK28.Addon_K28Power_18.Authority_OnIntroComplete
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UAddon_K28Power_18::Authority_OnIntroComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.Addon_K28Power_18.Authority_OnIntroComplete");
		
		UAddon_K28Power_18_Authority_OnIntroComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAddon_K28Power_18.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddon_K28Power_18::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK28.Addon_K28Power_18");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04BC12F0
	 * 		Name   -> Function TheK28.Addon_K28Power_19.Multicast_TriggerLockerAnimationOnAllLockers
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		TArray<class ALocker*>                             lockers                                                    (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UAddon_K28Power_19::Multicast_TriggerLockerAnimationOnAllLockers(TArray<class ALocker*> lockers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.Addon_K28Power_19.Multicast_TriggerLockerAnimationOnAllLockers");
		
		UAddon_K28Power_19_Multicast_TriggerLockerAnimationOnAllLockers_Params params {};
		params.lockers = lockers;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAddon_K28Power_19.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddon_K28Power_19::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK28.Addon_K28Power_19");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAddon_K28Power_20.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddon_K28Power_20::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK28.Addon_K28Power_20");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D49530
	 * 		Name   -> Function TheK28.Addon_K28Power_21.Authority_OnLevelReadyToPlay
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UAddon_K28Power_21::Authority_OnLevelReadyToPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.Addon_K28Power_21.Authority_OnLevelReadyToPlay");
		
		UAddon_K28Power_21_Authority_OnLevelReadyToPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAddon_K28Power_21.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddon_K28Power_21::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK28.Addon_K28Power_21");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK28TeleportTarget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK28TeleportTarget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK28.K28TeleportTarget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D499D0
	 * 		Name   -> Function TheK28.K28AnimInstance.OnCustomizationChanged
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UK28AnimInstance::OnCustomizationChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28AnimInstance.OnCustomizationChanged");
		
		UK28AnimInstance_OnCustomizationChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D496D0
	 * 		Name   -> Function TheK28.K28AnimInstance.GetCustomAnimationTags
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class FName> UK28AnimInstance::GetCustomAnimationTags()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28AnimInstance.GetCustomAnimationTags");
		
		UK28AnimInstance_GetCustomAnimationTags_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D496A0
	 * 		Name   -> Function TheK28.K28AnimInstance.GetAnimationMappingIndex
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UK28AnimInstance::GetAnimationMappingIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28AnimInstance.GetAnimationMappingIndex");
		
		UK28AnimInstance_GetAnimationMappingIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK28.K28AnimInstance.BP_OnCustomizationAnimationMappingIDChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            animationMappingIndex                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK28AnimInstance::BP_OnCustomizationAnimationMappingIDChanged(int32_t animationMappingIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28AnimInstance.BP_OnCustomizationAnimationMappingIDChanged");
		
		UK28AnimInstance_BP_OnCustomizationAnimationMappingIDChanged_Params params {};
		params.animationMappingIndex = animationMappingIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK28AnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK28AnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK28.K28AnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D49680
	 * 		Name   -> Function TheK28.K28CheatComponent.DBD_K28TriggerNextNightCycle
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UK28CheatComponent::DBD_K28TriggerNextNightCycle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28CheatComponent.DBD_K28TriggerNextNightCycle");
		
		UK28CheatComponent_DBD_K28TriggerNextNightCycle_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D49660
	 * 		Name   -> Function TheK28.K28CheatComponent.DBD_K28LockAllLockbars
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UK28CheatComponent::DBD_K28LockAllLockbars()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28CheatComponent.DBD_K28LockAllLockbars");
		
		UK28CheatComponent_DBD_K28LockAllLockbars_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D89CF0
	 * 		Name   -> Function TheK28.K28CheatComponent.DBD_K28DisplayLockerClusters
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		float                                              secondsToDisplayDebugElements                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK28CheatComponent::DBD_K28DisplayLockerClusters(float secondsToDisplayDebugElements)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28CheatComponent.DBD_K28DisplayLockerClusters");
		
		UK28CheatComponent_DBD_K28DisplayLockerClusters_Params params {};
		params.secondsToDisplayDebugElements = secondsToDisplayDebugElements;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D49640
	 * 		Name   -> Function TheK28.K28CheatComponent.DBD_K28BreakAllLocks
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UK28CheatComponent::DBD_K28BreakAllLocks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28CheatComponent.DBD_K28BreakAllLocks");
		
		UK28CheatComponent_DBD_K28BreakAllLocks_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK28CheatComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK28CheatComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK28.K28CheatComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK28CustomizationAnimationSelector.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK28CustomizationAnimationSelector::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK28.K28CustomizationAnimationSelector");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D49D20
	 * 		Name   -> Function TheK28.K28DayNightComponent.OnRep_NighttimeNearingActivation
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UK28DayNightComponent::OnRep_NighttimeNearingActivation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28DayNightComponent.OnRep_NighttimeNearingActivation");
		
		UK28DayNightComponent_OnRep_NighttimeNearingActivation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D49CE0
	 * 		Name   -> Function TheK28.K28DayNightComponent.OnRep_HasReachedNightCycleNearEndThreshold
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UK28DayNightComponent::OnRep_HasReachedNightCycleNearEndThreshold()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28DayNightComponent.OnRep_HasReachedNightCycleNearEndThreshold");
		
		UK28DayNightComponent_OnRep_HasReachedNightCycleNearEndThreshold_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D49CC0
	 * 		Name   -> Function TheK28.K28DayNightComponent.OnRep_CurrentDayNightCycle
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UK28DayNightComponent::OnRep_CurrentDayNightCycle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28DayNightComponent.OnRep_CurrentDayNightCycle");
		
		UK28DayNightComponent_OnRep_CurrentDayNightCycle_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK28.K28DayNightComponent.Cosmetic_OnNightCycleChanged
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UAkComponent*                                AkComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EK28NightCycleState                                newNightCycleState                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK28DayNightComponent::Cosmetic_OnNightCycleChanged(class UAkComponent* AkComponent, EK28NightCycleState newNightCycleState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28DayNightComponent.Cosmetic_OnNightCycleChanged");
		
		UK28DayNightComponent_Cosmetic_OnNightCycleChanged_Params params {};
		params.AkComponent = AkComponent;
		params.newNightCycleState = newNightCycleState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK28.K28DayNightComponent.Cosmetic_OnIsInLastTwentySecondsOfNightCycle
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UAkComponent*                                AkComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK28DayNightComponent::Cosmetic_OnIsInLastTwentySecondsOfNightCycle(class UAkComponent* AkComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28DayNightComponent.Cosmetic_OnIsInLastTwentySecondsOfNightCycle");
		
		UK28DayNightComponent_Cosmetic_OnIsInLastTwentySecondsOfNightCycle_Params params {};
		params.AkComponent = AkComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D49570
	 * 		Name   -> Function TheK28.K28DayNightComponent.Authority_OnSurvivorDamageStateChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		ECamperDamageState                                 PreviousDamageState                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECamperDamageState                                 newDamageState                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK28DayNightComponent::Authority_OnSurvivorDamageStateChanged(ECamperDamageState PreviousDamageState, ECamperDamageState newDamageState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28DayNightComponent.Authority_OnSurvivorDamageStateChanged");
		
		UK28DayNightComponent_Authority_OnSurvivorDamageStateChanged_Params params {};
		params.PreviousDamageState = PreviousDamageState;
		params.newDamageState = newDamageState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D49480
	 * 		Name   -> Function TheK28.K28DayNightComponent.Authority_OnIntroCompleted
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UK28DayNightComponent::Authority_OnIntroCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28DayNightComponent.Authority_OnIntroCompleted");
		
		UK28DayNightComponent_Authority_OnIntroCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK28DayNightComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK28DayNightComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK28.K28DayNightComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK28.K28FXInterface.Cosmetic_TriggerFadeOut
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UK28FXInterface::Cosmetic_TriggerFadeOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28FXInterface.Cosmetic_TriggerFadeOut");
		
		UK28FXInterface_Cosmetic_TriggerFadeOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK28.K28FXInterface.Cosmetic_TriggerFadeIn
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UK28FXInterface::Cosmetic_TriggerFadeIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28FXInterface.Cosmetic_TriggerFadeIn");
		
		UK28FXInterface_Cosmetic_TriggerFadeIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK28.K28FXInterface.Cosmetic_OnTeleportCooldownEnded
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UK28FXInterface::Cosmetic_OnTeleportCooldownEnded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28FXInterface.Cosmetic_OnTeleportCooldownEnded");
		
		UK28FXInterface_Cosmetic_OnTeleportCooldownEnded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK28.K28FXInterface.Cosmetic_OnTeleportationToLockerStart
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              teleportationDuration                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               isKillerAlreadyHidingInLocker                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK28FXInterface::Cosmetic_OnTeleportationToLockerStart(float teleportationDuration, bool isKillerAlreadyHidingInLocker)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28FXInterface.Cosmetic_OnTeleportationToLockerStart");
		
		UK28FXInterface_Cosmetic_OnTeleportationToLockerStart_Params params {};
		params.teleportationDuration = teleportationDuration;
		params.isKillerAlreadyHidingInLocker = isKillerAlreadyHidingInLocker;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK28.K28FXInterface.Cosmetic_OnShowKiller
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isInstantShow                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK28FXInterface::Cosmetic_OnShowKiller(bool isInstantShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28FXInterface.Cosmetic_OnShowKiller");
		
		UK28FXInterface_Cosmetic_OnShowKiller_Params params {};
		params.isInstantShow = isInstantShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK28.K28FXInterface.Cosmetic_OnLockerTeleportTargetHighlighted
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UK28FXInterface::Cosmetic_OnLockerTeleportTargetHighlighted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28FXInterface.Cosmetic_OnLockerTeleportTargetHighlighted");
		
		UK28FXInterface_Cosmetic_OnLockerTeleportTargetHighlighted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK28.K28FXInterface.Cosmetic_OnLocallyObservedChanged
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UK28FXInterface::Cosmetic_OnLocallyObservedChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28FXInterface.Cosmetic_OnLocallyObservedChanged");
		
		UK28FXInterface_Cosmetic_OnLocallyObservedChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK28.K28FXInterface.Cosmetic_OnKillerEnterLocker
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UK28FXInterface::Cosmetic_OnKillerEnterLocker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28FXInterface.Cosmetic_OnKillerEnterLocker");
		
		UK28FXInterface_Cosmetic_OnKillerEnterLocker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK28.K28FXInterface.Cosmetic_OnIsKillingSurvivorWithMoriStateChanged
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isKillingSurvivorWithMori                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK28FXInterface::Cosmetic_OnIsKillingSurvivorWithMoriStateChanged(bool isKillingSurvivorWithMori)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28FXInterface.Cosmetic_OnIsKillingSurvivorWithMoriStateChanged");
		
		UK28FXInterface_Cosmetic_OnIsKillingSurvivorWithMoriStateChanged_Params params {};
		params.isKillingSurvivorWithMori = isKillingSurvivorWithMori;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK28.K28FXInterface.Cosmetic_OnHideKiller
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UK28FXInterface::Cosmetic_OnHideKiller()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28FXInterface.Cosmetic_OnHideKiller");
		
		UK28FXInterface_Cosmetic_OnHideKiller_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK28.K28FXInterface.Cosmetic_OnChargeTeleportStart
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UK28FXInterface::Cosmetic_OnChargeTeleportStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28FXInterface.Cosmetic_OnChargeTeleportStart");
		
		UK28FXInterface_Cosmetic_OnChargeTeleportStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK28.K28FXInterface.Cosmetic_OnChargeTeleportComplete
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UK28FXInterface::Cosmetic_OnChargeTeleportComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28FXInterface.Cosmetic_OnChargeTeleportComplete");
		
		UK28FXInterface_Cosmetic_OnChargeTeleportComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK28.K28FXInterface.Cosmetic_OnChargeTeleportCancelled
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UK28FXInterface::Cosmetic_OnChargeTeleportCancelled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28FXInterface.Cosmetic_OnChargeTeleportCancelled");
		
		UK28FXInterface_Cosmetic_OnChargeTeleportCancelled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK28FXInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK28FXInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK28.K28FXInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D499F0
	 * 		Name   -> Function TheK28.K28IsNightCycleState.OnLevelReadyToPlay
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UK28IsNightCycleState::OnLevelReadyToPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28IsNightCycleState.OnLevelReadyToPlay");
		
		UK28IsNightCycleState_OnLevelReadyToPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK28IsNightCycleState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK28IsNightCycleState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK28.K28IsNightCycleState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D4DCC0
	 * 		Name   -> Function TheK28.K28PlayerComponent.OnSurvivorInRangeChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               InRange                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ACamperPlayer*                               Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK28PlayerComponent::OnSurvivorInRangeChanged(bool InRange, class ACamperPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28PlayerComponent.OnSurvivorInRangeChanged");
		
		UK28PlayerComponent_OnSurvivorInRangeChanged_Params params {};
		params.InRange = InRange;
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042E0130
	 * 		Name   -> Function TheK28.K28PlayerComponent.OnRep_DayNightComponent
	 * 		Flags  -> (Native, Protected)
	 */
	void UK28PlayerComponent::OnRep_DayNightComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28PlayerComponent.OnRep_DayNightComponent");
		
		UK28PlayerComponent_OnRep_DayNightComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK28PlayerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK28PlayerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK28.K28PlayerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK28.K28KillerComponent.Cosmetic_OnNighttimeNearingActivation
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ASlasherPlayer*                              killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK28KillerComponent::Cosmetic_OnNighttimeNearingActivation(class ASlasherPlayer* killer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28KillerComponent.Cosmetic_OnNighttimeNearingActivation");
		
		UK28KillerComponent_Cosmetic_OnNighttimeNearingActivation_Params params {};
		params.killer = killer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK28.K28KillerComponent.Cosmetic_OnNightCycleStateChanged
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ASlasherPlayer*                              killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EK28NightCycleState                                dayNightCycleState                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK28KillerComponent::Cosmetic_OnNightCycleStateChanged(class ASlasherPlayer* killer, EK28NightCycleState dayNightCycleState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28KillerComponent.Cosmetic_OnNightCycleStateChanged");
		
		UK28KillerComponent_Cosmetic_OnNightCycleStateChanged_Params params {};
		params.killer = killer;
		params.dayNightCycleState = dayNightCycleState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK28KillerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK28KillerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK28.K28KillerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D49780
	 * 		Name   -> Function TheK28.K28KillerEnterLockerInteraction.IsKillerAllowedToEnterLocker
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UK28KillerEnterLockerInteraction::IsKillerAllowedToEnterLocker(class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28KillerEnterLockerInteraction.IsKillerAllowedToEnterLocker");
		
		UK28KillerEnterLockerInteraction_IsKillerAllowedToEnterLocker_Params params {};
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
	 * 		Name   -> PredefindFunction UK28KillerEnterLockerInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK28KillerEnterLockerInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK28.K28KillerEnterLockerInteraction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK28KillerExitLockerInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK28KillerExitLockerInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK28.K28KillerExitLockerInteraction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK28KillerExitLockedLockerInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK28KillerExitLockedLockerInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK28.K28KillerExitLockedLockerInteraction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK28KillerExitLockerWithSurvivorInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK28KillerExitLockerWithSurvivorInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK28.K28KillerExitLockerWithSurvivorInteraction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D49550
	 * 		Name   -> Function TheK28.K28KillerInstinctEffect.Authority_OnLevelReadyToPlay
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UK28KillerInstinctEffect::Authority_OnLevelReadyToPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28KillerInstinctEffect.Authority_OnLevelReadyToPlay");
		
		UK28KillerInstinctEffect_Authority_OnLevelReadyToPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D494A0
	 * 		Name   -> Function TheK28.K28KillerInstinctEffect.Authority_OnKillerInstinctApplicableChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               Active                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK28KillerInstinctEffect::Authority_OnKillerInstinctApplicableChanged(bool Active)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28KillerInstinctEffect.Authority_OnKillerInstinctApplicableChanged");
		
		UK28KillerInstinctEffect_Authority_OnKillerInstinctApplicableChanged_Params params {};
		params.Active = Active;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK28KillerInstinctEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK28KillerInstinctEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK28.K28KillerInstinctEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D49D00
	 * 		Name   -> Function TheK28.K28KillerLockerComponent.OnRep_LockerState_Replicated
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UK28KillerLockerComponent::OnRep_LockerState_Replicated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28KillerLockerComponent.OnRep_LockerState_Replicated");
		
		UK28KillerLockerComponent_OnRep_LockerState_Replicated_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D49BF0
	 * 		Name   -> Function TheK28.K28KillerLockerComponent.OnPlayerInLockerChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ADBDPlayer*                                  previousPlayerInLocker                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ADBDPlayer*                                  newPlayerInLocker                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK28KillerLockerComponent::OnPlayerInLockerChanged(class ADBDPlayer* previousPlayerInLocker, class ADBDPlayer* newPlayerInLocker)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28KillerLockerComponent.OnPlayerInLockerChanged");
		
		UK28KillerLockerComponent_OnPlayerInLockerChanged_Params params {};
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
	 * 		Name   -> PredefindFunction UK28KillerLockerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK28KillerLockerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK28.K28KillerLockerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK28KillerPlayerViewComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK28KillerPlayerViewComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK28.K28KillerPlayerViewComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D49A50
	 * 		Name   -> Function TheK28.K28KillerTeleportationComponent.OnPlayerFinishedEnteringLocker
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ADBDPlayer*                                  playerThatWasInLocker                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ADBDPlayer*                                  playerNowInLocker                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK28KillerTeleportationComponent::OnPlayerFinishedEnteringLocker(class ADBDPlayer* playerThatWasInLocker, class ADBDPlayer* playerNowInLocker)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28KillerTeleportationComponent.OnPlayerFinishedEnteringLocker");
		
		UK28KillerTeleportationComponent_OnPlayerFinishedEnteringLocker_Params params {};
		params.playerThatWasInLocker = playerThatWasInLocker;
		params.playerNowInLocker = playerNowInLocker;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D49A10
	 * 		Name   -> Function TheK28.K28KillerTeleportationComponent.OnLevelReadyToPlay
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UK28KillerTeleportationComponent::OnLevelReadyToPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28KillerTeleportationComponent.OnLevelReadyToPlay");
		
		UK28KillerTeleportationComponent_OnLevelReadyToPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D49850
	 * 		Name   -> Function TheK28.K28KillerTeleportationComponent.Multicast_TeleportToLockerStart
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		struct FK28SecondaryCameraMovementData             cameraMovementData                                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UK28LockerComponent*                         lockerBeingTeleportedTo                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ACamperPlayer*                               survivorToGrab                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK28KillerTeleportationComponent::Multicast_TeleportToLockerStart(const struct FK28SecondaryCameraMovementData& cameraMovementData, class UK28LockerComponent* lockerBeingTeleportedTo, class ACamperPlayer* survivorToGrab)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28KillerTeleportationComponent.Multicast_TeleportToLockerStart");
		
		UK28KillerTeleportationComponent_Multicast_TeleportToLockerStart_Params params {};
		params.cameraMovementData = cameraMovementData;
		params.lockerBeingTeleportedTo = lockerBeingTeleportedTo;
		params.survivorToGrab = survivorToGrab;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042FD500
	 * 		Name   -> Function TheK28.K28KillerTeleportationComponent.Multicast_TeleportToLockerEnd
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		class UK28LockerComponent*                         lockerTeleportedTo                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ACamperPlayer*                               survivorInLocker                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK28KillerTeleportationComponent::Multicast_TeleportToLockerEnd(class UK28LockerComponent* lockerTeleportedTo, class ACamperPlayer* survivorInLocker)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28KillerTeleportationComponent.Multicast_TeleportToLockerEnd");
		
		UK28KillerTeleportationComponent_Multicast_TeleportToLockerEnd_Params params {};
		params.lockerTeleportedTo = lockerTeleportedTo;
		params.survivorInLocker = survivorInLocker;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK28KillerTeleportationComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK28KillerTeleportationComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK28.K28KillerTeleportationComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK28LockAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK28LockAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK28.K28LockAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D49D40
	 * 		Name   -> Function TheK28.K28Lockbar.OnRep_State
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AK28Lockbar::OnRep_State()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28Lockbar.OnRep_State");
		
		AK28Lockbar_OnRep_State_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D49B20
	 * 		Name   -> Function TheK28.K28Lockbar.OnPlayerInLockerChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ADBDPlayer*                                  previousPlayerInLocker                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ADBDPlayer*                                  newPlayerInLocker                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK28Lockbar::OnPlayerInLockerChanged(class ADBDPlayer* previousPlayerInLocker, class ADBDPlayer* newPlayerInLocker)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28Lockbar.OnPlayerInLockerChanged");
		
		AK28Lockbar_OnPlayerInLockerChanged_Params params {};
		params.previousPlayerInLocker = previousPlayerInLocker;
		params.newPlayerInLocker = newPlayerInLocker;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D49A30
	 * 		Name   -> Function TheK28.K28Lockbar.OnLocallyObservedChanged
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AK28Lockbar::OnLocallyObservedChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28Lockbar.OnLocallyObservedChanged");
		
		AK28Lockbar_OnLocallyObservedChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D49820
	 * 		Name   -> Function TheK28.K28Lockbar.IsLocallyObservingSurvivor
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AK28Lockbar::IsLocallyObservingSurvivor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28Lockbar.IsLocallyObservingSurvivor");
		
		AK28Lockbar_IsLocallyObservingSurvivor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D49750
	 * 		Name   -> Function TheK28.K28Lockbar.GetMontagePlayer
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
	 */
	class UMontagePlayer* AK28Lockbar::GetMontagePlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28Lockbar.GetMontagePlayer");
		
		AK28Lockbar_GetMontagePlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK28.K28Lockbar.Cosmetic_TriggerLockbarBreak
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AK28Lockbar::Cosmetic_TriggerLockbarBreak()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28Lockbar.Cosmetic_TriggerLockbarBreak");
		
		AK28Lockbar_Cosmetic_TriggerLockbarBreak_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK28.K28Lockbar.Cosmetic_SetLockbarHighlightActivationState
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isHightlightActive                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK28Lockbar::Cosmetic_SetLockbarHighlightActivationState(bool isHightlightActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28Lockbar.Cosmetic_SetLockbarHighlightActivationState");
		
		AK28Lockbar_Cosmetic_SetLockbarHighlightActivationState_Params params {};
		params.isHightlightActive = isHightlightActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK28.K28Lockbar.Cosmetic_OnStateChanged
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EK28LockbarState                                   NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK28Lockbar::Cosmetic_OnStateChanged(EK28LockbarState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28Lockbar.Cosmetic_OnStateChanged");
		
		AK28Lockbar_Cosmetic_OnStateChanged_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AK28Lockbar.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AK28Lockbar::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK28.K28Lockbar");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK28LockerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK28LockerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK28.K28LockerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK28.K28LockerCosmeticHelperActor.OnAssociatedLockerActorSet
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AK28LockerCosmeticHelperActor::OnAssociatedLockerActorSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28LockerCosmeticHelperActor.OnAssociatedLockerActorSet");
		
		AK28LockerCosmeticHelperActor_OnAssociatedLockerActorSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D4D730
	 * 		Name   -> Function TheK28.K28LockerCosmeticHelperActor.GetSkeletalMesh
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class USkeletalMeshComponent* AK28LockerCosmeticHelperActor::GetSkeletalMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28LockerCosmeticHelperActor.GetSkeletalMesh");
		
		AK28LockerCosmeticHelperActor_GetSkeletalMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D4D700
	 * 		Name   -> Function TheK28.K28LockerCosmeticHelperActor.GetMaterialHelper
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class UMaterialHelper* AK28LockerCosmeticHelperActor::GetMaterialHelper()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28LockerCosmeticHelperActor.GetMaterialHelper");
		
		AK28LockerCosmeticHelperActor_GetMaterialHelper_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042AF4B0
	 * 		Name   -> Function TheK28.K28LockerCosmeticHelperActor.GetLocker
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class ALocker* AK28LockerCosmeticHelperActor::GetLocker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28LockerCosmeticHelperActor.GetLocker");
		
		AK28LockerCosmeticHelperActor_GetLocker_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK28.K28LockerCosmeticHelperActor.Cosmetic_OnLockerGrabStateChanged
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isLockerGrabOngoing                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK28LockerCosmeticHelperActor::Cosmetic_OnLockerGrabStateChanged(bool isLockerGrabOngoing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28LockerCosmeticHelperActor.Cosmetic_OnLockerGrabStateChanged");
		
		AK28LockerCosmeticHelperActor_Cosmetic_OnLockerGrabStateChanged_Params params {};
		params.isLockerGrabOngoing = isLockerGrabOngoing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK28.K28LockerCosmeticHelperActor.Cosmetic_OnLockedStateChanged
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isLockerLocked                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK28LockerCosmeticHelperActor::Cosmetic_OnLockedStateChanged(bool isLockerLocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28LockerCosmeticHelperActor.Cosmetic_OnLockedStateChanged");
		
		AK28LockerCosmeticHelperActor_Cosmetic_OnLockedStateChanged_Params params {};
		params.isLockerLocked = isLockerLocked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK28.K28LockerCosmeticHelperActor.Cosmetic_OnKillerTeleportationToLockerStart
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void AK28LockerCosmeticHelperActor::Cosmetic_OnKillerTeleportationToLockerStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28LockerCosmeticHelperActor.Cosmetic_OnKillerTeleportationToLockerStart");
		
		AK28LockerCosmeticHelperActor_Cosmetic_OnKillerTeleportationToLockerStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK28.K28LockerCosmeticHelperActor.Cosmetic_OnKillerTeleportationToLockerEnd
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void AK28LockerCosmeticHelperActor::Cosmetic_OnKillerTeleportationToLockerEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28LockerCosmeticHelperActor.Cosmetic_OnKillerTeleportationToLockerEnd");
		
		AK28LockerCosmeticHelperActor_Cosmetic_OnKillerTeleportationToLockerEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK28.K28LockerCosmeticHelperActor.Cosmetic_OnKillerInsideLockerRevealed
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void AK28LockerCosmeticHelperActor::Cosmetic_OnKillerInsideLockerRevealed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28LockerCosmeticHelperActor.Cosmetic_OnKillerInsideLockerRevealed");
		
		AK28LockerCosmeticHelperActor_Cosmetic_OnKillerInsideLockerRevealed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK28.K28LockerCosmeticHelperActor.Cosmetic_OnKillerExitLocker
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void AK28LockerCosmeticHelperActor::Cosmetic_OnKillerExitLocker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28LockerCosmeticHelperActor.Cosmetic_OnKillerExitLocker");
		
		AK28LockerCosmeticHelperActor_Cosmetic_OnKillerExitLocker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK28.K28LockerCosmeticHelperActor.Cosmetic_OnKillerEnteredLocker
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void AK28LockerCosmeticHelperActor::Cosmetic_OnKillerEnteredLocker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28LockerCosmeticHelperActor.Cosmetic_OnKillerEnteredLocker");
		
		AK28LockerCosmeticHelperActor_Cosmetic_OnKillerEnteredLocker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AK28LockerCosmeticHelperActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AK28LockerCosmeticHelperActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK28.K28LockerCosmeticHelperActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK28LockerEntitySpikesUpdateStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK28LockerEntitySpikesUpdateStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK28.K28LockerEntitySpikesUpdateStrategy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D4DD90
	 * 		Name   -> Function TheK28.K28LockerTeleportSwapInteraction.Server_RequestTeleportToTarget
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer)
	 * Parameters:
	 * 		class ASlasherPlayer*                              killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UActorComponent*                             teleportTarget                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK28LockerTeleportSwapInteraction::Server_RequestTeleportToTarget(class ASlasherPlayer* killer, class UActorComponent* teleportTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28LockerTeleportSwapInteraction.Server_RequestTeleportToTarget");
		
		UK28LockerTeleportSwapInteraction_Server_RequestTeleportToTarget_Params params {};
		params.killer = killer;
		params.teleportTarget = teleportTarget;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D4D8F0
	 * 		Name   -> Function TheK28.K28LockerTeleportSwapInteraction.Multicast_RefuseTeleportationRequest
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 */
	void UK28LockerTeleportSwapInteraction::Multicast_RefuseTeleportationRequest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28LockerTeleportSwapInteraction.Multicast_RefuseTeleportationRequest");
		
		UK28LockerTeleportSwapInteraction_Multicast_RefuseTeleportationRequest_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D4D820
	 * 		Name   -> Function TheK28.K28LockerTeleportSwapInteraction.Multicast_ConfirmTeleportationRequest
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		class ASlasherPlayer*                              killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UActorComponent*                             teleportTarget                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK28LockerTeleportSwapInteraction::Multicast_ConfirmTeleportationRequest(class ASlasherPlayer* killer, class UActorComponent* teleportTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28LockerTeleportSwapInteraction.Multicast_ConfirmTeleportationRequest");
		
		UK28LockerTeleportSwapInteraction_Multicast_ConfirmTeleportationRequest_Params params {};
		params.killer = killer;
		params.teleportTarget = teleportTarget;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04C63E10
	 * 		Name   -> Function TheK28.K28LockerTeleportSwapInteraction.Multicast_CompleteTeleportation
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 */
	void UK28LockerTeleportSwapInteraction::Multicast_CompleteTeleportation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28LockerTeleportSwapInteraction.Multicast_CompleteTeleportation");
		
		UK28LockerTeleportSwapInteraction_Multicast_CompleteTeleportation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK28LockerTeleportSwapInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK28LockerTeleportSwapInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK28.K28LockerTeleportSwapInteraction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK28LockLockbarInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK28LockLockbarInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK28.K28LockLockbarInteraction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D4D690
	 * 		Name   -> Function TheK28.K28MenuAnimInstance.GetAnimationMappingIndex
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UK28MenuAnimInstance::GetAnimationMappingIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28MenuAnimInstance.GetAnimationMappingIndex");
		
		UK28MenuAnimInstance_GetAnimationMappingIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK28.K28MenuAnimInstance.BP_OnCustomizationAnimationMappingIDChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            animationMappingIndex                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK28MenuAnimInstance::BP_OnCustomizationAnimationMappingIDChanged(int32_t animationMappingIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28MenuAnimInstance.BP_OnCustomizationAnimationMappingIDChanged");
		
		UK28MenuAnimInstance_BP_OnCustomizationAnimationMappingIDChanged_Params params {};
		params.animationMappingIndex = animationMappingIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK28MenuAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK28MenuAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK28.K28MenuAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK28P01.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK28P01::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK28.K28P01");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK28P01Effect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK28P01Effect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK28.K28P01Effect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK28P02.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK28P02::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK28.K28P02");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D4DCA0
	 * 		Name   -> Function TheK28.K28Power.OnRep_TeleportTokens
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AK28Power::OnRep_TeleportTokens()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28Power.OnRep_TeleportTokens");
		
		AK28Power_OnRep_TeleportTokens_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D4DC20
	 * 		Name   -> Function TheK28.K28Power.OnIntroCompleted
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AK28Power::OnIntroCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28Power.OnIntroCompleted");
		
		AK28Power_OnIntroCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AK28Power.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AK28Power::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK28.K28Power");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK28PowerChargePresentationPowerFadeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK28PowerChargePresentationPowerFadeComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK28.K28PowerChargePresentationPowerFadeComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK28PowerPresentationItemProgressComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK28PowerPresentationItemProgressComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK28.K28PowerPresentationItemProgressComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D4DC80
	 * 		Name   -> Function TheK28.K28Remnant.OnRep_RemnantState
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AK28Remnant::OnRep_RemnantState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28Remnant.OnRep_RemnantState");
		
		AK28Remnant_OnRep_RemnantState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D4DB90
	 * 		Name   -> Function TheK28.K28Remnant.Multicast_TriggerTeleportStartVFX
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		class ASlasherPlayer*                              killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK28Remnant::Multicast_TriggerTeleportStartVFX(class ASlasherPlayer* killer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28Remnant.Multicast_TriggerTeleportStartVFX");
		
		AK28Remnant_Multicast_TriggerTeleportStartVFX_Params params {};
		params.killer = killer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D4DA80
	 * 		Name   -> Function TheK28.K28Remnant.Multicast_TeleportToRemnant
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private, HasDefaults)
	 * Parameters:
	 * 		class ASlasherPlayer*                              killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    teleportRotation                                           (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               isAnimationSlowed                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK28Remnant::Multicast_TeleportToRemnant(class ASlasherPlayer* killer, const struct FRotator& teleportRotation, bool isAnimationSlowed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28Remnant.Multicast_TeleportToRemnant");
		
		AK28Remnant_Multicast_TeleportToRemnant_Params params {};
		params.killer = killer;
		params.teleportRotation = teleportRotation;
		params.isAnimationSlowed = isAnimationSlowed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D4D9F0
	 * 		Name   -> Function TheK28.K28Remnant.Multicast_SurvivorDestroyedRemnant
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		class ACamperPlayer*                               survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK28Remnant::Multicast_SurvivorDestroyedRemnant(class ACamperPlayer* survivor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28Remnant.Multicast_SurvivorDestroyedRemnant");
		
		AK28Remnant_Multicast_SurvivorDestroyedRemnant_Params params {};
		params.survivor = survivor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04A01720
	 * 		Name   -> Function TheK28.K28Remnant.Multicast_DeactivateRemnant
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 */
	void AK28Remnant::Multicast_DeactivateRemnant()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28Remnant.Multicast_DeactivateRemnant");
		
		AK28Remnant_Multicast_DeactivateRemnant_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D4D760
	 * 		Name   -> Function TheK28.K28Remnant.Multicast_ActivateRemnant
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private, HasDefaults)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Rotation                                                   (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AK28Remnant::Multicast_ActivateRemnant(const struct FVector& Location, const struct FRotator& Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28Remnant.Multicast_ActivateRemnant");
		
		AK28Remnant_Multicast_ActivateRemnant_Params params {};
		params.Location = Location;
		params.Rotation = Rotation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK28.K28Remnant.Cosmetic_SurvivorDestroyedRemnant
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ACamperPlayer*                               survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK28Remnant::Cosmetic_SurvivorDestroyedRemnant(class ACamperPlayer* survivor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28Remnant.Cosmetic_SurvivorDestroyedRemnant");
		
		AK28Remnant_Cosmetic_SurvivorDestroyedRemnant_Params params {};
		params.survivor = survivor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK28.K28Remnant.Cosmetic_OnTeleportationStartVFX
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ASlasherPlayer*                              killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK28Remnant::Cosmetic_OnTeleportationStartVFX(class ASlasherPlayer* killer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28Remnant.Cosmetic_OnTeleportationStartVFX");
		
		AK28Remnant_Cosmetic_OnTeleportationStartVFX_Params params {};
		params.killer = killer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK28.K28Remnant.Cosmetic_OnTeleportationPerformedVFX
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ASlasherPlayer*                              killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               isSlowTeleportation                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK28Remnant::Cosmetic_OnTeleportationPerformedVFX(class ASlasherPlayer* killer, bool isSlowTeleportation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28Remnant.Cosmetic_OnTeleportationPerformedVFX");
		
		AK28Remnant_Cosmetic_OnTeleportationPerformedVFX_Params params {};
		params.killer = killer;
		params.isSlowTeleportation = isSlowTeleportation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK28.K28Remnant.Cosmetic_OnRemnantStateChanged
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EK28RemnantState                                   remnantState                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK28Remnant::Cosmetic_OnRemnantStateChanged(EK28RemnantState remnantState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28Remnant.Cosmetic_OnRemnantStateChanged");
		
		AK28Remnant_Cosmetic_OnRemnantStateChanged_Params params {};
		params.remnantState = remnantState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK28.K28Remnant.Cosmetic_OnRemnantDeactivated
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void AK28Remnant::Cosmetic_OnRemnantDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28Remnant.Cosmetic_OnRemnantDeactivated");
		
		AK28Remnant_Cosmetic_OnRemnantDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK28.K28Remnant.Cosmetic_OnRemnantActivated
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void AK28Remnant::Cosmetic_OnRemnantActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28Remnant.Cosmetic_OnRemnantActivated");
		
		AK28Remnant_Cosmetic_OnRemnantActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D4D440
	 * 		Name   -> Function TheK28.K28Remnant.Authority_OnCollisionDetected
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void AK28Remnant::Authority_OnCollisionDetected(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28Remnant.Authority_OnCollisionDetected");
		
		AK28Remnant_Authority_OnCollisionDetected_Params params {};
		params.HitComponent = HitComponent;
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
	 * 		Name   -> PredefindFunction AK28Remnant.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AK28Remnant::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK28.K28Remnant");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D4D660
	 * 		Name   -> Function TheK28.K28RemnantAnimInstance.ConsumeSurvivorWhoDestroyedRemnant
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	class ACamperPlayer* UK28RemnantAnimInstance::ConsumeSurvivorWhoDestroyedRemnant()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28RemnantAnimInstance.ConsumeSurvivorWhoDestroyedRemnant");
		
		UK28RemnantAnimInstance_ConsumeSurvivorWhoDestroyedRemnant_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK28RemnantAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK28RemnantAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK28.K28RemnantAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK28RemnantOutlineUpdateStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK28RemnantOutlineUpdateStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK28.K28RemnantOutlineUpdateStrategy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x049E8410
	 * 		Name   -> Function TheK28.K28SecondaryCamera.Server_SetIsKillerPlayerViewTarget
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer)
	 * Parameters:
	 * 		bool                                               isKillerPlayerViewTarget                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK28SecondaryCamera::Server_SetIsKillerPlayerViewTarget(bool isKillerPlayerViewTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28SecondaryCamera.Server_SetIsKillerPlayerViewTarget");
		
		AK28SecondaryCamera_Server_SetIsKillerPlayerViewTarget_Params params {};
		params.isKillerPlayerViewTarget = isKillerPlayerViewTarget;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CE14D0
	 * 		Name   -> Function TheK28.K28SecondaryCamera.Server_SetCameraOrientation
	 * 		Flags  -> (Final, Net, Native, Event, Private, NetServer, HasDefaults)
	 * Parameters:
	 * 		struct FRotator                                    NewOrientation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AK28SecondaryCamera::Server_SetCameraOrientation(const struct FRotator& NewOrientation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28SecondaryCamera.Server_SetCameraOrientation");
		
		AK28SecondaryCamera_Server_SetCameraOrientation_Params params {};
		params.NewOrientation = NewOrientation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D4DC60
	 * 		Name   -> Function TheK28.K28SecondaryCamera.OnRep_IsKillerPlayerViewTarget
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AK28SecondaryCamera::OnRep_IsKillerPlayerViewTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28SecondaryCamera.OnRep_IsKillerPlayerViewTarget");
		
		AK28SecondaryCamera_OnRep_IsKillerPlayerViewTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D4DC40
	 * 		Name   -> Function TheK28.K28SecondaryCamera.OnLevelReadyToPlay
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AK28SecondaryCamera::OnLevelReadyToPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28SecondaryCamera.OnLevelReadyToPlay");
		
		AK28SecondaryCamera_OnLevelReadyToPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D4D910
	 * 		Name   -> Function TheK28.K28SecondaryCamera.Multicast_SetCameraOrientation
	 * 		Flags  -> (Net, Native, Event, NetMulticast, Public, HasDefaults)
	 * Parameters:
	 * 		struct FRotator                                    NewOrientation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               isRelativeRotation                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK28SecondaryCamera::Multicast_SetCameraOrientation(const struct FRotator& NewOrientation, bool isRelativeRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28SecondaryCamera.Multicast_SetCameraOrientation");
		
		AK28SecondaryCamera_Multicast_SetCameraOrientation_Params params {};
		params.NewOrientation = NewOrientation;
		params.isRelativeRotation = isRelativeRotation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04A8ED50
	 * 		Name   -> Function TheK28.K28SecondaryCamera.GetIsKillerPlayerViewTarget
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AK28SecondaryCamera::GetIsKillerPlayerViewTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28SecondaryCamera.GetIsKillerPlayerViewTarget");
		
		AK28SecondaryCamera_GetIsKillerPlayerViewTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D4D6C0
	 * 		Name   -> Function TheK28.K28SecondaryCamera.GetCameraWorldRotation
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FRotator AK28SecondaryCamera::GetCameraWorldRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28SecondaryCamera.GetCameraWorldRotation");
		
		AK28SecondaryCamera_GetCameraWorldRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK28.K28SecondaryCamera.Cosmetic_UpdateDarknessPlaneVisibility
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK28SecondaryCamera::Cosmetic_UpdateDarknessPlaneVisibility(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28SecondaryCamera.Cosmetic_UpdateDarknessPlaneVisibility");
		
		AK28SecondaryCamera_Cosmetic_UpdateDarknessPlaneVisibility_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK28.K28SecondaryCamera.Cosmetic_TriggerTeleportStartVisuals
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void AK28SecondaryCamera::Cosmetic_TriggerTeleportStartVisuals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28SecondaryCamera.Cosmetic_TriggerTeleportStartVisuals");
		
		AK28SecondaryCamera_Cosmetic_TriggerTeleportStartVisuals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK28.K28SecondaryCamera.Cosmetic_TriggerTeleportEndVisuals
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void AK28SecondaryCamera::Cosmetic_TriggerTeleportEndVisuals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28SecondaryCamera.Cosmetic_TriggerTeleportEndVisuals");
		
		AK28SecondaryCamera_Cosmetic_TriggerTeleportEndVisuals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK28.K28SecondaryCamera.Cosmetic_TriggerFadeOut
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void AK28SecondaryCamera::Cosmetic_TriggerFadeOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28SecondaryCamera.Cosmetic_TriggerFadeOut");
		
		AK28SecondaryCamera_Cosmetic_TriggerFadeOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK28.K28SecondaryCamera.Cosmetic_TriggerFadeIn
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void AK28SecondaryCamera::Cosmetic_TriggerFadeIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28SecondaryCamera.Cosmetic_TriggerFadeIn");
		
		AK28SecondaryCamera_Cosmetic_TriggerFadeIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK28.K28SecondaryCamera.Cosmetic_OnNightCycleChanged
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EK28NightCycleState                                newNightCycleState                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK28SecondaryCamera::Cosmetic_OnNightCycleChanged(EK28NightCycleState newNightCycleState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28SecondaryCamera.Cosmetic_OnNightCycleChanged");
		
		AK28SecondaryCamera_Cosmetic_OnNightCycleChanged_Params params {};
		params.newNightCycleState = newNightCycleState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK28.K28SecondaryCamera.Cosmetic_OnKillerExitLocker
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void AK28SecondaryCamera::Cosmetic_OnKillerExitLocker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28SecondaryCamera.Cosmetic_OnKillerExitLocker");
		
		AK28SecondaryCamera_Cosmetic_OnKillerExitLocker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK28.K28SecondaryCamera.Cosmetic_OnKillerEnterLocker
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void AK28SecondaryCamera::Cosmetic_OnKillerEnterLocker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28SecondaryCamera.Cosmetic_OnKillerEnterLocker");
		
		AK28SecondaryCamera_Cosmetic_OnKillerEnterLocker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK28.K28SecondaryCamera.Cosmetic_OnIsLocallyObservingKillerChanged
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isLocallyObservingKiller                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK28SecondaryCamera::Cosmetic_OnIsLocallyObservingKillerChanged(bool isLocallyObservingKiller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28SecondaryCamera.Cosmetic_OnIsLocallyObservingKillerChanged");
		
		AK28SecondaryCamera_Cosmetic_OnIsLocallyObservingKillerChanged_Params params {};
		params.isLocallyObservingKiller = isLocallyObservingKiller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK28.K28SecondaryCamera.Cosmetic_DisableAllEffects
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void AK28SecondaryCamera::Cosmetic_DisableAllEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28SecondaryCamera.Cosmetic_DisableAllEffects");
		
		AK28SecondaryCamera_Cosmetic_DisableAllEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AK28SecondaryCamera.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AK28SecondaryCamera::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK28.K28SecondaryCamera");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK28SurvivorAbductionCameraBehaviourComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK28SurvivorAbductionCameraBehaviourComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK28.K28SurvivorAbductionCameraBehaviourComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK28SurvivorComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK28SurvivorComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK28.K28SurvivorComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D4FE30
	 * 		Name   -> Function TheK28.K28SurvivorCosmeticHelperActor.OnLevelReadyToPlay
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AK28SurvivorCosmeticHelperActor::OnLevelReadyToPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28SurvivorCosmeticHelperActor.OnLevelReadyToPlay");
		
		AK28SurvivorCosmeticHelperActor_OnLevelReadyToPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK28.K28SurvivorCosmeticHelperActor.GetDarknessPlaneMesh
	 * 		Flags  -> (Event, Protected, BlueprintEvent, Const)
	 */
	class UStaticMeshComponent* AK28SurvivorCosmeticHelperActor::GetDarknessPlaneMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28SurvivorCosmeticHelperActor.GetDarknessPlaneMesh");
		
		AK28SurvivorCosmeticHelperActor_GetDarknessPlaneMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK28.K28SurvivorCosmeticHelperActor.Cosmetic_OnNighttimeNearingActivation
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void AK28SurvivorCosmeticHelperActor::Cosmetic_OnNighttimeNearingActivation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28SurvivorCosmeticHelperActor.Cosmetic_OnNighttimeNearingActivation");
		
		AK28SurvivorCosmeticHelperActor_Cosmetic_OnNighttimeNearingActivation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK28.K28SurvivorCosmeticHelperActor.Cosmetic_OnNightCycleChanged
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EK28NightCycleState                                nightCycleState                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK28SurvivorCosmeticHelperActor::Cosmetic_OnNightCycleChanged(EK28NightCycleState nightCycleState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28SurvivorCosmeticHelperActor.Cosmetic_OnNightCycleChanged");
		
		AK28SurvivorCosmeticHelperActor_Cosmetic_OnNightCycleChanged_Params params {};
		params.nightCycleState = nightCycleState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK28.K28SurvivorCosmeticHelperActor.Cosmetic_OnLocallyObservedChanged
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void AK28SurvivorCosmeticHelperActor::Cosmetic_OnLocallyObservedChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28SurvivorCosmeticHelperActor.Cosmetic_OnLocallyObservedChanged");
		
		AK28SurvivorCosmeticHelperActor_Cosmetic_OnLocallyObservedChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK28.K28SurvivorCosmeticHelperActor.Cosmetic_DeactivateNightGlowVFX
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void AK28SurvivorCosmeticHelperActor::Cosmetic_DeactivateNightGlowVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28SurvivorCosmeticHelperActor.Cosmetic_DeactivateNightGlowVFX");
		
		AK28SurvivorCosmeticHelperActor_Cosmetic_DeactivateNightGlowVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK28.K28SurvivorCosmeticHelperActor.Cosmetic_ActivateNightGlowVFX
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void AK28SurvivorCosmeticHelperActor::Cosmetic_ActivateNightGlowVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28SurvivorCosmeticHelperActor.Cosmetic_ActivateNightGlowVFX");
		
		AK28SurvivorCosmeticHelperActor_Cosmetic_ActivateNightGlowVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AK28SurvivorCosmeticHelperActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AK28SurvivorCosmeticHelperActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK28.K28SurvivorCosmeticHelperActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D4FE50
	 * 		Name   -> Function TheK28.K28SurvivorLockerAbductionInteraction.OnRep_OverriddenInteractionInstance
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UK28SurvivorLockerAbductionInteraction::OnRep_OverriddenInteractionInstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28SurvivorLockerAbductionInteraction.OnRep_OverriddenInteractionInstance");
		
		UK28SurvivorLockerAbductionInteraction_OnRep_OverriddenInteractionInstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK28SurvivorLockerAbductionInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK28SurvivorLockerAbductionInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK28.K28SurvivorLockerAbductionInteraction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheK28.K28TeleportationIndicator.Cosmetic_UpdateIndicatorActivationStatus
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsActivated                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK28TeleportationIndicator::Cosmetic_UpdateIndicatorActivationStatus(bool IsActivated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28TeleportationIndicator.Cosmetic_UpdateIndicatorActivationStatus");
		
		AK28TeleportationIndicator_Cosmetic_UpdateIndicatorActivationStatus_Params params {};
		params.IsActivated = IsActivated;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AK28TeleportationIndicator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AK28TeleportationIndicator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK28.K28TeleportationIndicator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04B0B440
	 * 		Name   -> Function TheK28.K28TeleportationStrategyComponent.Server_UpdateBestTeleportTarget
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer)
	 * Parameters:
	 * 		int32_t                                            bestTeleportTargetID                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK28TeleportationStrategyComponent::Server_UpdateBestTeleportTarget(int32_t bestTeleportTargetID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28TeleportationStrategyComponent.Server_UpdateBestTeleportTarget");
		
		UK28TeleportationStrategyComponent_Server_UpdateBestTeleportTarget_Params params {};
		params.bestTeleportTargetID = bestTeleportTargetID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04A96290
	 * 		Name   -> Function TheK28.K28TeleportationStrategyComponent.Multicast_UpdateBestTeleportTarget
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		int32_t                                            bestTeleportTargetID                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK28TeleportationStrategyComponent::Multicast_UpdateBestTeleportTarget(int32_t bestTeleportTargetID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28TeleportationStrategyComponent.Multicast_UpdateBestTeleportTarget");
		
		UK28TeleportationStrategyComponent_Multicast_UpdateBestTeleportTarget_Params params {};
		params.bestTeleportTargetID = bestTeleportTargetID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D4F9C0
	 * 		Name   -> Function TheK28.K28TeleportationStrategyComponent.Authority_OnLevelReadyToPlay
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UK28TeleportationStrategyComponent::Authority_OnLevelReadyToPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28TeleportationStrategyComponent.Authority_OnLevelReadyToPlay");
		
		UK28TeleportationStrategyComponent_Authority_OnLevelReadyToPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK28TeleportationStrategyComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK28TeleportationStrategyComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK28.K28TeleportationStrategyComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D4FE70
	 * 		Name   -> Function TheK28.K28TeleportInteraction.Server_RequestTeleportToTarget
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer)
	 * Parameters:
	 * 		class ASlasherPlayer*                              killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     teleportTarget                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK28TeleportInteraction::Server_RequestTeleportToTarget(class ASlasherPlayer* killer, class UObject* teleportTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28TeleportInteraction.Server_RequestTeleportToTarget");
		
		UK28TeleportInteraction_Server_RequestTeleportToTarget_Params params {};
		params.killer = killer;
		params.teleportTarget = teleportTarget;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04BD88D0
	 * 		Name   -> Function TheK28.K28TeleportInteraction.Multicast_RefuseTeleportationRequest
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 */
	void UK28TeleportInteraction::Multicast_RefuseTeleportationRequest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28TeleportInteraction.Multicast_RefuseTeleportationRequest");
		
		UK28TeleportInteraction_Multicast_RefuseTeleportationRequest_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D4FD60
	 * 		Name   -> Function TheK28.K28TeleportInteraction.Multicast_ConfirmTeleportationRequest
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		class ASlasherPlayer*                              killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     teleportTarget                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK28TeleportInteraction::Multicast_ConfirmTeleportationRequest(class ASlasherPlayer* killer, class UObject* teleportTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28TeleportInteraction.Multicast_ConfirmTeleportationRequest");
		
		UK28TeleportInteraction_Multicast_ConfirmTeleportationRequest_Params params {};
		params.killer = killer;
		params.teleportTarget = teleportTarget;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D4FD40
	 * 		Name   -> Function TheK28.K28TeleportInteraction.Multicast_CompleteTeleportation
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 */
	void UK28TeleportInteraction::Multicast_CompleteTeleportation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28TeleportInteraction.Multicast_CompleteTeleportation");
		
		UK28TeleportInteraction_Multicast_CompleteTeleportation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK28TeleportInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK28TeleportInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK28.K28TeleportInteraction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D4FCB0
	 * 		Name   -> Function TheK28.K28Utilities.IsLockerUsedByKillerLocked
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UK28Utilities::STATIC_IsLockerUsedByKillerLocked(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28Utilities.IsLockerUsedByKillerLocked");
		
		UK28Utilities_IsLockerUsedByKillerLocked_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D4FC20
	 * 		Name   -> Function TheK28.K28Utilities.GetTeleportationStrategyComponent
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UK28TeleportationStrategyComponent* UK28Utilities::STATIC_GetTeleportationStrategyComponent(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28Utilities.GetTeleportationStrategyComponent");
		
		UK28Utilities_GetTeleportationStrategyComponent_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D4FB90
	 * 		Name   -> Function TheK28.K28Utilities.GetSecondaryCamera
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AK28SecondaryCamera* UK28Utilities::STATIC_GetSecondaryCamera(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28Utilities.GetSecondaryCamera");
		
		UK28Utilities_GetSecondaryCamera_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D4FB00
	 * 		Name   -> Function TheK28.K28Utilities.GetRemnant
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AK28Remnant* UK28Utilities::STATIC_GetRemnant(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28Utilities.GetRemnant");
		
		UK28Utilities_GetRemnant_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D4FA70
	 * 		Name   -> Function TheK28.K28Utilities.GetK28Power
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AK28Power* UK28Utilities::STATIC_GetK28Power(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28Utilities.GetK28Power");
		
		UK28Utilities_GetK28Power_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D4F9E0
	 * 		Name   -> Function TheK28.K28Utilities.GetDayNightComponent
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UK28DayNightComponent* UK28Utilities::STATIC_GetDayNightComponent(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheK28.K28Utilities.GetDayNightComponent");
		
		UK28Utilities_GetDayNightComponent_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK28Utilities.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK28Utilities::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK28.K28Utilities");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction US31P01.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* US31P01::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK28.S31P01");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction US31P02.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* US31P02::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK28.S31P02");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction US31P03.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* US31P03::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheK28.S31P03");
		return ptr;
	}

}


