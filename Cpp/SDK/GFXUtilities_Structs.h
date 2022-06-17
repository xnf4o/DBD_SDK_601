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
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct GFXUtilities.MaterialMap
	 * Size -> 0x0010
	 */
	struct FMaterialMap
	{
	public:
		class UMaterialInterface*                                  SrcMaterial;                                             // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  DstMaterial;                                             // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GFXUtilities.MaterialNamedGroup
	 * Size -> 0x0020
	 */
	struct FMaterialNamedGroup
	{
	public:
		class FString                                              GroupName;                                               // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FMaterialMap>                                Maps;                                                    // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GFXUtilities.MaterialHelperOriginalMeshState
	 * Size -> 0x0048
	 */
	struct FMaterialHelperOriginalMeshState
	{
	public:
		unsigned char                                              UnknownData_DO8R[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMaterialInterface*>                          _originalMaterials;                                      // 0x0008(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<class UMaterialInterface*>                          _originalDynamicMaterials;                               // 0x0018(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_42IO[0x20];                                  // 0x0028(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GFXUtilities.DBDCullDistanceSizePair
	 * Size -> 0x0008
	 */
	struct FDBDCullDistanceSizePair
	{
	public:
		struct FPerPlatformFloat                                   Size;                                                    // 0x0000(0x0004) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FPerPlatformFloat                                   CullDistance;                                            // 0x0004(0x0004) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GFXUtilities.LightUpdate
	 * Size -> 0x0010
	 */
	struct FLightUpdate
	{
	public:
		class ULightComponent*                                     Light;                                                   // 0x0000(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Multiplier;                                              // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DVLB[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GFXUtilities.LightMaterialUpdate
	 * Size -> 0x0018
	 */
	struct FLightMaterialUpdate
	{
	public:
		class UMaterialHelper*                                     Material;                                                // 0x0000(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                PropertyName;                                            // 0x0008(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Multiplier;                                              // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
