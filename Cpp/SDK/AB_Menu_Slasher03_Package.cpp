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
	 * 		Name   -> Function AB_Menu_Slasher03.AB_Menu_Slasher03_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UAB_Menu_Slasher03_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher03.AB_Menu_Slasher03_C.AnimGraph");
		
		UAB_Menu_Slasher03_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Menu_Slasher03.AB_Menu_Slasher03_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher03_AnimGraphNode_TransitionResult_852AD5DF4C110C43063C99863C38223D
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UAB_Menu_Slasher03_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher03_AnimGraphNode_TransitionResult_852AD5DF4C110C43063C99863C38223D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher03.AB_Menu_Slasher03_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher03_AnimGraphNode_TransitionResult_852AD5DF4C110C43063C99863C38223D");
		
		UAB_Menu_Slasher03_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher03_AnimGraphNode_TransitionResult_852AD5DF4C110C43063C99863C38223D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Menu_Slasher03.AB_Menu_Slasher03_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher03_AnimGraphNode_TransitionResult_B7B79B1A4B70E0C63A6DDEB087F67E51
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UAB_Menu_Slasher03_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher03_AnimGraphNode_TransitionResult_B7B79B1A4B70E0C63A6DDEB087F67E51()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher03.AB_Menu_Slasher03_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher03_AnimGraphNode_TransitionResult_B7B79B1A4B70E0C63A6DDEB087F67E51");
		
		UAB_Menu_Slasher03_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher03_AnimGraphNode_TransitionResult_B7B79B1A4B70E0C63A6DDEB087F67E51_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Menu_Slasher03.AB_Menu_Slasher03_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher03_AnimGraphNode_TransitionResult_AB26E59B45612CE51DFE8AB2137B05F0
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UAB_Menu_Slasher03_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher03_AnimGraphNode_TransitionResult_AB26E59B45612CE51DFE8AB2137B05F0()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher03.AB_Menu_Slasher03_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher03_AnimGraphNode_TransitionResult_AB26E59B45612CE51DFE8AB2137B05F0");
		
		UAB_Menu_Slasher03_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher03_AnimGraphNode_TransitionResult_AB26E59B45612CE51DFE8AB2137B05F0_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Menu_Slasher03.AB_Menu_Slasher03_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Menu_Slasher03_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher03.AB_Menu_Slasher03_C.BlueprintUpdateAnimation");
		
		UAB_Menu_Slasher03_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Menu_Slasher03.AB_Menu_Slasher03_C.BlueprintInitializeAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UAB_Menu_Slasher03_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher03.AB_Menu_Slasher03_C.BlueprintInitializeAnimation");
		
		UAB_Menu_Slasher03_C_BlueprintInitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Menu_Slasher03.AB_Menu_Slasher03_C.ExecuteUbergraph_AB_Menu_Slasher03
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Menu_Slasher03_C::ExecuteUbergraph_AB_Menu_Slasher03(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher03.AB_Menu_Slasher03_C.ExecuteUbergraph_AB_Menu_Slasher03");
		
		UAB_Menu_Slasher03_C_ExecuteUbergraph_AB_Menu_Slasher03_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAB_Menu_Slasher03_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAB_Menu_Slasher03_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_Menu_Slasher03.AB_Menu_Slasher03_C");
		return ptr;
	}

}


