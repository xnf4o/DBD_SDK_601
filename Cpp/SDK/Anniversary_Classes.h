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
	 * Class Anniversary.CrownPickupInteraction
	 * Size -> 0x0050 (FullSize[0x0730] - InheritedSize[0x06E0])
	 */
	class UCrownPickupInteraction : public UChargeableInteractionDefinition
	{
	public:
		unsigned char                                              UnknownData_7QPE[0x30];                                  // 0x06E0(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                _attachToSocketName;                                     // 0x0710(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGameplayTag                                        _pickupScoreEvent;                                       // 0x071C(0x000C) Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isInteractionChargeComplete;                            // 0x0728(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_029E[0x7];                                   // 0x0729(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Anniversary.CrownPillarInteractable
	 * Size -> 0x00D8 (FullSize[0x0428] - InheritedSize[0x0350])
	 */
	class ACrownPillarInteractable : public ARespawnableInteractable
	{
	public:
		struct FDBDTunableRowHandle                                _crownPillarInteractionSecondsToCharge;                  // 0x0350(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _crownPillarInteractionSecondsToChargeKiller;            // 0x0378(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _offeringEnabledAuraVisibilityDistance;                  // 0x03A0(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                _anniversaryOfferingTag;                                 // 0x03C8(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BP8I[0x4];                                   // 0x03D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCrownPickupInteraction*                             _crownPillarInteraction;                                 // 0x03D8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCrownPickupInteraction*                             _crownPillarInteractionKiller;                           // 0x03E0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UChargeableComponent*                                _crownPillarInteractionChargeable;                       // 0x03E8(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UChargeableComponent*                                _crownPillarInteractionChargeableKiller;                 // 0x03F0(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UInteractor*                                         _crownPillarInteractor;                                  // 0x03F8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPrimitiveComponent*                                 _crownPillarInteractionZone;                             // 0x0400(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UStaticMeshComponent*                                _crownPillarStaticMesh;                                  // 0x0408(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDBDOutlineComponent*                                _outlineComponent;                                       // 0x0410(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UNearTrackedActorComponent*                          _nearTrackedActorComponent;                              // 0x0418(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCrownPillarOutlineUpdateStrategy*                   _crownPillarOutlineUpdateStrategy;                       // 0x0420(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void Local_OnIntroCompleted();
		bool IsLocallyObservedPlayerEquippedWithAnniversaryOffering();
		void Cosmetic_OnStoppedInteracting();
		void Cosmetic_OnStartedInteracting(class ADBDPlayer* interactingPlayer, float interactionDuration);
		void Cosmetic_OnInteractionCompleted(class ADBDPlayer* interactingPlayer);
		void Cosmetic_OnInteractionCancelled();
		static UClass* StaticClass();
	};

	/**
	 * Class Anniversary.CrownPillarOutlineUpdateStrategy
	 * Size -> 0x0010 (FullSize[0x00D0] - InheritedSize[0x00C0])
	 */
	class UCrownPillarOutlineUpdateStrategy : public UOutlineUpdateStrategy
	{
	public:
		struct FLinearColor                                        _offeringEnabledAuraColor;                               // 0x00C0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Anniversary.CrownPlayerComponent
	 * Size -> 0x00B0 (FullSize[0x02D0] - InheritedSize[0x0220])
	 */
	class UCrownPlayerComponent : public USceneComponent
	{
	public:
		struct FGameplayTagContainer                               _crownVFXParticleDeactivateTags;                         // 0x0220(0x0020) Edit, NativeAccessSpecifierPrivate
		struct FGameplayTagContainer                               _unhookGameEvents;                                       // 0x0240(0x0020) Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate
		struct FTagStateBool                                       _isCrownEventActive;                                     // 0x0260(0x0030) Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KOS1[0x40];                                  // 0x0290(0x0040) MISSED OFFSET (PADDING)

	public:
		void OnRep_hasInteractedWithCrownPillarThisGame();
		void Cosmetic_SetVFXParticlesVisibility(bool IsVisible);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
