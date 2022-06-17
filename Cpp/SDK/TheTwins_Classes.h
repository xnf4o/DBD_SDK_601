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
	 * Class TheTwins.Addon_K22Power_11
	 * Size -> 0x0000 (FullSize[0x02D0] - InheritedSize[0x02D0])
	 */
	class UAddon_K22Power_11 : public UOnEventBaseAddon
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheTwins.Addon_K22Power_12
	 * Size -> 0x0008 (FullSize[0x02D8] - InheritedSize[0x02D0])
	 */
	class UAddon_K22Power_12 : public USpawnEffectsOnAllSurvivorsBaseAddon
	{
	public:
		float                                                      _increaseRemoveTwinTime;                                 // 0x02D0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_DGIM[0x4];                                   // 0x02D4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheTwins.Addon_K22Power_15
	 * Size -> 0x0008 (FullSize[0x02D8] - InheritedSize[0x02D0])
	 */
	class UAddon_K22Power_15 : public UOnEventBaseAddon
	{
	public:
		float                                                      _brokenDuration;                                         // 0x02D0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_OGCH[0x4];                                   // 0x02D4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheTwins.Addon_K22Power_17
	 * Size -> 0x0000 (FullSize[0x02D0] - InheritedSize[0x02D0])
	 */
	class UAddon_K22Power_17 : public UOnEventBaseAddon
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheTwins.Addon_K22Power_18
	 * Size -> 0x0030 (FullSize[0x0300] - InheritedSize[0x02D0])
	 */
	class UAddon_K22Power_18 : public USpawnEffectsOnAllSurvivorsBaseAddon
	{
	public:
		unsigned char                                              UnknownData_F7HP[0x8];                                   // 0x02D0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _lingerDuration;                                         // 0x02D8(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void Authority_OnTwinSet(class AConjoinedTwin* twin);
		static UClass* StaticClass();
	};

	/**
	 * Class TheTwins.Addon_K22Power_19
	 * Size -> 0x0008 (FullSize[0x02D8] - InheritedSize[0x02D0])
	 */
	class UAddon_K22Power_19 : public UOnEventBaseAddon
	{
	public:
		float                                                      _auraRevealedDuration;                                   // 0x02D0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_5H2H[0x4];                                   // 0x02D4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheTwins.Addon_K22Power_20
	 * Size -> 0x0008 (FullSize[0x02D8] - InheritedSize[0x02D0])
	 */
	class UAddon_K22Power_20 : public UOnEventBaseAddon
	{
	public:
		float                                                      _undetectableDuration;                                   // 0x02D0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_L39R[0x4];                                   // 0x02D4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheTwins.Addon_K22Power_21
	 * Size -> 0x0008 (FullSize[0x02D8] - InheritedSize[0x02D0])
	 */
	class UAddon_K22Power_21 : public UOnEventBaseAddon
	{
	public:
		float                                                      _exposedDuration;                                        // 0x02D0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_5KF5[0x4];                                   // 0x02D4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheTwins.Addon_K22Power_9
	 * Size -> 0x0008 (FullSize[0x02D8] - InheritedSize[0x02D0])
	 */
	class UAddon_K22Power_9 : public USpawnEffectsOnAllSurvivorsBaseAddon
	{
	public:
		float                                                      _increaseDestroyTwinTime;                                // 0x02D0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_796J[0x4];                                   // 0x02D4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheTwins.Addon_K22Power_10
	 * Size -> 0x0008 (FullSize[0x02D8] - InheritedSize[0x02D0])
	 */
	class UAddon_K22Power_10 : public UOnEventBaseAddon
	{
	public:
		float                                                      _blindnessDuration;                                      // 0x02D0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_UVL5[0x4];                                   // 0x02D4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheTwins.AISkill_FindInteractable_CrushTwin
	 * Size -> 0x0068 (FullSize[0x0180] - InheritedSize[0x0118])
	 */
	class UAISkill_FindInteractable_CrushTwin : public UAISkill_FindInteractable
	{
	public:
		unsigned char                                              UnknownData_T8F6[0xC];                                   // 0x0118(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAITunableParameter                                 _crushVictorGoalWeight;                                  // 0x0124(0x0010) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate
		struct FAITunableParameter                                 _recoveringTimeEstimationErrorMin;                       // 0x0134(0x0010) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate
		struct FAITunableParameter                                 _recoveringTimeEstimationErrorMax;                       // 0x0144(0x0010) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_VK5U[0x4];                                   // 0x0154(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _destroyTwinMaxCharge;                                   // 0x0158(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheTwins.AISkill_Interaction_RemoveTwin
	 * Size -> 0x0028 (FullSize[0x0198] - InheritedSize[0x0170])
	 */
	class UAISkill_Interaction_RemoveTwin : public UAISkill_Interaction
	{
	public:
		struct FDBDTunableRowHandle                                _removeTwinMaxCharge;                                    // 0x0170(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheTwins.Appraisal
	 * Size -> 0x0018 (FullSize[0x03E8] - InheritedSize[0x03D0])
	 */
	class UAppraisal : public UPerk
	{
	public:
		float                                                      _chestSearchSpeedMultiplier[0x3];                        // 0x03D0(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_N040[0xC];                                   // 0x03DC(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheTwins.PossessPlayer
	 * Size -> 0x0030 (FullSize[0x0710] - InheritedSize[0x06E0])
	 */
	class UPossessPlayer : public UChargeableInteractionDefinition
	{
	public:
		struct FDBDTunableRowHandle                                _possessThePlayerMaxCharge;                              // 0x06E0(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6XWM[0x8];                                   // 0x0708(0x0008) MISSED OFFSET (PADDING)

	public:
		void Cosmetic_OnPossessStart(class ADBDPlayer* Player);
		void Cosmetic_OnPossessCancelled(class ADBDPlayer* Player);
		static UClass* StaticClass();
	};

	/**
	 * Class TheTwins.PossessTheConjoinedTwin
	 * Size -> 0x0060 (FullSize[0x0770] - InheritedSize[0x0710])
	 */
	class UPossessTheConjoinedTwin : public UPossessPlayer
	{
	public:
		unsigned char                                              UnknownData_BZ64[0x60];                                  // 0x0710(0x0060) MISSED OFFSET (PADDING)

	public:
		void OnTwinSet(class AConjoinedTwin* twin);
		void OnPowerCollected(class ADBDPlayer* collector);
		static UClass* StaticClass();
	};

	/**
	 * Class TheTwins.AutoPossessTheConjoinedTwin
	 * Size -> 0x0000 (FullSize[0x0770] - InheritedSize[0x0770])
	 */
	class UAutoPossessTheConjoinedTwin : public UPossessTheConjoinedTwin
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheTwins.BaseTwinInspectLocker
	 * Size -> 0x0030 (FullSize[0x0620] - InheritedSize[0x05F0])
	 */
	class UBaseTwinInspectLocker : public UBaseLockerInteraction
	{
	public:
		struct FDBDTunableRowHandle                                _inspectInteractionTime;                                 // 0x05E8(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2KOK[0x10];                                  // 0x0610(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheTwins.BeingPossessedInteraction
	 * Size -> 0x0080 (FullSize[0x0640] - InheritedSize[0x05C0])
	 */
	class UBeingPossessedInteraction : public UInteractionDefinition
	{
	public:
		struct FTunableStat                                        _beingPossessedMaxCharge;                                // 0x05B8(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FCOG[0x8];                                   // 0x0638(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnLevelReadyToPlay();
		static UClass* StaticClass();
	};

	/**
	 * Class TheTwins.BrotherBlindFlashlightableLightingStrategy
	 * Size -> 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
	 */
	class UBrotherBlindFlashlightableLightingStrategy : public UBlindFlashlightableLightingStrategy
	{
	public:
		unsigned char                                              UnknownData_J4PU[0x10];                                  // 0x0040(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheTwins.ChargeTwinJumpInteraction
	 * Size -> 0x0150 (FullSize[0x0830] - InheritedSize[0x06E0])
	 */
	class UChargeTwinJumpInteraction : public UChargeableInteractionDefinition
	{
	public:
		unsigned char                                              UnknownData_P4TJ[0x48];                                  // 0x06E0(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _chargeJumpMaxCharge;                                    // 0x0728(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _interactionViewPitchMax;                                // 0x0750(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _interactionViewPitchMin;                                // 0x0778(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2BG4[0x28];                                  // 0x07A0(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _cancelCooldownTime;                                     // 0x07C8(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_NHP2[0x40];                                  // 0x07F0(0x0040) MISSED OFFSET (PADDING)

	public:
		void Cosmetic_OnJumpReadyChanged(class ADBDPlayer* twin, bool Ready);
		static UClass* StaticClass();
	};

	/**
	 * Class TheTwins.ConjoinedTwin
	 * Size -> 0x0180 (FullSize[0x1290] - InheritedSize[0x1110])
	 */
	class AConjoinedTwin : public ADBDPlayer
	{
	public:
		class URangeToActorsTrackerComponent*                      _restrictedPossessionAreaTracker;                        // 0x1110(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTwinOutlineUpdateStrategy*                          _twinOutlineUpdateStrategy;                              // 0x1118(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAkComponent*                                        _twinLullabyAudioComponent;                              // 0x1120(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UKillerBlindingFXComponent*                          _twinBlindingFX;                                         // 0x1128(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCustomizedAudioComponent*                           _customizedAudio;                                        // 0x1130(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDBDAttackerComponent*                               _attackerComponent;                                      // 0x1138(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _maxWalkSpeed;                                           // 0x1140(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHitValidatorComponent*                              _hitValidator;                                           // 0x1168(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHitValidatorConfigurator*                           _hitValidationConfigurator;                              // 0x1170(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _gravityScale;                                           // 0x1178(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAnimationMontageSlave*                              _animationFollower;                                      // 0x11A0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RZC0[0x18];                                  // 0x11A8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _revealDurationOnAttached;                               // 0x11C0(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTwinFirstPersonViewComponent*                       _firstPersonViewComponent;                               // 0x11E8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UFlashlightableComponent*                            _eyesFlashlightable;                                     // 0x11F0(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBlindFlashlightTargetFXComponent*                   _blindFlashlightTargetFXComponent;                       // 0x11F8(0x0008) Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UFirecrackerEffectHandlerComponent*                  _firecrackerEffectHandlerComponent;                      // 0x1200(0x0008) Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QGIF[0x8];                                   // 0x1208(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFastTimer                                          _flashlightBlindEvasionScoreTimer;                       // 0x1210(0x0030) Transient, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _flashlightEvasionScoreCooldown;                         // 0x1240(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTwinPossessNegationEffectComponent*                 _twinPossessNegationEffectComponent;                     // 0x1268(0x0008) Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BZOB[0x20];                                  // 0x1270(0x0020) MISSED OFFSET (PADDING)

	public:
		void Server_SendAttackInput(bool Pressed);
		void OnFinishedPlayingEvent(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
		void Cosmetic_OnOnGroundUncontrolledChanged(bool onGroundAndUncontrolled);
		void Authority_OnFirecrackerInRangeBegin(const struct FFirecrackerEffectData& effectData);
		static UClass* StaticClass();
	};

	/**
	 * Class TheTwins.ConjoinedTwinAnimInstance
	 * Size -> 0x00B0 (FullSize[0x05F0] - InheritedSize[0x0540])
	 */
	class UConjoinedTwinAnimInstance : public UPlayerAnimInstance
	{
	public:
		class AConjoinedTwin*                                      _owningConjoinedTwin;                                    // 0x0538(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _firstPersonView;                                        // 0x0540(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_PHNN[0x3];                                   // 0x0541(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _forwardVelocity;                                        // 0x0544(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _lateralVelocity;                                        // 0x0548(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EInteractionAnimation                                      _interactionType;                                        // 0x054C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isInAir;                                                // 0x054D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isIdle;                                                 // 0x054E(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_TURU[0x1];                                   // 0x054F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _idleTime;                                               // 0x0550(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isAttacking;                                            // 0x0554(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_L2H5[0x3];                                   // 0x0555(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDBDAttackerComponent*                               _attackerComponent;                                      // 0x0558(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTwinAttachmentComponent*                            _twinAttachmentComponent;                                // 0x0560(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTwinLockerBlockerComponent*                         _twinLockerBlockerComponent;                             // 0x0568(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _animYaw;                                                // 0x0570(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _animPitch;                                              // 0x0574(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isSpectator;                                            // 0x0578(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CGM7[0x3];                                   // 0x0579(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _animDirection;                                          // 0x057C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _animSpeed;                                              // 0x0580(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isAttachedToSister;                                     // 0x0584(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isAttachedToSurvivor;                                   // 0x0585(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isAttachedToFemaleSurvivor;                             // 0x0586(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isChargingTwinJump;                                     // 0x0587(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isPossessing;                                           // 0x0588(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isWakingUpFromPossess;                                  // 0x0589(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isDormant;                                              // 0x058A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isBeingAutoPossessedAfterRelease;                       // 0x058B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isAttachedToLocker;                                     // 0x058C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EAttackSubstate                                            _attackState;                                            // 0x058D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MSKY[0x62];                                  // 0x058E(0x0062) MISSED OFFSET (PADDING)

	public:
		class AConjoinedTwin* GetOwningConjoinedTwin();
		static UClass* StaticClass();
	};

	/**
	 * Class TheTwins.ConjoinedTwinInteractable
	 * Size -> 0x0020 (FullSize[0x0368] - InheritedSize[0x0348])
	 */
	class AConjoinedTwinInteractable : public APlayerInteractable
	{
	public:
		class UChargeableComponent*                                _possessKillerChargeable;                                // 0x0348(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UChargeableComponent*                                _chargeTwinJumpChargeable;                               // 0x0350(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UChargeableComponent*                                _removeTwinChargeable;                                   // 0x0358(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UChargeableComponent*                                _destroyTwinChargeable;                                  // 0x0360(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheTwins.ConjoinedTwinStateMachine
	 * Size -> 0x0000 (FullSize[0x0130] - InheritedSize[0x0130])
	 */
	class UConjoinedTwinStateMachine : public UPlayerStateMachine
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheTwins.CoupDeGrace
	 * Size -> 0x0020 (FullSize[0x03F0] - InheritedSize[0x03D0])
	 */
	class UCoupDeGrace : public UPerk
	{
	public:
		float                                                      _lungeAttackAddDurationMultiplier[0x3];                  // 0x03D0(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_A0I7[0x4];                                   // 0x03DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AGenerator*>                                  _completedGenerators;                                    // 0x03E0(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheTwins.Deception
	 * Size -> 0x0038 (FullSize[0x0408] - InheritedSize[0x03D0])
	 */
	class UDeception : public UPerk
	{
	public:
		float                                                      _noScratchMarksDuration[0x3];                            // 0x03D0(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _perkCooldownDuration[0x3];                              // 0x03DC(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UStatusEffect*                                       _statusEffect;                                           // 0x03E8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_X23M[0x8];                                   // 0x03F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UManualIconStrategy*                                 _iconStrategy;                                           // 0x03F8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_U9M1[0x8];                                   // 0x0400(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnOwningPlayerFakedEnteringLockerCosmetic();
		static UClass* StaticClass();
	};

	/**
	 * Class TheTwins.DestroyTwin
	 * Size -> 0x0070 (FullSize[0x0750] - InheritedSize[0x06E0])
	 */
	class UDestroyTwin : public UChargeableInteractionDefinition
	{
	public:
		unsigned char                                              UnknownData_2S6P[0x40];                                  // 0x06E0(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _destroyTwinMaxCharge;                                   // 0x0720(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_K059[0x8];                                   // 0x0748(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheTwins.Hoarder
	 * Size -> 0x0050 (FullSize[0x0420] - InheritedSize[0x03D0])
	 */
	class UHoarder : public UPerk
	{
	public:
		unsigned char                                              UnknownData_KMCT[0x8];                                   // 0x03D0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ASearchable*>                                 _chests;                                                 // 0x03D8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		float                                                      _camperInteractItemPickupRevealRange[0x3];               // 0x03E8(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    _extraChestsSpawned[0x3];                                // 0x03F4(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _bubbleIndicatorLifetime[0x3];                           // 0x0400(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _showUniqueChestVisualPerState;                          // 0x040C(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Y34P[0x13];                                  // 0x040D(0x0013) MISSED OFFSET (PADDING)

	public:
		void Local_ThrowBubbleIndicator(EPerkInteractionObjectType camperInteractionType, class AActor* objectActor, class ACamperPlayer* interactingCamperPlayer);
		float GetBubbleIndicatorLifetime();
		static UClass* StaticClass();
	};

	/**
	 * Class TheTwins.IsTwinRecallReady
	 * Size -> 0x0008 (FullSize[0x00F0] - InheritedSize[0x00E8])
	 */
	class UIsTwinRecallReady : public UEventDrivenModifierCondition
	{
	public:
		unsigned char                                              UnknownData_23Q1[0x8];                                   // 0x00E8(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnLevelReadyToPlay();
		static UClass* StaticClass();
	};

	/**
	 * Class TheTwins.K22AchievementTagTeam
	 * Size -> 0x0018 (FullSize[0x00D0] - InheritedSize[0x00B8])
	 */
	class UK22AchievementTagTeam : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_GFMJ[0x18];                                  // 0x00B8(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheTwins.K22Power
	 * Size -> 0x0168 (FullSize[0x0618] - InheritedSize[0x04B0])
	 */
	class AK22Power : public ACollectable
	{
	public:
		unsigned char                                              UnknownData_8UH7[0x18];                                  // 0x04B0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UChargeableComponent*                                _releaseConjoinedTwinChargeable;                         // 0x04C8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UChargeableComponent*                                _possessConjoinedTwinChargeable;                         // 0x04D0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_R7KX[0x18];                                  // 0x04D8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AConjoinedTwin*                                      _conjoinedTwin;                                          // 0x04F0(0x0008) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AConjoinedTwin*                                      _conjoinedTwinParadise;                                  // 0x04F8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPowerChargeComponent*                               _powerCharge;                                            // 0x0500(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UK22PowerChargePresentationItemProgressComponent*    _powerChargePresentationItemProgress;                    // 0x0508(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _powerMaxCharge;                                         // 0x0510(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _conjoinedTwinClass;                                     // 0x0538(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SKOO[0x18];                                  // 0x0540(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _powerRechargeRate;                                      // 0x0558(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _timeBeforeAutoDestroy;                                  // 0x0580(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _timeBeforeRecallAvailable;                              // 0x05A8(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_VB1M[0x48];                                  // 0x05D0(0x0048) MISSED OFFSET (PADDING)

	public:
		void OnRep_ConjoinedTwin();
		void OnPowerChargeEmpty();
		void OnFirstAttachmentToSister();
		class AConjoinedTwin* GetConjoinedTwin();
		void Authority_OnPossessTwinChargePercentChanged(class UChargeableComponent* ChargeableComponent, float PercentCompletionChange, float TotalPercentComplete);
		void Authority_OnDestroyTwinChargePercentChanged(class UChargeableComponent* ChargeableComponent, float PercentCompletionChange, float TotalPercentComplete);
		static UClass* StaticClass();
	};

	/**
	 * Class TheTwins.K22PowerChargePresentationItemProgressComponent
	 * Size -> 0x0018 (FullSize[0x00D0] - InheritedSize[0x00B8])
	 */
	class UK22PowerChargePresentationItemProgressComponent : public UPresentationItemProgressComponent
	{
	public:
		class UPowerChargeComponent*                               _powerChargeComponent;                                   // 0x00B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2Z4B[0x10];                                  // 0x00C0(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnTwinSet(class AConjoinedTwin* twin);
		static UClass* StaticClass();
	};

	/**
	 * Class TheTwins.K22ScoreComponent
	 * Size -> 0x0018 (FullSize[0x00D0] - InheritedSize[0x00B8])
	 */
	class UK22ScoreComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_MLJ8[0x18];                                  // 0x00B8(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheTwins.KillerBeingPossessedInteraction
	 * Size -> 0x0000 (FullSize[0x0640] - InheritedSize[0x0640])
	 */
	class UKillerBeingPossessedInteraction : public UBeingPossessedInteraction
	{
	public:
		class UCurveFloat*                                         _wakeUpSpeedCurve;                                       // 0x0638(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheTwins.PossessionComponent
	 * Size -> 0x0088 (FullSize[0x0140] - InheritedSize[0x00B8])
	 */
	class UPossessionComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_PL2C[0x61];                                  // 0x00B8(0x0061) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       _startPossessed;                                         // 0x0119(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JUB7[0x6];                                   // 0x011A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AAIController*                                       _emptyController;                                        // 0x0120(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CSYW[0x18];                                  // 0x0128(0x0018) MISSED OFFSET (PADDING)

	public:
		void Server_StartPossessionOf(class ADBDPlayer* playerToPossess, bool shouldStartBeingPossessedInteraction);
		void Server_NotifyPossessionDone();
		void OnLevelReadyToPlay();
		void Multicast_StartPossessionOf(class ADBDPlayer* playerToPossess);
		void Multicast_NotifyPossessionDone();
		bool IsPossessed();
		bool IsDormant();
		void CosmeticLocal_OnUncontrolled(class ADBDPlayer* Player);
		void CosmeticLocal_OnControlled(class ADBDPlayer* Player);
		void Cosmetic_OnControlledChanged(class ADBDPlayer* Player, bool IsControlled);
		void Client_StartStateMachineDriverChangeProcess();
		static UClass* StaticClass();
	};

	/**
	 * Class TheTwins.KillerPossessionComponent
	 * Size -> 0x0060 (FullSize[0x01A0] - InheritedSize[0x0140])
	 */
	class UKillerPossessionComponent : public UPossessionComponent
	{
	public:
		bool                                                       _shouldDeactivateCollisionsWithSurvivors;                // 0x0140(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_HRHZ[0x37];                                  // 0x0141(0x0037) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _timeBeforeCollisionsDeactivation;                       // 0x0178(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnRep_ShouldDeactivateCollisionsWithSurvivors();
		static UClass* StaticClass();
	};

	/**
	 * Class TheTwins.PossessNegationEffectComponent
	 * Size -> 0x0018 (FullSize[0x00D0] - InheritedSize[0x00B8])
	 */
	class UPossessNegationEffectComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             PlayCantPossessSound;                                    // 0x00B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7UW6[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (PADDING)

	public:
		void PlayCantPossessSound__DelegateSignature();
		void OnLevelReadyToPlay();
		static UClass* StaticClass();
	};

	/**
	 * Class TheTwins.KillerPossessNegationEffectComponent
	 * Size -> 0x0020 (FullSize[0x00F0] - InheritedSize[0x00D0])
	 */
	class UKillerPossessNegationEffectComponent : public UPossessNegationEffectComponent
	{
	public:
		unsigned char                                              UnknownData_Z780[0x20];                                  // 0x00D0(0x0020) MISSED OFFSET (PADDING)

	public:
		void OnTwinSet(class AConjoinedTwin* twin);
		static UClass* StaticClass();
	};

	/**
	 * Class TheTwins.Oppression
	 * Size -> 0x0018 (FullSize[0x03E8] - InheritedSize[0x03D0])
	 */
	class UOppression : public UPerk
	{
	public:
		int32_t                                                    _nbGeneratorsAffectedByPerk[0x3];                        // 0x03D0(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    _perkCooldown[0x3];                                      // 0x03DC(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheTwins.PossessTheKiller
	 * Size -> 0x0030 (FullSize[0x0740] - InheritedSize[0x0710])
	 */
	class UPossessTheKiller : public UPossessPlayer
	{
	public:
		unsigned char                                              UnknownData_D31U[0x30];                                  // 0x0710(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheTwins.PowerStruggle
	 * Size -> 0x0010 (FullSize[0x03E0] - InheritedSize[0x03D0])
	 */
	class UPowerStruggle : public UPerk
	{
	public:
		float                                                      _wigglePercentToActivatePerk[0x3];                       // 0x03D0(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_VF6E[0x4];                                   // 0x03DC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheTwins.PushTwinOnLockerInteraction
	 * Size -> 0x0060 (FullSize[0x0740] - InheritedSize[0x06E0])
	 */
	class UPushTwinOnLockerInteraction : public UChargeableInteractionDefinition
	{
	public:
		class UChargeableComponent*                                _pushTwinOnLockerChargeable;                             // 0x06E0(0x0008) ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _pushTwinOnLockerMaxCharge;                              // 0x06E8(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_PA6V[0x30];                                  // 0x0710(0x0030) MISSED OFFSET (PADDING)

	public:
		void OnTwinSet(class AConjoinedTwin* twin);
		void OnRep_PushTwinOnLockerChargeable();
		void Authority_OnPlayerInLockerChanged(class ADBDPlayer* previousPlayerInLocker, class ADBDPlayer* newPlayerInLocker);
		static UClass* StaticClass();
	};

	/**
	 * Class TheTwins.RecallTwin
	 * Size -> 0x0020 (FullSize[0x05E0] - InheritedSize[0x05C0])
	 */
	class URecallTwin : public UInteractionDefinition
	{
	public:
		unsigned char                                              UnknownData_U097[0x20];                                  // 0x05C0(0x0020) MISSED OFFSET (PADDING)

	public:
		void OnTwinSet(class AConjoinedTwin* twin);
		static UClass* StaticClass();
	};

	/**
	 * Class TheTwins.ReleaseConjoinedTwin
	 * Size -> 0x0170 (FullSize[0x0850] - InheritedSize[0x06E0])
	 */
	class UReleaseConjoinedTwin : public UChargeableInteractionDefinition
	{
	public:
		struct FDBDTunableRowHandle                                _releaseMaxCharge;                                       // 0x06E0(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _releaseExitTime;                                        // 0x0708(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_B0RM[0x34];                                  // 0x0788(0x0034) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       _releaseAnimationWentToTheEnd;                           // 0x07BC(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_47G6[0x93];                                  // 0x07BD(0x0093) MISSED OFFSET (PADDING)

	public:
		void OnTwinSet(class AConjoinedTwin* twin);
		void OnRep_ReleaseAnimationWentToTheEnd();
		void OnPowerCollected(class ADBDPlayer* collector);
		void OnKillerStunned(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
		void Cosmetic_OnReleaseTwinInteractionUpdateStart(class ADBDPlayer* sister, class AConjoinedTwin* brother);
		void Cosmetic_OnReleaseTwinInteractionUpdate(class ADBDPlayer* sister, class AConjoinedTwin* brother, float DeltaTime);
		void Cosmetic_OnReleaseChargeComplete(class ADBDPlayer* sister, class AConjoinedTwin* brother);
		void Cosmetic_OnReleaseCancelled(class ADBDPlayer* sister, class AConjoinedTwin* brother);
		static UClass* StaticClass();
	};

	/**
	 * Class TheTwins.RemoveTwin
	 * Size -> 0x0090 (FullSize[0x0770] - InheritedSize[0x06E0])
	 */
	class URemoveTwin : public UChargeableInteractionDefinition
	{
	public:
		unsigned char                                              UnknownData_N24Y[0x30];                                  // 0x06E0(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _removeTwinMaxCharge;                                    // 0x0710(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _removeTwinExitTime;                                     // 0x0738(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _brotherRemoveDistanceFromSurvivor;                      // 0x0760(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QJ7S[0xC];                                   // 0x0764(0x000C) MISSED OFFSET (PADDING)

	public:
		void OnRemoveMontageEnd(const struct FAnimationMontageDescriptor& Montage, bool interrupted, class ADBDPlayer* destroyingPlayer);
		static UClass* StaticClass();
	};

	/**
	 * Class TheTwins.SisterBlindFlashlightableLightingStrategy
	 * Size -> 0x0030 (FullSize[0x0070] - InheritedSize[0x0040])
	 */
	class USisterBlindFlashlightableLightingStrategy : public UBlindFlashlightableLightingStrategy
	{
	public:
		unsigned char                                              UnknownData_7X79[0x30];                                  // 0x0040(0x0030) MISSED OFFSET (PADDING)

	public:
		void OnTwinSet(class AConjoinedTwin* twin);
		static UClass* StaticClass();
	};

	/**
	 * Class TheTwins.TheTwinsCheatComponent
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	class UTheTwinsCheatComponent : public UActorComponent
	{
	public:
		void Multicast_TrySendThePlayerBackInKiller(class UTwinPossessionComponent* TwinPossessionComponent);
		void DBD_TwinDestroyTheTwin();
		static UClass* StaticClass();
	};

	/**
	 * Class TheTwins.TwinAOELingeringStatusEffect
	 * Size -> 0x00A0 (FullSize[0x03F8] - InheritedSize[0x0358])
	 */
	class UTwinAOELingeringStatusEffect : public UBaseLingeringStatusEffect
	{
	public:
		struct FTunableStat                                        _shriekingRange;                                         // 0x0358(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6G6Q[0x20];                                  // 0x03D8(0x0020) MISSED OFFSET (PADDING)

	public:
		void Authority_OnInRangeChanged(bool InRange);
		static UClass* StaticClass();
	};

	/**
	 * Class TheTwins.TwinAttachmentComponent
	 * Size -> 0x0140 (FullSize[0x01F8] - InheritedSize[0x00B8])
	 */
	class UTwinAttachmentComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_M4RH[0x48];                                  // 0x00B8(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ADBDPlayer*                                          _attachedPlayer;                                         // 0x0100(0x0008) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QGX7[0x58];                                  // 0x0108(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStatusEffect*                                       _gateBlockerStatusEffect;                                // 0x0160(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_DGCZ[0x12];                                  // 0x0168(0x0012) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       _hasBeenDetachedBySurvivorDamageChanged;                 // 0x017A(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YW5I[0x5];                                   // 0x017B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _cantEscapeByGateLingerDuration;                         // 0x0180(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TMap<class ADBDPlayer*, struct FFastTimer>                 _escapeBlockerLingerTimers;                              // 0x01A8(0x0050) Transient, NativeAccessSpecifierPrivate

	public:
		void OnRep_AttachedPlayer(class ADBDPlayer* oldAttachedPlayer);
		void OnMoriMontageEnd(const struct FAnimationMontageDescriptor& Montage, bool interrupted);
		void OnLevelReadyToPlay();
		void OnImmobilizedStateChanged(ECamperImmobilizeState oldImmobilizeState, ECamperImmobilizeState newImmobilizeState);
		void OnAttachedSurvivorDamageStateChanged(ECamperDamageState oldState, ECamperDamageState NewState);
		void Multicast_QuickDestroyTwin();
		bool IsAttachedToSurvivor();
		bool IsAttachedToSister();
		void Cosmetic_OnTwinDetachedFromSurvivor(class ADBDPlayer* survivor, class ADBDPlayer* brother);
		void Cosmetic_OnTwinDetachedFromSister(class ADBDPlayer* sister, class ADBDPlayer* brother);
		void Cosmetic_OnTwinAttachedToSurvivor(class ADBDPlayer* survivor, class ADBDPlayer* brother);
		void Cosmetic_OnTwinAttachedToSister(class ADBDPlayer* sister, class ADBDPlayer* brother, bool isFirstAttachment);
		void Authority_OnRemoveTwinChargePercentChanged(class UChargeableComponent* ChargeableComponent, float PercentCompletionChange, float TotalPercentComplete);
		static UClass* StaticClass();
	};

	/**
	 * Class TheTwins.TwinBaseAddon
	 * Size -> 0x0010 (FullSize[0x02D0] - InheritedSize[0x02C0])
	 */
	class UTwinBaseAddon : public UItemAddon
	{
	public:
		class FName                                                _statusEffectId;                                         // 0x02C0(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _customParam;                                            // 0x02CC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void Authority_OnTwinSet(class AConjoinedTwin* twin);
		static UClass* StaticClass();
	};

	/**
	 * Class TheTwins.TwinBaseKillerInstinctEffect
	 * Size -> 0x0148 (FullSize[0x0498] - InheritedSize[0x0350])
	 */
	class UTwinBaseKillerInstinctEffect : public UStatusEffect
	{
	public:
		struct FTunableStat                                        _lullabyRange;                                           // 0x0350(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _lingerDuration;                                         // 0x03D0(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WHKG[0xA0];                                  // 0x03F8(0x00A0) MISSED OFFSET (PADDING)

	public:
		void Authority_OnInRangeChanged(bool InRange);
		static UClass* StaticClass();
	};

	/**
	 * Class TheTwins.TwinBeingPossessedInteraction
	 * Size -> 0x0000 (FullSize[0x0640] - InheritedSize[0x0640])
	 */
	class UTwinBeingPossessedInteraction : public UBeingPossessedInteraction
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheTwins.TwinCharacterMovementComponent
	 * Size -> 0x0010 (FullSize[0x0DF0] - InheritedSize[0x0DE0])
	 */
	class UTwinCharacterMovementComponent : public UDBDCharacterMovementComponent
	{
	public:
		unsigned char                                              UnknownData_6H61[0x10];                                  // 0x0DE0(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheTwins.TwinDestructionComponent
	 * Size -> 0x00E8 (FullSize[0x01A0] - InheritedSize[0x00B8])
	 */
	class UTwinDestructionComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_XA1V[0x30];                                  // 0x00B8(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _huskClass;                                              // 0x00E8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTransform                                          _dyingTransform;                                         // 0x00F0(0x0030) Net, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_A58P[0x70];                                  // 0x0120(0x0070) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _dyingFromSurvivorTranslation;                           // 0x0190(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_O5SR[0xC];                                   // 0x0194(0x000C) MISSED OFFSET (PADDING)

	public:
		void OnTwinQuickDestroy(class AConjoinedTwin* owningTwin);
		void OnDyingMontageEnd(const struct FAnimationMontageDescriptor& Montage, bool interrupted);
		void Cosmetic_OnTwinDestroyedFromSurvivorRemove(class AConjoinedTwin* owningTwin);
		void Cosmetic_OnTwinDestroyedFromKick(class AConjoinedTwin* owningTwin);
		void Authority_OnTwinQuickDestroyOver();
		static UClass* StaticClass();
	};

	/**
	 * Class TheTwins.TwinFirstPersonViewComponent
	 * Size -> 0x0028 (FullSize[0x00F0] - InheritedSize[0x00C8])
	 */
	class UTwinFirstPersonViewComponent : public UFirstPersonViewComponent
	{
	public:
		unsigned char                                              UnknownData_WXVW[0x28];                                  // 0x00C8(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheTwins.TwinHuskAnimInstance
	 * Size -> 0x0020 (FullSize[0x02E0] - InheritedSize[0x02C0])
	 */
	class UTwinHuskAnimInstance : public UAnimInstance
	{
	public:
		bool                                                       _isDeadFromSurvivorBack;                                 // 0x02C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_A2CK[0x7];                                   // 0x02C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APawn*                                               _owningPawn;                                             // 0x02C8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTwinHuskStateComponent*                             _twinHuskStateComponent;                                 // 0x02D0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_I8D0[0x8];                                   // 0x02D8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheTwins.TwinHuskStateComponent
	 * Size -> 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
	 */
	class UTwinHuskStateComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_6EM5[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (PADDING)

	public:
		bool IsDeadFromSurvivorBack();
		static UClass* StaticClass();
	};

	/**
	 * Class TheTwins.TwinInspectEmptyLocker
	 * Size -> 0x0000 (FullSize[0x0620] - InheritedSize[0x0620])
	 */
	class UTwinInspectEmptyLocker : public UBaseTwinInspectLocker
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheTwins.TwinInspectOccupiedLocker
	 * Size -> 0x0000 (FullSize[0x0620] - InheritedSize[0x0620])
	 */
	class UTwinInspectOccupiedLocker : public UBaseTwinInspectLocker
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheTwins.TwinJumpAttack
	 * Size -> 0x00F0 (FullSize[0x0470] - InheritedSize[0x0380])
	 */
	class UTwinJumpAttack : public UPounceAttack
	{
	public:
		struct FDBDTunableRowHandle                                _jumpVelocity;                                           // 0x0380(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         _jumpAngleCurve;                                         // 0x03A8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_14IH[0x30];                                  // 0x03B0(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _upDownObstructionAnglePrecision;                        // 0x03E0(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _leftRightObstructionAnglePrecision;                     // 0x0408(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _authorizedLandingHeight;                                // 0x0430(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_X19R[0x9];                                   // 0x0458(0x0009) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       _shouldTwinHaveJumpObjectType;                           // 0x0461(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XUWA[0xE];                                   // 0x0462(0x000E) MISSED OFFSET (PADDING)

	public:
		void Server_StopJump();
		void Server_OnJumpStartTwin();
		void OnRep_ShouldTwinHaveJumpObjectType();
		void Multicast_SetIsForbiddenLandingLocation(bool isForbiddenLocation);
		void Multicast_DestroyTwinOnWrongLanding();
		void Multicast_AttachToSurvivor(class ADBDPlayer* survivorToAttachTo);
		void Cosmetic_OnJumpStarted(class AConjoinedTwin* owningTwin);
		void Cosmetic_OnJumpObstructed(class AConjoinedTwin* owningTwin, class UPhysicalMaterial* PhysicalMaterial, const struct FVector& position, const struct FVector& Normal);
		void Cosmetic_OnJumpLanded(class AConjoinedTwin* owningTwin);
		void Cosmetic_OnJumpCooldownChanged(bool isInJumpCooldown, class AConjoinedTwin* owningTwin);
		void Cosmetic_OnIsForbiddenLandingLocationChanged(bool isForbiddenLocation, class AConjoinedTwin* twin);
		void Client_Debug_PrintFinalDecisionOnScreen(bool foundPath);
		static UClass* StaticClass();
	};

	/**
	 * Class TheTwins.TwinJumpAttackOpenSubstate
	 * Size -> 0x00A0 (FullSize[0x01D0] - InheritedSize[0x0130])
	 */
	class UTwinJumpAttackOpenSubstate : public UPounceAttackOpenSubstate
	{
	public:
		unsigned char                                              UnknownData_HBW8[0xA0];                                  // 0x0130(0x00A0) MISSED OFFSET (PADDING)

	public:
		void Local_OnTwinOverlapEnter(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& Hit);
		void Local_OnTwinCapsuleHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		static UClass* StaticClass();
	};

	/**
	 * Class TheTwins.TwinJumpAttackSuccessSubstate
	 * Size -> 0x0050 (FullSize[0x0168] - InheritedSize[0x0118])
	 */
	class UTwinJumpAttackSuccessSubstate : public UPounceAttackSuccessSubstate
	{
	public:
		struct FDBDTunableRowHandle                                _jumpSucceedAttachedCooldownTime;                        // 0x0118(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _jumpSucceedNotAttachedCooldownTime;                     // 0x0140(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheTwins.TwinJumpAttackMissSubstate
	 * Size -> 0x0000 (FullSize[0x0120] - InheritedSize[0x0120])
	 */
	class UTwinJumpAttackMissSubstate : public UPounceAttackMissSubstate
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheTwins.TwinJumpAttackObstructSubstate
	 * Size -> 0x0000 (FullSize[0x0128] - InheritedSize[0x0128])
	 */
	class UTwinJumpAttackObstructSubstate : public UPounceAttackObstructSubstate
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheTwins.TwinJumpAudioMutedEffect
	 * Size -> 0x0000 (FullSize[0x0350] - InheritedSize[0x0350])
	 */
	class UTwinJumpAudioMutedEffect : public UStatusEffect
	{
	public:
		void Cosmetic_OnTwinUnmuted();
		void Cosmetic_OnTwinMuted();
		static UClass* StaticClass();
	};

	/**
	 * Class TheTwins.TwinJumpTargetVisibleEffect
	 * Size -> 0x0018 (FullSize[0x0368] - InheritedSize[0x0350])
	 */
	class UTwinJumpTargetVisibleEffect : public UStatusEffect
	{
	public:
		class UClass*                                              _twinJumpTargetObject;                                   // 0x0350(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AActor*                                              _twinJumpTarget;                                         // 0x0358(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USelectiveVisibilityComponent*                       _jumpTargetVisibility;                                   // 0x0360(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnJumpTargetTick(const struct FVector& Location);
		void OnHideTargetPosition();
		static UClass* StaticClass();
	};

	/**
	 * Class TheTwins.TwinLockerBlockerComponent
	 * Size -> 0x0060 (FullSize[0x0118] - InheritedSize[0x00B8])
	 */
	class UTwinLockerBlockerComponent : public UActorComponent
	{
	public:
		TArray<class UClass*>                                      _interactionClasses;                                     // 0x00B8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_IWG5[0x10];                                  // 0x00C8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      _interactionsToDisableOnLockerClasses;                   // 0x00D8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_3HLF[0x30];                                  // 0x00E8(0x0030) MISSED OFFSET (PADDING)

	public:
		void OnPushedMontageStopped(const struct FAnimationMontageDescriptor& montageDescriptor);
		void OnPushedMontageStarted(const struct FAnimationMontageDescriptor& montageDescriptor, float Rate);
		void OnPushedMontageEnded(const struct FAnimationMontageDescriptor& montageDescriptor, bool interrupted);
		void OnPlayerInLockerChanged(class ADBDPlayer* previousPlayerInLocker, class ADBDPlayer* newPlayerInLocker);
		bool IsTwinAttachedToLocker();
		void Cosmetic_OnTwinOnLockerChanged(bool isOnLocker);
		void Authority_OnLevelReadyToPlay();
		static UClass* StaticClass();
	};

	/**
	 * Class TheTwins.TwinLullabyRangeAdditiveEffect
	 * Size -> 0x0150 (FullSize[0x04A0] - InheritedSize[0x0350])
	 */
	class UTwinLullabyRangeAdditiveEffect : public UStatusEffect
	{
	public:
		struct FDBDTunableRowHandle                                _defaultTwinLullabyDormantRange;                         // 0x0350(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _twinLullabyDormantRange;                                // 0x0378(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _twinLullabyAttachedRange;                               // 0x03F8(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MLH1[0x28];                                  // 0x0478(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheTwins.TwinOutlineUpdateStrategy
	 * Size -> 0x0050 (FullSize[0x0110] - InheritedSize[0x00C0])
	 */
	class UTwinOutlineUpdateStrategy : public UOutlineUpdateStrategy
	{
	public:
		struct FLinearColor                                        _visibleColorForKiller;                                  // 0x00C0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_G2A6[0x40];                                  // 0x00D0(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheTwins.TwinPlacerComponent
	 * Size -> 0x0020 (FullSize[0x0280] - InheritedSize[0x0260])
	 */
	class UTwinPlacerComponent : public UObjectPlacerComponent
	{
	public:
		unsigned char                                              UnknownData_V311[0x20];                                  // 0x0260(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheTwins.TwinPossessionComponent
	 * Size -> 0x0020 (FullSize[0x0160] - InheritedSize[0x0140])
	 */
	class UTwinPossessionComponent : public UPossessionComponent
	{
	public:
		unsigned char                                              UnknownData_UFG6[0x20];                                  // 0x0140(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheTwins.TwinPossessNegationEffectComponent
	 * Size -> 0x0020 (FullSize[0x00F0] - InheritedSize[0x00D0])
	 */
	class UTwinPossessNegationEffectComponent : public UPossessNegationEffectComponent
	{
	public:
		unsigned char                                              UnknownData_HEH6[0x20];                                  // 0x00D0(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheTwins.TwinsAnimInstance
	 * Size -> 0x0090 (FullSize[0x0690] - InheritedSize[0x0600])
	 */
	class UTwinsAnimInstance : public UKillerAnimInstance
	{
	public:
		unsigned char                                              UnknownData_CMS1[0x90];                                  // 0x0600(0x0090) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheTwins.TwinsSurvivorSubAnimInstance
	 * Size -> 0x0040 (FullSize[0x0580] - InheritedSize[0x0540])
	 */
	class UTwinsSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
	{
	public:
		bool                                                       _isRemovingTwin;                                         // 0x0540(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LKAI[0x3F];                                  // 0x0541(0x003F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheTwins.TwinStateHelperComponent
	 * Size -> 0x0030 (FullSize[0x00E8] - InheritedSize[0x00B8])
	 */
	class UTwinStateHelperComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_LLNX[0x30];                                  // 0x00B8(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheTwins.TwinStunnableComponent
	 * Size -> 0x0028 (FullSize[0x00E0] - InheritedSize[0x00B8])
	 */
	class UTwinStunnableComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_E9VP[0x28];                                  // 0x00B8(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheTwins.TwinSubjectProvider
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	class UTwinSubjectProvider : public UModifierSubjectProvider
	{
	public:
		unsigned char                                              UnknownData_NX8X[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnTwinSet(class AConjoinedTwin* twin);
		void ListenToTwinSet(class ASlasherPlayer* killer);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
