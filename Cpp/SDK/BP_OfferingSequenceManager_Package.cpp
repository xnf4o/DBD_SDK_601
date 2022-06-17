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
	 * 		Name   -> Function BP_OfferingSequenceManager.BP_OfferingSequenceManager_C.HandleSequenceStateChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EOfferingSequenceState                             State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_OfferingSequenceManager_C::HandleSequenceStateChanged(EOfferingSequenceState State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OfferingSequenceManager.BP_OfferingSequenceManager_C.HandleSequenceStateChanged");
		
		ABP_OfferingSequenceManager_C_HandleSequenceStateChanged_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_OfferingSequenceManager.BP_OfferingSequenceManager_C.ExecuteUbergraph_BP_OfferingSequenceManager
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_OfferingSequenceManager_C::ExecuteUbergraph_BP_OfferingSequenceManager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OfferingSequenceManager.BP_OfferingSequenceManager_C.ExecuteUbergraph_BP_OfferingSequenceManager");
		
		ABP_OfferingSequenceManager_C_ExecuteUbergraph_BP_OfferingSequenceManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_OfferingSequenceManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_OfferingSequenceManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_OfferingSequenceManager.BP_OfferingSequenceManager_C");
		return ptr;
	}

}


