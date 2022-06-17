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
	 * Class SystemUtilities.DateTimeProvider
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UDateTimeProvider : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SystemUtilities.ArrayExt
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UArrayExt : public UBlueprintFunctionLibrary
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SystemUtilities.BoolExt
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UBoolExt : public UBlueprintFunctionLibrary
	{
	public:
		class FString STATIC_ToString(bool boolToConvert);
		static UClass* StaticClass();
	};

	/**
	 * Class SystemUtilities.TimeProviderMock
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UTimeProviderMock : public UDateTimeProvider
	{
	public:
		unsigned char                                              UnknownData_UT1E[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SystemUtilities.DateTimerUpdater
	 * Size -> 0x00A8 (FullSize[0x00D8] - InheritedSize[0x0030])
	 */
	class UDateTimerUpdater : public UObject
	{
	public:
		unsigned char                                              UnknownData_W00W[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UClass*, struct FDateTimerArray>                _timers;                                                 // 0x0038(0x0050) NativeAccessSpecifierPrivate
		TMap<class UClass*, class UDateTimeProvider*>              _dateTimeProvider;                                       // 0x0088(0x0050) NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SystemUtilities.DebugUtilities
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UDebugUtilities : public UBlueprintFunctionLibrary
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SystemUtilities.PlatformUtilities
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UPlatformUtilities : public UBlueprintFunctionLibrary
	{
	public:
		class FString STATIC_GetPlatform();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
