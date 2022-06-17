/**
 * Name: DBD
 * Version: 601
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UUIComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUIComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIPresenters.UIComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPresenter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPresenter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIPresenters.Presenter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D8A000
	 * 		Name   -> Function DBDUIPresenters.BasePopupPresenter.OnContextLeave
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		EContext                                           Context                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBasePopupPresenter::OnContextLeave(EContext Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIPresenters.BasePopupPresenter.OnContextLeave");
		
		UBasePopupPresenter_OnContextLeave_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D89F80
	 * 		Name   -> Function DBDUIPresenters.BasePopupPresenter.OnContextEnter
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		EContext                                           Context                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBasePopupPresenter::OnContextEnter(EContext Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIPresenters.BasePopupPresenter.OnContextEnter");
		
		UBasePopupPresenter_OnContextEnter_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBasePopupPresenter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBasePopupPresenter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIPresenters.BasePopupPresenter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UContextObserver.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UContextObserver::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIPresenters.ContextObserver");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D89EA0
	 * 		Name   -> Function DBDUIPresenters.CreditsPresenter.OnBackAction
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UCreditsPresenter::OnBackAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIPresenters.CreditsPresenter.OnBackAction");
		
		UCreditsPresenter_OnBackAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D89C00
	 * 		Name   -> Function DBDUIPresenters.CreditsPresenter.Credits_ScrollToName
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Delay                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCreditsPresenter::Credits_ScrollToName(const class FString& Name, float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIPresenters.CreditsPresenter.Credits_ScrollToName");
		
		UCreditsPresenter_Credits_ScrollToName_Params params {};
		params.Name = Name;
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0376CF00
	 * 		Name   -> Function DBDUIPresenters.CreditsPresenter.Credits_ScrollToEnd
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UCreditsPresenter::Credits_ScrollToEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIPresenters.CreditsPresenter.Credits_ScrollToEnd");
		
		UCreditsPresenter_Credits_ScrollToEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCreditsPresenter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCreditsPresenter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIPresenters.CreditsPresenter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D8A250
	 * 		Name   -> Function DBDUIPresenters.HudPresenter.OnPawnUnpossessed
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHudPresenter::OnPawnUnpossessed(class APawn* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIPresenters.HudPresenter.OnPawnUnpossessed");
		
		UHudPresenter_OnPawnUnpossessed_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D8A1C0
	 * 		Name   -> Function DBDUIPresenters.HudPresenter.OnPawnPossessed
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHudPresenter::OnPawnPossessed(class APawn* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIPresenters.HudPresenter.OnPawnPossessed");
		
		UHudPresenter_OnPawnPossessed_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHudPresenter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHudPresenter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIPresenters.HudPresenter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D89EE0
	 * 		Name   -> Function DBDUIPresenters.ExamplePresenter.OnButtonClick
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UExamplePresenter::OnButtonClick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIPresenters.ExamplePresenter.OnButtonClick");
		
		UExamplePresenter_OnButtonClick_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UExamplePresenter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UExamplePresenter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIPresenters.ExamplePresenter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFocusHandler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFocusHandler::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIPresenters.FocusHandler");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USubPresenter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USubPresenter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIPresenters.SubPresenter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D89F00
	 * 		Name   -> Function DBDUIPresenters.GameManualSubPresenter.OnCategoryCategoryEntered
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		EHelpType                                          categoryType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameManualSubPresenter::OnCategoryCategoryEntered(EHelpType categoryType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIPresenters.GameManualSubPresenter.OnCategoryCategoryEntered");
		
		UGameManualSubPresenter_OnCategoryCategoryEntered_Params params {};
		params.categoryType = categoryType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGameManualSubPresenter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameManualSubPresenter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIPresenters.GameManualSubPresenter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D89E80
	 * 		Name   -> Function DBDUIPresenters.GenericPopupPresenter.OnBack
	 * 		Flags  -> (Native, Protected)
	 */
	void UGenericPopupPresenter::OnBack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIPresenters.GenericPopupPresenter.OnBack");
		
		UGenericPopupPresenter_OnBack_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D89E00
	 * 		Name   -> Function DBDUIPresenters.GenericPopupPresenter.OnAction
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		EPopupButtonType                                   popupAction                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGenericPopupPresenter::OnAction(EPopupButtonType popupAction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIPresenters.GenericPopupPresenter.OnAction");
		
		UGenericPopupPresenter_OnAction_Params params {};
		params.popupAction = popupAction;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGenericPopupPresenter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGenericPopupPresenter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIPresenters.GenericPopupPresenter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHudObjectivesPresenter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHudObjectivesPresenter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIPresenters.HudObjectivesPresenter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHudRootContainer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHudRootContainer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIPresenters.HudRootContainer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D8A3E0
	 * 		Name   -> Function DBDUIPresenters.OnboardingMenuPresenter.OnSetUIEnabled
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOnboardingMenuPresenter::OnSetUIEnabled(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIPresenters.OnboardingMenuPresenter.OnSetUIEnabled");
		
		UOnboardingMenuPresenter_OnSetUIEnabled_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D8A140
	 * 		Name   -> Function DBDUIPresenters.OnboardingMenuPresenter.OnMenuTabSelectedAgain
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		EOnboardingMenuState                               onboardingMenuState                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOnboardingMenuPresenter::OnMenuTabSelectedAgain(EOnboardingMenuState onboardingMenuState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIPresenters.OnboardingMenuPresenter.OnMenuTabSelectedAgain");
		
		UOnboardingMenuPresenter_OnMenuTabSelectedAgain_Params params {};
		params.onboardingMenuState = onboardingMenuState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D8A0C0
	 * 		Name   -> Function DBDUIPresenters.OnboardingMenuPresenter.OnMenuTabSelected
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		EOnboardingMenuState                               onboardingMenuState                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOnboardingMenuPresenter::OnMenuTabSelected(EOnboardingMenuState onboardingMenuState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIPresenters.OnboardingMenuPresenter.OnMenuTabSelected");
		
		UOnboardingMenuPresenter_OnMenuTabSelected_Params params {};
		params.onboardingMenuState = onboardingMenuState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D89EC0
	 * 		Name   -> Function DBDUIPresenters.OnboardingMenuPresenter.OnBackAction
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UOnboardingMenuPresenter::OnBackAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIPresenters.OnboardingMenuPresenter.OnBackAction");
		
		UOnboardingMenuPresenter_OnBackAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UOnboardingMenuPresenter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnboardingMenuPresenter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIPresenters.OnboardingMenuPresenter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D8A2E0
	 * 		Name   -> Function DBDUIPresenters.OnboardingTutorialSubPresenter.OnSelectTutorial
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class FString                                      stepId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      tutorialId                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOnboardingTutorialSubPresenter::OnSelectTutorial(const class FString& stepId, const class FString& tutorialId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIPresenters.OnboardingTutorialSubPresenter.OnSelectTutorial");
		
		UOnboardingTutorialSubPresenter_OnSelectTutorial_Params params {};
		params.stepId = stepId;
		params.tutorialId = tutorialId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UOnboardingTutorialSubPresenter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnboardingTutorialSubPresenter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIPresenters.OnboardingTutorialSubPresenter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D8A0A0
	 * 		Name   -> Function DBDUIPresenters.PawnObserver.OnLocallyObservedChanged
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UPawnObserver::OnLocallyObservedChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIPresenters.PawnObserver.OnLocallyObservedChanged");
		
		UPawnObserver_OnLocallyObservedChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPawnObserver.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPawnObserver::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIPresenters.PawnObserver");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction APresenterGroup.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APresenterGroup::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIPresenters.PresenterGroup");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPresenterGroupHandler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPresenterGroupHandler::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIPresenters.PresenterGroupHandler");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction URootContainer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URootContainer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIPresenters.RootContainer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D8A540
	 * 		Name   -> Function DBDUIPresenters.SkillCheckPresenter.OnUpdateSkillCheckVisual
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               IsActive                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USkillCheckPresenter::OnUpdateSkillCheckVisual(bool IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIPresenters.SkillCheckPresenter.OnUpdateSkillCheckVisual");
		
		USkillCheckPresenter_OnUpdateSkillCheckVisual_Params params {};
		params.IsActive = IsActive;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D8A4B0
	 * 		Name   -> Function DBDUIPresenters.SkillCheckPresenter.OnShowSkillCheckSuccess
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               IsBonus                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USkillCheckPresenter::OnShowSkillCheckSuccess(bool IsBonus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIPresenters.SkillCheckPresenter.OnShowSkillCheckSuccess");
		
		USkillCheckPresenter_OnShowSkillCheckSuccess_Params params {};
		params.IsBonus = IsBonus;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D8A490
	 * 		Name   -> Function DBDUIPresenters.SkillCheckPresenter.OnShowSkillCheckFail
	 * 		Flags  -> (Final, Native, Private)
	 */
	void USkillCheckPresenter::OnShowSkillCheckFail()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIPresenters.SkillCheckPresenter.OnShowSkillCheckFail");
		
		USkillCheckPresenter_OnShowSkillCheckFail_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D8A470
	 * 		Name   -> Function DBDUIPresenters.SkillCheckPresenter.OnShowSkillCheck
	 * 		Flags  -> (Final, Native, Private)
	 */
	void USkillCheckPresenter::OnShowSkillCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIPresenters.SkillCheckPresenter.OnShowSkillCheck");
		
		USkillCheckPresenter_OnShowSkillCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USkillCheckPresenter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USkillCheckPresenter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIPresenters.SkillCheckPresenter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D8A080
	 * 		Name   -> Function DBDUIPresenters.SubtitlesPresenter.OnEntryTimedOut
	 * 		Flags  -> (Final, Native, Private)
	 */
	void USubtitlesPresenter::OnEntryTimedOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIPresenters.SubtitlesPresenter.OnEntryTimedOut");
		
		USubtitlesPresenter_OnEntryTimedOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USubtitlesPresenter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USubtitlesPresenter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIPresenters.SubtitlesPresenter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTemplatePresenter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTemplatePresenter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIPresenters.TemplatePresenter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTestPresenter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTestPresenter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIPresenters.TestPresenter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0376CF00
	 * 		Name   -> Function DBDUIPresenters.UIConsoleCommands.DBD_ToggleTestWidget
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UUIConsoleCommands::DBD_ToggleTestWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIPresenters.UIConsoleCommands.DBD_ToggleTestWidget");
		
		UUIConsoleCommands_DBD_ToggleTestWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0376CF00
	 * 		Name   -> Function DBDUIPresenters.UIConsoleCommands.DBD_ToggleDPICurve
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UUIConsoleCommands::DBD_ToggleDPICurve()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIPresenters.UIConsoleCommands.DBD_ToggleDPICurve");
		
		UUIConsoleCommands_DBD_ToggleDPICurve_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D89CF0
	 * 		Name   -> Function DBDUIPresenters.UIConsoleCommands.DBD_SetMenuScaleFactor
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		float                                              ScaleFactor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUIConsoleCommands::DBD_SetMenuScaleFactor(float ScaleFactor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIPresenters.UIConsoleCommands.DBD_SetMenuScaleFactor");
		
		UUIConsoleCommands_DBD_SetMenuScaleFactor_Params params {};
		params.ScaleFactor = ScaleFactor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D89D70
	 * 		Name   -> Function DBDUIPresenters.UIConsoleCommands.DBD_SetHudVisible
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUIConsoleCommands::DBD_SetHudVisible(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIPresenters.UIConsoleCommands.DBD_SetHudVisible");
		
		UUIConsoleCommands_DBD_SetHudVisible_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D89CF0
	 * 		Name   -> Function DBDUIPresenters.UIConsoleCommands.DBD_SetHudScaleFactor
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		float                                              ScaleFactor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUIConsoleCommands::DBD_SetHudScaleFactor(float ScaleFactor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIPresenters.UIConsoleCommands.DBD_SetHudScaleFactor");
		
		UUIConsoleCommands_DBD_SetHudScaleFactor_Params params {};
		params.ScaleFactor = ScaleFactor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D89CF0
	 * 		Name   -> Function DBDUIPresenters.UIConsoleCommands.DBD_SetApplicationScale
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		float                                              ApplicationScale                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUIConsoleCommands::DBD_SetApplicationScale(float ApplicationScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIPresenters.UIConsoleCommands.DBD_SetApplicationScale");
		
		UUIConsoleCommands_DBD_SetApplicationScale_Params params {};
		params.ApplicationScale = ApplicationScale;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UUIConsoleCommands.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUIConsoleCommands::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIPresenters.UIConsoleCommands");
		return ptr;
	}

}


