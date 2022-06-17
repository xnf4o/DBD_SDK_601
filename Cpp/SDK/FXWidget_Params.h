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
	 * Function FXWidget.FXUserWidgetBase.StopParticle
	 */
	struct UFXUserWidgetBase_StopParticle_Params
	{	};

	/**
	 * Function FXWidget.FXUserWidgetBase.PlayParticle
	 */
	struct UFXUserWidgetBase_PlayParticle_Params
	{
	public:
		float                                                      StartAtTime;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NumLoopsToPlay;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FXWidget.FXUserWidgetBase.GetNiagaraFX
	 */
	struct UFXUserWidgetBase_GetNiagaraFX_Params
	{
	public:
		class UNiagaraComponent*                                   ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
