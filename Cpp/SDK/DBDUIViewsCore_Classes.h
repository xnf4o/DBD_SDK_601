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
	 * Class DBDUIViewsCore.AspectRatioBox
	 * Size -> 0x0018 (FullSize[0x0160] - InheritedSize[0x0148])
	 */
	class UAspectRatioBox : public UContentWidget
	{
	public:
		float                                                      AspectRatio;                                             // 0x0148(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              IsAspectRatioOverridden : 1;                             // 0x014C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_72PV[0x13];                                  // 0x014D(0x0013) MISSED OFFSET (PADDING)

	public:
		void SetAspectRatio(float inAspectRatio);
		void ClearAspectRatio();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.AspectRatioBoxSlot
	 * Size -> 0x0028 (FullSize[0x0068] - InheritedSize[0x0040])
	 */
	class UAspectRatioBoxSlot : public UPanelSlot
	{
	public:
		struct FMargin                                             Padding;                                                 // 0x0040(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0050(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0051(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MYZD[0x16];                                  // 0x0052(0x0016) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment inVerticalAlignment);
		void SetPadding(const struct FMargin& InPadding);
		void SetHorizontalAlignment(EHorizontalAlignment inHorizontalAlignment);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreBaseUserWidget
	 * Size -> 0x0078 (FullSize[0x0310] - InheritedSize[0x0298])
	 */
	class UCoreBaseUserWidget : public UUserWidget
	{
	public:
		unsigned char                                              UnknownData_81EU[0x10];                                  // 0x0298(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UScaleBox*                                           ScaleContainer;                                          // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       IsInteractive;                                           // 0x02B0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EControlMode                                               _controlMode;                                            // 0x02B1(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EScaleType                                                 ScaleType;                                               // 0x02B2(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_S9NM[0x5];                                   // 0x02B3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDBDInputManager*                                    _inputManager;                                           // 0x02B8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TMap<class FName, class UWidgetAnimation*>                 _animationMap;                                           // 0x02C0(0x0050) Transient, NativeAccessSpecifierPrivate

	public:
		void UpdateScale(float Scale);
		void RegisterForInput();
		void OnControlModeChangedBP(EControlMode controlMode);
		void DeregisterFromInput();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CharacterTooltipWidget
	 * Size -> 0x0020 (FullSize[0x0330] - InheritedSize[0x0310])
	 */
	class UCharacterTooltipWidget : public UCoreBaseUserWidget
	{
	public:
		class UDBDTextBlock*                                       InstructionTB;                                           // 0x0310(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDTextBlock*                                       LevelTB;                                                 // 0x0318(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDTextBlock*                                       MarketTB;                                                // 0x0320(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDRichTextBlock*                                   DifficultyRTB;                                           // 0x0328(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SetTooltipData(const struct FCharacterTooltipViewData& characterViewData);
		void SetLevel(int32_t Level);
		void SetDifficulty(ECharacterDifficulty Difficulty);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreBaseLoadoutPartWidget
	 * Size -> 0x0018 (FullSize[0x02B0] - InheritedSize[0x0298])
	 */
	class UCoreBaseLoadoutPartWidget : public UUserWidget
	{
	public:
		class UDBDImage*                                           ImageRarity;                                             // 0x0298(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDImage*                                           ImageIcon;                                               // 0x02A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTextBlock*                                          TextStackCount;                                          // 0x02A8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SetLoadoutStackCount(int32_t StackCount);
		void SetLoadoutPartRarity(EItemRarity Rarity);
		void SetLoadoutPartIcon();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreAddonWidget
	 * Size -> 0x0008 (FullSize[0x02B8] - InheritedSize[0x02B0])
	 */
	class UCoreAddonWidget : public UCoreBaseLoadoutPartWidget
	{
	public:
		unsigned char                                              UnknownData_G2XE[0x8];                                   // 0x02B0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreBaseHudWidget
	 * Size -> 0x0018 (FullSize[0x0328] - InheritedSize[0x0310])
	 */
	class UCoreBaseHudWidget : public UCoreBaseUserWidget
	{
	public:
		float                                                      FocusAnimationDuration;                                  // 0x0310(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FocusAnimationDelay;                                     // 0x0314(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EEasingType                                                FocusAnimationEasing;                                    // 0x0318(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_AWEG[0x3];                                   // 0x0319(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FocusAnimationMaxOpacity;                                // 0x031C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FocusAnimationMinOpacity;                                // 0x0320(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6D8E[0x4];                                   // 0x0324(0x0004) MISSED OFFSET (PADDING)

	public:
		bool ShouldPlayFocusAnimation();
		void PlayFocusAnimation();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreButtonPromptWidget
	 * Size -> 0x0038 (FullSize[0x0348] - InheritedSize[0x0310])
	 */
	class UCoreButtonPromptWidget : public UCoreBaseUserWidget
	{
	public:
		class UAkAudioEvent*                                       CursorOverSfx;                                           // 0x0310(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAkAudioEvent*                                       CursorPressSfx;                                          // 0x0318(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAkAudioEvent*                                       CursorReleaseSfx;                                        // 0x0320(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreInputPromptTextWidget*                          _inputPromptText;                                        // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTextBlock*                                          _buttonTextField;                                        // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             _buttonPromptTriggeredDelegate;                          // 0x0338(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPrivate

	public:
		void SetText(const class FText& Text);
		void SetInputKey(const struct FKey& Key);
		void SetAction(EUIActionType ActionType);
		void EnablePrompts();
		void DisablePrompts();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreButtonSelector
	 * Size -> 0x0050 (FullSize[0x0360] - InheritedSize[0x0310])
	 */
	class UCoreButtonSelector : public UCoreBaseUserWidget
	{
	public:
		class FScriptMulticastDelegate                             OnSelectedDelegate;                                      // 0x0310(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSelectedAgainDelegate;                                 // 0x0320(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnUnselectedDelegate;                                    // 0x0330(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		TArray<class UCoreSelectableButtonWidget*>                 _buttons;                                                // 0x0340(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1BV3[0x10];                                  // 0x0350(0x0010) MISSED OFFSET (PADDING)

	public:
		void UnselectCurrent();
		void SetAllEnabled(bool Enabled);
		bool SelectPrevious();
		bool SelectNext();
		bool Select(class UCoreSelectableButtonWidget* buttonToSelect);
		void OnUnselectedDelegate__DelegateSignature(class UCoreSelectableButtonWidget* unselectedButton);
		void OnSelectedDelegate__DelegateSignature(class UCoreSelectableButtonWidget* selectedButton);
		void OnSelectedAgainDelegate__DelegateSignature(class UCoreSelectableButtonWidget* selectedButton);
		void OnButtonSelectedChanged(class UCoreSelectableButtonWidget* selectedButton, bool IsSelected);
		void OnButtonSelectedAgain(class UCoreSelectableButtonWidget* selectedButton);
		bool HasSelection();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreButtonWidget
	 * Size -> 0x00C0 (FullSize[0x03D0] - InheritedSize[0x0310])
	 */
	class UCoreButtonWidget : public UCoreBaseUserWidget
	{
	public:
		class FScriptMulticastDelegate                             OnHoveredDelegate;                                       // 0x0310(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnUnhoveredDelegate;                                     // 0x0320(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPressedDelegate;                                       // 0x0330(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnReleasedDelegate;                                      // 0x0340(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnClickedDelegate;                                       // 0x0350(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FString                                              HoveredSfxName;                                          // 0x0360(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkAudioEvent*                                       HoveredSfx;                                              // 0x0370(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PressedSfxName;                                          // 0x0378(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkAudioEvent*                                       PressedSfx;                                              // 0x0388(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ClickedSfxName;                                          // 0x0390(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkAudioEvent*                                       ClickedSfx;                                              // 0x03A0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAnalogCursorStickiness                                    AnalogCursorStickiness;                                  // 0x03A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NNOL[0x7];                                   // 0x03A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDBDButton*                                          HitzoneButton;                                           // 0x03B0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDTextBlock*                                       LabelTB;                                                 // 0x03B8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GXBD[0x10];                                  // 0x03C0(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetVisible(EButtonWidgetVisibility visible);
		void SetPressable(bool isPressable);
		void SetLabel(const class FText& label);
		void SetHoverable(bool isHoverable);
		void SetHoldable(bool isHoldable);
		void SetEnabled(bool IsEnabled);
		void SetClickable(bool isClickable);
		void SetChargeable(bool isChargeable);
		void OnUnhoveredDelegate__DelegateSignature(class UCoreButtonWidget* buttonTarget);
		void OnUnhovered();
		void OnReleasedDelegate__DelegateSignature(class UCoreButtonWidget* buttonTarget);
		void OnReleased();
		void OnPressedDelegate__DelegateSignature(class UCoreButtonWidget* buttonTarget);
		void OnPressed();
		void OnInternalUnhovered();
		void OnInternalReleased();
		void OnInternalPressed();
		void OnInternalHovered();
		void OnInternalClicked();
		void OnHoveredDelegate__DelegateSignature(class UCoreButtonWidget* buttonTarget);
		void OnHovered();
		void OnEnabledChanged(bool IsEnabled);
		void OnClickedDelegate__DelegateSignature(class UCoreButtonWidget* buttonTarget);
		void OnClicked();
		bool IsEnabled();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreRewardWidget
	 * Size -> 0x0010 (FullSize[0x03E0] - InheritedSize[0x03D0])
	 */
	class UCoreRewardWidget : public UCoreButtonWidget
	{
	public:
		class UDBDImage*                                           RewardIcon;                                              // 0x03D0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UOverlay*                                            LockStateContainer;                                      // 0x03D8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SetIsLocked(bool IsLocked);
		void ClearData();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreCharacterRewardWidget
	 * Size -> 0x0000 (FullSize[0x03E0] - InheritedSize[0x03E0])
	 */
	class UCoreCharacterRewardWidget : public UCoreRewardWidget
	{
	public:
		void SetData(const struct FCharacterRewardViewData& CharacterRewardViewData);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreCreditsWidget
	 * Size -> 0x0038 (FullSize[0x0348] - InheritedSize[0x0310])
	 */
	class UCoreCreditsWidget : public UCoreBaseUserWidget
	{
	public:
		unsigned char                                              UnknownData_QU0Z[0x8];                                   // 0x0310(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ScrollSpeed;                                             // 0x0318(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DY4Q[0x4];                                   // 0x031C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCoreInputSwitcherWidget*                            BackInputSwitcher;                                       // 0x0320(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDRichTextBlock*                                   CreditsTextBlock;                                        // 0x0328(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             _backActionDelegate;                                     // 0x0330(0x0010) ZeroConstructor, InstancedReference, BlueprintCallable, NativeAccessSpecifierPrivate
		class UUITweenInstance*                                    _tween;                                                  // 0x0340(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void ScrollText();
		void OnScrollEnd(class UUITweenInstance* tween);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreCurrencyProgressionRewardWidget
	 * Size -> 0x0000 (FullSize[0x03E0] - InheritedSize[0x03E0])
	 */
	class UCoreCurrencyProgressionRewardWidget : public UCoreRewardWidget
	{
	public:
		void SetData(const struct FCurrencyProgressionRewardViewData& CurrencyProgressionRewardViewData);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreCustomizationRewardWidget
	 * Size -> 0x0000 (FullSize[0x03E0] - InheritedSize[0x03E0])
	 */
	class UCoreCustomizationRewardWidget : public UCoreRewardWidget
	{
	public:
		void SetData(const struct FCustomizationRewardViewData& CustomizationRewardViewData);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreEndGameCollapseBarWidget
	 * Size -> 0x0078 (FullSize[0x03A0] - InheritedSize[0x0328])
	 */
	class UCoreEndGameCollapseBarWidget : public UCoreBaseHudWidget
	{
	public:
		unsigned char                                              UnknownData_K01S[0x8];                                   // 0x0328(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _progressBarInterpSpeed;                                 // 0x0330(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_HT7R[0x6C];                                  // 0x0334(0x006C) MISSED OFFSET (PADDING)

	public:
		void UpdateBarProgression(float Progress);
		void PlayToZeroAnimation();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreEndGameCollapseProgressWidget
	 * Size -> 0x0048 (FullSize[0x0358] - InheritedSize[0x0310])
	 */
	class UCoreEndGameCollapseProgressWidget : public UCoreBaseUserWidget
	{
	public:
		class UProgressBar*                                        ProgressBar;                                             // 0x0310(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCanvasPanel*                                        MarkerLeftCanvas;                                        // 0x0318(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCanvasPanel*                                        MarkerRightCanvas;                                       // 0x0320(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UHorizontalBoxSlot*                                  _markerLeftBox;                                          // 0x0328(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHorizontalBoxSlot*                                  _markerRightBox;                                         // 0x0330(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RR9N[0x20];                                  // 0x0338(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreEquippedItemWidget
	 * Size -> 0x0010 (FullSize[0x0338] - InheritedSize[0x0328])
	 */
	class UCoreEquippedItemWidget : public UCoreBaseHudWidget
	{
	public:
		unsigned char                                              UnknownData_DHE7[0x8];                                   // 0x0328(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAudioEvent*                                       ItemDisappearSfx;                                        // 0x0330(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreEquippedPowerWidget
	 * Size -> 0x0008 (FullSize[0x0330] - InheritedSize[0x0328])
	 */
	class UCoreEquippedPowerWidget : public UCoreBaseHudWidget
	{
	public:
		unsigned char                                              UnknownData_RRA7[0x8];                                   // 0x0328(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreExampleWidget
	 * Size -> 0x0098 (FullSize[0x03C0] - InheritedSize[0x0328])
	 */
	class UCoreExampleWidget : public UCoreBaseHudWidget
	{
	public:
		unsigned char                                              UnknownData_IE0N[0x8];                                   // 0x0328(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              EditAnywhere;                                            // 0x0330(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EditDefaultsOnly;                                        // 0x0340(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EditInstanceOnly;                                        // 0x0350(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EditNoBlueprint;                                         // 0x0360(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EditDefaultsOnlyBlueprintReadOnly;                       // 0x0370(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              VisibleAnywhere;                                         // 0x0380(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              VisibleDefaultsOnly;                                     // 0x0390(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              VisibleInstanceOnly;                                     // 0x03A0(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             ExampleButtonClickDelegate;                              // 0x03B0(0x0010) ZeroConstructor, InstancedReference, BlueprintCallable, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreExternalEffectsWidget
	 * Size -> 0x0278 (FullSize[0x05A0] - InheritedSize[0x0328])
	 */
	class UCoreExternalEffectsWidget : public UCoreBaseHudWidget
	{
	public:
		unsigned char                                              UnknownData_MD8X[0x8];                                   // 0x0328(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           GridSlotSize;                                            // 0x0330(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      AddonScaleRatio;                                         // 0x0338(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    SpacingBetweenRows;                                      // 0x033C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    SpacingPerks;                                            // 0x0340(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    SpacingAddons;                                           // 0x0344(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    SpacingBetweenPerksAndAddons;                            // 0x0348(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_AJQ4[0x4];                                   // 0x034C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              PerkWidgetClass;                                         // 0x0350(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              AddonWidgetClass;                                        // 0x0358(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGridPanel*                                          Container;                                               // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XE5E[0x8];                                   // 0x0368(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPerkViewData>                               _perkData;                                               // 0x0370(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TMap<class FName, class UCorePerkWidget*>                  _perkWidgets;                                            // 0x0380(0x0050) ExportObject, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<class UCorePerkWidget*>                             _perkPool;                                               // 0x03D0(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              _perkViewInterfaces[0x50];                               // 0x03E0(0x0050) UNKNOWN PROPERTY: MapProperty
		TArray<struct FAddonViewData>                              _addonData;                                              // 0x0430(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TMap<class FName, class UCoreAddonWidget*>                 _addonWidgets;                                           // 0x0440(0x0050) ExportObject, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<class UCoreAddonWidget*>                            _addonPool;                                              // 0x0490(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              _addonViewInterfaces[0x50];                              // 0x04A0(0x0050) UNKNOWN PROPERTY: MapProperty
		TMap<class FName, struct FTimerHandle>                     _timerHandleMap;                                         // 0x04F0(0x0050) Transient, NativeAccessSpecifierPrivate
		TMap<class FName, class USpacer*>                          _spacerWidgets;                                          // 0x0540(0x0050) ExportObject, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<class USpacer*>                                     _spacerPool;                                             // 0x0590(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		void HideExternalPerk(const class FName& perkId);
		void HideExternalAddon(const class FName& AddonID);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreGameManualCategoryButton
	 * Size -> 0x0030 (FullSize[0x0400] - InheritedSize[0x03D0])
	 */
	class UCoreGameManualCategoryButton : public UCoreButtonWidget
	{
	public:
		class UDBDTextBlock*                                       Title;                                                   // 0x03D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDBDTextBlock*                                       Description;                                             // 0x03D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDBDImage*                                           Icon;                                                    // 0x03E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDBDImage*                                           Background;                                              // 0x03E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          IconTexture;                                             // 0x03F0(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          BackgroundTexture;                                       // 0x03F8(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void SetText(const class FText& Title, const class FText& Description);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreGameManualPanelWidget
	 * Size -> 0x00D8 (FullSize[0x03E8] - InheritedSize[0x0310])
	 */
	class UCoreGameManualPanelWidget : public UCoreBaseUserWidget
	{
	public:
		unsigned char                                              UnknownData_R36H[0x8];                                   // 0x0310(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EGameManualMenuState                                       _currentSelectedManualMenu;                              // 0x0318(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EHelpType                                                  _currentGameManualTopic;                                 // 0x0319(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_3N6M[0x6];                                   // 0x031A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPanelWidget*                                        CategoryPanel;                                           // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreGameManualCategoryButton*                       GameCategoryButton;                                      // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreGameManualCategoryButton*                       SurvivorCategoryButton;                                  // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreGameManualCategoryButton*                       KillerCategoryButton;                                    // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPanelWidget*                                        TopicsPanel;                                             // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreTabContainerWidget*                             GameManualTopicsTabs;                                    // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDTextBlock*                                       GameManualContentTitle;                                  // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDTextBlock*                                       GameManualContentSubtitle;                               // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDRichTextBlock*                                   GameManualContentText;                                   // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             _onSetOnboardingMenuSubtitleDelegate;                    // 0x0368(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             _onResetOnboardingMenuSubtitleDelegate;                  // 0x0378(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_APTO[0x60];                                  // 0x0388(0x0060) MISSED OFFSET (PADDING)

	public:
		void ToggleGameManualMenuState();
		void ShowHelpTopics(EHelpType categoryType);
		void SetGameManualMenuState(EGameManualMenuState menuState);
		void SetCurrentOnbardingMenuSubtitle();
		void ResetScrolls(bool resetTopicsScroll);
		void OnTopicsTabSelected(class UCoreSelectableButtonWidget* selectedButton);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreGenericPopupWidget
	 * Size -> 0x0050 (FullSize[0x0360] - InheritedSize[0x0310])
	 */
	class UCoreGenericPopupWidget : public UCoreBaseUserWidget
	{
	public:
		unsigned char                                              UnknownData_HCJU[0x8];                                   // 0x0310(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDBDTextBlock*                                       TitleText;                                               // 0x0318(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDRichTextBlock*                                   MessageText;                                             // 0x0320(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreInputSwitcherWidget*                            ProgressionButton;                                       // 0x0328(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreInputSwitcherWidget*                            RegressionButton;                                        // 0x0330(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreInputSwitcherWidget*                            AlternativeButton;                                       // 0x0338(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             _popupActionDelegate;                                    // 0x0340(0x0010) ZeroConstructor, InstancedReference, BlueprintCallable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             _popupBackActionDelegate;                                // 0x0350(0x0010) ZeroConstructor, InstancedReference, BlueprintCallable, NativeAccessSpecifierPrivate

	public:
		void Show(class UGenericPopupViewData* Data);
		void OnRegressionAction();
		void OnProgressionAction();
		void OnAlternativeAction();
		void Hide();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreHookCountWidget
	 * Size -> 0x0008 (FullSize[0x0330] - InheritedSize[0x0328])
	 */
	class UCoreHookCountWidget : public UCoreBaseHudWidget
	{
	public:
		unsigned char                                              UnknownData_O1PO[0x8];                                   // 0x0328(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreHudAlertWidget
	 * Size -> 0x0090 (FullSize[0x03B8] - InheritedSize[0x0328])
	 */
	class UCoreHudAlertWidget : public UCoreBaseHudWidget
	{
	public:
		unsigned char                                              UnknownData_DFZ6[0x8];                                   // 0x0328(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxDisplayedItems;                                       // 0x0330(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SecondaryAlpha;                                          // 0x0334(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FullAlertDuration;                                       // 0x0338(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PendingAlertDuration;                                    // 0x033C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      AnimationDuration;                                       // 0x0340(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EEasingType                                                AnimationEasing;                                         // 0x0344(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_X0TW[0x3];                                   // 0x0345(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AnimationTranslationY;                                   // 0x0348(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_FBN0[0x4];                                   // 0x034C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              CoreHudScoreAlertItemClass;                              // 0x0350(0x0008) Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              CoreHudStatusEffectAlertItemClass;                       // 0x0358(0x0008) Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGridPanel*                                          AlertContainer;                                          // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UCoreBaseUserWidget*>                         _alerts;                                                 // 0x0368(0x0010) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<class UCoreBaseUserWidget*>                         _pendingAlerts;                                          // 0x0378(0x0010) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<class UCoreHudScoreAlertItem*>                      _scoreAlertPool;                                         // 0x0388(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<class UCoreHudStatusEffectAlertItem*>               _statusEffectAlertPool;                                  // 0x0398(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_HNXO[0x10];                                  // 0x03A8(0x0010) MISSED OFFSET (PADDING)

	public:
		void PopAlert();
		void OnPopAlertComplete(class UUITweenInstance* tween);
		void OnClearAlertsComplete(class UUITweenInstance* tween);
		float GetRemainingTime();
		TArray<class UCoreBaseUserWidget*> GetPendingAlerts();
		TArray<class UCoreBaseUserWidget*> GetAlerts();
		void ClearAlerts();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreHudObjectivesWidget
	 * Size -> 0x0018 (FullSize[0x0340] - InheritedSize[0x0328])
	 */
	class UCoreHudObjectivesWidget : public UCoreBaseHudWidget
	{
	public:
		unsigned char                                              UnknownData_D8FC[0x10];                                  // 0x0328(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDBDTextBlock*                                       SpecialSpacer;                                           // 0x0338(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreHudScoreAlertItem
	 * Size -> 0x0000 (FullSize[0x0310] - InheritedSize[0x0310])
	 */
	class UCoreHudScoreAlertItem : public UCoreBaseUserWidget
	{
	public:
		void SetData(const struct FScoreAlertViewData& Data);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreHudStatusEffectAlertItem
	 * Size -> 0x0000 (FullSize[0x0310] - InheritedSize[0x0310])
	 */
	class UCoreHudStatusEffectAlertItem : public UCoreBaseUserWidget
	{
	public:
		void SetData(const struct FStatusEffectAlertViewData& Data);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreInputPromptTextWidget
	 * Size -> 0x0048 (FullSize[0x0358] - InheritedSize[0x0310])
	 */
	class UCoreInputPromptTextWidget : public UCoreBaseUserWidget
	{
	public:
		class UCoreInputPromptWidget*                              InputPrompt;                                             // 0x0310(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTextBlock*                                          TextField;                                               // 0x0318(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKey                                                InputKey;                                                // 0x0320(0x0020) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FText                                                Text;                                                    // 0x0340(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPrivate

	public:
		void SetText(const class FText& Text);
		void SetInputKey(const struct FKey& InputKey);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreInputPromptWidget
	 * Size -> 0x0040 (FullSize[0x0350] - InheritedSize[0x0310])
	 */
	class UCoreInputPromptWidget : public UCoreBaseUserWidget
	{
	public:
		class FText                                                _unfoundInputKeyText;                                    // 0x0310(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		struct FKey                                                _inputKey;                                               // 0x0328(0x0020) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _isEnabled;                                              // 0x0348(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UA7X[0x7];                                   // 0x0349(0x0007) MISSED OFFSET (PADDING)

	public:
		void SetInputKey(const struct FKey& InputKey);
		void SetEnabled(bool IsEnabled);
		void PromptNotFound();
		void OnEnabledChanged(bool IsEnabled);
		bool IsEnabled();
		class FText GetInputShortDisplayName();
		struct FKey GetInputKey();
		void DisplayPrompt();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreInputSwitcherWidget
	 * Size -> 0x0038 (FullSize[0x0348] - InheritedSize[0x0310])
	 */
	class UCoreInputSwitcherWidget : public UCoreBaseUserWidget
	{
	public:
		EInputSwitcherDisplayRule                                  ButtonDisplayRule;                                       // 0x0310(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInputSwitcherDisplayRule                                  InputPromptDisplayRule;                                  // 0x0311(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETextJustify                                               Alignment;                                               // 0x0312(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4UHR[0x5];                                   // 0x0313(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCoreKeyListenerInputPromptWidget*                   InputPrompt;                                             // 0x0318(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreButtonWidget*                                   Button;                                                  // 0x0320(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _shouldRegisterForInputInConstruct;                      // 0x0328(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_FXOJ[0x7];                                   // 0x0329(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             _onInputSwitcherTriggeredDelegate;                       // 0x0330(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EGZ9[0x8];                                   // 0x0340(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetUIAction(EUIActionType ActionType);
		void SetLabel(const class FText& label);
		void SetKeyOverride(const struct FKey& keyOverride);
		void SetEnabled(bool IsEnabled);
		void OnInputPromptTriggered();
		void OnButtonClicked(class UCoreButtonWidget* Target);
		void OnAlignmentChanged(ETextJustify newAlignment);
		class UCoreKeyListenerInputPromptWidget* GetInputPrompt();
		class UCoreButtonWidget* GetButton();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreInteractionProgressWidget
	 * Size -> 0x0030 (FullSize[0x0358] - InheritedSize[0x0328])
	 */
	class UCoreInteractionProgressWidget : public UCoreBaseHudWidget
	{
	public:
		unsigned char                                              UnknownData_3E2R[0x10];                                  // 0x0328(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UCoreStatusEffectIcon*>                       Proficiencies;                                           // 0x0338(0x0010) BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             _hemorrhageAnimationIsCompleteDelegate;                  // 0x0348(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPrivate

	public:
		void SetProficiencies(TArray<struct FStatusEffectViewData> proficiencyDatas);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreInteractionPromptActionWidget
	 * Size -> 0x00B8 (FullSize[0x03C8] - InheritedSize[0x0310])
	 */
	class UCoreInteractionPromptActionWidget : public UCoreBaseUserWidget
	{
	public:
		class UCoreInputPromptWidget*                              InputPrompt;                                             // 0x0310(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreInputPromptWidget*                              InputPrompt2;                                            // 0x0318(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreInputPromptWidget*                              InputPrompt3;                                            // 0x0320(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreInputPromptWidget*                              InputPrompt4;                                            // 0x0328(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                IdleAnimationName;                                       // 0x0330(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8OPJ[0x4];                                   // 0x033C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FKey                                                InputKey;                                                // 0x0340(0x0020) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FKey                                                InputKey2;                                               // 0x0360(0x0020) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FKey                                                InputKey3;                                               // 0x0380(0x0020) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FKey                                                InputKey4;                                               // 0x03A0(0x0020) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6UB6[0x8];                                   // 0x03C0(0x0008) MISSED OFFSET (PADDING)

	public:
		void StopIdleAnimation();
		void SetInputKey4(const struct FKey& InputKey4);
		void SetInputKey3(const struct FKey& InputKey3);
		void SetInputKey2(const struct FKey& InputKey2);
		void SetInputKey(const struct FKey& InputKey);
		void PlayIdleAnimation();
		bool HasThirdPrompt();
		bool HasSecondPrompt();
		bool HasFourthPrompt();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreInteractionPromptsContainerWidget
	 * Size -> 0x00B0 (FullSize[0x03D8] - InheritedSize[0x0328])
	 */
	class UCoreInteractionPromptsContainerWidget : public UCoreBaseHudWidget
	{
	public:
		unsigned char                                              UnknownData_NMEL[0x10];                                  // 0x0328(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDBDWrapBox*                                         CenterContainerBox;                                      // 0x0338(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDWrapBox*                                         ContainerBox;                                            // 0x0340(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              InteractionPromptWidgetClass;                            // 0x0348(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    MaxDisplayedPrompts;                                     // 0x0350(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    MaxDisplayedCenterPrompts;                               // 0x0354(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FMargin                                             SlotMargin;                                              // 0x0358(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		TArray<class UCoreInteractionPromptWidget*>                _promptWidgetPool;                                       // 0x0368(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<class UCoreInteractionPromptWidget*>                _centerPromptWidgetPool;                                 // 0x0378(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TMap<class FName, class UCoreInteractionPromptWidget*>     _displayedPromptsMap;                                    // 0x0388(0x0050) ExportObject, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreInteractionPromptWidget
	 * Size -> 0x0020 (FullSize[0x02B8] - InheritedSize[0x0298])
	 */
	class UCoreInteractionPromptWidget : public UUserWidget
	{
	public:
		float                                                      LargeTextScale;                                          // 0x0298(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_BXG7[0x4];                                   // 0x029C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UScaleBox*                                           LargeTextScaleBox;                                       // 0x02A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDTextBlock*                                       ActionTB;                                                // 0x02A8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDTextManager*                                     _textManager;                                            // 0x02B0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void SetData(const struct FInteractionPromptViewData& Data);
		void OnLargeTextSettingsChanged(bool isLargeTextEnabled);
		void ClearData();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreItemBundleWidget
	 * Size -> 0x0008 (FullSize[0x0318] - InheritedSize[0x0310])
	 */
	class UCoreItemBundleWidget : public UCoreBaseUserWidget
	{
	public:
		unsigned char                                              UnknownData_Z2J3[0x8];                                   // 0x0310(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreItemInteractionWidget
	 * Size -> 0x0008 (FullSize[0x0330] - InheritedSize[0x0328])
	 */
	class UCoreItemInteractionWidget : public UCoreBaseHudWidget
	{
	public:
		unsigned char                                              UnknownData_AI6C[0x8];                                   // 0x0328(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreItemWidget
	 * Size -> 0x0008 (FullSize[0x02B8] - InheritedSize[0x02B0])
	 */
	class UCoreItemWidget : public UCoreBaseLoadoutPartWidget
	{
	public:
		unsigned char                                              UnknownData_PFFZ[0x8];                                   // 0x02B0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreKeyListenerButtontWidget
	 * Size -> 0x0030 (FullSize[0x0400] - InheritedSize[0x03D0])
	 */
	class UCoreKeyListenerButtontWidget : public UCoreButtonWidget
	{
	public:
		class UDBDTextBlock*                                       InputNameTB;                                             // 0x03D0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_FVBJ[0x28];                                  // 0x03D8(0x0028) MISSED OFFSET (PADDING)

	public:
		void SetUIAction(EUIActionType ActionType);
		void SetKeyOverride(const struct FKey& keyOverride);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreKeyListenerInputPromptWidget
	 * Size -> 0x0020 (FullSize[0x0330] - InheritedSize[0x0310])
	 */
	class UCoreKeyListenerInputPromptWidget : public UCoreBaseUserWidget
	{
	public:
		class UCoreInputPromptWidget*                              InputPrompt;                                             // 0x0310(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDTextBlock*                                       LabelTB;                                                 // 0x0318(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             _onKeyListenerInputPromptTriggeredDelegate;              // 0x0320(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPrivate

	public:
		void SetUIAction(EUIActionType ActionType);
		void SetLabel(const class FText& label);
		void SetKeyOverride(const struct FKey& keyOverride);
		void SetEnabled(bool IsEnabled);
		void OnEnabledChanged(bool IsEnabled);
		bool IsEnabled();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreLeaningArrowsWidget
	 * Size -> 0x0008 (FullSize[0x0330] - InheritedSize[0x0328])
	 */
	class UCoreLeaningArrowsWidget : public UCoreBaseHudWidget
	{
	public:
		unsigned char                                              UnknownData_FF02[0x8];                                   // 0x0328(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreMatchResultWidget
	 * Size -> 0x0008 (FullSize[0x0330] - InheritedSize[0x0328])
	 */
	class UCoreMatchResultWidget : public UCoreBaseHudWidget
	{
	public:
		unsigned char                                              UnknownData_0P6I[0x8];                                   // 0x0328(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreMenuLoadoutPartWidget
	 * Size -> 0x0030 (FullSize[0x0400] - InheritedSize[0x03D0])
	 */
	class UCoreMenuLoadoutPartWidget : public UCoreButtonWidget
	{
	public:
		class UDBDImage*                                           RarityIMG;                                               // 0x03D0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDImage*                                           IconIMG;                                                 // 0x03D8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UScaleBox*                                           LayoutScale;                                             // 0x03E0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreOnHoverBorderWidget*                            OnHoverBorder;                                           // 0x03E8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTextBlock*                                          StackCountTB;                                            // 0x03F0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTexture2D*                                          RarityTexture;                                           // 0x03F8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SetLoadoutPartScale(float Scale);
		void SetLoadoutPartData(class UMenuLoadoutPartViewData* Data);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreMenuAddonWidget
	 * Size -> 0x0000 (FullSize[0x0400] - InheritedSize[0x0400])
	 */
	class UCoreMenuAddonWidget : public UCoreMenuLoadoutPartWidget
	{
	public:
		void SetMenuAddonData(class UMenuAddonViewData* Data);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreMenuItemWidget
	 * Size -> 0x0000 (FullSize[0x0400] - InheritedSize[0x0400])
	 */
	class UCoreMenuItemWidget : public UCoreMenuLoadoutPartWidget
	{
	public:
		void SetMenuItemData(class UMenuItemViewData* Data);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreMenuOfferingWidget
	 * Size -> 0x0000 (FullSize[0x0400] - InheritedSize[0x0400])
	 */
	class UCoreMenuOfferingWidget : public UCoreMenuLoadoutPartWidget
	{
	public:
		void SetMenuOfferingData(class UMenuOfferingViewData* Data);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreMenuPerkWidget
	 * Size -> 0x0000 (FullSize[0x0400] - InheritedSize[0x0400])
	 */
	class UCoreMenuPerkWidget : public UCoreMenuLoadoutPartWidget
	{
	public:
		void SetMenuPerkLevel(int32_t Level);
		void SetMenuPerkData(class UMenuPerkViewData* Data);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreMenuPowerWidget
	 * Size -> 0x0000 (FullSize[0x0400] - InheritedSize[0x0400])
	 */
	class UCoreMenuPowerWidget : public UCoreMenuLoadoutPartWidget
	{
	public:
		void SetMenuPowerData(class UMenuPowerViewData* Data);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreOfferingInteractionWidget
	 * Size -> 0x0008 (FullSize[0x0330] - InheritedSize[0x0328])
	 */
	class UCoreOfferingInteractionWidget : public UCoreBaseHudWidget
	{
	public:
		unsigned char                                              UnknownData_ZN3Z[0x8];                                   // 0x0328(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreOfferingWidget
	 * Size -> 0x0008 (FullSize[0x02B8] - InheritedSize[0x02B0])
	 */
	class UCoreOfferingWidget : public UCoreBaseLoadoutPartWidget
	{
	public:
		unsigned char                                              UnknownData_B1DY[0x8];                                   // 0x02B0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreOnboardingMenuTitleWidget
	 * Size -> 0x0000 (FullSize[0x0310] - InheritedSize[0x0310])
	 */
	class UCoreOnboardingMenuTitleWidget : public UCoreBaseUserWidget
	{
	public:
		void SetOnboardingMenuTitle(const class FText& menuTitle);
		void SetOnboardingMenuSubtitle(const class FText& menuTitle);
		void SetOnboardingMenuDoubleTitle(const class FText& menuTitle, const class FText& menuSubTitle);
		void ResetOnboardingMenuSubtitle();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreOnboardingMenuWidget
	 * Size -> 0x0058 (FullSize[0x0368] - InheritedSize[0x0310])
	 */
	class UCoreOnboardingMenuWidget : public UCoreBaseUserWidget
	{
	public:
		unsigned char                                              UnknownData_QHH2[0x8];                                   // 0x0310(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCoreTabContainerWidget*                             OnboardingMenuTabs;                                      // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCoreOnboardingMenuTitleWidget*                      menuTitle;                                               // 0x0320(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreInputSwitcherWidget*                            BackInputSwitcher;                                       // 0x0328(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             BackActionDelegate;                                      // 0x0330(0x0010) ZeroConstructor, InstancedReference, BlueprintCallable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             MenuTabSelectedDelegate;                                 // 0x0340(0x0010) ZeroConstructor, InstancedReference, BlueprintCallable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             MenuTabSelectedAgainDelegate;                            // 0x0350(0x0010) ZeroConstructor, InstancedReference, BlueprintCallable, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9AXL[0x8];                                   // 0x0360(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetTitleText(bool IsInTutorial);
		void SetBackButton(bool isFTUE);
		void OnMenuTabSelectedAgain(class UCoreSelectableButtonWidget* selectedButton);
		void OnMenuTabSelected(class UCoreSelectableButtonWidget* selectedButton);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreOnboardingTutorialButtonWidget
	 * Size -> 0x00E8 (FullSize[0x04B8] - InheritedSize[0x03D0])
	 */
	class UCoreOnboardingTutorialButtonWidget : public UCoreButtonWidget
	{
	public:
		class FScriptMulticastDelegate                             OnSetDataAnimationCompleteDelegate;                      // 0x03D0(0x0010) ZeroConstructor, InstancedReference, BlueprintCallable, NativeAccessSpecifierPublic
		class FString                                              UnavailablePressedSfxName;                               // 0x03E0(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkAudioEvent*                                       UnavailablePressedSfx;                                   // 0x03F0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDBDTextBlock*                                       TitleText;                                               // 0x03F8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDTextBlock*                                       DescriptionText;                                         // 0x0400(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDTextBlock*                                       RewardsText;                                             // 0x0408(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDImage*                                           RoleIcon;                                                // 0x0410(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UWidgetSwitcher*                                     StateSwitcher;                                           // 0x0418(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDImage*                                           LockedImage;                                             // 0x0420(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDImage*                                           CompletedImage;                                          // 0x0428(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UCoreRewardWrapperWidget*>                    RewardWrappers;                                          // 0x0430(0x0010) BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		struct FOnboardingTutorialButtonViewData                   viewData;                                                // 0x0440(0x0078) BlueprintVisible, Protected, NativeAccessSpecifierProtected

	public:
		void SetVisual();
		void SetUIEnabled(bool Enabled);
		void SetIsKillSwitch(bool isKillSwitch);
		void SetData(const struct FOnboardingTutorialButtonViewData& viewData, bool isRefreshingWithAnimation);
		void OnRewardReleased(class UCoreButtonWidget* buttonTarget);
		void OnRewardPressed(class UCoreButtonWidget* buttonTarget);
		void OnRewardClicked(class UCoreButtonWidget* buttonTarget);
		bool IsInUnavailableStep();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreOnboardingTutorialPanelWidget
	 * Size -> 0x0038 (FullSize[0x0348] - InheritedSize[0x0310])
	 */
	class UCoreOnboardingTutorialPanelWidget : public UCoreBaseUserWidget
	{
	public:
		unsigned char                                              UnknownData_8NGF[0x8];                                   // 0x0310(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UCoreOnboardingTutorialButtonWidget*>         TutorialButtons;                                         // 0x0318(0x0010) Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             TutorialSelectedDelegate;                                // 0x0328(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, BlueprintCallable, NativeAccessSpecifierProtected
		TArray<struct FPendingStepData>                            _pendingData;                                            // 0x0338(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate

	public:
		void SetTutorialSeparators(const class FString& completedStepId);
		void SetTutorialDescription(const class FText& Description, bool isWarning);
		void NextPendingButtonUpdated();
		void CheckNextPendingButtonUpdate();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreOnHoverBorderWidget
	 * Size -> 0x0000 (FullSize[0x0310] - InheritedSize[0x0310])
	 */
	class UCoreOnHoverBorderWidget : public UCoreBaseUserWidget
	{
	public:
		void UpdateColors(const struct FLinearColor& progressBarColor, const struct FLinearColor& BackgroundColor);
		void UnbindFromButton();
		void PlayPressedAnimation(bool playForward);
		void PlayHoveredAnimation(bool playForward);
		void BindToButton(class UCoreButtonWidget* buttonToBindOn);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CorePerksContainerWidget
	 * Size -> 0x0028 (FullSize[0x0350] - InheritedSize[0x0328])
	 */
	class UCorePerksContainerWidget : public UCoreBaseHudWidget
	{
	public:
		unsigned char                                              UnknownData_T45N[0x8];                                   // 0x0328(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UCorePerkWidget*>                             PerkWidgets;                                             // 0x0330(0x0010) BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		unsigned char                                              _perkViewInterfaces[0x10];                               // 0x0340(0x0010) UNKNOWN PROPERTY: ArrayProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CorePerkWidget
	 * Size -> 0x0008 (FullSize[0x02B8] - InheritedSize[0x02B0])
	 */
	class UCorePerkWidget : public UCoreBaseLoadoutPartWidget
	{
	public:
		unsigned char                                              UnknownData_ELMK[0x8];                                   // 0x02B0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CorePingStatusWidget
	 * Size -> 0x0008 (FullSize[0x0330] - InheritedSize[0x0328])
	 */
	class UCorePingStatusWidget : public UCoreBaseHudWidget
	{
	public:
		unsigned char                                              UnknownData_HFA9[0x8];                                   // 0x0328(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CorePlayerStatusesContainerWidget
	 * Size -> 0x0030 (FullSize[0x0358] - InheritedSize[0x0328])
	 */
	class UCorePlayerStatusesContainerWidget : public UCoreBaseHudWidget
	{
	public:
		unsigned char                                              UnknownData_JYPJ[0x10];                                  // 0x0328(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UCorePlayerStatusWidget*>                     PlayerStatusWidgets;                                     // 0x0338(0x0010) BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		unsigned char                                              _playerStatusViewInterfaces[0x10];                       // 0x0348(0x0010) UNKNOWN PROPERTY: ArrayProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CorePlayerStatusKillerEffectWidget
	 * Size -> 0x0000 (FullSize[0x0328] - InheritedSize[0x0328])
	 */
	class UCorePlayerStatusKillerEffectWidget : public UCoreBaseHudWidget
	{
	public:
		void SetKillerData(const struct FPlayerStatusViewData& Data);
		void ClearVisual();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CorePlayerStatusKillerEffectK07Widget
	 * Size -> 0x0000 (FullSize[0x0328] - InheritedSize[0x0328])
	 */
	class UCorePlayerStatusKillerEffectK07Widget : public UCorePlayerStatusKillerEffectWidget
	{
	public:
		void AfflictionHit();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CorePlayerStatusWidget
	 * Size -> 0x01A8 (FullSize[0x04D0] - InheritedSize[0x0328])
	 */
	class UCorePlayerStatusWidget : public UCoreBaseHudWidget
	{
	public:
		unsigned char                                              UnknownData_VJN3[0x8];                                   // 0x0328(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EPlayerStatus, struct FPlayerStatusAssets>            PlayerStatusAssets;                                      // 0x0330(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		class UAkAudioEvent*                                       ObsessionSfx;                                            // 0x0380(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDTextBlock*                                       PlayerNameTextfield;                                     // 0x0388(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UOverlay*                                            KillerStatusContainer;                                   // 0x0390(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TMap<struct FGameplayTag, class UClass*>                   KillerStatusEffectWidgetClasses;                         // 0x0398(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		struct FPlayerStatusViewData                               _cachedViewData;                                         // 0x03E8(0x0090) BlueprintVisible, Transient, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_VQN9[0x50];                                  // 0x0478(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCorePlayerStatusKillerEffectWidget*                 _killerStatusEffectWidget;                               // 0x04C8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		bool ShouldPlaySleepAnimation(ESleepingUIState newSleepState);
		bool HasTimerProgressChanged(float newTimerProgress);
		bool HasPlayerStatusDataChanged(const struct FPlayerStatusViewData& newViewData);
		bool HasPlayerStateChanged(EPlayerStatus newPlayerState);
		bool HasObsessionStateChanged(EObsessionUIState newObsessionState);
		bool HasKillerStatusDataChanged(const struct FPlayerStatusViewData& newViewData);
		EPlayerStateChangeType GetPlayerStateChangeType(const struct FPlayerStatusViewData& newViewData);
		class UCorePlayerStatusKillerEffectWidget* GetKillerStatusEffectWidget();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CorePowerBundleWidget
	 * Size -> 0x0008 (FullSize[0x0318] - InheritedSize[0x0310])
	 */
	class UCorePowerBundleWidget : public UCoreBaseUserWidget
	{
	public:
		unsigned char                                              UnknownData_WMSQ[0x8];                                   // 0x0310(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CorePowerWidget
	 * Size -> 0x0008 (FullSize[0x02B8] - InheritedSize[0x02B0])
	 */
	class UCorePowerWidget : public UCoreBaseLoadoutPartWidget
	{
	public:
		unsigned char                                              UnknownData_FSU6[0x8];                                   // 0x02B0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreRewardWrapperWidget
	 * Size -> 0x0028 (FullSize[0x02C0] - InheritedSize[0x0298])
	 */
	class UCoreRewardWrapperWidget : public UUserWidget
	{
	public:
		class UClass*                                              CharacterRewardWidget;                                   // 0x0298(0x0008) Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              CurrencyProgressionRewardWidget;                         // 0x02A0(0x0008) Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              CustomizationRewardWidget;                               // 0x02A8(0x0008) Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPanelWidget*                                        RewardContainer;                                         // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreRewardWidget*                                   _rewardWidget;                                           // 0x02B8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void SetIsLocked(bool IsLocked);
		void SetData(const struct FRewardWrapperViewData& viewData);
		class UCoreRewardWidget* GetRewardWidget();
		void ClearData();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreScreenIndicatorsContainerWidget
	 * Size -> 0x0080 (FullSize[0x03A8] - InheritedSize[0x0328])
	 */
	class UCoreScreenIndicatorsContainerWidget : public UCoreBaseHudWidget
	{
	public:
		unsigned char                                              UnknownData_AGJ6[0x8];                                   // 0x0328(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InactiveThreshold;                                       // 0x0330(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RP7M[0x4];                                   // 0x0334(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCanvasPanel*                                        Container;                                               // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              ScreenIndicatorClass;                                    // 0x0340(0x0008) Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TMap<class FString, class UCoreScreenIndicatorWidget*>     _screenIndicatorsMap;                                    // 0x0348(0x0050) ExportObject, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<class UCoreScreenIndicatorWidget*>                  _screenIndicatorsPool;                                   // 0x0398(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		TMap<class FString, class UCoreScreenIndicatorWidget*> GetScreenIndicatorsMap();
		class FString FindScreenIndicatorKey(class UCoreScreenIndicatorWidget* value);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreScreenIndicatorWidget
	 * Size -> 0x0020 (FullSize[0x0330] - InheritedSize[0x0310])
	 */
	class UCoreScreenIndicatorWidget : public UCoreBaseUserWidget
	{
	public:
		float                                                      InactiveTime;                                            // 0x0310(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           IndicatorPadding;                                        // 0x0314(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           DistanceClamping;                                        // 0x031C(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinDistanceRatio;                                        // 0x0324(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinDistanceAlpha;                                        // 0x0328(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LP5U[0x4];                                   // 0x032C(0x0004) MISSED OFFSET (PADDING)

	public:
		void SetData(const struct FScreenIndicatorViewData& Data);
		void ClearData();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreSelectableButtonWidget
	 * Size -> 0x0028 (FullSize[0x03F8] - InheritedSize[0x03D0])
	 */
	class UCoreSelectableButtonWidget : public UCoreButtonWidget
	{
	public:
		class FScriptMulticastDelegate                             OnSelectedChangedDelegate;                               // 0x03D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSelectedAgainDelegate;                                 // 0x03E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_94SV[0x8];                                   // 0x03F0(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetSelected(bool IsSelected);
		void OnSelectedChangedDelegate__DelegateSignature(class UCoreSelectableButtonWidget* buttonTarget, bool IsSelected);
		void OnSelectedChanged(bool IsSelected);
		void OnSelectedAgainDelegate__DelegateSignature(class UCoreSelectableButtonWidget* buttonTarget);
		bool IsSelected();
		bool IsSelectable();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreSkillCheckWidget
	 * Size -> 0x0008 (FullSize[0x0330] - InheritedSize[0x0328])
	 */
	class UCoreSkillCheckWidget : public UCoreBaseHudWidget
	{
	public:
		unsigned char                                              UnknownData_YP6J[0x8];                                   // 0x0328(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreSpectateBarWidget
	 * Size -> 0x0050 (FullSize[0x0378] - InheritedSize[0x0328])
	 */
	class UCoreSpectateBarWidget : public UCoreBaseHudWidget
	{
	public:
		unsigned char                                              UnknownData_J9RQ[0x8];                                   // 0x0328(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCoreInputSwitcherWidget*                            LeaveInputSwitcher;                                      // 0x0330(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreInputSwitcherWidget*                            LeftArrowInputSwitcher;                                  // 0x0338(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreInputSwitcherWidget*                            RightArrowInputSwitcher;                                 // 0x0340(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             _leaveTriggeredDelegate;                                 // 0x0348(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             _leftArrowTriggeredDelegate;                             // 0x0358(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             _rightArrowTriggeredDelegate;                            // 0x0368(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPrivate

	public:
		void OnRightArrowTriggered();
		void OnLeftArrowTriggered();
		void OnLeaveTriggered();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreStartSequenceWidget
	 * Size -> 0x00A0 (FullSize[0x03C8] - InheritedSize[0x0328])
	 */
	class UCoreStartSequenceWidget : public UCoreBaseHudWidget
	{
	public:
		unsigned char                                              UnknownData_UDTX[0x8];                                   // 0x0328(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FadeInDuration;                                          // 0x0330(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FadeOutDuration;                                         // 0x0334(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EEasingType                                                FadeInEasing;                                            // 0x0338(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EEasingType                                                FadeOutEasing;                                           // 0x0339(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_EK2X[0x6];                                   // 0x033A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EThemeColorId, struct FLinearColor>                   BorderColors;                                            // 0x0340(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		struct FLinearColor                                        DefaultColor;                                            // 0x0390(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDTextBlock*                                       ThemeNameTextfield;                                      // 0x03A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UImage*                                              SeparatorImage;                                          // 0x03A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDTextBlock*                                       MapNameTextfield;                                        // 0x03B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             StartSequenceFadeOutDelegate;                            // 0x03B8(0x0010) ZeroConstructor, InstancedReference, BlueprintCallable, NativeAccessSpecifierPrivate

	public:
		void OnHideStartSequenceComplete(class UUITweenInstance* tween);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreStatusEffectIcon
	 * Size -> 0x0058 (FullSize[0x0368] - InheritedSize[0x0310])
	 */
	class UCoreStatusEffectIcon : public UCoreBaseUserWidget
	{
	public:
		unsigned char                                              UnknownData_7J3F[0x58];                                  // 0x0310(0x0058) MISSED OFFSET (PADDING)

	public:
		void UpdateWidget();
		void UpdatePercentageFill(float Percentage);
		void SetStatusEffectData(const struct FStatusEffectViewData& Data);
		void SetInactiveTicks(int32_t inactiveTicks);
		struct FStatusEffectViewData GetStatusEffectData();
		int32_t GetInactiveTicks();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreStatusEffectWidget
	 * Size -> 0x0098 (FullSize[0x03C0] - InheritedSize[0x0328])
	 */
	class UCoreStatusEffectWidget : public UCoreBaseHudWidget
	{
	public:
		unsigned char                                              UnknownData_QTIV[0x8];                                   // 0x0328(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    InactiveThreshold;                                       // 0x0330(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    PrepooledItemAmount;                                     // 0x0334(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    ItemsByColumn;                                           // 0x0338(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      EvenColumnOffset;                                        // 0x033C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              CoreStatusEffectIconClass;                               // 0x0340(0x0008) Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGridPanel*                                          StatusEffectContainer;                                   // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UCoreStatusEffectIcon*>                       _statusEffectPool;                                       // 0x0350(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<class FName>                                        _statusEffectOrder;                                      // 0x0360(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TMap<class FName, class UCoreStatusEffectIcon*>            _statusEffectMap;                                        // 0x0370(0x0050) BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		TMap<class FName, class UCoreStatusEffectIcon*> GetStatusEffectMap();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreSubtitlesWidget
	 * Size -> 0x0010 (FullSize[0x0320] - InheritedSize[0x0310])
	 */
	class UCoreSubtitlesWidget : public UCoreBaseUserWidget
	{
	public:
		unsigned char                                              UnknownData_XWO1[0x8];                                   // 0x0310(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDBDTextBlock*                                       SubtitlesTB;                                             // 0x0318(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreTabContainerWidget
	 * Size -> 0x0030 (FullSize[0x0390] - InheritedSize[0x0360])
	 */
	class UCoreTabContainerWidget : public UCoreButtonSelector
	{
	public:
		bool                                                       AlignHorizontally;                                       // 0x0360(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_O37F[0x3];                                   // 0x0361(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMargin                                             TabPadding;                                              // 0x0364(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, NoClear, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_L0Z7[0x4];                                   // 0x0374(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              CoreTabClass;                                            // 0x0378(0x0008) Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGridPanel*                                          TabContainer;                                            // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       UseControllerTabSwitching;                               // 0x0388(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       CanLoop;                                                 // 0x0389(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9MWS[0x6];                                   // 0x038A(0x0006) MISSED OFFSET (PADDING)

	public:
		void RemoveTabs();
		void Init(TArray<struct FTabWidgetData> tabsData);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreTabWidget
	 * Size -> 0x0018 (FullSize[0x0410] - InheritedSize[0x03F8])
	 */
	class UCoreTabWidget : public UCoreSelectableButtonWidget
	{
	public:
		class UDBDTextBlock*                                       TabTextField;                                            // 0x03F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDImage*                                           TabImage;                                                // 0x0400(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MODA[0x8];                                   // 0x0408(0x0008) MISSED OFFSET (PADDING)

	public:
		int32_t GetKey();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreTemplateWidget
	 * Size -> 0x0008 (FullSize[0x02A0] - InheritedSize[0x0298])
	 */
	class UCoreTemplateWidget : public UUserWidget
	{
	public:
		unsigned char                                              UnknownData_IB6R[0x8];                                   // 0x0298(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreTestBuildFlagWidget
	 * Size -> 0x0018 (FullSize[0x0340] - InheritedSize[0x0328])
	 */
	class UCoreTestBuildFlagWidget : public UCoreBaseHudWidget
	{
	public:
		unsigned char                                              UnknownData_2WN3[0x8];                                   // 0x0328(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTextBlock*                                          TopLineTextfield;                                        // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTextBlock*                                          BottomLineTextfield;                                     // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreTutorialMysteryNoteWidget
	 * Size -> 0x0008 (FullSize[0x0330] - InheritedSize[0x0328])
	 */
	class UCoreTutorialMysteryNoteWidget : public UCoreBaseHudWidget
	{
	public:
		unsigned char                                              UnknownData_6J6H[0x8];                                   // 0x0328(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreTutorialObjectiveItem
	 * Size -> 0x0010 (FullSize[0x0320] - InheritedSize[0x0310])
	 */
	class UCoreTutorialObjectiveItem : public UCoreBaseUserWidget
	{
	public:
		class FScriptMulticastDelegate                             TutorialObjectiveCompletedDelegate;                      // 0x0310(0x0010) ZeroConstructor, InstancedReference, BlueprintCallable, NativeAccessSpecifierPublic

	public:
		void SetObjectiveCompleted(bool removeAfterCompletion);
		void InitObjective(const struct FTutorialObjectivesViewData& interactionsViewData);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreTutorialObjectivesContainer
	 * Size -> 0x0080 (FullSize[0x03A8] - InheritedSize[0x0328])
	 */
	class UCoreTutorialObjectivesContainer : public UCoreBaseHudWidget
	{
	public:
		unsigned char                                              UnknownData_5BML[0x8];                                   // 0x0328(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              CoreTutorialObjectiveItemClass;                          // 0x0330(0x0008) Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    BasePooledInstanceAmount;                                // 0x0338(0x0004) Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6ASJ[0x4];                                   // 0x033C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGridPanel*                                          ObjectiveContainer;                                      // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UCoreTutorialObjectiveItem*>                  _objectivePool;                                          // 0x0348(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TMap<class FName, class UCoreTutorialObjectiveItem*>       _objectiveItems;                                         // 0x0358(0x0050) ExportObject, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		void OnTutorialObjectiveCompleted(class UCoreTutorialObjectiveItem* Item);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CoreTutorialPopupWidget
	 * Size -> 0x0028 (FullSize[0x0350] - InheritedSize[0x0328])
	 */
	class UCoreTutorialPopupWidget : public UCoreBaseHudWidget
	{
	public:
		unsigned char                                              UnknownData_I51K[0x8];                                   // 0x0328(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCoreInputSwitcherWidget*                            ProgressionInputSwitcher;                                // 0x0330(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAkAudioEvent*                                       ClosePopupSfx;                                           // 0x0338(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             _notifTutoConfirmButtonClickDelegate;                    // 0x0340(0x0010) ZeroConstructor, InstancedReference, BlueprintCallable, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CurrencyProgressionTooltipWidget
	 * Size -> 0x0020 (FullSize[0x0330] - InheritedSize[0x0310])
	 */
	class UCurrencyProgressionTooltipWidget : public UCoreBaseUserWidget
	{
	public:
		class UDBDTextBlock*                                       CurrencyTB;                                              // 0x0310(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDBDTextBlock*                                       CurrencyTitleTB;                                         // 0x0318(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDBDRichTextBlock*                                   CurrencyDescriptionRTB;                                  // 0x0320(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDBDImage*                                           TitleBgIMG;                                              // 0x0328(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void SetTooltipData(const struct FCurrencyProgressionTooltipViewData& currencyViewData);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.CustomizationTooltipWidget
	 * Size -> 0x0008 (FullSize[0x0318] - InheritedSize[0x0310])
	 */
	class UCustomizationTooltipWidget : public UCoreBaseUserWidget
	{
	public:
		class UDBDTextBlock*                                       ToolTipStatusTB;                                         // 0x0310(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SetTooltipData(const struct FCustomizationTooltipViewData& customizationViewData);
		void SetStatusText(bool IsEquipped, bool IsOwned, bool IsLocked);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.DBDButton
	 * Size -> 0x0000 (FullSize[0x04A0] - InheritedSize[0x04A0])
	 */
	class UDBDButton : public UButton
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.DBDImage
	 * Size -> 0x0010 (FullSize[0x0260] - InheritedSize[0x0250])
	 */
	class UDBDImage : public UImage
	{
	public:
		class UTexture2D*                                          DefaultImage;                                            // 0x0250(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YARM[0x8];                                   // 0x0258(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetBrushFromTextureWithDefault(class UTexture2D* Texture, bool matchSize);
		void SetBrushFromSoftTextureWithDefault(bool matchSize);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.DBDRichTextBlock
	 * Size -> 0x00F0 (FullSize[0x07C0] - InheritedSize[0x06D0])
	 */
	class UDBDRichTextBlock : public URichTextBlock
	{
	public:
		bool                                                       _isUpperCase;                                            // 0x06D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _debugPreviewLargeTextState;                             // 0x06D1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _debugPreviewUndockedState;                              // 0x06D2(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _hasLargeText;                                           // 0x06D3(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_TXUV[0x4];                                   // 0x06D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTextBlockOverrideProperties                        _largeTextProperties;                                    // 0x06D8(0x0048) Edit, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_UOAP[0x1];                                   // 0x0720(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       _overrideUndockedPropertiesWithLargeText;                // 0x0721(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _hasUndocking;                                           // 0x0722(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_UT3S[0x5];                                   // 0x0723(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTextBlockOverrideProperties                        _undockedProperties;                                     // 0x0728(0x0048) Edit, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XG3Z[0x50];                                  // 0x0770(0x0050) MISSED OFFSET (PADDING)

	public:
		void SetIsUpperCase(bool isUpperCase);
		void SetHTMLText(const class FText& InText);
		bool GetIsUpperCase();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.DBDScrollBox
	 * Size -> 0x0030 (FullSize[0x0940] - InheritedSize[0x0910])
	 */
	class UDBDScrollBox : public UScrollBox
	{
	public:
		bool                                                       _useControllerScroll;                                    // 0x0910(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _shouldScrollOnMouseOver;                                // 0x0911(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_R118[0x2];                                   // 0x0912(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _scrollSpeed;                                            // 0x0914(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCoreInputPromptTextWidget*                          _displayPrompt;                                          // 0x0918(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, InstancedReference, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FText                                                _displayPromptText;                                      // 0x0920(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, NoClear, Protected, NativeAccessSpecifierProtected
		EShowScrollDisplayPrompt                                   _showDisplayPrompt;                                      // 0x0938(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XPMA[0x7];                                   // 0x0939(0x0007) MISSED OFFSET (PADDING)

	public:
		void UpdateDisplayPrompt();
		void OnControlModeChanged(EControlMode controlMode);
		bool IsMouseOver();
		void HandleControllerInput(float analogValue);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.DBDTextBlock
	 * Size -> 0x0118 (FullSize[0x0408] - InheritedSize[0x02F0])
	 */
	class UDBDTextBlock : public UTextBlock
	{
	public:
		class FString                                              TextStyle;                                               // 0x02F0(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       _debugPreviewLargeTextState;                             // 0x0300(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _debugPreviewUndockedState;                              // 0x0301(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6KQE[0x6];                                   // 0x0302(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USwitchDockStateManager*                             _switchDockStateManager;                                 // 0x0308(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDTextManager*                                     _textManager;                                            // 0x0310(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isUpperCase;                                            // 0x0318(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _hasLargeText;                                           // 0x0319(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_O1BJ[0x6];                                   // 0x031A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTextBlockOverrideProperties                        _largeTextProperties;                                    // 0x0320(0x0048) Edit, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Q88S[0x1];                                   // 0x0368(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       _overrideUndockedPropertiesWithLargeText;                // 0x0369(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _hasUndocking;                                           // 0x036A(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_27WP[0x5];                                   // 0x036B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTextBlockOverrideProperties                        _undockedProperties;                                     // 0x0370(0x0048) Edit, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_FQX7[0x50];                                  // 0x03B8(0x0050) MISSED OFFSET (PADDING)

	public:
		void SetIsUpperCase(bool isUpperCase);
		void OnSwitchDockStateChanged(bool isDocked);
		void OnLargeTextSettingsChanged(bool isLargeText);
		bool GetIsUpperCase();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.DBDTooltipManager
	 * Size -> 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
	 */
	class UDBDTooltipManager : public UGameInstanceSubsystem
	{
	public:
		unsigned char                                              UnknownData_C250[0x10];                                  // 0x0038(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUserWidget*                                         _currentTooltip;                                         // 0x0048(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void ShowCustomizationTooltip(const struct FCustomizationTooltipViewData& tooltipViewData, const struct FGeometry& triggerGeometry);
		void ShowCurrencyTooltip(const struct FCurrencyProgressionTooltipViewData& tooltipViewData, const struct FGeometry& triggerGeometry);
		void ShowCharacterTooltip(const struct FCharacterTooltipViewData& tooltipViewData, const struct FGeometry& triggerGeometry);
		void HideTooltip();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.DBDWrapBox
	 * Size -> 0x0020 (FullSize[0x0168] - InheritedSize[0x0148])
	 */
	class UDBDWrapBox : public UPanelWidget
	{
	public:
		struct FVector2D                                           InnerSlotPadding;                                        // 0x0148(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WrapWidth;                                               // 0x0150(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bExplicitWrapWidth;                                      // 0x0154(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0155(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QSWK[0x12];                                  // 0x0156(0x0012) MISSED OFFSET (PADDING)

	public:
		void SetInnerSlotPadding(const struct FVector2D& InPadding);
		void SetHorizontalAlignment(EHorizontalAlignment inHorizontalAlignment);
		class UDBDWrapBoxSlot* AddChildToWrapBox(class UWidget* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.DBDWrapBoxSlot
	 * Size -> 0x0028 (FullSize[0x0068] - InheritedSize[0x0040])
	 */
	class UDBDWrapBoxSlot : public UPanelSlot
	{
	public:
		struct FMargin                                             Padding;                                                 // 0x0040(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bFillEmptySpace;                                         // 0x0050(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H4IW[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FillSpanWhenLessThan;                                    // 0x0054(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0058(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0059(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WDU7[0xE];                                   // 0x005A(0x000E) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment inVerticalAlignment);
		void SetPadding(const struct FMargin& InPadding);
		void SetHorizontalAlignment(EHorizontalAlignment inHorizontalAlignment);
		void SetFillSpanWhenLessThan(float InFillSpanWhenLessThan);
		void SetFillEmptySpace(bool InbFillEmptySpace);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.RichTextBlockImageSharedSizeDecorator
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class URichTextBlockImageSharedSizeDecorator : public URichTextBlockImageDecorator
	{
	public:
		int32_t                                                    Width;                                                   // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Height;                                                  // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.RichTextNestedTagsDecorator
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class URichTextNestedTagsDecorator : public URichTextBlockDecorator
	{
	public:
		unsigned char                                              UnknownData_P5EQ[0x50];                                  // 0x0030(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsCore.TestWidget
	 * Size -> 0x0010 (FullSize[0x02A8] - InheritedSize[0x0298])
	 */
	class UTestWidget : public UUserWidget
	{
	public:
		class UPanelWidget*                                        Workbench;                                               // 0x0298(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       showWorkbench;                                           // 0x02A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1SDQ[0x7];                                   // 0x02A1(0x0007) MISSED OFFSET (PADDING)

	public:
		void SetShowWorkbench(bool showWorkbench);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
