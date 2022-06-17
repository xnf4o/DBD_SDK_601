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
	 * 		Name   -> Function BP_AfterImageComponent.BP_AfterImageComponent_C.InOtherWorld
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               InPhysicalWorld                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_AfterImageComponent_C::InOtherWorld(bool* InPhysicalWorld)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AfterImageComponent.BP_AfterImageComponent_C.InOtherWorld");
		
		UBP_AfterImageComponent_C_InOtherWorld_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InPhysicalWorld != nullptr)
			*InPhysicalWorld = params.InPhysicalWorld;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_AfterImageComponent.BP_AfterImageComponent_C.GetRandomLocationNearKillerMesh
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FTransform                                  Transform                                                  (Parm, OutParm, IsPlainOldData, NoDestructor)
	 */
	void UBP_AfterImageComponent_C::GetRandomLocationNearKillerMesh(struct FTransform* Transform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AfterImageComponent.BP_AfterImageComponent_C.GetRandomLocationNearKillerMesh");
		
		UBP_AfterImageComponent_C_GetRandomLocationNearKillerMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Transform != nullptr)
			*Transform = params.Transform;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_AfterImageComponent.BP_AfterImageComponent_C.SpawnAfterImage
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTransform                                  huskTransform                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		float                                              opacityValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              speedValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_AfterImageComponent_C::SpawnAfterImage(const struct FTransform& huskTransform, float opacityValue, float speedValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AfterImageComponent.BP_AfterImageComponent_C.SpawnAfterImage");
		
		UBP_AfterImageComponent_C_SpawnAfterImage_Params params {};
		params.huskTransform = huskTransform;
		params.opacityValue = opacityValue;
		params.speedValue = speedValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_AfterImageComponent.BP_AfterImageComponent_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_AfterImageComponent_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AfterImageComponent.BP_AfterImageComponent_C.ReceiveBeginPlay");
		
		UBP_AfterImageComponent_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_AfterImageComponent.BP_AfterImageComponent_C.AfterImagesSpawningLoop
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_AfterImageComponent_C::AfterImagesSpawningLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AfterImageComponent.BP_AfterImageComponent_C.AfterImagesSpawningLoop");
		
		UBP_AfterImageComponent_C_AfterImagesSpawningLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_AfterImageComponent.BP_AfterImageComponent_C.OnLevelReadyToPlay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_AfterImageComponent_C::OnLevelReadyToPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AfterImageComponent.BP_AfterImageComponent_C.OnLevelReadyToPlay");
		
		UBP_AfterImageComponent_C_OnLevelReadyToPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_AfterImageComponent.BP_AfterImageComponent_C.ShouldShowAfterImageChanged
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               shouldBeVisible                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_AfterImageComponent_C::ShouldShowAfterImageChanged(bool shouldBeVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AfterImageComponent.BP_AfterImageComponent_C.ShouldShowAfterImageChanged");
		
		UBP_AfterImageComponent_C_ShouldShowAfterImageChanged_Params params {};
		params.shouldBeVisible = shouldBeVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_AfterImageComponent.BP_AfterImageComponent_C.UpdateCustomization
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_AfterImageComponent_C::UpdateCustomization()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AfterImageComponent.BP_AfterImageComponent_C.UpdateCustomization");
		
		UBP_AfterImageComponent_C_UpdateCustomization_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_AfterImageComponent.BP_AfterImageComponent_C.ExecuteUbergraph_BP_AfterImageComponent
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_AfterImageComponent_C::ExecuteUbergraph_BP_AfterImageComponent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AfterImageComponent.BP_AfterImageComponent_C.ExecuteUbergraph_BP_AfterImageComponent");
		
		UBP_AfterImageComponent_C_ExecuteUbergraph_BP_AfterImageComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBP_AfterImageComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_AfterImageComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_AfterImageComponent.BP_AfterImageComponent_C");
		return ptr;
	}

}


