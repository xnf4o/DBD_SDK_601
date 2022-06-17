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
	 * BlueprintGeneratedClass K24_KillerAudioMenuReaction.K24_KillerAudioMenuReaction_C
	 * Size -> 0x0018 (FullSize[0x00E0] - InheritedSize[0x00C8])
	 */
	class UK24_KillerAudioMenuReaction_C : public UKillerAudioMenuReactionComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00C8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<class FString>                                      starsCharacter;                                          // 0x00D0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void LobbyKillerReactionSpecificSurvivorSFX(TArray<class ADBDMenuPlayer*> menuPlayers);
		void ExecuteUbergraph_K24_KillerAudioMenuReaction(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
