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
	 * Class TheExecutioner.ActivateTormentModeInteraction
	 * Size -> 0x0020 (FullSize[0x0700] - InheritedSize[0x06E0])
	 */
	class UActivateTormentModeInteraction : public UChargeableInteractionDefinition
	{
	public:
		unsigned char                                              UnknownData_INPU[0x20];                                  // 0x06E0(0x0020) MISSED OFFSET (PADDING)

	public:
		void SetTormentMode(class ATormentMode* tormentModeComponent);
		static UClass* StaticClass();
	};

	/**
	 * Class TheExecutioner.Addon_TormentMode_17
	 * Size -> 0x0008 (FullSize[0x02D8] - InheritedSize[0x02D0])
	 */
	class UAddon_TormentMode_17 : public USpawnEffectsOnAllSurvivorsBaseAddon
	{
	public:
		float                                                      _blindnessDuration;                                      // 0x02D0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_COMM[0x4];                                   // 0x02D4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheExecutioner.Addon_TormentMode_18
	 * Size -> 0x0008 (FullSize[0x02D8] - InheritedSize[0x02D0])
	 */
	class UAddon_TormentMode_18 : public USpawnEffectsOnAllSurvivorsBaseAddon
	{
	public:
		float                                                      _obliviousDuration;                                      // 0x02D0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0A0O[0x4];                                   // 0x02D4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheExecutioner.Addon_TormentMode_19
	 * Size -> 0x0000 (FullSize[0x02C0] - InheritedSize[0x02C0])
	 */
	class UAddon_TormentMode_19 : public UItemAddon
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheExecutioner.Addon_TormentMode_20
	 * Size -> 0x0008 (FullSize[0x02C8] - InheritedSize[0x02C0])
	 */
	class UAddon_TormentMode_20 : public UItemAddon
	{
	public:
		float                                                      _lingerDuration;                                         // 0x02C0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_G3RH[0x4];                                   // 0x02C4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheExecutioner.Addon_TormentMode_21
	 * Size -> 0x0010 (FullSize[0x02E0] - InheritedSize[0x02D0])
	 */
	class UAddon_TormentMode_21 : public USpawnEffectsOnAllSurvivorsBaseAddon
	{
	public:
		bool                                                       _revealSurvivorsInAgony;                                 // 0x02D0(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _revealSurvivorsNotInAgony;                              // 0x02D1(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_44YA[0x2];                                   // 0x02D2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _range;                                                  // 0x02D4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _revealDuration;                                         // 0x02D8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_O2KI[0x4];                                   // 0x02DC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheExecutioner.AgonyComponent
	 * Size -> 0x0140 (FullSize[0x01F8] - InheritedSize[0x00B8])
	 */
	class UAgonyComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_KH0W[0x10];                                  // 0x00B8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTagStateBool                                       _isInAgony;                                              // 0x00C8(0x0030) Net, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTagStateBool                                       _isAgonyMoriable;                                        // 0x00F8(0x0030) Net, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _agonyNumberOfHookForMiniMori;                           // 0x0128(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CP7P[0x38];                                  // 0x0150(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       _inAttackTrailDamageCooldown;                            // 0x0188(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_AVQD[0x7];                                   // 0x0189(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _attackTrailDamageCooldownTime;                          // 0x0190(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_L4VC[0x18];                                  // 0x01B8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAgonyDisplayFxEvent>                        _showAgonyFXEvents;                                      // 0x01D0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FAgonyDisplayFxEvent>                        _hideAgonyFXEvents;                                      // 0x01E0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4N8X[0x8];                                   // 0x01F0(0x0008) MISSED OFFSET (PADDING)

	public:
		void ShowAgonyBarbWireFX_Cosmetic();
		void OnTrailEffectStop_Cosmetic();
		void OnTrailEffectStart_Cosmetic();
		void OnShowBarbWireFXOnGameEvent(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
		void OnRep_IsInAgony();
		void OnLocallyObservedChanged(bool IsLocallyObserved);
		void OnHitInAgony_Cosmetic();
		void OnHitByTormentAttackTrail_Cosmetic();
		void OnHideBarbWireFXOnGameEvent(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
		void OnAgonyChanged_Cosmetic(bool IsInAgony);
		bool IsInAgony();
		bool IsAgonyMoriable();
		void HideAgonyBarbWireFX_Cosmetic();
		void Authority_OnDrainStageChanged(int32_t DrainStage, class ADBDPlayer* Target);
		void Authority_OnAttackTrailDamageCooldownTimerDone();
		static UClass* StaticClass();
	};

	/**
	 * Class TheExecutioner.AgonyMoriInteraction
	 * Size -> 0x0000 (FullSize[0x0770] - InheritedSize[0x0770])
	 */
	class UAgonyMoriInteraction : public UKillInteractionDefinition
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheExecutioner.AgonySubAnimInstance
	 * Size -> 0x0010 (FullSize[0x0550] - InheritedSize[0x0540])
	 */
	class UAgonySubAnimInstance : public UBaseSurvivorAnimInstance
	{
	public:
		bool                                                       _isInAgony;                                              // 0x0540(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isInTormentTrail;                                       // 0x0541(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isInTormentTrailEffect;                                 // 0x0542(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isInDeathBed;                                           // 0x0543(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isDeadInDeathBed;                                       // 0x0544(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isInStruggleInDeathBed;                                 // 0x0545(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_QRY2[0xA];                                   // 0x0546(0x000A) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheExecutioner.BaseTormentTrailPoint
	 * Size -> 0x0100 (FullSize[0x0330] - InheritedSize[0x0230])
	 */
	class ABaseTormentTrailPoint : public AActor
	{
	public:
		unsigned char                                              UnknownData_7ZM6[0x18];                                  // 0x0230(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USphereComponent*                                    _collisionComponent;                                     // 0x0248(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _collisionRadius;                                        // 0x0250(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MSOJ[0x4];                                   // 0x0254(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTunableStat                                        _tormentTrailAliveTime;                                  // 0x0258(0x0080) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1PLL[0x30];                                  // 0x02D8(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USplineMeshComponent*                                _splineMeshComponent;                                    // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UStaticMesh*>                                 _trailMeshList;                                          // 0x0310(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		unsigned char                                              _indexInTrail;                                           // 0x0320(0x0001) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_V4RE[0xF];                                   // 0x0321(0x000F) MISSED OFFSET (PADDING)

	public:
		void EndOfDisapearCosmetic();
		void DisappearCosmetic();
		static UClass* StaticClass();
	};

	/**
	 * Class TheExecutioner.BloodPact
	 * Size -> 0x0090 (FullSize[0x0460] - InheritedSize[0x03D0])
	 */
	class UBloodPact : public UPerk
	{
	public:
		unsigned char                                              UnknownData_O3NA[0x18];                                  // 0x03D0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       _fullHealthStateOnly;                                    // 0x03E8(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CTWO[0x3];                                   // 0x03E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _hasteEffectRange;                                       // 0x03EC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _hasteEffectMovementSpeedIncrease[0x3];                  // 0x03F0(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_34KB[0x4];                                   // 0x03FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _bloodPactRevealEffect;                                  // 0x0400(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _bloodPactHasteEffect;                                   // 0x0408(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _increaseObsessionChanceEffect;                          // 0x0410(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UStatusEffect*                                       _ownerStatusEffect;                                      // 0x0418(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UStatusEffect*                                       _obsessionStatusEffect;                                  // 0x0420(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UStatusEffect*                                       _ownerHasteStatusEffect;                                 // 0x0428(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UStatusEffect*                                       _otherPlayerHasteStatusEffect;                           // 0x0430(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ADBDPlayer*                                          _otherPlayer;                                            // 0x0438(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_T9I3[0x20];                                  // 0x0440(0x0020) MISSED OFFSET (PADDING)

	public:
		void Authority_OnInRangeChanged(bool InRange);
		static UClass* StaticClass();
	};

	/**
	 * Class TheExecutioner.DeathBedAntiCampComponent
	 * Size -> 0x00D8 (FullSize[0x0190] - InheritedSize[0x00B8])
	 */
	class UDeathBedAntiCampComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_6GYP[0x48];                                  // 0x00B8(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _anticampZoneDistance;                                   // 0x0100(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _anticampZoneTimeToTrigger;                              // 0x0128(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4404[0x40];                                  // 0x0150(0x0040) MISSED OFFSET (PADDING)

	public:
		void Multicast_TriggerDeathBedRelocate();
		void Authority_OnInRangeChanged(bool InRange);
		static UClass* StaticClass();
	};

	/**
	 * Class TheExecutioner.DeathBedInteractable
	 * Size -> 0x0138 (FullSize[0x0460] - InheritedSize[0x0328])
	 */
	class ADeathBedInteractable : public AInteractable
	{
	public:
		unsigned char                                              UnknownData_ADR8[0x10];                                  // 0x0328(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     _root;                                                   // 0x0338(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ACamperPlayer*                                       _inDeathBedCamper;                                       // 0x0340(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UChargeableComponent*                                _rescueChargeableComponent;                              // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USkeletalMeshComponent*                              _deathBedSkeletalMesh;                                   // 0x0350(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBoxComponent*                                       _interactionZone;                                        // 0x0358(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBoxComponent*                                       _playerOverlapZone;                                      // 0x0360(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMontagePlayer*                                      _montagePlayer;                                          // 0x0368(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6RZC[0x10];                                  // 0x0370(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBoxComponent*                                       _deathBedCollision;                                      // 0x0380(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_DW3A[0x28];                                  // 0x0388(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimationMontageSlave*                              _animationMontageSlave;                                  // 0x03B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAnimMontage*                                        _montageToPlay;                                          // 0x03B8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BQ3V[0x4];                                   // 0x03C0(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             _rescuerSnapPosition;                                    // 0x03C4(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDeathBedAntiCampComponent*                          _deathBedAnticampComponent;                              // 0x03D0(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ALUI[0x40];                                  // 0x03D8(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _anticampDrainCooldownTime;                              // 0x0418(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JIMF[0x18];                                  // 0x0440(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAIPerceptionStimuliSourceComponent*                 _perceptionStimuliComponent;                             // 0x0458(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void TeleportCamperToDeathBed();
		void StartPlayerAbsorbedByGround();
		void SetInDeathBedCamper(class ACamperPlayer* CamperPlayer);
		void PlayerOverlapZoneEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void PlayerOverlapZoneBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void OnSkillCheckFailed_Cosmetic();
		void OnSkillCheckFailed();
		void OnRescueCancelled();
		void OnRelocateStart_Cosmetic();
		void OnDeathBedDeathEnd();
		void Multicast_RelocateToOtherDeathBed(class ADeathBedInteractable* deathBed, class ACamperPlayer* CamperPlayer);
		struct FVector GetRescuerSnapPosition();
		class UMontagePlayer* GetMontagePlayer();
		class ACamperPlayer* GetInDeathBedCamper();
		void FX_SurvivorSavedFromDeathBed();
		void FX_DeathBedAppear();
		void DeathBedDisappear();
		bool CanRescueSurvivor();
		void ActivateDeathBed(bool value);
		static UClass* StaticClass();
	};

	/**
	 * Class TheExecutioner.DeathBedOutlineUpdateStrategy
	 * Size -> 0x0000 (FullSize[0x0130] - InheritedSize[0x0130])
	 */
	class UDeathBedOutlineUpdateStrategy : public USourceBasedOutlineUpdateStrategy
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheExecutioner.DeathBedRescueInteraction
	 * Size -> 0x0030 (FullSize[0x0710] - InheritedSize[0x06E0])
	 */
	class UDeathBedRescueInteraction : public UChargeableInteractionDefinition
	{
	public:
		unsigned char                                              UnknownData_PYKM[0x8];                                   // 0x06E0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _loudNoiseRange;                                         // 0x06E8(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		struct FVector GetRescuerSnapPosition();
		static UClass* StaticClass();
	};

	/**
	 * Class TheExecutioner.Deathbound
	 * Size -> 0x0058 (FullSize[0x0428] - InheritedSize[0x03D0])
	 */
	class UDeathbound : public UPerk
	{
	public:
		float                                                      _distanceFromRescuedSurvivorForOblivious[0x3];           // 0x03D0(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _activationDuration;                                     // 0x03DC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _rescueDistanceFromKillerToActivate;                     // 0x03E0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_3WVK[0x4];                                   // 0x03E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _revealLocationDuration;                                 // 0x03E8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _unhook;                                                 // 0x03EC(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _fromDyingState;                                         // 0x03ED(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CZGD[0x2];                                   // 0x03EE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UStatusEffect*>                               _obliviousStatusEffects;                                 // 0x03F0(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_S7PL[0x10];                                  // 0x0400(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ADBDPlayer*>                                  _survivorsToReveal;                                      // 0x0410(0x0010) Net, ZeroConstructor, Transient, RepNotify, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_22BS[0x8];                                   // 0x0420(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnRep_SurvivorsToReveal();
		void MakeSurvivorScream(class ACamperPlayer* survivor);
		float GetRevealLocationDuration();
		static UClass* StaticClass();
	};

	/**
	 * Class TheExecutioner.ExecutionerTormentAttack
	 * Size -> 0x0000 (FullSize[0x0380] - InheritedSize[0x0380])
	 */
	class UExecutionerTormentAttack : public UPounceAttack
	{
	public:
		void Server_TormentTryHitTargetNotInCoolDown(class ADBDPlayer* Target);
		void Multicast_TormentHitTarget(class ADBDPlayer* Target, bool hitCosmeticOnly);
		static UClass* StaticClass();
	};

	/**
	 * Class TheExecutioner.ExecutionerTormentAttackSuccessSubstate
	 * Size -> 0x0000 (FullSize[0x0118] - InheritedSize[0x0118])
	 */
	class UExecutionerTormentAttackSuccessSubstate : public UPounceAttackSuccessSubstate
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheExecutioner.ExecutionerTormentAttackMissSubstate
	 * Size -> 0x0000 (FullSize[0x0120] - InheritedSize[0x0120])
	 */
	class UExecutionerTormentAttackMissSubstate : public UPounceAttackMissSubstate
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheExecutioner.ExecutionerTormentAttackObstructSubstate
	 * Size -> 0x0000 (FullSize[0x0128] - InheritedSize[0x0128])
	 */
	class UExecutionerTormentAttackObstructSubstate : public UPounceAttackObstructSubstate
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheExecutioner.ForcedPenance
	 * Size -> 0x0030 (FullSize[0x0400] - InheritedSize[0x03D0])
	 */
	class UForcedPenance : public UPerk
	{
	public:
		float                                                      _perkActivationDuration[0x3];                            // 0x03D0(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _applyOblivious;                                         // 0x03DC(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _applyBroken;                                            // 0x03DD(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_432M[0x2];                                   // 0x03DE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UStatusEffect*>                               _camperObliviousEffects;                                 // 0x03E0(0x0010) ExportObject, Net, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<class UStatusEffect*>                               _camperBrokenEffects;                                    // 0x03F0(0x0010) ExportObject, Net, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheExecutioner.MobileTormentTrailRenderer
	 * Size -> 0x0080 (FullSize[0x02B0] - InheritedSize[0x0230])
	 */
	class AMobileTormentTrailRenderer : public AActor
	{
	public:
		class UInstancedStaticMeshComponent*                       _pillarIsmComponent;                                     // 0x0230(0x0008) Edit, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UInstancedStaticMeshComponent*                       _wireIsmComponent;                                       // 0x0238(0x0008) Edit, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UInstancedStaticMeshComponent*                       _trailIsmComponent;                                      // 0x0240(0x0008) Edit, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UInstancedStaticMeshComponent*                       _pillarOutlineIsmComponent;                              // 0x0248(0x0008) Edit, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UInstancedStaticMeshComponent*                       _wireOutlineIsmComponent;                                // 0x0250(0x0008) Edit, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TMap<class ABaseTormentTrailPoint*, struct FTormentTrailPointInfo> _instanceMap;                                            // 0x0258(0x0050) Transient, NativeAccessSpecifierPrivate
		class UMaterialInstanceDynamic*                            _trailMaterialInstanceDynamic;                           // 0x02A8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void Multicast_RemoveInstance(class ABaseTormentTrailPoint* TrailPoint);
		void Multicast_AddInstance(class ABaseTormentTrailPoint* TrailPoint, bool isAttackTrailPoint);
		static UClass* StaticClass();
	};

	/**
	 * Class TheExecutioner.RepressedAlliance
	 * Size -> 0x0078 (FullSize[0x0448] - InheritedSize[0x03D0])
	 */
	class URepressedAlliance : public UPerk
	{
	public:
		struct FSecondaryInteractionProperties                     _secondaryActionProperties;                              // 0x03D0(0x0038) Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate
		float                                                      _repairTimesNeededToActivate[0x3];                       // 0x0408(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _generatorBlockDuration;                                 // 0x0414(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UInteractionDefinition*                              _currentRepairInteractionWithAbility;                    // 0x0418(0x0008) ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7DRT[0x18];                                  // 0x0420(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AGenerator*                                          _blockedGenerator;                                       // 0x0438(0x0008) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CGM8[0x8];                                   // 0x0440(0x0008) MISSED OFFSET (PADDING)

	public:
		void Server_OnActionInputPressed(class AGenerator* Generator);
		void OnRep_CurrentRepairInteractionWithAbility(class UInteractionDefinition* oldRepairInteraction);
		void OnRep_BlockedGenerator(class AGenerator* oldGenerator);
		static UClass* StaticClass();
	};

	/**
	 * Class TheExecutioner.SendToDeathBedInteraction
	 * Size -> 0x0010 (FullSize[0x06F0] - InheritedSize[0x06E0])
	 */
	class USendToDeathBedInteraction : public UChargeableInteractionDefinition
	{
	public:
		unsigned char                                              UnknownData_YJ13[0x8];                                   // 0x06E0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ADeathBedInteractable*                               _deathBed;                                               // 0x06E8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void Multicast_SendCamperToDeathBed(class ADeathBedInteractable* deathBed);
		class ACamperPlayer* GetOwningSurvivor();
		void FX_InteractionStart();
		void FX_InteractionCancel();
		static UClass* StaticClass();
	};

	/**
	 * Class TheExecutioner.SoulGuard
	 * Size -> 0x0030 (FullSize[0x0400] - InheritedSize[0x03D0])
	 */
	class USoulGuard : public UPerk
	{
	public:
		float                                                      _cooldownLevels[0x3];                                    // 0x03D0(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _recover;                                                // 0x03DC(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RH5K[0x3];                                   // 0x03DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _enduranceEffectDuration[0x3];                           // 0x03E0(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_3J21[0x14];                                  // 0x03EC(0x0014) MISSED OFFSET (PADDING)

	public:
		void Authority_ShowOnKOPreventedFX();
		void Authority_OnSurvivorHealed(const struct FCamperHealResult& healResult);
		static UClass* StaticClass();
	};

	/**
	 * Class TheExecutioner.TormentTrailDetectorComponent
	 * Size -> 0x0140 (FullSize[0x01F8] - InheritedSize[0x00B8])
	 */
	class UTormentTrailDetectorComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_UZDU[0x18];                                  // 0x00B8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ATormentTrailPoint*>                          _overlappedTrailPoints;                                  // 0x00D0(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		struct FTagStateBool                                       _isInTormentTrail;                                       // 0x00E0(0x0030) Net, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FTagStateBool                                       _isInTormentTrailEffect;                                 // 0x0110(0x0030) Net, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_B93Q[0x8];                                   // 0x0140(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTunableStat                                        _inTormentTrailLastingEffectTime;                        // 0x0148(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7G5C[0x30];                                  // 0x01C8(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheExecutioner.SurvivorTormentTrailDetector
	 * Size -> 0x0018 (FullSize[0x0210] - InheritedSize[0x01F8])
	 */
	class USurvivorTormentTrailDetector : public UTormentTrailDetectorComponent
	{
	public:
		unsigned char                                              UnknownData_1CEH[0x18];                                  // 0x01F8(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheExecutioner.TheExecutionerAnimInstance
	 * Size -> 0x0080 (FullSize[0x0680] - InheritedSize[0x0600])
	 */
	class UTheExecutionerAnimInstance : public UKillerAnimInstance
	{
	public:
		float                                                      _tormentModeVerticalInput;                               // 0x05FC(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _tormentModeHorizontalInput;                             // 0x0600(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2DGR[0x7C];                                  // 0x0604(0x007C) MISSED OFFSET (PADDING)

	public:
		void NoInputFeedbackCosmetic();
		static UClass* StaticClass();
	};

	/**
	 * Class TheExecutioner.TheExecutionerCheatComponent
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	class UTheExecutionerCheatComponent : public UActorComponent
	{
	public:
		void DBD_SetCanBeAgonyMoriedOnLocallyControlledPlayer(bool value, const class FString& localPlayerId);
		void DBD_SetAgonyOnLocallyControlledPlayer(bool value, const class FString& localPlayerId);
		void DBD_LocalKillSurvivorInDeathBed();
		void DBD_DisplayAllDeathBed(bool value);
		void DBD_DeathBedPlayStruggleHitReaction();
		static UClass* StaticClass();
	};

	/**
	 * Class TheExecutioner.TrailControllerBase
	 * Size -> 0x0058 (FullSize[0x0288] - InheritedSize[0x0230])
	 */
	class ATrailControllerBase : public AActor
	{
	public:
		class UTormentTrailPointCollectionComponent*               _tormentTrailPointCollection;                            // 0x0230(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _distanceBetweenTormentTrailPoint;                       // 0x0238(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USplineComponent*                                    _splineComponent;                                        // 0x0260(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MVQP[0x10];                                  // 0x0268(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAuthoritativePoolableActorComponent*                _poolableComponent;                                      // 0x0278(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		ETrailType                                                 _trailType;                                              // 0x0280(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4XAZ[0x7];                                   // 0x0281(0x0007) MISSED OFFSET (PADDING)

	public:
		void RemoveTormentTrailController();
		void OnTrailPointDeath(class ABaseTormentTrailPoint* baseTrailPoint);
		void OnAcquireChanged(bool acquired);
		void ActivateCosmetic(bool value);
		static UClass* StaticClass();
	};

	/**
	 * Class TheExecutioner.TormentAttackTrailController
	 * Size -> 0x0178 (FullSize[0x0400] - InheritedSize[0x0288])
	 */
	class ATormentAttackTrailController : public ATrailControllerBase
	{
	public:
		class UClass*                                              _tormentTrailAttackPointClass;                           // 0x0288(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _tormentTrailAttackSign;                                 // 0x0290(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _trailSpawnDelay;                                        // 0x0298(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _timeIntervalBetweenPointsSpawn;                         // 0x02C0(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _attackTrailLenght;                                      // 0x02E8(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _consideredAsSlopeAngle;                                 // 0x0368(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FTransform>                                  _pointsTransform;                                        // 0x0390(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		struct FVector                                             _slopeDetectionOverGroundVector;                         // 0x03A0(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             _groundDetectionEndVector;                               // 0x03AC(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             _slopeCompensationVector;                                // 0x03B8(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_K2HD[0x1C];                                  // 0x03C4(0x001C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSpawnedAttackPoint>                         _spawnedAttackPointList;                                 // 0x03E0(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		bool                                                       _trailSpawnStarted;                                      // 0x03F0(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4W0E[0x3];                                   // 0x03F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _soundDistanceOnTrail;                                   // 0x03F4(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AMobileTormentTrailRenderer*                         _mobileTormentTrailRenderer;                             // 0x03F8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnTrailPointRemovedCosmetic(int32_t Index);
		void OnStartTrailTimerDone();
		void OnIntervalBetweenPointsTimerDone();
		void OnAttackTrailStartCosmetic();
		void Multicast_StartAttackTrail(float serverTimeSpawn, const struct FVector_NetQuantize10& Location, const struct FRotator& Rotation);
		void DisplayAttackTrailSpawnSign();
		static UClass* StaticClass();
	};

	/**
	 * Class TheExecutioner.TormentAttackTrailPoint
	 * Size -> 0x0058 (FullSize[0x0388] - InheritedSize[0x0330])
	 */
	class ATormentAttackTrailPoint : public ABaseTormentTrailPoint
	{
	public:
		unsigned char                                              UnknownData_TBIY[0x30];                                  // 0x0330(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _attackPointDelayToEnableCollision;                      // 0x0360(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void DisplayTrailSplineMesh(class USplineComponent* splinemesh, int32_t indexInTrail);
		static UClass* StaticClass();
	};

	/**
	 * Class TheExecutioner.TormentMode
	 * Size -> 0x0450 (FullSize[0x0900] - InheritedSize[0x04B0])
	 */
	class ATormentMode : public ACollectable
	{
	public:
		unsigned char                                              UnknownData_0JYW[0x78];                                  // 0x04B0(0x0078) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UChargeableComponent*                                _activateTormentModeCharge;                              // 0x0528(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPowerChargeComponent*                               _tormentModeCharge;                                      // 0x0530(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_646S[0x8];                                   // 0x0538(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPowerChargePresentationItemProgressComponent*       _tormentModeChargePresentation;                          // 0x0540(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPowerToggleComponent*                               _powerToggleComponent;                                   // 0x0548(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTormentTrailSpawnerComponent*                       _tormentTrailSpawnerComponent;                           // 0x0550(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTormentTrailPointCollectionComponent*               _tormentTrailPointCollectionComponent;                   // 0x0558(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTormentTrailPointCollectionComponent*               _restrictedTormentTrailPointCollectionComponent;         // 0x0560(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAuthoritativeActorPoolComponent*                    _tormentTrailControllerPool;                             // 0x0568(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAuthoritativeActorPoolComponent*                    _tormentAttackTrailControllerPool;                       // 0x0570(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAuthoritativeActorPoolComponent*                    _restrictedTormentTrailControllerPool;                   // 0x0578(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAuthoritativeActorPoolComponent*                    _tormentTrailPointPool;                                  // 0x0580(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAuthoritativeActorPoolComponent*                    _restrictedTormentTrailPointPool;                        // 0x0588(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _activateTormentModeSecondsToCharge;                     // 0x0590(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _tormentModeMaxCharge;                                   // 0x05B8(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _tormentModeChargeRate;                                  // 0x05E0(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _tormentModeDischargeRate;                               // 0x0660(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _tormentModePauseChargeRate;                             // 0x06E0(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _tormentModeAttackConsumePower;                          // 0x0708(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _tormentModeMinimumPercentToActivate;                    // 0x0730(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _tormentModeMouseYawScale;                               // 0x0758(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _tormentModeYawAdjustTime;                               // 0x0780(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _tormentModeGamePadYawScale;                             // 0x07A8(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _tormentModeYawInputLimit;                               // 0x07D0(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _tormentModeNotMovingYawScaleMultiplier;                 // 0x07F8(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _tormentModeNotMovingYawAdjustTime;                      // 0x0820(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _tormentModeWalkSpeed;                                   // 0x0848(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _normalWalkSpeed;                                        // 0x0870(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _tormentModeForcedPitch;                                 // 0x0898(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _agonyComponentClass;                                    // 0x08C0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0WI9[0x10];                                  // 0x08C8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _killerTormentTrailDetectorClass;                        // 0x08D8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _survivorTormentTrailDetectorClass;                      // 0x08E0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTormentModeCooldownInteraction*                     _tormentModeCooldownInteraction;                         // 0x08E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         _tormentModeChargeSpeedCurve;                            // 0x08F0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _mobileTormentTrailRendererClass;                        // 0x08F8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void Server_RequestMoreActorInAttackPool();
		void OnTormentModeStop_Cosmetic();
		void OnTormentModeStart_Cosmetic();
		void OnTormentModeChargeEmpty();
		bool IsInTormentMode();
		static UClass* StaticClass();
	};

	/**
	 * Class TheExecutioner.TormentModeCooldownInteraction
	 * Size -> 0x0070 (FullSize[0x0630] - InheritedSize[0x05C0])
	 */
	class UTormentModeCooldownInteraction : public UInteractionDefinition
	{
	public:
		struct FDBDTunableRowHandle                                _tormentModeCooldownTime;                                // 0x05B8(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _tormentModeCancelWalkSpeed;                             // 0x05E0(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _normalWalkSpeed;                                        // 0x0608(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheExecutioner.Tormentor
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UTormentor : public UInterface
	{
	public:
		struct FVector GetTormentTrailSpawnPoint();
		struct FVector GetTormentTrailAttackSpawnPoint();
		static UClass* StaticClass();
	};

	/**
	 * Class TheExecutioner.TormentTrailController
	 * Size -> 0x0128 (FullSize[0x03B0] - InheritedSize[0x0288])
	 */
	class ATormentTrailController : public ATrailControllerBase
	{
	public:
		struct FReplicatedTrailPointList                           _trailPointList;                                         // 0x0288(0x0120) Net, NativeAccessSpecifierPrivate
		class AMobileTormentTrailRenderer*                         _mobileTormentTrailRenderer;                             // 0x03A8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void Server_SpawnTormentTrailPoint(class ATormentTrailPoint* TrailPoint, const struct FVector_NetQuantize10& Location, const struct FRotator& Rotation);
		static UClass* StaticClass();
	};

	/**
	 * Class TheExecutioner.TormentTrailPoint
	 * Size -> 0x0028 (FullSize[0x0358] - InheritedSize[0x0330])
	 */
	class ATormentTrailPoint : public ABaseTormentTrailPoint
	{
	public:
		unsigned char                                              UnknownData_MVYW[0x18];                                  // 0x0330(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAuthoritativePoolableActorComponent*                _poolableComponent;                                      // 0x0348(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _splineMeshOverlapDistance;                              // 0x0350(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UZ1X[0x4];                                   // 0x0354(0x0004) MISSED OFFSET (PADDING)

	public:
		void Server_RemoveTrailPoint();
		void RefreshTrailPointCosmetic(ETrailPointRefreshReason trailPointRefreshReason);
		void OnAcquireChanged(bool acquired);
		void Multicast_TriggerTrailPointDisappear();
		void GetTrailLocationAndTangeant(int32_t indexInTrail, class USplineComponent* SplineComponent, struct FVector* outStartLocation, struct FVector* outStartTangent, struct FVector* outEndLocation, struct FVector* outEndTangent);
		void AddTrailCosmetic(class USplineComponent* SplineComponent, unsigned char indexInTrail);
		void ActivateCosmetic(bool value);
		static UClass* StaticClass();
	};

	/**
	 * Class TheExecutioner.TormentTrailPointCollectionComponent
	 * Size -> 0x0048 (FullSize[0x0100] - InheritedSize[0x00B8])
	 */
	class UTormentTrailPointCollectionComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_AT5M[0x18];                                  // 0x00B8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _maxNumberOfTrailPointInGame;                            // 0x00D0(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JY0I[0x8];                                   // 0x00F8(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnTrailAcquireChanged(class ATormentTrailPoint* TrailPoint, bool value);
		static UClass* StaticClass();
	};

	/**
	 * Class TheExecutioner.TormentTrailSpawnerComponent
	 * Size -> 0x0190 (FullSize[0x0248] - InheritedSize[0x00B8])
	 */
	class UTormentTrailSpawnerComponent : public UActorComponent
	{
	public:
		class ATormentTrailController*                             _currentTrailController;                                 // 0x00B8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _restrictionRangeToHooks;                                // 0x00C0(0x0028) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _restrictionRangeToGenerators;                           // 0x00E8(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _restrictionRangeToExitSwitch;                           // 0x0110(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _maxSlopeAngleForTrail;                                  // 0x0138(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _minSlopeAngleForTrail;                                  // 0x0160(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _restrictionRangeToHatch;                                // 0x0188(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _restrictionMaxVerticalDistance;                         // 0x01B0(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTormentTrailPointCollectionComponent*               _tormentTrailPointCollectionComponent;                   // 0x01D8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTormentTrailPointCollectionComponent*               _restrictedTormentTrailPointCollectionComponent;         // 0x01E0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAuthoritativeActorPoolComponent*                    _tormentTrailControllerPool;                             // 0x01E8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAuthoritativeActorPoolComponent*                    _tormentRestrictedTrailControllerPool;                   // 0x01F0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_P1XF[0x18];                                  // 0x01F8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      _actorsInRange;                                          // 0x0210(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		struct FVector                                             _slopeDetectionOverGroundVector;                         // 0x0220(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             _slopeDetectionEndVector;                                // 0x022C(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _forwardMultiplierSlopeDetection;                        // 0x0238(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _epsilonToAddToSpawnLocationInZ;                         // 0x023C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_VVWG[0x8];                                   // 0x0240(0x0008) MISSED OFFSET (PADDING)

	public:
		void Sever_SpawnTrailController(class ATormentTrailController* trailController, const struct FVector_NetQuantize10& Location, const struct FRotator& Rotation);
		void Server_StopTrailController(class ATormentTrailController* trailController);
		void Server_RequestMoreActorInPool(ETrailType trailType);
		void OnLevelReadyToPlay();
		void OnInRangeChanged(bool InRange, class AActor* Actor);
		static UClass* StaticClass();
	};

	/**
	 * Class TheExecutioner.TrailEffectLastingTimeBaseAddon
	 * Size -> 0x0008 (FullSize[0x02D8] - InheritedSize[0x02D0])
	 */
	class UTrailEffectLastingTimeBaseAddon : public USpawnEffectsOnAllSurvivorsBaseAddon
	{
	public:
		float                                                      _trailEffectLastingTimeModifierValue;                    // 0x02D0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_K8QF[0x4];                                   // 0x02D4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheExecutioner.TrailOfTorment
	 * Size -> 0x0040 (FullSize[0x0410] - InheritedSize[0x03D0])
	 */
	class UTrailOfTorment : public UPerk
	{
	public:
		unsigned char                                              UnknownData_YJOP[0x18];                                  // 0x03D0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _cooldownDuration[0x3];                                  // 0x03E8(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    _highlightPriority;                                      // 0x03F4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _isPerkActivated;                                        // 0x03F8(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_26C0[0x7];                                   // 0x03F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AGenerator*                                          _highlightedGenerator;                                   // 0x0400(0x0008) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UStatusEffect*                                       _statusEffect;                                           // 0x0408(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnRep_HighlightGenerator(class AGenerator* _oldHighlightedGenerator);
		static UClass* StaticClass();
	};

	/**
	 * Class TheExecutioner.TrailPointOutlineUpdateStrategy
	 * Size -> 0x0028 (FullSize[0x0158] - InheritedSize[0x0130])
	 */
	class UTrailPointOutlineUpdateStrategy : public USourceBasedOutlineUpdateStrategy
	{
	public:
		struct FDBDTunableRowHandle                                _tormentTrailRevealDistance;                             // 0x0130(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
