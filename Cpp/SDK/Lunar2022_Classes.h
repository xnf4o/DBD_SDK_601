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
	 * Class Lunar2022.Lunar2022EventComponent
	 * Size -> 0x00D8 (FullSize[0x0190] - InheritedSize[0x00B8])
	 */
	class ULunar2022EventComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_8CSY[0x10];                                  // 0x00B8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<TWeakObjectPtr<class ARedEnvelope>>                 _redEnvelopes;                                           // 0x00C8(0x0010) ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WI99[0xB8];                                  // 0x00D8(0x00B8) MISSED OFFSET (PADDING)

	public:
		void Authority_OnPlayerFinishPlaying(class ADBDPlayerState* PlayerState);
		void Authority_OnIntroComplete();
		static UClass* StaticClass();
	};

	/**
	 * Class Lunar2022.RedEnvelope
	 * Size -> 0x00D0 (FullSize[0x03F8] - InheritedSize[0x0328])
	 */
	class ARedEnvelope : public AInteractable
	{
	public:
		class ADBDPlayerState*                                     _ownerPlayerState;                                       // 0x0328(0x0008) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RURV[0x10];                                  // 0x0330(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class URedEnvelopeInteraction*                             _redEnvelopeInteraction;                                 // 0x0340(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class URedEnvelopeInteraction*                             _redEnvelopeInteractionKiller;                           // 0x0348(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UChargeableComponent*                                _redEnvelopeInteractionChargeable;                       // 0x0350(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UChargeableComponent*                                _redEnvelopeInteractionChargeableKiller;                 // 0x0358(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UInteractor*                                         _redEnvelopeInteractor;                                  // 0x0360(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPrimitiveComponent*                                 _redEnvelopeInteractionZone;                             // 0x0368(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDBDOutlineComponent*                                _outlineComponent;                                       // 0x0370(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UStaticMeshComponent*                                _redEnvelopeMesh;                                        // 0x0378(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _redEnvelopeInteractionSecondsToCharge;                  // 0x0380(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _redEnvelopeInteractionSecondsToChargeKiller;            // 0x03A8(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FLinearColor                                        _auraColorOwner;                                         // 0x03D0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FLinearColor                                        _auraColorNonOwner;                                      // 0x03E0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class ULunar2022EventComponent>             _eventComponent;                                         // 0x03F0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnRep_OwnerPlayerState();
		void OnLocallyObservedChanged();
		void Multicast_HandleOnInteractionComplete(class ADBDPlayer* interactingPlayer, bool ownerWasInteractingPlayer, bool isJackpot);
		void Cosmetic_SetBackgroundVFX(bool isOwner);
		void Cosmetic_OnTriggerDisappearingVFX(class ADBDPlayer* interactingPlayer, bool isOwner, bool isJackpot);
		void Cosmetic_OnInteractionUpdate(class ADBDPlayer* interactingPlayer, float ChargePercent, bool isOwner);
		void Cosmetic_OnInteractionStopped(class ADBDPlayer* interactingPlayer, bool isOwner);
		void Cosmetic_OnInteractionStart(class ADBDPlayer* interactingPlayer, bool isOwner);
		void Cosmetic_OnAddEmberEffect(class ADBDPlayer* OwningPlayer);
		static UClass* StaticClass();
	};

	/**
	 * Class Lunar2022.RedEnvelopeInteraction
	 * Size -> 0x0060 (FullSize[0x0740] - InheritedSize[0x06E0])
	 */
	class URedEnvelopeInteraction : public UChargeableInteractionDefinition
	{
	public:
		unsigned char                                              UnknownData_J4EV[0x60];                                  // 0x06E0(0x0060) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
