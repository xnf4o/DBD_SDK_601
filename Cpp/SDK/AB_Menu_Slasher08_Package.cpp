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
	 * 		Name   -> Function AB_Menu_Slasher08.AB_Menu_Slasher08_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UAB_Menu_Slasher08_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher08.AB_Menu_Slasher08_C.AnimGraph");
		
		UAB_Menu_Slasher08_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Menu_Slasher08.AB_Menu_Slasher08_C.GetKiller
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class ABP_Menu_Slasher08_C*                        Menu_Slasher_08                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Menu_Slasher08_C::GetKiller(class ABP_Menu_Slasher08_C** Menu_Slasher_08)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher08.AB_Menu_Slasher08_C.GetKiller");
		
		UAB_Menu_Slasher08_C_GetKiller_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Menu_Slasher_08 != nullptr)
			*Menu_Slasher_08 = params.Menu_Slasher_08;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Menu_Slasher08.AB_Menu_Slasher08_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Menu_Slasher08_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher08.AB_Menu_Slasher08_C.BlueprintUpdateAnimation");
		
		UAB_Menu_Slasher08_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Menu_Slasher08.AB_Menu_Slasher08_C.AnimNotify_FX_MakeHatchetAppear
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAB_Menu_Slasher08_C::AnimNotify_FX_MakeHatchetAppear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher08.AB_Menu_Slasher08_C.AnimNotify_FX_MakeHatchetAppear");
		
		UAB_Menu_Slasher08_C_AnimNotify_FX_MakeHatchetAppear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Menu_Slasher08.AB_Menu_Slasher08_C.AnimNotify_FX_MakeHatchetDisappear
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAB_Menu_Slasher08_C::AnimNotify_FX_MakeHatchetDisappear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher08.AB_Menu_Slasher08_C.AnimNotify_FX_MakeHatchetDisappear");
		
		UAB_Menu_Slasher08_C_AnimNotify_FX_MakeHatchetDisappear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Menu_Slasher08.AB_Menu_Slasher08_C.ExecuteUbergraph_AB_Menu_Slasher08
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Menu_Slasher08_C::ExecuteUbergraph_AB_Menu_Slasher08(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher08.AB_Menu_Slasher08_C.ExecuteUbergraph_AB_Menu_Slasher08");
		
		UAB_Menu_Slasher08_C_ExecuteUbergraph_AB_Menu_Slasher08_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAB_Menu_Slasher08_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAB_Menu_Slasher08_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_Menu_Slasher08.AB_Menu_Slasher08_C");
		return ptr;
	}

}


