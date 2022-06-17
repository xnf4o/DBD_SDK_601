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
	 * 		Name   -> Function BP_Menu_Slasher25.BP_Menu_Slasher25_C.TM_LamentBoxVisibility__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Menu_Slasher25_C::TM_LamentBoxVisibility__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher25.BP_Menu_Slasher25_C.TM_LamentBoxVisibility__FinishedFunc");
		
		ABP_Menu_Slasher25_C_TM_LamentBoxVisibility__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher25.BP_Menu_Slasher25_C.TM_LamentBoxVisibility__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Menu_Slasher25_C::TM_LamentBoxVisibility__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher25.BP_Menu_Slasher25_C.TM_LamentBoxVisibility__UpdateFunc");
		
		ABP_Menu_Slasher25_C_TM_LamentBoxVisibility__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher25.BP_Menu_Slasher25_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_Menu_Slasher25_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher25.BP_Menu_Slasher25_C.ReceiveBeginPlay");
		
		ABP_Menu_Slasher25_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher25.BP_Menu_Slasher25_C.MakeLamentBoxDisappear
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher25_C::MakeLamentBoxDisappear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher25.BP_Menu_Slasher25_C.MakeLamentBoxDisappear");
		
		ABP_Menu_Slasher25_C_MakeLamentBoxDisappear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher25.BP_Menu_Slasher25_C.MakeLamentBoxAppear
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher25_C::MakeLamentBoxAppear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher25.BP_Menu_Slasher25_C.MakeLamentBoxAppear");
		
		ABP_Menu_Slasher25_C_MakeLamentBoxAppear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_Slasher25.BP_Menu_Slasher25_C.ExecuteUbergraph_BP_Menu_Slasher25
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Menu_Slasher25_C::ExecuteUbergraph_BP_Menu_Slasher25(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher25.BP_Menu_Slasher25_C.ExecuteUbergraph_BP_Menu_Slasher25");
		
		ABP_Menu_Slasher25_C_ExecuteUbergraph_BP_Menu_Slasher25_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_Menu_Slasher25_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Menu_Slasher25_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Menu_Slasher25.BP_Menu_Slasher25_C");
		return ptr;
	}

}


