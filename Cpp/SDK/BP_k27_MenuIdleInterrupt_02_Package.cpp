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
	 * 		Name   -> Function BP_k27_MenuIdleInterrupt_02.BP_k27_MenuIdleInterrupt_02_C.TML_PP_IdleInterrupt_02__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_k27_MenuIdleInterrupt_02_C::TML_PP_IdleInterrupt_02__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_k27_MenuIdleInterrupt_02.BP_k27_MenuIdleInterrupt_02_C.TML_PP_IdleInterrupt_02__FinishedFunc");
		
		ABP_k27_MenuIdleInterrupt_02_C_TML_PP_IdleInterrupt_02__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_k27_MenuIdleInterrupt_02.BP_k27_MenuIdleInterrupt_02_C.TML_PP_IdleInterrupt_02__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_k27_MenuIdleInterrupt_02_C::TML_PP_IdleInterrupt_02__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_k27_MenuIdleInterrupt_02.BP_k27_MenuIdleInterrupt_02_C.TML_PP_IdleInterrupt_02__UpdateFunc");
		
		ABP_k27_MenuIdleInterrupt_02_C_TML_PP_IdleInterrupt_02__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_k27_MenuIdleInterrupt_02.BP_k27_MenuIdleInterrupt_02_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_k27_MenuIdleInterrupt_02_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_k27_MenuIdleInterrupt_02.BP_k27_MenuIdleInterrupt_02_C.ReceiveBeginPlay");
		
		ABP_k27_MenuIdleInterrupt_02_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_k27_MenuIdleInterrupt_02.BP_k27_MenuIdleInterrupt_02_C.Destroy_PP_IdleInterrupt_02
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_k27_MenuIdleInterrupt_02_C::Destroy_PP_IdleInterrupt_02()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_k27_MenuIdleInterrupt_02.BP_k27_MenuIdleInterrupt_02_C.Destroy_PP_IdleInterrupt_02");
		
		ABP_k27_MenuIdleInterrupt_02_C_Destroy_PP_IdleInterrupt_02_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_k27_MenuIdleInterrupt_02.BP_k27_MenuIdleInterrupt_02_C.ExecuteUbergraph_BP_k27_MenuIdleInterrupt_02
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_k27_MenuIdleInterrupt_02_C::ExecuteUbergraph_BP_k27_MenuIdleInterrupt_02(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_k27_MenuIdleInterrupt_02.BP_k27_MenuIdleInterrupt_02_C.ExecuteUbergraph_BP_k27_MenuIdleInterrupt_02");
		
		ABP_k27_MenuIdleInterrupt_02_C_ExecuteUbergraph_BP_k27_MenuIdleInterrupt_02_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_k27_MenuIdleInterrupt_02_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_k27_MenuIdleInterrupt_02_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_k27_MenuIdleInterrupt_02.BP_k27_MenuIdleInterrupt_02_C");
		return ptr;
	}

}


