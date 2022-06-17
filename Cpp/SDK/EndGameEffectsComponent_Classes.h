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
	 * BlueprintGeneratedClass EndGameEffectsComponent.EndGameEffectsComponent_C
	 * Size -> 0x00C0 (FullSize[0x0178] - InheritedSize[0x00B8])
	 */
	class UEndGameEffectsComponent_C : public UActorComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FGameEventDispatcherHandleBP                        updateTimerHandler;                                      // 0x00C0(0x0020) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, ContainsInstancedReference
		struct FGameEventDispatcherHandleBP                        ReminderHandler;                                         // 0x00E0(0x0020) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, ContainsInstancedReference
		struct FGameEventDispatcherHandleBP                        endGameOverHandler;                                      // 0x0100(0x0020) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, ContainsInstancedReference
		class UCurveFloat*                                         EndGameGroundPulsing;                                    // 0x0120(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         EndGameGroundIntensity;                                  // 0x0128(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       PlayCameraShakeOnce;                                     // 0x0130(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KPNB[0x7];                                   // 0x0131(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            P_EndGame_Embers;                                        // 0x0138(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         EndGameEmberRate;                                        // 0x0140(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGameEventDispatcherHandleBP                        timeDilationChangedHandler;                              // 0x0148(0x0020) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, ContainsInstancedReference
		bool                                                       HasEndGameBegun;                                         // 0x0168(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PSF2[0x7];                                   // 0x0169(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCameraShakeBase*                                    CurrentCameraShakeRef;                                   // 0x0170(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void StopCameraShake();
		void PlayCameraShake(class UClass* CameraShake);
		void GetDBDPlayer(class ADBDPlayer** Player);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void OnTimeDilationChanged(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
		void ReceiveTick(float DeltaSeconds);
		void ReminderEffect(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
		void StartUpdateTimer(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
		void OnLocallyObservedChanged(class ADBDPlayer* Player);
		void ReceiveBeginPlay();
		void StartEndGameEffects(bool JustStarted);
		void RegisterLocallyObservedEvents();
		void UnregisterLocallyObservedEvents();
		void EndGameOver(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
		void ExecuteUbergraph_EndGameEffectsComponent(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
