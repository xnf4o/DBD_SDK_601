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
	 * Class DBDGameplay.ActorPairQueryEvaluatorUtilities
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UActorPairQueryEvaluatorUtilities : public UBlueprintFunctionLibrary
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.AimableComponent
	 * Size -> 0x0058 (FullSize[0x0110] - InheritedSize[0x00B8])
	 */
	class UAimableComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_M0QA[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      _occlusionIgnoredActors;                                 // 0x00C0(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		float                                                      _maxAimDistance;                                         // 0x00D0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZNYA[0x4];                                   // 0x00D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAimDirectionProvider*                               _aimDirectionProvider;                                   // 0x00D8(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _useOcclusion;                                           // 0x00E0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_192S[0x3];                                   // 0x00E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _aimPointLerpFactor;                                     // 0x00E4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UAimPointProcessor*>                          _preOcclusionAimPointProcessors;                         // 0x00E8(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8WKB[0x18];                                  // 0x00F8(0x0018) MISSED OFFSET (PADDING)

	public:
		void SetProcessors(TArray<class UAimPointProcessor*> processors);
		void SetOcclusionIgnoredActors(TArray<class AActor*> ignoredActors);
		void SetMaxAimDistance(float maxAimDistance);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.AimDirectionProvider
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UAimDirectionProvider : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.AimPointProcessor
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	class UAimPointProcessor : public UActorComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.AimPointPerlinNoise
	 * Size -> 0x0030 (FullSize[0x00E8] - InheritedSize[0x00B8])
	 */
	class UAimPointPerlinNoise : public UAimPointProcessor
	{
	public:
		unsigned char                                              UnknownData_K889[0x4];                                   // 0x00B8(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _baseInaccuracyNoisePersistence;                         // 0x00BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    _baseInaccuracyNoiseOctaveCount;                         // 0x00C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _baseInaccuracyNoiseAmplitude;                           // 0x00C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JJXO[0x4];                                   // 0x00C8(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _baseInaccuracyNoiseFrequency;                           // 0x00CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RCMX[0x4];                                   // 0x00D0(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _timeOffset;                                             // 0x00D4(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UANV[0x10];                                  // 0x00D8(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetNoiseFrequencyMultiplier(float Multiplier);
		void SetNoiseAmplitudeMultiplier(float Multiplier);
		void SetBaseInaccuracyNoisePersistence(float noisePersistence);
		void SetBaseInaccuracyNoiseOctaveCount(int32_t octaveCount);
		void SetBaseInaccuracyNoiseFrequency(float Frequency);
		void SetBaseInaccuracyNoiseAmplitude(float Amplitude);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.AuraOverriderComponent
	 * Size -> 0x0050 (FullSize[0x0108] - InheritedSize[0x00B8])
	 */
	class UAuraOverriderComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_I757[0x50];                                  // 0x00B8(0x0050) MISSED OFFSET (PADDING)

	public:
		void ResetAura(class AActor* Actor);
		void ForceShowAura(class AActor* Actor, const struct FLinearColor& Color, bool IsAlwaysVisible, float minimumOutlineDistance);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.BaseActorAttackableComponent
	 * Size -> 0x0038 (FullSize[0x00F0] - InheritedSize[0x00B8])
	 */
	class UBaseActorAttackableComponent : public UAttackableComponent
	{
	public:
		unsigned char                                              UnknownData_45WA[0x18];                                  // 0x00B8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTagContainer                               _killerProjectilesThatCanDamageActor;                    // 0x00D0(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.BaseCamperCollectable
	 * Size -> 0x0048 (FullSize[0x04F8] - InheritedSize[0x04B0])
	 */
	class ABaseCamperCollectable : public ACollectable
	{
	public:
		class USpherePlayerOverlapComponent*                       _interactable;                                           // 0x04B0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UInteractor*                                         _collectableInteractor;                                  // 0x04B8(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDropItemInteraction*                                _dropInteraction;                                        // 0x04C0(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCollectItemInteraction*                             _collectInteraction;                                     // 0x04C8(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USphereComponent*                                    _infectablePrimitive;                                    // 0x04D0(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDOutlineComponent*                                _outlineComponent;                                       // 0x04D8(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialHelper*                                     _materialHelper;                                         // 0x04E0(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USurvivorCollectableOutlineUpdateStrategy*           _survivorCollectableOutlineUpdateStrategy;               // 0x04E8(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LNMU[0x8];                                   // 0x04F0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.FlashlightableLightingStrategy
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UFlashlightableLightingStrategy : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.FlashlightablePointsLightingStrategy
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UFlashlightablePointsLightingStrategy : public UFlashlightableLightingStrategy
	{
	public:
		class UPointsProvider*                                     _pointsProvider;                                         // 0x0030(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _impactPointDistanceError;                               // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_TBUJ[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.BlindFlashlightableLightingStrategy
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UBlindFlashlightableLightingStrategy : public UFlashlightablePointsLightingStrategy
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.FlashlightTargetFXComponent
	 * Size -> 0x0048 (FullSize[0x0100] - InheritedSize[0x00B8])
	 */
	class UFlashlightTargetFXComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_JPJV[0x30];                                  // 0x00B8(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       _modifiesBeamAngle;                                      // 0x00E8(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_FE8W[0x7];                                   // 0x00E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFlashlightableComponent*                            _flashlightable;                                         // 0x00F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_B1UU[0x8];                                   // 0x00F8(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnIsLitChanged(bool IsLit);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.BlindFlashlightTargetFXComponent
	 * Size -> 0x0028 (FullSize[0x0128] - InheritedSize[0x0100])
	 */
	class UBlindFlashlightTargetFXComponent : public UFlashlightTargetFXComponent
	{
	public:
		unsigned char                                              UnknownData_7LZT[0x28];                                  // 0x0100(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.CollectableComponentUtilities
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UCollectableComponentUtilities : public UBlueprintFunctionLibrary
	{
	public:
		class ADBDPlayer* STATIC_GetCollector(class UActorComponent* Component);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.DBDCharacterPusherComponent
	 * Size -> 0x0010 (FullSize[0x0180] - InheritedSize[0x0170])
	 */
	class UDBDCharacterPusherComponent : public UCharacterPusherComponent
	{
	public:
		unsigned char                                              UnknownData_LJDF[0x10];                                  // 0x0170(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.DebugIndicator
	 * Size -> 0x0020 (FullSize[0x0250] - InheritedSize[0x0230])
	 */
	class ADebugIndicator : public AActor
	{
	public:
		class UStaticMeshComponent*                                _staticMeshComponent;                                    // 0x0230(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDOutlineComponent*                                _outlineComponent;                                       // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WUTD[0x10];                                  // 0x0240(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetVisible(bool visible);
		void SetColor(const struct FLinearColor& Color);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.EtherealComponent
	 * Size -> 0x0030 (FullSize[0x00E8] - InheritedSize[0x00B8])
	 */
	class UEtherealComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_6Y9X[0x28];                                  // 0x00B8(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       _isEthereal;                                             // 0x00E0(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_AWWJ[0x7];                                   // 0x00E1(0x0007) MISSED OFFSET (PADDING)

	public:
		void Server_SetIsEthereal(float Timestamp, bool Ethereal);
		void OnRep_OnIsEtherealChanged();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.RangeToActorsTrackerStrategy
	 * Size -> 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
	 */
	class URangeToActorsTrackerStrategy : public UObject
	{
	public:
		struct FDBDTunableRowHandle                                _range;                                                  // 0x0030(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8KVP[0x18];                                  // 0x0058(0x0018) MISSED OFFSET (PADDING)

	public:
		void OnInRangeToTrackedActorsChanged(bool InRange);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.ExitGateSwitchesRangeTrackerStrategy
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UExitGateSwitchesRangeTrackerStrategy : public URangeToActorsTrackerStrategy
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.FadeComponent
	 * Size -> 0x0020 (FullSize[0x00D8] - InheritedSize[0x00B8])
	 */
	class UFadeComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnFadePercentChanged;                                    // 0x00B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		float                                                      _fadeDuration;                                           // 0x00C8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SYTJ[0xC];                                   // 0x00CC(0x000C) MISSED OFFSET (PADDING)

	public:
		float GetFadePercent();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.Flashlight
	 * Size -> 0x00A0 (FullSize[0x0598] - InheritedSize[0x04F8])
	 */
	class AFlashlight : public ABaseCamperCollectable
	{
	public:
		unsigned char                                              UnknownData_ACMM[0x60];                                  // 0x04F8(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       _shouldUseCooldowns;                                     // 0x0558(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ARTG[0x3];                                   // 0x0559(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _cooldownWhileOnDuration;                                // 0x055C(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _cooldownWhileOffDuration;                               // 0x0560(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _isOnCooldownAfterTurningOff;                            // 0x0564(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _isOnCooldownAfterTurningOn;                             // 0x0565(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SM5Q[0x32];                                  // 0x0566(0x0032) MISSED OFFSET (PADDING)

	public:
		void Server_ChangeFlashlightCooldownMode(class AFlashlight* Flashlight, int32_t flashlightCooldownMode, float cooldownWhileOnDuration, float cooldownWhileOffDuration);
		class USpotLightComponent* GetSpotlightComponent();
		void DBD_ChangeHeldFlashlightCooldownMode(int32_t flashlightCooldownMode, float cooldownWhileOnDuration, float cooldownWhileOffDuration);
		void DBD_ChangeAllFlashlightsCooldownMode(int32_t flashlightCooldownMode, float cooldownWhileOnDuration, float cooldownWhileOffDuration);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.FlashlightableComponent
	 * Size -> 0x0088 (FullSize[0x0140] - InheritedSize[0x00B8])
	 */
	class UFlashlightableComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnFlashlightAddedEvent;                                  // 0x00B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFlashlightRemovedEvent;                                // 0x00C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFlashlightLitChangedEvent;                             // 0x00D8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UFlashlightableLightingStrategy*                     _lightingStrategy;                                       // 0x00E8(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              _flashlights[0x50];                                      // 0x00F0(0x0050) UNKNOWN PROPERTY: SetProperty

	public:
		void OnFlashlightLitChangedEvent__DelegateSignature(bool IsLit);
		void OnFlashlightAddedRemovedEvent__DelegateSignature(class UFlashlightComponent* Flashlight);
		bool IsLit();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.FlashlightComponent
	 * Size -> 0x0148 (FullSize[0x0200] - InheritedSize[0x00B8])
	 */
	class UFlashlightComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_WOOF[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnFlashlightTurnedOn;                                    // 0x00C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFlashlightTurnedOff;                                   // 0x00D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFlashlightablesUpdated;                                // 0x00E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		struct FDBDTunableRowHandle                                _baseBlindnessDuration;                                  // 0x00F0(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _baseAccuracy;                                           // 0x0118(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _lagDuration;                                            // 0x011C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              _flashlightables[0x50];                                  // 0x0120(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              _autonomousLitFlashlightables[0x50];                     // 0x0170(0x0050) UNKNOWN PROPERTY: SetProperty
		TArray<class UFlashlightableComponent*>                    _replicatedLitFlashlightables;                           // 0x01C0(0x0010) ExportObject, Net, ZeroConstructor, Transient, RepNotify, ContainsInstancedReference, NativeAccessSpecifierPrivate
		bool                                                       _isOwnerLagging;                                         // 0x01D0(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9Y2W[0x2F];                                  // 0x01D1(0x002F) MISSED OFFSET (PADDING)

	public:
		void TurnOn();
		void TurnOff();
		void Server_SetAndUpdateAutonomousLitFlashlightables(TArray<class UFlashlightableComponent*> newLitFlashlightables);
		void OnRep_ReplicatedLitFlashlightables();
		void OnRep_IsOwnerLagging();
		void OnFlashlightEvent__DelegateSignature();
		bool IsOn();
		float GetEffectiveTimeToBlindModifier();
		float GetEffectiveBlindnessDuration();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.FlashlightConeComponent
	 * Size -> 0x0090 (FullSize[0x0148] - InheritedSize[0x00B8])
	 */
	class UFlashlightConeComponent : public UActorComponent
	{
	public:
		struct FVector                                             AIAimBeamLocationOffset;                                 // 0x00B8(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            AIAimBeamRotationOffset;                                 // 0x00C4(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class USceneComponent*                                     _flashlightBottom;                                       // 0x00D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _baseBeamAngle;                                          // 0x00D8(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _baseBeamLength;                                         // 0x0100(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class AActor>                               _cacheCollidingActor;                                    // 0x0128(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_W8VZ[0x18];                                  // 0x0130(0x0018) MISSED OFFSET (PADDING)

	public:
		float GetOcclusionDistance();
		float GetEffectiveConeLength();
		float GetEffectiveConeHalfAngle();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.FlashlightFXComponent
	 * Size -> 0x01A0 (FullSize[0x0258] - InheritedSize[0x00B8])
	 */
	class UFlashlightFXComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnFlashEvent;                                            // 0x00B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class USceneComponent*                                     _tip;                                                    // 0x00C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UStaticMeshComponent*                                _centerGlowMesh;                                         // 0x00D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USplineMeshComponent*                                _beamMesh;                                               // 0x00D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _minimumOcclusionDistanceForSpotlight;                   // 0x00E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JFZH[0x4];                                   // 0x00E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         _flashEffectIntensityCurve;                              // 0x00E8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _flashEffectDuration;                                    // 0x00F0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _spotLightHalfAngle;                                     // 0x00F4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _spotLightIntensity;                                     // 0x00F8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _visualReworkSpotLightIntensity;                         // 0x00FC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _beamBlindingHalfAngle;                                  // 0x0100(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _beamFlashHalfAngle;                                     // 0x0104(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _beamBlindingRatioInterpSpeedWithTarget;                 // 0x0108(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _beamBlindingRatioInterpSpeedWithoutTarget;              // 0x010C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _resizeConeLength;                                       // 0x0110(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_87H8[0x3];                                   // 0x0111(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _centerGlowWidthScaleWithoutBlindTarget;                 // 0x0114(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _centerGlowWidthScaleWithBlindTarget;                    // 0x0118(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _centerGlowWidthScaleDuringFlash;                        // 0x011C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _centerGlowShrinkDistance;                               // 0x0120(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _centerGlowLengthMaxScale;                               // 0x0124(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FAkObservedPlayerSoundLoop                          _aimedAtSoundLoop;                                       // 0x0128(0x0040) Edit, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		class UFlashlightTargetFXComponent*                        _currentBeamModifyingTarget;                             // 0x0168(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              _targets[0x50];                                          // 0x0170(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              UnknownData_E3GK[0x98];                                  // 0x01C0(0x0098) MISSED OFFSET (PADDING)

	public:
		void UpdateFXTargets();
		void UpdateConeEvent(float Length, float halfAngle);
		void PostUpdateEvent();
		void OnTurnedOn();
		void OnTurnedOff();
		void OnStopEvent();
		void OnStartEvent();
		void OnFlashEvent__DelegateSignature();
		void OnDroppedEvent();
		void OnCollectorLocallyObservedChangedEvent(bool IsLocallyObserved);
		void OnCollectedEvent(class ADBDPlayer* collector);
		float GetBlindingSuccessRatio();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.FlashlightUtilities
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UFlashlightUtilities : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.HooksWithSurvivorRangeTrackerStrategy
	 * Size -> 0x0068 (FullSize[0x00D8] - InheritedSize[0x0070])
	 */
	class UHooksWithSurvivorRangeTrackerStrategy : public URangeToActorsTrackerStrategy
	{
	public:
		unsigned char                                              UnknownData_3RYQ[0x68];                                  // 0x0070(0x0068) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.InteractionStarterComponent
	 * Size -> 0x0018 (FullSize[0x00D0] - InheritedSize[0x00B8])
	 */
	class UInteractionStarterComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_0LD0[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UInteractionDefinition*                              _interaction;                                            // 0x00C0(0x0008) ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _shouldStartInteraction;                                 // 0x00C8(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_A2F7[0x7];                                   // 0x00C9(0x0007) MISSED OFFSET (PADDING)

	public:
		void OnRep_ShouldStartInteraction();
		void OnInteractionStarted();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.KillerFlashlightSFXComponent
	 * Size -> 0x00A0 (FullSize[0x0158] - InheritedSize[0x00B8])
	 */
	class UKillerFlashlightSFXComponent : public UActorComponent
	{
	public:
		struct FAkObservedPlayerSoundLoop                          _targetSoundLoop;                                        // 0x00B8(0x0040) Edit, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		TArray<class UFlashlightTargetFXComponent*>                _flashlightTargets;                                      // 0x00F8(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_HH04[0x50];                                  // 0x0108(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.LightBurnable
	 * Size -> 0x0058 (FullSize[0x0110] - InheritedSize[0x00B8])
	 */
	class ULightBurnable : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnBurnChargeCompleteEvent;                               // 0x00B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5L90[0x18];                                  // 0x00C8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      FirecrackerLineOfSightIgnoredActors;                     // 0x00E0(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		class UChargeableComponent*                                _chargeable;                                             // 0x00F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UFlashlightableComponent*                            _flashlightable;                                         // 0x00F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UFirecrackerEffectHandlerComponent*                  _firecrackerEffectHandler;                               // 0x0100(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _isBurning;                                              // 0x0108(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_NSWR[0x7];                                   // 0x0109(0x0007) MISSED OFFSET (PADDING)

	public:
		void OnRep_IsBurning();
		void OnChargeableCompleteEvent(bool COMPLETED, TArray<class AActor*> instigatorsForCompletion);
		void OnBurnChargeEmpty();
		void OnBurnChargeCompleteEvent__DelegateSignature(TArray<class AActor*> instigatorsForCompletion);
		void Authority_OnFlashlightAddedRemoved(class UFlashlightComponent* Flashlight);
		void Authority_OnFirecrackerInRangeBegin(const struct FFirecrackerEffectData& effectData);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.LightBurnableFlashlightTargetFXComponent
	 * Size -> 0x0010 (FullSize[0x0110] - InheritedSize[0x0100])
	 */
	class ULightBurnableFlashlightTargetFXComponent : public UFlashlightTargetFXComponent
	{
	public:
		class ULightBurnable*                                      _burnable;                                               // 0x0100(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ZFR4[0x8];                                   // 0x0108(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.Medkit
	 * Size -> 0x0040 (FullSize[0x0538] - InheritedSize[0x04F8])
	 */
	class AMedkit : public ABaseCamperCollectable
	{
	public:
		class UAkComponent*                                        _akComponent;                                            // 0x04F8(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UChargerComponent*                                   _charger;                                                // 0x0500(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UParticleSystem*                                     _dustRingTemplate;                                       // 0x0508(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAkAudioEvent*                                       _medkitGetAkEvent;                                       // 0x0510(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAkAudioEvent*                                       _medkitDropAkEvent;                                      // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAkAudioBank*                                        _medkitBank;                                             // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _healOtherChargeMultiplier;                              // 0x0528(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_98V3[0xC];                                   // 0x052C(0x000C) MISSED OFFSET (PADDING)

	public:
		void UseCharge(float Seconds);
		void OnMedkitHealedCamper(class ADBDPlayer* healedPlayer);
		bool HasCharge();
		float GetChargeMultiplier();
		void Authority_OnChargeStateChange(bool Empty);
		void Authority_OnAnyOngoingInteractionChanged(bool IsInteracting);
		void Authority_ConsumeIfNotInteracting();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.PointsProvider
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UPointsProvider : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.MeshSocketPointsProvider
	 * Size -> 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
	 */
	class UMeshSocketPointsProvider : public UPointsProvider
	{
	public:
		struct FComponentReference                                 _meshReference;                                          // 0x0030(0x0030) Edit, NativeAccessSpecifierPrivate
		class UMeshComponent*                                      _mesh;                                                   // 0x0060(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class FName>                                        _sockets;                                                // 0x0068(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.MoveToGroundComponent
	 * Size -> 0x0010 (FullSize[0x00C8] - InheritedSize[0x00B8])
	 */
	class UMoveToGroundComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_DBGH[0x10];                                  // 0x00B8(0x0010) MISSED OFFSET (PADDING)

	public:
		void MoveOwnerToGround();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.MultiSceneComponentPointProvider
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UMultiSceneComponentPointProvider : public UPointsProvider
	{
	public:
		TArray<struct FComponentReference>                         _sceneReferences;                                        // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<class USceneComponent*>                             _sceneComponents;                                        // 0x0040(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.PlayerCameraAimDirectionProvider
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UPlayerCameraAimDirectionProvider : public UAimDirectionProvider
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.PlayerInteractionListenerComponent
	 * Size -> 0x0050 (FullSize[0x0108] - InheritedSize[0x00B8])
	 */
	class UPlayerInteractionListenerComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_5TWV[0x50];                                  // 0x00B8(0x0050) MISSED OFFSET (PADDING)

	public:
		void UnlistenToInteractionStart(class ADBDPlayer* Player, const struct FGameplayTag& interactionSemantic);
		void UnlistenToInteractionEnd(class ADBDPlayer* Player, const struct FGameplayTag& interactionSemantic);
		void OnActorDestroyed(class AActor* DestroyedActor);
		void ListenToInteractionStart(class ADBDPlayer* Player, const struct FGameplayTag& interactionSemantic, const class FScriptDelegate& interactionDelegate);
		void ListenToInteractionEnd(class ADBDPlayer* Player, const struct FGameplayTag& interactionSemantic, const class FScriptDelegate& interactionDelegate);
		void InteractionMulticastDelegate__DelegateSignature(class ADBDPlayer* Player, const struct FGameplayTag& interactionSemantic);
		void InteractionDelegate__DelegateSignature(class ADBDPlayer* Player, const struct FGameplayTag& interactionSemantic);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.PlayerLightBurnable
	 * Size -> 0x0000 (FullSize[0x0110] - InheritedSize[0x0110])
	 */
	class UPlayerLightBurnable : public ULightBurnable
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.PlayerMovementUtilities
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UPlayerMovementUtilities : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_Local_SetGamepadYawCurve(class ADBDPlayer* Player, class UCurveFloat* Curve);
		void STATIC_Local_SetGamepadPitchCurve(class ADBDPlayer* Player, class UCurveFloat* Curve);
		void STATIC_Local_ResetRotationScale(class ADBDPlayer* Player, float adjustmentTime);
		void STATIC_Local_ResetGamepadLookCurves(class ADBDPlayer* Player);
		void STATIC_Local_ApplyYawScaleMultiplier(class ADBDPlayer* Player, float Multiplier, float adjustmentTime);
		void STATIC_Local_ApplyRotationScaleMultiplier(class ADBDPlayer* Player, float Multiplier, float adjustmentTime);
		void STATIC_Local_ApplyPitchScaleMultiplier(class ADBDPlayer* Player, float Multiplier, float adjustmentTime);
		void STATIC_Local_ApplyMouseYawScaleMultiplier(class ADBDPlayer* Player, float Multiplier, float adjustmentTime);
		void STATIC_Local_ApplyMousePitchScaleMultiplier(class ADBDPlayer* Player, float Multiplier, float adjustmentTime);
		void STATIC_Local_ApplyGamepadYawScaleMultiplier(class ADBDPlayer* Player, float Multiplier, float adjustmentTime);
		void STATIC_Local_ApplyGamepadPitchScaleMultiplier(class ADBDPlayer* Player, float Multiplier, float adjustmentTime);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.PoseableHusk
	 * Size -> 0x0018 (FullSize[0x0250] - InheritedSize[0x0238])
	 */
	class APoseableHusk : public ABaseVFX
	{
	public:
		class USkeletalMeshComponent*                              _huskMesh;                                               // 0x0238(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCustomizedSkeletalMesh*                             _huskCustomizedSkeletalMesh;                             // 0x0240(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _updateWeaponAccessories;                                // 0x0248(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_IG8F[0x7];                                   // 0x0249(0x0007) MISSED OFFSET (PADDING)

	public:
		void SetScalarParameterOnAllChildrenMeshes(const class FName& ParameterName, float value);
		void SetHuskVisibility(bool visible);
		void InitializeHusk(class UCustomizedSkeletalMesh* customizedSkeletalMeshToCopy);
		void Cosmetic_OnAnimationPoseCaptured();
		void Cosmetic_InitializeHusk();
		void CapturePose();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.PositionLagCompensationComponent
	 * Size -> 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
	 */
	class UPositionLagCompensationComponent : public UActorComponent
	{
	public:
		float                                                      _maxExtrapolationDurationInSeconds;                      // 0x00B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _maxInterpolationToServerMoveInSeconds;                  // 0x00BC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.PowerChargeComponent
	 * Size -> 0x00A8 (FullSize[0x0160] - InheritedSize[0x00B8])
	 */
	class UPowerChargeComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnPowerChargeChanged;                                    // 0x00B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IPJD[0x58];                                  // 0x00C8(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSpeedBasedNetSyncedValue                           _currentCharge;                                          // 0x0120(0x0038) Net, Transient, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_HPCC[0x4];                                   // 0x0158(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       _forceFullCharge;                                        // 0x015C(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KQPK[0x3];                                   // 0x015D(0x0003) MISSED OFFSET (PADDING)

	public:
		void OnRep_CurrentCharge();
		void OnCurrentChargeChanged(float value);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.PowerChargePresentationItemProgressComponent
	 * Size -> 0x0018 (FullSize[0x00D0] - InheritedSize[0x00B8])
	 */
	class UPowerChargePresentationItemProgressComponent : public UPresentationItemProgressComponent
	{
	public:
		class UPowerChargeComponent*                               _powerChargeComponent;                                   // 0x00B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPowerToggleComponent*                               _powerToggleComponent;                                   // 0x00C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _chargeReadyThreshold;                                   // 0x00C8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8I9T[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.PowerToggleComponent
	 * Size -> 0x0020 (FullSize[0x00D8] - InheritedSize[0x00B8])
	 */
	class UPowerToggleComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_M8K9[0x18];                                  // 0x00B8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       _isInPower;                                              // 0x00D0(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_3FJT[0x7];                                   // 0x00D1(0x0007) MISSED OFFSET (PADDING)

	public:
		void OnRep_IsInPower();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.RangeToActorsTrackerComponent
	 * Size -> 0x0010 (FullSize[0x00C8] - InheritedSize[0x00B8])
	 */
	class URangeToActorsTrackerComponent : public UActorComponent
	{
	public:
		TArray<class URangeToActorsTrackerStrategy*>               _rangeTrackers;                                          // 0x00B8(0x0010) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, NoClear, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected

	public:
		void OnLevelReadyToPlay();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.RangeToActorsTrackerDefaultStrategy
	 * Size -> 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
	 */
	class URangeToActorsTrackerDefaultStrategy : public URangeToActorsTrackerStrategy
	{
	public:
		class UClass*                                              _actorClass;                                             // 0x0070(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.SceneComponentPointProvider
	 * Size -> 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
	 */
	class USceneComponentPointProvider : public UPointsProvider
	{
	public:
		struct FComponentReference                                 _sceneReference;                                         // 0x0030(0x0030) Edit, NativeAccessSpecifierPrivate
		class USceneComponent*                                     _sceneComponent;                                         // 0x0060(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.SightRevealableComponent
	 * Size -> 0x0218 (FullSize[0x02D0] - InheritedSize[0x00B8])
	 */
	class USightRevealableComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_L8FS[0x48];                                  // 0x00B8(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTagContainer                               _ignoredTags;                                            // 0x0100(0x0020) Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _revealTimeBase;                                         // 0x0120(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _revealRate;                                             // 0x01A0(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _revealRegressionRate;                                   // 0x0220(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_38L1[0x30];                                  // 0x02A0(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.StruggleComponent
	 * Size -> 0x00C8 (FullSize[0x0180] - InheritedSize[0x00B8])
	 */
	class UStruggleComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_TR7F[0x58];                                  // 0x00B8(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    _skillCheckCount;                                        // 0x0110(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_B4AF[0x6C];                                  // 0x0114(0x006C) MISSED OFFSET (PADDING)

	public:
		void OnSkillCheckEnd(bool hadInput, bool success, bool Bonus, ESkillCheckCustomType Type, class ADBDPlayer* Player);
		void Local_TryActivateSkillCheck();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.SurvivorAimStanceCameraDirectionProvider
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class USurvivorAimStanceCameraDirectionProvider : public UAimDirectionProvider
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.SurvivorAimStateComponent
	 * Size -> 0x0060 (FullSize[0x0118] - InheritedSize[0x00B8])
	 */
	class USurvivorAimStateComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_1YPF[0x10];                                  // 0x00B8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ACollectable*                                        _aimableCollectable;                                     // 0x00C8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_266W[0x48];                                  // 0x00D0(0x0048) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.TracingConeFlashlightableLightingStrategy
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UTracingConeFlashlightableLightingStrategy : public UFlashlightableLightingStrategy
	{
	public:
		int32_t                                                    _aroundConeCircleTraceCount;                             // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_X4OF[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.UnhookedSurvivorTrackerComponent
	 * Size -> 0x0030 (FullSize[0x00E8] - InheritedSize[0x00B8])
	 */
	class UUnhookedSurvivorTrackerComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_35BD[0x30];                                  // 0x00B8(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.VisibleHatchRangeTrackerStrategy
	 * Size -> 0x0028 (FullSize[0x0098] - InheritedSize[0x0070])
	 */
	class UVisibleHatchRangeTrackerStrategy : public URangeToActorsTrackerStrategy
	{
	public:
		unsigned char                                              UnknownData_BSQF[0x28];                                  // 0x0070(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.WiggleComponent
	 * Size -> 0x0118 (FullSize[0x01D0] - InheritedSize[0x00B8])
	 */
	class UWiggleComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_HW6X[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UChargeableComponent*                                _wiggleProgress;                                         // 0x00C0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class ASlasherPlayer>                       _killerWigglingFrom;                                     // 0x00C8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class UInputComponent>                      _inputComponent;                                         // 0x00D0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XBLJ[0xE8];                                  // 0x00D8(0x00E8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _wiggleInputLockTime;                                    // 0x01C0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2582[0xC];                                   // 0x01C4(0x000C) MISSED OFFSET (PADDING)

	public:
		void Server_SetPlayerWiggleSkillCheckEnabled(bool Enabled);
		void Server_OnWiggleEnd();
		void OnWiggleSkillCheckEnd(bool hadInput, bool success, bool Bonus, ESkillCheckCustomType Type, class ADBDPlayer* Player);
		void OnWiggleInput();
		void OnWiggleEnd();
		void OnPlayerPickedUpStart(class ADBDPlayer* picker);
		void OnPlayerPickedUpEnd(class ADBDPlayer* picker);
		void OnPickedUpSkillCheckEnd(bool hadInput, bool success, bool Bonus, ESkillCheckCustomType Type, class ADBDPlayer* Player);
		void OnKeyBindingsChanged();
		void OnHideWiggleSkillCheck(ESkillCheckCustomType Type);
		void Local_OnLevelReadyToPlay();
		class UChargeableComponent* GetWiggleChargeable();
		void DBD_SetWiggleProgress(float ProgressPercent);
		void Authority_AddWiggleCharge(float ChargeAmount);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.WiggleFreeComponent
	 * Size -> 0x0050 (FullSize[0x0108] - InheritedSize[0x00B8])
	 */
	class UWiggleFreeComponent : public UActorComponent
	{
	public:
		class ASlasherPlayer*                                      _killerWigglingFrom;                                     // 0x00B8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4M8Y[0x48];                                  // 0x00C0(0x0048) MISSED OFFSET (PADDING)

	public:
		void Authority_OnWiggleEnd();
		void Authority_OnPlayerPickedUpEnd(class ADBDPlayer* picker);
		void Authority_OnLevelReadyToPlay();
		void Authority_OnChargeableCompleteEvent(bool COMPLETED, TArray<class AActor*> instigatorsForCompletion);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.WiggleMotionComponent
	 * Size -> 0x0058 (FullSize[0x0110] - InheritedSize[0x00B8])
	 */
	class UWiggleMotionComponent : public UActorComponent
	{
	public:
		class ADBDPlayer*                                          _carriedPlayer;                                          // 0x00B8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDBDCharacterMovementComponent*                      _ownerMovementComponent;                                 // 0x00C0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_DH3R[0x48];                                  // 0x00C8(0x0048) MISSED OFFSET (PADDING)

	public:
		void SetIsBeingWiggled(bool isBeingWiggled);
		void Server_SetIsBeingWiggled(bool isBeingWiggled);
		void OnWiggleSkillCheckEnd(bool hadInput, bool success, bool Bonus, ESkillCheckCustomType Type, class ADBDPlayer* Player);
		void OnSurvivorRemoved(class ADBDPlayer* Target);
		void OnSurvivorPickedUp(class ADBDPlayer* Target);
		void OnHideWiggleSkillCheck(ESkillCheckCustomType Type);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
