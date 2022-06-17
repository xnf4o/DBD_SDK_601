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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function DBDUIViewInterfaces.AddonViewInterface.SetData
	 */
	struct UAddonViewInterface_SetData_Params
	{
	public:
		struct FAddonViewData                                      BaseLoadoutPartViewData;                                 // 0x0000(0x0068)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.AddonViewInterface.ClearData
	 */
	struct UAddonViewInterface_ClearData_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.CreditsViewInterface.SetText
	 */
	struct UCreditsViewInterface_SetText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.CreditsViewInterface.ScrollToName
	 */
	struct UCreditsViewInterface_ScrollToName_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Delay;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.CreditsViewInterface.ScrollToEnd
	 */
	struct UCreditsViewInterface_ScrollToEnd_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.EndGameCollapseBarViewInterface.StartEndGameScenario
	 */
	struct UEndGameCollapseBarViewInterface_StartEndGameScenario_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.EndGameCollapseBarViewInterface.SetEndGameScenarioProgressionValue
	 */
	struct UEndGameCollapseBarViewInterface_SetEndGameScenarioProgressionValue_Params
	{
	public:
		float                                                      amount;                                                  // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.EndGameCollapseBarViewInterface.SetEndGameScenarioProgressionMode
	 */
	struct UEndGameCollapseBarViewInterface_SetEndGameScenarioProgressionMode_Params
	{
	public:
		bool                                                       isSlowMode;                                              // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.EndGameCollapseBarViewInterface.InitEndGameScenario
	 */
	struct UEndGameCollapseBarViewInterface_InitEndGameScenario_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.EquippedItemViewInterface.SetFakeItem
	 */
	struct UEquippedItemViewInterface_SetFakeItem_Params
	{
	public:
		bool                                                       isHoldingFakeItem;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.EquippedItemViewInterface.SetData
	 */
	struct UEquippedItemViewInterface_SetData_Params
	{
	public:
		struct FItemBundleViewData                                 itemBundleData;                                          // 0x0000(0x0160)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.EquippedItemViewInterface.SetActiveState
	 */
	struct UEquippedItemViewInterface_SetActiveState_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.EquippedItemViewInterface.ClearData
	 */
	struct UEquippedItemViewInterface_ClearData_Params
	{
	public:
		bool                                                       fullClear;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.EquippedPowerViewInterface.SetData
	 */
	struct UEquippedPowerViewInterface_SetData_Params
	{
	public:
		struct FPowerBundleViewData                                powerBundleData;                                         // 0x0000(0x0158)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.EquippedPowerViewInterface.SetCarryingMode
	 */
	struct UEquippedPowerViewInterface_SetCarryingMode_Params
	{
	public:
		bool                                                       IsCarrying;                                              // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.EquippedPowerViewInterface.SetActiveState
	 */
	struct UEquippedPowerViewInterface_SetActiveState_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.EquippedPowerViewInterface.ClearData
	 */
	struct UEquippedPowerViewInterface_ClearData_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.ExampleViewInterface.SetExampleText
	 */
	struct UExampleViewInterface_SetExampleText_Params
	{
	public:
		class FString                                              Text;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ExampleViewInterface.SetExampleProgressRatio
	 */
	struct UExampleViewInterface_SetExampleProgressRatio_Params
	{
	public:
		float                                                      Ratio;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ExternalEffectsViewInterface.ShowExternalPerk
	 */
	struct UExternalEffectsViewInterface_ShowExternalPerk_Params
	{
	public:
		struct FPerkViewData                                       PerkViewData;                                            // 0x0000(0x0068)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ExternalEffectsViewInterface.ShowExternalAddon
	 */
	struct UExternalEffectsViewInterface_ShowExternalAddon_Params
	{
	public:
		struct FAddonViewData                                      AddonViewData;                                           // 0x0000(0x0068)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.GameManualViewInterface.SetCurrentManualMenuState
	 */
	struct UGameManualViewInterface_SetCurrentManualMenuState_Params
	{
	public:
		EGameManualMenuState                                       menuState;                                               // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.GameManualViewInterface.SetCategoryData
	 */
	struct UGameManualViewInterface_SetCategoryData_Params
	{
	public:
		struct FHelpCategoryData                                   categoryData;                                            // 0x0000(0x0050)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		TArray<struct FHelpTopicData>                              topicsData;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.GameManualViewInterface.GetCurrentManualMenuState
	 */
	struct UGameManualViewInterface_GetCurrentManualMenuState_Params
	{
	public:
		EGameManualMenuState                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.GenericPopupViewInterface.Leave
	 */
	struct UGenericPopupViewInterface_Leave_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.GenericPopupViewInterface.Enter
	 */
	struct UGenericPopupViewInterface_Enter_Params
	{
	public:
		class UGenericPopupViewData*                               Data;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.HookCountViewInterface.SetHookCountVisibility
	 */
	struct UHookCountViewInterface_SetHookCountVisibility_Params
	{
	public:
		bool                                                       visible;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.HookCountViewInterface.SetData
	 */
	struct UHookCountViewInterface_SetData_Params
	{
	public:
		int32_t                                                    currentHookCount;                                        // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    maxHookCount;                                            // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    initialMaxHookCount;                                     // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.HookCountViewInterface.InitWidget
	 */
	struct UHookCountViewInterface_InitWidget_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.HookCountViewInterface.ClearData
	 */
	struct UHookCountViewInterface_ClearData_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.HudAlertViewInterface.ShowStatusEffectAlert
	 */
	struct UHudAlertViewInterface_ShowStatusEffectAlert_Params
	{
	public:
		struct FStatusEffectAlertViewData                          Data;                                                    // 0x0000(0x01A8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.HudAlertViewInterface.ShowScoreAlert
	 */
	struct UHudAlertViewInterface_ShowScoreAlert_Params
	{
	public:
		struct FScoreAlertViewData                                 Data;                                                    // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.HudAlertViewInterface.SetScoreEventsVisibility
	 */
	struct UHudAlertViewInterface_SetScoreEventsVisibility_Params
	{
	public:
		bool                                                       visible;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.HudAlertViewInterface.FadeOut
	 */
	struct UHudAlertViewInterface_FadeOut_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.HudAlertViewInterface.FadeIn
	 */
	struct UHudAlertViewInterface_FadeIn_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.HudObjectivesViewInterface.SetHudObjectiveData
	 */
	struct UHudObjectivesViewInterface_SetHudObjectiveData_Params
	{
	public:
		struct FHudObjectivesViewData                              hudObjectiveViewData;                                    // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.HudObjectivesViewInterface.SetHookCountVisibility
	 */
	struct UHudObjectivesViewInterface_SetHookCountVisibility_Params
	{
	public:
		bool                                                       visible;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.HudObjectivesViewInterface.SetHookCountData
	 */
	struct UHudObjectivesViewInterface_SetHookCountData_Params
	{
	public:
		int32_t                                                    currentHookCount;                                        // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    maxHookCount;                                            // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    initialMaxHookCount;                                     // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.HudObjectivesViewInterface.InitWidget
	 */
	struct UHudObjectivesViewInterface_InitWidget_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.HudObjectivesViewInterface.ClearHookCountData
	 */
	struct UHudObjectivesViewInterface_ClearHookCountData_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.HudObjectivesViewInterface.ClearData
	 */
	struct UHudObjectivesViewInterface_ClearData_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.InteractionProgressViewInterface.UpdateInputProgress
	 */
	struct UInteractionProgressViewInterface_UpdateInputProgress_Params
	{
	public:
		float                                                      Progress;                                                // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      itemCharge;                                              // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.InteractionProgressViewInterface.SetInputProgressPrompt
	 */
	struct UInteractionProgressViewInterface_SetInputProgressPrompt_Params
	{
	public:
		struct FInteractionProgressViewData                        Data;                                                    // 0x0000(0x0068)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.InteractionProgressViewInterface.PlayHemorrhageAnimation
	 */
	struct UInteractionProgressViewInterface_PlayHemorrhageAnimation_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.InteractionProgressViewInterface.HideInputProgressPrompt
	 */
	struct UInteractionProgressViewInterface_HideInputProgressPrompt_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.InteractionPromptsContainerViewInterface.RemovePrompt
	 */
	struct UInteractionPromptsContainerViewInterface_RemovePrompt_Params
	{
	public:
		class FName                                                ID;                                                      // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.InteractionPromptsContainerViewInterface.RemoveAllPrompts
	 */
	struct UInteractionPromptsContainerViewInterface_RemoveAllPrompts_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.InteractionPromptsContainerViewInterface.AddPrompt
	 */
	struct UInteractionPromptsContainerViewInterface_AddPrompt_Params
	{
	public:
		struct FInteractionPromptViewData                          Data;                                                    // 0x0000(0x00B0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ItemBundleViewInterface.SetData
	 */
	struct UItemBundleViewInterface_SetData_Params
	{
	public:
		struct FItemBundleViewData                                 ItemBundleViewData;                                      // 0x0000(0x0160)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ItemBundleViewInterface.ClearData
	 */
	struct UItemBundleViewInterface_ClearData_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.ItemInteractionViewInterface.SetData
	 */
	struct UItemInteractionViewInterface_SetData_Params
	{
	public:
		struct FItemBundleViewData                                 itemBundleData;                                          // 0x0000(0x0160)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ItemInteractionViewInterface.ClearData
	 */
	struct UItemInteractionViewInterface_ClearData_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.ItemViewInterface.SetData
	 */
	struct UItemViewInterface_SetData_Params
	{
	public:
		struct FItemViewData                                       ItemViewData;                                            // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ItemViewInterface.ClearData
	 */
	struct UItemViewInterface_ClearData_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.LeaningArrowsViewInterface.SetData
	 */
	struct ULeaningArrowsViewInterface_SetData_Params
	{
	public:
		ELeanState                                                 leanState;                                               // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.MatchResultViewInterface.UpdateWidget
	 */
	struct UMatchResultViewInterface_UpdateWidget_Params
	{
	public:
		struct FMatchResultViewData                                Data;                                                    // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.MatchResultViewInterface.PlayAnimationSequence
	 */
	struct UMatchResultViewInterface_PlayAnimationSequence_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.OfferingInteractionViewInterface.SetData
	 */
	struct UOfferingInteractionViewInterface_SetData_Params
	{
	public:
		struct FOfferingViewData                                   OfferingData;                                            // 0x0000(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.OfferingInteractionViewInterface.ClearData
	 */
	struct UOfferingInteractionViewInterface_ClearData_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.OfferingViewInterface.SetData
	 */
	struct UOfferingViewInterface_SetData_Params
	{
	public:
		struct FOfferingViewData                                   OfferingViewData;                                        // 0x0000(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.OfferingViewInterface.ClearData
	 */
	struct UOfferingViewInterface_ClearData_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.OnboardingMenuViewInterface.SetUIEnabled
	 */
	struct UOnboardingMenuViewInterface_SetUIEnabled_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.OnboardingMenuViewInterface.SetOnboardingMenuState
	 */
	struct UOnboardingMenuViewInterface_SetOnboardingMenuState_Params
	{
	public:
		EOnboardingMenuState                                       State;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.OnboardingMenuViewInterface.SetFirstTimeUserExperience
	 */
	struct UOnboardingMenuViewInterface_SetFirstTimeUserExperience_Params
	{
	public:
		bool                                                       ftue;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.OnboardingMenuViewInterface.GetOnboardingTutorialInterface
	 */
	struct UOnboardingMenuViewInterface_GetOnboardingTutorialInterface_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.OnboardingMenuViewInterface.GetGameManualInterface
	 */
	struct UOnboardingMenuViewInterface_GetGameManualInterface_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.OnboardingTutorialViewInterface.UpdateProgress
	 */
	struct UOnboardingTutorialViewInterface_UpdateProgress_Params
	{
	public:
		TArray<struct FOnboardingStepViewData>                     before;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FOnboardingStepViewData>                     after;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FRewardWrapperViewData>                      Rewards;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.OnboardingTutorialViewInterface.StopLoadingSpinner
	 */
	struct UOnboardingTutorialViewInterface_StopLoadingSpinner_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.OnboardingTutorialViewInterface.SetUIEnabled
	 */
	struct UOnboardingTutorialViewInterface_SetUIEnabled_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.OnboardingTutorialViewInterface.SetTutorialProgressionFeedbacks
	 */
	struct UOnboardingTutorialViewInterface_SetTutorialProgressionFeedbacks_Params
	{
	public:
		class FString                                              completedStepId;                                         // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       isOnboardingEnabled;                                     // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.OnboardingTutorialViewInterface.SetProgress
	 */
	struct UOnboardingTutorialViewInterface_SetProgress_Params
	{
	public:
		TArray<struct FOnboardingStepViewData>                     Progress;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.OnboardingTutorialViewInterface.SetIsKillSwitch
	 */
	struct UOnboardingTutorialViewInterface_SetIsKillSwitch_Params
	{
	public:
		bool                                                       isKillSwitch;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.PerksContainerViewInterface.GetPerkInterface
	 */
	struct UPerksContainerViewInterface_GetPerkInterface_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.PerkViewInterface.UpdatePerkCooldown
	 */
	struct UPerkViewInterface_UpdatePerkCooldown_Params
	{
	public:
		float                                                      cooldownValue;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.PerkViewInterface.SetData
	 */
	struct UPerkViewInterface_SetData_Params
	{
	public:
		struct FPerkViewData                                       PerkViewData;                                            // 0x0000(0x0068)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.PerkViewInterface.ClearData
	 */
	struct UPerkViewInterface_ClearData_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.PingStatusViewInterface.SetData
	 */
	struct UPingStatusViewInterface_SetData_Params
	{
	public:
		EPingQuality                                               pingQuality;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.PlayerStatusesContainerViewInterface.GetPlayerStatusInterface
	 */
	struct UPlayerStatusesContainerViewInterface_GetPlayerStatusInterface_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.PlayerStatusViewInterface.TriggerAfflictionHit
	 */
	struct UPlayerStatusViewInterface_TriggerAfflictionHit_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.PlayerStatusViewInterface.SetTimerProgress
	 */
	struct UPlayerStatusViewInterface_SetTimerProgress_Params
	{
	public:
		float                                                      value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsDeepWound;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.PlayerStatusViewInterface.SetPlayerNameVisibility
	 */
	struct UPlayerStatusViewInterface_SetPlayerNameVisibility_Params
	{
	public:
		bool                                                       visible;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.PlayerStatusViewInterface.SetKiller
	 */
	struct UPlayerStatusViewInterface_SetKiller_Params
	{
	public:
		struct FGameplayTag                                        killerTag;                                               // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.PlayerStatusViewInterface.SetData
	 */
	struct UPlayerStatusViewInterface_SetData_Params
	{
	public:
		struct FPlayerStatusViewData                               Data;                                                    // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.PlayerStatusViewInterface.PlayTimerAnimation
	 */
	struct UPlayerStatusViewInterface_PlayTimerAnimation_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.PlayerStatusViewInterface.PlayHookEscapeFailedAnimation
	 */
	struct UPlayerStatusViewInterface_PlayHookEscapeFailedAnimation_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.PlayerStatusViewInterface.ClearData
	 */
	struct UPlayerStatusViewInterface_ClearData_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.PowerBundleViewInterface.SetData
	 */
	struct UPowerBundleViewInterface_SetData_Params
	{
	public:
		struct FPowerBundleViewData                                PowerBundleViewData;                                     // 0x0000(0x0158)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.PowerBundleViewInterface.ClearData
	 */
	struct UPowerBundleViewInterface_ClearData_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.PowerViewInterface.SetData
	 */
	struct UPowerViewInterface_SetData_Params
	{
	public:
		struct FPowerViewData                                      PowerViewData;                                           // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.PowerViewInterface.ClearData
	 */
	struct UPowerViewInterface_ClearData_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.ScreenIndicatorsContainerViewInterface.ShowDirectionIndicator
	 */
	struct UScreenIndicatorsContainerViewInterface_ShowDirectionIndicator_Params
	{
	public:
		struct FScreenIndicatorViewData                            Data;                                                    // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.ScreenIndicatorsContainerViewInterface.RemoveDirectionIndicator
	 */
	struct UScreenIndicatorsContainerViewInterface_RemoveDirectionIndicator_Params
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.SkillCheckViewInterface.UpdateProgress
	 */
	struct USkillCheckViewInterface_UpdateProgress_Params
	{
	public:
		float                                                      value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.SkillCheckViewInterface.UpdatePositionOffset
	 */
	struct USkillCheckViewInterface_UpdatePositionOffset_Params
	{
	public:
		int32_t                                                    X;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Y;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.SkillCheckViewInterface.ShowSkillCheckSuccess
	 */
	struct USkillCheckViewInterface_ShowSkillCheckSuccess_Params
	{
	public:
		bool                                                       IsBonus;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.SkillCheckViewInterface.ShowSkillCheckFail
	 */
	struct USkillCheckViewInterface_ShowSkillCheckFail_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.SkillCheckViewInterface.ShowSkillCheck
	 */
	struct USkillCheckViewInterface_ShowSkillCheck_Params
	{
	public:
		struct FSkillCheckViewData                                 skillCheckData;                                          // 0x0000(0x0058)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.SkillCheckViewInterface.HideSkillCheck
	 */
	struct USkillCheckViewInterface_HideSkillCheck_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.SkillCheckViewInterface.ApplyScaleFactor
	 */
	struct USkillCheckViewInterface_ApplyScaleFactor_Params
	{
	public:
		float                                                      Scale;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.SpectateBarViewInterface.SetSpectatedName
	 */
	struct USpectateBarViewInterface_SetSpectatedName_Params
	{
	public:
		class FString                                              playerName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.SpectateBarViewInterface.SetSpectateBarVisibility
	 */
	struct USpectateBarViewInterface_SetSpectateBarVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.SpectateBarViewInterface.SetArrowsVisibility
	 */
	struct USpectateBarViewInterface_SetArrowsVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.StartSequenceViewInterface.ShowStartSequence
	 */
	struct UStartSequenceViewInterface_ShowStartSequence_Params
	{
	public:
		struct FStartSequenceViewData                              Data;                                                    // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.StartSequenceViewInterface.HideStartSequence
	 */
	struct UStartSequenceViewInterface_HideStartSequence_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.StartSequenceViewInterface.GetIsStartSequenceVisible
	 */
	struct UStartSequenceViewInterface_GetIsStartSequenceVisible_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.StatusEffectViewInterface.ShowActiveStatusEffect
	 */
	struct UStatusEffectViewInterface_ShowActiveStatusEffect_Params
	{
	public:
		struct FStatusEffectViewData                               statusEffectData;                                        // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.StatusEffectViewInterface.RemoveExistingStatusEffect
	 */
	struct UStatusEffectViewInterface_RemoveExistingStatusEffect_Params
	{
	public:
		class FName                                                statusEffectId;                                          // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.SubtitlesViewInterface.ShowSubtitle
	 */
	struct USubtitlesViewInterface_ShowSubtitle_Params
	{
	public:
		class FText                                                subtitleText;                                            // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.SubtitlesViewInterface.SetSubtitlesSize
	 */
	struct USubtitlesViewInterface_SetSubtitlesSize_Params
	{
	public:
		ESubtitlesSize                                             Size;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.SubtitlesViewInterface.SetSubtitlesPosition
	 */
	struct USubtitlesViewInterface_SetSubtitlesPosition_Params
	{
	public:
		ESubtitlesPosition                                         position;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.SubtitlesViewInterface.SetSubtitlesBackgroundOpacity
	 */
	struct USubtitlesViewInterface_SetSubtitlesBackgroundOpacity_Params
	{
	public:
		ESubtitlesBackgroundOpacity                                Opacity;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.SubtitlesViewInterface.HideSubtitles
	 */
	struct USubtitlesViewInterface_HideSubtitles_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.TemplateViewInterface.TemplateExampleFunction
	 */
	struct UTemplateViewInterface_TemplateExampleFunction_Params
	{
	public:
		struct FTemplateViewData                                   templateData;                                            // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.TestBuildFlagViewInterface.UpdateWidget
	 */
	struct UTestBuildFlagViewInterface_UpdateWidget_Params
	{
	public:
		ETestBuildType                                             testBuildType;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.TutorialHighlightViewInterface.SetTutorialHighlight
	 */
	struct UTutorialHighlightViewInterface_SetTutorialHighlight_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHudComponent                                              componentId;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.TutorialMysteryNoteViewInterface.ShowMysteryNote
	 */
	struct UTutorialMysteryNoteViewInterface_ShowMysteryNote_Params
	{
	public:
		struct FNotifTutorialPopupViewData                         notifData;                                               // 0x0000(0x0080)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.TutorialMysteryNoteViewInterface.HideMysteryNote
	 */
	struct UTutorialMysteryNoteViewInterface_HideMysteryNote_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.TutorialObjectivesViewInterface.RemoveTutorialObjective
	 */
	struct UTutorialObjectivesViewInterface_RemoveTutorialObjective_Params
	{
	public:
		class FName                                                ID;                                                      // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.TutorialObjectivesViewInterface.RemoveAllTutorialObjectives
	 */
	struct UTutorialObjectivesViewInterface_RemoveAllTutorialObjectives_Params
	{	};

	/**
	 * Function DBDUIViewInterfaces.TutorialObjectivesViewInterface.CompleteTutorialObjective
	 */
	struct UTutorialObjectivesViewInterface_CompleteTutorialObjective_Params
	{
	public:
		class FName                                                ID;                                                      // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       removeAfterCompletion;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.TutorialObjectivesViewInterface.AddTutorialObjective
	 */
	struct UTutorialObjectivesViewInterface_AddTutorialObjective_Params
	{
	public:
		class FName                                                ID;                                                      // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FTutorialObjectivesViewData                         InteractionPromptViewData;                               // 0x0000(0x0170)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.TutorialPopupViewInterface.ShowNotifTutorialPopup
	 */
	struct UTutorialPopupViewInterface_ShowNotifTutorialPopup_Params
	{
	public:
		struct FNotifTutorialPopupViewData                         notifTutoData;                                           // 0x0000(0x0080)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIViewInterfaces.TutorialPopupViewInterface.HideTutorialPopup
	 */
	struct UTutorialPopupViewInterface_HideTutorialPopup_Params
	{
	public:
		bool                                                       playSoundEffect;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
