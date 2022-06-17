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
	 * Enum OnlineMessagesUtilities.EClaimableInboxMessageState
	 */
	enum class EClaimableInboxMessageState : uint8_t
	{
		NONE    = 0,
		CLAIMED = 1,
		MAX     = 2
	};

	/**
	 * Enum OnlineMessagesUtilities.EClaimableInboxMessageType
	 */
	enum class EClaimableInboxMessageType : uint8_t
	{
		None      = 0,
		Currency  = 1,
		Inventory = 2,
		MAX       = 3
	};

	/**
	 * Enum OnlineMessagesUtilities.EOnlineMessageFlag
	 */
	enum class EOnlineMessageFlag : uint8_t
	{
		New      = 0,
		Read     = 1,
		Archived = 2,
		MAX      = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct OnlineMessagesUtilities.ClaimableInboxMessageData
	 * Size -> 0x0018
	 */
	struct FClaimableInboxMessageData
	{
	public:
		EClaimableInboxMessageType                                 Type;                                                    // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TPAB[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    amount;                                                  // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ID;                                                      // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OnlineMessagesUtilities.InboxMessageData
	 * Size -> 0x0070
	 */
	struct FInboxMessageData
	{
	public:
		int64_t                                                    ID;                                                      // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Origin;                                                  // 0x0008(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              RecipientId;                                             // 0x0018(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    ReceivedTimestamp;                                       // 0x0028(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Subject;                                                 // 0x0030(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Body;                                                    // 0x0040(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FClaimableInboxMessageData>                  Claimable;                                               // 0x0050(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		bool                                                       AreRewardsClaimed;                                       // 0x0060(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsRead;                                                  // 0x0061(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z002[0x6];                                   // 0x0062(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    ExpireTimestamp;                                         // 0x0068(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OnlineMessagesUtilities.ClaimableInboxMessage
	 * Size -> 0x0018
	 */
	struct FClaimableInboxMessage
	{
	public:
		TArray<struct FClaimableInboxMessageData>                  Data;                                                    // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		EClaimableInboxMessageState                                State;                                                   // 0x0010(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NOR3[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
