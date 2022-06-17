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
	 * Class DBDUIManagers.DBDTextManager
	 * Size -> 0x0020 (FullSize[0x0058] - InheritedSize[0x0038])
	 */
	class UDBDTextManager : public UGameInstanceSubsystem
	{
	public:
		unsigned char                                              UnknownData_SDHF[0x20];                                  // 0x0038(0x0020) MISSED OFFSET (PADDING)

	public:
		bool GetLargeTextEnabled();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIManagers.UIDataManager
	 * Size -> 0x0140 (FullSize[0x0178] - InheritedSize[0x0038])
	 */
	class UUIDataManager : public UGameInstanceSubsystem
	{
	public:
		TMap<EItemRarity, class UMaterialInterface*>               RarityMaterialMap;                                       // 0x0038(0x0050) Transient, NativeAccessSpecifierPublic
		TMap<class FString, struct FTextBlockStyle>                RichTextStyleMap;                                        // 0x0088(0x0050) Transient, NativeAccessSpecifierPublic
		TMap<ECurrencyType, struct FCurrencyProgressionUIData>     CurrencyUIDataMap;                                       // 0x00D8(0x0050) Transient, NativeAccessSpecifierPublic
		TMap<EProgressionType, struct FCurrencyProgressionUIData>  ProgressionUIDataMap;                                    // 0x0128(0x0050) Transient, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIManagers.UIScaleManager
	 * Size -> 0x00A8 (FullSize[0x00E0] - InheritedSize[0x0038])
	 */
	class UUIScaleManager : public UGameInstanceSubsystem
	{
	public:
		class UDataTable*                                          _dpiScaleCurveDB;                                        // 0x0038(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         _dpiScaleCurve;                                          // 0x0040(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FB1U[0x98];                                  // 0x0048(0x0098) MISSED OFFSET (PADDING)

	public:
		float GetSkillCheckScaleFactor();
		float GetScaleFactor(EScaleType Type);
		float GetMenuScaleFactor();
		float GetHudScaleFactor();
		EDPIScaleCurveRatio GetDPIScaleCurveRatio();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
