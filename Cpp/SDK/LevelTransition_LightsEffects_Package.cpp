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
	 * 		Name   -> Function LevelTransition_LightsEffects.LevelTransition_LightsEffects_C.Fade Out__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ALevelTransition_LightsEffects_C::Fade_Out__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelTransition_LightsEffects.LevelTransition_LightsEffects_C.Fade Out__FinishedFunc");
		
		ALevelTransition_LightsEffects_C_Fade_Out__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function LevelTransition_LightsEffects.LevelTransition_LightsEffects_C.Fade Out__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ALevelTransition_LightsEffects_C::Fade_Out__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelTransition_LightsEffects.LevelTransition_LightsEffects_C.Fade Out__UpdateFunc");
		
		ALevelTransition_LightsEffects_C_Fade_Out__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function LevelTransition_LightsEffects.LevelTransition_LightsEffects_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ALevelTransition_LightsEffects_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelTransition_LightsEffects.LevelTransition_LightsEffects_C.ReceiveBeginPlay");
		
		ALevelTransition_LightsEffects_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function LevelTransition_LightsEffects.LevelTransition_LightsEffects_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ALevelTransition_LightsEffects_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelTransition_LightsEffects.LevelTransition_LightsEffects_C.ReceiveTick");
		
		ALevelTransition_LightsEffects_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function LevelTransition_LightsEffects.LevelTransition_LightsEffects_C.ExecuteUbergraph_LevelTransition_LightsEffects
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ALevelTransition_LightsEffects_C::ExecuteUbergraph_LevelTransition_LightsEffects(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelTransition_LightsEffects.LevelTransition_LightsEffects_C.ExecuteUbergraph_LevelTransition_LightsEffects");
		
		ALevelTransition_LightsEffects_C_ExecuteUbergraph_LevelTransition_LightsEffects_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ALevelTransition_LightsEffects_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALevelTransition_LightsEffects_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LevelTransition_LightsEffects.LevelTransition_LightsEffects_C");
		return ptr;
	}

}


