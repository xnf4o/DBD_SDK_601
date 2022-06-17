#pragma once

/**
 * Name: DBD
 * Version: 601
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class CommandletPlugin.CatalogValidationCommandlet
	 * Size -> 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
	 */
	class UCatalogValidationCommandlet : public UCommandlet
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommandletPlugin.CustomizationValidationCommandlet
	 * Size -> 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
	 */
	class UCustomizationValidationCommandlet : public UCommandlet
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommandletPlugin.DataTableToCsvCommandlet
	 * Size -> 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
	 */
	class UDataTableToCsvCommandlet : public UCommandlet
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommandletPlugin.FixCustomizationAccessorySocketCommandlet
	 * Size -> 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
	 */
	class UFixCustomizationAccessorySocketCommandlet : public UCommandlet
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommandletPlugin.GenerateCurveFloatNetIdTableCommandlet
	 * Size -> 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
	 */
	class UGenerateCurveFloatNetIdTableCommandlet : public UCommandlet
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommandletPlugin.GenerateStoreCustomizationExclusionFileCommandlet
	 * Size -> 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
	 */
	class UGenerateStoreCustomizationExclusionFileCommandlet : public UCommandlet
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommandletPlugin.GenerateStoreCustomizationExclusionFileCommandlet_Base
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGenerateStoreCustomizationExclusionFileCommandlet_Base : public UObject
	{
	public:
		unsigned char                                              UnknownData_GO06[0x10];                                  // 0x0030(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommandletPlugin.GenerateStoreCustomizationExclusionFileCommandlet_CustoDB
	 * Size -> 0x0080 (FullSize[0x00C0] - InheritedSize[0x0040])
	 */
	class UGenerateStoreCustomizationExclusionFileCommandlet_CustoDB : public UGenerateStoreCustomizationExclusionFileCommandlet_Base
	{
	public:
		unsigned char                                              UnknownData_RZFG[0x80];                                  // 0x0040(0x0080) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommandletPlugin.GenerateStoreCustomizationExclusionFileCommandlet_KrakenCatalog
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UGenerateStoreCustomizationExclusionFileCommandlet_KrakenCatalog : public UGenerateStoreCustomizationExclusionFileCommandlet_Base
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommandletPlugin.JournalsValidationCommandlet
	 * Size -> 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
	 */
	class UJournalsValidationCommandlet : public UCommandlet
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommandletPlugin.LoadoutExportCommandlet
	 * Size -> 0x00C8 (FullSize[0x0150] - InheritedSize[0x0088])
	 */
	class ULoadoutExportCommandlet : public UCommandlet
	{
	public:
		unsigned char                                              UnknownData_RYGR[0x20];                                  // 0x0088(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UEnum*                                               _enumPtr;                                                // 0x00A8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1K3T[0xA0];                                  // 0x00B0(0x00A0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommandletPlugin.StoryDescriptionValidationCommandlet
	 * Size -> 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
	 */
	class UStoryDescriptionValidationCommandlet : public UCommandlet
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommandletPlugin.UpdateJournalVignetteCinematicsCommandlet
	 * Size -> 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
	 */
	class UUpdateJournalVignetteCinematicsCommandlet : public UCommandlet
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
