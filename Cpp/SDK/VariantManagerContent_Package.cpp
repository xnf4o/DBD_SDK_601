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
	 * 		RVA    -> 0x037A48C0
	 * 		Name   -> Function VariantManagerContent.LevelVariantSets.GetVariantSetByName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      VariantSetName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UVariantSet* ULevelVariantSets::GetVariantSetByName(const class FString& VariantSetName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VariantManagerContent.LevelVariantSets.GetVariantSetByName");
		
		ULevelVariantSets_GetVariantSetByName_Params params {};
		params.VariantSetName = VariantSetName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x037A4820
	 * 		Name   -> Function VariantManagerContent.LevelVariantSets.GetVariantSet
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            VariantSetIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UVariantSet* ULevelVariantSets::GetVariantSet(int32_t VariantSetIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VariantManagerContent.LevelVariantSets.GetVariantSet");
		
		ULevelVariantSets_GetVariantSet_Params params {};
		params.VariantSetIndex = VariantSetIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x037A4410
	 * 		Name   -> Function VariantManagerContent.LevelVariantSets.GetNumVariantSets
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	int32_t ULevelVariantSets::GetNumVariantSets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VariantManagerContent.LevelVariantSets.GetNumVariantSets");
		
		ULevelVariantSets_GetNumVariantSets_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULevelVariantSets.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULevelVariantSets::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VariantManagerContent.LevelVariantSets");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x037A5600
	 * 		Name   -> Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      VariantSetName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      VariantName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ALevelVariantSetsActor::SwitchOnVariantByName(const class FString& VariantSetName, const class FString& VariantName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByName");
		
		ALevelVariantSetsActor_SwitchOnVariantByName_Params params {};
		params.VariantSetName = VariantSetName;
		params.VariantName = VariantName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x037A5530
	 * 		Name   -> Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            VariantSetIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            VariantIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ALevelVariantSetsActor::SwitchOnVariantByIndex(int32_t VariantSetIndex, int32_t VariantIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByIndex");
		
		ALevelVariantSetsActor_SwitchOnVariantByIndex_Params params {};
		params.VariantSetIndex = VariantSetIndex;
		params.VariantIndex = VariantIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x037A4D80
	 * 		Name   -> Function VariantManagerContent.LevelVariantSetsActor.SetLevelVariantSets
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ULevelVariantSets*                           InVariantSets                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ALevelVariantSetsActor::SetLevelVariantSets(class ULevelVariantSets* InVariantSets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VariantManagerContent.LevelVariantSetsActor.SetLevelVariantSets");
		
		ALevelVariantSetsActor_SetLevelVariantSets_Params params {};
		params.InVariantSets = InVariantSets;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x037A4310
	 * 		Name   -> Function VariantManagerContent.LevelVariantSetsActor.GetLevelVariantSets
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bLoad                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULevelVariantSets* ALevelVariantSetsActor::GetLevelVariantSets(bool bLoad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VariantManagerContent.LevelVariantSetsActor.GetLevelVariantSets");
		
		ALevelVariantSetsActor_GetLevelVariantSets_Params params {};
		params.bLoad = bLoad;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ALevelVariantSetsActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALevelVariantSetsActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VariantManagerContent.LevelVariantSetsActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULevelVariantSetsFunctionDirector.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULevelVariantSetsFunctionDirector::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VariantManagerContent.LevelVariantSetsFunctionDirector");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x037A49C0
	 * 		Name   -> Function VariantManagerContent.PropertyValue.HasRecordedData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UPropertyValue::HasRecordedData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VariantManagerContent.PropertyValue.HasRecordedData");
		
		UPropertyValue_HasRecordedData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x037A4550
	 * 		Name   -> Function VariantManagerContent.PropertyValue.GetPropertyTooltip
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FText UPropertyValue::GetPropertyTooltip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VariantManagerContent.PropertyValue.GetPropertyTooltip");
		
		UPropertyValue_GetPropertyTooltip_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x037A42D0
	 * 		Name   -> Function VariantManagerContent.PropertyValue.GetFullDisplayString
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString UPropertyValue::GetFullDisplayString()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VariantManagerContent.PropertyValue.GetFullDisplayString");
		
		UPropertyValue_GetFullDisplayString_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPropertyValue.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPropertyValue::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VariantManagerContent.PropertyValue");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPropertyValueTransform.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPropertyValueTransform::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VariantManagerContent.PropertyValueTransform");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPropertyValueVisibility.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPropertyValueVisibility::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VariantManagerContent.PropertyValueVisibility");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPropertyValueColor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPropertyValueColor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VariantManagerContent.PropertyValueColor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPropertyValueMaterial.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPropertyValueMaterial::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VariantManagerContent.PropertyValueMaterial");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPropertyValueOption.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPropertyValueOption::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VariantManagerContent.PropertyValueOption");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPropertyValueSoftObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPropertyValueSoftObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VariantManagerContent.PropertyValueSoftObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x037A4A20
	 * 		Name   -> Function VariantManagerContent.SwitchActor.SelectOption
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            OptionIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASwitchActor::SelectOption(int32_t OptionIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VariantManagerContent.SwitchActor.SelectOption");
		
		ASwitchActor_SelectOption_Params params {};
		params.OptionIndex = OptionIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x037A45F0
	 * 		Name   -> Function VariantManagerContent.SwitchActor.GetSelectedOption
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t ASwitchActor::GetSelectedOption()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VariantManagerContent.SwitchActor.GetSelectedOption");
		
		ASwitchActor_GetSelectedOption_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x037A4470
	 * 		Name   -> Function VariantManagerContent.SwitchActor.GetOptions
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class AActor*> ASwitchActor::GetOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VariantManagerContent.SwitchActor.GetOptions");
		
		ASwitchActor_GetOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ASwitchActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASwitchActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VariantManagerContent.SwitchActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x037A5510
	 * 		Name   -> Function VariantManagerContent.Variant.SwitchOn
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UVariant::SwitchOn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.SwitchOn");
		
		UVariant_SwitchOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x037A53F0
	 * 		Name   -> Function VariantManagerContent.Variant.SetThumbnailFromTexture
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UTexture2D*                                  NewThumbnail                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVariant::SetThumbnailFromTexture(class UTexture2D* NewThumbnail)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.SetThumbnailFromTexture");
		
		UVariant_SetThumbnailFromTexture_Params params {};
		params.NewThumbnail = NewThumbnail;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x037A5210
	 * 		Name   -> Function VariantManagerContent.Variant.SetThumbnailFromFile
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      FilePath                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVariant::SetThumbnailFromFile(const class FString& FilePath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.SetThumbnailFromFile");
		
		UVariant_SetThumbnailFromFile_Params params {};
		params.FilePath = FilePath;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0376CF00
	 * 		Name   -> Function VariantManagerContent.Variant.SetThumbnailFromEditorViewport
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UVariant::SetThumbnailFromEditorViewport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.SetThumbnailFromEditorViewport");
		
		UVariant_SetThumbnailFromEditorViewport_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x037A4E10
	 * 		Name   -> Function VariantManagerContent.Variant.SetThumbnailFromCamera
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  CameraTransform                                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              FOVDegrees                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MinZ                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Gamma                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVariant::SetThumbnailFromCamera(class UObject* WorldContextObject, const struct FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.SetThumbnailFromCamera");
		
		UVariant_SetThumbnailFromCamera_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.CameraTransform = CameraTransform;
		params.FOVDegrees = FOVDegrees;
		params.MinZ = MinZ;
		params.Gamma = Gamma;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x037A4BE0
	 * 		Name   -> Function VariantManagerContent.Variant.SetDisplayText
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FText                                        NewDisplayText                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UVariant::SetDisplayText(const class FText& NewDisplayText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.SetDisplayText");
		
		UVariant_SetDisplayText_Params params {};
		params.NewDisplayText = NewDisplayText;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x037A4AB0
	 * 		Name   -> Function VariantManagerContent.Variant.SetDependency
	 * 		Flags  -> (Final, Native, Public, HasOutParms)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVariantDependency                          Dependency                                                 (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UVariant::SetDependency(int32_t Index, struct FVariantDependency* Dependency)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.SetDependency");
		
		UVariant_SetDependency_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Dependency != nullptr)
			*Dependency = params.Dependency;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x037A49F0
	 * 		Name   -> Function VariantManagerContent.Variant.IsActive
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UVariant::IsActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.IsActive");
		
		UVariant_IsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x037A4620
	 * 		Name   -> Function VariantManagerContent.Variant.GetThumbnail
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UTexture2D* UVariant::GetThumbnail()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.GetThumbnail");
		
		UVariant_GetThumbnail_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x037A44F0
	 * 		Name   -> Function VariantManagerContent.Variant.GetParent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	class UVariantSet* UVariant::GetParent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.GetParent");
		
		UVariant_GetParent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x037A43E0
	 * 		Name   -> Function VariantManagerContent.Variant.GetNumDependencies
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	int32_t UVariant::GetNumDependencies()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.GetNumDependencies");
		
		UVariant_GetNumDependencies_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x037A43B0
	 * 		Name   -> Function VariantManagerContent.Variant.GetNumActors
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	int32_t UVariant::GetNumActors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.GetNumActors");
		
		UVariant_GetNumActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x037A4190
	 * 		Name   -> Function VariantManagerContent.Variant.GetDisplayText
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FText UVariant::GetDisplayText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.GetDisplayText");
		
		UVariant_GetDisplayText_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x037A4080
	 * 		Name   -> Function VariantManagerContent.Variant.GetDependents
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ULevelVariantSets*                           LevelVariantSets                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bOnlyEnabledDependencies                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class UVariant*> UVariant::GetDependents(class ULevelVariantSets* LevelVariantSets, bool bOnlyEnabledDependencies)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.GetDependents");
		
		UVariant_GetDependents_Params params {};
		params.LevelVariantSets = LevelVariantSets;
		params.bOnlyEnabledDependencies = bOnlyEnabledDependencies;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x037A3FE0
	 * 		Name   -> Function VariantManagerContent.Variant.GetDependency
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVariantDependency UVariant::GetDependency(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.GetDependency");
		
		UVariant_GetDependency_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x037A3F40
	 * 		Name   -> Function VariantManagerContent.Variant.GetActor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            ActorIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AActor* UVariant::GetActor(int32_t ActorIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.GetActor");
		
		UVariant_GetActor_Params params {};
		params.ActorIndex = ActorIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x037A3EB0
	 * 		Name   -> Function VariantManagerContent.Variant.DeleteDependency
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVariant::DeleteDependency(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.DeleteDependency");
		
		UVariant_DeleteDependency_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x037A3DB0
	 * 		Name   -> Function VariantManagerContent.Variant.AddDependency
	 * 		Flags  -> (Final, Native, Public, HasOutParms)
	 * Parameters:
	 * 		struct FVariantDependency                          Dependency                                                 (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	int32_t UVariant::AddDependency(struct FVariantDependency* Dependency)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.AddDependency");
		
		UVariant_AddDependency_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Dependency != nullptr)
			*Dependency = params.Dependency;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVariant.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVariant::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VariantManagerContent.Variant");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVariantObjectBinding.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVariantObjectBinding::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VariantManagerContent.VariantObjectBinding");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x037A5480
	 * 		Name   -> Function VariantManagerContent.VariantSet.SetThumbnailFromTexture
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UTexture2D*                                  NewThumbnail                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVariantSet::SetThumbnailFromTexture(class UTexture2D* NewThumbnail)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VariantManagerContent.VariantSet.SetThumbnailFromTexture");
		
		UVariantSet_SetThumbnailFromTexture_Params params {};
		params.NewThumbnail = NewThumbnail;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x037A5300
	 * 		Name   -> Function VariantManagerContent.VariantSet.SetThumbnailFromFile
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      FilePath                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVariantSet::SetThumbnailFromFile(const class FString& FilePath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VariantManagerContent.VariantSet.SetThumbnailFromFile");
		
		UVariantSet_SetThumbnailFromFile_Params params {};
		params.FilePath = FilePath;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0376CF00
	 * 		Name   -> Function VariantManagerContent.VariantSet.SetThumbnailFromEditorViewport
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UVariantSet::SetThumbnailFromEditorViewport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VariantManagerContent.VariantSet.SetThumbnailFromEditorViewport");
		
		UVariantSet_SetThumbnailFromEditorViewport_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x037A5010
	 * 		Name   -> Function VariantManagerContent.VariantSet.SetThumbnailFromCamera
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  CameraTransform                                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              FOVDegrees                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MinZ                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Gamma                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVariantSet::SetThumbnailFromCamera(class UObject* WorldContextObject, const struct FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VariantManagerContent.VariantSet.SetThumbnailFromCamera");
		
		UVariantSet_SetThumbnailFromCamera_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.CameraTransform = CameraTransform;
		params.FOVDegrees = FOVDegrees;
		params.MinZ = MinZ;
		params.Gamma = Gamma;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x037A4CB0
	 * 		Name   -> Function VariantManagerContent.VariantSet.SetDisplayText
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FText                                        NewDisplayText                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UVariantSet::SetDisplayText(const class FText& NewDisplayText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VariantManagerContent.VariantSet.SetDisplayText");
		
		UVariantSet_SetDisplayText_Params params {};
		params.NewDisplayText = NewDisplayText;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x037A4720
	 * 		Name   -> Function VariantManagerContent.VariantSet.GetVariantByName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      VariantName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UVariant* UVariantSet::GetVariantByName(const class FString& VariantName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VariantManagerContent.VariantSet.GetVariantByName");
		
		UVariantSet_GetVariantByName_Params params {};
		params.VariantName = VariantName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x037A4680
	 * 		Name   -> Function VariantManagerContent.VariantSet.GetVariant
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            VariantIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UVariant* UVariantSet::GetVariant(int32_t VariantIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VariantManagerContent.VariantSet.GetVariant");
		
		UVariantSet_GetVariant_Params params {};
		params.VariantIndex = VariantIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x037A4650
	 * 		Name   -> Function VariantManagerContent.VariantSet.GetThumbnail
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UTexture2D* UVariantSet::GetThumbnail()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VariantManagerContent.VariantSet.GetThumbnail");
		
		UVariantSet_GetThumbnail_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x037A4520
	 * 		Name   -> Function VariantManagerContent.VariantSet.GetParent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	class ULevelVariantSets* UVariantSet::GetParent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VariantManagerContent.VariantSet.GetParent");
		
		UVariantSet_GetParent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x037A4440
	 * 		Name   -> Function VariantManagerContent.VariantSet.GetNumVariants
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UVariantSet::GetNumVariants()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VariantManagerContent.VariantSet.GetNumVariants");
		
		UVariantSet_GetNumVariants_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x037A4230
	 * 		Name   -> Function VariantManagerContent.VariantSet.GetDisplayText
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FText UVariantSet::GetDisplayText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VariantManagerContent.VariantSet.GetDisplayText");
		
		UVariantSet_GetDisplayText_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVariantSet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVariantSet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VariantManagerContent.VariantSet");
		return ptr;
	}

}


