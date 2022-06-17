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
	 * Class OnlineSubsystem.NamedInterfaces
	 * Size -> 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
	 */
	class UNamedInterfaces : public UObject
	{
	public:
		TArray<struct FNamedInterface>                             NamedInterfaces;                                         // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FNamedInterfaceDef>                          NamedInterfaceDefs;                                      // 0x0040(0x0010) ZeroConstructor, Config, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GA2P[0x18];                                  // 0x0050(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystem.TurnBasedMatchInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UTurnBasedMatchInterface : public UInterface
	{
	public:
		void OnMatchReceivedTurn(const class FString& Match, bool bDidBecomeActive);
		void OnMatchEnded(const class FString& Match);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
