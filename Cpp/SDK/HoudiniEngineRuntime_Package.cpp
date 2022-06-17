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
	 * 		Name   -> PredefindFunction UHoudiniAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AHoudiniAssetActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHoudiniAssetActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoudiniAssetComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniAssetComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x037006D0
	 * 		Name   -> Function HoudiniEngineRuntime.HoudiniAssetBlueprintComponent.SetToggleValueAt
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHoudiniAssetBlueprintComponent::SetToggleValueAt(const class FString& Name, bool value, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniAssetBlueprintComponent.SetToggleValueAt");
		
		UHoudiniAssetBlueprintComponent_SetToggleValueAt_Params params {};
		params.Name = Name;
		params.value = value;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03700570
	 * 		Name   -> Function HoudiniEngineRuntime.HoudiniAssetBlueprintComponent.SetFloatParameter
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHoudiniAssetBlueprintComponent::SetFloatParameter(const class FString& Name, float value, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniAssetBlueprintComponent.SetFloatParameter");
		
		UHoudiniAssetBlueprintComponent_SetFloatParameter_Params params {};
		params.Name = Name;
		params.value = value;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03700470
	 * 		Name   -> Function HoudiniEngineRuntime.HoudiniAssetBlueprintComponent.HasParameter
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UHoudiniAssetBlueprintComponent::HasParameter(const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniAssetBlueprintComponent.HasParameter");
		
		UHoudiniAssetBlueprintComponent_HasParameter_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoudiniAssetBlueprintComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniAssetBlueprintComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetBlueprintComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoudiniAssetParameter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniAssetParameter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoudiniAssetParameterButton.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniAssetParameterButton::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterButton");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoudiniAssetParameterChoice.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniAssetParameterChoice::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterChoice");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoudiniAssetParameterColor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniAssetParameterColor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterColor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoudiniAssetParameterFile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniAssetParameterFile::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterFile");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoudiniAssetParameterFloat.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniAssetParameterFloat::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterFloat");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoudiniAssetParameterFolder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniAssetParameterFolder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterFolder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoudiniAssetParameterFolderList.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniAssetParameterFolderList::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterFolderList");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoudiniAssetParameterInt.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniAssetParameterInt::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterInt");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoudiniAssetParameterLabel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniAssetParameterLabel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterLabel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoudiniAssetParameterMultiparm.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniAssetParameterMultiparm::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterMultiparm");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoudiniAssetParameterRamp.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniAssetParameterRamp::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterRamp");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoudiniAssetParameterSeparator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniAssetParameterSeparator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterSeparator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoudiniAssetParameterString.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniAssetParameterString::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterString");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoudiniAssetParameterToggle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniAssetParameterToggle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterToggle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoudiniAssetComponentMaterials_V1.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniAssetComponentMaterials_V1::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetComponentMaterials_V1");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoudiniHandleComponent_V1.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniHandleComponent_V1::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniHandleComponent_V1");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoudiniSplineComponent_V1.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniSplineComponent_V1::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniSplineComponent_V1");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoudiniAssetInput.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniAssetInput::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetInput");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoudiniAssetInstanceInput.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniAssetInstanceInput::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetInstanceInput");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoudiniAssetInstanceInputField.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniAssetInstanceInputField::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetInstanceInputField");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoudiniAssetComponent_V1.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniAssetComponent_V1::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetComponent_V1");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoudiniInstancedActorComponent_V1.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniInstancedActorComponent_V1::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniInstancedActorComponent_V1");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoudiniMeshSplitInstancerComponent_V1.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniMeshSplitInstancerComponent_V1::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniMeshSplitInstancerComponent_V1");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoudiniEngineCopyPropertiesInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniEngineCopyPropertiesInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniEngineCopyPropertiesInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoudiniHandleParameter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniHandleParameter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniHandleParameter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoudiniHandleComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniHandleComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniHandleComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoudiniInput.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniInput::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniInput");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoudiniInputObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniInputObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniInputObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoudiniInputStaticMesh.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniInputStaticMesh::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniInputStaticMesh");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoudiniInputSkeletalMesh.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniInputSkeletalMesh::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniInputSkeletalMesh");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoudiniInputSceneComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniInputSceneComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniInputSceneComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoudiniInputMeshComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniInputMeshComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniInputMeshComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoudiniInputInstancedMeshComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniInputInstancedMeshComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniInputInstancedMeshComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoudiniInputSplineComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniInputSplineComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniInputSplineComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoudiniInputHoudiniSplineComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniInputHoudiniSplineComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniInputHoudiniSplineComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoudiniInputCameraComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniInputCameraComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniInputCameraComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoudiniInputHoudiniAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniInputHoudiniAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniInputHoudiniAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoudiniInputActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniInputActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniInputActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoudiniInputLandscape.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniInputLandscape::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniInputLandscape");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoudiniInputBrush.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniInputBrush::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniInputBrush");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoudiniInputDataTable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniInputDataTable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniInputDataTable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoudiniInputFoliageType_InstancedStaticMesh.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniInputFoliageType_InstancedStaticMesh::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniInputFoliageType_InstancedStaticMesh");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoudiniInstancedActorComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniInstancedActorComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniInstancedActorComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoudiniMeshSplitInstancerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniMeshSplitInstancerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniMeshSplitInstancerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoudiniLandscapePtr.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniLandscapePtr::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniLandscapePtr");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoudiniLandscapeEditLayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniLandscapeEditLayer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniLandscapeEditLayer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoudiniOutput.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniOutput::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniOutput");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoudiniParameter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniParameter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniParameter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoudiniParameterButton.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniParameterButton::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniParameterButton");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoudiniParameterButtonStrip.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniParameterButtonStrip::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniParameterButtonStrip");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoudiniParameterChoice.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniParameterChoice::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniParameterChoice");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoudiniParameterColor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniParameterColor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniParameterColor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoudiniParameterFile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniParameterFile::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniParameterFile");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoudiniParameterFloat.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniParameterFloat::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniParameterFloat");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoudiniParameterFolder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniParameterFolder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniParameterFolder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoudiniParameterFolderList.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniParameterFolderList::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniParameterFolderList");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoudiniParameterInt.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniParameterInt::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniParameterInt");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoudiniParameterLabel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniParameterLabel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniParameterLabel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoudiniParameterMultiParm.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniParameterMultiParm::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniParameterMultiParm");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoudiniParameterOperatorPath.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniParameterOperatorPath::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniParameterOperatorPath");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoudiniParameterRampModificationEvent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniParameterRampModificationEvent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniParameterRampModificationEvent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoudiniParameterRampFloatPoint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniParameterRampFloatPoint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniParameterRampFloatPoint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoudiniParameterRampColorPoint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniParameterRampColorPoint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniParameterRampColorPoint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoudiniParameterRampFloat.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniParameterRampFloat::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniParameterRampFloat");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoudiniParameterRampColor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniParameterRampColor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniParameterRampColor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoudiniParameterSeparator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniParameterSeparator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniParameterSeparator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoudiniParameterString.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniParameterString::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniParameterString");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoudiniParameterToggle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniParameterToggle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniParameterToggle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTOPNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTOPNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.TOPNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTOPNetwork.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTOPNetwork::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.TOPNetwork");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoudiniPDGAssetLink.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniPDGAssetLink::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniPDGAssetLink");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoudiniRuntimeSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniRuntimeSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniRuntimeSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoudiniSplineComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniSplineComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniSplineComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x037093F0
	 * 		Name   -> Function HoudiniEngineRuntime.HoudiniStaticMesh.SetVertexPosition
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults)
	 * Parameters:
	 * 		uint32_t                                           InVertexIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     InPosition                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHoudiniStaticMesh::SetVertexPosition(uint32_t InVertexIndex, const struct FVector& InPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniStaticMesh.SetVertexPosition");
		
		UHoudiniStaticMesh_SetVertexPosition_Params params {};
		params.InVertexIndex = InVertexIndex;
		params.InPosition = InPosition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x037092D0
	 * 		Name   -> Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexVTangent
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults)
	 * Parameters:
	 * 		uint32_t                                           InTriangleIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      InTriangleVertexIndex                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     InVTangent                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHoudiniStaticMesh::SetTriangleVertexVTangent(uint32_t InTriangleIndex, unsigned char InTriangleVertexIndex, const struct FVector& InVTangent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexVTangent");
		
		UHoudiniStaticMesh_SetTriangleVertexVTangent_Params params {};
		params.InTriangleIndex = InTriangleIndex;
		params.InTriangleVertexIndex = InTriangleVertexIndex;
		params.InVTangent = InVTangent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03709170
	 * 		Name   -> Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexUV
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults)
	 * Parameters:
	 * 		uint32_t                                           InTriangleIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      InTriangleVertexIndex                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      InUVLayer                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   InUV                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHoudiniStaticMesh::SetTriangleVertexUV(uint32_t InTriangleIndex, unsigned char InTriangleVertexIndex, unsigned char InUVLayer, const struct FVector2D& InUV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexUV");
		
		UHoudiniStaticMesh_SetTriangleVertexUV_Params params {};
		params.InTriangleIndex = InTriangleIndex;
		params.InTriangleVertexIndex = InTriangleVertexIndex;
		params.InUVLayer = InUVLayer;
		params.InUV = InUV;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03709050
	 * 		Name   -> Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexUTangent
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults)
	 * Parameters:
	 * 		uint32_t                                           InTriangleIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      InTriangleVertexIndex                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     InUTangent                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHoudiniStaticMesh::SetTriangleVertexUTangent(uint32_t InTriangleIndex, unsigned char InTriangleVertexIndex, const struct FVector& InUTangent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexUTangent");
		
		UHoudiniStaticMesh_SetTriangleVertexUTangent_Params params {};
		params.InTriangleIndex = InTriangleIndex;
		params.InTriangleVertexIndex = InTriangleVertexIndex;
		params.InUTangent = InUTangent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03708F30
	 * 		Name   -> Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexNormal
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults)
	 * Parameters:
	 * 		uint32_t                                           InTriangleIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      InTriangleVertexIndex                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     InNormal                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHoudiniStaticMesh::SetTriangleVertexNormal(uint32_t InTriangleIndex, unsigned char InTriangleVertexIndex, const struct FVector& InNormal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexNormal");
		
		UHoudiniStaticMesh_SetTriangleVertexNormal_Params params {};
		params.InTriangleIndex = InTriangleIndex;
		params.InTriangleVertexIndex = InTriangleVertexIndex;
		params.InNormal = InNormal;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03708E60
	 * 		Name   -> Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexIndices
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults)
	 * Parameters:
	 * 		uint32_t                                           InTriangleIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FIntVector                                  InTriangleVertexIndices                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHoudiniStaticMesh::SetTriangleVertexIndices(uint32_t InTriangleIndex, const struct FIntVector& InTriangleVertexIndices)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexIndices");
		
		UHoudiniStaticMesh_SetTriangleVertexIndices_Params params {};
		params.InTriangleIndex = InTriangleIndex;
		params.InTriangleVertexIndices = InTriangleVertexIndices;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03708D40
	 * 		Name   -> Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexColor
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults)
	 * Parameters:
	 * 		uint32_t                                           InTriangleIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      InTriangleVertexIndex                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FColor                                      InColor                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHoudiniStaticMesh::SetTriangleVertexColor(uint32_t InTriangleIndex, unsigned char InTriangleVertexIndex, const struct FColor& InColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexColor");
		
		UHoudiniStaticMesh_SetTriangleVertexColor_Params params {};
		params.InTriangleIndex = InTriangleIndex;
		params.InTriangleVertexIndex = InTriangleVertexIndex;
		params.InColor = InColor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03708C70
	 * 		Name   -> Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleMaterialID
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		uint32_t                                           InTriangleIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InMaterialID                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHoudiniStaticMesh::SetTriangleMaterialID(uint32_t InTriangleIndex, int32_t InMaterialID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleMaterialID");
		
		UHoudiniStaticMesh_SetTriangleMaterialID_Params params {};
		params.InTriangleIndex = InTriangleIndex;
		params.InMaterialID = InMaterialID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03708B60
	 * 		Name   -> Function HoudiniEngineRuntime.HoudiniStaticMesh.SetStaticMaterial
	 * 		Flags  -> (Final, Native, Public, HasOutParms)
	 * Parameters:
	 * 		uint32_t                                           InMaterialIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FStaticMaterial                             InStaticMaterial                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UHoudiniStaticMesh::SetStaticMaterial(uint32_t InMaterialIndex, const struct FStaticMaterial& InStaticMaterial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniStaticMesh.SetStaticMaterial");
		
		UHoudiniStaticMesh_SetStaticMaterial_Params params {};
		params.InMaterialIndex = InMaterialIndex;
		params.InStaticMaterial = InStaticMaterial;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03708AD0
	 * 		Name   -> Function HoudiniEngineRuntime.HoudiniStaticMesh.SetNumUVLayers
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		uint32_t                                           InNumUVLayers                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHoudiniStaticMesh::SetNumUVLayers(uint32_t InNumUVLayers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniStaticMesh.SetNumUVLayers");
		
		UHoudiniStaticMesh_SetNumUVLayers_Params params {};
		params.InNumUVLayers = InNumUVLayers;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03708A40
	 * 		Name   -> Function HoudiniEngineRuntime.HoudiniStaticMesh.SetNumStaticMaterials
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		uint32_t                                           InNumStaticMaterials                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHoudiniStaticMesh::SetNumStaticMaterials(uint32_t InNumStaticMaterials)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniStaticMesh.SetNumStaticMaterials");
		
		UHoudiniStaticMesh_SetNumStaticMaterials_Params params {};
		params.InNumStaticMaterials = InNumStaticMaterials;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x037089B0
	 * 		Name   -> Function HoudiniEngineRuntime.HoudiniStaticMesh.SetHasTangents
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               bInHasTangents                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHoudiniStaticMesh::SetHasTangents(bool bInHasTangents)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniStaticMesh.SetHasTangents");
		
		UHoudiniStaticMesh_SetHasTangents_Params params {};
		params.bInHasTangents = bInHasTangents;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03708920
	 * 		Name   -> Function HoudiniEngineRuntime.HoudiniStaticMesh.SetHasPerFaceMaterials
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               bInHasPerFaceMaterials                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHoudiniStaticMesh::SetHasPerFaceMaterials(bool bInHasPerFaceMaterials)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniStaticMesh.SetHasPerFaceMaterials");
		
		UHoudiniStaticMesh_SetHasPerFaceMaterials_Params params {};
		params.bInHasPerFaceMaterials = bInHasPerFaceMaterials;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03708890
	 * 		Name   -> Function HoudiniEngineRuntime.HoudiniStaticMesh.SetHasNormals
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               bInHasNormals                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHoudiniStaticMesh::SetHasNormals(bool bInHasNormals)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniStaticMesh.SetHasNormals");
		
		UHoudiniStaticMesh_SetHasNormals_Params params {};
		params.bInHasNormals = bInHasNormals;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03708800
	 * 		Name   -> Function HoudiniEngineRuntime.HoudiniStaticMesh.SetHasColors
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               bInHasColors                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHoudiniStaticMesh::SetHasColors(bool bInHasColors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniStaticMesh.SetHasColors");
		
		UHoudiniStaticMesh_SetHasColors_Params params {};
		params.bInHasColors = bInHasColors;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x037087E0
	 * 		Name   -> Function HoudiniEngineRuntime.HoudiniStaticMesh.Optimize
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UHoudiniStaticMesh::Optimize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniStaticMesh.Optimize");
		
		UHoudiniStaticMesh_Optimize_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03708740
	 * 		Name   -> Function HoudiniEngineRuntime.HoudiniStaticMesh.IsValid
	 * 		Flags  -> (Final, Native, Public, Const)
	 * Parameters:
	 * 		bool                                               bInSkipVertexIndicesCheck                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UHoudiniStaticMesh::IsValid(bool bInSkipVertexIndicesCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniStaticMesh.IsValid");
		
		UHoudiniStaticMesh_IsValid_Params params {};
		params.bInSkipVertexIndicesCheck = bInSkipVertexIndicesCheck;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x037084D0
	 * 		Name   -> Function HoudiniEngineRuntime.HoudiniStaticMesh.Initialize
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		uint32_t                                           InNumVertices                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		uint32_t                                           InNumTriangles                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		uint32_t                                           InNumUVLayers                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		uint32_t                                           InInitialNumStaticMaterials                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInHasNormals                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInHasTangents                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInHasColors                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInHasPerFaceMaterials                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHoudiniStaticMesh::Initialize(uint32_t InNumVertices, uint32_t InNumTriangles, uint32_t InNumUVLayers, uint32_t InInitialNumStaticMaterials, bool bInHasNormals, bool bInHasTangents, bool bInHasColors, bool bInHasPerFaceMaterials)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniStaticMesh.Initialize");
		
		UHoudiniStaticMesh_Initialize_Params params {};
		params.InNumVertices = InNumVertices;
		params.InNumTriangles = InNumTriangles;
		params.InNumUVLayers = InNumUVLayers;
		params.InInitialNumStaticMaterials = InInitialNumStaticMaterials;
		params.bInHasNormals = bInHasNormals;
		params.bInHasTangents = bInHasTangents;
		params.bInHasColors = bInHasColors;
		params.bInHasPerFaceMaterials = bInHasPerFaceMaterials;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x037084B0
	 * 		Name   -> Function HoudiniEngineRuntime.HoudiniStaticMesh.HasTangents
	 * 		Flags  -> (Final, Native, Public, Const)
	 */
	bool UHoudiniStaticMesh::HasTangents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniStaticMesh.HasTangents");
		
		UHoudiniStaticMesh_HasTangents_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03708490
	 * 		Name   -> Function HoudiniEngineRuntime.HoudiniStaticMesh.HasPerFaceMaterials
	 * 		Flags  -> (Final, Native, Public, Const)
	 */
	bool UHoudiniStaticMesh::HasPerFaceMaterials()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniStaticMesh.HasPerFaceMaterials");
		
		UHoudiniStaticMesh_HasPerFaceMaterials_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03708470
	 * 		Name   -> Function HoudiniEngineRuntime.HoudiniStaticMesh.HasNormals
	 * 		Flags  -> (Final, Native, Public, Const)
	 */
	bool UHoudiniStaticMesh::HasNormals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniStaticMesh.HasNormals");
		
		UHoudiniStaticMesh_HasNormals_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03708450
	 * 		Name   -> Function HoudiniEngineRuntime.HoudiniStaticMesh.HasColors
	 * 		Flags  -> (Final, Native, Public, Const)
	 */
	bool UHoudiniStaticMesh::HasColors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniStaticMesh.HasColors");
		
		UHoudiniStaticMesh_HasColors_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03708420
	 * 		Name   -> Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexPositions
	 * 		Flags  -> (Final, Native, Public, Const)
	 */
	TArray<struct FVector> UHoudiniStaticMesh::GetVertexPositions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexPositions");
		
		UHoudiniStaticMesh_GetVertexPositions_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x037083F0
	 * 		Name   -> Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceVTangents
	 * 		Flags  -> (Final, Native, Public, Const)
	 */
	TArray<struct FVector> UHoudiniStaticMesh::GetVertexInstanceVTangents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceVTangents");
		
		UHoudiniStaticMesh_GetVertexInstanceVTangents_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03708360
	 * 		Name   -> Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceUVs
	 * 		Flags  -> (Final, Native, Public, Const)
	 */
	TArray<struct FVector2D> UHoudiniStaticMesh::GetVertexInstanceUVs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceUVs");
		
		UHoudiniStaticMesh_GetVertexInstanceUVs_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03708330
	 * 		Name   -> Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceUTangents
	 * 		Flags  -> (Final, Native, Public, Const)
	 */
	TArray<struct FVector> UHoudiniStaticMesh::GetVertexInstanceUTangents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceUTangents");
		
		UHoudiniStaticMesh_GetVertexInstanceUTangents_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03708300
	 * 		Name   -> Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceNormals
	 * 		Flags  -> (Final, Native, Public, Const)
	 */
	TArray<struct FVector> UHoudiniStaticMesh::GetVertexInstanceNormals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceNormals");
		
		UHoudiniStaticMesh_GetVertexInstanceNormals_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03708270
	 * 		Name   -> Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceColors
	 * 		Flags  -> (Final, Native, Public, Const)
	 */
	TArray<struct FColor> UHoudiniStaticMesh::GetVertexInstanceColors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceColors");
		
		UHoudiniStaticMesh_GetVertexInstanceColors_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x037081E0
	 * 		Name   -> Function HoudiniEngineRuntime.HoudiniStaticMesh.GetTriangleIndices
	 * 		Flags  -> (Final, Native, Public, Const)
	 */
	TArray<struct FIntVector> UHoudiniStaticMesh::GetTriangleIndices()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniStaticMesh.GetTriangleIndices");
		
		UHoudiniStaticMesh_GetTriangleIndices_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03708150
	 * 		Name   -> Function HoudiniEngineRuntime.HoudiniStaticMesh.GetStaticMaterials
	 * 		Flags  -> (Final, Native, Public, Const)
	 */
	TArray<struct FStaticMaterial> UHoudiniStaticMesh::GetStaticMaterials()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniStaticMesh.GetStaticMaterials");
		
		UHoudiniStaticMesh_GetStaticMaterials_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03708130
	 * 		Name   -> Function HoudiniEngineRuntime.HoudiniStaticMesh.GetNumVertices
	 * 		Flags  -> (Final, Native, Public, Const)
	 */
	uint32_t UHoudiniStaticMesh::GetNumVertices()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniStaticMesh.GetNumVertices");
		
		UHoudiniStaticMesh_GetNumVertices_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03708110
	 * 		Name   -> Function HoudiniEngineRuntime.HoudiniStaticMesh.GetNumVertexInstances
	 * 		Flags  -> (Final, Native, Public, Const)
	 */
	uint32_t UHoudiniStaticMesh::GetNumVertexInstances()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniStaticMesh.GetNumVertexInstances");
		
		UHoudiniStaticMesh_GetNumVertexInstances_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x037080F0
	 * 		Name   -> Function HoudiniEngineRuntime.HoudiniStaticMesh.GetNumUVLayers
	 * 		Flags  -> (Final, Native, Public, Const)
	 */
	uint32_t UHoudiniStaticMesh::GetNumUVLayers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniStaticMesh.GetNumUVLayers");
		
		UHoudiniStaticMesh_GetNumUVLayers_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x037080D0
	 * 		Name   -> Function HoudiniEngineRuntime.HoudiniStaticMesh.GetNumTriangles
	 * 		Flags  -> (Final, Native, Public, Const)
	 */
	uint32_t UHoudiniStaticMesh::GetNumTriangles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniStaticMesh.GetNumTriangles");
		
		UHoudiniStaticMesh_GetNumTriangles_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x037080B0
	 * 		Name   -> Function HoudiniEngineRuntime.HoudiniStaticMesh.GetNumStaticMaterials
	 * 		Flags  -> (Final, Native, Public, Const)
	 */
	uint32_t UHoudiniStaticMesh::GetNumStaticMaterials()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniStaticMesh.GetNumStaticMaterials");
		
		UHoudiniStaticMesh_GetNumStaticMaterials_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03708000
	 * 		Name   -> Function HoudiniEngineRuntime.HoudiniStaticMesh.GetMaterialIndex
	 * 		Flags  -> (Final, Native, Public, Const)
	 * Parameters:
	 * 		class FName                                        InMaterialSlotName                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UHoudiniStaticMesh::GetMaterialIndex(const class FName& InMaterialSlotName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniStaticMesh.GetMaterialIndex");
		
		UHoudiniStaticMesh_GetMaterialIndex_Params params {};
		params.InMaterialSlotName = InMaterialSlotName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03707FD0
	 * 		Name   -> Function HoudiniEngineRuntime.HoudiniStaticMesh.GetMaterialIDsPerTriangle
	 * 		Flags  -> (Final, Native, Public, Const)
	 */
	TArray<int32_t> UHoudiniStaticMesh::GetMaterialIDsPerTriangle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniStaticMesh.GetMaterialIDsPerTriangle");
		
		UHoudiniStaticMesh_GetMaterialIDsPerTriangle_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03707F30
	 * 		Name   -> Function HoudiniEngineRuntime.HoudiniStaticMesh.GetMaterial
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		int32_t                                            InMaterialIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMaterialInterface* UHoudiniStaticMesh::GetMaterial(int32_t InMaterialIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniStaticMesh.GetMaterial");
		
		UHoudiniStaticMesh_GetMaterial_Params params {};
		params.InMaterialIndex = InMaterialIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03707EA0
	 * 		Name   -> Function HoudiniEngineRuntime.HoudiniStaticMesh.CalculateTangents
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               bInComputeWeightedNormals                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHoudiniStaticMesh::CalculateTangents(bool bInComputeWeightedNormals)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniStaticMesh.CalculateTangents");
		
		UHoudiniStaticMesh_CalculateTangents_Params params {};
		params.bInComputeWeightedNormals = bInComputeWeightedNormals;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03707E10
	 * 		Name   -> Function HoudiniEngineRuntime.HoudiniStaticMesh.CalculateNormals
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               bInComputeWeightedNormals                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHoudiniStaticMesh::CalculateNormals(bool bInComputeWeightedNormals)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniStaticMesh.CalculateNormals");
		
		UHoudiniStaticMesh_CalculateNormals_Params params {};
		params.bInComputeWeightedNormals = bInComputeWeightedNormals;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03707DC0
	 * 		Name   -> Function HoudiniEngineRuntime.HoudiniStaticMesh.CalcBounds
	 * 		Flags  -> (Final, Native, Public, HasDefaults, Const)
	 */
	struct FBox UHoudiniStaticMesh::CalcBounds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniStaticMesh.CalcBounds");
		
		UHoudiniStaticMesh_CalcBounds_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03707CA0
	 * 		Name   -> Function HoudiniEngineRuntime.HoudiniStaticMesh.AddStaticMaterial
	 * 		Flags  -> (Final, Native, Public, HasOutParms)
	 * Parameters:
	 * 		struct FStaticMaterial                             InStaticMaterial                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	uint32_t UHoudiniStaticMesh::AddStaticMaterial(const struct FStaticMaterial& InStaticMaterial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniStaticMesh.AddStaticMaterial");
		
		UHoudiniStaticMesh_AddStaticMaterial_Params params {};
		params.InStaticMaterial = InStaticMaterial;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoudiniStaticMesh.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniStaticMesh::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniStaticMesh");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03709910
	 * 		Name   -> Function HoudiniEngineRuntime.HoudiniStaticMeshComponent.SetMesh
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class UHoudiniStaticMesh*                          InMesh                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHoudiniStaticMeshComponent::SetMesh(class UHoudiniStaticMesh* InMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniStaticMeshComponent.SetMesh");
		
		UHoudiniStaticMeshComponent_SetMesh_Params params {};
		params.InMesh = InMesh;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03709880
	 * 		Name   -> Function HoudiniEngineRuntime.HoudiniStaticMeshComponent.SetHoudiniIconVisible
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               bInHoudiniIconVisible                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHoudiniStaticMeshComponent::SetHoudiniIconVisible(bool bInHoudiniIconVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniStaticMeshComponent.SetHoudiniIconVisible");
		
		UHoudiniStaticMeshComponent_SetHoudiniIconVisible_Params params {};
		params.bInHoudiniIconVisible = bInHoudiniIconVisible;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03709860
	 * 		Name   -> Function HoudiniEngineRuntime.HoudiniStaticMeshComponent.NotifyMeshUpdated
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UHoudiniStaticMeshComponent::NotifyMeshUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniStaticMeshComponent.NotifyMeshUpdated");
		
		UHoudiniStaticMeshComponent_NotifyMeshUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03709840
	 * 		Name   -> Function HoudiniEngineRuntime.HoudiniStaticMeshComponent.IsHoudiniIconVisible
	 * 		Flags  -> (Final, Native, Public, Const)
	 */
	bool UHoudiniStaticMeshComponent::IsHoudiniIconVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniStaticMeshComponent.IsHoudiniIconVisible");
		
		UHoudiniStaticMeshComponent_IsHoudiniIconVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03709820
	 * 		Name   -> Function HoudiniEngineRuntime.HoudiniStaticMeshComponent.GetMesh
	 * 		Flags  -> (Final, Native, Public)
	 */
	class UHoudiniStaticMesh* UHoudiniStaticMeshComponent::GetMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniStaticMeshComponent.GetMesh");
		
		UHoudiniStaticMeshComponent_GetMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoudiniStaticMeshComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniStaticMeshComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniStaticMeshComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHoudiniAssetStateEvents.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoudiniAssetStateEvents::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetStateEvents");
		return ptr;
	}

}


