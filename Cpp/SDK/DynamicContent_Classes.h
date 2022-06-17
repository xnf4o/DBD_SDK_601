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
	 * Class DynamicContent.AsyncTaskDownloadCacheImage
	 * Size -> 0x0030 (FullSize[0x0068] - InheritedSize[0x0038])
	 */
	class UAsyncTaskDownloadCacheImage : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFail;                                                  // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FString                                              _url;                                                    // 0x0058(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DynamicContent.DownloadingTextureTask
	 * Size -> 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
	 */
	class UDownloadingTextureTask : public UObject
	{
	public:
		class UAsyncTaskDownloadCacheImage*                        _downloadingTask;                                        // 0x0030(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              _url;                                                    // 0x0038(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LPE0[0x18];                                  // 0x0048(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2DDynamic*                                   _downloadedTexture;                                      // 0x0060(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnDownloadSucceeded(class UTexture2DDynamic* textureDownloaded);
		void OnDownloadFailed(class UTexture2DDynamic* textureDownloaded);
		static UClass* StaticClass();
	};

	/**
	 * Class DynamicContent.DownloadMultiTextureTask
	 * Size -> 0x0080 (FullSize[0x00B0] - InheritedSize[0x0030])
	 */
	class UDownloadMultiTextureTask : public UObject
	{
	public:
		TArray<class UDownloadingTextureTask*>                     _downloadingTasks;                                       // 0x0030(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_HX6A[0x18];                                  // 0x0040(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FName, class UTexture2DDynamic*>                _downloadedTextures;                                     // 0x0058(0x0050) Transient, NativeAccessSpecifierPrivate
		int32_t                                                    _remainingTasks;                                         // 0x00A8(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LFZ3[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (PADDING)

	public:
		void OnTextureDownloadComplete(class UDownloadingTextureTask* taskCompleted);
		static UClass* StaticClass();
	};

	/**
	 * Class DynamicContent.DynamicContentHolder
	 * Size -> 0x01C8 (FullSize[0x0200] - InheritedSize[0x0038])
	 */
	class UDynamicContentHolder : public UGameInstanceSubsystem
	{
	public:
		unsigned char                                              UnknownData_SQFO[0x138];                                 // 0x0038(0x0138) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLRUTextureCache                                    _loadedTextures;                                         // 0x0170(0x0068) Transient, NativeAccessSpecifierPrivate
		TArray<struct FTaskContainer>                              _currentTasks;                                           // 0x01D8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		class ULoopBannerProvider*                                 _marketingBannerProvider;                                // 0x01E8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ULoopBannerProvider*                                 _eventsBannerProvider;                                   // 0x01F0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ULoadingImagesDataProvider*                          _loadingImagesDataProvider;                              // 0x01F8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnDownloadingTaskComplete(class UDownloadMultiTextureTask* completeTask);
		static UClass* StaticClass();
	};

	/**
	 * Class DynamicContent.LoadingImagesDataProvider
	 * Size -> 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
	 */
	class ULoadingImagesDataProvider : public UObject
	{
	public:
		TMap<class FName, struct FLoadingImages>                   _cachedLoadingImages;                                    // 0x0030(0x0050) Transient, NativeAccessSpecifierPrivate
		class UDynamicContentHolder*                               _owningDynamicContentHolder;                             // 0x0080(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DynamicContent.LoopBannerProvider
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class ULoopBannerProvider : public UObject
	{
	public:
		unsigned char                                              UnknownData_0UD8[0x10];                                  // 0x0030(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    _currentLoopIndex;                                       // 0x0040(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Y8AH[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
