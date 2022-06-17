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
	 * 		RVA    -> 0x03D725E0
	 * 		Name   -> Function DBDUIManagers.DBDTextManager.GetLargeTextEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UDBDTextManager::GetLargeTextEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIManagers.DBDTextManager.GetLargeTextEnabled");
		
		UDBDTextManager_GetLargeTextEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDBDTextManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDBDTextManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIManagers.DBDTextManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UUIDataManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUIDataManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIManagers.UIDataManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D726C0
	 * 		Name   -> Function DBDUIManagers.UIScaleManager.GetSkillCheckScaleFactor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UUIScaleManager::GetSkillCheckScaleFactor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIManagers.UIScaleManager.GetSkillCheckScaleFactor");
		
		UUIScaleManager_GetSkillCheckScaleFactor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D72630
	 * 		Name   -> Function DBDUIManagers.UIScaleManager.GetScaleFactor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EScaleType                                         Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UUIScaleManager::GetScaleFactor(EScaleType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIManagers.UIScaleManager.GetScaleFactor");
		
		UUIScaleManager_GetScaleFactor_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D72600
	 * 		Name   -> Function DBDUIManagers.UIScaleManager.GetMenuScaleFactor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UUIScaleManager::GetMenuScaleFactor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIManagers.UIScaleManager.GetMenuScaleFactor");
		
		UUIScaleManager_GetMenuScaleFactor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D725B0
	 * 		Name   -> Function DBDUIManagers.UIScaleManager.GetHudScaleFactor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UUIScaleManager::GetHudScaleFactor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIManagers.UIScaleManager.GetHudScaleFactor");
		
		UUIScaleManager_GetHudScaleFactor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D72580
	 * 		Name   -> Function DBDUIManagers.UIScaleManager.GetDPIScaleCurveRatio
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	EDPIScaleCurveRatio UUIScaleManager::GetDPIScaleCurveRatio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDUIManagers.UIScaleManager.GetDPIScaleCurveRatio");
		
		UUIScaleManager_GetDPIScaleCurveRatio_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UUIScaleManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUIScaleManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDUIManagers.UIScaleManager");
		return ptr;
	}

}


