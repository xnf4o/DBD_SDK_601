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
	 * Class TheTrapper.Addon_Beartrap_05
	 * Size -> 0x0000 (FullSize[0x02C0] - InheritedSize[0x02C0])
	 */
	class UAddon_Beartrap_05 : public UItemAddon
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheTrapper.Addon_Beartrap_DisarmRevealer
	 * Size -> 0x0060 (FullSize[0x0320] - InheritedSize[0x02C0])
	 */
	class UAddon_Beartrap_DisarmRevealer : public UItemAddon
	{
	public:
		class FName                                                _auraRevealStatusEffectID;                               // 0x02C0(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _auraRevealDuration;                                     // 0x02CC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TMap<class ABearTrap*, class ACamperPlayer*>               _disarmedTrapMap;                                        // 0x02D0(0x0050) Transient, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheTrapper.BearTrap
	 * Size -> 0x0118 (FullSize[0x05D0] - InheritedSize[0x04B8])
	 */
	class ABearTrap : public ABaseTrap
	{
	public:
		class UBoxPlayerOverlapComponent*                          _interactionVolume;                                      // 0x04B8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCapsulePlayerOverlapComponent*                      _trapPlayerDetectionZone;                                // 0x04C0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UBoxComponent*                                       _killerSafetyZoneComponent;                              // 0x04C8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDOutlineComponent*                                _outlineComponent;                                       // 0x04D0(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UBearTrapOutlineUpdateStrategy*                      _outlineUpdateStrategy;                                  // 0x04D8(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMapActorComponent*                                  _mapActorComponent;                                      // 0x04E0(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USphereComponent*                                    _mapActorCollision;                                      // 0x04E8(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USphereComponent*                                    _trapBlocker;                                            // 0x04F0(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMontagePlayer*                                      _montagePlayer;                                          // 0x04F8(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             _onIsTrapSetChanged;                                     // 0x0500(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class ADBDPlayer*                                          _ownerPlayer;                                            // 0x0510(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDNavModifierComponent*                            _dangerNavModifierComponent;                             // 0x0518(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _isTrapperOutOfSafetyZone;                               // 0x0520(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6QQ8[0x3];                                   // 0x0521(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    _maximumAttemptsForSelfUntrap;                           // 0x0524(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    _selfUntrapAttemptsRemaining;                            // 0x0528(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QBZL[0x4];                                   // 0x052C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UInteractor*                                         _mainInteractor;                                         // 0x0530(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UInteractionDefinition*                              _trapSurvivor;                                           // 0x0538(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UInteractionDefinition*                              _trapKiller;                                             // 0x0540(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ADBDPlayer*                                          _trappedPlayer;                                          // 0x0548(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ZT0M[0x58];                                  // 0x0550(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimationMontageSlave*                              _animationMontageSlave;                                  // 0x05A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RKLW[0x20];                                  // 0x05B0(0x0020) MISSED OFFSET (PADDING)

	public:
		void TrySetTrappedPlayer(class ADBDPlayer* Player);
		void SetTrappedPlayerSinceMoved(bool didTrap);
		void SetTrappedPlayer(class ADBDPlayer* trappedPlayer);
		void PlayMontage(class UAnimMontage* Montage);
		void OnTrappedPlayerPickedUp(class ADBDPlayer* picker);
		void OnTrapDetectionZoneOverlapEnd(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void OnTrapDetectionZoneOverlapBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void OnSlasherSet(class ASlasherPlayer* Slasher);
		void OnSafetyZoneEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void OnLevelReadyToPlay_Implementation();
		void OnCollectUpdateStart();
		void OnCollectUpdateEnd();
		bool IsTrapperOutOfSafetyZone();
		void InitializeTrapSurvivorInteraction(class UInteractionDefinition* Interaction);
		void InitializeTrapKillerInteraction(class UInteractionDefinition* Interaction);
		void InitializeMainInteractor(class UInteractor* Interactor);
		bool HasTrappedPlayerSinceMoved();
		bool HasTrappedPlayer();
		class ADBDPlayer* GetTrappedPlayer();
		class UBearTrapAnimInstance* GetAnimInstance();
		class UAkComponent* GetAkAudioComponent();
		void Cosmetic_OnPlayerTrapped(class ADBDPlayer* trappedPlayer);
		static UClass* StaticClass();
	};

	/**
	 * Class TheTrapper.BearTrapAnimInstance
	 * Size -> 0x0010 (FullSize[0x02E0] - InheritedSize[0x02D0])
	 */
	class UBearTrapAnimInstance : public USleepingAnimInstance
	{
	public:
		bool                                                       _isBroken;                                               // 0x02D0(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isBeingCollected;                                       // 0x02D1(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _containsSurvivor;                                       // 0x02D2(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isTrapSet;                                              // 0x02D3(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _wasJustDisarmed;                                        // 0x02D4(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_FHHG[0xB];                                   // 0x02D5(0x000B) MISSED OFFSET (PADDING)

	public:
		void SetWasJustDisarmed(bool wasJustDisarmed);
		void SetIsTrapSet(bool IsTrapSet);
		void SetIsBeingCollected(bool isBeingCollected);
		void SetContainsSurvivor(bool containsSurvivor);
		static UClass* StaticClass();
	};

	/**
	 * Class TheTrapper.BearTrapKillerComponent
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	class UBearTrapKillerComponent : public UActorComponent
	{
	public:
		void Server_TryDisarmTrap(class ABearTrap* trapToDisarm);
		void Multicast_DisarmTrap(class ABearTrap* trapToDisarm);
		static UClass* StaticClass();
	};

	/**
	 * Class TheTrapper.DisarmBearTrapInteraction
	 * Size -> 0x0030 (FullSize[0x0710] - InheritedSize[0x06E0])
	 */
	class UDisarmBearTrapInteraction : public UChargeableInteractionDefinition
	{
	public:
		float                                                      _averageMaxVelocity;                                     // 0x06E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _averageMaxVelocitySquared;                              // 0x06E4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                _updateMontageID;                                        // 0x06E8(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                _loudNoiseAudibleRangeTunable;                           // 0x06F4(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MPWR[0x10];                                  // 0x0700(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheTrapper.IridescentStone
	 * Size -> 0x0000 (FullSize[0x02C0] - InheritedSize[0x02C0])
	 */
	class UIridescentStone : public UItemAddon
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheTrapper.ResetBearTrapInteraction
	 * Size -> 0x0090 (FullSize[0x0770] - InheritedSize[0x06E0])
	 */
	class UResetBearTrapInteraction : public UChargeableInteractionDefinition
	{
	public:
		class FName                                                _enterMontageIDForBeartrap;                              // 0x06E0(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                _udpateMontageIDForBeartrap;                             // 0x06EC(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimSequence*                                       _updateSequenceForBeartrap;                              // 0x06F8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                _exitMontageForIDBeartrap;                               // 0x0700(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                _cancelExitMontage;                                      // 0x070C(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_H0ND[0x58];                                  // 0x0718(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheTrapper.SelfUntrap
	 * Size -> 0x00C0 (FullSize[0x07A0] - InheritedSize[0x06E0])
	 */
	class USelfUntrap : public UChargeableInteractionDefinition
	{
	public:
		struct FDBDTunableRowHandle                                _trapImmunityDuration;                                   // 0x06E0(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimMontage*                                        _untrapMontage;                                          // 0x0708(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FAnimationMontageDescriptor                         _successfulEscapeHealthy;                                // 0x0710(0x0020) Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		struct FAnimationMontageDescriptor                         _successfulEscapeInjured;                                // 0x0730(0x0020) Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		struct FAnimationMontageDescriptor                         _successfulEscapeCrawling;                               // 0x0750(0x0020) Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		struct FAnimationMontageDescriptor                         _failedEscape;                                           // 0x0770(0x0020) Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_IDP4[0x1];                                   // 0x0790(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       _canEscape;                                              // 0x0791(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SSIZ[0xE];                                   // 0x0792(0x000E) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheTrapper.SetBearTrap
	 * Size -> 0x0060 (FullSize[0x07A0] - InheritedSize[0x0740])
	 */
	class USetBearTrap : public USetTrapInteraction
	{
	public:
		class FName                                                _enterMontageIDForBeartrap;                              // 0x0740(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                _udpateMontageIDForBeartrap;                             // 0x074C(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimSequence*                                       _updateSequenceForBeartrap;                              // 0x0758(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                _exitMontageForIDBeartrap;                               // 0x0760(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                _cancelExitMontage;                                      // 0x076C(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_K25R[0x28];                                  // 0x0778(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheTrapper.SlashedOutOfBearTrapInteraction
	 * Size -> 0x0010 (FullSize[0x05D0] - InheritedSize[0x05C0])
	 */
	class USlashedOutOfBearTrapInteraction : public UInteractionDefinition
	{
	public:
		TArray<class FString>                                      _overridableInteractions;                                // 0x05B8(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		class UAnimMontage*                                        _updateMontage;                                          // 0x05C8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheTrapper.TrapCamperInteraction
	 * Size -> 0x0080 (FullSize[0x0640] - InheritedSize[0x05C0])
	 */
	class UTrapCamperInteraction : public UInteractionDefinition
	{
	public:
		TArray<class FString>                                      _nonOverridableInteractions;                             // 0x05B8(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		class FName                                                _trapAttachSocket;                                       // 0x05C8(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                _updateMontageID;                                        // 0x05D4(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                _updateNoScreamMontageID;                                // 0x05E0(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_K1IY[0x4];                                   // 0x05EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _loudNoiseRangeTunable;                                  // 0x05F0(0x0028) Edit, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _hemorrhageEffectDurationTunable;                        // 0x0618(0x0028) Edit, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheTrapper.TrapKillerInteraction
	 * Size -> 0x0060 (FullSize[0x0620] - InheritedSize[0x05C0])
	 */
	class UTrapKillerInteraction : public UInteractionDefinition
	{
	public:
		TArray<class FString>                                      _overridableInteractions;                                // 0x05B8(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		struct FRotator                                            _caughtFootRotationOffset;                               // 0x05C8(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		class FName                                                _openNotifyID;                                           // 0x05D4(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                _footSocketName;                                         // 0x05E0(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_UDVI[0x34];                                  // 0x05EC(0x0034) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheTrapper.TrapperAnimInstance
	 * Size -> 0x0000 (FullSize[0x0600] - InheritedSize[0x0600])
	 */
	class UTrapperAnimInstance : public UKillerAnimInstance
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheTrapper.Untrap
	 * Size -> 0x0030 (FullSize[0x0710] - InheritedSize[0x06E0])
	 */
	class UUntrap : public UChargeableInteractionDefinition
	{
	public:
		TArray<class FString>                                      _overridableInteractions;                                // 0x06E0(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		class FName                                                _bearTrapUpdateMontageID;                                // 0x06F0(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                _bearTrapFinishMontageID;                                // 0x06FC(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_TS3R[0x8];                                   // 0x0708(0x0008) MISSED OFFSET (PADDING)

	public:
		class ABearTrap* GetTrap();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
