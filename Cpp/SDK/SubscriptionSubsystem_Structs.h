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
	 * Enum SubscriptionSubsystem.ESubscriptionClaimType
	 */
	enum class ESubscriptionClaimType : uint8_t
	{
		None    = 0,
		Daily   = 1,
		Renewal = 2,
		MAX     = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct SubscriptionSubsystem.SubscriptionReward
	 * Size -> 0x0028
	 */
	struct FSubscriptionReward
	{
	public:
		TArray<struct FRewardItem>                                 Rewards;                                                 // 0x0000(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		struct FDateTime                                           NextClaimTime;                                           // 0x0010(0x0008) ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AnalyticsEventId;                                        // 0x0018(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SubscriptionSubsystem.SubscriptionRewardMap
	 * Size -> 0x0050
	 */
	struct FSubscriptionRewardMap
	{
	public:
		TMap<ESubscriptionClaimType, struct FSubscriptionReward>   RewardsByClaimType;                                      // 0x0000(0x0050) Transient, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
