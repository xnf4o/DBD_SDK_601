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
	 * Enum DBDUIViewInterfaces.EOnboardingMenuState
	 */
	enum class EOnboardingMenuState : uint8_t
	{
		Tutorial   = 0,
		GameManual = 1,
		MAX        = 2
	};

	/**
	 * Enum DBDUIViewInterfaces.EGameManualMenuState
	 */
	enum class EGameManualMenuState : uint8_t
	{
		Categories = 0,
		Topics     = 1,
		MAX        = 2
	};

	/**
	 * Enum DBDUIViewInterfaces.ESingleHookState
	 */
	enum class ESingleHookState : uint8_t
	{
		EMPTY        = 0,
		UNHOOKED     = 1,
		HOOKED       = 2,
		DISCONNECTED = 3,
		MAX          = 4
	};

	/**
	 * Enum DBDUIViewInterfaces.EHudStatusEffectAlertViewType
	 */
	enum class EHudStatusEffectAlertViewType : uint8_t
	{
		Unhandled = 0,
		Perk      = 1,
		Item      = 2,
		Addon     = 3,
		MAX       = 4
	};

	/**
	 * Enum DBDUIViewInterfaces.EInteractionPromptType
	 */
	enum class EInteractionPromptType : uint8_t
	{
		PressButton         = 0,
		MashButton          = 1,
		HoldButton          = 2,
		AlternateTwoButtons = 3,
		WiggleThumbstick    = 4,
		MovementAxes        = 5,
		MovementKeys        = 6,
		MAX                 = 7
	};

	/**
	 * Enum DBDUIViewInterfaces.EKillerResult
	 */
	enum class EKillerResult : uint8_t
	{
		DisgracefulDefeat = 0,
		EntityDispleased  = 1,
		BrutalKiller      = 2,
		RuthlessKiller    = 3,
		MercilessKiller   = 4,
		MAX               = 5
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct DBDUIViewInterfaces.PopupButtonViewData
	 * Size -> 0x0080
	 */
	struct FPopupButtonViewData
	{
	public:
		class FText                                                label;                                                   // 0x0000(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FKey                                                Key;                                                     // 0x0018(0x0020) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NFJH[0x48];                                  // 0x0038(0x0048) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.BaseLoadoutPartViewData
	 * Size -> 0x0058
	 */
	struct FBaseLoadoutPartViewData
	{
	public:
		class FName                                                ItemId;                                                  // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PJGR[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              IconTexture[0x30];                                       // 0x000C(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		class FString                                              DisplayName;                                             // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EItemRarity                                                Rarity;                                                  // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TESA[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.AddonViewData
	 * Size -> 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
	 */
	struct FAddonViewData : public FBaseLoadoutPartViewData
	{
	public:
		float                                                      Cooldown;                                                // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EStatusEffectType                                          StatusEffectType;                                        // 0x005C(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AK5D[0x3];                                   // 0x005D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    StackCount;                                              // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELoadoutPartState                                          LoadoutPartState;                                        // 0x0064(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SNNB[0x3];                                   // 0x0065(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.RewardViewData
	 * Size -> 0x0002
	 */
	struct FRewardViewData
	{
	public:
		bool                                                       IsLocked;                                                // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsHighlighted;                                           // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.CharacterTooltipViewData
	 * Size -> 0x0070
	 */
	struct FCharacterTooltipViewData
	{
	public:
		class FText                                                DisplayName;                                             // 0x0000(0x0018) Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic
		class FText                                                Biography;                                               // 0x0018(0x0018) Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic
		class FText                                                DLCTitle;                                                // 0x0030(0x0018) Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic
		int32_t                                                    Level;                                                   // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Prestige;                                                // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsUnlocked;                                              // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsNewInStore;                                            // 0x0051(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsOwned;                                                 // 0x0052(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsAvailableInStore;                                      // 0x0053(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsDLCPurchasable;                                        // 0x0054(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECharacterDifficulty                                       Difficulty;                                              // 0x0055(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsEnabled;                                               // 0x0056(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_42Z2[0x1];                                   // 0x0057(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                CharacterDisabledMessage;                                // 0x0058(0x0018) BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.CharacterRewardViewData
	 * Size -> 0x0096 (FullSize[0x0098] - InheritedSize[0x0002])
	 */
	struct FCharacterRewardViewData : public FRewardViewData
	{
	public:
		unsigned char                                              UnknownData_KY5G[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          IconTexture;                                             // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsOwned;                                                 // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZWOM[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Level;                                                   // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Prestige;                                                // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XGPB[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCharacterTooltipViewData                           TooltipData;                                             // 0x0020(0x0070) Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic
		bool                                                       IsEnabled;                                               // 0x0090(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5LT6[0x7];                                   // 0x0091(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.CurrencyProgressionTooltipViewData
	 * Size -> 0x0080
	 */
	struct FCurrencyProgressionTooltipViewData
	{
	public:
		bool                                                       IsCurrency;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LINK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Title;                                                   // 0x0008(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0020(0x0018) Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic
		class FText                                                EndTiming;                                               // 0x0038(0x0018) Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic
		unsigned char                                              TooltipHeaderMaterial[0x30];                             // 0x0050(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.CurrencyProgressionRewardViewData
	 * Size -> 0x00E6 (FullSize[0x00E8] - InheritedSize[0x0002])
	 */
	struct FCurrencyProgressionRewardViewData : public FRewardViewData
	{
	public:
		unsigned char                                              UnknownData_6T5V[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    amount;                                                  // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              RewardBackgroundMaterial[0x30];                          // 0x0008(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              RewardIcon[0x30];                                        // 0x0038(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		struct FCurrencyProgressionTooltipViewData                 TooltipData;                                             // 0x0068(0x0080) Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.PriceViewData
	 * Size -> 0x0010
	 */
	struct FPriceViewData
	{
	public:
		ECurrencyType                                              currencyType;                                            // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SFRG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Price;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Discount;                                                // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsAffordable;                                            // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DFCT[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.CustomizationTooltipViewData
	 * Size -> 0x00C8
	 */
	struct FCustomizationTooltipViewData
	{
	public:
		class FText                                                DisplayName;                                             // 0x0000(0x0018) Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic
		class FText                                                ParentName;                                              // 0x0018(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic
		class FText                                                RarityPartInfo;                                          // 0x0030(0x0018) Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic
		class FText                                                CollectionDisplayName;                                   // 0x0048(0x0018) Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0060(0x0018) Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic
		class FText                                                RoleCategoryInfo;                                        // 0x0078(0x0018) Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic
		bool                                                       IsLocked;                                                // 0x0090(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsUnbreakable;                                           // 0x0091(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsEquipped;                                              // 0x0092(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsOwned;                                                 // 0x0093(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPlayerRole                                                AssociatedRole;                                          // 0x0094(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EItemRarity                                                Rarity;                                                  // 0x0095(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JHR1[0x2];                                   // 0x0096(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPriceViewData>                              Prices;                                                  // 0x0098(0x0010) Edit, BlueprintVisible, ZeroConstructor, Transient, NativeAccessSpecifierPublic
		bool                                                       IsEnabled;                                               // 0x00A8(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A8A0[0x7];                                   // 0x00A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                CustomizationDisabledMessage;                            // 0x00B0(0x0018) BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.CustomizationRewardViewData
	 * Size -> 0x00E6 (FullSize[0x00E8] - InheritedSize[0x0002])
	 */
	struct FCustomizationRewardViewData : public FRewardViewData
	{
	public:
		unsigned char                                              UnknownData_VXMV[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          IconTexture;                                             // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EItemRarity                                                Rarity;                                                  // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsOwned;                                                 // 0x0011(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsEquipped;                                              // 0x0012(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsUnbreakable;                                           // 0x0013(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UQSH[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCustomizationTooltipViewData                       TooltipData;                                             // 0x0018(0x00C8) Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic
		bool                                                       IsEnabled;                                               // 0x00E0(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SQRH[0x7];                                   // 0x00E1(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.PerkViewData
	 * Size -> 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
	 */
	struct FPerkViewData : public FBaseLoadoutPartViewData
	{
	public:
		int32_t                                                    Level;                                                   // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Cooldown;                                                // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EStatusEffectType                                          StatusEffectType;                                        // 0x0060(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IXPI[0x3];                                   // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    StackCount;                                              // 0x0064(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.ItemViewData
	 * Size -> 0x0038 (FullSize[0x0090] - InheritedSize[0x0058])
	 */
	struct FItemViewData : public FBaseLoadoutPartViewData
	{
	public:
		bool                                                       IsEnergyTypeValid;                                       // 0x0058(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CZG9[0x3];                                   // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      EnergyLevel;                                             // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ICYI[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FKey                                                InputKey;                                                // 0x0068(0x0020) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShowKeyPrompt;                                           // 0x0088(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsLimitedItem;                                           // 0x0089(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JMFM[0x6];                                   // 0x008A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.StatusEffectAlertViewData
	 * Size -> 0x01A8
	 */
	struct FStatusEffectAlertViewData
	{
	public:
		class FString                                              StatusEffectName;                                        // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              StatusEffectIcon[0x30];                                  // 0x0010(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		EStatusEffectType                                          StatusEffectType;                                        // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHudStatusEffectAlertViewType                              SourceViewType;                                          // 0x0041(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7L4U[0x6];                                   // 0x0042(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPerkViewData                                       PerkViewData;                                            // 0x0048(0x0068) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FItemViewData                                       ItemViewData;                                            // 0x00B0(0x0090) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FAddonViewData                                      AddonViewData;                                           // 0x0140(0x0068) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.ScoreAlertViewData
	 * Size -> 0x0020
	 */
	struct FScoreAlertViewData
	{
	public:
		EDBDScoreCategory                                          scoreType;                                               // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2CXK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Title;                                                   // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ScoreValue;                                              // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Progress;                                                // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.HudObjectivesViewData
	 * Size -> 0x0008
	 */
	struct FHudObjectivesViewData
	{
	public:
		EPlayerTeam                                                playerTeam;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       isHatchOpen;                                             // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1JZD[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    nbGeneratorsLeft;                                        // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.StatusEffectViewData
	 * Size -> 0x0050
	 */
	struct FStatusEffectViewData
	{
	public:
		class FName                                                ID;                                                      // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R87Y[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              IconTexture[0x30];                                       // 0x000C(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		EStatusEffectType                                          StatusEffectType;                                        // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YVIN[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Level;                                                   // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Percentage;                                              // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7E80[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.InteractionProgressViewData
	 * Size -> 0x0068
	 */
	struct FInteractionProgressViewData
	{
	public:
		class FString                                              Message;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SecondaryMessage;                                        // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBarColor                                                  BarColor;                                                // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBarColor                                                  ChargeBarColor;                                          // 0x0021(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShowIcon;                                                // 0x0022(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShowIconCharge;                                          // 0x0023(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RZ65[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ItemIcon[0x30];                                          // 0x0024(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		TArray<struct FStatusEffectViewData>                       Proficiencies;                                           // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.InteractionPromptViewData
	 * Size -> 0x00B0
	 */
	struct FInteractionPromptViewData
	{
	public:
		class FName                                                ID;                                                      // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TFJ7[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Message;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInteractionPromptType                                     Type;                                                    // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ETCU[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FKey                                                InputKey1;                                               // 0x0028(0x0020) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FKey                                                InputKey2;                                               // 0x0048(0x0020) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FKey                                                InputKey3;                                               // 0x0068(0x0020) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FKey                                                InputKey4;                                               // 0x0088(0x0020) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PlaceInCenter;                                           // 0x00A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QACV[0x7];                                   // 0x00A9(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.ItemBundleViewData
	 * Size -> 0x0160
	 */
	struct FItemBundleViewData
	{
	public:
		struct FItemViewData                                       Item;                                                    // 0x0000(0x0090) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FAddonViewData                                      Addon1;                                                  // 0x0090(0x0068) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FAddonViewData                                      Addon2;                                                  // 0x00F8(0x0068) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.MatchResultViewData
	 * Size -> 0x0008
	 */
	struct FMatchResultViewData
	{
	public:
		bool                                                       IsSlasher;                                               // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGameState                                                 SurvivorResult;                                          // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EKillerResult                                              KillerResult;                                            // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZEX9[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Duration;                                                // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.NotifTutorialPopupViewData
	 * Size -> 0x0080
	 */
	struct FNotifTutorialPopupViewData
	{
	public:
		class FString                                              Title;                                                   // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Icon[0x30];                                              // 0x0020(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Image[0x30];                                             // 0x0050(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.OfferingViewData
	 * Size -> 0x0008 (FullSize[0x0060] - InheritedSize[0x0058])
	 */
	struct FOfferingViewData : public FBaseLoadoutPartViewData
	{
	public:
		int32_t                                                    StackCount;                                              // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EItemAvailability                                          Availability;                                            // 0x005C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0LXU[0x3];                                   // 0x005D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.RewardWrapperViewData
	 * Size -> 0x0270
	 */
	struct FRewardWrapperViewData
	{
	public:
		ERewardType                                                RewardType;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8O7E[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCharacterRewardViewData                            CharacterRewardViewData;                                 // 0x0008(0x0098) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FCurrencyProgressionRewardViewData                  CurrencyProgressionRewardViewData;                       // 0x00A0(0x00E8) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FCustomizationRewardViewData                        CustomizationRewardViewData;                             // 0x0188(0x00E8) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.OnboardingTutorialViewData
	 * Size -> 0x0078
	 */
	struct FOnboardingTutorialViewData
	{
	public:
		class FString                                              tutorialId;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       COMPLETED;                                               // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       MainRewardClaimed;                                       // 0x0011(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PN7E[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRewardWrapperViewData>                      MainRewards;                                             // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<struct FRewardWrapperViewData>                      AlternativeRewards;                                      // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, Transient, NativeAccessSpecifierPublic
		EOnboardingTutorialType                                    TutorialType;                                            // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOnboardingTutorialButtonStyle                             ButtonStyle;                                             // 0x0039(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QV9N[0x6];                                   // 0x003A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                DisplayName;                                             // 0x0040(0x0018) Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0058(0x0018) Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic
		class UTexture2D*                                          Icon;                                                    // 0x0070(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.OnboardingStepViewData
	 * Size -> 0x0028
	 */
	struct FOnboardingStepViewData
	{
	public:
		class FString                                              stepId;                                                  // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOnboardingStepStatus                                      Status;                                                  // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DOV1[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FOnboardingTutorialViewData>                 Tutorials;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.DoctorStatusData
	 * Size -> 0x0001
	 */
	struct FDoctorStatusData
	{
	public:
		EAfflictionLevel                                           AfflictionLevel;                                         // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.ExecutionerStatusData
	 * Size -> 0x0004
	 */
	struct FExecutionerStatusData
	{
	public:
		float                                                      AgonyProgress;                                           // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.GhostStatusData
	 * Size -> 0x0008
	 */
	struct FGhostStatusData
	{
	public:
		bool                                                       IsExposed;                                               // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5QZY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StalkingProgress;                                        // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.NightmareStatusData
	 * Size -> 0x000C
	 */
	struct FNightmareStatusData
	{
	public:
		ESleepingUIState                                           SleepingState;                                           // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0M34[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SleepingProgress;                                        // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SleepProtectionRemainingDuration;                        // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.PigStatusData
	 * Size -> 0x0008
	 */
	struct FPigStatusData
	{
	public:
		EReverseBearTrapUIState                                    ReverseBearTrapState;                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DQOQ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TimerProgress;                                           // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.PlagueStatusData
	 * Size -> 0x0008
	 */
	struct FPlagueStatusData
	{
	public:
		ESicknessLevel                                             SicknessLevel;                                           // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FL96[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SicknessProgress;                                        // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.TwinsStatusData
	 * Size -> 0x0001
	 */
	struct FTwinsStatusData
	{
	public:
		bool                                                       TwinsActive;                                             // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.TricksterStatusData
	 * Size -> 0x000C
	 */
	struct FTricksterStatusData
	{
	public:
		float                                                      CurrentLacerationLevel;                                  // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaximumLacerationLevel;                                  // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsDangerousLacerationLevel;                              // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       WasRecentlyDamagedByLaceration;                          // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D57M[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.K24StatusData
	 * Size -> 0x0001
	 */
	struct FK24StatusData
	{
	public:
		bool                                                       IsContaminated;                                          // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.K25StatusData
	 * Size -> 0x0008
	 */
	struct FK25StatusData
	{
	public:
		float                                                      ChainHuntProgressPercentage;                             // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsHoldingLamentConfiguration;                            // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsSolvingLamentConfiguration;                            // 0x0005(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OC4C[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.K26StatusData
	 * Size -> 0x0001
	 */
	struct FK26StatusData
	{
	public:
		bool                                                       IsCrowAttached;                                          // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.TheOnryoStatusData
	 * Size -> 0x000C
	 */
	struct FTheOnryoStatusData
	{
	public:
		bool                                                       IsCondemnedActive;                                       // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KT7S[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CondemnedProgress;                                       // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsFullCondemned;                                         // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsHoldingTape;                                           // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FYNJ[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.K28StatusData
	 * Size -> 0x0008
	 */
	struct FK28StatusData
	{
	public:
		float                                                      DayNightCycleProgressPercentage;                         // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsDaytime;                                               // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsTransitioningToNighttime;                              // 0x0005(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsNighttime;                                             // 0x0006(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsTransitioningToDaytime;                                // 0x0007(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.PlayerStatusViewData
	 * Size -> 0x0090
	 */
	struct FPlayerStatusViewData
	{
	public:
		class FString                                              playerName;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          PlayerPortraitIcon;                                      // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          PlayerPortraitIconOverride;                              // 0x0018(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPlayerStatus                                              PlayerStatusState;                                       // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O7L4[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TimerProgress;                                           // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsDeepWound;                                             // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsBroken;                                                // 0x0029(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsLocalPlayerAKiller;                                    // 0x002A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EObsessionUIState                                          ObsessionState;                                          // 0x002B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DrainStage;                                              // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDoctorStatusData                                   DoctorStatusData;                                        // 0x0030(0x0001) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H6YD[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FExecutionerStatusData                              ExecutionerStatusData;                                   // 0x0034(0x0004) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FGhostStatusData                                    GhostStatusData;                                         // 0x0038(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FNightmareStatusData                                NightmareStatusData;                                     // 0x0040(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FPigStatusData                                      PigStatusData;                                           // 0x004C(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FPlagueStatusData                                   PlagueStatusData;                                        // 0x0054(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FTwinsStatusData                                    TwinsStatusData;                                         // 0x005C(0x0001) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OWZY[0x3];                                   // 0x005D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTricksterStatusData                                TricksterStatusData;                                     // 0x0060(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FK24StatusData                                      K24StatusData;                                           // 0x006C(0x0001) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_288T[0x3];                                   // 0x006D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FK25StatusData                                      K25StatusData;                                           // 0x0070(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FK26StatusData                                      K26StatusData;                                           // 0x0078(0x0001) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WLGY[0x3];                                   // 0x0079(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTheOnryoStatusData                                 TheOnryoStatusData;                                      // 0x007C(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FK28StatusData                                      K28StatusData;                                           // 0x0088(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.PowerViewData
	 * Size -> 0x0030 (FullSize[0x0088] - InheritedSize[0x0058])
	 */
	struct FPowerViewData : public FBaseLoadoutPartViewData
	{
	public:
		struct FKey                                                InputKey;                                                // 0x0058(0x0020) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsRechargeable;                                          // 0x0078(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsActivated;                                             // 0x0079(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_04L5[0x2];                                   // 0x007A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Count;                                                   // 0x007C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ProgressValue;                                           // 0x0080(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShowKeyPrompt;                                           // 0x0084(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsCountDisplayForced;                                    // 0x0085(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6L4L[0x2];                                   // 0x0086(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.PowerBundleViewData
	 * Size -> 0x0158
	 */
	struct FPowerBundleViewData
	{
	public:
		struct FPowerViewData                                      Power;                                                   // 0x0000(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FAddonViewData                                      Addon1;                                                  // 0x0088(0x0068) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FAddonViewData                                      Addon2;                                                  // 0x00F0(0x0068) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.ScreenIndicatorViewData
	 * Size -> 0x0038
	 */
	struct FScreenIndicatorViewData
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsInFront;                                               // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4TTC[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           ScreenPosition;                                          // 0x0014(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           ViewportSize;                                            // 0x001C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Distance;                                                // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          IndicatorIcon;                                           // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHudScreenIndicatorType                                    IndicatorType;                                           // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HBVM[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.SkillCheckViewData
	 * Size -> 0x0058
	 */
	struct FSkillCheckViewData
	{
	public:
		struct FKey                                                InputKey;                                                // 0x0000(0x0020) Edit, BlueprintVisible, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FKey                                                InputKey2;                                               // 0x0020(0x0020) Edit, BlueprintVisible, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HitAreaStart;                                            // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HitAreaLength;                                           // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BonusAreaStart;                                          // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BonusAreaLength;                                         // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsHexed;                                                 // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsSpectating;                                            // 0x0051(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsReversed;                                              // 0x0052(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsMirrored;                                              // 0x0053(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsInsane;                                                // 0x0054(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0ILD[0x3];                                   // 0x0055(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.StartSequenceViewData
	 * Size -> 0x0028
	 */
	struct FStartSequenceViewData
	{
	public:
		class FString                                              ThemeName;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MapName;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EThemeColorId                                              ThemeColorId;                                            // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MI91[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.TemplateViewData
	 * Size -> 0x0001
	 */
	struct FTemplateViewData
	{
	public:
		unsigned char                                              UnknownData_DZZQ[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDUIViewInterfaces.TutorialObjectivesViewData
	 * Size -> 0x0170
	 */
	struct FTutorialObjectivesViewData
	{
	public:
		class FString                                              Description;                                             // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInteractionPromptViewData                          PrimaryInteractionPromptViewData;                        // 0x0010(0x00B0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FInteractionPromptViewData                          SecondaryInteractionPromptViewData;                      // 0x00C0(0x00B0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
