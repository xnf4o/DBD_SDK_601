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
	 * Function TheTwins.Addon_K22Power_18.Authority_OnTwinSet
	 */
	struct UAddon_K22Power_18_Authority_OnTwinSet_Params
	{
	public:
		class AConjoinedTwin*                                      twin;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTwins.PossessPlayer.Cosmetic_OnPossessStart
	 */
	struct UPossessPlayer_Cosmetic_OnPossessStart_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTwins.PossessPlayer.Cosmetic_OnPossessCancelled
	 */
	struct UPossessPlayer_Cosmetic_OnPossessCancelled_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTwins.PossessTheConjoinedTwin.OnTwinSet
	 */
	struct UPossessTheConjoinedTwin_OnTwinSet_Params
	{
	public:
		class AConjoinedTwin*                                      twin;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTwins.PossessTheConjoinedTwin.OnPowerCollected
	 */
	struct UPossessTheConjoinedTwin_OnPowerCollected_Params
	{
	public:
		class ADBDPlayer*                                          collector;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTwins.BeingPossessedInteraction.OnLevelReadyToPlay
	 */
	struct UBeingPossessedInteraction_OnLevelReadyToPlay_Params
	{	};

	/**
	 * Function TheTwins.ChargeTwinJumpInteraction.Cosmetic_OnJumpReadyChanged
	 */
	struct UChargeTwinJumpInteraction_Cosmetic_OnJumpReadyChanged_Params
	{
	public:
		class ADBDPlayer*                                          twin;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Ready;                                                   // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTwins.ConjoinedTwin.Server_SendAttackInput
	 */
	struct AConjoinedTwin_Server_SendAttackInput_Params
	{
	public:
		bool                                                       Pressed;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTwins.ConjoinedTwin.OnFinishedPlayingEvent
	 */
	struct AConjoinedTwin_OnFinishedPlayingEvent_Params
	{
	public:
		struct FGameplayTag                                        gameEventType;                                           // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameEventData                                      GameEventData;                                           // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTwins.ConjoinedTwin.Cosmetic_OnOnGroundUncontrolledChanged
	 */
	struct AConjoinedTwin_Cosmetic_OnOnGroundUncontrolledChanged_Params
	{
	public:
		bool                                                       onGroundAndUncontrolled;                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTwins.ConjoinedTwin.Authority_OnFirecrackerInRangeBegin
	 */
	struct AConjoinedTwin_Authority_OnFirecrackerInRangeBegin_Params
	{
	public:
		struct FFirecrackerEffectData                              effectData;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTwins.ConjoinedTwinAnimInstance.GetOwningConjoinedTwin
	 */
	struct UConjoinedTwinAnimInstance_GetOwningConjoinedTwin_Params
	{
	public:
		class AConjoinedTwin*                                      ReturnValue;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTwins.Deception.OnOwningPlayerFakedEnteringLockerCosmetic
	 */
	struct UDeception_OnOwningPlayerFakedEnteringLockerCosmetic_Params
	{	};

	/**
	 * Function TheTwins.Hoarder.Local_ThrowBubbleIndicator
	 */
	struct UHoarder_Local_ThrowBubbleIndicator_Params
	{
	public:
		EPerkInteractionObjectType                                 camperInteractionType;                                   // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              objectActor;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ACamperPlayer*                                       interactingCamperPlayer;                                 // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTwins.Hoarder.GetBubbleIndicatorLifetime
	 */
	struct UHoarder_GetBubbleIndicatorLifetime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTwins.IsTwinRecallReady.OnLevelReadyToPlay
	 */
	struct UIsTwinRecallReady_OnLevelReadyToPlay_Params
	{	};

	/**
	 * Function TheTwins.K22Power.OnRep_ConjoinedTwin
	 */
	struct AK22Power_OnRep_ConjoinedTwin_Params
	{	};

	/**
	 * Function TheTwins.K22Power.OnPowerChargeEmpty
	 */
	struct AK22Power_OnPowerChargeEmpty_Params
	{	};

	/**
	 * Function TheTwins.K22Power.OnFirstAttachmentToSister
	 */
	struct AK22Power_OnFirstAttachmentToSister_Params
	{	};

	/**
	 * Function TheTwins.K22Power.GetConjoinedTwin
	 */
	struct AK22Power_GetConjoinedTwin_Params
	{
	public:
		class AConjoinedTwin*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTwins.K22Power.Authority_OnPossessTwinChargePercentChanged
	 */
	struct AK22Power_Authority_OnPossessTwinChargePercentChanged_Params
	{
	public:
		class UChargeableComponent*                                ChargeableComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      PercentCompletionChange;                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      TotalPercentComplete;                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTwins.K22Power.Authority_OnDestroyTwinChargePercentChanged
	 */
	struct AK22Power_Authority_OnDestroyTwinChargePercentChanged_Params
	{
	public:
		class UChargeableComponent*                                ChargeableComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      PercentCompletionChange;                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      TotalPercentComplete;                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTwins.K22PowerChargePresentationItemProgressComponent.OnTwinSet
	 */
	struct UK22PowerChargePresentationItemProgressComponent_OnTwinSet_Params
	{
	public:
		class AConjoinedTwin*                                      twin;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTwins.PossessionComponent.Server_StartPossessionOf
	 */
	struct UPossessionComponent_Server_StartPossessionOf_Params
	{
	public:
		class ADBDPlayer*                                          playerToPossess;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       shouldStartBeingPossessedInteraction;                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTwins.PossessionComponent.Server_NotifyPossessionDone
	 */
	struct UPossessionComponent_Server_NotifyPossessionDone_Params
	{	};

	/**
	 * Function TheTwins.PossessionComponent.OnLevelReadyToPlay
	 */
	struct UPossessionComponent_OnLevelReadyToPlay_Params
	{	};

	/**
	 * Function TheTwins.PossessionComponent.Multicast_StartPossessionOf
	 */
	struct UPossessionComponent_Multicast_StartPossessionOf_Params
	{
	public:
		class ADBDPlayer*                                          playerToPossess;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTwins.PossessionComponent.Multicast_NotifyPossessionDone
	 */
	struct UPossessionComponent_Multicast_NotifyPossessionDone_Params
	{	};

	/**
	 * Function TheTwins.PossessionComponent.IsPossessed
	 */
	struct UPossessionComponent_IsPossessed_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTwins.PossessionComponent.IsDormant
	 */
	struct UPossessionComponent_IsDormant_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTwins.PossessionComponent.CosmeticLocal_OnUncontrolled
	 */
	struct UPossessionComponent_CosmeticLocal_OnUncontrolled_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTwins.PossessionComponent.CosmeticLocal_OnControlled
	 */
	struct UPossessionComponent_CosmeticLocal_OnControlled_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTwins.PossessionComponent.Cosmetic_OnControlledChanged
	 */
	struct UPossessionComponent_Cosmetic_OnControlledChanged_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsControlled;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTwins.PossessionComponent.Client_StartStateMachineDriverChangeProcess
	 */
	struct UPossessionComponent_Client_StartStateMachineDriverChangeProcess_Params
	{	};

	/**
	 * Function TheTwins.KillerPossessionComponent.OnRep_ShouldDeactivateCollisionsWithSurvivors
	 */
	struct UKillerPossessionComponent_OnRep_ShouldDeactivateCollisionsWithSurvivors_Params
	{	};

	/**
	 * DelegateFunction TheTwins.PossessNegationEffectComponent.PlayCantPossessSound__DelegateSignature
	 */
	struct UPossessNegationEffectComponent_PlayCantPossessSound__DelegateSignature_Params
	{	};

	/**
	 * Function TheTwins.PossessNegationEffectComponent.OnLevelReadyToPlay
	 */
	struct UPossessNegationEffectComponent_OnLevelReadyToPlay_Params
	{	};

	/**
	 * Function TheTwins.KillerPossessNegationEffectComponent.OnTwinSet
	 */
	struct UKillerPossessNegationEffectComponent_OnTwinSet_Params
	{
	public:
		class AConjoinedTwin*                                      twin;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTwins.PushTwinOnLockerInteraction.OnTwinSet
	 */
	struct UPushTwinOnLockerInteraction_OnTwinSet_Params
	{
	public:
		class AConjoinedTwin*                                      twin;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTwins.PushTwinOnLockerInteraction.OnRep_PushTwinOnLockerChargeable
	 */
	struct UPushTwinOnLockerInteraction_OnRep_PushTwinOnLockerChargeable_Params
	{	};

	/**
	 * Function TheTwins.PushTwinOnLockerInteraction.Authority_OnPlayerInLockerChanged
	 */
	struct UPushTwinOnLockerInteraction_Authority_OnPlayerInLockerChanged_Params
	{
	public:
		class ADBDPlayer*                                          previousPlayerInLocker;                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ADBDPlayer*                                          newPlayerInLocker;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTwins.RecallTwin.OnTwinSet
	 */
	struct URecallTwin_OnTwinSet_Params
	{
	public:
		class AConjoinedTwin*                                      twin;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTwins.ReleaseConjoinedTwin.OnTwinSet
	 */
	struct UReleaseConjoinedTwin_OnTwinSet_Params
	{
	public:
		class AConjoinedTwin*                                      twin;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTwins.ReleaseConjoinedTwin.OnRep_ReleaseAnimationWentToTheEnd
	 */
	struct UReleaseConjoinedTwin_OnRep_ReleaseAnimationWentToTheEnd_Params
	{	};

	/**
	 * Function TheTwins.ReleaseConjoinedTwin.OnPowerCollected
	 */
	struct UReleaseConjoinedTwin_OnPowerCollected_Params
	{
	public:
		class ADBDPlayer*                                          collector;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTwins.ReleaseConjoinedTwin.OnKillerStunned
	 */
	struct UReleaseConjoinedTwin_OnKillerStunned_Params
	{
	public:
		struct FGameplayTag                                        gameEventType;                                           // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameEventData                                      GameEventData;                                           // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTwins.ReleaseConjoinedTwin.Cosmetic_OnReleaseTwinInteractionUpdateStart
	 */
	struct UReleaseConjoinedTwin_Cosmetic_OnReleaseTwinInteractionUpdateStart_Params
	{
	public:
		class ADBDPlayer*                                          sister;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AConjoinedTwin*                                      brother;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTwins.ReleaseConjoinedTwin.Cosmetic_OnReleaseTwinInteractionUpdate
	 */
	struct UReleaseConjoinedTwin_Cosmetic_OnReleaseTwinInteractionUpdate_Params
	{
	public:
		class ADBDPlayer*                                          sister;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AConjoinedTwin*                                      brother;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTwins.ReleaseConjoinedTwin.Cosmetic_OnReleaseChargeComplete
	 */
	struct UReleaseConjoinedTwin_Cosmetic_OnReleaseChargeComplete_Params
	{
	public:
		class ADBDPlayer*                                          sister;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AConjoinedTwin*                                      brother;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTwins.ReleaseConjoinedTwin.Cosmetic_OnReleaseCancelled
	 */
	struct UReleaseConjoinedTwin_Cosmetic_OnReleaseCancelled_Params
	{
	public:
		class ADBDPlayer*                                          sister;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AConjoinedTwin*                                      brother;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTwins.RemoveTwin.OnRemoveMontageEnd
	 */
	struct URemoveTwin_OnRemoveMontageEnd_Params
	{
	public:
		struct FAnimationMontageDescriptor                         Montage;                                                 // 0x0000(0x0020)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		bool                                                       interrupted;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ADBDPlayer*                                          destroyingPlayer;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTwins.SisterBlindFlashlightableLightingStrategy.OnTwinSet
	 */
	struct USisterBlindFlashlightableLightingStrategy_OnTwinSet_Params
	{
	public:
		class AConjoinedTwin*                                      twin;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTwins.TheTwinsCheatComponent.Multicast_TrySendThePlayerBackInKiller
	 */
	struct UTheTwinsCheatComponent_Multicast_TrySendThePlayerBackInKiller_Params
	{
	public:
		class UTwinPossessionComponent*                            TwinPossessionComponent;                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTwins.TheTwinsCheatComponent.DBD_TwinDestroyTheTwin
	 */
	struct UTheTwinsCheatComponent_DBD_TwinDestroyTheTwin_Params
	{	};

	/**
	 * Function TheTwins.TwinAOELingeringStatusEffect.Authority_OnInRangeChanged
	 */
	struct UTwinAOELingeringStatusEffect_Authority_OnInRangeChanged_Params
	{
	public:
		bool                                                       InRange;                                                 // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTwins.TwinAttachmentComponent.OnRep_AttachedPlayer
	 */
	struct UTwinAttachmentComponent_OnRep_AttachedPlayer_Params
	{
	public:
		class ADBDPlayer*                                          oldAttachedPlayer;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTwins.TwinAttachmentComponent.OnMoriMontageEnd
	 */
	struct UTwinAttachmentComponent_OnMoriMontageEnd_Params
	{
	public:
		struct FAnimationMontageDescriptor                         Montage;                                                 // 0x0000(0x0020)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		bool                                                       interrupted;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTwins.TwinAttachmentComponent.OnLevelReadyToPlay
	 */
	struct UTwinAttachmentComponent_OnLevelReadyToPlay_Params
	{	};

	/**
	 * Function TheTwins.TwinAttachmentComponent.OnImmobilizedStateChanged
	 */
	struct UTwinAttachmentComponent_OnImmobilizedStateChanged_Params
	{
	public:
		ECamperImmobilizeState                                     oldImmobilizeState;                                      // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECamperImmobilizeState                                     newImmobilizeState;                                      // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTwins.TwinAttachmentComponent.OnAttachedSurvivorDamageStateChanged
	 */
	struct UTwinAttachmentComponent_OnAttachedSurvivorDamageStateChanged_Params
	{
	public:
		ECamperDamageState                                         oldState;                                                // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECamperDamageState                                         NewState;                                                // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTwins.TwinAttachmentComponent.Multicast_QuickDestroyTwin
	 */
	struct UTwinAttachmentComponent_Multicast_QuickDestroyTwin_Params
	{	};

	/**
	 * Function TheTwins.TwinAttachmentComponent.IsAttachedToSurvivor
	 */
	struct UTwinAttachmentComponent_IsAttachedToSurvivor_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTwins.TwinAttachmentComponent.IsAttachedToSister
	 */
	struct UTwinAttachmentComponent_IsAttachedToSister_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTwins.TwinAttachmentComponent.Cosmetic_OnTwinDetachedFromSurvivor
	 */
	struct UTwinAttachmentComponent_Cosmetic_OnTwinDetachedFromSurvivor_Params
	{
	public:
		class ADBDPlayer*                                          survivor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ADBDPlayer*                                          brother;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTwins.TwinAttachmentComponent.Cosmetic_OnTwinDetachedFromSister
	 */
	struct UTwinAttachmentComponent_Cosmetic_OnTwinDetachedFromSister_Params
	{
	public:
		class ADBDPlayer*                                          sister;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ADBDPlayer*                                          brother;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTwins.TwinAttachmentComponent.Cosmetic_OnTwinAttachedToSurvivor
	 */
	struct UTwinAttachmentComponent_Cosmetic_OnTwinAttachedToSurvivor_Params
	{
	public:
		class ADBDPlayer*                                          survivor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ADBDPlayer*                                          brother;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTwins.TwinAttachmentComponent.Cosmetic_OnTwinAttachedToSister
	 */
	struct UTwinAttachmentComponent_Cosmetic_OnTwinAttachedToSister_Params
	{
	public:
		class ADBDPlayer*                                          sister;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ADBDPlayer*                                          brother;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       isFirstAttachment;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTwins.TwinAttachmentComponent.Authority_OnRemoveTwinChargePercentChanged
	 */
	struct UTwinAttachmentComponent_Authority_OnRemoveTwinChargePercentChanged_Params
	{
	public:
		class UChargeableComponent*                                ChargeableComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      PercentCompletionChange;                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      TotalPercentComplete;                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTwins.TwinBaseAddon.Authority_OnTwinSet
	 */
	struct UTwinBaseAddon_Authority_OnTwinSet_Params
	{
	public:
		class AConjoinedTwin*                                      twin;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTwins.TwinBaseKillerInstinctEffect.Authority_OnInRangeChanged
	 */
	struct UTwinBaseKillerInstinctEffect_Authority_OnInRangeChanged_Params
	{
	public:
		bool                                                       InRange;                                                 // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTwins.TwinDestructionComponent.OnTwinQuickDestroy
	 */
	struct UTwinDestructionComponent_OnTwinQuickDestroy_Params
	{
	public:
		class AConjoinedTwin*                                      owningTwin;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTwins.TwinDestructionComponent.OnDyingMontageEnd
	 */
	struct UTwinDestructionComponent_OnDyingMontageEnd_Params
	{
	public:
		struct FAnimationMontageDescriptor                         Montage;                                                 // 0x0000(0x0020)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		bool                                                       interrupted;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTwins.TwinDestructionComponent.Cosmetic_OnTwinDestroyedFromSurvivorRemove
	 */
	struct UTwinDestructionComponent_Cosmetic_OnTwinDestroyedFromSurvivorRemove_Params
	{
	public:
		class AConjoinedTwin*                                      owningTwin;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTwins.TwinDestructionComponent.Cosmetic_OnTwinDestroyedFromKick
	 */
	struct UTwinDestructionComponent_Cosmetic_OnTwinDestroyedFromKick_Params
	{
	public:
		class AConjoinedTwin*                                      owningTwin;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTwins.TwinDestructionComponent.Authority_OnTwinQuickDestroyOver
	 */
	struct UTwinDestructionComponent_Authority_OnTwinQuickDestroyOver_Params
	{	};

	/**
	 * Function TheTwins.TwinHuskStateComponent.IsDeadFromSurvivorBack
	 */
	struct UTwinHuskStateComponent_IsDeadFromSurvivorBack_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTwins.TwinJumpAttack.Server_StopJump
	 */
	struct UTwinJumpAttack_Server_StopJump_Params
	{	};

	/**
	 * Function TheTwins.TwinJumpAttack.Server_OnJumpStartTwin
	 */
	struct UTwinJumpAttack_Server_OnJumpStartTwin_Params
	{	};

	/**
	 * Function TheTwins.TwinJumpAttack.OnRep_ShouldTwinHaveJumpObjectType
	 */
	struct UTwinJumpAttack_OnRep_ShouldTwinHaveJumpObjectType_Params
	{	};

	/**
	 * Function TheTwins.TwinJumpAttack.Multicast_SetIsForbiddenLandingLocation
	 */
	struct UTwinJumpAttack_Multicast_SetIsForbiddenLandingLocation_Params
	{
	public:
		bool                                                       isForbiddenLocation;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTwins.TwinJumpAttack.Multicast_DestroyTwinOnWrongLanding
	 */
	struct UTwinJumpAttack_Multicast_DestroyTwinOnWrongLanding_Params
	{	};

	/**
	 * Function TheTwins.TwinJumpAttack.Multicast_AttachToSurvivor
	 */
	struct UTwinJumpAttack_Multicast_AttachToSurvivor_Params
	{
	public:
		class ADBDPlayer*                                          survivorToAttachTo;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTwins.TwinJumpAttack.Cosmetic_OnJumpStarted
	 */
	struct UTwinJumpAttack_Cosmetic_OnJumpStarted_Params
	{
	public:
		class AConjoinedTwin*                                      owningTwin;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTwins.TwinJumpAttack.Cosmetic_OnJumpObstructed
	 */
	struct UTwinJumpAttack_Cosmetic_OnJumpObstructed_Params
	{
	public:
		class AConjoinedTwin*                                      owningTwin;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPhysicalMaterial*                                   PhysicalMaterial;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             position;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Normal;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTwins.TwinJumpAttack.Cosmetic_OnJumpLanded
	 */
	struct UTwinJumpAttack_Cosmetic_OnJumpLanded_Params
	{
	public:
		class AConjoinedTwin*                                      owningTwin;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTwins.TwinJumpAttack.Cosmetic_OnJumpCooldownChanged
	 */
	struct UTwinJumpAttack_Cosmetic_OnJumpCooldownChanged_Params
	{
	public:
		bool                                                       isInJumpCooldown;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AConjoinedTwin*                                      owningTwin;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTwins.TwinJumpAttack.Cosmetic_OnIsForbiddenLandingLocationChanged
	 */
	struct UTwinJumpAttack_Cosmetic_OnIsForbiddenLandingLocationChanged_Params
	{
	public:
		bool                                                       isForbiddenLocation;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AConjoinedTwin*                                      twin;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTwins.TwinJumpAttack.Client_Debug_PrintFinalDecisionOnScreen
	 */
	struct UTwinJumpAttack_Client_Debug_PrintFinalDecisionOnScreen_Params
	{
	public:
		bool                                                       foundPath;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTwins.TwinJumpAttackOpenSubstate.Local_OnTwinOverlapEnter
	 */
	struct UTwinJumpAttackOpenSubstate_Local_OnTwinOverlapEnter_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromSweep;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTwins.TwinJumpAttackOpenSubstate.Local_OnTwinCapsuleHit
	 */
	struct UTwinJumpAttackOpenSubstate_Local_OnTwinCapsuleHit_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             NormalImpulse;                                           // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTwins.TwinJumpAudioMutedEffect.Cosmetic_OnTwinUnmuted
	 */
	struct UTwinJumpAudioMutedEffect_Cosmetic_OnTwinUnmuted_Params
	{	};

	/**
	 * Function TheTwins.TwinJumpAudioMutedEffect.Cosmetic_OnTwinMuted
	 */
	struct UTwinJumpAudioMutedEffect_Cosmetic_OnTwinMuted_Params
	{	};

	/**
	 * Function TheTwins.TwinJumpTargetVisibleEffect.OnJumpTargetTick
	 */
	struct UTwinJumpTargetVisibleEffect_OnJumpTargetTick_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTwins.TwinJumpTargetVisibleEffect.OnHideTargetPosition
	 */
	struct UTwinJumpTargetVisibleEffect_OnHideTargetPosition_Params
	{	};

	/**
	 * Function TheTwins.TwinLockerBlockerComponent.OnPushedMontageStopped
	 */
	struct UTwinLockerBlockerComponent_OnPushedMontageStopped_Params
	{
	public:
		struct FAnimationMontageDescriptor                         montageDescriptor;                                       // 0x0000(0x0020)  (ConstParm, Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTwins.TwinLockerBlockerComponent.OnPushedMontageStarted
	 */
	struct UTwinLockerBlockerComponent_OnPushedMontageStarted_Params
	{
	public:
		struct FAnimationMontageDescriptor                         montageDescriptor;                                       // 0x0000(0x0020)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		float                                                      Rate;                                                    // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTwins.TwinLockerBlockerComponent.OnPushedMontageEnded
	 */
	struct UTwinLockerBlockerComponent_OnPushedMontageEnded_Params
	{
	public:
		struct FAnimationMontageDescriptor                         montageDescriptor;                                       // 0x0000(0x0020)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		bool                                                       interrupted;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTwins.TwinLockerBlockerComponent.OnPlayerInLockerChanged
	 */
	struct UTwinLockerBlockerComponent_OnPlayerInLockerChanged_Params
	{
	public:
		class ADBDPlayer*                                          previousPlayerInLocker;                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ADBDPlayer*                                          newPlayerInLocker;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTwins.TwinLockerBlockerComponent.IsTwinAttachedToLocker
	 */
	struct UTwinLockerBlockerComponent_IsTwinAttachedToLocker_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTwins.TwinLockerBlockerComponent.Cosmetic_OnTwinOnLockerChanged
	 */
	struct UTwinLockerBlockerComponent_Cosmetic_OnTwinOnLockerChanged_Params
	{
	public:
		bool                                                       isOnLocker;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTwins.TwinLockerBlockerComponent.Authority_OnLevelReadyToPlay
	 */
	struct UTwinLockerBlockerComponent_Authority_OnLevelReadyToPlay_Params
	{	};

	/**
	 * Function TheTwins.TwinSubjectProvider.OnTwinSet
	 */
	struct UTwinSubjectProvider_OnTwinSet_Params
	{
	public:
		class AConjoinedTwin*                                      twin;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheTwins.TwinSubjectProvider.ListenToTwinSet
	 */
	struct UTwinSubjectProvider_ListenToTwinSet_Params
	{
	public:
		class ASlasherPlayer*                                      killer;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
