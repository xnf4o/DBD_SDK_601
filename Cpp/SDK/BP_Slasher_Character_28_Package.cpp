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
	 * 		Name   -> Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.OtherWorldVignetteIntensity
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_27_C::OtherWorldVignetteIntensity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.OtherWorldVignetteIntensity");
		
		ABP_Slasher_Character_27_C_OtherWorldVignetteIntensity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.TryRestartFlickerAfterTeleportation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_27_C::TryRestartFlickerAfterTeleportation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.TryRestartFlickerAfterTeleportation");
		
		ABP_Slasher_Character_27_C_TryRestartFlickerAfterTeleportation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.SetCastShadow
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewCastShadow                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Slasher_Character_27_C::SetCastShadow(bool NewCastShadow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.SetCastShadow");
		
		ABP_Slasher_Character_27_C_SetCastShadow_Params params {};
		params.NewCastShadow = NewCastShadow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.CanUpdateFlicker
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool ABP_Slasher_Character_27_C::CanUpdateFlicker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.CanUpdateFlicker");
		
		ABP_Slasher_Character_27_C_CanUpdateFlicker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.FinishHideMesh
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_27_C::FinishHideMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.FinishHideMesh");
		
		ABP_Slasher_Character_27_C_FinishHideMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.StopFlicker
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_27_C::StopFlicker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.StopFlicker");
		
		ABP_Slasher_Character_27_C_StopFlicker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.RandomLocationAfterImage
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FTransform                                  NewParam                                                   (Parm, OutParm, IsPlainOldData, NoDestructor)
	 */
	void ABP_Slasher_Character_27_C::RandomLocationAfterImage(struct FTransform* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.RandomLocationAfterImage");
		
		ABP_Slasher_Character_27_C_RandomLocationAfterImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_27_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.UserConstructionScript");
		
		ABP_Slasher_Character_27_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.FadeToBlackTimeline__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Slasher_Character_27_C::FadeToBlackTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.FadeToBlackTimeline__FinishedFunc");
		
		ABP_Slasher_Character_27_C_FadeToBlackTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.FadeToBlackTimeline__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Slasher_Character_27_C::FadeToBlackTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.FadeToBlackTimeline__UpdateFunc");
		
		ABP_Slasher_Character_27_C_FadeToBlackTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.TML_Opacity__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Slasher_Character_27_C::TML_Opacity__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.TML_Opacity__FinishedFunc");
		
		ABP_Slasher_Character_27_C_TML_Opacity__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.TML_Opacity__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Slasher_Character_27_C::TML_Opacity__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.TML_Opacity__UpdateFunc");
		
		ABP_Slasher_Character_27_C_TML_Opacity__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.TML_Opacity__Event Hide VFX__EventFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Slasher_Character_27_C::TML_Opacity__Event_Hide_VFX__EventFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.TML_Opacity__Event Hide VFX__EventFunc");
		
		ABP_Slasher_Character_27_C_TML_Opacity__Event_Hide_VFX__EventFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.TML_Opacity__Event Shadow__EventFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Slasher_Character_27_C::TML_Opacity__Event_Shadow__EventFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.TML_Opacity__Event Shadow__EventFunc");
		
		ABP_Slasher_Character_27_C_TML_Opacity__Event_Shadow__EventFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.TML_Manifest__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Slasher_Character_27_C::TML_Manifest__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.TML_Manifest__FinishedFunc");
		
		ABP_Slasher_Character_27_C_TML_Manifest__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.TML_Manifest__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Slasher_Character_27_C::TML_Manifest__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.TML_Manifest__UpdateFunc");
		
		ABP_Slasher_Character_27_C_TML_Manifest__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.TML_Unmanifest__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Slasher_Character_27_C::TML_Unmanifest__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.TML_Unmanifest__FinishedFunc");
		
		ABP_Slasher_Character_27_C_TML_Unmanifest__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.TML_Unmanifest__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Slasher_Character_27_C::TML_Unmanifest__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.TML_Unmanifest__UpdateFunc");
		
		ABP_Slasher_Character_27_C_TML_Unmanifest__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.TML_TeleportHideMesh__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Slasher_Character_27_C::TML_TeleportHideMesh__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.TML_TeleportHideMesh__FinishedFunc");
		
		ABP_Slasher_Character_27_C_TML_TeleportHideMesh__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.TML_TeleportHideMesh__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Slasher_Character_27_C::TML_TeleportHideMesh__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.TML_TeleportHideMesh__UpdateFunc");
		
		ABP_Slasher_Character_27_C_TML_TeleportHideMesh__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.TML_TeleportFeet__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Slasher_Character_27_C::TML_TeleportFeet__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.TML_TeleportFeet__FinishedFunc");
		
		ABP_Slasher_Character_27_C_TML_TeleportFeet__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.TML_TeleportFeet__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Slasher_Character_27_C::TML_TeleportFeet__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.TML_TeleportFeet__UpdateFunc");
		
		ABP_Slasher_Character_27_C_TML_TeleportFeet__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.TML_VignetteIntensityOnInteraction__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Slasher_Character_27_C::TML_VignetteIntensityOnInteraction__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.TML_VignetteIntensityOnInteraction__FinishedFunc");
		
		ABP_Slasher_Character_27_C_TML_VignetteIntensityOnInteraction__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.TML_VignetteIntensityOnInteraction__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Slasher_Character_27_C::TML_VignetteIntensityOnInteraction__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.TML_VignetteIntensityOnInteraction__UpdateFunc");
		
		ABP_Slasher_Character_27_C_TML_VignetteIntensityOnInteraction__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.FX_K27_CondemnedStatusFull
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              currentStacks                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Slasher_Character_27_C::FX_K27_CondemnedStatusFull(float currentStacks)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.FX_K27_CondemnedStatusFull");
		
		ABP_Slasher_Character_27_C_FX_K27_CondemnedStatusFull_Params params {};
		params.currentStacks = currentStacks;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.FX_K27_CondemnedStatusStop
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              currentStacks                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Slasher_Character_27_C::FX_K27_CondemnedStatusStop(float currentStacks)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.FX_K27_CondemnedStatusStop");
		
		ABP_Slasher_Character_27_C_FX_K27_CondemnedStatusStop_Params params {};
		params.currentStacks = currentStacks;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.FX_K27_CondemnedAddToken
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              currentStacks                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Slasher_Character_27_C::FX_K27_CondemnedAddToken(float currentStacks)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.FX_K27_CondemnedAddToken");
		
		ABP_Slasher_Character_27_C_FX_K27_CondemnedAddToken_Params params {};
		params.currentStacks = currentStacks;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.FX_K27_Teleport_HideMesh
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_27_C::FX_K27_Teleport_HideMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.FX_K27_Teleport_HideMesh");
		
		ABP_Slasher_Character_27_C_FX_K27_Teleport_HideMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.FX_K27_Teleport_ShowMesh
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_27_C::FX_K27_Teleport_ShowMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.FX_K27_Teleport_ShowMesh");
		
		ABP_Slasher_Character_27_C_FX_K27_Teleport_ShowMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.FX_K27_HoldingTape
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_27_C::FX_K27_HoldingTape()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.FX_K27_HoldingTape");
		
		ABP_Slasher_Character_27_C_FX_K27_HoldingTape_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.FX_K27_InsertTape
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_27_C::FX_K27_InsertTape()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.FX_K27_InsertTape");
		
		ABP_Slasher_Character_27_C_FX_K27_InsertTape_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.FX_K27_SpawnMiniMoriVignette
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_27_C::FX_K27_SpawnMiniMoriVignette()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.FX_K27_SpawnMiniMoriVignette");
		
		ABP_Slasher_Character_27_C_FX_K27_SpawnMiniMoriVignette_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.FX_K27_Camper_RetrieveTapeExit
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_27_C::FX_K27_Camper_RetrieveTapeExit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.FX_K27_Camper_RetrieveTapeExit");
		
		ABP_Slasher_Character_27_C_FX_K27_Camper_RetrieveTapeExit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.FX_K27_Camper_TapeInHand
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_27_C::FX_K27_Camper_TapeInHand()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.FX_K27_Camper_TapeInHand");
		
		ABP_Slasher_Character_27_C_FX_K27_Camper_TapeInHand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.FX_K27_TapeInteractionFinished
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_27_C::FX_K27_TapeInteractionFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.FX_K27_TapeInteractionFinished");
		
		ABP_Slasher_Character_27_C_FX_K27_TapeInteractionFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.FX_K27_Camper_End_Tape_In_Hand
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_27_C::FX_K27_Camper_End_Tape_In_Hand()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.FX_K27_Camper_End_Tape_In_Hand");
		
		ABP_Slasher_Character_27_C_FX_K27_Camper_End_Tape_In_Hand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.FX_K27_Camper_StartRetrievingTape
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_27_C::FX_K27_Camper_StartRetrievingTape()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.FX_K27_Camper_StartRetrievingTape");
		
		ABP_Slasher_Character_27_C_FX_K27_Camper_StartRetrievingTape_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.FX_K27_Camper_Tape_InsertTransfer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_27_C::FX_K27_Camper_Tape_InsertTransfer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.FX_K27_Camper_Tape_InsertTransfer");
		
		ABP_Slasher_Character_27_C_FX_K27_Camper_Tape_InsertTransfer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.FX_K27_Camper_Tape_StartInsert
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_27_C::FX_K27_Camper_Tape_StartInsert()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.FX_K27_Camper_Tape_StartInsert");
		
		ABP_Slasher_Character_27_C_FX_K27_Camper_Tape_StartInsert_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.FX_K27_Camper_TapeInserted
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_27_C::FX_K27_Camper_TapeInserted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.FX_K27_Camper_TapeInserted");
		
		ABP_Slasher_Character_27_C_FX_K27_Camper_TapeInserted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.FX_K27_Camper_InsertTapeExit
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_27_C::FX_K27_Camper_InsertTapeExit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.FX_K27_Camper_InsertTapeExit");
		
		ABP_Slasher_Character_27_C_FX_K27_Camper_InsertTapeExit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.FX_K27_Camper_TapeRetrieved
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_27_C::FX_K27_Camper_TapeRetrieved()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.FX_K27_Camper_TapeRetrieved");
		
		ABP_Slasher_Character_27_C_FX_K27_Camper_TapeRetrieved_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.FX_K27_Camper_Tape_InsertEnd
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_27_C::FX_K27_Camper_Tape_InsertEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.FX_K27_Camper_Tape_InsertEnd");
		
		ABP_Slasher_Character_27_C_FX_K27_Camper_Tape_InsertEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.FX_FadeCondemnedStatus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_27_C::FX_FadeCondemnedStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.FX_FadeCondemnedStatus");
		
		ABP_Slasher_Character_27_C_FX_FadeCondemnedStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.Cosmetic_OnTeleportSuccess
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_27_C::Cosmetic_OnTeleportSuccess()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.Cosmetic_OnTeleportSuccess");
		
		ABP_Slasher_Character_27_C_Cosmetic_OnTeleportSuccess_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.Cosmetic_OnTeleportStart
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_27_C::Cosmetic_OnTeleportStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.Cosmetic_OnTeleportStart");
		
		ABP_Slasher_Character_27_C_Cosmetic_OnTeleportStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.Cosmetic_OnTeleportFinished
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_27_C::Cosmetic_OnTeleportFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.Cosmetic_OnTeleportFinished");
		
		ABP_Slasher_Character_27_C_Cosmetic_OnTeleportFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.Cosmetic_OnTeleportCancelled
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_27_C::Cosmetic_OnTeleportCancelled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.Cosmetic_OnTeleportCancelled");
		
		ABP_Slasher_Character_27_C_Cosmetic_OnTeleportCancelled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.SpawnAfterImage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_27_C::SpawnAfterImage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.SpawnAfterImage");
		
		ABP_Slasher_Character_27_C_SpawnAfterImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_Slasher_Character_27_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.ReceiveBeginPlay");
		
		ABP_Slasher_Character_27_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.Cosmetic_OnChargeManifestSuccess
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_27_C::Cosmetic_OnChargeManifestSuccess()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.Cosmetic_OnChargeManifestSuccess");
		
		ABP_Slasher_Character_27_C_Cosmetic_OnChargeManifestSuccess_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.Cosmetic_OnChargeManifestStart
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_27_C::Cosmetic_OnChargeManifestStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.Cosmetic_OnChargeManifestStart");
		
		ABP_Slasher_Character_27_C_Cosmetic_OnChargeManifestStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.Cosmetic_OnManifestStateChanged
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isManifested                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               isImmediateManifest                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Slasher_Character_27_C::Cosmetic_OnManifestStateChanged(bool isManifested, bool isImmediateManifest)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.Cosmetic_OnManifestStateChanged");
		
		ABP_Slasher_Character_27_C_Cosmetic_OnManifestStateChanged_Params params {};
		params.isManifested = isManifested;
		params.isImmediateManifest = isImmediateManifest;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.Cosmetic_OnKillerVisibilityChanged
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               isFlickering                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               isManifested                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               isInvisibleDueToOutOfVisibiltyRange                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               force                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Slasher_Character_27_C::Cosmetic_OnKillerVisibilityChanged(bool IsVisible, bool isFlickering, bool isManifested, bool isInvisibleDueToOutOfVisibiltyRange, bool force)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.Cosmetic_OnKillerVisibilityChanged");
		
		ABP_Slasher_Character_27_C_Cosmetic_OnKillerVisibilityChanged_Params params {};
		params.IsVisible = IsVisible;
		params.isFlickering = isFlickering;
		params.isManifested = isManifested;
		params.isInvisibleDueToOutOfVisibiltyRange = isInvisibleDueToOutOfVisibiltyRange;
		params.force = force;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.Cosmetic_OnChargeManifestCancelled
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_27_C::Cosmetic_OnChargeManifestCancelled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.Cosmetic_OnChargeManifestCancelled");
		
		ABP_Slasher_Character_27_C_Cosmetic_OnChargeManifestCancelled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.Cosmetic_OnChargeUnmanifestStart
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_27_C::Cosmetic_OnChargeUnmanifestStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.Cosmetic_OnChargeUnmanifestStart");
		
		ABP_Slasher_Character_27_C_Cosmetic_OnChargeUnmanifestStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.Cosmetic_OnChargeUnmanifestSuccess
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_27_C::Cosmetic_OnChargeUnmanifestSuccess()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.Cosmetic_OnChargeUnmanifestSuccess");
		
		ABP_Slasher_Character_27_C_Cosmetic_OnChargeUnmanifestSuccess_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.Cosmetic_OnChargeUnmanifestCancelled
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_27_C::Cosmetic_OnChargeUnmanifestCancelled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.Cosmetic_OnChargeUnmanifestCancelled");
		
		ABP_Slasher_Character_27_C_Cosmetic_OnChargeUnmanifestCancelled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.CosmeticOnUnmanifestChargeChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Charge_Percent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Slasher_Character_27_C::CosmeticOnUnmanifestChargeChanged(float Charge_Percent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.CosmeticOnUnmanifestChargeChanged");
		
		ABP_Slasher_Character_27_C_CosmeticOnUnmanifestChargeChanged_Params params {};
		params.Charge_Percent = Charge_Percent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.CosmeticOnManifestChargeChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Charge_Percent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Slasher_Character_27_C::CosmeticOnManifestChargeChanged(float Charge_Percent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.CosmeticOnManifestChargeChanged");
		
		ABP_Slasher_Character_27_C_CosmeticOnManifestChargeChanged_Params params {};
		params.Charge_Percent = Charge_Percent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.ManifestCancelCharge
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_27_C::ManifestCancelCharge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.ManifestCancelCharge");
		
		ABP_Slasher_Character_27_C_ManifestCancelCharge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.UnmanifestCancelCharge
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_27_C::UnmanifestCancelCharge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.UnmanifestCancelCharge");
		
		ABP_Slasher_Character_27_C_UnmanifestCancelCharge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Slasher_Character_27_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.ReceiveTick");
		
		ABP_Slasher_Character_27_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.FX_K27_InteractionStart_Vignette
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_27_C::FX_K27_InteractionStart_Vignette()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.FX_K27_InteractionStart_Vignette");
		
		ABP_Slasher_Character_27_C_FX_K27_InteractionStart_Vignette_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.Hide Mesh
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_27_C::Hide_Mesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.Hide Mesh");
		
		ABP_Slasher_Character_27_C_Hide_Mesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.Update Visibility On Teleport success
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_27_C::Update_Visibility_On_Teleport_success()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.Update Visibility On Teleport success");
		
		ABP_Slasher_Character_27_C_Update_Visibility_On_Teleport_success_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.Event On Manifested Through Interaction
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_27_C::Event_On_Manifested_Through_Interaction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.Event On Manifested Through Interaction");
		
		ABP_Slasher_Character_27_C_Event_On_Manifested_Through_Interaction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.Unhide Mesh
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_27_C::Unhide_Mesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.Unhide Mesh");
		
		ABP_Slasher_Character_27_C_Unhide_Mesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.OnLevelReadyToPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_Slasher_Character_27_C::OnLevelReadyToPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.OnLevelReadyToPlay");
		
		ABP_Slasher_Character_27_C_OnLevelReadyToPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.CE_OnSoundbankLoaded
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_27_C::CE_OnSoundbankLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.CE_OnSoundbankLoaded");
		
		ABP_Slasher_Character_27_C_CE_OnSoundbankLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.ExecuteUbergraph_BP_Slasher_Character_28
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Slasher_Character_27_C::ExecuteUbergraph_BP_Slasher_Character_28(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character_28.BP_Slasher_Character_27_C.ExecuteUbergraph_BP_Slasher_Character_28");
		
		ABP_Slasher_Character_27_C_ExecuteUbergraph_BP_Slasher_Character_28_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_Slasher_Character_27_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Slasher_Character_27_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Slasher_Character_28.BP_Slasher_Character_27_C");
		return ptr;
	}

}


