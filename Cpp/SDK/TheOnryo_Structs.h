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
	 * Enum TheOnryo.ETelevisionCosmeticState
	 */
	enum class ETelevisionCosmeticState : uint8_t
	{
		Off                                = 0,
		TurningOn                          = 1,
		TurningOff                         = 2,
		Static                             = 3,
		TransitionToSurvivorTape           = 4,
		PlaySurvivorTape                   = 5,
		TransitionToKillerTape             = 6,
		PlayKillerTape                     = 7,
		TransitionFromSurvivorTapeToStatic = 8,
		TransitionFromKillerTapeToStatic   = 9,
		FakeTeleport                       = 10,
		TurningOffOnEject                  = 11,
		MAX                                = 12
	};

	/**
	 * Enum TheOnryo.EFlickerType
	 */
	enum class EFlickerType : uint8_t
	{
		None           = 0,
		Flickering     = 1,
		FlickeringFast = 2,
		MAX            = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct TheOnryo.FlickerSettings
	 * Size -> 0x0078
	 */
	struct FFlickerSettings
	{
	public:
		struct FDBDTunableRowHandle                                VisibleDuration;                                         // 0x0000(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGameplayTag>                                VisibileDurationAddModifiers;                            // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FDBDTunableRowHandle                                InvisibleDuration;                                       // 0x0038(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGameplayTag>                                InvisibleDurationAddModifiers;                           // 0x0060(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		bool                                                       StartVisible;                                            // 0x0070(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YAHB[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
