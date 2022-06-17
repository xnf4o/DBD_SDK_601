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
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Audio_KLR_29.BP_Audio_KLR_28_C.IsCharacter
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class ADBDPlayer*                                  CamperPlayer                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class FString>                              characterName                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               IsCharacter                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Audio_KLR_28_C::IsCharacter(class ADBDPlayer* CamperPlayer, TArray<class FString>* characterName, bool* IsCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Audio_KLR_29.BP_Audio_KLR_28_C.IsCharacter");
		
		UBP_Audio_KLR_28_C_IsCharacter_Params params {};
		params.CamperPlayer = CamperPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (characterName != nullptr)
			*characterName = params.characterName;
		if (IsCharacter != nullptr)
			*IsCharacter = params.IsCharacter;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Audio_KLR_29.BP_Audio_KLR_28_C.SelectAudioStatusStartEvent
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               IsInMenu                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAkAudioEvent*                               AudioEvent                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Audio_KLR_28_C::SelectAudioStatusStartEvent(bool IsInMenu, class UAkAudioEvent** AudioEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Audio_KLR_29.BP_Audio_KLR_28_C.SelectAudioStatusStartEvent");
		
		UBP_Audio_KLR_28_C_SelectAudioStatusStartEvent_Params params {};
		params.IsInMenu = IsInMenu;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AudioEvent != nullptr)
			*AudioEvent = params.AudioEvent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Audio_KLR_29.BP_Audio_KLR_28_C.HitImpactOnSurvivorSFX
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ACamperPlayer*                               camper                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EAttackType                                        attackType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsWeaponHit                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Audio_KLR_28_C::HitImpactOnSurvivorSFX(class ACamperPlayer* camper, EAttackType attackType, bool IsWeaponHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Audio_KLR_29.BP_Audio_KLR_28_C.HitImpactOnSurvivorSFX");
		
		UBP_Audio_KLR_28_C_HitImpactOnSurvivorSFX_Params params {};
		params.camper = camper;
		params.attackType = attackType;
		params.IsWeaponHit = IsWeaponHit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Audio_KLR_29.BP_Audio_KLR_28_C.ExecuteUbergraph_BP_Audio_KLR_29
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Audio_KLR_28_C::ExecuteUbergraph_BP_Audio_KLR_29(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Audio_KLR_29.BP_Audio_KLR_28_C.ExecuteUbergraph_BP_Audio_KLR_29");
		
		UBP_Audio_KLR_28_C_ExecuteUbergraph_BP_Audio_KLR_29_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBP_Audio_KLR_28_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Audio_KLR_28_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Audio_KLR_29.BP_Audio_KLR_28_C");
		return ptr;
	}

}


