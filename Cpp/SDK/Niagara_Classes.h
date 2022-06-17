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
	 * Class Niagara.NiagaraDataInterface
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UNiagaraDataInterface : public UNiagaraDataInterfaceBase
	{
	public:
		unsigned char                                              UnknownData_RMUZ[0x10];                                  // 0x0030(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceRWBase
	 * Size -> 0x00A0 (FullSize[0x00E0] - InheritedSize[0x0040])
	 */
	class UNiagaraDataInterfaceRWBase : public UNiagaraDataInterface
	{
	public:
		unsigned char                                              OutputShaderStages[0x50];                                // 0x0040(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              IterationShaderStages[0x50];                             // 0x0090(0x0050) UNKNOWN PROPERTY: SetProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.MovieSceneNiagaraTrack
	 * Size -> 0x0010 (FullSize[0x00A8] - InheritedSize[0x0098])
	 */
	class UMovieSceneNiagaraTrack : public UMovieSceneNameableTrack
	{
	public:
		TArray<class UMovieSceneSection*>                          Sections;                                                // 0x0098(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.MovieSceneNiagaraParameterTrack
	 * Size -> 0x0020 (FullSize[0x00C8] - InheritedSize[0x00A8])
	 */
	class UMovieSceneNiagaraParameterTrack : public UMovieSceneNiagaraTrack
	{
	public:
		struct FNiagaraVariable                                    Parameter;                                               // 0x00A8(0x0020) HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.MovieSceneNiagaraBoolParameterTrack
	 * Size -> 0x0008 (FullSize[0x00D0] - InheritedSize[0x00C8])
	 */
	class UMovieSceneNiagaraBoolParameterTrack : public UMovieSceneNiagaraParameterTrack
	{
	public:
		unsigned char                                              UnknownData_0A6N[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.MovieSceneNiagaraColorParameterTrack
	 * Size -> 0x0008 (FullSize[0x00D0] - InheritedSize[0x00C8])
	 */
	class UMovieSceneNiagaraColorParameterTrack : public UMovieSceneNiagaraParameterTrack
	{
	public:
		unsigned char                                              UnknownData_DG6F[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.MovieSceneNiagaraFloatParameterTrack
	 * Size -> 0x0008 (FullSize[0x00D0] - InheritedSize[0x00C8])
	 */
	class UMovieSceneNiagaraFloatParameterTrack : public UMovieSceneNiagaraParameterTrack
	{
	public:
		unsigned char                                              UnknownData_68PH[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.MovieSceneNiagaraIntegerParameterTrack
	 * Size -> 0x0008 (FullSize[0x00D0] - InheritedSize[0x00C8])
	 */
	class UMovieSceneNiagaraIntegerParameterTrack : public UMovieSceneNiagaraParameterTrack
	{
	public:
		unsigned char                                              UnknownData_5IV1[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.MovieSceneNiagaraSystemSpawnSection
	 * Size -> 0x0010 (FullSize[0x0100] - InheritedSize[0x00F0])
	 */
	class UMovieSceneNiagaraSystemSpawnSection : public UMovieSceneSection
	{
	public:
		ENiagaraSystemSpawnSectionStartBehavior                    SectionStartBehavior;                                    // 0x00F0(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_T2V4[0x3];                                   // 0x00F0(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		ENiagaraSystemSpawnSectionEvaluateBehavior                 SectionEvaluateBehavior;                                 // 0x00F4(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QLKJ[0x3];                                   // 0x00F4(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		ENiagaraSystemSpawnSectionEndBehavior                      SectionEndBehavior;                                      // 0x00F8(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QQTF[0x3];                                   // 0x00F8(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		ENiagaraAgeUpdateMode                                      AgeUpdateMode;                                           // 0x00FC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UTZM[0x3];                                   // 0x00FD(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.MovieSceneNiagaraSystemTrack
	 * Size -> 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
	 */
	class UMovieSceneNiagaraSystemTrack : public UMovieSceneNiagaraTrack
	{
	public:
		unsigned char                                              UnknownData_3066[0x8];                                   // 0x00A8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.MovieSceneNiagaraVectorParameterTrack
	 * Size -> 0x0010 (FullSize[0x00D8] - InheritedSize[0x00C8])
	 */
	class UMovieSceneNiagaraVectorParameterTrack : public UMovieSceneNiagaraParameterTrack
	{
	public:
		unsigned char                                              UnknownData_GSS6[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ChannelsUsed;                                            // 0x00D0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Z1RW[0x4];                                   // 0x00D4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraActor
	 * Size -> 0x0010 (FullSize[0x0240] - InheritedSize[0x0230])
	 */
	class ANiagaraActor : public AActor
	{
	public:
		class UNiagaraComponent*                                   NiagaraComponent;                                        // 0x0230(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bDestroyOnSystemFinish : 1;                              // 0x0238(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9P0H[0x7];                                   // 0x0239(0x0007) MISSED OFFSET (PADDING)

	public:
		void SetDestroyOnSystemFinish(bool bShouldDestroyOnSystemFinish);
		void OnNiagaraSystemFinished(class UNiagaraComponent* FinishedComponent);
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraBakerSettings
	 * Size -> 0x00F0 (FullSize[0x0120] - InheritedSize[0x0030])
	 */
	class UNiagaraBakerSettings : public UObject
	{
	public:
		float                                                      StartSeconds;                                            // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DurationSeconds;                                         // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FramesPerSecond;                                         // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bPreviewLooping : 1;                                     // 0x003C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y9FW[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FIntPoint                                           FramesPerDimension;                                      // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FNiagaraBakerTextureSettings>                OutputTextures;                                          // 0x0048(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		ENiagaraBakerViewMode                                      CameraViewportMode;                                      // 0x0058(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BUT6[0x3];                                   // 0x0058(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		struct FVector                                             CameraViewportLocation[0x7];                             // 0x005C(0x0054) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            CameraViewportRotation[0x7];                             // 0x00B0(0x0054) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      CameraOrbitDistance;                                     // 0x0104(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CameraFOV;                                               // 0x0108(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CameraOrthoWidth;                                        // 0x010C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseCameraAspectRatio : 1;                               // 0x0110(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZQIM[0x3];                                   // 0x0111(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CameraAspectRatio;                                       // 0x0114(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bRenderComponentOnly : 1;                                // 0x0118(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BOKU[0x7];                                   // 0x0119(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraComponent
	 * Size -> 0x01B0 (FullSize[0x0630] - InheritedSize[0x0480])
	 */
	class UNiagaraComponent : public UFXSystemComponent
	{
	public:
		class UNiagaraSystem*                                      Asset;                                                   // 0x0480(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		ENiagaraTickBehavior                                       TickBehavior;                                            // 0x0488(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_627Y[0x3];                                   // 0x0489(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    RandomSeedOffset;                                        // 0x048C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FNiagaraUserRedirectionParameterStore               OverrideParameters;                                      // 0x0490(0x00C8) NativeAccessSpecifierPrivate
		unsigned char                                              bForceSolo : 1;                                          // 0x0558(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bEnableGpuComputeDebug : 1;                              // 0x0558(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_J3FY[0x2F];                                  // 0x0559(0x002F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bAutoDestroy : 1;                                        // 0x0588(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bRenderingEnabled : 1;                                   // 0x0588(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bAutoManageAttachment : 1;                               // 0x0588(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAutoAttachWeldSimulatedBodies : 1;                      // 0x0588(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HZSS[0x3];                                   // 0x0589(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxTimeBeforeForceUpdateTransform;                       // 0x058C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FNiagaraMaterialOverride>                    EmitterMaterials;                                        // 0x0590(0x0010) ZeroConstructor, Transient, DuplicateTransient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I35O[0x8];                                   // 0x05A0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnSystemFinished;                                        // 0x05A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		TWeakObjectPtr<class USceneComponent>                      AutoAttachParent;                                        // 0x05B8(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                AutoAttachSocketName;                                    // 0x05C0(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAttachmentRule                                            AutoAttachLocationRule;                                  // 0x05CC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAttachmentRule                                            AutoAttachRotationRule;                                  // 0x05CD(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAttachmentRule                                            AutoAttachScaleRule;                                     // 0x05CE(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OGLQ[0x61];                                  // 0x05CF(0x0061) MISSED OFFSET (PADDING)

	public:
		void SetVariableVec4(const class FName& InVariableName, const struct FVector4& InValue);
		void SetVariableVec3(const class FName& InVariableName, const struct FVector& InValue);
		void SetVariableVec2(const class FName& InVariableName, const struct FVector2D& InValue);
		void SetVariableTextureRenderTarget(const class FName& InVariableName, class UTextureRenderTarget* TextureRenderTarget);
		void SetVariableQuat(const class FName& InVariableName, const struct FQuat& InValue);
		void SetVariableObject(const class FName& InVariableName, class UObject* Object);
		void SetVariableMaterial(const class FName& InVariableName, class UMaterialInterface* Object);
		void SetVariableLinearColor(const class FName& InVariableName, const struct FLinearColor& InValue);
		void SetVariableInt(const class FName& InVariableName, int32_t InValue);
		void SetVariableFloat(const class FName& InVariableName, float InValue);
		void SetVariableBool(const class FName& InVariableName, bool InValue);
		void SetVariableActor(const class FName& InVariableName, class AActor* Actor);
		void SetTickBehavior(ENiagaraTickBehavior NewTickBehavior);
		void SetSeekDelta(float InSeekDelta);
		void SetRenderingEnabled(bool bInRenderingEnabled);
		void SetRandomSeedOffset(int32_t NewRandomSeedOffset);
		void SetPreviewLODDistance(bool bEnablePreviewLODDistance, float PreviewLODDistance);
		void SetPaused(bool bInPaused);
		void SetNiagaraVariableVec4(const class FString& InVariableName, const struct FVector4& InValue);
		void SetNiagaraVariableVec3(const class FString& InVariableName, const struct FVector& InValue);
		void SetNiagaraVariableVec2(const class FString& InVariableName, const struct FVector2D& InValue);
		void SetNiagaraVariableQuat(const class FString& InVariableName, const struct FQuat& InValue);
		void SetNiagaraVariableObject(const class FString& InVariableName, class UObject* Object);
		void SetNiagaraVariableLinearColor(const class FString& InVariableName, const struct FLinearColor& InValue);
		void SetNiagaraVariableInt(const class FString& InVariableName, int32_t InValue);
		void SetNiagaraVariableFloat(const class FString& InVariableName, float InValue);
		void SetNiagaraVariableBool(const class FString& InVariableName, bool InValue);
		void SetNiagaraVariableActor(const class FString& InVariableName, class AActor* Actor);
		void SetMaxSimTime(float InMaxTime);
		void SetLockDesiredAgeDeltaTimeToSeekDelta(bool bLock);
		void SetGpuComputeDebug(bool bEnableDebug);
		void SetForceSolo(bool bInForceSolo);
		void SetDesiredAge(float InDesiredAge);
		void SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking);
		void SetAutoDestroy(bool bInAutoDestroy);
		void SetAsset(class UNiagaraSystem* InAsset, bool bResetExistingOverrideParameters);
		void SetAllowScalability(bool bAllow);
		void SetAgeUpdateMode(ENiagaraAgeUpdateMode InAgeUpdateMode);
		void SeekToDesiredAge(float InDesiredAge);
		void ResetSystem();
		void ReinitializeSystem();
		bool IsPaused();
		void InitForPerformanceBaseline();
		ENiagaraTickBehavior GetTickBehavior();
		float GetSeekDelta();
		int32_t GetRandomSeedOffset();
		bool GetPreviewLODDistanceEnabled();
		float GetPreviewLODDistance();
		TArray<struct FVector> GetNiagaraParticleValueVec3_DebugOnly(const class FString& InEmitterName, const class FString& InValueName);
		TArray<float> GetNiagaraParticleValues_DebugOnly(const class FString& InEmitterName, const class FString& InValueName);
		TArray<struct FVector> GetNiagaraParticlePositions_DebugOnly(const class FString& InEmitterName);
		float GetMaxSimTime();
		bool GetLockDesiredAgeDeltaTimeToSeekDelta();
		bool GetForceSolo();
		float GetDesiredAge();
		class UNiagaraDataInterface* GetDataInterface(const class FString& Name);
		class UNiagaraSystem* GetAsset();
		ENiagaraAgeUpdateMode GetAgeUpdateMode();
		void AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds);
		void AdvanceSimulation(int32_t TickCount, float TickDeltaSeconds);
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraComponentPool
	 * Size -> 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
	 */
	class UNiagaraComponentPool : public UObject
	{
	public:
		TMap<class UNiagaraSystem*, struct FNCPool>                WorldParticleSystemPools;                                // 0x0030(0x0050) ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_K4NA[0x8];                                   // 0x0080(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraRendererProperties
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class UNiagaraRendererProperties : public UNiagaraMergeable
	{
	public:
		struct FNiagaraPlatformSet                                 Platforms;                                               // 0x0030(0x0030) Edit, NativeAccessSpecifierPublic
		int32_t                                                    SortOrderHint;                                           // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENiagaraRendererMotionVectorSetting                        MotionVectorSetting;                                     // 0x0064(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2E00[0x3];                                   // 0x0064(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		bool                                                       bIsEnabled;                                              // 0x0068(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMotionBlurEnabled;                                      // 0x0069(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_U5OK[0x16];                                  // 0x006A(0x0016) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraComponentRendererProperties
	 * Size -> 0x0138 (FullSize[0x01B8] - InheritedSize[0x0080])
	 */
	class UNiagaraComponentRendererProperties : public UNiagaraRendererProperties
	{
	public:
		class UClass*                                              ComponentType;                                           // 0x0080(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   ComponentCountLimit;                                     // 0x0088(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G8FM[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraVariableAttributeBinding                    EnabledBinding;                                          // 0x0090(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    RendererVisibilityTagBinding;                            // 0x00E8(0x0058) Edit, NativeAccessSpecifierPublic
		bool                                                       bAssignComponentsOnParticleID;                           // 0x0140(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnlyCreateComponentsOnParticleSpawn;                    // 0x0141(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VE4H[0x2];                                   // 0x0142(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    RendererVisibility;                                      // 0x0144(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USceneComponent*                                     TemplateComponent;                                       // 0x0148(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FNiagaraComponentPropertyBinding>            PropertyBindings;                                        // 0x0150(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z0Y3[0x58];                                  // 0x0160(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraComponentSettings
	 * Size -> 0x00F0 (FullSize[0x0120] - InheritedSize[0x0030])
	 */
	class UNiagaraComponentSettings : public UObject
	{
	public:
		unsigned char                                              SuppressActivationList[0x50];                            // 0x0030(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              ForceAutoPooolingList[0x50];                             // 0x0080(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              SuppressEmitterList[0x50];                               // 0x00D0(0x0050) UNKNOWN PROPERTY: SetProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraConvertInPlaceUtilityBase
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UNiagaraConvertInPlaceUtilityBase : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterface2DArrayTexture
	 * Size -> 0x0018 (FullSize[0x0058] - InheritedSize[0x0040])
	 */
	class UNiagaraDataInterface2DArrayTexture : public UNiagaraDataInterface
	{
	public:
		class UTexture2DArray*                                     Texture;                                                 // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B76V[0x10];                                  // 0x0048(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceArray
	 * Size -> 0x0018 (FullSize[0x0058] - InheritedSize[0x0040])
	 */
	class UNiagaraDataInterfaceArray : public UNiagaraDataInterface
	{
	public:
		unsigned char                                              UnknownData_8RDT[0x8];                                   // 0x0040(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxElements;                                             // 0x0048(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0HQL[0xC];                                   // 0x004C(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceArrayFloat
	 * Size -> 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
	 */
	class UNiagaraDataInterfaceArrayFloat : public UNiagaraDataInterfaceArray
	{
	public:
		TArray<float>                                              FloatData;                                               // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceArrayFloat2
	 * Size -> 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
	 */
	class UNiagaraDataInterfaceArrayFloat2 : public UNiagaraDataInterfaceArray
	{
	public:
		TArray<struct FVector2D>                                   FloatData;                                               // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceArrayFloat3
	 * Size -> 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
	 */
	class UNiagaraDataInterfaceArrayFloat3 : public UNiagaraDataInterfaceArray
	{
	public:
		TArray<struct FVector>                                     FloatData;                                               // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceArrayFloat4
	 * Size -> 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
	 */
	class UNiagaraDataInterfaceArrayFloat4 : public UNiagaraDataInterfaceArray
	{
	public:
		TArray<struct FVector4>                                    FloatData;                                               // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceArrayColor
	 * Size -> 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
	 */
	class UNiagaraDataInterfaceArrayColor : public UNiagaraDataInterfaceArray
	{
	public:
		TArray<struct FLinearColor>                                ColorData;                                               // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceArrayQuat
	 * Size -> 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
	 */
	class UNiagaraDataInterfaceArrayQuat : public UNiagaraDataInterfaceArray
	{
	public:
		TArray<struct FQuat>                                       QuatData;                                                // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceArrayFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UNiagaraDataInterfaceArrayFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SetNiagaraArrayVectorValue(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName, int32_t Index, const struct FVector& value, bool bSizeToFit);
		void STATIC_SetNiagaraArrayVector4Value(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName, int32_t Index, const struct FVector4& value, bool bSizeToFit);
		void STATIC_SetNiagaraArrayVector4(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName, TArray<struct FVector4> ArrayData);
		void STATIC_SetNiagaraArrayVector2DValue(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName, int32_t Index, const struct FVector2D& value, bool bSizeToFit);
		void STATIC_SetNiagaraArrayVector2D(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName, TArray<struct FVector2D> ArrayData);
		void STATIC_SetNiagaraArrayVector(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName, TArray<struct FVector> ArrayData);
		void STATIC_SetNiagaraArrayQuatValue(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName, int32_t Index, const struct FQuat& value, bool bSizeToFit);
		void STATIC_SetNiagaraArrayQuat(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName, TArray<struct FQuat> ArrayData);
		void STATIC_SetNiagaraArrayInt32Value(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName, int32_t Index, int32_t value, bool bSizeToFit);
		void STATIC_SetNiagaraArrayInt32(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName, TArray<int32_t> ArrayData);
		void STATIC_SetNiagaraArrayFloatValue(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName, int32_t Index, float value, bool bSizeToFit);
		void STATIC_SetNiagaraArrayFloat(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName, TArray<float> ArrayData);
		void STATIC_SetNiagaraArrayColorValue(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName, int32_t Index, const struct FLinearColor& value, bool bSizeToFit);
		void STATIC_SetNiagaraArrayColor(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName, TArray<struct FLinearColor> ArrayData);
		void STATIC_SetNiagaraArrayBoolValue(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName, int32_t Index, bool value, bool bSizeToFit);
		void STATIC_SetNiagaraArrayBool(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName, TArray<bool> ArrayData);
		struct FVector STATIC_GetNiagaraArrayVectorValue(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName, int32_t Index);
		struct FVector4 STATIC_GetNiagaraArrayVector4Value(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName, int32_t Index);
		TArray<struct FVector4> STATIC_GetNiagaraArrayVector4(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName);
		struct FVector2D STATIC_GetNiagaraArrayVector2DValue(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName, int32_t Index);
		TArray<struct FVector2D> STATIC_GetNiagaraArrayVector2D(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName);
		TArray<struct FVector> STATIC_GetNiagaraArrayVector(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName);
		struct FQuat STATIC_GetNiagaraArrayQuatValue(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName, int32_t Index);
		TArray<struct FQuat> STATIC_GetNiagaraArrayQuat(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName);
		int32_t STATIC_GetNiagaraArrayInt32Value(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName, int32_t Index);
		TArray<int32_t> STATIC_GetNiagaraArrayInt32(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName);
		float STATIC_GetNiagaraArrayFloatValue(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName, int32_t Index);
		TArray<float> STATIC_GetNiagaraArrayFloat(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName);
		struct FLinearColor STATIC_GetNiagaraArrayColorValue(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName, int32_t Index);
		TArray<struct FLinearColor> STATIC_GetNiagaraArrayColor(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName);
		bool STATIC_GetNiagaraArrayBoolValue(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName, int32_t Index);
		TArray<bool> STATIC_GetNiagaraArrayBool(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName);
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceArrayInt32
	 * Size -> 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
	 */
	class UNiagaraDataInterfaceArrayInt32 : public UNiagaraDataInterfaceArray
	{
	public:
		TArray<int32_t>                                            IntData;                                                 // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceArrayBool
	 * Size -> 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
	 */
	class UNiagaraDataInterfaceArrayBool : public UNiagaraDataInterfaceArray
	{
	public:
		TArray<bool>                                               BoolData;                                                // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceAudioSubmix
	 * Size -> 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
	 */
	class UNiagaraDataInterfaceAudioSubmix : public UNiagaraDataInterface
	{
	public:
		class USoundSubmix*                                        Submix;                                                  // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceAudioOscilloscope
	 * Size -> 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
	 */
	class UNiagaraDataInterfaceAudioOscilloscope : public UNiagaraDataInterface
	{
	public:
		class USoundSubmix*                                        Submix;                                                  // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Resolution;                                              // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ScopeInMilliseconds;                                     // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceAudioPlayer
	 * Size -> 0x0038 (FullSize[0x0078] - InheritedSize[0x0040])
	 */
	class UNiagaraDataInterfaceAudioPlayer : public UNiagaraDataInterface
	{
	public:
		class USoundBase*                                          SoundToPlay;                                             // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundAttenuation*                                   Attenuation;                                             // 0x0048(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundConcurrency*                                   Concurrency;                                             // 0x0050(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        ParameterNames;                                          // 0x0058(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bLimitPlaysPerTick;                                      // 0x0068(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LR17[0x3];                                   // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxPlaysPerTick;                                         // 0x006C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStopWhenComponentIsDestroyed;                           // 0x0070(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TG49[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceAudioSpectrum
	 * Size -> 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
	 */
	class UNiagaraDataInterfaceAudioSpectrum : public UNiagaraDataInterfaceAudioSubmix
	{
	public:
		int32_t                                                    Resolution;                                              // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinimumFrequency;                                        // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaximumFrequency;                                        // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NoiseFloorDb;                                            // 0x0054(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceCamera
	 * Size -> 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
	 */
	class UNiagaraDataInterfaceCamera : public UNiagaraDataInterface
	{
	public:
		int32_t                                                    PlayerControllerIndex;                                   // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRequireCurrentFrameData;                                // 0x0044(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L4XY[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceCollisionQuery
	 * Size -> 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
	 */
	class UNiagaraDataInterfaceCollisionQuery : public UNiagaraDataInterface
	{
	public:
		unsigned char                                              UnknownData_POCY[0x10];                                  // 0x0040(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceCurveBase
	 * Size -> 0x0038 (FullSize[0x0078] - InheritedSize[0x0040])
	 */
	class UNiagaraDataInterfaceCurveBase : public UNiagaraDataInterface
	{
	public:
		TArray<float>                                              ShaderLUT;                                               // 0x0040(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		float                                                      LUTMinTime;                                              // 0x0050(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LUTMaxTime;                                              // 0x0054(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LUTInvTimeRange;                                         // 0x0058(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LUTNumSamplesMinusOne;                                   // 0x005C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bUseLUT : 1;                                             // 0x0060(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bExposeCurve : 1;                                        // 0x0060(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RBBP[0x3];                                   // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ExposedName;                                             // 0x0064(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          ExposedTexture;                                          // 0x0070(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceColorCurve
	 * Size -> 0x0200 (FullSize[0x0278] - InheritedSize[0x0078])
	 */
	class UNiagaraDataInterfaceColorCurve : public UNiagaraDataInterfaceCurveBase
	{
	public:
		struct FRichCurve                                          RedCurve;                                                // 0x0078(0x0080) Edit, NativeAccessSpecifierPublic
		struct FRichCurve                                          GreenCurve;                                              // 0x00F8(0x0080) Edit, NativeAccessSpecifierPublic
		struct FRichCurve                                          BlueCurve;                                               // 0x0178(0x0080) Edit, NativeAccessSpecifierPublic
		struct FRichCurve                                          AlphaCurve;                                              // 0x01F8(0x0080) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceCubeTexture
	 * Size -> 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
	 */
	class UNiagaraDataInterfaceCubeTexture : public UNiagaraDataInterface
	{
	public:
		class UTextureCube*                                        Texture;                                                 // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FOLJ[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceCurlNoise
	 * Size -> 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
	 */
	class UNiagaraDataInterfaceCurlNoise : public UNiagaraDataInterface
	{
	public:
		uint32_t                                                   Seed;                                                    // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W4DO[0xC];                                   // 0x0044(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceCurve
	 * Size -> 0x0080 (FullSize[0x00F8] - InheritedSize[0x0078])
	 */
	class UNiagaraDataInterfaceCurve : public UNiagaraDataInterfaceCurveBase
	{
	public:
		struct FRichCurve                                          Curve;                                                   // 0x0078(0x0080) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceDebugDraw
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UNiagaraDataInterfaceDebugDraw : public UNiagaraDataInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraParticleCallbackHandler
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UNiagaraParticleCallbackHandler : public UInterface
	{
	public:
		void ReceiveParticleData(TArray<struct FBasicParticleData> Data, class UNiagaraSystem* NiagaraSystem);
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceExport
	 * Size -> 0x0030 (FullSize[0x0070] - InheritedSize[0x0040])
	 */
	class UNiagaraDataInterfaceExport : public UNiagaraDataInterface
	{
	public:
		struct FNiagaraUserParameterBinding                        CallbackHandlerParameter;                                // 0x0040(0x0020) Edit, NativeAccessSpecifierPublic
		ENDIExport_GPUAllocationMode                               GPUAllocationMode;                                       // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JMEY[0x3];                                   // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    GPUAllocationFixedSize;                                  // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GPUAllocationPerParticleSize;                            // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EOBT[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceGBuffer
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UNiagaraDataInterfaceGBuffer : public UNiagaraDataInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceGrid2D
	 * Size -> 0x0020 (FullSize[0x0100] - InheritedSize[0x00E0])
	 */
	class UNiagaraDataInterfaceGrid2D : public UNiagaraDataInterfaceRWBase
	{
	public:
		int32_t                                                    NumCellsX;                                               // 0x00E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumCellsY;                                               // 0x00E4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumCellsMaxAxis;                                         // 0x00E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumAttributes;                                           // 0x00EC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SetGridFromMaxAxis;                                      // 0x00F0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D9YN[0x3];                                   // 0x00F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           WorldBBoxSize;                                           // 0x00F4(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5CDH[0x4];                                   // 0x00FC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceGrid2DCollection
	 * Size -> 0x00C8 (FullSize[0x01C8] - InheritedSize[0x0100])
	 */
	class UNiagaraDataInterfaceGrid2DCollection : public UNiagaraDataInterfaceGrid2D
	{
	public:
		struct FNiagaraUserParameterBinding                        RenderTargetUserParameter;                               // 0x0100(0x0020) Edit, NativeAccessSpecifierPublic
		ENiagaraGpuBufferFormat                                    OverrideBufferFormat;                                    // 0x0120(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverrideFormat : 1;                                     // 0x0121(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LCKY[0x56];                                  // 0x0122(0x0056) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<uint64_t, class UTextureRenderTarget2DArray*>         ManagedRenderTargets;                                    // 0x0178(0x0050) Transient, Protected, NativeAccessSpecifierProtected

	public:
		void GetTextureSize(class UNiagaraComponent* Component, int32_t* SizeX, int32_t* SizeY);
		void GetRawTextureSize(class UNiagaraComponent* Component, int32_t* SizeX, int32_t* SizeY);
		bool FillTexture2D(class UNiagaraComponent* Component, class UTextureRenderTarget2D* Dest, int32_t AttributeIndex);
		bool FillRawTexture2D(class UNiagaraComponent* Component, class UTextureRenderTarget2D* Dest, int32_t* TilesX, int32_t* TilesY);
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceGrid2DCollectionReader
	 * Size -> 0x0070 (FullSize[0x0170] - InheritedSize[0x0100])
	 */
	class UNiagaraDataInterfaceGrid2DCollectionReader : public UNiagaraDataInterfaceGrid2D
	{
	public:
		class FString                                              EmitterName;                                             // 0x0100(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DIName;                                                  // 0x0110(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_09SG[0x50];                                  // 0x0120(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceGrid3D
	 * Size -> 0x0028 (FullSize[0x0108] - InheritedSize[0x00E0])
	 */
	class UNiagaraDataInterfaceGrid3D : public UNiagaraDataInterfaceRWBase
	{
	public:
		struct FIntVector                                          NumCells;                                                // 0x00E0(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CellSize;                                                // 0x00EC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumCellsMaxAxis;                                         // 0x00F0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESetResolutionMethod                                       SetResolutionMethod;                                     // 0x00F4(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H5KH[0x3];                                   // 0x00F4(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		struct FVector                                             WorldBBoxSize;                                           // 0x00F8(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5ODP[0x4];                                   // 0x0104(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceGrid3DCollection
	 * Size -> 0x0080 (FullSize[0x0188] - InheritedSize[0x0108])
	 */
	class UNiagaraDataInterfaceGrid3DCollection : public UNiagaraDataInterfaceGrid3D
	{
	public:
		int32_t                                                    NumAttributes;                                           // 0x0108(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O7QK[0x4];                                   // 0x010C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraUserParameterBinding                        RenderTargetUserParameter;                               // 0x0110(0x0020) Edit, NativeAccessSpecifierPublic
		ENiagaraGpuBufferFormat                                    OverrideBufferFormat;                                    // 0x0130(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverrideFormat : 1;                                     // 0x0131(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RRSC[0x56];                                  // 0x0132(0x0056) MISSED OFFSET (PADDING)

	public:
		void GetTextureSize(class UNiagaraComponent* Component, int32_t* SizeX, int32_t* SizeY, int32_t* SizeZ);
		void GetRawTextureSize(class UNiagaraComponent* Component, int32_t* SizeX, int32_t* SizeY, int32_t* SizeZ);
		bool FillVolumeTexture(class UNiagaraComponent* Component, class UVolumeTexture* Dest, int32_t AttributeIndex);
		bool FillRawVolumeTexture(class UNiagaraComponent* Component, class UVolumeTexture* Dest, int32_t* TilesX, int32_t* TilesY, int32_t* TileZ);
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceIntRenderTarget2D
	 * Size -> 0x0078 (FullSize[0x0158] - InheritedSize[0x00E0])
	 */
	class UNiagaraDataInterfaceIntRenderTarget2D : public UNiagaraDataInterfaceRWBase
	{
	public:
		struct FIntPoint                                           Size;                                                    // 0x00E0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraUserParameterBinding                        RenderTargetUserParameter;                               // 0x00E8(0x0020) Edit, NativeAccessSpecifierPublic
		TMap<uint64_t, class UTextureRenderTarget2D*>              ManagedRenderTargets;                                    // 0x0108(0x0050) Transient, DuplicateTransient, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceLandscape
	 * Size -> 0x0020 (FullSize[0x0060] - InheritedSize[0x0040])
	 */
	class UNiagaraDataInterfaceLandscape : public UNiagaraDataInterface
	{
	public:
		class AActor*                                              SourceLandscape;                                         // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENDILandscape_SourceMode                                   SourceMode;                                              // 0x0048(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B52D[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UPhysicalMaterial*>                           PhysicalMaterials;                                       // 0x0050(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceMeshRendererInfo
	 * Size -> 0x0018 (FullSize[0x0058] - InheritedSize[0x0040])
	 */
	class UNiagaraDataInterfaceMeshRendererInfo : public UNiagaraDataInterface
	{
	public:
		class UNiagaraMeshRendererProperties*                      MeshRenderer;                                            // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_AA7B[0x10];                                  // 0x0048(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceNeighborGrid3D
	 * Size -> 0x0008 (FullSize[0x0110] - InheritedSize[0x0108])
	 */
	class UNiagaraDataInterfaceNeighborGrid3D : public UNiagaraDataInterfaceGrid3D
	{
	public:
		uint32_t                                                   MaxNeighborsPerCell;                                     // 0x0108(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_484K[0x4];                                   // 0x010C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceOcclusion
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UNiagaraDataInterfaceOcclusion : public UNiagaraDataInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceParticleRead
	 * Size -> 0x0010 (FullSize[0x00F0] - InheritedSize[0x00E0])
	 */
	class UNiagaraDataInterfaceParticleRead : public UNiagaraDataInterfaceRWBase
	{
	public:
		class FString                                              EmitterName;                                             // 0x00E0(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfacePlatformSet
	 * Size -> 0x0030 (FullSize[0x0070] - InheritedSize[0x0040])
	 */
	class UNiagaraDataInterfacePlatformSet : public UNiagaraDataInterface
	{
	public:
		struct FNiagaraPlatformSet                                 Platforms;                                               // 0x0040(0x0030) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceRenderTarget2D
	 * Size -> 0x00D0 (FullSize[0x01B0] - InheritedSize[0x00E0])
	 */
	class UNiagaraDataInterfaceRenderTarget2D : public UNiagaraDataInterfaceRWBase
	{
	public:
		struct FIntPoint                                           Size;                                                    // 0x00E0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENiagaraMipMapGeneration                                   MipMapGeneration;                                        // 0x00E8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETextureRenderTargetFormat                                 OverrideRenderTargetFormat;                              // 0x00E9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bInheritUserParameterSettings : 1;                       // 0x00EA(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverrideFormat : 1;                                     // 0x00EA(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ER36[0x5];                                   // 0x00EB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraUserParameterBinding                        RenderTargetUserParameter;                               // 0x00F0(0x0020) Edit, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KYRN[0x50];                                  // 0x0110(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<uint64_t, class UTextureRenderTarget2D*>              ManagedRenderTargets;                                    // 0x0160(0x0050) Transient, DuplicateTransient, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceRenderTarget2DArray
	 * Size -> 0x0080 (FullSize[0x0160] - InheritedSize[0x00E0])
	 */
	class UNiagaraDataInterfaceRenderTarget2DArray : public UNiagaraDataInterfaceRWBase
	{
	public:
		struct FIntVector                                          Size;                                                    // 0x00E0(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETextureRenderTargetFormat                                 OverrideRenderTargetFormat;                              // 0x00EC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bInheritUserParameterSettings : 1;                       // 0x00ED(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverrideFormat : 1;                                     // 0x00ED(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7MOG[0x2];                                   // 0x00EE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraUserParameterBinding                        RenderTargetUserParameter;                               // 0x00F0(0x0020) Edit, NativeAccessSpecifierPublic
		TMap<uint64_t, class UTextureRenderTarget2DArray*>         ManagedRenderTargets;                                    // 0x0110(0x0050) Transient, DuplicateTransient, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceRenderTargetCube
	 * Size -> 0x0078 (FullSize[0x0158] - InheritedSize[0x00E0])
	 */
	class UNiagaraDataInterfaceRenderTargetCube : public UNiagaraDataInterfaceRWBase
	{
	public:
		int32_t                                                    Size;                                                    // 0x00E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETextureRenderTargetFormat                                 OverrideRenderTargetFormat;                              // 0x00E4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bInheritUserParameterSettings : 1;                       // 0x00E5(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverrideFormat : 1;                                     // 0x00E5(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OGDN[0x2];                                   // 0x00E6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraUserParameterBinding                        RenderTargetUserParameter;                               // 0x00E8(0x0020) Edit, NativeAccessSpecifierPublic
		TMap<uint64_t, class UTextureRenderTargetCube*>            ManagedRenderTargets;                                    // 0x0108(0x0050) Transient, DuplicateTransient, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceRenderTargetVolume
	 * Size -> 0x0080 (FullSize[0x0160] - InheritedSize[0x00E0])
	 */
	class UNiagaraDataInterfaceRenderTargetVolume : public UNiagaraDataInterfaceRWBase
	{
	public:
		struct FIntVector                                          Size;                                                    // 0x00E0(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETextureRenderTargetFormat                                 OverrideRenderTargetFormat;                              // 0x00EC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bInheritUserParameterSettings : 1;                       // 0x00ED(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverrideFormat : 1;                                     // 0x00ED(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EHRX[0x2];                                   // 0x00EE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraUserParameterBinding                        RenderTargetUserParameter;                               // 0x00F0(0x0020) Edit, NativeAccessSpecifierPublic
		TMap<uint64_t, class UTextureRenderTargetVolume*>          ManagedRenderTargets;                                    // 0x0110(0x0050) Transient, DuplicateTransient, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceSimpleCounter
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UNiagaraDataInterfaceSimpleCounter : public UNiagaraDataInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceSkeletalMesh
	 * Size -> 0x0098 (FullSize[0x00D8] - InheritedSize[0x0040])
	 */
	class UNiagaraDataInterfaceSkeletalMesh : public UNiagaraDataInterface
	{
	public:
		ENDISkeletalMesh_SourceMode                                SourceMode;                                              // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZZUH[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              Source;                                                  // 0x0048(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraUserParameterBinding                        MeshUserParameter;                                       // 0x0050(0x0020) Edit, NativeAccessSpecifierPublic
		class USkeletalMeshComponent*                              SourceComponent;                                         // 0x0070(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENDISkeletalMesh_SkinningMode                              SkinningMode;                                            // 0x0078(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_91O9[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        SamplingRegions;                                         // 0x0080(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    WholeMeshLOD;                                            // 0x0090(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3GCH[0x4];                                   // 0x0094(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        FilteredBones;                                           // 0x0098(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FName>                                        FilteredSockets;                                         // 0x00A8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class FName                                                ExcludeBoneName;                                         // 0x00B8(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bExcludeBone : 1;                                        // 0x00C4(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YECW[0x3];                                   // 0x00C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    UvSetIndex;                                              // 0x00C8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRequireCurrentFrameData;                                // 0x00CC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CO4R[0xB];                                   // 0x00CD(0x000B) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceSpline
	 * Size -> 0x0028 (FullSize[0x0068] - InheritedSize[0x0040])
	 */
	class UNiagaraDataInterfaceSpline : public UNiagaraDataInterface
	{
	public:
		class AActor*                                              Source;                                                  // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraUserParameterBinding                        SplineUserParameter;                                     // 0x0048(0x0020) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceStaticMesh
	 * Size -> 0x0050 (FullSize[0x0090] - InheritedSize[0x0040])
	 */
	class UNiagaraDataInterfaceStaticMesh : public UNiagaraDataInterface
	{
	public:
		ENDIStaticMesh_SourceMode                                  SourceMode;                                              // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FP0E[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMesh*                                         DefaultMesh;                                             // 0x0048(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              Source;                                                  // 0x0050(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMeshComponent*                                SourceComponent;                                         // 0x0058(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNDIStaticMeshSectionFilter                         SectionFilter;                                           // 0x0060(0x0010) Edit, NativeAccessSpecifierPublic
		bool                                                       bUsePhysicsBodyVelocity;                                 // 0x0070(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FESO[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        FilteredSockets;                                         // 0x0078(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XMU9[0x8];                                   // 0x0088(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceTexture
	 * Size -> 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
	 */
	class UNiagaraDataInterfaceTexture : public UNiagaraDataInterface
	{
	public:
		class UTexture*                                            Texture;                                                 // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FWKW[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceVector2DCurve
	 * Size -> 0x0100 (FullSize[0x0178] - InheritedSize[0x0078])
	 */
	class UNiagaraDataInterfaceVector2DCurve : public UNiagaraDataInterfaceCurveBase
	{
	public:
		struct FRichCurve                                          XCurve;                                                  // 0x0078(0x0080) Edit, NativeAccessSpecifierPublic
		struct FRichCurve                                          YCurve;                                                  // 0x00F8(0x0080) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceVector4Curve
	 * Size -> 0x0200 (FullSize[0x0278] - InheritedSize[0x0078])
	 */
	class UNiagaraDataInterfaceVector4Curve : public UNiagaraDataInterfaceCurveBase
	{
	public:
		struct FRichCurve                                          XCurve;                                                  // 0x0078(0x0080) Edit, NativeAccessSpecifierPublic
		struct FRichCurve                                          YCurve;                                                  // 0x00F8(0x0080) Edit, NativeAccessSpecifierPublic
		struct FRichCurve                                          ZCurve;                                                  // 0x0178(0x0080) Edit, NativeAccessSpecifierPublic
		struct FRichCurve                                          WCurve;                                                  // 0x01F8(0x0080) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceVectorCurve
	 * Size -> 0x0180 (FullSize[0x01F8] - InheritedSize[0x0078])
	 */
	class UNiagaraDataInterfaceVectorCurve : public UNiagaraDataInterfaceCurveBase
	{
	public:
		struct FRichCurve                                          XCurve;                                                  // 0x0078(0x0080) Edit, NativeAccessSpecifierPublic
		struct FRichCurve                                          YCurve;                                                  // 0x00F8(0x0080) Edit, NativeAccessSpecifierPublic
		struct FRichCurve                                          ZCurve;                                                  // 0x0178(0x0080) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceVectorField
	 * Size -> 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
	 */
	class UNiagaraDataInterfaceVectorField : public UNiagaraDataInterface
	{
	public:
		class UVectorField*                                        Field;                                                   // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTileX;                                                  // 0x0048(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTileY;                                                  // 0x0049(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTileZ;                                                  // 0x004A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UQI0[0x5];                                   // 0x004B(0x0005) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceVolumeTexture
	 * Size -> 0x0018 (FullSize[0x0058] - InheritedSize[0x0040])
	 */
	class UNiagaraDataInterfaceVolumeTexture : public UNiagaraDataInterface
	{
	public:
		class UVolumeTexture*                                      Texture;                                                 // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2SJD[0x10];                                  // 0x0048(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDebugHUDSettings
	 * Size -> 0x0100 (FullSize[0x0130] - InheritedSize[0x0030])
	 */
	class UNiagaraDebugHUDSettings : public UObject
	{
	public:
		unsigned char                                              UnknownData_L5V6[0x20];                                  // 0x0030(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraDebugHUDSettingsData                        Data;                                                    // 0x0050(0x00E0) Edit, Config, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraEditorDataBase
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UNiagaraEditorDataBase : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraEditorParametersAdapterBase
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UNiagaraEditorParametersAdapterBase : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraSignificanceHandler
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UNiagaraSignificanceHandler : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraSignificanceHandlerDistance
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UNiagaraSignificanceHandlerDistance : public UNiagaraSignificanceHandler
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraSignificanceHandlerAge
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UNiagaraSignificanceHandlerAge : public UNiagaraSignificanceHandler
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraEffectType
	 * Size -> 0x0070 (FullSize[0x00A0] - InheritedSize[0x0030])
	 */
	class UNiagaraEffectType : public UObject
	{
	public:
		ENiagaraScalabilityUpdateFrequency                         UpdateFrequency;                                         // 0x0030(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FQGT[0x3];                                   // 0x0030(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		ENiagaraCullReaction                                       CullReaction;                                            // 0x0034(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZPM2[0x3];                                   // 0x0034(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class UNiagaraSignificanceHandler*                         SignificanceHandler;                                     // 0x0038(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FNiagaraSystemScalabilitySettings>           DetailLevelScalabilitySettings;                          // 0x0040(0x0010) ZeroConstructor, Deprecated, NativeAccessSpecifierPublic
		struct FNiagaraSystemScalabilitySettingsArray              SystemScalabilitySettings;                               // 0x0050(0x0010) Edit, NativeAccessSpecifierPublic
		struct FNiagaraEmitterScalabilitySettingsArray             EmitterScalabilitySettings;                              // 0x0060(0x0010) Edit, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TRJN[0x8];                                   // 0x0070(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UNiagaraBaselineController*                          PerformanceBaselineController;                           // 0x0078(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FNiagaraPerfBaselineStats                           PerfBaselineStats;                                       // 0x0080(0x0010) Config, NoDestructor, NativeAccessSpecifierPrivate
		struct FGuid                                               PerfBaselineVersion;                                     // 0x0090(0x0010) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraEmitter
	 * Size -> 0x0278 (FullSize[0x02A8] - InheritedSize[0x0030])
	 */
	class UNiagaraEmitter : public UObject
	{
	public:
		bool                                                       bLocalSpace;                                             // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDeterminism;                                            // 0x0031(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QA5F[0x2];                                   // 0x0032(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    RandomSeed;                                              // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EParticleAllocationMode                                    AllocationMode;                                          // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8BDK[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    PreAllocationCount;                                      // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraEmitterScriptProperties                     UpdateScriptProps;                                       // 0x0040(0x0028) NativeAccessSpecifierPublic
		struct FNiagaraEmitterScriptProperties                     SpawnScriptProps;                                        // 0x0068(0x0028) NativeAccessSpecifierPublic
		ENiagaraSimTarget                                          SimTarget;                                               // 0x0090(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2O86[0x3];                                   // 0x0091(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBox                                                FixedBounds;                                             // 0x0094(0x001C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    MinDetailLevel;                                          // 0x00B0(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxDetailLevel;                                          // 0x00B4(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraDetailsLevelScaleOverrides                  GlobalSpawnCountScaleOverrides;                          // 0x00B8(0x0014) Deprecated, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VT40[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraPlatformSet                                 Platforms;                                               // 0x00D0(0x0030) Edit, NativeAccessSpecifierPublic
		struct FNiagaraEmitterScalabilityOverrides                 ScalabilityOverrides;                                    // 0x0100(0x0010) Edit, NativeAccessSpecifierPublic
		unsigned char                                              bInterpolatedSpawning : 1;                               // 0x0110(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bFixedBounds : 1;                                        // 0x0110(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseMinDetailLevel : 1;                                  // 0x0110(0x0001) BIT_FIELD Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseMaxDetailLevel : 1;                                  // 0x0110(0x0001) BIT_FIELD Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverrideGlobalSpawnCountScale : 1;                      // 0x0110(0x0001) BIT_FIELD Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bRequiresPersistentIDs : 1;                              // 0x0110(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCombineEventSpawn : 1;                                  // 0x0110(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OSID[0x3];                                   // 0x0111(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxDeltaTimePerTick;                                     // 0x0114(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   DefaultShaderStageIndex;                                 // 0x0118(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   MaxUpdateIterations;                                     // 0x011C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              SpawnStages[0x50];                                       // 0x0120(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              bSimulationStagesEnabled : 1;                            // 0x0170(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDeprecatedShaderStagesEnabled : 1;                      // 0x0170(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bLimitDeltaTime : 1;                                     // 0x0170(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0260[0x7];                                   // 0x0171(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              UniqueEmitterName;                                       // 0x0178(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UNiagaraRendererProperties*>                  RendererProperties;                                      // 0x0188(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FNiagaraEventScriptProperties>               EventHandlerScriptProps;                                 // 0x0198(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<class UNiagaraSimulationStageBase*>                 SimulationStages;                                        // 0x01A8(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		class UNiagaraScript*                                      GPUComputeScript;                                        // 0x01B8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class FName>                                        SharedEventGeneratorIds;                                 // 0x01C0(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Q3IK[0xD8];                                  // 0x01D0(0x00D8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraEventReceiverEmitterAction
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UNiagaraEventReceiverEmitterAction : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UNiagaraEventReceiverEmitterAction_SpawnParticles : public UNiagaraEventReceiverEmitterAction
	{
	public:
		uint32_t                                                   NumParticles;                                            // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VP81[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UNiagaraFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		class UNiagaraComponent* STATIC_SpawnSystemAttached(class UNiagaraSystem* SystemTemplate, class USceneComponent* AttachToComponent, const class FName& attachPointName, const struct FVector& Location, const struct FRotator& Rotation, EAttachLocation LocationType, bool bAutoDestroy, bool bAutoActivate, ENCPoolMethod PoolingMethod, bool bPreCullCheck);
		class UNiagaraComponent* STATIC_SpawnSystemAtLocation(class UObject* WorldContextObject, class UNiagaraSystem* SystemTemplate, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale, bool bAutoDestroy, bool bAutoActivate, ENCPoolMethod PoolingMethod, bool bPreCullCheck);
		void STATIC_SetVolumeTextureObject(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class UVolumeTexture* Texture);
		void STATIC_SetTextureObject(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class UTexture* Texture);
		void STATIC_SetTexture2DArrayObject(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class UTexture2DArray* Texture);
		void STATIC_SetSkeletalMeshDataInterfaceSamplingRegions(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, TArray<class FName> SamplingRegions);
		void STATIC_OverrideSystemUserVariableStaticMeshComponent(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class UStaticMeshComponent* StaticMeshComponent);
		void STATIC_OverrideSystemUserVariableStaticMesh(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class UStaticMesh* StaticMesh);
		void STATIC_OverrideSystemUserVariableSkeletalMeshComponent(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class USkeletalMeshComponent* SkeletalMeshComponent);
		class UNiagaraParameterCollectionInstance* STATIC_GetNiagaraParameterCollection(class UObject* WorldContextObject, class UNiagaraParameterCollection* Collection);
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraLightRendererProperties
	 * Size -> 0x02B8 (FullSize[0x0338] - InheritedSize[0x0080])
	 */
	class UNiagaraLightRendererProperties : public UNiagaraRendererProperties
	{
	public:
		unsigned char                                              bUseInverseSquaredFalloff : 1;                           // 0x0080(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAffectsTranslucency : 1;                                // 0x0080(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAlphaScalesBrightness : 1;                              // 0x0080(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MBMA[0x3];                                   // 0x0081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RadiusScale;                                             // 0x0084(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DefaultExponent;                                         // 0x0088(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ColorAdd;                                                // 0x008C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RendererVisibility;                                      // 0x0098(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5DMJ[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraVariableAttributeBinding                    LightRenderingEnabledBinding;                            // 0x00A0(0x0058) Edit, AdvancedDisplay, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    LightExponentBinding;                                    // 0x00F8(0x0058) Edit, AdvancedDisplay, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    PositionBinding;                                         // 0x0150(0x0058) Edit, AdvancedDisplay, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    ColorBinding;                                            // 0x01A8(0x0058) Edit, AdvancedDisplay, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    RadiusBinding;                                           // 0x0200(0x0058) Edit, AdvancedDisplay, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    VolumetricScatteringBinding;                             // 0x0258(0x0058) Edit, AdvancedDisplay, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    RendererVisibilityTagBinding;                            // 0x02B0(0x0058) Edit, AdvancedDisplay, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q9T5[0x30];                                  // 0x0308(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraMeshRendererProperties
	 * Size -> 0x0820 (FullSize[0x08A0] - InheritedSize[0x0080])
	 */
	class UNiagaraMeshRendererProperties : public UNiagaraRendererProperties
	{
	public:
		TArray<struct FNiagaraMeshRendererMeshProperties>          Meshes;                                                  // 0x0080(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		ENiagaraRendererSourceDataMode                             SourceMode;                                              // 0x0090(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENiagaraSortMode                                           SortMode;                                                // 0x0091(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S2Y6[0x2];                                   // 0x0092(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bOverrideMaterials : 1;                                  // 0x0094(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSortOnlyWhenTranslucent : 1;                            // 0x0094(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bGpuLowLatencyTranslucency : 1;                          // 0x0094(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSubImageBlend : 1;                                      // 0x0094(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEnableFrustumCulling : 1;                               // 0x0094(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEnableCameraDistanceCulling : 1;                        // 0x0094(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEnableMeshFlipbook : 1;                                 // 0x0094(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3QW8[0x3];                                   // 0x0095(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FNiagaraMeshMaterialOverride>                OverrideMaterials;                                       // 0x0098(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FVector2D                                           SubImageSize;                                            // 0x00A8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENiagaraMeshFacingMode                                     FacingMode;                                              // 0x00B0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BVMA[0x3];                                   // 0x00B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bLockedAxisEnable : 1;                                   // 0x00B4(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LE8Y[0x3];                                   // 0x00B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             LockedAxis;                                              // 0x00B8(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENiagaraMeshLockedAxisSpace                                LockedAxisSpace;                                         // 0x00C4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QB0I[0x3];                                   // 0x00C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinCameraDistance;                                       // 0x00C8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxCameraDistance;                                       // 0x00CC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   RendererVisibility;                                      // 0x00D0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9KB3[0x4];                                   // 0x00D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraVariableAttributeBinding                    PositionBinding;                                         // 0x00D8(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    ColorBinding;                                            // 0x0130(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    VelocityBinding;                                         // 0x0188(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    MeshOrientationBinding;                                  // 0x01E0(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    ScaleBinding;                                            // 0x0238(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    SubImageIndexBinding;                                    // 0x0290(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    DynamicMaterialBinding;                                  // 0x02E8(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    DynamicMaterial1Binding;                                 // 0x0340(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    DynamicMaterial2Binding;                                 // 0x0398(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    DynamicMaterial3Binding;                                 // 0x03F0(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    MaterialRandomBinding;                                   // 0x0448(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    CustomSortingBinding;                                    // 0x04A0(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    NormalizedAgeBinding;                                    // 0x04F8(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    CameraOffsetBinding;                                     // 0x0550(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    RendererVisibilityTagBinding;                            // 0x05A8(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    MeshIndexBinding;                                        // 0x0600(0x0058) Edit, NativeAccessSpecifierPublic
		TArray<struct FNiagaraMaterialAttributeBinding>            MaterialParameterBindings;                               // 0x0658(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    PrevPositionBinding;                                     // 0x0668(0x0058) Transient, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    PrevScaleBinding;                                        // 0x06C0(0x0058) Transient, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    PrevMeshOrientationBinding;                              // 0x0718(0x0058) Transient, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    PrevCameraOffsetBinding;                                 // 0x0770(0x0058) Transient, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    PrevVelocityBinding;                                     // 0x07C8(0x0058) Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PHEZ[0x68];                                  // 0x0820(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMesh*                                         ParticleMesh;                                            // 0x0888(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             PivotOffset;                                             // 0x0890(0x000C) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		ENiagaraMeshPivotOffsetSpace                               PivotOffsetSpace;                                        // 0x089C(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ST2T[0x3];                                   // 0x089D(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraMessageDataBase
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UNiagaraMessageDataBase : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraParameterCollectionInstance
	 * Size -> 0x00B8 (FullSize[0x00E8] - InheritedSize[0x0030])
	 */
	class UNiagaraParameterCollectionInstance : public UObject
	{
	public:
		class UNiagaraParameterCollection*                         Collection;                                              // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FNiagaraVariable>                            OverridenParameters;                                     // 0x0038(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FNiagaraParameterStore                              ParameterStorage;                                        // 0x0048(0x0078) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_OHVW[0x28];                                  // 0x00C0(0x0028) MISSED OFFSET (PADDING)

	public:
		void SetVectorParameter(const class FString& InVariableName, const struct FVector& InValue);
		void SetVector4Parameter(const class FString& InVariableName, const struct FVector4& InValue);
		void SetVector2DParameter(const class FString& InVariableName, const struct FVector2D& InValue);
		void SetQuatParameter(const class FString& InVariableName, const struct FQuat& InValue);
		void SetIntParameter(const class FString& InVariableName, int32_t InValue);
		void SetFloatParameter(const class FString& InVariableName, float InValue);
		void SetColorParameter(const class FString& InVariableName, const struct FLinearColor& InValue);
		void SetBoolParameter(const class FString& InVariableName, bool InValue);
		struct FVector GetVectorParameter(const class FString& InVariableName);
		struct FVector4 GetVector4Parameter(const class FString& InVariableName);
		struct FVector2D GetVector2DParameter(const class FString& InVariableName);
		struct FQuat GetQuatParameter(const class FString& InVariableName);
		int32_t GetIntParameter(const class FString& InVariableName);
		float GetFloatParameter(const class FString& InVariableName);
		struct FLinearColor GetColorParameter(const class FString& InVariableName);
		bool GetBoolParameter(const class FString& InVariableName);
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraParameterCollection
	 * Size -> 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
	 */
	class UNiagaraParameterCollection : public UObject
	{
	public:
		class FName                                                Namespace;                                               // 0x0030(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MT4C[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FNiagaraVariable>                            Parameters;                                              // 0x0040(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		class UMaterialParameterCollection*                        SourceMaterialCollection;                                // 0x0050(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UNiagaraParameterCollectionInstance*                 DefaultInstance;                                         // 0x0058(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGuid                                               CompileId;                                               // 0x0060(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraParameterDefinitionsBase
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UNiagaraParameterDefinitionsBase : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraBaselineController
	 * Size -> 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
	 */
	class UNiagaraBaselineController : public UObject
	{
	public:
		float                                                      TestDuration;                                            // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XMYK[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UNiagaraEffectType*                                  EffectType;                                              // 0x0038(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ANiagaraPerfBaselineActor*                           Owner;                                                   // 0x0040(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              System[0x30];                                            // 0x0048(0x0030) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		bool OnTickTest();
		void OnOwnerTick(float DeltaTime);
		void OnEndTest(const struct FNiagaraPerfBaselineStats& Stats);
		void OnBeginTest();
		class UNiagaraSystem* GetSystem();
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraBaselineController_Basic
	 * Size -> 0x0018 (FullSize[0x0090] - InheritedSize[0x0078])
	 */
	class UNiagaraBaselineController_Basic : public UNiagaraBaselineController
	{
	public:
		int32_t                                                    NumInstances;                                            // 0x0078(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_OOBZ[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UNiagaraComponent*>                           SpawnedComponents;                                       // 0x0080(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraPerfBaselineActor
	 * Size -> 0x0010 (FullSize[0x0240] - InheritedSize[0x0230])
	 */
	class ANiagaraPerfBaselineActor : public AActor
	{
	public:
		class UNiagaraBaselineController*                          Controller;                                              // 0x0230(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextRenderComponent*                                label;                                                   // 0x0238(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraPrecompileContainer
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UNiagaraPrecompileContainer : public UObject
	{
	public:
		TArray<class UNiagaraScript*>                              Scripts;                                                 // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class UNiagaraSystem*                                      System;                                                  // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraPreviewBase
	 * Size -> 0x0000 (FullSize[0x0230] - InheritedSize[0x0230])
	 */
	class ANiagaraPreviewBase : public AActor
	{
	public:
		void SetSystem(class UNiagaraSystem* InSystem);
		void SetLabelText(const class FText& InXAxisText, const class FText& InYAxisText);
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraPreviewAxis
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UNiagaraPreviewAxis : public UObject
	{
	public:
		int32_t Num();
		void ApplyToPreview(class UNiagaraComponent* PreviewComponent, int32_t PreviewIndex, bool bIsXAxis, class FString* OutLabelText);
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraPreviewAxis_InterpParamBase
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UNiagaraPreviewAxis_InterpParamBase : public UNiagaraPreviewAxis
	{
	public:
		class FName                                                Param;                                                   // 0x0030(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    Count;                                                   // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraPreviewAxis_InterpParamInt32
	 * Size -> 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
	 */
	class UNiagaraPreviewAxis_InterpParamInt32 : public UNiagaraPreviewAxis_InterpParamBase
	{
	public:
		int32_t                                                    Min;                                                     // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    Max;                                                     // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraPreviewAxis_InterpParamFloat
	 * Size -> 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
	 */
	class UNiagaraPreviewAxis_InterpParamFloat : public UNiagaraPreviewAxis_InterpParamBase
	{
	public:
		float                                                      Min;                                                     // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      Max;                                                     // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraPreviewAxis_InterpParamVector2D
	 * Size -> 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
	 */
	class UNiagaraPreviewAxis_InterpParamVector2D : public UNiagaraPreviewAxis_InterpParamBase
	{
	public:
		struct FVector2D                                           Min;                                                     // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector2D                                           Max;                                                     // 0x0048(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraPreviewAxis_InterpParamVector
	 * Size -> 0x0018 (FullSize[0x0058] - InheritedSize[0x0040])
	 */
	class UNiagaraPreviewAxis_InterpParamVector : public UNiagaraPreviewAxis_InterpParamBase
	{
	public:
		struct FVector                                             Min;                                                     // 0x0040(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             Max;                                                     // 0x004C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraPreviewAxis_InterpParamVector4
	 * Size -> 0x0020 (FullSize[0x0060] - InheritedSize[0x0040])
	 */
	class UNiagaraPreviewAxis_InterpParamVector4 : public UNiagaraPreviewAxis_InterpParamBase
	{
	public:
		struct FVector4                                            Min;                                                     // 0x0040(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector4                                            Max;                                                     // 0x0050(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraPreviewAxis_InterpParamLinearColor
	 * Size -> 0x0020 (FullSize[0x0060] - InheritedSize[0x0040])
	 */
	class UNiagaraPreviewAxis_InterpParamLinearColor : public UNiagaraPreviewAxis_InterpParamBase
	{
	public:
		struct FLinearColor                                        Min;                                                     // 0x0040(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FLinearColor                                        Max;                                                     // 0x0050(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraPreviewGrid
	 * Size -> 0x0050 (FullSize[0x0280] - InheritedSize[0x0230])
	 */
	class ANiagaraPreviewGrid : public AActor
	{
	public:
		class UNiagaraSystem*                                      System;                                                  // 0x0230(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENiagaraPreviewGridResetMode                               ResetMode;                                               // 0x0238(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZUMK[0x7];                                   // 0x0239(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UNiagaraPreviewAxis*                                 PreviewAxisX;                                            // 0x0240(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UNiagaraPreviewAxis*                                 PreviewAxisY;                                            // 0x0248(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              PreviewClass;                                            // 0x0250(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpacingX;                                                // 0x0258(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpacingY;                                                // 0x025C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumX;                                                    // 0x0260(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    NumY;                                                    // 0x0264(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UChildActorComponent*>                        PreviewComponents;                                       // 0x0268(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4FA5[0x8];                                   // 0x0278(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetPaused(bool bPaused);
		void GetPreviews(TArray<class UNiagaraComponent*>* OutPreviews);
		void DeactivatePreviews();
		void ActivatePreviews(bool bReset);
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraRibbonRendererProperties
	 * Size -> 0x07E8 (FullSize[0x0868] - InheritedSize[0x0080])
	 */
	class UNiagaraRibbonRendererProperties : public UNiagaraRendererProperties
	{
	public:
		class UMaterialInterface*                                  Material;                                                // 0x0080(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraUserParameterBinding                        MaterialUserParamBinding;                                // 0x0088(0x0020) Edit, NativeAccessSpecifierPublic
		ENiagaraRibbonFacingMode                                   FacingMode;                                              // 0x00A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J1JI[0x3];                                   // 0x00A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraRibbonUVSettings                            UV0Settings;                                             // 0x00AC(0x0024) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FNiagaraRibbonUVSettings                            UV1Settings;                                             // 0x00D0(0x0024) Edit, NoDestructor, NativeAccessSpecifierPublic
		ENiagaraRibbonDrawDirection                                DrawDirection;                                           // 0x00F4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENiagaraRibbonShapeMode                                    Shape;                                                   // 0x00F5(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableAccurateGeometry;                                 // 0x00F6(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ITA7[0x1];                                   // 0x00F7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    WidthSegmentationCount;                                  // 0x00F8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MultiPlaneCount;                                         // 0x00FC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TubeSubdivisions;                                        // 0x0100(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6CLA[0x4];                                   // 0x0104(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FNiagaraRibbonShapeCustomVertex>             CustomVertices;                                          // 0x0108(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      CurveTension;                                            // 0x0118(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENiagaraRibbonTessellationMode                             TessellationMode;                                        // 0x011C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q42M[0x3];                                   // 0x011D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TessellationFactor;                                      // 0x0120(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseConstantFactor;                                      // 0x0124(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1Z3L[0x3];                                   // 0x0125(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TessellationAngle;                                       // 0x0128(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bScreenSpaceTessellation;                                // 0x012C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_738X[0x3];                                   // 0x012D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraVariableAttributeBinding                    PositionBinding;                                         // 0x0130(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    ColorBinding;                                            // 0x0188(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    VelocityBinding;                                         // 0x01E0(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    NormalizedAgeBinding;                                    // 0x0238(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    RibbonTwistBinding;                                      // 0x0290(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    RibbonWidthBinding;                                      // 0x02E8(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    RibbonFacingBinding;                                     // 0x0340(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    RibbonIdBinding;                                         // 0x0398(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    RibbonLinkOrderBinding;                                  // 0x03F0(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    MaterialRandomBinding;                                   // 0x0448(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    DynamicMaterialBinding;                                  // 0x04A0(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    DynamicMaterial1Binding;                                 // 0x04F8(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    DynamicMaterial2Binding;                                 // 0x0550(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    DynamicMaterial3Binding;                                 // 0x05A8(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    RibbonUVDistance;                                        // 0x0600(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    U0OverrideBinding;                                       // 0x0658(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    V0RangeOverrideBinding;                                  // 0x06B0(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    U1OverrideBinding;                                       // 0x0708(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    V1RangeOverrideBinding;                                  // 0x0760(0x0058) Edit, NativeAccessSpecifierPublic
		TArray<struct FNiagaraMaterialAttributeBinding>            MaterialParameterBindings;                               // 0x07B8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A9SC[0xA0];                                  // 0x07C8(0x00A0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraScript
	 * Size -> 0x02B8 (FullSize[0x02E8] - InheritedSize[0x0030])
	 */
	class UNiagaraScript : public UNiagaraScriptBase
	{
	public:
		ENiagaraScriptUsage                                        Usage;                                                   // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4TM9[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               UsageId;                                                 // 0x0034(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RLUF[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraParameterStore                              RapidIterationParameters;                                // 0x0048(0x0078) NativeAccessSpecifierPublic
		struct FNiagaraScriptExecutionParameterStore               ScriptExecutionParamStore;                               // 0x00C0(0x0098) NativeAccessSpecifierPrivate
		TArray<struct FNiagaraBoundParameter>                      ScriptExecutionBoundParameters;                          // 0x0158(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		struct FNiagaraVMExecutableDataId                          CachedScriptVMId;                                        // 0x0168(0x0058) HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2OA7[0x10];                                  // 0x01C0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraVMExecutableData                            CachedScriptVM;                                          // 0x01D0(0x00F0) NativeAccessSpecifierPrivate
		TArray<class UNiagaraParameterCollection*>                 CachedParameterCollectionReferences;                     // 0x02C0(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FNiagaraScriptDataInterfaceInfo>             CachedDefaultDataInterfaces;                             // 0x02D0(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6LGY[0x8];                                   // 0x02E0(0x0008) MISSED OFFSET (PADDING)

	public:
		void RaiseOnGPUCompilationComplete();
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraScriptSourceBase
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UNiagaraScriptSourceBase : public UObject
	{
	public:
		unsigned char                                              UnknownData_0PTW[0x20];                                  // 0x0030(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraSettings
	 * Size -> 0x0098 (FullSize[0x00E0] - InheritedSize[0x0048])
	 */
	class UNiagaraSettings : public UDeveloperSettings
	{
	public:
		struct FSoftObjectPath                                     DefaultEffectType;                                       // 0x0048(0x0020) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FText>                                        QualityLevels;                                           // 0x0068(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
		TMap<class FString, class FText>                           ComponentRendererWarningsPerClass;                       // 0x0078(0x0050) Edit, Config, NativeAccessSpecifierPublic
		ETextureRenderTargetFormat                                 DefaultRenderTargetFormat;                               // 0x00C8(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENiagaraGpuBufferFormat                                    DefaultGridFormat;                                       // 0x00C9(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2BD9[0x2];                                   // 0x00CA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ENiagaraDefaultRendererMotionVectorSetting                 DefaultRendererMotionVectorSetting;                      // 0x00CC(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9X89[0x3];                                   // 0x00CA(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		ENDISkelMesh_GpuMaxInfluences                              NDISkelMesh_GpuMaxInfluences;                            // 0x00D0(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENDISkelMesh_GpuUniformSamplingFormat                      NDISkelMesh_GpuUniformSamplingFormat;                    // 0x00D1(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENDISkelMesh_AdjacencyTriangleIndexFormat                  NDISkelMesh_AdjacencyTriangleIndexFormat;                // 0x00D2(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_68V2[0x5];                                   // 0x00D3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UNiagaraEffectType*                                  DefaultEffectTypePtr;                                    // 0x00D8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraSimulationStageBase
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UNiagaraSimulationStageBase : public UNiagaraMergeable
	{
	public:
		class UNiagaraScript*                                      Script;                                                  // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SimulationStageName;                                     // 0x0038(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEnabled : 1;                                            // 0x0044(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SKHD[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraSimulationStageGeneric
	 * Size -> 0x0030 (FullSize[0x0078] - InheritedSize[0x0048])
	 */
	class UNiagaraSimulationStageGeneric : public UNiagaraSimulationStageBase
	{
	public:
		ENiagaraIterationSource                                    IterationSource;                                         // 0x0048(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ROA5[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Iterations;                                              // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSpawnOnly : 1;                                          // 0x0050(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDisablePartialParticleUpdate : 1;                       // 0x0050(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OL6A[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraVariableDataInterfaceBinding                DataInterface;                                           // 0x0058(0x0020) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraSpriteRendererProperties
	 * Size -> 0x0A38 (FullSize[0x0AB8] - InheritedSize[0x0080])
	 */
	class UNiagaraSpriteRendererProperties : public UNiagaraRendererProperties
	{
	public:
		class UMaterialInterface*                                  Material;                                                // 0x0080(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENiagaraRendererSourceDataMode                             SourceMode;                                              // 0x0088(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5BK4[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraUserParameterBinding                        MaterialUserParamBinding;                                // 0x0090(0x0020) Edit, NativeAccessSpecifierPublic
		ENiagaraSpriteAlignment                                    Alignment;                                               // 0x00B0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENiagaraSpriteFacingMode                                   FacingMode;                                              // 0x00B1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3MFQ[0x2];                                   // 0x00B2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           PivotInUVSpace;                                          // 0x00B4(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENiagaraSortMode                                           SortMode;                                                // 0x00BC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TYSE[0x3];                                   // 0x00BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           SubImageSize;                                            // 0x00C0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSubImageBlend : 1;                                      // 0x00C8(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bRemoveHMDRollInVR : 1;                                  // 0x00C8(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSortOnlyWhenTranslucent : 1;                            // 0x00C8(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bGpuLowLatencyTranslucency : 1;                          // 0x00C8(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9GEA[0x3];                                   // 0x00C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinFacingCameraBlendDistance;                            // 0x00CC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxFacingCameraBlendDistance;                            // 0x00D0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEnableCameraDistanceCulling : 1;                        // 0x00D4(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ST0O[0x3];                                   // 0x00D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinCameraDistance;                                       // 0x00D8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxCameraDistance;                                       // 0x00DC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   RendererVisibility;                                      // 0x00E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4Y1G[0x4];                                   // 0x00E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraVariableAttributeBinding                    PositionBinding;                                         // 0x00E8(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    ColorBinding;                                            // 0x0140(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    VelocityBinding;                                         // 0x0198(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    SpriteRotationBinding;                                   // 0x01F0(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    SpriteSizeBinding;                                       // 0x0248(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    SpriteFacingBinding;                                     // 0x02A0(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    SpriteAlignmentBinding;                                  // 0x02F8(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    SubImageIndexBinding;                                    // 0x0350(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    DynamicMaterialBinding;                                  // 0x03A8(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    DynamicMaterial1Binding;                                 // 0x0400(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    DynamicMaterial2Binding;                                 // 0x0458(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    DynamicMaterial3Binding;                                 // 0x04B0(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    CameraOffsetBinding;                                     // 0x0508(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    UVScaleBinding;                                          // 0x0560(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    PivotOffsetBinding;                                      // 0x05B8(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    MaterialRandomBinding;                                   // 0x0610(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    CustomSortingBinding;                                    // 0x0668(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    NormalizedAgeBinding;                                    // 0x06C0(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    RendererVisibilityTagBinding;                            // 0x0718(0x0058) Edit, NativeAccessSpecifierPublic
		TArray<struct FNiagaraMaterialAttributeBinding>            MaterialParameterBindings;                               // 0x0770(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    PrevPositionBinding;                                     // 0x0780(0x0058) Transient, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    PrevVelocityBinding;                                     // 0x07D8(0x0058) Transient, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    PrevSpriteRotationBinding;                               // 0x0830(0x0058) Transient, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    PrevSpriteSizeBinding;                                   // 0x0888(0x0058) Transient, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    PrevSpriteFacingBinding;                                 // 0x08E0(0x0058) Transient, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    PrevSpriteAlignmentBinding;                              // 0x0938(0x0058) Transient, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    PrevCameraOffsetBinding;                                 // 0x0990(0x0058) Transient, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    PrevPivotOffsetBinding;                                  // 0x09E8(0x0058) Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7XFA[0x78];                                  // 0x0A40(0x0078) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraSystem
	 * Size -> 0x0480 (FullSize[0x04B8] - InheritedSize[0x0038])
	 */
	class UNiagaraSystem : public UFXSystemAsset
	{
	public:
		bool                                                       bDumpDebugSystemInfo;                                    // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDumpDebugEmitterInfo;                                   // 0x0039(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_24BN[0x1];                                   // 0x003A(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bRequireCurrentFrameData;                                // 0x003B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bFixedBounds : 1;                                        // 0x003C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0ZQX[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UNiagaraEffectType*                                  EffectType;                                              // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bOverrideScalabilitySettings;                            // 0x0048(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1ICK[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FNiagaraSystemScalabilityOverride>           ScalabilityOverrides;                                    // 0x0050(0x0010) ZeroConstructor, Deprecated, Protected, NativeAccessSpecifierProtected
		struct FNiagaraSystemScalabilityOverrides                  SystemScalabilityOverrides;                              // 0x0060(0x0010) Edit, Protected, NativeAccessSpecifierProtected
		TArray<struct FNiagaraEmitterHandle>                       EmitterHandles;                                          // 0x0070(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<class UNiagaraParameterCollectionInstance*>         ParameterCollectionOverrides;                            // 0x0080(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		class UNiagaraScript*                                      SystemSpawnScript;                                       // 0x0090(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UNiagaraScript*                                      SystemUpdateScript;                                      // 0x0098(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_E9SV[0x10];                                  // 0x00A0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraSystemCompiledData                          SystemCompiledData;                                      // 0x00B0(0x0230) Protected, NativeAccessSpecifierProtected
		struct FNiagaraUserRedirectionParameterStore               ExposedParameters;                                       // 0x02E0(0x00C8) Protected, NativeAccessSpecifierProtected
		struct FBox                                                FixedBounds;                                             // 0x03A8(0x001C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bAutoDeactivate;                                         // 0x03C4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_TL1Q[0x3];                                   // 0x03C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WarmupTime;                                              // 0x03C8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    WarmupTickCount;                                         // 0x03CC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      WarmupTickDelta;                                         // 0x03D0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHasSystemScriptDIsWithPerInstanceData;                  // 0x03D4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bNeedsGPUContextInitForDataInterfaces;                   // 0x03D5(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_AVFO[0x2];                                   // 0x03D6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        UserDINamesReadInSystemScripts;                          // 0x03D8(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_83I0[0xD0];                                  // 0x03E8(0x00D0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
