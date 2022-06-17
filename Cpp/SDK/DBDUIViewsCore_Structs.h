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
	 * Enum DBDUIViewsCore.EButtonWidgetVisibility
	 */
	enum class EButtonWidgetVisibility : uint8_t
	{
		Visible   = 0,
		Collapsed = 1,
		Hidden    = 2,
		MAX       = 3
	};

	/**
	 * Enum DBDUIViewsCore.EAnalogCursorStickiness
	 */
	enum class EAnalogCursorStickiness : uint8_t
	{
		None         = 0,
		ButtonSmall  = 1,
		ButtonMedium = 2,
		ButtonLarge  = 3,
		Bloodweb     = 4,
		Slow         = 5,
		MAX          = 6
	};

	/**
	 * Enum DBDUIViewsCore.EBackgroundProgressBarState
	 */
	enum class EBackgroundProgressBarState : uint8_t
	{
		Empty         = 0,
		Quarter       = 1,
		Half          = 2,
		ThreeQuarters = 3,
		Full          = 4,
		MAX           = 5
	};

	/**
	 * Enum DBDUIViewsCore.EInputSwitcherDisplayRule
	 */
	enum class EInputSwitcherDisplayRule : uint8_t
	{
		Undefined    = 0,
		OnlyGamepad  = 1,
		OnlyKeyboard = 2,
		Always       = 3,
		MAX          = 4
	};

	/**
	 * Enum DBDUIViewsCore.EPlayerStatusBloodSplatterType
	 */
	enum class EPlayerStatusBloodSplatterType : uint8_t
	{
		None   = 0,
		Top    = 1,
		Bottom = 2,
		MAX    = 3
	};

	/**
	 * Enum DBDUIViewsCore.EShowScrollDisplayPrompt
	 */
	enum class EShowScrollDisplayPrompt : uint8_t
	{
		DontShow        = 0,
		AlwaysShow      = 1,
		ShowOnMouseOver = 2,
		MAX             = 3
	};

	/**
	 * Enum DBDUIViewsCore.ETooltipType
	 */
	enum class ETooltipType : uint8_t
	{
		None                = 0,
		Character           = 1,
		CurrencyProgression = 2,
		Customization       = 3,
		MAX                 = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct DBDUIViewsCore.OnboardingTutorialButtonViewData
	 * Size -> 0x0078
	 */
	struct FOnboardingTutorialButtonViewData
	{
	public:
		EOnboardingStepStatus                                      StepStatus;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FUR8[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              stepId;                                                  // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              tutorialId;                                              // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                Title;                                                   // 0x0028(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0040(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class UTexture2D*                                          Icon;                                                    // 0x0058(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FRewardWrapperViewData>                      RewardsData;                                             // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		EOnboardingTutorialButtonStyle                             ButtonStyle;                                             // 0x0070(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z3JV[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDUIViewsCore.PendingTutorialData
	 * Size -> 0x0080
	 */
	struct FPendingTutorialData
	{
	public:
		int32_t                                                    buttonIndex;                                             // 0x0000(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GD1F[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FOnboardingTutorialButtonViewData                   buttonViewData;                                          // 0x0008(0x0078) Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDUIViewsCore.PendingStepData
	 * Size -> 0x0010
	 */
	struct FPendingStepData
	{
	public:
		TArray<struct FPendingTutorialData>                        tutorialData;                                            // 0x0000(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDUIViewsCore.PlayerStatusAssets
	 * Size -> 0x0018
	 */
	struct FPlayerStatusAssets
	{
	public:
		EPlayerStatusBloodSplatterType                             BloodSplatterType;                                       // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WH24[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          BloodTexture;                                            // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          IconTexture;                                             // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDUIViewsCore.TextBlockOverrideProperties
	 * Size -> 0x0048
	 */
	struct FTextBlockOverrideProperties
	{
	public:
		bool                                                       UseColor;                                                // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VI0I[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateColor                                         Color;                                                   // 0x0008(0x0028) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		bool                                                       UseOpacity;                                              // 0x0030(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UO6F[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Opacity;                                                 // 0x0034(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseSize;                                                 // 0x0038(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AN3L[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Size;                                                    // 0x003C(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JJ5B[0x8];                                   // 0x0040(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDUIViewsCore.TabWidgetData
	 * Size -> 0x0060
	 */
	struct FTabWidgetData
	{
	public:
		int32_t                                                    Key;                                                     // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IHJB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Title;                                                   // 0x0008(0x0018) Edit, BlueprintVisible, DisableEditOnTemplate, NativeAccessSpecifierPublic
		unsigned char                                              Icon[0x30];                                              // 0x0020(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       ForcesIconSize;                                          // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7NWF[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           IconSize;                                                // 0x0054(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QJ23[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDUIViewsCore.HtmlRichTextTag
	 * Size -> 0x0050
	 */
	struct FHtmlRichTextTag
	{
	public:
		unsigned char                                              UnknownData_NP05[0x50];                                  // 0x0000(0x0050) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDUIViewsCore.HtmlToRichTagConvertRow
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FHtmlToRichTagConvertRow : public FTableRowBase
	{
	public:
		class FString                                              HtmlTag;                                                 // 0x0008(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              RichTextTag;                                             // 0x0018(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDUIViewsCore.InputPromptDataRow
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FInputPromptDataRow : public FTableRowBase
	{
	public:
		class FText                                                InputLabel;                                              // 0x0008(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FKey                                                InputKey;                                                // 0x0020(0x0020) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          PromptTexture;                                           // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShowLabel;                                               // 0x0048(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9SR3[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDUIViewsCore.TooltipWidgetData
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FTooltipWidgetData : public FDBDTableRowBase
	{
	public:
		ETooltipType                                               TooltipType;                                             // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7EFW[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              WidgetClass;                                             // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
