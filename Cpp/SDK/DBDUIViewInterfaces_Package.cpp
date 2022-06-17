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
	 * 		RVA    -> 0x03D91CF0
	 * 		Name   -> Function DBDUIViewInterfaces.AddonViewInterface.SetData
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FAddonViewData                              BaseLoadoutPartViewData                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UAddonViewInterface::SetData(const struct FAddonViewData& BaseLoadoutPartViewData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.AddonViewInterface.SetData");
		
		UAddonViewInterface_SetData_Params params {};
		params.BaseLoadoutPartViewData = BaseLoadoutPartViewData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D914E0
	 * 		Name   -> Function DBDUIViewInterfaces.AddonViewInterface.ClearData
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAddonViewInterface::ClearData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.AddonViewInterface.ClearData");
		
		UAddonViewInterface_ClearData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAddonViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddonViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewInterfaces.AddonViewInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreBaseViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreBaseViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewInterfaces.CoreBaseViewInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D924A0
	 * 		Name   -> Function DBDUIViewInterfaces.CreditsViewInterface.SetText
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCreditsViewInterface::SetText(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.CreditsViewInterface.SetText");
		
		UCreditsViewInterface_SetText_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D91760
	 * 		Name   -> Function DBDUIViewInterfaces.CreditsViewInterface.ScrollToName
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Delay                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCreditsViewInterface::ScrollToName(const class FString& Name, float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.CreditsViewInterface.ScrollToName");
		
		UCreditsViewInterface_ScrollToName_Params params {};
		params.Name = Name;
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D915B0
	 * 		Name   -> Function DBDUIViewInterfaces.CreditsViewInterface.ScrollToEnd
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UCreditsViewInterface::ScrollToEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.CreditsViewInterface.ScrollToEnd");
		
		UCreditsViewInterface_ScrollToEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCreditsViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCreditsViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewInterfaces.CreditsViewInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D914E0
	 * 		Name   -> Function DBDUIViewInterfaces.EndGameCollapseBarViewInterface.StartEndGameScenario
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UEndGameCollapseBarViewInterface::StartEndGameScenario()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.EndGameCollapseBarViewInterface.StartEndGameScenario");
		
		UEndGameCollapseBarViewInterface_StartEndGameScenario_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D91680
	 * 		Name   -> Function DBDUIViewInterfaces.EndGameCollapseBarViewInterface.SetEndGameScenarioProgressionValue
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              amount                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEndGameCollapseBarViewInterface::SetEndGameScenarioProgressionValue(float amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.EndGameCollapseBarViewInterface.SetEndGameScenarioProgressionValue");
		
		UEndGameCollapseBarViewInterface_SetEndGameScenarioProgressionValue_Params params {};
		params.amount = amount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D91500
	 * 		Name   -> Function DBDUIViewInterfaces.EndGameCollapseBarViewInterface.SetEndGameScenarioProgressionMode
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isSlowMode                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEndGameCollapseBarViewInterface::SetEndGameScenarioProgressionMode(bool isSlowMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.EndGameCollapseBarViewInterface.SetEndGameScenarioProgressionMode");
		
		UEndGameCollapseBarViewInterface_SetEndGameScenarioProgressionMode_Params params {};
		params.isSlowMode = isSlowMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D915D0
	 * 		Name   -> Function DBDUIViewInterfaces.EndGameCollapseBarViewInterface.InitEndGameScenario
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UEndGameCollapseBarViewInterface::InitEndGameScenario()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.EndGameCollapseBarViewInterface.InitEndGameScenario");
		
		UEndGameCollapseBarViewInterface_InitEndGameScenario_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UEndGameCollapseBarViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEndGameCollapseBarViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewInterfaces.EndGameCollapseBarViewInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D922F0
	 * 		Name   -> Function DBDUIViewInterfaces.EquippedItemViewInterface.SetFakeItem
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isHoldingFakeItem                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEquippedItemViewInterface::SetFakeItem(bool isHoldingFakeItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.EquippedItemViewInterface.SetFakeItem");
		
		UEquippedItemViewInterface_SetFakeItem_Params params {};
		params.isHoldingFakeItem = isHoldingFakeItem;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D91DD0
	 * 		Name   -> Function DBDUIViewInterfaces.EquippedItemViewInterface.SetData
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FItemBundleViewData                         itemBundleData                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UEquippedItemViewInterface::SetData(const struct FItemBundleViewData& itemBundleData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.EquippedItemViewInterface.SetData");
		
		UEquippedItemViewInterface_SetData_Params params {};
		params.itemBundleData = itemBundleData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D91850
	 * 		Name   -> Function DBDUIViewInterfaces.EquippedItemViewInterface.SetActiveState
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsActive                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEquippedItemViewInterface::SetActiveState(bool IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.EquippedItemViewInterface.SetActiveState");
		
		UEquippedItemViewInterface_SetActiveState_Params params {};
		params.IsActive = IsActive;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D91500
	 * 		Name   -> Function DBDUIViewInterfaces.EquippedItemViewInterface.ClearData
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               fullClear                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEquippedItemViewInterface::ClearData(bool fullClear)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.EquippedItemViewInterface.ClearData");
		
		UEquippedItemViewInterface_ClearData_Params params {};
		params.fullClear = fullClear;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UEquippedItemViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEquippedItemViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewInterfaces.EquippedItemViewInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D91F50
	 * 		Name   -> Function DBDUIViewInterfaces.EquippedPowerViewInterface.SetData
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPowerBundleViewData                        powerBundleData                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UEquippedPowerViewInterface::SetData(const struct FPowerBundleViewData& powerBundleData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.EquippedPowerViewInterface.SetData");
		
		UEquippedPowerViewInterface_SetData_Params params {};
		params.powerBundleData = powerBundleData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D918E0
	 * 		Name   -> Function DBDUIViewInterfaces.EquippedPowerViewInterface.SetCarryingMode
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsCarrying                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEquippedPowerViewInterface::SetCarryingMode(bool IsCarrying)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.EquippedPowerViewInterface.SetCarryingMode");
		
		UEquippedPowerViewInterface_SetCarryingMode_Params params {};
		params.IsCarrying = IsCarrying;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D91850
	 * 		Name   -> Function DBDUIViewInterfaces.EquippedPowerViewInterface.SetActiveState
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsActive                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEquippedPowerViewInterface::SetActiveState(bool IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.EquippedPowerViewInterface.SetActiveState");
		
		UEquippedPowerViewInterface_SetActiveState_Params params {};
		params.IsActive = IsActive;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D91590
	 * 		Name   -> Function DBDUIViewInterfaces.EquippedPowerViewInterface.ClearData
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UEquippedPowerViewInterface::ClearData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.EquippedPowerViewInterface.ClearData");
		
		UEquippedPowerViewInterface_ClearData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UEquippedPowerViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEquippedPowerViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewInterfaces.EquippedPowerViewInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D92250
	 * 		Name   -> Function DBDUIViewInterfaces.ExampleViewInterface.SetExampleText
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Text                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UExampleViewInterface::SetExampleText(const class FString& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.ExampleViewInterface.SetExampleText");
		
		UExampleViewInterface_SetExampleText_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D921D0
	 * 		Name   -> Function DBDUIViewInterfaces.ExampleViewInterface.SetExampleProgressRatio
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Ratio                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UExampleViewInterface::SetExampleProgressRatio(float Ratio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.ExampleViewInterface.SetExampleProgressRatio");
		
		UExampleViewInterface_SetExampleProgressRatio_Params params {};
		params.Ratio = Ratio;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UExampleViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UExampleViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewInterfaces.ExampleViewInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D92650
	 * 		Name   -> Function DBDUIViewInterfaces.ExternalEffectsViewInterface.ShowExternalPerk
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPerkViewData                               PerkViewData                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UExternalEffectsViewInterface::ShowExternalPerk(const struct FPerkViewData& PerkViewData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.ExternalEffectsViewInterface.ShowExternalPerk");
		
		UExternalEffectsViewInterface_ShowExternalPerk_Params params {};
		params.PerkViewData = PerkViewData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D92570
	 * 		Name   -> Function DBDUIViewInterfaces.ExternalEffectsViewInterface.ShowExternalAddon
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FAddonViewData                              AddonViewData                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UExternalEffectsViewInterface::ShowExternalAddon(const struct FAddonViewData& AddonViewData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.ExternalEffectsViewInterface.ShowExternalAddon");
		
		UExternalEffectsViewInterface_ShowExternalAddon_Params params {};
		params.AddonViewData = AddonViewData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UExternalEffectsViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UExternalEffectsViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewInterfaces.ExternalEffectsViewInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D91C70
	 * 		Name   -> Function DBDUIViewInterfaces.GameManualViewInterface.SetCurrentManualMenuState
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGameManualMenuState                               menuState                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameManualViewInterface::SetCurrentManualMenuState(EGameManualMenuState menuState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.GameManualViewInterface.SetCurrentManualMenuState");
		
		UGameManualViewInterface_SetCurrentManualMenuState_Params params {};
		params.menuState = menuState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D91970
	 * 		Name   -> Function DBDUIViewInterfaces.GameManualViewInterface.SetCategoryData
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHelpCategoryData                           categoryData                                               (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FHelpTopicData>                      topicsData                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGameManualViewInterface::SetCategoryData(const struct FHelpCategoryData& categoryData, TArray<struct FHelpTopicData> topicsData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.GameManualViewInterface.SetCategoryData");
		
		UGameManualViewInterface_SetCategoryData_Params params {};
		params.categoryData = categoryData;
		params.topicsData = topicsData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D91710
	 * 		Name   -> Function DBDUIViewInterfaces.GameManualViewInterface.GetCurrentManualMenuState
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	EGameManualMenuState UGameManualViewInterface::GetCurrentManualMenuState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.GameManualViewInterface.GetCurrentManualMenuState");
		
		UGameManualViewInterface_GetCurrentManualMenuState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGameManualViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameManualViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewInterfaces.GameManualViewInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGenericPopupViewData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGenericPopupViewData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewInterfaces.GenericPopupViewData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D914E0
	 * 		Name   -> Function DBDUIViewInterfaces.GenericPopupViewInterface.Leave
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UGenericPopupViewInterface::Leave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.GenericPopupViewInterface.Leave");
		
		UGenericPopupViewInterface_Leave_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D915F0
	 * 		Name   -> Function DBDUIViewInterfaces.GenericPopupViewInterface.Enter
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UGenericPopupViewData*                       Data                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGenericPopupViewInterface::Enter(class UGenericPopupViewData* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.GenericPopupViewInterface.Enter");
		
		UGenericPopupViewInterface_Enter_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGenericPopupViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGenericPopupViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewInterfaces.GenericPopupViewInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D91850
	 * 		Name   -> Function DBDUIViewInterfaces.HookCountViewInterface.SetHookCountVisibility
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               visible                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHookCountViewInterface::SetHookCountVisibility(bool visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.HookCountViewInterface.SetHookCountVisibility");
		
		UHookCountViewInterface_SetHookCountVisibility_Params params {};
		params.visible = visible;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D920D0
	 * 		Name   -> Function DBDUIViewInterfaces.HookCountViewInterface.SetData
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            currentHookCount                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            maxHookCount                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            initialMaxHookCount                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHookCountViewInterface::SetData(int32_t currentHookCount, int32_t maxHookCount, int32_t initialMaxHookCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.HookCountViewInterface.SetData");
		
		UHookCountViewInterface_SetData_Params params {};
		params.currentHookCount = currentHookCount;
		params.maxHookCount = maxHookCount;
		params.initialMaxHookCount = initialMaxHookCount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D915D0
	 * 		Name   -> Function DBDUIViewInterfaces.HookCountViewInterface.InitWidget
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UHookCountViewInterface::InitWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.HookCountViewInterface.InitWidget");
		
		UHookCountViewInterface_InitWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D915B0
	 * 		Name   -> Function DBDUIViewInterfaces.HookCountViewInterface.ClearData
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UHookCountViewInterface::ClearData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.HookCountViewInterface.ClearData");
		
		UHookCountViewInterface_ClearData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHookCountViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHookCountViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewInterfaces.HookCountViewInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D927E0
	 * 		Name   -> Function DBDUIViewInterfaces.HudAlertViewInterface.ShowStatusEffectAlert
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FStatusEffectAlertViewData                  Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UHudAlertViewInterface::ShowStatusEffectAlert(const struct FStatusEffectAlertViewData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.HudAlertViewInterface.ShowStatusEffectAlert");
		
		UHudAlertViewInterface_ShowStatusEffectAlert_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D92730
	 * 		Name   -> Function DBDUIViewInterfaces.HudAlertViewInterface.ShowScoreAlert
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FScoreAlertViewData                         Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UHudAlertViewInterface::ShowScoreAlert(const struct FScoreAlertViewData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.HudAlertViewInterface.ShowScoreAlert");
		
		UHudAlertViewInterface_ShowScoreAlert_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D91850
	 * 		Name   -> Function DBDUIViewInterfaces.HudAlertViewInterface.SetScoreEventsVisibility
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               visible                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHudAlertViewInterface::SetScoreEventsVisibility(bool visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.HudAlertViewInterface.SetScoreEventsVisibility");
		
		UHudAlertViewInterface_SetScoreEventsVisibility_Params params {};
		params.visible = visible;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D91680
	 * 		Name   -> Function DBDUIViewInterfaces.HudAlertViewInterface.FadeOut
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delay                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHudAlertViewInterface::FadeOut(float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.HudAlertViewInterface.FadeOut");
		
		UHudAlertViewInterface_FadeOut_Params params {};
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D91590
	 * 		Name   -> Function DBDUIViewInterfaces.HudAlertViewInterface.FadeIn
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UHudAlertViewInterface::FadeIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.HudAlertViewInterface.FadeIn");
		
		UHudAlertViewInterface_FadeIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHudAlertViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHudAlertViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewInterfaces.HudAlertViewInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D92400
	 * 		Name   -> Function DBDUIViewInterfaces.HudObjectivesViewInterface.SetHudObjectiveData
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHudObjectivesViewData                      hudObjectiveViewData                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UHudObjectivesViewInterface::SetHudObjectiveData(const struct FHudObjectivesViewData& hudObjectiveViewData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.HudObjectivesViewInterface.SetHudObjectiveData");
		
		UHudObjectivesViewInterface_SetHudObjectiveData_Params params {};
		params.hudObjectiveViewData = hudObjectiveViewData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D91850
	 * 		Name   -> Function DBDUIViewInterfaces.HudObjectivesViewInterface.SetHookCountVisibility
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               visible                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHudObjectivesViewInterface::SetHookCountVisibility(bool visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.HudObjectivesViewInterface.SetHookCountVisibility");
		
		UHudObjectivesViewInterface_SetHookCountVisibility_Params params {};
		params.visible = visible;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D920D0
	 * 		Name   -> Function DBDUIViewInterfaces.HudObjectivesViewInterface.SetHookCountData
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            currentHookCount                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            maxHookCount                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            initialMaxHookCount                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHudObjectivesViewInterface::SetHookCountData(int32_t currentHookCount, int32_t maxHookCount, int32_t initialMaxHookCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.HudObjectivesViewInterface.SetHookCountData");
		
		UHudObjectivesViewInterface_SetHookCountData_Params params {};
		params.currentHookCount = currentHookCount;
		params.maxHookCount = maxHookCount;
		params.initialMaxHookCount = initialMaxHookCount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D91740
	 * 		Name   -> Function DBDUIViewInterfaces.HudObjectivesViewInterface.InitWidget
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UHudObjectivesViewInterface::InitWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.HudObjectivesViewInterface.InitWidget");
		
		UHudObjectivesViewInterface_InitWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D915B0
	 * 		Name   -> Function DBDUIViewInterfaces.HudObjectivesViewInterface.ClearHookCountData
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UHudObjectivesViewInterface::ClearHookCountData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.HudObjectivesViewInterface.ClearHookCountData");
		
		UHudObjectivesViewInterface_ClearHookCountData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D915D0
	 * 		Name   -> Function DBDUIViewInterfaces.HudObjectivesViewInterface.ClearData
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UHudObjectivesViewInterface::ClearData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.HudObjectivesViewInterface.ClearData");
		
		UHudObjectivesViewInterface_ClearData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHudObjectivesViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHudObjectivesViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewInterfaces.HudObjectivesViewInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D99040
	 * 		Name   -> Function DBDUIViewInterfaces.InteractionProgressViewInterface.UpdateInputProgress
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Progress                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              itemCharge                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInteractionProgressViewInterface::UpdateInputProgress(float Progress, float itemCharge)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.InteractionProgressViewInterface.UpdateInputProgress");
		
		UInteractionProgressViewInterface_UpdateInputProgress_Params params {};
		params.Progress = Progress;
		params.itemCharge = itemCharge;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D98D10
	 * 		Name   -> Function DBDUIViewInterfaces.InteractionProgressViewInterface.SetInputProgressPrompt
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FInteractionProgressViewData                Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UInteractionProgressViewInterface::SetInputProgressPrompt(const struct FInteractionProgressViewData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.InteractionProgressViewInterface.SetInputProgressPrompt");
		
		UInteractionProgressViewInterface_SetInputProgressPrompt_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D914E0
	 * 		Name   -> Function DBDUIViewInterfaces.InteractionProgressViewInterface.PlayHemorrhageAnimation
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UInteractionProgressViewInterface::PlayHemorrhageAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.InteractionProgressViewInterface.PlayHemorrhageAnimation");
		
		UInteractionProgressViewInterface_PlayHemorrhageAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D915B0
	 * 		Name   -> Function DBDUIViewInterfaces.InteractionProgressViewInterface.HideInputProgressPrompt
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UInteractionProgressViewInterface::HideInputProgressPrompt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.InteractionProgressViewInterface.HideInputProgressPrompt");
		
		UInteractionProgressViewInterface_HideInputProgressPrompt_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UInteractionProgressViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInteractionProgressViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewInterfaces.InteractionProgressViewInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D98780
	 * 		Name   -> Function DBDUIViewInterfaces.InteractionPromptsContainerViewInterface.RemovePrompt
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        ID                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInteractionPromptsContainerViewInterface::RemovePrompt(const class FName& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.InteractionPromptsContainerViewInterface.RemovePrompt");
		
		UInteractionPromptsContainerViewInterface_RemovePrompt_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D914E0
	 * 		Name   -> Function DBDUIViewInterfaces.InteractionPromptsContainerViewInterface.RemoveAllPrompts
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UInteractionPromptsContainerViewInterface::RemoveAllPrompts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.InteractionPromptsContainerViewInterface.RemoveAllPrompts");
		
		UInteractionPromptsContainerViewInterface_RemoveAllPrompts_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D984A0
	 * 		Name   -> Function DBDUIViewInterfaces.InteractionPromptsContainerViewInterface.AddPrompt
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FInteractionPromptViewData                  Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UInteractionPromptsContainerViewInterface::AddPrompt(const struct FInteractionPromptViewData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.InteractionPromptsContainerViewInterface.AddPrompt");
		
		UInteractionPromptsContainerViewInterface_AddPrompt_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UInteractionPromptsContainerViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInteractionPromptsContainerViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewInterfaces.InteractionPromptsContainerViewInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D98820
	 * 		Name   -> Function DBDUIViewInterfaces.ItemBundleViewInterface.SetData
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FItemBundleViewData                         ItemBundleViewData                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UItemBundleViewInterface::SetData(const struct FItemBundleViewData& ItemBundleViewData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.ItemBundleViewInterface.SetData");
		
		UItemBundleViewInterface_SetData_Params params {};
		params.ItemBundleViewData = ItemBundleViewData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D914E0
	 * 		Name   -> Function DBDUIViewInterfaces.ItemBundleViewInterface.ClearData
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UItemBundleViewInterface::ClearData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.ItemBundleViewInterface.ClearData");
		
		UItemBundleViewInterface_ClearData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UItemBundleViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UItemBundleViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewInterfaces.ItemBundleViewInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D98820
	 * 		Name   -> Function DBDUIViewInterfaces.ItemInteractionViewInterface.SetData
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FItemBundleViewData                         itemBundleData                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UItemInteractionViewInterface::SetData(const struct FItemBundleViewData& itemBundleData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.ItemInteractionViewInterface.SetData");
		
		UItemInteractionViewInterface_SetData_Params params {};
		params.itemBundleData = itemBundleData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D914E0
	 * 		Name   -> Function DBDUIViewInterfaces.ItemInteractionViewInterface.ClearData
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UItemInteractionViewInterface::ClearData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.ItemInteractionViewInterface.ClearData");
		
		UItemInteractionViewInterface_ClearData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UItemInteractionViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UItemInteractionViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewInterfaces.ItemInteractionViewInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D989A0
	 * 		Name   -> Function DBDUIViewInterfaces.ItemViewInterface.SetData
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FItemViewData                               ItemViewData                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UItemViewInterface::SetData(const struct FItemViewData& ItemViewData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.ItemViewInterface.SetData");
		
		UItemViewInterface_SetData_Params params {};
		params.ItemViewData = ItemViewData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D914E0
	 * 		Name   -> Function DBDUIViewInterfaces.ItemViewInterface.ClearData
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UItemViewInterface::ClearData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.ItemViewInterface.ClearData");
		
		UItemViewInterface_ClearData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UItemViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UItemViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewInterfaces.ItemViewInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D98AD0
	 * 		Name   -> Function DBDUIViewInterfaces.LeaningArrowsViewInterface.SetData
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ELeanState                                         leanState                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULeaningArrowsViewInterface::SetData(ELeanState leanState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.LeaningArrowsViewInterface.SetData");
		
		ULeaningArrowsViewInterface_SetData_Params params {};
		params.leanState = leanState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULeaningArrowsViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULeaningArrowsViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewInterfaces.LeaningArrowsViewInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D99340
	 * 		Name   -> Function DBDUIViewInterfaces.MatchResultViewInterface.UpdateWidget
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMatchResultViewData                        Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UMatchResultViewInterface::UpdateWidget(const struct FMatchResultViewData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.MatchResultViewInterface.UpdateWidget");
		
		UMatchResultViewInterface_UpdateWidget_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D914E0
	 * 		Name   -> Function DBDUIViewInterfaces.MatchResultViewInterface.PlayAnimationSequence
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UMatchResultViewInterface::PlayAnimationSequence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.MatchResultViewInterface.PlayAnimationSequence");
		
		UMatchResultViewInterface_PlayAnimationSequence_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMatchResultViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMatchResultViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewInterfaces.MatchResultViewInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMenuLoadoutPartViewData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMenuLoadoutPartViewData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewInterfaces.MenuLoadoutPartViewData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMenuAddonViewData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMenuAddonViewData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewInterfaces.MenuAddonViewData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMenuItemViewData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMenuItemViewData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewInterfaces.MenuItemViewData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMenuOfferingViewData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMenuOfferingViewData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewInterfaces.MenuOfferingViewData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMenuPerkViewData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMenuPerkViewData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewInterfaces.MenuPerkViewData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMenuPowerViewData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMenuPowerViewData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewInterfaces.MenuPowerViewData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D98B60
	 * 		Name   -> Function DBDUIViewInterfaces.OfferingInteractionViewInterface.SetData
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FOfferingViewData                           OfferingData                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UOfferingInteractionViewInterface::SetData(const struct FOfferingViewData& OfferingData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.OfferingInteractionViewInterface.SetData");
		
		UOfferingInteractionViewInterface_SetData_Params params {};
		params.OfferingData = OfferingData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D914E0
	 * 		Name   -> Function DBDUIViewInterfaces.OfferingInteractionViewInterface.ClearData
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UOfferingInteractionViewInterface::ClearData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.OfferingInteractionViewInterface.ClearData");
		
		UOfferingInteractionViewInterface_ClearData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UOfferingInteractionViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOfferingInteractionViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewInterfaces.OfferingInteractionViewInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D98B60
	 * 		Name   -> Function DBDUIViewInterfaces.OfferingViewInterface.SetData
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FOfferingViewData                           OfferingViewData                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UOfferingViewInterface::SetData(const struct FOfferingViewData& OfferingViewData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.OfferingViewInterface.SetData");
		
		UOfferingViewInterface_SetData_Params params {};
		params.OfferingViewData = OfferingViewData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D914E0
	 * 		Name   -> Function DBDUIViewInterfaces.OfferingViewInterface.ClearData
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UOfferingViewInterface::ClearData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.OfferingViewInterface.ClearData");
		
		UOfferingViewInterface_ClearData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UOfferingViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOfferingViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewInterfaces.OfferingViewInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D91850
	 * 		Name   -> Function DBDUIViewInterfaces.OnboardingMenuViewInterface.SetUIEnabled
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOnboardingMenuViewInterface::SetUIEnabled(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.OnboardingMenuViewInterface.SetUIEnabled");
		
		UOnboardingMenuViewInterface_SetUIEnabled_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D98DF0
	 * 		Name   -> Function DBDUIViewInterfaces.OnboardingMenuViewInterface.SetOnboardingMenuState
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EOnboardingMenuState                               State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOnboardingMenuViewInterface::SetOnboardingMenuState(EOnboardingMenuState State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.OnboardingMenuViewInterface.SetOnboardingMenuState");
		
		UOnboardingMenuViewInterface_SetOnboardingMenuState_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D918E0
	 * 		Name   -> Function DBDUIViewInterfaces.OnboardingMenuViewInterface.SetFirstTimeUserExperience
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ftue                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOnboardingMenuViewInterface::SetFirstTimeUserExperience(bool ftue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.OnboardingMenuViewInterface.SetFirstTimeUserExperience");
		
		UOnboardingMenuViewInterface_SetFirstTimeUserExperience_Params params {};
		params.ftue = ftue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D98690
	 * 		Name   -> Function DBDUIViewInterfaces.OnboardingMenuViewInterface.GetOnboardingTutorialInterface
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	void UOnboardingMenuViewInterface::GetOnboardingTutorialInterface()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.OnboardingMenuViewInterface.GetOnboardingTutorialInterface");
		
		UOnboardingMenuViewInterface_GetOnboardingTutorialInterface_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D98650
	 * 		Name   -> Function DBDUIViewInterfaces.OnboardingMenuViewInterface.GetGameManualInterface
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	void UOnboardingMenuViewInterface::GetGameManualInterface()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.OnboardingMenuViewInterface.GetGameManualInterface");
		
		UOnboardingMenuViewInterface_GetGameManualInterface_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UOnboardingMenuViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnboardingMenuViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewInterfaces.OnboardingMenuViewInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D99110
	 * 		Name   -> Function DBDUIViewInterfaces.OnboardingTutorialViewInterface.UpdateProgress
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FOnboardingStepViewData>             before                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FOnboardingStepViewData>             after                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FRewardWrapperViewData>              Rewards                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UOnboardingTutorialViewInterface::UpdateProgress(TArray<struct FOnboardingStepViewData> before, TArray<struct FOnboardingStepViewData> after, TArray<struct FRewardWrapperViewData> Rewards)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.OnboardingTutorialViewInterface.UpdateProgress");
		
		UOnboardingTutorialViewInterface_UpdateProgress_Params params {};
		params.before = before;
		params.after = after;
		params.Rewards = Rewards;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D91590
	 * 		Name   -> Function DBDUIViewInterfaces.OnboardingTutorialViewInterface.StopLoadingSpinner
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UOnboardingTutorialViewInterface::StopLoadingSpinner()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.OnboardingTutorialViewInterface.StopLoadingSpinner");
		
		UOnboardingTutorialViewInterface_StopLoadingSpinner_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D918E0
	 * 		Name   -> Function DBDUIViewInterfaces.OnboardingTutorialViewInterface.SetUIEnabled
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOnboardingTutorialViewInterface::SetUIEnabled(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.OnboardingTutorialViewInterface.SetUIEnabled");
		
		UOnboardingTutorialViewInterface_SetUIEnabled_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D98F50
	 * 		Name   -> Function DBDUIViewInterfaces.OnboardingTutorialViewInterface.SetTutorialProgressionFeedbacks
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      completedStepId                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               isOnboardingEnabled                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOnboardingTutorialViewInterface::SetTutorialProgressionFeedbacks(const class FString& completedStepId, bool isOnboardingEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.OnboardingTutorialViewInterface.SetTutorialProgressionFeedbacks");
		
		UOnboardingTutorialViewInterface_SetTutorialProgressionFeedbacks_Params params {};
		params.completedStepId = completedStepId;
		params.isOnboardingEnabled = isOnboardingEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D98E70
	 * 		Name   -> Function DBDUIViewInterfaces.OnboardingTutorialViewInterface.SetProgress
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FOnboardingStepViewData>             Progress                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UOnboardingTutorialViewInterface::SetProgress(TArray<struct FOnboardingStepViewData> Progress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.OnboardingTutorialViewInterface.SetProgress");
		
		UOnboardingTutorialViewInterface_SetProgress_Params params {};
		params.Progress = Progress;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D91850
	 * 		Name   -> Function DBDUIViewInterfaces.OnboardingTutorialViewInterface.SetIsKillSwitch
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isKillSwitch                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOnboardingTutorialViewInterface::SetIsKillSwitch(bool isKillSwitch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.OnboardingTutorialViewInterface.SetIsKillSwitch");
		
		UOnboardingTutorialViewInterface_SetIsKillSwitch_Params params {};
		params.isKillSwitch = isKillSwitch;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UOnboardingTutorialViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnboardingTutorialViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewInterfaces.OnboardingTutorialViewInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D986D0
	 * 		Name   -> Function DBDUIViewInterfaces.PerksContainerViewInterface.GetPerkInterface
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPerksContainerViewInterface::GetPerkInterface(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.PerksContainerViewInterface.GetPerkInterface");
		
		UPerksContainerViewInterface_GetPerkInterface_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPerksContainerViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPerksContainerViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewInterfaces.PerksContainerViewInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D91680
	 * 		Name   -> Function DBDUIViewInterfaces.PerkViewInterface.UpdatePerkCooldown
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              cooldownValue                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPerkViewInterface::UpdatePerkCooldown(float cooldownValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.PerkViewInterface.UpdatePerkCooldown");
		
		UPerkViewInterface_UpdatePerkCooldown_Params params {};
		params.cooldownValue = cooldownValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D98C30
	 * 		Name   -> Function DBDUIViewInterfaces.PerkViewInterface.SetData
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPerkViewData                               PerkViewData                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UPerkViewInterface::SetData(const struct FPerkViewData& PerkViewData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.PerkViewInterface.SetData");
		
		UPerkViewInterface_SetData_Params params {};
		params.PerkViewData = PerkViewData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D914E0
	 * 		Name   -> Function DBDUIViewInterfaces.PerkViewInterface.ClearData
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPerkViewInterface::ClearData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.PerkViewInterface.ClearData");
		
		UPerkViewInterface_ClearData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPerkViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPerkViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewInterfaces.PerkViewInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D98AD0
	 * 		Name   -> Function DBDUIViewInterfaces.PingStatusViewInterface.SetData
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EPingQuality                                       pingQuality                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPingStatusViewInterface::SetData(EPingQuality pingQuality)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.PingStatusViewInterface.SetData");
		
		UPingStatusViewInterface_SetData_Params params {};
		params.pingQuality = pingQuality;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPingStatusViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPingStatusViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewInterfaces.PingStatusViewInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D986D0
	 * 		Name   -> Function DBDUIViewInterfaces.PlayerStatusesContainerViewInterface.GetPlayerStatusInterface
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerStatusesContainerViewInterface::GetPlayerStatusInterface(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.PlayerStatusesContainerViewInterface.GetPlayerStatusInterface");
		
		UPlayerStatusesContainerViewInterface_GetPlayerStatusInterface_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPlayerStatusesContainerViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerStatusesContainerViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewInterfaces.PlayerStatusesContainerViewInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D915B0
	 * 		Name   -> Function DBDUIViewInterfaces.PlayerStatusViewInterface.TriggerAfflictionHit
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPlayerStatusViewInterface::TriggerAfflictionHit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.PlayerStatusViewInterface.TriggerAfflictionHit");
		
		UPlayerStatusViewInterface_TriggerAfflictionHit_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D9E290
	 * 		Name   -> Function DBDUIViewInterfaces.PlayerStatusViewInterface.SetTimerProgress
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsDeepWound                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerStatusViewInterface::SetTimerProgress(float value, bool IsDeepWound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.PlayerStatusViewInterface.SetTimerProgress");
		
		UPlayerStatusViewInterface_SetTimerProgress_Params params {};
		params.value = value;
		params.IsDeepWound = IsDeepWound;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D91850
	 * 		Name   -> Function DBDUIViewInterfaces.PlayerStatusViewInterface.SetPlayerNameVisibility
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               visible                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerStatusViewInterface::SetPlayerNameVisibility(bool visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.PlayerStatusViewInterface.SetPlayerNameVisibility");
		
		UPlayerStatusViewInterface_SetPlayerNameVisibility_Params params {};
		params.visible = visible;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D9E170
	 * 		Name   -> Function DBDUIViewInterfaces.PlayerStatusViewInterface.SetKiller
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayTag                                killerTag                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerStatusViewInterface::SetKiller(const struct FGameplayTag& killerTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.PlayerStatusViewInterface.SetKiller");
		
		UPlayerStatusViewInterface_SetKiller_Params params {};
		params.killerTag = killerTag;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D9DDA0
	 * 		Name   -> Function DBDUIViewInterfaces.PlayerStatusViewInterface.SetData
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPlayerStatusViewData                       Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UPlayerStatusViewInterface::SetData(const struct FPlayerStatusViewData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.PlayerStatusViewInterface.SetData");
		
		UPlayerStatusViewInterface_SetData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D9DC40
	 * 		Name   -> Function DBDUIViewInterfaces.PlayerStatusViewInterface.PlayTimerAnimation
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPlayerStatusViewInterface::PlayTimerAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.PlayerStatusViewInterface.PlayTimerAnimation");
		
		UPlayerStatusViewInterface_PlayTimerAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D915D0
	 * 		Name   -> Function DBDUIViewInterfaces.PlayerStatusViewInterface.PlayHookEscapeFailedAnimation
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPlayerStatusViewInterface::PlayHookEscapeFailedAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.PlayerStatusViewInterface.PlayHookEscapeFailedAnimation");
		
		UPlayerStatusViewInterface_PlayHookEscapeFailedAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D9DBF0
	 * 		Name   -> Function DBDUIViewInterfaces.PlayerStatusViewInterface.ClearData
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPlayerStatusViewInterface::ClearData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.PlayerStatusViewInterface.ClearData");
		
		UPlayerStatusViewInterface_ClearData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPlayerStatusViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerStatusViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewInterfaces.PlayerStatusViewInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D9DEC0
	 * 		Name   -> Function DBDUIViewInterfaces.PowerBundleViewInterface.SetData
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPowerBundleViewData                        PowerBundleViewData                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UPowerBundleViewInterface::SetData(const struct FPowerBundleViewData& PowerBundleViewData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.PowerBundleViewInterface.SetData");
		
		UPowerBundleViewInterface_SetData_Params params {};
		params.PowerBundleViewData = PowerBundleViewData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D914E0
	 * 		Name   -> Function DBDUIViewInterfaces.PowerBundleViewInterface.ClearData
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPowerBundleViewInterface::ClearData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.PowerBundleViewInterface.ClearData");
		
		UPowerBundleViewInterface_ClearData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPowerBundleViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPowerBundleViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewInterfaces.PowerBundleViewInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D9E040
	 * 		Name   -> Function DBDUIViewInterfaces.PowerViewInterface.SetData
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPowerViewData                              PowerViewData                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UPowerViewInterface::SetData(const struct FPowerViewData& PowerViewData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.PowerViewInterface.SetData");
		
		UPowerViewInterface_SetData_Params params {};
		params.PowerViewData = PowerViewData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D914E0
	 * 		Name   -> Function DBDUIViewInterfaces.PowerViewInterface.ClearData
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPowerViewInterface::ClearData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.PowerViewInterface.ClearData");
		
		UPowerViewInterface_ClearData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPowerViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPowerViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewInterfaces.PowerViewInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D9E420
	 * 		Name   -> Function DBDUIViewInterfaces.ScreenIndicatorsContainerViewInterface.ShowDirectionIndicator
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FScreenIndicatorViewData                    Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UScreenIndicatorsContainerViewInterface::ShowDirectionIndicator(const struct FScreenIndicatorViewData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.ScreenIndicatorsContainerViewInterface.ShowDirectionIndicator");
		
		UScreenIndicatorsContainerViewInterface_ShowDirectionIndicator_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D9DC60
	 * 		Name   -> Function DBDUIViewInterfaces.ScreenIndicatorsContainerViewInterface.RemoveDirectionIndicator
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      ID                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScreenIndicatorsContainerViewInterface::RemoveDirectionIndicator(const class FString& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.ScreenIndicatorsContainerViewInterface.RemoveDirectionIndicator");
		
		UScreenIndicatorsContainerViewInterface_RemoveDirectionIndicator_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UScreenIndicatorsContainerViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScreenIndicatorsContainerViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewInterfaces.ScreenIndicatorsContainerViewInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D9E860
	 * 		Name   -> Function DBDUIViewInterfaces.SkillCheckViewInterface.UpdateProgress
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USkillCheckViewInterface::UpdateProgress(float value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.SkillCheckViewInterface.UpdateProgress");
		
		USkillCheckViewInterface_UpdateProgress_Params params {};
		params.value = value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D9E790
	 * 		Name   -> Function DBDUIViewInterfaces.SkillCheckViewInterface.UpdatePositionOffset
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            X                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Y                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USkillCheckViewInterface::UpdatePositionOffset(int32_t X, int32_t Y)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.SkillCheckViewInterface.UpdatePositionOffset");
		
		USkillCheckViewInterface_UpdatePositionOffset_Params params {};
		params.X = X;
		params.Y = Y;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D918E0
	 * 		Name   -> Function DBDUIViewInterfaces.SkillCheckViewInterface.ShowSkillCheckSuccess
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsBonus                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USkillCheckViewInterface::ShowSkillCheckSuccess(bool IsBonus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.SkillCheckViewInterface.ShowSkillCheckSuccess");
		
		USkillCheckViewInterface_ShowSkillCheckSuccess_Params params {};
		params.IsBonus = IsBonus;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D91590
	 * 		Name   -> Function DBDUIViewInterfaces.SkillCheckViewInterface.ShowSkillCheckFail
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void USkillCheckViewInterface::ShowSkillCheckFail()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.SkillCheckViewInterface.ShowSkillCheckFail");
		
		USkillCheckViewInterface_ShowSkillCheckFail_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D9E4E0
	 * 		Name   -> Function DBDUIViewInterfaces.SkillCheckViewInterface.ShowSkillCheck
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FSkillCheckViewData                         skillCheckData                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void USkillCheckViewInterface::ShowSkillCheck(const struct FSkillCheckViewData& skillCheckData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.SkillCheckViewInterface.ShowSkillCheck");
		
		USkillCheckViewInterface_ShowSkillCheck_Params params {};
		params.skillCheckData = skillCheckData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D91740
	 * 		Name   -> Function DBDUIViewInterfaces.SkillCheckViewInterface.HideSkillCheck
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void USkillCheckViewInterface::HideSkillCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.SkillCheckViewInterface.HideSkillCheck");
		
		USkillCheckViewInterface_HideSkillCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D921D0
	 * 		Name   -> Function DBDUIViewInterfaces.SkillCheckViewInterface.ApplyScaleFactor
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USkillCheckViewInterface::ApplyScaleFactor(float Scale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.SkillCheckViewInterface.ApplyScaleFactor");
		
		USkillCheckViewInterface_ApplyScaleFactor_Params params {};
		params.Scale = Scale;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USkillCheckViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USkillCheckViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewInterfaces.SkillCheckViewInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D9DC60
	 * 		Name   -> Function DBDUIViewInterfaces.SpectateBarViewInterface.SetSpectatedName
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      playerName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USpectateBarViewInterface::SetSpectatedName(const class FString& playerName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.SpectateBarViewInterface.SetSpectatedName");
		
		USpectateBarViewInterface_SetSpectatedName_Params params {};
		params.playerName = playerName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D91500
	 * 		Name   -> Function DBDUIViewInterfaces.SpectateBarViewInterface.SetSpectateBarVisibility
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USpectateBarViewInterface::SetSpectateBarVisibility(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.SpectateBarViewInterface.SetSpectateBarVisibility");
		
		USpectateBarViewInterface_SetSpectateBarVisibility_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D918E0
	 * 		Name   -> Function DBDUIViewInterfaces.SpectateBarViewInterface.SetArrowsVisibility
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USpectateBarViewInterface::SetArrowsVisibility(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.SpectateBarViewInterface.SetArrowsVisibility");
		
		USpectateBarViewInterface_SetArrowsVisibility_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USpectateBarViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpectateBarViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewInterfaces.SpectateBarViewInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D9E600
	 * 		Name   -> Function DBDUIViewInterfaces.StartSequenceViewInterface.ShowStartSequence
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FStartSequenceViewData                      Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UStartSequenceViewInterface::ShowStartSequence(const struct FStartSequenceViewData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.StartSequenceViewInterface.ShowStartSequence");
		
		UStartSequenceViewInterface_ShowStartSequence_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D914E0
	 * 		Name   -> Function DBDUIViewInterfaces.StartSequenceViewInterface.HideStartSequence
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UStartSequenceViewInterface::HideStartSequence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.StartSequenceViewInterface.HideStartSequence");
		
		UStartSequenceViewInterface_HideStartSequence_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D9DC10
	 * 		Name   -> Function DBDUIViewInterfaces.StartSequenceViewInterface.GetIsStartSequenceVisible
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	bool UStartSequenceViewInterface::GetIsStartSequenceVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.StartSequenceViewInterface.GetIsStartSequenceVisible");
		
		UStartSequenceViewInterface_GetIsStartSequenceVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UStartSequenceViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStartSequenceViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewInterfaces.StartSequenceViewInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D9E370
	 * 		Name   -> Function DBDUIViewInterfaces.StatusEffectViewInterface.ShowActiveStatusEffect
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FStatusEffectViewData                       statusEffectData                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UStatusEffectViewInterface::ShowActiveStatusEffect(const struct FStatusEffectViewData& statusEffectData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.StatusEffectViewInterface.ShowActiveStatusEffect");
		
		UStatusEffectViewInterface_ShowActiveStatusEffect_Params params {};
		params.statusEffectData = statusEffectData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D9DD00
	 * 		Name   -> Function DBDUIViewInterfaces.StatusEffectViewInterface.RemoveExistingStatusEffect
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        statusEffectId                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UStatusEffectViewInterface::RemoveExistingStatusEffect(const class FName& statusEffectId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.StatusEffectViewInterface.RemoveExistingStatusEffect");
		
		UStatusEffectViewInterface_RemoveExistingStatusEffect_Params params {};
		params.statusEffectId = statusEffectId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UStatusEffectViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStatusEffectViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewInterfaces.StatusEffectViewInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D9E6C0
	 * 		Name   -> Function DBDUIViewInterfaces.SubtitlesViewInterface.ShowSubtitle
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        subtitleText                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void USubtitlesViewInterface::ShowSubtitle(const class FText& subtitleText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.SubtitlesViewInterface.ShowSubtitle");
		
		USubtitlesViewInterface_ShowSubtitle_Params params {};
		params.subtitleText = subtitleText;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D9E210
	 * 		Name   -> Function DBDUIViewInterfaces.SubtitlesViewInterface.SetSubtitlesSize
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ESubtitlesSize                                     Size                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USubtitlesViewInterface::SetSubtitlesSize(ESubtitlesSize Size)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.SubtitlesViewInterface.SetSubtitlesSize");
		
		USubtitlesViewInterface_SetSubtitlesSize_Params params {};
		params.Size = Size;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D91C70
	 * 		Name   -> Function DBDUIViewInterfaces.SubtitlesViewInterface.SetSubtitlesPosition
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ESubtitlesPosition                                 position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USubtitlesViewInterface::SetSubtitlesPosition(ESubtitlesPosition position)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.SubtitlesViewInterface.SetSubtitlesPosition");
		
		USubtitlesViewInterface_SetSubtitlesPosition_Params params {};
		params.position = position;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D98DF0
	 * 		Name   -> Function DBDUIViewInterfaces.SubtitlesViewInterface.SetSubtitlesBackgroundOpacity
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ESubtitlesBackgroundOpacity                        Opacity                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USubtitlesViewInterface::SetSubtitlesBackgroundOpacity(ESubtitlesBackgroundOpacity Opacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.SubtitlesViewInterface.SetSubtitlesBackgroundOpacity");
		
		USubtitlesViewInterface_SetSubtitlesBackgroundOpacity_Params params {};
		params.Opacity = Opacity;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D915D0
	 * 		Name   -> Function DBDUIViewInterfaces.SubtitlesViewInterface.HideSubtitles
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void USubtitlesViewInterface::HideSubtitles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.SubtitlesViewInterface.HideSubtitles");
		
		USubtitlesViewInterface_HideSubtitles_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USubtitlesViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USubtitlesViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewInterfaces.SubtitlesViewInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DA0410
	 * 		Name   -> Function DBDUIViewInterfaces.TemplateViewInterface.TemplateExampleFunction
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTemplateViewData                           templateData                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UTemplateViewInterface::TemplateExampleFunction(const struct FTemplateViewData& templateData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.TemplateViewInterface.TemplateExampleFunction");
		
		UTemplateViewInterface_TemplateExampleFunction_Params params {};
		params.templateData = templateData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTemplateViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTemplateViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewInterfaces.TemplateViewInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D91C70
	 * 		Name   -> Function DBDUIViewInterfaces.TestBuildFlagViewInterface.UpdateWidget
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ETestBuildType                                     testBuildType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTestBuildFlagViewInterface::UpdateWidget(ETestBuildType testBuildType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.TestBuildFlagViewInterface.UpdateWidget");
		
		UTestBuildFlagViewInterface_UpdateWidget_Params params {};
		params.testBuildType = testBuildType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTestBuildFlagViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTestBuildFlagViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewInterfaces.TestBuildFlagViewInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DA0250
	 * 		Name   -> Function DBDUIViewInterfaces.TutorialHighlightViewInterface.SetTutorialHighlight
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Show                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EHudComponent                                      componentId                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTutorialHighlightViewInterface::SetTutorialHighlight(bool Show, EHudComponent componentId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.TutorialHighlightViewInterface.SetTutorialHighlight");
		
		UTutorialHighlightViewInterface_SetTutorialHighlight_Params params {};
		params.Show = Show;
		params.componentId = componentId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTutorialHighlightViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTutorialHighlightViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewInterfaces.TutorialHighlightViewInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DA0330
	 * 		Name   -> Function DBDUIViewInterfaces.TutorialMysteryNoteViewInterface.ShowMysteryNote
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FNotifTutorialPopupViewData                 notifData                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UTutorialMysteryNoteViewInterface::ShowMysteryNote(const struct FNotifTutorialPopupViewData& notifData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.TutorialMysteryNoteViewInterface.ShowMysteryNote");
		
		UTutorialMysteryNoteViewInterface_ShowMysteryNote_Params params {};
		params.notifData = notifData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D914E0
	 * 		Name   -> Function DBDUIViewInterfaces.TutorialMysteryNoteViewInterface.HideMysteryNote
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UTutorialMysteryNoteViewInterface::HideMysteryNote()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.TutorialMysteryNoteViewInterface.HideMysteryNote");
		
		UTutorialMysteryNoteViewInterface_HideMysteryNote_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTutorialMysteryNoteViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTutorialMysteryNoteViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewInterfaces.TutorialMysteryNoteViewInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DA01B0
	 * 		Name   -> Function DBDUIViewInterfaces.TutorialObjectivesViewInterface.RemoveTutorialObjective
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        ID                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTutorialObjectivesViewInterface::RemoveTutorialObjective(const class FName& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.TutorialObjectivesViewInterface.RemoveTutorialObjective");
		
		UTutorialObjectivesViewInterface_RemoveTutorialObjective_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D915B0
	 * 		Name   -> Function DBDUIViewInterfaces.TutorialObjectivesViewInterface.RemoveAllTutorialObjectives
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UTutorialObjectivesViewInterface::RemoveAllTutorialObjectives()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.TutorialObjectivesViewInterface.RemoveAllTutorialObjectives");
		
		UTutorialObjectivesViewInterface_RemoveAllTutorialObjectives_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DA00C0
	 * 		Name   -> Function DBDUIViewInterfaces.TutorialObjectivesViewInterface.CompleteTutorialObjective
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        ID                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               removeAfterCompletion                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTutorialObjectivesViewInterface::CompleteTutorialObjective(const class FName& ID, bool removeAfterCompletion)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.TutorialObjectivesViewInterface.CompleteTutorialObjective");
		
		UTutorialObjectivesViewInterface_CompleteTutorialObjective_Params params {};
		params.ID = ID;
		params.removeAfterCompletion = removeAfterCompletion;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D9FF90
	 * 		Name   -> Function DBDUIViewInterfaces.TutorialObjectivesViewInterface.AddTutorialObjective
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        ID                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTutorialObjectivesViewData                 InteractionPromptViewData                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UTutorialObjectivesViewInterface::AddTutorialObjective(const class FName& ID, const struct FTutorialObjectivesViewData& InteractionPromptViewData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.TutorialObjectivesViewInterface.AddTutorialObjective");
		
		UTutorialObjectivesViewInterface_AddTutorialObjective_Params params {};
		params.ID = ID;
		params.InteractionPromptViewData = InteractionPromptViewData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTutorialObjectivesViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTutorialObjectivesViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewInterfaces.TutorialObjectivesViewInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DA0330
	 * 		Name   -> Function DBDUIViewInterfaces.TutorialPopupViewInterface.ShowNotifTutorialPopup
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FNotifTutorialPopupViewData                 notifTutoData                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UTutorialPopupViewInterface::ShowNotifTutorialPopup(const struct FNotifTutorialPopupViewData& notifTutoData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.TutorialPopupViewInterface.ShowNotifTutorialPopup");
		
		UTutorialPopupViewInterface_ShowNotifTutorialPopup_Params params {};
		params.notifTutoData = notifTutoData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D91850
	 * 		Name   -> Function DBDUIViewInterfaces.TutorialPopupViewInterface.HideTutorialPopup
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               playSoundEffect                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTutorialPopupViewInterface::HideTutorialPopup(bool playSoundEffect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.TutorialPopupViewInterface.HideTutorialPopup");
		
		UTutorialPopupViewInterface_HideTutorialPopup_Params params {};
		params.playSoundEffect = playSoundEffect;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTutorialPopupViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTutorialPopupViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewInterfaces.TutorialPopupViewInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UUIUtilities.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUIUtilities::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIViewInterfaces.UIUtilities");
		return ptr;
	}

}


