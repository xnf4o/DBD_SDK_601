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
	 * Class BuildPatchServices.BuildPatchManifest
	 * Size -> 0x00F8 (FullSize[0x0128] - InheritedSize[0x0030])
	 */
	class UBuildPatchManifest : public UObject
	{
	public:
		unsigned char                                              ManifestFileVersion;                                     // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsFileData;                                             // 0x0031(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NCHO[0x2];                                   // 0x0032(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   AppID;                                                   // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AppName;                                                 // 0x0038(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              BuildVersion;                                            // 0x0048(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LaunchExe;                                               // 0x0058(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LaunchCommand;                                           // 0x0068(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              PrereqIds[0x50];                                         // 0x0078(0x0050) UNKNOWN PROPERTY: SetProperty
		class FString                                              PrereqName;                                              // 0x00C8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PrereqPath;                                              // 0x00D8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PrereqArgs;                                              // 0x00E8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FFileManifestData>                           FileManifestList;                                        // 0x00F8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FChunkInfoData>                              ChunkList;                                               // 0x0108(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FCustomFieldData>                            CustomFields;                                            // 0x0118(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
