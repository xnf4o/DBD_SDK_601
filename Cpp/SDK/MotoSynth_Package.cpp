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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMotoSynthPreset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMotoSynthPreset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MotoSynth.MotoSynthPreset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMotoSynthSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMotoSynthSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MotoSynth.MotoSynthSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0402A2C0
	 * 		Name   -> Function MotoSynth.SynthComponentMoto.SetSettings
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FMotoSynthRuntimeSettings                   InSettings                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USynthComponentMoto::SetSettings(const struct FMotoSynthRuntimeSettings& InSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MotoSynth.SynthComponentMoto.SetSettings");
		
		USynthComponentMoto_SetSettings_Params params {};
		params.InSettings = InSettings;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0402A1F0
	 * 		Name   -> Function MotoSynth.SynthComponentMoto.SetRPM
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InRPM                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InTimeSec                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponentMoto::SetRPM(float InRPM, float InTimeSec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MotoSynth.SynthComponentMoto.SetRPM");
		
		USynthComponentMoto_SetRPM_Params params {};
		params.InRPM = InRPM;
		params.InTimeSec = InTimeSec;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0402A1C0
	 * 		Name   -> Function MotoSynth.SynthComponentMoto.IsEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool USynthComponentMoto::IsEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MotoSynth.SynthComponentMoto.IsEnabled");
		
		USynthComponentMoto_IsEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0402A0E0
	 * 		Name   -> Function MotoSynth.SynthComponentMoto.GetRPMRange
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		float                                              OutMinRPM                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutMaxRPM                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponentMoto::GetRPMRange(float* OutMinRPM, float* OutMaxRPM)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MotoSynth.SynthComponentMoto.GetRPMRange");
		
		USynthComponentMoto_GetRPMRange_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutMinRPM != nullptr)
			*OutMinRPM = params.OutMinRPM;
		if (OutMaxRPM != nullptr)
			*OutMaxRPM = params.OutMaxRPM;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USynthComponentMoto.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USynthComponentMoto::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MotoSynth.SynthComponentMoto");
		return ptr;
	}

}


