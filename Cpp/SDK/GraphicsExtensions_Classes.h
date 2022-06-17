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
	 * Class GraphicsExtensions.GMAdaptiveShadowMapAtlas
	 * Size -> 0x00B8 (FullSize[0x00E8] - InheritedSize[0x0030])
	 */
	class UGMAdaptiveShadowMapAtlas : public UObject
	{
	public:
		unsigned char                                              UnknownData_9G16[0xB8];                                  // 0x0030(0x00B8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GraphicsExtensions.GMAdaptiveShadowMapController
	 * Size -> 0x0098 (FullSize[0x00C8] - InheritedSize[0x0030])
	 */
	class UGMAdaptiveShadowMapController : public UObject
	{
	public:
		class UGMAdaptiveShadowMapAtlas*                           _atlas;                                                  // 0x0030(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMaterialInterface*                                  _lightFunctionMaterial;                                  // 0x0038(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UGMAdaptiveShadowMapSource*>                  _shadowMapSourceList;                                    // 0x0040(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<class UGMAdaptiveShadowMapSource*>                  _shadowMapSourceActivatedList;                           // 0x0050(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GWGZ[0x68];                                  // 0x0060(0x0068) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GraphicsExtensions.GMAdaptiveShadowMapControllerComponent
	 * Size -> 0x01E0 (FullSize[0x0400] - InheritedSize[0x0220])
	 */
	class UGMAdaptiveShadowMapControllerComponent : public USceneComponent
	{
	public:
		struct FBHVRPerDetailModeInt                               TileSize;                                                // 0x0218(0x00A0) Edit, NativeAccessSpecifierPublic
		int32_t                                                    TileCountX;                                              // 0x02B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TileCountY;                                              // 0x02BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIntPoint                                           GridSize;                                                // 0x02C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GeneratedTilesPerFrame;                                  // 0x02C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N7TR[0x4];                                   // 0x02CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBHVRPerDetailModeInt                               MaxPreallocatedTilesPerFrame;                            // 0x02D0(0x00A0) Edit, NativeAccessSpecifierPublic
		bool                                                       bSupportsDirectionalLights;                              // 0x0370(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSupportsSpotLights;                                     // 0x0371(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PEM6[0x6];                                   // 0x0372(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  LightFunctionMaterial;                                   // 0x0378(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CullShadowIfPixelSizeLessThan;                           // 0x0380(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPreviewOnly;                                            // 0x0384(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6682[0x13];                                  // 0x0385(0x0013) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGMAdaptiveShadowMapAtlas*                           _atlas;                                                  // 0x0398(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGMAdaptiveShadowMapController*                      _controller;                                             // 0x03A0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TMap<class UGMAdaptiveShadowMapSourceComponent*, class UGMAdaptiveShadowMapSource*> _shadowMapSources;                                       // 0x03A8(0x0050) Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		class UMaterialInstanceDynamic*                            _lightFunctionMaterialInstance;                          // 0x03F8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void RebuildAtlas();
		bool IsControllerDonePreallocatingTiles();
		int32_t GetTileSize();
		int32_t GetTileCountY();
		int32_t GetTileCountX();
		void DumpDebugInfo();
		static UClass* StaticClass();
	};

	/**
	 * Class GraphicsExtensions.GMAdaptiveShadowMapSource
	 * Size -> 0x02D0 (FullSize[0x0300] - InheritedSize[0x0030])
	 */
	class UGMAdaptiveShadowMapSource : public UObject
	{
	public:
		class UGMAdaptiveShadowMapAtlas*                           _atlas;                                                  // 0x0030(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ULightComponent*                                     _lightComponent;                                         // 0x0038(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_28ZI[0x2C0];                                 // 0x0040(0x02C0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GraphicsExtensions.GMAdaptiveShadowMapSourceComponent
	 * Size -> 0x0020 (FullSize[0x0240] - InheritedSize[0x0220])
	 */
	class UGMAdaptiveShadowMapSourceComponent : public USceneComponent
	{
	public:
		float                                                      Radius;                                                  // 0x021C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DepthMin;                                                // 0x0220(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DepthMax;                                                // 0x0224(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Levels;                                                  // 0x0228(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PreGeneratedLevels;                                      // 0x022C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O7BD[0x10];                                  // 0x0230(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetLightRadiusWithBounds(const struct FVector& BoundingSphereCenter, float BoundingSphereRadius);
		static UClass* StaticClass();
	};

	/**
	 * Class GraphicsExtensions.GMAdaptiveShadowMapSourceComponentSpawner
	 * Size -> 0x0010 (FullSize[0x0240] - InheritedSize[0x0230])
	 */
	class AGMAdaptiveShadowMapSourceComponentSpawner : public AActor
	{
	public:
		bool                                                       bCreateASMSourceComponentOnBeginPlay;                    // 0x0230(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRemoveCastForCinematicOnlyFlagOnLights;                 // 0x0231(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRemoveLightFunctionMaterialOnLights;                    // 0x0232(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZTZP[0x1];                                   // 0x0233(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NumLevelPerSource;                                       // 0x0234(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumPreGeneratedLevelPerSource;                           // 0x0238(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPreviewOnly;                                            // 0x023C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A2YH[0x3];                                   // 0x023D(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GraphicsExtensions.GMAdaptiveShadowMapSourceDirectional
	 * Size -> 0x0050 (FullSize[0x0350] - InheritedSize[0x0300])
	 */
	class UGMAdaptiveShadowMapSourceDirectional : public UGMAdaptiveShadowMapSource
	{
	public:
		class UDirectionalLightComponent*                          _directionalLightComponent;                              // 0x02F8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LGCA[0x50];                                  // 0x0300(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GraphicsExtensions.GMAdaptiveShadowMapSourceSpot
	 * Size -> 0x0060 (FullSize[0x0360] - InheritedSize[0x0300])
	 */
	class UGMAdaptiveShadowMapSourceSpot : public UGMAdaptiveShadowMapSource
	{
	public:
		class USpotLightComponent*                                 _spotLightComponent;                                     // 0x02F8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1VL1[0x60];                                  // 0x0300(0x0060) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
