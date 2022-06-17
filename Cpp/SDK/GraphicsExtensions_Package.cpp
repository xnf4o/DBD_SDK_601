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
	 * 		Name   -> PredefindFunction UGMAdaptiveShadowMapAtlas.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGMAdaptiveShadowMapAtlas::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GraphicsExtensions.GMAdaptiveShadowMapAtlas");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGMAdaptiveShadowMapController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGMAdaptiveShadowMapController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GraphicsExtensions.GMAdaptiveShadowMapController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04B856A0
	 * 		Name   -> Function GraphicsExtensions.GMAdaptiveShadowMapControllerComponent.RebuildAtlas
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
	 */
	void UGMAdaptiveShadowMapControllerComponent::RebuildAtlas()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GraphicsExtensions.GMAdaptiveShadowMapControllerComponent.RebuildAtlas");
		
		UGMAdaptiveShadowMapControllerComponent_RebuildAtlas_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04B85670
	 * 		Name   -> Function GraphicsExtensions.GMAdaptiveShadowMapControllerComponent.IsControllerDonePreallocatingTiles
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
	 */
	bool UGMAdaptiveShadowMapControllerComponent::IsControllerDonePreallocatingTiles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GraphicsExtensions.GMAdaptiveShadowMapControllerComponent.IsControllerDonePreallocatingTiles");
		
		UGMAdaptiveShadowMapControllerComponent_IsControllerDonePreallocatingTiles_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04B85640
	 * 		Name   -> Function GraphicsExtensions.GMAdaptiveShadowMapControllerComponent.GetTileSize
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
	 */
	int32_t UGMAdaptiveShadowMapControllerComponent::GetTileSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GraphicsExtensions.GMAdaptiveShadowMapControllerComponent.GetTileSize");
		
		UGMAdaptiveShadowMapControllerComponent_GetTileSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04B85610
	 * 		Name   -> Function GraphicsExtensions.GMAdaptiveShadowMapControllerComponent.GetTileCountY
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
	 */
	int32_t UGMAdaptiveShadowMapControllerComponent::GetTileCountY()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GraphicsExtensions.GMAdaptiveShadowMapControllerComponent.GetTileCountY");
		
		UGMAdaptiveShadowMapControllerComponent_GetTileCountY_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04B855E0
	 * 		Name   -> Function GraphicsExtensions.GMAdaptiveShadowMapControllerComponent.GetTileCountX
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
	 */
	int32_t UGMAdaptiveShadowMapControllerComponent::GetTileCountX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GraphicsExtensions.GMAdaptiveShadowMapControllerComponent.GetTileCountX");
		
		UGMAdaptiveShadowMapControllerComponent_GetTileCountX_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04B855C0
	 * 		Name   -> Function GraphicsExtensions.GMAdaptiveShadowMapControllerComponent.DumpDebugInfo
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
	 */
	void UGMAdaptiveShadowMapControllerComponent::DumpDebugInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GraphicsExtensions.GMAdaptiveShadowMapControllerComponent.DumpDebugInfo");
		
		UGMAdaptiveShadowMapControllerComponent_DumpDebugInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGMAdaptiveShadowMapControllerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGMAdaptiveShadowMapControllerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GraphicsExtensions.GMAdaptiveShadowMapControllerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGMAdaptiveShadowMapSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGMAdaptiveShadowMapSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GraphicsExtensions.GMAdaptiveShadowMapSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04B85B00
	 * 		Name   -> Function GraphicsExtensions.GMAdaptiveShadowMapSourceComponent.SetLightRadiusWithBounds
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     BoundingSphereCenter                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              BoundingSphereRadius                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGMAdaptiveShadowMapSourceComponent::SetLightRadiusWithBounds(const struct FVector& BoundingSphereCenter, float BoundingSphereRadius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GraphicsExtensions.GMAdaptiveShadowMapSourceComponent.SetLightRadiusWithBounds");
		
		UGMAdaptiveShadowMapSourceComponent_SetLightRadiusWithBounds_Params params {};
		params.BoundingSphereCenter = BoundingSphereCenter;
		params.BoundingSphereRadius = BoundingSphereRadius;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGMAdaptiveShadowMapSourceComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGMAdaptiveShadowMapSourceComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GraphicsExtensions.GMAdaptiveShadowMapSourceComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AGMAdaptiveShadowMapSourceComponentSpawner.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGMAdaptiveShadowMapSourceComponentSpawner::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GraphicsExtensions.GMAdaptiveShadowMapSourceComponentSpawner");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGMAdaptiveShadowMapSourceDirectional.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGMAdaptiveShadowMapSourceDirectional::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GraphicsExtensions.GMAdaptiveShadowMapSourceDirectional");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGMAdaptiveShadowMapSourceSpot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGMAdaptiveShadowMapSourceSpot::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GraphicsExtensions.GMAdaptiveShadowMapSourceSpot");
		return ptr;
	}

}


