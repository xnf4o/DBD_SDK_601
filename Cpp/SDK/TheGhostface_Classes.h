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
	 * Class TheGhostface.Addon_Ghost_DriversLicense
	 * Size -> 0x0068 (FullSize[0x0328] - InheritedSize[0x02C0])
	 */
	class UAddon_Ghost_DriversLicense : public UItemAddon
	{
	public:
		struct FDBDTunableRowHandle                                _progressLoss;                                           // 0x02C0(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _blockedTime;                                            // 0x02E8(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_R43Y[0x18];                                  // 0x0310(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheGhostface.Addon_Ghost_OlsensAddressBook
	 * Size -> 0x0000 (FullSize[0x02F0] - InheritedSize[0x02F0])
	 */
	class UAddon_Ghost_OlsensAddressBook : public UImposeStatusEffectOnEventAddon
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheGhostface.GhostChargeStalkModeInteraction
	 * Size -> 0x0010 (FullSize[0x05D0] - InheritedSize[0x05C0])
	 */
	class UGhostChargeStalkModeInteraction : public UBaseStalkModeInteraction
	{
	public:
		unsigned char                                              UnknownData_ZHU5[0x10];                                  // 0x05C0(0x0010) MISSED OFFSET (PADDING)

	public:
		class UGhostStealthComponent* GetStealthComponent();
		static UClass* StaticClass();
	};

	/**
	 * Class TheGhostface.GhostfaceCrouchAttack
	 * Size -> 0x0000 (FullSize[0x0380] - InheritedSize[0x0380])
	 */
	class UGhostfaceCrouchAttack : public UPounceAttack
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheGhostface.GhostKillerAnalyticsComponent
	 * Size -> 0x0150 (FullSize[0x0208] - InheritedSize[0x00B8])
	 */
	class UGhostKillerAnalyticsComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_UMPB[0x38];                                  // 0x00B8(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGhostKillerAnalytics                               _ghostKillerAnalytics;                                   // 0x00F0(0x00F0) Net, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_61UB[0x28];                                  // 0x01E0(0x0028) MISSED OFFSET (PADDING)

	public:
		void Local_OnStalkModeChanged(bool IsInStalkMode);
		void Local_OnLeanStateChanged(ELeanState leanState);
		void Local_OnIsStealthChanged(bool IsStealth);
		void Authority_OnStalkChargePercentChanged(class UChargeableComponent* ChargeableComponent, float PercentCompletionChange, float TotalPercentComplete);
		void Authority_OnPreAttackSuccess(const struct FGameplayTag& GameplayTag, const struct FGameEventData& GameEventData);
		static UClass* StaticClass();
	};

	/**
	 * Class TheGhostface.GhostStalkedComponent
	 * Size -> 0x0258 (FullSize[0x0310] - InheritedSize[0x00B8])
	 */
	class UGhostStalkedComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_IASM[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnIsMarkedChanged;                                       // 0x00C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnIsSpottingKillerChanged;                               // 0x00D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		struct FTagStateBool                                       _isMarked;                                               // 0x00E0(0x0030) Net, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KVYO[0x8];                                   // 0x0110(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStatusEffect*                                       _ghostKillerInstinctEffect;                              // 0x0118(0x0008) ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2N1K[0x30];                                  // 0x0120(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimerObject*                                        _markTimer;                                              // 0x0150(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _killerInstinctDuration;                                 // 0x0158(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _markDuration;                                           // 0x01D8(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _stalkPointsDepleteDelay;                                // 0x0258(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ASlasherPlayer*                                      _killer;                                                 // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UStalkedComponent*                                   _stalkedComponent;                                       // 0x0288(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_66GR[0x80];                                  // 0x0290(0x0080) MISSED OFFSET (PADDING)

	public:
		void OnKillerSpottedChanged(class ADBDPlayer* spotter, bool spotted);
		void OnIsSpottingKiller__DelegateSignature(bool isSpotting);
		void OnIsMarkedChanged__DelegateSignature(bool IsMarked);
		void Local_OnSpotKiller();
		bool IsMarked();
		void Initialize(class ASlasherPlayer* killer);
		void DBD_DebugGhost(bool debug);
		void Client_OnSpotKiller();
		void Authority_OnStalkedChargeFull(bool COMPLETED, TArray<class AActor*> instigatorsForCompletion);
		static UClass* StaticClass();
	};

	/**
	 * Class TheGhostface.GhostStalkPowerComponent
	 * Size -> 0x0158 (FullSize[0x0210] - InheritedSize[0x00B8])
	 */
	class UGhostStalkPowerComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_1922[0x30];                                  // 0x00B8(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStalkerComponent*                                   _stalkerComponent;                                       // 0x00E8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              _ghostStalkedComponentClassPtr[0x30];                    // 0x00F0(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		float                                                      _crouchAttackRequiredTimeSeconds;                        // 0x0120(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_C4EJ[0xC];                                   // 0x0124(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       _debugMode;                                              // 0x0130(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SHID[0x7];                                   // 0x0131(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _maxStalkPointsPerSurvivor;                              // 0x0138(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _survivorMaximumSightDistance;                           // 0x0160(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RB79[0x30];                                  // 0x01E0(0x0030) MISSED OFFSET (PADDING)

	public:
		void RefreshSurvivorMaximumSightDistance();
		void OnLeanStateChanged(ELeanState leanState);
		void OnIsCrouchedChanged(bool isCrouched);
		void Authority_OnStalkModeChanged(bool IsInStalkMode);
		static UClass* StaticClass();
	};

	/**
	 * Class TheGhostface.GhostStealthComponent
	 * Size -> 0x02A0 (FullSize[0x0358] - InheritedSize[0x00B8])
	 */
	class UGhostStealthComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_FRPK[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnSuccessfulAttackInStealth;                             // 0x00C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnStealthStateChanged;                                   // 0x00D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnIsStealthChanged;                                      // 0x00E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnIsBeingSpotChanged;                                    // 0x00F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             Local_OnStealthCancelledByPlayer;                        // 0x0100(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		EGhostStealthState                                         _stealthState;                                           // 0x0110(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5W6F[0x3F];                                  // 0x0111(0x003F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimerObject*                                        _cooldownTimer;                                          // 0x0150(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TMap<class ACharacter*, TWeakObjectPtr<class AScreenIndicatorWorldMarker>> _markers;                                                // 0x0158(0x0050) UObjectWrapper, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _cooldownDuration;                                       // 0x01A8(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FNonTunableStat                                     _keepStealthOnAttackMiss;                                // 0x0228(0x0060) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _markerMinVisibleDistance;                               // 0x0288(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _markerLifetime;                                         // 0x02B0(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _stealthTerrorRadius;                                    // 0x02D8(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _markerMaxAngleOffset;                                   // 0x0300(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _useKillerInstinctWhenSpotted;                           // 0x0304(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RY47[0x3];                                   // 0x0305(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USightRevealableComponent*                           _sightRevealableComponent;                               // 0x0308(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UStalkerComponent*                                   _stalkerComponent;                                       // 0x0310(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0DP5[0x40];                                  // 0x0318(0x0040) MISSED OFFSET (PADDING)

	public:
		void SetRedStainVisibility(bool visible);
		void OnSuccessfulAttackInStealth__DelegateSignature(class ADBDPlayer* Target);
		void OnStealthStateChanged__DelegateSignature(EGhostStealthState stealthState);
		void OnStealthCancelledByPlayer__DelegateSignature(class ADBDPlayer* Player);
		void OnRep_StealthState(EGhostStealthState previousState);
		void OnIsStealthChanged__DelegateSignature(bool IsStealth);
		void OnIsBeingSpotChanged__DelegateSignature(class ADBDPlayer* spotter, bool isBeingSpot);
		void Multicast_OnPlayerSpottedKiller(class ADBDPlayer* spotter);
		void Multicast_OnIsBeingSpottedChanged(class ADBDPlayer* spotter, bool isBeingSpotted, bool onlyUpdateSurvivor);
		void Multicast_BroadcastOnSuccessfulAttackInStealth(class ADBDPlayer* Target);
		bool IsStealthReadyToActivate();
		bool IsStealth();
		EGhostStealthState GetStealthState();
		float GetStealthChargePercent();
		void DBD_ResetGhostStealth();
		void Client_SpawnMarkerOnCharacter(class ACharacter* revealer);
		void Authority_TryActivateStealth();
		void Authority_ResetGhostStealth();
		static UClass* StaticClass();
	};

	/**
	 * Class TheGhostface.TheGhostUtilities
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UTheGhostUtilities : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_IsKillerStealth(class AActor* killer);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
