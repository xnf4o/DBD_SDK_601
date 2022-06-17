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
	 * 		Name   -> Function AB_LamentBox_REF.AB_LamentBox_REF_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UAB_LamentBox_REF_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_LamentBox_REF.AB_LamentBox_REF_C.AnimGraph");
		
		UAB_LamentBox_REF_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_LamentBox_REF.AB_LamentBox_REF_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_LamentBox_REF_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_LamentBox_REF.AB_LamentBox_REF_C.BlueprintUpdateAnimation");
		
		UAB_LamentBox_REF_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_LamentBox_REF.AB_LamentBox_REF_C.ExecuteUbergraph_AB_LamentBox_REF
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_LamentBox_REF_C::ExecuteUbergraph_AB_LamentBox_REF(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_LamentBox_REF.AB_LamentBox_REF_C.ExecuteUbergraph_AB_LamentBox_REF");
		
		UAB_LamentBox_REF_C_ExecuteUbergraph_AB_LamentBox_REF_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAB_LamentBox_REF_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAB_LamentBox_REF_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_LamentBox_REF.AB_LamentBox_REF_C");
		return ptr;
	}

}


