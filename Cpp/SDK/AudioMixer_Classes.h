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
	 * Class AudioMixer.SynthComponent
	 * Size -> 0x04C0 (FullSize[0x06E0] - InheritedSize[0x0220])
	 */
	class USynthComponent : public USceneComponent
	{
	public:
		class USoundAttenuation*                                   AttenuationSettings;                                     // 0x0220(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoundAttenuationSettings                           AttenuationOverrides;                                    // 0x0228(0x03A0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class USoundConcurrency*                                   ConcurrencySettings;                                     // 0x05C8(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ConcurrencySet[0x50];                                    // 0x05D0(0x0050) UNKNOWN PROPERTY: SetProperty
		class USoundClass*                                         SoundClass;                                              // 0x0620(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundEffectSourcePresetChain*                       SourceEffectChain;                                       // 0x0628(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundSubmixBase*                                    SoundSubmix;                                             // 0x0630(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FSoundSubmixSendInfo>                        SoundSubmixSends;                                        // 0x0638(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FSoundSourceBusSendInfo>                     BusSends;                                                // 0x0648(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FSoundSourceBusSendInfo>                     PreEffectBusSends;                                       // 0x0658(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              bIsUISound : 1;                                          // 0x0668(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIsPreviewSound : 1;                                     // 0x0668(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EFM6[0x3];                                   // 0x0669(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    EnvelopeFollowerAttackTime;                              // 0x066C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EnvelopeFollowerReleaseTime;                             // 0x0670(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8OW7[0x4];                                   // 0x0674(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnAudioEnvelopeValue;                                    // 0x0678(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RTPC[0x20];                                  // 0x0688(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USynthSound*                                         Synth;                                                   // 0x06A8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAudioComponent*                                     AudioComponent;                                          // 0x06B0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_R56P[0x28];                                  // 0x06B8(0x0028) MISSED OFFSET (PADDING)

	public:
		void Stop();
		void Start();
		void SetVolumeMultiplier(float VolumeMultiplier);
		void SetSubmixSend(class USoundSubmixBase* Submix, float SendLevel);
		void SetOutputToBusOnly(bool bInOutputToBusOnly);
		void SetLowPassFilterFrequency(float InLowPassFilterFrequency);
		void SetLowPassFilterEnabled(bool InLowPassFilterEnabled);
		bool IsPlaying();
		static UClass* StaticClass();
	};

	/**
	 * Class AudioMixer.AudioGenerator
	 * Size -> 0x0080 (FullSize[0x00B0] - InheritedSize[0x0030])
	 */
	class UAudioGenerator : public UObject
	{
	public:
		unsigned char                                              UnknownData_NA03[0x80];                                  // 0x0030(0x0080) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioMixer.AudioMixerBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UAudioMixerBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		float STATIC_TrimAudioCache(float InMegabytesToFree);
		class USoundWave* STATIC_StopRecordingOutput(class UObject* WorldContextObject, EAudioRecordingExportType ExportType, const class FString& Name, const class FString& Path, class USoundSubmix* SubmixToRecord, class USoundWave* ExistingSoundWaveToOverwrite);
		void STATIC_StopAudioBus(class UObject* WorldContextObject, class UAudioBus* AudioBus);
		void STATIC_StopAnalyzingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToStopAnalyzing);
		void STATIC_StartRecordingOutput(class UObject* WorldContextObject, float ExpectedDuration, class USoundSubmix* SubmixToRecord);
		void STATIC_StartAudioBus(class UObject* WorldContextObject, class UAudioBus* AudioBus);
		void STATIC_StartAnalyzingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToAnalyze, EFFTSize FFTSize, EFFTPeakInterpolationMethod InterpolationMethod, EFFTWindowType WindowType, float HopSize, EAudioSpectrumType SpectrumType);
		void STATIC_SetSubmixEffectChainOverride(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, TArray<class USoundEffectSubmixPreset*> SubmixEffectPresetChain, float FadeTimeSec);
		void STATIC_SetBypassSourceEffectChainEntry(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int32_t entryIndex, bool bBypassed);
		void STATIC_ResumeRecordingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToPause);
		void STATIC_ReplaceSubmixEffect(class UObject* WorldContextObject, class USoundSubmix* InSoundSubmix, int32_t SubmixChainIndex, class USoundEffectSubmixPreset* SubmixEffectPreset);
		void STATIC_ReplaceSoundEffectSubmix(class UObject* WorldContextObject, class USoundSubmix* InSoundSubmix, int32_t SubmixChainIndex, class USoundEffectSubmixPreset* SubmixEffectPreset);
		void STATIC_RemoveSubmixEffectPresetAtIndex(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, int32_t SubmixChainIndex);
		void STATIC_RemoveSubmixEffectPreset(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset);
		void STATIC_RemoveSubmixEffectAtIndex(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, int32_t SubmixChainIndex);
		void STATIC_RemoveSubmixEffect(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset);
		void STATIC_RemoveSourceEffectFromPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int32_t entryIndex);
		void STATIC_RemoveMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset);
		void STATIC_PrimeSoundForPlayback(class USoundWave* SoundWave, const class FScriptDelegate& OnLoadCompletion);
		void STATIC_PrimeSoundCueForPlayback(class USoundCue* SoundCue);
		void STATIC_PauseRecordingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToPause);
		TArray<struct FSoundSubmixSpectralAnalysisBandSettings> STATIC_MakePresetSpectralAnalysisBandSettings(EAudioSpectrumBandPresetType InBandPresetType, int32_t InNumBands, int32_t InAttackTimeMsec, int32_t InReleaseTimeMsec);
		TArray<struct FSoundSubmixSpectralAnalysisBandSettings> STATIC_MakeMusicalSpectralAnalysisBandSettings(int32_t InNumSemitones, EMusicalNoteName InStartingMusicalNote, int32_t InStartingOctave, int32_t InAttackTimeMsec, int32_t InReleaseTimeMsec);
		TArray<struct FSoundSubmixSpectralAnalysisBandSettings> STATIC_MakeFullSpectrumSpectralAnalysisBandSettings(int32_t InNumBands, float InMinimumFrequency, float InMaximumFrequency, int32_t InAttackTimeMsec, int32_t InReleaseTimeMsec);
		bool STATIC_IsAudioBusActive(class UObject* WorldContextObject, class UAudioBus* AudioBus);
		void STATIC_GetPhaseForFrequencies(class UObject* WorldContextObject, TArray<float> Frequencies, TArray<float>* Phases, class USoundSubmix* SubmixToAnalyze);
		int32_t STATIC_GetNumberOfEntriesInSourceEffectChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain);
		void STATIC_GetMagnitudeForFrequencies(class UObject* WorldContextObject, TArray<float> Frequencies, TArray<float>* Magnitudes, class USoundSubmix* SubmixToAnalyze);
		void STATIC_ClearSubmixEffects(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix);
		void STATIC_ClearSubmixEffectChainOverride(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, float FadeTimeSec);
		void STATIC_ClearMasterSubmixEffects(class UObject* WorldContextObject);
		int32_t STATIC_AddSubmixEffect(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset);
		void STATIC_AddSourceEffectToPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, const struct FSourceEffectChainEntry& Entry);
		void STATIC_AddMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset);
		static UClass* StaticClass();
	};

	/**
	 * Class AudioMixer.QuartzClockHandle
	 * Size -> 0x0170 (FullSize[0x01A0] - InheritedSize[0x0030])
	 */
	class UQuartzClockHandle : public UObject
	{
	public:
		unsigned char                                              UnknownData_33T2[0x140];                                 // 0x0030(0x0140) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UQuartzSubsystem*                                    QuartzSubsystem;                                         // 0x0170(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LKSH[0x20];                                  // 0x0178(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWorld*                                              WorldPtr;                                                // 0x0198(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void UnsubscribeFromTimeDivision(class UObject* WorldContextObject, EQuartzCommandQuantization InQuantizationBoundary, class UQuartzClockHandle** ClockHandle);
		void UnsubscribeFromAllTimeDivisions(class UObject* WorldContextObject, class UQuartzClockHandle** ClockHandle);
		void SubscribeToQuantizationEvent(class UObject* WorldContextObject, EQuartzCommandQuantization InQuantizationBoundary, const class FScriptDelegate& OnQuantizationEvent, class UQuartzClockHandle** ClockHandle);
		void SubscribeToAllQuantizationEvents(class UObject* WorldContextObject, const class FScriptDelegate& OnQuantizationEvent, class UQuartzClockHandle** ClockHandle);
		void StopClock(class UObject* WorldContextObject, bool CancelPendingEvents, class UQuartzClockHandle** ClockHandle);
		void StartOtherClock(class UObject* WorldContextObject, const class FName& OtherClockName, const struct FQuartzQuantizationBoundary& InQuantizationBoundary, const class FScriptDelegate& InDelegate);
		void StartClock(class UObject* WorldContextObject, class UQuartzClockHandle** ClockHandle);
		void SetTicksPerSecond(class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, const class FScriptDelegate& Delegate, class UQuartzClockHandle** ClockHandle, float TicksPerSecond);
		void SetThirtySecondNotesPerMinute(class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, const class FScriptDelegate& Delegate, class UQuartzClockHandle** ClockHandle, float ThirtySecondsNotesPerMinute);
		void SetSecondsPerTick(class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, const class FScriptDelegate& Delegate, class UQuartzClockHandle** ClockHandle, float SecondsPerTick);
		void SetMillisecondsPerTick(class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, const class FScriptDelegate& Delegate, class UQuartzClockHandle** ClockHandle, float MillisecondsPerTick);
		void SetBeatsPerMinute(class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, const class FScriptDelegate& Delegate, class UQuartzClockHandle** ClockHandle, float BeatsPerMinute);
		void ResumeClock(class UObject* WorldContextObject, class UQuartzClockHandle** ClockHandle);
		void ResetTransportQuantized(class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& InQuantizationBoundary, const class FScriptDelegate& InDelegate, class UQuartzClockHandle** ClockHandle);
		void ResetTransport(class UObject* WorldContextObject, const class FScriptDelegate& InDelegate);
		void PauseClock(class UObject* WorldContextObject, class UQuartzClockHandle** ClockHandle);
		bool IsClockRunning(class UObject* WorldContextObject);
		float GetTicksPerSecond(class UObject* WorldContextObject);
		float GetThirtySecondNotesPerMinute(class UObject* WorldContextObject);
		float GetSecondsPerTick(class UObject* WorldContextObject);
		float GetMillisecondsPerTick(class UObject* WorldContextObject);
		float GetEstimatedRunTime(class UObject* WorldContextObject);
		float GetDurationOfQuantizationTypeInSeconds(class UObject* WorldContextObject, EQuartzCommandQuantization QuantizationType, float Multiplier);
		struct FQuartzTransportTimeStamp GetCurrentTimestamp(class UObject* WorldContextObject);
		float GetBeatsPerMinute(class UObject* WorldContextObject);
		static UClass* StaticClass();
	};

	/**
	 * Class AudioMixer.SubmixEffectDynamicsProcessorPreset
	 * Size -> 0x00E8 (FullSize[0x0158] - InheritedSize[0x0070])
	 */
	class USubmixEffectDynamicsProcessorPreset : public USoundEffectSubmixPreset
	{
	public:
		unsigned char                                              UnknownData_M41T[0x88];                                  // 0x0070(0x0088) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSubmixEffectDynamicsProcessorSettings              Settings;                                                // 0x00F8(0x0060) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetSettings(const struct FSubmixEffectDynamicsProcessorSettings& Settings);
		void SetExternalSubmix(class USoundSubmix* Submix);
		void SetAudioBus(class UAudioBus* AudioBus);
		void ResetKey();
		static UClass* StaticClass();
	};

	/**
	 * Class AudioMixer.SubmixEffectSubmixEQPreset
	 * Size -> 0x0048 (FullSize[0x00B8] - InheritedSize[0x0070])
	 */
	class USubmixEffectSubmixEQPreset : public USoundEffectSubmixPreset
	{
	public:
		unsigned char                                              UnknownData_5TRZ[0x38];                                  // 0x0070(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSubmixEffectSubmixEQSettings                       Settings;                                                // 0x00A8(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		void SetSettings(const struct FSubmixEffectSubmixEQSettings& InSettings);
		static UClass* StaticClass();
	};

	/**
	 * Class AudioMixer.SubmixEffectReverbPreset
	 * Size -> 0x00A8 (FullSize[0x0118] - InheritedSize[0x0070])
	 */
	class USubmixEffectReverbPreset : public USoundEffectSubmixPreset
	{
	public:
		unsigned char                                              UnknownData_2RS7[0x68];                                  // 0x0070(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSubmixEffectReverbSettings                         Settings;                                                // 0x00D8(0x0040) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetSettingsWithReverbEffect(class UReverbEffect* InReverbEffect, float WetLevel, float DryLevel);
		void SetSettings(const struct FSubmixEffectReverbSettings& InSettings);
		static UClass* StaticClass();
	};

	/**
	 * Class AudioMixer.QuartzSubsystem
	 * Size -> 0x0118 (FullSize[0x0160] - InheritedSize[0x0048])
	 */
	class UQuartzSubsystem : public UTickableWorldSubsystem
	{
	public:
		unsigned char                                              UnknownData_CTQI[0x118];                                 // 0x0048(0x0118) MISSED OFFSET (PADDING)

	public:
		bool IsQuartzEnabled();
		bool IsClockRunning(class UObject* WorldContextObject, const class FName& ClockName);
		float GetRoundTripMinLatency(class UObject* WorldContextObject);
		float GetRoundTripMaxLatency(class UObject* WorldContextObject);
		float GetRoundTripAverageLatency(class UObject* WorldContextObject);
		class UQuartzClockHandle* GetHandleForClock(class UObject* WorldContextObject, const class FName& ClockName);
		float GetGameThreadToAudioRenderThreadMinLatency(class UObject* WorldContextObject);
		float GetGameThreadToAudioRenderThreadMaxLatency(class UObject* WorldContextObject);
		float GetGameThreadToAudioRenderThreadAverageLatency(class UObject* WorldContextObject);
		float GetEstimatedClockRunTime(class UObject* WorldContextObject, const class FName& InClockName);
		float GetDurationOfQuantizationTypeInSeconds(class UObject* WorldContextObject, const class FName& ClockName, EQuartzCommandQuantization QuantizationType, float Multiplier);
		struct FQuartzTransportTimeStamp GetCurrentClockTimestamp(class UObject* WorldContextObject, const class FName& InClockName);
		float GetAudioRenderThreadToGameThreadMinLatency();
		float GetAudioRenderThreadToGameThreadMaxLatency();
		float GetAudioRenderThreadToGameThreadAverageLatency();
		bool DoesClockExist(class UObject* WorldContextObject, const class FName& ClockName);
		void DeleteClockByName(class UObject* WorldContextObject, const class FName& ClockName);
		void DeleteClockByHandle(class UObject* WorldContextObject, class UQuartzClockHandle** InClockHandle);
		class UQuartzClockHandle* CreateNewClock(class UObject* WorldContextObject, const class FName& ClockName, const struct FQuartzClockSettings& InSettings, bool bOverrideSettingsIfClockExists, bool bUseAudioEngineClockManager);
		static UClass* StaticClass();
	};

	/**
	 * Class AudioMixer.SynthSound
	 * Size -> 0x0020 (FullSize[0x03F0] - InheritedSize[0x03D0])
	 */
	class USynthSound : public USoundWaveProcedural
	{
	public:
		class USynthComponent*                                     OwningSynthComponent;                                    // 0x03D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Z1EL[0x18];                                  // 0x03D8(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
