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
	 * 		Name   -> PredefindFunction UMirrorsConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMirrorsConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlinePresence.MirrorsConfig");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x035ED6D0
	 * 		Name   -> Function OnlinePresence.OnlinePresenceExternalCommands.DBD_MirrorsWalletWithdraw
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      CurrencyName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOnlinePresenceExternalCommands::DBD_MirrorsWalletWithdraw(const class FString& CurrencyName, int32_t value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlinePresence.OnlinePresenceExternalCommands.DBD_MirrorsWalletWithdraw");
		
		UOnlinePresenceExternalCommands_DBD_MirrorsWalletWithdraw_Params params {};
		params.CurrencyName = CurrencyName;
		params.value = value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x035ED5E0
	 * 		Name   -> Function OnlinePresence.OnlinePresenceExternalCommands.DBD_MirrorsWalletGetCurrency
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      CurrencyName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOnlinePresenceExternalCommands::DBD_MirrorsWalletGetCurrency(const class FString& CurrencyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlinePresence.OnlinePresenceExternalCommands.DBD_MirrorsWalletGetCurrency");
		
		UOnlinePresenceExternalCommands_DBD_MirrorsWalletGetCurrency_Params params {};
		params.CurrencyName = CurrencyName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x035ED6D0
	 * 		Name   -> Function OnlinePresence.OnlinePresenceExternalCommands.DBD_MirrorsSaveTestValue
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      StateName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Version                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOnlinePresenceExternalCommands::DBD_MirrorsSaveTestValue(const class FString& StateName, int32_t Version)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlinePresence.OnlinePresenceExternalCommands.DBD_MirrorsSaveTestValue");
		
		UOnlinePresenceExternalCommands_DBD_MirrorsSaveTestValue_Params params {};
		params.StateName = StateName;
		params.Version = Version;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x035ED5E0
	 * 		Name   -> Function OnlinePresence.OnlinePresenceExternalCommands.DBD_MirrorsGetValue
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      StateName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOnlinePresenceExternalCommands::DBD_MirrorsGetValue(const class FString& StateName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlinePresence.OnlinePresenceExternalCommands.DBD_MirrorsGetValue");
		
		UOnlinePresenceExternalCommands_DBD_MirrorsGetValue_Params params {};
		params.StateName = StateName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x035ED530
	 * 		Name   -> Function OnlinePresence.OnlinePresenceExternalCommands.DBD_IsDlcInstalled
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      inString                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UOnlinePresenceExternalCommands::DBD_IsDlcInstalled(const class FString& inString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlinePresence.OnlinePresenceExternalCommands.DBD_IsDlcInstalled");
		
		UOnlinePresenceExternalCommands_DBD_IsDlcInstalled_Params params {};
		params.inString = inString;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x035ED500
	 * 		Name   -> Function OnlinePresence.OnlinePresenceExternalCommands.DBD_GrantPromoItems
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	bool UOnlinePresenceExternalCommands::DBD_GrantPromoItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlinePresence.OnlinePresenceExternalCommands.DBD_GrantPromoItems");
		
		UOnlinePresenceExternalCommands_DBD_GrantPromoItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x035ED500
	 * 		Name   -> Function OnlinePresence.OnlinePresenceExternalCommands.DBD_GenerateTestItems
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	bool UOnlinePresenceExternalCommands::DBD_GenerateTestItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlinePresence.OnlinePresenceExternalCommands.DBD_GenerateTestItems");
		
		UOnlinePresenceExternalCommands_DBD_GenerateTestItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UOnlinePresenceExternalCommands.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnlinePresenceExternalCommands::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlinePresence.OnlinePresenceExternalCommands");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlinePresence.SteamConfig");
		return ptr;
	}

}


