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
	 * 		Name   -> PredefindFunction UDoctorAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDoctorAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheDoctor.DoctorAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMadnessSurvivorSubAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMadnessSurvivorSubAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheDoctor.MadnessSurvivorSubAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UOvercharge.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOvercharge::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheDoctor.Overcharge");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04BDD460
	 * 		Name   -> Function TheDoctor.SurvivorMadnessEffect.Server_AddMadness
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	 * Parameters:
	 * 		float                                              madnessToAdd                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USurvivorMadnessEffect::Server_AddMadness(float madnessToAdd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheDoctor.SurvivorMadnessEffect.Server_AddMadness");
		
		USurvivorMadnessEffect_Server_AddMadness_Params params {};
		params.madnessToAdd = madnessToAdd;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheDoctor.SurvivorMadnessEffect.OnStaticBlastReceived_BP
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void USurvivorMadnessEffect::OnStaticBlastReceived_BP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheDoctor.SurvivorMadnessEffect.OnStaticBlastReceived_BP");
		
		USurvivorMadnessEffect_OnStaticBlastReceived_BP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04BDD440
	 * 		Name   -> Function TheDoctor.SurvivorMadnessEffect.OnStaticBlastReceived
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void USurvivorMadnessEffect::OnStaticBlastReceived()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheDoctor.SurvivorMadnessEffect.OnStaticBlastReceived");
		
		USurvivorMadnessEffect_OnStaticBlastReceived_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheDoctor.SurvivorMadnessEffect.OnSnapOutOfIt_BP
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void USurvivorMadnessEffect::OnSnapOutOfIt_BP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheDoctor.SurvivorMadnessEffect.OnSnapOutOfIt_BP");
		
		USurvivorMadnessEffect_OnSnapOutOfIt_BP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04BDD420
	 * 		Name   -> Function TheDoctor.SurvivorMadnessEffect.OnSnapOutOfIt
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void USurvivorMadnessEffect::OnSnapOutOfIt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheDoctor.SurvivorMadnessEffect.OnSnapOutOfIt");
		
		USurvivorMadnessEffect_OnSnapOutOfIt_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheDoctor.SurvivorMadnessEffect.OnShockTherapyReceived_BP
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void USurvivorMadnessEffect::OnShockTherapyReceived_BP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheDoctor.SurvivorMadnessEffect.OnShockTherapyReceived_BP");
		
		USurvivorMadnessEffect_OnShockTherapyReceived_BP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04BDD400
	 * 		Name   -> Function TheDoctor.SurvivorMadnessEffect.OnShockTherapyReceived
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void USurvivorMadnessEffect::OnShockTherapyReceived()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheDoctor.SurvivorMadnessEffect.OnShockTherapyReceived");
		
		USurvivorMadnessEffect_OnShockTherapyReceived_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheDoctor.SurvivorMadnessEffect.OnMadnessTierUp_BP
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void USurvivorMadnessEffect::OnMadnessTierUp_BP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheDoctor.SurvivorMadnessEffect.OnMadnessTierUp_BP");
		
		USurvivorMadnessEffect_OnMadnessTierUp_BP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheDoctor.SurvivorMadnessEffect.OnMadnessTierDown_BP
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void USurvivorMadnessEffect::OnMadnessTierDown_BP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheDoctor.SurvivorMadnessEffect.OnMadnessTierDown_BP");
		
		USurvivorMadnessEffect_OnMadnessTierDown_BP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04BDD340
	 * 		Name   -> Function TheDoctor.SurvivorMadnessEffect.Multicast_UpdateMadnessPlayerTags
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private, NetValidate)
	 * Parameters:
	 * 		int32_t                                            newMadness                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USurvivorMadnessEffect::Multicast_UpdateMadnessPlayerTags(int32_t newMadness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheDoctor.SurvivorMadnessEffect.Multicast_UpdateMadnessPlayerTags");
		
		USurvivorMadnessEffect_Multicast_UpdateMadnessPlayerTags_Params params {};
		params.newMadness = newMadness;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04BDD2F0
	 * 		Name   -> Function TheDoctor.SurvivorMadnessEffect.Multicast_OnMadnessTierUp
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private, NetValidate)
	 */
	void USurvivorMadnessEffect::Multicast_OnMadnessTierUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheDoctor.SurvivorMadnessEffect.Multicast_OnMadnessTierUp");
		
		USurvivorMadnessEffect_Multicast_OnMadnessTierUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04BDD2A0
	 * 		Name   -> Function TheDoctor.SurvivorMadnessEffect.Multicast_OnMadnessTierDown
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private, NetValidate)
	 */
	void USurvivorMadnessEffect::Multicast_OnMadnessTierDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheDoctor.SurvivorMadnessEffect.Multicast_OnMadnessTierDown");
		
		USurvivorMadnessEffect_Multicast_OnMadnessTierDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04B56C40
	 * 		Name   -> Function TheDoctor.SurvivorMadnessEffect.GetMadnessValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float USurvivorMadnessEffect::GetMadnessValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheDoctor.SurvivorMadnessEffect.GetMadnessValue");
		
		USurvivorMadnessEffect_GetMadnessValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04BDD260
	 * 		Name   -> Function TheDoctor.SurvivorMadnessEffect.GetMadnessTier
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t USurvivorMadnessEffect::GetMadnessTier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheDoctor.SurvivorMadnessEffect.GetMadnessTier");
		
		USurvivorMadnessEffect_GetMadnessTier_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheDoctor.SurvivorMadnessEffect.ChangeMadnessAudio_Cosmetic
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            madnessTier                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USurvivorMadnessEffect::ChangeMadnessAudio_Cosmetic(int32_t madnessTier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheDoctor.SurvivorMadnessEffect.ChangeMadnessAudio_Cosmetic");
		
		USurvivorMadnessEffect_ChangeMadnessAudio_Cosmetic_Params params {};
		params.madnessTier = madnessTier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TheDoctor.SurvivorMadnessEffect.Authority_OnMadnessScreamTimerEnd_BP
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void USurvivorMadnessEffect::Authority_OnMadnessScreamTimerEnd_BP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheDoctor.SurvivorMadnessEffect.Authority_OnMadnessScreamTimerEnd_BP");
		
		USurvivorMadnessEffect_Authority_OnMadnessScreamTimerEnd_BP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USurvivorMadnessEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USurvivorMadnessEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheDoctor.SurvivorMadnessEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04BDD8F0
	 * 		Name   -> Function TheDoctor.TheDoctorUtilities.IsTotallyInsane
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTheDoctorUtilities::STATIC_IsTotallyInsane(class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheDoctor.TheDoctorUtilities.IsTotallyInsane");
		
		UTheDoctorUtilities_IsTotallyInsane_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04BDD860
	 * 		Name   -> Function TheDoctor.TheDoctorUtilities.GetSurvivorMadnessEffect
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USurvivorMadnessEffect* UTheDoctorUtilities::STATIC_GetSurvivorMadnessEffect(class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheDoctor.TheDoctorUtilities.GetSurvivorMadnessEffect");
		
		UTheDoctorUtilities_GetSurvivorMadnessEffect_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04BDD7D0
	 * 		Name   -> Function TheDoctor.TheDoctorUtilities.GetMadnessTier
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UTheDoctorUtilities::STATIC_GetMadnessTier(class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheDoctor.TheDoctorUtilities.GetMadnessTier");
		
		UTheDoctorUtilities_GetMadnessTier_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04BDD740
	 * 		Name   -> Function TheDoctor.TheDoctorUtilities.CanGainInsanity
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTheDoctorUtilities::STATIC_CanGainInsanity(class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheDoctor.TheDoctorUtilities.CanGainInsanity");
		
		UTheDoctorUtilities_CanGainInsanity_Params params {};
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
	 * 		Name   -> PredefindFunction UTheDoctorUtilities.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTheDoctorUtilities::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheDoctor.TheDoctorUtilities");
		return ptr;
	}

}


