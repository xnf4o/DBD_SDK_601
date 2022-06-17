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
	 * Class AudioCapture.AudioCapture
	 * Size -> 0x0008 (FullSize[0x00B8] - InheritedSize[0x00B0])
	 */
	class UAudioCapture : public UAudioGenerator
	{
	public:
		unsigned char                                              UnknownData_O6JS[0x8];                                   // 0x00B0(0x0008) MISSED OFFSET (PADDING)

	public:
		void StopCapturingAudio();
		void StartCapturingAudio();
		bool IsCapturingAudio();
		bool GetAudioCaptureDeviceInfo(struct FAudioCaptureDeviceInfo* OutInfo);
		static UClass* StaticClass();
	};

	/**
	 * Class AudioCapture.AudioCaptureFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UAudioCaptureFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		class UAudioCapture* STATIC_CreateAudioCapture();
		static UClass* StaticClass();
	};

	/**
	 * Class AudioCapture.AudioCaptureComponent
	 * Size -> 0x00C0 (FullSize[0x07A0] - InheritedSize[0x06E0])
	 */
	class UAudioCaptureComponent : public USynthComponent
	{
	public:
		int32_t                                                    JitterLatencyFrames;                                     // 0x06E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3QL0[0xBC];                                  // 0x06E4(0x00BC) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
