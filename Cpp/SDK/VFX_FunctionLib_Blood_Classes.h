#pragma once

/**
 * Name: DBD
 * Version: 601
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass VFX_FunctionLib_Blood.VFX_FunctionLib_Blood_C
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UVFX_FunctionLib_Blood_C : public UBlueprintFunctionLibrary
	{
	public:
		struct FTransform STATIC_GetDecalTransform(class USceneComponent* Mesh, class UObject* __WorldContext);
		void STATIC_SpawnBleedEffect(class USceneComponent* Mesh, class UObject* __WorldContext, class UParticleSystemComponent** ParticleSystem);
		class UNiagaraComponent* STATIC_SpawnBloodSpurtsParticles(class USceneComponent* Mesh, class UObject* __WorldContext);
		float STATIC_GetSlasherBloodOpacityPlayrate(class UObject* __WorldContext);
		float STATIC_GetBloodFramePlayRate(class UObject* __WorldContext);
		void STATIC_CreatePP_BloodMaterial(class UObject* __WorldContext, class UMaterialInstanceDynamic** PostProcessMaterialInstance);
		void STATIC_ManagePostProcessParameters(bool Remove, class UCameraComponent* Camera, class UObject* PostProcessMaterial, class UObject* __WorldContext);
		void STATIC_RandomizeBloodPostProcess(class UMaterialInstanceDynamic* MaterialInstance, class ADBDPlayer* DBDPlayer, class UObject* __WorldContext);
		void STATIC_RandomizeBloodLayer(class UMaterialInstanceDynamic* MaterialInstance, const class FName& OffsetX_MaterialParameter, const class FName& OffsetY_MaterialParameter, const class FName& Texture_MaterialParameter, const class FName& Scale_Parameter, int32_t Dimension_1, class UObject* __WorldContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
