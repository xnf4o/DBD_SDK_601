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
	 * Enum TheK25.EK25ChainCreationStrategy
	 */
	enum class EK25ChainCreationStrategy : uint8_t
	{
		Spline       = 0,
		PassedPoints = 1,
		MAX          = 2
	};

	/**
	 * Enum TheK25.EK25ChainState
	 */
	enum class EK25ChainState : uint8_t
	{
		InPool                        = 0,
		AttachedToProjectile          = 1,
		AttachedToSurvivorAnchorPoint = 2,
		ReelingBack                   = 3,
		ReachingSurvivorAnchorPoint   = 4,
		MAX                           = 5
	};

	/**
	 * Enum TheK25.EChainStrikeEndReason
	 */
	enum class EChainStrikeEndReason : uint8_t
	{
		None                                                  = 0,
		AbortedGatewayPlacementState                          = 1,
		AbortedGatewayPlacementBecauseOfInvalidPlacementState = 2,
		AbortedGatewayPossession                              = 3,
		ControlledProjectileStopped                           = 4,
		MAX                                                   = 5
	};

	/**
	 * Enum TheK25.EChainStrikeCameraViewTarget
	 */
	enum class EChainStrikeCameraViewTarget : uint8_t
	{
		Killer               = 0,
		Gateway              = 1,
		ControlledProjectile = 2,
		MAX                  = 3
	};

	/**
	 * Enum TheK25.EK25TeleportLocationStatus
	 */
	enum class EK25TeleportLocationStatus : uint8_t
	{
		Invalid          = 0,
		PassableLocation = 1,
		PerfectLocation  = 2,
		MAX              = 3
	};

	/**
	 * Enum TheK25.EK25ProjectileDeactivateReason
	 */
	enum class EK25ProjectileDeactivateReason : uint8_t
	{
		None                        = 0,
		WorldCollisionHit           = 1,
		CharacterHit                = 2,
		OutOfBounds                 = 3,
		MaximumRangeReached         = 4,
		ChainStrikeInteractionEnded = 5,
		MAX                         = 6
	};

	/**
	 * Enum TheK25.EK25ChainDetachmentReason
	 */
	enum class EK25ChainDetachmentReason : uint8_t
	{
		CollisionOrMaxLengthReached = 0,
		KillerAttack                = 1,
		RemovedByInteraction        = 2,
		MaxNumberChainsReached      = 3,
		ForcedRemoved               = 4,
		SurvivorKO                  = 5,
		EndGameCollapseOver         = 6,
		SurvivorLeftTheMatch        = 7,
		MAX                         = 8
	};

	/**
	 * Enum TheK25.EK25ChainAttachmentLimbType
	 */
	enum class EK25ChainAttachmentLimbType : uint8_t
	{
		Hand     = 0,
		Shoulder = 1,
		Stomach  = 2,
		Back     = 3,
		MAX      = 4
	};

	/**
	 * Enum TheK25.EK25ChainAnchorPointDirection
	 */
	enum class EK25ChainAnchorPointDirection : uint8_t
	{
		Front = 0,
		Left  = 1,
		Right = 2,
		Back  = 3,
		MAX   = 4
	};

	/**
	 * Enum TheK25.ELamentConfigurationDropReason
	 */
	enum class ELamentConfigurationDropReason : uint8_t
	{
		SurvivorSolved            = 0,
		SurvivorIsNoLongerHostage = 1,
		SurvivorDowned            = 2,
		KillerCollect             = 3,
		Other                     = 4,
		MAX                       = 5
	};

	/**
	 * Enum TheK25.ELamentConfigurationState
	 */
	enum class ELamentConfigurationState : uint8_t
	{
		SurvivorEscapedWithLamentConfiguration = 0,
		WaitingToSpawn                         = 1,
		Spawned                                = 2,
		IsBeingPickedUp                        = 3,
		CarriedBySurvivor                      = 4,
		HoldingSurvivorHostage                 = 5,
		MAX                                    = 6
	};

	/**
	 * Enum TheK25.EChainHuntState
	 */
	enum class EChainHuntState : uint8_t
	{
		Inactive = 0,
		Charging = 1,
		Active   = 2,
		MAX      = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct TheK25.K25ChainAnchorAnimationData
	 * Size -> 0x0018
	 */
	struct FK25ChainAnchorAnimationData
	{
	public:
		float                                                      ChainPullAngle;                                          // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ChainWeight;                                             // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ChainHeight;                                             // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasChainAttached;                                        // 0x000C(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsChainBeingRemoved;                                     // 0x000D(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZOGX[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class AK25Chain>                            AttachedChain;                                           // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TheK25.K25ProjectileDeactivationData
	 * Size -> 0x0020
	 */
	struct FK25ProjectileDeactivationData
	{
	public:
		EK25ProjectileDeactivateReason                             DeactivationReason;                                      // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A229[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                PhysicalSurfaceName;                                     // 0x0004(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShouldReelBackProjectile;                                // 0x0010(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasAppliedDamage;                                        // 0x0011(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U3LV[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ACamperPlayer*                                       _survivorHit;                                            // 0x0018(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TheK25.DBDPlayerTotemPair
	 * Size -> 0x0010
	 */
	struct FDBDPlayerTotemPair
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ATotem*                                              Totem;                                                   // 0x0008(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TheK25.K25SurvivorChainAttachmentData
	 * Size -> 0x0028
	 */
	struct FK25SurvivorChainAttachmentData
	{
	public:
		class FName                                                AnchorName;                                              // 0x0000(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EK25ChainAnchorPointDirection                              Direction;                                               // 0x000C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IELH[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             RelativeLocation;                                        // 0x0010(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsFlexibleLimb;                                          // 0x001C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EK25ChainAttachmentLimbType                                LimbType;                                                // 0x001D(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KMVS[0x2];                                   // 0x001E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ACamperPlayer*                                       _attachedSurvivor;                                       // 0x0020(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct TheK25.ChainHuntStateData
	 * Size -> 0x0010
	 */
	struct FChainHuntStateData
	{
	public:
		struct FDateTime                                           StartTime;                                               // 0x0000(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EChainHuntState                                            ChainHuntState;                                          // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SOOL[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TheK25.LamentConfigurationPlayerPossessionData
	 * Size -> 0x0018
	 */
	struct FLamentConfigurationPlayerPossessionData
	{
	public:
		float                                                      PickUpElapsedMatchTime;                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DropElapsedMatchTime;                                    // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Outcome;                                                 // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TheK25.LamentConfigurationSpawnInfo
	 * Size -> 0x0010
	 */
	struct FLamentConfigurationSpawnInfo
	{
	public:
		unsigned char                                              UnknownData_M4XB[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TheK25.K25SurvivorTeleportationData
	 * Size -> 0x0018
	 */
	struct FK25SurvivorTeleportationData
	{
	public:
		unsigned char                                              UnknownData_HIFF[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TheK25.K25ChainTraceData
	 * Size -> 0x0018
	 */
	struct FK25ChainTraceData
	{
	public:
		unsigned char                                              UnknownData_A6XK[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TheK25.LamentConfigurationPlayerPossessionAnalytics
	 * Size -> 0x0028 (FullSize[0x00D0] - InheritedSize[0x00A8])
	 */
	struct FLamentConfigurationPlayerPossessionAnalytics : public FUniquelyIdentifiedAnalytic
	{
	public:
		class FString                                              MatchID;                                                 // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PickUpElapsedMatchTime;                                  // 0x00B8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DropElapsedMatchTime;                                    // 0x00BC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Outcome;                                                 // 0x00C0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
