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
	 * ScriptStruct DBDCosmetic.SurvivorCosmeticHelperActorSpawnInfo
	 * Size -> 0x0040 (FullSize[0x0048] - InheritedSize[0x0008])
	 */
	struct FSurvivorCosmeticHelperActorSpawnInfo : public FDBDTableRowBase
	{
	public:
		struct FGameplayTag                                        KillerPresenceTag;                                       // 0x0008(0x000C) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UMH5[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              SurvivorCosmeticActorClass[0x30];                        // 0x0014(0x0030) UNKNOWN PROPERTY: SoftClassProperty
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
