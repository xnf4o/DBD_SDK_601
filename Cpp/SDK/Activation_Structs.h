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
	 * Enum Activation.EActivationStrategy
	 */
	enum class EActivationStrategy : uint8_t
	{
		ActivateIfAnyTagMatches                  = 0,
		ActivateIfAllTagMatches                  = 1,
		DeactivateIfAnyTagMatches                = 2,
		DeactivateIfAllTagMatches                = 3,
		DeactivateWhenDependenciesAreDeactivated = 4,
		MAX                                      = 5
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Activation.ActivationDefinition
	 * Size -> 0x0028
	 */
	struct FActivationDefinition
	{
	public:
		EActivationStrategy                                        _activationStrategy;                                     // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_BDQT[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTagContainer                               _activationTags;                                         // 0x0008(0x0020) Edit, Protected, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct Activation.TestableActivationDefinition
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	struct FTestableActivationDefinition : public FActivationDefinition
	{	};

	/**
	 * ScriptStruct Activation.DependencyBasedActivationStrategy
	 * Size -> 0x0020
	 */
	struct FDependencyBasedActivationStrategy
	{
	public:
		unsigned char                                              UnknownData_2FFG[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
