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
	 * Class GFXUtilities.BatchMeshCommands
	 * Size -> 0x0090 (FullSize[0x02B0] - InheritedSize[0x0220])
	 */
	class UBatchMeshCommands : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_7BVH[0x58];                                  // 0x0220(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FMaterialNamedGroup>                         Groups;                                                  // 0x0278(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FMaterialHelperOriginalMeshState>            TargetMeshes;                                            // 0x0288(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		class FString                                              _materialGroupName;                                      // 0x0298(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ATZY[0x8];                                   // 0x02A8(0x0008) MISSED OFFSET (PADDING)

	public:
		void UpdateMaterials();
		void SetVectorParameter(const class FName& ParameterName, const struct FVector& NewValue);
		void SetTextureParameter(const class FName& ParameterName, class UTexture* newTexture);
		void SetStencilIntegerScalarParameter(const class FName& ParameterName, int32_t NewValue);
		void SetScalarParameter(const class FName& ParameterName, float NewValue);
		void SetRenderInMainPass(bool inRenderInMainPass);
		void SetRenderInCustomDepth(bool renderInCustomDepth);
		void SetRenderInCustomColourNoDepth(bool renderInCustomColour);
		void SetReceivesDecals(bool receivesDecals);
		void SetMaterial(const class FString& GroupName);
		void SetLightingChannelForAllMeshes(const struct FLightingChannels& LightingChannels);
		void SetCustomDepthStencilValue(int32_t stencilValue);
		void SetColourParameter(const class FName& ParameterName, const struct FLinearColor& NewValue);
		void SetCastCinematicShadows(bool castCinematicShadows);
		void SetAllToSameMaterial(class UMaterialInterface* MaterialInterface);
		void ResetMaterials();
		bool CopyFirstScalarParameter(const class FName& ParameterName, float* OutValue);
		void BatchSetVisibility(bool bNewVisibility, bool bPropagateToChildren);
		void BatchSetSkipComponentAndChildrenTransformUpdate(bool Skip);
		void BatchSetComponentTickEnabled(bool Enabled);
		static UClass* StaticClass();
	};

	/**
	 * Class GFXUtilities.AlternatingColor
	 * Size -> 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
	 */
	class UAlternatingColor : public UObject
	{
	public:
		struct FLinearColor                                        FirstColor;                                              // 0x0030(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FLinearColor                                        SecondColor;                                             // 0x0040(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      ColorChangePeriod;                                       // 0x0050(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_VNG8[0x24];                                  // 0x0054(0x0024) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GFXUtilities.BaseOutlineRenderStrategy
	 * Size -> 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
	 */
	class UBaseOutlineRenderStrategy : public UObject
	{
	public:
		TArray<class UBatchMeshCommands*>                          _batchCommands;                                          // 0x0030(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WXOG[0x30];                                  // 0x0040(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GFXUtilities.ClippableProviderComponent
	 * Size -> 0x0068 (FullSize[0x0120] - InheritedSize[0x00B8])
	 */
	class UClippableProviderComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_CTID[0x18];                                  // 0x00B8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              _ignoredPrimitives[0x50];                                // 0x00B8(0x0050) UNKNOWN PROPERTY: SetProperty

	public:
		void SetIgnoredPrimitives(TArray<class UPrimitiveComponent*> ignoredPrimitives);
		void AddIgnoredPrimitives(TArray<class UPrimitiveComponent*> ignoredPrimitives);
		static UClass* StaticClass();
	};

	/**
	 * Class GFXUtilities.ClonedMeshComponent
	 * Size -> 0x00A0 (FullSize[0x0350] - InheritedSize[0x02B0])
	 */
	class UClonedMeshComponent : public UBatchMeshCommands
	{
	public:
		TMap<class USceneComponent*, class UMeshComponent*>        _originalToClone;                                        // 0x02A8(0x0050) ExportObject, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TMap<class UMeshComponent*, class USceneComponent*>        _cloneToOriginal;                                        // 0x02F8(0x0050) ExportObject, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_S1AS[0x8];                                   // 0x0348(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GFXUtilities.ClonedMeshComponentTranslucentOutline
	 * Size -> 0x0000 (FullSize[0x0350] - InheritedSize[0x0350])
	 */
	class UClonedMeshComponentTranslucentOutline : public UClonedMeshComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GFXUtilities.ClonedStaticMeshComponent
	 * Size -> 0x0000 (FullSize[0x0540] - InheritedSize[0x0540])
	 */
	class UClonedStaticMeshComponent : public UStaticMeshComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GFXUtilities.ClonedSkeletalMeshComponent
	 * Size -> 0x0000 (FullSize[0x0F80] - InheritedSize[0x0F80])
	 */
	class UClonedSkeletalMeshComponent : public USkeletalMeshComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GFXUtilities.CustomDepthOutlineRenderStrategy
	 * Size -> 0x0018 (FullSize[0x0088] - InheritedSize[0x0070])
	 */
	class UCustomDepthOutlineRenderStrategy : public UBaseOutlineRenderStrategy
	{
	public:
		class UMaterialInterface*                                  _replacementMaterial;                                    // 0x0070(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UBatchMeshCommands*>                          _translucentCopies;                                      // 0x0078(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GFXUtilities.DBDReflectionCaptureSpawnerComponent
	 * Size -> 0x0050 (FullSize[0x0270] - InheritedSize[0x0220])
	 */
	class UDBDReflectionCaptureSpawnerComponent : public USceneComponent
	{
	public:
		class UTextureCube*                                        Cubemap;                                                 // 0x0220(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SourceCubemapAngle;                                      // 0x0228(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Brightness;                                              // 0x022C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ContributionFactor;                                      // 0x0230(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      IBLMultiplicator;                                        // 0x0234(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanBeTinted;                                            // 0x0238(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZEUF[0x3];                                   // 0x0239(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CaptureOffset;                                           // 0x023C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4J5B[0x8];                                   // 0x0248(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AReflectionCapture*>                          SpawnedReflectionCaptures;                               // 0x0250(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		TArray<class UReflectionCaptureComponent*>                 SpawnedReflectionCaptureComponents;                      // 0x0260(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected

	public:
		void SetIBLMultiplicator(float IBLMultiplicator);
		void SetContributionFactor(float ContributionFactor);
		void SetBrightness(float Brightness);
		static UClass* StaticClass();
	};

	/**
	 * Class GFXUtilities.DBDBoxReflectionCaptureSpawnerComponent
	 * Size -> 0x0020 (FullSize[0x0290] - InheritedSize[0x0270])
	 */
	class UDBDBoxReflectionCaptureSpawnerComponent : public UDBDReflectionCaptureSpawnerComponent
	{
	public:
		struct FVector                                             InfluenceBox;                                            // 0x0270(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BoxTransitionDistance;                                   // 0x027C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBoxComponent*                                       PreviewInfluenceBox;                                     // 0x0280(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBoxComponent*                                       PreviewCaptureBox;                                       // 0x0288(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GFXUtilities.DBDCullDistanceVolumeComponent
	 * Size -> 0x0030 (FullSize[0x0250] - InheritedSize[0x0220])
	 */
	class UDBDCullDistanceVolumeComponent : public USceneComponent
	{
	public:
		TArray<struct FDBDCullDistanceSizePair>                    CullDistances;                                           // 0x0218(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FVector                                             InfluenceBox;                                            // 0x0228(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Enabled;                                                 // 0x0234(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Unbound;                                                 // 0x0235(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YZIV[0x2];                                   // 0x0236(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBoxComponent*                                       _previewInfluenceBox;                                    // 0x0238(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_I3Q6[0x10];                                  // 0x0240(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GFXUtilities.DBDSphereReflectionCaptureSpawnerComponent
	 * Size -> 0x0010 (FullSize[0x0280] - InheritedSize[0x0270])
	 */
	class UDBDSphereReflectionCaptureSpawnerComponent : public UDBDReflectionCaptureSpawnerComponent
	{
	public:
		float                                                      InfluenceRadius;                                         // 0x0270(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LUQK[0x4];                                   // 0x0274(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDrawSphereComponent*                                PreviewInfluenceRadius;                                  // 0x0278(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GFXUtilities.GFXUtilities
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UGFXUtilities : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_ActivateVFX(class USkeletalMeshComponent* SkeletalMeshComponent, bool Active);
		static UClass* StaticClass();
	};

	/**
	 * Class GFXUtilities.InFrustumComponent
	 * Size -> 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
	 */
	class UInFrustumComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_MVE8[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GFXUtilities.LightIntensityTimelineComponent
	 * Size -> 0x0058 (FullSize[0x0110] - InheritedSize[0x00B8])
	 */
	class ULightIntensityTimelineComponent : public UActorComponent
	{
	public:
		TArray<struct FLightUpdate>                                lights;                                                  // 0x00B8(0x0010) ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<struct FLightMaterialUpdate>                        materialHelpers;                                         // 0x00C8(0x0010) ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		class UCurveFloat*                                         intensityCurve;                                          // 0x00D8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       randomizeStart;                                          // 0x00E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       randomizeLength;                                         // 0x00E1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1EID[0x2];                                   // 0x00E2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      minLength;                                               // 0x00E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      maxLength;                                               // 0x00E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       normalizeCurve;                                          // 0x00EC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       startTicking;                                            // 0x00ED(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELightUnits                                                inputLightUnit;                                          // 0x00EE(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0XMD[0x1];                                   // 0x00EF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnTimelineFinished;                                      // 0x00F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RDK6[0x10];                                  // 0x0100(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetRandomizeLength(bool isRandom);
		void SetMinLength(float newMinValue);
		void SetMaxLength(float newMaxValue);
		void SetLightToMaxValue();
		void SetLightCurve(class UCurveFloat* lightcurve);
		void Reset();
		void RegisterForTick();
		void DeactivateTick();
		void AddMaterialHelper(class UMaterialHelper* matHelper, const class FName& propName, float Multiplier);
		void AddLight(class ULightComponent* Light, float Multiplier);
		static UClass* StaticClass();
	};

	/**
	 * Class GFXUtilities.MaterialExpressionBHVRCustomColorOutput
	 * Size -> 0x0020 (FullSize[0x0068] - InheritedSize[0x0048])
	 */
	class UMaterialExpressionBHVRCustomColorOutput : public UMaterialExpressionCustomOutput
	{
	public:
		struct FExpressionInput                                    Input;                                                   // 0x0048(0x001C) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZQJX[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GFXUtilities.MaterialExpressionBHVRCustomColorSampler
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UMaterialExpressionBHVRCustomColorSampler : public UMaterialExpressionCustomOutput
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GFXUtilities.MaterialHelper
	 * Size -> 0x0000 (FullSize[0x02B0] - InheritedSize[0x02B0])
	 */
	class UMaterialHelper : public UBatchMeshCommands
	{
	public:
		void RefreshMeshes();
		void RefreshMesh(class UMeshComponent* mc);
		static UClass* StaticClass();
	};

	/**
	 * Class GFXUtilities.MaterialHelperUnaffectedStaticMeshComp
	 * Size -> 0x0000 (FullSize[0x0540] - InheritedSize[0x0540])
	 */
	class UMaterialHelperUnaffectedStaticMeshComp : public UStaticMeshComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GFXUtilities.MeshCloningFactory
	 * Size -> 0x0000 (FullSize[0x02B0] - InheritedSize[0x02B0])
	 */
	class UMeshCloningFactory : public UBatchMeshCommands
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GFXUtilities.OuterlineComponent
	 * Size -> 0x0030 (FullSize[0x0250] - InheritedSize[0x0220])
	 */
	class UOuterlineComponent : public USceneComponent
	{
	public:
		class UMaterialInterface*                                  CloneCustomDepthMaterial;                                // 0x0218(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInterface*                                  CloneTranslucentMaterial;                                // 0x0220(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInstanceDynamic*                            _cloneCustomDepthMaterialDynamic;                        // 0x0228(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMaterialInstanceDynamic*                            _cloneTranslucentMaterialDynamic;                        // 0x0230(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USkeletalMeshComponent*                              _customDepthSkeletalMesh;                                // 0x0238(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USkeletalMeshComponent*                              _overlaySkeletalMesh;                                    // 0x0240(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JJS3[0x8];                                   // 0x0248(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetIntensity(float Intensity);
		static UClass* StaticClass();
	};

	/**
	 * Class GFXUtilities.StencilOutlineRenderStrategy
	 * Size -> 0x0028 (FullSize[0x0098] - InheritedSize[0x0070])
	 */
	class UStencilOutlineRenderStrategy : public UBaseOutlineRenderStrategy
	{
	public:
		TArray<class UMaterialInterface*>                          _replacementMaterials;                                   // 0x0070(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<class UBatchMeshCommands*>                          _translucentCopies;                                      // 0x0080(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EYSJ[0x8];                                   // 0x0090(0x0008) MISSED OFFSET (PADDING)

	public:
		void STATIC_EnableCopyStencilToCustomStencil(bool Enabled);
		static UClass* StaticClass();
	};

	/**
	 * Class GFXUtilities.TranslucentOutlineRenderStrategy
	 * Size -> 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
	 */
	class UTranslucentOutlineRenderStrategy : public UBaseOutlineRenderStrategy
	{
	public:
		TArray<class UMaterialInterface*>                          _replacementMaterials;                                   // 0x0070(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
