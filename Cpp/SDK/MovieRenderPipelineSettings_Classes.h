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
	 * Class MovieRenderPipelineSettings.MoviePipelineBurnInSetting
	 * Size -> 0x0060 (FullSize[0x00B0] - InheritedSize[0x0050])
	 */
	class UMoviePipelineBurnInSetting : public UMoviePipelineRenderPass
	{
	public:
		struct FSoftClassPath                                      BurnInClass;                                             // 0x0050(0x0020) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCompositeOntoFinalImage;                                // 0x0070(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AT0H[0x2F];                                  // 0x0071(0x002F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTextureRenderTarget2D*                              RenderTarget;                                            // 0x00A0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMoviePipelineBurnInWidget*                          BurnInWidgetInstance;                                    // 0x00A8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineSettings.MoviePipelineBurnInWidget
	 * Size -> 0x0000 (FullSize[0x0298] - InheritedSize[0x0298])
	 */
	class UMoviePipelineBurnInWidget : public UUserWidget
	{
	public:
		void OnOutputFrameStarted(class UMoviePipeline* ForPipeline);
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineSettings.MoviePipelineConsoleVariableSetting
	 * Size -> 0x0080 (FullSize[0x00D0] - InheritedSize[0x0050])
	 */
	class UMoviePipelineConsoleVariableSetting : public UMoviePipelineSetting
	{
	public:
		TMap<class FString, float>                                 ConsoleVariables;                                        // 0x0050(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<class FString>                                      StartConsoleCommands;                                    // 0x00A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      EndConsoleCommands;                                      // 0x00B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U3M6[0x10];                                  // 0x00C0(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineSettings.MoviePipelineWidgetRenderer
	 * Size -> 0x0020 (FullSize[0x0070] - InheritedSize[0x0050])
	 */
	class UMoviePipelineWidgetRenderer : public UMoviePipelineRenderPass
	{
	public:
		bool                                                       bCompositeOntoFinalImage;                                // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8KPW[0x17];                                  // 0x0051(0x0017) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTextureRenderTarget2D*                              RenderTarget;                                            // 0x0068(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
