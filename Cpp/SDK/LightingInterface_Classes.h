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
	 * BlueprintGeneratedClass LightingInterface.LightingInterface_C
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class ULightingInterface_C : public UInterface
	{
	public:
		void GetCondemnedStatusVignetteIntensity(ELightingInterfaceEnum* BP_Type, float* CondemnedStatusIntensityOverride);
		void SetPostOverride(const struct FPostProcessSettings& PostSettings, class UPostProcessComponent* postProcess);
		void GetLightingPost(TArray<class UPostProcessComponent*>* postProcess, ELightingInterfaceEnum* BP_Type);
		void GetBasementPost(ELightingInterfaceEnum* BP_Type, struct FDBDPerPlatformFloat* Override);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
