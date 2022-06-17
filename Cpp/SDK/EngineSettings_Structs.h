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
	 * Enum EngineSettings.ESubLevelStripMode
	 */
	enum class ESubLevelStripMode : uint8_t
	{
		ExactClass = 0,
		IsChildOf  = 1,
		MAX        = 2
	};

	/**
	 * Enum EngineSettings.EFourPlayerSplitScreenType
	 */
	enum class EFourPlayerSplitScreenType : uint8_t
	{
		Grid       = 0,
		Vertical   = 1,
		Horizontal = 2,
		MAX        = 3
	};

	/**
	 * Enum EngineSettings.EThreePlayerSplitScreenType
	 */
	enum class EThreePlayerSplitScreenType : uint8_t
	{
		FavorTop    = 0,
		FavorBottom = 1,
		Vertical    = 2,
		Horizontal  = 3,
		MAX         = 4
	};

	/**
	 * Enum EngineSettings.ETwoPlayerSplitScreenType
	 */
	enum class ETwoPlayerSplitScreenType : uint8_t
	{
		Horizontal = 0,
		Vertical   = 1,
		MAX        = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct EngineSettings.AutoCompleteCommand
	 * Size -> 0x0028
	 */
	struct FAutoCompleteCommand
	{
	public:
		class FString                                              Command;                                                 // 0x0000(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Desc;                                                    // 0x0010(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MZ4A[0x8];                                   // 0x0020(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EngineSettings.GameModeName
	 * Size -> 0x0030
	 */
	struct FGameModeName
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftClassPath                                      gameMode;                                                // 0x0010(0x0020) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EngineSettings.PathPak
	 * Size -> 0x0028
	 */
	struct FPathPak
	{
	public:
		class FString                                              Path;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PakName;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       BringHardDependencies;                                   // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       BringSoftDependencies;                                   // 0x0021(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VCLG[0x6];                                   // 0x0022(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EngineSettings.PakDefinition
	 * Size -> 0x0018
	 */
	struct FPakDefinition
	{
	public:
		class FString                                              PakName;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PakId;                                                   // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6OO0[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
