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
	 * Class Halloween2020.BlightedSerumAddon
	 * Size -> 0x0058 (FullSize[0x0318] - InheritedSize[0x02C0])
	 */
	class UBlightedSerumAddon : public UItemAddon
	{
	public:
		class UClass*                                              _blightedSerumCollectable;                               // 0x02C0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBlightedSerumDashInteraction*                       _dashInteraction;                                        // 0x02C8(0x0008) ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    _theBlightExtraTokens;                                   // 0x02D0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    _numberOfDashesPerEvent;                                 // 0x02D4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_A5RQ[0x40];                                  // 0x02D8(0x0040) MISSED OFFSET (PADDING)

	public:
		void OnRep_DashInteraction();
		void OnBlightedDashEnabledVfxSfx();
		static UClass* StaticClass();
	};

	/**
	 * Class Halloween2020.BlightedSerumCollisionInteraction
	 * Size -> 0x0010 (FullSize[0x05D0] - InheritedSize[0x05C0])
	 */
	class UBlightedSerumCollisionInteraction : public UInteractionDefinition
	{
	public:
		class UBlightedSerumCooldownInteraction*                   _cooldownInteraction;                                    // 0x05B8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _bounceTime;                                             // 0x05C0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EX76[0xC];                                   // 0x05C4(0x000C) MISSED OFFSET (PADDING)

	public:
		void SetCooldownInteraction(class UBlightedSerumCooldownInteraction* cooldownInteraction);
		static UClass* StaticClass();
	};

	/**
	 * Class Halloween2020.BlightedSerumCooldownInteraction
	 * Size -> 0x0010 (FullSize[0x05D0] - InheritedSize[0x05C0])
	 */
	class UBlightedSerumCooldownInteraction : public UInteractionDefinition
	{
	public:
		float                                                      _cameraPitchRecenterTime;                                // 0x05BC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TNR0[0x10];                                  // 0x05C0(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Halloween2020.BlightedSerumDashInteraction
	 * Size -> 0x0090 (FullSize[0x0650] - InheritedSize[0x05C0])
	 */
	class UBlightedSerumDashInteraction : public UInteractionDefinition
	{
	public:
		class UBlightedSerumCooldownInteraction*                   _cooldownInteraction;                                    // 0x05B8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBlightedSerumCollisionInteraction*                  _collisionInteraction;                                   // 0x05C0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         _dashSpeedCurve;                                         // 0x05C8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         _lookAngleToTurnRateCurveController;                     // 0x05D0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         _lookAngleToTurnRateCurveMouse;                          // 0x05D8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _dashDuration;                                           // 0x05E0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _vectorInterpToSpeed;                                    // 0x05E4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _wallDashAccelerationMultiplier;                         // 0x05E8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _cameraPitchRecenterTime;                                // 0x05EC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _lookAngleTurnRateModifier;                              // 0x05F0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _wallDashCollisionRadius;                                // 0x05F4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _wallDashCollisionHeight;                                // 0x05F8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _wallDashCollisionRange;                                 // 0x05FC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_M0M4[0x50];                                  // 0x0600(0x0050) MISSED OFFSET (PADDING)

	public:
		void SetCooldownInteraction(class UBlightedSerumCooldownInteraction* cooldownInteraction);
		void SetCollisionInteraction(class UBlightedSerumCollisionInteraction* collisionInteraction);
		static UClass* StaticClass();
	};

	/**
	 * Class Halloween2020.ToxinPlantInteractable
	 * Size -> 0x0008 (FullSize[0x0338] - InheritedSize[0x0330])
	 */
	class AToxinPlantInteractable : public ASpecialBehaviourInteractable
	{
	public:
		unsigned char                                              UnknownData_U9JV[0x8];                                   // 0x0330(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetToxinPlantComplete(bool IsComplete);
		void OnToxinPlantComplete();
		void OnSalvageInteractionStart();
		void OnSalvageInteractionFinished();
		bool IsToxinPlantComplete();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
