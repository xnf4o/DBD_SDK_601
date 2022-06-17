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
	 * Class CoreUtilities.CoreUtilities
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UCoreUtilities : public UBlueprintFunctionLibrary
	{
	public:
		TArray<int32_t> STATIC_GetRandomValuesFromArray(TArray<int32_t> Values, int32_t numberOfDesiredValues);
		class UGameInstance* STATIC_GetGameInstance(class UObject* WorldContextObject);
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUtilities.PropertyParser
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UPropertyParser : public UObject
	{
	public:
		void STATIC_CopyProperties(class UActorComponent* Dest, class UActorComponent* Origin, bool copyTransform, TArray<class FName> propertiesToExclude);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
