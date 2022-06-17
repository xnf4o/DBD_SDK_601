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
	 * Class OpenColorIO.OpenColorIOBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UOpenColorIOBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_ApplyColorSpaceTransform(class UObject* WorldContextObject, const struct FOpenColorIOColorConversionSettings& ConversionSettings, class UTexture* InputTexture, class UTextureRenderTarget2D* OutputRenderTarget);
		static UClass* StaticClass();
	};

	/**
	 * Class OpenColorIO.OpenColorIOColorTransform
	 * Size -> 0x0070 (FullSize[0x00A0] - InheritedSize[0x0030])
	 */
	class UOpenColorIOColorTransform : public UObject
	{
	public:
		class UOpenColorIOConfiguration*                           ConfigurationOwner;                                      // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SourceColorSpace;                                        // 0x0038(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DestinationColorSpace;                                   // 0x0048(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FNYD[0x48];                                  // 0x0058(0x0048) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OpenColorIO.OpenColorIOConfiguration
	 * Size -> 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
	 */
	class UOpenColorIOConfiguration : public UObject
	{
	public:
		struct FFilePath                                           ConfigurationFile;                                       // 0x0030(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<struct FOpenColorIOColorSpace>                      DesiredColorSpaces;                                      // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UOpenColorIOColorTransform*>                  ColorTransforms;                                         // 0x0050(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_C16B[0x28];                                  // 0x0060(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OpenColorIO.OpenColorIODisplayExtensionWrapper
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UOpenColorIODisplayExtensionWrapper : public UObject
	{
	public:
		unsigned char                                              UnknownData_G89L[0x10];                                  // 0x0030(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetSceneExtensionIsActiveFunctions(TArray<struct FSceneViewExtensionIsActiveFunctor> IsActiveFunctions);
		void SetSceneExtensionIsActiveFunction(const struct FSceneViewExtensionIsActiveFunctor& IsActiveFunction);
		void SetOpenColorIOConfiguration(const struct FOpenColorIODisplayConfiguration& InDisplayConfiguration);
		void RemoveSceneExtension();
		class UOpenColorIODisplayExtensionWrapper* STATIC_CreateOpenColorIODisplayExtension(const struct FOpenColorIODisplayConfiguration& InDisplayConfiguration, const struct FSceneViewExtensionIsActiveFunctor& IsActiveFunction);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
