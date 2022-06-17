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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BPI_Effect_Onryo.BPI_Effect_Onryo_C.FX_K27_InteractionStart_Vignette
	 */
	struct UBPI_Effect_Onryo_C_FX_K27_InteractionStart_Vignette_Params
	{	};

	/**
	 * Function BPI_Effect_Onryo.BPI_Effect_Onryo_C.CosmeticOnUnmanifestChargeChanged
	 */
	struct UBPI_Effect_Onryo_C_CosmeticOnUnmanifestChargeChanged_Params
	{
	public:
		float                                                      Charge_Percent;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_Effect_Onryo.BPI_Effect_Onryo_C.CosmeticOnManifestChargeChanged
	 */
	struct UBPI_Effect_Onryo_C_CosmeticOnManifestChargeChanged_Params
	{
	public:
		float                                                      Charge_Percent;                                          // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
