﻿/**
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
	 * 		Name   -> Function ABSub_Slasher_27_LookAT.ABSub_Slasher_27_LookAT_C.BlueprintInitializeAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UABSub_Slasher_27_LookAT_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABSub_Slasher_27_LookAT.ABSub_Slasher_27_LookAT_C.BlueprintInitializeAnimation");
		
		UABSub_Slasher_27_LookAT_C_BlueprintInitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function ABSub_Slasher_27_LookAT.ABSub_Slasher_27_LookAT_C.ExecuteUbergraph_ABSub_Slasher_27_LookAT
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABSub_Slasher_27_LookAT_C::ExecuteUbergraph_ABSub_Slasher_27_LookAT(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABSub_Slasher_27_LookAT.ABSub_Slasher_27_LookAT_C.ExecuteUbergraph_ABSub_Slasher_27_LookAT");
		
		UABSub_Slasher_27_LookAT_C_ExecuteUbergraph_ABSub_Slasher_27_LookAT_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UABSub_Slasher_27_LookAT_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABSub_Slasher_27_LookAT_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABSub_Slasher_27_LookAT.ABSub_Slasher_27_LookAT_C");
		return ptr;
	}

}


