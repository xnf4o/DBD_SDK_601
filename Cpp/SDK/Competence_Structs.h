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
	 * ScriptStruct Competence.ModifierReplicatedEventConditionData
	 * Size -> 0x0010
	 */
	struct FModifierReplicatedEventConditionData
	{
	public:
		class UEventDrivenModifierCondition*                       EventDrivenCondition;                                    // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasCondition;                                            // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AuthorityDataSet;                                        // 0x0009(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VNZL[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Competence.GameplayFlagCache
	 * Size -> 0x00A0
	 */
	struct FGameplayFlagCache
	{
	public:
		unsigned char                                              UnknownData_FIEY[0xA0];                                  // 0x0000(0x00A0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Competence.GamePlayModifier
	 * Size -> 0x0010
	 */
	struct FGamePlayModifier
	{
	public:
		struct FGameplayTag                                        Type;                                                    // 0x0000(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ModifierValue;                                           // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Competence.GameplayModifierData
	 * Size -> 0x0030
	 */
	struct FGameplayModifierData
	{
	public:
		TArray<class UClass*>                                      Conditions;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		TArray<struct FGamePlayModifier>                           Modifiers;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FGameplayTag>                                TaggedFlags;                                             // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Competence.GameplayModifierCache
	 * Size -> 0x00A0
	 */
	struct FGameplayModifierCache
	{
	public:
		unsigned char                                              UnknownData_X7IE[0xA0];                                  // 0x0000(0x00A0) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
