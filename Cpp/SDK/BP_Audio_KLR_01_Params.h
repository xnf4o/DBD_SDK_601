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
	 * Function BP_Audio_KLR_01.BP_Audio_KLR_01_C.ReceiveBeginPlay
	 */
	struct UBP_Audio_KLR_01_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Audio_KLR_01.BP_Audio_KLR_01_C.ReceiveEndPlay
	 */
	struct UBP_Audio_KLR_01_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Audio_KLR_01.BP_Audio_KLR_01_C.ExecuteUbergraph_BP_Audio_KLR_01
	 */
	struct UBP_Audio_KLR_01_C_ExecuteUbergraph_BP_Audio_KLR_01_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
