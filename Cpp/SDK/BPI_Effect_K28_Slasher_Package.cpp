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
	 * 		Name   -> Function BPI_Effect_K28_Slasher.BPI_Effect_K28_Slasher_C.FX_K28_HideKiller
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPI_Effect_K28_Slasher_C::FX_K28_HideKiller()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_Effect_K28_Slasher.BPI_Effect_K28_Slasher_C.FX_K28_HideKiller");
		
		UBPI_Effect_K28_Slasher_C_FX_K28_HideKiller_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BPI_Effect_K28_Slasher.BPI_Effect_K28_Slasher_C.FX_K28_ShowKiller
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPI_Effect_K28_Slasher_C::FX_K28_ShowKiller()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_Effect_K28_Slasher.BPI_Effect_K28_Slasher_C.FX_K28_ShowKiller");
		
		UBPI_Effect_K28_Slasher_C_FX_K28_ShowKiller_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BPI_Effect_K28_Slasher.BPI_Effect_K28_Slasher_C.FX_K28_ExitingLocker
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPI_Effect_K28_Slasher_C::FX_K28_ExitingLocker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_Effect_K28_Slasher.BPI_Effect_K28_Slasher_C.FX_K28_ExitingLocker");
		
		UBPI_Effect_K28_Slasher_C_FX_K28_ExitingLocker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BPI_Effect_K28_Slasher.BPI_Effect_K28_Slasher_C.FX_K28_NightEnds
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPI_Effect_K28_Slasher_C::FX_K28_NightEnds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_Effect_K28_Slasher.BPI_Effect_K28_Slasher_C.FX_K28_NightEnds");
		
		UBPI_Effect_K28_Slasher_C_FX_K28_NightEnds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BPI_Effect_K28_Slasher.BPI_Effect_K28_Slasher_C.FX_K28_NightBegins
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPI_Effect_K28_Slasher_C::FX_K28_NightBegins()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_Effect_K28_Slasher.BPI_Effect_K28_Slasher_C.FX_K28_NightBegins");
		
		UBPI_Effect_K28_Slasher_C_FX_K28_NightBegins_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBPI_Effect_K28_Slasher_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_Effect_K28_Slasher_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_Effect_K28_Slasher.BPI_Effect_K28_Slasher_C");
		return ptr;
	}

}


