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
	 * Class PacketHandler.HandlerComponentFactory
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UHandlerComponentFactory : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PacketHandler.PacketHandlerProfileConfig
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UPacketHandlerProfileConfig : public UObject
	{
	public:
		TArray<class FString>                                      Components;                                              // 0x0030(0x0010) ZeroConstructor, Config, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
