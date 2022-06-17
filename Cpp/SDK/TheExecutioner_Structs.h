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
	 * Enum TheExecutioner.EProtagonist
	 */
	enum class EProtagonist : uint8_t
	{
		Instigator = 0,
		Target     = 1,
		MAX        = 2
	};

	/**
	 * Enum TheExecutioner.ETrailPointRefreshReason
	 */
	enum class ETrailPointRefreshReason : uint8_t
	{
		FrontNeighbourAdded   = 0,
		BackNeighbourAdded    = 1,
		BackNeighbourRemoved  = 2,
		FrontNeighbourRemoved = 3,
		None                  = 4,
		MAX                   = 5
	};

	/**
	 * Enum TheExecutioner.ETrailType
	 */
	enum class ETrailType : uint8_t
	{
		NormalTrail      = 0,
		RestrictionTrail = 1,
		None             = 2,
		MAX              = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct TheExecutioner.AgonyDisplayFxEvent
	 * Size -> 0x0010
	 */
	struct FAgonyDisplayFxEvent
	{
	public:
		struct FGameplayTag                                        GameEvent;                                               // 0x0000(0x000C) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EProtagonist                                               Protagonist;                                             // 0x000C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WRM4[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TheExecutioner.TormentTrailPointInfo
	 * Size -> 0x0060
	 */
	struct FTormentTrailPointInfo
	{
	public:
		unsigned char                                              UnknownData_VGA4[0x60];                                  // 0x0000(0x0060) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TheExecutioner.SpawnedAttackPoint
	 * Size -> 0x0010
	 */
	struct FSpawnedAttackPoint
	{
	public:
		class ABaseTormentTrailPoint*                              AttackTrailPoint;                                        // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O4PA[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TheExecutioner.ReplicatedTrailItem
	 * Size -> 0x0034 (FullSize[0x0040] - InheritedSize[0x000C])
	 */
	struct FReplicatedTrailItem : public FFastArraySerializerItem
	{
	public:
		unsigned char                                              UnknownData_54HV[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ATormentTrailPoint*                                  TrailPoint;                                              // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              OrderInTrail;                                            // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DRM0[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector_NetQuantize10                               PointRelativeLocation;                                   // 0x001C(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            PointRotation;                                           // 0x0028(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6EMZ[0xC];                                   // 0x0034(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TheExecutioner.ReplicatedTrailPointList
	 * Size -> 0x0018 (FullSize[0x0120] - InheritedSize[0x0108])
	 */
	struct FReplicatedTrailPointList : public FFastArraySerializer
	{
	public:
		TArray<struct FReplicatedTrailItem>                        Items;                                                   // 0x0108(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class ATormentTrailController*                             TormentTrailController;                                  // 0x0118(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TheExecutioner.SpawnedTormentTrailPoint
	 * Size -> 0x0010
	 */
	struct FSpawnedTormentTrailPoint
	{
	public:
		class ATormentTrailPoint*                                  TrailPoint;                                              // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E1J2[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
