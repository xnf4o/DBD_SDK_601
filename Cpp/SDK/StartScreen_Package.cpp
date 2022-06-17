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
	 * 		Name   -> Function StartScreen.StartScreen_C.K2Node_MatineeController_1_FadedOutEvent
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AStartScreen_C::K2Node_MatineeController_1_FadedOutEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StartScreen.StartScreen_C.K2Node_MatineeController_1_FadedOutEvent");
		
		AStartScreen_C_K2Node_MatineeController_1_FadedOutEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function StartScreen.StartScreen_C.K2Node_MatineeController_1_Finished
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AStartScreen_C::K2Node_MatineeController_1_Finished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StartScreen.StartScreen_C.K2Node_MatineeController_1_Finished");
		
		AStartScreen_C_K2Node_MatineeController_1_Finished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function StartScreen.StartScreen_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AStartScreen_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StartScreen.StartScreen_C.ReceiveBeginPlay");
		
		AStartScreen_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function StartScreen.StartScreen_C.BeginDestroyTravelSequence
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AStartScreen_C::BeginDestroyTravelSequence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StartScreen.StartScreen_C.BeginDestroyTravelSequence");
		
		AStartScreen_C_BeginDestroyTravelSequence_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function StartScreen.StartScreen_C.ExecuteUbergraph_StartScreen
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStartScreen_C::ExecuteUbergraph_StartScreen(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StartScreen.StartScreen_C.ExecuteUbergraph_StartScreen");
		
		AStartScreen_C_ExecuteUbergraph_StartScreen_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AStartScreen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStartScreen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StartScreen.StartScreen_C");
		return ptr;
	}

}


