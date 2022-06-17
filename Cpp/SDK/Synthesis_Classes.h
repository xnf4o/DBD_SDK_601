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
	 * Class Synthesis.ModularSynthPresetBank
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UModularSynthPresetBank : public UObject
	{
	public:
		TArray<struct FModularSynthPresetBankEntry>                Presets;                                                 // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Synthesis.ModularSynthLibrary
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UModularSynthLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_AddModularSynthPresetToBankAsset(class UModularSynthPresetBank* InBank, const struct FModularSynthPreset& Preset, const class FString& PresetName);
		static UClass* StaticClass();
	};

	/**
	 * Class Synthesis.ModularSynthComponent
	 * Size -> 0x06C0 (FullSize[0x0DA0] - InheritedSize[0x06E0])
	 */
	class UModularSynthComponent : public USynthComponent
	{
	public:
		int32_t                                                    VoiceCount;                                              // 0x06E0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PLW0[0x6BC];                                 // 0x06E4(0x06BC) MISSED OFFSET (PADDING)

	public:
		void SetSynthPreset(const struct FModularSynthPreset& SynthPreset);
		void SetSustainGain(float SustainGain);
		void SetStereoDelayWetlevel(float DelayWetlevel);
		void SetStereoDelayTime(float DelayTimeMsec);
		void SetStereoDelayRatio(float DelayRatio);
		void SetStereoDelayMode(ESynthStereoDelayMode StereoDelayMode);
		void SetStereoDelayIsEnabled(bool StereoDelayEnabled);
		void SetStereoDelayFeedback(float DelayFeedback);
		void SetSpread(float Spread);
		void SetReleaseTime(float ReleaseTimeMsec);
		void SetPortamento(float Portamento);
		void SetPitchBend(float PitchBend);
		void SetPan(float Pan);
		void SetOscType(int32_t OscIndex, ESynth1OscType OscType);
		void SetOscSync(bool bIsSynced);
		void SetOscSemitones(int32_t OscIndex, float Semitones);
		void SetOscPulsewidth(int32_t OscIndex, float Pulsewidth);
		void SetOscOctave(int32_t OscIndex, float Octave);
		void SetOscGainMod(int32_t OscIndex, float OscGainMod);
		void SetOscGain(int32_t OscIndex, float OscGain);
		void SetOscFrequencyMod(int32_t OscIndex, float OscFreqMod);
		void SetOscCents(int32_t OscIndex, float Cents);
		void SetModEnvSustainGain(float SustainGain);
		void SetModEnvReleaseTime(float Release);
		void SetModEnvPatch(ESynthModEnvPatch InPatchType);
		void SetModEnvInvert(bool bInvert);
		void SetModEnvDepth(float Depth);
		void SetModEnvDecayTime(float DecayTimeMsec);
		void SetModEnvBiasPatch(ESynthModEnvBiasPatch InPatchType);
		void SetModEnvBiasInvert(bool bInvert);
		void SetModEnvAttackTime(float AttackTimeMsec);
		void SetLFOType(int32_t LFOIndex, ESynthLFOType LFOType);
		void SetLFOPatch(int32_t LFOIndex, ESynthLFOPatchType LFOPatchType);
		void SetLFOMode(int32_t LFOIndex, ESynthLFOMode LFOMode);
		void SetLFOGainMod(int32_t LFOIndex, float GainMod);
		void SetLFOGain(int32_t LFOIndex, float Gain);
		void SetLFOFrequencyMod(int32_t LFOIndex, float FrequencyModHz);
		void SetLFOFrequency(int32_t LFOIndex, float FrequencyHz);
		void SetGainDb(float GainDb);
		void SetFilterType(ESynthFilterType FilterType);
		void SetFilterQMod(float FilterQ);
		void SetFilterQ(float FilterQ);
		void SetFilterFrequencyMod(float FilterFrequencyHz);
		void SetFilterFrequency(float FilterFrequencyHz);
		void SetFilterAlgorithm(ESynthFilterAlgorithm FilterAlgorithm);
		void SetEnableUnison(bool EnableUnison);
		void SetEnableRetrigger(bool RetriggerEnabled);
		void SetEnablePolyphony(bool bEnablePolyphony);
		bool SetEnablePatch(const struct FPatchId& PatchId, bool bIsEnabled);
		void SetEnableLegato(bool LegatoEnabled);
		void SetDecayTime(float DecayTimeMsec);
		void SetChorusFrequency(float Frequency);
		void SetChorusFeedback(float Feedback);
		void SetChorusEnabled(bool EnableChorus);
		void SetChorusDepth(float Depth);
		void SetAttackTime(float AttackTimeMsec);
		void NoteOn(float Note, int32_t Velocity, float Duration);
		void NoteOff(float Note, bool bAllNotesOff, bool bKillAllNotes);
		struct FPatchId CreatePatch(ESynth1PatchSource PatchSource, TArray<struct FSynth1PatchCable> PatchCables, bool bEnableByDefault);
		static UClass* StaticClass();
	};

	/**
	 * Class Synthesis.SourceEffectBitCrusherPreset
	 * Size -> 0x0088 (FullSize[0x00F8] - InheritedSize[0x0070])
	 */
	class USourceEffectBitCrusherPreset : public USoundEffectSourcePreset
	{
	public:
		unsigned char                                              UnknownData_5AYB[0x58];                                  // 0x0070(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSourceEffectBitCrusherSettings                     Settings;                                                // 0x00C8(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetSettings(const struct FSourceEffectBitCrusherBaseSettings& Settings);
		void SetSampleRateModulator(class USoundModulatorBase* Modulator);
		void SetSampleRate(float SampleRate);
		void SetModulationSettings(const struct FSourceEffectBitCrusherSettings& ModulationSettings);
		void SetBits(float Bits);
		void SetBitModulator(class USoundModulatorBase* Modulator);
		static UClass* StaticClass();
	};

	/**
	 * Class Synthesis.SourceEffectChorusPreset
	 * Size -> 0x0118 (FullSize[0x0188] - InheritedSize[0x0070])
	 */
	class USourceEffectChorusPreset : public USoundEffectSourcePreset
	{
	public:
		unsigned char                                              UnknownData_DFT2[0xA0];                                  // 0x0070(0x00A0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSourceEffectChorusSettings                         Settings;                                                // 0x0110(0x0078) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetWetModulator(class USoundModulatorBase* Modulator);
		void SetWet(float WetAmount);
		void SetSpreadModulator(class USoundModulatorBase* Modulator);
		void SetSpread(float Spread);
		void SetSettings(const struct FSourceEffectChorusBaseSettings& Settings);
		void SetModulationSettings(const struct FSourceEffectChorusSettings& ModulationSettings);
		void SetFrequencyModulator(class USoundModulatorBase* Modulator);
		void SetFrequency(float Frequency);
		void SetFeedbackModulator(class USoundModulatorBase* Modulator);
		void SetFeedback(float Feedback);
		void SetDryModulator(class USoundModulatorBase* Modulator);
		void SetDry(float DryAmount);
		void SetDepthModulator(class USoundModulatorBase* Modulator);
		void SetDepth(float Depth);
		static UClass* StaticClass();
	};

	/**
	 * Class Synthesis.SourceEffectDynamicsProcessorPreset
	 * Size -> 0x0078 (FullSize[0x00E8] - InheritedSize[0x0070])
	 */
	class USourceEffectDynamicsProcessorPreset : public USoundEffectSourcePreset
	{
	public:
		unsigned char                                              UnknownData_YEIJ[0x50];                                  // 0x0070(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSourceEffectDynamicsProcessorSettings              Settings;                                                // 0x00C0(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetSettings(const struct FSourceEffectDynamicsProcessorSettings& InSettings);
		static UClass* StaticClass();
	};

	/**
	 * Class Synthesis.EnvelopeFollowerListener
	 * Size -> 0x0020 (FullSize[0x00D8] - InheritedSize[0x00B8])
	 */
	class UEnvelopeFollowerListener : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnEnvelopeFollowerUpdate;                                // 0x00B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HDLN[0x10];                                  // 0x00C8(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Synthesis.SourceEffectEnvelopeFollowerPreset
	 * Size -> 0x0040 (FullSize[0x00B0] - InheritedSize[0x0070])
	 */
	class USourceEffectEnvelopeFollowerPreset : public USoundEffectSourcePreset
	{
	public:
		unsigned char                                              UnknownData_H89D[0x34];                                  // 0x0070(0x0034) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSourceEffectEnvelopeFollowerSettings               Settings;                                                // 0x00A4(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic

	public:
		void UnregisterEnvelopeFollowerListener(class UEnvelopeFollowerListener* EnvelopeFollowerListener);
		void SetSettings(const struct FSourceEffectEnvelopeFollowerSettings& InSettings);
		void RegisterEnvelopeFollowerListener(class UEnvelopeFollowerListener* EnvelopeFollowerListener);
		static UClass* StaticClass();
	};

	/**
	 * Class Synthesis.SourceEffectEQPreset
	 * Size -> 0x0048 (FullSize[0x00B8] - InheritedSize[0x0070])
	 */
	class USourceEffectEQPreset : public USoundEffectSourcePreset
	{
	public:
		unsigned char                                              UnknownData_XER2[0x38];                                  // 0x0070(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSourceEffectEQSettings                             Settings;                                                // 0x00A8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic

	public:
		void SetSettings(const struct FSourceEffectEQSettings& InSettings);
		static UClass* StaticClass();
	};

	/**
	 * Class Synthesis.SourceEffectFilterPreset
	 * Size -> 0x0068 (FullSize[0x00D8] - InheritedSize[0x0070])
	 */
	class USourceEffectFilterPreset : public USoundEffectSourcePreset
	{
	public:
		unsigned char                                              UnknownData_P52A[0x48];                                  // 0x0070(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSourceEffectFilterSettings                         Settings;                                                // 0x00B8(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic

	public:
		void SetSettings(const struct FSourceEffectFilterSettings& InSettings);
		static UClass* StaticClass();
	};

	/**
	 * Class Synthesis.SourceEffectFoldbackDistortionPreset
	 * Size -> 0x0040 (FullSize[0x00B0] - InheritedSize[0x0070])
	 */
	class USourceEffectFoldbackDistortionPreset : public USoundEffectSourcePreset
	{
	public:
		unsigned char                                              UnknownData_ZNEP[0x34];                                  // 0x0070(0x0034) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSourceEffectFoldbackDistortionSettings             Settings;                                                // 0x00A4(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetSettings(const struct FSourceEffectFoldbackDistortionSettings& InSettings);
		static UClass* StaticClass();
	};

	/**
	 * Class Synthesis.SourceEffectMidSideSpreaderPreset
	 * Size -> 0x0038 (FullSize[0x00A8] - InheritedSize[0x0070])
	 */
	class USourceEffectMidSideSpreaderPreset : public USoundEffectSourcePreset
	{
	public:
		unsigned char                                              UnknownData_F2SE[0x30];                                  // 0x0070(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSourceEffectMidSideSpreaderSettings                Settings;                                                // 0x00A0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetSettings(const struct FSourceEffectMidSideSpreaderSettings& InSettings);
		static UClass* StaticClass();
	};

	/**
	 * Class Synthesis.SourceEffectPannerPreset
	 * Size -> 0x0038 (FullSize[0x00A8] - InheritedSize[0x0070])
	 */
	class USourceEffectPannerPreset : public USoundEffectSourcePreset
	{
	public:
		unsigned char                                              UnknownData_I8QV[0x30];                                  // 0x0070(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSourceEffectPannerSettings                         Settings;                                                // 0x00A0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetSettings(const struct FSourceEffectPannerSettings& InSettings);
		static UClass* StaticClass();
	};

	/**
	 * Class Synthesis.SourceEffectPhaserPreset
	 * Size -> 0x0048 (FullSize[0x00B8] - InheritedSize[0x0070])
	 */
	class USourceEffectPhaserPreset : public USoundEffectSourcePreset
	{
	public:
		unsigned char                                              UnknownData_9TXW[0x38];                                  // 0x0070(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSourceEffectPhaserSettings                         Settings;                                                // 0x00A8(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetSettings(const struct FSourceEffectPhaserSettings& InSettings);
		static UClass* StaticClass();
	};

	/**
	 * Class Synthesis.SourceEffectRingModulationPreset
	 * Size -> 0x0068 (FullSize[0x00D8] - InheritedSize[0x0070])
	 */
	class USourceEffectRingModulationPreset : public USoundEffectSourcePreset
	{
	public:
		unsigned char                                              UnknownData_70FF[0x48];                                  // 0x0070(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSourceEffectRingModulationSettings                 Settings;                                                // 0x00B8(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetSettings(const struct FSourceEffectRingModulationSettings& InSettings);
		static UClass* StaticClass();
	};

	/**
	 * Class Synthesis.SourceEffectSimpleDelayPreset
	 * Size -> 0x0058 (FullSize[0x00C8] - InheritedSize[0x0070])
	 */
	class USourceEffectSimpleDelayPreset : public USoundEffectSourcePreset
	{
	public:
		unsigned char                                              UnknownData_8YEW[0x40];                                  // 0x0070(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSourceEffectSimpleDelaySettings                    Settings;                                                // 0x00B0(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetSettings(const struct FSourceEffectSimpleDelaySettings& InSettings);
		static UClass* StaticClass();
	};

	/**
	 * Class Synthesis.SourceEffectStereoDelayPreset
	 * Size -> 0x0070 (FullSize[0x00E0] - InheritedSize[0x0070])
	 */
	class USourceEffectStereoDelayPreset : public USoundEffectSourcePreset
	{
	public:
		unsigned char                                              UnknownData_WFSO[0x4C];                                  // 0x0070(0x004C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSourceEffectStereoDelaySettings                    Settings;                                                // 0x00BC(0x0024) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetSettings(const struct FSourceEffectStereoDelaySettings& InSettings);
		static UClass* StaticClass();
	};

	/**
	 * Class Synthesis.SourceEffectWaveShaperPreset
	 * Size -> 0x0038 (FullSize[0x00A8] - InheritedSize[0x0070])
	 */
	class USourceEffectWaveShaperPreset : public USoundEffectSourcePreset
	{
	public:
		unsigned char                                              UnknownData_AEHY[0x30];                                  // 0x0070(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSourceEffectWaveShaperSettings                     Settings;                                                // 0x00A0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetSettings(const struct FSourceEffectWaveShaperSettings& InSettings);
		static UClass* StaticClass();
	};

	/**
	 * Class Synthesis.AudioImpulseResponse
	 * Size -> 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
	 */
	class UAudioImpulseResponse : public UObject
	{
	public:
		TArray<float>                                              ImpulseResponse;                                         // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    NumChannels;                                             // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SampleRate;                                              // 0x0044(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NormalizationVolumeDb;                                   // 0x0048(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTrueStereo;                                             // 0x004C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TXWA[0x3];                                   // 0x004D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              IRData;                                                  // 0x0050(0x0010) ZeroConstructor, Deprecated, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Synthesis.SubmixEffectConvolutionReverbPreset
	 * Size -> 0x0088 (FullSize[0x00F8] - InheritedSize[0x0070])
	 */
	class USubmixEffectConvolutionReverbPreset : public USoundEffectSubmixPreset
	{
	public:
		class UAudioImpulseResponse*                               ImpulseResponse;                                         // 0x0070(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSubmixEffectConvolutionReverbSettings              Settings;                                                // 0x0078(0x0028) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		ESubmixEffectConvolutionReverbBlockSize                    BlockSize;                                               // 0x00A0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableHardwareAcceleration;                             // 0x00A1(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H52F[0x56];                                  // 0x00A2(0x0056) MISSED OFFSET (PADDING)

	public:
		void SetSettings(const struct FSubmixEffectConvolutionReverbSettings& InSettings);
		void SetImpulseResponse(class UAudioImpulseResponse* InImpulseResponse);
		static UClass* StaticClass();
	};

	/**
	 * Class Synthesis.SubmixEffectDelayPreset
	 * Size -> 0x0050 (FullSize[0x00C0] - InheritedSize[0x0070])
	 */
	class USubmixEffectDelayPreset : public USoundEffectSubmixPreset
	{
	public:
		unsigned char                                              UnknownData_MDO3[0x34];                                  // 0x0070(0x0034) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSubmixEffectDelaySettings                          Settings;                                                // 0x00A4(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FSubmixEffectDelaySettings                          DynamicSettings;                                         // 0x00B0(0x000C) Transient, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VZ75[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (PADDING)

	public:
		void SetSettings(const struct FSubmixEffectDelaySettings& InSettings);
		void SetInterpolationTime(float Time);
		void SetDelay(float Length);
		float GetMaxDelayInMilliseconds();
		static UClass* StaticClass();
	};

	/**
	 * Class Synthesis.SubmixEffectFilterPreset
	 * Size -> 0x0040 (FullSize[0x00B0] - InheritedSize[0x0070])
	 */
	class USubmixEffectFilterPreset : public USoundEffectSubmixPreset
	{
	public:
		unsigned char                                              UnknownData_P1BS[0x34];                                  // 0x0070(0x0034) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSubmixEffectFilterSettings                         Settings;                                                // 0x00A4(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetSettings(const struct FSubmixEffectFilterSettings& InSettings);
		void SetFilterType(ESubmixFilterType InType);
		void SetFilterQMod(float InQ);
		void SetFilterQ(float InQ);
		void SetFilterCutoffFrequencyMod(float InFrequency);
		void SetFilterCutoffFrequency(float InFrequency);
		void SetFilterAlgorithm(ESubmixFilterAlgorithm InAlgorithm);
		static UClass* StaticClass();
	};

	/**
	 * Class Synthesis.SubmixEffectFlexiverbPreset
	 * Size -> 0x0048 (FullSize[0x00B8] - InheritedSize[0x0070])
	 */
	class USubmixEffectFlexiverbPreset : public USoundEffectSubmixPreset
	{
	public:
		unsigned char                                              UnknownData_8NN6[0x38];                                  // 0x0070(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSubmixEffectFlexiverbSettings                      Settings;                                                // 0x00A8(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetSettings(const struct FSubmixEffectFlexiverbSettings& InSettings);
		static UClass* StaticClass();
	};

	/**
	 * Class Synthesis.SubmixEffectMultibandCompressorPreset
	 * Size -> 0x0068 (FullSize[0x00D8] - InheritedSize[0x0070])
	 */
	class USubmixEffectMultibandCompressorPreset : public USoundEffectSubmixPreset
	{
	public:
		unsigned char                                              UnknownData_ZLN8[0x48];                                  // 0x0070(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSubmixEffectMultibandCompressorSettings            Settings;                                                // 0x00B8(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		void SetSettings(const struct FSubmixEffectMultibandCompressorSettings& InSettings);
		static UClass* StaticClass();
	};

	/**
	 * Class Synthesis.SubmixEffectStereoDelayPreset
	 * Size -> 0x0070 (FullSize[0x00E0] - InheritedSize[0x0070])
	 */
	class USubmixEffectStereoDelayPreset : public USoundEffectSubmixPreset
	{
	public:
		unsigned char                                              UnknownData_64IB[0x4C];                                  // 0x0070(0x004C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSubmixEffectStereoDelaySettings                    Settings;                                                // 0x00BC(0x0024) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetSettings(const struct FSubmixEffectStereoDelaySettings& InSettings);
		static UClass* StaticClass();
	};

	/**
	 * Class Synthesis.SubmixEffectTapDelayPreset
	 * Size -> 0x0070 (FullSize[0x00E0] - InheritedSize[0x0070])
	 */
	class USubmixEffectTapDelayPreset : public USoundEffectSubmixPreset
	{
	public:
		unsigned char                                              UnknownData_SI7W[0x40];                                  // 0x0070(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSubmixEffectTapDelaySettings                       Settings;                                                // 0x00B0(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ELIS[0x18];                                  // 0x00C8(0x0018) MISSED OFFSET (PADDING)

	public:
		void SetTap(int32_t TapId, const struct FTapDelayInfo& TapInfo);
		void SetSettings(const struct FSubmixEffectTapDelaySettings& InSettings);
		void SetInterpolationTime(float Time);
		void RemoveTap(int32_t TapId);
		void GetTapIds(TArray<int32_t>* TapIds);
		void GetTap(int32_t TapId, struct FTapDelayInfo* TapInfo);
		float GetMaxDelayInMilliseconds();
		void AddTap(int32_t* TapId);
		static UClass* StaticClass();
	};

	/**
	 * Class Synthesis.Synth2DSlider
	 * Size -> 0x03A0 (FullSize[0x04D0] - InheritedSize[0x0130])
	 */
	class USynth2DSlider : public UWidget
	{
	public:
		float                                                      ValueX;                                                  // 0x0130(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ValueY;                                                  // 0x0134(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      ValueXDelegate;                                          // 0x0138(0x0010) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZXWL[0x4];                                   // 0x0138(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FScriptDelegate                                      ValueYDelegate;                                          // 0x014C(0x0010) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_17SN[0x4];                                   // 0x014C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		struct FSynth2DSliderStyle                                 WidgetStyle;                                             // 0x0160(0x02E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FLinearColor                                        SliderHandleColor;                                       // 0x0440(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IndentHandle;                                            // 0x0450(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       locked;                                                  // 0x0451(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y95W[0x2];                                   // 0x0452(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StepSize;                                                // 0x0454(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsFocusable;                                             // 0x0458(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q4GZ[0x7];                                   // 0x0459(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnMouseCaptureBegin;                                     // 0x0460(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMouseCaptureEnd;                                       // 0x0470(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnControllerCaptureBegin;                                // 0x0480(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnControllerCaptureEnd;                                  // 0x0490(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnValueChangedX;                                         // 0x04A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnValueChangedY;                                         // 0x04B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IBM8[0x10];                                  // 0x04C0(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetValue(const struct FVector2D& InValue);
		void SetStepSize(float InValue);
		void SetSliderHandleColor(const struct FLinearColor& InValue);
		void SetLocked(bool InValue);
		void SetIndentHandle(bool InValue);
		struct FVector2D GetValue();
		static UClass* StaticClass();
	};

	/**
	 * Class Synthesis.GranularSynth
	 * Size -> 0x03C0 (FullSize[0x0AA0] - InheritedSize[0x06E0])
	 */
	class UGranularSynth : public USynthComponent
	{
	public:
		class USoundWave*                                          GranulatedSoundWave;                                     // 0x06E0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_PRVI[0x3B8];                                 // 0x06E8(0x03B8) MISSED OFFSET (PADDING)

	public:
		void SetSustainGain(float SustainGain);
		void SetSoundWave(class USoundWave* InSoundWave);
		void SetScrubMode(bool bScrubMode);
		void SetReleaseTimeMsec(float ReleaseTimeMsec);
		void SetPlayheadTime(float InPositionSec, float LerpTimeSec, EGranularSynthSeekType SeekType);
		void SetPlaybackSpeed(float InPlayheadRate);
		void SetGrainVolume(float BaseVolume, const struct FVector2D& VolumeRange);
		void SetGrainsPerSecond(float InGrainsPerSecond);
		void SetGrainProbability(float InGrainProbability);
		void SetGrainPitch(float BasePitch, const struct FVector2D& PitchRange);
		void SetGrainPan(float BasePan, const struct FVector2D& PanRange);
		void SetGrainEnvelopeType(EGranularSynthEnvelopeType EnvelopeType);
		void SetGrainDuration(float BaseDurationMsec, const struct FVector2D& DurationRange);
		void SetDecayTime(float DecayTimeMsec);
		void SetAttackTime(float AttackTimeMsec);
		void NoteOn(float Note, int32_t Velocity, float Duration);
		void NoteOff(float Note, bool bKill);
		bool IsLoaded();
		float GetSampleDuration();
		float GetCurrentPlayheadTime();
		static UClass* StaticClass();
	};

	/**
	 * Class Synthesis.MonoWaveTableSynthPreset
	 * Size -> 0x0148 (FullSize[0x0178] - InheritedSize[0x0030])
	 */
	class UMonoWaveTableSynthPreset : public UObject
	{
	public:
		class FString                                              PresetName;                                              // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bLockKeyframesToGridBool : 1;                            // 0x0040(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EHY4[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LockKeyframesToGrid;                                     // 0x0044(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    WaveTableResolution;                                     // 0x0048(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_45BM[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRuntimeFloatCurve>                          WaveTable;                                               // 0x0050(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NonTransactional, NativeAccessSpecifierPublic
		unsigned char                                              bNormalizeWaveTables : 1;                                // 0x0060(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SKCF[0x117];                                 // 0x0061(0x0117) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Synthesis.SynthComponentMonoWaveTable
	 * Size -> 0x0740 (FullSize[0x0E20] - InheritedSize[0x06E0])
	 */
	class USynthComponentMonoWaveTable : public USynthComponent
	{
	public:
		class FScriptMulticastDelegate                             OnTableAltered;                                          // 0x06E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnNumTablesChanged;                                      // 0x06F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UMonoWaveTableSynthPreset*                           CurrentPreset;                                           // 0x0700(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_TDA5[0x718];                                 // 0x0708(0x0718) MISSED OFFSET (PADDING)

	public:
		void SetWaveTablePosition(float InPosition);
		void SetSustainPedalState(bool InSustainPedalState);
		void SetPosLfoType(ESynthLFOType InLfoType);
		void SetPosLfoFrequency(float InLfoFrequency);
		void SetPosLfoDepth(float InLfoDepth);
		void SetPositionEnvelopeSustainGain(float InSustainGain);
		void SetPositionEnvelopeReleaseTime(float InReleaseTimeMsec);
		void SetPositionEnvelopeInvert(bool bInInvert);
		void SetPositionEnvelopeDepth(float InDepth);
		void SetPositionEnvelopeDecayTime(float InDecayTimeMsec);
		void SetPositionEnvelopeBiasInvert(bool bInBiasInvert);
		void SetPositionEnvelopeBiasDepth(float InDepth);
		void SetPositionEnvelopeAttackTime(float InAttackTimeMsec);
		void SetLowPassFilterResonance(float InNewQ);
		void SetFrequencyWithMidiNote(float InMidiNote);
		void SetFrequencyPitchBend(float FrequencyOffsetCents);
		void SetFrequency(float FrequencyHz);
		void SetFilterEnvelopeSustainGain(float InSustainGain);
		void SetFilterEnvelopeReleaseTime(float InReleaseTimeMsec);
		void SetFilterEnvelopenDecayTime(float InDecayTimeMsec);
		void SetFilterEnvelopeInvert(bool bInInvert);
		void SetFilterEnvelopeDepth(float InDepth);
		void SetFilterEnvelopeBiasInvert(bool bInBiasInvert);
		void SetFilterEnvelopeBiasDepth(float InDepth);
		void SetFilterEnvelopeAttackTime(float InAttackTimeMsec);
		bool SetCurveValue(int32_t TableIndex, int32_t KeyframeIndex, float NewValue);
		bool SetCurveTangent(int32_t TableIndex, float InNewTangent);
		bool SetCurveInterpolationType(ECurveInterpolationType InterpolationType, int32_t TableIndex);
		void SetAmpEnvelopeSustainGain(float InSustainGain);
		void SetAmpEnvelopeReleaseTime(float InReleaseTimeMsec);
		void SetAmpEnvelopeInvert(bool bInInvert);
		void SetAmpEnvelopeDepth(float InDepth);
		void SetAmpEnvelopeDecayTime(float InDecayTimeMsec);
		void SetAmpEnvelopeBiasInvert(bool bInBiasInvert);
		void SetAmpEnvelopeBiasDepth(float InDepth);
		void SetAmpEnvelopeAttackTime(float InAttackTimeMsec);
		void RefreshWaveTable(int32_t Index);
		void RefreshAllWaveTables();
		void NoteOn(float InMidiNote, float InVelocity);
		void NoteOff(float InMidiNote);
		int32_t GetNumTableEntries();
		int32_t GetMaxTableIndex();
		TArray<float> GetKeyFrameValuesForTable(float TableIndex);
		float GetCurveTangent(int32_t TableIndex);
		static UClass* StaticClass();
	};

	/**
	 * Class Synthesis.SynthComponentToneGenerator
	 * Size -> 0x0020 (FullSize[0x0700] - InheritedSize[0x06E0])
	 */
	class USynthComponentToneGenerator : public USynthComponent
	{
	public:
		float                                                      Frequency;                                               // 0x06E0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Volume;                                                  // 0x06E4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BDOX[0x18];                                  // 0x06E8(0x0018) MISSED OFFSET (PADDING)

	public:
		void SetVolume(float InVolume);
		void SetFrequency(float InFrequency);
		static UClass* StaticClass();
	};

	/**
	 * Class Synthesis.SynthSamplePlayer
	 * Size -> 0x0130 (FullSize[0x0810] - InheritedSize[0x06E0])
	 */
	class USynthSamplePlayer : public USynthComponent
	{
	public:
		class USoundWave*                                          SoundWave;                                               // 0x06E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSampleLoaded;                                          // 0x06E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSamplePlaybackProgress;                                // 0x06F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F9JV[0x108];                                 // 0x0708(0x0108) MISSED OFFSET (PADDING)

	public:
		void SetSoundWave(class USoundWave* InSoundWave);
		void SetScrubTimeWidth(float InScrubTimeWidthSec);
		void SetScrubMode(bool bScrubMode);
		void SetPitch(float InPitch, float TimeSec);
		void SeekToTime(float TimeSec, ESamplePlayerSeekType SeekType, bool bWrap);
		bool IsLoaded();
		float GetSampleDuration();
		float GetCurrentPlaybackProgressTime();
		float GetCurrentPlaybackProgressPercent();
		static UClass* StaticClass();
	};

	/**
	 * Class Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class USynthesisUtilitiesBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		float STATIC_GetLogFrequency(float InLinearValue, float InDomainMin, float InDomainMax, float InRangeMin, float InRangeMax);
		float STATIC_GetLinearFrequency(float InLogFrequencyValue, float InDomainMin, float InDomainMax, float InRangeMin, float InRangeMax);
		static UClass* StaticClass();
	};

	/**
	 * Class Synthesis.SynthKnob
	 * Size -> 0x0320 (FullSize[0x0450] - InheritedSize[0x0130])
	 */
	class USynthKnob : public UWidget
	{
	public:
		float                                                      value;                                                   // 0x0130(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StepSize;                                                // 0x0134(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MouseSpeed;                                              // 0x0138(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MouseFineTuneSpeed;                                      // 0x013C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ShowTooltipInfo : 1;                                     // 0x0140(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O62I[0x7];                                   // 0x0141(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                ParameterName;                                           // 0x0148(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                ParameterUnits;                                          // 0x0160(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FScriptDelegate                                      ValueDelegate;                                           // 0x0178(0x0010) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q92V[0x4];                                   // 0x0178(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_B6WY[0x4];                                   // 0x018C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSynthKnobStyle                                     WidgetStyle;                                             // 0x0190(0x0258) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       locked;                                                  // 0x03E8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsFocusable;                                             // 0x03E9(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5951[0x6];                                   // 0x03EA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnMouseCaptureBegin;                                     // 0x03F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMouseCaptureEnd;                                       // 0x0400(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnControllerCaptureBegin;                                // 0x0410(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnControllerCaptureEnd;                                  // 0x0420(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnValueChanged;                                          // 0x0430(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JP0M[0x10];                                  // 0x0440(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetValue(float InValue);
		void SetStepSize(float InValue);
		void SetLocked(bool InValue);
		float GetValue();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
