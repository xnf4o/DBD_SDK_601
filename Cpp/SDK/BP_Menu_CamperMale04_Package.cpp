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
	 * 		Name   -> Function BP_Menu_CamperMale04.BP_Menu_CamperMale04_C.Cigarette__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Menu_CamperMale04_C::Cigarette__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_CamperMale04.BP_Menu_CamperMale04_C.Cigarette__FinishedFunc");
		
		ABP_Menu_CamperMale04_C_Cigarette__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_CamperMale04.BP_Menu_CamperMale04_C.Cigarette__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Menu_CamperMale04_C::Cigarette__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_CamperMale04.BP_Menu_CamperMale04_C.Cigarette__UpdateFunc");
		
		ABP_Menu_CamperMale04_C_Cigarette__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_CamperMale04.BP_Menu_CamperMale04_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_Menu_CamperMale04_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_CamperMale04.BP_Menu_CamperMale04_C.ReceiveBeginPlay");
		
		ABP_Menu_CamperMale04_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_CamperMale04.BP_Menu_CamperMale04_C.BeginDestroySequence_Internal
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_Menu_CamperMale04_C::BeginDestroySequence_Internal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_CamperMale04.BP_Menu_CamperMale04_C.BeginDestroySequence_Internal");
		
		ABP_Menu_CamperMale04_C_BeginDestroySequence_Internal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_CamperMale04.BP_Menu_CamperMale04_C.ExecuteUbergraph_BP_Menu_CamperMale04
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Menu_CamperMale04_C::ExecuteUbergraph_BP_Menu_CamperMale04(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_CamperMale04.BP_Menu_CamperMale04_C.ExecuteUbergraph_BP_Menu_CamperMale04");
		
		ABP_Menu_CamperMale04_C_ExecuteUbergraph_BP_Menu_CamperMale04_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_Menu_CamperMale04_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Menu_CamperMale04_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Menu_CamperMale04.BP_Menu_CamperMale04_C");
		return ptr;
	}

}


