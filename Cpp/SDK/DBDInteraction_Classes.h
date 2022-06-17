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
	 * Class DBDInteraction.ActivePhaseWalkInteraction
	 * Size -> 0x0180 (FullSize[0x0860] - InheritedSize[0x06E0])
	 */
	class UActivePhaseWalkInteraction : public UChargeableInteractionDefinition
	{
	public:
		struct FTunableStat                                        _fullyChargedSpeed;                                      // 0x06E0(0x0080) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         _chargingSpeedCurve;                                     // 0x0760(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _phaseWalkPenaltyThreshold;                              // 0x0768(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _phaseWalkPenaltyValue;                                  // 0x0790(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_OFXU[0x8];                                   // 0x07B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTunableStat                                        _activePhaseWalkChargeDuration;                          // 0x07C0(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAnimMontage*                                        _activePhaseWalkChargingMontage;                         // 0x0840(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_P7XP[0x18];                                  // 0x0848(0x0018) MISSED OFFSET (PADDING)

	public:
		void OnPowerCollected(class ADBDPlayer* collector);
		void OnPlayerLocallyObservedChanged(class ADBDPlayer* Player);
		float GetChargeTime();
		void Cosmetic_ResetChargeVFX(class ADBDPlayer* Player);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDInteraction.BaseLockerInteraction
	 * Size -> 0x0030 (FullSize[0x05F0] - InheritedSize[0x05C0])
	 */
	class UBaseLockerInteraction : public UInteractionDefinition
	{
	public:
		class ALocker*                                             _owningLocker;                                           // 0x05B8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGameplayTagContainer                               _lockerPreventingTags;                                   // 0x05C0(0x0020) Edit, NativeAccessSpecifierPrivate
		bool                                                       _lockerIsMontageFollower;                                // 0x05E0(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FG4B[0xF];                                   // 0x05E1(0x000F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDInteraction.BaseStalkModeInteraction
	 * Size -> 0x0000 (FullSize[0x05C0] - InheritedSize[0x05C0])
	 */
	class UBaseStalkModeInteraction : public UInteractionDefinition
	{
	public:
		class UStalkerComponent* GetStalkerComponent();
		bool CanStalk();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDInteraction.BasicChargeableInteraction
	 * Size -> 0x0040 (FullSize[0x0720] - InheritedSize[0x06E0])
	 */
	class UBasicChargeableInteraction : public UChargeableInteractionDefinition
	{
	public:
		bool                                                       AutoSpawnChargeableComponent;                            // 0x06E0(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       ResetProgressWhenStoppingInteraction;                    // 0x06E1(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       AutoAddCharge;                                           // 0x06E2(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_0YB4[0x5];                                   // 0x06E3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UChargeableComponent*                                _spawnedChargeable;                                      // 0x06E8(0x0008) ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _chargeTime;                                             // 0x06F0(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5C8Q[0x8];                                   // 0x0718(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnRep_SpawnedChargeable();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDInteraction.BlessTotem
	 * Size -> 0x0030 (FullSize[0x0710] - InheritedSize[0x06E0])
	 */
	class UBlessTotem : public UChargeableInteractionDefinition
	{
	public:
		struct FDBDTunableRowHandle                                _blessHexTotemSpeedPenalty;                              // 0x06E0(0x0028) Edit, EditFixedSize, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LV8Q[0x8];                                   // 0x0708(0x0008) MISSED OFFSET (PADDING)

	public:
		class ATotem* GetTotem();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDInteraction.CleanseTotem
	 * Size -> 0x0000 (FullSize[0x06E0] - InheritedSize[0x06E0])
	 */
	class UCleanseTotem : public UChargeableInteractionDefinition
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDInteraction.CollectItemInteraction
	 * Size -> 0x0020 (FullSize[0x05E0] - InheritedSize[0x05C0])
	 */
	class UCollectItemInteraction : public UInteractionDefinition
	{
	public:
		class FScriptMulticastDelegate                             OnCollectUpdateStart;                                    // 0x05B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCollectUpdateEnd;                                      // 0x05C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NPKM[0x8];                                   // 0x05D8(0x0008) MISSED OFFSET (PADDING)

	public:
		class ACollectable* GetItem();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDInteraction.CollectItemFromSearchableInteraction
	 * Size -> 0x0010 (FullSize[0x05F0] - InheritedSize[0x05E0])
	 */
	class UCollectItemFromSearchableInteraction : public UCollectItemInteraction
	{
	public:
		unsigned char                                              UnknownData_U2DR[0x10];                                  // 0x05E0(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDInteraction.DestroyDemogorgonPortalInteraction
	 * Size -> 0x0010 (FullSize[0x06F0] - InheritedSize[0x06E0])
	 */
	class UDestroyDemogorgonPortalInteraction : public UChargeableInteractionDefinition
	{
	public:
		class ADemogorgonPortal*                                   _owningPortal;                                           // 0x06E0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BYPJ[0x8];                                   // 0x06E8(0x0008) MISSED OFFSET (PADDING)

	public:
		void Authority_OnChargeApplied(float individualChargeAmount, float totalChargeAmount, class AActor* chargeInstigator, bool wasCoop, float DeltaTime);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDInteraction.DropItemInteraction
	 * Size -> 0x0000 (FullSize[0x05C0] - InheritedSize[0x05C0])
	 */
	class UDropItemInteraction : public UInteractionDefinition
	{
	public:
		class ACollectable* GetItem();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDInteraction.EscapeMapInteraction
	 * Size -> 0x0000 (FullSize[0x05C0] - InheritedSize[0x05C0])
	 */
	class UEscapeMapInteraction : public UInteractionDefinition
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDInteraction.GeneratorDamageInteraction
	 * Size -> 0x0030 (FullSize[0x0710] - InheritedSize[0x06E0])
	 */
	class UGeneratorDamageInteraction : public UChargeableInteractionDefinition
	{
	public:
		struct FDBDTunableRowHandle                                _fastInteractionAnimThreshold;                           // 0x06E0(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_V08P[0x8];                                   // 0x0708(0x0008) MISSED OFFSET (PADDING)

	public:
		void Authority_DamageGenerator(class ADBDPlayer* damageBy, class AGenerator* Generator);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDInteraction.GeneratorRepairInteraction
	 * Size -> 0x0080 (FullSize[0x0760] - InheritedSize[0x06E0])
	 */
	class UGeneratorRepairInteraction : public UChargeableInteractionDefinition
	{
	public:
		struct FDBDTunableRowHandle                                _penaltyPerRepairPlayerCount[0x3];                       // 0x06E0(0x0078) Edit, EditFixedSize, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_G0DS[0x8];                                   // 0x0758(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetIsObstructed(bool obstructed);
		class AGenerator* GetOwningGenerator();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDInteraction.GeneratorToolboxRepairInteraction
	 * Size -> 0x0070 (FullSize[0x07D0] - InheritedSize[0x0760])
	 */
	class UGeneratorToolboxRepairInteraction : public UGeneratorRepairInteraction
	{
	public:
		class FText                                                _interactionTextWhenEmpty;                               // 0x0760(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _repairSkillCheckDurationWhenEmpty;                      // 0x0778(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _repairSkillCheckChanceWhenEmpty;                        // 0x07A0(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TI0U[0x8];                                   // 0x07C8(0x0008) MISSED OFFSET (PADDING)

	public:
		bool HasChargedToolBox(class ADBDPlayer* Player);
		class FString GetInteractionTextWhenEmpty();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDInteraction.HealInteraction
	 * Size -> 0x0000 (FullSize[0x06E0] - InheritedSize[0x06E0])
	 */
	class UHealInteraction : public UChargeableInteractionDefinition
	{
	public:
		class ACamperPlayer* GetTargetSurvivor();
		void Authority_OnChargeApplied(float individualChargeAmount, float totalChargeAmount, class AActor* chargeInstigator, bool wasCoop, float DeltaTime);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDInteraction.HookSurvivorDefinition
	 * Size -> 0x0010 (FullSize[0x06F0] - InheritedSize[0x06E0])
	 */
	class UHookSurvivorDefinition : public UChargeableInteractionDefinition
	{
	public:
		class ACamperPlayer*                                       _survivorBeingHooked;                                    // 0x06E0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_R2SW[0x8];                                   // 0x06E8(0x0008) MISSED OFFSET (PADDING)

	public:
		class AMeatHook* GetMeatHook();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDInteraction.ItemCraftInteraction
	 * Size -> 0x0010 (FullSize[0x05D0] - InheritedSize[0x05C0])
	 */
	class UItemCraftInteraction : public UInteractionDefinition
	{
	public:
		class FName                                                _attachToSocketName;                                     // 0x05B8(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YWO1[0x4];                                   // 0x05C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _collectableClass;                                       // 0x05C8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDInteraction.LinkedVomitInteraction
	 * Size -> 0x0020 (FullSize[0x0700] - InheritedSize[0x06E0])
	 */
	class ULinkedVomitInteraction : public UChargeableInteractionDefinition
	{
	public:
		unsigned char                                              UnknownData_QES4[0x20];                                  // 0x06E0(0x0020) MISSED OFFSET (PADDING)

	public:
		bool IsVomiting();
		class UVomitStateComponent* GetVomitStateComponent();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDInteraction.LockerFakeEnterInteraction
	 * Size -> 0x0030 (FullSize[0x0620] - InheritedSize[0x05F0])
	 */
	class ULockerFakeEnterInteraction : public UBaseLockerInteraction
	{
	public:
		struct FDBDTunableRowHandle                                _fakeEnterLoudNoiseRange;                                // 0x05F0(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_G0FN[0x8];                                   // 0x0618(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDInteraction.SearchChestInteractionBase
	 * Size -> 0x0030 (FullSize[0x0710] - InheritedSize[0x06E0])
	 */
	class USearchChestInteractionBase : public UChargeableInteractionDefinition
	{
	public:
		bool                                                       _handleCompletionScoreEvents;                            // 0x06E0(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_AWI2[0x3];                                   // 0x06E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTag                                        _searchableCompleteContributionPercentTag;               // 0x06E4(0x000C) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _scoreEventFired;                                        // 0x06F0(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_71NJ[0x7];                                   // 0x06F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ASearchable*                                         _owningChest;                                            // 0x06F8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _onLastInteractionWasComplete;                           // 0x0700(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_96Z3[0xF];                                   // 0x0701(0x000F) MISSED OFFSET (PADDING)

	public:
		void FireChestScoreEvent(class ADBDPlayer* Player);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDInteraction.OpenChestInteraction
	 * Size -> 0x0020 (FullSize[0x0730] - InheritedSize[0x0710])
	 */
	class UOpenChestInteraction : public USearchChestInteractionBase
	{
	public:
		struct FGameplayTag                                        _camperSearchablePercentTag;                             // 0x0708(0x000C) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_535F[0x4];                                   // 0x0714(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequence*                                       _successExitTimeAnimSequenceReference;                   // 0x0718(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _startTime;                                              // 0x0720(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_U5S7[0xC];                                   // 0x0724(0x000C) MISSED OFFSET (PADDING)

	public:
		void CollectItemIfEmptyHanded(class ACollectable* Collectable, class ADBDPlayer* Player);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDInteraction.OpenHatchInteraction
	 * Size -> 0x0050 (FullSize[0x0730] - InheritedSize[0x06E0])
	 */
	class UOpenHatchInteraction : public UChargeableInteractionDefinition
	{
	public:
		float                                                      SnapToEscapeLocationDuration;                            // 0x06E0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SLL2[0x4];                                   // 0x06E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimationMontageDescriptor                         InteractionStoppedMontage;                               // 0x06E8(0x0020) Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate
		struct FAnimationMontageDescriptor                         InteractionSucceedMontage;                               // 0x0708(0x0020) Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6LAR[0x8];                                   // 0x0728(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDInteraction.PalletPullUpInteraction
	 * Size -> 0x0020 (FullSize[0x0700] - InheritedSize[0x06E0])
	 */
	class UPalletPullUpInteraction : public UChargeableInteractionDefinition
	{
	public:
		EPalletSide                                                _side;                                                   // 0x06E0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_28ZJ[0x7];                                   // 0x06E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APallet*                                             _owningPallet;                                           // 0x06E8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CX0Y[0x10];                                  // 0x06F0(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDInteraction.SearchOpenedChestInteraction
	 * Size -> 0x0010 (FullSize[0x0720] - InheritedSize[0x0710])
	 */
	class USearchOpenedChestInteraction : public USearchChestInteractionBase
	{
	public:
		TArray<class FName>                                        _rummagePrioritySources;                                 // 0x0708(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WG6Q[0x8];                                   // 0x0718(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDInteraction.SetGroundPortalInteraction
	 * Size -> 0x0020 (FullSize[0x0700] - InheritedSize[0x06E0])
	 */
	class USetGroundPortalInteraction : public UChargeableInteractionDefinition
	{
	public:
		class UPortalPlacerStateComponent*                         _portalPlacerState;                                      // 0x06E0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UObjectPlacerComponent*                              _trapPlacerComponent;                                    // 0x06E8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _portalClassToSpawn;                                     // 0x06F0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KNX5[0x8];                                   // 0x06F8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDInteraction.SetTrapInteraction
	 * Size -> 0x0060 (FullSize[0x0740] - InheritedSize[0x06E0])
	 */
	class USetTrapInteraction : public UChargeableInteractionDefinition
	{
	public:
		struct FSocketOrBoneCache                                  _dropSocket;                                             // 0x06E0(0x0060) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDInteraction.SnuffTotem
	 * Size -> 0x0000 (FullSize[0x05C0] - InheritedSize[0x05C0])
	 */
	class USnuffTotem : public UInteractionDefinition
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDInteraction.TeleportToDemogorgonPortalInteraction
	 * Size -> 0x00B0 (FullSize[0x0790] - InheritedSize[0x06E0])
	 */
	class UTeleportToDemogorgonPortalInteraction : public UChargeableInteractionDefinition
	{
	public:
		float                                                      _enterPortalPhaseDuration;                               // 0x06E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _cancelTeleportingPhaseDuration;                         // 0x06E4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPortalTargetingComponent*                           _portalTargetingComponent;                               // 0x06E8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPortalPlacerStateComponent*                         _portalPlacerState;                                      // 0x06F0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ADemogorgonPortal*                                   _startingPortal;                                         // 0x06F8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ADemogorgonPortal*                                   _targetedPortal;                                         // 0x0700(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ADBDPlayer*                                          _interactingPlayer;                                      // 0x0708(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ZV3H[0x60];                                  // 0x0710(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              _huskRef;                                                // 0x0770(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              ClassToSpawnForHusk;                                     // 0x0778(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_53US[0x10];                                  // 0x0780(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnTeleportInteractionCanceledVFX();
		void OnSlasherSet(class ASlasherPlayer* Slasher);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDInteraction.ThrowInteraction
	 * Size -> 0x0010 (FullSize[0x06F0] - InheritedSize[0x06E0])
	 */
	class UThrowInteraction : public UChargeableInteractionDefinition
	{
	public:
		class UCurveFloat*                                         _throwCancelledSpeedCurve;                               // 0x06E0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _throwCancellationExitTime;                              // 0x06E8(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6E4G[0x4];                                   // 0x06EC(0x0004) MISSED OFFSET (PADDING)

	public:
		void InitThrowCancellationExitTime(float value);
		bool HasCancelledThrow();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDInteraction.Unhook
	 * Size -> 0x0060 (FullSize[0x0740] - InheritedSize[0x06E0])
	 */
	class UUnhook : public UChargeableInteractionDefinition
	{
	public:
		TArray<class USceneComponent*>                             _snapPoints;                                             // 0x06E0(0x0010) BlueprintVisible, ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _unhookLoudNoiseRange;                                   // 0x06F0(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2SGN[0x8];                                   // 0x0718(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ADBDPlayer*                                          _unhookingPlayer;                                        // 0x0720(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _hookedCharacterSnapTime;                                // 0x0728(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6PIJ[0x4];                                   // 0x072C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ACamperPlayer*                                       _playerBeingUnhooked;                                    // 0x0730(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_NK0K[0x8];                                   // 0x0738(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDInteraction.UnhookReplicationComponent
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	class UUnhookReplicationComponent : public UActorComponent
	{
	public:
		void Multicast_SetPlayerBeingUnhooked(class UUnhook* unhookInteraction, class ACamperPlayer* playerBeingUnhooked);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
