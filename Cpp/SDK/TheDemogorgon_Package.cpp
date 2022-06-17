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
	 * 		RVA    -> 0x04BD7ED0
	 * 		Name   -> Function TheDemogorgon.DemogorgonHuskAnimInstance.OnKillerSet
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ASlasherPlayer*                              killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDemogorgonHuskAnimInstance::OnKillerSet(class ASlasherPlayer* killer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheDemogorgon.DemogorgonHuskAnimInstance.OnKillerSet");
		
		UDemogorgonHuskAnimInstance_OnKillerSet_Params params {};
		params.killer = killer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDemogorgonHuskAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDemogorgonHuskAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheDemogorgon.DemogorgonHuskAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDemogorgonPounceAttack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDemogorgonPounceAttack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheDemogorgon.DemogorgonPounceAttack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDemogorgonPounceAttackOpenSubstate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDemogorgonPounceAttackOpenSubstate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheDemogorgon.DemogorgonPounceAttackOpenSubstate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDemogorgonPounceAttackSuccessSubstate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDemogorgonPounceAttackSuccessSubstate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheDemogorgon.DemogorgonPounceAttackSuccessSubstate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDemogorgonPounceAttackMissSubstate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDemogorgonPounceAttackMissSubstate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheDemogorgon.DemogorgonPounceAttackMissSubstate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDemogorgonPounceAttackObstructSubstate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDemogorgonPounceAttackObstructSubstate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheDemogorgon.DemogorgonPounceAttackObstructSubstate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheDemogorgon.DemogorgonPounceInteraction.TriggerHuntingAudioEvent
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isHunting                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDemogorgonPounceInteraction::TriggerHuntingAudioEvent(bool isHunting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheDemogorgon.DemogorgonPounceInteraction.TriggerHuntingAudioEvent");
		
		UDemogorgonPounceInteraction_TriggerHuntingAudioEvent_Params params {};
		params.isHunting = isHunting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheDemogorgon.DemogorgonPounceInteraction.TriggerChargeCancelAudioEvent
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void UDemogorgonPounceInteraction::TriggerChargeCancelAudioEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheDemogorgon.DemogorgonPounceInteraction.TriggerChargeCancelAudioEvent");
		
		UDemogorgonPounceInteraction_TriggerChargeCancelAudioEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheDemogorgon.DemogorgonPounceInteraction.OnChargedAttackReadyChanged
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Ready                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDemogorgonPounceInteraction::OnChargedAttackReadyChanged(bool Ready)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheDemogorgon.DemogorgonPounceInteraction.OnChargedAttackReadyChanged");
		
		UDemogorgonPounceInteraction_OnChargedAttackReadyChanged_Params params {};
		params.Ready = Ready;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04BD88D0
	 * 		Name   -> Function TheDemogorgon.DemogorgonPounceInteraction.OnCancelCooldownComplete
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 */
	void UDemogorgonPounceInteraction::OnCancelCooldownComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheDemogorgon.DemogorgonPounceInteraction.OnCancelCooldownComplete");
		
		UDemogorgonPounceInteraction_OnCancelCooldownComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDemogorgonPounceInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDemogorgonPounceInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheDemogorgon.DemogorgonPounceInteraction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDemogorgonPowerItemProgressComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDemogorgonPowerItemProgressComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheDemogorgon.DemogorgonPowerItemProgressComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04BD8DD0
	 * 		Name   -> Function TheDemogorgon.ElevensSodaAddon.Multicast_UnhighlightGenerator
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private, Const)
	 * Parameters:
	 * 		class AGenerator*                                  Generator                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UElevensSodaAddon::Multicast_UnhighlightGenerator(class AGenerator* Generator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheDemogorgon.ElevensSodaAddon.Multicast_UnhighlightGenerator");
		
		UElevensSodaAddon_Multicast_UnhighlightGenerator_Params params {};
		params.Generator = Generator;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04BD8D40
	 * 		Name   -> Function TheDemogorgon.ElevensSodaAddon.Multicast_HighlightGenerator
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private, Const)
	 * Parameters:
	 * 		class AGenerator*                                  Generator                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UElevensSodaAddon::Multicast_HighlightGenerator(class AGenerator* Generator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheDemogorgon.ElevensSodaAddon.Multicast_HighlightGenerator");
		
		UElevensSodaAddon_Multicast_HighlightGenerator_Params params {};
		params.Generator = Generator;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UElevensSodaAddon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UElevensSodaAddon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheDemogorgon.ElevensSodaAddon");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPortalSurvivorSubAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPortalSurvivorSubAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheDemogorgon.PortalSurvivorSubAnimInstance");
		return ptr;
	}

}


