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
	 * 		Name   -> PredefindFunction USharedAuthenticationComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USharedAuthenticationComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SharedAuthenticationUtilities.SharedAuthenticationComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USharedAuthenticationMigrateComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USharedAuthenticationMigrateComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SharedAuthenticationUtilities.SharedAuthenticationMigrateComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function SharedAuthenticationUtilities.UMGAuthenticationProviderSelection.UpdateWidgetsVisibility
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UUMGAuthenticationProviderSelection::UpdateWidgetsVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SharedAuthenticationUtilities.UMGAuthenticationProviderSelection.UpdateWidgetsVisibility");
		
		UUMGAuthenticationProviderSelection_UpdateWidgetsVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function SharedAuthenticationUtilities.UMGAuthenticationProviderSelection.ShowMigrationFailedPopup
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUMGAuthenticationProviderSelection::ShowMigrationFailedPopup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SharedAuthenticationUtilities.UMGAuthenticationProviderSelection.ShowMigrationFailedPopup");
		
		UUMGAuthenticationProviderSelection_ShowMigrationFailedPopup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0764F120
	 * 		Name   -> Function SharedAuthenticationUtilities.UMGAuthenticationProviderSelection.SetSelectedAuthenticationProvider
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		ESharedAuthenticationProvider                      Provider                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUMGAuthenticationProviderSelection::SetSelectedAuthenticationProvider(ESharedAuthenticationProvider Provider)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SharedAuthenticationUtilities.UMGAuthenticationProviderSelection.SetSelectedAuthenticationProvider");
		
		UUMGAuthenticationProviderSelection_SetSelectedAuthenticationProvider_Params params {};
		params.Provider = Provider;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function SharedAuthenticationUtilities.UMGAuthenticationProviderSelection.SetMigrateWarningMessageAndShowPopup
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      playerName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUMGAuthenticationProviderSelection::SetMigrateWarningMessageAndShowPopup(const class FString& playerName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SharedAuthenticationUtilities.UMGAuthenticationProviderSelection.SetMigrateWarningMessageAndShowPopup");
		
		UUMGAuthenticationProviderSelection_SetMigrateWarningMessageAndShowPopup_Params params {};
		params.playerName = playerName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UUMGAuthenticationProviderSelection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMGAuthenticationProviderSelection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SharedAuthenticationUtilities.UMGAuthenticationProviderSelection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0764F3B0
	 * 		Name   -> Function SharedAuthenticationUtilities.UMGAutheticationProviderSelection.SetSelectedAuthenticationProvider
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		ESharedAuthenticationProvider                      Provider                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUMGAutheticationProviderSelection::SetSelectedAuthenticationProvider(ESharedAuthenticationProvider Provider)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SharedAuthenticationUtilities.UMGAutheticationProviderSelection.SetSelectedAuthenticationProvider");
		
		UUMGAutheticationProviderSelection_SetSelectedAuthenticationProvider_Params params {};
		params.Provider = Provider;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UUMGAutheticationProviderSelection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMGAutheticationProviderSelection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SharedAuthenticationUtilities.UMGAutheticationProviderSelection");
		return ptr;
	}

}


