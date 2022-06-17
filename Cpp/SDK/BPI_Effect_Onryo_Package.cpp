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
	 * 		Name   -> Function BPI_Effect_Onryo.BPI_Effect_Onryo_C.FX_K27_InteractionStart_Vignette
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPI_Effect_Onryo_C::FX_K27_InteractionStart_Vignette()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_Effect_Onryo.BPI_Effect_Onryo_C.FX_K27_InteractionStart_Vignette");
		
		UBPI_Effect_Onryo_C_FX_K27_InteractionStart_Vignette_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BPI_Effect_Onryo.BPI_Effect_Onryo_C.CosmeticOnUnmanifestChargeChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Charge_Percent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_Effect_Onryo_C::CosmeticOnUnmanifestChargeChanged(float Charge_Percent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_Effect_Onryo.BPI_Effect_Onryo_C.CosmeticOnUnmanifestChargeChanged");
		
		UBPI_Effect_Onryo_C_CosmeticOnUnmanifestChargeChanged_Params params {};
		params.Charge_Percent = Charge_Percent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BPI_Effect_Onryo.BPI_Effect_Onryo_C.CosmeticOnManifestChargeChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Charge_Percent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_Effect_Onryo_C::CosmeticOnManifestChargeChanged(float Charge_Percent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_Effect_Onryo.BPI_Effect_Onryo_C.CosmeticOnManifestChargeChanged");
		
		UBPI_Effect_Onryo_C_CosmeticOnManifestChargeChanged_Params params {};
		params.Charge_Percent = Charge_Percent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBPI_Effect_Onryo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_Effect_Onryo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_Effect_Onryo.BPI_Effect_Onryo_C");
		return ptr;
	}

}


