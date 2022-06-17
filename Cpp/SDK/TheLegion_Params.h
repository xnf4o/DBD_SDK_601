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
	 * Function TheLegion.FrenzyComponent.StartFrenzy
	 */
	struct UFrenzyComponent_StartFrenzy_Params
	{	};

	/**
	 * Function TheLegion.FrenzyComponent.SetStartingFrenzy
	 */
	struct UFrenzyComponent_SetStartingFrenzy_Params
	{
	public:
		bool                                                       startingFrenzy;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheLegion.FrenzyComponent.SetObjectState
	 */
	struct UFrenzyComponent_SetObjectState_Params
	{
	public:
		class UGameplayTagContainerComponent*                      objectState;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheLegion.FrenzyComponent.ResumeFrenzyChargeDepletion
	 */
	struct UFrenzyComponent_ResumeFrenzyChargeDepletion_Params
	{	};

	/**
	 * Function TheLegion.FrenzyComponent.PauseFrenzyChargeDepletion
	 */
	struct UFrenzyComponent_PauseFrenzyChargeDepletion_Params
	{	};

	/**
	 * Function TheLegion.FrenzyComponent.OnMoriStarted
	 */
	struct UFrenzyComponent_OnMoriStarted_Params
	{	};

	/**
	 * Function TheLegion.FrenzyComponent.OnGameEventDispatched
	 */
	struct UFrenzyComponent_OnGameEventDispatched_Params
	{
	public:
		struct FGameplayTag                                        gameEventType;                                           // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameEventData                                      GameEventData;                                           // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheLegion.FrenzyComponent.OnFrenzyCooldownStarted
	 */
	struct UFrenzyComponent_OnFrenzyCooldownStarted_Params
	{	};

	/**
	 * Function TheLegion.FrenzyComponent.IsStartingFrenzy
	 */
	struct UFrenzyComponent_IsStartingFrenzy_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheLegion.FrenzyComponent.IsInFrenzyCooldown
	 */
	struct UFrenzyComponent_IsInFrenzyCooldown_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheLegion.FrenzyComponent.IsInFrenzy
	 */
	struct UFrenzyComponent_IsInFrenzy_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheLegion.FrenzyComponent.InitializeFrenzy
	 */
	struct UFrenzyComponent_InitializeFrenzy_Params
	{	};

	/**
	 * Function TheLegion.FrenzyComponent.HasStartedInjuredBleedoutDuringThisFrenzy
	 */
	struct UFrenzyComponent_HasStartedInjuredBleedoutDuringThisFrenzy_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheLegion.FrenzyComponent.EndFrenzy
	 */
	struct UFrenzyComponent_EndFrenzy_Params
	{
	public:
		EFrenzyEndReason                                           Reason;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheLegion.FrenzyComponent.CanStartFrenzy
	 */
	struct UFrenzyComponent_CanStartFrenzy_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheLegion.FrenzyComponent.CanManuallyEndFrenzy
	 */
	struct UFrenzyComponent_CanManuallyEndFrenzy_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheLegion.LegionCheatComponent.DBD_LegionFrenzyForever
	 */
	struct ULegionCheatComponent_DBD_LegionFrenzyForever_Params
	{	};

	/**
	 * Function TheLegion.LegionKillerAnalyticsComponent.SetGameEventDispatcher
	 */
	struct ULegionKillerAnalyticsComponent_SetGameEventDispatcher_Params
	{
	public:
		class UGameEventDispatcher*                                GameEventDispatcher;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheLegion.LegionSurvivorAnalyticsComponent.SetGameEventDispatcher
	 */
	struct ULegionSurvivorAnalyticsComponent_SetGameEventDispatcher_Params
	{
	public:
		class UGameEventDispatcher*                                GameEventDispatcher;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheLegion.LegionSurvivorAnalyticsComponent.OnGameEventDispatched
	 */
	struct ULegionSurvivorAnalyticsComponent_OnGameEventDispatched_Params
	{
	public:
		struct FGameplayTag                                        gameEventType;                                           // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameEventData                                      GameEventData;                                           // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheLegion.ModifyFrenzyFOVEffect.Authority_OnFrenzyTierIncreased
	 */
	struct UModifyFrenzyFOVEffect_Authority_OnFrenzyTierIncreased_Params
	{
	public:
		int32_t                                                    tier;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
