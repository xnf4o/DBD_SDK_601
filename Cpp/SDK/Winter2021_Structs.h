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
	 * Enum Winter2021.ESnowmanDestructionType
	 */
	enum class ESnowmanDestructionType : uint8_t
	{
		None                        = 0,
		SurvivorRunExit             = 1,
		KillerAttackWhileControlled = 2,
		KillerAttackWhileEmpty      = 3,
		MAX                         = 4
	};

	/**
	 * Enum Winter2021.ESnowmanState
	 */
	enum class ESnowmanState : uint8_t
	{
		Idle         = 0,
		BeingEntered = 1,
		Controlled   = 2,
		Destroyed    = 3,
		MAX          = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Winter2021.SnowmanSpawnLocationData
	 * Size -> 0x0028
	 */
	struct FSnowmanSpawnLocationData
	{
	public:
		struct FVector                                             OriginLocation;                                          // 0x0000(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_00JA[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector>                                     NavmeshLocations;                                        // 0x0010(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CN8U[0x8];                                   // 0x0020(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Winter2021.SnowmanSpawnData
	 * Size -> 0x0018
	 */
	struct FSnowmanSpawnData
	{
	public:
		struct FVector                                             SpawnLocation;                                           // 0x0000(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            SpawnRotation;                                           // 0x000C(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
