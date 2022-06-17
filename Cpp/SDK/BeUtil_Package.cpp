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
	 * 		RVA    -> 0x036824D0
	 * 		Name   -> Function BeUtil.BeMaterialEditorHelper.ReloadTexture
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UTexture*                                    InTexture                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InSourceName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTexture* UBeMaterialEditorHelper::STATIC_ReloadTexture(class UTexture* InTexture, const class FString& InSourceName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BeUtil.BeMaterialEditorHelper.ReloadTexture");
		
		UBeMaterialEditorHelper_ReloadTexture_Params params {};
		params.InTexture = InTexture;
		params.InSourceName = InSourceName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x036822A0
	 * 		Name   -> Function BeUtil.BeMaterialEditorHelper.EditMaterialConstant
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMaterialInstanceConstant*                   InMaterialInstance                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FBeMaterialScalar>                   InScalars                                                  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FBeMaterialVector>                   InVectors                                                  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FBeMaterialTexture>                  InTextures                                                 (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UBeMaterialEditorHelper::STATIC_EditMaterialConstant(class UMaterialInstanceConstant* InMaterialInstance, TArray<struct FBeMaterialScalar> InScalars, TArray<struct FBeMaterialVector> InVectors, TArray<struct FBeMaterialTexture> InTextures)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BeUtil.BeMaterialEditorHelper.EditMaterialConstant");
		
		UBeMaterialEditorHelper_EditMaterialConstant_Params params {};
		params.InMaterialInstance = InMaterialInstance;
		params.InScalars = InScalars;
		params.InVectors = InVectors;
		params.InTextures = InTextures;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBeMaterialEditorHelper.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBeMaterialEditorHelper::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BeUtil.BeMaterialEditorHelper");
		return ptr;
	}

}


