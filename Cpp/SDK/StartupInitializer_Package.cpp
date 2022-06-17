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
	 * 		Name   -> PredefindFunction UStartupInitializer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStartupInitializer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StartupInitializer.StartupInitializer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04BAD800
	 * 		Name   -> Function StartupInitializer.ClientStartupInitializer.OnHealthCheckTriggered
	 * 		Flags  -> (Final, Native, Private, HasOutParms, HasDefaults)
	 * Parameters:
	 * 		bool                                               requestSuccess                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ProviderError                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               datetimeIsSet                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDateTime                                   utcTime                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UClientStartupInitializer::OnHealthCheckTriggered(bool requestSuccess, int32_t ProviderError, bool datetimeIsSet, const struct FDateTime& utcTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StartupInitializer.ClientStartupInitializer.OnHealthCheckTriggered");
		
		UClientStartupInitializer_OnHealthCheckTriggered_Params params {};
		params.requestSuccess = requestSuccess;
		params.ProviderError = ProviderError;
		params.datetimeIsSet = datetimeIsSet;
		params.utcTime = utcTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UClientStartupInitializer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClientStartupInitializer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StartupInitializer.ClientStartupInitializer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDedicatedServerStartupInitializer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDedicatedServerStartupInitializer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StartupInitializer.DedicatedServerStartupInitializer");
		return ptr;
	}

}


