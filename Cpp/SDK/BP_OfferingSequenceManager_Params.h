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
	 * Function BP_OfferingSequenceManager.BP_OfferingSequenceManager_C.HandleSequenceStateChanged
	 */
	struct ABP_OfferingSequenceManager_C_HandleSequenceStateChanged_Params
	{
	public:
		EOfferingSequenceState                                     State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OfferingSequenceManager.BP_OfferingSequenceManager_C.ExecuteUbergraph_BP_OfferingSequenceManager
	 */
	struct ABP_OfferingSequenceManager_C_ExecuteUbergraph_BP_OfferingSequenceManager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
