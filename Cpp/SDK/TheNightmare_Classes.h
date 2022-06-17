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
	 * Class TheNightmare.BlackBox
	 * Size -> 0x0040 (FullSize[0x0300] - InheritedSize[0x02C0])
	 */
	class UBlackBox : public UItemAddon
	{
	public:
		struct FDBDTunableRowHandle                                _blockDuration;                                          // 0x02C0(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_5RFL[0x18];                                  // 0x02E8(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheNightmare.DreamInducerComponent
	 * Size -> 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
	 */
	class UDreamInducerComponent : public UActorComponent
	{
	public:
		class UClass*                                              _generatorDreamworldClass;                               // 0x00B8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void Authority_OnLevelReadyToPlay();
		static UClass* StaticClass();
	};

	/**
	 * Class TheNightmare.DreamSnare
	 * Size -> 0x0000 (FullSize[0x0230] - InheritedSize[0x0230])
	 */
	class ADreamSnare : public AActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheNightmare.GeneratorDreamworldComponent
	 * Size -> 0x0018 (FullSize[0x00D0] - InheritedSize[0x00B8])
	 */
	class UGeneratorDreamworldComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_627R[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        _beamSocketsForBloodEffect;                              // 0x00C0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate

	public:
		void OnRepairSkillCheckFailed(bool success, bool Bonus, class ADBDPlayer* Player, bool TriggerLoudNoise, bool hadInput, ESkillCheckCustomType Type, float ChargeChange);
		void Cosmetic_OnPlayerFailSkillCheck(class ADBDPlayer* Player);
		static UClass* StaticClass();
	};

	/**
	 * Class TheNightmare.GeneratorTeleportInteraction
	 * Size -> 0x00C0 (FullSize[0x07A0] - InheritedSize[0x06E0])
	 */
	class UGeneratorTeleportInteraction : public UChargeableInteractionDefinition
	{
	public:
		float                                                      OnBloodSpurtsAINoiseEventRange;                          // 0x06E0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ECWR[0x4];                                   // 0x06E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimerObject*                                        _teleportCooldownTimer;                                  // 0x06E8(0x0008) ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4F3U[0x40];                                  // 0x06F0(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AGenerator*                                          _selectedGenerator;                                      // 0x0730(0x0008) BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AGenerator*                                          _locallySelectedGenerator;                               // 0x0738(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTransform                                          _selectedTeleportLocation;                               // 0x0740(0x0030) BlueprintVisible, Net, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		bool                                                       _isInteractionOngoing;                                   // 0x0770(0x0001) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _teleportFailed;                                         // 0x0771(0x0001) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FY2W[0x2];                                   // 0x0772(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _bloodSpurtInterval;                                     // 0x0774(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _collisionCheckCapsuleHalfHeight;                        // 0x0778(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _collisionCheckCapsuleRadius;                            // 0x077C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             _collisionCheckLocationOffset;                           // 0x0780(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _capsuleTraceAngleIncrement;                             // 0x078C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _generatorTeleportMaxAngle;                              // 0x0790(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _downRaycastLength;                                      // 0x0794(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_I8PW[0x8];                                   // 0x0798(0x0008) MISSED OFFSET (PADDING)

	public:
		void StopBloodSpurts();
		void StartBloodSpurts();
		void ShowBloodSpurtsVFX();
		void Server_SetSelectedGenerator(class AGenerator* Generator);
		void OnTeleportReady();
		void OnTeleportLocationChosen(class AGenerator* Generator, const struct FTransform& Location);
		void OnTeleported(const struct FTransform& transformBeforeTeleport);
		void OnSelectedGeneratorSet(class AGenerator* selectedGenerator);
		void OnRep_TeleportCooldownTimer();
		void OnRep_SelectedGenerator();
		void OnLocallySelectedGeneratorSet(class AGenerator* selectedGenerator);
		void OnIntroCompleted();
		void OnBloodSpurts();
		void Multicast_TeleportPlayer(const struct FVector& Location, const struct FRotator& Rotation);
		void Multicast_OnTeleportLocationChosen(class AGenerator* Generator, const struct FTransform& Location);
		bool IsTeleportAvailable();
		void InitializeTunableValues(class ASlasherPlayer* killer);
		class ADBDPlayer* GetOwningPlayer();
		class AGenerator* GetInlineGenerator(class ADBDPlayer* Player);
		bool CanTeleportAtGenerator(class AGenerator* Generator);
		bool Authority_TeleportPlayerToGenerator(class ADBDPlayer* playerToTeleport, class AGenerator* Generator);
		void Authority_StartTeleportCooldown(bool teleported);
		static UClass* StaticClass();
	};

	/**
	 * Class TheNightmare.InDreamSurvivorSubAnimInstance
	 * Size -> 0x0020 (FullSize[0x0560] - InheritedSize[0x0540])
	 */
	class UInDreamSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
	{
	public:
		bool                                                       _shouldLookSleepy;                                       // 0x0540(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GDNL[0x1F];                                  // 0x0541(0x001F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheNightmare.NightmareAnimInstance
	 * Size -> 0x0000 (FullSize[0x0600] - InheritedSize[0x0600])
	 */
	class UNightmareAnimInstance : public UKillerAnimInstance
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheNightmare.PlaceDreamPalletInteraction
	 * Size -> 0x0020 (FullSize[0x05E0] - InheritedSize[0x05C0])
	 */
	class UPlaceDreamPalletInteraction : public UInteractionDefinition
	{
	public:
		TArray<class APalletTracker*>                              _palletTrackers;                                         // 0x05B8(0x0010) BlueprintVisible, Net, ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ETOP[0x8];                                   // 0x05C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APalletTracker*                                      _closestTracker;                                         // 0x05D0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_HI79[0x8];                                   // 0x05D8(0x0008) MISSED OFFSET (PADDING)

	public:
		void SpawnDreamPallet(class APalletTracker* trackerAtLocation);
		void InitializeTunableValues(class ASlasherPlayer* killer);
		class APalletTracker* GetTargetedPallet();
		bool CanSpawnDreamPalletAtTracker(class APalletTracker* tracker);
		static UClass* StaticClass();
	};

	/**
	 * Class TheNightmare.PresentationGeneratorTeleportProgressComponent
	 * Size -> 0x0010 (FullSize[0x00C8] - InheritedSize[0x00B8])
	 */
	class UPresentationGeneratorTeleportProgressComponent : public UPresentationItemProgressComponent
	{
	public:
		unsigned char                                              UnknownData_SKQT[0x10];                                  // 0x00B8(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheNightmare.RememberMe
	 * Size -> 0x0000 (FullSize[0x03D0] - InheritedSize[0x03D0])
	 */
	class URememberMe : public UPerk
	{
	public:
		bool DidLoseHealthState(class AActor* DamagedActor, int32_t oldHealthStateCount);
		static UClass* StaticClass();
	};

	/**
	 * Class TheNightmare.SetDreamSnareInteraction
	 * Size -> 0x0010 (FullSize[0x06F0] - InheritedSize[0x06E0])
	 */
	class USetDreamSnareInteraction : public UChargeableInteractionDefinition
	{
	public:
		float                                                      MinPitch;                                                // 0x06E0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MinPlacementDistance;                                    // 0x06E4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MaxPlacementDistance;                                    // 0x06E8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0Z2N[0x4];                                   // 0x06EC(0x0004) MISSED OFFSET (PADDING)

	public:
		bool HasCancelledDreamSnare();
		float GetTrapDistanceFromControlRotation();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
