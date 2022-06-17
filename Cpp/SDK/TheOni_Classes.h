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
	 * Class TheOni.AbsorbBloodOrbsInteraction
	 * Size -> 0x0030 (FullSize[0x05F0] - InheritedSize[0x05C0])
	 */
	class UAbsorbBloodOrbsInteraction : public UInteractionDefinition
	{
	public:
		unsigned char                                              UnknownData_9C4T[0x30];                                  // 0x05C0(0x0030) MISSED OFFSET (PADDING)

	public:
		void SetPlayerOwner(class ADBDPlayer* Player);
		static UClass* StaticClass();
	};

	/**
	 * Class TheOni.BloodOrb
	 * Size -> 0x0060 (FullSize[0x0290] - InheritedSize[0x0230])
	 */
	class ABloodOrb : public AActor
	{
	public:
		struct FFloatInterval                                      _randomMoveDelayInterval;                                // 0x0230(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USceneComponent*                                     _absorbReference;                                        // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDOutlineComponent*                                _outlineComponent;                                       // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _despawnDelay;                                           // 0x0248(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_HZ8K[0x4];                                   // 0x024C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class ADBDPlayer>                           _droppingPlayer;                                         // 0x0250(0x0008) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EBloodOrbState                                             _state;                                                  // 0x0258(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7DTC[0x7];                                   // 0x0259(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBloodOrbFadeComponent*                              _fadeComponent;                                          // 0x0260(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_79G9[0x28];                                  // 0x0268(0x0028) MISSED OFFSET (PADDING)

	public:
		void UpdateAttracted_Cosmetic(const struct FVector& Destination, class ADBDPlayer* absorber, float DeltaTime);
		void UpdateAbsorbed_Cosmetic(const struct FVector& Destination, class ADBDPlayer* absorber, float DeltaTime);
		void OnRep_State(EBloodOrbState oldState);
		void OnIsAttractedChangedCosmetic(bool isAttracted);
		void OnDestroyedCosmetic();
		void OnAbsorbedCosmetic();
		class ADBDPlayer* GetDroppingPlayer();
		void Authority_OnDropped(class ADBDPlayer* droppedBy, float ImpulseFactor);
		void Authority_OnDropFinished();
		void Authority_DestroyBloodOrb();
		void Authority_Despawn();
		static UClass* StaticClass();
	};

	/**
	 * Class TheOni.BloodOrbAbsorberComponent
	 * Size -> 0x0058 (FullSize[0x0110] - InheritedSize[0x00B8])
	 */
	class UBloodOrbAbsorberComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             Authority_OnBloodOrbAbsorbed;                            // 0x00B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnIsAbsorbingChanged;                                    // 0x00C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		struct FVector                                             AbsorbLocationOffset;                                    // 0x00D8(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_3NAK[0x1C];                                  // 0x00E4(0x001C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UBloodOrbDropperComponent*>                   _camperBloodOrbDropperComponents;                        // 0x0100(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		void SetInAbsorbMode(bool inAbsorptionMode);
		bool IsInAbsorbMode();
		static UClass* StaticClass();
	};

	/**
	 * Class TheOni.BloodOrbCollection
	 * Size -> 0x0048 (FullSize[0x0100] - InheritedSize[0x00B8])
	 */
	class UBloodOrbCollection : public UActorComponent
	{
	public:
		TArray<class ABloodOrb*>                                   _bloodOrbs;                                              // 0x00B8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RELP[0x38];                                  // 0x00C8(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheOni.BloodOrbConfiguratorComponent
	 * Size -> 0x0070 (FullSize[0x0128] - InheritedSize[0x00B8])
	 */
	class UBloodOrbConfiguratorComponent : public UActorComponent
	{
	public:
		class UClass*                                              _bloodOrbClass;                                          // 0x00B8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FGameEventBloodOrbDropParams>                _bloodOrbDropGameEvents;                                 // 0x00C0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		float                                                      _fadeDuration;                                           // 0x00D0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _initialFadeOutDelay;                                    // 0x00D4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        _bloodOrbAuraColor;                                      // 0x00D8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        _bloodOrbAttractedAuraColor;                             // 0x00E8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _bloodOrbVisibilityRangeInterpolationSpeed;              // 0x00F8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_96XZ[0x4];                                   // 0x00FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _mobileBloodOrbRendererClass;                            // 0x0100(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GAUA[0x20];                                  // 0x0108(0x0020) MISSED OFFSET (PADDING)

	public:
		void UpdateSurvivorBloodOrbVisibilityRange(class UBloodOrbVisibilityComponent* BloodOrbVisibilityComponent, class ADBDPlayer* killer);
		void UpdateKillerBloodOrbVisiblityRanges(class UBloodOrbVisibilityComponent* BloodOrbVisibilityComponent, class ADBDPlayer* killer);
		void UpdateBloodOrbAttractSpeed(class UBloodOrbAbsorberComponent* BloodOrbAbsorberComponent, class ADBDPlayer* killer);
		void OnLevelReadyToPlay();
		void Authority_UpdateSurvivorBloodOrbDropperOnCrouchModifier(class ADBDPlayer* killer);
		static UClass* StaticClass();
	};

	/**
	 * Class TheOni.BloodOrbDropperComponent
	 * Size -> 0x0080 (FullSize[0x0138] - InheritedSize[0x00B8])
	 */
	class UBloodOrbDropperComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_4UYA[0x80];                                  // 0x00B8(0x0080) MISSED OFFSET (PADDING)

	public:
		void DBD_DropBloodOrbs(int32_t numOrbs);
		void Authority_SetPaused(bool paused);
		void Authority_OnOwningCamperDamageStateChanged(ECamperDamageState oldState, ECamperDamageState NewState);
		void Authority_OnDropOrbsGameEvent(const struct FGameplayTag& GameEvent, const struct FGameEventData& GameEventData, const struct FBloodOrbDropParams& dropParams);
		void Authority_OnCamperUnhooked(const struct FGameplayTag& GameEvent, const struct FGameEventData& GameEventData);
		void Authority_OnCamperHooked(const struct FGameplayTag& GameEvent, const struct FGameEventData& GameEventData);
		void Authority_OnCamperCrouched(const struct FGameplayTag& GameEvent, const struct FGameEventData& GameEventData);
		static UClass* StaticClass();
	};

	/**
	 * Class TheOni.BloodOrbFadeComponent
	 * Size -> 0x0008 (FullSize[0x00E0] - InheritedSize[0x00D8])
	 */
	class UBloodOrbFadeComponent : public UFadeComponent
	{
	public:
		unsigned char                                              UnknownData_J4IO[0x8];                                   // 0x00D8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheOni.BloodOrbOverlapComponent
	 * Size -> 0x0040 (FullSize[0x00F8] - InheritedSize[0x00B8])
	 */
	class UBloodOrbOverlapComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_V1X9[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    _currentOverlappingOrbs;                                 // 0x00C0(0x0004) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_VUEQ[0x34];                                  // 0x00C4(0x0034) MISSED OFFSET (PADDING)

	public:
		void OnRep_CurrentOverlappingOrbs(int32_t previousOverlappingOrbs);
		void Authority_OnDestroyedBloodOrb(class AActor* DestroyedActor);
		void Authority_OnBloodOrbVisibilityModeChanged(EBloodOrbVisibilityMode visibilityMode);
		void Authority_OnBloodOrbEndOverlap(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void Authority_OnBloodOrbBeginOverlap(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		static UClass* StaticClass();
	};

	/**
	 * Class TheOni.BloodOrbOverlapRevealToKiller
	 * Size -> 0x0030 (FullSize[0x0380] - InheritedSize[0x0350])
	 */
	class UBloodOrbOverlapRevealToKiller : public UStatusEffect
	{
	public:
		unsigned char                                              UnknownData_UXHT[0x28];                                  // 0x0350(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimerObject*                                        _revealTimer;                                            // 0x0378(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		class UTimerObject* GetRevealTimer();
		static UClass* StaticClass();
	};

	/**
	 * Class TheOni.BloodOrbStateMonitorComponent
	 * Size -> 0x0070 (FullSize[0x0128] - InheritedSize[0x00B8])
	 */
	class UBloodOrbStateMonitorComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnBloodOrbAbsorbedCosmetic;                              // 0x00B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X7MH[0x60];                                  // 0x00C8(0x0060) MISSED OFFSET (PADDING)

	public:
		void OnBloodOrbStateChanged(EBloodOrbState oldState, EBloodOrbState NewState, class ABloodOrb* BloodOrb);
		void OnBloodOrbSpawned(class ABloodOrb* BloodOrb);
		void OnBloodOrbDestroyed(class ABloodOrb* BloodOrb);
		static UClass* StaticClass();
	};

	/**
	 * Class TheOni.BloodOrbUtilities
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UBloodOrbUtilities : public UBlueprintFunctionLibrary
	{
	public:
		TArray<class ABloodOrb*> STATIC_GetAllBloodOrbs(class UObject* WorldContextObject);
		static UClass* StaticClass();
	};

	/**
	 * Class TheOni.BloodOrbVisibilityComponent
	 * Size -> 0x0038 (FullSize[0x00F0] - InheritedSize[0x00B8])
	 */
	class UBloodOrbVisibilityComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_HY4N[0x38];                                  // 0x00B8(0x0038) MISSED OFFSET (PADDING)

	public:
		void SetVisibilityRange(float visibilityRange);
		void SetVisibilityMode(EBloodOrbVisibilityMode visibilityMode);
		void SetShowAttractedBloodOrbsAuras(bool Show);
		void SetAuraVisibilityRange(float auraVisibilityRange);
		void OnBloodOrbSpawned(class ABloodOrb* BloodOrb);
		static UClass* StaticClass();
	};

	/**
	 * Class TheOni.DemonModeComponent
	 * Size -> 0x0118 (FullSize[0x01D0] - InheritedSize[0x00B8])
	 */
	class UDemonModeComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnDemonModeReady;                                        // 0x00B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnDemonModeStarted;                                      // 0x00C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnDemonModeEnded;                                        // 0x00D8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnDemonModeInterruptedDuringStartup;                     // 0x00E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnDemonModeInterruptedDuringEnding;                      // 0x00F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnChargeGainedAfterAttackCosmetic;                       // 0x0108(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnChargeGainedAfterLockerGrabCosmetic;                   // 0x0118(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UPowerChargeComponent*                               _powerChargeComponent;                                   // 0x0128(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPowerToggleComponent*                               _powerToggleComponent;                                   // 0x0130(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UInteractionStarterComponent*                        _authority_demonModeCooldownStarterComponent;            // 0x0138(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UInteractionDefinition*                              _demonModeCooldownInteraction;                           // 0x0140(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_18F3[0x34];                                  // 0x0148(0x0034) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EDemonModeState                                            _demonModeState;                                         // 0x017C(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WMZI[0x53];                                  // 0x017D(0x0053) MISSED OFFSET (PADDING)

	public:
		bool ShouldLoseDemonModeOnStun();
		void OnPowerChargeFull();
		void OnPowerChargeEmpty();
		void OnIsPowerChanged(bool IsInPower);
		void Multicast_DemonModeInterruptedOnStartup();
		void Multicast_DemonModeInterruptedOnEnding();
		bool IsInDemonMode();
		EDemonModeState GetDemonModeState();
		float GetCurrentCharge();
		float GetChargePercent();
		void DBD_DemonModeForever(bool forever);
		bool CanStartDemonMode();
		void Authority_SetDemonModeCooldownInteraction(class UInteractionDefinition* Interaction);
		void Authority_OnLevelReadyToPlay();
		void Authority_OnChargeChanged(float currentChargePercent);
		void Authority_InterruptedMontage(const struct FAnimationMontageDescriptor& Montage, bool interrupted);
		void Authority_AddCharge(float ChargeAmount);
		static UClass* StaticClass();
	};

	/**
	 * Class TheOni.DemonModeCooldownInteraction
	 * Size -> 0x0020 (FullSize[0x05E0] - InheritedSize[0x05C0])
	 */
	class UDemonModeCooldownInteraction : public UInteractionDefinition
	{
	public:
		unsigned char                                              UnknownData_9CAM[0x20];                                  // 0x05C0(0x0020) MISSED OFFSET (PADDING)

	public:
		void SetPlayerOwner(class ADBDPlayer* Owner);
		void OnLevelReadyToPlay();
		static UClass* StaticClass();
	};

	/**
	 * Class TheOni.DemonModeMenuComponent
	 * Size -> 0x0020 (FullSize[0x00D8] - InheritedSize[0x00B8])
	 */
	class UDemonModeMenuComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_5QFN[0x20];                                  // 0x00B8(0x0020) MISSED OFFSET (PADDING)

	public:
		void SetInMenuDemonMode(bool inMenuDemonMode);
		static UClass* StaticClass();
	};

	/**
	 * Class TheOni.IsPlayerAbsorbingBloodOrbsCondition
	 * Size -> 0x0000 (FullSize[0x0128] - InheritedSize[0x0128])
	 */
	class UIsPlayerAbsorbingBloodOrbsCondition : public FDBDCompetence_UIsPlayerPerformingInteraction
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheOni.MobileBloodOrbRenderer
	 * Size -> 0x0090 (FullSize[0x02C0] - InheritedSize[0x0230])
	 */
	class AMobileBloodOrbRenderer : public AActor
	{
	public:
		class UMaterialInstance*                                   OrbMaterialInstance;                                     // 0x0230(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInstance*                                   OutlineMaterialInstance;                                 // 0x0238(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CullInterval;                                            // 0x0240(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NYN8[0x4];                                   // 0x0244(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UInstancedStaticMeshComponent*                       _ismComponent;                                           // 0x0248(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UInstancedStaticMeshComponent*                       _outlineIsmComponent;                                    // 0x0250(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TMap<class ABloodOrb*, struct FBloodOrbInfo>               _instanceMap;                                            // 0x0258(0x0050) Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		class UMaterialInstanceDynamic*                            _outlineMaterialInstanceDynamic;                         // 0x02A8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMaterialInstanceDynamic*                            _orbMaterialInstanceDynamic;                             // 0x02B0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBloodOrbVisibilityComponent*                        _bloodOrbVisibilityComponent;                            // 0x02B8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheOni.OniAttackPicker
	 * Size -> 0x0010 (FullSize[0x00C8] - InheritedSize[0x00B8])
	 */
	class UOniAttackPicker : public USlasherAttackPickerComponent
	{
	public:
		unsigned char                                              UnknownData_BICQ[0x10];                                  // 0x00B8(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheOni.OniBasicAttack
	 * Size -> 0x0010 (FullSize[0x0390] - InheritedSize[0x0380])
	 */
	class UOniBasicAttack : public UPounceAttack
	{
	public:
		unsigned char                                              UnknownData_8QLW[0x10];                                  // 0x0380(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheOni.OniBasicAttackSuccessSubstate
	 * Size -> 0x0000 (FullSize[0x0118] - InheritedSize[0x0118])
	 */
	class UOniBasicAttackSuccessSubstate : public UPounceAttackSuccessSubstate
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheOni.OniCustomizationItemAnimInstance
	 * Size -> 0x0020 (FullSize[0x02E0] - InheritedSize[0x02C0])
	 */
	class UOniCustomizationItemAnimInstance : public UAnimInstance
	{
	public:
		bool                                                       _isInDemonMode;                                          // 0x02C0(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_0KMY[0x1F];                                  // 0x02C1(0x001F) MISSED OFFSET (PADDING)

	public:
		void SetIsInDemonMode(bool IsInDemonMode);
		static UClass* StaticClass();
	};

	/**
	 * Class TheOni.OniDashInteraction
	 * Size -> 0x0050 (FullSize[0x0730] - InheritedSize[0x06E0])
	 */
	class UOniDashInteraction : public UChargeableInteractionDefinition
	{
	public:
		class UCurveFloat*                                         _chargingSpeedCurve;                                     // 0x06E0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         _dashingSpeedCurve;                                      // 0x06E8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _yawAdjustTime;                                          // 0x06F0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_H4JC[0x4];                                   // 0x06F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         _cooldownSpeedCurve;                                     // 0x06F8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RYWX[0x30];                                  // 0x0700(0x0030) MISSED OFFSET (PADDING)

	public:
		void SetPlayerOwner(class ADBDPlayer* Player);
		void OnLevelReadyToPlay();
		void OnDashEnd(class ADBDPlayer* Player);
		void OnDashBegin(class ADBDPlayer* Player);
		void OnChargeEnd(class ADBDPlayer* Player, bool chargeCompleted);
		void OnChargeBegin(class ADBDPlayer* Player);
		static UClass* StaticClass();
	};

	/**
	 * Class TheOni.OniDemonBasicAttack
	 * Size -> 0x0000 (FullSize[0x0380] - InheritedSize[0x0380])
	 */
	class UOniDemonBasicAttack : public UPounceAttack
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheOni.OniDemonPowerAttack
	 * Size -> 0x0020 (FullSize[0x03A0] - InheritedSize[0x0380])
	 */
	class UOniDemonPowerAttack : public UPounceAttack
	{
	public:
		unsigned char                                              UnknownData_0CNS[0x20];                                  // 0x0380(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheOni.OniDemonDashAttack
	 * Size -> 0x0000 (FullSize[0x03A0] - InheritedSize[0x03A0])
	 */
	class UOniDemonDashAttack : public UOniDemonPowerAttack
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheOni.OniDemonPowerAttackOpenSubstate
	 * Size -> 0x0010 (FullSize[0x0140] - InheritedSize[0x0130])
	 */
	class UOniDemonPowerAttackOpenSubstate : public UPounceAttackOpenSubstate
	{
	public:
		unsigned char                                              UnknownData_TRIQ[0x10];                                  // 0x0130(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheOni.OniDemonDashAttackOpenSubstate
	 * Size -> 0x0000 (FullSize[0x0140] - InheritedSize[0x0140])
	 */
	class UOniDemonDashAttackOpenSubstate : public UOniDemonPowerAttackOpenSubstate
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheOni.OniDemonPowerAttackHittingSubstate
	 * Size -> 0x0000 (FullSize[0x01A0] - InheritedSize[0x01A0])
	 */
	class UOniDemonPowerAttackHittingSubstate : public UPounceAttackHittingSubstate
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheOni.OniDemonPowerAttackSuccessSubstate
	 * Size -> 0x0030 (FullSize[0x0148] - InheritedSize[0x0118])
	 */
	class UOniDemonPowerAttackSuccessSubstate : public UPounceAttackSuccessSubstate
	{
	public:
		unsigned char                                              UnknownData_2FG1[0x30];                                  // 0x0118(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheOni.OniDemonPowerAttackMissSubstate
	 * Size -> 0x0000 (FullSize[0x0120] - InheritedSize[0x0120])
	 */
	class UOniDemonPowerAttackMissSubstate : public UPounceAttackMissSubstate
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheOni.OniDemonPowerAttackObstructSubstate
	 * Size -> 0x0000 (FullSize[0x0128] - InheritedSize[0x0128])
	 */
	class UOniDemonPowerAttackObstructSubstate : public UPounceAttackObstructSubstate
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheOni.OniPounceInteraction
	 * Size -> 0x0030 (FullSize[0x0710] - InheritedSize[0x06E0])
	 */
	class UOniPounceInteraction : public UChargeableInteractionDefinition
	{
	public:
		unsigned char                                              UnknownData_OP5K[0x10];                                  // 0x06E0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UOniDemonModeAttackStateComponent*                   _chargedAttackState;                                     // 0x06F0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDemonModeComponent*                                 _demonModeComponent;                                     // 0x06F8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ASlasherPlayer*                                      _owningSlasher;                                          // 0x0700(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_N7DK[0x8];                                   // 0x0708(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheOni.RenjirosBloodyGlove
	 * Size -> 0x00B0 (FullSize[0x0370] - InheritedSize[0x02C0])
	 */
	class URenjirosBloodyGlove : public UItemAddon
	{
	public:
		unsigned char                                              UnknownData_JNZU[0x8];                                   // 0x02C0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _revealTime;                                             // 0x02C8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GJMD[0x4];                                   // 0x02CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class ACamperPlayer*, class UBloodOrbOverlapRevealToKiller*> _revealEffectPerCamper;                                  // 0x02D0(0x0050) ExportObject, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_OCMZ[0x50];                                  // 0x0320(0x0050) MISSED OFFSET (PADDING)

	public:
		void Authority_OnBloodOrbOverlapBegin(class AActor* overlappingActor, class ABloodOrb* BloodOrb);
		static UClass* StaticClass();
	};

	/**
	 * Class TheOni.StartDemonModeInteraction
	 * Size -> 0x0050 (FullSize[0x0730] - InheritedSize[0x06E0])
	 */
	class UStartDemonModeInteraction : public UChargeableInteractionDefinition
	{
	public:
		float                                                      YawAdjustTime;                                           // 0x06E0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6KEL[0x4];                                   // 0x06E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimationMontageDescriptor                         DemonModeActivationMontage;                              // 0x06E8(0x0020) Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_A8DK[0x28];                                  // 0x0708(0x0028) MISSED OFFSET (PADDING)

	public:
		void SetPlayerOwner(class ADBDPlayer* Owner);
		void OnLevelReadyToPlay();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
