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
	 * Function DBDUIPresenters.BasePopupPresenter.OnContextLeave
	 */
	struct UBasePopupPresenter_OnContextLeave_Params
	{
	public:
		EContext                                                   Context;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.BasePopupPresenter.OnContextEnter
	 */
	struct UBasePopupPresenter_OnContextEnter_Params
	{
	public:
		EContext                                                   Context;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.CreditsPresenter.OnBackAction
	 */
	struct UCreditsPresenter_OnBackAction_Params
	{	};

	/**
	 * Function DBDUIPresenters.CreditsPresenter.Credits_ScrollToName
	 */
	struct UCreditsPresenter_Credits_ScrollToName_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Delay;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.CreditsPresenter.Credits_ScrollToEnd
	 */
	struct UCreditsPresenter_Credits_ScrollToEnd_Params
	{	};

	/**
	 * Function DBDUIPresenters.HudPresenter.OnPawnUnpossessed
	 */
	struct UHudPresenter_OnPawnUnpossessed_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.HudPresenter.OnPawnPossessed
	 */
	struct UHudPresenter_OnPawnPossessed_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.ExamplePresenter.OnButtonClick
	 */
	struct UExamplePresenter_OnButtonClick_Params
	{	};

	/**
	 * Function DBDUIPresenters.GameManualSubPresenter.OnCategoryCategoryEntered
	 */
	struct UGameManualSubPresenter_OnCategoryCategoryEntered_Params
	{
	public:
		EHelpType                                                  categoryType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.GenericPopupPresenter.OnBack
	 */
	struct UGenericPopupPresenter_OnBack_Params
	{	};

	/**
	 * Function DBDUIPresenters.GenericPopupPresenter.OnAction
	 */
	struct UGenericPopupPresenter_OnAction_Params
	{
	public:
		EPopupButtonType                                           popupAction;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.OnboardingMenuPresenter.OnSetUIEnabled
	 */
	struct UOnboardingMenuPresenter_OnSetUIEnabled_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.OnboardingMenuPresenter.OnMenuTabSelectedAgain
	 */
	struct UOnboardingMenuPresenter_OnMenuTabSelectedAgain_Params
	{
	public:
		EOnboardingMenuState                                       onboardingMenuState;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.OnboardingMenuPresenter.OnMenuTabSelected
	 */
	struct UOnboardingMenuPresenter_OnMenuTabSelected_Params
	{
	public:
		EOnboardingMenuState                                       onboardingMenuState;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.OnboardingMenuPresenter.OnBackAction
	 */
	struct UOnboardingMenuPresenter_OnBackAction_Params
	{	};

	/**
	 * Function DBDUIPresenters.OnboardingTutorialSubPresenter.OnSelectTutorial
	 */
	struct UOnboardingTutorialSubPresenter_OnSelectTutorial_Params
	{
	public:
		class FString                                              stepId;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              tutorialId;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.PawnObserver.OnLocallyObservedChanged
	 */
	struct UPawnObserver_OnLocallyObservedChanged_Params
	{	};

	/**
	 * Function DBDUIPresenters.SkillCheckPresenter.OnUpdateSkillCheckVisual
	 */
	struct USkillCheckPresenter_OnUpdateSkillCheckVisual_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.SkillCheckPresenter.OnShowSkillCheckSuccess
	 */
	struct USkillCheckPresenter_OnShowSkillCheckSuccess_Params
	{
	public:
		bool                                                       IsBonus;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.SkillCheckPresenter.OnShowSkillCheckFail
	 */
	struct USkillCheckPresenter_OnShowSkillCheckFail_Params
	{	};

	/**
	 * Function DBDUIPresenters.SkillCheckPresenter.OnShowSkillCheck
	 */
	struct USkillCheckPresenter_OnShowSkillCheck_Params
	{	};

	/**
	 * Function DBDUIPresenters.SubtitlesPresenter.OnEntryTimedOut
	 */
	struct USubtitlesPresenter_OnEntryTimedOut_Params
	{	};

	/**
	 * Function DBDUIPresenters.UIConsoleCommands.DBD_ToggleTestWidget
	 */
	struct UUIConsoleCommands_DBD_ToggleTestWidget_Params
	{	};

	/**
	 * Function DBDUIPresenters.UIConsoleCommands.DBD_ToggleDPICurve
	 */
	struct UUIConsoleCommands_DBD_ToggleDPICurve_Params
	{	};

	/**
	 * Function DBDUIPresenters.UIConsoleCommands.DBD_SetMenuScaleFactor
	 */
	struct UUIConsoleCommands_DBD_SetMenuScaleFactor_Params
	{
	public:
		float                                                      ScaleFactor;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.UIConsoleCommands.DBD_SetHudVisible
	 */
	struct UUIConsoleCommands_DBD_SetHudVisible_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.UIConsoleCommands.DBD_SetHudScaleFactor
	 */
	struct UUIConsoleCommands_DBD_SetHudScaleFactor_Params
	{
	public:
		float                                                      ScaleFactor;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDUIPresenters.UIConsoleCommands.DBD_SetApplicationScale
	 */
	struct UUIConsoleCommands_DBD_SetApplicationScale_Params
	{
	public:
		float                                                      ApplicationScale;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
