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
	 * Function TheClown.AISkill_InteractionTarget_ThrowAntidote.OnPathUpdated
	 */
	struct UAISkill_InteractionTarget_ThrowAntidote_OnPathUpdated_Params
	{	};

	/**
	 * Function TheClown.BaseGasCloudProjectile.SetIsDissipating
	 */
	struct ABaseGasCloudProjectile_SetIsDissipating_Params
	{
	public:
		bool                                                       IsDissipating;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheClown.BaseGasCloudProjectile.SetIgnoredActors
	 */
	struct ABaseGasCloudProjectile_SetIgnoredActors_Params
	{	};

	/**
	 * Function TheClown.BaseGasCloudProjectile.SetGasAudioActive
	 */
	struct ABaseGasCloudProjectile_SetGasAudioActive_Params
	{
	public:
		bool                                                       activated;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheClown.BaseGasCloudProjectile.OnOverlapEnd
	 */
	struct ABaseGasCloudProjectile_OnOverlapEnd_Params
	{
	public:
		class UPrimitiveComponent*                                 hitComp;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComponent;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheClown.BaseGasCloudProjectile.OnOverlapBegin
	 */
	struct ABaseGasCloudProjectile_OnOverlapBegin_Params
	{
	public:
		class UPrimitiveComponent*                                 hitComp;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComponent;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromSweep;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FHitResult                                          SweepResult;                                             // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheClown.BaseGasCloudProjectile.OnDelayedActivationStart
	 */
	struct ABaseGasCloudProjectile_OnDelayedActivationStart_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheClown.BaseGasCloudProjectile.OnAcquiredChanged
	 */
	struct ABaseGasCloudProjectile_OnAcquiredChanged_Params
	{
	public:
		bool                                                       acquired;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheClown.BaseGasCloudProjectile.Multicast_DissipateGasCloud
	 */
	struct ABaseGasCloudProjectile_Multicast_DissipateGasCloud_Params
	{	};

	/**
	 * Function TheClown.BaseGasCloudProjectile.IsSurvivorDetectionEnabled
	 */
	struct ABaseGasCloudProjectile_IsSurvivorDetectionEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheClown.BaseGasCloudProjectile.IsDissipating
	 */
	struct ABaseGasCloudProjectile_IsDissipating_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheClown.BaseGasCloudProjectile.GetGasType
	 */
	struct ABaseGasCloudProjectile_GetGasType_Params
	{
	public:
		EBombType                                                  ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheClown.BaseGasCloudProjectile.DissipateGasCloud
	 */
	struct ABaseGasCloudProjectile_DissipateGasCloud_Params
	{	};

	/**
	 * Function TheClown.BaseGasCloudProjectile.Authority_SetCumulativeLifetime
	 */
	struct ABaseGasCloudProjectile_Authority_SetCumulativeLifetime_Params
	{
	public:
		float                                                      value;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheClown.BaseGasCloudProjectile.Authority_GetCumulativeLifetime
	 */
	struct ABaseGasCloudProjectile_Authority_GetCumulativeLifetime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheClown.BaseGasCloudProjectile.ActivateCosmetic_BP
	 */
	struct ABaseGasCloudProjectile_ActivateCosmetic_BP_Params
	{	};

	/**
	 * Function TheClown.BoilOverPerk.Authority_OnWiggleEnd
	 */
	struct UBoilOverPerk_Authority_OnWiggleEnd_Params
	{	};

	/**
	 * Function TheClown.BoilOverPerk.Authority_OnPlayerPickedUpEnd
	 */
	struct UBoilOverPerk_Authority_OnPlayerPickedUpEnd_Params
	{
	public:
		class ADBDPlayer*                                          picker;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheClown.BombLauncher.SetProjectileSpeedCurve
	 */
	struct UBombLauncher_SetProjectileSpeedCurve_Params
	{
	public:
		class UCurveFloat*                                         newProjectileSpeedCurve;                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheClown.BombLauncher.SetProjectilePitchCurve
	 */
	struct UBombLauncher_SetProjectilePitchCurve_Params
	{
	public:
		class UCurveFloat*                                         newProjectilePitchCurve;                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheClown.BombLauncher.SetPercentThrowStrength
	 */
	struct UBombLauncher_SetPercentThrowStrength_Params
	{
	public:
		float                                                      throwStrength;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheClown.BombLauncher.Server_SwitchBombType
	 */
	struct UBombLauncher_Server_SwitchBombType_Params
	{	};

	/**
	 * Function TheClown.BombLauncher.LocalLaunch
	 */
	struct UBombLauncher_LocalLaunch_Params
	{
	public:
		float                                                      percentThrowStrength;                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheClown.BombLauncher.Local_SwitchBombType
	 */
	struct UBombLauncher_Local_SwitchBombType_Params
	{	};

	/**
	 * Function TheClown.BombLauncher.IsBombFullyCharged
	 */
	struct UBombLauncher_IsBombFullyCharged_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheClown.BombLauncher.GetPercentThrowStrenght
	 */
	struct UBombLauncher_GetPercentThrowStrenght_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheClown.BombLauncher.GetCurrentBombType
	 */
	struct UBombLauncher_GetCurrentBombType_Params
	{
	public:
		EBombType                                                  ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheClown.GassedStatusEffect.UpdateAntidoteEffectVFX
	 */
	struct UGassedStatusEffect_UpdateAntidoteEffectVFX_Params
	{
	public:
		float                                                      durationRemaining;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheClown.GassedStatusEffect.SetRemainingDuration
	 */
	struct UGassedStatusEffect_SetRemainingDuration_Params
	{
	public:
		float                                                      value;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheClown.GassedStatusEffect.SetRemainingAntidoteDuration
	 */
	struct UGassedStatusEffect_SetRemainingAntidoteDuration_Params
	{
	public:
		float                                                      value;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheClown.GassedStatusEffect.OnToxinEffectEnd
	 */
	struct UGassedStatusEffect_OnToxinEffectEnd_Params
	{
	public:
		float                                                      durationSkipped;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheClown.GassedStatusEffect.OnToxinEffectBegin
	 */
	struct UGassedStatusEffect_OnToxinEffectBegin_Params
	{
	public:
		float                                                      effectDuration;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheClown.GassedStatusEffect.OnToxinCured
	 */
	struct UGassedStatusEffect_OnToxinCured_Params
	{	};

	/**
	 * Function TheClown.GassedStatusEffect.OnRep_TotalTimesEnteringToxicClouds
	 */
	struct UGassedStatusEffect_OnRep_TotalTimesEnteringToxicClouds_Params
	{	};

	/**
	 * Function TheClown.GassedStatusEffect.OnRep_IsInAntidoteCloud
	 */
	struct UGassedStatusEffect_OnRep_IsInAntidoteCloud_Params
	{	};

	/**
	 * Function TheClown.GassedStatusEffect.OnDirectBottleHit
	 */
	struct UGassedStatusEffect_OnDirectBottleHit_Params
	{
	public:
		EBombType                                                  bottleType;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheClown.GassedStatusEffect.OnAntidoteEffectEnd
	 */
	struct UGassedStatusEffect_OnAntidoteEffectEnd_Params
	{
	public:
		float                                                      durationSkipped;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheClown.GassedStatusEffect.OnAntidoteEffectBegin
	 */
	struct UGassedStatusEffect_OnAntidoteEffectBegin_Params
	{
	public:
		float                                                      effectDuration;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheClown.GassedStatusEffect.IsInCloud
	 */
	struct UGassedStatusEffect_IsInCloud_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheClown.GassedStatusEffect.IsInAntidoteCloud
	 */
	struct UGassedStatusEffect_IsInAntidoteCloud_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheClown.GassedStatusEffect.GetRemainingDuration
	 */
	struct UGassedStatusEffect_GetRemainingDuration_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheClown.GassedStatusEffect.GetRemainingAntidoteDuration
	 */
	struct UGassedStatusEffect_GetRemainingAntidoteDuration_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheClown.GassedStatusEffect.GetCloudEffectDuration
	 */
	struct UGassedStatusEffect_GetCloudEffectDuration_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheClown.GassedStatusEffect.GetAntidoteCloudEffectDuration
	 */
	struct UGassedStatusEffect_GetAntidoteCloudEffectDuration_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheClown.GassedStatusEffect.Authority_SetIsInCloud
	 */
	struct UGassedStatusEffect_Authority_SetIsInCloud_Params
	{
	public:
		bool                                                       value;                                                   // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheClown.GassedStatusEffect.Authority_SetIsInAntidoteCloud
	 */
	struct UGassedStatusEffect_Authority_SetIsInAntidoteCloud_Params
	{
	public:
		bool                                                       value;                                                   // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheClown.GassedStatusEffect.Authority_RemoveOverlappingCloud
	 */
	struct UGassedStatusEffect_Authority_RemoveOverlappingCloud_Params
	{
	public:
		class ABaseGasCloudProjectile*                             cloud;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheClown.GassedStatusEffect.Authority_AddOverlappingCloud
	 */
	struct UGassedStatusEffect_Authority_AddOverlappingCloud_Params
	{
	public:
		class ABaseGasCloudProjectile*                             cloud;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheClown.TheClownUtilities.IsGassed
	 */
	struct UTheClownUtilities_IsGassed_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheClown.TheClownUtilities.IsAffectedByAntidote
	 */
	struct UTheClownUtilities_IsAffectedByAntidote_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheClown.TheClownUtilities.GetGassedStatusEffect
	 */
	struct UTheClownUtilities_GetGassedStatusEffect_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGassedStatusEffect*                                 ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheClown.TheClownUtilities.GetActiveGasCloudTrackerComponent
	 */
	struct UTheClownUtilities_GetActiveGasCloudTrackerComponent_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UActiveGasCloudTrackerComponent*                     ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheClown.TheClownUtilities.CanBeGassed
	 */
	struct UTheClownUtilities_CanBeGassed_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
