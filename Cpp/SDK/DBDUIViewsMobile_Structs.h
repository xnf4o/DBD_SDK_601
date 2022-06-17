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
	 * Enum DBDUIViewsMobile.EActionOnFriendType
	 */
	enum class EActionOnFriendType : uint8_t
	{
		None                  = 0,
		SendFriendRequest     = 1,
		ConfirmFriendRequest  = 2,
		DeclineFriendRequest  = 3,
		RemoveFriend          = 4,
		AddToFavorite         = 5,
		RemoveToFavorite      = 6,
		Mute                  = 7,
		Unmute                = 8,
		InviteToParty         = 9,
		CancelInviteToParty   = 10,
		Select                = 11,
		ConfirmAction         = 12,
		DeclineAction         = 13,
		RemovePlayerFromParty = 14,
		Count                 = 15,
		MAX                   = 16
	};

	/**
	 * Enum DBDUIViewsMobile.EAtlantaFriendUIStatus
	 */
	enum class EAtlantaFriendUIStatus : uint8_t
	{
		Undefined             = 0,
		FriendSuggestion      = 1,
		FriendRequestSent     = 2,
		FriendRequestReceived = 3,
		Available             = 4,
		InAMatch              = 5,
		Offline               = 6,
		AddFriendToSeeStatus  = 7,
		MAX                   = 8
	};

	/**
	 * Enum DBDUIViewsMobile.ECustomMatchDifficulty
	 */
	enum class ECustomMatchDifficulty : uint8_t
	{
		Easy      = 0,
		Medium    = 1,
		Hard      = 2,
		Suggested = 3,
		Random    = 4,
		None      = 5,
		Max       = 6,
		MAX       = 7
	};

	/**
	 * Enum DBDUIViewsMobile.ECustomMatchOptions
	 */
	enum class ECustomMatchOptions : uint8_t
	{
		All     = 0,
		None    = 1,
		Owned   = 2,
		Random  = 3,
		Special = 4,
		Count   = 5,
		MAX     = 6
	};

	/**
	 * Enum DBDUIViewsMobile.ECustomMatchTab
	 */
	enum class ECustomMatchTab : uint8_t
	{
		Perks          = 0,
		ItemsAndAddons = 1,
		Offerings      = 2,
		Maps           = 3,
		BotDifficulty  = 4,
		BotCharacter   = 5,
		Count          = 6,
		MAX            = 7
	};

	/**
	 * Enum DBDUIViewsMobile.EFriendTypeButton
	 */
	enum class EFriendTypeButton : uint8_t
	{
		InvitePlayerToParty   = 0,
		RemovePlayerFromParty = 1,
		MAX                   = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct DBDUIViewsMobile.MatchConfigDifficultyData
	 * Size -> 0x0030
	 */
	struct FMatchConfigDifficultyData
	{
	public:
		unsigned char                                              DifficultyIcon[0x30];                                    // 0x0000(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct DBDUIViewsMobile.MatchOptionAssetData
	 * Size -> 0x0048
	 */
	struct FMatchOptionAssetData
	{
	public:
		class FText                                                TextName;                                                // 0x0000(0x0018) Edit, NativeAccessSpecifierPublic
		unsigned char                                              Icon[0x30];                                              // 0x0018(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct DBDUIViewsMobile.MatchConfigTabData
	 * Size -> 0x00B0
	 */
	struct FMatchConfigTabData
	{
	public:
		unsigned char                                              Widget[0x30];                                            // 0x0000(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              TabIcon[0x30];                                           // 0x0030(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		TMap<ECustomMatchOptions, int32_t>                         DefaultOptionsID;                                        // 0x0060(0x0050) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDUIViewsMobile.CustomMatchTabConfig
	 * Size -> 0x0040
	 */
	struct FCustomMatchTabConfig
	{
	public:
		int32_t                                                    ItemWidth;                                               // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ItemHeight;                                              // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    row;                                                     // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Column;                                                  // 0x000C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              OptionButtonClass[0x30];                                 // 0x0010(0x0030) UNKNOWN PROPERTY: SoftClassProperty
	};

	/**
	 * ScriptStruct DBDUIViewsMobile.AtlantaFriendUIData
	 * Size -> 0x0068
	 */
	struct FAtlantaFriendUIData
	{
	public:
		unsigned char                                              UnknownData_7HNO[0x68];                                  // 0x0000(0x0068) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDUIViewsMobile.ActionOnFriend
	 * Size -> 0x0078
	 */
	struct FActionOnFriend
	{
	public:
		EActionOnFriendType                                        ActionToProceed;                                         // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QL18[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAtlantaFriendUIData                                AtlantaFriendDataToUpdate;                               // 0x0008(0x0068) NativeAccessSpecifierPublic
		class UUMGBaseFriendListElement*                           ActionOwner;                                             // 0x0070(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDUIViewsMobile.FriendStatusUIData
	 * Size -> 0x0050 (FullSize[0x0058] - InheritedSize[0x0008])
	 */
	struct FFriendStatusUIData : public FDBDTableRowBase
	{
	public:
		EAtlantaFriendUIStatus                                     FriendStatus;                                            // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VEN5[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              StatusIcon[0x30];                                        // 0x0009(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		class FText                                                StatusText;                                              // 0x0040(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDUIViewsMobile.MatchConfigOptionUIData
	 * Size -> 0x0068
	 */
	struct FMatchConfigOptionUIData
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9220[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              StringId;                                                // 0x0008(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                OptionName;                                              // 0x0018(0x0018) Transient, NativeAccessSpecifierPublic
		unsigned char                                              OptionIcon[0x30];                                        // 0x0030(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		ECustomMatchOptions                                        OptionType;                                              // 0x0060(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8JU8[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
