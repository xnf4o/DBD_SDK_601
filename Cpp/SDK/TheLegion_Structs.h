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
	 * Enum TheLegion.EFrenzyEndReason
	 */
	enum class EFrenzyEndReason : uint8_t
	{
		OutOfTime     = 0,
		Manual        = 1,
		PickUpCamper  = 2,
		Stunned       = 3,
		Mori          = 4,
		Blinded       = 5,
		ChainComplete = 6,
		MAX           = 7
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct TheLegion.LegionSurvivorAnalytics
	 * Size -> 0x0020 (FullSize[0x00C8] - InheritedSize[0x00A8])
	 */
	struct FLegionSurvivorAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              MatchID;                                                 // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DeepWoundCount;                                          // 0x00B8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FrenzyEffectivements;                                    // 0x00BC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DeepWoundDying;                                          // 0x00C0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DeepWoundEscape;                                         // 0x00C4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V4SK[0x3];                                   // 0x00C5(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TheLegion.LegionKillerAnalytics
	 * Size -> 0x0018 (FullSize[0x00C0] - InheritedSize[0x00A8])
	 */
	struct FLegionKillerAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              MatchID;                                                 // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Pallet;                                                  // 0x00B8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_COI1[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
