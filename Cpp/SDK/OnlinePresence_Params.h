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
	 * Function OnlinePresence.OnlinePresenceExternalCommands.DBD_MirrorsWalletWithdraw
	 */
	struct UOnlinePresenceExternalCommands_DBD_MirrorsWalletWithdraw_Params
	{
	public:
		class FString                                              CurrencyName;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlinePresence.OnlinePresenceExternalCommands.DBD_MirrorsWalletGetCurrency
	 */
	struct UOnlinePresenceExternalCommands_DBD_MirrorsWalletGetCurrency_Params
	{
	public:
		class FString                                              CurrencyName;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlinePresence.OnlinePresenceExternalCommands.DBD_MirrorsSaveTestValue
	 */
	struct UOnlinePresenceExternalCommands_DBD_MirrorsSaveTestValue_Params
	{
	public:
		class FString                                              StateName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Version;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlinePresence.OnlinePresenceExternalCommands.DBD_MirrorsGetValue
	 */
	struct UOnlinePresenceExternalCommands_DBD_MirrorsGetValue_Params
	{
	public:
		class FString                                              StateName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlinePresence.OnlinePresenceExternalCommands.DBD_IsDlcInstalled
	 */
	struct UOnlinePresenceExternalCommands_DBD_IsDlcInstalled_Params
	{
	public:
		class FString                                              inString;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlinePresence.OnlinePresenceExternalCommands.DBD_GrantPromoItems
	 */
	struct UOnlinePresenceExternalCommands_DBD_GrantPromoItems_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlinePresence.OnlinePresenceExternalCommands.DBD_GenerateTestItems
	 */
	struct UOnlinePresenceExternalCommands_DBD_GenerateTestItems_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
