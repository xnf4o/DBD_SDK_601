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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class GameplayTagUtilities.DBDGameplayTagUtilities
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UDBDGameplayTagUtilities : public UBlueprintFunctionLibrary
	{
	public:
		class FName STATIC_GetScoreModifierName(const class FName& scoreEventID);
		bool STATIC_GameplayTagExists(const class FName& TagName);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayTagUtilities.GameplayTagContainerComponent
	 * Size -> 0x0070 (FullSize[0x0128] - InheritedSize[0x00B8])
	 */
	class UGameplayTagContainerComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_SNAN[0x70];                                  // 0x00B8(0x0070) MISSED OFFSET (PADDING)

	public:
		void Remove(const struct FGameplayTag& State);
		void Add(const struct FGameplayTag& State);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayTagUtilities.ObjectStateProvider
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UObjectStateProvider : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
