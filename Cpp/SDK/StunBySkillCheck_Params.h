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
	 * Function StunBySkillCheck.StunBySkillCheck_C.CanOverrideInteraction
	 */
	struct UStunBySkillCheck_C_CanOverrideInteraction_Params
	{
	public:
		class UInteractionDefinition*                              Interaction;                                             // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StunBySkillCheck.StunBySkillCheck_C.GetCarriedCamper
	 */
	struct UStunBySkillCheck_C_GetCarriedCamper_Params
	{
	public:
		class ACamperPlayer*                                       camper;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StunBySkillCheck.StunBySkillCheck_C.GetSlasher
	 */
	struct UStunBySkillCheck_C_GetSlasher_Params
	{
	public:
		class ASlasherPlayer*                                      Slasher;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StunBySkillCheck.StunBySkillCheck_C.IsInteractionPossibleBP
	 */
	struct UStunBySkillCheck_C_IsInteractionPossibleBP_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInputInteractionType                                      interactionType;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StunBySkillCheck.StunBySkillCheck_C.ReceiveBeginPlay
	 */
	struct UStunBySkillCheck_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function StunBySkillCheck.StunBySkillCheck_C.OnInteractionEnterStart
	 */
	struct UStunBySkillCheck_C_OnInteractionEnterStart_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      actualSnapTime;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StunBySkillCheck.StunBySkillCheck_C.ExecuteUbergraph_StunBySkillCheck
	 */
	struct UStunBySkillCheck_C_ExecuteUbergraph_StunBySkillCheck_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
