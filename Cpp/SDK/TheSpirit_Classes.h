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
	 * Class TheSpirit.Autodidact
	 * Size -> 0x0020 (FullSize[0x03F0] - InheritedSize[0x03D0])
	 */
	class UAutodidact : public UPerk
	{
	public:
		int32_t                                                    _maxTokenCountPerLevel[0x3];                             // 0x03D0(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _progressionBonusPerToken;                               // 0x03DC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _initialSkillCheckProgressionPenalty;                    // 0x03E0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_E99W[0xC];                                   // 0x03E4(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheSpirit.Deliverance
	 * Size -> 0x0010 (FullSize[0x03E0] - InheritedSize[0x03D0])
	 */
	class UDeliverance : public UPerk
	{
	public:
		float                                                      _brokenEffectDurationPerLevel[0x3];                      // 0x03D0(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WSL6[0x4];                                   // 0x03DC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheSpirit.Diversion
	 * Size -> 0x0068 (FullSize[0x0438] - InheritedSize[0x03D0])
	 */
	class UDiversion : public UPerk
	{
	public:
		unsigned char                                              UnknownData_GY8Q[0x58];                                  // 0x03D0(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _diversionActivationTimePerLevel[0x3];                   // 0x0428(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _throwPebbleDistance;                                    // 0x0434(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void Authority_OnOwningSurvivorImmobilizedStateChanged(ECamperImmobilizeState oldImmobilizeState, ECamperImmobilizeState newImmobilizeState);
		void Authority_OnOwningSurvivorDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState CurrentDamageState);
		static UClass* StaticClass();
	};

	/**
	 * Class TheSpirit.DriedCherryBlossom
	 * Size -> 0x0008 (FullSize[0x02E8] - InheritedSize[0x02E0])
	 */
	class UDriedCherryBlossom : public USimpleSpawnEffectsOnAllSurvivorsAddon
	{
	public:
		unsigned char                                              UnknownData_0NGX[0x8];                                   // 0x02E0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheSpirit.KatsumoriTalisman
	 * Size -> 0x0020 (FullSize[0x02E0] - InheritedSize[0x02C0])
	 */
	class UKatsumoriTalisman : public UItemAddon
	{
	public:
		TArray<class AActor*>                                      _blockableWindows;                                       // 0x02C0(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		float                                                      _explosionRadius;                                        // 0x02D0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _blockDuration;                                          // 0x02D4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_76IW[0x8];                                   // 0x02D8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheSpirit.OwningPlayerInSpiritHuskRange
	 * Size -> 0x0010 (FullSize[0x0110] - InheritedSize[0x0100])
	 */
	class UOwningPlayerInSpiritHuskRange : public UAnyActorPairQueryRangeIsTrue
	{
	public:
		unsigned char                                              UnknownData_Y3XS[0x10];                                  // 0x0100(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnKillerSet(class ASlasherPlayer* killer);
		static UClass* StaticClass();
	};

	/**
	 * Class TheSpirit.Rancor
	 * Size -> 0x0018 (FullSize[0x03E8] - InheritedSize[0x03D0])
	 */
	class URancor : public UPerk
	{
	public:
		float                                                      _survivorRevealDuration;                                 // 0x03D0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _killerRevealToObsessionDuration[0x3];                   // 0x03D4(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_T1ST[0x8];                                   // 0x03E0(0x0008) MISSED OFFSET (PADDING)

	public:
		void SpawnBubbleAtSurvivorsLocation();
		float GetSurvivorRevealDuration();
		static UClass* StaticClass();
	};

	/**
	 * Class TheSpirit.SpiritDynamicAccessoryAnimInstance
	 * Size -> 0x0010 (FullSize[0x02E0] - InheritedSize[0x02D0])
	 */
	class USpiritDynamicAccessoryAnimInstance : public UDynamicAccessoryAnimInstance
	{
	public:
		bool                                                       _isPassivePhaseWalkHusk;                                 // 0x02D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7NPB[0xF];                                   // 0x02D1(0x000F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheSpirit.SpiritFury
	 * Size -> 0x0010 (FullSize[0x03E0] - InheritedSize[0x03D0])
	 */
	class USpiritFury : public UPerk
	{
	public:
		unsigned char                                              UnknownData_AA38[0x4];                                   // 0x03D0(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    _palletToBreakCountPerLevel[0x3];                        // 0x03D4(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheSpirit.SpiritHuskAnimInstance
	 * Size -> 0x0010 (FullSize[0x02D0] - InheritedSize[0x02C0])
	 */
	class USpiritHuskAnimInstance : public UAnimInstance
	{
	public:
		class USkeletalMeshComponent*                              _killerMesh;                                             // 0x02C0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2PML[0x8];                                   // 0x02C8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheSpirit.SpiritHuskActivePhaseWalkAnimInstance
	 * Size -> 0x0030 (FullSize[0x0300] - InheritedSize[0x02D0])
	 */
	class USpiritHuskActivePhaseWalkAnimInstance : public USpiritHuskAnimInstance
	{
	public:
		float                                                      _elapsedTimeSinceFakingRealKillerPose;                   // 0x02D0(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _idleAnimationExplicitTime;                              // 0x02D4(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2IE4[0x8];                                   // 0x02D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequence*                                       _idleAnimationSequence;                                  // 0x02E0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_26QD[0x18];                                  // 0x02E8(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheSpirit.SpiritHuskOutlineUpdateStrategy
	 * Size -> 0x0028 (FullSize[0x00E8] - InheritedSize[0x00C0])
	 */
	class USpiritHuskOutlineUpdateStrategy : public UOutlineUpdateStrategy
	{
	public:
		unsigned char                                              UnknownData_95II[0x28];                                  // 0x00C0(0x0028) MISSED OFFSET (PADDING)

	public:
		void OnSlasherSet(class ASlasherPlayer* Slasher);
		static UClass* StaticClass();
	};

	/**
	 * Class TheSpirit.ThrowRockInteraction
	 * Size -> 0x0060 (FullSize[0x0620] - InheritedSize[0x05C0])
	 */
	class UThrowRockInteraction : public UInteractionDefinition
	{
	public:
		struct FDBDTunableRowHandle                                _loudNoiseAudioRange;                                    // 0x05B8(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _scratchMarksApplicationDelay;                           // 0x05E0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    _scratchMarksCountToSpawn;                               // 0x05E4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_NHYR[0x4];                                   // 0x05E8(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _diversionHeightOffset;                                  // 0x05EC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_IHXR[0x30];                                  // 0x05F0(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
