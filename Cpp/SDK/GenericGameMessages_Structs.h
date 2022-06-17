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
	 * ScriptStruct GenericGameMessages.OpenCurrentCalendarMessage
	 * Size -> 0x0004
	 */
	struct FOpenCurrentCalendarMessage
	{
	public:
		int32_t                                                    RemainingDailyRewards;                                   // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GenericGameMessages.LoginMessage
	 * Size -> 0x0010
	 */
	struct FLoginMessage
	{
	public:
		class FString                                              MirrorsId;                                               // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GenericGameMessages.RateAppMessage
	 * Size -> 0x0001
	 */
	struct FRateAppMessage
	{
	public:
		unsigned char                                              UnknownData_2CO7[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GenericGameMessages.UserCenterMessage
	 * Size -> 0x0001
	 */
	struct FUserCenterMessage
	{
	public:
		unsigned char                                              UnknownData_HDES[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GenericGameMessages.ForceLogoutMessage
	 * Size -> 0x0001
	 */
	struct FForceLogoutMessage
	{
	public:
		unsigned char                                              UnknownData_FA15[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GenericGameMessages.SkuDetailsMessage
	 * Size -> 0x0050
	 */
	struct FSkuDetailsMessage
	{
	public:
		TMap<class FString, class FString>                         BundlePrices;                                            // 0x0000(0x0050) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GenericGameMessages.BuyTipsMessage
	 * Size -> 0x0004
	 */
	struct FBuyTipsMessage
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GenericGameMessages.OrderDoneMessage
	 * Size -> 0x0028
	 */
	struct FOrderDoneMessage
	{
	public:
		int32_t                                                    Code;                                                    // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4WXU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              OrderId;                                                 // 0x0008(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              OrderChannel;                                            // 0x0018(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GenericGameMessages.BuyCurrencyMessage
	 * Size -> 0x0010
	 */
	struct FBuyCurrencyMessage
	{
	public:
		class FString                                              ItemId;                                                  // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GenericGameMessages.FAQMessage
	 * Size -> 0x0001
	 */
	struct FFAQMessage
	{
	public:
		unsigned char                                              UnknownData_5TWO[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GenericGameMessages.LanguageMessage
	 * Size -> 0x0010
	 */
	struct FLanguageMessage
	{
	public:
		class FString                                              Language;                                                // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GenericGameMessages.PlayerNameMessage
	 * Size -> 0x0010
	 */
	struct FPlayerNameMessage
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GenericGameMessages.GameVersionMessage
	 * Size -> 0x0010
	 */
	struct FGameVersionMessage
	{
	public:
		class FString                                              Version;                                                 // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GenericGameMessages.MatchEndMessage
	 * Size -> 0x0001
	 */
	struct FMatchEndMessage
	{
	public:
		unsigned char                                              UnknownData_ZIZT[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GenericGameMessages.RoleUnlockMessage
	 * Size -> 0x0001
	 */
	struct FRoleUnlockMessage
	{
	public:
		unsigned char                                              UnknownData_XM44[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GenericGameMessages.PlayerLevelMessage
	 * Size -> 0x0008
	 */
	struct FPlayerLevelMessage
	{
	public:
		int32_t                                                    Level;                                                   // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TotalXp;                                                 // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GenericGameMessages.TutorialEndMessage
	 * Size -> 0x0001
	 */
	struct FTutorialEndMessage
	{
	public:
		unsigned char                                              UnknownData_XZDU[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GenericGameMessages.LoginJsonMessage
	 * Size -> 0x0038
	 */
	struct FLoginJsonMessage
	{
	public:
		class FString                                              LoginJson;                                               // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LoginType;                                               // 0x0010(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              RoleID;                                                  // 0x0020(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsNewAccount;                                            // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZSC8[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GenericGameMessages.LoadEndMessage
	 * Size -> 0x0001
	 */
	struct FLoadEndMessage
	{
	public:
		unsigned char                                              UnknownData_B0YJ[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GenericGameMessages.LoadStartMessage
	 * Size -> 0x0001
	 */
	struct FLoadStartMessage
	{
	public:
		unsigned char                                              UnknownData_IYFK[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GenericGameMessages.SDKEndMessage
	 * Size -> 0x0001
	 */
	struct FSDKEndMessage
	{
	public:
		unsigned char                                              UnknownData_BTUO[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GenericGameMessages.SDKUIMessage
	 * Size -> 0x0001
	 */
	struct FSDKUIMessage
	{
	public:
		unsigned char                                              UnknownData_5E9J[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GenericGameMessages.PatchFailMessage
	 * Size -> 0x0001
	 */
	struct FPatchFailMessage
	{
	public:
		unsigned char                                              UnknownData_ZC80[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GenericGameMessages.PatchEndMessage
	 * Size -> 0x0001
	 */
	struct FPatchEndMessage
	{
	public:
		unsigned char                                              UnknownData_41PT[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GenericGameMessages.PatchStartMessage
	 * Size -> 0x0001
	 */
	struct FPatchStartMessage
	{
	public:
		unsigned char                                              UnknownData_Q9QS[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
