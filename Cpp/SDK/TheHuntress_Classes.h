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
	 * Class TheHuntress.DeadHard
	 * Size -> 0x00B0 (FullSize[0x0480] - InheritedSize[0x03D0])
	 */
	class UDeadHard : public UPerk
	{
	public:
		float                                                      _deadHardIconCooldownDuration;                           // 0x03D0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JI0N[0x4];                                   // 0x03D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FStatusEffectSpawnData>                      _effectsToSpawn;                                         // 0x03D8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate
		struct FPlayerStatusEffectSpawnerHelper                    _spawnerHelper;                                          // 0x03E8(0x0088) Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		float                                                      _exhaustedCooldownPerLevel[0x3];                         // 0x0470(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RU9Q[0x4];                                   // 0x047C(0x0004) MISSED OFFSET (PADDING)

	public:
		float GetExhaustedDuration();
		static UClass* StaticClass();
	};

	/**
	 * Class TheHuntress.DeadHardDashInteraction
	 * Size -> 0x0010 (FullSize[0x05D0] - InheritedSize[0x05C0])
	 */
	class UDeadHardDashInteraction : public UInteractionDefinition
	{
	public:
		unsigned char                                              UnknownData_WSL2[0x10];                                  // 0x05C0(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheHuntress.DeadHardEffect
	 * Size -> 0x0000 (FullSize[0x0350] - InheritedSize[0x0350])
	 */
	class UDeadHardEffect : public UStatusEffect
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheHuntress.HatchetCooldown
	 * Size -> 0x0000 (FullSize[0x05C0] - InheritedSize[0x05C0])
	 */
	class UHatchetCooldown : public UInteractionDefinition
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheHuntress.HatchetLauncher
	 * Size -> 0x0120 (FullSize[0x02A0] - InheritedSize[0x0180])
	 */
	class UHatchetLauncher : public UKillerProjectileLauncher
	{
	public:
		struct FRotator                                            _angleOffset;                                            // 0x0180(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SDG8[0x4];                                   // 0x018C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         _angleOffsetCurve;                                       // 0x0190(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         _speedCurve;                                             // 0x0198(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _hatchetSpeedWhenThrowFullyCharged;                      // 0x01A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6U5F[0x4];                                   // 0x01A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         _hatchetPitchCurve;                                      // 0x01A8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _hatchetMinAngleOffset;                                  // 0x01B0(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _hatchetMaxAngleOffset;                                  // 0x01D8(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _hatchetMinSpeed;                                        // 0x0200(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _hatchetMaxSpeed;                                        // 0x0228(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _hatchetLaunchPitchMin;                                  // 0x0250(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _hatchetLaunchPitchMax;                                  // 0x0278(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		bool IsLaunchedHatchetFullyCharged();
		static UClass* StaticClass();
	};

	/**
	 * Class TheHuntress.HatchetProjectile
	 * Size -> 0x0000 (FullSize[0x0338] - InheritedSize[0x0338])
	 */
	class AHatchetProjectile : public AKillerProjectile
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheHuntress.HatchetRack
	 * Size -> 0x0000 (FullSize[0x0248] - InheritedSize[0x0248])
	 */
	class AHatchetRack : public ABaseLockerItem
	{
	public:
		void SetMovableHatchetVisibility(bool visible);
		static UClass* StaticClass();
	};

	/**
	 * Class TheHuntress.HatchetThrow
	 * Size -> 0x0030 (FullSize[0x0720] - InheritedSize[0x06F0])
	 */
	class UHatchetThrow : public UThrowInteraction
	{
	public:
		struct FDBDTunableRowHandle                                _hatchetThrowCancellationCooldown;                       // 0x06F0(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_5WPF[0x8];                                   // 0x0718(0x0008) MISSED OFFSET (PADDING)

	public:
		class ATheHuntressPower* GetOwningHatchetSpawner();
		static UClass* StaticClass();
	};

	/**
	 * Class TheHuntress.ReloadHatchet
	 * Size -> 0x0000 (FullSize[0x05F0] - InheritedSize[0x05F0])
	 */
	class UReloadHatchet : public UBaseLockerInteraction
	{
	public:
		bool IsInteractionPossible_Shared(class ADBDPlayer* Player);
		static UClass* StaticClass();
	};

	/**
	 * Class TheHuntress.TheHuntressPower
	 * Size -> 0x0010 (FullSize[0x04C0] - InheritedSize[0x04B0])
	 */
	class ATheHuntressPower : public ACollectable
	{
	public:
		class UClass*                                              _reloadHatchetClass;                                     // 0x04B0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8UYC[0x8];                                   // 0x04B8(0x0008) MISSED OFFSET (PADDING)

	public:
		void StartHatchetShineCosmetic();
		void SetPercentThrowStrength(float percentStrength);
		void SetHatchetVisible(bool visible);
		void PrintDebugThrowInfo();
		bool IsHatchetThrowFullyCharged();
		bool HasHatchet();
		class ASlasherPlayer* GetOwningKiller();
		class UBaseProjectileLauncher* GetHatchetProjectileLauncher();
		class UHatchetCooldown* GetHatchetCooldown();
		class UAkComponent* GetAkAudioHatchetSpawner();
		void Cosmetic_OnThrowInteractionStart();
		void Cosmetic_OnThrowInteractionCancelled();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
