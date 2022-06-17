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
	 * Enum TheOni.EBloodOrbState
	 */
	enum class EBloodOrbState : uint8_t
	{
		Invalid       = 0,
		BeingDropped  = 1,
		Idle          = 2,
		WaitingToMove = 3,
		Attracted     = 4,
		Absorbed      = 5,
		Destroyed     = 6,
		MAX           = 7
	};

	/**
	 * Enum TheOni.EBloodOrbVisibilityMode
	 */
	enum class EBloodOrbVisibilityMode : uint8_t
	{
		VisibleWithinRange = 0,
		HideAll            = 1,
		MAX                = 2
	};

	/**
	 * Enum TheOni.EDemonModeState
	 */
	enum class EDemonModeState : uint8_t
	{
		Invalid    = 0,
		NotInPower = 1,
		Activation = 2,
		InPower    = 3,
		Cooldown   = 4,
		MAX        = 5
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct TheOni.GameEventBloodOrbDropParams
	 * Size -> 0x0010
	 */
	struct FGameEventBloodOrbDropParams
	{
	public:
		struct FGameplayTag                                        GameEvent;                                               // 0x0000(0x000C) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ImpulseFactor;                                           // 0x000C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TheOni.BloodOrbInfo
	 * Size -> 0x0060
	 */
	struct FBloodOrbInfo
	{
	public:
		unsigned char                                              UnknownData_L8CW[0x50];                                  // 0x0000(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMeshComponent*                                originalStaticMesh;                                      // 0x0050(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMeshComponent*                                clonedStaticMesh;                                        // 0x0058(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TheOni.Accumulator
	 * Size -> 0x0018
	 */
	struct FAccumulator
	{
	public:
		unsigned char                                              UnknownData_WN1F[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TheOni.BloodOrbDropParams
	 * Size -> 0x0008
	 */
	struct FBloodOrbDropParams
	{
	public:
		unsigned char                                              UnknownData_QS8E[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
