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
	 * Class DBDUIViewsMobile.FriendsMenuUtilities
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UFriendsMenuUtilities : public UBlueprintFunctionLibrary
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsMobile.MatchConfigDifficultyDataAsset
	 * Size -> 0x0050 (FullSize[0x0088] - InheritedSize[0x0038])
	 */
	class UMatchConfigDifficultyDataAsset : public UPrimaryDataAsset
	{
	public:
		TMap<ECustomMatchDifficulty, struct FMatchConfigDifficultyData> DifficultiesData;                                        // 0x0038(0x0050) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsMobile.MatchConfigOptionsDataAsset
	 * Size -> 0x0050 (FullSize[0x0088] - InheritedSize[0x0038])
	 */
	class UMatchConfigOptionsDataAsset : public UPrimaryDataAsset
	{
	public:
		TMap<ECustomMatchOptions, struct FMatchOptionAssetData>    OptionsData;                                             // 0x0038(0x0050) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsMobile.MatchConfigTabsDataAsset
	 * Size -> 0x0050 (FullSize[0x0088] - InheritedSize[0x0038])
	 */
	class UMatchConfigTabsDataAsset : public UPrimaryDataAsset
	{
	public:
		TMap<ECustomMatchTab, struct FMatchConfigTabData>          Data;                                                    // 0x0038(0x0050) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsMobile.MobileBaseUserWidget
	 * Size -> 0x00A0 (FullSize[0x0338] - InheritedSize[0x0298])
	 */
	class UMobileBaseUserWidget : public UUserWidget
	{
	public:
		unsigned char                                              UnknownData_5ZOB[0x10];                                  // 0x0298(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWidget*                                             HighlightWidget;                                         // 0x02A8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                _tutorialAnimationName;                                  // 0x02B0(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    _tutorialNumberOfLoops;                                  // 0x02BC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZWLA[0x78];                                  // 0x02C0(0x0078) MISSED OFFSET (PADDING)

	public:
		void TutorialAnimationFinished();
		void TryBroadcastOnHighlightWidgetClicked();
		void TriggerTutorialVisuals();
		void PropagateOnHighlightWidgetClicked(const class FName& onBoardingID);
		void OnSynchronizeProperties();
		bool IsInTutorialState();
		void FinishTutorialVisuals();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsMobile.UMGAtlantaCustomMatchLobbyRule
	 * Size -> 0x0018 (FullSize[0x0350] - InheritedSize[0x0338])
	 */
	class UUMGAtlantaCustomMatchLobbyRule : public UMobileBaseUserWidget
	{
	public:
		class UTextBlock*                                          RuleName;                                                // 0x0338(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTextBlock*                                          OptionName;                                              // 0x0340(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WDRF[0x8];                                   // 0x0348(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsMobile.UMGAtlantaCustomMatchLobbyScreen
	 * Size -> 0x0038 (FullSize[0x0370] - InheritedSize[0x0338])
	 */
	class UUMGAtlantaCustomMatchLobbyScreen : public UMobileBaseUserWidget
	{
	public:
		class UUMGBaseButtonWidget*                                EditButton;                                              // 0x0338(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UVerticalBox*                                        RulesBox;                                                // 0x0340(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTextBlock*                                          CustomMatchTitle;                                        // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTextBlock*                                          MatchRulesTitle;                                         // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_HAYD[0x18];                                  // 0x0358(0x0018) MISSED OFFSET (PADDING)

	public:
		void HandleEditConfigButtonClicked();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsMobile.UMGPageScrollWidget
	 * Size -> 0x0130 (FullSize[0x0468] - InheritedSize[0x0338])
	 */
	class UUMGPageScrollWidget : public UMobileBaseUserWidget
	{
	public:
		float                                                      ItemWidth;                                               // 0x0338(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ItemHeight;                                              // 0x033C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RowCount;                                                // 0x0340(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ColumnCount;                                             // 0x0344(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ItemGapDistance;                                         // 0x0348(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TotalPageCount;                                          // 0x034C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ButtonWidth;                                             // 0x0350(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_284I[0x4];                                   // 0x0354(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAudioEvent*                                       OnPageChangeSound;                                       // 0x0358(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCanvasPanel*                                        ContainerPanel;                                          // 0x0360(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UHorizontalBox*                                      ButtonsPanel;                                            // 0x0368(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              _pageButtonWidgetClass[0x30];                            // 0x0370(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		TArray<class UCanvasPanel*>                                _itemArray;                                              // 0x03A0(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		int32_t                                                    _currentPageIndex;                                       // 0x03B0(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_H7Q7[0x4];                                   // 0x03B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMobileBaseUserWidget*>                       _activeWidgets;                                          // 0x03B8(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_D7B1[0xA0];                                  // 0x03C8(0x00A0) MISSED OFFSET (PADDING)

	public:
		void HandlePageButtonClicked(int32_t pageIndex);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsMobile.UMGGridPageScrollWidget
	 * Size -> 0x0008 (FullSize[0x0470] - InheritedSize[0x0468])
	 */
	class UUMGGridPageScrollWidget : public UUMGPageScrollWidget
	{
	public:
		unsigned char                                              UnknownData_BI7O[0x8];                                   // 0x0468(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsMobile.UMGAtlantaMatchConfigPageScroll
	 * Size -> 0x0160 (FullSize[0x05D0] - InheritedSize[0x0470])
	 */
	class UUMGAtlantaMatchConfigPageScroll : public UUMGGridPageScrollWidget
	{
	public:
		struct FCustomMatchTabConfig                               CharactersTabConfig;                                     // 0x0470(0x0040) Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		struct FCustomMatchTabConfig                               InventoryTabConfig;                                      // 0x04B0(0x0040) Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		struct FCustomMatchTabConfig                               MapTabConfig;                                            // 0x04F0(0x0040) Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_IS1I[0xA0];                                  // 0x0530(0x00A0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsMobile.UMGBaseButtonWidget
	 * Size -> 0x0130 (FullSize[0x0468] - InheritedSize[0x0338])
	 */
	class UUMGBaseButtonWidget : public UMobileBaseUserWidget
	{
	public:
		class FScriptMulticastDelegate                             OnBaseButtonClickedEvent;                                // 0x0338(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnBaseButtonPressedEvent;                                // 0x0348(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnBaseButtonReleasedEvent;                               // 0x0358(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnBaseButtonLongPressEvent;                              // 0x0368(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UButton*                                             Button;                                                  // 0x0378(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UImage*                                              IconPicture;                                             // 0x0380(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTextBlock*                                          ButtonLabel;                                             // 0x0388(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FSlateBrush                                         ButtonPictureBrush;                                      // 0x0390(0x0090) Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected
		class FText                                                ButtonText;                                              // 0x0420(0x0018) Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected
		class UAkAudioEvent*                                       OnPressSound;                                            // 0x0438(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAkAudioEvent*                                       OnClickSound;                                            // 0x0440(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAkAudioEvent*                                       OnLongPressSound;                                        // 0x0448(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAkAudioEvent*                                       OnReleaseSound;                                          // 0x0450(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAkAudioEvent*                                       OnHoveredSound;                                          // 0x0458(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_O7XT[0x8];                                   // 0x0460(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnBaseButtonReleased__DelegateSignature();
		void OnBaseButtonPressed__DelegateSignature();
		void OnBaseButtonLongPress__DelegateSignature();
		void OnBaseButtonClicked__DelegateSignature();
		void HandleButtonReleasedEvent();
		void HandleButtonPressedEvent();
		void HandleButtonLongPressEvent();
		void HandleButtonHoveredEvent();
		void HandleButtonClickedEvent();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsMobile.UMGAtlantaMatchConfigPageScrollItem
	 * Size -> 0x0040 (FullSize[0x04A8] - InheritedSize[0x0468])
	 */
	class UUMGAtlantaMatchConfigPageScrollItem : public UUMGBaseButtonWidget
	{
	public:
		class UCanvasPanel*                                        ImagePanel;                                              // 0x0468(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCanvasPanel*                                        DefaultPanel;                                            // 0x0470(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UImage*                                              DefaultImage;                                            // 0x0478(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _unselectedOpacity;                                      // 0x0480(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _selectedOpacity;                                        // 0x0484(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2C2T[0x20];                                  // 0x0488(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsMobile.UMGAtlantaMatchConfigScreen
	 * Size -> 0x01D8 (FullSize[0x0510] - InheritedSize[0x0338])
	 */
	class UUMGAtlantaMatchConfigScreen : public UMobileBaseUserWidget
	{
	public:
		class UUMGAtlantaMatchConfigPageScroll*                    MatchConfigPageScroll;                                   // 0x0338(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UHorizontalBox*                                      TabsBox;                                                 // 0x0340(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UVerticalBox*                                        BotsTabsBox;                                             // 0x0348(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UUMGBaseButtonWidget*                                BackButton;                                              // 0x0350(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTextBlock*                                          MatchConfigTitle;                                        // 0x0358(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTextBlock*                                          InventoryTitle;                                          // 0x0360(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTextBlock*                                          SelectedTabTitle;                                        // 0x0368(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMatchConfigTabsDataAsset*                           TabsDataAsset;                                           // 0x0370(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FSlateBrush                                         SmallTabSeparation;                                      // 0x0378(0x0090) Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected
		struct FSlateBrush                                         BigTabSeparation;                                        // 0x0408(0x0090) Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected
		float                                                      TabsVerticalPadding;                                     // 0x0498(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      TabsHorizontalPadding;                                   // 0x049C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LDXB[0x70];                                  // 0x04A0(0x0070) MISSED OFFSET (PADDING)

	public:
		void HandleBackButtonClicked();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsMobile.UMGAtlantaMatchConfigTab
	 * Size -> 0x0030 (FullSize[0x0498] - InheritedSize[0x0468])
	 */
	class UUMGAtlantaMatchConfigTab : public UUMGBaseButtonWidget
	{
	public:
		class USizeBox*                                            IconSizeBox;                                             // 0x0468(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTextBlock*                                          TabName;                                                 // 0x0470(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCanvasPanel*                                        RandomPanel;                                             // 0x0478(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_15EA[0x18];                                  // 0x0480(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsMobile.UMGAtlantaRequestRoleButton
	 * Size -> 0x0010 (FullSize[0x0478] - InheritedSize[0x0468])
	 */
	class UUMGAtlantaRequestRoleButton : public UUMGBaseButtonWidget
	{
	public:
		class UWidgetSwitcher*                                     IconSwitcher;                                            // 0x0468(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MLJ2[0x8];                                   // 0x0470(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetIsActive(bool IsActive);
		void OnToggleActiveState(bool IsActive);
		bool GetIsActive();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsMobile.UMGBaseFriendListContextualMenuWidget
	 * Size -> 0x0058 (FullSize[0x0390] - InheritedSize[0x0338])
	 */
	class UUMGBaseFriendListContextualMenuWidget : public UMobileBaseUserWidget
	{
	public:
		unsigned char                                              UnknownData_WTRR[0x18];                                  // 0x0338(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUMGFriendButtonWidget*                              InviteToPartyButton;                                     // 0x0350(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UUMGFriendButtonWidget*                              MuteButton;                                              // 0x0358(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UUMGFriendButtonWidget*                              UnmuteButton;                                            // 0x0360(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UUMGFriendButtonWidget*                              RemoveFriendButton;                                      // 0x0368(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UUMGFriendButtonWidget*                              RemovePlayerFromPartyButton;                             // 0x0370(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_IKDK[0x10];                                  // 0x0378(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAudioEvent*                                       TransitionOutAnimationSound;                             // 0x0388(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void HandleActionTriggered(EActionOnFriendType ActionType);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsMobile.UMGBaseFriendListElement
	 * Size -> 0x00C0 (FullSize[0x03F8] - InheritedSize[0x0338])
	 */
	class UUMGBaseFriendListElement : public UMobileBaseUserWidget
	{
	public:
		class UImage*                                              StatusPicture;                                           // 0x0338(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTextBlock*                                          FriendName;                                              // 0x0340(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTextBlock*                                          FriendStatus;                                            // 0x0348(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCanvasPanel*                                        SelectionHighlight;                                      // 0x0350(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UUMGBaseButtonWidget*                                ItemSelectionBaseButton;                                 // 0x0358(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UNamedSlot*                                          ContextualMenuPosition;                                  // 0x0360(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FAtlantaFriendUIData                                _cachedFriendData;                                       // 0x0368(0x0068) Protected, NativeAccessSpecifierProtected
		class UDataTable*                                          FriendUIStatusDataTable;                                 // 0x03D0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Z14K[0x20];                                  // 0x03D8(0x0020) MISSED OFFSET (PADDING)

	public:
		void TriggerActionOnThisFriend(EActionOnFriendType ActionType);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsMobile.UMGBaseTabButtonWidget
	 * Size -> 0x0070 (FullSize[0x04D8] - InheritedSize[0x0468])
	 */
	class UUMGBaseTabButtonWidget : public UUMGBaseButtonWidget
	{
	public:
		unsigned char                                              UnknownData_5G5R[0x18];                                  // 0x0468(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class URichTextBlock*                                      TabText;                                                 // 0x0480(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTextBlock*                                          NotificationCountText;                                   // 0x0488(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCanvasPanel*                                        NotificationPanel;                                       // 0x0490(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UImage*                                              TabButtonSelected;                                       // 0x0498(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              tabIndex;                                                // 0x04A0(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_TLLI[0x7];                                   // 0x04A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                TitleOfTab;                                              // 0x04A8(0x0018) Edit, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_X6P2[0x8];                                   // 0x04C0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              _tabTextParameter;                                       // 0x04C8(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsMobile.UMGBaseTabListWidget
	 * Size -> 0x0000 (FullSize[0x0338] - InheritedSize[0x0338])
	 */
	class UUMGBaseTabListWidget : public UMobileBaseUserWidget
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsMobile.UMGExpandableListWidget
	 * Size -> 0x00A8 (FullSize[0x03E0] - InheritedSize[0x0338])
	 */
	class UUMGExpandableListWidget : public UMobileBaseUserWidget
	{
	public:
		bool                                                       ShouldHideExpandableListIfEmpty;                         // 0x0338(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsExtendedAtStart;                                       // 0x0339(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CJM7[0x6];                                   // 0x033A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUMGBaseButtonWidget*                                ExpansionButton;                                         // 0x0340(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UVerticalBox*                                        ItemContainer;                                           // 0x0348(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTextBlock*                                          CategorieName;                                           // 0x0350(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTextBlock*                                          itemCount;                                               // 0x0358(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UExpandableArea*                                     ExpandableArea;                                          // 0x0360(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FText                                                HeaderTitle;                                             // 0x0368(0x0018) Edit, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_NGX4[0x8];                                   // 0x0380(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UUserWidget*>                                 _childWidgets;                                           // 0x0388(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ZHE5[0x48];                                  // 0x0398(0x0048) MISSED OFFSET (PADDING)

	public:
		void ToggleExpansion();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsMobile.UMGFriendBaseTabListWidget
	 * Size -> 0x0000 (FullSize[0x0338] - InheritedSize[0x0338])
	 */
	class UUMGFriendBaseTabListWidget : public UUMGBaseTabListWidget
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsMobile.UMGFriendButtonWidget
	 * Size -> 0x0080 (FullSize[0x04E8] - InheritedSize[0x0468])
	 */
	class UUMGFriendButtonWidget : public UUMGBaseButtonWidget
	{
	public:
		class UCanvasPanel*                                        InteractableButtonStatePanel;                            // 0x0468(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCanvasPanel*                                        NonInteractableButtonStatePanel;                         // 0x0470(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTextBlock*                                          NonInteractableExplanationText;                          // 0x0478(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTextBlock*                                          NonInteractableActionText;                               // 0x0480(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isInteractable;                                         // 0x0488(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_5AU5[0x7];                                   // 0x0489(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UImage*                                              NonInteractableImage;                                    // 0x0490(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TMap<EFriendTypeButton, struct FSlateBrush>                _nonInteractableImages;                                  // 0x0498(0x0050) Edit, DisableEditOnInstance, NoClear, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsMobile.UMGFriendContextualMenuWidget
	 * Size -> 0x0000 (FullSize[0x0390] - InheritedSize[0x0390])
	 */
	class UUMGFriendContextualMenuWidget : public UUMGBaseFriendListContextualMenuWidget
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsMobile.UMGFriendElementWidget
	 * Size -> 0x01D8 (FullSize[0x05D0] - InheritedSize[0x03F8])
	 */
	class UUMGFriendElementWidget : public UUMGBaseFriendListElement
	{
	public:
		class UImage*                                              FavoriteSlot;                                            // 0x03F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UButton*                                             FavoriteButton;                                          // 0x0400(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UImage*                                              SelectionImage;                                          // 0x0408(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UImage*                                              SelectedPicture;                                         // 0x0410(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UImage*                                              FriendIcon;                                              // 0x0418(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FSlateBrush                                         UnFavoriteBrush;                                         // 0x0420(0x0090) Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		struct FSlateBrush                                         FavoriteBrush;                                           // 0x04B0(0x0090) Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		struct FSlateBrush                                         MutedBrush;                                              // 0x0540(0x0090) Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected

	public:
		void HandleSelectionButton();
		void HandleFavoriteButtonClicked();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsMobile.UMGFriendListTabWidget
	 * Size -> 0x0018 (FullSize[0x0350] - InheritedSize[0x0338])
	 */
	class UUMGFriendListTabWidget : public UUMGFriendBaseTabListWidget
	{
	public:
		class UUMGExpandableListWidget*                            SentInviteToParty;                                       // 0x0338(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UUMGExpandableListWidget*                            ConnectedFriendsExpandableList;                          // 0x0340(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UUMGExpandableListWidget*                            DisconnectedFriendsExpandableList;                       // 0x0348(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsMobile.UMGFriendPartyListElementWidget
	 * Size -> 0x0138 (FullSize[0x0708] - InheritedSize[0x05D0])
	 */
	class UUMGFriendPartyListElementWidget : public UUMGFriendElementWidget
	{
	public:
		class UWidgetSwitcher*                                     ButtonOrStatusSwitcher;                                  // 0x05D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UButton*                                             CancelInviteButton;                                      // 0x05D8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UImage*                                              PartyStatusImage;                                        // 0x05E0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FSlateBrush                                         IconNotReady;                                            // 0x05E8(0x0090) Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		struct FSlateBrush                                         IconReady;                                               // 0x0678(0x0090) Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected

	public:
		void HandleCancelInviteButtonClicked();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsMobile.UMGFriendSearchBarWidget
	 * Size -> 0x0040 (FullSize[0x0378] - InheritedSize[0x0338])
	 */
	class UUMGFriendSearchBarWidget : public UMobileBaseUserWidget
	{
	public:
		unsigned char                                              UnknownData_8KCH[0x30];                                  // 0x0338(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UEditableTextBox*                                    InputTextField;                                          // 0x0368(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UUMGBaseButtonWidget*                                SearchButton;                                            // 0x0370(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void HandleTextInputChanged(const class FText& textInput);
		void HandleSearchButtonClicked();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsMobile.UMGFriendTabButtonWidget
	 * Size -> 0x0050 (FullSize[0x0528] - InheritedSize[0x04D8])
	 */
	class UUMGFriendTabButtonWidget : public UUMGBaseTabButtonWidget
	{
	public:
		unsigned char                                              UnknownData_0AYD[0x50];                                  // 0x04D8(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsMobile.UMGRequestsListTabWidget
	 * Size -> 0x0010 (FullSize[0x0348] - InheritedSize[0x0338])
	 */
	class UUMGRequestsListTabWidget : public UUMGFriendBaseTabListWidget
	{
	public:
		class UUMGExpandableListWidget*                            FriendRequestExpandableList;                             // 0x0338(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UUMGExpandableListWidget*                            PendingExpandableList;                                   // 0x0340(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsMobile.UMGScrollListPageButton
	 * Size -> 0x0028 (FullSize[0x0360] - InheritedSize[0x0338])
	 */
	class UUMGScrollListPageButton : public UMobileBaseUserWidget
	{
	public:
		class FScriptMulticastDelegate                             OnClicked;                                               // 0x0338(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		int32_t                                                    pageIndex;                                               // 0x0348(0x0004) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DF7M[0x4];                                   // 0x034C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UButton*                                             ActionButton;                                            // 0x0350(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UImage*                                              SelectedImage;                                           // 0x0358(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SetIsSelected(bool selected);
		void HandleActionButtonClick();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIViewsMobile.UMGSuggestionsListTabWidget
	 * Size -> 0x0010 (FullSize[0x0348] - InheritedSize[0x0338])
	 */
	class UUMGSuggestionsListTabWidget : public UUMGFriendBaseTabListWidget
	{
	public:
		class UUMGExpandableListWidget*                            PlayedWithFriendsExpandableList;                         // 0x0338(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UUMGExpandableListWidget*                            SocialFriendsExpandableList;                             // 0x0340(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
