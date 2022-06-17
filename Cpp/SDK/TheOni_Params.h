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
	 * Function TheOni.AbsorbBloodOrbsInteraction.SetPlayerOwner
	 */
	struct UAbsorbBloodOrbsInteraction_SetPlayerOwner_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOni.BloodOrb.UpdateAttracted_Cosmetic
	 */
	struct ABloodOrb_UpdateAttracted_Cosmetic_Params
	{
	public:
		struct FVector                                             Destination;                                             // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ADBDPlayer*                                          absorber;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOni.BloodOrb.UpdateAbsorbed_Cosmetic
	 */
	struct ABloodOrb_UpdateAbsorbed_Cosmetic_Params
	{
	public:
		struct FVector                                             Destination;                                             // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ADBDPlayer*                                          absorber;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOni.BloodOrb.OnRep_State
	 */
	struct ABloodOrb_OnRep_State_Params
	{
	public:
		EBloodOrbState                                             oldState;                                                // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOni.BloodOrb.OnIsAttractedChangedCosmetic
	 */
	struct ABloodOrb_OnIsAttractedChangedCosmetic_Params
	{
	public:
		bool                                                       isAttracted;                                             // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOni.BloodOrb.OnDestroyedCosmetic
	 */
	struct ABloodOrb_OnDestroyedCosmetic_Params
	{	};

	/**
	 * Function TheOni.BloodOrb.OnAbsorbedCosmetic
	 */
	struct ABloodOrb_OnAbsorbedCosmetic_Params
	{	};

	/**
	 * Function TheOni.BloodOrb.GetDroppingPlayer
	 */
	struct ABloodOrb_GetDroppingPlayer_Params
	{
	public:
		class ADBDPlayer*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOni.BloodOrb.Authority_OnDropped
	 */
	struct ABloodOrb_Authority_OnDropped_Params
	{
	public:
		class ADBDPlayer*                                          droppedBy;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ImpulseFactor;                                           // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOni.BloodOrb.Authority_OnDropFinished
	 */
	struct ABloodOrb_Authority_OnDropFinished_Params
	{	};

	/**
	 * Function TheOni.BloodOrb.Authority_DestroyBloodOrb
	 */
	struct ABloodOrb_Authority_DestroyBloodOrb_Params
	{	};

	/**
	 * Function TheOni.BloodOrb.Authority_Despawn
	 */
	struct ABloodOrb_Authority_Despawn_Params
	{	};

	/**
	 * Function TheOni.BloodOrbAbsorberComponent.SetInAbsorbMode
	 */
	struct UBloodOrbAbsorberComponent_SetInAbsorbMode_Params
	{
	public:
		bool                                                       inAbsorptionMode;                                        // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOni.BloodOrbAbsorberComponent.IsInAbsorbMode
	 */
	struct UBloodOrbAbsorberComponent_IsInAbsorbMode_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOni.BloodOrbConfiguratorComponent.UpdateSurvivorBloodOrbVisibilityRange
	 */
	struct UBloodOrbConfiguratorComponent_UpdateSurvivorBloodOrbVisibilityRange_Params
	{
	public:
		class UBloodOrbVisibilityComponent*                        BloodOrbVisibilityComponent;                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ADBDPlayer*                                          killer;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOni.BloodOrbConfiguratorComponent.UpdateKillerBloodOrbVisiblityRanges
	 */
	struct UBloodOrbConfiguratorComponent_UpdateKillerBloodOrbVisiblityRanges_Params
	{
	public:
		class UBloodOrbVisibilityComponent*                        BloodOrbVisibilityComponent;                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ADBDPlayer*                                          killer;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOni.BloodOrbConfiguratorComponent.UpdateBloodOrbAttractSpeed
	 */
	struct UBloodOrbConfiguratorComponent_UpdateBloodOrbAttractSpeed_Params
	{
	public:
		class UBloodOrbAbsorberComponent*                          BloodOrbAbsorberComponent;                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ADBDPlayer*                                          killer;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOni.BloodOrbConfiguratorComponent.OnLevelReadyToPlay
	 */
	struct UBloodOrbConfiguratorComponent_OnLevelReadyToPlay_Params
	{	};

	/**
	 * Function TheOni.BloodOrbConfiguratorComponent.Authority_UpdateSurvivorBloodOrbDropperOnCrouchModifier
	 */
	struct UBloodOrbConfiguratorComponent_Authority_UpdateSurvivorBloodOrbDropperOnCrouchModifier_Params
	{
	public:
		class ADBDPlayer*                                          killer;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOni.BloodOrbDropperComponent.DBD_DropBloodOrbs
	 */
	struct UBloodOrbDropperComponent_DBD_DropBloodOrbs_Params
	{
	public:
		int32_t                                                    numOrbs;                                                 // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOni.BloodOrbDropperComponent.Authority_SetPaused
	 */
	struct UBloodOrbDropperComponent_Authority_SetPaused_Params
	{
	public:
		bool                                                       paused;                                                  // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOni.BloodOrbDropperComponent.Authority_OnOwningCamperDamageStateChanged
	 */
	struct UBloodOrbDropperComponent_Authority_OnOwningCamperDamageStateChanged_Params
	{
	public:
		ECamperDamageState                                         oldState;                                                // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECamperDamageState                                         NewState;                                                // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOni.BloodOrbDropperComponent.Authority_OnDropOrbsGameEvent
	 */
	struct UBloodOrbDropperComponent_Authority_OnDropOrbsGameEvent_Params
	{
	public:
		struct FGameplayTag                                        GameEvent;                                               // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameEventData                                      GameEventData;                                           // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FBloodOrbDropParams                                 dropParams;                                              // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOni.BloodOrbDropperComponent.Authority_OnCamperUnhooked
	 */
	struct UBloodOrbDropperComponent_Authority_OnCamperUnhooked_Params
	{
	public:
		struct FGameplayTag                                        GameEvent;                                               // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameEventData                                      GameEventData;                                           // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOni.BloodOrbDropperComponent.Authority_OnCamperHooked
	 */
	struct UBloodOrbDropperComponent_Authority_OnCamperHooked_Params
	{
	public:
		struct FGameplayTag                                        GameEvent;                                               // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameEventData                                      GameEventData;                                           // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOni.BloodOrbDropperComponent.Authority_OnCamperCrouched
	 */
	struct UBloodOrbDropperComponent_Authority_OnCamperCrouched_Params
	{
	public:
		struct FGameplayTag                                        GameEvent;                                               // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameEventData                                      GameEventData;                                           // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOni.BloodOrbOverlapComponent.OnRep_CurrentOverlappingOrbs
	 */
	struct UBloodOrbOverlapComponent_OnRep_CurrentOverlappingOrbs_Params
	{
	public:
		int32_t                                                    previousOverlappingOrbs;                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOni.BloodOrbOverlapComponent.Authority_OnDestroyedBloodOrb
	 */
	struct UBloodOrbOverlapComponent_Authority_OnDestroyedBloodOrb_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOni.BloodOrbOverlapComponent.Authority_OnBloodOrbVisibilityModeChanged
	 */
	struct UBloodOrbOverlapComponent_Authority_OnBloodOrbVisibilityModeChanged_Params
	{
	public:
		EBloodOrbVisibilityMode                                    visibilityMode;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOni.BloodOrbOverlapComponent.Authority_OnBloodOrbEndOverlap
	 */
	struct UBloodOrbOverlapComponent_Authority_OnBloodOrbEndOverlap_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOni.BloodOrbOverlapComponent.Authority_OnBloodOrbBeginOverlap
	 */
	struct UBloodOrbOverlapComponent_Authority_OnBloodOrbBeginOverlap_Params
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
	 * Function TheOni.BloodOrbOverlapRevealToKiller.GetRevealTimer
	 */
	struct UBloodOrbOverlapRevealToKiller_GetRevealTimer_Params
	{
	public:
		class UTimerObject*                                        ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOni.BloodOrbStateMonitorComponent.OnBloodOrbStateChanged
	 */
	struct UBloodOrbStateMonitorComponent_OnBloodOrbStateChanged_Params
	{
	public:
		EBloodOrbState                                             oldState;                                                // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EBloodOrbState                                             NewState;                                                // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ABloodOrb*                                           BloodOrb;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOni.BloodOrbStateMonitorComponent.OnBloodOrbSpawned
	 */
	struct UBloodOrbStateMonitorComponent_OnBloodOrbSpawned_Params
	{
	public:
		class ABloodOrb*                                           BloodOrb;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOni.BloodOrbStateMonitorComponent.OnBloodOrbDestroyed
	 */
	struct UBloodOrbStateMonitorComponent_OnBloodOrbDestroyed_Params
	{
	public:
		class ABloodOrb*                                           BloodOrb;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOni.BloodOrbUtilities.GetAllBloodOrbs
	 */
	struct UBloodOrbUtilities_GetAllBloodOrbs_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class ABloodOrb*>                                   ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOni.BloodOrbVisibilityComponent.SetVisibilityRange
	 */
	struct UBloodOrbVisibilityComponent_SetVisibilityRange_Params
	{
	public:
		float                                                      visibilityRange;                                         // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOni.BloodOrbVisibilityComponent.SetVisibilityMode
	 */
	struct UBloodOrbVisibilityComponent_SetVisibilityMode_Params
	{
	public:
		EBloodOrbVisibilityMode                                    visibilityMode;                                          // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOni.BloodOrbVisibilityComponent.SetShowAttractedBloodOrbsAuras
	 */
	struct UBloodOrbVisibilityComponent_SetShowAttractedBloodOrbsAuras_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOni.BloodOrbVisibilityComponent.SetAuraVisibilityRange
	 */
	struct UBloodOrbVisibilityComponent_SetAuraVisibilityRange_Params
	{
	public:
		float                                                      auraVisibilityRange;                                     // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOni.BloodOrbVisibilityComponent.OnBloodOrbSpawned
	 */
	struct UBloodOrbVisibilityComponent_OnBloodOrbSpawned_Params
	{
	public:
		class ABloodOrb*                                           BloodOrb;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOni.DemonModeComponent.ShouldLoseDemonModeOnStun
	 */
	struct UDemonModeComponent_ShouldLoseDemonModeOnStun_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOni.DemonModeComponent.OnPowerChargeFull
	 */
	struct UDemonModeComponent_OnPowerChargeFull_Params
	{	};

	/**
	 * Function TheOni.DemonModeComponent.OnPowerChargeEmpty
	 */
	struct UDemonModeComponent_OnPowerChargeEmpty_Params
	{	};

	/**
	 * Function TheOni.DemonModeComponent.OnIsPowerChanged
	 */
	struct UDemonModeComponent_OnIsPowerChanged_Params
	{
	public:
		bool                                                       IsInPower;                                               // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOni.DemonModeComponent.Multicast_DemonModeInterruptedOnStartup
	 */
	struct UDemonModeComponent_Multicast_DemonModeInterruptedOnStartup_Params
	{	};

	/**
	 * Function TheOni.DemonModeComponent.Multicast_DemonModeInterruptedOnEnding
	 */
	struct UDemonModeComponent_Multicast_DemonModeInterruptedOnEnding_Params
	{	};

	/**
	 * Function TheOni.DemonModeComponent.IsInDemonMode
	 */
	struct UDemonModeComponent_IsInDemonMode_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOni.DemonModeComponent.GetDemonModeState
	 */
	struct UDemonModeComponent_GetDemonModeState_Params
	{
	public:
		EDemonModeState                                            ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOni.DemonModeComponent.GetCurrentCharge
	 */
	struct UDemonModeComponent_GetCurrentCharge_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOni.DemonModeComponent.GetChargePercent
	 */
	struct UDemonModeComponent_GetChargePercent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOni.DemonModeComponent.DBD_DemonModeForever
	 */
	struct UDemonModeComponent_DBD_DemonModeForever_Params
	{
	public:
		bool                                                       forever;                                                 // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOni.DemonModeComponent.CanStartDemonMode
	 */
	struct UDemonModeComponent_CanStartDemonMode_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOni.DemonModeComponent.Authority_SetDemonModeCooldownInteraction
	 */
	struct UDemonModeComponent_Authority_SetDemonModeCooldownInteraction_Params
	{
	public:
		class UInteractionDefinition*                              Interaction;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOni.DemonModeComponent.Authority_OnLevelReadyToPlay
	 */
	struct UDemonModeComponent_Authority_OnLevelReadyToPlay_Params
	{	};

	/**
	 * Function TheOni.DemonModeComponent.Authority_OnChargeChanged
	 */
	struct UDemonModeComponent_Authority_OnChargeChanged_Params
	{
	public:
		float                                                      currentChargePercent;                                    // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOni.DemonModeComponent.Authority_InterruptedMontage
	 */
	struct UDemonModeComponent_Authority_InterruptedMontage_Params
	{
	public:
		struct FAnimationMontageDescriptor                         Montage;                                                 // 0x0000(0x0020)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		bool                                                       interrupted;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOni.DemonModeComponent.Authority_AddCharge
	 */
	struct UDemonModeComponent_Authority_AddCharge_Params
	{
	public:
		float                                                      ChargeAmount;                                            // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOni.DemonModeCooldownInteraction.SetPlayerOwner
	 */
	struct UDemonModeCooldownInteraction_SetPlayerOwner_Params
	{
	public:
		class ADBDPlayer*                                          Owner;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOni.DemonModeCooldownInteraction.OnLevelReadyToPlay
	 */
	struct UDemonModeCooldownInteraction_OnLevelReadyToPlay_Params
	{	};

	/**
	 * Function TheOni.DemonModeMenuComponent.SetInMenuDemonMode
	 */
	struct UDemonModeMenuComponent_SetInMenuDemonMode_Params
	{
	public:
		bool                                                       inMenuDemonMode;                                         // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOni.OniCustomizationItemAnimInstance.SetIsInDemonMode
	 */
	struct UOniCustomizationItemAnimInstance_SetIsInDemonMode_Params
	{
	public:
		bool                                                       IsInDemonMode;                                           // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOni.OniDashInteraction.SetPlayerOwner
	 */
	struct UOniDashInteraction_SetPlayerOwner_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOni.OniDashInteraction.OnLevelReadyToPlay
	 */
	struct UOniDashInteraction_OnLevelReadyToPlay_Params
	{	};

	/**
	 * Function TheOni.OniDashInteraction.OnDashEnd
	 */
	struct UOniDashInteraction_OnDashEnd_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOni.OniDashInteraction.OnDashBegin
	 */
	struct UOniDashInteraction_OnDashBegin_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOni.OniDashInteraction.OnChargeEnd
	 */
	struct UOniDashInteraction_OnChargeEnd_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       chargeCompleted;                                         // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOni.OniDashInteraction.OnChargeBegin
	 */
	struct UOniDashInteraction_OnChargeBegin_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOni.RenjirosBloodyGlove.Authority_OnBloodOrbOverlapBegin
	 */
	struct URenjirosBloodyGlove_Authority_OnBloodOrbOverlapBegin_Params
	{
	public:
		class AActor*                                              overlappingActor;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ABloodOrb*                                           BloodOrb;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOni.StartDemonModeInteraction.SetPlayerOwner
	 */
	struct UStartDemonModeInteraction_SetPlayerOwner_Params
	{
	public:
		class ADBDPlayer*                                          Owner;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheOni.StartDemonModeInteraction.OnLevelReadyToPlay
	 */
	struct UStartDemonModeInteraction_OnLevelReadyToPlay_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
