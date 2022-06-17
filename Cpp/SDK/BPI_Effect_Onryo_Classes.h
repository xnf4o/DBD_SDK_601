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
	 * BlueprintGeneratedClass BPI_Effect_Onryo.BPI_Effect_Onryo_C
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UBPI_Effect_Onryo_C : public UInterface
	{
	public:
		void FX_K27_InteractionStart_Vignette();
		void CosmeticOnUnmanifestChargeChanged(float Charge_Percent);
		void CosmeticOnManifestChargeChanged(float Charge_Percent);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
