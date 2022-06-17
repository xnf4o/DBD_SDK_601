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
	 * Function DBDAnalytics.AnalyticsFunctionLibrary.IncrementHookSpawned
	 */
	struct UAnalyticsFunctionLibrary_IncrementHookSpawned_Params
	{	};

	/**
	 * Function DBDAnalytics.ClosetAnalytics.RecordClosetSearchSuccess
	 */
	struct UClosetAnalytics_RecordClosetSearchSuccess_Params
	{
	public:
		class ASlasherPlayer*                                      killer;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDAnalytics.ClosetAnalytics.RecordClosetSearchFail
	 */
	struct UClosetAnalytics_RecordClosetSearchFail_Params
	{
	public:
		class ASlasherPlayer*                                      killer;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDAnalytics.ClosetAnalytics.IncrementClosetEnter
	 */
	struct UClosetAnalytics_IncrementClosetEnter_Params
	{
	public:
		class ACamperPlayer*                                       survivor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDAnalytics.DBDAnalytics.RecordGameProgress
	 */
	struct UDBDAnalytics_RecordGameProgress_Params
	{
	public:
		class FString                                              InProgressType;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDAnalytics.PerkAnalyticsLibrary.SendTinkererUndetectableInterruptAnalytics
	 */
	struct UPerkAnalyticsLibrary_SendTinkererUndetectableInterruptAnalytics_Params
	{
	public:
		class ADBDPlayer*                                          interruptedPlayer;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ADBDPlayer*                                          Slasher;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDAnalytics.PerkAnalyticsLibrary.SendTinkererUndetectableHitNearGeneratorAnalytics
	 */
	struct UPerkAnalyticsLibrary_SendTinkererUndetectableHitNearGeneratorAnalytics_Params
	{
	public:
		class ADBDPlayer*                                          hitPlayer;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ADBDPlayer*                                          Slasher;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDAnalytics.PerkAnalyticsLibrary.SendLightbornAuraRevealedAnalytics
	 */
	struct UPerkAnalyticsLibrary_SendLightbornAuraRevealedAnalytics_Params
	{
	public:
		class ADBDPlayer*                                          revealedPlayer;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ADBDPlayer*                                          Slasher;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDAnalytics.PerkAnalyticsLibrary.SendKnockoutSurvivorFoundAnalytics
	 */
	struct UPerkAnalyticsLibrary_SendKnockoutSurvivorFoundAnalytics_Params
	{
	public:
		class ADBDPlayer*                                          findingSurvivor;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ADBDPlayer*                                          foundSurvivor;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDAnalytics.PerkAnalyticsLibrary.SendFranklinsHitSurvivorNearDroppedItemAnalytics
	 */
	struct UPerkAnalyticsLibrary_SendFranklinsHitSurvivorNearDroppedItemAnalytics_Params
	{
	public:
		class ADBDPlayer*                                          hitSurvivor;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ADBDPlayer*                                          Slasher;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDAnalytics.PerkAnalyticsLibrary.SendFranklinsConsumeItemAnalytics
	 */
	struct UPerkAnalyticsLibrary_SendFranklinsConsumeItemAnalytics_Params
	{
	public:
		class ADBDPlayer*                                          previousOwner;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDAnalytics.PigAnalytics.RecordRBTSearch
	 */
	struct UPigAnalytics_RecordRBTSearch_Params
	{
	public:
		class ACamperPlayer*                                       searchingPlayer;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       success;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDAnalytics.PigAnalytics.OnRBTAttached_Analytics
	 */
	struct UPigAnalytics_OnRBTAttached_Analytics_Params
	{
	public:
		class ASlasherPlayer*                                      attacher;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ACamperPlayer*                                       attachee;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDAnalytics.PigAnalytics.IncrementRBTTimerActived
	 */
	struct UPigAnalytics_IncrementRBTTimerActived_Params
	{
	public:
		class ACamperPlayer*                                       attachedPlayer;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDAnalytics.PigAnalytics.IncrementRBTKilledCount
	 */
	struct UPigAnalytics_IncrementRBTKilledCount_Params
	{
	public:
		class ACamperPlayer*                                       playerKilled;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       killedByExecutionZone;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDAnalytics.PulldownAnalytics.IncrementPalletStun
	 */
	struct UPulldownAnalytics_IncrementPalletStun_Params
	{
	public:
		class ACamperPlayer*                                       survivor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDAnalytics.PulldownAnalytics.IncrementPalletSpawned
	 */
	struct UPulldownAnalytics_IncrementPalletSpawned_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDAnalytics.PulldownAnalytics.IncrementPalletDrop
	 */
	struct UPulldownAnalytics_IncrementPalletDrop_Params
	{
	public:
		class ACamperPlayer*                                       survivor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDAnalytics.PulldownAnalytics.IncrementPalletDestroy
	 */
	struct UPulldownAnalytics_IncrementPalletDestroy_Params
	{
	public:
		class ASlasherPlayer*                                      killer;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDAnalytics.SurvivorInteractionAnalytics.RecordHealSuccess
	 */
	struct USurvivorInteractionAnalytics_RecordHealSuccess_Params
	{
	public:
		class ACamperPlayer*                                       survivor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDAnalytics.SurvivorInteractionAnalytics.RecordHatchEscape
	 */
	struct USurvivorInteractionAnalytics_RecordHatchEscape_Params
	{
	public:
		class ACamperPlayer*                                       survivor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDAnalytics.SurvivorInteractionAnalytics.IncrementHealCount
	 */
	struct USurvivorInteractionAnalytics_IncrementHealCount_Params
	{
	public:
		class ACamperPlayer*                                       survivor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
