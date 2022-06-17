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
	 * Enum RetentionRewardsUtilities.EClaimType
	 */
	enum class EClaimType : uint8_t
	{
		Minute = 0,
		Hour   = 1,
		Day    = 2,
		Week   = 3,
		Month  = 4,
		Year   = 5,
		MAX    = 6
	};

	/**
	 * Enum RetentionRewardsUtilities.EClaimResponseCodes
	 */
	enum class EClaimResponseCodes : uint8_t
	{
		Claimed            = 0,
		CalendarNotFound   = 1,
		RewardNotAvailable = 2,
		RewardNotSupported = 3,
		MAX                = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct RetentionRewardsUtilities.RetentionReward
	 * Size -> 0x0068
	 */
	struct FRetentionReward
	{
	public:
		class FString                                              ItemId;                                                  // 0x0000(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   amount;                                                  // 0x0010(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERewardItemType                                            RewardType;                                              // 0x0014(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_41HO[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FName, class FString>                           GameSpecificData;                                        // 0x0018(0x0050) Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RetentionRewardsUtilities.RetentionCalendar
	 * Size -> 0x0038
	 */
	struct FRetentionCalendar
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           StartTime;                                               // 0x0010(0x0008) ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           EndTime;                                                 // 0x0018(0x0008) ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EClaimType                                                 ClaimType;                                               // 0x0020(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2ODY[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRetentionReward>                            Rewards;                                                 // 0x0028(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RetentionRewardsUtilities.CampaignStatus
	 * Size -> 0x0018
	 */
	struct FCampaignStatus
	{
	public:
		bool                                                       IsValid;                                                 // 0x0000(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TVE2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           StartDate;                                               // 0x0008(0x0008) ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           EndDate;                                                 // 0x0010(0x0008) ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RetentionRewardsUtilities.ClaimStatus
	 * Size -> 0x0010
	 */
	struct FClaimStatus
	{
	public:
		bool                                                       IsSet;                                                   // 0x0000(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_18IU[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LastClaimedIndex;                                        // 0x0004(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           NextClaimTime;                                           // 0x0008(0x0008) ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
