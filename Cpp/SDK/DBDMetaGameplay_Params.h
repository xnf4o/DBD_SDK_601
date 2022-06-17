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
	 * Function DBDMetaGameplay.DBDEmblem_KillerChaser.OnChaseStart
	 */
	struct UDBDEmblem_KillerChaser_OnChaseStart_Params
	{
	public:
		class ADBDPlayer*                                          chasedPlayer;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDMetaGameplay.DBDEmblem_KillerDevout.OnLevelReadyToPlay
	 */
	struct UDBDEmblem_KillerDevout_OnLevelReadyToPlay_Params
	{	};

	/**
	 * Function DBDMetaGameplay.DBDEmblem_KillerMalicious.OnLevelReadyToPlay
	 */
	struct UDBDEmblem_KillerMalicious_OnLevelReadyToPlay_Params
	{	};

	/**
	 * Function DBDMetaGameplay.DBDEmblem_SurvivorEvader.OnChaseStartEvent
	 */
	struct UDBDEmblem_SurvivorEvader_OnChaseStartEvent_Params
	{
	public:
		class ADBDPlayer*                                          chasedPlayer;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDMetaGameplay.DBDEmblem_SurvivorUnbroken.OnIntroCompleted
	 */
	struct UDBDEmblem_SurvivorUnbroken_OnIntroCompleted_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
