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
	 * 		Name   -> PredefindFunction UCatalogValidationCommandlet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCatalogValidationCommandlet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CommandletPlugin.CatalogValidationCommandlet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCustomizationValidationCommandlet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomizationValidationCommandlet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CommandletPlugin.CustomizationValidationCommandlet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDataTableToCsvCommandlet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDataTableToCsvCommandlet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CommandletPlugin.DataTableToCsvCommandlet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFixCustomizationAccessorySocketCommandlet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFixCustomizationAccessorySocketCommandlet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CommandletPlugin.FixCustomizationAccessorySocketCommandlet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGenerateCurveFloatNetIdTableCommandlet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGenerateCurveFloatNetIdTableCommandlet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CommandletPlugin.GenerateCurveFloatNetIdTableCommandlet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGenerateStoreCustomizationExclusionFileCommandlet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGenerateStoreCustomizationExclusionFileCommandlet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CommandletPlugin.GenerateStoreCustomizationExclusionFileCommandlet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGenerateStoreCustomizationExclusionFileCommandlet_Base.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGenerateStoreCustomizationExclusionFileCommandlet_Base::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CommandletPlugin.GenerateStoreCustomizationExclusionFileCommandlet_Base");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGenerateStoreCustomizationExclusionFileCommandlet_CustoDB.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGenerateStoreCustomizationExclusionFileCommandlet_CustoDB::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CommandletPlugin.GenerateStoreCustomizationExclusionFileCommandlet_CustoDB");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGenerateStoreCustomizationExclusionFileCommandlet_KrakenCatalog.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGenerateStoreCustomizationExclusionFileCommandlet_KrakenCatalog::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CommandletPlugin.GenerateStoreCustomizationExclusionFileCommandlet_KrakenCatalog");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UJournalsValidationCommandlet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UJournalsValidationCommandlet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CommandletPlugin.JournalsValidationCommandlet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULoadoutExportCommandlet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULoadoutExportCommandlet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CommandletPlugin.LoadoutExportCommandlet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UStoryDescriptionValidationCommandlet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStoryDescriptionValidationCommandlet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CommandletPlugin.StoryDescriptionValidationCommandlet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UUpdateJournalVignetteCinematicsCommandlet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUpdateJournalVignetteCinematicsCommandlet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CommandletPlugin.UpdateJournalVignetteCinematicsCommandlet");
		return ptr;
	}

}


