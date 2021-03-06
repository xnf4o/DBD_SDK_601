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
	 * 		Name   -> Function BP_Menu_CamperFemale16.BP_Menu_CamperFemale16_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_Menu_CamperFemale16_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_CamperFemale16.BP_Menu_CamperFemale16_C.ReceiveBeginPlay");
		
		ABP_Menu_CamperFemale16_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Menu_CamperFemale16.BP_Menu_CamperFemale16_C.ExecuteUbergraph_BP_Menu_CamperFemale16
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Menu_CamperFemale16_C::ExecuteUbergraph_BP_Menu_CamperFemale16(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_CamperFemale16.BP_Menu_CamperFemale16_C.ExecuteUbergraph_BP_Menu_CamperFemale16");
		
		ABP_Menu_CamperFemale16_C_ExecuteUbergraph_BP_Menu_CamperFemale16_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_Menu_CamperFemale16_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Menu_CamperFemale16_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Menu_CamperFemale16.BP_Menu_CamperFemale16_C");
		return ptr;
	}

}


