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
	 * 		Name   -> Function BP_Well.BP_Well_C.TML_WellDissolveController__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Well_C::TML_WellDissolveController__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Well.BP_Well_C.TML_WellDissolveController__FinishedFunc");
		
		ABP_Well_C_TML_WellDissolveController__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Well.BP_Well_C.TML_WellDissolveController__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Well_C::TML_WellDissolveController__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Well.BP_Well_C.TML_WellDissolveController__UpdateFunc");
		
		ABP_Well_C_TML_WellDissolveController__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Well.BP_Well_C.TML_WellDissolveController__Disable Shadow__EventFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Well_C::TML_WellDissolveController__Disable_Shadow__EventFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Well.BP_Well_C.TML_WellDissolveController__Disable Shadow__EventFunc");
		
		ABP_Well_C_TML_WellDissolveController__Disable_Shadow__EventFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Well.BP_Well_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_Well_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Well.BP_Well_C.ReceiveBeginPlay");
		
		ABP_Well_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Well.BP_Well_C.Event_DissolveWell
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Well_C::Event_DissolveWell()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Well.BP_Well_C.Event_DissolveWell");
		
		ABP_Well_C_Event_DissolveWell_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Well.BP_Well_C.Event_QuickDissolveWell_In
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Well_C::Event_QuickDissolveWell_In()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Well.BP_Well_C.Event_QuickDissolveWell_In");
		
		ABP_Well_C_Event_QuickDissolveWell_In_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Well.BP_Well_C.ExecuteUbergraph_BP_Well
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Well_C::ExecuteUbergraph_BP_Well(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Well.BP_Well_C.ExecuteUbergraph_BP_Well");
		
		ABP_Well_C_ExecuteUbergraph_BP_Well_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_Well_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Well_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Well.BP_Well_C");
		return ptr;
	}

}


