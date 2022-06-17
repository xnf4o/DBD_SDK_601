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
	 * Enum DBDUIPresenters.EContextSection
	 */
	enum class EContextSection : uint8_t
	{
		None       = 0,
		Hud        = 1,
		MainMenu   = 2,
		Lobby      = 3,
		Store      = 4,
		Tally      = 5,
		Archive    = 6,
		Credits    = 7,
		Onboarding = 8,
		Popups     = 9,
		MAX        = 10
	};

	/**
	 * Enum DBDUIPresenters.EGameLayer
	 */
	enum class EGameLayer : uint8_t
	{
		Default  = 0,
		UMGPopup = 1,
		MAX      = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct DBDUIPresenters.SubtitlesEntry
	 * Size -> 0x0018
	 */
	struct FSubtitlesEntry
	{
	public:
		class FString                                              subtitle;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       isAOneLiner;                                             // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S3VL[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
