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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum HoudiniEngineRuntime.EHoudiniStaticMeshMethod
	 */
	enum class EHoudiniStaticMeshMethod : uint8_t
	{
		RawMesh            = 0,
		FMeshDescription   = 1,
		UHoudiniStaticMesh = 2,
		MAX                = 3
	};

	/**
	 * Enum HoudiniEngineRuntime.EHoudiniAssetStateResult
	 */
	enum class EHoudiniAssetStateResult : uint8_t
	{
		None                   = 0,
		Working                = 1,
		Success                = 2,
		FinishedWithError      = 3,
		FinishedWithFatalError = 4,
		Aborted                = 5,
		MAX                    = 6
	};

	/**
	 * Enum HoudiniEngineRuntime.EHoudiniAssetState
	 */
	enum class EHoudiniAssetState : uint8_t
	{
		NeedInstantiation = 0,
		NewHDA            = 1,
		PreInstantiation  = 2,
		Instantiating     = 3,
		PreCook           = 4,
		Cooking           = 5,
		PostCook          = 6,
		PreProcess        = 7,
		Processing        = 8,
		None              = 9,
		NeedRebuild       = 10,
		NeedDelete        = 11,
		Deleting          = 12,
		ProcessTemplate   = 13,
		MAX               = 14
	};

	/**
	 * Enum HoudiniEngineRuntime.EHoudiniProxyRefineRequestResult
	 */
	enum class EHoudiniProxyRefineRequestResult : uint8_t
	{
		Invalid      = 0,
		None         = 1,
		PendingCooks = 2,
		Refined      = 3,
		MAX          = 4
	};

	/**
	 * Enum HoudiniEngineRuntime.EHoudiniProxyRefineResult
	 */
	enum class EHoudiniProxyRefineResult : uint8_t
	{
		Invalid = 0,
		Failed  = 1,
		Success = 2,
		Skipped = 3,
		MAX     = 4
	};

	/**
	 * Enum HoudiniEngineRuntime.EHoudiniLandscapeExportType
	 */
	enum class EHoudiniLandscapeExportType : uint8_t
	{
		Heightfield = 0,
		Mesh        = 1,
		Points      = 2,
		MAX         = 3
	};

	/**
	 * Enum HoudiniEngineRuntime.EHoudiniCurveMethod
	 */
	enum class EHoudiniCurveMethod : uint8_t
	{
		Invalid     = 0,
		CVs         = 1,
		Breakpoints = 2,
		Freehand    = 3,
		MAX         = 4
	};

	/**
	 * Enum HoudiniEngineRuntime.EHoudiniCurveType
	 */
	enum class EHoudiniCurveType : uint8_t
	{
		Invalid = 0,
		Polygon = 1,
		Nurbs   = 2,
		Bezier  = 3,
		Points  = 4,
		MAX     = 5
	};

	/**
	 * Enum HoudiniEngineRuntime.EHoudiniOutputType
	 */
	enum class EHoudiniOutputType : uint8_t
	{
		Invalid   = 0,
		Mesh      = 1,
		Instancer = 2,
		Landscape = 3,
		Curve     = 4,
		Skeletal  = 5,
		MAX       = 6
	};

	/**
	 * Enum HoudiniEngineRuntime.EHoudiniInputType
	 */
	enum class EHoudiniInputType : uint8_t
	{
		Invalid   = 0,
		Geometry  = 1,
		Curve     = 2,
		Asset     = 3,
		Landscape = 4,
		World     = 5,
		Skeletal  = 6,
		MAX       = 7
	};

	/**
	 * Enum HoudiniEngineRuntime.EHoudiniLandscapeOutputBakeType
	 */
	enum class EHoudiniLandscapeOutputBakeType : uint8_t
	{
		Detachment  = 0,
		BakeToImage = 1,
		BakeToWorld = 2,
		InValid     = 3,
		MAX         = 4
	};

	/**
	 * Enum HoudiniEngineRuntime.EHoudiniRampInterpolationType
	 */
	enum class EHoudiniRampInterpolationType : uint8_t
	{
		InValid        = 0,
		CONSTANT       = 1,
		LINEAR         = 2,
		CATMULL_ROM    = 3,
		MONOTONE_CUBIC = 4,
		BEZIER         = 5,
		BSPLINE        = 6,
		HERMITE        = 7,
		MAX            = 8
	};

	/**
	 * Enum HoudiniEngineRuntime.EAttribOwner
	 */
	enum class EAttribOwner : uint8_t
	{
		Invalid = 0,
		Vertex  = 1,
		Point   = 2,
		Prim    = 3,
		Detail  = 4,
		MAX     = 5
	};

	/**
	 * Enum HoudiniEngineRuntime.EAttribStorageType
	 */
	enum class EAttribStorageType : uint8_t
	{
		Invalid = 0,
		INT     = 1,
		INT64   = 2,
		_FLOAT_ = 3,
		FLOAT64 = 4,
		STRING  = 5,
		MAX     = 6
	};

	/**
	 * Enum HoudiniEngineRuntime.EHoudiniInstancerType
	 */
	enum class EHoudiniInstancerType : uint8_t
	{
		Invalid                     = 0,
		ObjectInstancer             = 1,
		PackedPrimitive             = 2,
		AttributeInstancer          = 3,
		OldSchoolAttributeInstancer = 4,
		MAX                         = 5
	};

	/**
	 * Enum HoudiniEngineRuntime.EHoudiniPartType
	 */
	enum class EHoudiniPartType : uint8_t
	{
		Invalid   = 0,
		Mesh      = 1,
		Instancer = 2,
		Curve     = 3,
		Volume    = 4,
		MAX       = 5
	};

	/**
	 * Enum HoudiniEngineRuntime.EHoudiniGeoType
	 */
	enum class EHoudiniGeoType : uint8_t
	{
		Invalid      = 0,
		Default      = 1,
		Intermediate = 2,
		Input        = 3,
		Curve        = 4,
		MAX          = 5
	};

	/**
	 * Enum HoudiniEngineRuntime.EHoudiniHandleType
	 */
	enum class EHoudiniHandleType : uint8_t
	{
		Xform       = 0,
		Bounder     = 1,
		Unsupported = 2,
		MAX         = 3
	};

	/**
	 * Enum HoudiniEngineRuntime.EXformParameter
	 */
	enum class EXformParameter : uint8_t
	{
		TX    = 0,
		TY    = 1,
		TZ    = 2,
		RX    = 3,
		RY    = 4,
		RZ    = 5,
		SX    = 6,
		SY    = 7,
		SZ    = 8,
		COUNT = 9,
		MAX   = 10
	};

	/**
	 * Enum HoudiniEngineRuntime.EHoudiniInputObjectType
	 */
	enum class EHoudiniInputObjectType : uint8_t
	{
		Invalid                         = 0,
		Object                          = 1,
		StaticMesh                      = 2,
		SkeletalMesh                    = 3,
		SceneComponent                  = 4,
		StaticMeshComponent             = 5,
		InstancedStaticMeshComponent    = 6,
		SplineComponent                 = 7,
		HoudiniSplineComponent          = 8,
		HoudiniAssetComponent           = 9,
		Actor                           = 10,
		Landscape                       = 11,
		Brush                           = 12,
		CameraComponent                 = 13,
		DataTable                       = 14,
		HoudiniAssetActor               = 15,
		FoliageType_InstancedStaticMesh = 16,
		MAX                             = 17
	};

	/**
	 * Enum HoudiniEngineRuntime.EHoudiniXformType
	 */
	enum class EHoudiniXformType : uint8_t
	{
		None           = 0,
		IntoThisObject = 1,
		Auto           = 2,
		MAX            = 3
	};

	/**
	 * Enum HoudiniEngineRuntime.EHoudiniCurveOutputType
	 */
	enum class EHoudiniCurveOutputType : uint8_t
	{
		UnrealSpline  = 0,
		HoudiniSpline = 1,
		MAX           = 2
	};

	/**
	 * Enum HoudiniEngineRuntime.EHoudiniParameterType
	 */
	enum class EHoudiniParameterType : uint8_t
	{
		Invalid        = 0,
		Button         = 1,
		ButtonStrip    = 2,
		Color          = 3,
		ColorRamp      = 4,
		File           = 5,
		FileDir        = 6,
		FileGeo        = 7,
		FileImage      = 8,
		Float          = 9,
		FloatRamp      = 10,
		Folder         = 11,
		FolderList     = 12,
		Input          = 13,
		Int            = 14,
		IntChoice      = 15,
		Label          = 16,
		MultiParm      = 17,
		Separator      = 18,
		String         = 19,
		StringChoice   = 20,
		StringAssetRef = 21,
		Toggle         = 22,
		MAX            = 23
	};

	/**
	 * Enum HoudiniEngineRuntime.EHoudiniFolderParameterType
	 */
	enum class EHoudiniFolderParameterType : uint8_t
	{
		Invalid     = 0,
		Collapsible = 1,
		Simple      = 2,
		Tabs        = 3,
		Radio       = 4,
		Other       = 5,
		MAX         = 6
	};

	/**
	 * Enum HoudiniEngineRuntime.EHoudiniMultiParmModificationType
	 */
	enum class EHoudiniMultiParmModificationType : uint8_t
	{
		None     = 0,
		Inserted = 1,
		Removed  = 2,
		Modified = 3,
		MAX      = 4
	};

	/**
	 * Enum HoudiniEngineRuntime.EHoudiniRampPointConstructStatus
	 */
	enum class EHoudiniRampPointConstructStatus : uint8_t
	{
		None                = 0,
		INITIALIZED         = 1,
		POSITION_INSERTED   = 2,
		VALUE_INSERTED      = 3,
		INTERPTYPE_INSERTED = 4,
		MAX                 = 5
	};

	/**
	 * Enum HoudiniEngineRuntime.EPDGWorkResultState
	 */
	enum class EPDGWorkResultState : uint8_t
	{
		None      = 0,
		ToLoad    = 1,
		Loading   = 2,
		Loaded    = 3,
		ToDelete  = 4,
		Deleting  = 5,
		Deleted   = 6,
		NotLoaded = 7,
		MAX       = 8
	};

	/**
	 * Enum HoudiniEngineRuntime.EPDGNodeState
	 */
	enum class EPDGNodeState : uint8_t
	{
		None          = 0,
		Dirtied       = 1,
		Dirtying      = 2,
		Cooking       = 3,
		Cook_Complete = 4,
		Cook_Failed   = 5,
		MAX           = 6
	};

	/**
	 * Enum HoudiniEngineRuntime.EPDGLinkState
	 */
	enum class EPDGLinkState : uint8_t
	{
		Inactive         = 0,
		Linking          = 1,
		Linked           = 2,
		Error_Not_Linked = 3,
		MAX              = 4
	};

	/**
	 * Enum HoudiniEngineRuntime.EHoudiniExecutableType
	 */
	enum class EHoudiniExecutableType : uint8_t
	{
		HRSHE_Houdini      = 0,
		HRSHE_HoudiniFX    = 1,
		HRSHE_HoudiniCore  = 2,
		HRSHE_HoudiniIndie = 3,
		HRSHE_MAX          = 4
	};

	/**
	 * Enum HoudiniEngineRuntime.EHoudiniRuntimeSettingsRecomputeFlag
	 */
	enum class EHoudiniRuntimeSettingsRecomputeFlag : uint8_t
	{
		HRSRF_Always        = 0,
		HRSRF_OnlyIfMissing = 1,
		HRSRF_Never         = 2,
		HRSRF_MAX           = 3
	};

	/**
	 * Enum HoudiniEngineRuntime.EHoudiniRuntimeSettingsSessionType
	 */
	enum class EHoudiniRuntimeSettingsSessionType : uint8_t
	{
		HRSST_InProcess = 0,
		HRSST_Socket    = 1,
		HRSST_NamedPipe = 2,
		HRSST_None      = 3,
		HRSST_MAX       = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct HoudiniEngineRuntime.HoudiniStaticMeshGenerationProperties
	 * Size -> 0x01B0
	 */
	struct FHoudiniStaticMeshGenerationProperties
	{
	public:
		unsigned char                                              bGeneratedDoubleSidedGeometry : 1;                       // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7OQ6[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPhysicalMaterial*                                   GeneratedPhysMaterial;                                   // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBodyInstance                                       DefaultBodyInstance;                                     // 0x0010(0x0160) Edit, NativeAccessSpecifierPublic
		ECollisionTraceFlag                                        GeneratedCollisionTraceFlag;                             // 0x0170(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MZ30[0x3];                                   // 0x0171(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    GeneratedLightMapResolution;                             // 0x0174(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FWalkableSlopeOverride                              GeneratedWalkableSlopeOverride;                          // 0x0178(0x0010) Edit, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		int32_t                                                    GeneratedLightMapCoordinateIndex;                        // 0x0188(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bGeneratedUseMaximumStreamingTexelRatio : 1;             // 0x018C(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V9UQ[0x3];                                   // 0x018D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      GeneratedStreamingDistanceMultiplier;                    // 0x0190(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G1DU[0x4];                                   // 0x0194(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFoliageType_InstancedStaticMesh*                    GeneratedFoliageDefaultSettings;                         // 0x0198(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UAssetUserData*>                              GeneratedAssetUserData;                                  // 0x01A0(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HoudiniEngineRuntime.HoudiniBakedOutputObjectIdentifier
	 * Size -> 0x0018
	 */
	struct FHoudiniBakedOutputObjectIdentifier
	{
	public:
		int32_t                                                    PartId;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RNMF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SplitIdentifier;                                         // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HoudiniEngineRuntime.HoudiniBakedOutputObject
	 * Size -> 0x00C0
	 */
	struct FHoudiniBakedOutputObject
	{
	public:
		class FString                                              Actor;                                                   // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Blueprint;                                               // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ActorBakeName;                                           // 0x0020(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_525H[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              BakedObject;                                             // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              BakedComponent;                                          // 0x0040(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      InstancedActors;                                         // 0x0050(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      InstancedComponents;                                     // 0x0060(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TMap<class FName, class FString>                           LandscapeLayers;                                         // 0x0070(0x0050) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HoudiniEngineRuntime.HoudiniBakedOutput
	 * Size -> 0x0050
	 */
	struct FHoudiniBakedOutput
	{
	public:
		TMap<struct FHoudiniBakedOutputObjectIdentifier, struct FHoudiniBakedOutputObject> BakedOutputObjects;                                      // 0x0000(0x0050) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HoudiniEngineRuntime.HoudiniOutputObjectIdentifier
	 * Size -> 0x0040
	 */
	struct FHoudiniOutputObjectIdentifier
	{
	public:
		int32_t                                                    ObjectId;                                                // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GeoId;                                                   // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PartId;                                                  // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7TFM[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SplitIdentifier;                                         // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PartName;                                                // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PrimitiveIndex;                                          // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PointIndex;                                              // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MMT9[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct HoudiniEngineRuntime.HoudiniBrushInfo
	 * Size -> 0x0070
	 */
	struct FHoudiniBrushInfo
	{
	public:
		TWeakObjectPtr<class ABrush>                               BrushActor;                                              // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U0UZ[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          CachedTransform;                                         // 0x0010(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             CachedOrigin;                                            // 0x0040(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CachedExtent;                                            // 0x004C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBrushType                                                 CachedBrushType;                                         // 0x0058(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1N41[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint64_t                                                   CachedSurfaceHash;                                       // 0x0060(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5617[0x8];                                   // 0x0068(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct HoudiniEngineRuntime.HoudiniMeshSocket
	 * Size -> 0x0060
	 */
	struct FHoudiniMeshSocket
	{
	public:
		unsigned char                                              UnknownData_IA4Q[0x60];                                  // 0x0000(0x0060) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct HoudiniEngineRuntime.HoudiniGeoPartObject
	 * Size -> 0x0220
	 */
	struct FHoudiniGeoPartObject
	{
	public:
		int32_t                                                    AssetId;                                                 // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4M6I[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              AssetName;                                               // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ObjectId;                                                // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B9DY[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ObjectName;                                              // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GeoId;                                                   // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PartId;                                                  // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PartName;                                                // 0x0038(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasCustomPartName;                                      // 0x0048(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L00L[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      SplitGroups;                                             // 0x0050(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FTransform                                          TransformMatrix;                                         // 0x0060(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class FString                                              NodePath;                                                // 0x0090(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHoudiniPartType                                           Type;                                                    // 0x00A0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHoudiniInstancerType                                      InstancerType;                                           // 0x00A1(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_379T[0x6];                                   // 0x00A2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              VolumeName;                                              // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    VolumeTileIndex;                                         // 0x00B8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsVisible;                                              // 0x00BC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsEditable;                                             // 0x00BD(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsTemplated;                                            // 0x00BE(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsInstanced;                                            // 0x00BF(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasGeoChanged;                                          // 0x00C0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasPartChanged;                                         // 0x00C1(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasTransformChanged;                                    // 0x00C2(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasMaterialsChanged;                                    // 0x00C3(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MT48[0x14C];                                 // 0x00C4(0x014C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FHoudiniMeshSocket>                          AllMeshSockets;                                          // 0x0210(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HoudiniEngineRuntime.HoudiniCurveOutputProperties
	 * Size -> 0x000C
	 */
	struct FHoudiniCurveOutputProperties
	{
	public:
		EHoudiniCurveOutputType                                    CurveOutputType;                                         // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IP5B[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NumPoints;                                               // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bClosed;                                                 // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHoudiniCurveType                                          CurveType;                                               // 0x0009(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHoudiniCurveMethod                                        CurveMethod;                                             // 0x000A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TYE9[0x1];                                   // 0x000B(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct HoudiniEngineRuntime.HoudiniOutputObject
	 * Size -> 0x00E8
	 */
	struct FHoudiniOutputObject
	{
	public:
		class UObject*                                             OutputObject;                                            // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject*                                             OutputComponent;                                         // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject*                                             ProxyObject;                                             // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject*                                             ProxyComponent;                                          // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bProxyIsCurrent;                                         // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsImplicit;                                             // 0x0021(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VPFY[0x6];                                   // 0x0022(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              BakeName;                                                // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FHoudiniCurveOutputProperties                       CurveOutputProperty;                                     // 0x0038(0x000C) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GQY7[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, class FString>                         CachedAttributes;                                        // 0x0048(0x0050) NativeAccessSpecifierPublic
		TMap<class FString, class FString>                         CachedTokens;                                            // 0x0098(0x0050) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HoudiniEngineRuntime.HoudiniInstancedOutput
	 * Size -> 0x0090
	 */
	struct FHoudiniInstancedOutput
	{
	public:
		unsigned char                                              OriginalObject[0x30];                                    // 0x0000(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		int32_t                                                    OriginalObjectIndex;                                     // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ON45[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FTransform>                                  OriginalTransforms;                                      // 0x0038(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              VariationObjects[0x10];                                  // 0x0048(0x0010) UNKNOWN PROPERTY: ArrayProperty
		TArray<struct FTransform>                                  VariationTransformOffsets;                               // 0x0058(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            TransformVariationIndices;                               // 0x0068(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            OriginalInstanceIndices;                                 // 0x0078(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bChanged;                                                // 0x0088(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStale;                                                  // 0x0089(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NL0G[0x6];                                   // 0x008A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct HoudiniEngineRuntime.OutputActorOwner
	 * Size -> 0x0010
	 */
	struct FOutputActorOwner
	{
	public:
		unsigned char                                              UnknownData_EL4H[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              OutputActor;                                             // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct HoudiniEngineRuntime.TOPWorkResultObject
	 * Size -> 0x0068
	 */
	struct FTOPWorkResultObject
	{
	public:
		unsigned char                                              UnknownData_2DD8[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Name;                                                    // 0x0008(0x0010) ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              FilePath;                                                // 0x0018(0x0010) ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPDGWorkResultState                                        State;                                                   // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EGI2[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    WorkItemResultInfoIndex;                                 // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UHoudiniOutput*>                              ResultOutputs;                                           // 0x0030(0x0010) ZeroConstructor, NonTransactional, Protected, NativeAccessSpecifierProtected
		bool                                                       bAutoBakedSinceLastLoad;                                 // 0x0040(0x0001) ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_R8LP[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UObject*>                                     OutputObjectsToDelete;                                   // 0x0048(0x0010) ZeroConstructor, NonTransactional, NativeAccessSpecifierPrivate
		struct FOutputActorOwner                                   OutputActorOwner;                                        // 0x0058(0x0010) NonTransactional, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct HoudiniEngineRuntime.TOPWorkResult
	 * Size -> 0x0018
	 */
	struct FTOPWorkResult
	{
	public:
		int32_t                                                    WorkItemIndex;                                           // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    WorkItemID;                                              // 0x0004(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FTOPWorkResultObject>                        ResultObjects;                                           // 0x0008(0x0010) ZeroConstructor, NonTransactional, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HoudiniEngineRuntime.HoudiniPDGWorkResultObjectBakedOutput
	 * Size -> 0x0010
	 */
	struct FHoudiniPDGWorkResultObjectBakedOutput
	{
	public:
		TArray<struct FHoudiniBakedOutput>                         BakedOutputs;                                            // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HoudiniEngineRuntime.WorkItemTallyBase
	 * Size -> 0x0008
	 */
	struct FWorkItemTallyBase
	{
	public:
		unsigned char                                              UnknownData_YQD1[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct HoudiniEngineRuntime.WorkItemTally
	 * Size -> 0x0230 (FullSize[0x0238] - InheritedSize[0x0008])
	 */
	struct FWorkItemTally : public FWorkItemTallyBase
	{
	public:
		unsigned char                                              AllWorkItems[0x50];                                      // 0x0008(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              WaitingWorkItems[0x50];                                  // 0x0058(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              ScheduledWorkItems[0x50];                                // 0x00A8(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              CookingWorkItems[0x50];                                  // 0x00F8(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              CookedWorkItems[0x50];                                   // 0x0148(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              ErroredWorkItems[0x50];                                  // 0x0198(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              CookCancelledWorkItems[0x50];                            // 0x01E8(0x0050) UNKNOWN PROPERTY: SetProperty
	};

	/**
	 * ScriptStruct HoudiniEngineRuntime.AggregatedWorkItemTally
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FAggregatedWorkItemTally : public FWorkItemTallyBase
	{
	public:
		int32_t                                                    TotalWorkItems;                                          // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    WaitingWorkItems;                                        // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    ScheduledWorkItems;                                      // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    CookingWorkItems;                                        // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    CookedWorkItems;                                         // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    ErroredWorkItems;                                        // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    CookCancelledWorkItems;                                  // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XCIC[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct HoudiniEngineRuntime.HoudiniAssetBlueprintOutput
	 * Size -> 0x00F0
	 */
	struct FHoudiniAssetBlueprintOutput
	{
	public:
		int32_t                                                    OutputIndex;                                             // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1B49[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHoudiniOutputObject                                OutputObject;                                            // 0x0008(0x00E8) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HoudiniEngineRuntime.HoudiniAssetBlueprintInstanceData
	 * Size -> 0x00B8 (FullSize[0x0120] - InheritedSize[0x0068])
	 */
	struct FHoudiniAssetBlueprintInstanceData : public FActorComponentInstanceData
	{
	public:
		class UHoudiniAsset*                                       HoudiniAsset;                                            // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AssetId;                                                 // 0x0070(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHoudiniAssetState                                         AssetState;                                              // 0x0074(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MW3U[0x3];                                   // 0x0075(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   SubAssetIndex;                                           // 0x0078(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   AssetCookCount;                                          // 0x007C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasBeenLoaded;                                          // 0x0080(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasBeenDuplicated;                                      // 0x0081(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPendingDelete;                                          // 0x0082(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRecookRequested;                                        // 0x0083(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRebuildRequested;                                       // 0x0084(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableCooking;                                          // 0x0085(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceNeedUpdate;                                        // 0x0086(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLastCookSuccess;                                        // 0x0087(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               ComponentGUID;                                           // 0x0088(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               HapiGUID;                                                // 0x0098(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRegisteredComponentTemplate;                            // 0x00A8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7B2D[0x7];                                   // 0x00A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SourceName;                                              // 0x00B0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<struct FHoudiniOutputObjectIdentifier, struct FHoudiniAssetBlueprintOutput> Outputs;                                                 // 0x00C0(0x0050) NativeAccessSpecifierPublic
		TArray<class UHoudiniInput*>                               Inputs;                                                  // 0x0110(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HoudiniEngineRuntime.HoudiniGenericAttribute
	 * Size -> 0x0050
	 */
	struct FHoudiniGenericAttribute
	{
	public:
		class FString                                              AttributeName;                                           // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAttribStorageType                                         AttributeType;                                           // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAttribOwner                                               AttributeOwner;                                          // 0x0011(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DBXI[0x2];                                   // 0x0012(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    AttributeCount;                                          // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AttributeTupleSize;                                      // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CDFF[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<double>                                             DoubleValues;                                            // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int64_t>                                            IntValues;                                               // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      StringValues;                                            // 0x0040(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HoudiniEngineRuntime.HoudiniCurveInfo
	 * Size -> 0x001C
	 */
	struct FHoudiniCurveInfo
	{
	public:
		unsigned char                                              UnknownData_FKMM[0x1C];                                  // 0x0000(0x001C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct HoudiniEngineRuntime.HoudiniVolumeInfo
	 * Size -> 0x0080
	 */
	struct FHoudiniVolumeInfo
	{
	public:
		unsigned char                                              UnknownData_2HVV[0x80];                                  // 0x0000(0x0080) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct HoudiniEngineRuntime.HoudiniPartInfo
	 * Size -> 0x0048
	 */
	struct FHoudiniPartInfo
	{
	public:
		unsigned char                                              UnknownData_0BZX[0x48];                                  // 0x0000(0x0048) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct HoudiniEngineRuntime.HoudiniGeoInfo
	 * Size -> 0x0030
	 */
	struct FHoudiniGeoInfo
	{
	public:
		unsigned char                                              UnknownData_M0O1[0x30];                                  // 0x0000(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct HoudiniEngineRuntime.HoudiniObjectInfo
	 * Size -> 0x0028
	 */
	struct FHoudiniObjectInfo
	{
	public:
		unsigned char                                              UnknownData_RJVF[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct HoudiniEngineRuntime.HoudiniSplineComponentInstanceData
	 * Size -> 0x0030 (FullSize[0x0098] - InheritedSize[0x0068])
	 */
	struct FHoudiniSplineComponentInstanceData : public FActorComponentInstanceData
	{
	public:
		TArray<struct FTransform>                                  CurvePoints;                                             // 0x0068(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     DisplayPoints;                                           // 0x0078(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            DisplayPointIndexDivider;                                // 0x0088(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
