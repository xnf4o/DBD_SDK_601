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
	 * Class OnlinePresence.MirrorsConfig
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UMirrorsConfig : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlinePresence.OnlinePresenceExternalCommands
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UOnlinePresenceExternalCommands : public UObject
	{
	public:
		unsigned char                                              UnknownData_6XZH[0x18];                                  // 0x0030(0x0018) MISSED OFFSET (PADDING)

	public:
		void DBD_MirrorsWalletWithdraw(const class FString& CurrencyName, int32_t value);
		void DBD_MirrorsWalletGetCurrency(const class FString& CurrencyName);
		void DBD_MirrorsSaveTestValue(const class FString& StateName, int32_t Version);
		void DBD_MirrorsGetValue(const class FString& StateName);
		bool DBD_IsDlcInstalled(const class FString& inString);
		bool DBD_GrantPromoItems();
		bool DBD_GenerateTestItems();
		static UClass* StaticClass();
	};

	/**
	 * Class OnlinePresence.SteamConfig
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class USteamConfig : public UObject
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
