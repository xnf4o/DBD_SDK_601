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
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function LightingInterface.LightingInterface_C.GetCondemnedStatusVignetteIntensity
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ELightingInterfaceEnum                             BP_Type                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CondemnedStatusIntensityOverride                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULightingInterface_C::GetCondemnedStatusVignetteIntensity(ELightingInterfaceEnum* BP_Type, float* CondemnedStatusIntensityOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LightingInterface.LightingInterface_C.GetCondemnedStatusVignetteIntensity");
		
		ULightingInterface_C_GetCondemnedStatusVignetteIntensity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BP_Type != nullptr)
			*BP_Type = params.BP_Type;
		if (CondemnedStatusIntensityOverride != nullptr)
			*CondemnedStatusIntensityOverride = params.CondemnedStatusIntensityOverride;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function LightingInterface.LightingInterface_C.SetPostOverride
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPostProcessSettings                        PostSettings                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UPostProcessComponent*                       postProcess                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULightingInterface_C::SetPostOverride(const struct FPostProcessSettings& PostSettings, class UPostProcessComponent* postProcess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LightingInterface.LightingInterface_C.SetPostOverride");
		
		ULightingInterface_C_SetPostOverride_Params params {};
		params.PostSettings = PostSettings;
		params.postProcess = postProcess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function LightingInterface.LightingInterface_C.GetLightingPost
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UPostProcessComponent*>               postProcess                                                (Parm, OutParm, ContainsInstancedReference)
	 * 		ELightingInterfaceEnum                             BP_Type                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULightingInterface_C::GetLightingPost(TArray<class UPostProcessComponent*>* postProcess, ELightingInterfaceEnum* BP_Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LightingInterface.LightingInterface_C.GetLightingPost");
		
		ULightingInterface_C_GetLightingPost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (postProcess != nullptr)
			*postProcess = params.postProcess;
		if (BP_Type != nullptr)
			*BP_Type = params.BP_Type;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function LightingInterface.LightingInterface_C.GetBasementPost
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ELightingInterfaceEnum                             BP_Type                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDBDPerPlatformFloat                        Override                                                   (Parm, OutParm, NoDestructor)
	 */
	void ULightingInterface_C::GetBasementPost(ELightingInterfaceEnum* BP_Type, struct FDBDPerPlatformFloat* Override)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LightingInterface.LightingInterface_C.GetBasementPost");
		
		ULightingInterface_C_GetBasementPost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BP_Type != nullptr)
			*BP_Type = params.BP_Type;
		if (Override != nullptr)
			*Override = params.Override;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULightingInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULightingInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LightingInterface.LightingInterface_C");
		return ptr;
	}

}


