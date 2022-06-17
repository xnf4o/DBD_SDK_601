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
	 * Function TheK28.Addon_K28Power_18.Authority_OnIntroComplete
	 */
	struct UAddon_K28Power_18_Authority_OnIntroComplete_Params
	{	};

	/**
	 * Function TheK28.Addon_K28Power_19.Multicast_TriggerLockerAnimationOnAllLockers
	 */
	struct UAddon_K28Power_19_Multicast_TriggerLockerAnimationOnAllLockers_Params
	{
	public:
		TArray<class ALocker*>                                     lockers;                                                 // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK28.Addon_K28Power_21.Authority_OnLevelReadyToPlay
	 */
	struct UAddon_K28Power_21_Authority_OnLevelReadyToPlay_Params
	{	};

	/**
	 * Function TheK28.K28AnimInstance.OnCustomizationChanged
	 */
	struct UK28AnimInstance_OnCustomizationChanged_Params
	{	};

	/**
	 * Function TheK28.K28AnimInstance.GetCustomAnimationTags
	 */
	struct UK28AnimInstance_GetCustomAnimationTags_Params
	{
	public:
		TArray<class FName>                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK28.K28AnimInstance.GetAnimationMappingIndex
	 */
	struct UK28AnimInstance_GetAnimationMappingIndex_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK28.K28AnimInstance.BP_OnCustomizationAnimationMappingIDChanged
	 */
	struct UK28AnimInstance_BP_OnCustomizationAnimationMappingIDChanged_Params
	{
	public:
		int32_t                                                    animationMappingIndex;                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK28.K28CheatComponent.DBD_K28TriggerNextNightCycle
	 */
	struct UK28CheatComponent_DBD_K28TriggerNextNightCycle_Params
	{	};

	/**
	 * Function TheK28.K28CheatComponent.DBD_K28LockAllLockbars
	 */
	struct UK28CheatComponent_DBD_K28LockAllLockbars_Params
	{	};

	/**
	 * Function TheK28.K28CheatComponent.DBD_K28DisplayLockerClusters
	 */
	struct UK28CheatComponent_DBD_K28DisplayLockerClusters_Params
	{
	public:
		float                                                      secondsToDisplayDebugElements;                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK28.K28CheatComponent.DBD_K28BreakAllLocks
	 */
	struct UK28CheatComponent_DBD_K28BreakAllLocks_Params
	{	};

	/**
	 * Function TheK28.K28DayNightComponent.OnRep_NighttimeNearingActivation
	 */
	struct UK28DayNightComponent_OnRep_NighttimeNearingActivation_Params
	{	};

	/**
	 * Function TheK28.K28DayNightComponent.OnRep_HasReachedNightCycleNearEndThreshold
	 */
	struct UK28DayNightComponent_OnRep_HasReachedNightCycleNearEndThreshold_Params
	{	};

	/**
	 * Function TheK28.K28DayNightComponent.OnRep_CurrentDayNightCycle
	 */
	struct UK28DayNightComponent_OnRep_CurrentDayNightCycle_Params
	{	};

	/**
	 * Function TheK28.K28DayNightComponent.Cosmetic_OnNightCycleChanged
	 */
	struct UK28DayNightComponent_Cosmetic_OnNightCycleChanged_Params
	{
	public:
		class UAkComponent*                                        AkComponent;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EK28NightCycleState                                        newNightCycleState;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK28.K28DayNightComponent.Cosmetic_OnIsInLastTwentySecondsOfNightCycle
	 */
	struct UK28DayNightComponent_Cosmetic_OnIsInLastTwentySecondsOfNightCycle_Params
	{
	public:
		class UAkComponent*                                        AkComponent;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK28.K28DayNightComponent.Authority_OnSurvivorDamageStateChanged
	 */
	struct UK28DayNightComponent_Authority_OnSurvivorDamageStateChanged_Params
	{
	public:
		ECamperDamageState                                         PreviousDamageState;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECamperDamageState                                         newDamageState;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK28.K28DayNightComponent.Authority_OnIntroCompleted
	 */
	struct UK28DayNightComponent_Authority_OnIntroCompleted_Params
	{	};

	/**
	 * Function TheK28.K28FXInterface.Cosmetic_TriggerFadeOut
	 */
	struct UK28FXInterface_Cosmetic_TriggerFadeOut_Params
	{	};

	/**
	 * Function TheK28.K28FXInterface.Cosmetic_TriggerFadeIn
	 */
	struct UK28FXInterface_Cosmetic_TriggerFadeIn_Params
	{	};

	/**
	 * Function TheK28.K28FXInterface.Cosmetic_OnTeleportCooldownEnded
	 */
	struct UK28FXInterface_Cosmetic_OnTeleportCooldownEnded_Params
	{	};

	/**
	 * Function TheK28.K28FXInterface.Cosmetic_OnTeleportationToLockerStart
	 */
	struct UK28FXInterface_Cosmetic_OnTeleportationToLockerStart_Params
	{
	public:
		float                                                      teleportationDuration;                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       isKillerAlreadyHidingInLocker;                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK28.K28FXInterface.Cosmetic_OnShowKiller
	 */
	struct UK28FXInterface_Cosmetic_OnShowKiller_Params
	{
	public:
		bool                                                       isInstantShow;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK28.K28FXInterface.Cosmetic_OnLockerTeleportTargetHighlighted
	 */
	struct UK28FXInterface_Cosmetic_OnLockerTeleportTargetHighlighted_Params
	{	};

	/**
	 * Function TheK28.K28FXInterface.Cosmetic_OnLocallyObservedChanged
	 */
	struct UK28FXInterface_Cosmetic_OnLocallyObservedChanged_Params
	{	};

	/**
	 * Function TheK28.K28FXInterface.Cosmetic_OnKillerEnterLocker
	 */
	struct UK28FXInterface_Cosmetic_OnKillerEnterLocker_Params
	{	};

	/**
	 * Function TheK28.K28FXInterface.Cosmetic_OnIsKillingSurvivorWithMoriStateChanged
	 */
	struct UK28FXInterface_Cosmetic_OnIsKillingSurvivorWithMoriStateChanged_Params
	{
	public:
		bool                                                       isKillingSurvivorWithMori;                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK28.K28FXInterface.Cosmetic_OnHideKiller
	 */
	struct UK28FXInterface_Cosmetic_OnHideKiller_Params
	{	};

	/**
	 * Function TheK28.K28FXInterface.Cosmetic_OnChargeTeleportStart
	 */
	struct UK28FXInterface_Cosmetic_OnChargeTeleportStart_Params
	{	};

	/**
	 * Function TheK28.K28FXInterface.Cosmetic_OnChargeTeleportComplete
	 */
	struct UK28FXInterface_Cosmetic_OnChargeTeleportComplete_Params
	{	};

	/**
	 * Function TheK28.K28FXInterface.Cosmetic_OnChargeTeleportCancelled
	 */
	struct UK28FXInterface_Cosmetic_OnChargeTeleportCancelled_Params
	{	};

	/**
	 * Function TheK28.K28IsNightCycleState.OnLevelReadyToPlay
	 */
	struct UK28IsNightCycleState_OnLevelReadyToPlay_Params
	{	};

	/**
	 * Function TheK28.K28PlayerComponent.OnSurvivorInRangeChanged
	 */
	struct UK28PlayerComponent_OnSurvivorInRangeChanged_Params
	{
	public:
		bool                                                       InRange;                                                 // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ACamperPlayer*                                       Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK28.K28PlayerComponent.OnRep_DayNightComponent
	 */
	struct UK28PlayerComponent_OnRep_DayNightComponent_Params
	{	};

	/**
	 * Function TheK28.K28KillerComponent.Cosmetic_OnNighttimeNearingActivation
	 */
	struct UK28KillerComponent_Cosmetic_OnNighttimeNearingActivation_Params
	{
	public:
		class ASlasherPlayer*                                      killer;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK28.K28KillerComponent.Cosmetic_OnNightCycleStateChanged
	 */
	struct UK28KillerComponent_Cosmetic_OnNightCycleStateChanged_Params
	{
	public:
		class ASlasherPlayer*                                      killer;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EK28NightCycleState                                        dayNightCycleState;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK28.K28KillerEnterLockerInteraction.IsKillerAllowedToEnterLocker
	 */
	struct UK28KillerEnterLockerInteraction_IsKillerAllowedToEnterLocker_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK28.K28KillerInstinctEffect.Authority_OnLevelReadyToPlay
	 */
	struct UK28KillerInstinctEffect_Authority_OnLevelReadyToPlay_Params
	{	};

	/**
	 * Function TheK28.K28KillerInstinctEffect.Authority_OnKillerInstinctApplicableChanged
	 */
	struct UK28KillerInstinctEffect_Authority_OnKillerInstinctApplicableChanged_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK28.K28KillerLockerComponent.OnRep_LockerState_Replicated
	 */
	struct UK28KillerLockerComponent_OnRep_LockerState_Replicated_Params
	{	};

	/**
	 * Function TheK28.K28KillerLockerComponent.OnPlayerInLockerChanged
	 */
	struct UK28KillerLockerComponent_OnPlayerInLockerChanged_Params
	{
	public:
		class ADBDPlayer*                                          previousPlayerInLocker;                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ADBDPlayer*                                          newPlayerInLocker;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK28.K28KillerTeleportationComponent.OnPlayerFinishedEnteringLocker
	 */
	struct UK28KillerTeleportationComponent_OnPlayerFinishedEnteringLocker_Params
	{
	public:
		class ADBDPlayer*                                          playerThatWasInLocker;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ADBDPlayer*                                          playerNowInLocker;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK28.K28KillerTeleportationComponent.OnLevelReadyToPlay
	 */
	struct UK28KillerTeleportationComponent_OnLevelReadyToPlay_Params
	{	};

	/**
	 * Function TheK28.K28KillerTeleportationComponent.Multicast_TeleportToLockerStart
	 */
	struct UK28KillerTeleportationComponent_Multicast_TeleportToLockerStart_Params
	{
	public:
		struct FK28SecondaryCameraMovementData                     cameraMovementData;                                      // 0x0000(0x0050)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class UK28LockerComponent*                                 lockerBeingTeleportedTo;                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ACamperPlayer*                                       survivorToGrab;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK28.K28KillerTeleportationComponent.Multicast_TeleportToLockerEnd
	 */
	struct UK28KillerTeleportationComponent_Multicast_TeleportToLockerEnd_Params
	{
	public:
		class UK28LockerComponent*                                 lockerTeleportedTo;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ACamperPlayer*                                       survivorInLocker;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK28.K28Lockbar.OnRep_State
	 */
	struct AK28Lockbar_OnRep_State_Params
	{	};

	/**
	 * Function TheK28.K28Lockbar.OnPlayerInLockerChanged
	 */
	struct AK28Lockbar_OnPlayerInLockerChanged_Params
	{
	public:
		class ADBDPlayer*                                          previousPlayerInLocker;                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ADBDPlayer*                                          newPlayerInLocker;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK28.K28Lockbar.OnLocallyObservedChanged
	 */
	struct AK28Lockbar_OnLocallyObservedChanged_Params
	{	};

	/**
	 * Function TheK28.K28Lockbar.IsLocallyObservingSurvivor
	 */
	struct AK28Lockbar_IsLocallyObservingSurvivor_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK28.K28Lockbar.GetMontagePlayer
	 */
	struct AK28Lockbar_GetMontagePlayer_Params
	{
	public:
		class UMontagePlayer*                                      ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK28.K28Lockbar.Cosmetic_TriggerLockbarBreak
	 */
	struct AK28Lockbar_Cosmetic_TriggerLockbarBreak_Params
	{	};

	/**
	 * Function TheK28.K28Lockbar.Cosmetic_SetLockbarHighlightActivationState
	 */
	struct AK28Lockbar_Cosmetic_SetLockbarHighlightActivationState_Params
	{
	public:
		bool                                                       isHightlightActive;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK28.K28Lockbar.Cosmetic_OnStateChanged
	 */
	struct AK28Lockbar_Cosmetic_OnStateChanged_Params
	{
	public:
		EK28LockbarState                                           NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK28.K28LockerCosmeticHelperActor.OnAssociatedLockerActorSet
	 */
	struct AK28LockerCosmeticHelperActor_OnAssociatedLockerActorSet_Params
	{	};

	/**
	 * Function TheK28.K28LockerCosmeticHelperActor.GetSkeletalMesh
	 */
	struct AK28LockerCosmeticHelperActor_GetSkeletalMesh_Params
	{
	public:
		class USkeletalMeshComponent*                              ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK28.K28LockerCosmeticHelperActor.GetMaterialHelper
	 */
	struct AK28LockerCosmeticHelperActor_GetMaterialHelper_Params
	{
	public:
		class UMaterialHelper*                                     ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK28.K28LockerCosmeticHelperActor.GetLocker
	 */
	struct AK28LockerCosmeticHelperActor_GetLocker_Params
	{
	public:
		class ALocker*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK28.K28LockerCosmeticHelperActor.Cosmetic_OnLockerGrabStateChanged
	 */
	struct AK28LockerCosmeticHelperActor_Cosmetic_OnLockerGrabStateChanged_Params
	{
	public:
		bool                                                       isLockerGrabOngoing;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK28.K28LockerCosmeticHelperActor.Cosmetic_OnLockedStateChanged
	 */
	struct AK28LockerCosmeticHelperActor_Cosmetic_OnLockedStateChanged_Params
	{
	public:
		bool                                                       isLockerLocked;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK28.K28LockerCosmeticHelperActor.Cosmetic_OnKillerTeleportationToLockerStart
	 */
	struct AK28LockerCosmeticHelperActor_Cosmetic_OnKillerTeleportationToLockerStart_Params
	{	};

	/**
	 * Function TheK28.K28LockerCosmeticHelperActor.Cosmetic_OnKillerTeleportationToLockerEnd
	 */
	struct AK28LockerCosmeticHelperActor_Cosmetic_OnKillerTeleportationToLockerEnd_Params
	{	};

	/**
	 * Function TheK28.K28LockerCosmeticHelperActor.Cosmetic_OnKillerInsideLockerRevealed
	 */
	struct AK28LockerCosmeticHelperActor_Cosmetic_OnKillerInsideLockerRevealed_Params
	{	};

	/**
	 * Function TheK28.K28LockerCosmeticHelperActor.Cosmetic_OnKillerExitLocker
	 */
	struct AK28LockerCosmeticHelperActor_Cosmetic_OnKillerExitLocker_Params
	{	};

	/**
	 * Function TheK28.K28LockerCosmeticHelperActor.Cosmetic_OnKillerEnteredLocker
	 */
	struct AK28LockerCosmeticHelperActor_Cosmetic_OnKillerEnteredLocker_Params
	{	};

	/**
	 * Function TheK28.K28LockerTeleportSwapInteraction.Server_RequestTeleportToTarget
	 */
	struct UK28LockerTeleportSwapInteraction_Server_RequestTeleportToTarget_Params
	{
	public:
		class ASlasherPlayer*                                      killer;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UActorComponent*                                     teleportTarget;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK28.K28LockerTeleportSwapInteraction.Multicast_RefuseTeleportationRequest
	 */
	struct UK28LockerTeleportSwapInteraction_Multicast_RefuseTeleportationRequest_Params
	{	};

	/**
	 * Function TheK28.K28LockerTeleportSwapInteraction.Multicast_ConfirmTeleportationRequest
	 */
	struct UK28LockerTeleportSwapInteraction_Multicast_ConfirmTeleportationRequest_Params
	{
	public:
		class ASlasherPlayer*                                      killer;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UActorComponent*                                     teleportTarget;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK28.K28LockerTeleportSwapInteraction.Multicast_CompleteTeleportation
	 */
	struct UK28LockerTeleportSwapInteraction_Multicast_CompleteTeleportation_Params
	{	};

	/**
	 * Function TheK28.K28MenuAnimInstance.GetAnimationMappingIndex
	 */
	struct UK28MenuAnimInstance_GetAnimationMappingIndex_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK28.K28MenuAnimInstance.BP_OnCustomizationAnimationMappingIDChanged
	 */
	struct UK28MenuAnimInstance_BP_OnCustomizationAnimationMappingIDChanged_Params
	{
	public:
		int32_t                                                    animationMappingIndex;                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK28.K28Power.OnRep_TeleportTokens
	 */
	struct AK28Power_OnRep_TeleportTokens_Params
	{	};

	/**
	 * Function TheK28.K28Power.OnIntroCompleted
	 */
	struct AK28Power_OnIntroCompleted_Params
	{	};

	/**
	 * Function TheK28.K28Remnant.OnRep_RemnantState
	 */
	struct AK28Remnant_OnRep_RemnantState_Params
	{	};

	/**
	 * Function TheK28.K28Remnant.Multicast_TriggerTeleportStartVFX
	 */
	struct AK28Remnant_Multicast_TriggerTeleportStartVFX_Params
	{
	public:
		class ASlasherPlayer*                                      killer;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK28.K28Remnant.Multicast_TeleportToRemnant
	 */
	struct AK28Remnant_Multicast_TeleportToRemnant_Params
	{
	public:
		class ASlasherPlayer*                                      killer;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            teleportRotation;                                        // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       isAnimationSlowed;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK28.K28Remnant.Multicast_SurvivorDestroyedRemnant
	 */
	struct AK28Remnant_Multicast_SurvivorDestroyedRemnant_Params
	{
	public:
		class ACamperPlayer*                                       survivor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK28.K28Remnant.Multicast_DeactivateRemnant
	 */
	struct AK28Remnant_Multicast_DeactivateRemnant_Params
	{	};

	/**
	 * Function TheK28.K28Remnant.Multicast_ActivateRemnant
	 */
	struct AK28Remnant_Multicast_ActivateRemnant_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            Rotation;                                                // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK28.K28Remnant.Cosmetic_SurvivorDestroyedRemnant
	 */
	struct AK28Remnant_Cosmetic_SurvivorDestroyedRemnant_Params
	{
	public:
		class ACamperPlayer*                                       survivor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK28.K28Remnant.Cosmetic_OnTeleportationStartVFX
	 */
	struct AK28Remnant_Cosmetic_OnTeleportationStartVFX_Params
	{
	public:
		class ASlasherPlayer*                                      killer;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK28.K28Remnant.Cosmetic_OnTeleportationPerformedVFX
	 */
	struct AK28Remnant_Cosmetic_OnTeleportationPerformedVFX_Params
	{
	public:
		class ASlasherPlayer*                                      killer;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       isSlowTeleportation;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK28.K28Remnant.Cosmetic_OnRemnantStateChanged
	 */
	struct AK28Remnant_Cosmetic_OnRemnantStateChanged_Params
	{
	public:
		EK28RemnantState                                           remnantState;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK28.K28Remnant.Cosmetic_OnRemnantDeactivated
	 */
	struct AK28Remnant_Cosmetic_OnRemnantDeactivated_Params
	{	};

	/**
	 * Function TheK28.K28Remnant.Cosmetic_OnRemnantActivated
	 */
	struct AK28Remnant_Cosmetic_OnRemnantActivated_Params
	{	};

	/**
	 * Function TheK28.K28Remnant.Authority_OnCollisionDetected
	 */
	struct AK28Remnant_Authority_OnCollisionDetected_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromSweep;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FHitResult                                          SweepResult;                                             // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK28.K28RemnantAnimInstance.ConsumeSurvivorWhoDestroyedRemnant
	 */
	struct UK28RemnantAnimInstance_ConsumeSurvivorWhoDestroyedRemnant_Params
	{
	public:
		class ACamperPlayer*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK28.K28SecondaryCamera.Server_SetIsKillerPlayerViewTarget
	 */
	struct AK28SecondaryCamera_Server_SetIsKillerPlayerViewTarget_Params
	{
	public:
		bool                                                       isKillerPlayerViewTarget;                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK28.K28SecondaryCamera.Server_SetCameraOrientation
	 */
	struct AK28SecondaryCamera_Server_SetCameraOrientation_Params
	{
	public:
		struct FRotator                                            NewOrientation;                                          // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK28.K28SecondaryCamera.OnRep_IsKillerPlayerViewTarget
	 */
	struct AK28SecondaryCamera_OnRep_IsKillerPlayerViewTarget_Params
	{	};

	/**
	 * Function TheK28.K28SecondaryCamera.OnLevelReadyToPlay
	 */
	struct AK28SecondaryCamera_OnLevelReadyToPlay_Params
	{	};

	/**
	 * Function TheK28.K28SecondaryCamera.Multicast_SetCameraOrientation
	 */
	struct AK28SecondaryCamera_Multicast_SetCameraOrientation_Params
	{
	public:
		struct FRotator                                            NewOrientation;                                          // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       isRelativeRotation;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK28.K28SecondaryCamera.GetIsKillerPlayerViewTarget
	 */
	struct AK28SecondaryCamera_GetIsKillerPlayerViewTarget_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK28.K28SecondaryCamera.GetCameraWorldRotation
	 */
	struct AK28SecondaryCamera_GetCameraWorldRotation_Params
	{
	public:
		struct FRotator                                            ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK28.K28SecondaryCamera.Cosmetic_UpdateDarknessPlaneVisibility
	 */
	struct AK28SecondaryCamera_Cosmetic_UpdateDarknessPlaneVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK28.K28SecondaryCamera.Cosmetic_TriggerTeleportStartVisuals
	 */
	struct AK28SecondaryCamera_Cosmetic_TriggerTeleportStartVisuals_Params
	{	};

	/**
	 * Function TheK28.K28SecondaryCamera.Cosmetic_TriggerTeleportEndVisuals
	 */
	struct AK28SecondaryCamera_Cosmetic_TriggerTeleportEndVisuals_Params
	{	};

	/**
	 * Function TheK28.K28SecondaryCamera.Cosmetic_TriggerFadeOut
	 */
	struct AK28SecondaryCamera_Cosmetic_TriggerFadeOut_Params
	{	};

	/**
	 * Function TheK28.K28SecondaryCamera.Cosmetic_TriggerFadeIn
	 */
	struct AK28SecondaryCamera_Cosmetic_TriggerFadeIn_Params
	{	};

	/**
	 * Function TheK28.K28SecondaryCamera.Cosmetic_OnNightCycleChanged
	 */
	struct AK28SecondaryCamera_Cosmetic_OnNightCycleChanged_Params
	{
	public:
		EK28NightCycleState                                        newNightCycleState;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK28.K28SecondaryCamera.Cosmetic_OnKillerExitLocker
	 */
	struct AK28SecondaryCamera_Cosmetic_OnKillerExitLocker_Params
	{	};

	/**
	 * Function TheK28.K28SecondaryCamera.Cosmetic_OnKillerEnterLocker
	 */
	struct AK28SecondaryCamera_Cosmetic_OnKillerEnterLocker_Params
	{	};

	/**
	 * Function TheK28.K28SecondaryCamera.Cosmetic_OnIsLocallyObservingKillerChanged
	 */
	struct AK28SecondaryCamera_Cosmetic_OnIsLocallyObservingKillerChanged_Params
	{
	public:
		bool                                                       isLocallyObservingKiller;                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK28.K28SecondaryCamera.Cosmetic_DisableAllEffects
	 */
	struct AK28SecondaryCamera_Cosmetic_DisableAllEffects_Params
	{	};

	/**
	 * Function TheK28.K28SurvivorCosmeticHelperActor.OnLevelReadyToPlay
	 */
	struct AK28SurvivorCosmeticHelperActor_OnLevelReadyToPlay_Params
	{	};

	/**
	 * Function TheK28.K28SurvivorCosmeticHelperActor.GetDarknessPlaneMesh
	 */
	struct AK28SurvivorCosmeticHelperActor_GetDarknessPlaneMesh_Params
	{
	public:
		class UStaticMeshComponent*                                ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK28.K28SurvivorCosmeticHelperActor.Cosmetic_OnNighttimeNearingActivation
	 */
	struct AK28SurvivorCosmeticHelperActor_Cosmetic_OnNighttimeNearingActivation_Params
	{	};

	/**
	 * Function TheK28.K28SurvivorCosmeticHelperActor.Cosmetic_OnNightCycleChanged
	 */
	struct AK28SurvivorCosmeticHelperActor_Cosmetic_OnNightCycleChanged_Params
	{
	public:
		EK28NightCycleState                                        nightCycleState;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK28.K28SurvivorCosmeticHelperActor.Cosmetic_OnLocallyObservedChanged
	 */
	struct AK28SurvivorCosmeticHelperActor_Cosmetic_OnLocallyObservedChanged_Params
	{	};

	/**
	 * Function TheK28.K28SurvivorCosmeticHelperActor.Cosmetic_DeactivateNightGlowVFX
	 */
	struct AK28SurvivorCosmeticHelperActor_Cosmetic_DeactivateNightGlowVFX_Params
	{	};

	/**
	 * Function TheK28.K28SurvivorCosmeticHelperActor.Cosmetic_ActivateNightGlowVFX
	 */
	struct AK28SurvivorCosmeticHelperActor_Cosmetic_ActivateNightGlowVFX_Params
	{	};

	/**
	 * Function TheK28.K28SurvivorLockerAbductionInteraction.OnRep_OverriddenInteractionInstance
	 */
	struct UK28SurvivorLockerAbductionInteraction_OnRep_OverriddenInteractionInstance_Params
	{	};

	/**
	 * Function TheK28.K28TeleportationIndicator.Cosmetic_UpdateIndicatorActivationStatus
	 */
	struct AK28TeleportationIndicator_Cosmetic_UpdateIndicatorActivationStatus_Params
	{
	public:
		bool                                                       IsActivated;                                             // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK28.K28TeleportationStrategyComponent.Server_UpdateBestTeleportTarget
	 */
	struct UK28TeleportationStrategyComponent_Server_UpdateBestTeleportTarget_Params
	{
	public:
		int32_t                                                    bestTeleportTargetID;                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK28.K28TeleportationStrategyComponent.Multicast_UpdateBestTeleportTarget
	 */
	struct UK28TeleportationStrategyComponent_Multicast_UpdateBestTeleportTarget_Params
	{
	public:
		int32_t                                                    bestTeleportTargetID;                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK28.K28TeleportationStrategyComponent.Authority_OnLevelReadyToPlay
	 */
	struct UK28TeleportationStrategyComponent_Authority_OnLevelReadyToPlay_Params
	{	};

	/**
	 * Function TheK28.K28TeleportInteraction.Server_RequestTeleportToTarget
	 */
	struct UK28TeleportInteraction_Server_RequestTeleportToTarget_Params
	{
	public:
		class ASlasherPlayer*                                      killer;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             teleportTarget;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK28.K28TeleportInteraction.Multicast_RefuseTeleportationRequest
	 */
	struct UK28TeleportInteraction_Multicast_RefuseTeleportationRequest_Params
	{	};

	/**
	 * Function TheK28.K28TeleportInteraction.Multicast_ConfirmTeleportationRequest
	 */
	struct UK28TeleportInteraction_Multicast_ConfirmTeleportationRequest_Params
	{
	public:
		class ASlasherPlayer*                                      killer;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             teleportTarget;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK28.K28TeleportInteraction.Multicast_CompleteTeleportation
	 */
	struct UK28TeleportInteraction_Multicast_CompleteTeleportation_Params
	{	};

	/**
	 * Function TheK28.K28Utilities.IsLockerUsedByKillerLocked
	 */
	struct UK28Utilities_IsLockerUsedByKillerLocked_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK28.K28Utilities.GetTeleportationStrategyComponent
	 */
	struct UK28Utilities_GetTeleportationStrategyComponent_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UK28TeleportationStrategyComponent*                  ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK28.K28Utilities.GetSecondaryCamera
	 */
	struct UK28Utilities_GetSecondaryCamera_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AK28SecondaryCamera*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK28.K28Utilities.GetRemnant
	 */
	struct UK28Utilities_GetRemnant_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AK28Remnant*                                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK28.K28Utilities.GetK28Power
	 */
	struct UK28Utilities_GetK28Power_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AK28Power*                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK28.K28Utilities.GetDayNightComponent
	 */
	struct UK28Utilities_GetDayNightComponent_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UK28DayNightComponent*                               ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
