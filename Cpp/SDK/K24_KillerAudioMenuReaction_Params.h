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
	 * Function K24_KillerAudioMenuReaction.K24_KillerAudioMenuReaction_C.LobbyKillerReactionSpecificSurvivorSFX
	 */
	struct UK24_KillerAudioMenuReaction_C_LobbyKillerReactionSpecificSurvivorSFX_Params
	{
	public:
		TArray<class ADBDMenuPlayer*>                              menuPlayers;                                             // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function K24_KillerAudioMenuReaction.K24_KillerAudioMenuReaction_C.ExecuteUbergraph_K24_KillerAudioMenuReaction
	 */
	struct UK24_KillerAudioMenuReaction_C_ExecuteUbergraph_K24_KillerAudioMenuReaction_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
