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
	 * Class TheDemogorgon.DemogorgonHuskAnimInstance
	 * Size -> 0x0080 (FullSize[0x0340] - InheritedSize[0x02C0])
	 */
	class UDemogorgonHuskAnimInstance : public UAnimInstance
	{
	public:
		float                                                      _teleportDuration;                                       // 0x02C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _teleportExitPlayRate;                                   // 0x02C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isSlowerExit;                                           // 0x02C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_12EP[0x7];                                   // 0x02C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequence*                                       _huskPortalSlowerExit;                                   // 0x02D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimSequence*                                       _huskPortalExit;                                         // 0x02D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimMontage*                                        _demogorgonPortalExit;                                   // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimMontage*                                        _demogorgonPortalEntry;                                  // 0x02E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class APawn*                                               _owningPawn;                                             // 0x02F0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class UPortalPlacerStateComponent>          _demogorgonPortalPlacerState;                            // 0x02F8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_IBAA[0x40];                                  // 0x0300(0x0040) MISSED OFFSET (PADDING)

	public:
		void OnKillerSet(class ASlasherPlayer* killer);
		static UClass* StaticClass();
	};

	/**
	 * Class TheDemogorgon.DemogorgonPounceAttack
	 * Size -> 0x0070 (FullSize[0x03F0] - InheritedSize[0x0380])
	 */
	class UDemogorgonPounceAttack : public UPounceAttack
	{
	public:
		unsigned char                                              UnknownData_CYZ2[0x70];                                  // 0x0380(0x0070) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheDemogorgon.DemogorgonPounceAttackOpenSubstate
	 * Size -> 0x0000 (FullSize[0x0130] - InheritedSize[0x0130])
	 */
	class UDemogorgonPounceAttackOpenSubstate : public UPounceAttackOpenSubstate
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheDemogorgon.DemogorgonPounceAttackSuccessSubstate
	 * Size -> 0x0000 (FullSize[0x0118] - InheritedSize[0x0118])
	 */
	class UDemogorgonPounceAttackSuccessSubstate : public UPounceAttackSuccessSubstate
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheDemogorgon.DemogorgonPounceAttackMissSubstate
	 * Size -> 0x0000 (FullSize[0x0120] - InheritedSize[0x0120])
	 */
	class UDemogorgonPounceAttackMissSubstate : public UPounceAttackMissSubstate
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheDemogorgon.DemogorgonPounceAttackObstructSubstate
	 * Size -> 0x0000 (FullSize[0x0128] - InheritedSize[0x0128])
	 */
	class UDemogorgonPounceAttackObstructSubstate : public UPounceAttackObstructSubstate
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheDemogorgon.DemogorgonPounceInteraction
	 * Size -> 0x00B0 (FullSize[0x0790] - InheritedSize[0x06E0])
	 */
	class UDemogorgonPounceInteraction : public UChargeableInteractionDefinition
	{
	public:
		unsigned char                                              UnknownData_Q11P[0x70];                                  // 0x06E0(0x0070) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UChargedAttackStateComponent*                        _chargedAttackState;                                     // 0x0750(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ASlasherPlayer*                                      _owningSlasher;                                          // 0x0758(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WPFS[0x30];                                  // 0x0760(0x0030) MISSED OFFSET (PADDING)

	public:
		void TriggerHuntingAudioEvent(bool isHunting);
		void TriggerChargeCancelAudioEvent();
		void OnChargedAttackReadyChanged(bool Ready);
		void OnCancelCooldownComplete();
		static UClass* StaticClass();
	};

	/**
	 * Class TheDemogorgon.DemogorgonPowerItemProgressComponent
	 * Size -> 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
	 */
	class UDemogorgonPowerItemProgressComponent : public UPresentationItemProgressComponent
	{
	public:
		class UPortalPlacerStateComponent*                         _portalPlacerState;                                      // 0x00B8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheDemogorgon.ElevensSodaAddon
	 * Size -> 0x0018 (FullSize[0x02D8] - InheritedSize[0x02C0])
	 */
	class UElevensSodaAddon : public UItemAddon
	{
	public:
		unsigned char                                              UnknownData_0SNK[0x8];                                   // 0x02C0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AGenerator*>                                  _generatorsBeingRepaired;                                // 0x02C8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate

	public:
		void Multicast_UnhighlightGenerator(class AGenerator* Generator);
		void Multicast_HighlightGenerator(class AGenerator* Generator);
		static UClass* StaticClass();
	};

	/**
	 * Class TheDemogorgon.PortalSurvivorSubAnimInstance
	 * Size -> 0x0050 (FullSize[0x0590] - InheritedSize[0x0540])
	 */
	class UPortalSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
	{
	public:
		unsigned char                                              UnknownData_RK7E[0x40];                                  // 0x0540(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       _isDestroyingPortal;                                     // 0x0580(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isSpooked;                                              // 0x0581(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _hasSkillCheckFailed;                                    // 0x0582(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XBY4[0xD];                                   // 0x0583(0x000D) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
