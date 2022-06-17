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
	 * ScriptStruct TheCannibal.ChainsawHitWithPowerCharge
	 * Size -> 0x0004 (FullSize[0x0008] - InheritedSize[0x0004])
	 */
	struct FChainsawHitWithPowerCharge : public FChainsawEvent
	{
	public:
		int32_t                                                    NumPowerCharges;                                         // 0x0004(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TheCannibal.CannibalAnalytics
	 * Size -> 0x0020 (FullSize[0x00E8] - InheritedSize[0x00C8])
	 */
	struct FCannibalAnalytics : public FChainsawAnalytics
	{
	public:
		TArray<struct FChainsawHitWithPowerCharge>                 HitWithPowerChargeEvents;                                // 0x00C8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<struct FChainsawEvent>                              RevToTantrumEvents;                                      // 0x00D8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
