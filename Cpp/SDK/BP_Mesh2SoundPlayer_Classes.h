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
	 * BlueprintGeneratedClass BP_Mesh2SoundPlayer.BP_Mesh2SoundPlayer_C
	 * Size -> 0x0008 (FullSize[0x0188] - InheritedSize[0x0180])
	 */
	class UBP_Mesh2SoundPlayer_C : public UDBD_SoundClipUtil
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0180(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void Cosmetic_OnSoundTriggered(class UAkAudioEvent* AudioEvent);
		void ExecuteUbergraph_BP_Mesh2SoundPlayer(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
