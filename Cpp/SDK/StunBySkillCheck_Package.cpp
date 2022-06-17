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
	 * 		Name   -> Function StunBySkillCheck.StunBySkillCheck_C.CanOverrideInteraction
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class UInteractionDefinition*                      Interaction                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UStunBySkillCheck_C::CanOverrideInteraction(class UInteractionDefinition* Interaction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StunBySkillCheck.StunBySkillCheck_C.CanOverrideInteraction");
		
		UStunBySkillCheck_C_CanOverrideInteraction_Params params {};
		params.Interaction = Interaction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function StunBySkillCheck.StunBySkillCheck_C.GetCarriedCamper
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class ACamperPlayer*                               camper                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStunBySkillCheck_C::GetCarriedCamper(class ACamperPlayer** camper)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StunBySkillCheck.StunBySkillCheck_C.GetCarriedCamper");
		
		UStunBySkillCheck_C_GetCarriedCamper_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (camper != nullptr)
			*camper = params.camper;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function StunBySkillCheck.StunBySkillCheck_C.GetSlasher
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class ASlasherPlayer*                              Slasher                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStunBySkillCheck_C::GetSlasher(class ASlasherPlayer** Slasher)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StunBySkillCheck.StunBySkillCheck_C.GetSlasher");
		
		UStunBySkillCheck_C_GetSlasher_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Slasher != nullptr)
			*Slasher = params.Slasher;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function StunBySkillCheck.StunBySkillCheck_C.IsInteractionPossibleBP
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EInputInteractionType                              interactionType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UStunBySkillCheck_C::IsInteractionPossibleBP(class ADBDPlayer* Player, EInputInteractionType interactionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StunBySkillCheck.StunBySkillCheck_C.IsInteractionPossibleBP");
		
		UStunBySkillCheck_C_IsInteractionPossibleBP_Params params {};
		params.Player = Player;
		params.interactionType = interactionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function StunBySkillCheck.StunBySkillCheck_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UStunBySkillCheck_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StunBySkillCheck.StunBySkillCheck_C.ReceiveBeginPlay");
		
		UStunBySkillCheck_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function StunBySkillCheck.StunBySkillCheck_C.OnInteractionEnterStart
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              actualSnapTime                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStunBySkillCheck_C::OnInteractionEnterStart(class ADBDPlayer* Player, float actualSnapTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StunBySkillCheck.StunBySkillCheck_C.OnInteractionEnterStart");
		
		UStunBySkillCheck_C_OnInteractionEnterStart_Params params {};
		params.Player = Player;
		params.actualSnapTime = actualSnapTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function StunBySkillCheck.StunBySkillCheck_C.ExecuteUbergraph_StunBySkillCheck
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStunBySkillCheck_C::ExecuteUbergraph_StunBySkillCheck(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StunBySkillCheck.StunBySkillCheck_C.ExecuteUbergraph_StunBySkillCheck");
		
		UStunBySkillCheck_C_ExecuteUbergraph_StunBySkillCheck_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UStunBySkillCheck_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStunBySkillCheck_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StunBySkillCheck.StunBySkillCheck_C");
		return ptr;
	}

}


