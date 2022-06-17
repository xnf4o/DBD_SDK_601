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
	 * Enum TheNurse.EBlinkPowerState
	 */
	enum class EBlinkPowerState : uint8_t
	{
		Ready            = 0,
		ChainBlink       = 1,
		AttackBlink      = 2,
		AwaitingCooldown = 3,
		Cooldown         = 4,
		MAX              = 5
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct TheNurse.BlinkParams
	 * Size -> 0x0040
	 */
	struct FBlinkParams
	{
	public:
		struct FTransform                                          TargetTransform;                                         // 0x0000(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Duration;                                                // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZZPC[0xC];                                   // 0x0034(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TheNurse.BlinkPowerSetupParams
	 * Size -> 0x0018
	 */
	struct FBlinkPowerSetupParams
	{
	public:
		class UTimerObject*                                        ChainBlinkTimer;                                         // 0x0000(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTimerObject*                                        CooldownTimer;                                           // 0x0008(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTimerObject*                                        RechargeTimer;                                           // 0x0010(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
