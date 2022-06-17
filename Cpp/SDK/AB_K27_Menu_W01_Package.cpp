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
	 * 		Name   -> Function AB_K27_Menu_W01.AB_K27_Menu_W01_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UAB_K27_Menu_W01_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_K27_Menu_W01.AB_K27_Menu_W01_C.AnimGraph");
		
		UAB_K27_Menu_W01_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_K27_Menu_W01.AB_K27_Menu_W01_C.AnimNotify_ResetPlayInterrupt
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAB_K27_Menu_W01_C::AnimNotify_ResetPlayInterrupt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_K27_Menu_W01.AB_K27_Menu_W01_C.AnimNotify_ResetPlayInterrupt");
		
		UAB_K27_Menu_W01_C_AnimNotify_ResetPlayInterrupt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_K27_Menu_W01.AB_K27_Menu_W01_C.PlayWeaponInterrupt
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            WeaponID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_K27_Menu_W01_C::PlayWeaponInterrupt(int32_t WeaponID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_K27_Menu_W01.AB_K27_Menu_W01_C.PlayWeaponInterrupt");
		
		UAB_K27_Menu_W01_C_PlayWeaponInterrupt_Params params {};
		params.WeaponID = WeaponID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_K27_Menu_W01.AB_K27_Menu_W01_C.AnimNotify_Test_prestige
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAB_K27_Menu_W01_C::AnimNotify_Test_prestige()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_K27_Menu_W01.AB_K27_Menu_W01_C.AnimNotify_Test_prestige");
		
		UAB_K27_Menu_W01_C_AnimNotify_Test_prestige_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_K27_Menu_W01.AB_K27_Menu_W01_C.ExecuteUbergraph_AB_K27_Menu_W01
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_K27_Menu_W01_C::ExecuteUbergraph_AB_K27_Menu_W01(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_K27_Menu_W01.AB_K27_Menu_W01_C.ExecuteUbergraph_AB_K27_Menu_W01");
		
		UAB_K27_Menu_W01_C_ExecuteUbergraph_AB_K27_Menu_W01_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAB_K27_Menu_W01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAB_K27_Menu_W01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_K27_Menu_W01.AB_K27_Menu_W01_C");
		return ptr;
	}

}


