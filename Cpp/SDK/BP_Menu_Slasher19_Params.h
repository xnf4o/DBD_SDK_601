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
	 * Function BP_Menu_Slasher19.BP_Menu_Slasher19_C.UpdateHarpoonOnRifle
	 */
	struct ABP_Menu_Slasher19_C_UpdateHarpoonOnRifle_Params
	{
	public:
		class USkeletalMeshComponent*                              Rifle_Mesh;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Menu_Slasher19.BP_Menu_Slasher19_C.ReceiveBeginPlay
	 */
	struct ABP_Menu_Slasher19_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Menu_Slasher19.BP_Menu_Slasher19_C.OnMeshSwitchBP
	 */
	struct ABP_Menu_Slasher19_C_OnMeshSwitchBP_Params
	{
	public:
		ECustomizationCategory                                     Category;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USkeletalMeshComponent*                              Mesh;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Menu_Slasher19.BP_Menu_Slasher19_C.ExecuteUbergraph_BP_Menu_Slasher19
	 */
	struct ABP_Menu_Slasher19_C_ExecuteUbergraph_BP_Menu_Slasher19_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
