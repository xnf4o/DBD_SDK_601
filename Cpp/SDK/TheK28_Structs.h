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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum TheK28.EK28NightCycleState
	 */
	enum class EK28NightCycleState : uint8_t
	{
		Charging                   = 0,
		TransitioningToDischarging = 1,
		Discharging                = 2,
		TransitioningToCharging    = 3,
		MAX                        = 4
	};

	/**
	 * Enum TheK28.EK28ExitLockerCameraBehaviour
	 */
	enum class EK28ExitLockerCameraBehaviour : uint8_t
	{
		None                          = 0,
		AttachCameraOnKillerEyesJoint = 1,
		SetKillerAsPlayerViewTarget   = 2,
		MAX                           = 3
	};

	/**
	 * Enum TheK28.EK28LockbarState
	 */
	enum class EK28LockbarState : uint8_t
	{
		Unlocked = 0,
		Locked   = 1,
		Broken   = 2,
		MAX      = 3
	};

	/**
	 * Enum TheK28.EK28RemnantState
	 */
	enum class EK28RemnantState : uint8_t
	{
		Inactive       = 0,
		Active         = 1,
		Deactivating   = 2,
		IsKillerTarget = 3,
		MAX            = 4
	};

	/**
	 * Enum TheK28.EK28TeleportInteractionState
	 */
	enum class EK28TeleportInteractionState : uint8_t
	{
		Idle                   = 0,
		ChargingTeleportation  = 1,
		ReadyToTeleport        = 2,
		Teleporting            = 3,
		TeleportationCompleted = 4,
		TeleportationAborted   = 5,
		MAX                    = 6
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct TheK28.K28KillerLockerState
	 * Size -> 0x0010
	 */
	struct FK28KillerLockerState
	{
	public:
		class UK28LockerComponent*                                 _lockerUsedByKiller;                                     // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _isTeleportingToLocker;                                  // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _enteredLockerThroughTeleportation;                      // 0x0009(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YPIO[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TheK28.K28InteractionPreventingTagsModification
	 * Size -> 0x0028
	 */
	struct FK28InteractionPreventingTagsModification
	{
	public:
		class UClass*                                              InteractionToAddPreventingTagTo;                         // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               PreventingTags;                                          // 0x0008(0x0020) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TheK28.K28LockerCluster
	 * Size -> 0x0030
	 */
	struct FK28LockerCluster
	{
	public:
		TArray<class UK28LockerComponent*>                         _lockersInCluster;                                       // 0x0000(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		struct FVector                                             _centerLocation;                                         // 0x0010(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             _teleportIndicatorLocation;                              // 0x001C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XLZJ[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TheK28.K28AnimationMappingInfo
	 * Size -> 0x0018
	 */
	struct FK28AnimationMappingInfo
	{
	public:
		ECustomizationCategory                                     CustomizationCategory;                                   // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4I2K[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        Tags;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TheK28.K28CustomizationAnimationMapping
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FK28CustomizationAnimationMapping : public FDBDTableRowBase
	{
	public:
		int32_t                                                    ID;                                                      // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NLOL[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        AnimTags;                                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FK28AnimationMappingInfo>                    _mappingInfos;                                           // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TheK28.SurvivorQueryPair
	 * Size -> 0x0040
	 */
	struct FSurvivorQueryPair
	{
	public:
		unsigned char                                              UnknownData_4DOE[0x40];                                  // 0x0000(0x0040) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TheK28.K28SecondaryCameraMovementData
	 * Size -> 0x0050
	 */
	struct FK28SecondaryCameraMovementData
	{
	public:
		struct FVector                                             InitialActorLocation;                                    // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             TargetActorLocation;                                     // 0x000C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsPerformingGrabRotation;                                // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZHSU[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            InitialCameraRotation;                                   // 0x001C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            TargetCameraRotation;                                    // 0x0028(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XM7V[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         TransitionCurve;                                         // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CameraMovementDuration;                                  // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0IB6[0xC];                                   // 0x0044(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TheK28.K28SecondaryCameraFOVData
	 * Size -> 0x0020
	 */
	struct FK28SecondaryCameraFOVData
	{
	public:
		unsigned char                                              UnknownData_3D9Y[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _fovChangeDuration;                                      // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _initialFovValue;                                        // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _targetFovValue;                                         // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1PWK[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         _fovCurve;                                               // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
