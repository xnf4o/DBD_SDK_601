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
	 * Function TheGhostface.GhostChargeStalkModeInteraction.GetStealthComponent
	 */
	struct UGhostChargeStalkModeInteraction_GetStealthComponent_Params
	{
	public:
		class UGhostStealthComponent*                              ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheGhostface.GhostKillerAnalyticsComponent.Local_OnStalkModeChanged
	 */
	struct UGhostKillerAnalyticsComponent_Local_OnStalkModeChanged_Params
	{
	public:
		bool                                                       IsInStalkMode;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheGhostface.GhostKillerAnalyticsComponent.Local_OnLeanStateChanged
	 */
	struct UGhostKillerAnalyticsComponent_Local_OnLeanStateChanged_Params
	{
	public:
		ELeanState                                                 leanState;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheGhostface.GhostKillerAnalyticsComponent.Local_OnIsStealthChanged
	 */
	struct UGhostKillerAnalyticsComponent_Local_OnIsStealthChanged_Params
	{
	public:
		bool                                                       IsStealth;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheGhostface.GhostKillerAnalyticsComponent.Authority_OnStalkChargePercentChanged
	 */
	struct UGhostKillerAnalyticsComponent_Authority_OnStalkChargePercentChanged_Params
	{
	public:
		class UChargeableComponent*                                ChargeableComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      PercentCompletionChange;                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      TotalPercentComplete;                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheGhostface.GhostKillerAnalyticsComponent.Authority_OnPreAttackSuccess
	 */
	struct UGhostKillerAnalyticsComponent_Authority_OnPreAttackSuccess_Params
	{
	public:
		struct FGameplayTag                                        GameplayTag;                                             // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameEventData                                      GameEventData;                                           // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheGhostface.GhostStalkedComponent.OnKillerSpottedChanged
	 */
	struct UGhostStalkedComponent_OnKillerSpottedChanged_Params
	{
	public:
		class ADBDPlayer*                                          spotter;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       spotted;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction TheGhostface.GhostStalkedComponent.OnIsSpottingKiller__DelegateSignature
	 */
	struct UGhostStalkedComponent_OnIsSpottingKiller__DelegateSignature_Params
	{
	public:
		bool                                                       isSpotting;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction TheGhostface.GhostStalkedComponent.OnIsMarkedChanged__DelegateSignature
	 */
	struct UGhostStalkedComponent_OnIsMarkedChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsMarked;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheGhostface.GhostStalkedComponent.Local_OnSpotKiller
	 */
	struct UGhostStalkedComponent_Local_OnSpotKiller_Params
	{	};

	/**
	 * Function TheGhostface.GhostStalkedComponent.IsMarked
	 */
	struct UGhostStalkedComponent_IsMarked_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheGhostface.GhostStalkedComponent.Initialize
	 */
	struct UGhostStalkedComponent_Initialize_Params
	{
	public:
		class ASlasherPlayer*                                      killer;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheGhostface.GhostStalkedComponent.DBD_DebugGhost
	 */
	struct UGhostStalkedComponent_DBD_DebugGhost_Params
	{
	public:
		bool                                                       debug;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheGhostface.GhostStalkedComponent.Client_OnSpotKiller
	 */
	struct UGhostStalkedComponent_Client_OnSpotKiller_Params
	{	};

	/**
	 * Function TheGhostface.GhostStalkedComponent.Authority_OnStalkedChargeFull
	 */
	struct UGhostStalkedComponent_Authority_OnStalkedChargeFull_Params
	{
	public:
		bool                                                       COMPLETED;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class AActor*>                                      instigatorsForCompletion;                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheGhostface.GhostStalkPowerComponent.RefreshSurvivorMaximumSightDistance
	 */
	struct UGhostStalkPowerComponent_RefreshSurvivorMaximumSightDistance_Params
	{	};

	/**
	 * Function TheGhostface.GhostStalkPowerComponent.OnLeanStateChanged
	 */
	struct UGhostStalkPowerComponent_OnLeanStateChanged_Params
	{
	public:
		ELeanState                                                 leanState;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheGhostface.GhostStalkPowerComponent.OnIsCrouchedChanged
	 */
	struct UGhostStalkPowerComponent_OnIsCrouchedChanged_Params
	{
	public:
		bool                                                       isCrouched;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheGhostface.GhostStalkPowerComponent.Authority_OnStalkModeChanged
	 */
	struct UGhostStalkPowerComponent_Authority_OnStalkModeChanged_Params
	{
	public:
		bool                                                       IsInStalkMode;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheGhostface.GhostStealthComponent.SetRedStainVisibility
	 */
	struct UGhostStealthComponent_SetRedStainVisibility_Params
	{
	public:
		bool                                                       visible;                                                 // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction TheGhostface.GhostStealthComponent.OnSuccessfulAttackInStealth__DelegateSignature
	 */
	struct UGhostStealthComponent_OnSuccessfulAttackInStealth__DelegateSignature_Params
	{
	public:
		class ADBDPlayer*                                          Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction TheGhostface.GhostStealthComponent.OnStealthStateChanged__DelegateSignature
	 */
	struct UGhostStealthComponent_OnStealthStateChanged__DelegateSignature_Params
	{
	public:
		EGhostStealthState                                         stealthState;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction TheGhostface.GhostStealthComponent.OnStealthCancelledByPlayer__DelegateSignature
	 */
	struct UGhostStealthComponent_OnStealthCancelledByPlayer__DelegateSignature_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheGhostface.GhostStealthComponent.OnRep_StealthState
	 */
	struct UGhostStealthComponent_OnRep_StealthState_Params
	{
	public:
		EGhostStealthState                                         previousState;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction TheGhostface.GhostStealthComponent.OnIsStealthChanged__DelegateSignature
	 */
	struct UGhostStealthComponent_OnIsStealthChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsStealth;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction TheGhostface.GhostStealthComponent.OnIsBeingSpotChanged__DelegateSignature
	 */
	struct UGhostStealthComponent_OnIsBeingSpotChanged__DelegateSignature_Params
	{
	public:
		class ADBDPlayer*                                          spotter;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       isBeingSpot;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheGhostface.GhostStealthComponent.Multicast_OnPlayerSpottedKiller
	 */
	struct UGhostStealthComponent_Multicast_OnPlayerSpottedKiller_Params
	{
	public:
		class ADBDPlayer*                                          spotter;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheGhostface.GhostStealthComponent.Multicast_OnIsBeingSpottedChanged
	 */
	struct UGhostStealthComponent_Multicast_OnIsBeingSpottedChanged_Params
	{
	public:
		class ADBDPlayer*                                          spotter;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       isBeingSpotted;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       onlyUpdateSurvivor;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheGhostface.GhostStealthComponent.Multicast_BroadcastOnSuccessfulAttackInStealth
	 */
	struct UGhostStealthComponent_Multicast_BroadcastOnSuccessfulAttackInStealth_Params
	{
	public:
		class ADBDPlayer*                                          Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheGhostface.GhostStealthComponent.IsStealthReadyToActivate
	 */
	struct UGhostStealthComponent_IsStealthReadyToActivate_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheGhostface.GhostStealthComponent.IsStealth
	 */
	struct UGhostStealthComponent_IsStealth_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheGhostface.GhostStealthComponent.GetStealthState
	 */
	struct UGhostStealthComponent_GetStealthState_Params
	{
	public:
		EGhostStealthState                                         ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheGhostface.GhostStealthComponent.GetStealthChargePercent
	 */
	struct UGhostStealthComponent_GetStealthChargePercent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheGhostface.GhostStealthComponent.DBD_ResetGhostStealth
	 */
	struct UGhostStealthComponent_DBD_ResetGhostStealth_Params
	{	};

	/**
	 * Function TheGhostface.GhostStealthComponent.Client_SpawnMarkerOnCharacter
	 */
	struct UGhostStealthComponent_Client_SpawnMarkerOnCharacter_Params
	{
	public:
		class ACharacter*                                          revealer;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheGhostface.GhostStealthComponent.Authority_TryActivateStealth
	 */
	struct UGhostStealthComponent_Authority_TryActivateStealth_Params
	{	};

	/**
	 * Function TheGhostface.GhostStealthComponent.Authority_ResetGhostStealth
	 */
	struct UGhostStealthComponent_Authority_ResetGhostStealth_Params
	{	};

	/**
	 * Function TheGhostface.TheGhostUtilities.IsKillerStealth
	 */
	struct UTheGhostUtilities_IsKillerStealth_Params
	{
	public:
		class AActor*                                              killer;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
