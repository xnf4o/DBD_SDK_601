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
	 * BlueprintGeneratedClass Kill.Kill_C
	 * Size -> 0x0009 (FullSize[0x0779] - InheritedSize[0x0770])
	 */
	class UKill_C : public UKillInteractionDefinition
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0770(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       Activate_Crazy_State_Audio_Switch_During_Kill;           // 0x0778(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void DeactivateKillAudio(class ADBDPlayer* interactingPlayer);
		void ActivateKillAudio(class ADBDPlayer* interactingPlayer);
		void OnKillAudioActivation(bool Active, class ADBDPlayer* interactingPlayer);
		void ExecuteUbergraph_Kill(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
