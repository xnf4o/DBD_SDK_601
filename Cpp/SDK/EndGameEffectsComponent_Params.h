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
	 * Function EndGameEffectsComponent.EndGameEffectsComponent_C.StopCameraShake
	 */
	struct UEndGameEffectsComponent_C_StopCameraShake_Params
	{	};

	/**
	 * Function EndGameEffectsComponent.EndGameEffectsComponent_C.PlayCameraShake
	 */
	struct UEndGameEffectsComponent_C_PlayCameraShake_Params
	{
	public:
		class UClass*                                              CameraShake;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EndGameEffectsComponent.EndGameEffectsComponent_C.GetDBDPlayer
	 */
	struct UEndGameEffectsComponent_C_GetDBDPlayer_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EndGameEffectsComponent.EndGameEffectsComponent_C.ReceiveEndPlay
	 */
	struct UEndGameEffectsComponent_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EndGameEffectsComponent.EndGameEffectsComponent_C.OnTimeDilationChanged
	 */
	struct UEndGameEffectsComponent_C_OnTimeDilationChanged_Params
	{
	public:
		struct FGameplayTag                                        gameEventType;                                           // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameEventData                                      GameEventData;                                           // 0x0000(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function EndGameEffectsComponent.EndGameEffectsComponent_C.ReceiveTick
	 */
	struct UEndGameEffectsComponent_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EndGameEffectsComponent.EndGameEffectsComponent_C.ReminderEffect
	 */
	struct UEndGameEffectsComponent_C_ReminderEffect_Params
	{
	public:
		struct FGameplayTag                                        gameEventType;                                           // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameEventData                                      GameEventData;                                           // 0x0000(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function EndGameEffectsComponent.EndGameEffectsComponent_C.StartUpdateTimer
	 */
	struct UEndGameEffectsComponent_C_StartUpdateTimer_Params
	{
	public:
		struct FGameplayTag                                        gameEventType;                                           // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameEventData                                      GameEventData;                                           // 0x0000(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function EndGameEffectsComponent.EndGameEffectsComponent_C.OnLocallyObservedChanged
	 */
	struct UEndGameEffectsComponent_C_OnLocallyObservedChanged_Params
	{
	public:
		class ADBDPlayer*                                          Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EndGameEffectsComponent.EndGameEffectsComponent_C.ReceiveBeginPlay
	 */
	struct UEndGameEffectsComponent_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function EndGameEffectsComponent.EndGameEffectsComponent_C.StartEndGameEffects
	 */
	struct UEndGameEffectsComponent_C_StartEndGameEffects_Params
	{
	public:
		bool                                                       JustStarted;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EndGameEffectsComponent.EndGameEffectsComponent_C.RegisterLocallyObservedEvents
	 */
	struct UEndGameEffectsComponent_C_RegisterLocallyObservedEvents_Params
	{	};

	/**
	 * Function EndGameEffectsComponent.EndGameEffectsComponent_C.UnregisterLocallyObservedEvents
	 */
	struct UEndGameEffectsComponent_C_UnregisterLocallyObservedEvents_Params
	{	};

	/**
	 * Function EndGameEffectsComponent.EndGameEffectsComponent_C.EndGameOver
	 */
	struct UEndGameEffectsComponent_C_EndGameOver_Params
	{
	public:
		struct FGameplayTag                                        gameEventType;                                           // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameEventData                                      GameEventData;                                           // 0x0000(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function EndGameEffectsComponent.EndGameEffectsComponent_C.ExecuteUbergraph_EndGameEffectsComponent
	 */
	struct UEndGameEffectsComponent_C_ExecuteUbergraph_EndGameEffectsComponent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
