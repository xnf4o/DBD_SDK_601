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
	 * Class DBDCompetence.TimedStatusEffect
	 * Size -> 0x0000 (FullSize[0x0350] - InheritedSize[0x0350])
	 */
	class UTimedStatusEffect : public UStatusEffect
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.AbilityStealthUndetectableEffect
	 * Size -> 0x0000 (FullSize[0x0350] - InheritedSize[0x0350])
	 */
	class UAbilityStealthUndetectableEffect : public UTimedStatusEffect
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.AdjustableCooldownStatusEffect
	 * Size -> 0x0010 (FullSize[0x0360] - InheritedSize[0x0350])
	 */
	class UAdjustableCooldownStatusEffect : public UStatusEffect
	{
	public:
		struct FGameplayTag                                        CooldownModifierType;                                    // 0x0350(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_4N3W[0x4];                                   // 0x035C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.ExhaustedEffect
	 * Size -> 0x0008 (FullSize[0x0368] - InheritedSize[0x0360])
	 */
	class UExhaustedEffect : public UAdjustableCooldownStatusEffect
	{
	public:
		float                                                      CooldownModifier;                                        // 0x0360(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_UA3W[0x4];                                   // 0x0364(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.ActivatableExhaustedEffect
	 * Size -> 0x0000 (FullSize[0x0368] - InheritedSize[0x0368])
	 */
	class UActivatableExhaustedEffect : public UExhaustedEffect
	{
	public:
		void Authority_Start(float Duration);
		void Authority_OnHookCamper(const struct FGameplayTag& GameEvent, const struct FGameEventData& GameEventData);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.ActivateOnEventTimedStatusEffect
	 * Size -> 0x0020 (FullSize[0x0370] - InheritedSize[0x0350])
	 */
	class UActivateOnEventTimedStatusEffect : public UStatusEffect
	{
	public:
		struct FGameplayTagContainer                               _eventsToActivateOn;                                     // 0x0350(0x0020) Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.Alert
	 * Size -> 0x0018 (FullSize[0x03E8] - InheritedSize[0x03D0])
	 */
	class UAlert : public UPerk
	{
	public:
		float                                                      _killerAuraRevealDuration[0x3];                          // 0x03D0(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_5DR0[0x4];                                   // 0x03DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStatusEffect*                                       _alertKillerRevealEffect;                                // 0x03E0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnPerkActivate_Cosmetic();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.AlertKillerRevealEffect
	 * Size -> 0x0000 (FullSize[0x0350] - InheritedSize[0x0350])
	 */
	class UAlertKillerRevealEffect : public UStatusEffect
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.AllHexTotemsAreActive
	 * Size -> 0x0018 (FullSize[0x0100] - InheritedSize[0x00E8])
	 */
	class UAllHexTotemsAreActive : public UEventDrivenModifierCondition
	{
	public:
		unsigned char                                              UnknownData_3TW6[0x18];                                  // 0x00E8(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.AnyActorPairQueryRangeIsTrue
	 * Size -> 0x0010 (FullSize[0x0100] - InheritedSize[0x00F0])
	 */
	class UAnyActorPairQueryRangeIsTrue : public URangeBasedCondition
	{
	public:
		unsigned char                                              UnknownData_P67C[0x10];                                  // 0x00F0(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnInRangeChanged(bool InRange);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.AnyMeansNecessary
	 * Size -> 0x0020 (FullSize[0x03F0] - InheritedSize[0x03D0])
	 */
	class UAnyMeansNecessary : public UPerk
	{
	public:
		bool                                                       RevealSurvivorOnPalletPullUpStarted;                     // 0x03D0(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       RevealSurvivorOnPalletPulledUp;                          // 0x03D1(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KL26[0x2];                                   // 0x03D2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RevealSurvivorDuration;                                  // 0x03D4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class UStatusEffect>                        _effect;                                                 // 0x03D8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _cooldownDuration[0x3];                                  // 0x03E0(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_REAK[0x4];                                   // 0x03EC(0x0004) MISSED OFFSET (PADDING)

	public:
		void Authority_OnPalletPullUpStarted(const struct FGameplayTag& GameplayTag, const struct FGameEventData& GameEventData);
		void Authority_OnPalletPulledUp(const struct FGameplayTag& GameplayTag, const struct FGameEventData& GameEventData);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.AnySurvivorHasObjectState
	 * Size -> 0x0070 (FullSize[0x0158] - InheritedSize[0x00E8])
	 */
	class UAnySurvivorHasObjectState : public UEventDrivenModifierCondition
	{
	public:
		unsigned char                                              UnknownData_80HN[0x50];                                  // 0x00E8(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTag                                        _stateTag;                                               // 0x0138(0x000C) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_R9PQ[0x14];                                  // 0x0144(0x0014) MISSED OFFSET (PADDING)

	public:
		void OnSurvivorRemoved(class ACamperPlayer* survivor);
		void OnSurvivorAdded(class ACamperPlayer* survivor);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.Babysitter
	 * Size -> 0x0030 (FullSize[0x0400] - InheritedSize[0x03D0])
	 */
	class UBabysitter : public UPerk
	{
	public:
		float                                                      _scratchMarkHidingTime[0x3];                             // 0x03D0(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _hasteEffect[0x3];                                       // 0x03DC(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _showAuraTime[0x3];                                      // 0x03E8(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _cooldownTime[0x3];                                      // 0x03F4(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.BabysitterEffect
	 * Size -> 0x0000 (FullSize[0x0350] - InheritedSize[0x0350])
	 */
	class UBabysitterEffect : public UStatusEffect
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.BaseIsPerkUsableCondition
	 * Size -> 0x0008 (FullSize[0x00F0] - InheritedSize[0x00E8])
	 */
	class UBaseIsPerkUsableCondition : public UEventDrivenModifierCondition
	{
	public:
		unsigned char                                              UnknownData_LL63[0x8];                                   // 0x00E8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.BaseIsPlayerPerformingInteraction
	 * Size -> 0x0030 (FullSize[0x0118] - InheritedSize[0x00E8])
	 */
	class UBaseIsPlayerPerformingInteraction : public UEventDrivenModifierCondition
	{
	public:
		struct FGameplayTagContainer                               _interactionSemantics;                                   // 0x00E8(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_D9XW[0x10];                                  // 0x0108(0x0010) MISSED OFFSET (PADDING)

	public:
		void UpdateIsTrue(class UInteractionDefinition* InteractionDefinition);
		void SetInteractionSemantics(const struct FGameplayTagContainer& interactionSemantics);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.BaseLingeringStatusEffect
	 * Size -> 0x0008 (FullSize[0x0358] - InheritedSize[0x0350])
	 */
	class UBaseLingeringStatusEffect : public UStatusEffect
	{
	public:
		float                                                      _lingerDuration;                                         // 0x0350(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2U5G[0x4];                                   // 0x0354(0x0004) MISSED OFFSET (PADDING)

	public:
		void SetLingerDuration(float lingerDuration);
		void Authority_DeactivateEffect();
		void Authority_ActivateEffect();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.BetterTogether
	 * Size -> 0x0058 (FullSize[0x0428] - InheritedSize[0x03D0])
	 */
	class UBetterTogether : public UPerk
	{
	public:
		bool                                                       ShouldRevealKiller;                                      // 0x03D0(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       ShouldRevealSurvivors;                                   // 0x03D1(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CR1E[0x2];                                   // 0x03D2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RevealDistance;                                          // 0x03D4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class ADBDPlayer*>                                  _affectedCampers;                                        // 0x03D8(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_41EO[0x8];                                   // 0x03E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              _genToReveal;                                            // 0x03F0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _durationByLevel[0x3];                                   // 0x03F8(0x000C) Edit, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EXAE[0x24];                                  // 0x0404(0x0024) MISSED OFFSET (PADDING)

	public:
		void OnStartedGeneratorRepair(const struct FGameplayTag& GameplayTag, const struct FGameEventData& GameEventData);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.BlessedStatusEffect
	 * Size -> 0x0010 (FullSize[0x0360] - InheritedSize[0x0350])
	 */
	class UBlessedStatusEffect : public UStatusEffect
	{
	public:
		unsigned char                                              UnknownData_GRVE[0x8];                                   // 0x0350(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _vignetteControllerBlueprint;                            // 0x0358(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnExitBoonRange();
		void OnEnterBoonRange();
		class ATotem* GetBoundTotem();
		float GetBoonTotemBlessingRange();
		void Authority_OnSurvivorRemovedFromGame(class ACamperPlayer* survivor);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.BloodEcho
	 * Size -> 0x0018 (FullSize[0x03E8] - InheritedSize[0x03D0])
	 */
	class UBloodEcho : public UPerk
	{
	public:
		struct FGameplayTag                                        _statusEffectDurationTag;                                // 0x03D0(0x000C) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _cooldownDuration[0x3];                                  // 0x03DC(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.BoonDestroyer
	 * Size -> 0x0018 (FullSize[0x03E8] - InheritedSize[0x03D0])
	 */
	class UBoonDestroyer : public UPerk
	{
	public:
		float                                                      _survivorAuraRevealDuration[0x3];                        // 0x03D0(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_HHNV[0x4];                                   // 0x03DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _survivorRevealEffect;                                   // 0x03E0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.BoonPerk
	 * Size -> 0x0060 (FullSize[0x0488] - InheritedSize[0x0428])
	 */
	class UBoonPerk : public UTotemBoundPerk
	{
	public:
		unsigned char                                              UnknownData_PAUA[0x60];                                  // 0x0428(0x0060) MISSED OFFSET (PADDING)

	public:
		void Authority_OnSurvivorRemoved(class ACamperPlayer* survivor);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.BoonTotemIsActive
	 * Size -> 0x0018 (FullSize[0x0100] - InheritedSize[0x00E8])
	 */
	class UBoonTotemIsActive : public UEventDrivenModifierCondition
	{
	public:
		unsigned char                                              UnknownData_BQJP[0x18];                                  // 0x00E8(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.Breakout
	 * Size -> 0x0078 (FullSize[0x0448] - InheritedSize[0x03D0])
	 */
	class UBreakout : public UPerk
	{
	public:
		class ASlasherPlayer*                                      _slasher;                                                // 0x03D0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ADBDPlayer*                                          _playerOwner;                                            // 0x03D8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _hasteEffect[0x3];                                       // 0x03E0(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _wiggleEffect;                                           // 0x03EC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _survivorDistanceMax;                                    // 0x03F0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _isPerkActive;                                           // 0x03F4(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RGOU[0x53];                                  // 0x03F5(0x0053) MISSED OFFSET (PADDING)

	public:
		void OnSlasherSet(class ASlasherPlayer* Slasher);
		void OnRep_IsPerkActive();
		void Authority_OnRangeChanged(bool InRange);
		void Authority_ImposeWiggleStatusEffect(class ACamperPlayer* survivor);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.BuckleUp
	 * Size -> 0x0030 (FullSize[0x0400] - InheritedSize[0x03D0])
	 */
	class UBuckleUp : public UPerk
	{
	public:
		struct FLinearColor                                        _noRecoveryColor;                                        // 0x03D0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        _fullRecoveryColor;                                      // 0x03E0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _revealDuration[0x3];                                    // 0x03F0(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_UFLB[0x4];                                   // 0x03FC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.Camaraderie
	 * Size -> 0x0028 (FullSize[0x03F8] - InheritedSize[0x03D0])
	 */
	class UCamaraderie : public UPerk
	{
	public:
		unsigned char                                              UnknownData_V9XZ[0xC];                                   // 0x03D0(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _percentUseItem[0x3];                                    // 0x03DC(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _pauseTimer[0x3];                                        // 0x03E8(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _needItemToTrigger;                                      // 0x03F4(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GY75[0x3];                                   // 0x03F5(0x0003) MISSED OFFSET (PADDING)

	public:
		void Authority_EnablePerk();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.CollectableOwnerSubjectProvider
	 * Size -> 0x0018 (FullSize[0x0060] - InheritedSize[0x0048])
	 */
	class UCollectableOwnerSubjectProvider : public UModifierSubjectProvider
	{
	public:
		unsigned char                                              UnknownData_VLOG[0x18];                                  // 0x0048(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.CorruptIntervention
	 * Size -> 0x0038 (FullSize[0x0408] - InheritedSize[0x03D0])
	 */
	class UCorruptIntervention : public UPerk
	{
	public:
		unsigned char                                              _blockedGeneratorCount[0x3];                             // 0x03D0(0x0003) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_QIGJ[0x1];                                   // 0x03D3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _generatorBlockDuration[0x3];                            // 0x03D4(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        _generatorAuraColorForKiller;                            // 0x03E0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class AGenerator*>                                  _blockedGenerators;                                      // 0x03F0(0x0010) Net, ZeroConstructor, Transient, RepNotify, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EZF7[0x8];                                   // 0x0400(0x0008) MISSED OFFSET (PADDING)

	public:
		void Server_ActivatePerk();
		void OnRep_BlockedGenerators();
		void Local_OnIntroCompleted();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.CruelConfinement
	 * Size -> 0x00A0 (FullSize[0x0470] - InheritedSize[0x03D0])
	 */
	class UCruelConfinement : public UPerk
	{
	public:
		float                                                      _effectiveRadius[0x3];                                   // 0x03D0(0x000C) Edit, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _blockDuration[0x3];                                     // 0x03DC(0x000C) Edit, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FLinearColor                                        _windowAuraColor;                                        // 0x03E8(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TMap<class AGenerator*, struct FWindowBlockableList>       _blockableLists;                                         // 0x03F8(0x0050) Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ZAHR[0x28];                                  // 0x0448(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.DarkDevotion
	 * Size -> 0x0018 (FullSize[0x03E8] - InheritedSize[0x03D0])
	 */
	class UDarkDevotion : public UPerk
	{
	public:
		class UTerrorRadiusEmitterComponent*                       _obsessionTerrorRadiusEmitter;                           // 0x03D0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _obsessionTerrorRadius;                                  // 0x03D8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _simulatedFixedDistance;                                 // 0x03DC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_430A[0x8];                                   // 0x03E0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.DarkSense
	 * Size -> 0x0018 (FullSize[0x03E8] - InheritedSize[0x03D0])
	 */
	class UDarkSense : public UPerk
	{
	public:
		float                                                      _effectDurationOnGeneratorComplete;                      // 0x03D0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _effectDurationOnFinalGeneratorComplete[0x3];            // 0x03D4(0x000C) Edit, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_X35Z[0x8];                                   // 0x03E0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.DBDConditionFactory
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UDBDConditionFactory : public UBlueprintFunctionLibrary
	{
	public:
		class UIsPlayerPerformingInteraction* STATIC_IsPlayerPerformingInteraction(const struct FGameplayTagContainer& interactionSemantics);
		class UDoesPerkHaveToken* STATIC_DoesPerkHaveToken(class UPerk* Perk);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.DeadMansSwitchEffect
	 * Size -> 0x0000 (FullSize[0x0350] - InheritedSize[0x0350])
	 */
	class UDeadMansSwitchEffect : public UStatusEffect
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.DeceptionEffect
	 * Size -> 0x0008 (FullSize[0x0358] - InheritedSize[0x0350])
	 */
	class UDeceptionEffect : public UStatusEffect
	{
	public:
		bool                                                       _hideBloodTrailsWhenCamperFakeEnterLocker;               // 0x0350(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_VMX8[0x7];                                   // 0x0351(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.DecisiveStrike
	 * Size -> 0x00A0 (FullSize[0x0470] - InheritedSize[0x03D0])
	 */
	class UDecisiveStrike : public UPerk
	{
	public:
		float                                                      _timeAfterUnhook[0x3];                                   // 0x03D0(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _skillCheckDelay;                                        // 0x03DC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _skillCheckBuffer;                                       // 0x03E0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _killerHearsSkillCheckCue;                               // 0x03E4(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_OE3H[0x73];                                  // 0x03E5(0x0073) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGameplayTag>                                _deactivationEvents;                                     // 0x0458(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		bool                                                       _hasBeenAttempted;                                       // 0x0468(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_F499[0x7];                                   // 0x0469(0x0007) MISSED OFFSET (PADDING)

	public:
		void OnUnhookedTimerEnded();
		void OnSkillCheck(bool hadInput, bool success, bool Bonus, ESkillCheckCustomType Type, class ADBDPlayer* Player);
		void OnRep_HasBeenAttempted();
		void OnPickUpEnded(class ADBDPlayer* picker);
		void OnOwnerPickedUp(class ADBDPlayer* picker);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.DelayedHealEffect
	 * Size -> 0x0008 (FullSize[0x0358] - InheritedSize[0x0350])
	 */
	class UDelayedHealEffect : public UStatusEffect
	{
	public:
		unsigned char                                              UnknownData_VENF[0x8];                                   // 0x0350(0x0008) MISSED OFFSET (PADDING)

	public:
		void Authority_OnOwningCamperPickedUp(class ADBDPlayer* picker);
		void Authority_OnOwningCamperHealthChanged(ECamperDamageState before, ECamperDamageState after);
		void Authority_OnActivationTimerComplete();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.DidGameEventOccurred
	 * Size -> 0x0038 (FullSize[0x0120] - InheritedSize[0x00E8])
	 */
	class UDidGameEventOccurred : public UEventDrivenModifierCondition
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x00E8(0x000C) Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_IP9Y[0x2C];                                  // 0x00F4(0x002C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.Distortion
	 * Size -> 0x0020 (FullSize[0x03F0] - InheritedSize[0x03D0])
	 */
	class UDistortion : public UPerk
	{
	public:
		float                                                      _activationDurations[0x3];                               // 0x03D0(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _auraBlockIsActive;                                      // 0x03DC(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_PKD4[0x13];                                  // 0x03DD(0x0013) MISSED OFFSET (PADDING)

	public:
		void OnRep_AuraBlockIsActive();
		bool AuraBlockCanBeActive();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.DoesPerkHaveToken
	 * Size -> 0x0010 (FullSize[0x00F8] - InheritedSize[0x00E8])
	 */
	class UDoesPerkHaveToken : public UEventDrivenModifierCondition
	{
	public:
		TWeakObjectPtr<class UPerk>                                _perk;                                                   // 0x00E8(0x0008) ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2K8T[0x8];                                   // 0x00F0(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetPerk(class UPerk* Perk);
		void OnRep_Perk();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.DownedByBasicAttack
	 * Size -> 0x0058 (FullSize[0x0140] - InheritedSize[0x00E8])
	 */
	class UDownedByBasicAttack : public UEventDrivenModifierCondition
	{
	public:
		bool                                                       _replicatedIsTrue;                                       // 0x00E8(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_NFPH[0x57];                                  // 0x00E9(0x0057) MISSED OFFSET (PADDING)

	public:
		void OnRep_ReplicatedIsTrue();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.DyingLight
	 * Size -> 0x0040 (FullSize[0x0410] - InheritedSize[0x03D0])
	 */
	class UDyingLight : public UPerk
	{
	public:
		TArray<float>                                              _actionSpeedPenaltyPerToken;                             // 0x03D0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		float                                                      _obsessionActionSpeedBonus;                              // 0x03E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                _obsessionStatusEffectID;                                // 0x03E4(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                _nonObsessionStatusEffectID;                             // 0x03F0(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_35XK[0x4];                                   // 0x03FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UStatusEffect*>                               _survivorDebuffs;                                        // 0x0400(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		void OnObsessionChanged(class ACamperPlayer* newObsession, class ACamperPlayer* previousObsession);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.EnduranceHighlightEffect
	 * Size -> 0x0000 (FullSize[0x0350] - InheritedSize[0x0350])
	 */
	class UEnduranceHighlightEffect : public UStatusEffect
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.ExposedEffect
	 * Size -> 0x0000 (FullSize[0x0360] - InheritedSize[0x0360])
	 */
	class UExposedEffect : public UAdjustableCooldownStatusEffect
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.Fixated
	 * Size -> 0x0000 (FullSize[0x03D0] - InheritedSize[0x03D0])
	 */
	class UFixated : public UPerk
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.FlipFlop
	 * Size -> 0x0018 (FullSize[0x03E8] - InheritedSize[0x03D0])
	 */
	class UFlipFlop : public UPerk
	{
	public:
		float                                                      _recoveryProgressionConversionRatio[0x3];                // 0x03D0(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _maxWiggleProgression[0x3];                              // 0x03DC(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void Authority_OnPickedUp(class ADBDPlayer* picker);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.FurtiveChase
	 * Size -> 0x0010 (FullSize[0x03E0] - InheritedSize[0x03D0])
	 */
	class UFurtiveChase : public UPerk
	{
	public:
		int32_t                                                    _maxTokensByLevel[0x3];                                  // 0x03D0(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _terrorRadiusSuppressionPerToken;                        // 0x03DC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.GateBlockerEffect
	 * Size -> 0x0038 (FullSize[0x0388] - InheritedSize[0x0350])
	 */
	class UGateBlockerEffect : public UStatusEffect
	{
	public:
		float                                                      _blockGateLingeringTime;                                 // 0x0350(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_W9ER[0x34];                                  // 0x0354(0x0034) MISSED OFFSET (PADDING)

	public:
		void RemoveCantEscapeFlag();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.HasFlag
	 * Size -> 0x0040 (FullSize[0x0128] - InheritedSize[0x00E8])
	 */
	class UHasFlag : public UEventDrivenModifierCondition
	{
	public:
		struct FGameplayTag                                        _flag;                                                   // 0x00E8(0x000C) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BF4U[0x34];                                  // 0x00F4(0x0034) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.HasPlayerReachedWiggleFillPercentCondition
	 * Size -> 0x0008 (FullSize[0x00F0] - InheritedSize[0x00E8])
	 */
	class UHasPlayerReachedWiggleFillPercentCondition : public UEventDrivenModifierCondition
	{
	public:
		unsigned char                                              UnknownData_OXY9[0x4];                                   // 0x00E8(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       _isWigglePercentReached;                                 // 0x00EC(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_81JT[0x3];                                   // 0x00ED(0x0003) MISSED OFFSET (PADDING)

	public:
		void OnRep_IsWigglePercentReached();
		void Authority_OnOwnerWiggleChargePercentChanged(class UChargeableComponent* ChargeableComponent, float PercentCompletionChange, float TotalPercentComplete);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.HeadOn
	 * Size -> 0x0078 (FullSize[0x0448] - InheritedSize[0x03D0])
	 */
	class UHeadOn : public UPerk
	{
	public:
		bool                                                       IsPerformingHeadOn;                                      // 0x03D0(0x0001) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ExhaustOnlyOnSuccessfulStun;                             // 0x03D1(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       StunKillersEnteringStunZone;                             // 0x03D2(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FJJK[0x1];                                   // 0x03D3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _hideDuration[0x3];                                      // 0x03D4(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ALocker*                                             _locker;                                                 // 0x03E0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6CYZ[0x30];                                  // 0x03E8(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ACharacter*>                                  _playersInStunZone;                                      // 0x0418(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MFYZ[0x20];                                  // 0x0428(0x0020) MISSED OFFSET (PADDING)

	public:
		void OnPawnOverlapExit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void OnPawnOverlapEnter(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void OnHeadOnAnimationComplete();
		void Multicast_StunPlayer(class UObject* stunnableInterfaceUObject, class ADBDPlayer* stunner);
		bool CanApplyHeadOnInteraction();
		void Authority_ActivatePerk();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.HemorrhageStatusEffect
	 * Size -> 0x0050 (FullSize[0x03B0] - InheritedSize[0x0360])
	 */
	class UHemorrhageStatusEffect : public UAdjustableCooldownStatusEffect
	{
	public:
		float                                                      _cooldownFXTime;                                         // 0x0360(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _removeEffectWhenFullyHealed;                            // 0x0364(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_0TOD[0x4B];                                  // 0x0365(0x004B) MISSED OFFSET (PADDING)

	public:
		void OnStoppedHealing(class ADBDPlayer* Instigator, class ADBDPlayer* Target);
		void Authority_OnSurvivorHealed(const struct FCamperHealResult& healResult);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.HexPerk
	 * Size -> 0x0018 (FullSize[0x0440] - InheritedSize[0x0428])
	 */
	class UHexPerk : public UTotemBoundPerk
	{
	public:
		TArray<class ADBDPlayer*>                                  _playersWhoKnowCurse;                                    // 0x0428(0x0010) Net, ZeroConstructor, Transient, RepNotify, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6BGX[0x8];                                   // 0x0438(0x0008) MISSED OFFSET (PADDING)

	public:
		void UpdateCursedStatusViewOnLocalPlayer();
		void ReceiveGameplayEvent(EDBDScoreTypes gameplayEventType, float amount, class AActor* Instigator, class AActor* Target);
		void OnRep_PlayersWhoKnowCurse(TArray<class ADBDPlayer*> oldPlayersWhoKnowCurse);
		void OnHexPerkGameplayEvent(EDBDScoreTypes gameplayEventType, float amount, class AActor* Instigator, class AActor* Target);
		bool IsCurseRevealedToPlayer(class ADBDPlayer* Player);
		void Authority_SetCurseRevealedToPlayer(class ADBDPlayer* Player, bool revealed);
		void Authority_RevealCurseToAllSurvivors(bool revealed);
		void Authority_Reactivate_BP(class ATotem* Totem);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.HexHauntedGround
	 * Size -> 0x0020 (FullSize[0x0460] - InheritedSize[0x0440])
	 */
	class UHexHauntedGround : public UHexPerk
	{
	public:
		float                                                      _exposedStatusEffectDuration[0x3];                       // 0x0440(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_35YS[0x14];                                  // 0x044C(0x0014) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.HexRuin
	 * Size -> 0x0078 (FullSize[0x04B8] - InheritedSize[0x0440])
	 */
	class UHexRuin : public UHexPerk
	{
	public:
		unsigned char                                              UnknownData_6UPI[0x18];                                  // 0x0440(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class AGenerator*, struct FFastTimer>                 _curseActivationTimers;                                  // 0x0458(0x0050) Transient, NativeAccessSpecifierPrivate
		float                                                      _regressionModifier[0x3];                                // 0x04A8(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_NHMC[0x4];                                   // 0x04B4(0x0004) MISSED OFFSET (PADDING)

	public:
		void Authority_SetupCurseOnAllGenerators();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.HighestLevelAndClosestEffectCondition
	 * Size -> 0x0038 (FullSize[0x0108] - InheritedSize[0x00D0])
	 */
	class UHighestLevelAndClosestEffectCondition : public UGameplayModifierCondition
	{
	public:
		unsigned char                                              UnknownData_H85D[0x8];                                   // 0x00D0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UStatusEffect*>                               _effectsLevel1;                                          // 0x00D8(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<class UStatusEffect*>                               _effectsLevel2;                                          // 0x00E8(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<class UStatusEffect*>                               _effectsLevel3;                                          // 0x00F8(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		void SetCurrentEffectLevel(int32_t Level);
		void InitEffectArrays(const class FName& effectIDLevel1, const class FName& effectIDLevel2, const class FName& effectIDLevel3);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.ImAllEars
	 * Size -> 0x0058 (FullSize[0x0428] - InheritedSize[0x03D0])
	 */
	class UImAllEars : public UPerk
	{
	public:
		int32_t                                                    _cooldownByLevel[0x3];                                   // 0x03D0(0x000C) Edit, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _durationByLevel[0x3];                                   // 0x03DC(0x000C) Edit, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _useTerrorRadius;                                        // 0x03E8(0x0001) Edit, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_L92M[0x3];                                   // 0x03E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _triggerOutsideRadius;                                   // 0x03EC(0x0004) Edit, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_3K0C[0x38];                                  // 0x03F0(0x0038) MISSED OFFSET (PADDING)

	public:
		void Server_OnCamperLoudNoise(const struct FGameplayTag& GameplayTag, const struct FGameEventData& GameEventData);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.ImmediateUndetectableEffect
	 * Size -> 0x0000 (FullSize[0x0350] - InheritedSize[0x0350])
	 */
	class UImmediateUndetectableEffect : public UStatusEffect
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.OnEventBaseAddon
	 * Size -> 0x0010 (FullSize[0x02D0] - InheritedSize[0x02C0])
	 */
	class UOnEventBaseAddon : public UItemAddon
	{
	public:
		struct FGameplayTag                                        _eventToListenTo;                                        // 0x02C0(0x000C) Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_VUX0[0x4];                                   // 0x02CC(0x0004) MISSED OFFSET (PADDING)

	public:
		void OnEventFired(const struct FGameEventData& GameEventData);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.ImposeStatusEffectOnEventAddon
	 * Size -> 0x0020 (FullSize[0x02F0] - InheritedSize[0x02D0])
	 */
	class UImposeStatusEffectOnEventAddon : public UOnEventBaseAddon
	{
	public:
		float                                                      _statusEffectTime;                                       // 0x02D0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                _statusEffectNameDeprecated;                             // 0x02D4(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _statusEffect;                                           // 0x02E0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EImposeEffectTo                                            _imposeEffectTo;                                         // 0x02E8(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_3KNN[0x7];                                   // 0x02E9(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.InfectiousFright
	 * Size -> 0x0048 (FullSize[0x0418] - InheritedSize[0x03D0])
	 */
	class UInfectiousFright : public UPerk
	{
	public:
		bool                                                       _revealPlayerInTerrorRadius;                             // 0x03D0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              _perkActivationCount;                                    // 0x03D1(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6IBH[0x6];                                   // 0x03D2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ACamperPlayer*>                               _revealedSurvivors;                                      // 0x03D8(0x0010) Net, ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		class ACamperPlayer*                                       _targetSurvivor;                                         // 0x03E8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9IY0[0x28];                                  // 0x03F0(0x0028) MISSED OFFSET (PADDING)

	public:
		void RevealSurvivorLocation(class ACamperPlayer* Target);
		void OnRep_PerkActivationCount();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.InnerStrength
	 * Size -> 0x0038 (FullSize[0x0408] - InheritedSize[0x03D0])
	 */
	class UInnerStrength : public UPerk
	{
	public:
		float                                                      _hideDuration[0x3];                                      // 0x03D0(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _perkEnabled;                                            // 0x03DC(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_A10G[0x2B];                                  // 0x03DD(0x002B) MISSED OFFSET (PADDING)

	public:
		void OnRep_PerkEnabled();
		void OnPlayerImmobilizeStateChanged(ECamperImmobilizeState oldImmobilizeState, ECamperImmobilizeState newImmobilizeState);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.Insidious
	 * Size -> 0x0000 (FullSize[0x03D0] - InheritedSize[0x03D0])
	 */
	class UInsidious : public UPerk
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.InsidiousEffect
	 * Size -> 0x0000 (FullSize[0x0350] - InheritedSize[0x0350])
	 */
	class UInsidiousEffect : public UAbilityStealthUndetectableEffect
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.IsActivationTimerActive
	 * Size -> 0x0018 (FullSize[0x0100] - InheritedSize[0x00E8])
	 */
	class UIsActivationTimerActive : public UEventDrivenModifierCondition
	{
	public:
		unsigned char                                              UnknownData_Y4WO[0x18];                                  // 0x00E8(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.IsActivationTimerActiveAndNotPaused
	 * Size -> 0x0020 (FullSize[0x0108] - InheritedSize[0x00E8])
	 */
	class UIsActivationTimerActiveAndNotPaused : public UEventDrivenModifierCondition
	{
	public:
		unsigned char                                              UnknownData_13Y9[0x20];                                  // 0x00E8(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.IsBestProveThyselfEffectInRange
	 * Size -> 0x0028 (FullSize[0x0110] - InheritedSize[0x00E8])
	 */
	class UIsBestProveThyselfEffectInRange : public UEventDrivenModifierCondition
	{
	public:
		unsigned char                                              UnknownData_8CZT[0x28];                                  // 0x00E8(0x0028) MISSED OFFSET (PADDING)

	public:
		void OnInRangeChanged(bool InRange, class UProveThyselfEffect* ProveThyselfEffect);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.IsBoonBlessed
	 * Size -> 0x0018 (FullSize[0x0100] - InheritedSize[0x00E8])
	 */
	class UIsBoonBlessed : public UEventDrivenModifierCondition
	{
	public:
		unsigned char                                              UnknownData_3QWZ[0x18];                                  // 0x00E8(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.IsClosestEffectCondition
	 * Size -> 0x0000 (FullSize[0x00D0] - InheritedSize[0x00D0])
	 */
	class UIsClosestEffectCondition : public UGameplayModifierCondition
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.IsCooldownTimerActive
	 * Size -> 0x0018 (FullSize[0x0100] - InheritedSize[0x00E8])
	 */
	class UIsCooldownTimerActive : public UEventDrivenModifierCondition
	{
	public:
		unsigned char                                              UnknownData_TTIZ[0x18];                                  // 0x00E8(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.IsHexCursed
	 * Size -> 0x0018 (FullSize[0x0100] - InheritedSize[0x00E8])
	 */
	class UIsHexCursed : public UEventDrivenModifierCondition
	{
	public:
		unsigned char                                              UnknownData_U0TN[0x18];                                  // 0x00E8(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.IsHighestLevelAndClosestOriginatingEffect
	 * Size -> 0x0028 (FullSize[0x00F8] - InheritedSize[0x00D0])
	 */
	class UIsHighestLevelAndClosestOriginatingEffect : public UGameplayModifierCondition
	{
	public:
		TArray<class UStatusEffect*>                               _applicableEffects;                                      // 0x00D0(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FAL6[0x18];                                  // 0x00E0(0x0018) MISSED OFFSET (PADDING)

	public:
		void OnStatusEffectAddedOrRemoved(class UStatusEffect* effect, bool Valid);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.IsHighestTierOriginatingPerk
	 * Size -> 0x0028 (FullSize[0x0110] - InheritedSize[0x00E8])
	 */
	class UIsHighestTierOriginatingPerk : public UEventDrivenModifierCondition
	{
	public:
		TArray<class UStatusEffect*>                               _applicableEffects;                                      // 0x00E8(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0BTN[0x18];                                  // 0x00F8(0x0018) MISSED OFFSET (PADDING)

	public:
		void OnStatusEffectApplicableChanged(class UGameplayModifierContainer* GameplayModifierContainer, bool IsApplicable);
		void OnStatusEffectAddedOrRemoved(class UStatusEffect* effect, bool Valid);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.IsInAnyHookedSurvivorOriginatorAuraReadingRange
	 * Size -> 0x00B0 (FullSize[0x01A0] - InheritedSize[0x00F0])
	 */
	class UIsInAnyHookedSurvivorOriginatorAuraReadingRange : public URangeBasedCondition
	{
	public:
		unsigned char                                              UnknownData_16M3[0xB0];                                  // 0x00F0(0x00B0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.IsInRangeOfOriginatingPlayer
	 * Size -> 0x0028 (FullSize[0x0118] - InheritedSize[0x00F0])
	 */
	class UIsInRangeOfOriginatingPlayer : public URangeBasedCondition
	{
	public:
		unsigned char                                              UnknownData_04SZ[0x28];                                  // 0x00F0(0x0028) MISSED OFFSET (PADDING)

	public:
		void OnInRangeChanged(bool InRange);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.IsLifetimeActive
	 * Size -> 0x0010 (FullSize[0x00F8] - InheritedSize[0x00E8])
	 */
	class UIsLifetimeActive : public UEventDrivenModifierCondition
	{
	public:
		unsigned char                                              UnknownData_3DQY[0x10];                                  // 0x00E8(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.IsOnHitSprintEffectActive
	 * Size -> 0x0000 (FullSize[0x00E8] - InheritedSize[0x00E8])
	 */
	class UIsOnHitSprintEffectActive : public UEventDrivenModifierCondition
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.IsOriginatingPerkBoundToTotems
	 * Size -> 0x0010 (FullSize[0x00F8] - InheritedSize[0x00E8])
	 */
	class UIsOriginatingPerkBoundToTotems : public UEventDrivenModifierCondition
	{
	public:
		EComparisonOperation                                       _comparisonOperator;                                     // 0x00E8(0x0001) Edit, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YS0D[0x3];                                   // 0x00E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    _totemCount;                                             // 0x00EC(0x0004) Edit, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9KDG[0x8];                                   // 0x00F0(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnRep_TotemCount();
		void Init(EComparisonOperation comparisonOperator, int32_t totemCount);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.IsOriginatingPerkUsableCondition
	 * Size -> 0x0000 (FullSize[0x00F0] - InheritedSize[0x00F0])
	 */
	class UIsOriginatingPerkUsableCondition : public UBaseIsPerkUsableCondition
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.IsOwningPlayerInRangeFromHook
	 * Size -> 0x0008 (FullSize[0x0108] - InheritedSize[0x0100])
	 */
	class UIsOwningPlayerInRangeFromHook : public UAnyActorPairQueryRangeIsTrue
	{
	public:
		unsigned char                                              UnknownData_PXGF[0x8];                                   // 0x0100(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnLevelReadyToPlay();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.IsOwningPlayerInHookRangeWhenKillerCarry
	 * Size -> 0x0018 (FullSize[0x0120] - InheritedSize[0x0108])
	 */
	class UIsOwningPlayerInHookRangeWhenKillerCarry : public UIsOwningPlayerInRangeFromHook
	{
	public:
		unsigned char                                              UnknownData_031P[0x18];                                  // 0x0108(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.IsOwningPlayerLastSurvivor
	 * Size -> 0x0008 (FullSize[0x00F0] - InheritedSize[0x00E8])
	 */
	class UIsOwningPlayerLastSurvivor : public UEventDrivenModifierCondition
	{
	public:
		unsigned char                                              UnknownData_6789[0x8];                                   // 0x00E8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.IsOwningSurvivorAuraRevealedToKiller
	 * Size -> 0x0000 (FullSize[0x00D0] - InheritedSize[0x00D0])
	 */
	class UIsOwningSurvivorAuraRevealedToKiller : public UGameplayModifierCondition
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.IsPerkUsableCondition
	 * Size -> 0x0000 (FullSize[0x00F0] - InheritedSize[0x00F0])
	 */
	class UIsPerkUsableCondition : public UBaseIsPerkUsableCondition
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.IsPlayerPerfInteractionWithNoItem
	 * Size -> 0x0040 (FullSize[0x0158] - InheritedSize[0x0118])
	 */
	class UIsPlayerPerfInteractionWithNoItem : public UBaseIsPlayerPerformingInteraction
	{
	public:
		unsigned char                                              UnknownData_QBFL[0x10];                                  // 0x0118(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTagContainer                               _useItemInteractionSemantics;                            // 0x0128(0x0020) Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_IWS2[0x8];                                   // 0x0148(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ELoadoutItemType                                           _itemType;                                               // 0x0150(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8IBX[0x7];                                   // 0x0151(0x0007) MISSED OFFSET (PADDING)

	public:
		void OnCollectableChargeStateChange(bool Empty);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.IsPlayerPerformingItemInteraction
	 * Size -> 0x0020 (FullSize[0x0138] - InheritedSize[0x0118])
	 */
	class UIsPlayerPerformingItemInteraction : public UBaseIsPlayerPerformingInteraction
	{
	public:
		unsigned char                                              UnknownData_BNMX[0x20];                                  // 0x0118(0x0020) MISSED OFFSET (PADDING)

	public:
		void OnCollectablePickedUp(class ADBDPlayer* Player);
		void OnCollectableDropped();
		void OnCollectableChargeStateChange(bool Empty);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.IsPlayerPerformingInteraction
	 * Size -> 0x0040 (FullSize[0x0128] - InheritedSize[0x00E8])
	 */
	class UIsPlayerPerformingInteraction : public UEventDrivenModifierCondition
	{
	public:
		struct FGameplayTagContainer                               _interactionSemantics;                                   // 0x00E8(0x0020) Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Y00E[0x20];                                  // 0x0108(0x0020) MISSED OFFSET (PADDING)

	public:
		void UpdateIsTrue(class UInteractionDefinition* InteractionDefinition);
		void SetInteractionSemantics(const struct FGameplayTagContainer& interactionSemantics);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.IsSubjectInteractingWithOriginatingPlayer
	 * Size -> 0x0018 (FullSize[0x0100] - InheritedSize[0x00E8])
	 */
	class UIsSubjectInteractingWithOriginatingPlayer : public UEventDrivenModifierCondition
	{
	public:
		unsigned char                                              UnknownData_SHJ3[0x18];                                  // 0x00E8(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.KillerConditionalSpeedCurveEffect
	 * Size -> 0x0008 (FullSize[0x0358] - InheritedSize[0x0350])
	 */
	class UKillerConditionalSpeedCurveEffect : public UStatusEffect
	{
	public:
		class UCurveFloat*                                         _speedCurve;                                             // 0x0350(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.KillerIsLowOnAmmo
	 * Size -> 0x0018 (FullSize[0x0100] - InheritedSize[0x00E8])
	 */
	class UKillerIsLowOnAmmo : public UEventDrivenModifierCondition
	{
	public:
		int32_t                                                    _ammoThreshold;                                          // 0x00E8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SR32[0x14];                                  // 0x00EC(0x0014) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.KillerSubjectProvider
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	class UKillerSubjectProvider : public UModifierSubjectProvider
	{
	public:
		unsigned char                                              UnknownData_ZGUF[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)

	public:
		void RegisterWhenKillerSet(class ASlasherPlayer* killer);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.KindredPerk
	 * Size -> 0x0028 (FullSize[0x03F8] - InheritedSize[0x03D0])
	 */
	class UKindredPerk : public UPerk
	{
	public:
		unsigned char                                              UnknownData_UTXR[0x10];                                  // 0x03D0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              _killerAuraRevealRange;                                  // 0x03E0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_R1DH[0x8];                                   // 0x03F0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.LingeringBlessedStatusEffect
	 * Size -> 0x0028 (FullSize[0x0388] - InheritedSize[0x0360])
	 */
	class ULingeringBlessedStatusEffect : public UBlessedStatusEffect
	{
	public:
		unsigned char                                              UnknownData_A59O[0x4];                                   // 0x0360(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _lingerDuration;                                         // 0x0364(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RXO2[0x20];                                  // 0x0368(0x0020) MISSED OFFSET (PADDING)

	public:
		void SetLingerDuration(float lingerDuration);
		void Authority_OnInRangeChanged(bool InRange);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.LingeringBlindnessEffect
	 * Size -> 0x0060 (FullSize[0x03C0] - InheritedSize[0x0360])
	 */
	class ULingeringBlindnessEffect : public UAdjustableCooldownStatusEffect
	{
	public:
		struct FGameplayTag                                        startBlindnessEventTag;                                  // 0x0360(0x000C) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        endBlindnessEventTag;                                    // 0x036C(0x000C) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        _state;                                                  // 0x0378(0x000C) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NN05[0x3C];                                  // 0x0384(0x003C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.LingeringExhaustedEffect
	 * Size -> 0x0060 (FullSize[0x03C8] - InheritedSize[0x0368])
	 */
	class ULingeringExhaustedEffect : public UExhaustedEffect
	{
	public:
		struct FGameplayTag                                        startExhaustedEventTag;                                  // 0x0368(0x000C) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        endExhaustedEventTag;                                    // 0x0374(0x000C) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        _state;                                                  // 0x0380(0x000C) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SUDF[0x3C];                                  // 0x038C(0x003C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.LingeringStateTagStatusEffect
	 * Size -> 0x0038 (FullSize[0x0390] - InheritedSize[0x0358])
	 */
	class ULingeringStateTagStatusEffect : public UBaseLingeringStatusEffect
	{
	public:
		struct FGameplayTag                                        _ownerStateTag;                                          // 0x0358(0x000C) Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_HHLM[0x2C];                                  // 0x0364(0x002C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.LuckyBreak
	 * Size -> 0x0010 (FullSize[0x03E0] - InheritedSize[0x03D0])
	 */
	class ULuckyBreak : public UPerk
	{
	public:
		float                                                      _activationTime[0x3];                                    // 0x03D0(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_OIKX[0x4];                                   // 0x03DC(0x0004) MISSED OFFSET (PADDING)

	public:
		void OnDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState CurrentDamageState);
		void ActivationTimerEnded();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.MindBreaker
	 * Size -> 0x0038 (FullSize[0x0408] - InheritedSize[0x03D0])
	 */
	class UMindBreaker : public UPerk
	{
	public:
		float                                                      _effectDurationAfterRepair[0x3];                         // 0x03D0(0x000C) Edit, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_APOS[0x2C];                                  // 0x03DC(0x002C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.Nemesis
	 * Size -> 0x0020 (FullSize[0x03F0] - InheritedSize[0x03D0])
	 */
	class UNemesis : public UPerk
	{
	public:
		unsigned char                                              UnknownData_QN7A[0x8];                                   // 0x03D0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _revealToKillerTime[0x3];                                // 0x03D8(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _obliviousTime[0x3];                                     // 0x03E4(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.NoOneLeftBehind
	 * Size -> 0x0010 (FullSize[0x03E0] - InheritedSize[0x03D0])
	 */
	class UNoOneLeftBehind : public UPerk
	{
	public:
		TArray<float>                                              _speedBoostEffect;                                       // 0x03D0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate

	public:
		float GetSpeedBoostEffect();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.ObliviousEffect
	 * Size -> 0x0000 (FullSize[0x0360] - InheritedSize[0x0360])
	 */
	class UObliviousEffect : public UAdjustableCooldownStatusEffect
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.ObsessionTargetSubjectProvider
	 * Size -> 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
	 */
	class UObsessionTargetSubjectProvider : public UModifierSubjectProvider
	{
	public:
		unsigned char                                              UnknownData_NN2T[0x10];                                  // 0x0048(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.OnEventSetTimerAddon
	 * Size -> 0x0008 (FullSize[0x02D8] - InheritedSize[0x02D0])
	 */
	class UOnEventSetTimerAddon : public UOnEventBaseAddon
	{
	public:
		float                                                      _addonEffectTime;                                        // 0x02D0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6HAR[0x4];                                   // 0x02D4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.OriginatingEffectIsApplicable
	 * Size -> 0x0008 (FullSize[0x00F0] - InheritedSize[0x00E8])
	 */
	class UOriginatingEffectIsApplicable : public UEventDrivenModifierCondition
	{
	public:
		unsigned char                                              UnknownData_HHWX[0x8];                                   // 0x00E8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.OwningPlayerInBoonBlessingRange
	 * Size -> 0x0008 (FullSize[0x0108] - InheritedSize[0x0100])
	 */
	class UOwningPlayerInBoonBlessingRange : public UAnyActorPairQueryRangeIsTrue
	{
	public:
		class ATotem*                                              _boundTotem;                                             // 0x0100(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.OwningPlayerInTotemRange
	 * Size -> 0x0018 (FullSize[0x0118] - InheritedSize[0x0100])
	 */
	class UOwningPlayerInTotemRange : public UAnyActorPairQueryRangeIsTrue
	{
	public:
		unsigned char                                              UnknownData_P5JW[0x18];                                  // 0x0100(0x0018) MISSED OFFSET (PADDING)

	public:
		void OnLevelReadyToPlay();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.OwningPlayerInDullTotemRange
	 * Size -> 0x0000 (FullSize[0x0118] - InheritedSize[0x0118])
	 */
	class UOwningPlayerInDullTotemRange : public UOwningPlayerInTotemRange
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.OwningSlasherHasBeenStill
	 * Size -> 0x0008 (FullSize[0x00D8] - InheritedSize[0x00D0])
	 */
	class UOwningSlasherHasBeenStill : public UGameplayModifierCondition
	{
	public:
		float                                                      _secondsOfStillnessRequired;                             // 0x00D0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_A30B[0x4];                                   // 0x00D4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.PharmacyPerk
	 * Size -> 0x0010 (FullSize[0x03E0] - InheritedSize[0x03D0])
	 */
	class UPharmacyPerk : public UPerk
	{
	public:
		TArray<float>                                              _searchSpeeds;                                           // 0x03D0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.PlayerIsInExitArea
	 * Size -> 0x0008 (FullSize[0x00D8] - InheritedSize[0x00D0])
	 */
	class UPlayerIsInExitArea : public UGameplayModifierCondition
	{
	public:
		unsigned char                                              UnknownData_7V35[0x8];                                   // 0x00D0(0x0008) MISSED OFFSET (PADDING)

	public:
		void PlayerExitExitArea();
		void PlayerEnterExitArea();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.Poised
	 * Size -> 0x0028 (FullSize[0x03F8] - InheritedSize[0x03D0])
	 */
	class UPoised : public UPerk
	{
	public:
		float                                                      _activationTime[0x3];                                    // 0x03D0(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BTZQ[0x1C];                                  // 0x03DC(0x001C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.PreventKOEffect
	 * Size -> 0x0008 (FullSize[0x0358] - InheritedSize[0x0350])
	 */
	class UPreventKOEffect : public UStatusEffect
	{
	public:
		unsigned char                                              UnknownData_TSXE[0x8];                                   // 0x0350(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.ProveThyself
	 * Size -> 0x0050 (FullSize[0x0420] - InheritedSize[0x03D0])
	 */
	class UProveThyself : public UPerk
	{
	public:
		struct FDBDTunableRowHandle                                _proveThyselfRange;                                      // 0x03D0(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_NQ6R[0x28];                                  // 0x03F8(0x0028) MISSED OFFSET (PADDING)

	public:
		void OnSurvivorInOwnerRangeChanged(bool InRange);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.RemoveOnOriginatingSurvivorGoneStatusEffect
	 * Size -> 0x0008 (FullSize[0x0358] - InheritedSize[0x0350])
	 */
	class URemoveOnOriginatingSurvivorGoneStatusEffect : public UStatusEffect
	{
	public:
		unsigned char                                              UnknownData_CMY5[0x8];                                   // 0x0350(0x0008) MISSED OFFSET (PADDING)

	public:
		void Authority_OnSurvivorRemoved(class ACamperPlayer* survivor);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.ProveThyselfEffect
	 * Size -> 0x00C0 (FullSize[0x0418] - InheritedSize[0x0358])
	 */
	class UProveThyselfEffect : public URemoveOnOriginatingSurvivorGoneStatusEffect
	{
	public:
		unsigned char                                              UnknownData_5H9E[0x20];                                  // 0x0358(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _proveThyselfRange;                                      // 0x0378(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _speedPercentageAddedPerSurvivorRepairingInRange;        // 0x03A0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FYN9[0x74];                                  // 0x03A4(0x0074) MISSED OFFSET (PADDING)

	public:
		void OnInRangeOfOriginatorChanged(bool InRange, class ACamperPlayer* survivor);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.ResiliencePerk
	 * Size -> 0x0010 (FullSize[0x03E0] - InheritedSize[0x03D0])
	 */
	class UResiliencePerk : public UPerk
	{
	public:
		float                                                      _actionSpeed[0x3];                                       // 0x03D0(0x000C) Edit, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_50SW[0x4];                                   // 0x03DC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.Saboteur
	 * Size -> 0x0028 (FullSize[0x03F8] - InheritedSize[0x03D0])
	 */
	class USaboteur : public UPerk
	{
	public:
		float                                                      _cooldownDuration[0x3];                                  // 0x03D0(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _revealHookDistance[0x3];                                // 0x03DC(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UMeatHookOutlineUpdateStrategy*>              _revealedMeatHooksOultineStrategy;                       // 0x03E8(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.SecondsToRateModifierBaseAddon
	 * Size -> 0x0110 (FullSize[0x03D0] - InheritedSize[0x02C0])
	 */
	class USecondsToRateModifierBaseAddon : public UItemAddon
	{
	public:
		struct FTunableStat                                        _chargeRate;                                             // 0x02C0(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _maxCharge;                                              // 0x0340(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _secondsToAdd;                                           // 0x03C0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGameplayTag                                        _rateModifierTagToCompute;                               // 0x03C4(0x000C) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.SecondWind
	 * Size -> 0x0038 (FullSize[0x0408] - InheritedSize[0x03D0])
	 */
	class USecondWind : public UPerk
	{
	public:
		unsigned char                                              UnknownData_FBZG[0x8];                                   // 0x03D0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ESecondWindState                                           _currentState;                                           // 0x03D8(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_R19D[0x3];                                   // 0x03D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _amountHealed;                                           // 0x03DC(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2PC0[0x4];                                   // 0x03E0(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _numberOfHealStateToHealToActivate[0x3];                 // 0x03E4(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _durationOfHeal[0x3];                                    // 0x03F0(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _applyBrokenEffect;                                      // 0x03FC(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_AN00[0xB];                                   // 0x03FD(0x000B) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.SpawnEffectsOnAllSurvivorsBaseAddon
	 * Size -> 0x0010 (FullSize[0x02D0] - InheritedSize[0x02C0])
	 */
	class USpawnEffectsOnAllSurvivorsBaseAddon : public UItemAddon
	{
	public:
		bool                                                       _canCreateMultipleInstances;                             // 0x02C0(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_39UG[0xF];                                   // 0x02C1(0x000F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.SimpleSpawnEffectsOnAllSurvivorsAddon
	 * Size -> 0x0010 (FullSize[0x02E0] - InheritedSize[0x02D0])
	 */
	class USimpleSpawnEffectsOnAllSurvivorsAddon : public USpawnEffectsOnAllSurvivorsBaseAddon
	{
	public:
		TArray<struct FSimpleSpawnEffectsOnAllSurvivorsAddonParams> _statusEffectsSpawnParams;                               // 0x02D0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.SingleGateBlockerEffect
	 * Size -> 0x0050 (FullSize[0x03D8] - InheritedSize[0x0388])
	 */
	class USingleGateBlockerEffect : public UGateBlockerEffect
	{
	public:
		float                                                      _distanceThreshold;                                      // 0x0388(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7DM2[0x4];                                   // 0x038C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AEscapeDoor*                                         _gate;                                                   // 0x0390(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _isInRange;                                              // 0x0398(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SZFI[0x3F];                                  // 0x0399(0x003F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.SmallGame
	 * Size -> 0x0028 (FullSize[0x03F8] - InheritedSize[0x03D0])
	 */
	class USmallGame : public UPerk
	{
	public:
		float                                                      _detectionConeAngle[0x3];                                // 0x03D0(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _detectionConeAngleReductionRate[0x3];                   // 0x03DC(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _totemDetected;                                          // 0x03E8(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GP78[0xF];                                   // 0x03E9(0x000F) MISSED OFFSET (PADDING)

	public:
		void VFXTotemFound();
		void SearchForTotems();
		void Multicast_TotemFound();
		float GetDetectionConeAngle();
		void Authority_SetTotemDetected(bool value);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.SoleSurvivor
	 * Size -> 0x0030 (FullSize[0x0400] - InheritedSize[0x03D0])
	 */
	class USoleSurvivor : public UPerk
	{
	public:
		float                                                      _auraHideDistancePerDeadOrDisconnectedSurvivor[0x3];     // 0x03D0(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WEKN[0x4];                                   // 0x03DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ACamperPlayer*>                               _otherSurvivors;                                         // 0x03E0(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_NQR7[0x10];                                  // 0x03F0(0x0010) MISSED OFFSET (PADDING)

	public:
		void Authority_OnSurvivorAdded(class ACamperPlayer* survivor);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.Solidarity
	 * Size -> 0x0030 (FullSize[0x0400] - InheritedSize[0x03D0])
	 */
	class USolidarity : public UPerk
	{
	public:
		bool                                                       _allowMedkit;                                            // 0x03D0(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SAKX[0x7];                                   // 0x03D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UChargeableComponent*                                _healerHPSlot;                                           // 0x03D8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UChargeableComponent*                                _targetHPSlot;                                           // 0x03E0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UChargeableInteractionDefinition*                    _healOtherInteraction;                                   // 0x03E8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_W9BY[0x10];                                  // 0x03F0(0x0010) MISSED OFFSET (PADDING)

	public:
		void Authority_OnSkillCheckResponse(bool success, bool Bonus, class ADBDPlayer* Player, bool TriggerLoudNoise, bool hadInput, ESkillCheckCustomType Type, float ChargeChange);
		void Authority_OnHealthChargeApplied(float individualChargeAmount, float totalChargeAmount, class AActor* chargeInstigator, bool wasCoop, float DeltaTime);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.SpawningEffectPerk
	 * Size -> 0x00B8 (FullSize[0x0488] - InheritedSize[0x03D0])
	 */
	class USpawningEffectPerk : public UPerk
	{
	public:
		struct FPerkLevelEffectArray                               _perkLevelEffects[0x3];                                  // 0x03D0(0x0030) Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate
		struct FPlayerStatusEffectSpawnerHelper                    _effectSpawnerHelper;                                    // 0x0400(0x0088) Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.SpiesFromTheShadows
	 * Size -> 0x0008 (FullSize[0x03D8] - InheritedSize[0x03D0])
	 */
	class USpiesFromTheShadows : public UPerk
	{
	public:
		float                                                      _cooldownDurationSecs;                                   // 0x03D0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CW5H[0x4];                                   // 0x03D4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.SpineChillPerk
	 * Size -> 0x0010 (FullSize[0x03E0] - InheritedSize[0x03D0])
	 */
	class USpineChillPerk : public UPerk
	{
	public:
		float                                                      _actionSpeed[0x3];                                       // 0x03D0(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_NJQY[0x4];                                   // 0x03DC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.SprintBurst
	 * Size -> 0x0020 (FullSize[0x03F0] - InheritedSize[0x03D0])
	 */
	class USprintBurst : public UPerk
	{
	public:
		float                                                      _exhaustionDuration[0x3];                                // 0x03D0(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _sprintDuration;                                         // 0x03DC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UActivatableExhaustedEffect*                         _exhaustedEffect;                                        // 0x03E0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2G0C[0x8];                                   // 0x03E8(0x0008) MISSED OFFSET (PADDING)

	public:
		float GetSprintDuration();
		float GetExhaustedDuration();
		void Authority_OnIsRunningAndMovingChanged(bool IsRunningAndMoving);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.StatsSystemUtilities
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UStatsSystemUtilities : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_InitStatBP(struct FTunableStat* theStat);
		float STATIC_GetStatValueBP(const struct FTunableStat& theStat);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.StatusEffectOriginatorSubjectProvider
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UStatusEffectOriginatorSubjectProvider : public UModifierSubjectProvider
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.Surge
	 * Size -> 0x0040 (FullSize[0x0410] - InheritedSize[0x03D0])
	 */
	class USurge : public UPerk
	{
	public:
		float                                                      _zoneRadius[0x3];                                        // 0x03D0(0x000C) Edit, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _instantRegression[0x3];                                 // 0x03DC(0x000C) Edit, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _cooldownDuration[0x3];                                  // 0x03E8(0x000C) Edit, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _hasCooldown;                                            // 0x03F4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _useTerrorRadiusInsteadOfFixedDistance;                  // 0x03F5(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UYBR[0x1A];                                  // 0x03F6(0x001A) MISSED OFFSET (PADDING)

	public:
		void Client_TriggerEffects(TArray<class AGenerator*> generators);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.SurvivorWasRecentlyUnhookedEffect
	 * Size -> 0x0028 (FullSize[0x0378] - InheritedSize[0x0350])
	 */
	class USurvivorWasRecentlyUnhookedEffect : public UStatusEffect
	{
	public:
		struct FDBDTunableRowHandle                                _survivorWasRecentlyUnhookedDuration;                    // 0x0350(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.TestAnyActorPairQueryRangeIsTrue
	 * Size -> 0x0008 (FullSize[0x0108] - InheritedSize[0x0100])
	 */
	class UTestAnyActorPairQueryRangeIsTrue : public UAnyActorPairQueryRangeIsTrue
	{
	public:
		class UActorPairQueryEvaluatorComponent*                   _actorPairQueryEvaluatorComponent;                       // 0x0100(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.TestCollectable
	 * Size -> 0x0000 (FullSize[0x04B0] - InheritedSize[0x04B0])
	 */
	class ATestCollectable : public ACollectable
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.TestDBDGameState
	 * Size -> 0x0000 (FullSize[0x0818] - InheritedSize[0x0818])
	 */
	class ATestDBDGameState : public ADBDGameState
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.TheMettleOfMan
	 * Size -> 0x0048 (FullSize[0x0418] - InheritedSize[0x03D0])
	 */
	class UTheMettleOfMan : public UPerk
	{
	public:
		int32_t                                                    _tokenNeededToActivate[0x3];                             // 0x03D0(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _revealOutsideRange[0x3];                                // 0x03DC(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _mustBeInjured;                                          // 0x03E8(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JH4Y[0x3];                                   // 0x03E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    _numTokenSoFar;                                          // 0x03EC(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		ETheMettleOfManPhase                                       _currentPhase;                                           // 0x03F0(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_IX02[0xF];                                   // 0x03F1(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStatusEffect*                                       _revealToKillerEffect;                                   // 0x0400(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_R4C4[0x10];                                  // 0x0408(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnRep_NumTokenSoFar();
		void OnRep_CurrentPhase();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.ThrillingTremors
	 * Size -> 0x0060 (FullSize[0x0430] - InheritedSize[0x03D0])
	 */
	class UThrillingTremors : public UPerk
	{
	public:
		int32_t                                                    _cooldownByLevel[0x3];                                   // 0x03D0(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _durationByLevel[0x3];                                   // 0x03DC(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _disableWhenSurvivorPutDownOrUnhooked;                   // 0x03E8(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_N4SG[0x3];                                   // 0x03E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        _generatorAuraColorForKiller;                            // 0x03EC(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_X6US[0x4];                                   // 0x03FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AGenerator*>                                  _blockedGenerators;                                      // 0x0400(0x0010) Net, ZeroConstructor, Transient, RepNotify, NativeAccessSpecifierPrivate
		TArray<class AGenerator*>                                  _revealedGenerators;                                     // 0x0410(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_54I1[0x10];                                  // 0x0420(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnRep_BlockedGenerators();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.TimedObliviousEffect
	 * Size -> 0x0000 (FullSize[0x0360] - InheritedSize[0x0360])
	 */
	class UTimedObliviousEffect : public UObliviousEffect
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.WeddingRing
	 * Size -> 0x0008 (FullSize[0x02C8] - InheritedSize[0x02C0])
	 */
	class UWeddingRing : public UItemAddon
	{
	public:
		unsigned char                                              UnknownData_DZV7[0x8];                                   // 0x02C0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.YamaokaFamilyCrest
	 * Size -> 0x0038 (FullSize[0x02F8] - InheritedSize[0x02C0])
	 */
	class UYamaokaFamilyCrest : public UItemAddon
	{
	public:
		float                                                      _revealDuration;                                         // 0x02C0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _revealRange;                                            // 0x02C4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class ACamperPlayer*>                               _survivorsToReveal;                                      // 0x02C8(0x0010) Net, ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              _addonActivationCount;                                   // 0x02D8(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CY0V[0x1F];                                  // 0x02D9(0x001F) MISSED OFFSET (PADDING)

	public:
		void RevealSurvivor(class ACamperPlayer* survivorToReveal);
		void OnRep_AddonActivationCount();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.ZanshinTactics
	 * Size -> 0x0010 (FullSize[0x03E0] - InheritedSize[0x03D0])
	 */
	class UZanshinTactics : public UPerk
	{
	public:
		float                                                      _cooldownDuration[0x3];                                  // 0x03D0(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_J5ZE[0x4];                                   // 0x03DC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
