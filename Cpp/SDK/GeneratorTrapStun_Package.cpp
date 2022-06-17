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
	 * 		Name   -> Function GeneratorTrapStun.GeneratorTrapStun_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UGeneratorTrapStun_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeneratorTrapStun.GeneratorTrapStun_C.ReceiveBeginPlay");
		
		UGeneratorTrapStun_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function GeneratorTrapStun.GeneratorTrapStun_C.ExecuteUbergraph_GeneratorTrapStun
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGeneratorTrapStun_C::ExecuteUbergraph_GeneratorTrapStun(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeneratorTrapStun.GeneratorTrapStun_C.ExecuteUbergraph_GeneratorTrapStun");
		
		UGeneratorTrapStun_C_ExecuteUbergraph_GeneratorTrapStun_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGeneratorTrapStun_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeneratorTrapStun_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GeneratorTrapStun.GeneratorTrapStun_C");
		return ptr;
	}

}


