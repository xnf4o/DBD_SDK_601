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
	 * Enum DBDSharedTypes.EHelpType
	 */
	enum class EHelpType : uint8_t
	{
		General  = 0,
		Survivor = 1,
		Killer   = 2,
		MAX      = 3
	};

	/**
	 * Enum DBDSharedTypes.EPopupButtonType
	 */
	enum class EPopupButtonType : uint8_t
	{
		Regression  = 0,
		Progression = 1,
		Alternative = 2,
		MAX         = 3
	};

	/**
	 * Enum DBDSharedTypes.EControlMode
	 */
	enum class EControlMode : uint8_t
	{
		MOUSE_KB   = 0,
		XBOX       = 1,
		PS         = 2,
		VITA       = 3,
		SWITCH     = 4,
		STADIA     = 5,
		SWITCH_PRO = 6,
		ATLANTA    = 7,
		UNDEFINED  = 8,
		MAX        = 9
	};

	/**
	 * Enum DBDSharedTypes.ELeanState
	 */
	enum class ELeanState : uint8_t
	{
		NotLeaning = 0,
		LeanLeft   = 1,
		LeanRight  = 2,
		MAX        = 3
	};

	/**
	 * Enum DBDSharedTypes.ECharacterDifficulty
	 */
	enum class ECharacterDifficulty : uint8_t
	{
		VE_None         = 0,
		VE_Easy         = 1,
		VE_Intermediate = 2,
		VE_Hard         = 3,
		VE_VeryHard     = 4,
		VE_MAX          = 5
	};

	/**
	 * Enum DBDSharedTypes.ESkillCheckCustomType
	 */
	enum class ESkillCheckCustomType : uint8_t
	{
		VE_None                          = 0,
		VE_OnPickedUp                    = 1,
		VE_OnAttacked                    = 2,
		VE_DecisiveStrikeWhileWiggling   = 3,
		VE_GeneratorOvercharge1          = 4,
		VE_GeneratorOvercharge2          = 5,
		VE_GeneratorOvercharge3          = 6,
		VE_BrandNewPart                  = 7,
		VE_Struggle                      = 8,
		VE_OppressionPerkGeneratorKicked = 9,
		VE_SoulChemical                  = 10,
		VE_Wiggle                        = 11,
		VE_YellowGlyph                   = 12,
		VE_Continuous                    = 13,
		VE_MAX                           = 14
	};

	/**
	 * Enum DBDSharedTypes.EGender
	 */
	enum class EGender : uint8_t
	{
		VE_Male      = 0,
		VE_Female    = 1,
		VE_Multiple  = 2,
		VE_NotHuman  = 3,
		VE_Undefined = 4,
		VE_MAX       = 5
	};

	/**
	 * Enum DBDSharedTypes.EAttackSubstate
	 */
	enum class EAttackSubstate : uint8_t
	{
		VE_None          = 0,
		VE_Open          = 1,
		VE_Hitting       = 2,
		VE_HitSucceed    = 3,
		VE_HitMiss       = 4,
		VE_HitObstructed = 5,
		VE_Done          = 6,
		VE_MAX           = 7
	};

	/**
	 * Enum DBDSharedTypes.EDetectionZone
	 */
	enum class EDetectionZone : uint8_t
	{
		VE_None                   = 0,
		VE_Slash                  = 1,
		VE_Pounce                 = 2,
		VE_Chainsaw               = 3,
		VE_Obstructed             = 4,
		VE_Interruption           = 5,
		VE_ChainsawLockExtended   = 6,
		VE_Damage                 = 7,
		VE_ChainsawObstruction    = 8,
		VE_Blink                  = 9,
		VE_ChainsawDamageExtended = 10,
		VE_Stalker                = 11,
		VE_Lunge                  = 12,
		VE_PowerAttack            = 13,
		VE_Max                    = 14,
		VE_Max01                  = 15
	};

	/**
	 * Enum DBDSharedTypes.EAttackSuccess
	 */
	enum class EAttackSuccess : uint8_t
	{
		VE_None       = 0,
		VE_Success    = 1,
		VE_Failure    = 2,
		VE_Obstructed = 3,
		VE_MAX        = 4
	};

	/**
	 * Enum DBDSharedTypes.EBlindType
	 */
	enum class EBlindType : uint8_t
	{
		VE_None               = 0,
		VE_Flashlight         = 1,
		VE_SacrificeSuspended = 2,
		VE_Firecracker        = 3,
		VE_MAX                = 4
	};

	/**
	 * Enum DBDSharedTypes.EStunType
	 */
	enum class EStunType : uint8_t
	{
		VE_None          = 0,
		VE_Pallet        = 1,
		VE_BearTrap      = 2,
		VE_Flashlight    = 3,
		VE_WiggleFree    = 4,
		VE_EvilWithin    = 5,
		VE_Kicked        = 6,
		VE_Closet        = 7,
		VE_HarpoonRifle  = 8,
		VE_GeneratorTrap = 9,
		VE_MAX           = 10
	};

	/**
	 * Enum DBDSharedTypes.EAttackType
	 */
	enum class EAttackType : uint8_t
	{
		VE_None                     = 0,
		VE_Slash                    = 1,
		VE_Pounce                   = 2,
		VE_Chainsaw                 = 3,
		VE_Blink                    = 4,
		VE_LFChainsaw               = 5,
		VE_Ambush                   = 6,
		VE_Frenzy                   = 7,
		VE_GhostCrouch              = 8,
		VE_QatarDash                = 9,
		VE_OniBasicAttack           = 10,
		VE_OniDemonBasicAttack      = 11,
		VE_OniDemonPowerAttack      = 12,
		VE_OniDemonDashAttack       = 13,
		VE_ExecutionerTormentAttack = 14,
		VE_BlightDash               = 15,
		VE_TwinJump                 = 16,
		VE_K24WhipAttack            = 17,
		VE_MAX                      = 18
	};

	/**
	 * Enum DBDSharedTypes.EInteractionAnimation
	 */
	enum class EInteractionAnimation : uint8_t
	{
		VE_None                   = 0,
		VE_Generator              = 1,
		VE_PullDownLeft           = 2,
		VE_PullDownRight          = 3,
		VE_Hiding                 = 4,
		VE_SearchCloset           = 5,
		VE_HealingOther           = 6,
		VE_OpenEscape             = 7,
		VE_StruggleFree           = 8,
		VE_HealOther              = 9,
		VE_HealSelf               = 10,
		VE_PickedUp               = 11,
		VE_Unused01               = 12,
		VE_Dropped                = 13,
		VE_Unused02               = 14,
		VE_BeingHooked            = 15,
		VE_Sabotage               = 16,
		VE_ChargeBlink            = 17,
		VE_ThrowFirecracker       = 18,
		VE_WakeUpOther            = 19,
		VE_RemoveReverseBearTrap  = 20,
		VE_DeadHard               = 21,
		VE_DestroyPortal          = 22,
		VE_OniDash                = 23,
		VE_PickUpAnniversaryCrown = 24,
		VE_InteractWithGlyph      = 25,
		VE_OpenChest              = 26,
		VE_MAX                    = 27
	};

	/**
	 * Enum DBDSharedTypes.ECamperState
	 */
	enum class ECamperState : uint8_t
	{
		VE_None     = 0,
		VE_Navigate = 1,
		VE_Interact = 2,
		VE_MAX      = 3
	};

	/**
	 * Enum DBDSharedTypes.EAnimNotifyType
	 */
	enum class EAnimNotifyType : uint8_t
	{
		VE_None    = 0,
		VE_Pickup  = 1,
		VE_Release = 2,
		VE_MAX     = 3
	};

	/**
	 * Enum DBDSharedTypes.EKillerMoodInfluence
	 */
	enum class EKillerMoodInfluence : uint8_t
	{
		VE_None      = 0,
		VE_Chuckles  = 1,
		VE_Banshee   = 2,
		VE_Hillbilly = 3,
		VE_Nurse     = 4,
		VE_Shape     = 5,
		VE_MAX       = 6
	};

	/**
	 * Enum DBDSharedTypes.EKillerAbilities
	 */
	enum class EKillerAbilities : uint8_t
	{
		VE_None            = 0,
		VE_SpawnTraps      = 1,
		VE_Cloak           = 2,
		VE_Chainsaw        = 3,
		VE_Blink           = 4,
		VE_PhantomTrap     = 5,
		VE_Stalker         = 6,
		VE_Killer07Ability = 7,
		VE_Killer08Ability = 8,
		VE_LFChainsaw      = 9,
		VE_InduceDreams    = 10,
		VE_ReverseBearTrap = 11,
		VE_GasBomb         = 12,
		VE_PhaseWalk       = 13,
		VE_Frenzy          = 14,
		VE_Vomit           = 15,
		VE_GhostStalker    = 16,
		VE_GroundPortals   = 17,
		VE_DemonMode       = 18,
		VE_HarpoonRifle    = 19,
		VE_TormentMode     = 20,
		VE_K21Power        = 21,
		VE_K22Power        = 22,
		VE_ThrowingKnives  = 23,
		VE_K24Power        = 24,
		VE_Zombies         = 25,
		VE_K25Power        = 26,
		VE_K26Power        = 27,
		VE_OnryoPower      = 28,
		VE_K28Power        = 29,
		VE_MAX             = 30
	};

	/**
	 * Enum DBDSharedTypes.EGameState
	 */
	enum class EGameState : uint8_t
	{
		VE_Active            = 0,
		VE_Dead              = 1,
		VE_Escaped           = 2,
		VE_EscapedInjured    = 3,
		VE_Sacrificed        = 4,
		VE_None              = 5,
		VE_Disconnected      = 6,
		VE_ManuallyLeftMatch = 7,
		VE_MAX               = 8
	};

	/**
	 * Enum DBDSharedTypes.EPlayerTeam
	 */
	enum class EPlayerTeam : uint8_t
	{
		VE_None     = 0,
		VE_Killer   = 1,
		VE_Survivor = 2,
		VE_MAX      = 3
	};

	/**
	 * Enum DBDSharedTypes.EPawnType
	 */
	enum class EPawnType : uint8_t
	{
		VE_None     = 0,
		VE_Killer   = 1,
		VE_Survivor = 2,
		VE_Sidekick = 3,
		VE_MAX      = 4
	};

	/**
	 * Enum DBDSharedTypes.EPlayerRole
	 */
	enum class EPlayerRole : uint8_t
	{
		VE_None     = 0,
		VE_Slasher  = 1,
		VE_Camper   = 2,
		VE_Observer = 3,
		Max         = 4,
		MAX         = 5
	};

	/**
	 * Enum DBDSharedTypes.EDBDScoreCategory
	 */
	enum class EDBDScoreCategory : uint8_t
	{
		DBD_CamperScoreCat_Objectives   = 0,
		DBD_CamperScoreCat_Survival     = 1,
		DBD_CamperScoreCat_Altruism     = 2,
		DBD_CamperScoreCat_Boldness     = 3,
		DBD_SlasherScoreCat_Brutality   = 4,
		DBD_SlasherScoreCat_Deviousness = 5,
		DBD_SlasherScoreCat_Hunter      = 6,
		DBD_SlasherScoreCat_Sacrifice   = 7,
		DBD_CamperScoreCat_Untracked    = 8,
		DBD_CamperScoreCat_Streak       = 9,
		DBD_ScoreCat_SpecialEvents      = 10,
		DBD_ScoreCat_Bonus              = 11,
		Count                           = 12,
		MAX                             = 13
	};

	/**
	 * Enum DBDSharedTypes.EFriendshipStatus
	 */
	enum class EFriendshipStatus : uint8_t
	{
		None            = 0,
		RequestSent     = 1,
		RequestReceived = 2,
		Friend          = 3,
		MAX             = 4
	};

	/**
	 * Enum DBDSharedTypes.EFriendSuggestionType
	 */
	enum class EFriendSuggestionType : uint8_t
	{
		None     = 0,
		Facebook = 1,
		Google   = 2,
		MAX      = 3
	};

	/**
	 * Enum DBDSharedTypes.EStatusEffectType
	 */
	enum class EStatusEffectType : uint8_t
	{
		None   = 0,
		Buff   = 1,
		Debuff = 2,
		MAX    = 3
	};

	/**
	 * Enum DBDSharedTypes.EBarColor
	 */
	enum class EBarColor : uint8_t
	{
		Default = 0,
		Yellow  = 1,
		Red     = 2,
		MAX     = 3
	};

	/**
	 * Enum DBDSharedTypes.EHudScreenIndicatorType
	 */
	enum class EHudScreenIndicatorType : uint8_t
	{
		None          = 0,
		LoudNoise     = 1,
		StealthBroken = 2,
		Objective     = 3,
		MAX           = 4
	};

	/**
	 * Enum DBDSharedTypes.EHudParentContainerType
	 */
	enum class EHudParentContainerType : uint8_t
	{
		Widget   = 0,
		Outer    = 1,
		Spectate = 2,
		MAX      = 3
	};

	/**
	 * Enum DBDSharedTypes.ELoadoutPartState
	 */
	enum class ELoadoutPartState : uint8_t
	{
		None       = 0,
		Default    = 1,
		InProgress = 2,
		Ready      = 3,
		Active     = 4,
		Vanished   = 5,
		MAX        = 6
	};

	/**
	 * Enum DBDSharedTypes.EItemAvailability
	 */
	enum class EItemAvailability : uint8_t
	{
		Available = 0,
		Disabled  = 1,
		Retired   = 2,
		MAX       = 3
	};

	/**
	 * Enum DBDSharedTypes.ELoadoutItemType
	 */
	enum class ELoadoutItemType : uint8_t
	{
		None        = 0,
		Medkit      = 1,
		Toolbox     = 2,
		Flashlight  = 3,
		Key         = 4,
		Map         = 5,
		Firecracker = 6,
		Flashbang   = 7,
		Count       = 8,
		MAX         = 9
	};

	/**
	 * Enum DBDSharedTypes.EItemRarity
	 */
	enum class EItemRarity : uint8_t
	{
		Common       = 0,
		Uncommon     = 1,
		Rare         = 2,
		VeryRare     = 3,
		UltraRare    = 4,
		Artifact     = 5,
		Spectral     = 6,
		Teachable    = 7,
		SpecialEvent = 8,
		Legendary    = 9,
		Epic         = 10,
		SuperEpic    = 11,
		UltraEpic    = 12,
		Count        = 13,
		None         = 14,
		MAX          = 15
	};

	/**
	 * Enum DBDSharedTypes.EOnboardingTutorialType
	 */
	enum class EOnboardingTutorialType : uint8_t
	{
		TutorialLevel = 0,
		BotMatchLevel = 1,
		FinalReward   = 2,
		MAX           = 3
	};

	/**
	 * Enum DBDSharedTypes.EOnboardingTutorialButtonStyle
	 */
	enum class EOnboardingTutorialButtonStyle : uint8_t
	{
		Default  = 0,
		Survivor = 1,
		Killer   = 2,
		Reward   = 3,
		MAX      = 4
	};

	/**
	 * Enum DBDSharedTypes.EOnboardingStepStatus
	 */
	enum class EOnboardingStepStatus : uint8_t
	{
		Unavailable = 0,
		Open        = 1,
		Completed   = 2,
		MAX         = 3
	};

	/**
	 * Enum DBDSharedTypes.EPingQuality
	 */
	enum class EPingQuality : uint8_t
	{
		Good  = 0,
		Bad   = 1,
		Awful = 2,
		MAX   = 3
	};

	/**
	 * Enum DBDSharedTypes.EPlayerStateChangeType
	 */
	enum class EPlayerStateChangeType : uint8_t
	{
		None     = 0,
		Negative = 1,
		Neutral  = 2,
		Positive = 3,
		MAX      = 4
	};

	/**
	 * Enum DBDSharedTypes.ESicknessLevel
	 */
	enum class ESicknessLevel : uint8_t
	{
		Off        = 0,
		InProgress = 1,
		Full       = 2,
		MAX        = 3
	};

	/**
	 * Enum DBDSharedTypes.EAfflictionLevel
	 */
	enum class EAfflictionLevel : uint8_t
	{
		Off    = 0,
		Level1 = 1,
		Level2 = 2,
		Level3 = 3,
		MAX    = 4
	};

	/**
	 * Enum DBDSharedTypes.EBloodDisplayType
	 */
	enum class EBloodDisplayType : uint8_t
	{
		Hidden = 0,
		Bottom = 1,
		Top    = 2,
		MAX    = 3
	};

	/**
	 * Enum DBDSharedTypes.EPlayerStatus
	 */
	enum class EPlayerStatus : uint8_t
	{
		Default      = 0,
		Hook         = 1,
		Trap         = 2,
		Dead         = 3,
		Escaped      = 4,
		Injured      = 5,
		Crawling     = 6,
		Sacrificed   = 7,
		Disconnected = 8,
		InDeathBed   = 9,
		MAX          = 10
	};

	/**
	 * Enum DBDSharedTypes.EReverseBearTrapUIState
	 */
	enum class EReverseBearTrapUIState : uint8_t
	{
		Off    = 0,
		Stage1 = 1,
		Stage2 = 2,
		MAX    = 3
	};

	/**
	 * Enum DBDSharedTypes.ESleepingUIState
	 */
	enum class ESleepingUIState : uint8_t
	{
		Off           = 0,
		FallingAsleep = 1,
		Asleep        = 2,
		MAX           = 3
	};

	/**
	 * Enum DBDSharedTypes.EObsessionUIState
	 */
	enum class EObsessionUIState : uint8_t
	{
		Off    = 0,
		Target = 1,
		Chased = 2,
		Dead   = 3,
		MAX    = 4
	};

	/**
	 * Enum DBDSharedTypes.EThemeColorId
	 */
	enum class EThemeColorId : uint8_t
	{
		Invalid = 0,
		Blue    = 1,
		Green   = 2,
		Yellow  = 3,
		MAX     = 4
	};

	/**
	 * Enum DBDSharedTypes.EProgressionType
	 */
	enum class EProgressionType : uint8_t
	{
		None  = 0,
		Stars = 1,
		MAX   = 2
	};

	/**
	 * Enum DBDSharedTypes.ECurrencyType
	 */
	enum class ECurrencyType : uint8_t
	{
		None                   = 0,
		BloodPoints            = 1,
		FearTokens             = 2,
		Cells                  = 3,
		HalloweenCoins         = 4,
		LunarNewYearCoins      = 5,
		HalloweenEventCurrency = 6,
		MAX                    = 7
	};

	/**
	 * Enum DBDSharedTypes.ERewardType
	 */
	enum class ERewardType : uint8_t
	{
		None          = 0,
		Character     = 1,
		Currency      = 2,
		Customization = 3,
		Progression   = 4,
		MAX           = 5
	};

	/**
	 * Enum DBDSharedTypes.ESubtitlesSize
	 */
	enum class ESubtitlesSize : uint8_t
	{
		Small   = 0,
		Default = 1,
		Large   = 2,
		Huge    = 3,
		MAX     = 4
	};

	/**
	 * Enum DBDSharedTypes.ESubtitlesBackgroundOpacity
	 */
	enum class ESubtitlesBackgroundOpacity : uint8_t
	{
		None    = 0,
		Default = 1,
		High    = 2,
		Opaque  = 3,
		MAX     = 4
	};

	/**
	 * Enum DBDSharedTypes.ESubtitlesPosition
	 */
	enum class ESubtitlesPosition : uint8_t
	{
		HUD        = 0,
		Menus      = 1,
		Cinematics = 2,
		MAX        = 3
	};

	/**
	 * Enum DBDSharedTypes.ETutorialObjectivePlayerActionMapping
	 */
	enum class ETutorialObjectivePlayerActionMapping : uint8_t
	{
		None                    = 0,
		Action_Camper           = 1,
		Interact_Camper         = 2,
		Interact_Slasher        = 3,
		Run_Camper              = 4,
		Attack_Slasher          = 5,
		SecondaryAction_Camper  = 6,
		ItemUse_Camper          = 7,
		Crouch                  = 8,
		ItemDrop_Camper         = 9,
		ItemUse_Slasher         = 10,
		ItemDrop_Slasher        = 11,
		Mash_Camper             = 12,
		FastInteract_Camper     = 13,
		SecondaryAction_Slasher = 14,
		Action_Slasher          = 15,
		Struggle                = 16,
		MoveAxes                = 17,
		LookAxes                = 18,
		Count                   = 19,
		MAX                     = 20
	};

	/**
	 * Enum DBDSharedTypes.EChatType
	 */
	enum class EChatType : uint8_t
	{
		None     = 0,
		PreGame  = 1,
		PostGame = 2,
		Party    = 3,
		MAX      = 4
	};

	/**
	 * Enum DBDSharedTypes.EStickerType
	 */
	enum class EStickerType : uint8_t
	{
		None  = 0,
		Emoji = 1,
		Text  = 2,
		MAX   = 3
	};

	/**
	 * Enum DBDSharedTypes.ELobbyState
	 */
	enum class ELobbyState : uint8_t
	{
		Searching = 0,
		Joined    = 1,
		Offering  = 2,
		Fog       = 3,
		MAX       = 4
	};

	/**
	 * Enum DBDSharedTypes.EPopupPriority
	 */
	enum class EPopupPriority : uint8_t
	{
		ErrorSystem      = 0,
		ErrorGameHigh    = 1,
		ErrorGameLow     = 2,
		InfoHigh         = 3,
		InfoLow          = 4,
		ErrorUIThreshold = 5,
		LowestPriority   = 6,
		MAX              = 7
	};

	/**
	 * Enum DBDSharedTypes.EHudComponent
	 */
	enum class EHudComponent : uint8_t
	{
		ACTION_PROMPT          = 0,
		ACTION_PROGRESS_BAR    = 1,
		GENERATOR_ICON         = 2,
		HATCH_ICON             = 3,
		EXIT_ICON              = 4,
		LOCAL_PLAYER_STATUS    = 5,
		OTHER_PLAYER_STATUSES  = 6,
		SURVIVOR_HOOK_COUNT    = 7,
		CROUCH_BUTTON          = 8,
		CENTER_INTERACT_BUTTON = 9,
		DIRECTIONAL_STICK      = 10,
		WIGGLE_BUTTONS         = 11,
		STRUGGLE_BUTTONS       = 12,
		POWER_BUTTON           = 13,
		ATTACK_BUTTON          = 14,
		OBJECTIVES             = 15,
		LOUD_NOISE_INDICATOR   = 16,
		SECOND_ABILITY_BUTTON  = 17,
		ACTION_BUTTON          = 18,
		CANCEL_BUTTON          = 19,
		DROP_SURVIVOR_BUTTON   = 20,
		LOOK_BACK_BUTTON       = 21,
		CENTER_ITEM_CONTAINER  = 22,
		MOVEMENT_LOCK          = 23,
		MAX                    = 24
	};

	/**
	 * Enum DBDSharedTypes.ETestBuildType
	 */
	enum class ETestBuildType : uint8_t
	{
		None                 = 0,
		PublicTestBuild      = 1,
		PaxBuild             = 2,
		ConsolePreAlphaBuild = 3,
		MAX                  = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct DBDSharedTypes.CurrencyProgressionUIData
	 * Size -> 0x00C0
	 */
	struct FCurrencyProgressionUIData
	{
	public:
		class FText                                                TooltipTitle;                                            // 0x0000(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                TooltipDescription;                                      // 0x0018(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		unsigned char                                              TooltipHeaderMaterial[0x30];                             // 0x0030(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              RewardBackgroundMaterial[0x30];                          // 0x0060(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              RewardIcon[0x30];                                        // 0x0090(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct DBDSharedTypes.ProgressionUIDataRow
	 * Size -> 0x00C8 (FullSize[0x00D0] - InheritedSize[0x0008])
	 */
	struct FProgressionUIDataRow : public FDBDTableRowBase
	{
	public:
		EProgressionType                                           ProgressionType;                                         // 0x0008(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QIGP[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCurrencyProgressionUIData                          CurrencyProgressionUIData;                               // 0x0010(0x00C0) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDSharedTypes.CurrencyUIDataRow
	 * Size -> 0x00C8 (FullSize[0x00D0] - InheritedSize[0x0008])
	 */
	struct FCurrencyUIDataRow : public FDBDTableRowBase
	{
	public:
		ECurrencyType                                              currencyType;                                            // 0x0008(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YVBZ[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCurrencyProgressionUIData                          CurrencyProgressionUIData;                               // 0x0010(0x00C0) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDSharedTypes.FriendData
	 * Size -> 0x0060
	 */
	struct FFriendData
	{
	public:
		unsigned char                                              UnknownData_AHBR[0x60];                                  // 0x0000(0x0060) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDSharedTypes.HelpCategoryData
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FHelpCategoryData : public FDBDTableRowBase
	{
	public:
		EHelpType                                                  Type;                                                    // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L0IN[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Title;                                                   // 0x0010(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0028(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<class FName>                                        TopicIds;                                                // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDSharedTypes.HelpContextMappingData
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FHelpContextMappingData : public FDBDTableRowBase
	{
	public:
		class FString                                              ContextName;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        TopicIds;                                                // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDSharedTypes.HelpTopicData
	 * Size -> 0x0090 (FullSize[0x0098] - InheritedSize[0x0008])
	 */
	struct FHelpTopicData : public FDBDTableRowBase
	{
	public:
		class FText                                                Title;                                                   // 0x0008(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0020(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              ImagePath;                                               // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              IconPath;                                                // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              VideoId;                                                 // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Icon[0x30];                                              // 0x0068(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct DBDSharedTypes.RarityMaterialData
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRarityMaterialData : public FDBDTableRowBase
	{
	public:
		EItemRarity                                                Rarity;                                                  // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W5MA[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  Material;                                                // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
