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
	 * Class MediaIOCore.MediaOutput
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UMediaOutput : public UObject
	{
	public:
		int32_t                                                    NumberOfTextureBuffers;                                  // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZHVO[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)

	public:
		bool Validate(class FString* OutFailureReason);
		class UMediaCapture* CreateMediaCapture();
		static UClass* StaticClass();
	};

	/**
	 * Class MediaIOCore.MediaCapture
	 * Size -> 0x00E0 (FullSize[0x0110] - InheritedSize[0x0030])
	 */
	class UMediaCapture : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnStateChanged;                                          // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HLR8[0x18];                                  // 0x0040(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMediaOutput*                                        MediaOutput;                                             // 0x0058(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_HG03[0x20];                                  // 0x0060(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTextureRenderTarget2D*                              CapturingRenderTarget;                                   // 0x0080(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SJ15[0x88];                                  // 0x0088(0x0088) MISSED OFFSET (PADDING)

	public:
		bool UpdateTextureRenderTarget2D(class UTextureRenderTarget2D* RenderTarget);
		void StopCapture(bool bAllowPendingFrameToBeProcess);
		void SetMediaOutput(class UMediaOutput* InMediaOutput);
		EMediaCaptureState GetState();
		struct FIntPoint GetDesiredSize();
		EPixelFormat GetDesiredPixelFormat();
		bool CaptureTextureRenderTarget2D(class UTextureRenderTarget2D* RenderTarget, const struct FMediaCaptureOptions& CaptureOptions);
		bool CaptureActiveSceneViewport(const struct FMediaCaptureOptions& CaptureOptions);
		static UClass* StaticClass();
	};

	/**
	 * Class MediaIOCore.FileMediaCapture
	 * Size -> 0x0070 (FullSize[0x0180] - InheritedSize[0x0110])
	 */
	class UFileMediaCapture : public UMediaCapture
	{
	public:
		unsigned char                                              UnknownData_1HA1[0x70];                                  // 0x0110(0x0070) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MediaIOCore.FileMediaOutput
	 * Size -> 0x00A8 (FullSize[0x00E0] - InheritedSize[0x0038])
	 */
	class UFileMediaOutput : public UMediaOutput
	{
	public:
		unsigned char                                              UnknownData_P2ZU[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FImageWriteOptions                                  WriteOptions;                                            // 0x0040(0x0060) Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FDirectoryPath                                      FilePath;                                                // 0x00A0(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              BaseFileName;                                            // 0x00B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideDesiredSize;                                    // 0x00C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PVXG[0x3];                                   // 0x00C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FIntPoint                                           DesiredSize;                                             // 0x00C4(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverridePixelFormat;                                    // 0x00CC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8GU9[0x3];                                   // 0x00CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EFileMediaOutputPixelFormat                                DesiredPixelFormat;                                      // 0x00D0(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XY8Q[0x3];                                   // 0x00CD(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_4P9L[0xC];                                   // 0x00D4(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
