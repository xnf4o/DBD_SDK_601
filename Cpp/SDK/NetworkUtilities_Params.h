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
	 * Function NetworkUtilities.NetSynchedClock.Server_RequestServerTime
	 */
	struct UNetSynchedClock_Server_RequestServerTime_Params
	{	};

	/**
	 * Function NetworkUtilities.NetSynchedClock.Client_ReportServerTime
	 */
	struct UNetSynchedClock_Client_ReportServerTime_Params
	{
	public:
		float                                                      serverTime;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NetworkUtilities.NetUtils.IsDedicatedServerInstance
	 */
	struct UNetUtils_IsDedicatedServerInstance_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NetworkUtilities.NetworkFenceActor.Server_ClientPassedFence
	 */
	struct ANetworkFenceActor_Server_ClientPassedFence_Params
	{
	public:
		TArray<struct FGuid>                                       Fences;                                                  // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NetworkUtilities.NetworkFenceActor.Client_AllPassedFence
	 */
	struct ANetworkFenceActor_Client_AllPassedFence_Params
	{
	public:
		TArray<struct FGuid>                                       Fences;                                                  // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NetworkUtilities.ServerCorrectionDisablerComponent.SetServerCorrectionEnabled
	 */
	struct UServerCorrectionDisablerComponent_SetServerCorrectionEnabled_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        Channel;                                                 // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NetworkUtilities.ServerCorrectionDisablerComponent.Multicast_SetServerCorrectionEnabled
	 */
	struct UServerCorrectionDisablerComponent_Multicast_SetServerCorrectionEnabled_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        Channel;                                                 // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NetworkUtilities.ServerCorrectionDisablerComponent.GetServerCorrectionEnabled
	 */
	struct UServerCorrectionDisablerComponent_GetServerCorrectionEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NetworkUtilities.TimerObject.OnRep_TimerDataUpdated
	 */
	struct UTimerObject_OnRep_TimerDataUpdated_Params
	{
	public:
		struct FReplicationTimerData                               OldData;                                                 // 0x0000(0x0014)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NetworkUtilities.TimerObject.IsTimerActive
	 */
	struct UTimerObject_IsTimerActive_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NetworkUtilities.TimerObject.IsPaused
	 */
	struct UTimerObject_IsPaused_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NetworkUtilities.TimerObject.IsDone
	 */
	struct UTimerObject_IsDone_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NetworkUtilities.TimerObject.GetRemainingTimePercent
	 */
	struct UTimerObject_GetRemainingTimePercent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NetworkUtilities.TimerObject.GetRemainingTime
	 */
	struct UTimerObject_GetRemainingTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NetworkUtilities.TimerObject.GetElapsedTimePercent
	 */
	struct UTimerObject_GetElapsedTimePercent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NetworkUtilities.TimerObject.GetElapsedTime
	 */
	struct UTimerObject_GetElapsedTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NetworkUtilities.TimerObject.GetDuration
	 */
	struct UTimerObject_GetDuration_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NetworkUtilities.TimerObject.CreateTimer
	 */
	struct UTimerObject_CreateTimer_Params
	{
	public:
		class AActor*                                              Owner;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTimerObject*                                        ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NetworkUtilities.TimerObject.Authority_Unpause
	 */
	struct UTimerObject_Authority_Unpause_Params
	{	};

	/**
	 * Function NetworkUtilities.TimerObject.Authority_Start
	 */
	struct UTimerObject_Authority_Start_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NetworkUtilities.TimerObject.Authority_SetPaused
	 */
	struct UTimerObject_Authority_SetPaused_Params
	{
	public:
		bool                                                       paused;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NetworkUtilities.TimerObject.Authority_Pause
	 */
	struct UTimerObject_Authority_Pause_Params
	{	};

	/**
	 * Function NetworkUtilities.TimerObject.Authority_Clear
	 */
	struct UTimerObject_Authority_Clear_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
