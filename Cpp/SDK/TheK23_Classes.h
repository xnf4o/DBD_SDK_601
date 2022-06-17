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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class TheK23.ActivateSuperMode
	 * Size -> 0x0070 (FullSize[0x0630] - InheritedSize[0x05C0])
	 */
	class UActivateSuperMode : public UInteractionDefinition
	{
	public:
		struct FAnimationMontageDescriptor                         _activationMontage;                                      // 0x05C0(0x0020) Edit, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _activationDuration;                                     // 0x05E0(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _confirmationChargeDuration;                             // 0x0608(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK23.FastTrack
	 * Size -> 0x0018 (FullSize[0x03E8] - InheritedSize[0x03D0])
	 */
	class UFastTrack : public UPerk
	{
	public:
		int32_t                                                    _tokensToAdd[0x3];                                       // 0x03D0(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9QA4[0xC];                                   // 0x03DC(0x000C) MISSED OFFSET (PADDING)

	public:
		void Cosmetic_OnTokenCountDecreased();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK23.FlurryComboScoreComponent
	 * Size -> 0x01B0 (FullSize[0x0268] - InheritedSize[0x00B8])
	 */
	class UFlurryComboScoreComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_YIAH[0x1C];                                  // 0x00B8(0x001C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _comboScore;                                             // 0x00D4(0x0004) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _timeForCombo;                                           // 0x00D8(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _baseKnifeComboScore;                                    // 0x0100(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _maximumKnifeMultiplier;                                 // 0x0128(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _fillLacerationComboScore;                               // 0x0150(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _longRangeThreshold;                                     // 0x0178(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _closeRangeScoreMultiplier;                              // 0x01A0(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _longRangeScoreMultiplier;                               // 0x01C8(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<float>                                              _thresholds;                                             // 0x01F0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate
		TArray<float>                                              _thresholdsScoreForAudio;                                // 0x0200(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate
		TArray<struct FGameplayTag>                                _comboScoreEvents;                                       // 0x0210(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9HHV[0x48];                                  // 0x0220(0x0048) MISSED OFFSET (PADDING)

	public:
		void OnRep_ComboScore();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK23.FlurryOfKnives
	 * Size -> 0x04D0 (FullSize[0x0BB0] - InheritedSize[0x06E0])
	 */
	class UFlurryOfKnives : public UChargeableInteractionDefinition
	{
	public:
		unsigned char                                              UnknownData_6RLB[0x48];                                  // 0x06E0(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    _replicatedNumOfStacksReduction;                         // 0x0728(0x0004) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _isSuperModeThrow;                                       // 0x072C(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_3HBY[0x4B];                                  // 0x072D(0x004B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStatusEffect*                                       _selfSlowEffect;                                         // 0x0778(0x0008) ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _flurryOfKnivesEnterDuration;                            // 0x0780(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _flurryOfKnivesExitDuration;                             // 0x07A8(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _chargeTime;                                             // 0x07D0(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _baseTimeBetweenThrows;                                  // 0x07F8(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         _throwRateModifierByKnivesThrown;                        // 0x0878(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _superModeThrowRateModifier;                             // 0x0880(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _knivesLaunchSpeed;                                      // 0x08A8(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _convergencePointDistance;                               // 0x08D0(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         _coneOfFireAngleCurve;                                   // 0x08F8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _consecutiveKnivesStacksDecayTime;                       // 0x0900(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _maxConsecutiveKnivesStacks;                             // 0x0928(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         _movementSpeedByKnivesThrown;                            // 0x0950(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _superModeBaseMovementSpeed;                             // 0x0958(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _baseWalkSpeed;                                          // 0x0980(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         _recoilIntensityByKnivesThrown;                          // 0x09A8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _recoilDuration;                                         // 0x09B0(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _recoilAngle;                                            // 0x09D8(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _maximumRecoilAngleVariation;                            // 0x0A00(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _rotationSpeedAdjustmentTime;                            // 0x0A28(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _aimingStanceRotationYawScaleAdjustment;                 // 0x0A50(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _aimingStanceRotationPitchScaleAdjustment;               // 0x0A78(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _throwingRotationYawScaleAdjustment;                     // 0x0AA0(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _throwingRotationPitchScaleAdjustment;                   // 0x0AC8(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _aimingStanceGamepadRotationYawScaleAdjustment;          // 0x0AF0(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _aimingStanceGamepadRotationPitchScaleAdjustment;        // 0x0B18(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _throwingGamepadRotationYawScaleAdjustment;              // 0x0B40(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _throwingGamepadRotationPitchScaleAdjustment;            // 0x0B68(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         _aimingGamepadPitchCurve;                                // 0x0B90(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         _aimingGamepadYawCurve;                                  // 0x0B98(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         _throwingGamepadPitchCurve;                              // 0x0BA0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         _throwingGamepadYawCurve;                                // 0x0BA8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void Server_StartThrowing();
		void Server_DecreaseConsecutiveKnivesStacks();
		void OnRep_NumOfStacksReduction();
		void Multicast_StartThrowing();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK23.HexCrowdControl
	 * Size -> 0x0010 (FullSize[0x0450] - InheritedSize[0x0440])
	 */
	class UHexCrowdControl : public UHexPerk
	{
	public:
		float                                                      _windowVaultBlockDuration[0x3];                          // 0x0440(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2H94[0x4];                                   // 0x044C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK23.K23PowerProgressPresentationComponent
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	class UK23PowerProgressPresentationComponent : public UPresentationItemProgressComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK23.KnifeProjectile
	 * Size -> 0x00F0 (FullSize[0x0428] - InheritedSize[0x0338])
	 */
	class AKnifeProjectile : public AKillerProjectile
	{
	public:
		class UPrimitiveComponent*                                 _worldCollider;                                          // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPrimitiveComponent*                                 _camperDetector;                                         // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_F5B5[0x10];                                  // 0x0348(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              _playersAffectedThisThrow[0x50];                         // 0x0348(0x0050) UNKNOWN PROPERTY: SetProperty
		class UPoolableProjectileComponent*                        _poolableActorComponent;                                 // 0x03A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _knifeMaxRange;                                          // 0x03B0(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _addonExplosionRadius;                                   // 0x03D8(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _numberOfAddonBounces;                                   // 0x0400(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		bool WasLaunchedDuringSuperMode();
		bool ShouldPlayRicochetSound();
		void SetKnifeAcquired(bool acquired);
		void OnWorldColliderHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void OnProjectileBounce(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity);
		bool KnifeCanPierceCampers();
		float GetAddonExplosionRadius();
		void BP_SetKnifeActive(bool Active);
		void BP_OnLaunchCosmetic(const struct FLaunchInfo& LaunchInfo, bool hasImpactOnLaunch);
		void BP_CosmeticOnAddonExplosion(const struct FVector& Location, const struct FVector& Normal);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK23.KnifeRack
	 * Size -> 0x0000 (FullSize[0x0248] - InheritedSize[0x0248])
	 */
	class AKnifeRack : public ABaseLockerItem
	{
	public:
		void OnReloadMontageStarted(float actionSpeedMultiplier, class ADBDPlayer* Player);
		void OnReloadEnded(class ADBDPlayer* Player);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK23.KnivesLauncher
	 * Size -> 0x0108 (FullSize[0x0288] - InheritedSize[0x0180])
	 */
	class UKnivesLauncher : public UKillerProjectileLauncher
	{
	public:
		struct FDBDTunableRowHandle                                _knifeSpawnOffset;                                       // 0x0180(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _knifeSpawnForwardOffset;                                // 0x01A8(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _launchSpeed;                                            // 0x01D0(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _maxAmmoTunable;                                         // 0x01F8(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_3AS0[0x8];                                   // 0x0278(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       _isInSuperModeThrow;                                     // 0x0280(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_D3ZJ[0x7];                                   // 0x0281(0x0007) MISSED OFFSET (PADDING)

	public:
		class AThrowingKnives* GetPower();
		int32_t GetLocallyPredictedAmmo();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK23.KnivesProvider
	 * Size -> 0x0008 (FullSize[0x00F8] - InheritedSize[0x00F0])
	 */
	class UKnivesProvider : public UAuthoritativeActorPoolComponent
	{
	public:
		unsigned char                                              UnknownData_SSET[0x8];                                   // 0x00F0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK23.LacerationComponent
	 * Size -> 0x03E0 (FullSize[0x0498] - InheritedSize[0x00B8])
	 */
	class ULacerationComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_NYBF[0x38];                                  // 0x00B8(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _laceration;                                             // 0x00F0(0x0004) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CAVL[0xC];                                   // 0x00F4(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStatusEffect*                                       _onHitSpeedBoost;                                        // 0x0100(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_X5X8[0x28];                                  // 0x0108(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTunableStat                                        _maxLaceration;                                          // 0x0130(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _lacerationExplosionDamage;                              // 0x01B0(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _lacerationRegressionPerSecond;                          // 0x01D8(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _lacerationRegressionPerSecondWhileRunning;              // 0x0258(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _speedBoostIntensity;                                    // 0x02D8(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _speedBoostDuration;                                     // 0x0300(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _stopTickingRegressionWhileInjured;                      // 0x0328(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _stopTickingRegressionWhileInChase;                      // 0x0350(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _stopTickingRegressionWithinTerrorRadius;                // 0x0378(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _timeBeforeLacerationDecayStarts;                        // 0x03A0(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _regressionBufferTimerAlwaysTicks;                       // 0x0420(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _lacerationToRemoveOnBasicAttack;                        // 0x0448(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _thresholdForGraceTimerScoreEvent;                       // 0x0470(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnRepLaceration(float oldLaceration);
		void Multicast_KnifeHit(float newLaceration, bool causedDamage, bool CausedKO, const struct FVector& impactLocation, const struct FVector& ImpactNormal);
		void Cosmetic_OnLocallyObservedChanged(bool IsLocallyObserved, float lacerationPercent, bool isDangerous);
		void Cosmetic_OnLacerationChanged(float lacerationPercent, bool isDangerous);
		void Cosmetic_OnKnifeHit(float lacerationPercent, bool isDangerous, bool causedDamage, bool CausedKO, const struct FVector& ImpactNormal);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK23.BaseLacerationLevelCondition
	 * Size -> 0x0000 (FullSize[0x00E8] - InheritedSize[0x00E8])
	 */
	class UBaseLacerationLevelCondition : public UEventDrivenModifierCondition
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK23.LacerationLevelCondition
	 * Size -> 0x0008 (FullSize[0x00F0] - InheritedSize[0x00E8])
	 */
	class ULacerationLevelCondition : public UBaseLacerationLevelCondition
	{
	public:
		float                                                      _lacerationLevelRequired;                                // 0x00E8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TNQ2[0x4];                                   // 0x00EC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK23.LacerationAlmostFullCondition
	 * Size -> 0x0008 (FullSize[0x00F0] - InheritedSize[0x00E8])
	 */
	class ULacerationAlmostFullCondition : public UBaseLacerationLevelCondition
	{
	public:
		float                                                      _missingLacerationThreshold;                             // 0x00E8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EMBT[0x4];                                   // 0x00EC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK23.NoWayOut
	 * Size -> 0x0030 (FullSize[0x0400] - InheritedSize[0x03D0])
	 */
	class UNoWayOut : public UPerk
	{
	public:
		float                                                      _exitGatePanelBlockBaseDuration[0x3];                    // 0x03D0(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _exitGatePanelBlockDurationPerToken[0x3];                // 0x03DC(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class ACamperPlayer*>                               _hookedSurvivors;                                        // 0x03E8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_21OP[0x8];                                   // 0x03F8(0x0008) MISSED OFFSET (PADDING)

	public:
		void Multicast_TriggerLoudNoise(class ADBDPlayer* Instigator, class AEscapeDoor* EscapeDoor);
		static UClass* StaticClass();
	};

	/**
	 * Class TheK23.ReloadKnives
	 * Size -> 0x0000 (FullSize[0x05F0] - InheritedSize[0x05F0])
	 */
	class UReloadKnives : public UBaseLockerInteraction
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK23.SelfPreservation
	 * Size -> 0x0018 (FullSize[0x03E8] - InheritedSize[0x03D0])
	 */
	class USelfPreservation : public UPerk
	{
	public:
		float                                                      _hitDistanceToTriggerPerkEffect[0x3];                    // 0x03D0(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _selfPreservationEffectDuration[0x3];                    // 0x03DC(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK23.SmashHit
	 * Size -> 0x0018 (FullSize[0x03E8] - InheritedSize[0x03D0])
	 */
	class USmashHit : public UPerk
	{
	public:
		float                                                      _exhaustedTime[0x3];                                     // 0x03D0(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _hasteTime[0x3];                                         // 0x03DC(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK23.Starstruck
	 * Size -> 0x0120 (FullSize[0x04F0] - InheritedSize[0x03D0])
	 */
	class UStarstruck : public UPerk
	{
	public:
		float                                                      _exposedEffectDuration[0x3];                             // 0x03D0(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _perkCooldownDuration[0x3];                              // 0x03DC(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TMap<TWeakObjectPtr<class ACamperPlayer>, TWeakObjectPtr<class UStatusEffect>> _camperExposedEffects;                                   // 0x03E8(0x0050) ExportObject, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BPR8[0xB8];                                  // 0x0438(0x00B8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK23.SuperModeDeactivation
	 * Size -> 0x0020 (FullSize[0x05E0] - InheritedSize[0x05C0])
	 */
	class USuperModeDeactivation : public UInteractionDefinition
	{
	public:
		struct FDBDTunableRowHandle                                _deactivationDuration;                                   // 0x05B8(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK23.ThrowingKnives
	 * Size -> 0x00A8 (FullSize[0x0558] - InheritedSize[0x04B0])
	 */
	class AThrowingKnives : public ACollectable
	{
	public:
		unsigned char                                              UnknownData_QFVT[0x40];                                  // 0x04B0(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFlurryComboScoreComponent*                          _flurryScoreComponent;                                   // 0x04F0(0x0008) Edit, ExportObject, Net, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTricksterSuperModeComponent*                        _superModeComponent;                                     // 0x04F8(0x0008) Edit, ExportObject, Net, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UK23PowerProgressPresentationComponent*              _superModeChargePresentationComponent;                   // 0x0500(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPowerChargeComponent*                               _superModeChargeComponent;                               // 0x0508(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UKnivesProvider*                                     _knivesProvider;                                         // 0x0510(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UKnivesLauncher*                                     _knivesLauncher;                                         // 0x0518(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _lacerationComponentClass;                               // 0x0520(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _reloadInteractionClass;                                 // 0x0528(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _minimumTimeBetweenBroadcast;                            // 0x0530(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ZQAZ[0x24];                                  // 0x0534(0x0024) MISSED OFFSET (PADDING)

	public:
		void OnItemUsedStateChanged(bool Pressed);
		void Multicast_OnUsePowerWhenOutOfAmmo();
		void Multicast_OnUsePowerWhenInCooldown();
		class ASlasherPlayer* GetSlasher();
		class UKnivesLauncher* GetLauncher();
		void Cosmetic_OnUsePowerWhenOutOfAmmo();
		void Cosmetic_OnUsePowerWhenInCooldown();
		void Cosmetic_OnLaunch();
		void Cosmetic_OnComboScoreChanged(float scoreNormalizedForAudio);
		void Cosmetic_OnComboFinished(bool isSRankCombo);
		void Authority_SpawnReloadInteractionOnLockers();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK23.ThrowingKnivesHitSubAnimInstance
	 * Size -> 0x0020 (FullSize[0x0560] - InheritedSize[0x0540])
	 */
	class UThrowingKnivesHitSubAnimInstance : public UBaseSurvivorAnimInstance
	{
	public:
		bool                                                       _hitByKnifeTrigger;                                      // 0x0540(0x0001) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _knifeHitCausedKOTrigger;                                // 0x0541(0x0001) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _knifeHitCausedDamageTrigger;                            // 0x0542(0x0001) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _useAlternateHitReactionState;                           // 0x0543(0x0001) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _knifeHitAngle;                                          // 0x0544(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _knifeHitStateHitAngle;                                  // 0x0548(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _alternateKnifeHitStateHitAngle;                         // 0x054C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_3Z06[0x10];                                  // 0x0550(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK23.TricksterAnimInstance
	 * Size -> 0x0070 (FullSize[0x0670] - InheritedSize[0x0600])
	 */
	class UTricksterAnimInstance : public UKillerAnimInstance
	{
	public:
		float                                                      _isThrowInputPressed;                                    // 0x05FC(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isThrowingWithLeftArm;                                  // 0x0600(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isThrowingWithRightArm;                                 // 0x0601(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_D9U5[0x2];                                   // 0x0602(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _throwPlayRate;                                          // 0x0604(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _baseThrowDuration;                                      // 0x0608(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    _consecutiveKnivesThrownStacks;                          // 0x060C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _timeSinceLastKnifeLaunched;                             // 0x0610(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    _currentAmmoCount;                                       // 0x0614(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isInSuperMode;                                          // 0x0618(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isInActivation;                                         // 0x0619(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_AX0K[0x2];                                   // 0x061A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _activationDuration;                                     // 0x061C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isInDeactivation;                                       // 0x0620(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_74TZ[0x3];                                   // 0x0621(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _deactivationDuration;                                   // 0x0624(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_T2SE[0x38];                                  // 0x0628(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AThrowingKnives*                                     _throwingKnives;                                         // 0x0660(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FG4X[0x8];                                   // 0x0668(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK23.TricksterChainedThrowsAddon
	 * Size -> 0x0018 (FullSize[0x02D8] - InheritedSize[0x02C0])
	 */
	class UTricksterChainedThrowsAddon : public UItemAddon
	{
	public:
		unsigned char                                              UnknownData_LC2M[0x4];                                   // 0x02C0(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       _resetOnEnteringFlurryInteraction;                       // 0x02C4(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0TBK[0x3];                                   // 0x02C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _lacerationPenaltyRangeThreshold;                        // 0x02C8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _closeRangeLacerationPenalty;                            // 0x02CC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _maximumMultiplier;                                      // 0x02D0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_30S3[0x4];                                   // 0x02D4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheK23.TricksterCharacterVFXInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UTricksterCharacterVFXInterface : public UInterface
	{
	public:
		void ShowWeapon();
		void SetSuperModeActive(bool Active);
		void SetKnivesVisibility(bool leftKnife, bool rightKnife);
		void SetIsSuperModeReady(bool isSuperModeReady);
		void SetIsInCooldown(bool isInCooldown);
		void HideWeapon();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK23.TricksterSuperModeComponent
	 * Size -> 0x01D0 (FullSize[0x0288] - InheritedSize[0x00B8])
	 */
	class UTricksterSuperModeComponent : public UActorComponent
	{
	public:
		bool                                                       _isInSuperMode;                                          // 0x00B8(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _isSuperModeReady;                                       // 0x00B9(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _isInCooldown;                                           // 0x00BA(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GJKX[0xD];                                   // 0x00BB(0x000D) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _chargesToAddOnKnifeHit;                                 // 0x00C8(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _superModeMaxCharge;                                     // 0x00F0(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _superModeReadyDepletionPerSecond;                       // 0x0118(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _superModeActiveDuration;                                // 0x0140(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LNPC[0x60];                                  // 0x01C0(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _superModeCooldown;                                      // 0x0220(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _shouldDisableFlurryDuringCooldown;                      // 0x0248(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_N527[0x18];                                  // 0x0270(0x0018) MISSED OFFSET (PADDING)

	public:
		void OnRepIsSuperModeReady();
		void OnRepIsInSuperMode();
		void OnRepIsInCooldown();
		static UClass* StaticClass();
	};

	/**
	 * Class TheK23.TriggerTimerOnLacerationAlmostFullEffect
	 * Size -> 0x0010 (FullSize[0x0360] - InheritedSize[0x0350])
	 */
	class UTriggerTimerOnLacerationAlmostFullEffect : public UStatusEffect
	{
	public:
		class ULacerationComponent*                                _lacerationComponent;                                    // 0x0350(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _duration;                                               // 0x0358(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_131D[0x4];                                   // 0x035C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
