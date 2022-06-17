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
	 * ScriptStruct TheHillbilly.ChainsawEvent
	 * Size -> 0x0004
	 */
	struct FChainsawEvent
	{
	public:
		float                                                      ElapsedMatchTime;                                        // 0x0000(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TheHillbilly.ChainsawEventWhileCamping
	 * Size -> 0x0004 (FullSize[0x0008] - InheritedSize[0x0004])
	 */
	struct FChainsawEventWhileCamping : public FChainsawEvent
	{
	public:
		float                                                      DistanceFromClosestHook;                                 // 0x0004(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TheHillbilly.ChainsawAnalytics
	 * Size -> 0x0020 (FullSize[0x00C8] - InheritedSize[0x00A8])
	 */
	struct FChainsawAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              MatchID;                                                 // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FChainsawEventWhileCamping>                  DownSurvivorsWithChainsawWhileCampingEvents;             // 0x00B8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TheHillbilly.HillbillyAnalytics
	 * Size -> 0x0040 (FullSize[0x0108] - InheritedSize[0x00C8])
	 */
	struct FHillbillyAnalytics : public FChainsawAnalytics
	{
	public:
		TArray<struct FChainsawEvent>                              OverheatEvents;                                          // 0x00C8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<struct FChainsawEvent>                              OverheatWhileSprintingEvents;                            // 0x00D8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<struct FChainsawEventWhileCamping>                  OverheatWhileCampingEvents;                              // 0x00E8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<struct FChainsawEvent>                              RevFromZeroHeatEvents;                                   // 0x00F8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
