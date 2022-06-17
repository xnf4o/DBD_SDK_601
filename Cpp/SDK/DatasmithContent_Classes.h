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
	 * Class DatasmithContent.DatasmithObjectTemplate
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UDatasmithObjectTemplate : public UObject
	{
	public:
		unsigned char                                              UnknownData_AG2N[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DatasmithContent.DatasmithActorTemplate
	 * Size -> 0x00A0 (FullSize[0x00D8] - InheritedSize[0x0038])
	 */
	class UDatasmithActorTemplate : public UDatasmithObjectTemplate
	{
	public:
		unsigned char                                              Layers[0x50];                                            // 0x0038(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              Tags[0x50];                                              // 0x0088(0x0050) UNKNOWN PROPERTY: SetProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DatasmithContent.DatasmithAdditionalData
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UDatasmithAdditionalData : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DatasmithContent.DatasmithAreaLightActor
	 * Size -> 0x0058 (FullSize[0x0288] - InheritedSize[0x0230])
	 */
	class ADatasmithAreaLightActor : public AActor
	{
	public:
		EComponentMobility                                         Mobility;                                                // 0x0230(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDatasmithAreaLightActorType                               LightType;                                               // 0x0231(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDatasmithAreaLightActorShape                              LightShape;                                              // 0x0232(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6GQM[0x1];                                   // 0x0233(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           Dimensions;                                              // 0x0234(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Intensity;                                               // 0x023C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELightUnits                                                IntensityUnits;                                          // 0x0240(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZIU4[0x3];                                   // 0x0241(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        Color;                                                   // 0x0244(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Temperature;                                             // 0x0254(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextureLightProfile*                                IESTexture;                                              // 0x0258(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseIESBrightness;                                       // 0x0260(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O6WZ[0x3];                                   // 0x0261(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      IESBrightnessScale;                                      // 0x0264(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotation;                                                // 0x0268(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      SourceRadius;                                            // 0x0274(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SourceLength;                                            // 0x0278(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AttenuationRadius;                                       // 0x027C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpotlightInnerAngle;                                     // 0x0280(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpotlightOuterAngle;                                     // 0x0284(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DatasmithContent.DatasmithAreaLightActorTemplate
	 * Size -> 0x0078 (FullSize[0x00B0] - InheritedSize[0x0038])
	 */
	class UDatasmithAreaLightActorTemplate : public UDatasmithObjectTemplate
	{
	public:
		EDatasmithAreaLightActorType                               LightType;                                               // 0x0038(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDatasmithAreaLightActorShape                              LightShape;                                              // 0x0039(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_03Z7[0x2];                                   // 0x003A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           Dimensions;                                              // 0x003C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x0044(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Intensity;                                               // 0x0054(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELightUnits                                                IntensityUnits;                                          // 0x0058(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PKXV[0x3];                                   // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Temperature;                                             // 0x005C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              IESTexture[0x30];                                        // 0x0060(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       bUseIESBrightness;                                       // 0x0090(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DJ1P[0x3];                                   // 0x0091(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      IESBrightnessScale;                                      // 0x0094(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotation;                                                // 0x0098(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      SourceRadius;                                            // 0x00A4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SourceLength;                                            // 0x00A8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AttenuationRadius;                                       // 0x00AC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DatasmithContent.DatasmithAssetImportData
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UDatasmithAssetImportData : public UAssetImportData
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DatasmithContent.DatasmithStaticMeshImportData
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UDatasmithStaticMeshImportData : public UDatasmithAssetImportData
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DatasmithContent.DatasmithStaticMeshCADImportData
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UDatasmithStaticMeshCADImportData : public UDatasmithStaticMeshImportData
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DatasmithContent.DatasmithSceneImportData
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UDatasmithSceneImportData : public UAssetImportData
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DatasmithContent.DatasmithTranslatedSceneImportData
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UDatasmithTranslatedSceneImportData : public UDatasmithSceneImportData
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DatasmithContent.DatasmithCADImportSceneData
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UDatasmithCADImportSceneData : public UDatasmithSceneImportData
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DatasmithContent.DatasmithMDLSceneImportData
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UDatasmithMDLSceneImportData : public UDatasmithSceneImportData
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DatasmithContent.DatasmithGLTFSceneImportData
	 * Size -> 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
	 */
	class UDatasmithGLTFSceneImportData : public UDatasmithSceneImportData
	{
	public:
		class FString                                              Generator;                                               // 0x0030(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Version;                                                 // 0x0040(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RWJX[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Author;                                                  // 0x0048(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              License;                                                 // 0x0058(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Source;                                                  // 0x0068(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DatasmithContent.DatasmithStaticMeshGLTFImportData
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UDatasmithStaticMeshGLTFImportData : public UDatasmithStaticMeshImportData
	{
	public:
		class FString                                              SourceMeshName;                                          // 0x0030(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DatasmithContent.DatasmithFBXSceneImportData
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UDatasmithFBXSceneImportData : public UDatasmithSceneImportData
	{
	public:
		bool                                                       bGenerateLightmapUVs;                                    // 0x0030(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_621Q[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              TexturesDir;                                             // 0x0038(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              IntermediateSerialization;                               // 0x0048(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bColorizeMaterials;                                      // 0x0049(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M2HV[0x6];                                   // 0x004A(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DatasmithContent.DatasmithDeltaGenAssetImportData
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UDatasmithDeltaGenAssetImportData : public UDatasmithAssetImportData
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DatasmithContent.DatasmithDeltaGenSceneImportData
	 * Size -> 0x0048 (FullSize[0x0098] - InheritedSize[0x0050])
	 */
	class UDatasmithDeltaGenSceneImportData : public UDatasmithFBXSceneImportData
	{
	public:
		bool                                                       bMergeNodes;                                             // 0x0050(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOptimizeDuplicatedNodes;                                // 0x0051(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRemoveInvisibleNodes;                                   // 0x0052(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSimplifyNodeHierarchy;                                  // 0x0053(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bImportVar;                                              // 0x0054(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KDBZ[0x3];                                   // 0x0055(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              VarPath;                                                 // 0x0058(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bImportPos;                                              // 0x0068(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LZBJ[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PosPath;                                                 // 0x0070(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bImportTml;                                              // 0x0080(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XVO0[0x7];                                   // 0x0081(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              TmlPath;                                                 // 0x0088(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DatasmithContent.DatasmithVREDAssetImportData
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UDatasmithVREDAssetImportData : public UDatasmithAssetImportData
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DatasmithContent.DatasmithVREDSceneImportData
	 * Size -> 0x0060 (FullSize[0x00B0] - InheritedSize[0x0050])
	 */
	class UDatasmithVREDSceneImportData : public UDatasmithFBXSceneImportData
	{
	public:
		bool                                                       bMergeNodes;                                             // 0x0050(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOptimizeDuplicatedNodes;                                // 0x0051(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bImportMats;                                             // 0x0052(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YIBN[0x5];                                   // 0x0053(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              MatsPath;                                                // 0x0058(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bImportVar;                                              // 0x0068(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCleanVar;                                               // 0x0069(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LUSZ[0x6];                                   // 0x006A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              VarPath;                                                 // 0x0070(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bImportLightInfo;                                        // 0x0080(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7Y49[0x7];                                   // 0x0081(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              LightInfoPath;                                           // 0x0088(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bImportClipInfo;                                         // 0x0098(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WJIR[0x7];                                   // 0x0099(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ClipInfoPath;                                            // 0x00A0(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DatasmithContent.DatasmithIFCSceneImportData
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UDatasmithIFCSceneImportData : public UDatasmithSceneImportData
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DatasmithContent.DatasmithStaticMeshIFCImportData
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UDatasmithStaticMeshIFCImportData : public UDatasmithStaticMeshImportData
	{
	public:
		class FString                                              SourceGlobalId;                                          // 0x0030(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DatasmithContent.DatasmithAssetUserData
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class UDatasmithAssetUserData : public UAssetUserData
	{
	public:
		TMap<class FName, class FString>                           MetaData;                                                // 0x0030(0x0050) Edit, BlueprintVisible, EditConst, AdvancedDisplay, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DatasmithContent.DatasmithCineCameraActorTemplate
	 * Size -> 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
	 */
	class UDatasmithCineCameraActorTemplate : public UDatasmithObjectTemplate
	{
	public:
		struct FDatasmithCameraLookatTrackingSettingsTemplate      LookatTrackingSettings;                                  // 0x0038(0x0038) NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DatasmithContent.DatasmithCineCameraComponentTemplate
	 * Size -> 0x0068 (FullSize[0x00A0] - InheritedSize[0x0038])
	 */
	class UDatasmithCineCameraComponentTemplate : public UDatasmithObjectTemplate
	{
	public:
		struct FDatasmithCameraFilmbackSettingsTemplate            FilmbackSettings;                                        // 0x0038(0x0008) NoDestructor, NativeAccessSpecifierPublic
		struct FDatasmithCameraLensSettingsTemplate                LensSettings;                                            // 0x0040(0x0004) NoDestructor, NativeAccessSpecifierPublic
		struct FDatasmithCameraFocusSettingsTemplate               FocusSettings;                                           // 0x0044(0x0008) NoDestructor, NativeAccessSpecifierPublic
		float                                                      CurrentFocalLength;                                      // 0x004C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurrentAperture;                                         // 0x0050(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EFDB[0xC];                                   // 0x0054(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDatasmithPostProcessSettingsTemplate               PostProcessSettings;                                     // 0x0060(0x0040) NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DatasmithContent.DatasmithContentBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UDatasmithContentBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		class FString STATIC_GetDatasmithUserDataValueForKey(class UObject* Object, const class FName& Key);
		void STATIC_GetDatasmithUserDataKeysAndValuesForValue(class UObject* Object, const class FString& StringToMatch, TArray<class FName>* OutKeys, TArray<class FString>* OutValues);
		class UDatasmithAssetUserData* STATIC_GetDatasmithUserData(class UObject* Object);
		static UClass* StaticClass();
	};

	/**
	 * Class DatasmithContent.DatasmithCustomActionBase
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UDatasmithCustomActionBase : public UObject
	{
	public:
		unsigned char                                              UnknownData_N693[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DatasmithContent.DatasmithDecalComponentTemplate
	 * Size -> 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
	 */
	class UDatasmithDecalComponentTemplate : public UDatasmithObjectTemplate
	{
	public:
		int32_t                                                    SortOrder;                                               // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             DecalSize;                                               // 0x003C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  Material;                                                // 0x0048(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DatasmithContent.DatasmithImportedSequencesActor
	 * Size -> 0x0010 (FullSize[0x0240] - InheritedSize[0x0230])
	 */
	class ADatasmithImportedSequencesActor : public AActor
	{
	public:
		TArray<class ULevelSequence*>                              ImportedSequences;                                       // 0x0230(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		void PlayLevelSequence(class ULevelSequence* SequenceToPlay);
		static UClass* StaticClass();
	};

	/**
	 * Class DatasmithContent.DatasmithOptionsBase
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UDatasmithOptionsBase : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DatasmithContent.DatasmithCommonTessellationOptions
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UDatasmithCommonTessellationOptions : public UDatasmithOptionsBase
	{
	public:
		struct FDatasmithTessellationOptions                       Options;                                                 // 0x0030(0x0010) Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DatasmithContent.DatasmithImportOptions
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class UDatasmithImportOptions : public UDatasmithOptionsBase
	{
	public:
		EDatasmithImportSearchPackagePolicy                        SearchPackagePolicy;                                     // 0x0030(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDatasmithImportAssetConflictPolicy                        MaterialConflictPolicy;                                  // 0x0031(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDatasmithImportAssetConflictPolicy                        TextureConflictPolicy;                                   // 0x0032(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDatasmithImportActorPolicy                                StaticMeshActorImportPolicy;                             // 0x0033(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDatasmithImportActorPolicy                                LightImportPolicy;                                       // 0x0034(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDatasmithImportActorPolicy                                CameraImportPolicy;                                      // 0x0035(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDatasmithImportActorPolicy                                OtherActorImportPolicy;                                  // 0x0036(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDatasmithImportMaterialQuality                            MaterialQuality;                                         // 0x0037(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDatasmithImportBaseOptions                         BaseOptions;                                             // 0x0038(0x0018) Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic
		struct FDatasmithReimportOptions                           ReimportOptions;                                         // 0x0050(0x0002) Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IBNC[0x6];                                   // 0x0052(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Filename;                                                // 0x0058(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              FilePath;                                                // 0x0068(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JL5H[0x8];                                   // 0x0078(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DatasmithContent.DatasmithLandscapeTemplate
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UDatasmithLandscapeTemplate : public UDatasmithObjectTemplate
	{
	public:
		class UMaterialInterface*                                  LandscapeMaterial;                                       // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StaticLightingLOD;                                       // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SSX2[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DatasmithContent.DatasmithLightComponentTemplate
	 * Size -> 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
	 */
	class UDatasmithLightComponentTemplate : public UDatasmithObjectTemplate
	{
	public:
		unsigned char                                              bVisible : 1;                                            // 0x0038(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YSTB[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              CastShadows : 1;                                         // 0x003C(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseTemperature : 1;                                     // 0x003C(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseIESBrightness : 1;                                   // 0x003C(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VPDQ[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Intensity;                                               // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Temperature;                                             // 0x0044(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      IESBrightnessScale;                                      // 0x0048(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        LightColor;                                              // 0x004C(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XL4S[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  LightFunctionMaterial;                                   // 0x0060(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextureLightProfile*                                IESTexture;                                              // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DatasmithContent.DatasmithMaterialInstanceTemplate
	 * Size -> 0x0170 (FullSize[0x01A8] - InheritedSize[0x0038])
	 */
	class UDatasmithMaterialInstanceTemplate : public UDatasmithObjectTemplate
	{
	public:
		unsigned char                                              ParentMaterial[0x30];                                    // 0x0038(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		TMap<class FName, float>                                   ScalarParameterValues;                                   // 0x0068(0x0050) NativeAccessSpecifierPublic
		TMap<class FName, struct FLinearColor>                     VectorParameterValues;                                   // 0x00B8(0x0050) NativeAccessSpecifierPublic
		unsigned char                                              TextureParameterValues[0x50];                            // 0x0108(0x0050) UNKNOWN PROPERTY: MapProperty
		struct FDatasmithStaticParameterSetTemplate                StaticParameters;                                        // 0x0158(0x0050) NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DatasmithContent.DatasmithPointLightComponentTemplate
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UDatasmithPointLightComponentTemplate : public UDatasmithObjectTemplate
	{
	public:
		ELightUnits                                                IntensityUnits;                                          // 0x0038(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IKN4[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SourceRadius;                                            // 0x003C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SourceLength;                                            // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AttenuationRadius;                                       // 0x0044(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DatasmithContent.DatasmithPostProcessVolumeTemplate
	 * Size -> 0x0058 (FullSize[0x0090] - InheritedSize[0x0038])
	 */
	class UDatasmithPostProcessVolumeTemplate : public UDatasmithObjectTemplate
	{
	public:
		unsigned char                                              UnknownData_B8HD[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDatasmithPostProcessSettingsTemplate               Settings;                                                // 0x0040(0x0040) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              bEnabled : 1;                                            // 0x0080(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUnbound : 1;                                            // 0x0080(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N4OX[0xF];                                   // 0x0081(0x000F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DatasmithContent.DatasmithScene
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UDatasmithScene : public UObject
	{
	public:
		unsigned char                                              UnknownData_ZXE3[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DatasmithContent.DatasmithSceneActor
	 * Size -> 0x0058 (FullSize[0x0288] - InheritedSize[0x0230])
	 */
	class ADatasmithSceneActor : public AActor
	{
	public:
		class UDatasmithScene*                                     Scene;                                                   // 0x0230(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              RelatedActors[0x50];                                     // 0x0238(0x0050) UNKNOWN PROPERTY: MapProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DatasmithContent.DatasmithSceneComponentTemplate
	 * Size -> 0x00C8 (FullSize[0x0100] - InheritedSize[0x0038])
	 */
	class UDatasmithSceneComponentTemplate : public UDatasmithObjectTemplate
	{
	public:
		unsigned char                                              UnknownData_NF5V[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          RelativeTransform;                                       // 0x0040(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EComponentMobility                                         Mobility;                                                // 0x0070(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5XCI[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              AttachParent[0x30];                                      // 0x0071(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       bVisible;                                                // 0x00A8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q5MB[0x7];                                   // 0x00A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Tags[0x50];                                              // 0x00A9(0x0050) UNKNOWN PROPERTY: SetProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DatasmithContent.DatasmithSkyLightComponentTemplate
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UDatasmithSkyLightComponentTemplate : public UDatasmithObjectTemplate
	{
	public:
		ESkyLightSourceType                                        SourceType;                                              // 0x0038(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B0XH[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CubemapResolution;                                       // 0x003C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextureCube*                                        Cubemap;                                                 // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DatasmithContent.DatasmithSpotLightComponentTemplate
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UDatasmithSpotLightComponentTemplate : public UDatasmithObjectTemplate
	{
	public:
		float                                                      InnerConeAngle;                                          // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OuterConeAngle;                                          // 0x003C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DatasmithContent.DatasmithStaticMeshComponentTemplate
	 * Size -> 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
	 */
	class UDatasmithStaticMeshComponentTemplate : public UDatasmithObjectTemplate
	{
	public:
		class UStaticMesh*                                         StaticMesh;                                              // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UMaterialInterface*>                          OverrideMaterials;                                       // 0x0040(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DatasmithContent.DatasmithStaticMeshTemplate
	 * Size -> 0x0078 (FullSize[0x00B0] - InheritedSize[0x0038])
	 */
	class UDatasmithStaticMeshTemplate : public UDatasmithObjectTemplate
	{
	public:
		struct FDatasmithMeshSectionInfoMapTemplate                SectionInfoMap;                                          // 0x0038(0x0050) Edit, EditConst, NativeAccessSpecifierPublic
		int32_t                                                    LightMapCoordinateIndex;                                 // 0x0088(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LightMapResolution;                                      // 0x008C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FDatasmithMeshBuildSettingsTemplate>         BuildSettings;                                           // 0x0090(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<struct FDatasmithStaticMaterialTemplate>            StaticMaterials;                                         // 0x00A0(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
