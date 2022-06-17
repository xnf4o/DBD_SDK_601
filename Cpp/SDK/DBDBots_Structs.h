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
	 * Enum DBDBots.EInteractionCancelInputModes
	 */
	enum class EInteractionCancelInputModes : uint8_t
	{
		PressCancelInput        = 0,
		InvertWithStopInputFlow = 1,
		MAX                     = 2
	};

	/**
	 * Enum DBDBots.EInteractionSkillInputModes
	 */
	enum class EInteractionSkillInputModes : uint8_t
	{
		Once         = 0,
		Hold         = 1,
		Toggle       = 2,
		ToggleHold   = 3,
		OneClickHold = 4,
		MAX          = 5
	};

	/**
	 * Enum DBDBots.EInteractionTargetInSightModes
	 */
	enum class EInteractionTargetInSightModes : uint8_t
	{
		None                        = 0,
		MustBeInSight               = 1,
		MustBeInSight_NoObstruction = 2,
		ActivateIfOutOfSight        = 3,
		MAX                         = 4
	};

	/**
	 * Enum DBDBots.EInteractionTargetRequirements
	 */
	enum class EInteractionTargetRequirements : uint8_t
	{
		BestTargetMustBeValid = 0,
		AnyValidTarget        = 1,
		AnyTarget             = 2,
		NoTarget              = 3,
		None                  = 4,
		MAX                   = 5
	};

	/**
	 * Enum DBDBots.EAIThrowProjectileModes
	 */
	enum class EAIThrowProjectileModes : uint8_t
	{
		OneShot    = 0,
		Continuous = 1,
		MAX        = 2
	};

	/**
	 * Enum DBDBots.EAIThrowPredictionModes
	 */
	enum class EAIThrowPredictionModes : uint8_t
	{
		FindBestThrowPowerRatio = 0,
		FullThrowPowerRatio     = 1,
		MAX                     = 2
	};

	/**
	 * Enum DBDBots.EIsCamperStateOnFilter
	 */
	enum class EIsCamperStateOnFilter : uint8_t
	{
		OnBlackboardKey  = 0,
		OnOthersThanSelf = 1,
		MAX              = 2
	};

	/**
	 * Enum DBDBots.EIsInteractionAvailableOnFilter
	 */
	enum class EIsInteractionAvailableOnFilter : uint8_t
	{
		Self      = 0,
		AnyFriend = 1,
		MAX       = 2
	};

	/**
	 * Enum DBDBots.EDecoratorIsObjFocusedFilter
	 */
	enum class EDecoratorIsObjFocusedFilter : uint8_t
	{
		Self        = 0,
		SelfNearest = 1,
		MAX         = 2
	};

	/**
	 * Enum DBDBots.ETunableComparison
	 */
	enum class ETunableComparison : uint8_t
	{
		Equal          = 0,
		NotEqual       = 1,
		Less           = 2,
		LessOrEqual    = 3,
		Greater        = 4,
		GreaterOrEqual = 5,
		MAX            = 6
	};

	/**
	 * Enum DBDBots.EFindInteractableCamperFilter
	 */
	enum class EFindInteractableCamperFilter : uint8_t
	{
		Crawling              = 0,
		Standing              = 1,
		GiveHelp              = 2,
		RequestHelp           = 3,
		RescuableBeingCarried = 4,
		MAX                   = 5
	};

	/**
	 * Enum DBDBots.EFindInteractorOpenConditions
	 */
	enum class EFindInteractorOpenConditions : uint8_t
	{
		AllGate_OpenedHatch = 0,
		All                 = 1,
		ClosedOnly          = 2,
		OpenedOnly          = 3,
		MAX                 = 4
	};

	/**
	 * Enum DBDBots.EFindInteractorExitOptions
	 */
	enum class EFindInteractorExitOptions : uint8_t
	{
		All       = 0,
		HatchOnly = 1,
		GateOnly  = 2,
		MAX       = 3
	};

	/**
	 * Enum DBDBots.EFindInteractableGeneratorStatusFilter
	 */
	enum class EFindInteractableGeneratorStatusFilter : uint8_t
	{
		NeedRepair   = 0,
		CanBeDamaged = 1,
		MAX          = 2
	};

	/**
	 * Enum DBDBots.EFindInteractableLockerStatusFilter
	 */
	enum class EFindInteractableLockerStatusFilter : uint8_t
	{
		Empty    = 0,
		Occupied = 1,
		Both     = 2,
		MAX      = 3
	};

	/**
	 * Enum DBDBots.EFindInteractableMeatHookStatus
	 */
	enum class EFindInteractableMeatHookStatus : uint8_t
	{
		HookedSurvivor = 0,
		Available      = 1,
		MAX            = 2
	};

	/**
	 * Enum DBDBots.EFindInteractablePalletIntentions
	 */
	enum class EFindInteractablePalletIntentions : uint8_t
	{
		Fall  = 0,
		Raise = 1,
		MAX   = 2
	};

	/**
	 * Enum DBDBots.EAINodeRelevancyOptions
	 */
	enum class EAINodeRelevancyOptions : uint8_t
	{
		OnEnter        = 0,
		OnExit         = 1,
		OnEnterAndExit = 2,
		OnTick         = 3,
		MAX            = 4
	};

	/**
	 * Enum DBDBots.EAIInvestigateSteps
	 */
	enum class EAIInvestigateSteps : uint8_t
	{
		None            = 0,
		ToInvestigation = 1,
		Investigating   = 2,
		MAX             = 3
	};

	/**
	 * Enum DBDBots.EExtMoveToStrafeFocusOptions
	 */
	enum class EExtMoveToStrafeFocusOptions : uint8_t
	{
		Never        = 0,
		NearFocus    = 1,
		NearGoal     = 2,
		Always       = 3,
		Intermittent = 4,
		MAX          = 5
	};

	/**
	 * Enum DBDBots.ETaskInputPressModes
	 */
	enum class ETaskInputPressModes : uint8_t
	{
		Once = 0,
		Loop = 1,
		Hold = 2,
		MAX  = 3
	};

	/**
	 * Enum DBDBots.EAIPressureZoneLevel
	 */
	enum class EAIPressureZoneLevel : uint8_t
	{
		LMin = 0,
		L01  = 1,
		L02  = 2,
		LMax = 3,
		MAX  = 4
	};

	/**
	 * Enum DBDBots.EAIGameState
	 */
	enum class EAIGameState : uint8_t
	{
		VeryEarly = 0,
		Early     = 1,
		Mid       = 2,
		Late      = 3,
		VeryLate  = 4,
		Max       = 5,
		MAX       = 6
	};

	/**
	 * Enum DBDBots.EAIObjectiveState
	 */
	enum class EAIObjectiveState : uint8_t
	{
		Early     = 0,
		Mid       = 1,
		Last      = 2,
		Completed = 3,
		MAX       = 4
	};

	/**
	 * Enum DBDBots.EAIDangerState
	 */
	enum class EAIDangerState : uint8_t
	{
		Safe   = 0,
		Unsafe = 1,
		Dire   = 2,
		MAX    = 3
	};

	/**
	 * Enum DBDBots.ENavLinkPlayerStates
	 */
	enum class ENavLinkPlayerStates : uint8_t
	{
		RequestStart = 0,
		MoveStart    = 1,
		Using        = 2,
		MoveEnd      = 3,
		Release      = 4,
		MAX          = 5
	};

	/**
	 * Enum DBDBots.EPathBuildResult
	 */
	enum class EPathBuildResult : uint8_t
	{
		None       = 0,
		Failed     = 1,
		Succeeded  = 2,
		Partial    = 3,
		InProgress = 4,
		MAX        = 5
	};

	/**
	 * Enum DBDBots.EAIFleeLoopStrategy
	 */
	enum class EAIFleeLoopStrategy : uint8_t
	{
		LoseKiller = 0,
		WasteTime  = 1,
		MAX        = 2
	};

	/**
	 * Enum DBDBots.EAIFleePathStrategy
	 */
	enum class EAIFleePathStrategy : uint8_t
	{
		None     = 0,
		KeepGoal = 1,
		Away     = 2,
		Loop     = 3,
		AwayLOS  = 4,
		MAX      = 5
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct DBDBots.TargetMoveAwayToFastInfo
	 * Size -> 0x0064
	 */
	struct FTargetMoveAwayToFastInfo
	{
	public:
		float                                                      AccumulatedTime;                                         // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CooldownUntilTime;                                       // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAIDetectedStimulus                                 Stimulus;                                                // 0x0008(0x005C) NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDBots.AIRandomByDistancePercentagesAtTime
	 * Size -> 0x0030
	 */
	struct FAIRandomByDistancePercentagesAtTime
	{
	public:
		struct FAITunableParameter                                 PercentageAtStartDistance;                               // 0x0000(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 PercentageAtEndDistance;                                 // 0x0010(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 AtRelativeTime;                                          // 0x0020(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDBots.AIGoal
	 * Size -> 0x0018
	 */
	struct FAIGoal
	{
	public:
		class UObject*                                             Source;                                                  // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject*                                             MetaGoal;                                                // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject*                                             Goal;                                                    // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDBots.AIGoalWeight
	 * Size -> 0x0030
	 */
	struct FAIGoalWeight
	{
	public:
		struct FAIGoal                                             GoalInfo;                                                // 0x0000(0x0018) NoDestructor, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VDRK[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              WeightDebug;                                             // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDBots.AIGoalWeightContainer
	 * Size -> 0x0010
	 */
	struct FAIGoalWeightContainer
	{
	public:
		TArray<struct FAIGoalWeight>                               WeightedGoals;                                           // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDBots.AISkillPerk
	 * Size -> 0x0038
	 */
	struct FAISkillPerk
	{
	public:
		struct FDataTableDropdown                                  perkId;                                                  // 0x0000(0x0030) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		class UAISkill*                                            Skill;                                                   // 0x0030(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDBots.DangerStateGameStateMapContainer
	 * Size -> 0x0050
	 */
	struct FDangerStateGameStateMapContainer
	{
	public:
		TMap<EAIDangerState, EAIGameState>                         Map;                                                     // 0x0000(0x0050) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDBots.GameStatePressureZoneLevelMapContainer
	 * Size -> 0x0050
	 */
	struct FGameStatePressureZoneLevelMapContainer
	{
	public:
		TMap<EAIGameState, EAIPressureZoneLevel>                   Map;                                                     // 0x0000(0x0050) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDBots.RelevantNodeMemory
	 * Size -> 0x0018
	 */
	struct FRelevantNodeMemory
	{
	public:
		class UBTNode*                                             Node;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YPRZ[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDBots.MindFocusObjectEntry
	 * Size -> 0x0078
	 */
	struct FMindFocusObjectEntry
	{
	public:
		TArray<class UObject*>                                     FocusedBy;                                               // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      FocusedStartTime;                                        // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3XWC[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FName, float>                                   CooldownMap;                                             // 0x0018(0x0050) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VVS6[0x10];                                  // 0x0068(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDBots.WeightedWishedObjectMapContainer
	 * Size -> 0x0050
	 */
	struct FWeightedWishedObjectMapContainer
	{
	public:
		TMap<class UObject*, float>                                WeightedWishedObjectMap;                                 // 0x0000(0x0050) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDBots.MoveLinkPlayerInfo
	 * Size -> 0x0028
	 */
	struct FMoveLinkPlayerInfo
	{
	public:
		unsigned char                                              UnknownData_0F4R[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDBots.NavLinkInteractPlayerSetup
	 * Size -> 0x0028
	 */
	struct FNavLinkInteractPlayerSetup
	{
	public:
		EPawnInputPressTypes                                       Input;                                                   // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JQMT[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      InteractionIds;                                          // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FAITunableParameter                                 InputTimeDeviationInChase;                               // 0x0018(0x0010) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDBots.GameStateEvadeLoopStrategyMapContainer
	 * Size -> 0x0050
	 */
	struct FGameStateEvadeLoopStrategyMapContainer
	{
	public:
		TMap<EAIGameState, EAIFleeLoopStrategy>                    Map;                                                     // 0x0000(0x0050) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDBots.DreamPalletSpawnState
	 * Size -> 0x0024
	 */
	struct FDreamPalletSpawnState
	{
	public:
		unsigned char                                              UnknownData_IXIK[0x24];                                  // 0x0000(0x0024) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDBots.ExplorableTileInfo
	 * Size -> 0x002C
	 */
	struct FExplorableTileInfo
	{
	public:
		struct FGuid                                               ID;                                                      // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBox                                                Bounds;                                                  // 0x0010(0x001C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDBots.NavMovePathPoint
	 * Size -> 0x0014
	 */
	struct FNavMovePathPoint
	{
	public:
		unsigned char                                              UnknownData_N3S5[0x14];                                  // 0x0000(0x0014) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
