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
	 * Class AudioExtensions.SoundfieldEncodingSettingsBase
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class USoundfieldEncodingSettingsBase : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioExtensions.AudioEndpointSettingsBase
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UAudioEndpointSettingsBase : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioExtensions.DummyEndpointSettings
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UDummyEndpointSettings : public UAudioEndpointSettingsBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioExtensions.SpatializationPluginSourceSettingsBase
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class USpatializationPluginSourceSettingsBase : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioExtensions.OcclusionPluginSourceSettingsBase
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UOcclusionPluginSourceSettingsBase : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioExtensions.ReverbPluginSourceSettingsBase
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UReverbPluginSourceSettingsBase : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioExtensions.SoundModulatorBase
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class USoundModulatorBase : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioExtensions.SoundfieldEndpointSettingsBase
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class USoundfieldEndpointSettingsBase : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioExtensions.SoundfieldEffectSettingsBase
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class USoundfieldEffectSettingsBase : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioExtensions.SoundfieldEffectBase
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class USoundfieldEffectBase : public UObject
	{
	public:
		class USoundfieldEffectSettingsBase*                       Settings;                                                // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
