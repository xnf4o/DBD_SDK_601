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
	 * Class MovieSceneTracks.MovieSceneCameraShakeEvaluator
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UMovieSceneCameraShakeEvaluator : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieScenePropertyTrack
	 * Size -> 0x0038 (FullSize[0x00D0] - InheritedSize[0x0098])
	 */
	class UMovieScenePropertyTrack : public UMovieSceneNameableTrack
	{
	public:
		class UMovieSceneSection*                                  SectionToKey;                                            // 0x0098(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FMovieScenePropertyBinding                          PropertyBinding;                                         // 0x00A0(0x001C) NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_W3TP[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMovieSceneSection*>                          Sections;                                                // 0x00C0(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.ByteChannelEvaluatorSystem
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UByteChannelEvaluatorSystem : public UMovieSceneEntitySystem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.FloatChannelEvaluatorSystem
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UFloatChannelEvaluatorSystem : public UMovieSceneEntitySystem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneTransformOrigin
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UMovieSceneTransformOrigin : public UInterface
	{
	public:
		struct FTransform BP_GetTransformOrigin();
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.IntegerChannelEvaluatorSystem
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UIntegerChannelEvaluatorSystem : public UMovieSceneEntitySystem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieScene3DConstraintSection
	 * Size -> 0x0028 (FullSize[0x0118] - InheritedSize[0x00F0])
	 */
	class UMovieScene3DConstraintSection : public UMovieSceneSection
	{
	public:
		struct FGuid                                               ConstraintId;                                            // 0x00F0(0x0010) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FMovieSceneObjectBindingID                          ConstraintBindingID;                                     // 0x0100(0x0018) Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SetConstraintBindingID(const struct FMovieSceneObjectBindingID& InConstraintBindingID);
		struct FMovieSceneObjectBindingID GetConstraintBindingID();
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieScene3DAttachSection
	 * Size -> 0x0028 (FullSize[0x0140] - InheritedSize[0x0118])
	 */
	class UMovieScene3DAttachSection : public UMovieScene3DConstraintSection
	{
	public:
		unsigned char                                              UnknownData_A9DP[0x8];                                   // 0x0118(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                AttachSocketName;                                        // 0x0120(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                AttachComponentName;                                     // 0x012C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAttachmentRule                                            AttachmentLocationRule;                                  // 0x0138(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAttachmentRule                                            AttachmentRotationRule;                                  // 0x0139(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAttachmentRule                                            AttachmentScaleRule;                                     // 0x013A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDetachmentRule                                            DetachmentLocationRule;                                  // 0x013B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDetachmentRule                                            DetachmentRotationRule;                                  // 0x013C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDetachmentRule                                            DetachmentScaleRule;                                     // 0x013D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5BM8[0x2];                                   // 0x013E(0x0002) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieScene3DConstraintTrack
	 * Size -> 0x0010 (FullSize[0x00A8] - InheritedSize[0x0098])
	 */
	class UMovieScene3DConstraintTrack : public UMovieSceneTrack
	{
	public:
		TArray<class UMovieSceneSection*>                          ConstraintSections;                                      // 0x0098(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieScene3DAttachTrack
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UMovieScene3DAttachTrack : public UMovieScene3DConstraintTrack
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieScene3DPathSection
	 * Size -> 0x00A8 (FullSize[0x01C0] - InheritedSize[0x0118])
	 */
	class UMovieScene3DPathSection : public UMovieScene3DConstraintSection
	{
	public:
		struct FMovieSceneFloatChannel                             TimingCurve;                                             // 0x0118(0x00A0) NativeAccessSpecifierPublic
		EMovieScene3DPathSection_Axis                              FrontAxisEnum;                                           // 0x01B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMovieScene3DPathSection_Axis                              UpAxisEnum;                                              // 0x01B9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3LS7[0x2];                                   // 0x01BA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bFollow : 1;                                             // 0x01BC(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bReverse : 1;                                            // 0x01BC(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bForceUpright : 1;                                       // 0x01BC(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_75XM[0x3];                                   // 0x01BD(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieScene3DPathTrack
	 * Size -> 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
	 */
	class UMovieScene3DPathTrack : public UMovieScene3DConstraintTrack
	{
	public:
		unsigned char                                              UnknownData_50UK[0x8];                                   // 0x00A8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieScenePropertySystem
	 * Size -> 0x0018 (FullSize[0x0060] - InheritedSize[0x0048])
	 */
	class UMovieScenePropertySystem : public UMovieSceneEntitySystem
	{
	public:
		unsigned char                                              UnknownData_P0U6[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMovieScenePropertyInstantiatorSystem*               InstantiatorSystem;                                      // 0x0050(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_OLZ5[0x8];                                   // 0x0058(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieScene3DTransformPropertySystem
	 * Size -> 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
	 */
	class UMovieScene3DTransformPropertySystem : public UMovieScenePropertySystem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieScene3DTransformSection
	 * Size -> 0x0658 (FullSize[0x0748] - InheritedSize[0x00F0])
	 */
	class UMovieScene3DTransformSection : public UMovieSceneSection
	{
	public:
		unsigned char                                              UnknownData_EPMI[0x8];                                   // 0x00F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneTransformMask                            TransformMask;                                           // 0x00F8(0x0004) NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ZPGA[0x4];                                   // 0x00FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneFloatChannel                             Translation[0x3];                                        // 0x0100(0x01E0) NativeAccessSpecifierPrivate
		struct FMovieSceneFloatChannel                             Rotation[0x3];                                           // 0x02E0(0x01E0) NativeAccessSpecifierPrivate
		struct FMovieSceneFloatChannel                             Scale[0x3];                                              // 0x04C0(0x01E0) NativeAccessSpecifierPrivate
		struct FMovieSceneFloatChannel                             ManualWeight;                                            // 0x06A0(0x00A0) NativeAccessSpecifierPrivate
		bool                                                       bUseQuaternionInterpolation;                             // 0x0740(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_56VN[0x7];                                   // 0x0741(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieScene3DTransformTrack
	 * Size -> 0x0000 (FullSize[0x00D0] - InheritedSize[0x00D0])
	 */
	class UMovieScene3DTransformTrack : public UMovieScenePropertyTrack
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneActorReferenceSection
	 * Size -> 0x0148 (FullSize[0x0238] - InheritedSize[0x00F0])
	 */
	class UMovieSceneActorReferenceSection : public UMovieSceneSection
	{
	public:
		struct FMovieSceneActorReferenceData                       ActorReferenceData;                                      // 0x00F0(0x00B8) NativeAccessSpecifierPrivate
		struct FIntegralCurve                                      ActorGuidIndexCurve;                                     // 0x01A8(0x0080) Deprecated, NativeAccessSpecifierPrivate
		TArray<class FString>                                      ActorGuidStrings;                                        // 0x0228(0x0010) ZeroConstructor, Deprecated, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneActorReferenceTrack
	 * Size -> 0x0008 (FullSize[0x00D8] - InheritedSize[0x00D0])
	 */
	class UMovieSceneActorReferenceTrack : public UMovieScenePropertyTrack
	{
	public:
		unsigned char                                              UnknownData_P01E[0x8];                                   // 0x00D0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneAudioSection
	 * Size -> 0x0260 (FullSize[0x0350] - InheritedSize[0x00F0])
	 */
	class UMovieSceneAudioSection : public UMovieSceneSection
	{
	public:
		class USoundBase*                                          Sound;                                                   // 0x00F0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FFrameNumber                                        StartFrameOffset;                                        // 0x00F8(0x0004) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      StartOffset;                                             // 0x00FC(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      AudioStartTime;                                          // 0x0100(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      AudioDilationFactor;                                     // 0x0104(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      AudioVolume;                                             // 0x0108(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_PKET[0x4];                                   // 0x010C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneFloatChannel                             SoundVolume;                                             // 0x0110(0x00A0) NativeAccessSpecifierPrivate
		struct FMovieSceneFloatChannel                             PitchMultiplier;                                         // 0x01B0(0x00A0) NativeAccessSpecifierPrivate
		struct FMovieSceneActorReferenceData                       AttachActorData;                                         // 0x0250(0x00B8) NativeAccessSpecifierPrivate
		bool                                                       bLooping;                                                // 0x0308(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bSuppressSubtitles;                                      // 0x0309(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bOverrideAttenuation;                                    // 0x030A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SOL0[0x5];                                   // 0x030B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundAttenuation*                                   AttenuationSettings;                                     // 0x0310(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FScriptDelegate                                      OnQueueSubtitles;                                        // 0x0318(0x0010) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_W0YL[0x4];                                   // 0x0318(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_8W0B[0x4];                                   // 0x032C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnAudioFinished;                                         // 0x0330(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnAudioPlaybackPercent;                                  // 0x0340(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPrivate

	public:
		void SetStartOffset(const struct FFrameNumber& InStartOffset);
		void SetSound(class USoundBase* InSound);
		struct FFrameNumber GetStartOffset();
		class USoundBase* GetSound();
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneAudioTrack
	 * Size -> 0x0018 (FullSize[0x00B0] - InheritedSize[0x0098])
	 */
	class UMovieSceneAudioTrack : public UMovieSceneNameableTrack
	{
	public:
		unsigned char                                              UnknownData_UZJV[0x8];                                   // 0x0098(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMovieSceneSection*>                          AudioSections;                                           // 0x00A0(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneBaseValueEvaluatorSystem
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UMovieSceneBaseValueEvaluatorSystem : public UMovieSceneEntitySystem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneBoolPropertySystem
	 * Size -> 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
	 */
	class UMovieSceneBoolPropertySystem : public UMovieScenePropertySystem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneBoolTrack
	 * Size -> 0x0008 (FullSize[0x00D8] - InheritedSize[0x00D0])
	 */
	class UMovieSceneBoolTrack : public UMovieScenePropertyTrack
	{
	public:
		unsigned char                                              UnknownData_0P3P[0x8];                                   // 0x00D0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneBytePropertySystem
	 * Size -> 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
	 */
	class UMovieSceneBytePropertySystem : public UMovieScenePropertySystem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneByteSection
	 * Size -> 0x00A0 (FullSize[0x0190] - InheritedSize[0x00F0])
	 */
	class UMovieSceneByteSection : public UMovieSceneSection
	{
	public:
		unsigned char                                              UnknownData_YGSZ[0x8];                                   // 0x00F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneByteChannel                              ByteCurve;                                               // 0x00F8(0x0098) NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneByteTrack
	 * Size -> 0x0008 (FullSize[0x00D8] - InheritedSize[0x00D0])
	 */
	class UMovieSceneByteTrack : public UMovieScenePropertyTrack
	{
	public:
		class UEnum*                                               Enum;                                                    // 0x00D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneCameraAnimSection
	 * Size -> 0x0040 (FullSize[0x0130] - InheritedSize[0x00F0])
	 */
	class UMovieSceneCameraAnimSection : public UMovieSceneSection
	{
	public:
		struct FMovieSceneCameraAnimSectionData                    AnimData;                                                // 0x00F0(0x0020) Edit, NoDestructor, NativeAccessSpecifierPublic
		class UCameraAnim*                                         CameraAnim;                                              // 0x0110(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      PlayRate;                                                // 0x0118(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      PlayScale;                                               // 0x011C(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      BlendInTime;                                             // 0x0120(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      BlendOutTime;                                            // 0x0124(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bLooping;                                                // 0x0128(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0OL7[0x7];                                   // 0x0129(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneCameraAnimTrack
	 * Size -> 0x0018 (FullSize[0x00B0] - InheritedSize[0x0098])
	 */
	class UMovieSceneCameraAnimTrack : public UMovieSceneNameableTrack
	{
	public:
		unsigned char                                              UnknownData_7J57[0x8];                                   // 0x0098(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMovieSceneSection*>                          CameraAnimSections;                                      // 0x00A0(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneCameraCutSection
	 * Size -> 0x0080 (FullSize[0x0170] - InheritedSize[0x00F0])
	 */
	class UMovieSceneCameraCutSection : public UMovieSceneSection
	{
	public:
		unsigned char                                              UnknownData_6B6U[0x8];                                   // 0x00F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bLockPreviousCamera;                                     // 0x00F8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MVCL[0x3];                                   // 0x00F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               CameraGuid;                                              // 0x00FC(0x0010) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FMovieSceneObjectBindingID                          CameraBindingID;                                         // 0x010C(0x0018) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_J3HR[0xC];                                   // 0x0124(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          InitialCameraCutTransform;                               // 0x0130(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		bool                                                       bHasInitialCameraCutTransform;                           // 0x0160(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_J39C[0xF];                                   // 0x0161(0x000F) MISSED OFFSET (PADDING)

	public:
		void SetCameraBindingID(const struct FMovieSceneObjectBindingID& InCameraBindingID);
		struct FMovieSceneObjectBindingID GetCameraBindingID();
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneCameraCutTrack
	 * Size -> 0x0018 (FullSize[0x00B0] - InheritedSize[0x0098])
	 */
	class UMovieSceneCameraCutTrack : public UMovieSceneNameableTrack
	{
	public:
		bool                                                       bCanBlend;                                               // 0x0098(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z8US[0x7];                                   // 0x0099(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMovieSceneSection*>                          Sections;                                                // 0x00A0(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneCameraCutTrackInstance
	 * Size -> 0x0068 (FullSize[0x00C0] - InheritedSize[0x0058])
	 */
	class UMovieSceneCameraCutTrackInstance : public UMovieSceneTrackInstance
	{
	public:
		unsigned char                                              UnknownData_VYVY[0x68];                                  // 0x0058(0x0068) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneCameraShakeSection
	 * Size -> 0x0040 (FullSize[0x0130] - InheritedSize[0x00F0])
	 */
	class UMovieSceneCameraShakeSection : public UMovieSceneSection
	{
	public:
		struct FMovieSceneCameraShakeSectionData                   ShakeData;                                               // 0x00F0(0x0020) Edit, NoDestructor, NativeAccessSpecifierPublic
		class UClass*                                              ShakeClass;                                              // 0x0110(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PlayScale;                                               // 0x0118(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECameraShakePlaySpace                                      PlaySpace;                                               // 0x011C(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WQTO[0x3];                                   // 0x011D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            UserDefinedPlaySpace;                                    // 0x0120(0x000C) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4JGL[0x4];                                   // 0x012C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneCameraShakeSourceShakeSection
	 * Size -> 0x0020 (FullSize[0x0110] - InheritedSize[0x00F0])
	 */
	class UMovieSceneCameraShakeSourceShakeSection : public UMovieSceneSection
	{
	public:
		struct FMovieSceneCameraShakeSectionData                   ShakeData;                                               // 0x00F0(0x0020) Edit, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneCameraShakeSourceShakeTrack
	 * Size -> 0x0018 (FullSize[0x00B0] - InheritedSize[0x0098])
	 */
	class UMovieSceneCameraShakeSourceShakeTrack : public UMovieSceneNameableTrack
	{
	public:
		unsigned char                                              UnknownData_JSEJ[0x8];                                   // 0x0098(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMovieSceneSection*>                          CameraShakeSections;                                     // 0x00A0(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneCameraShakeSourceTriggerSection
	 * Size -> 0x0088 (FullSize[0x0178] - InheritedSize[0x00F0])
	 */
	class UMovieSceneCameraShakeSourceTriggerSection : public UMovieSceneSection
	{
	public:
		struct FMovieSceneCameraShakeSourceTriggerChannel          Channel;                                                 // 0x00F0(0x0088) NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneCameraShakeSourceTriggerTrack
	 * Size -> 0x0018 (FullSize[0x00B0] - InheritedSize[0x0098])
	 */
	class UMovieSceneCameraShakeSourceTriggerTrack : public UMovieSceneTrack
	{
	public:
		unsigned char                                              UnknownData_EHR0[0x8];                                   // 0x0098(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMovieSceneSection*>                          Sections;                                                // 0x00A0(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneCameraShakeTrack
	 * Size -> 0x0018 (FullSize[0x00B0] - InheritedSize[0x0098])
	 */
	class UMovieSceneCameraShakeTrack : public UMovieSceneNameableTrack
	{
	public:
		unsigned char                                              UnknownData_PN66[0x8];                                   // 0x0098(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMovieSceneSection*>                          CameraShakeSections;                                     // 0x00A0(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneCinematicShotSection
	 * Size -> 0x0028 (FullSize[0x0198] - InheritedSize[0x0170])
	 */
	class UMovieSceneCinematicShotSection : public UMovieSceneSubSection
	{
	public:
		class FString                                              ShotDisplayName;                                         // 0x0170(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FText                                                DisplayName;                                             // 0x0180(0x0018) Deprecated, NativeAccessSpecifierPrivate

	public:
		void SetShotDisplayName(const class FString& InShotDisplayName);
		class FString GetShotDisplayName();
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneCinematicShotTrack
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UMovieSceneCinematicShotTrack : public UMovieSceneSubTrack
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneColorPropertySystem
	 * Size -> 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
	 */
	class UMovieSceneColorPropertySystem : public UMovieScenePropertySystem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneColorSection
	 * Size -> 0x0288 (FullSize[0x0378] - InheritedSize[0x00F0])
	 */
	class UMovieSceneColorSection : public UMovieSceneSection
	{
	public:
		unsigned char                                              UnknownData_WI6C[0x8];                                   // 0x00F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneFloatChannel                             RedCurve;                                                // 0x00F8(0x00A0) NativeAccessSpecifierPrivate
		struct FMovieSceneFloatChannel                             GreenCurve;                                              // 0x0198(0x00A0) NativeAccessSpecifierPrivate
		struct FMovieSceneFloatChannel                             BlueCurve;                                               // 0x0238(0x00A0) NativeAccessSpecifierPrivate
		struct FMovieSceneFloatChannel                             AlphaCurve;                                              // 0x02D8(0x00A0) NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneColorTrack
	 * Size -> 0x0008 (FullSize[0x00D8] - InheritedSize[0x00D0])
	 */
	class UMovieSceneColorTrack : public UMovieScenePropertyTrack
	{
	public:
		bool                                                       bIsSlateColor;                                           // 0x00D0(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GMEX[0x7];                                   // 0x00D1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneComponentAttachmentInvalidatorSystem
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UMovieSceneComponentAttachmentInvalidatorSystem : public UMovieSceneEntityInstantiatorSystem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneComponentAttachmentSystem
	 * Size -> 0x0180 (FullSize[0x01C8] - InheritedSize[0x0048])
	 */
	class UMovieSceneComponentAttachmentSystem : public UMovieSceneEntityInstantiatorSystem
	{
	public:
		unsigned char                                              UnknownData_40AL[0x180];                                 // 0x0048(0x0180) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneComponentMobilitySystem
	 * Size -> 0x01E0 (FullSize[0x0228] - InheritedSize[0x0048])
	 */
	class UMovieSceneComponentMobilitySystem : public UMovieSceneEntityInstantiatorSystem
	{
	public:
		unsigned char                                              UnknownData_IOL2[0x1E0];                                 // 0x0048(0x01E0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneComponentTransformSystem
	 * Size -> 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
	 */
	class UMovieSceneComponentTransformSystem : public UMovieScenePropertySystem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneDeferredComponentMovementSystem
	 * Size -> 0x0018 (FullSize[0x0060] - InheritedSize[0x0048])
	 */
	class UMovieSceneDeferredComponentMovementSystem : public UMovieSceneEntitySystem
	{
	public:
		unsigned char                                              UnknownData_2Q7E[0x18];                                  // 0x0048(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneEnumPropertySystem
	 * Size -> 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
	 */
	class UMovieSceneEnumPropertySystem : public UMovieScenePropertySystem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneEnumSection
	 * Size -> 0x00A0 (FullSize[0x0190] - InheritedSize[0x00F0])
	 */
	class UMovieSceneEnumSection : public UMovieSceneSection
	{
	public:
		unsigned char                                              UnknownData_DI1A[0x8];                                   // 0x00F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneByteChannel                              EnumCurve;                                               // 0x00F8(0x0098) NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneEnumTrack
	 * Size -> 0x0008 (FullSize[0x00D8] - InheritedSize[0x00D0])
	 */
	class UMovieSceneEnumTrack : public UMovieScenePropertyTrack
	{
	public:
		class UEnum*                                               Enum;                                                    // 0x00D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneEulerTransformPropertySystem
	 * Size -> 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
	 */
	class UMovieSceneEulerTransformPropertySystem : public UMovieScenePropertySystem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneEulerTransformTrack
	 * Size -> 0x0000 (FullSize[0x00D0] - InheritedSize[0x00D0])
	 */
	class UMovieSceneEulerTransformTrack : public UMovieScenePropertyTrack
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneEventSectionBase
	 * Size -> 0x0000 (FullSize[0x00F0] - InheritedSize[0x00F0])
	 */
	class UMovieSceneEventSectionBase : public UMovieSceneSection
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneEventRepeaterSection
	 * Size -> 0x0030 (FullSize[0x0120] - InheritedSize[0x00F0])
	 */
	class UMovieSceneEventRepeaterSection : public UMovieSceneEventSectionBase
	{
	public:
		unsigned char                                              UnknownData_IMAA[0x8];                                   // 0x00F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneEvent                                    Event;                                                   // 0x00F8(0x0028) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneEventSection
	 * Size -> 0x0100 (FullSize[0x01F0] - InheritedSize[0x00F0])
	 */
	class UMovieSceneEventSection : public UMovieSceneSection
	{
	public:
		struct FNameCurve                                          Events;                                                  // 0x00F0(0x0078) Deprecated, NativeAccessSpecifierPrivate
		struct FMovieSceneEventSectionData                         EventData;                                               // 0x0168(0x0088) NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneEventSystem
	 * Size -> 0x0050 (FullSize[0x0098] - InheritedSize[0x0048])
	 */
	class UMovieSceneEventSystem : public UMovieSceneEntitySystem
	{
	public:
		unsigned char                                              UnknownData_IQRF[0x50];                                  // 0x0048(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieScenePreSpawnEventSystem
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UMovieScenePreSpawnEventSystem : public UMovieSceneEventSystem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieScenePostSpawnEventSystem
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UMovieScenePostSpawnEventSystem : public UMovieSceneEventSystem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieScenePostEvalEventSystem
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UMovieScenePostEvalEventSystem : public UMovieSceneEventSystem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneEventTrack
	 * Size -> 0x0028 (FullSize[0x00C0] - InheritedSize[0x0098])
	 */
	class UMovieSceneEventTrack : public UMovieSceneNameableTrack
	{
	public:
		unsigned char                                              UnknownData_M53O[0x10];                                  // 0x0098(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bFireEventsWhenForwards : 1;                             // 0x00A8(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bFireEventsWhenBackwards : 1;                            // 0x00A8(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JDC3[0x3];                                   // 0x00A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EFireEventsAtPosition                                      EventPosition;                                           // 0x00AC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X3Z1[0x3];                                   // 0x00AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMovieSceneSection*>                          Sections;                                                // 0x00B0(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneEventTriggerSection
	 * Size -> 0x0090 (FullSize[0x0180] - InheritedSize[0x00F0])
	 */
	class UMovieSceneEventTriggerSection : public UMovieSceneEventSectionBase
	{
	public:
		unsigned char                                              UnknownData_QDC1[0x8];                                   // 0x00F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneEventChannel                             EventChannel;                                            // 0x00F8(0x0088) NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneFadeSection
	 * Size -> 0x00B8 (FullSize[0x01A8] - InheritedSize[0x00F0])
	 */
	class UMovieSceneFadeSection : public UMovieSceneSection
	{
	public:
		struct FMovieSceneFloatChannel                             FloatCurve;                                              // 0x00F0(0x00A0) NativeAccessSpecifierPublic
		struct FLinearColor                                        FadeColor;                                               // 0x0190(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bFadeAudio : 1;                                          // 0x01A0(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W7H5[0x7];                                   // 0x01A1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneFloatTrack
	 * Size -> 0x0000 (FullSize[0x00D0] - InheritedSize[0x00D0])
	 */
	class UMovieSceneFloatTrack : public UMovieScenePropertyTrack
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneFadeTrack
	 * Size -> 0x0008 (FullSize[0x00D8] - InheritedSize[0x00D0])
	 */
	class UMovieSceneFadeTrack : public UMovieSceneFloatTrack
	{
	public:
		unsigned char                                              UnknownData_EZHO[0x8];                                   // 0x00D0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneFloatPropertySystem
	 * Size -> 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
	 */
	class UMovieSceneFloatPropertySystem : public UMovieScenePropertySystem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneFloatSection
	 * Size -> 0x00A8 (FullSize[0x0198] - InheritedSize[0x00F0])
	 */
	class UMovieSceneFloatSection : public UMovieSceneSection
	{
	public:
		unsigned char                                              UnknownData_VQFQ[0x8];                                   // 0x00F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneFloatChannel                             FloatCurve;                                              // 0x00F8(0x00A0) Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneHierarchicalBiasSystem
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UMovieSceneHierarchicalBiasSystem : public UMovieSceneEntityInstantiatorSystem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneInitialValueSystem
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UMovieSceneInitialValueSystem : public UMovieSceneEntityInstantiatorSystem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneIntegerPropertySystem
	 * Size -> 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
	 */
	class UMovieSceneIntegerPropertySystem : public UMovieScenePropertySystem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneIntegerSection
	 * Size -> 0x0098 (FullSize[0x0188] - InheritedSize[0x00F0])
	 */
	class UMovieSceneIntegerSection : public UMovieSceneSection
	{
	public:
		unsigned char                                              UnknownData_87I0[0x8];                                   // 0x00F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneIntegerChannel                           IntegerCurve;                                            // 0x00F8(0x0090) NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneIntegerTrack
	 * Size -> 0x0000 (FullSize[0x00D0] - InheritedSize[0x00D0])
	 */
	class UMovieSceneIntegerTrack : public UMovieScenePropertyTrack
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneInterrogatedPropertyInstantiatorSystem
	 * Size -> 0x01A8 (FullSize[0x01F0] - InheritedSize[0x0048])
	 */
	class UMovieSceneInterrogatedPropertyInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem
	{
	public:
		unsigned char                                              UnknownData_9B4F[0x1A8];                                 // 0x0048(0x01A8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneLevelVisibilitySection
	 * Size -> 0x0020 (FullSize[0x0110] - InheritedSize[0x00F0])
	 */
	class UMovieSceneLevelVisibilitySection : public UMovieSceneSection
	{
	public:
		unsigned char                                              UnknownData_TZQ3[0x8];                                   // 0x00F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ELevelVisibility                                           Visibility;                                              // 0x00F8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TUCZ[0x7];                                   // 0x00F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        LevelNames;                                              // 0x0100(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		void SetVisibility(ELevelVisibility InVisibility);
		void SetLevelNames(TArray<class FName> InLevelNames);
		ELevelVisibility GetVisibility();
		TArray<class FName> GetLevelNames();
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneLevelVisibilitySystem
	 * Size -> 0x0188 (FullSize[0x01D0] - InheritedSize[0x0048])
	 */
	class UMovieSceneLevelVisibilitySystem : public UMovieSceneEntitySystem
	{
	public:
		unsigned char                                              UnknownData_M6KC[0x188];                                 // 0x0048(0x0188) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneLevelVisibilityTrack
	 * Size -> 0x0010 (FullSize[0x00A8] - InheritedSize[0x0098])
	 */
	class UMovieSceneLevelVisibilityTrack : public UMovieSceneNameableTrack
	{
	public:
		TArray<class UMovieSceneSection*>                          Sections;                                                // 0x0098(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneMaterialTrack
	 * Size -> 0x0010 (FullSize[0x00A8] - InheritedSize[0x0098])
	 */
	class UMovieSceneMaterialTrack : public UMovieSceneNameableTrack
	{
	public:
		TArray<class UMovieSceneSection*>                          Sections;                                                // 0x0098(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneMaterialParameterCollectionTrack
	 * Size -> 0x0010 (FullSize[0x00B8] - InheritedSize[0x00A8])
	 */
	class UMovieSceneMaterialParameterCollectionTrack : public UMovieSceneMaterialTrack
	{
	public:
		unsigned char                                              UnknownData_ACRF[0x8];                                   // 0x00A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialParameterCollection*                        MPC;                                                     // 0x00B0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneComponentMaterialTrack
	 * Size -> 0x0010 (FullSize[0x00B8] - InheritedSize[0x00A8])
	 */
	class UMovieSceneComponentMaterialTrack : public UMovieSceneMaterialTrack
	{
	public:
		unsigned char                                              UnknownData_BCO5[0x8];                                   // 0x00A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaterialIndex;                                           // 0x00B0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Z7Y4[0x4];                                   // 0x00B4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneMotionVectorSimulationSystem
	 * Size -> 0x0058 (FullSize[0x00A0] - InheritedSize[0x0048])
	 */
	class UMovieSceneMotionVectorSimulationSystem : public UMovieSceneEntitySystem
	{
	public:
		unsigned char                                              UnknownData_2FQV[0x58];                                  // 0x0048(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneObjectPropertySection
	 * Size -> 0x00C8 (FullSize[0x01B8] - InheritedSize[0x00F0])
	 */
	class UMovieSceneObjectPropertySection : public UMovieSceneSection
	{
	public:
		struct FMovieSceneObjectPathChannel                        ObjectChannel;                                           // 0x00F0(0x00C8) NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneObjectPropertyTrack
	 * Size -> 0x0010 (FullSize[0x00E0] - InheritedSize[0x00D0])
	 */
	class UMovieSceneObjectPropertyTrack : public UMovieScenePropertyTrack
	{
	public:
		unsigned char                                              UnknownData_WANO[0x8];                                   // 0x00D0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              PropertyClass;                                           // 0x00D8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneParameterSection
	 * Size -> 0x0060 (FullSize[0x0150] - InheritedSize[0x00F0])
	 */
	class UMovieSceneParameterSection : public UMovieSceneSection
	{
	public:
		TArray<struct FBoolParameterNameAndCurve>                  BoolParameterNamesAndCurves;                             // 0x00F0(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FScalarParameterNameAndCurve>                ScalarParameterNamesAndCurves;                           // 0x0100(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FVector2DParameterNameAndCurves>             Vector2DParameterNamesAndCurves;                         // 0x0110(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FVectorParameterNameAndCurves>               VectorParameterNamesAndCurves;                           // 0x0120(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FColorParameterNameAndCurves>                ColorParameterNamesAndCurves;                            // 0x0130(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FTransformParameterNameAndCurves>            TransformParameterNamesAndCurves;                        // 0x0140(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected

	public:
		bool RemoveVectorParameter(const class FName& InParameterName);
		bool RemoveVector2DParameter(const class FName& InParameterName);
		bool RemoveTransformParameter(const class FName& InParameterName);
		bool RemoveScalarParameter(const class FName& InParameterName);
		bool RemoveColorParameter(const class FName& InParameterName);
		bool RemoveBoolParameter(const class FName& InParameterName);
		void GetParameterNames();
		void AddVectorParameterKey(const class FName& InParameterName, const struct FFrameNumber& InTime, const struct FVector& InValue);
		void AddVector2DParameterKey(const class FName& InParameterName, const struct FFrameNumber& InTime, const struct FVector2D& InValue);
		void AddTransformParameterKey(const class FName& InParameterName, const struct FFrameNumber& InTime, const struct FTransform& InValue);
		void AddScalarParameterKey(const class FName& InParameterName, const struct FFrameNumber& InTime, float InValue);
		void AddColorParameterKey(const class FName& InParameterName, const struct FFrameNumber& InTime, const struct FLinearColor& InValue);
		void AddBoolParameterKey(const class FName& InParameterName, const struct FFrameNumber& InTime, bool InValue);
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneParticleParameterTrack
	 * Size -> 0x0018 (FullSize[0x00B0] - InheritedSize[0x0098])
	 */
	class UMovieSceneParticleParameterTrack : public UMovieSceneNameableTrack
	{
	public:
		unsigned char                                              UnknownData_AJME[0x8];                                   // 0x0098(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMovieSceneSection*>                          Sections;                                                // 0x00A0(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneParticleSection
	 * Size -> 0x0098 (FullSize[0x0188] - InheritedSize[0x00F0])
	 */
	class UMovieSceneParticleSection : public UMovieSceneSection
	{
	public:
		struct FMovieSceneParticleChannel                          ParticleKeys;                                            // 0x00F0(0x0098) NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneParticleTrack
	 * Size -> 0x0018 (FullSize[0x00B0] - InheritedSize[0x0098])
	 */
	class UMovieSceneParticleTrack : public UMovieSceneNameableTrack
	{
	public:
		unsigned char                                              UnknownData_M6HJ[0x8];                                   // 0x0098(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMovieSceneSection*>                          ParticleSections;                                        // 0x00A0(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieScenePiecewiseBoolBlenderSystem
	 * Size -> 0x0028 (FullSize[0x0098] - InheritedSize[0x0070])
	 */
	class UMovieScenePiecewiseBoolBlenderSystem : public UMovieSceneBlenderSystem
	{
	public:
		unsigned char                                              UnknownData_VNXK[0x28];                                  // 0x0070(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieScenePiecewiseByteBlenderSystem
	 * Size -> 0x0028 (FullSize[0x0098] - InheritedSize[0x0070])
	 */
	class UMovieScenePiecewiseByteBlenderSystem : public UMovieSceneBlenderSystem
	{
	public:
		unsigned char                                              UnknownData_QO2C[0x28];                                  // 0x0070(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieScenePiecewiseEnumBlenderSystem
	 * Size -> 0x0028 (FullSize[0x0098] - InheritedSize[0x0070])
	 */
	class UMovieScenePiecewiseEnumBlenderSystem : public UMovieSceneBlenderSystem
	{
	public:
		unsigned char                                              UnknownData_7CU7[0x28];                                  // 0x0070(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieScenePiecewiseFloatBlenderSystem
	 * Size -> 0x00C0 (FullSize[0x0130] - InheritedSize[0x0070])
	 */
	class UMovieScenePiecewiseFloatBlenderSystem : public UMovieSceneBlenderSystem
	{
	public:
		unsigned char                                              UnknownData_PDXD[0xC0];                                  // 0x0070(0x00C0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieScenePiecewiseIntegerBlenderSystem
	 * Size -> 0x0048 (FullSize[0x00B8] - InheritedSize[0x0070])
	 */
	class UMovieScenePiecewiseIntegerBlenderSystem : public UMovieSceneBlenderSystem
	{
	public:
		unsigned char                                              UnknownData_6CZZ[0x48];                                  // 0x0070(0x0048) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieScenePrimitiveMaterialSection
	 * Size -> 0x00C8 (FullSize[0x01B8] - InheritedSize[0x00F0])
	 */
	class UMovieScenePrimitiveMaterialSection : public UMovieSceneSection
	{
	public:
		struct FMovieSceneObjectPathChannel                        MaterialChannel;                                         // 0x00F0(0x00C8) NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieScenePrimitiveMaterialTrack
	 * Size -> 0x0010 (FullSize[0x00E0] - InheritedSize[0x00D0])
	 */
	class UMovieScenePrimitiveMaterialTrack : public UMovieScenePropertyTrack
	{
	public:
		unsigned char                                              UnknownData_K0RC[0x8];                                   // 0x00D0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaterialIndex;                                           // 0x00D8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EG1J[0x4];                                   // 0x00DC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieScenePropertyInstantiatorSystem
	 * Size -> 0x0208 (FullSize[0x0250] - InheritedSize[0x0048])
	 */
	class UMovieScenePropertyInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem
	{
	public:
		unsigned char                                              UnknownData_WN12[0x208];                                 // 0x0048(0x0208) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneQuaternionInterpolationRotationSystem
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UMovieSceneQuaternionInterpolationRotationSystem : public UMovieSceneEntitySystem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneSkeletalAnimationSection
	 * Size -> 0x0190 (FullSize[0x0280] - InheritedSize[0x00F0])
	 */
	class UMovieSceneSkeletalAnimationSection : public UMovieSceneSection
	{
	public:
		struct FMovieSceneSkeletalAnimationParams                  Params;                                                  // 0x00F0(0x00D8) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class UAnimSequence*                                       AnimSequence;                                            // 0x01C8(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAnimSequenceBase*                                   Animation;                                               // 0x01D0(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      StartOffset;                                             // 0x01D8(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      EndOffset;                                               // 0x01DC(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      PlayRate;                                                // 0x01E0(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bReverse : 1;                                            // 0x01E4(0x0001) BIT_FIELD Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_B3FD[0x3];                                   // 0x01E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                SlotName;                                                // 0x01E8(0x000C) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             StartLocationOffset;                                     // 0x01F4(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            StartRotationOffset;                                     // 0x0200(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bMatchWithPrevious;                                      // 0x020C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BPV0[0x3];                                   // 0x020D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                MatchedBoneName;                                         // 0x0210(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             MatchedLocationOffset;                                   // 0x021C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            MatchedRotationOffset;                                   // 0x0228(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bMatchTranslation;                                       // 0x0234(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMatchIncludeZHeight;                                    // 0x0235(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMatchRotationYaw;                                       // 0x0236(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMatchRotationPitch;                                     // 0x0237(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMatchRotationRoll;                                      // 0x0238(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SHO3[0x47];                                  // 0x0239(0x0047) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack
	 * Size -> 0x0058 (FullSize[0x00F0] - InheritedSize[0x0098])
	 */
	class UMovieSceneSkeletalAnimationTrack : public UMovieSceneNameableTrack
	{
	public:
		unsigned char                                              UnknownData_XQ6A[0x8];                                   // 0x0098(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMovieSceneSection*>                          AnimationSections;                                       // 0x00A0(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bUseLegacySectionIndexBlend;                             // 0x00B0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HBZF[0x7];                                   // 0x00B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneSkeletalAnimRootMotionTrackParams        RootMotionParams;                                        // 0x00B8(0x0030) NativeAccessSpecifierPublic
		bool                                                       bBlendFirstChildOfRoot;                                  // 0x00E8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E9QO[0x7];                                   // 0x00E9(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneSlomoSection
	 * Size -> 0x00A0 (FullSize[0x0190] - InheritedSize[0x00F0])
	 */
	class UMovieSceneSlomoSection : public UMovieSceneSection
	{
	public:
		struct FMovieSceneFloatChannel                             FloatCurve;                                              // 0x00F0(0x00A0) NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneSlomoTrack
	 * Size -> 0x0008 (FullSize[0x00D8] - InheritedSize[0x00D0])
	 */
	class UMovieSceneSlomoTrack : public UMovieSceneFloatTrack
	{
	public:
		unsigned char                                              UnknownData_INQI[0x8];                                   // 0x00D0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneStringSection
	 * Size -> 0x00A0 (FullSize[0x0190] - InheritedSize[0x00F0])
	 */
	class UMovieSceneStringSection : public UMovieSceneSection
	{
	public:
		struct FMovieSceneStringChannel                            StringCurve;                                             // 0x00F0(0x00A0) NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneStringTrack
	 * Size -> 0x0008 (FullSize[0x00D8] - InheritedSize[0x00D0])
	 */
	class UMovieSceneStringTrack : public UMovieScenePropertyTrack
	{
	public:
		unsigned char                                              UnknownData_ZMF6[0x8];                                   // 0x00D0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneTransformOriginSystem
	 * Size -> 0x0038 (FullSize[0x0080] - InheritedSize[0x0048])
	 */
	class UMovieSceneTransformOriginSystem : public UMovieSceneEntitySystem
	{
	public:
		unsigned char                                              UnknownData_21F5[0x38];                                  // 0x0048(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneTransformTrack
	 * Size -> 0x0000 (FullSize[0x00D0] - InheritedSize[0x00D0])
	 */
	class UMovieSceneTransformTrack : public UMovieScenePropertyTrack
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneVectorPropertySystem
	 * Size -> 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
	 */
	class UMovieSceneVectorPropertySystem : public UMovieScenePropertySystem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneVectorSection
	 * Size -> 0x0290 (FullSize[0x0380] - InheritedSize[0x00F0])
	 */
	class UMovieSceneVectorSection : public UMovieSceneSection
	{
	public:
		unsigned char                                              UnknownData_D23F[0x8];                                   // 0x00F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneFloatChannel                             Curves[0x4];                                             // 0x00F8(0x0280) NativeAccessSpecifierPrivate
		int32_t                                                    ChannelsUsed;                                            // 0x0378(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CVX4[0x4];                                   // 0x037C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneVectorTrack
	 * Size -> 0x0008 (FullSize[0x00D8] - InheritedSize[0x00D0])
	 */
	class UMovieSceneVectorTrack : public UMovieScenePropertyTrack
	{
	public:
		int32_t                                                    NumChannelsUsed;                                         // 0x00D0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SZTC[0x4];                                   // 0x00D4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneVisibilityTrack
	 * Size -> 0x0000 (FullSize[0x00D8] - InheritedSize[0x00D8])
	 */
	class UMovieSceneVisibilityTrack : public UMovieSceneBoolTrack
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneHierarchicalEasingInstantiatorSystem
	 * Size -> 0x0050 (FullSize[0x0098] - InheritedSize[0x0048])
	 */
	class UMovieSceneHierarchicalEasingInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem
	{
	public:
		unsigned char                                              UnknownData_2D6D[0x50];                                  // 0x0048(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.WeightAndEasingEvaluatorSystem
	 * Size -> 0x0038 (FullSize[0x0080] - InheritedSize[0x0048])
	 */
	class UWeightAndEasingEvaluatorSystem : public UMovieSceneEntitySystem
	{
	public:
		unsigned char                                              UnknownData_8JMU[0x38];                                  // 0x0048(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
