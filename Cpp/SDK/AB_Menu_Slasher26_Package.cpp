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
	 * 		Name   -> Function AB_Menu_Slasher26.AB_Menu_Slasher26_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UAB_Menu_Slasher26_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher26.AB_Menu_Slasher26_C.AnimGraph");
		
		UAB_Menu_Slasher26_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Menu_Slasher26.AB_Menu_Slasher26_C.OnNotifyBegin_0B64AF184ABD119B2E2270BFA977CABB
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Menu_Slasher26_C::OnNotifyBegin_0B64AF184ABD119B2E2270BFA977CABB(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher26.AB_Menu_Slasher26_C.OnNotifyBegin_0B64AF184ABD119B2E2270BFA977CABB");
		
		UAB_Menu_Slasher26_C_OnNotifyBegin_0B64AF184ABD119B2E2270BFA977CABB_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Menu_Slasher26.AB_Menu_Slasher26_C.OnInterrupted_0B64AF184ABD119B2E2270BFA977CABB
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Menu_Slasher26_C::OnInterrupted_0B64AF184ABD119B2E2270BFA977CABB(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher26.AB_Menu_Slasher26_C.OnInterrupted_0B64AF184ABD119B2E2270BFA977CABB");
		
		UAB_Menu_Slasher26_C_OnInterrupted_0B64AF184ABD119B2E2270BFA977CABB_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Menu_Slasher26.AB_Menu_Slasher26_C.OnBlendOut_0B64AF184ABD119B2E2270BFA977CABB
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Menu_Slasher26_C::OnBlendOut_0B64AF184ABD119B2E2270BFA977CABB(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher26.AB_Menu_Slasher26_C.OnBlendOut_0B64AF184ABD119B2E2270BFA977CABB");
		
		UAB_Menu_Slasher26_C_OnBlendOut_0B64AF184ABD119B2E2270BFA977CABB_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Menu_Slasher26.AB_Menu_Slasher26_C.OnCompleted_0B64AF184ABD119B2E2270BFA977CABB
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Menu_Slasher26_C::OnCompleted_0B64AF184ABD119B2E2270BFA977CABB(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher26.AB_Menu_Slasher26_C.OnCompleted_0B64AF184ABD119B2E2270BFA977CABB");
		
		UAB_Menu_Slasher26_C_OnCompleted_0B64AF184ABD119B2E2270BFA977CABB_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Menu_Slasher26.AB_Menu_Slasher26_C.OnNotifyEnd_0B64AF184ABD119B2E2270BFA977CABB
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Menu_Slasher26_C::OnNotifyEnd_0B64AF184ABD119B2E2270BFA977CABB(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher26.AB_Menu_Slasher26_C.OnNotifyEnd_0B64AF184ABD119B2E2270BFA977CABB");
		
		UAB_Menu_Slasher26_C_OnNotifyEnd_0B64AF184ABD119B2E2270BFA977CABB_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Menu_Slasher26.AB_Menu_Slasher26_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher26_AnimGraphNode_TransitionResult_59A388FC4E690DF0F2E3D890704EDD1A
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UAB_Menu_Slasher26_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher26_AnimGraphNode_TransitionResult_59A388FC4E690DF0F2E3D890704EDD1A()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher26.AB_Menu_Slasher26_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher26_AnimGraphNode_TransitionResult_59A388FC4E690DF0F2E3D890704EDD1A");
		
		UAB_Menu_Slasher26_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher26_AnimGraphNode_TransitionResult_59A388FC4E690DF0F2E3D890704EDD1A_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Menu_Slasher26.AB_Menu_Slasher26_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher26_AnimGraphNode_TransitionResult_B7FBDE744D7EABF276D9EBA9F4661A25
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UAB_Menu_Slasher26_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher26_AnimGraphNode_TransitionResult_B7FBDE744D7EABF276D9EBA9F4661A25()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher26.AB_Menu_Slasher26_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher26_AnimGraphNode_TransitionResult_B7FBDE744D7EABF276D9EBA9F4661A25");
		
		UAB_Menu_Slasher26_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher26_AnimGraphNode_TransitionResult_B7FBDE744D7EABF276D9EBA9F4661A25_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Menu_Slasher26.AB_Menu_Slasher26_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher26_AnimGraphNode_TransitionResult_6E64C09E483F3071218CA5B4D896DFA4
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UAB_Menu_Slasher26_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher26_AnimGraphNode_TransitionResult_6E64C09E483F3071218CA5B4D896DFA4()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher26.AB_Menu_Slasher26_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher26_AnimGraphNode_TransitionResult_6E64C09E483F3071218CA5B4D896DFA4");
		
		UAB_Menu_Slasher26_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher26_AnimGraphNode_TransitionResult_6E64C09E483F3071218CA5B4D896DFA4_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Menu_Slasher26.AB_Menu_Slasher26_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher26_AnimGraphNode_TransitionResult_05E0BAAB4A85C91D9E56BA88B668A259
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UAB_Menu_Slasher26_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher26_AnimGraphNode_TransitionResult_05E0BAAB4A85C91D9E56BA88B668A259()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher26.AB_Menu_Slasher26_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher26_AnimGraphNode_TransitionResult_05E0BAAB4A85C91D9E56BA88B668A259");
		
		UAB_Menu_Slasher26_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher26_AnimGraphNode_TransitionResult_05E0BAAB4A85C91D9E56BA88B668A259_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Menu_Slasher26.AB_Menu_Slasher26_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Menu_Slasher26_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher26.AB_Menu_Slasher26_C.BlueprintUpdateAnimation");
		
		UAB_Menu_Slasher26_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Menu_Slasher26.AB_Menu_Slasher26_C.BlueprintInitializeAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UAB_Menu_Slasher26_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher26.AB_Menu_Slasher26_C.BlueprintInitializeAnimation");
		
		UAB_Menu_Slasher26_C_BlueprintInitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Menu_Slasher26.AB_Menu_Slasher26_C.AnimNotify_Interupt02Start
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAB_Menu_Slasher26_C::AnimNotify_Interupt02Start()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher26.AB_Menu_Slasher26_C.AnimNotify_Interupt02Start");
		
		UAB_Menu_Slasher26_C_AnimNotify_Interupt02Start_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Menu_Slasher26.AB_Menu_Slasher26_C.AnimNotify_Idle
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAB_Menu_Slasher26_C::AnimNotify_Idle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher26.AB_Menu_Slasher26_C.AnimNotify_Idle");
		
		UAB_Menu_Slasher26_C_AnimNotify_Idle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Menu_Slasher26.AB_Menu_Slasher26_C.ExecuteUbergraph_AB_Menu_Slasher26
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Menu_Slasher26_C::ExecuteUbergraph_AB_Menu_Slasher26(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher26.AB_Menu_Slasher26_C.ExecuteUbergraph_AB_Menu_Slasher26");
		
		UAB_Menu_Slasher26_C_ExecuteUbergraph_AB_Menu_Slasher26_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAB_Menu_Slasher26_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAB_Menu_Slasher26_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_Menu_Slasher26.AB_Menu_Slasher26_C");
		return ptr;
	}

}


