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
	 * Function AB_S31_Radio.AB_S31_Radio_C.AnimGraph
	 */
	struct UAB_S31_Radio_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function AB_S31_Radio.AB_S31_Radio_C.BlueprintUpdateAnimation
	 */
	struct UAB_S31_Radio_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AB_S31_Radio.AB_S31_Radio_C.BlueprintBeginPlay
	 */
	struct UAB_S31_Radio_C_BlueprintBeginPlay_Params
	{	};

	/**
	 * Function AB_S31_Radio.AB_S31_Radio_C.ExecuteUbergraph_AB_S31_Radio
	 */
	struct UAB_S31_Radio_C_ExecuteUbergraph_AB_S31_Radio_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
