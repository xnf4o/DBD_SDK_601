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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class NetworkUtilities.NetSynchedClock
	 * Size -> 0x0020 (FullSize[0x00D8] - InheritedSize[0x00B8])
	 */
	class UNetSynchedClock : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_COKR[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _serverTimeUpdateDelay;                                  // 0x00C0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2C2M[0x14];                                  // 0x00C4(0x0014) MISSED OFFSET (PADDING)

	public:
		void Server_RequestServerTime();
		void Client_ReportServerTime(float serverTime);
		static UClass* StaticClass();
	};

	/**
	 * Class NetworkUtilities.NetUtils
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UNetUtils : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_IsDedicatedServerInstance(class UObject* WorldContextObject);
		static UClass* StaticClass();
	};

	/**
	 * Class NetworkUtilities.NetworkFenceActor
	 * Size -> 0x0078 (FullSize[0x02A8] - InheritedSize[0x0230])
	 */
	class ANetworkFenceActor : public AActor
	{
	public:
		unsigned char                                              UnknownData_RSM5[0x78];                                  // 0x0230(0x0078) MISSED OFFSET (PADDING)

	public:
		void Server_ClientPassedFence(TArray<struct FGuid> Fences);
		void Client_AllPassedFence(TArray<struct FGuid> Fences);
		static UClass* StaticClass();
	};

	/**
	 * Class NetworkUtilities.ServerCorrectionDisablerComponent
	 * Size -> 0x0050 (FullSize[0x0108] - InheritedSize[0x00B8])
	 */
	class UServerCorrectionDisablerComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_TSDK[0x50];                                  // 0x00B8(0x0050) MISSED OFFSET (PADDING)

	public:
		void SetServerCorrectionEnabled(bool Enabled, const struct FGameplayTag& Channel);
		void Multicast_SetServerCorrectionEnabled(bool Enabled, const struct FGameplayTag& Channel);
		bool GetServerCorrectionEnabled();
		static UClass* StaticClass();
	};

	/**
	 * Class NetworkUtilities.ServerTimeProviderComponent
	 * Size -> 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
	 */
	class UServerTimeProviderComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_71AO[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NetworkUtilities.TimerObject
	 * Size -> 0x0080 (FullSize[0x0138] - InheritedSize[0x00B8])
	 */
	class UTimerObject : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_CTUQ[0x60];                                  // 0x00B8(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FReplicationTimerData                               _replicationData;                                        // 0x0118(0x0014) Net, Transient, RepNotify, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1DJW[0xC];                                   // 0x012C(0x000C) MISSED OFFSET (PADDING)

	public:
		void OnRep_TimerDataUpdated(const struct FReplicationTimerData& OldData);
		bool IsTimerActive();
		bool IsPaused();
		bool IsDone();
		float GetRemainingTimePercent();
		float GetRemainingTime();
		float GetElapsedTimePercent();
		float GetElapsedTime();
		float GetDuration();
		class UTimerObject* STATIC_CreateTimer(class AActor* Owner);
		void Authority_Unpause();
		void Authority_Start(float Duration);
		void Authority_SetPaused(bool paused);
		void Authority_Pause();
		void Authority_Clear();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
