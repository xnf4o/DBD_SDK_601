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
	 * Class DBDUIPresenters.UIComponent
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	class UUIComponent : public UActorComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.Presenter
	 * Size -> 0x0028 (FullSize[0x00E0] - InheritedSize[0x00B8])
	 */
	class UPresenter : public UUIComponent
	{
	public:
		bool                                                       RequestPresentationAtBeginPlay;                          // 0x00B8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ESlateVisibility                                           InitialVisibility;                                       // 0x00B9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2BAV[0x6];                                   // 0x00BA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUserWidget*                                         _widget;                                                 // 0x00C0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_H8FM[0x18];                                  // 0x00C8(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.BasePopupPresenter
	 * Size -> 0x0018 (FullSize[0x00F8] - InheritedSize[0x00E0])
	 */
	class UBasePopupPresenter : public UPresenter
	{
	public:
		EContext                                                   ObservedContext;                                         // 0x00E0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O0QR[0x17];                                  // 0x00E1(0x0017) MISSED OFFSET (PADDING)

	public:
		void OnContextLeave(EContext Context);
		void OnContextEnter(EContext Context);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.ContextObserver
	 * Size -> 0x0070 (FullSize[0x0128] - InheritedSize[0x00B8])
	 */
	class UContextObserver : public UUIComponent
	{
	public:
		EContextSection                                            ObservedContextSection;                                  // 0x00B8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_W57Q[0x6F];                                  // 0x00B9(0x006F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.CreditsPresenter
	 * Size -> 0x0018 (FullSize[0x00F8] - InheritedSize[0x00E0])
	 */
	class UCreditsPresenter : public UPresenter
	{
	public:
		class UClass*                                              CreditsScreenWidgetClass;                                // 0x00E0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZHZV[0x10];                                  // 0x00E8(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnBackAction();
		void Credits_ScrollToName(const class FString& Name, float Delay);
		void Credits_ScrollToEnd();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.HudPresenter
	 * Size -> 0x0028 (FullSize[0x0108] - InheritedSize[0x00E0])
	 */
	class UHudPresenter : public UPresenter
	{
	public:
		class ADBDPlayer*                                          _presentedCharacter;                                     // 0x00E0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ADBDPlayer*                                          _pendingCharacter;                                       // 0x00E8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ADBDSpectator*                                       _spectatorPawn;                                          // 0x00F0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1Z4R[0x10];                                  // 0x00F8(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnPawnUnpossessed(class APawn* Pawn);
		void OnPawnPossessed(class APawn* Pawn);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.ExamplePresenter
	 * Size -> 0x0040 (FullSize[0x0148] - InheritedSize[0x0108])
	 */
	class UExamplePresenter : public UHudPresenter
	{
	public:
		class UClass*                                              ExampleWidgetClass;                                      // 0x0108(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H2N1[0x38];                                  // 0x0110(0x0038) MISSED OFFSET (PADDING)

	public:
		void OnButtonClick();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.FocusHandler
	 * Size -> 0x0010 (FullSize[0x00C8] - InheritedSize[0x00B8])
	 */
	class UFocusHandler : public UUIComponent
	{
	public:
		unsigned char                                              UnknownData_515E[0x10];                                  // 0x00B8(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.SubPresenter
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	class USubPresenter : public UUIComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.GameManualSubPresenter
	 * Size -> 0x0010 (FullSize[0x00C8] - InheritedSize[0x00B8])
	 */
	class UGameManualSubPresenter : public USubPresenter
	{
	public:
		unsigned char                                              _gameManualWidget[0x10];                                 // 0x00B8(0x0010) UNKNOWN PROPERTY: InterfaceProperty

	public:
		void OnCategoryCategoryEntered(EHelpType categoryType);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.GenericPopupPresenter
	 * Size -> 0x0068 (FullSize[0x0160] - InheritedSize[0x00F8])
	 */
	class UGenericPopupPresenter : public UBasePopupPresenter
	{
	public:
		class UClass*                                              PopupWidgetClass;                                        // 0x00F8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8U34[0x60];                                  // 0x0100(0x0060) MISSED OFFSET (PADDING)

	public:
		void OnBack();
		void OnAction(EPopupButtonType popupAction);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.HudObjectivesPresenter
	 * Size -> 0x0050 (FullSize[0x0158] - InheritedSize[0x0108])
	 */
	class UHudObjectivesPresenter : public UHudPresenter
	{
	public:
		class UClass*                                              CoreHudObjectivesWidgetClass;                            // 0x0108(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2BY1[0x48];                                  // 0x0110(0x0048) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.HudRootContainer
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	class UHudRootContainer : public UUIComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.OnboardingMenuPresenter
	 * Size -> 0x0038 (FullSize[0x0118] - InheritedSize[0x00E0])
	 */
	class UOnboardingMenuPresenter : public UPresenter
	{
	public:
		class UClass*                                              OnboardingMenuWidgetClass;                               // 0x00E0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UOnboardingTutorialSubPresenter*                     _onboardingTutorialSubPresenter;                         // 0x00E8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGameManualSubPresenter*                             _gameManualSubPresenter;                                 // 0x00F0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USubPresenter*                                       _activeSubPresenter;                                     // 0x00F8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SJV8[0x18];                                  // 0x0100(0x0018) MISSED OFFSET (PADDING)

	public:
		void OnSetUIEnabled(bool Enabled);
		void OnMenuTabSelectedAgain(EOnboardingMenuState onboardingMenuState);
		void OnMenuTabSelected(EOnboardingMenuState onboardingMenuState);
		void OnBackAction();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.OnboardingTutorialSubPresenter
	 * Size -> 0x0060 (FullSize[0x0118] - InheritedSize[0x00B8])
	 */
	class UOnboardingTutorialSubPresenter : public USubPresenter
	{
	public:
		unsigned char                                              _onboardingTutorialWidget[0x10];                         // 0x00B8(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		unsigned char                                              UnknownData_YMNB[0x50];                                  // 0x00C8(0x0050) MISSED OFFSET (PADDING)

	public:
		void OnSelectTutorial(const class FString& stepId, const class FString& tutorialId);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.PawnObserver
	 * Size -> 0x0028 (FullSize[0x00E0] - InheritedSize[0x00B8])
	 */
	class UPawnObserver : public UUIComponent
	{
	public:
		unsigned char                                              UnknownData_N0IV[0x20];                                  // 0x00B8(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APawn*                                               _pawn;                                                   // 0x00D8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnLocallyObservedChanged();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.PresenterGroup
	 * Size -> 0x0020 (FullSize[0x0250] - InheritedSize[0x0230])
	 */
	class APresenterGroup : public AActor
	{
	public:
		class UContextObserver*                                    ContextObserver;                                         // 0x0230(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UFocusHandler*                                       FocusHandler;                                            // 0x0238(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPawnObserver*                                       PawnObserver;                                            // 0x0240(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class URootContainer*                                      RootContainer;                                           // 0x0248(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.PresenterGroupHandler
	 * Size -> 0x0010 (FullSize[0x00C8] - InheritedSize[0x00B8])
	 */
	class UPresenterGroupHandler : public UUIComponent
	{
	public:
		class UClass*                                              PresenterGroupClass;                                     // 0x00B8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class APresenterGroup*                                     _presenterGroup;                                         // 0x00C0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.RootContainer
	 * Size -> 0x0030 (FullSize[0x00E8] - InheritedSize[0x00B8])
	 */
	class URootContainer : public UUIComponent
	{
	public:
		unsigned char                                              UnknownData_LR9P[0x10];                                  // 0x00B8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EGameLayer                                                 GameLayer;                                               // 0x00C8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_44JK[0x7];                                   // 0x00C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              RootWidgetClass;                                         // 0x00D0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      UnfocusedOpacity;                                        // 0x00D8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_3W4X[0x4];                                   // 0x00DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUserWidget*                                         _rootWidget;                                             // 0x00E0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.SkillCheckPresenter
	 * Size -> 0x0038 (FullSize[0x0140] - InheritedSize[0x0108])
	 */
	class USkillCheckPresenter : public UHudPresenter
	{
	public:
		class UClass*                                              SkillCheckWidgetClass;                                   // 0x0108(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N3FO[0x30];                                  // 0x0110(0x0030) MISSED OFFSET (PADDING)

	public:
		void OnUpdateSkillCheckVisual(bool IsActive);
		void OnShowSkillCheckSuccess(bool IsBonus);
		void OnShowSkillCheckFail();
		void OnShowSkillCheck();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.SubtitlesPresenter
	 * Size -> 0x0050 (FullSize[0x0130] - InheritedSize[0x00E0])
	 */
	class USubtitlesPresenter : public UPresenter
	{
	public:
		class UClass*                                              SubtitlesWidgetClass;                                    // 0x00E0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumberOfCharactersPerLine;                               // 0x00E8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DurationPerLine;                                         // 0x00EC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       KeepSingleCharacter;                                     // 0x00F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T980[0x7];                                   // 0x00F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSubtitlesEntry>                             _entryQueue;                                             // 0x00F8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		struct FTimerHandle                                        _timerHandle;                                            // 0x0108(0x0008) Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class UNavigationScreen>                    _navigationScreen;                                       // 0x0110(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5DAI[0x18];                                  // 0x0118(0x0018) MISSED OFFSET (PADDING)

	public:
		void OnEntryTimedOut();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.TemplatePresenter
	 * Size -> 0x0020 (FullSize[0x0128] - InheritedSize[0x0108])
	 */
	class UTemplatePresenter : public UHudPresenter
	{
	public:
		class UClass*                                              TemplateWidgetClass;                                     // 0x0108(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YDEX[0x18];                                  // 0x0110(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.TestPresenter
	 * Size -> 0x0010 (FullSize[0x00F0] - InheritedSize[0x00E0])
	 */
	class UTestPresenter : public UPresenter
	{
	public:
		class UClass*                                              TestWidgetClass;                                         // 0x00E0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5PHX[0x8];                                   // 0x00E8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDUIPresenters.UIConsoleCommands
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UUIConsoleCommands : public UObject
	{
	public:
		void DBD_ToggleTestWidget();
		void DBD_ToggleDPICurve();
		void DBD_SetMenuScaleFactor(float ScaleFactor);
		void DBD_SetHudVisible(bool IsVisible);
		void DBD_SetHudScaleFactor(float ScaleFactor);
		void DBD_SetApplicationScale(float ApplicationScale);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
