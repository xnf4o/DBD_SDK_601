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
	 * Function TheK26.HinderOnCrowAttachStatusEffect.OnKillerSet
	 */
	struct UHinderOnCrowAttachStatusEffect_OnKillerSet_Params
	{
	public:
		class ASlasherPlayer*                                      killer;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26AbilitySubAnimInstance.OnHasProjectileFired
	 */
	struct UK26AbilitySubAnimInstance_OnHasProjectileFired_Params
	{	};

	/**
	 * Function TheK26.K26AbilitySubAnimInstance.OnHasProjectileBeenSummoned
	 */
	struct UK26AbilitySubAnimInstance_OnHasProjectileBeenSummoned_Params
	{
	public:
		int32_t                                                    remainingAmmo;                                           // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    maxAmmo;                                                 // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26AbilitySubAnimInstance.ConsumeHasProjectileFired
	 */
	struct UK26AbilitySubAnimInstance_ConsumeHasProjectileFired_Params
	{	};

	/**
	 * Function TheK26.K26AbilitySubAnimInstance.ConsumeHasProjectileBeenSummoned
	 */
	struct UK26AbilitySubAnimInstance_ConsumeHasProjectileBeenSummoned_Params
	{	};

	/**
	 * Function TheK26.K26AmmoHandlerComponent.SetDependencies
	 */
	struct UK26AmmoHandlerComponent_SetDependencies_Params
	{
	public:
		class UK26PathHandlerComponent*                            pathHandler;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UK26PowerStatusHandlerComponent*                     statusHandler;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAuthoritativeActorPoolComponent*                    AuthoritativeActorPoolComponent;                         // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26AmmoHandlerComponent.SendHasExpiredDelegate
	 */
	struct UK26AmmoHandlerComponent_SendHasExpiredDelegate_Params
	{	};

	/**
	 * DelegateFunction TheK26.K26AmmoHandlerComponent.OnMaxAmmoSetDelegate__DelegateSignature
	 */
	struct UK26AmmoHandlerComponent_OnMaxAmmoSetDelegate__DelegateSignature_Params
	{
	public:
		int32_t                                                    maxAmmo;                                                 // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26AmmoHandlerComponent.OnLevelReadyToPlay
	 */
	struct UK26AmmoHandlerComponent_OnLevelReadyToPlay_Params
	{	};

	/**
	 * Function TheK26.K26AmmoHandlerComponent.OnKillerSet
	 */
	struct UK26AmmoHandlerComponent_OnKillerSet_Params
	{
	public:
		class ASlasherPlayer*                                      killer;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26AmmoHandlerComponent.Multicast_StartRecharging
	 */
	struct UK26AmmoHandlerComponent_Multicast_StartRecharging_Params
	{
	public:
		EK26AmmoCooldownReason                                     lastCooldownReason;                                      // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26AmmoHandlerComponent.Multicast_StartExpiring
	 */
	struct UK26AmmoHandlerComponent_Multicast_StartExpiring_Params
	{	};

	/**
	 * Function TheK26.K26AmmoHandlerComponent.Multicast_OnCurrentAmmoStateChanged
	 */
	struct UK26AmmoHandlerComponent_Multicast_OnCurrentAmmoStateChanged_Params
	{
	public:
		EK26AmmoState                                              NewState;                                                // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    currentAmmo;                                             // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    maxAmmo;                                                 // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26AmmoHandlerComponent.Multicast_OnAmmoHasBeenFired
	 */
	struct UK26AmmoHandlerComponent_Multicast_OnAmmoHasBeenFired_Params
	{	};

	/**
	 * Function TheK26.K26AmmoHandlerComponent.Multicast_OnAmmoExpired
	 */
	struct UK26AmmoHandlerComponent_Multicast_OnAmmoExpired_Params
	{	};

	/**
	 * Function TheK26.K26AmmoHandlerComponent.GetMaxAmmo
	 */
	struct UK26AmmoHandlerComponent_GetMaxAmmo_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26AmmoHandlerComponent.GetCurrentCooldownReason
	 */
	struct UK26AmmoHandlerComponent_GetCurrentCooldownReason_Params
	{
	public:
		EK26AmmoCooldownReason                                     ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26AmmoHandlerComponent.GetCurrentAmmoState
	 */
	struct UK26AmmoHandlerComponent_GetCurrentAmmoState_Params
	{
	public:
		EK26AmmoState                                              ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26AmmoHandlerComponent.GetCurrentAmmo
	 */
	struct UK26AmmoHandlerComponent_GetCurrentAmmo_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26AmmoHandlerComponent.Cosmetic_OnExpiringWarning
	 */
	struct UK26AmmoHandlerComponent_Cosmetic_OnExpiringWarning_Params
	{	};

	/**
	 * Function TheK26.K26AmmoHandlerComponent.Cosmetic_OnAmmoHasBeenFired
	 */
	struct UK26AmmoHandlerComponent_Cosmetic_OnAmmoHasBeenFired_Params
	{	};

	/**
	 * Function TheK26.K26AmmoHandlerComponent.Cosmetic_OnAmmoExpired
	 */
	struct UK26AmmoHandlerComponent_Cosmetic_OnAmmoExpired_Params
	{	};

	/**
	 * Function TheK26.K26AmmoHandlerComponent.CallOnMaxAmmoSet
	 */
	struct UK26AmmoHandlerComponent_CallOnMaxAmmoSet_Params
	{
	public:
		class FScriptDelegate                                      Callback;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26AmmoHandlerComponent.Authority_OnAmmoInit
	 */
	struct UK26AmmoHandlerComponent_Authority_OnAmmoInit_Params
	{
	public:
		class AActor*                                              initAmmo;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26AmmoHandlerComponent.Authority_InitializePoolComponent
	 */
	struct UK26AmmoHandlerComponent_Authority_InitializePoolComponent_Params
	{
	public:
		int32_t                                                    maxAmmo;                                                 // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26AttachedCrow.OnRep_AttachmentStatus
	 */
	struct AK26AttachedCrow_OnRep_AttachmentStatus_Params
	{	};

	/**
	 * Function TheK26.K26AttachedCrow.Multicast_OnStopDetaching
	 */
	struct AK26AttachedCrow_Multicast_OnStopDetaching_Params
	{	};

	/**
	 * Function TheK26.K26AttachedCrow.Multicast_OnStartDetaching
	 */
	struct AK26AttachedCrow_Multicast_OnStartDetaching_Params
	{	};

	/**
	 * Function TheK26.K26AttachedCrow.HideOutline
	 */
	struct AK26AttachedCrow_HideOutline_Params
	{	};

	/**
	 * Function TheK26.K26AttachedCrow.Cosmetic_OnStopDetaching
	 */
	struct AK26AttachedCrow_Cosmetic_OnStopDetaching_Params
	{	};

	/**
	 * Function TheK26.K26AttachedCrow.Cosmetic_OnStartDetaching
	 */
	struct AK26AttachedCrow_Cosmetic_OnStartDetaching_Params
	{	};

	/**
	 * Function TheK26.K26AttachedCrow.Cosmetic_OnCrowAttached
	 */
	struct AK26AttachedCrow_Cosmetic_OnCrowAttached_Params
	{	};

	/**
	 * Function TheK26.K26AttachedCrow.Cosmetic_OnAuraShown
	 */
	struct AK26AttachedCrow_Cosmetic_OnAuraShown_Params
	{	};

	/**
	 * Function TheK26.K26AttachedCrow.Cosmetic_OnAuraHidden
	 */
	struct AK26AttachedCrow_Cosmetic_OnAuraHidden_Params
	{	};

	/**
	 * Function TheK26.K26AttachedCrow.Cosmetic_OnAttachedCrowRemoved
	 */
	struct AK26AttachedCrow_Cosmetic_OnAttachedCrowRemoved_Params
	{
	public:
		EFK26AttachedCrowRemovalReason                             removalReason;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26AttachedCrow.Authority_OnSurvivorWasUnhooked
	 */
	struct AK26AttachedCrow_Authority_OnSurvivorWasUnhooked_Params
	{
	public:
		struct FGameplayTag                                        gameEventType;                                           // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameEventData                                      GameEventData;                                           // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26AttachedCrow.Authority_OnSurvivorStatusIndicatorSet
	 */
	struct AK26AttachedCrow_Authority_OnSurvivorStatusIndicatorSet_Params
	{
	public:
		class ACamperPlayer*                                       survivor;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AK26AttachedCrow*                                    attachedCrow;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26AttachedCrow.Authority_OnSurvivorExitLocker
	 */
	struct AK26AttachedCrow_Authority_OnSurvivorExitLocker_Params
	{
	public:
		struct FGameplayTag                                        gameEventType;                                           // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameEventData                                      GameEventData;                                           // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26AttachedCrow.Authority_OnSurvivorDroppedEnd
	 */
	struct AK26AttachedCrow_Authority_OnSurvivorDroppedEnd_Params
	{	};

	/**
	 * Function TheK26.K26AttachedCrow.Authority_OnSurvivorAdded
	 */
	struct AK26AttachedCrow_Authority_OnSurvivorAdded_Params
	{
	public:
		class ACamperPlayer*                                       survivor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26AttachedCrow.Authority_OnPlayerLeftGame
	 */
	struct AK26AttachedCrow_Authority_OnPlayerLeftGame_Params
	{
	public:
		struct FGameplayTag                                        gameEventType;                                           // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameEventData                                      GameEventData;                                           // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26AttachedCrow.Authority_OnOtherSurvivorPerkFlagsChanged
	 */
	struct AK26AttachedCrow_Authority_OnOtherSurvivorPerkFlagsChanged_Params
	{
	public:
		struct FGameplayTag                                        GameplayTag;                                             // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       isAdded;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26AttachedCrow.Authority_OnOtherSurvivorGuidedActionChanged
	 */
	struct AK26AttachedCrow_Authority_OnOtherSurvivorGuidedActionChanged_Params
	{	};

	/**
	 * Function TheK26.K26AttachedCrow.Authority_OnOtherSurvivorDamageStateChanged
	 */
	struct AK26AttachedCrow_Authority_OnOtherSurvivorDamageStateChanged_Params
	{
	public:
		ECamperDamageState                                         before;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECamperDamageState                                         after;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26AttachedCrow.Authority_OnOtherAttachedCrowRemoved
	 */
	struct AK26AttachedCrow_Authority_OnOtherAttachedCrowRemoved_Params
	{	};

	/**
	 * Function TheK26.K26AttachedCrow.Authority_OnKillerSet
	 */
	struct AK26AttachedCrow_Authority_OnKillerSet_Params
	{
	public:
		class ASlasherPlayer*                                      killer;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26AttachedCrow.Authority_OnIsWithinOtherSurvivorRangeChanged
	 */
	struct AK26AttachedCrow_Authority_OnIsWithinOtherSurvivorRangeChanged_Params
	{
	public:
		class AActor*                                              survivorActor;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsInRange;                                               // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26AttachedCrow.Authority_OnDestroyAttempt
	 */
	struct AK26AttachedCrow_Authority_OnDestroyAttempt_Params
	{
	public:
		TArray<class AActor*>                                      instigatorsForCompletion;                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26AttachedCrow.Authority_DeactivateInfection
	 */
	struct AK26AttachedCrow_Authority_DeactivateInfection_Params
	{	};

	/**
	 * Function TheK26.K26AttachedCrow.Authority_ActivateInfection
	 */
	struct AK26AttachedCrow_Authority_ActivateInfection_Params
	{	};

	/**
	 * Function TheK26.K26CooldownInteractionDefinition.OnKillerSet
	 */
	struct UK26CooldownInteractionDefinition_OnKillerSet_Params
	{
	public:
		class ASlasherPlayer*                                      killer;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26CrowProjectile.Server_OnSurvivorHit
	 */
	struct AK26CrowProjectile_Server_OnSurvivorHit_Params
	{
	public:
		EK26ProjectileState                                        stateOnHit;                                              // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ACamperPlayer*                                       hitSurvivor;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26CrowProjectile.ProjectileWentOutOfBoundsEvent
	 */
	struct AK26CrowProjectile_ProjectileWentOutOfBoundsEvent_Params
	{	};

	/**
	 * Function TheK26.K26CrowProjectile.OnSurvivorAdded
	 */
	struct AK26CrowProjectile_OnSurvivorAdded_Params
	{
	public:
		class ACamperPlayer*                                       survivorAdded;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26CrowProjectile.OnRep_Path
	 */
	struct AK26CrowProjectile_OnRep_Path_Params
	{	};

	/**
	 * Function TheK26.K26CrowProjectile.OnLevelReadyToPlay
	 */
	struct AK26CrowProjectile_OnLevelReadyToPlay_Params
	{	};

	/**
	 * Function TheK26.K26CrowProjectile.OnIsWithinSurvivorRangeChanged
	 */
	struct AK26CrowProjectile_OnIsWithinSurvivorRangeChanged_Params
	{
	public:
		class AActor*                                              survivorActor;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsInRange;                                               // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26CrowProjectile.OnIntroCompleted
	 */
	struct AK26CrowProjectile_OnIntroCompleted_Params
	{	};

	/**
	 * Function TheK26.K26CrowProjectile.Multicast_SetState
	 */
	struct AK26CrowProjectile_Multicast_SetState_Params
	{
	public:
		EK26ProjectileState                                        NewState;                                                // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    pooledPathIndex;                                         // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26CrowProjectile.Multicast_SetStartingPosition
	 */
	struct AK26CrowProjectile_Multicast_SetStartingPosition_Params
	{
	public:
		struct FVector                                             position;                                                // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            Angle;                                                   // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26CrowProjectile.Multicast_OnExpiration
	 */
	struct AK26CrowProjectile_Multicast_OnExpiration_Params
	{	};

	/**
	 * Function TheK26.K26CrowProjectile.Local_OnSummonComplete
	 */
	struct AK26CrowProjectile_Local_OnSummonComplete_Params
	{	};

	/**
	 * Function TheK26.K26CrowProjectile.Local_OnCollisionOverlapBegin
	 */
	struct AK26CrowProjectile_Local_OnCollisionOverlapBegin_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComp;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       fromSweep;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FHitResult                                          SweepResult;                                             // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26CrowProjectile.IsHitboxBeingShown
	 */
	struct AK26CrowProjectile_IsHitboxBeingShown_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26CrowProjectile.IsBeingFlashlighted
	 */
	struct AK26CrowProjectile_IsBeingFlashlighted_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26CrowProjectile.HideOutlineFromSurvivor
	 */
	struct AK26CrowProjectile_HideOutlineFromSurvivor_Params
	{	};

	/**
	 * Function TheK26.K26CrowProjectile.GetFlashlightProgress
	 */
	struct AK26CrowProjectile_GetFlashlightProgress_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26CrowProjectile.GetDistanceFromFirePosition
	 */
	struct AK26CrowProjectile_GetDistanceFromFirePosition_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26CrowProjectile.Cosmetic_OnExpiration
	 */
	struct AK26CrowProjectile_Cosmetic_OnExpiration_Params
	{	};

	/**
	 * Function TheK26.K26CrowProjectile.Cosmetic_OnEnteredNearAudioRangeOfSurvivor
	 */
	struct AK26CrowProjectile_Cosmetic_OnEnteredNearAudioRangeOfSurvivor_Params
	{
	public:
		class ACamperPlayer*                                       survivor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26CrowProjectile.Client_LocalKillerStartSummonTimer
	 */
	struct AK26CrowProjectile_Client_LocalKillerStartSummonTimer_Params
	{
	public:
		float                                                      killerLocalSummonTime;                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26CrowProjectile.Authority_OnSummonComplete
	 */
	struct AK26CrowProjectile_Authority_OnSummonComplete_Params
	{	};

	/**
	 * Function TheK26.K26CrowProjectile.Authority_OnScoutingOverlapBegin
	 */
	struct AK26CrowProjectile_Authority_OnScoutingOverlapBegin_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComp;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       fromSweep;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FHitResult                                          SweepResult;                                             // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26CrowProjectile.Authority_OnDestroyTimerExpired
	 */
	struct AK26CrowProjectile_Authority_OnDestroyTimerExpired_Params
	{	};

	/**
	 * Function TheK26.K26CrowProjectile.Authority_OnDestroyAttempt
	 */
	struct AK26CrowProjectile_Authority_OnDestroyAttempt_Params
	{
	public:
		TArray<class AActor*>                                      instigatorsForCompletion;                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26CrowProjectile.Authority_OnCollisionOverlapEnd
	 */
	struct AK26CrowProjectile_Authority_OnCollisionOverlapEnd_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComp;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26CrowProjectile.Authority_OnCollisionOverlapBegin
	 */
	struct AK26CrowProjectile_Authority_OnCollisionOverlapBegin_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComp;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       fromSweep;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FHitResult                                          SweepResult;                                             // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26DismissCrowChargeableInteractionDefinition.OnLevelReadyToPlay
	 */
	struct UK26DismissCrowChargeableInteractionDefinition_OnLevelReadyToPlay_Params
	{	};

	/**
	 * Function TheK26.K26DismissCrowChargeableInteractionDefinition.OnKillerSet
	 */
	struct UK26DismissCrowChargeableInteractionDefinition_OnKillerSet_Params
	{
	public:
		class ASlasherPlayer*                                      killer;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UChargeableComponent*                                ChargeableComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26DismissCrowChargeableInteractionDefinition.OnDamageStateChanged
	 */
	struct UK26DismissCrowChargeableInteractionDefinition_OnDamageStateChanged_Params
	{
	public:
		ECamperDamageState                                         oldDamageState;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECamperDamageState                                         CurrentDamageState;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26FireCrowProjectileInteractionDefinition.SetDependencies
	 */
	struct UK26FireCrowProjectileInteractionDefinition_SetDependencies_Params
	{
	public:
		class UK26AmmoHandlerComponent*                            ammoHandler;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UK26PathHandlerComponent*                            pathHandler;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UK26CooldownInteractionDefinition*                   cooldownInteraction;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26FireCrowProjectileInteractionDefinition.Server_RequestFireOnAmmo
	 */
	struct UK26FireCrowProjectileInteractionDefinition_Server_RequestFireOnAmmo_Params
	{
	public:
		class ASlasherPlayer*                                      killer;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26FireCrowProjectileInteractionDefinition.Multicast_OnProjectileFired
	 */
	struct UK26FireCrowProjectileInteractionDefinition_Multicast_OnProjectileFired_Params
	{
	public:
		class ASlasherPlayer*                                      killer;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26IsLastCrowRemovalReasonDueToInteraction.OnSurvivorStatusIndicatorSet
	 */
	struct UK26IsLastCrowRemovalReasonDueToInteraction_OnSurvivorStatusIndicatorSet_Params
	{
	public:
		class AK26AttachedCrow*                                    attachedCrow;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26IsLastCrowRemovalReasonDueToInteraction.OnRep_OwningAttachedCrow
	 */
	struct UK26IsLastCrowRemovalReasonDueToInteraction_OnRep_OwningAttachedCrow_Params
	{	};

	/**
	 * Function TheK26.K26IsLastCrowRemovalReasonDueToInteraction.OnLastRemovalReasonSet
	 */
	struct UK26IsLastCrowRemovalReasonDueToInteraction_OnLastRemovalReasonSet_Params
	{
	public:
		EFK26AttachedCrowRemovalReason                             lastCrowRemovalReason;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26IsLastCrowRemovalReasonDueToInteraction.Authority_OnSurvivorStatusIndicatorSet
	 */
	struct UK26IsLastCrowRemovalReasonDueToInteraction_Authority_OnSurvivorStatusIndicatorSet_Params
	{
	public:
		class ACamperPlayer*                                       survivor;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AK26AttachedCrow*                                    attachedCrow;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26IsLastCrowRemovalReasonDueToInteraction.Authority_OnKillerSet
	 */
	struct UK26IsLastCrowRemovalReasonDueToInteraction_Authority_OnKillerSet_Params
	{
	public:
		class ASlasherPlayer*                                      killer;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26IsSurvivorInRangeOfAnyIdleCrow.Multicast_SetIsTrue
	 */
	struct UK26IsSurvivorInRangeOfAnyIdleCrow_Multicast_SetIsTrue_Params
	{
	public:
		bool                                                       isTrue;                                                  // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26IsSurvivorInRangeOfAnyIdleCrow.Authority_SetVariables
	 */
	struct UK26IsSurvivorInRangeOfAnyIdleCrow_Authority_SetVariables_Params
	{
	public:
		class ACamperPlayer*                                       trackedSurvivor;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAuthoritativeActorPoolComponent*                    AuthoritativeActorPoolComponent;                         // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Range;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26IsSurvivorInRangeOfAnyIdleCrow.Authority_OnInRangeChanged
	 */
	struct UK26IsSurvivorInRangeOfAnyIdleCrow_Authority_OnInRangeChanged_Params
	{
	public:
		bool                                                       InRange;                                                 // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26IsSurvivorInRangeOfAnyIdleCrow.Authority_OnCrowProjectileStateChanged
	 */
	struct UK26IsSurvivorInRangeOfAnyIdleCrow_Authority_OnCrowProjectileStateChanged_Params
	{
	public:
		class AK26CrowProjectile*                                  crowProjectile;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26IsSurvivorInRangeOfAnyIdleCrow.Authority_OnCrowAddedToPool
	 */
	struct UK26IsSurvivorInRangeOfAnyIdleCrow_Authority_OnCrowAddedToPool_Params
	{
	public:
		class AActor*                                              crowProjectileActor;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26OnCrowAttachLingeringStatusEffectBase.GetLingerTime
	 */
	struct UK26OnCrowAttachLingeringStatusEffectBase_GetLingerTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26P01.OnRep_BlockedGenerators
	 */
	struct UK26P01_OnRep_BlockedGenerators_Params
	{	};

	/**
	 * Function TheK26.K26P01.Authority_OnBlockTimerDone
	 */
	struct UK26P01_Authority_OnBlockTimerDone_Params
	{
	public:
		class AGenerator*                                          Generator;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26P02.Multicast_TriggerPerk
	 */
	struct UK26P02_Multicast_TriggerPerk_Params
	{
	public:
		class AGenerator*                                          explodingGenerator;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26P02.GetScreamRevealLocationDuration
	 */
	struct UK26P02_GetScreamRevealLocationDuration_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26P02.Cosmetic_MakeSurvivorScream
	 */
	struct UK26P02_Cosmetic_MakeSurvivorScream_Params
	{
	public:
		class ADBDPlayer*                                          screamingSurvivor;                                       // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26P02.Authority_OnSurvivorHookedOnScourgeHook
	 */
	struct UK26P02_Authority_OnSurvivorHookedOnScourgeHook_Params
	{
	public:
		struct FGameEventData                                      GameEventData;                                           // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26PathHandlerComponent.SetDependencies
	 */
	struct UK26PathHandlerComponent_SetDependencies_Params
	{
	public:
		class UK26AmmoHandlerComponent*                            ammoHandler;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UK26CrowPlacementValidatorComponent*                 placementValidator;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26PathHandlerComponent.OnRep_AvailablePathData
	 */
	struct UK26PathHandlerComponent_OnRep_AvailablePathData_Params
	{	};

	/**
	 * Function TheK26.K26PathHandlerComponent.OnIterativeAvailablePathUpdate
	 */
	struct UK26PathHandlerComponent_OnIterativeAvailablePathUpdate_Params
	{	};

	/**
	 * Function TheK26.K26PathHandlerComponent.Multicast_FillAvailablePathArray
	 */
	struct UK26PathHandlerComponent_Multicast_FillAvailablePathArray_Params
	{
	public:
		int32_t                                                    maxAmmo;                                                 // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26PathHandlerComponent.Authority_OnMaxAmmoSet
	 */
	struct UK26PathHandlerComponent_Authority_OnMaxAmmoSet_Params
	{
	public:
		int32_t                                                    maxAmmo;                                                 // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26PowerChargePresentationItemProgressComponent.SetDependencies
	 */
	struct UK26PowerChargePresentationItemProgressComponent_SetDependencies_Params
	{
	public:
		class UK26AmmoHandlerComponent*                            ammoHandler;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26PowerChargePresentationPowerFadeComponent.SetDependencies
	 */
	struct UK26PowerChargePresentationPowerFadeComponent_SetDependencies_Params
	{
	public:
		class UK26AmmoHandlerComponent*                            ammoHandler;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26PowerOutlineUpdateStrategy.SetOutlineVisibility
	 */
	struct UK26PowerOutlineUpdateStrategy_SetOutlineVisibility_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26PowerOutlineUpdateStrategy.IsOutlineVisible
	 */
	struct UK26PowerOutlineUpdateStrategy_IsOutlineVisible_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26PowerStatusHandlerComponent.Multicast_OnStopRemovingCrow
	 */
	struct UK26PowerStatusHandlerComponent_Multicast_OnStopRemovingCrow_Params
	{
	public:
		class ACamperPlayer*                                       survivor;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26PowerStatusHandlerComponent.Multicast_OnStartRemovingCrow
	 */
	struct UK26PowerStatusHandlerComponent_Multicast_OnStartRemovingCrow_Params
	{
	public:
		class ACamperPlayer*                                       survivor;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26PowerStatusHandlerComponent.Multicast_OnIdleCrowInterrupt
	 */
	struct UK26PowerStatusHandlerComponent_Multicast_OnIdleCrowInterrupt_Params
	{
	public:
		class ACamperPlayer*                                       survivor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26PowerStatusHandlerComponent.Multicast_OnCrowDetached
	 */
	struct UK26PowerStatusHandlerComponent_Multicast_OnCrowDetached_Params
	{
	public:
		class ACamperPlayer*                                       survivor;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26PowerStatusHandlerComponent.Multicast_OnCrowDamagedSurvivor
	 */
	struct UK26PowerStatusHandlerComponent_Multicast_OnCrowDamagedSurvivor_Params
	{
	public:
		class ASlasherPlayer*                                      killer;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ACamperPlayer*                                       survivor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26PowerStatusHandlerComponent.Multicast_OnCrowAttached
	 */
	struct UK26PowerStatusHandlerComponent_Multicast_OnCrowAttached_Params
	{
	public:
		class ACamperPlayer*                                       survivor;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26PowerStatusHandlerComponent.Cosmetic_OnCrowIdleInterrupt
	 */
	struct UK26PowerStatusHandlerComponent_Cosmetic_OnCrowIdleInterrupt_Params
	{
	public:
		class ACamperPlayer*                                       survivor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26PowerStatusHandlerComponent.Cosmetic_OnCrowDamagedSurvivor
	 */
	struct UK26PowerStatusHandlerComponent_Cosmetic_OnCrowDamagedSurvivor_Params
	{
	public:
		class ASlasherPlayer*                                      killer;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ACamperPlayer*                                       survivor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26PowerStatusHandlerComponent.Authority_OnSurvivorAdded
	 */
	struct UK26PowerStatusHandlerComponent_Authority_OnSurvivorAdded_Params
	{
	public:
		class ACamperPlayer*                                       survivor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26PowerStatusHandlerComponent.Authority_OnKillerInstinctTimePassed
	 */
	struct UK26PowerStatusHandlerComponent_Authority_OnKillerInstinctTimePassed_Params
	{
	public:
		class ACamperPlayer*                                       survivor;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26PowerStatusHandlerComponent.Authority_OnIntroCompleted
	 */
	struct UK26PowerStatusHandlerComponent_Authority_OnIntroCompleted_Params
	{	};

	/**
	 * Function TheK26.K26SpawnCrowProjectileChargeableInteractionDefinition.SetSummonCooldown
	 */
	struct UK26SpawnCrowProjectileChargeableInteractionDefinition_SetSummonCooldown_Params
	{	};

	/**
	 * Function TheK26.K26SpawnCrowProjectileChargeableInteractionDefinition.SetDependencies
	 */
	struct UK26SpawnCrowProjectileChargeableInteractionDefinition_SetDependencies_Params
	{
	public:
		class UK26AmmoHandlerComponent*                            ammoHandler;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UK26PathHandlerComponent*                            pathHandler;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UK26PowerStatusHandlerComponent*                     statusHandler;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26SpawnCrowProjectileChargeableInteractionDefinition.Server_PlaceProjectileWithPath
	 */
	struct UK26SpawnCrowProjectileChargeableInteractionDefinition_Server_PlaceProjectileWithPath_Params
	{
	public:
		class ASlasherPlayer*                                      killer;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             projectileSpawnPoint;                                    // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      killerLocalTime;                                         // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26SpawnCrowProjectileChargeableInteractionDefinition.OnSummonCooldownComplete
	 */
	struct UK26SpawnCrowProjectileChargeableInteractionDefinition_OnSummonCooldownComplete_Params
	{	};

	/**
	 * Function TheK26.K26SpawnCrowProjectileChargeableInteractionDefinition.OnConfirmButtonPressed
	 */
	struct UK26SpawnCrowProjectileChargeableInteractionDefinition_OnConfirmButtonPressed_Params
	{
	public:
		class ASlasherPlayer*                                      killer;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26SpawnCrowProjectileChargeableInteractionDefinition.Multicast_OnK26CrowSummoned
	 */
	struct UK26SpawnCrowProjectileChargeableInteractionDefinition_Multicast_OnK26CrowSummoned_Params
	{
	public:
		class ASlasherPlayer*                                      killer;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    remainingAmmo;                                           // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    maxAmmo;                                                 // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26SpawnCrowProjectileChargeableInteractionDefinition.Multicast_OnK26CrowSummonAttemptAcknowledged
	 */
	struct UK26SpawnCrowProjectileChargeableInteractionDefinition_Multicast_OnK26CrowSummonAttemptAcknowledged_Params
	{	};

	/**
	 * Function TheK26.K26SpawnCrowProjectileChargeableInteractionDefinition.Local_OnGlobalCooldownDone
	 */
	struct UK26SpawnCrowProjectileChargeableInteractionDefinition_Local_OnGlobalCooldownDone_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26SpawnCrowProjectileChargeableInteractionDefinition.IsSummonOnCooldown
	 */
	struct UK26SpawnCrowProjectileChargeableInteractionDefinition_IsSummonOnCooldown_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26SpawnCrowProjectileChargeableInteractionDefinition.Cosmetic_OnSummonButtonUsedWhenCrowSummonIsNotPossible
	 */
	struct UK26SpawnCrowProjectileChargeableInteractionDefinition_Cosmetic_OnSummonButtonUsedWhenCrowSummonIsNotPossible_Params
	{	};

	/**
	 * Function TheK26.K26SpawnCrowProjectileChargeableInteractionDefinition.Cosmetic_OnFullyCharged
	 */
	struct UK26SpawnCrowProjectileChargeableInteractionDefinition_Cosmetic_OnFullyCharged_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26SpawnCrowProjectileChargeableInteractionDefinition.Cosmetic_LocalOnSummonCooldownComplete
	 */
	struct UK26SpawnCrowProjectileChargeableInteractionDefinition_Cosmetic_LocalOnSummonCooldownComplete_Params
	{
	public:
		int32_t                                                    amountOfAmmoLeft;                                        // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       isInteractionActive;                                     // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26SpawnCrowProjectileChargeableInteractionDefinition.CanSummonCrowOnceFullyCharged
	 */
	struct UK26SpawnCrowProjectileChargeableInteractionDefinition_CanSummonCrowOnceFullyCharged_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.K26SpawnCrowProjectileChargeableInteractionDefinition.CanSummonCrow
	 */
	struct UK26SpawnCrowProjectileChargeableInteractionDefinition_CanSummonCrow_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.RekindledTotem.RebuildTotem
	 */
	struct ARekindledTotem_RebuildTotem_Params
	{
	public:
		class ATotem*                                              Totem;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.RekindledTotem.OnParentTotemEndPlay
	 */
	struct ARekindledTotem_OnParentTotemEndPlay_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.RekindledTotem.Cosmetic_ShowShadowTotem
	 */
	struct ARekindledTotem_Cosmetic_ShowShadowTotem_Params
	{
	public:
		bool                                                       instant;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.RekindledTotem.Cosmetic_HideShadowTotem
	 */
	struct ARekindledTotem_Cosmetic_HideShadowTotem_Params
	{
	public:
		bool                                                       instant;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheK26.RekindledTotem.CleanseTotem
	 */
	struct ARekindledTotem_CleanseTotem_Params
	{
	public:
		class ATotem*                                              Totem;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ETotemState                                                oldTotemState;                                           // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
