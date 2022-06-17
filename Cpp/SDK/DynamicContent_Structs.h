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
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct DynamicContent.LRUTextureCache
	 * Size -> 0x0068
	 */
	struct FLRUTextureCache
	{
	public:
		unsigned char                                              UnknownData_ODBU[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FName, class UTexture2DDynamic*>                _cachedTextures;                                         // 0x0010(0x0050) Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KUZF[0x8];                                   // 0x0060(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DynamicContent.TaskContainer
	 * Size -> 0x0018
	 */
	struct FTaskContainer
	{
	public:
		class UDownloadMultiTextureTask*                           DownloadTask;                                            // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4GRF[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DynamicContent.LoadingImagesHintInfo
	 * Size -> 0x00C8
	 */
	struct FLoadingImagesHintInfo
	{
	public:
		class FText                                                Title;                                                   // 0x0000(0x0018) Transient, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0018(0x0018) Transient, NativeAccessSpecifierPublic
		struct FSlateBrush                                         Icon;                                                    // 0x0030(0x0090) Transient, NativeAccessSpecifierPublic
		bool                                                       IsAvailableForKiller;                                    // 0x00C0(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsAvailableForSurvivor;                                  // 0x00C1(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MAM5[0x6];                                   // 0x00C2(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DynamicContent.LoadingImages
	 * Size -> 0x0038
	 */
	struct FLoadingImages
	{
	public:
		class FName                                                ID;                                                      // 0x0000(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1T8R[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSlateBrush>                                 Images;                                                  // 0x0010(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<struct FLoadingImagesHintInfo>                      ImagesHintInfo;                                          // 0x0020(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		bool                                                       IsAvailableForSurvivor;                                  // 0x0030(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsAvailableForKiller;                                    // 0x0031(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsGenericImages;                                         // 0x0032(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_83I0[0x5];                                   // 0x0033(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DynamicContent.BaseBannerData
	 * Size -> 0x0038
	 */
	struct FBaseBannerData
	{
	public:
		unsigned char                                              UnknownData_X7XJ[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Priority;                                                // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TYUJ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                TitleId;                                                 // 0x0010(0x0018) Transient, NativeAccessSpecifierPublic
		class FString                                              BannerContentId;                                         // 0x0028(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamicContent.MarketingBannerData
	 * Size -> 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
	 */
	struct FMarketingBannerData : public FBaseBannerData
	{
	public:
		class FText                                                SubTitleId;                                              // 0x0038(0x0018) Transient, NativeAccessSpecifierPublic
		class FString                                              DeepLink;                                                // 0x0050(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
