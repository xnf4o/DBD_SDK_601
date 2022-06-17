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
	 * Class DBDUIViewInterfaces.AddonViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UAddonViewInterface : public UInterface
	{
	public:
		void SetData(const struct FAddonViewData& BaseLoadoutPartViewData);
		void ClearData();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.CoreBaseViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UCoreBaseViewInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.CreditsViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UCreditsViewInterface : public UInterface
	{
	public:
		void SetText(const class FText& Text);
		void ScrollToName(const class FString& Name, float Delay);
		void ScrollToEnd();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.EndGameCollapseBarViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UEndGameCollapseBarViewInterface : public UInterface
	{
	public:
		void StartEndGameScenario();
		void SetEndGameScenarioProgressionValue(float amount);
		void SetEndGameScenarioProgressionMode(bool isSlowMode);
		void InitEndGameScenario();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.EquippedItemViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UEquippedItemViewInterface : public UInterface
	{
	public:
		void SetFakeItem(bool isHoldingFakeItem);
		void SetData(const struct FItemBundleViewData& itemBundleData);
		void SetActiveState(bool IsActive);
		void ClearData(bool fullClear);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.EquippedPowerViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UEquippedPowerViewInterface : public UInterface
	{
	public:
		void SetData(const struct FPowerBundleViewData& powerBundleData);
		void SetCarryingMode(bool IsCarrying);
		void SetActiveState(bool IsActive);
		void ClearData();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.ExampleViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UExampleViewInterface : public UInterface
	{
	public:
		void SetExampleText(const class FString& Text);
		void SetExampleProgressRatio(float Ratio);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.ExternalEffectsViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UExternalEffectsViewInterface : public UInterface
	{
	public:
		void ShowExternalPerk(const struct FPerkViewData& PerkViewData);
		void ShowExternalAddon(const struct FAddonViewData& AddonViewData);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.GameManualViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UGameManualViewInterface : public UInterface
	{
	public:
		void SetCurrentManualMenuState(EGameManualMenuState menuState);
		void SetCategoryData(const struct FHelpCategoryData& categoryData, TArray<struct FHelpTopicData> topicsData);
		EGameManualMenuState GetCurrentManualMenuState();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.GenericPopupViewData
	 * Size -> 0x01C0 (FullSize[0x01F0] - InheritedSize[0x0030])
	 */
	class UGenericPopupViewData : public UObject
	{
	public:
		EPopupPriority                                             Priority;                                                // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KKLF[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Title;                                                   // 0x0038(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                Message;                                                 // 0x0050(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8XD0[0x8];                                   // 0x0068(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPopupButtonViewData                                ProgressionData;                                         // 0x0070(0x0080) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FPopupButtonViewData                                RegressionData;                                          // 0x00F0(0x0080) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FPopupButtonViewData                                AlternativeData;                                         // 0x0170(0x0080) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.GenericPopupViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UGenericPopupViewInterface : public UInterface
	{
	public:
		void Leave();
		void Enter(class UGenericPopupViewData* Data);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.HookCountViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UHookCountViewInterface : public UInterface
	{
	public:
		void SetHookCountVisibility(bool visible);
		void SetData(int32_t currentHookCount, int32_t maxHookCount, int32_t initialMaxHookCount);
		void InitWidget();
		void ClearData();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.HudAlertViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UHudAlertViewInterface : public UInterface
	{
	public:
		void ShowStatusEffectAlert(const struct FStatusEffectAlertViewData& Data);
		void ShowScoreAlert(const struct FScoreAlertViewData& Data);
		void SetScoreEventsVisibility(bool visible);
		void FadeOut(float Delay);
		void FadeIn();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.HudObjectivesViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UHudObjectivesViewInterface : public UInterface
	{
	public:
		void SetHudObjectiveData(const struct FHudObjectivesViewData& hudObjectiveViewData);
		void SetHookCountVisibility(bool visible);
		void SetHookCountData(int32_t currentHookCount, int32_t maxHookCount, int32_t initialMaxHookCount);
		void InitWidget();
		void ClearHookCountData();
		void ClearData();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.InteractionProgressViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UInteractionProgressViewInterface : public UInterface
	{
	public:
		void UpdateInputProgress(float Progress, float itemCharge);
		void SetInputProgressPrompt(const struct FInteractionProgressViewData& Data);
		void PlayHemorrhageAnimation();
		void HideInputProgressPrompt();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.InteractionPromptsContainerViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UInteractionPromptsContainerViewInterface : public UInterface
	{
	public:
		void RemovePrompt(const class FName& ID);
		void RemoveAllPrompts();
		void AddPrompt(const struct FInteractionPromptViewData& Data);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.ItemBundleViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UItemBundleViewInterface : public UInterface
	{
	public:
		void SetData(const struct FItemBundleViewData& ItemBundleViewData);
		void ClearData();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.ItemInteractionViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UItemInteractionViewInterface : public UInterface
	{
	public:
		void SetData(const struct FItemBundleViewData& itemBundleData);
		void ClearData();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.ItemViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UItemViewInterface : public UInterface
	{
	public:
		void SetData(const struct FItemViewData& ItemViewData);
		void ClearData();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.LeaningArrowsViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class ULeaningArrowsViewInterface : public UInterface
	{
	public:
		void SetData(ELeanState leanState);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.MatchResultViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UMatchResultViewInterface : public UInterface
	{
	public:
		void UpdateWidget(const struct FMatchResultViewData& Data);
		void PlayAnimationSequence();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.MenuLoadoutPartViewData
	 * Size -> 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
	 */
	class UMenuLoadoutPartViewData : public UObject
	{
	public:
		class FName                                                ItemId;                                                  // 0x0030(0x000C) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_745K[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              IconTexture[0x30];                                       // 0x003C(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		EItemRarity                                                Rarity;                                                  // 0x0070(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N4PH[0x3];                                   // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    StackCount;                                              // 0x0074(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.MenuAddonViewData
	 * Size -> 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
	 */
	class UMenuAddonViewData : public UMenuLoadoutPartViewData
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.MenuItemViewData
	 * Size -> 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
	 */
	class UMenuItemViewData : public UMenuLoadoutPartViewData
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.MenuOfferingViewData
	 * Size -> 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
	 */
	class UMenuOfferingViewData : public UMenuLoadoutPartViewData
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.MenuPerkViewData
	 * Size -> 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
	 */
	class UMenuPerkViewData : public UMenuLoadoutPartViewData
	{
	public:
		int32_t                                                    Level;                                                   // 0x0078(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TTI9[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.MenuPowerViewData
	 * Size -> 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
	 */
	class UMenuPowerViewData : public UMenuLoadoutPartViewData
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.OfferingInteractionViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UOfferingInteractionViewInterface : public UInterface
	{
	public:
		void SetData(const struct FOfferingViewData& OfferingData);
		void ClearData();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.OfferingViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UOfferingViewInterface : public UInterface
	{
	public:
		void SetData(const struct FOfferingViewData& OfferingViewData);
		void ClearData();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.OnboardingMenuViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UOnboardingMenuViewInterface : public UInterface
	{
	public:
		void SetUIEnabled(bool Enabled);
		void SetOnboardingMenuState(EOnboardingMenuState State);
		void SetFirstTimeUserExperience(bool ftue);
		void GetOnboardingTutorialInterface();
		void GetGameManualInterface();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.OnboardingTutorialViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UOnboardingTutorialViewInterface : public UInterface
	{
	public:
		void UpdateProgress(TArray<struct FOnboardingStepViewData> before, TArray<struct FOnboardingStepViewData> after, TArray<struct FRewardWrapperViewData> Rewards);
		void StopLoadingSpinner();
		void SetUIEnabled(bool Enabled);
		void SetTutorialProgressionFeedbacks(const class FString& completedStepId, bool isOnboardingEnabled);
		void SetProgress(TArray<struct FOnboardingStepViewData> Progress);
		void SetIsKillSwitch(bool isKillSwitch);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.PerksContainerViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UPerksContainerViewInterface : public UInterface
	{
	public:
		void GetPerkInterface(int32_t Index);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.PerkViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UPerkViewInterface : public UInterface
	{
	public:
		void UpdatePerkCooldown(float cooldownValue);
		void SetData(const struct FPerkViewData& PerkViewData);
		void ClearData();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.PingStatusViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UPingStatusViewInterface : public UInterface
	{
	public:
		void SetData(EPingQuality pingQuality);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.PlayerStatusesContainerViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UPlayerStatusesContainerViewInterface : public UInterface
	{
	public:
		void GetPlayerStatusInterface(int32_t Index);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.PlayerStatusViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UPlayerStatusViewInterface : public UInterface
	{
	public:
		void TriggerAfflictionHit();
		void SetTimerProgress(float value, bool IsDeepWound);
		void SetPlayerNameVisibility(bool visible);
		void SetKiller(const struct FGameplayTag& killerTag);
		void SetData(const struct FPlayerStatusViewData& Data);
		void PlayTimerAnimation();
		void PlayHookEscapeFailedAnimation();
		void ClearData();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.PowerBundleViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UPowerBundleViewInterface : public UInterface
	{
	public:
		void SetData(const struct FPowerBundleViewData& PowerBundleViewData);
		void ClearData();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.PowerViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UPowerViewInterface : public UInterface
	{
	public:
		void SetData(const struct FPowerViewData& PowerViewData);
		void ClearData();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.ScreenIndicatorsContainerViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UScreenIndicatorsContainerViewInterface : public UInterface
	{
	public:
		void ShowDirectionIndicator(const struct FScreenIndicatorViewData& Data);
		void RemoveDirectionIndicator(const class FString& ID);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.SkillCheckViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class USkillCheckViewInterface : public UInterface
	{
	public:
		void UpdateProgress(float value);
		void UpdatePositionOffset(int32_t X, int32_t Y);
		void ShowSkillCheckSuccess(bool IsBonus);
		void ShowSkillCheckFail();
		void ShowSkillCheck(const struct FSkillCheckViewData& skillCheckData);
		void HideSkillCheck();
		void ApplyScaleFactor(float Scale);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.SpectateBarViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class USpectateBarViewInterface : public UInterface
	{
	public:
		void SetSpectatedName(const class FString& playerName);
		void SetSpectateBarVisibility(bool IsVisible);
		void SetArrowsVisibility(bool IsVisible);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.StartSequenceViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UStartSequenceViewInterface : public UInterface
	{
	public:
		void ShowStartSequence(const struct FStartSequenceViewData& Data);
		void HideStartSequence();
		bool GetIsStartSequenceVisible();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.StatusEffectViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UStatusEffectViewInterface : public UInterface
	{
	public:
		void ShowActiveStatusEffect(const struct FStatusEffectViewData& statusEffectData);
		void RemoveExistingStatusEffect(const class FName& statusEffectId);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.SubtitlesViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class USubtitlesViewInterface : public UInterface
	{
	public:
		void ShowSubtitle(const class FText& subtitleText);
		void SetSubtitlesSize(ESubtitlesSize Size);
		void SetSubtitlesPosition(ESubtitlesPosition position);
		void SetSubtitlesBackgroundOpacity(ESubtitlesBackgroundOpacity Opacity);
		void HideSubtitles();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.TemplateViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UTemplateViewInterface : public UInterface
	{
	public:
		void TemplateExampleFunction(const struct FTemplateViewData& templateData);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.TestBuildFlagViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UTestBuildFlagViewInterface : public UInterface
	{
	public:
		void UpdateWidget(ETestBuildType testBuildType);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.TutorialHighlightViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UTutorialHighlightViewInterface : public UInterface
	{
	public:
		void SetTutorialHighlight(bool Show, EHudComponent componentId);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.TutorialMysteryNoteViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UTutorialMysteryNoteViewInterface : public UInterface
	{
	public:
		void ShowMysteryNote(const struct FNotifTutorialPopupViewData& notifData);
		void HideMysteryNote();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.TutorialObjectivesViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UTutorialObjectivesViewInterface : public UInterface
	{
	public:
		void RemoveTutorialObjective(const class FName& ID);
		void RemoveAllTutorialObjectives();
		void CompleteTutorialObjective(const class FName& ID, bool removeAfterCompletion);
		void AddTutorialObjective(const class FName& ID, const struct FTutorialObjectivesViewData& InteractionPromptViewData);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.TutorialPopupViewInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UTutorialPopupViewInterface : public UInterface
	{
	public:
		void ShowNotifTutorialPopup(const struct FNotifTutorialPopupViewData& notifTutoData);
		void HideTutorialPopup(bool playSoundEffect);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewInterfaces.UIUtilities
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UUIUtilities : public UBlueprintFunctionLibrary
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
