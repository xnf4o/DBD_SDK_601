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
	 * Function BP_Audio_KLR_25.BP_Audio_KLR_24_C.IsCharacter
	 */
	struct UBP_Audio_KLR_24_C_IsCharacter_Params
	{
	public:
		class ADBDPlayer*                                          CamperPlayer;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class FString>                                      characterName;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       IsCharacter;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Audio_KLR_25.BP_Audio_KLR_24_C.SelectAudioStatusStartEvent
	 */
	struct UBP_Audio_KLR_24_C_SelectAudioStatusStartEvent_Params
	{
	public:
		bool                                                       IsInMenu;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAkAudioEvent*                                       AudioEvent;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Audio_KLR_25.BP_Audio_KLR_24_C.HitImpactOnSurvivorSFX
	 */
	struct UBP_Audio_KLR_24_C_HitImpactOnSurvivorSFX_Params
	{
	public:
		class ACamperPlayer*                                       camper;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EAttackType                                                attackType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsWeaponHit;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Audio_KLR_25.BP_Audio_KLR_24_C.TriggerKillerReactionSpecificSurvivorSFX
	 */
	struct UBP_Audio_KLR_24_C_TriggerKillerReactionSpecificSurvivorSFX_Params
	{
	public:
		class ADBDPlayer*                                          camper;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Audio_KLR_25.BP_Audio_KLR_24_C.ChaseTriggerKillerReactionSpecificSurvivorSFX
	 */
	struct UBP_Audio_KLR_24_C_ChaseTriggerKillerReactionSpecificSurvivorSFX_Params
	{
	public:
		class ADBDPlayer*                                          camper;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Audio_KLR_25.BP_Audio_KLR_24_C.ExecuteUbergraph_BP_Audio_KLR_25
	 */
	struct UBP_Audio_KLR_24_C_ExecuteUbergraph_BP_Audio_KLR_25_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
