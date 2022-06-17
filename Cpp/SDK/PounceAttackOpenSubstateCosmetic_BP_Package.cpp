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
	 * 		Name   -> Function PounceAttackOpenSubstateCosmetic_BP.PounceAttackOpenSubstateCosmetic_BP_C.OnLungeAttackEndCosmetic
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  SlasherPlayer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPounceAttackOpenSubstateCosmetic_BP_C::OnLungeAttackEndCosmetic(class ADBDPlayer* SlasherPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PounceAttackOpenSubstateCosmetic_BP.PounceAttackOpenSubstateCosmetic_BP_C.OnLungeAttackEndCosmetic");
		
		UPounceAttackOpenSubstateCosmetic_BP_C_OnLungeAttackEndCosmetic_Params params {};
		params.SlasherPlayer = SlasherPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function PounceAttackOpenSubstateCosmetic_BP.PounceAttackOpenSubstateCosmetic_BP_C.OnLocallyObservedChangedCosmetic
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  SlasherPlayer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPounceAttackOpenSubstateCosmetic_BP_C::OnLocallyObservedChangedCosmetic(class ADBDPlayer* SlasherPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PounceAttackOpenSubstateCosmetic_BP.PounceAttackOpenSubstateCosmetic_BP_C.OnLocallyObservedChangedCosmetic");
		
		UPounceAttackOpenSubstateCosmetic_BP_C_OnLocallyObservedChangedCosmetic_Params params {};
		params.SlasherPlayer = SlasherPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function PounceAttackOpenSubstateCosmetic_BP.PounceAttackOpenSubstateCosmetic_BP_C.OnLungeAttackStartCosmetic
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  SlasherPlayer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPounceAttackOpenSubstateCosmetic_BP_C::OnLungeAttackStartCosmetic(class ADBDPlayer* SlasherPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PounceAttackOpenSubstateCosmetic_BP.PounceAttackOpenSubstateCosmetic_BP_C.OnLungeAttackStartCosmetic");
		
		UPounceAttackOpenSubstateCosmetic_BP_C_OnLungeAttackStartCosmetic_Params params {};
		params.SlasherPlayer = SlasherPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function PounceAttackOpenSubstateCosmetic_BP.PounceAttackOpenSubstateCosmetic_BP_C.ExecuteUbergraph_PounceAttackOpenSubstateCosmetic_BP
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPounceAttackOpenSubstateCosmetic_BP_C::ExecuteUbergraph_PounceAttackOpenSubstateCosmetic_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PounceAttackOpenSubstateCosmetic_BP.PounceAttackOpenSubstateCosmetic_BP_C.ExecuteUbergraph_PounceAttackOpenSubstateCosmetic_BP");
		
		UPounceAttackOpenSubstateCosmetic_BP_C_ExecuteUbergraph_PounceAttackOpenSubstateCosmetic_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPounceAttackOpenSubstateCosmetic_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPounceAttackOpenSubstateCosmetic_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PounceAttackOpenSubstateCosmetic_BP.PounceAttackOpenSubstateCosmetic_BP_C");
		return ptr;
	}

}


