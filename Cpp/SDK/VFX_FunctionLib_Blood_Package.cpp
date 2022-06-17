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
	 * 		Name   -> Function VFX_FunctionLib_Blood.VFX_FunctionLib_Blood_C.GetDecalTransform
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class USceneComponent*                             Mesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FTransform UVFX_FunctionLib_Blood_C::STATIC_GetDecalTransform(class USceneComponent* Mesh, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VFX_FunctionLib_Blood.VFX_FunctionLib_Blood_C.GetDecalTransform");
		
		UVFX_FunctionLib_Blood_C_GetDecalTransform_Params params {};
		params.Mesh = Mesh;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function VFX_FunctionLib_Blood.VFX_FunctionLib_Blood_C.SpawnBleedEffect
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USceneComponent*                             Mesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UParticleSystemComponent*                    ParticleSystem                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVFX_FunctionLib_Blood_C::STATIC_SpawnBleedEffect(class USceneComponent* Mesh, class UObject* __WorldContext, class UParticleSystemComponent** ParticleSystem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VFX_FunctionLib_Blood.VFX_FunctionLib_Blood_C.SpawnBleedEffect");
		
		UVFX_FunctionLib_Blood_C_SpawnBleedEffect_Params params {};
		params.Mesh = Mesh;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ParticleSystem != nullptr)
			*ParticleSystem = params.ParticleSystem;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function VFX_FunctionLib_Blood.VFX_FunctionLib_Blood_C.SpawnBloodSpurtsParticles
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USceneComponent*                             Mesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UNiagaraComponent* UVFX_FunctionLib_Blood_C::STATIC_SpawnBloodSpurtsParticles(class USceneComponent* Mesh, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VFX_FunctionLib_Blood.VFX_FunctionLib_Blood_C.SpawnBloodSpurtsParticles");
		
		UVFX_FunctionLib_Blood_C_SpawnBloodSpurtsParticles_Params params {};
		params.Mesh = Mesh;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function VFX_FunctionLib_Blood.VFX_FunctionLib_Blood_C.GetSlasherBloodOpacityPlayrate
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float UVFX_FunctionLib_Blood_C::STATIC_GetSlasherBloodOpacityPlayrate(class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VFX_FunctionLib_Blood.VFX_FunctionLib_Blood_C.GetSlasherBloodOpacityPlayrate");
		
		UVFX_FunctionLib_Blood_C_GetSlasherBloodOpacityPlayrate_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function VFX_FunctionLib_Blood.VFX_FunctionLib_Blood_C.GetBloodFramePlayRate
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float UVFX_FunctionLib_Blood_C::STATIC_GetBloodFramePlayRate(class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VFX_FunctionLib_Blood.VFX_FunctionLib_Blood_C.GetBloodFramePlayRate");
		
		UVFX_FunctionLib_Blood_C_GetBloodFramePlayRate_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function VFX_FunctionLib_Blood.VFX_FunctionLib_Blood_C.CreatePP_BloodMaterial
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInstanceDynamic*                    PostProcessMaterialInstance                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVFX_FunctionLib_Blood_C::STATIC_CreatePP_BloodMaterial(class UObject* __WorldContext, class UMaterialInstanceDynamic** PostProcessMaterialInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VFX_FunctionLib_Blood.VFX_FunctionLib_Blood_C.CreatePP_BloodMaterial");
		
		UVFX_FunctionLib_Blood_C_CreatePP_BloodMaterial_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PostProcessMaterialInstance != nullptr)
			*PostProcessMaterialInstance = params.PostProcessMaterialInstance;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function VFX_FunctionLib_Blood.VFX_FunctionLib_Blood_C.ManagePostProcessParameters
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Remove                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UCameraComponent*                            Camera                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     PostProcessMaterial                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVFX_FunctionLib_Blood_C::STATIC_ManagePostProcessParameters(bool Remove, class UCameraComponent* Camera, class UObject* PostProcessMaterial, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VFX_FunctionLib_Blood.VFX_FunctionLib_Blood_C.ManagePostProcessParameters");
		
		UVFX_FunctionLib_Blood_C_ManagePostProcessParameters_Params params {};
		params.Remove = Remove;
		params.Camera = Camera;
		params.PostProcessMaterial = PostProcessMaterial;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function VFX_FunctionLib_Blood.VFX_FunctionLib_Blood_C.RandomizeBloodPostProcess
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMaterialInstanceDynamic*                    MaterialInstance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ADBDPlayer*                                  DBDPlayer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVFX_FunctionLib_Blood_C::STATIC_RandomizeBloodPostProcess(class UMaterialInstanceDynamic* MaterialInstance, class ADBDPlayer* DBDPlayer, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VFX_FunctionLib_Blood.VFX_FunctionLib_Blood_C.RandomizeBloodPostProcess");
		
		UVFX_FunctionLib_Blood_C_RandomizeBloodPostProcess_Params params {};
		params.MaterialInstance = MaterialInstance;
		params.DBDPlayer = DBDPlayer;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function VFX_FunctionLib_Blood.VFX_FunctionLib_Blood_C.RandomizeBloodLayer
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMaterialInstanceDynamic*                    MaterialInstance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        OffsetX_MaterialParameter                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        OffsetY_MaterialParameter                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Texture_MaterialParameter                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Scale_Parameter                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Dimension_1                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVFX_FunctionLib_Blood_C::STATIC_RandomizeBloodLayer(class UMaterialInstanceDynamic* MaterialInstance, const class FName& OffsetX_MaterialParameter, const class FName& OffsetY_MaterialParameter, const class FName& Texture_MaterialParameter, const class FName& Scale_Parameter, int32_t Dimension_1, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VFX_FunctionLib_Blood.VFX_FunctionLib_Blood_C.RandomizeBloodLayer");
		
		UVFX_FunctionLib_Blood_C_RandomizeBloodLayer_Params params {};
		params.MaterialInstance = MaterialInstance;
		params.OffsetX_MaterialParameter = OffsetX_MaterialParameter;
		params.OffsetY_MaterialParameter = OffsetY_MaterialParameter;
		params.Texture_MaterialParameter = Texture_MaterialParameter;
		params.Scale_Parameter = Scale_Parameter;
		params.Dimension_1 = Dimension_1;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVFX_FunctionLib_Blood_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVFX_FunctionLib_Blood_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass VFX_FunctionLib_Blood.VFX_FunctionLib_Blood_C");
		return ptr;
	}

}


