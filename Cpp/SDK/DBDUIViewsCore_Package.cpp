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
	 * 		RVA    -> 0x03DCAD70
	 * 		Name   -> Function DBDUIViewsCore.AspectRatioBox.SetAspectRatio
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              inAspectRatio                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAspectRatioBox::SetAspectRatio(float inAspectRatio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.AspectRatioBox.SetAspectRatio");
		
		UAspectRatioBox_SetAspectRatio_Params params {};
		params.inAspectRatio = inAspectRatio;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DCA6C0
	 * 		Name   -> Function DBDUIViewsCore.AspectRatioBox.ClearAspectRatio
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UAspectRatioBox::ClearAspectRatio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.AspectRatioBox.ClearAspectRatio");
		
		UAspectRatioBox_ClearAspectRatio_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAspectRatioBox.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAspectRatioBox::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.AspectRatioBox");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DCB800
	 * 		Name   -> Function DBDUIViewsCore.AspectRatioBoxSlot.SetVerticalAlignment
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EVerticalAlignment                                 inVerticalAlignment                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAspectRatioBoxSlot::SetVerticalAlignment(EVerticalAlignment inVerticalAlignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.AspectRatioBoxSlot.SetVerticalAlignment");
		
		UAspectRatioBoxSlot_SetVerticalAlignment_Params params {};
		params.inVerticalAlignment = inVerticalAlignment;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DCB610
	 * 		Name   -> Function DBDUIViewsCore.AspectRatioBoxSlot.SetPadding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FMargin                                     InPadding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UAspectRatioBoxSlot::SetPadding(const struct FMargin& InPadding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.AspectRatioBoxSlot.SetPadding");
		
		UAspectRatioBoxSlot_SetPadding_Params params {};
		params.InPadding = InPadding;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DCB0B0
	 * 		Name   -> Function DBDUIViewsCore.AspectRatioBoxSlot.SetHorizontalAlignment
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EHorizontalAlignment                               inHorizontalAlignment                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAspectRatioBoxSlot::SetHorizontalAlignment(EHorizontalAlignment inHorizontalAlignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.AspectRatioBoxSlot.SetHorizontalAlignment");
		
		UAspectRatioBoxSlot_SetHorizontalAlignment_Params params {};
		params.inHorizontalAlignment = inHorizontalAlignment;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAspectRatioBoxSlot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAspectRatioBoxSlot::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.AspectRatioBoxSlot");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DCB950
	 * 		Name   -> Function DBDUIViewsCore.CoreBaseUserWidget.UpdateScale
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreBaseUserWidget::UpdateScale(float Scale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreBaseUserWidget.UpdateScale");
		
		UCoreBaseUserWidget_UpdateScale_Params params {};
		params.Scale = Scale;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DCAB20
	 * 		Name   -> Function DBDUIViewsCore.CoreBaseUserWidget.RegisterForInput
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UCoreBaseUserWidget::RegisterForInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreBaseUserWidget.RegisterForInput");
		
		UCoreBaseUserWidget_RegisterForInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDUIViewsCore.CoreBaseUserWidget.OnControlModeChangedBP
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EControlMode                                       controlMode                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreBaseUserWidget::OnControlModeChangedBP(EControlMode controlMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreBaseUserWidget.OnControlModeChangedBP");
		
		UCoreBaseUserWidget_OnControlModeChangedBP_Params params {};
		params.controlMode = controlMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DCA6E0
	 * 		Name   -> Function DBDUIViewsCore.CoreBaseUserWidget.DeregisterFromInput
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UCoreBaseUserWidget::DeregisterFromInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreBaseUserWidget.DeregisterFromInput");
		
		UCoreBaseUserWidget_DeregisterFromInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreBaseUserWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreBaseUserWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CoreBaseUserWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDUIViewsCore.CharacterTooltipWidget.SetTooltipData
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FCharacterTooltipViewData                   characterViewData                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCharacterTooltipWidget::SetTooltipData(const struct FCharacterTooltipViewData& characterViewData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CharacterTooltipWidget.SetTooltipData");
		
		UCharacterTooltipWidget_SetTooltipData_Params params {};
		params.characterViewData = characterViewData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DCB360
	 * 		Name   -> Function DBDUIViewsCore.CharacterTooltipWidget.SetLevel
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Level                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterTooltipWidget::SetLevel(int32_t Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CharacterTooltipWidget.SetLevel");
		
		UCharacterTooltipWidget_SetLevel_Params params {};
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DCAF10
	 * 		Name   -> Function DBDUIViewsCore.CharacterTooltipWidget.SetDifficulty
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		ECharacterDifficulty                               Difficulty                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterTooltipWidget::SetDifficulty(ECharacterDifficulty Difficulty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CharacterTooltipWidget.SetDifficulty");
		
		UCharacterTooltipWidget_SetDifficulty_Params params {};
		params.Difficulty = Difficulty;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCharacterTooltipWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCharacterTooltipWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CharacterTooltipWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DCB580
	 * 		Name   -> Function DBDUIViewsCore.CoreBaseLoadoutPartWidget.SetLoadoutStackCount
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            StackCount                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreBaseLoadoutPartWidget::SetLoadoutStackCount(int32_t StackCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreBaseLoadoutPartWidget.SetLoadoutStackCount");
		
		UCoreBaseLoadoutPartWidget_SetLoadoutStackCount_Params params {};
		params.StackCount = StackCount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DCB500
	 * 		Name   -> Function DBDUIViewsCore.CoreBaseLoadoutPartWidget.SetLoadoutPartRarity
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		EItemRarity                                        Rarity                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreBaseLoadoutPartWidget::SetLoadoutPartRarity(EItemRarity Rarity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreBaseLoadoutPartWidget.SetLoadoutPartRarity");
		
		UCoreBaseLoadoutPartWidget_SetLoadoutPartRarity_Params params {};
		params.Rarity = Rarity;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DCB3F0
	 * 		Name   -> Function DBDUIViewsCore.CoreBaseLoadoutPartWidget.SetLoadoutPartIcon
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UCoreBaseLoadoutPartWidget::SetLoadoutPartIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreBaseLoadoutPartWidget.SetLoadoutPartIcon");
		
		UCoreBaseLoadoutPartWidget_SetLoadoutPartIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreBaseLoadoutPartWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreBaseLoadoutPartWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CoreBaseLoadoutPartWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreAddonWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreAddonWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CoreAddonWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DCB900
	 * 		Name   -> Function DBDUIViewsCore.CoreBaseHudWidget.ShouldPlayFocusAnimation
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	bool UCoreBaseHudWidget::ShouldPlayFocusAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreBaseHudWidget.ShouldPlayFocusAnimation");
		
		UCoreBaseHudWidget_ShouldPlayFocusAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DCAA10
	 * 		Name   -> Function DBDUIViewsCore.CoreBaseHudWidget.PlayFocusAnimation
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UCoreBaseHudWidget::PlayFocusAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreBaseHudWidget.PlayFocusAnimation");
		
		UCoreBaseHudWidget_PlayFocusAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreBaseHudWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreBaseHudWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CoreBaseHudWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DCB730
	 * 		Name   -> Function DBDUIViewsCore.CoreButtonPromptWidget.SetText
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreButtonPromptWidget::SetText(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonPromptWidget.SetText");
		
		UCoreButtonPromptWidget_SetText_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DCB1C0
	 * 		Name   -> Function DBDUIViewsCore.CoreButtonPromptWidget.SetInputKey
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreButtonPromptWidget::SetInputKey(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonPromptWidget.SetInputKey");
		
		UCoreButtonPromptWidget_SetInputKey_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DCAC60
	 * 		Name   -> Function DBDUIViewsCore.CoreButtonPromptWidget.SetAction
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EUIActionType                                      ActionType                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreButtonPromptWidget::SetAction(EUIActionType ActionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonPromptWidget.SetAction");
		
		UCoreButtonPromptWidget_SetAction_Params params {};
		params.ActionType = ActionType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDUIViewsCore.CoreButtonPromptWidget.EnablePrompts
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UCoreButtonPromptWidget::EnablePrompts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonPromptWidget.EnablePrompts");
		
		UCoreButtonPromptWidget_EnablePrompts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDUIViewsCore.CoreButtonPromptWidget.DisablePrompts
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UCoreButtonPromptWidget::DisablePrompts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonPromptWidget.DisablePrompts");
		
		UCoreButtonPromptWidget_DisablePrompts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreButtonPromptWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreButtonPromptWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CoreButtonPromptWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DCB930
	 * 		Name   -> Function DBDUIViewsCore.CoreButtonSelector.UnselectCurrent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UCoreButtonSelector::UnselectCurrent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonSelector.UnselectCurrent");
		
		UCoreButtonSelector_UnselectCurrent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DCACE0
	 * 		Name   -> Function DBDUIViewsCore.CoreButtonSelector.SetAllEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreButtonSelector::SetAllEnabled(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonSelector.SetAllEnabled");
		
		UCoreButtonSelector_SetAllEnabled_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DCAC30
	 * 		Name   -> Function DBDUIViewsCore.CoreButtonSelector.SelectPrevious
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UCoreButtonSelector::SelectPrevious()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonSelector.SelectPrevious");
		
		UCoreButtonSelector_SelectPrevious_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DCAC00
	 * 		Name   -> Function DBDUIViewsCore.CoreButtonSelector.SelectNext
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UCoreButtonSelector::SelectNext()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonSelector.SelectNext");
		
		UCoreButtonSelector_SelectNext_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DCAB60
	 * 		Name   -> Function DBDUIViewsCore.CoreButtonSelector.Select
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UCoreSelectableButtonWidget*                 buttonToSelect                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCoreButtonSelector::Select(class UCoreSelectableButtonWidget* buttonToSelect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonSelector.Select");
		
		UCoreButtonSelector_Select_Params params {};
		params.buttonToSelect = buttonToSelect;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> DelegateFunction DBDUIViewsCore.CoreButtonSelector.OnUnselectedDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class UCoreSelectableButtonWidget*                 unselectedButton                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreButtonSelector::OnUnselectedDelegate__DelegateSignature(class UCoreSelectableButtonWidget* unselectedButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction DBDUIViewsCore.CoreButtonSelector.OnUnselectedDelegate__DelegateSignature");
		
		UCoreButtonSelector_OnUnselectedDelegate__DelegateSignature_Params params {};
		params.unselectedButton = unselectedButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> DelegateFunction DBDUIViewsCore.CoreButtonSelector.OnSelectedDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class UCoreSelectableButtonWidget*                 selectedButton                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreButtonSelector::OnSelectedDelegate__DelegateSignature(class UCoreSelectableButtonWidget* selectedButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction DBDUIViewsCore.CoreButtonSelector.OnSelectedDelegate__DelegateSignature");
		
		UCoreButtonSelector_OnSelectedDelegate__DelegateSignature_Params params {};
		params.selectedButton = selectedButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> DelegateFunction DBDUIViewsCore.CoreButtonSelector.OnSelectedAgainDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class UCoreSelectableButtonWidget*                 selectedButton                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreButtonSelector::OnSelectedAgainDelegate__DelegateSignature(class UCoreSelectableButtonWidget* selectedButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction DBDUIViewsCore.CoreButtonSelector.OnSelectedAgainDelegate__DelegateSignature");
		
		UCoreButtonSelector_OnSelectedAgainDelegate__DelegateSignature_Params params {};
		params.selectedButton = selectedButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DCA920
	 * 		Name   -> Function DBDUIViewsCore.CoreButtonSelector.OnButtonSelectedChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UCoreSelectableButtonWidget*                 selectedButton                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsSelected                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreButtonSelector::OnButtonSelectedChanged(class UCoreSelectableButtonWidget* selectedButton, bool IsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonSelector.OnButtonSelectedChanged");
		
		UCoreButtonSelector_OnButtonSelectedChanged_Params params {};
		params.selectedButton = selectedButton;
		params.IsSelected = IsSelected;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DCA890
	 * 		Name   -> Function DBDUIViewsCore.CoreButtonSelector.OnButtonSelectedAgain
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UCoreSelectableButtonWidget*                 selectedButton                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreButtonSelector::OnButtonSelectedAgain(class UCoreSelectableButtonWidget* selectedButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonSelector.OnButtonSelectedAgain");
		
		UCoreButtonSelector_OnButtonSelectedAgain_Params params {};
		params.selectedButton = selectedButton;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DCA700
	 * 		Name   -> Function DBDUIViewsCore.CoreButtonSelector.HasSelection
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UCoreButtonSelector::HasSelection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonSelector.HasSelection");
		
		UCoreButtonSelector_HasSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreButtonSelector.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreButtonSelector::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CoreButtonSelector");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DCB880
	 * 		Name   -> Function DBDUIViewsCore.CoreButtonWidget.SetVisible
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EButtonWidgetVisibility                            visible                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreButtonWidget::SetVisible(EButtonWidgetVisibility visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonWidget.SetVisible");
		
		UCoreButtonWidget_SetVisible_Params params {};
		params.visible = visible;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DCB6A0
	 * 		Name   -> Function DBDUIViewsCore.CoreButtonWidget.SetPressable
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               isPressable                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreButtonWidget::SetPressable(bool isPressable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonWidget.SetPressable");
		
		UCoreButtonWidget_SetPressable_Params params {};
		params.isPressable = isPressable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DCB290
	 * 		Name   -> Function DBDUIViewsCore.CoreButtonWidget.SetLabel
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FText                                        label                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreButtonWidget::SetLabel(const class FText& label)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonWidget.SetLabel");
		
		UCoreButtonWidget_SetLabel_Params params {};
		params.label = label;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DCB130
	 * 		Name   -> Function DBDUIViewsCore.CoreButtonWidget.SetHoverable
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               isHoverable                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreButtonWidget::SetHoverable(bool isHoverable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonWidget.SetHoverable");
		
		UCoreButtonWidget_SetHoverable_Params params {};
		params.isHoverable = isHoverable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DCB020
	 * 		Name   -> Function DBDUIViewsCore.CoreButtonWidget.SetHoldable
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               isHoldable                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreButtonWidget::SetHoldable(bool isHoldable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonWidget.SetHoldable");
		
		UCoreButtonWidget_SetHoldable_Params params {};
		params.isHoldable = isHoldable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DCAF90
	 * 		Name   -> Function DBDUIViewsCore.CoreButtonWidget.SetEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               IsEnabled                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreButtonWidget::SetEnabled(bool IsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonWidget.SetEnabled");
		
		UCoreButtonWidget_SetEnabled_Params params {};
		params.IsEnabled = IsEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DCAE80
	 * 		Name   -> Function DBDUIViewsCore.CoreButtonWidget.SetClickable
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               isClickable                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreButtonWidget::SetClickable(bool isClickable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonWidget.SetClickable");
		
		UCoreButtonWidget_SetClickable_Params params {};
		params.isClickable = isClickable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DCADF0
	 * 		Name   -> Function DBDUIViewsCore.CoreButtonWidget.SetChargeable
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               isChargeable                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreButtonWidget::SetChargeable(bool isChargeable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonWidget.SetChargeable");
		
		UCoreButtonWidget_SetChargeable_Params params {};
		params.isChargeable = isChargeable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> DelegateFunction DBDUIViewsCore.CoreButtonWidget.OnUnhoveredDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class UCoreButtonWidget*                           buttonTarget                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreButtonWidget::OnUnhoveredDelegate__DelegateSignature(class UCoreButtonWidget* buttonTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction DBDUIViewsCore.CoreButtonWidget.OnUnhoveredDelegate__DelegateSignature");
		
		UCoreButtonWidget_OnUnhoveredDelegate__DelegateSignature_Params params {};
		params.buttonTarget = buttonTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDUIViewsCore.CoreButtonWidget.OnUnhovered
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UCoreButtonWidget::OnUnhovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonWidget.OnUnhovered");
		
		UCoreButtonWidget_OnUnhovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> DelegateFunction DBDUIViewsCore.CoreButtonWidget.OnReleasedDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class UCoreButtonWidget*                           buttonTarget                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreButtonWidget::OnReleasedDelegate__DelegateSignature(class UCoreButtonWidget* buttonTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction DBDUIViewsCore.CoreButtonWidget.OnReleasedDelegate__DelegateSignature");
		
		UCoreButtonWidget_OnReleasedDelegate__DelegateSignature_Params params {};
		params.buttonTarget = buttonTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDUIViewsCore.CoreButtonWidget.OnReleased
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UCoreButtonWidget::OnReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonWidget.OnReleased");
		
		UCoreButtonWidget_OnReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> DelegateFunction DBDUIViewsCore.CoreButtonWidget.OnPressedDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class UCoreButtonWidget*                           buttonTarget                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreButtonWidget::OnPressedDelegate__DelegateSignature(class UCoreButtonWidget* buttonTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction DBDUIViewsCore.CoreButtonWidget.OnPressedDelegate__DelegateSignature");
		
		UCoreButtonWidget_OnPressedDelegate__DelegateSignature_Params params {};
		params.buttonTarget = buttonTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDUIViewsCore.CoreButtonWidget.OnPressed
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UCoreButtonWidget::OnPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonWidget.OnPressed");
		
		UCoreButtonWidget_OnPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DCAA70
	 * 		Name   -> Function DBDUIViewsCore.CoreButtonWidget.OnInternalUnhovered
	 * 		Flags  -> (Native, Protected)
	 */
	void UCoreButtonWidget::OnInternalUnhovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonWidget.OnInternalUnhovered");
		
		UCoreButtonWidget_OnInternalUnhovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DCAA50
	 * 		Name   -> Function DBDUIViewsCore.CoreButtonWidget.OnInternalReleased
	 * 		Flags  -> (Native, Protected)
	 */
	void UCoreButtonWidget::OnInternalReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonWidget.OnInternalReleased");
		
		UCoreButtonWidget_OnInternalReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DCAA30
	 * 		Name   -> Function DBDUIViewsCore.CoreButtonWidget.OnInternalPressed
	 * 		Flags  -> (Native, Protected)
	 */
	void UCoreButtonWidget::OnInternalPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonWidget.OnInternalPressed");
		
		UCoreButtonWidget_OnInternalPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DCAA10
	 * 		Name   -> Function DBDUIViewsCore.CoreButtonWidget.OnInternalHovered
	 * 		Flags  -> (Native, Protected)
	 */
	void UCoreButtonWidget::OnInternalHovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonWidget.OnInternalHovered");
		
		UCoreButtonWidget_OnInternalHovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DCA9F0
	 * 		Name   -> Function DBDUIViewsCore.CoreButtonWidget.OnInternalClicked
	 * 		Flags  -> (Native, Protected)
	 */
	void UCoreButtonWidget::OnInternalClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonWidget.OnInternalClicked");
		
		UCoreButtonWidget_OnInternalClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> DelegateFunction DBDUIViewsCore.CoreButtonWidget.OnHoveredDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class UCoreButtonWidget*                           buttonTarget                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreButtonWidget::OnHoveredDelegate__DelegateSignature(class UCoreButtonWidget* buttonTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction DBDUIViewsCore.CoreButtonWidget.OnHoveredDelegate__DelegateSignature");
		
		UCoreButtonWidget_OnHoveredDelegate__DelegateSignature_Params params {};
		params.buttonTarget = buttonTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDUIViewsCore.CoreButtonWidget.OnHovered
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UCoreButtonWidget::OnHovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonWidget.OnHovered");
		
		UCoreButtonWidget_OnHovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDUIViewsCore.CoreButtonWidget.OnEnabledChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsEnabled                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreButtonWidget::OnEnabledChanged(bool IsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonWidget.OnEnabledChanged");
		
		UCoreButtonWidget_OnEnabledChanged_Params params {};
		params.IsEnabled = IsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> DelegateFunction DBDUIViewsCore.CoreButtonWidget.OnClickedDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class UCoreButtonWidget*                           buttonTarget                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreButtonWidget::OnClickedDelegate__DelegateSignature(class UCoreButtonWidget* buttonTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction DBDUIViewsCore.CoreButtonWidget.OnClickedDelegate__DelegateSignature");
		
		UCoreButtonWidget_OnClickedDelegate__DelegateSignature_Params params {};
		params.buttonTarget = buttonTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDUIViewsCore.CoreButtonWidget.OnClicked
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UCoreButtonWidget::OnClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonWidget.OnClicked");
		
		UCoreButtonWidget_OnClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DCA870
	 * 		Name   -> Function DBDUIViewsCore.CoreButtonWidget.IsEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UCoreButtonWidget::IsEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonWidget.IsEnabled");
		
		UCoreButtonWidget_IsEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreButtonWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreButtonWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CoreButtonWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD6870
	 * 		Name   -> Function DBDUIViewsCore.CoreRewardWidget.SetIsLocked
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               IsLocked                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreRewardWidget::SetIsLocked(bool IsLocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreRewardWidget.SetIsLocked");
		
		UCoreRewardWidget_SetIsLocked_Params params {};
		params.IsLocked = IsLocked;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDUIViewsCore.CoreRewardWidget.ClearData
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UCoreRewardWidget::ClearData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreRewardWidget.ClearData");
		
		UCoreRewardWidget_ClearData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreRewardWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreRewardWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CoreRewardWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDUIViewsCore.CoreCharacterRewardWidget.SetData
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCharacterRewardViewData                    CharacterRewardViewData                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreCharacterRewardWidget::SetData(const struct FCharacterRewardViewData& CharacterRewardViewData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreCharacterRewardWidget.SetData");
		
		UCoreCharacterRewardWidget_SetData_Params params {};
		params.CharacterRewardViewData = CharacterRewardViewData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreCharacterRewardWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreCharacterRewardWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CoreCharacterRewardWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DCAB40
	 * 		Name   -> Function DBDUIViewsCore.CoreCreditsWidget.ScrollText
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UCoreCreditsWidget::ScrollText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreCreditsWidget.ScrollText");
		
		UCoreCreditsWidget_ScrollText_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DCAA90
	 * 		Name   -> Function DBDUIViewsCore.CoreCreditsWidget.OnScrollEnd
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UUITweenInstance*                            tween                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreCreditsWidget::OnScrollEnd(class UUITweenInstance* tween)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreCreditsWidget.OnScrollEnd");
		
		UCoreCreditsWidget_OnScrollEnd_Params params {};
		params.tween = tween;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreCreditsWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreCreditsWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CoreCreditsWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDUIViewsCore.CoreCurrencyProgressionRewardWidget.SetData
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCurrencyProgressionRewardViewData          CurrencyProgressionRewardViewData                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreCurrencyProgressionRewardWidget::SetData(const struct FCurrencyProgressionRewardViewData& CurrencyProgressionRewardViewData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreCurrencyProgressionRewardWidget.SetData");
		
		UCoreCurrencyProgressionRewardWidget_SetData_Params params {};
		params.CurrencyProgressionRewardViewData = CurrencyProgressionRewardViewData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreCurrencyProgressionRewardWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreCurrencyProgressionRewardWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CoreCurrencyProgressionRewardWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDUIViewsCore.CoreCustomizationRewardWidget.SetData
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCustomizationRewardViewData                CustomizationRewardViewData                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreCustomizationRewardWidget::SetData(const struct FCustomizationRewardViewData& CustomizationRewardViewData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreCustomizationRewardWidget.SetData");
		
		UCoreCustomizationRewardWidget_SetData_Params params {};
		params.CustomizationRewardViewData = CustomizationRewardViewData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreCustomizationRewardWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreCustomizationRewardWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CoreCustomizationRewardWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDUIViewsCore.CoreEndGameCollapseBarWidget.UpdateBarProgression
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Progress                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreEndGameCollapseBarWidget::UpdateBarProgression(float Progress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreEndGameCollapseBarWidget.UpdateBarProgression");
		
		UCoreEndGameCollapseBarWidget_UpdateBarProgression_Params params {};
		params.Progress = Progress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDUIViewsCore.CoreEndGameCollapseBarWidget.PlayToZeroAnimation
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UCoreEndGameCollapseBarWidget::PlayToZeroAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreEndGameCollapseBarWidget.PlayToZeroAnimation");
		
		UCoreEndGameCollapseBarWidget_PlayToZeroAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreEndGameCollapseBarWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreEndGameCollapseBarWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CoreEndGameCollapseBarWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreEndGameCollapseProgressWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreEndGameCollapseProgressWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CoreEndGameCollapseProgressWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreEquippedItemWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreEquippedItemWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CoreEquippedItemWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreEquippedPowerWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreEquippedPowerWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CoreEquippedPowerWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreExampleWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreExampleWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CoreExampleWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DCA7D0
	 * 		Name   -> Function DBDUIViewsCore.CoreExternalEffectsWidget.HideExternalPerk
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		class FName                                        perkId                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreExternalEffectsWidget::HideExternalPerk(const class FName& perkId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreExternalEffectsWidget.HideExternalPerk");
		
		UCoreExternalEffectsWidget_HideExternalPerk_Params params {};
		params.perkId = perkId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DCA730
	 * 		Name   -> Function DBDUIViewsCore.CoreExternalEffectsWidget.HideExternalAddon
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		class FName                                        AddonID                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreExternalEffectsWidget::HideExternalAddon(const class FName& AddonID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreExternalEffectsWidget.HideExternalAddon");
		
		UCoreExternalEffectsWidget_HideExternalAddon_Params params {};
		params.AddonID = AddonID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreExternalEffectsWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreExternalEffectsWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CoreExternalEffectsWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD1450
	 * 		Name   -> Function DBDUIViewsCore.CoreGameManualCategoryButton.SetText
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FText                                        Title                                                      (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		class FText                                        Description                                                (ConstParm, Parm, NativeAccessSpecifierPublic)
	 */
	void UCoreGameManualCategoryButton::SetText(const class FText& Title, const class FText& Description)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreGameManualCategoryButton.SetText");
		
		UCoreGameManualCategoryButton_SetText_Params params {};
		params.Title = Title;
		params.Description = Description;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreGameManualCategoryButton.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreGameManualCategoryButton::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CoreGameManualCategoryButton");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD18D0
	 * 		Name   -> Function DBDUIViewsCore.CoreGameManualPanelWidget.ToggleGameManualMenuState
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable)
	 */
	void UCoreGameManualPanelWidget::ToggleGameManualMenuState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreGameManualPanelWidget.ToggleGameManualMenuState");
		
		UCoreGameManualPanelWidget_ToggleGameManualMenuState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD1830
	 * 		Name   -> Function DBDUIViewsCore.CoreGameManualPanelWidget.ShowHelpTopics
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable)
	 * Parameters:
	 * 		EHelpType                                          categoryType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreGameManualPanelWidget::ShowHelpTopics(EHelpType categoryType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreGameManualPanelWidget.ShowHelpTopics");
		
		UCoreGameManualPanelWidget_ShowHelpTopics_Params params {};
		params.categoryType = categoryType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD09B0
	 * 		Name   -> Function DBDUIViewsCore.CoreGameManualPanelWidget.SetGameManualMenuState
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable)
	 * Parameters:
	 * 		EGameManualMenuState                               menuState                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreGameManualPanelWidget::SetGameManualMenuState(EGameManualMenuState menuState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreGameManualPanelWidget.SetGameManualMenuState");
		
		UCoreGameManualPanelWidget_SetGameManualMenuState_Params params {};
		params.menuState = menuState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD07E0
	 * 		Name   -> Function DBDUIViewsCore.CoreGameManualPanelWidget.SetCurrentOnbardingMenuSubtitle
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable)
	 */
	void UCoreGameManualPanelWidget::SetCurrentOnbardingMenuSubtitle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreGameManualPanelWidget.SetCurrentOnbardingMenuSubtitle");
		
		UCoreGameManualPanelWidget_SetCurrentOnbardingMenuSubtitle_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDUIViewsCore.CoreGameManualPanelWidget.ResetScrolls
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               resetTopicsScroll                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreGameManualPanelWidget::ResetScrolls(bool resetTopicsScroll)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreGameManualPanelWidget.ResetScrolls");
		
		UCoreGameManualPanelWidget_ResetScrolls_Params params {};
		params.resetTopicsScroll = resetTopicsScroll;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD06F0
	 * 		Name   -> Function DBDUIViewsCore.CoreGameManualPanelWidget.OnTopicsTabSelected
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UCoreSelectableButtonWidget*                 selectedButton                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreGameManualPanelWidget::OnTopicsTabSelected(class UCoreSelectableButtonWidget* selectedButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreGameManualPanelWidget.OnTopicsTabSelected");
		
		UCoreGameManualPanelWidget_OnTopicsTabSelected_Params params {};
		params.selectedButton = selectedButton;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreGameManualPanelWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreGameManualPanelWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CoreGameManualPanelWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDUIViewsCore.CoreGenericPopupWidget.Show
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UGenericPopupViewData*                       Data                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreGenericPopupWidget::Show(class UGenericPopupViewData* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreGenericPopupWidget.Show");
		
		UCoreGenericPopupWidget_Show_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD06D0
	 * 		Name   -> Function DBDUIViewsCore.CoreGenericPopupWidget.OnRegressionAction
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UCoreGenericPopupWidget::OnRegressionAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreGenericPopupWidget.OnRegressionAction");
		
		UCoreGenericPopupWidget_OnRegressionAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD06B0
	 * 		Name   -> Function DBDUIViewsCore.CoreGenericPopupWidget.OnProgressionAction
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UCoreGenericPopupWidget::OnProgressionAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreGenericPopupWidget.OnProgressionAction");
		
		UCoreGenericPopupWidget_OnProgressionAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD0430
	 * 		Name   -> Function DBDUIViewsCore.CoreGenericPopupWidget.OnAlternativeAction
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UCoreGenericPopupWidget::OnAlternativeAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreGenericPopupWidget.OnAlternativeAction");
		
		UCoreGenericPopupWidget_OnAlternativeAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDUIViewsCore.CoreGenericPopupWidget.Hide
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UCoreGenericPopupWidget::Hide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreGenericPopupWidget.Hide");
		
		UCoreGenericPopupWidget_Hide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreGenericPopupWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreGenericPopupWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CoreGenericPopupWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreHookCountWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreHookCountWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CoreHookCountWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD07A0
	 * 		Name   -> Function DBDUIViewsCore.CoreHudAlertWidget.PopAlert
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UCoreHudAlertWidget::PopAlert()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreHudAlertWidget.PopAlert");
		
		UCoreHudAlertWidget_PopAlert_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD0620
	 * 		Name   -> Function DBDUIViewsCore.CoreHudAlertWidget.OnPopAlertComplete
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UUITweenInstance*                            tween                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreHudAlertWidget::OnPopAlertComplete(class UUITweenInstance* tween)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreHudAlertWidget.OnPopAlertComplete");
		
		UCoreHudAlertWidget_OnPopAlertComplete_Params params {};
		params.tween = tween;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD04E0
	 * 		Name   -> Function DBDUIViewsCore.CoreHudAlertWidget.OnClearAlertsComplete
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UUITweenInstance*                            tween                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreHudAlertWidget::OnClearAlertsComplete(class UUITweenInstance* tween)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreHudAlertWidget.OnClearAlertsComplete");
		
		UCoreHudAlertWidget_OnClearAlertsComplete_Params params {};
		params.tween = tween;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD0260
	 * 		Name   -> Function DBDUIViewsCore.CoreHudAlertWidget.GetRemainingTime
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	float UCoreHudAlertWidget::GetRemainingTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreHudAlertWidget.GetRemainingTime");
		
		UCoreHudAlertWidget_GetRemainingTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD01A0
	 * 		Name   -> Function DBDUIViewsCore.CoreHudAlertWidget.GetPendingAlerts
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class UCoreBaseUserWidget*> UCoreHudAlertWidget::GetPendingAlerts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreHudAlertWidget.GetPendingAlerts");
		
		UCoreHudAlertWidget_GetPendingAlerts_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DCFF30
	 * 		Name   -> Function DBDUIViewsCore.CoreHudAlertWidget.GetAlerts
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class UCoreBaseUserWidget*> UCoreHudAlertWidget::GetAlerts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreHudAlertWidget.GetAlerts");
		
		UCoreHudAlertWidget_GetAlerts_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DCFF10
	 * 		Name   -> Function DBDUIViewsCore.CoreHudAlertWidget.ClearAlerts
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UCoreHudAlertWidget::ClearAlerts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreHudAlertWidget.ClearAlerts");
		
		UCoreHudAlertWidget_ClearAlerts_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreHudAlertWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreHudAlertWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CoreHudAlertWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreHudObjectivesWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreHudObjectivesWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CoreHudObjectivesWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDUIViewsCore.CoreHudScoreAlertItem.SetData
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FScoreAlertViewData                         Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreHudScoreAlertItem::SetData(const struct FScoreAlertViewData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreHudScoreAlertItem.SetData");
		
		UCoreHudScoreAlertItem_SetData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreHudScoreAlertItem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreHudScoreAlertItem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CoreHudScoreAlertItem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDUIViewsCore.CoreHudStatusEffectAlertItem.SetData
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FStatusEffectAlertViewData                  Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreHudStatusEffectAlertItem::SetData(const struct FStatusEffectAlertViewData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreHudStatusEffectAlertItem.SetData");
		
		UCoreHudStatusEffectAlertItem_SetData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreHudStatusEffectAlertItem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreHudStatusEffectAlertItem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CoreHudStatusEffectAlertItem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD15E0
	 * 		Name   -> Function DBDUIViewsCore.CoreInputPromptTextWidget.SetText
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreInputPromptTextWidget::SetText(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInputPromptTextWidget.SetText");
		
		UCoreInputPromptTextWidget_SetText_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD0CA0
	 * 		Name   -> Function DBDUIViewsCore.CoreInputPromptTextWidget.SetInputKey
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FKey                                        InputKey                                                   (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreInputPromptTextWidget::SetInputKey(const struct FKey& InputKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInputPromptTextWidget.SetInputKey");
		
		UCoreInputPromptTextWidget_SetInputKey_Params params {};
		params.InputKey = InputKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreInputPromptTextWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreInputPromptTextWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CoreInputPromptTextWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD0D70
	 * 		Name   -> Function DBDUIViewsCore.CoreInputPromptWidget.SetInputKey
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FKey                                        InputKey                                                   (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreInputPromptWidget::SetInputKey(const struct FKey& InputKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInputPromptWidget.SetInputKey");
		
		UCoreInputPromptWidget_SetInputKey_Params params {};
		params.InputKey = InputKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD0800
	 * 		Name   -> Function DBDUIViewsCore.CoreInputPromptWidget.SetEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               IsEnabled                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreInputPromptWidget::SetEnabled(bool IsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInputPromptWidget.SetEnabled");
		
		UCoreInputPromptWidget_SetEnabled_Params params {};
		params.IsEnabled = IsEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD07C0
	 * 		Name   -> Function DBDUIViewsCore.CoreInputPromptWidget.PromptNotFound
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UCoreInputPromptWidget::PromptNotFound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInputPromptWidget.PromptNotFound");
		
		UCoreInputPromptWidget_PromptNotFound_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDUIViewsCore.CoreInputPromptWidget.OnEnabledChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsEnabled                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreInputPromptWidget::OnEnabledChanged(bool IsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInputPromptWidget.OnEnabledChanged");
		
		UCoreInputPromptWidget_OnEnabledChanged_Params params {};
		params.IsEnabled = IsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD03E0
	 * 		Name   -> Function DBDUIViewsCore.CoreInputPromptWidget.IsEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UCoreInputPromptWidget::IsEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInputPromptWidget.IsEnabled");
		
		UCoreInputPromptWidget_IsEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD0100
	 * 		Name   -> Function DBDUIViewsCore.CoreInputPromptWidget.GetInputShortDisplayName
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class FText UCoreInputPromptWidget::GetInputShortDisplayName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInputPromptWidget.GetInputShortDisplayName");
		
		UCoreInputPromptWidget_GetInputShortDisplayName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD0010
	 * 		Name   -> Function DBDUIViewsCore.CoreInputPromptWidget.GetInputKey
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	struct FKey UCoreInputPromptWidget::GetInputKey()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInputPromptWidget.GetInputKey");
		
		UCoreInputPromptWidget_GetInputKey_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDUIViewsCore.CoreInputPromptWidget.DisplayPrompt
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UCoreInputPromptWidget::DisplayPrompt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInputPromptWidget.DisplayPrompt");
		
		UCoreInputPromptWidget_DisplayPrompt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreInputPromptWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreInputPromptWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CoreInputPromptWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD16B0
	 * 		Name   -> Function DBDUIViewsCore.CoreInputSwitcherWidget.SetUIAction
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EUIActionType                                      ActionType                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreInputSwitcherWidget::SetUIAction(EUIActionType ActionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInputSwitcherWidget.SetUIAction");
		
		UCoreInputSwitcherWidget_SetUIAction_Params params {};
		params.ActionType = ActionType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD11E0
	 * 		Name   -> Function DBDUIViewsCore.CoreInputSwitcherWidget.SetLabel
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FText                                        label                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreInputSwitcherWidget::SetLabel(const class FText& label)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInputSwitcherWidget.SetLabel");
		
		UCoreInputSwitcherWidget_SetLabel_Params params {};
		params.label = label;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD0F10
	 * 		Name   -> Function DBDUIViewsCore.CoreInputSwitcherWidget.SetKeyOverride
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FKey                                        keyOverride                                                (ConstParm, Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreInputSwitcherWidget::SetKeyOverride(const struct FKey& keyOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInputSwitcherWidget.SetKeyOverride");
		
		UCoreInputSwitcherWidget_SetKeyOverride_Params params {};
		params.keyOverride = keyOverride;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD0890
	 * 		Name   -> Function DBDUIViewsCore.CoreInputSwitcherWidget.SetEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               IsEnabled                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreInputSwitcherWidget::SetEnabled(bool IsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInputSwitcherWidget.SetEnabled");
		
		UCoreInputSwitcherWidget_SetEnabled_Params params {};
		params.IsEnabled = IsEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD0570
	 * 		Name   -> Function DBDUIViewsCore.CoreInputSwitcherWidget.OnInputPromptTriggered
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UCoreInputSwitcherWidget::OnInputPromptTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInputSwitcherWidget.OnInputPromptTriggered");
		
		UCoreInputSwitcherWidget_OnInputPromptTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD0450
	 * 		Name   -> Function DBDUIViewsCore.CoreInputSwitcherWidget.OnButtonClicked
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UCoreButtonWidget*                           Target                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreInputSwitcherWidget::OnButtonClicked(class UCoreButtonWidget* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInputSwitcherWidget.OnButtonClicked");
		
		UCoreInputSwitcherWidget_OnButtonClicked_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDUIViewsCore.CoreInputSwitcherWidget.OnAlignmentChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		ETextJustify                                       newAlignment                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreInputSwitcherWidget::OnAlignmentChanged(ETextJustify newAlignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInputSwitcherWidget.OnAlignmentChanged");
		
		UCoreInputSwitcherWidget_OnAlignmentChanged_Params params {};
		params.newAlignment = newAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD00E0
	 * 		Name   -> Function DBDUIViewsCore.CoreInputSwitcherWidget.GetInputPrompt
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UCoreKeyListenerInputPromptWidget* UCoreInputSwitcherWidget::GetInputPrompt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInputSwitcherWidget.GetInputPrompt");
		
		UCoreInputSwitcherWidget_GetInputPrompt_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DCFFF0
	 * 		Name   -> Function DBDUIViewsCore.CoreInputSwitcherWidget.GetButton
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UCoreButtonWidget* UCoreInputSwitcherWidget::GetButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInputSwitcherWidget.GetButton");
		
		UCoreInputSwitcherWidget_GetButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreInputSwitcherWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreInputSwitcherWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CoreInputSwitcherWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD1380
	 * 		Name   -> Function DBDUIViewsCore.CoreInteractionProgressWidget.SetProficiencies
	 * 		Flags  -> (Final, Native, Protected, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FStatusEffectViewData>               proficiencyDatas                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreInteractionProgressWidget::SetProficiencies(TArray<struct FStatusEffectViewData> proficiencyDatas)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInteractionProgressWidget.SetProficiencies");
		
		UCoreInteractionProgressWidget_SetProficiencies_Params params {};
		params.proficiencyDatas = proficiencyDatas;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreInteractionProgressWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreInteractionProgressWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CoreInteractionProgressWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD18B0
	 * 		Name   -> Function DBDUIViewsCore.CoreInteractionPromptActionWidget.StopIdleAnimation
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UCoreInteractionPromptActionWidget::StopIdleAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInteractionPromptActionWidget.StopIdleAnimation");
		
		UCoreInteractionPromptActionWidget_StopIdleAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD0BD0
	 * 		Name   -> Function DBDUIViewsCore.CoreInteractionPromptActionWidget.SetInputKey4
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FKey                                        InputKey4                                                  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreInteractionPromptActionWidget::SetInputKey4(const struct FKey& InputKey4)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInteractionPromptActionWidget.SetInputKey4");
		
		UCoreInteractionPromptActionWidget_SetInputKey4_Params params {};
		params.InputKey4 = InputKey4;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD0B00
	 * 		Name   -> Function DBDUIViewsCore.CoreInteractionPromptActionWidget.SetInputKey3
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FKey                                        InputKey3                                                  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreInteractionPromptActionWidget::SetInputKey3(const struct FKey& InputKey3)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInteractionPromptActionWidget.SetInputKey3");
		
		UCoreInteractionPromptActionWidget_SetInputKey3_Params params {};
		params.InputKey3 = InputKey3;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD0A30
	 * 		Name   -> Function DBDUIViewsCore.CoreInteractionPromptActionWidget.SetInputKey2
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FKey                                        InputKey2                                                  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreInteractionPromptActionWidget::SetInputKey2(const struct FKey& InputKey2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInteractionPromptActionWidget.SetInputKey2");
		
		UCoreInteractionPromptActionWidget_SetInputKey2_Params params {};
		params.InputKey2 = InputKey2;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD0E40
	 * 		Name   -> Function DBDUIViewsCore.CoreInteractionPromptActionWidget.SetInputKey
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FKey                                        InputKey                                                   (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreInteractionPromptActionWidget::SetInputKey(const struct FKey& InputKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInteractionPromptActionWidget.SetInputKey");
		
		UCoreInteractionPromptActionWidget_SetInputKey_Params params {};
		params.InputKey = InputKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD0780
	 * 		Name   -> Function DBDUIViewsCore.CoreInteractionPromptActionWidget.PlayIdleAnimation
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UCoreInteractionPromptActionWidget::PlayIdleAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInteractionPromptActionWidget.PlayIdleAnimation");
		
		UCoreInteractionPromptActionWidget_PlayIdleAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD0370
	 * 		Name   -> Function DBDUIViewsCore.CoreInteractionPromptActionWidget.HasThirdPrompt
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UCoreInteractionPromptActionWidget::HasThirdPrompt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInteractionPromptActionWidget.HasThirdPrompt");
		
		UCoreInteractionPromptActionWidget_HasThirdPrompt_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD0300
	 * 		Name   -> Function DBDUIViewsCore.CoreInteractionPromptActionWidget.HasSecondPrompt
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UCoreInteractionPromptActionWidget::HasSecondPrompt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInteractionPromptActionWidget.HasSecondPrompt");
		
		UCoreInteractionPromptActionWidget_HasSecondPrompt_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD0290
	 * 		Name   -> Function DBDUIViewsCore.CoreInteractionPromptActionWidget.HasFourthPrompt
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UCoreInteractionPromptActionWidget::HasFourthPrompt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInteractionPromptActionWidget.HasFourthPrompt");
		
		UCoreInteractionPromptActionWidget_HasFourthPrompt_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreInteractionPromptActionWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreInteractionPromptActionWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CoreInteractionPromptActionWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreInteractionPromptsContainerWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreInteractionPromptsContainerWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CoreInteractionPromptsContainerWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDUIViewsCore.CoreInteractionPromptWidget.SetData
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FInteractionPromptViewData                  Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreInteractionPromptWidget::SetData(const struct FInteractionPromptViewData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInteractionPromptWidget.SetData");
		
		UCoreInteractionPromptWidget_SetData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD0590
	 * 		Name   -> Function DBDUIViewsCore.CoreInteractionPromptWidget.OnLargeTextSettingsChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               isLargeTextEnabled                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreInteractionPromptWidget::OnLargeTextSettingsChanged(bool isLargeTextEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInteractionPromptWidget.OnLargeTextSettingsChanged");
		
		UCoreInteractionPromptWidget_OnLargeTextSettingsChanged_Params params {};
		params.isLargeTextEnabled = isLargeTextEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDUIViewsCore.CoreInteractionPromptWidget.ClearData
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UCoreInteractionPromptWidget::ClearData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInteractionPromptWidget.ClearData");
		
		UCoreInteractionPromptWidget_ClearData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreInteractionPromptWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreInteractionPromptWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CoreInteractionPromptWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreItemBundleWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreItemBundleWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CoreItemBundleWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreItemInteractionWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreItemInteractionWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CoreItemInteractionWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreItemWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreItemWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CoreItemWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD1730
	 * 		Name   -> Function DBDUIViewsCore.CoreKeyListenerButtontWidget.SetUIAction
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EUIActionType                                      ActionType                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreKeyListenerButtontWidget::SetUIAction(EUIActionType ActionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreKeyListenerButtontWidget.SetUIAction");
		
		UCoreKeyListenerButtontWidget_SetUIAction_Params params {};
		params.ActionType = ActionType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD1000
	 * 		Name   -> Function DBDUIViewsCore.CoreKeyListenerButtontWidget.SetKeyOverride
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FKey                                        keyOverride                                                (ConstParm, Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreKeyListenerButtontWidget::SetKeyOverride(const struct FKey& keyOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreKeyListenerButtontWidget.SetKeyOverride");
		
		UCoreKeyListenerButtontWidget_SetKeyOverride_Params params {};
		params.keyOverride = keyOverride;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreKeyListenerButtontWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreKeyListenerButtontWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CoreKeyListenerButtontWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD17B0
	 * 		Name   -> Function DBDUIViewsCore.CoreKeyListenerInputPromptWidget.SetUIAction
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EUIActionType                                      ActionType                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreKeyListenerInputPromptWidget::SetUIAction(EUIActionType ActionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreKeyListenerInputPromptWidget.SetUIAction");
		
		UCoreKeyListenerInputPromptWidget_SetUIAction_Params params {};
		params.ActionType = ActionType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD12B0
	 * 		Name   -> Function DBDUIViewsCore.CoreKeyListenerInputPromptWidget.SetLabel
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FText                                        label                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreKeyListenerInputPromptWidget::SetLabel(const class FText& label)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreKeyListenerInputPromptWidget.SetLabel");
		
		UCoreKeyListenerInputPromptWidget_SetLabel_Params params {};
		params.label = label;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD10F0
	 * 		Name   -> Function DBDUIViewsCore.CoreKeyListenerInputPromptWidget.SetKeyOverride
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FKey                                        keyOverride                                                (ConstParm, Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreKeyListenerInputPromptWidget::SetKeyOverride(const struct FKey& keyOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreKeyListenerInputPromptWidget.SetKeyOverride");
		
		UCoreKeyListenerInputPromptWidget_SetKeyOverride_Params params {};
		params.keyOverride = keyOverride;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD0920
	 * 		Name   -> Function DBDUIViewsCore.CoreKeyListenerInputPromptWidget.SetEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               IsEnabled                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreKeyListenerInputPromptWidget::SetEnabled(bool IsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreKeyListenerInputPromptWidget.SetEnabled");
		
		UCoreKeyListenerInputPromptWidget_SetEnabled_Params params {};
		params.IsEnabled = IsEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDUIViewsCore.CoreKeyListenerInputPromptWidget.OnEnabledChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsEnabled                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreKeyListenerInputPromptWidget::OnEnabledChanged(bool IsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreKeyListenerInputPromptWidget.OnEnabledChanged");
		
		UCoreKeyListenerInputPromptWidget_OnEnabledChanged_Params params {};
		params.IsEnabled = IsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD0400
	 * 		Name   -> Function DBDUIViewsCore.CoreKeyListenerInputPromptWidget.IsEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UCoreKeyListenerInputPromptWidget::IsEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreKeyListenerInputPromptWidget.IsEnabled");
		
		UCoreKeyListenerInputPromptWidget_IsEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreKeyListenerInputPromptWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreKeyListenerInputPromptWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CoreKeyListenerInputPromptWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreLeaningArrowsWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreLeaningArrowsWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CoreLeaningArrowsWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreMatchResultWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreMatchResultWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CoreMatchResultWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD6A20
	 * 		Name   -> Function DBDUIViewsCore.CoreMenuLoadoutPartWidget.SetLoadoutPartScale
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreMenuLoadoutPartWidget::SetLoadoutPartScale(float Scale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreMenuLoadoutPartWidget.SetLoadoutPartScale");
		
		UCoreMenuLoadoutPartWidget_SetLoadoutPartScale_Params params {};
		params.Scale = Scale;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD6990
	 * 		Name   -> Function DBDUIViewsCore.CoreMenuLoadoutPartWidget.SetLoadoutPartData
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		class UMenuLoadoutPartViewData*                    Data                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreMenuLoadoutPartWidget::SetLoadoutPartData(class UMenuLoadoutPartViewData* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreMenuLoadoutPartWidget.SetLoadoutPartData");
		
		UCoreMenuLoadoutPartWidget_SetLoadoutPartData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreMenuLoadoutPartWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreMenuLoadoutPartWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CoreMenuLoadoutPartWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD6AA0
	 * 		Name   -> Function DBDUIViewsCore.CoreMenuAddonWidget.SetMenuAddonData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMenuAddonViewData*                          Data                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreMenuAddonWidget::SetMenuAddonData(class UMenuAddonViewData* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreMenuAddonWidget.SetMenuAddonData");
		
		UCoreMenuAddonWidget_SetMenuAddonData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreMenuAddonWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreMenuAddonWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CoreMenuAddonWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD6B30
	 * 		Name   -> Function DBDUIViewsCore.CoreMenuItemWidget.SetMenuItemData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMenuItemViewData*                           Data                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreMenuItemWidget::SetMenuItemData(class UMenuItemViewData* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreMenuItemWidget.SetMenuItemData");
		
		UCoreMenuItemWidget_SetMenuItemData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreMenuItemWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreMenuItemWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CoreMenuItemWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD6BC0
	 * 		Name   -> Function DBDUIViewsCore.CoreMenuOfferingWidget.SetMenuOfferingData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMenuOfferingViewData*                       Data                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreMenuOfferingWidget::SetMenuOfferingData(class UMenuOfferingViewData* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreMenuOfferingWidget.SetMenuOfferingData");
		
		UCoreMenuOfferingWidget_SetMenuOfferingData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreMenuOfferingWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreMenuOfferingWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CoreMenuOfferingWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDUIViewsCore.CoreMenuPerkWidget.SetMenuPerkLevel
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Level                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreMenuPerkWidget::SetMenuPerkLevel(int32_t Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreMenuPerkWidget.SetMenuPerkLevel");
		
		UCoreMenuPerkWidget_SetMenuPerkLevel_Params params {};
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD6C50
	 * 		Name   -> Function DBDUIViewsCore.CoreMenuPerkWidget.SetMenuPerkData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMenuPerkViewData*                           Data                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreMenuPerkWidget::SetMenuPerkData(class UMenuPerkViewData* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreMenuPerkWidget.SetMenuPerkData");
		
		UCoreMenuPerkWidget_SetMenuPerkData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreMenuPerkWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreMenuPerkWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CoreMenuPerkWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD6CE0
	 * 		Name   -> Function DBDUIViewsCore.CoreMenuPowerWidget.SetMenuPowerData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMenuPowerViewData*                          Data                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreMenuPowerWidget::SetMenuPowerData(class UMenuPowerViewData* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreMenuPowerWidget.SetMenuPowerData");
		
		UCoreMenuPowerWidget_SetMenuPowerData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreMenuPowerWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreMenuPowerWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CoreMenuPowerWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreOfferingInteractionWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreOfferingInteractionWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CoreOfferingInteractionWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreOfferingWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreOfferingWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CoreOfferingWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDUIViewsCore.CoreOnboardingMenuTitleWidget.SetOnboardingMenuTitle
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        menuTitle                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreOnboardingMenuTitleWidget::SetOnboardingMenuTitle(const class FText& menuTitle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreOnboardingMenuTitleWidget.SetOnboardingMenuTitle");
		
		UCoreOnboardingMenuTitleWidget_SetOnboardingMenuTitle_Params params {};
		params.menuTitle = menuTitle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDUIViewsCore.CoreOnboardingMenuTitleWidget.SetOnboardingMenuSubtitle
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        menuTitle                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreOnboardingMenuTitleWidget::SetOnboardingMenuSubtitle(const class FText& menuTitle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreOnboardingMenuTitleWidget.SetOnboardingMenuSubtitle");
		
		UCoreOnboardingMenuTitleWidget_SetOnboardingMenuSubtitle_Params params {};
		params.menuTitle = menuTitle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDUIViewsCore.CoreOnboardingMenuTitleWidget.SetOnboardingMenuDoubleTitle
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        menuTitle                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FText                                        menuSubTitle                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreOnboardingMenuTitleWidget::SetOnboardingMenuDoubleTitle(const class FText& menuTitle, const class FText& menuSubTitle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreOnboardingMenuTitleWidget.SetOnboardingMenuDoubleTitle");
		
		UCoreOnboardingMenuTitleWidget_SetOnboardingMenuDoubleTitle_Params params {};
		params.menuTitle = menuTitle;
		params.menuSubTitle = menuSubTitle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDUIViewsCore.CoreOnboardingMenuTitleWidget.ResetOnboardingMenuSubtitle
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UCoreOnboardingMenuTitleWidget::ResetOnboardingMenuSubtitle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreOnboardingMenuTitleWidget.ResetOnboardingMenuSubtitle");
		
		UCoreOnboardingMenuTitleWidget_ResetOnboardingMenuSubtitle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreOnboardingMenuTitleWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreOnboardingMenuTitleWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CoreOnboardingMenuTitleWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD6D70
	 * 		Name   -> Function DBDUIViewsCore.CoreOnboardingMenuWidget.SetTitleText
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               IsInTutorial                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreOnboardingMenuWidget::SetTitleText(bool IsInTutorial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreOnboardingMenuWidget.SetTitleText");
		
		UCoreOnboardingMenuWidget_SetTitleText_Params params {};
		params.IsInTutorial = IsInTutorial;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD6610
	 * 		Name   -> Function DBDUIViewsCore.CoreOnboardingMenuWidget.SetBackButton
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               isFTUE                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreOnboardingMenuWidget::SetBackButton(bool isFTUE)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreOnboardingMenuWidget.SetBackButton");
		
		UCoreOnboardingMenuWidget_SetBackButton_Params params {};
		params.isFTUE = isFTUE;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD63D0
	 * 		Name   -> Function DBDUIViewsCore.CoreOnboardingMenuWidget.OnMenuTabSelectedAgain
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UCoreSelectableButtonWidget*                 selectedButton                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreOnboardingMenuWidget::OnMenuTabSelectedAgain(class UCoreSelectableButtonWidget* selectedButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreOnboardingMenuWidget.OnMenuTabSelectedAgain");
		
		UCoreOnboardingMenuWidget_OnMenuTabSelectedAgain_Params params {};
		params.selectedButton = selectedButton;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD6340
	 * 		Name   -> Function DBDUIViewsCore.CoreOnboardingMenuWidget.OnMenuTabSelected
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UCoreSelectableButtonWidget*                 selectedButton                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreOnboardingMenuWidget::OnMenuTabSelected(class UCoreSelectableButtonWidget* selectedButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreOnboardingMenuWidget.OnMenuTabSelected");
		
		UCoreOnboardingMenuWidget_OnMenuTabSelected_Params params {};
		params.selectedButton = selectedButton;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreOnboardingMenuWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreOnboardingMenuWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CoreOnboardingMenuWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD6E00
	 * 		Name   -> Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.SetVisual
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UCoreOnboardingTutorialButtonWidget::SetVisual()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.SetVisual");
		
		UCoreOnboardingTutorialButtonWidget_SetVisual_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.SetUIEnabled
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreOnboardingTutorialButtonWidget::SetUIEnabled(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.SetUIEnabled");
		
		UCoreOnboardingTutorialButtonWidget_SetUIEnabled_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.SetIsKillSwitch
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isKillSwitch                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreOnboardingTutorialButtonWidget::SetIsKillSwitch(bool isKillSwitch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.SetIsKillSwitch");
		
		UCoreOnboardingTutorialButtonWidget_SetIsKillSwitch_Params params {};
		params.isKillSwitch = isKillSwitch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.SetData
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FOnboardingTutorialButtonViewData           viewData                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               isRefreshingWithAnimation                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreOnboardingTutorialButtonWidget::SetData(const struct FOnboardingTutorialButtonViewData& viewData, bool isRefreshingWithAnimation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.SetData");
		
		UCoreOnboardingTutorialButtonWidget_SetData_Params params {};
		params.viewData = viewData;
		params.isRefreshingWithAnimation = isRefreshingWithAnimation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD6580
	 * 		Name   -> Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.OnRewardReleased
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UCoreButtonWidget*                           buttonTarget                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreOnboardingTutorialButtonWidget::OnRewardReleased(class UCoreButtonWidget* buttonTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.OnRewardReleased");
		
		UCoreOnboardingTutorialButtonWidget_OnRewardReleased_Params params {};
		params.buttonTarget = buttonTarget;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD64F0
	 * 		Name   -> Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.OnRewardPressed
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UCoreButtonWidget*                           buttonTarget                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreOnboardingTutorialButtonWidget::OnRewardPressed(class UCoreButtonWidget* buttonTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.OnRewardPressed");
		
		UCoreOnboardingTutorialButtonWidget_OnRewardPressed_Params params {};
		params.buttonTarget = buttonTarget;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD6460
	 * 		Name   -> Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.OnRewardClicked
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UCoreButtonWidget*                           buttonTarget                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreOnboardingTutorialButtonWidget::OnRewardClicked(class UCoreButtonWidget* buttonTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.OnRewardClicked");
		
		UCoreOnboardingTutorialButtonWidget_OnRewardClicked_Params params {};
		params.buttonTarget = buttonTarget;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD62F0
	 * 		Name   -> Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.IsInUnavailableStep
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UCoreOnboardingTutorialButtonWidget::IsInUnavailableStep()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.IsInUnavailableStep");
		
		UCoreOnboardingTutorialButtonWidget_IsInUnavailableStep_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreOnboardingTutorialButtonWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreOnboardingTutorialButtonWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CoreOnboardingTutorialButtonWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDUIViewsCore.CoreOnboardingTutorialPanelWidget.SetTutorialSeparators
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      completedStepId                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreOnboardingTutorialPanelWidget::SetTutorialSeparators(const class FString& completedStepId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreOnboardingTutorialPanelWidget.SetTutorialSeparators");
		
		UCoreOnboardingTutorialPanelWidget_SetTutorialSeparators_Params params {};
		params.completedStepId = completedStepId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDUIViewsCore.CoreOnboardingTutorialPanelWidget.SetTutorialDescription
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Description                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               isWarning                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreOnboardingTutorialPanelWidget::SetTutorialDescription(const class FText& Description, bool isWarning)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreOnboardingTutorialPanelWidget.SetTutorialDescription");
		
		UCoreOnboardingTutorialPanelWidget_SetTutorialDescription_Params params {};
		params.Description = Description;
		params.isWarning = isWarning;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD6320
	 * 		Name   -> Function DBDUIViewsCore.CoreOnboardingTutorialPanelWidget.NextPendingButtonUpdated
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UCoreOnboardingTutorialPanelWidget::NextPendingButtonUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreOnboardingTutorialPanelWidget.NextPendingButtonUpdated");
		
		UCoreOnboardingTutorialPanelWidget_NextPendingButtonUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD5D30
	 * 		Name   -> Function DBDUIViewsCore.CoreOnboardingTutorialPanelWidget.CheckNextPendingButtonUpdate
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UCoreOnboardingTutorialPanelWidget::CheckNextPendingButtonUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreOnboardingTutorialPanelWidget.CheckNextPendingButtonUpdate");
		
		UCoreOnboardingTutorialPanelWidget_CheckNextPendingButtonUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreOnboardingTutorialPanelWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreOnboardingTutorialPanelWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CoreOnboardingTutorialPanelWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDUIViewsCore.CoreOnHoverBorderWidget.UpdateColors
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                progressBarColor                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                BackgroundColor                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreOnHoverBorderWidget::UpdateColors(const struct FLinearColor& progressBarColor, const struct FLinearColor& BackgroundColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreOnHoverBorderWidget.UpdateColors");
		
		UCoreOnHoverBorderWidget_UpdateColors_Params params {};
		params.progressBarColor = progressBarColor;
		params.BackgroundColor = BackgroundColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDUIViewsCore.CoreOnHoverBorderWidget.UnbindFromButton
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UCoreOnHoverBorderWidget::UnbindFromButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreOnHoverBorderWidget.UnbindFromButton");
		
		UCoreOnHoverBorderWidget_UnbindFromButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDUIViewsCore.CoreOnHoverBorderWidget.PlayPressedAnimation
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               playForward                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreOnHoverBorderWidget::PlayPressedAnimation(bool playForward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreOnHoverBorderWidget.PlayPressedAnimation");
		
		UCoreOnHoverBorderWidget_PlayPressedAnimation_Params params {};
		params.playForward = playForward;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDUIViewsCore.CoreOnHoverBorderWidget.PlayHoveredAnimation
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               playForward                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreOnHoverBorderWidget::PlayHoveredAnimation(bool playForward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreOnHoverBorderWidget.PlayHoveredAnimation");
		
		UCoreOnHoverBorderWidget_PlayHoveredAnimation_Params params {};
		params.playForward = playForward;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDUIViewsCore.CoreOnHoverBorderWidget.BindToButton
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UCoreButtonWidget*                           buttonToBindOn                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreOnHoverBorderWidget::BindToButton(class UCoreButtonWidget* buttonToBindOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreOnHoverBorderWidget.BindToButton");
		
		UCoreOnHoverBorderWidget_BindToButton_Params params {};
		params.buttonToBindOn = buttonToBindOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreOnHoverBorderWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreOnHoverBorderWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CoreOnHoverBorderWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCorePerksContainerWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCorePerksContainerWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CorePerksContainerWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCorePerkWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCorePerkWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CorePerkWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCorePingStatusWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCorePingStatusWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CorePingStatusWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCorePlayerStatusesContainerWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCorePlayerStatusesContainerWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CorePlayerStatusesContainerWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDUIViewsCore.CorePlayerStatusKillerEffectWidget.SetKillerData
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPlayerStatusViewData                       Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCorePlayerStatusKillerEffectWidget::SetKillerData(const struct FPlayerStatusViewData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CorePlayerStatusKillerEffectWidget.SetKillerData");
		
		UCorePlayerStatusKillerEffectWidget_SetKillerData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DCAA30
	 * 		Name   -> Function DBDUIViewsCore.CorePlayerStatusKillerEffectWidget.ClearVisual
	 * 		Flags  -> (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
	 */
	void UCorePlayerStatusKillerEffectWidget::ClearVisual()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CorePlayerStatusKillerEffectWidget.ClearVisual");
		
		UCorePlayerStatusKillerEffectWidget_ClearVisual_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCorePlayerStatusKillerEffectWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCorePlayerStatusKillerEffectWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CorePlayerStatusKillerEffectWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDUIViewsCore.CorePlayerStatusKillerEffectK07Widget.AfflictionHit
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 */
	void UCorePlayerStatusKillerEffectK07Widget::AfflictionHit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CorePlayerStatusKillerEffectK07Widget.AfflictionHit");
		
		UCorePlayerStatusKillerEffectK07Widget_AfflictionHit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCorePlayerStatusKillerEffectK07Widget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCorePlayerStatusKillerEffectK07Widget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CorePlayerStatusKillerEffectK07Widget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD6E20
	 * 		Name   -> Function DBDUIViewsCore.CorePlayerStatusWidget.ShouldPlaySleepAnimation
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		ESleepingUIState                                   newSleepState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCorePlayerStatusWidget::ShouldPlaySleepAnimation(ESleepingUIState newSleepState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CorePlayerStatusWidget.ShouldPlaySleepAnimation");
		
		UCorePlayerStatusWidget_ShouldPlaySleepAnimation_Params params {};
		params.newSleepState = newSleepState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD6260
	 * 		Name   -> Function DBDUIViewsCore.CorePlayerStatusWidget.HasTimerProgressChanged
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		float                                              newTimerProgress                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCorePlayerStatusWidget::HasTimerProgressChanged(float newTimerProgress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CorePlayerStatusWidget.HasTimerProgressChanged");
		
		UCorePlayerStatusWidget_HasTimerProgressChanged_Params params {};
		params.newTimerProgress = newTimerProgress;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD6130
	 * 		Name   -> Function DBDUIViewsCore.CorePlayerStatusWidget.HasPlayerStatusDataChanged
	 * 		Flags  -> (Final, Native, Protected, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FPlayerStatusViewData                       newViewData                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UCorePlayerStatusWidget::HasPlayerStatusDataChanged(const struct FPlayerStatusViewData& newViewData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CorePlayerStatusWidget.HasPlayerStatusDataChanged");
		
		UCorePlayerStatusWidget_HasPlayerStatusDataChanged_Params params {};
		params.newViewData = newViewData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD60A0
	 * 		Name   -> Function DBDUIViewsCore.CorePlayerStatusWidget.HasPlayerStateChanged
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EPlayerStatus                                      newPlayerState                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCorePlayerStatusWidget::HasPlayerStateChanged(EPlayerStatus newPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CorePlayerStatusWidget.HasPlayerStateChanged");
		
		UCorePlayerStatusWidget_HasPlayerStateChanged_Params params {};
		params.newPlayerState = newPlayerState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD6010
	 * 		Name   -> Function DBDUIViewsCore.CorePlayerStatusWidget.HasObsessionStateChanged
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EObsessionUIState                                  newObsessionState                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCorePlayerStatusWidget::HasObsessionStateChanged(EObsessionUIState newObsessionState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CorePlayerStatusWidget.HasObsessionStateChanged");
		
		UCorePlayerStatusWidget_HasObsessionStateChanged_Params params {};
		params.newObsessionState = newObsessionState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD5EE0
	 * 		Name   -> Function DBDUIViewsCore.CorePlayerStatusWidget.HasKillerStatusDataChanged
	 * 		Flags  -> (Final, Native, Protected, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FPlayerStatusViewData                       newViewData                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UCorePlayerStatusWidget::HasKillerStatusDataChanged(const struct FPlayerStatusViewData& newViewData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CorePlayerStatusWidget.HasKillerStatusDataChanged");
		
		UCorePlayerStatusWidget_HasKillerStatusDataChanged_Params params {};
		params.newViewData = newViewData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD5D90
	 * 		Name   -> Function DBDUIViewsCore.CorePlayerStatusWidget.GetPlayerStateChangeType
	 * 		Flags  -> (Final, Native, Protected, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FPlayerStatusViewData                       newViewData                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	EPlayerStateChangeType UCorePlayerStatusWidget::GetPlayerStateChangeType(const struct FPlayerStatusViewData& newViewData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CorePlayerStatusWidget.GetPlayerStateChangeType");
		
		UCorePlayerStatusWidget_GetPlayerStateChangeType_Params params {};
		params.newViewData = newViewData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD5D70
	 * 		Name   -> Function DBDUIViewsCore.CorePlayerStatusWidget.GetKillerStatusEffectWidget
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class UCorePlayerStatusKillerEffectWidget* UCorePlayerStatusWidget::GetKillerStatusEffectWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CorePlayerStatusWidget.GetKillerStatusEffectWidget");
		
		UCorePlayerStatusWidget_GetKillerStatusEffectWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCorePlayerStatusWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCorePlayerStatusWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CorePlayerStatusWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCorePowerBundleWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCorePowerBundleWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CorePowerBundleWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCorePowerWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCorePowerWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CorePowerWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD6900
	 * 		Name   -> Function DBDUIViewsCore.CoreRewardWrapperWidget.SetIsLocked
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               IsLocked                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreRewardWrapperWidget::SetIsLocked(bool IsLocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreRewardWrapperWidget.SetIsLocked");
		
		UCoreRewardWrapperWidget_SetIsLocked_Params params {};
		params.IsLocked = IsLocked;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD66A0
	 * 		Name   -> Function DBDUIViewsCore.CoreRewardWrapperWidget.SetData
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FRewardWrapperViewData                      viewData                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreRewardWrapperWidget::SetData(const struct FRewardWrapperViewData& viewData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreRewardWrapperWidget.SetData");
		
		UCoreRewardWrapperWidget_SetData_Params params {};
		params.viewData = viewData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD5EC0
	 * 		Name   -> Function DBDUIViewsCore.CoreRewardWrapperWidget.GetRewardWidget
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UCoreRewardWidget* UCoreRewardWrapperWidget::GetRewardWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreRewardWrapperWidget.GetRewardWidget");
		
		UCoreRewardWrapperWidget_GetRewardWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DD5D50
	 * 		Name   -> Function DBDUIViewsCore.CoreRewardWrapperWidget.ClearData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UCoreRewardWrapperWidget::ClearData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreRewardWrapperWidget.ClearData");
		
		UCoreRewardWrapperWidget_ClearData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreRewardWrapperWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreRewardWrapperWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CoreRewardWrapperWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DDC280
	 * 		Name   -> Function DBDUIViewsCore.CoreScreenIndicatorsContainerWidget.GetScreenIndicatorsMap
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	TMap<class FString, class UCoreScreenIndicatorWidget*> UCoreScreenIndicatorsContainerWidget::GetScreenIndicatorsMap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreScreenIndicatorsContainerWidget.GetScreenIndicatorsMap");
		
		UCoreScreenIndicatorsContainerWidget_GetScreenIndicatorsMap_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DDC120
	 * 		Name   -> Function DBDUIViewsCore.CoreScreenIndicatorsContainerWidget.FindScreenIndicatorKey
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UCoreScreenIndicatorWidget*                  value                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UCoreScreenIndicatorsContainerWidget::FindScreenIndicatorKey(class UCoreScreenIndicatorWidget* value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreScreenIndicatorsContainerWidget.FindScreenIndicatorKey");
		
		UCoreScreenIndicatorsContainerWidget_FindScreenIndicatorKey_Params params {};
		params.value = value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreScreenIndicatorsContainerWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreScreenIndicatorsContainerWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CoreScreenIndicatorsContainerWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDUIViewsCore.CoreScreenIndicatorWidget.SetData
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FScreenIndicatorViewData                    Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreScreenIndicatorWidget::SetData(const struct FScreenIndicatorViewData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreScreenIndicatorWidget.SetData");
		
		UCoreScreenIndicatorWidget_SetData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDUIViewsCore.CoreScreenIndicatorWidget.ClearData
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UCoreScreenIndicatorWidget::ClearData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreScreenIndicatorWidget.ClearData");
		
		UCoreScreenIndicatorWidget_ClearData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreScreenIndicatorWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreScreenIndicatorWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CoreScreenIndicatorWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DDCF20
	 * 		Name   -> Function DBDUIViewsCore.CoreSelectableButtonWidget.SetSelected
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               IsSelected                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreSelectableButtonWidget::SetSelected(bool IsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreSelectableButtonWidget.SetSelected");
		
		UCoreSelectableButtonWidget_SetSelected_Params params {};
		params.IsSelected = IsSelected;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> DelegateFunction DBDUIViewsCore.CoreSelectableButtonWidget.OnSelectedChangedDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class UCoreSelectableButtonWidget*                 buttonTarget                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsSelected                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreSelectableButtonWidget::OnSelectedChangedDelegate__DelegateSignature(class UCoreSelectableButtonWidget* buttonTarget, bool IsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction DBDUIViewsCore.CoreSelectableButtonWidget.OnSelectedChangedDelegate__DelegateSignature");
		
		UCoreSelectableButtonWidget_OnSelectedChangedDelegate__DelegateSignature_Params params {};
		params.buttonTarget = buttonTarget;
		params.IsSelected = IsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDUIViewsCore.CoreSelectableButtonWidget.OnSelectedChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsSelected                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreSelectableButtonWidget::OnSelectedChanged(bool IsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreSelectableButtonWidget.OnSelectedChanged");
		
		UCoreSelectableButtonWidget_OnSelectedChanged_Params params {};
		params.IsSelected = IsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> DelegateFunction DBDUIViewsCore.CoreSelectableButtonWidget.OnSelectedAgainDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class UCoreSelectableButtonWidget*                 buttonTarget                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreSelectableButtonWidget::OnSelectedAgainDelegate__DelegateSignature(class UCoreSelectableButtonWidget* buttonTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction DBDUIViewsCore.CoreSelectableButtonWidget.OnSelectedAgainDelegate__DelegateSignature");
		
		UCoreSelectableButtonWidget_OnSelectedAgainDelegate__DelegateSignature_Params params {};
		params.buttonTarget = buttonTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DDC710
	 * 		Name   -> Function DBDUIViewsCore.CoreSelectableButtonWidget.IsSelected
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UCoreSelectableButtonWidget::IsSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreSelectableButtonWidget.IsSelected");
		
		UCoreSelectableButtonWidget_IsSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DDC6E0
	 * 		Name   -> Function DBDUIViewsCore.CoreSelectableButtonWidget.IsSelectable
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UCoreSelectableButtonWidget::IsSelectable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreSelectableButtonWidget.IsSelectable");
		
		UCoreSelectableButtonWidget_IsSelectable_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreSelectableButtonWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreSelectableButtonWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CoreSelectableButtonWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreSkillCheckWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreSkillCheckWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CoreSkillCheckWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DDC910
	 * 		Name   -> Function DBDUIViewsCore.CoreSpectateBarWidget.OnRightArrowTriggered
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UCoreSpectateBarWidget::OnRightArrowTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreSpectateBarWidget.OnRightArrowTriggered");
		
		UCoreSpectateBarWidget_OnRightArrowTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DDC8F0
	 * 		Name   -> Function DBDUIViewsCore.CoreSpectateBarWidget.OnLeftArrowTriggered
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UCoreSpectateBarWidget::OnLeftArrowTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreSpectateBarWidget.OnLeftArrowTriggered");
		
		UCoreSpectateBarWidget_OnLeftArrowTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DDC8D0
	 * 		Name   -> Function DBDUIViewsCore.CoreSpectateBarWidget.OnLeaveTriggered
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UCoreSpectateBarWidget::OnLeaveTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreSpectateBarWidget.OnLeaveTriggered");
		
		UCoreSpectateBarWidget_OnLeaveTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreSpectateBarWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreSpectateBarWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CoreSpectateBarWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DDC7B0
	 * 		Name   -> Function DBDUIViewsCore.CoreStartSequenceWidget.OnHideStartSequenceComplete
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UUITweenInstance*                            tween                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreStartSequenceWidget::OnHideStartSequenceComplete(class UUITweenInstance* tween)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreStartSequenceWidget.OnHideStartSequenceComplete");
		
		UCoreStartSequenceWidget_OnHideStartSequenceComplete_Params params {};
		params.tween = tween;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreStartSequenceWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreStartSequenceWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CoreStartSequenceWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDUIViewsCore.CoreStatusEffectIcon.UpdateWidget
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UCoreStatusEffectIcon::UpdateWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreStatusEffectIcon.UpdateWidget");
		
		UCoreStatusEffectIcon_UpdateWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDUIViewsCore.CoreStatusEffectIcon.UpdatePercentageFill
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Percentage                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreStatusEffectIcon::UpdatePercentageFill(float Percentage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreStatusEffectIcon.UpdatePercentageFill");
		
		UCoreStatusEffectIcon_UpdatePercentageFill_Params params {};
		params.Percentage = Percentage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DDCFB0
	 * 		Name   -> Function DBDUIViewsCore.CoreStatusEffectIcon.SetStatusEffectData
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FStatusEffectViewData                       Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreStatusEffectIcon::SetStatusEffectData(const struct FStatusEffectViewData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreStatusEffectIcon.SetStatusEffectData");
		
		UCoreStatusEffectIcon_SetStatusEffectData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DDCD70
	 * 		Name   -> Function DBDUIViewsCore.CoreStatusEffectIcon.SetInactiveTicks
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            inactiveTicks                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreStatusEffectIcon::SetInactiveTicks(int32_t inactiveTicks)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreStatusEffectIcon.SetInactiveTicks");
		
		UCoreStatusEffectIcon_SetInactiveTicks_Params params {};
		params.inactiveTicks = inactiveTicks;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DDC3A0
	 * 		Name   -> Function DBDUIViewsCore.CoreStatusEffectIcon.GetStatusEffectData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	struct FStatusEffectViewData UCoreStatusEffectIcon::GetStatusEffectData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreStatusEffectIcon.GetStatusEffectData");
		
		UCoreStatusEffectIcon_GetStatusEffectData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DDC200
	 * 		Name   -> Function DBDUIViewsCore.CoreStatusEffectIcon.GetInactiveTicks
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UCoreStatusEffectIcon::GetInactiveTicks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreStatusEffectIcon.GetInactiveTicks");
		
		UCoreStatusEffectIcon_GetInactiveTicks_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreStatusEffectIcon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreStatusEffectIcon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CoreStatusEffectIcon");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DDC3D0
	 * 		Name   -> Function DBDUIViewsCore.CoreStatusEffectWidget.GetStatusEffectMap
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	TMap<class FName, class UCoreStatusEffectIcon*> UCoreStatusEffectWidget::GetStatusEffectMap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreStatusEffectWidget.GetStatusEffectMap");
		
		UCoreStatusEffectWidget_GetStatusEffectMap_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreStatusEffectWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreStatusEffectWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CoreStatusEffectWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreSubtitlesWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreSubtitlesWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CoreSubtitlesWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DDCA50
	 * 		Name   -> Function DBDUIViewsCore.CoreTabContainerWidget.RemoveTabs
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UCoreTabContainerWidget::RemoveTabs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreTabContainerWidget.RemoveTabs");
		
		UCoreTabContainerWidget_RemoveTabs_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DDC5B0
	 * 		Name   -> Function DBDUIViewsCore.CoreTabContainerWidget.Init
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FTabWidgetData>                      tabsData                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreTabContainerWidget::Init(TArray<struct FTabWidgetData> tabsData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreTabContainerWidget.Init");
		
		UCoreTabContainerWidget_Init_Params params {};
		params.tabsData = tabsData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreTabContainerWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreTabContainerWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CoreTabContainerWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DDC260
	 * 		Name   -> Function DBDUIViewsCore.CoreTabWidget.GetKey
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UCoreTabWidget::GetKey()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreTabWidget.GetKey");
		
		UCoreTabWidget_GetKey_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreTabWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreTabWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CoreTabWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreTemplateWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreTemplateWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CoreTemplateWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreTestBuildFlagWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreTestBuildFlagWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CoreTestBuildFlagWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreTutorialMysteryNoteWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreTutorialMysteryNoteWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CoreTutorialMysteryNoteWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDUIViewsCore.CoreTutorialObjectiveItem.SetObjectiveCompleted
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               removeAfterCompletion                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreTutorialObjectiveItem::SetObjectiveCompleted(bool removeAfterCompletion)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreTutorialObjectiveItem.SetObjectiveCompleted");
		
		UCoreTutorialObjectiveItem_SetObjectiveCompleted_Params params {};
		params.removeAfterCompletion = removeAfterCompletion;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDUIViewsCore.CoreTutorialObjectiveItem.InitObjective
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTutorialObjectivesViewData                 interactionsViewData                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreTutorialObjectiveItem::InitObjective(const struct FTutorialObjectivesViewData& interactionsViewData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreTutorialObjectiveItem.InitObjective");
		
		UCoreTutorialObjectiveItem_InitObjective_Params params {};
		params.interactionsViewData = interactionsViewData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreTutorialObjectiveItem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreTutorialObjectiveItem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CoreTutorialObjectiveItem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DDC9C0
	 * 		Name   -> Function DBDUIViewsCore.CoreTutorialObjectivesContainer.OnTutorialObjectiveCompleted
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UCoreTutorialObjectiveItem*                  Item                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreTutorialObjectivesContainer::OnTutorialObjectiveCompleted(class UCoreTutorialObjectiveItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreTutorialObjectivesContainer.OnTutorialObjectiveCompleted");
		
		UCoreTutorialObjectivesContainer_OnTutorialObjectiveCompleted_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreTutorialObjectivesContainer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreTutorialObjectivesContainer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CoreTutorialObjectivesContainer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreTutorialPopupWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreTutorialPopupWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CoreTutorialPopupWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DDD190
	 * 		Name   -> Function DBDUIViewsCore.CurrencyProgressionTooltipWidget.SetTooltipData
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FCurrencyProgressionTooltipViewData         currencyViewData                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCurrencyProgressionTooltipWidget::SetTooltipData(const struct FCurrencyProgressionTooltipViewData& currencyViewData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CurrencyProgressionTooltipWidget.SetTooltipData");
		
		UCurrencyProgressionTooltipWidget_SetTooltipData_Params params {};
		params.currencyViewData = currencyViewData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCurrencyProgressionTooltipWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCurrencyProgressionTooltipWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CurrencyProgressionTooltipWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDUIViewsCore.CustomizationTooltipWidget.SetTooltipData
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FCustomizationTooltipViewData               customizationViewData                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCustomizationTooltipWidget::SetTooltipData(const struct FCustomizationTooltipViewData& customizationViewData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CustomizationTooltipWidget.SetTooltipData");
		
		UCustomizationTooltipWidget_SetTooltipData_Params params {};
		params.customizationViewData = customizationViewData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DDD060
	 * 		Name   -> Function DBDUIViewsCore.CustomizationTooltipWidget.SetStatusText
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               IsEquipped                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsOwned                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsLocked                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomizationTooltipWidget::SetStatusText(bool IsEquipped, bool IsOwned, bool IsLocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CustomizationTooltipWidget.SetStatusText");
		
		UCustomizationTooltipWidget_SetStatusText_Params params {};
		params.IsEquipped = IsEquipped;
		params.IsOwned = IsOwned;
		params.IsLocked = IsLocked;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCustomizationTooltipWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomizationTooltipWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.CustomizationTooltipWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDBDButton.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDBDButton::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.DBDButton");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DDCBD0
	 * 		Name   -> Function DBDUIViewsCore.DBDImage.SetBrushFromTextureWithDefault
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               matchSize                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDBDImage::SetBrushFromTextureWithDefault(class UTexture2D* Texture, bool matchSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDImage.SetBrushFromTextureWithDefault");
		
		UDBDImage_SetBrushFromTextureWithDefault_Params params {};
		params.Texture = Texture;
		params.matchSize = matchSize;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DDCA70
	 * 		Name   -> Function DBDUIViewsCore.DBDImage.SetBrushFromSoftTextureWithDefault
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               matchSize                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDBDImage::SetBrushFromSoftTextureWithDefault(bool matchSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDImage.SetBrushFromSoftTextureWithDefault");
		
		UDBDImage_SetBrushFromSoftTextureWithDefault_Params params {};
		params.matchSize = matchSize;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDBDImage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDBDImage::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.DBDImage");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DDCE00
	 * 		Name   -> Function DBDUIViewsCore.DBDRichTextBlock.SetIsUpperCase
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               isUpperCase                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDBDRichTextBlock::SetIsUpperCase(bool isUpperCase)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDRichTextBlock.SetIsUpperCase");
		
		UDBDRichTextBlock_SetIsUpperCase_Params params {};
		params.isUpperCase = isUpperCase;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DDCCA0
	 * 		Name   -> Function DBDUIViewsCore.DBDRichTextBlock.SetHTMLText
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FText                                        InText                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UDBDRichTextBlock::SetHTMLText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDRichTextBlock.SetHTMLText");
		
		UDBDRichTextBlock_SetHTMLText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DDC220
	 * 		Name   -> Function DBDUIViewsCore.DBDRichTextBlock.GetIsUpperCase
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UDBDRichTextBlock::GetIsUpperCase()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDRichTextBlock.GetIsUpperCase");
		
		UDBDRichTextBlock_GetIsUpperCase_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDBDRichTextBlock.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDBDRichTextBlock::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.DBDRichTextBlock");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DDD330
	 * 		Name   -> Function DBDUIViewsCore.DBDScrollBox.UpdateDisplayPrompt
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UDBDScrollBox::UpdateDisplayPrompt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDScrollBox.UpdateDisplayPrompt");
		
		UDBDScrollBox_UpdateDisplayPrompt_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DDC730
	 * 		Name   -> Function DBDUIViewsCore.DBDScrollBox.OnControlModeChanged
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		EControlMode                                       controlMode                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDBDScrollBox::OnControlModeChanged(EControlMode controlMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDScrollBox.OnControlModeChanged");
		
		UDBDScrollBox_OnControlModeChanged_Params params {};
		params.controlMode = controlMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DDC6C0
	 * 		Name   -> Function DBDUIViewsCore.DBDScrollBox.IsMouseOver
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UDBDScrollBox::IsMouseOver()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDScrollBox.IsMouseOver");
		
		UDBDScrollBox_IsMouseOver_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DDC530
	 * 		Name   -> Function DBDUIViewsCore.DBDScrollBox.HandleControllerInput
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		float                                              analogValue                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDBDScrollBox::HandleControllerInput(float analogValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDScrollBox.HandleControllerInput");
		
		UDBDScrollBox_HandleControllerInput_Params params {};
		params.analogValue = analogValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDBDScrollBox.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDBDScrollBox::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.DBDScrollBox");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DDCE90
	 * 		Name   -> Function DBDUIViewsCore.DBDTextBlock.SetIsUpperCase
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               isUpperCase                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDBDTextBlock::SetIsUpperCase(bool isUpperCase)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDTextBlock.SetIsUpperCase");
		
		UDBDTextBlock_SetIsUpperCase_Params params {};
		params.isUpperCase = isUpperCase;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DDC930
	 * 		Name   -> Function DBDUIViewsCore.DBDTextBlock.OnSwitchDockStateChanged
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		bool                                               isDocked                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDBDTextBlock::OnSwitchDockStateChanged(bool isDocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDTextBlock.OnSwitchDockStateChanged");
		
		UDBDTextBlock_OnSwitchDockStateChanged_Params params {};
		params.isDocked = isDocked;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DDC840
	 * 		Name   -> Function DBDUIViewsCore.DBDTextBlock.OnLargeTextSettingsChanged
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		bool                                               isLargeText                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDBDTextBlock::OnLargeTextSettingsChanged(bool isLargeText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDTextBlock.OnLargeTextSettingsChanged");
		
		UDBDTextBlock_OnLargeTextSettingsChanged_Params params {};
		params.isLargeText = isLargeText;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DDC240
	 * 		Name   -> Function DBDUIViewsCore.DBDTextBlock.GetIsUpperCase
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UDBDTextBlock::GetIsUpperCase()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDTextBlock.GetIsUpperCase");
		
		UDBDTextBlock_GetIsUpperCase_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDBDTextBlock.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDBDTextBlock::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.DBDTextBlock");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DDF0F0
	 * 		Name   -> Function DBDUIViewsCore.DBDTooltipManager.ShowCustomizationTooltip
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FCustomizationTooltipViewData               tooltipViewData                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FGeometry                                   triggerGeometry                                            (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDBDTooltipManager::ShowCustomizationTooltip(const struct FCustomizationTooltipViewData& tooltipViewData, const struct FGeometry& triggerGeometry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDTooltipManager.ShowCustomizationTooltip");
		
		UDBDTooltipManager_ShowCustomizationTooltip_Params params {};
		params.tooltipViewData = tooltipViewData;
		params.triggerGeometry = triggerGeometry;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DDEEE0
	 * 		Name   -> Function DBDUIViewsCore.DBDTooltipManager.ShowCurrencyTooltip
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FCurrencyProgressionTooltipViewData         tooltipViewData                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FGeometry                                   triggerGeometry                                            (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDBDTooltipManager::ShowCurrencyTooltip(const struct FCurrencyProgressionTooltipViewData& tooltipViewData, const struct FGeometry& triggerGeometry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDTooltipManager.ShowCurrencyTooltip");
		
		UDBDTooltipManager_ShowCurrencyTooltip_Params params {};
		params.tooltipViewData = tooltipViewData;
		params.triggerGeometry = triggerGeometry;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DDECA0
	 * 		Name   -> Function DBDUIViewsCore.DBDTooltipManager.ShowCharacterTooltip
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FCharacterTooltipViewData                   tooltipViewData                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FGeometry                                   triggerGeometry                                            (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDBDTooltipManager::ShowCharacterTooltip(const struct FCharacterTooltipViewData& tooltipViewData, const struct FGeometry& triggerGeometry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDTooltipManager.ShowCharacterTooltip");
		
		UDBDTooltipManager_ShowCharacterTooltip_Params params {};
		params.tooltipViewData = tooltipViewData;
		params.triggerGeometry = triggerGeometry;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DDE850
	 * 		Name   -> Function DBDUIViewsCore.DBDTooltipManager.HideTooltip
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UDBDTooltipManager::HideTooltip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDTooltipManager.HideTooltip");
		
		UDBDTooltipManager_HideTooltip_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDBDTooltipManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDBDTooltipManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.DBDTooltipManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DDEA80
	 * 		Name   -> Function DBDUIViewsCore.DBDWrapBox.SetInnerSlotPadding
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector2D                                   InPadding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDBDWrapBox::SetInnerSlotPadding(const struct FVector2D& InPadding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDWrapBox.SetInnerSlotPadding");
		
		UDBDWrapBox_SetInnerSlotPadding_Params params {};
		params.InPadding = InPadding;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DDE980
	 * 		Name   -> Function DBDUIViewsCore.DBDWrapBox.SetHorizontalAlignment
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EHorizontalAlignment                               inHorizontalAlignment                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDBDWrapBox::SetHorizontalAlignment(EHorizontalAlignment inHorizontalAlignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDWrapBox.SetHorizontalAlignment");
		
		UDBDWrapBox_SetHorizontalAlignment_Params params {};
		params.inHorizontalAlignment = inHorizontalAlignment;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DDE7B0
	 * 		Name   -> Function DBDUIViewsCore.DBDWrapBox.AddChildToWrapBox
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UWidget*                                     Content                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDBDWrapBoxSlot* UDBDWrapBox::AddChildToWrapBox(class UWidget* Content)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDWrapBox.AddChildToWrapBox");
		
		UDBDWrapBox_AddChildToWrapBox_Params params {};
		params.Content = Content;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDBDWrapBox.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDBDWrapBox::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.DBDWrapBox");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DDEC20
	 * 		Name   -> Function DBDUIViewsCore.DBDWrapBoxSlot.SetVerticalAlignment
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EVerticalAlignment                                 inVerticalAlignment                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDBDWrapBoxSlot::SetVerticalAlignment(EVerticalAlignment inVerticalAlignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDWrapBoxSlot.SetVerticalAlignment");
		
		UDBDWrapBoxSlot_SetVerticalAlignment_Params params {};
		params.inVerticalAlignment = inVerticalAlignment;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DDEB00
	 * 		Name   -> Function DBDUIViewsCore.DBDWrapBoxSlot.SetPadding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FMargin                                     InPadding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDBDWrapBoxSlot::SetPadding(const struct FMargin& InPadding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDWrapBoxSlot.SetPadding");
		
		UDBDWrapBoxSlot_SetPadding_Params params {};
		params.InPadding = InPadding;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DDEA00
	 * 		Name   -> Function DBDUIViewsCore.DBDWrapBoxSlot.SetHorizontalAlignment
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EHorizontalAlignment                               inHorizontalAlignment                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDBDWrapBoxSlot::SetHorizontalAlignment(EHorizontalAlignment inHorizontalAlignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDWrapBoxSlot.SetHorizontalAlignment");
		
		UDBDWrapBoxSlot_SetHorizontalAlignment_Params params {};
		params.inHorizontalAlignment = inHorizontalAlignment;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DDE900
	 * 		Name   -> Function DBDUIViewsCore.DBDWrapBoxSlot.SetFillSpanWhenLessThan
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InFillSpanWhenLessThan                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDBDWrapBoxSlot::SetFillSpanWhenLessThan(float InFillSpanWhenLessThan)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDWrapBoxSlot.SetFillSpanWhenLessThan");
		
		UDBDWrapBoxSlot_SetFillSpanWhenLessThan_Params params {};
		params.InFillSpanWhenLessThan = InFillSpanWhenLessThan;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DDE870
	 * 		Name   -> Function DBDUIViewsCore.DBDWrapBoxSlot.SetFillEmptySpace
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               InbFillEmptySpace                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDBDWrapBoxSlot::SetFillEmptySpace(bool InbFillEmptySpace)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDWrapBoxSlot.SetFillEmptySpace");
		
		UDBDWrapBoxSlot_SetFillEmptySpace_Params params {};
		params.InbFillEmptySpace = InbFillEmptySpace;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDBDWrapBoxSlot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDBDWrapBoxSlot::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.DBDWrapBoxSlot");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction URichTextBlockImageSharedSizeDecorator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URichTextBlockImageSharedSizeDecorator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.RichTextBlockImageSharedSizeDecorator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction URichTextNestedTagsDecorator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URichTextNestedTagsDecorator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.RichTextNestedTagsDecorator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DDEB90
	 * 		Name   -> Function DBDUIViewsCore.TestWidget.SetShowWorkbench
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               showWorkbench                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTestWidget::SetShowWorkbench(bool showWorkbench)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.TestWidget.SetShowWorkbench");
		
		UTestWidget_SetShowWorkbench_Params params {};
		params.showWorkbench = showWorkbench;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTestWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTestWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewsCore.TestWidget");
		return ptr;
	}

}


