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
	 * Class TheOnryo.Addon_K27Power_13
	 * Size -> 0x0008 (FullSize[0x02C8] - InheritedSize[0x02C0])
	 */
	class UAddon_K27Power_13 : public UItemAddon
	{
	public:
		float                                                      _condemnStackNumber;                                     // 0x02C0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _onlyGiveStackForHealingFromInjuredToHealthy;            // 0x02C4(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_M6UJ[0x3];                                   // 0x02C5(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheOnryo.Addon_K27Power_17
	 * Size -> 0x0018 (FullSize[0x02E8] - InheritedSize[0x02D0])
	 */
	class UAddon_K27Power_17 : public UOnEventBaseAddon
	{
	public:
		float                                                      _distanceOfSightFromSurvivorToKiller;                    // 0x02D0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _survivorScreamRevealDuration;                           // 0x02D4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              _screamRevealComponentClass;                             // 0x02D8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LY4V[0x8];                                   // 0x02E0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheOnryo.Addon_K27Power_18
	 * Size -> 0x0010 (FullSize[0x02E0] - InheritedSize[0x02D0])
	 */
	class UAddon_K27Power_18 : public UOnEventBaseAddon
	{
	public:
		class UClass*                                              _survivorImposedEffectClass;                             // 0x02D0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _survivorInRangeDistance;                                // 0x02D8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _hinderedSeconds;                                        // 0x02DC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheOnryo.Addon_K27Power_19
	 * Size -> 0x0000 (FullSize[0x02C0] - InheritedSize[0x02C0])
	 */
	class UAddon_K27Power_19 : public UItemAddon
	{
	public:
		void Authority_OnIntroCompleted();
		static UClass* StaticClass();
	};

	/**
	 * Class TheOnryo.Addon_K27Power_20
	 * Size -> 0x0020 (FullSize[0x02F0] - InheritedSize[0x02D0])
	 */
	class UAddon_K27Power_20 : public UOnEventBaseAddon
	{
	public:
		float                                                      _distanceFromSurvivorToTVToRevealAura;                   // 0x02D0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _heightOffsetLowerBoundToRevealAura;                     // 0x02D4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _heightOffsetUpperBoundToRevealAura;                     // 0x02D8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _survivorAuraRevealDuration;                             // 0x02DC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _revealSurvivorsAroundPoweredTVs;                        // 0x02E0(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _revealSurvivorsAroundTurnedOffTVs;                      // 0x02E1(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_POXW[0x6];                                   // 0x02E2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _timedRevealToKillerEffect;                              // 0x02E8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheOnryo.Addon_K27Power_21
	 * Size -> 0x0018 (FullSize[0x02D8] - InheritedSize[0x02C0])
	 */
	class UAddon_K27Power_21 : public UItemAddon
	{
	public:
		TArray<class AOnryoTelevision*>                            _lastTurnedOffTelevisionsByOnryo;                        // 0x02C0(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		int32_t                                                    _numberOfTVsToTurnOn;                                    // 0x02D0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_916Y[0x4];                                   // 0x02D4(0x0004) MISSED OFFSET (PADDING)

	public:
		void Cosmetic_OnAddonTriggered(bool televisionsWerePowered, class ASlasherPlayer* killer);
		void Client_OnAddonTriggered(bool televisionsWerePowered);
		static UClass* StaticClass();
	};

	/**
	 * Class TheOnryo.BaseManifestInteraction
	 * Size -> 0x0000 (FullSize[0x0720] - InheritedSize[0x0720])
	 */
	class UBaseManifestInteraction : public UBasicChargeableInteraction
	{
	public:
		class UManifestationComponent*                             _manifestationComponent;                                 // 0x0718(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void Cosmetic_OnInteractionSucceeded(class ADBDPlayer* onryo);
		void Cosmetic_OnInteractionStarted(class ADBDPlayer* onryo);
		void Cosmetic_OnInteractionCancelled(class ADBDPlayer* onryo);
		static UClass* StaticClass();
	};

	/**
	 * Class TheOnryo.CondemnedComponent
	 * Size -> 0x02D0 (FullSize[0x0388] - InheritedSize[0x00B8])
	 */
	class UCondemnedComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_BXGN[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _maxCondemnedLevel;                                      // 0x00C0(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _killerInstinctRevealDurationOnFullyCondemned;           // 0x00E8(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _stacksOnTurnOffTV;                                      // 0x0110(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _stacksOnRetrieveVHS;                                    // 0x0138(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _stacksRemovedOnInsert;                                  // 0x0160(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _minDistanceForSelectedTV;                               // 0x0188(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _maxDistanceForSelectedTV;                               // 0x01B0(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _timePerCondemnStack;                                    // 0x01D8(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FGameplayTag>                                _analyticScoreTag;                                       // 0x0258(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate
		float                                                      _condemnedLevel;                                         // 0x0268(0x0004) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _isHoldingVHS;                                           // 0x026C(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_PQS2[0x3B];                                  // 0x026D(0x003B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStatusEffect*                                       _condemnKillerInstinctEffect;                            // 0x02A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8G50[0x18];                                  // 0x02B0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGameplayTag>                                _reactivateCondemnProgressEvents;                        // 0x02C8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		class FName                                                _tapeItemId;                                             // 0x02D8(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SEP8[0x34];                                  // 0x02E4(0x0034) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _rangeToStopCondemnProgressAfterChase;                   // 0x0318(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _timeAwayFromKillerToResumeCondemn;                      // 0x0340(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5V79[0x20];                                  // 0x0368(0x0020) MISSED OFFSET (PADDING)

	public:
		void OnRep_HoldingVHS();
		void OnRep_CondemnedLevel(float previousValue);
		void OnKillerSet(class ASlasherPlayer* killer);
		float GetCondemnedPercent();
		void DBD_SetCondemnMoriableAndDownAllSurvivors();
		void DBD_SetCondemnedLevel(float Level);
		void Cosmetic_OnReceiveTape(class ACamperPlayer* camper);
		void Cosmetic_OnPickedUpByKiller(class ACamperPlayer* camper);
		void Cosmetic_OnLoseTape(class ACamperPlayer* camper);
		void Cosmetic_OnLoseCondemnStack(class ACamperPlayer* camper, float currentStacks);
		void Cosmetic_OnGainCondemnStack(class ACamperPlayer* camper, float currentStacks);
		void Cosmetic_OnFullyCondemned(class ACamperPlayer* camper, float currentStacks);
		void Cosmetic_OnDroppedByKiller(class ACamperPlayer* camper);
		static UClass* StaticClass();
	};

	/**
	 * Class TheOnryo.CondemnMoriInteraction
	 * Size -> 0x0000 (FullSize[0x0770] - InheritedSize[0x0770])
	 */
	class UCondemnMoriInteraction : public UKillInteractionDefinition
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheOnryo.SurvivorTelevisionInteraction
	 * Size -> 0x0000 (FullSize[0x0720] - InheritedSize[0x0720])
	 */
	class USurvivorTelevisionInteraction : public UBasicChargeableInteraction
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheOnryo.InsertVHS
	 * Size -> 0x0000 (FullSize[0x0720] - InheritedSize[0x0720])
	 */
	class UInsertVHS : public USurvivorTelevisionInteraction
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheOnryo.K27Addon_16_ScreamRevealComponent
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	class UK27Addon_16_ScreamRevealComponent : public UActorComponent
	{
	public:
		void Server_RevealAndMakeSurvivorScream(class ADBDPlayer* survivor, float screamRevealDuration);
		void Multicast_RevealAndMakeSurvivorScream(class ADBDPlayer* survivor, float screamRevealDuration);
		void BP_RevealAndMakeSurvivorScream(class ADBDPlayer* survivorPlayer, float screamRevealDuration);
		static UClass* StaticClass();
	};

	/**
	 * Class TheOnryo.K27P01
	 * Size -> 0x0018 (FullSize[0x03E8] - InheritedSize[0x03D0])
	 */
	class UK27P01 : public UPerk
	{
	public:
		unsigned char                                              UnknownData_Q7AF[0x8];                                   // 0x03D0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _survivorAuraRevealDuration[0x3];                        // 0x03D8(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0DUA[0x4];                                   // 0x03E4(0x0004) MISSED OFFSET (PADDING)

	public:
		void Authority_OnSurvivorUnhookedOffScourgeHook(const struct FGameEventData& GameEventData);
		static UClass* StaticClass();
	};

	/**
	 * Class TheOnryo.K27P02
	 * Size -> 0x0068 (FullSize[0x0438] - InheritedSize[0x03D0])
	 */
	class UK27P02 : public UPerk
	{
	public:
		float                                                      _activePerkDuration[0x3];                                // 0x03D0(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _regressionModifier[0x3];                                // 0x03DC(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TMap<class AGenerator*, struct FFastTimer>                 _authority_affectedGeneratorsAndActiveTimers;            // 0x03E8(0x0050) Transient, NativeAccessSpecifierPrivate

	public:
		void Multicast_ShowBubbleNotification(class AGenerator* triggeringGenerator);
		void Multicast_AddGeneratorAura(class AGenerator* Generator);
		void Cosmetic_ShowBubbleNotification(class AGenerator* triggeringGenerator);
		static UClass* StaticClass();
	};

	/**
	 * Class TheOnryo.K27P03
	 * Size -> 0x00C8 (FullSize[0x0498] - InheritedSize[0x03D0])
	 */
	class UK27P03 : public UPerk
	{
	public:
		struct FLinearColor                                        _generatorBlockedAuraColorForKiller;                     // 0x03D0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      _generatorProgressionActivation[0x3];                    // 0x03E0(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _generatorBlockedDuration[0x3];                          // 0x03EC(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TMap<TWeakObjectPtr<class AGenerator>, struct FFastTimer>  _authority_blockedGeneratorsAndTimeToUnblock;            // 0x03F8(0x0050) Transient, NativeAccessSpecifierPrivate
		TMap<TWeakObjectPtr<class ACamperPlayer>, TWeakObjectPtr<class AGenerator>> _authority_affectedRepairersAndTheirGenerators;          // 0x0448(0x0050) Transient, UObjectWrapper, NativeAccessSpecifierPrivate

	public:
		void Multicast_HighlightBlockedGeneratorForKiller(class AGenerator* Generator);
		static UClass* StaticClass();
	};

	/**
	 * Class TheOnryo.ManifestationComponent
	 * Size -> 0x03D0 (FullSize[0x0488] - InheritedSize[0x00B8])
	 */
	class UManifestationComponent : public UActorComponent
	{
	public:
		struct FTunableStat                                        _lingeringFlickerDuration;                               // 0x00B8(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _maxTrackedTimeSinceManifest;                            // 0x0138(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _manifestInteractionUndetectableLingerTime;              // 0x0160(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _teleportManifestUndetectableLingeringDuration;          // 0x01E0(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _lingeringUndetectableDurationFromOtherSources;          // 0x0260(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FStatProperty                                       _scorePercent;                                           // 0x02E0(0x0088) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QDST[0x28];                                  // 0x0368(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UOnryoVisibilityComponent*                           _onryoVisibilityComponent;                               // 0x0390(0x0008) ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _onryoVisibilityComponentClass;                          // 0x0398(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _isManifested;                                           // 0x03A0(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YFGU[0x3];                                   // 0x03A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _lingeringUndetectableEndTimeStamp;                      // 0x03A4(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UR0Q[0xE0];                                  // 0x03A8(0x00E0) MISSED OFFSET (PADDING)

	public:
		void OnRep_LingeringUndetectableEndTimeStamp();
		void OnRep_IsManifested();
		void OnLingeringUndetectableTimerCompleted();
		void Multicast_OnManifestationTransitionComplete();
		void Multicast_OnManifestationChanged(bool isManifested, bool isImmediateManifest);
		void Authority_OnMoriStarted();
		static UClass* StaticClass();
	};

	/**
	 * Class TheOnryo.ManifestInteraction
	 * Size -> 0x0010 (FullSize[0x0730] - InheritedSize[0x0720])
	 */
	class UManifestInteraction : public UBaseManifestInteraction
	{
	public:
		class UCurveFloat*                                         _postManifestSpeedCurve;                                 // 0x0720(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _postManifestSpeedCurveDuration;                         // 0x0728(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7XED[0x4];                                   // 0x072C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheOnryo.NearPoweredTelevisionWithLingerTime
	 * Size -> 0x0098 (FullSize[0x0180] - InheritedSize[0x00E8])
	 */
	class UNearPoweredTelevisionWithLingerTime : public UEventDrivenModifierCondition
	{
	public:
		float                                                      _distanceFromTelevision;                                 // 0x00E8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _lingerDuration;                                         // 0x00EC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FActorPairQueryHeightRange                          _heightRange;                                            // 0x00F0(0x0008) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XW2X[0x88];                                  // 0x00F8(0x0088) MISSED OFFSET (PADDING)

	public:
		void OnLevelReadyToPlay();
		float GetPercentRemainingDuration();
		static UClass* StaticClass();
	};

	/**
	 * Class TheOnryo.OnryoAfterImageComponent
	 * Size -> 0x00C8 (FullSize[0x0180] - InheritedSize[0x00B8])
	 */
	class UOnryoAfterImageComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_8IFY[0xC1];                                  // 0x00B8(0x00C1) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       _hideAfterImageDuringInteractions;                       // 0x0179(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6V7Y[0x6];                                   // 0x017A(0x0006) MISSED OFFSET (PADDING)

	public:
		void ShouldShowAfterImageChanged(bool shouldBeVisible);
		bool ShouldShowAfterImage();
		bool IsOnryoInvisible();
		bool IsInteracting();
		bool IsAttacking();
		class ASlasherPlayer* GetKiller();
		static UClass* StaticClass();
	};

	/**
	 * Class TheOnryo.OnryoAnimInstance
	 * Size -> 0x0030 (FullSize[0x0630] - InheritedSize[0x0600])
	 */
	class UOnryoAnimInstance : public UKillerAnimInstance
	{
	public:
		float                                                      _teleportStartUpDuration;                                // 0x05FC(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isCrawlingOutOfTV;                                      // 0x0600(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_K7NO[0x3];                                   // 0x0601(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _crawlingOutDuration;                                    // 0x0604(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isTeleportCancelled;                                    // 0x0608(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_NIJF[0x3];                                   // 0x0609(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _teleportCancelledDuration;                              // 0x060C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isEnteringManifest;                                     // 0x0610(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isExitingManifest;                                      // 0x0611(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isInOtherWorld;                                         // 0x0612(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_EVWL[0x1D];                                  // 0x0613(0x001D) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheOnryo.OnryoFXInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UOnryoFXInterface : public UInterface
	{
	public:
		void Cosmetic_OnTeleportSuccess();
		void Cosmetic_OnTeleportStart();
		void Cosmetic_OnTeleportFinished();
		void Cosmetic_OnTeleportCancelled();
		void Cosmetic_OnManifestStateChanged(bool isManifested, bool isImmediateManifest);
		void Cosmetic_OnKillerVisibilityChanged(bool IsVisible, bool isFlickering, bool isManifested, bool isInvisibleDueToOutOfVisibiltyRange, bool force);
		void Cosmetic_OnChargeUnmanifestSuccess();
		void Cosmetic_OnChargeUnmanifestStart();
		void Cosmetic_OnChargeUnmanifestCancelled();
		void Cosmetic_OnChargeManifestSuccess();
		void Cosmetic_OnChargeManifestStart();
		void Cosmetic_OnChargeManifestCancelled();
		static UClass* StaticClass();
	};

	/**
	 * Class TheOnryo.OnryoPower
	 * Size -> 0x00E0 (FullSize[0x0590] - InheritedSize[0x04B0])
	 */
	class AOnryoPower : public ACollectable
	{
	public:
		class UClass*                                              _condemnedComponentClass;                                // 0x04B0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _manifestationComponentClass;                            // 0x04B8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FStatusEffectSpawnData>                      _effects;                                                // 0x04C0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate
		struct FPlayerStatusEffectSpawnerHelper                    _effectSpawner;                                          // 0x04D0(0x0088) Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_OD0Z[0x8];                                   // 0x0558(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UOnryoTeleportTargeterComponent*                     _televisionTargeter;                                     // 0x0560(0x0008) Edit, ExportObject, Net, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UManifestationComponent*                             _manifestationComponent;                                 // 0x0568(0x0008) ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class AOnryoTelevision*>                            _televisions;                                            // 0x0570(0x0010) Net, ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		class UClass*                                              _televisionClass;                                        // 0x0580(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UInteractionDefinition*                              _onryoPowerCooldownInteraction;                          // 0x0588(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void PowerCooldownEnd_Cosmetic();
		static UClass* StaticClass();
	};

	/**
	 * Class TheOnryo.OnryoPowerPresentationComponent
	 * Size -> 0x0020 (FullSize[0x00D8] - InheritedSize[0x00B8])
	 */
	class UOnryoPowerPresentationComponent : public UPresentationItemProgressComponent
	{
	public:
		class UOnryoTVInitialCooldownStateComponent*               _cooldownState;                                          // 0x00B8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_3W9J[0x18];                                  // 0x00C0(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheOnryo.OnryoTeleportInteraction
	 * Size -> 0x0180 (FullSize[0x08A0] - InheritedSize[0x0720])
	 */
	class UOnryoTeleportInteraction : public UBasicChargeableInteraction
	{
	public:
		class ASlasherPlayer*                                      _cachedOwningKiller;                                     // 0x0718(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AOnryoTelevision*                                    _currentTargetTelevision;                                // 0x0720(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RDLM[0x8];                                   // 0x0728(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _teleportExitAnimDuration;                               // 0x0730(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _teleportCancelledAnimDuration;                          // 0x0758(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _rangeToApplyCondemn;                                    // 0x0780(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _postTeleportSpeedDuration;                              // 0x07A8(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         _postTeleportSpeedCurve;                                 // 0x07D0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FStatProperty                                       _scorePercent;                                           // 0x07D8(0x0088) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         _postTeleportAlternateSpeedCurve;                        // 0x0860(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _offsetHeight;                                           // 0x0868(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _rayCastLength;                                          // 0x086C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _cameraStrategyClass;                                    // 0x0870(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         _cameraMaximumAngleFactorCurve;                          // 0x0878(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_OHC3[0x10];                                  // 0x0880(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UConeAroundDirectionCameraStrategy*                  _cameraStrategy;                                         // 0x0890(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_P2UM[0x8];                                   // 0x0898(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheOnryo.OnryoTelevision
	 * Size -> 0x0318 (FullSize[0x0640] - InheritedSize[0x0328])
	 */
	class AOnryoTelevision : public AInteractable
	{
	public:
		unsigned char                                              UnknownData_XR0W[0x18];                                  // 0x0328(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     _teleportPosition;                                       // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isKillerInOtherWorld;                                   // 0x0348(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9TTR[0x7];                                   // 0x0349(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTelevisionOutlineUpdateStrategy*                    _televisionOutlineUpdateStrategy;                        // 0x0350(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ULocalPlayerTrackerComponent*                        _localPlayerTracker;                                     // 0x0358(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMapActorComponent*                                  _mapActorComponent;                                      // 0x0360(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UOnryoTVAutoPowerComponent*                          _autoPowerComponent;                                     // 0x0368(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class ADBDPlayer*>                                  _survivorsThatCanInsertTape;                             // 0x0370(0x0010) Net, ZeroConstructor, RepNotify, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_P763[0x38];                                  // 0x0380(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       _isPowered;                                              // 0x03B8(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_D9HX[0x17];                                  // 0x03B9(0x0017) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              _nearbySurvivorsWithoutTape[0x50];                       // 0x03B9(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              UnknownData_TOMM[0x50];                                  // 0x0420(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _distanceNearTVWithoutTape;                              // 0x0470(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _survivorTurnOffTVDuration;                              // 0x0498(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _teleportTurnOffDuration;                                // 0x0518(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _survivorInsertTapeTurnOffDuration;                      // 0x0598(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _shouldRepowerOtherTelevisionsWhenAllTurnedOff;          // 0x0618(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnRep_SurvivorsThatCanInsertTape();
		void OnRep_IsPowered(bool previousIsPowered);
		void OnLocallyObservedChanged();
		void OnKillerSet(class ASlasherPlayer* killer);
		void OnCosmeticTransitionStateFinished();
		bool IsAnySurvivorWithoutTapeNearby();
		ETelevisionCosmeticState GetTelevisionCosmeticState();
		void Cosmetic_SetIsTeleportTarget(bool Target);
		void Cosmetic_OnTVSelectedByLocalSurvivor(class ADBDPlayer* survivor);
		void Cosmetic_OnTelevisionCosmeticStateChanged(ETelevisionCosmeticState NextState, ETelevisionCosmeticState previousState);
		void Cosmetic_OnTeleportStarted();
		void Cosmetic_OnTeleportCompleted();
		void Cosmetic_OnTeleportCancelled();
		void Cosmetic_OnStatusEffectZoneVFXActiveChanged(bool Active);
		void Cosmetic_OnCamperCanInsertTapeChanged(bool canInsertTape);
		void Authority_OnRepowerTimerDone();
		static UClass* StaticClass();
	};

	/**
	 * Class TheOnryo.OnryoTVAutoPowerComponent
	 * Size -> 0x0018 (FullSize[0x00D0] - InheritedSize[0x00B8])
	 */
	class UOnryoTVAutoPowerComponent : public UActorComponent
	{
	public:
		class UClass*                                              _cooldownStateClass;                                     // 0x00B8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _powerTVOnBeginPlay;                                     // 0x00C0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TR9D[0xF];                                   // 0x00C1(0x000F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheOnryo.OnryoTVInitialCooldownStateComponent
	 * Size -> 0x0050 (FullSize[0x0108] - InheritedSize[0x00B8])
	 */
	class UOnryoTVInitialCooldownStateComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_Y3EA[0x18];                                  // 0x00B8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _initialTVCooldown;                                      // 0x00D0(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTimerObject*                                        _cooldownTimer;                                          // 0x00F8(0x0008) ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _isDone;                                                 // 0x0100(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KPV1[0x7];                                   // 0x0101(0x0007) MISSED OFFSET (PADDING)

	public:
		void OnRep_IsDone();
		void OnCooldownDone();
		void Authority_TryStartCooldown();
		static UClass* StaticClass();
	};

	/**
	 * Class TheOnryo.OnryoUnmanifestCooldownInteraction
	 * Size -> 0x0030 (FullSize[0x05F0] - InheritedSize[0x05C0])
	 */
	class UOnryoUnmanifestCooldownInteraction : public UInteractionDefinition
	{
	public:
		struct FDBDTunableRowHandle                                _onryoPowerCooldownTime;                                 // 0x05B8(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         _playedCooldownSpeedCurve;                               // 0x05E0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_OVJS[0x8];                                   // 0x05E8(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetOnryoPower(class AOnryoPower* OnryoPower);
		static UClass* StaticClass();
	};

	/**
	 * Class TheOnryo.OnryoVisibilityComponent
	 * Size -> 0x0158 (FullSize[0x0210] - InheritedSize[0x00B8])
	 */
	class UOnryoVisibilityComponent : public UActorComponent
	{
	public:
		bool                                                       _isKillerVisible;                                        // 0x00B8(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isInKillerSightRange;                                   // 0x00B9(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MVJZ[0x6];                                   // 0x00BA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGameplayTag>                                _killerRevealingStateTags;                               // 0x00C0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _killerVisibleMaxDistance;                               // 0x00D0(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TMap<EFlickerType, struct FFlickerSettings>                _flickerSettings;                                        // 0x00F8(0x0050) Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JH06[0x1];                                   // 0x0148(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       _isInIntroPhase;                                         // 0x0149(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _isManifested;                                           // 0x014A(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _isInManifestingTransition;                              // 0x014B(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FUS6[0xC4];                                  // 0x014C(0x00C4) MISSED OFFSET (PADDING)

	public:
		void OnLocallyObservedChanged();
		void OnKillerInSurvivorSightRangeChanged(bool InRange);
		void OnIntroCompleted();
		void Multicast_OnManifestationStateChanged(bool isManifested, bool isImmediateManifest);
		static UClass* StaticClass();
	};

	/**
	 * Class TheOnryo.RetrieveVHS
	 * Size -> 0x0000 (FullSize[0x0720] - InheritedSize[0x0720])
	 */
	class URetrieveVHS : public USurvivorTelevisionInteraction
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheOnryo.S30P01
	 * Size -> 0x0010 (FullSize[0x03E0] - InheritedSize[0x03D0])
	 */
	class US30P01 : public UPerk
	{
	public:
		float                                                      _perkEffectActiveDuration[0x3];                          // 0x03D0(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BQ1O[0x4];                                   // 0x03DC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheOnryo.S30P02
	 * Size -> 0x0030 (FullSize[0x0400] - InheritedSize[0x03D0])
	 */
	class US30P02 : public UPerk
	{
	public:
		float                                                      _auraReadingDistance[0x3];                               // 0x03D0(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _healingOthersBonus[0x3];                                // 0x03DC(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_DCMV[0x8];                                   // 0x03E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _revealAuraStatusEffectToImpose;                         // 0x03F0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _showHUDIconStatusEffectToImpose;                        // 0x03F8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		float GetHealingOthersBonus();
		static UClass* StaticClass();
	};

	/**
	 * Class TheOnryo.S30P03
	 * Size -> 0x0010 (FullSize[0x0498] - InheritedSize[0x0488])
	 */
	class US30P03 : public UBoonPerk
	{
	public:
		float                                                      _hasteLingerDuration[0x3];                               // 0x0488(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_S10R[0x4];                                   // 0x0494(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheOnryo.TelevisionIterativeWeightAdjustmentStrategy
	 * Size -> 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
	 */
	class UTelevisionIterativeWeightAdjustmentStrategy : public UIterativeWeightAdjustmentStrategy
	{
	public:
		TArray<class USceneComponent*>                             _unmatchedGenerators;                                    // 0x0030(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<class UActorSpawner*>                               _selectedSpawners;                                       // 0x0040(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         _penaltyFromDistanceToClosestTelevision;                 // 0x0050(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         _penaltyFromDistanceToClosestTelevisionWhenGeneratorHasOtherTelevisionNearby; // 0x0058(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         _scoreFromDistanceFromClosestGenerator;                  // 0x0060(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _generatorCloseToTelevisionDistanceThreshold;            // 0x0068(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheOnryo.TelevisionOutlineUpdateStrategy
	 * Size -> 0x0070 (FullSize[0x0130] - InheritedSize[0x00C0])
	 */
	class UTelevisionOutlineUpdateStrategy : public UOutlineUpdateStrategy
	{
	public:
		struct FLinearColor                                        _survivorAuraColor;                                      // 0x00C0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FLinearColor                                        _slasherPoweredColor;                                    // 0x00D0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FLinearColor                                        _revealedByMapColor;                                     // 0x00E0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FLinearColor                                        _slasherUnpoweredDefaultColor;                           // 0x00F0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FLinearColor                                        _slasherUnpoweredVisibleColor;                           // 0x0100(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FLinearColor                                        _slasherTeleportTargetColor;                             // 0x0110(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JJ56[0x10];                                  // 0x0120(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheOnryo.OnryoTeleportTargeterComponent
	 * Size -> 0x0078 (FullSize[0x0130] - InheritedSize[0x00B8])
	 */
	class UOnryoTeleportTargeterComponent : public UActorComponent
	{
	public:
		struct FDBDTunableRowHandle                                _maximumTeleportAngle;                                   // 0x00B8(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AOnryoTelevision*                                    _replicatedTargetTelevision;                             // 0x00E0(0x0008) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AOnryoTelevision*                                    _localTargetTelevision;                                  // 0x00E8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AOnryoTelevision*                                    _previousTarget;                                         // 0x00F0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _targetUpdateInterval;                                   // 0x00F8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FIEE[0x34];                                  // 0x00FC(0x0034) MISSED OFFSET (PADDING)

	public:
		void Server_SetTeleportTarget(class AOnryoTelevision* TV);
		void OnRep_TargetTelevision();
		static UClass* StaticClass();
	};

	/**
	 * Class TheOnryo.TurnOffTV
	 * Size -> 0x0000 (FullSize[0x0720] - InheritedSize[0x0720])
	 */
	class UTurnOffTV : public USurvivorTelevisionInteraction
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheOnryo.UnmanifestInteraction
	 * Size -> 0x0010 (FullSize[0x0730] - InheritedSize[0x0720])
	 */
	class UUnmanifestInteraction : public UBaseManifestInteraction
	{
	public:
		unsigned char                                              UnknownData_U3H0[0x10];                                  // 0x0720(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetOnryoPower(class AOnryoPower* OnryoPower);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
