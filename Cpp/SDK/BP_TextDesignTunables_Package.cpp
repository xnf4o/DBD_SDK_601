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
	 * 		Name   -> Function BP_TextDesignTunables.BP_TextDesignTunables_C.ReceiveBeginPlay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_TextDesignTunables_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TextDesignTunables.BP_TextDesignTunables_C.ReceiveBeginPlay");
		
		UBP_TextDesignTunables_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_TextDesignTunables.BP_TextDesignTunables_C.ReceiveTick
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_TextDesignTunables_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TextDesignTunables.BP_TextDesignTunables_C.ReceiveTick");
		
		UBP_TextDesignTunables_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_TextDesignTunables.BP_TextDesignTunables_C.ExecuteUbergraph_BP_TextDesignTunables
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_TextDesignTunables_C::ExecuteUbergraph_BP_TextDesignTunables(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TextDesignTunables.BP_TextDesignTunables_C.ExecuteUbergraph_BP_TextDesignTunables");
		
		UBP_TextDesignTunables_C_ExecuteUbergraph_BP_TextDesignTunables_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBP_TextDesignTunables_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_TextDesignTunables_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_TextDesignTunables.BP_TextDesignTunables_C");
		return ptr;
	}

}


