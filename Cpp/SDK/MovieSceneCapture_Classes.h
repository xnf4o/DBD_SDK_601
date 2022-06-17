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
	 * Class MovieSceneCapture.MovieSceneCaptureProtocolBase
	 * Size -> 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
	 */
	class UMovieSceneCaptureProtocolBase : public UObject
	{
	public:
		unsigned char                                              UnknownData_7LAW[0x28];                                  // 0x0030(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EMovieSceneCaptureProtocolState                            State;                                                   // 0x0058(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QO2A[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (PADDING)

	public:
		bool IsCapturing();
		EMovieSceneCaptureProtocolState GetState();
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneCapture.MovieSceneAudioCaptureProtocolBase
	 * Size -> 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
	 */
	class UMovieSceneAudioCaptureProtocolBase : public UMovieSceneCaptureProtocolBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneCapture.NullAudioCaptureProtocol
	 * Size -> 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
	 */
	class UNullAudioCaptureProtocol : public UMovieSceneAudioCaptureProtocolBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneCapture.MasterAudioSubmixCaptureProtocol
	 * Size -> 0x0038 (FullSize[0x0098] - InheritedSize[0x0060])
	 */
	class UMasterAudioSubmixCaptureProtocol : public UMovieSceneAudioCaptureProtocolBase
	{
	public:
		class FString                                              Filename;                                                // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_3UNM[0x28];                                  // 0x0070(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneCapture.MovieSceneImageCaptureProtocolBase
	 * Size -> 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
	 */
	class UMovieSceneImageCaptureProtocolBase : public UMovieSceneCaptureProtocolBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneCapture.CompositionGraphCaptureProtocol
	 * Size -> 0x0070 (FullSize[0x00D0] - InheritedSize[0x0060])
	 */
	class UCompositionGraphCaptureProtocol : public UMovieSceneImageCaptureProtocolBase
	{
	public:
		struct FCompositionGraphCapturePasses                      IncludeRenderPasses;                                     // 0x0060(0x0010) Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic
		bool                                                       bCaptureFramesInHDR;                                     // 0x0070(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1ZM1[0x3];                                   // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    HDRCompressionQuality;                                   // 0x0074(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHDRCaptureGamut                                           CaptureGamut;                                            // 0x0078(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HZ24[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftObjectPath                                     PostProcessingMaterial;                                  // 0x0080(0x0020) Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisableScreenPercentage;                                // 0x00A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OW11[0x7];                                   // 0x00A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  PostProcessingMaterialPtr;                               // 0x00A8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CRT8[0x20];                                  // 0x00B0(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneCapture.FrameGrabberProtocol
	 * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
	 */
	class UFrameGrabberProtocol : public UMovieSceneImageCaptureProtocolBase
	{
	public:
		unsigned char                                              UnknownData_X8Q0[0x10];                                  // 0x0060(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneCapture.ImageSequenceProtocol
	 * Size -> 0x0070 (FullSize[0x00E0] - InheritedSize[0x0070])
	 */
	class UImageSequenceProtocol : public UFrameGrabberProtocol
	{
	public:
		unsigned char                                              UnknownData_V7GE[0x70];                                  // 0x0070(0x0070) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneCapture.CompressedImageSequenceProtocol
	 * Size -> 0x0008 (FullSize[0x00E8] - InheritedSize[0x00E0])
	 */
	class UCompressedImageSequenceProtocol : public UImageSequenceProtocol
	{
	public:
		int32_t                                                    CompressionQuality;                                      // 0x00E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NVDD[0x4];                                   // 0x00E4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneCapture.ImageSequenceProtocol_BMP
	 * Size -> 0x0000 (FullSize[0x00E0] - InheritedSize[0x00E0])
	 */
	class UImageSequenceProtocol_BMP : public UImageSequenceProtocol
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneCapture.ImageSequenceProtocol_PNG
	 * Size -> 0x0000 (FullSize[0x00E8] - InheritedSize[0x00E8])
	 */
	class UImageSequenceProtocol_PNG : public UCompressedImageSequenceProtocol
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneCapture.ImageSequenceProtocol_JPG
	 * Size -> 0x0000 (FullSize[0x00E8] - InheritedSize[0x00E8])
	 */
	class UImageSequenceProtocol_JPG : public UCompressedImageSequenceProtocol
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneCapture.ImageSequenceProtocol_EXR
	 * Size -> 0x0010 (FullSize[0x00F0] - InheritedSize[0x00E0])
	 */
	class UImageSequenceProtocol_EXR : public UImageSequenceProtocol
	{
	public:
		bool                                                       bCompressed;                                             // 0x00E0(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHDRCaptureGamut                                           CaptureGamut;                                            // 0x00E1(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CQ4A[0xE];                                   // 0x00E2(0x000E) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneCapture.MovieSceneCaptureInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UMovieSceneCaptureInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneCapture.MovieSceneCapture
	 * Size -> 0x0208 (FullSize[0x0238] - InheritedSize[0x0030])
	 */
	class UMovieSceneCapture : public UObject
	{
	public:
		unsigned char                                              UnknownData_64WF[0x10];                                  // 0x0030(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftClassPath                                      ImageCaptureProtocolType;                                // 0x0040(0x0020) Edit, ZeroConstructor, Config, NoClear, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftClassPath                                      AudioCaptureProtocolType;                                // 0x0060(0x0020) Edit, ZeroConstructor, Config, NoClear, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMovieSceneImageCaptureProtocolBase*                 ImageCaptureProtocol;                                    // 0x0080(0x0008) Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMovieSceneAudioCaptureProtocolBase*                 AudioCaptureProtocol;                                    // 0x0088(0x0008) Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMovieSceneCaptureSettings                          Settings;                                                // 0x0090(0x0070) Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic
		bool                                                       bUseSeparateProcess;                                     // 0x0100(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCloseEditorWhenCaptureStarts;                           // 0x0101(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IJWD[0x6];                                   // 0x0102(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              AdditionalCommandLineArguments;                          // 0x0108(0x0010) Edit, BlueprintVisible, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              InheritedCommandLineArguments;                           // 0x0118(0x0010) Edit, BlueprintVisible, ZeroConstructor, Transient, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YYD8[0x110];                                 // 0x0128(0x0110) MISSED OFFSET (PADDING)

	public:
		void SetImageCaptureProtocolType(class UClass* ProtocolType);
		void SetAudioCaptureProtocolType(class UClass* ProtocolType);
		class UMovieSceneCaptureProtocolBase* GetImageCaptureProtocol();
		class UMovieSceneCaptureProtocolBase* GetAudioCaptureProtocol();
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneCapture.LevelCapture
	 * Size -> 0x0020 (FullSize[0x0258] - InheritedSize[0x0238])
	 */
	class ULevelCapture : public UMovieSceneCapture
	{
	public:
		bool                                                       bAutoStartCapture;                                       // 0x0238(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SBMR[0xB];                                   // 0x0239(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               PrerequisiteActorId;                                     // 0x0244(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_W34K[0x4];                                   // 0x0254(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneCapture.MovieSceneCaptureEnvironment
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UMovieSceneCaptureEnvironment : public UObject
	{
	public:
		bool STATIC_IsCaptureInProgress();
		int32_t STATIC_GetCaptureFrameNumber();
		float STATIC_GetCaptureElapsedTime();
		class UMovieSceneImageCaptureProtocolBase* STATIC_FindImageCaptureProtocol();
		class UMovieSceneAudioCaptureProtocolBase* STATIC_FindAudioCaptureProtocol();
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneCapture.UserDefinedCaptureProtocol
	 * Size -> 0x0080 (FullSize[0x00E0] - InheritedSize[0x0060])
	 */
	class UUserDefinedCaptureProtocol : public UMovieSceneImageCaptureProtocolBase
	{
	public:
		class UWorld*                                              World;                                                   // 0x0060(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GL2E[0x78];                                  // 0x0068(0x0078) MISSED OFFSET (PADDING)

	public:
		void StopCapturingFinalPixels();
		void StartCapturingFinalPixels(const struct FCapturedPixelsID& StreamID);
		void ResolveBuffer(class UTexture* Buffer, const struct FCapturedPixelsID& BufferID);
		void OnWarmUp();
		void OnTick();
		void OnStartCapture();
		bool OnSetup();
		void OnPreTick();
		void OnPixelsReceived(const struct FCapturedPixels& Pixels, const struct FCapturedPixelsID& ID, const struct FFrameMetrics& FrameMetrics);
		void OnPauseCapture();
		void OnFinalize();
		void OnCaptureFrame();
		bool OnCanFinalize();
		void OnBeginFinalize();
		struct FFrameMetrics GetCurrentFrameMetrics();
		class FString GenerateFilename(const struct FFrameMetrics& InFrameMetrics);
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneCapture.UserDefinedImageCaptureProtocol
	 * Size -> 0x0008 (FullSize[0x00E8] - InheritedSize[0x00E0])
	 */
	class UUserDefinedImageCaptureProtocol : public UUserDefinedCaptureProtocol
	{
	public:
		EDesiredImageFormat                                        Format;                                                  // 0x00E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableCompression;                                      // 0x00E1(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7TCY[0x2];                                   // 0x00E2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CompressionQuality;                                      // 0x00E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void WriteImageToDisk(const struct FCapturedPixels& PixelData, const struct FCapturedPixelsID& StreamID, const struct FFrameMetrics& FrameMetrics, bool bCopyImageData);
		class FString GenerateFilenameForCurrentFrame();
		class FString GenerateFilenameForBuffer(class UTexture* Buffer, const struct FCapturedPixelsID& StreamID);
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneCapture.VideoCaptureProtocol
	 * Size -> 0x0018 (FullSize[0x0088] - InheritedSize[0x0070])
	 */
	class UVideoCaptureProtocol : public UFrameGrabberProtocol
	{
	public:
		bool                                                       bUseCompression;                                         // 0x0070(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1T7E[0x3];                                   // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CompressionQuality;                                      // 0x0074(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y02L[0x10];                                  // 0x0078(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
