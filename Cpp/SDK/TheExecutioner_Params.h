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
	 * Function TheExecutioner.ActivateTormentModeInteraction.SetTormentMode
	 */
	struct UActivateTormentModeInteraction_SetTormentMode_Params
	{
	public:
		class ATormentMode*                                        tormentModeComponent;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheExecutioner.AgonyComponent.ShowAgonyBarbWireFX_Cosmetic
	 */
	struct UAgonyComponent_ShowAgonyBarbWireFX_Cosmetic_Params
	{	};

	/**
	 * Function TheExecutioner.AgonyComponent.OnTrailEffectStop_Cosmetic
	 */
	struct UAgonyComponent_OnTrailEffectStop_Cosmetic_Params
	{	};

	/**
	 * Function TheExecutioner.AgonyComponent.OnTrailEffectStart_Cosmetic
	 */
	struct UAgonyComponent_OnTrailEffectStart_Cosmetic_Params
	{	};

	/**
	 * Function TheExecutioner.AgonyComponent.OnShowBarbWireFXOnGameEvent
	 */
	struct UAgonyComponent_OnShowBarbWireFXOnGameEvent_Params
	{
	public:
		struct FGameplayTag                                        gameEventType;                                           // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameEventData                                      GameEventData;                                           // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheExecutioner.AgonyComponent.OnRep_IsInAgony
	 */
	struct UAgonyComponent_OnRep_IsInAgony_Params
	{	};

	/**
	 * Function TheExecutioner.AgonyComponent.OnLocallyObservedChanged
	 */
	struct UAgonyComponent_OnLocallyObservedChanged_Params
	{
	public:
		bool                                                       IsLocallyObserved;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheExecutioner.AgonyComponent.OnHitInAgony_Cosmetic
	 */
	struct UAgonyComponent_OnHitInAgony_Cosmetic_Params
	{	};

	/**
	 * Function TheExecutioner.AgonyComponent.OnHitByTormentAttackTrail_Cosmetic
	 */
	struct UAgonyComponent_OnHitByTormentAttackTrail_Cosmetic_Params
	{	};

	/**
	 * Function TheExecutioner.AgonyComponent.OnHideBarbWireFXOnGameEvent
	 */
	struct UAgonyComponent_OnHideBarbWireFXOnGameEvent_Params
	{
	public:
		struct FGameplayTag                                        gameEventType;                                           // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameEventData                                      GameEventData;                                           // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheExecutioner.AgonyComponent.OnAgonyChanged_Cosmetic
	 */
	struct UAgonyComponent_OnAgonyChanged_Cosmetic_Params
	{
	public:
		bool                                                       IsInAgony;                                               // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheExecutioner.AgonyComponent.IsInAgony
	 */
	struct UAgonyComponent_IsInAgony_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheExecutioner.AgonyComponent.IsAgonyMoriable
	 */
	struct UAgonyComponent_IsAgonyMoriable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheExecutioner.AgonyComponent.HideAgonyBarbWireFX_Cosmetic
	 */
	struct UAgonyComponent_HideAgonyBarbWireFX_Cosmetic_Params
	{	};

	/**
	 * Function TheExecutioner.AgonyComponent.Authority_OnDrainStageChanged
	 */
	struct UAgonyComponent_Authority_OnDrainStageChanged_Params
	{
	public:
		int32_t                                                    DrainStage;                                              // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ADBDPlayer*                                          Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheExecutioner.AgonyComponent.Authority_OnAttackTrailDamageCooldownTimerDone
	 */
	struct UAgonyComponent_Authority_OnAttackTrailDamageCooldownTimerDone_Params
	{	};

	/**
	 * Function TheExecutioner.BaseTormentTrailPoint.EndOfDisapearCosmetic
	 */
	struct ABaseTormentTrailPoint_EndOfDisapearCosmetic_Params
	{	};

	/**
	 * Function TheExecutioner.BaseTormentTrailPoint.DisappearCosmetic
	 */
	struct ABaseTormentTrailPoint_DisappearCosmetic_Params
	{	};

	/**
	 * Function TheExecutioner.BloodPact.Authority_OnInRangeChanged
	 */
	struct UBloodPact_Authority_OnInRangeChanged_Params
	{
	public:
		bool                                                       InRange;                                                 // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheExecutioner.DeathBedAntiCampComponent.Multicast_TriggerDeathBedRelocate
	 */
	struct UDeathBedAntiCampComponent_Multicast_TriggerDeathBedRelocate_Params
	{	};

	/**
	 * Function TheExecutioner.DeathBedAntiCampComponent.Authority_OnInRangeChanged
	 */
	struct UDeathBedAntiCampComponent_Authority_OnInRangeChanged_Params
	{
	public:
		bool                                                       InRange;                                                 // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheExecutioner.DeathBedInteractable.TeleportCamperToDeathBed
	 */
	struct ADeathBedInteractable_TeleportCamperToDeathBed_Params
	{	};

	/**
	 * Function TheExecutioner.DeathBedInteractable.StartPlayerAbsorbedByGround
	 */
	struct ADeathBedInteractable_StartPlayerAbsorbedByGround_Params
	{	};

	/**
	 * Function TheExecutioner.DeathBedInteractable.SetInDeathBedCamper
	 */
	struct ADeathBedInteractable_SetInDeathBedCamper_Params
	{
	public:
		class ACamperPlayer*                                       CamperPlayer;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheExecutioner.DeathBedInteractable.PlayerOverlapZoneEndOverlap
	 */
	struct ADeathBedInteractable_PlayerOverlapZoneEndOverlap_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheExecutioner.DeathBedInteractable.PlayerOverlapZoneBeginOverlap
	 */
	struct ADeathBedInteractable_PlayerOverlapZoneBeginOverlap_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromSweep;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FHitResult                                          SweepResult;                                             // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheExecutioner.DeathBedInteractable.OnSkillCheckFailed_Cosmetic
	 */
	struct ADeathBedInteractable_OnSkillCheckFailed_Cosmetic_Params
	{	};

	/**
	 * Function TheExecutioner.DeathBedInteractable.OnSkillCheckFailed
	 */
	struct ADeathBedInteractable_OnSkillCheckFailed_Params
	{	};

	/**
	 * Function TheExecutioner.DeathBedInteractable.OnRescueCancelled
	 */
	struct ADeathBedInteractable_OnRescueCancelled_Params
	{	};

	/**
	 * Function TheExecutioner.DeathBedInteractable.OnRelocateStart_Cosmetic
	 */
	struct ADeathBedInteractable_OnRelocateStart_Cosmetic_Params
	{	};

	/**
	 * Function TheExecutioner.DeathBedInteractable.OnDeathBedDeathEnd
	 */
	struct ADeathBedInteractable_OnDeathBedDeathEnd_Params
	{	};

	/**
	 * Function TheExecutioner.DeathBedInteractable.Multicast_RelocateToOtherDeathBed
	 */
	struct ADeathBedInteractable_Multicast_RelocateToOtherDeathBed_Params
	{
	public:
		class ADeathBedInteractable*                               deathBed;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ACamperPlayer*                                       CamperPlayer;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheExecutioner.DeathBedInteractable.GetRescuerSnapPosition
	 */
	struct ADeathBedInteractable_GetRescuerSnapPosition_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheExecutioner.DeathBedInteractable.GetMontagePlayer
	 */
	struct ADeathBedInteractable_GetMontagePlayer_Params
	{
	public:
		class UMontagePlayer*                                      ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheExecutioner.DeathBedInteractable.GetInDeathBedCamper
	 */
	struct ADeathBedInteractable_GetInDeathBedCamper_Params
	{
	public:
		class ACamperPlayer*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheExecutioner.DeathBedInteractable.FX_SurvivorSavedFromDeathBed
	 */
	struct ADeathBedInteractable_FX_SurvivorSavedFromDeathBed_Params
	{	};

	/**
	 * Function TheExecutioner.DeathBedInteractable.FX_DeathBedAppear
	 */
	struct ADeathBedInteractable_FX_DeathBedAppear_Params
	{	};

	/**
	 * Function TheExecutioner.DeathBedInteractable.DeathBedDisappear
	 */
	struct ADeathBedInteractable_DeathBedDisappear_Params
	{	};

	/**
	 * Function TheExecutioner.DeathBedInteractable.CanRescueSurvivor
	 */
	struct ADeathBedInteractable_CanRescueSurvivor_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheExecutioner.DeathBedInteractable.ActivateDeathBed
	 */
	struct ADeathBedInteractable_ActivateDeathBed_Params
	{
	public:
		bool                                                       value;                                                   // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheExecutioner.DeathBedRescueInteraction.GetRescuerSnapPosition
	 */
	struct UDeathBedRescueInteraction_GetRescuerSnapPosition_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheExecutioner.Deathbound.OnRep_SurvivorsToReveal
	 */
	struct UDeathbound_OnRep_SurvivorsToReveal_Params
	{	};

	/**
	 * Function TheExecutioner.Deathbound.MakeSurvivorScream
	 */
	struct UDeathbound_MakeSurvivorScream_Params
	{
	public:
		class ACamperPlayer*                                       survivor;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheExecutioner.Deathbound.GetRevealLocationDuration
	 */
	struct UDeathbound_GetRevealLocationDuration_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheExecutioner.ExecutionerTormentAttack.Server_TormentTryHitTargetNotInCoolDown
	 */
	struct UExecutionerTormentAttack_Server_TormentTryHitTargetNotInCoolDown_Params
	{
	public:
		class ADBDPlayer*                                          Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheExecutioner.ExecutionerTormentAttack.Multicast_TormentHitTarget
	 */
	struct UExecutionerTormentAttack_Multicast_TormentHitTarget_Params
	{
	public:
		class ADBDPlayer*                                          Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       hitCosmeticOnly;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheExecutioner.MobileTormentTrailRenderer.Multicast_RemoveInstance
	 */
	struct AMobileTormentTrailRenderer_Multicast_RemoveInstance_Params
	{
	public:
		class ABaseTormentTrailPoint*                              TrailPoint;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheExecutioner.MobileTormentTrailRenderer.Multicast_AddInstance
	 */
	struct AMobileTormentTrailRenderer_Multicast_AddInstance_Params
	{
	public:
		class ABaseTormentTrailPoint*                              TrailPoint;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       isAttackTrailPoint;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheExecutioner.RepressedAlliance.Server_OnActionInputPressed
	 */
	struct URepressedAlliance_Server_OnActionInputPressed_Params
	{
	public:
		class AGenerator*                                          Generator;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheExecutioner.RepressedAlliance.OnRep_CurrentRepairInteractionWithAbility
	 */
	struct URepressedAlliance_OnRep_CurrentRepairInteractionWithAbility_Params
	{
	public:
		class UInteractionDefinition*                              oldRepairInteraction;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheExecutioner.RepressedAlliance.OnRep_BlockedGenerator
	 */
	struct URepressedAlliance_OnRep_BlockedGenerator_Params
	{
	public:
		class AGenerator*                                          oldGenerator;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheExecutioner.SendToDeathBedInteraction.Multicast_SendCamperToDeathBed
	 */
	struct USendToDeathBedInteraction_Multicast_SendCamperToDeathBed_Params
	{
	public:
		class ADeathBedInteractable*                               deathBed;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheExecutioner.SendToDeathBedInteraction.GetOwningSurvivor
	 */
	struct USendToDeathBedInteraction_GetOwningSurvivor_Params
	{
	public:
		class ACamperPlayer*                                       ReturnValue;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheExecutioner.SendToDeathBedInteraction.FX_InteractionStart
	 */
	struct USendToDeathBedInteraction_FX_InteractionStart_Params
	{	};

	/**
	 * Function TheExecutioner.SendToDeathBedInteraction.FX_InteractionCancel
	 */
	struct USendToDeathBedInteraction_FX_InteractionCancel_Params
	{	};

	/**
	 * Function TheExecutioner.SoulGuard.Authority_ShowOnKOPreventedFX
	 */
	struct USoulGuard_Authority_ShowOnKOPreventedFX_Params
	{	};

	/**
	 * Function TheExecutioner.SoulGuard.Authority_OnSurvivorHealed
	 */
	struct USoulGuard_Authority_OnSurvivorHealed_Params
	{
	public:
		struct FCamperHealResult                                   healResult;                                              // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheExecutioner.TheExecutionerAnimInstance.NoInputFeedbackCosmetic
	 */
	struct UTheExecutionerAnimInstance_NoInputFeedbackCosmetic_Params
	{	};

	/**
	 * Function TheExecutioner.TheExecutionerCheatComponent.DBD_SetCanBeAgonyMoriedOnLocallyControlledPlayer
	 */
	struct UTheExecutionerCheatComponent_DBD_SetCanBeAgonyMoriedOnLocallyControlledPlayer_Params
	{
	public:
		bool                                                       value;                                                   // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              localPlayerId;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheExecutioner.TheExecutionerCheatComponent.DBD_SetAgonyOnLocallyControlledPlayer
	 */
	struct UTheExecutionerCheatComponent_DBD_SetAgonyOnLocallyControlledPlayer_Params
	{
	public:
		bool                                                       value;                                                   // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              localPlayerId;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheExecutioner.TheExecutionerCheatComponent.DBD_LocalKillSurvivorInDeathBed
	 */
	struct UTheExecutionerCheatComponent_DBD_LocalKillSurvivorInDeathBed_Params
	{	};

	/**
	 * Function TheExecutioner.TheExecutionerCheatComponent.DBD_DisplayAllDeathBed
	 */
	struct UTheExecutionerCheatComponent_DBD_DisplayAllDeathBed_Params
	{
	public:
		bool                                                       value;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheExecutioner.TheExecutionerCheatComponent.DBD_DeathBedPlayStruggleHitReaction
	 */
	struct UTheExecutionerCheatComponent_DBD_DeathBedPlayStruggleHitReaction_Params
	{	};

	/**
	 * Function TheExecutioner.TrailControllerBase.RemoveTormentTrailController
	 */
	struct ATrailControllerBase_RemoveTormentTrailController_Params
	{	};

	/**
	 * Function TheExecutioner.TrailControllerBase.OnTrailPointDeath
	 */
	struct ATrailControllerBase_OnTrailPointDeath_Params
	{
	public:
		class ABaseTormentTrailPoint*                              baseTrailPoint;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheExecutioner.TrailControllerBase.OnAcquireChanged
	 */
	struct ATrailControllerBase_OnAcquireChanged_Params
	{
	public:
		bool                                                       acquired;                                                // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheExecutioner.TrailControllerBase.ActivateCosmetic
	 */
	struct ATrailControllerBase_ActivateCosmetic_Params
	{
	public:
		bool                                                       value;                                                   // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheExecutioner.TormentAttackTrailController.OnTrailPointRemovedCosmetic
	 */
	struct ATormentAttackTrailController_OnTrailPointRemovedCosmetic_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheExecutioner.TormentAttackTrailController.OnStartTrailTimerDone
	 */
	struct ATormentAttackTrailController_OnStartTrailTimerDone_Params
	{	};

	/**
	 * Function TheExecutioner.TormentAttackTrailController.OnIntervalBetweenPointsTimerDone
	 */
	struct ATormentAttackTrailController_OnIntervalBetweenPointsTimerDone_Params
	{	};

	/**
	 * Function TheExecutioner.TormentAttackTrailController.OnAttackTrailStartCosmetic
	 */
	struct ATormentAttackTrailController_OnAttackTrailStartCosmetic_Params
	{	};

	/**
	 * Function TheExecutioner.TormentAttackTrailController.Multicast_StartAttackTrail
	 */
	struct ATormentAttackTrailController_Multicast_StartAttackTrail_Params
	{
	public:
		float                                                      serverTimeSpawn;                                         // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector_NetQuantize10                               Location;                                                // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            Rotation;                                                // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheExecutioner.TormentAttackTrailController.DisplayAttackTrailSpawnSign
	 */
	struct ATormentAttackTrailController_DisplayAttackTrailSpawnSign_Params
	{	};

	/**
	 * Function TheExecutioner.TormentAttackTrailPoint.DisplayTrailSplineMesh
	 */
	struct ATormentAttackTrailPoint_DisplayTrailSplineMesh_Params
	{
	public:
		class USplineComponent*                                    splinemesh;                                              // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    indexInTrail;                                            // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheExecutioner.TormentMode.Server_RequestMoreActorInAttackPool
	 */
	struct ATormentMode_Server_RequestMoreActorInAttackPool_Params
	{	};

	/**
	 * Function TheExecutioner.TormentMode.OnTormentModeStop_Cosmetic
	 */
	struct ATormentMode_OnTormentModeStop_Cosmetic_Params
	{	};

	/**
	 * Function TheExecutioner.TormentMode.OnTormentModeStart_Cosmetic
	 */
	struct ATormentMode_OnTormentModeStart_Cosmetic_Params
	{	};

	/**
	 * Function TheExecutioner.TormentMode.OnTormentModeChargeEmpty
	 */
	struct ATormentMode_OnTormentModeChargeEmpty_Params
	{	};

	/**
	 * Function TheExecutioner.TormentMode.IsInTormentMode
	 */
	struct ATormentMode_IsInTormentMode_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheExecutioner.Tormentor.GetTormentTrailSpawnPoint
	 */
	struct UTormentor_GetTormentTrailSpawnPoint_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheExecutioner.Tormentor.GetTormentTrailAttackSpawnPoint
	 */
	struct UTormentor_GetTormentTrailAttackSpawnPoint_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheExecutioner.TormentTrailController.Server_SpawnTormentTrailPoint
	 */
	struct ATormentTrailController_Server_SpawnTormentTrailPoint_Params
	{
	public:
		class ATormentTrailPoint*                                  TrailPoint;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector_NetQuantize10                               Location;                                                // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            Rotation;                                                // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheExecutioner.TormentTrailPoint.Server_RemoveTrailPoint
	 */
	struct ATormentTrailPoint_Server_RemoveTrailPoint_Params
	{	};

	/**
	 * Function TheExecutioner.TormentTrailPoint.RefreshTrailPointCosmetic
	 */
	struct ATormentTrailPoint_RefreshTrailPointCosmetic_Params
	{
	public:
		ETrailPointRefreshReason                                   trailPointRefreshReason;                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheExecutioner.TormentTrailPoint.OnAcquireChanged
	 */
	struct ATormentTrailPoint_OnAcquireChanged_Params
	{
	public:
		bool                                                       acquired;                                                // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheExecutioner.TormentTrailPoint.Multicast_TriggerTrailPointDisappear
	 */
	struct ATormentTrailPoint_Multicast_TriggerTrailPointDisappear_Params
	{	};

	/**
	 * Function TheExecutioner.TormentTrailPoint.GetTrailLocationAndTangeant
	 */
	struct ATormentTrailPoint_GetTrailLocationAndTangeant_Params
	{
	public:
		int32_t                                                    indexInTrail;                                            // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USplineComponent*                                    SplineComponent;                                         // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             outStartLocation;                                        // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             outStartTangent;                                         // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             outEndLocation;                                          // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             outEndTangent;                                           // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheExecutioner.TormentTrailPoint.AddTrailCosmetic
	 */
	struct ATormentTrailPoint_AddTrailCosmetic_Params
	{
	public:
		class USplineComponent*                                    SplineComponent;                                         // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              indexInTrail;                                            // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheExecutioner.TormentTrailPoint.ActivateCosmetic
	 */
	struct ATormentTrailPoint_ActivateCosmetic_Params
	{
	public:
		bool                                                       value;                                                   // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheExecutioner.TormentTrailPointCollectionComponent.OnTrailAcquireChanged
	 */
	struct UTormentTrailPointCollectionComponent_OnTrailAcquireChanged_Params
	{
	public:
		class ATormentTrailPoint*                                  TrailPoint;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       value;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheExecutioner.TormentTrailSpawnerComponent.Sever_SpawnTrailController
	 */
	struct UTormentTrailSpawnerComponent_Sever_SpawnTrailController_Params
	{
	public:
		class ATormentTrailController*                             trailController;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector_NetQuantize10                               Location;                                                // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            Rotation;                                                // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheExecutioner.TormentTrailSpawnerComponent.Server_StopTrailController
	 */
	struct UTormentTrailSpawnerComponent_Server_StopTrailController_Params
	{
	public:
		class ATormentTrailController*                             trailController;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheExecutioner.TormentTrailSpawnerComponent.Server_RequestMoreActorInPool
	 */
	struct UTormentTrailSpawnerComponent_Server_RequestMoreActorInPool_Params
	{
	public:
		ETrailType                                                 trailType;                                               // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheExecutioner.TormentTrailSpawnerComponent.OnLevelReadyToPlay
	 */
	struct UTormentTrailSpawnerComponent_OnLevelReadyToPlay_Params
	{	};

	/**
	 * Function TheExecutioner.TormentTrailSpawnerComponent.OnInRangeChanged
	 */
	struct UTormentTrailSpawnerComponent_OnInRangeChanged_Params
	{
	public:
		bool                                                       InRange;                                                 // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheExecutioner.TrailOfTorment.OnRep_HighlightGenerator
	 */
	struct UTrailOfTorment_OnRep_HighlightGenerator_Params
	{
	public:
		class AGenerator*                                          _oldHighlightedGenerator;                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
