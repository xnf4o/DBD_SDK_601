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
	 * 		Name   -> Function AB_Slasher_28.AB_Slasher_27_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UAB_Slasher_27_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Slasher_28.AB_Slasher_27_C.AnimGraph");
		
		UAB_Slasher_27_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Slasher_28.AB_Slasher_27_C.FX_K27_InteractionStart_Vignette
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAB_Slasher_27_C::FX_K27_InteractionStart_Vignette()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Slasher_28.AB_Slasher_27_C.FX_K27_InteractionStart_Vignette");
		
		UAB_Slasher_27_C_FX_K27_InteractionStart_Vignette_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Slasher_28.AB_Slasher_27_C.CosmeticOnUnmanifestChargeChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Charge_Percent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Slasher_27_C::CosmeticOnUnmanifestChargeChanged(float Charge_Percent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Slasher_28.AB_Slasher_27_C.CosmeticOnUnmanifestChargeChanged");
		
		UAB_Slasher_27_C_CosmeticOnUnmanifestChargeChanged_Params params {};
		params.Charge_Percent = Charge_Percent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Slasher_28.AB_Slasher_27_C.CosmeticOnManifestChargeChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Charge_Percent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Slasher_27_C::CosmeticOnManifestChargeChanged(float Charge_Percent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Slasher_28.AB_Slasher_27_C.CosmeticOnManifestChargeChanged");
		
		UAB_Slasher_27_C_CosmeticOnManifestChargeChanged_Params params {};
		params.Charge_Percent = Charge_Percent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Slasher_28.AB_Slasher_27_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_27_AnimGraphNode_LayeredBoneBlend_F41A42584CB2FDCF950E51843DC55766
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UAB_Slasher_27_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_27_AnimGraphNode_LayeredBoneBlend_F41A42584CB2FDCF950E51843DC55766()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Slasher_28.AB_Slasher_27_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_27_AnimGraphNode_LayeredBoneBlend_F41A42584CB2FDCF950E51843DC55766");
		
		UAB_Slasher_27_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_27_AnimGraphNode_LayeredBoneBlend_F41A42584CB2FDCF950E51843DC55766_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Slasher_28.AB_Slasher_27_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_27_AnimGraphNode_LinkedAnimGraph_33F2B9724D749B46BA07B1B300E9C013
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UAB_Slasher_27_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_27_AnimGraphNode_LinkedAnimGraph_33F2B9724D749B46BA07B1B300E9C013()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Slasher_28.AB_Slasher_27_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_27_AnimGraphNode_LinkedAnimGraph_33F2B9724D749B46BA07B1B300E9C013");
		
		UAB_Slasher_27_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_27_AnimGraphNode_LinkedAnimGraph_33F2B9724D749B46BA07B1B300E9C013_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Slasher_28.AB_Slasher_27_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_27_AnimGraphNode_LinkedAnimGraph_05C674654E31B1BDC4AD979988D88A45
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UAB_Slasher_27_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_27_AnimGraphNode_LinkedAnimGraph_05C674654E31B1BDC4AD979988D88A45()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Slasher_28.AB_Slasher_27_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_27_AnimGraphNode_LinkedAnimGraph_05C674654E31B1BDC4AD979988D88A45");
		
		UAB_Slasher_27_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_27_AnimGraphNode_LinkedAnimGraph_05C674654E31B1BDC4AD979988D88A45_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Slasher_28.AB_Slasher_27_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_27_AnimGraphNode_TransitionResult_A9EBC3F241464D8B3B7F3990D8938E3D
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UAB_Slasher_27_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_27_AnimGraphNode_TransitionResult_A9EBC3F241464D8B3B7F3990D8938E3D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Slasher_28.AB_Slasher_27_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_27_AnimGraphNode_TransitionResult_A9EBC3F241464D8B3B7F3990D8938E3D");
		
		UAB_Slasher_27_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_27_AnimGraphNode_TransitionResult_A9EBC3F241464D8B3B7F3990D8938E3D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Slasher_28.AB_Slasher_27_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Slasher_27_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Slasher_28.AB_Slasher_27_C.BlueprintUpdateAnimation");
		
		UAB_Slasher_27_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Slasher_28.AB_Slasher_27_C.AnimNotify_FX_K27_InteractionStart_Vignette
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAB_Slasher_27_C::AnimNotify_FX_K27_InteractionStart_Vignette()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Slasher_28.AB_Slasher_27_C.AnimNotify_FX_K27_InteractionStart_Vignette");
		
		UAB_Slasher_27_C_AnimNotify_FX_K27_InteractionStart_Vignette_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Slasher_28.AB_Slasher_27_C.ExecuteUbergraph_AB_Slasher_28
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Slasher_27_C::ExecuteUbergraph_AB_Slasher_28(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Slasher_28.AB_Slasher_27_C.ExecuteUbergraph_AB_Slasher_28");
		
		UAB_Slasher_27_C_ExecuteUbergraph_AB_Slasher_28_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAB_Slasher_27_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAB_Slasher_27_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_Slasher_28.AB_Slasher_27_C");
		return ptr;
	}

}


