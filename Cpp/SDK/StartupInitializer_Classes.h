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
	 * Class StartupInitializer.StartupInitializer
	 * Size -> 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
	 */
	class UStartupInitializer : public UObject
	{
	public:
		unsigned char                                              UnknownData_XF6K[0x48];                                  // 0x0030(0x0048) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class StartupInitializer.ClientStartupInitializer
	 * Size -> 0x0130 (FullSize[0x01A8] - InheritedSize[0x0078])
	 */
	class UClientStartupInitializer : public UStartupInitializer
	{
	public:
		unsigned char                                              UnknownData_428U[0x130];                                 // 0x0078(0x0130) MISSED OFFSET (PADDING)

	public:
		void OnHealthCheckTriggered(bool requestSuccess, int32_t ProviderError, bool datetimeIsSet, const struct FDateTime& utcTime);
		static UClass* StaticClass();
	};

	/**
	 * Class StartupInitializer.DedicatedServerStartupInitializer
	 * Size -> 0x0038 (FullSize[0x00B0] - InheritedSize[0x0078])
	 */
	class UDedicatedServerStartupInitializer : public UStartupInitializer
	{
	public:
		unsigned char                                              UnknownData_74Z8[0x8];                                   // 0x0078(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDBDTimeUtilities*                                   _dbdTimeUtilities;                                       // 0x0080(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_N84G[0x28];                                  // 0x0088(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
