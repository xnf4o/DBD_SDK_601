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
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.SM_SetOniEmissiveParameter
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                Emissive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Menu_Slasher18_C::SM_SetOniEmissiveParameter(const struct FLinearColor& Emissive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.SM_SetOniEmissiveParameter");
		
		ABP_Menu_Slasher18_C_SM_SetOniEmissiveParameter_Params params {};
		params.Emissive = Emissive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.SK_SetOniEmissiveParameter
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                Emissive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Menu_Slasher18_C::SK_SetOniEmissiveParameter(const struct FLinearColor& Emissive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.SK_SetOniEmissiveParameter");
		
		ABP_Menu_Slasher18_C_SK_SetOniEmissiveParameter_Params params {};
		params.Emissive = Emissive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ShowDemonModeCusto
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsInDemonMode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsInNormalMode                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Menu_Slasher18_C::ShowDemonModeCusto(bool IsInDemonMode, bool IsInNormalMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ShowDemonModeCusto");
		
		ABP_Menu_Slasher18_C_ShowDemonModeCusto_Params params {};
		params.IsInDemonMode = IsInDemonMode;
		params.IsInNormalMode = IsInNormalMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.SaveOniEmissiveParameter
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::SaveOniEmissiveParameter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.SaveOniEmissiveParameter");
		
		ABP_Menu_Slasher18_C_SaveOniEmissiveParameter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.GetDemonModeCusto
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::GetDemonModeCusto()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.GetDemonModeCusto");
		
		ABP_Menu_Slasher18_C_GetDemonModeCusto_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.TML_KatanaDissolve__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::TML_KatanaDissolve__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.TML_KatanaDissolve__FinishedFunc");
		
		ABP_Menu_Slasher18_C_TML_KatanaDissolve__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.TML_KatanaDissolve__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::TML_KatanaDissolve__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.TML_KatanaDissolve__UpdateFunc");
		
		ABP_Menu_Slasher18_C_TML_KatanaDissolve__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.TML_DemonModeCusto__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::TML_DemonModeCusto__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.TML_DemonModeCusto__FinishedFunc");
		
		ABP_Menu_Slasher18_C_TML_DemonModeCusto__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.TML_DemonModeCusto__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::TML_DemonModeCusto__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.TML_DemonModeCusto__UpdateFunc");
		
		ABP_Menu_Slasher18_C_TML_DemonModeCusto__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.TML_DemonModeCusto__Switch Normal__EventFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::TML_DemonModeCusto__Switch_Normal__EventFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.TML_DemonModeCusto__Switch Normal__EventFunc");
		
		ABP_Menu_Slasher18_C_TML_DemonModeCusto__Switch_Normal__EventFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.TML_DemonModeCusto__Switch Demon__EventFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::TML_DemonModeCusto__Switch_Demon__EventFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.TML_DemonModeCusto__Switch Demon__EventFunc");
		
		ABP_Menu_Slasher18_C_TML_DemonModeCusto__Switch_Demon__EventFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ActivateEndGameVignette
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsActive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Menu_Slasher18_C::ActivateEndGameVignette(bool IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ActivateEndGameVignette");
		
		ABP_Menu_Slasher18_C_ActivateEndGameVignette_Params params {};
		params.IsActive = IsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ActivatePlayerExposedVFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::ActivatePlayerExposedVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ActivatePlayerExposedVFX");
		
		ABP_Menu_Slasher18_C_ActivatePlayerExposedVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ActivateLocalPlayerExposedVFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::ActivateLocalPlayerExposedVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ActivateLocalPlayerExposedVFX");
		
		ABP_Menu_Slasher18_C_ActivateLocalPlayerExposedVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.SetPlayerExposedVFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::SetPlayerExposedVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.SetPlayerExposedVFX");
		
		ABP_Menu_Slasher18_C_SetPlayerExposedVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.SetHighlightedVFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::SetHighlightedVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.SetHighlightedVFX");
		
		ABP_Menu_Slasher18_C_SetHighlightedVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ActivatePlayerLightningVFX
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMaterialInstanceDynamic*                    LightningFX                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               intense                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Menu_Slasher18_C::ActivatePlayerLightningVFX(class UMaterialInstanceDynamic* LightningFX, bool intense)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ActivatePlayerLightningVFX");
		
		ABP_Menu_Slasher18_C_ActivatePlayerLightningVFX_Params params {};
		params.LightningFX = LightningFX;
		params.intense = intense;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ActivatePlayerGlitchVFX
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMaterialInstanceDynamic*                    GlitchFX                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Face                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Madness                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               killer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Menu_Slasher18_C::ActivatePlayerGlitchVFX(class UMaterialInstanceDynamic* GlitchFX, bool Face, bool Madness, bool killer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ActivatePlayerGlitchVFX");
		
		ABP_Menu_Slasher18_C_ActivatePlayerGlitchVFX_Params params {};
		params.GlitchFX = GlitchFX;
		params.Face = Face;
		params.Madness = Madness;
		params.killer = killer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Start Travelling PP
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::Start_Travelling_PP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Start Travelling PP");
		
		ABP_Menu_Slasher18_C_Start_Travelling_PP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Start Travelling Dissolve
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::Start_Travelling_Dissolve()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Start Travelling Dissolve");
		
		ABP_Menu_Slasher18_C_Start_Travelling_Dissolve_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Stop Travelling Dissolve
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::Stop_Travelling_Dissolve()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Stop Travelling Dissolve");
		
		ABP_Menu_Slasher18_C_Stop_Travelling_Dissolve_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Start Pounce VFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::Start_Pounce_VFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Start Pounce VFX");
		
		ABP_Menu_Slasher18_C_Start_Pounce_VFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Stop Pounce VFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::Stop_Pounce_VFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Stop Pounce VFX");
		
		ABP_Menu_Slasher18_C_Stop_Pounce_VFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Start Saliva VFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::Start_Saliva_VFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Start Saliva VFX");
		
		ABP_Menu_Slasher18_C_Start_Saliva_VFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Stop Saliva VFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::Stop_Saliva_VFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Stop Saliva VFX");
		
		ABP_Menu_Slasher18_C_Stop_Saliva_VFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Stop Travelling PP
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::Stop_Travelling_PP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Stop Travelling PP");
		
		ABP_Menu_Slasher18_C_Stop_Travelling_PP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ActivatePounceStateVFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::ActivatePounceStateVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ActivatePounceStateVFX");
		
		ABP_Menu_Slasher18_C_ActivatePounceStateVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Destroy Blood Orb
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::Destroy_Blood_Orb()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Destroy Blood Orb");
		
		ABP_Menu_Slasher18_C_Destroy_Blood_Orb_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Switch Oni Weapons To Normal
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::Switch_Oni_Weapons_To_Normal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Switch Oni Weapons To Normal");
		
		ABP_Menu_Slasher18_C_Switch_Oni_Weapons_To_Normal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.DisableDemonMode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::DisableDemonMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.DisableDemonMode");
		
		ABP_Menu_Slasher18_C_DisableDemonMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ReturnToDemonMode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::ReturnToDemonMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ReturnToDemonMode");
		
		ABP_Menu_Slasher18_C_ReturnToDemonMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Hide Oni Katana_TPV
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::Hide_Oni_Katana_TPV()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Hide Oni Katana_TPV");
		
		ABP_Menu_Slasher18_C_Hide_Oni_Katana_TPV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ShowGunBullet
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::ShowGunBullet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ShowGunBullet");
		
		ABP_Menu_Slasher18_C_ShowGunBullet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.HideGunBullet
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::HideGunBullet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.HideGunBullet");
		
		ABP_Menu_Slasher18_C_HideGunBullet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.SpawnFakeBullet
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::SpawnFakeBullet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.SpawnFakeBullet");
		
		ABP_Menu_Slasher18_C_SpawnFakeBullet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ActivateSacrificeCamBlood
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::ActivateSacrificeCamBlood()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ActivateSacrificeCamBlood");
		
		ABP_Menu_Slasher18_C_ActivateSacrificeCamBlood_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.StartDeathBedDissolve
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::StartDeathBedDissolve()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.StartDeathBedDissolve");
		
		ABP_Menu_Slasher18_C_StartDeathBedDissolve_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.DeactivateKnockoutVFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::DeactivateKnockoutVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.DeactivateKnockoutVFX");
		
		ABP_Menu_Slasher18_C_DeactivateKnockoutVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ActivateKnockoutVFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::ActivateKnockoutVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ActivateKnockoutVFX");
		
		ABP_Menu_Slasher18_C_ActivateKnockoutVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.SpawnFullScreenBlood
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::SpawnFullScreenBlood()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.SpawnFullScreenBlood");
		
		ABP_Menu_Slasher18_C_SpawnFullScreenBlood_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.StartDeathBedRelocateVignette
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::StartDeathBedRelocateVignette()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.StartDeathBedRelocateVignette");
		
		ABP_Menu_Slasher18_C_StartDeathBedRelocateVignette_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ActivateAttemptEscapeVFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::ActivateAttemptEscapeVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ActivateAttemptEscapeVFX");
		
		ABP_Menu_Slasher18_C_ActivateAttemptEscapeVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ShowSyringe
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::ShowSyringe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ShowSyringe");
		
		ABP_Menu_Slasher18_C_ShowSyringe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.HideSyringe
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::HideSyringe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.HideSyringe");
		
		ABP_Menu_Slasher18_C_HideSyringe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.AnimateLiquidSyringe
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::AnimateLiquidSyringe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.AnimateLiquidSyringe");
		
		ABP_Menu_Slasher18_C_AnimateLiquidSyringe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ActivateVignetteOnWallCollision
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::ActivateVignetteOnWallCollision()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ActivateVignetteOnWallCollision");
		
		ABP_Menu_Slasher18_C_ActivateVignetteOnWallCollision_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.HideSyringeOnStun
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::HideSyringeOnStun()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.HideSyringeOnStun");
		
		ABP_Menu_Slasher18_C_HideSyringeOnStun_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_SpawnWipeVFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::K22_SpawnWipeVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_SpawnWipeVFX");
		
		ABP_Menu_Slasher18_C_K22_SpawnWipeVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_HighlightDormantMain
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDormantMain_                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Menu_Slasher18_C::K22_HighlightDormantMain(bool IsDormantMain_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_HighlightDormantMain");
		
		ABP_Menu_Slasher18_C_K22_HighlightDormantMain_Params params {};
		params.IsDormantMain_ = IsDormantMain_;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_HighlightDormant
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDormant_                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Menu_Slasher18_C::K22_HighlightDormant(bool IsDormant_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_HighlightDormant");
		
		ABP_Menu_Slasher18_C_K22_HighlightDormant_Params params {};
		params.IsDormant_ = IsDormant_;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_HighlightMissJump
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::K22_HighlightMissJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_HighlightMissJump");
		
		ABP_Menu_Slasher18_C_K22_HighlightMissJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_DormantAttachedSlasher
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::K22_DormantAttachedSlasher()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_DormantAttachedSlasher");
		
		ABP_Menu_Slasher18_C_K22_DormantAttachedSlasher_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_JumpTrail_Activate
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::K22_JumpTrail_Activate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_JumpTrail_Activate");
		
		ABP_Menu_Slasher18_C_K22_JumpTrail_Activate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_JumpTrail_Deactivate
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::K22_JumpTrail_Deactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_JumpTrail_Deactivate");
		
		ABP_Menu_Slasher18_C_K22_JumpTrail_Deactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_ReleaseBrother
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::K22_ReleaseBrother()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_ReleaseBrother");
		
		ABP_Menu_Slasher18_C_K22_ReleaseBrother_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_MembraneRecovery
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::K22_MembraneRecovery()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_MembraneRecovery");
		
		ABP_Menu_Slasher18_C_K22_MembraneRecovery_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_MembraneDelete
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::K22_MembraneDelete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_MembraneDelete");
		
		ABP_Menu_Slasher18_C_K22_MembraneDelete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_BabyBloodDissolve
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::K22_BabyBloodDissolve()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_BabyBloodDissolve");
		
		ABP_Menu_Slasher18_C_K22_BabyBloodDissolve_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_BabyRespawn
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::K22_BabyRespawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_BabyRespawn");
		
		ABP_Menu_Slasher18_C_K22_BabyRespawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_Jump_Active
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::K22_Jump_Active()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_Jump_Active");
		
		ABP_Menu_Slasher18_C_K22_Jump_Active_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_Jump_Inactive
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::K22_Jump_Inactive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_Jump_Inactive");
		
		ABP_Menu_Slasher18_C_K22_Jump_Inactive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.On Execution
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::On_Execution()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.On Execution");
		
		ABP_Menu_Slasher18_C_On_Execution_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K05_SetTrap
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::K05_SetTrap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K05_SetTrap");
		
		ABP_Menu_Slasher18_C_K05_SetTrap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K05_TrapImpact
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::K05_TrapImpact()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K05_TrapImpact");
		
		ABP_Menu_Slasher18_C_K05_TrapImpact_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K05_TrapImpactOff
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::K05_TrapImpactOff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K05_TrapImpactOff");
		
		ABP_Menu_Slasher18_C_K05_TrapImpactOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K05_BloodDrops
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::K05_BloodDrops()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K05_BloodDrops");
		
		ABP_Menu_Slasher18_C_K05_BloodDrops_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K07_TreatmentStart
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::K07_TreatmentStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K07_TreatmentStart");
		
		ABP_Menu_Slasher18_C_K07_TreatmentStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K04_InvisibleOn
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::K04_InvisibleOn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K04_InvisibleOn");
		
		ABP_Menu_Slasher18_C_K04_InvisibleOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K04_InvisibleOff
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::K04_InvisibleOff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K04_InvisibleOff");
		
		ABP_Menu_Slasher18_C_K04_InvisibleOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K04_TelekinesisOn
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::K04_TelekinesisOn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K04_TelekinesisOn");
		
		ABP_Menu_Slasher18_C_K04_TelekinesisOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K04_TelekinesisOff
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::K04_TelekinesisOff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K04_TelekinesisOff");
		
		ABP_Menu_Slasher18_C_K04_TelekinesisOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_WrongLanding
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Wrong_Landing                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Menu_Slasher18_C::K22_WrongLanding(bool Wrong_Landing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_WrongLanding");
		
		ABP_Menu_Slasher18_C_K22_WrongLanding_Params params {};
		params.Wrong_Landing = Wrong_Landing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_AttachedToSurvivor_VFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::K22_AttachedToSurvivor_VFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_AttachedToSurvivor_VFX");
		
		ABP_Menu_Slasher18_C_K22_AttachedToSurvivor_VFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_DetachedFromSurvivor_VFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::K22_DetachedFromSurvivor_VFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_DetachedFromSurvivor_VFX");
		
		ABP_Menu_Slasher18_C_K22_DetachedFromSurvivor_VFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_WrongLandingVignette
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               WrongLanding                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Menu_Slasher18_C::K22_WrongLandingVignette(bool WrongLanding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_WrongLandingVignette");
		
		ABP_Menu_Slasher18_C_K22_WrongLandingVignette_Params params {};
		params.WrongLanding = WrongLanding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K12_GetToxinVignette
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EBombType                                          Bomb_Type                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Menu_Slasher18_C::K12_GetToxinVignette(EBombType Bomb_Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K12_GetToxinVignette");
		
		ABP_Menu_Slasher18_C_K12_GetToxinVignette_Params params {};
		params.Bomb_Type = Bomb_Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K12_GetAntidoteVignette
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::K12_GetAntidoteVignette()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K12_GetAntidoteVignette");
		
		ABP_Menu_Slasher18_C_K12_GetAntidoteVignette_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K12_Killer_AntidoteEnd
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::K12_Killer_AntidoteEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K12_Killer_AntidoteEnd");
		
		ABP_Menu_Slasher18_C_K12_Killer_AntidoteEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K12_Killer_AntidoteBegin
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::K12_Killer_AntidoteBegin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K12_Killer_AntidoteBegin");
		
		ABP_Menu_Slasher18_C_K12_Killer_AntidoteBegin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K12_Killer_BombSmokeColor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::K12_Killer_BombSmokeColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K12_Killer_BombSmokeColor");
		
		ABP_Menu_Slasher18_C_K12_Killer_BombSmokeColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K12_Killer_RemoveVignette
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::K12_Killer_RemoveVignette()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K12_Killer_RemoveVignette");
		
		ABP_Menu_Slasher18_C_K12_Killer_RemoveVignette_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K12_Killer_PlaceVignette
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::K12_Killer_PlaceVignette()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K12_Killer_PlaceVignette");
		
		ABP_Menu_Slasher18_C_K12_Killer_PlaceVignette_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_QuickDissolveBrother
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::K22_QuickDissolveBrother()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_QuickDissolveBrother");
		
		ABP_Menu_Slasher18_C_K22_QuickDissolveBrother_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Killer_LungeAttack_Start
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::Killer_LungeAttack_Start()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Killer_LungeAttack_Start");
		
		ABP_Menu_Slasher18_C_Killer_LungeAttack_Start_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Killer_LungeAttack_End
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::Killer_LungeAttack_End()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Killer_LungeAttack_End");
		
		ABP_Menu_Slasher18_C_Killer_LungeAttack_End_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Camper_AntidoteBoostVignette_Start
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::Camper_AntidoteBoostVignette_Start()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Camper_AntidoteBoostVignette_Start");
		
		ABP_Menu_Slasher18_C_Camper_AntidoteBoostVignette_Start_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Camper_AntidoteBoostVignette_End
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::Camper_AntidoteBoostVignette_End()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Camper_AntidoteBoostVignette_End");
		
		ABP_Menu_Slasher18_C_Camper_AntidoteBoostVignette_End_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_BrotherDissolveLocker
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::K22_BrotherDissolveLocker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_BrotherDissolveLocker");
		
		ABP_Menu_Slasher18_C_K22_BrotherDissolveLocker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_HighlightMissJump_Stop
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::K22_HighlightMissJump_Stop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_HighlightMissJump_Stop");
		
		ABP_Menu_Slasher18_C_K22_HighlightMissJump_Stop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K23_CamperHitByKnife
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsLocallyObserved                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              lacerationPercent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isDangerous                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Menu_Slasher18_C::K23_CamperHitByKnife(bool IsLocallyObserved, float lacerationPercent, bool isDangerous)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K23_CamperHitByKnife");
		
		ABP_Menu_Slasher18_C_K23_CamperHitByKnife_Params params {};
		params.IsLocallyObserved = IsLocallyObserved;
		params.lacerationPercent = lacerationPercent;
		params.isDangerous = isDangerous;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_IsAttachedLocker
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsAttachedLocker                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Menu_Slasher18_C::K22_IsAttachedLocker(bool IsAttachedLocker)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_IsAttachedLocker");
		
		ABP_Menu_Slasher18_C_K22_IsAttachedLocker_Params params {};
		params.IsAttachedLocker = IsAttachedLocker;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K23_ShowKnifeLT
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::K23_ShowKnifeLT()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K23_ShowKnifeLT");
		
		ABP_Menu_Slasher18_C_K23_ShowKnifeLT_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K23_ShowKnifeRT
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::K23_ShowKnifeRT()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K23_ShowKnifeRT");
		
		ABP_Menu_Slasher18_C_K23_ShowKnifeRT_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K23_ShowBat
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::K23_ShowBat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K23_ShowBat");
		
		ABP_Menu_Slasher18_C_K23_ShowBat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K23_HideBat
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::K23_HideBat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K23_HideBat");
		
		ABP_Menu_Slasher18_C_K23_HideBat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K23_HideKnifeRT
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::K23_HideKnifeRT()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K23_HideKnifeRT");
		
		ABP_Menu_Slasher18_C_K23_HideKnifeRT_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K23_HideKnifeLT
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::K23_HideKnifeLT()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K23_HideKnifeLT");
		
		ABP_Menu_Slasher18_C_K23_HideKnifeLT_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.AddBloodDrippingGKMoriMale
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::AddBloodDrippingGKMoriMale()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.AddBloodDrippingGKMoriMale");
		
		ABP_Menu_Slasher18_C_AddBloodDrippingGKMoriMale_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Survivor_BoonRadius_Enter
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::Survivor_BoonRadius_Enter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Survivor_BoonRadius_Enter");
		
		ABP_Menu_Slasher18_C_Survivor_BoonRadius_Enter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Survivor_BoonRadius_Exit
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::Survivor_BoonRadius_Exit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Survivor_BoonRadius_Exit");
		
		ABP_Menu_Slasher18_C_Survivor_BoonRadius_Exit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Boon_Unbound
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::Boon_Unbound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Boon_Unbound");
		
		ABP_Menu_Slasher18_C_Boon_Unbound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ReceiveBeginPlay");
		
		ABP_Menu_Slasher18_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Switch Kanobo To Demon Mode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::Switch_Kanobo_To_Demon_Mode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Switch Kanobo To Demon Mode");
		
		ABP_Menu_Slasher18_C_Switch_Kanobo_To_Demon_Mode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Switch Kanobo to Normal Mode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::Switch_Kanobo_to_Normal_Mode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Switch Kanobo to Normal Mode");
		
		ABP_Menu_Slasher18_C_Switch_Kanobo_to_Normal_Mode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Show Oni Katana
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::Show_Oni_Katana()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Show Oni Katana");
		
		ABP_Menu_Slasher18_C_Show_Oni_Katana_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Hide Oni Katana
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::Hide_Oni_Katana()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Hide Oni Katana");
		
		ABP_Menu_Slasher18_C_Hide_Oni_Katana_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.On Customisation Updated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::On_Customisation_Updated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.On Customisation Updated");
		
		ABP_Menu_Slasher18_C_On_Customisation_Updated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ShowDemonCosmetic
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::ShowDemonCosmetic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ShowDemonCosmetic");
		
		ABP_Menu_Slasher18_C_ShowDemonCosmetic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.HideDemonCosmetic
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::HideDemonCosmetic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.HideDemonCosmetic");
		
		ABP_Menu_Slasher18_C_HideDemonCosmetic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ReturnOniToNormal
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::ReturnOniToNormal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ReturnOniToNormal");
		
		ABP_Menu_Slasher18_C_ReturnOniToNormal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.StopTransformation
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher18_C::StopTransformation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.StopTransformation");
		
		ABP_Menu_Slasher18_C_StopTransformation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ExecuteUbergraph_BP_Menu_Slasher18
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Menu_Slasher18_C::ExecuteUbergraph_BP_Menu_Slasher18(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ExecuteUbergraph_BP_Menu_Slasher18");
		
		ABP_Menu_Slasher18_C_ExecuteUbergraph_BP_Menu_Slasher18_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_Menu_Slasher18_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Menu_Slasher18_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Menu_Slasher18.BP_Menu_Slasher18_C");
		return ptr;
	}

}


