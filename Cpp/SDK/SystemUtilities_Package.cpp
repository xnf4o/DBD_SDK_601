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
	 * 		Name   -> PredefindFunction UDateTimeProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDateTimeProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SystemUtilities.DateTimeProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UArrayExt.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UArrayExt::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SystemUtilities.ArrayExt");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x075C11B0
	 * 		Name   -> Function SystemUtilities.BoolExt.ToString
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               boolToConvert                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UBoolExt::STATIC_ToString(bool boolToConvert)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SystemUtilities.BoolExt.ToString");
		
		UBoolExt_ToString_Params params {};
		params.boolToConvert = boolToConvert;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBoolExt.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBoolExt::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SystemUtilities.BoolExt");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTimeProviderMock.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTimeProviderMock::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SystemUtilities.TimeProviderMock");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDateTimerUpdater.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDateTimerUpdater::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SystemUtilities.DateTimerUpdater");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDebugUtilities.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDebugUtilities::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SystemUtilities.DebugUtilities");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x075C2210
	 * 		Name   -> Function SystemUtilities.PlatformUtilities.GetPlatform
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class FString UPlatformUtilities::STATIC_GetPlatform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SystemUtilities.PlatformUtilities.GetPlatform");
		
		UPlatformUtilities_GetPlatform_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPlatformUtilities.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlatformUtilities::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SystemUtilities.PlatformUtilities");
		return ptr;
	}

}


