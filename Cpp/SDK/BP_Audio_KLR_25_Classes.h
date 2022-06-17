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
	 * BlueprintGeneratedClass BP_Audio_KLR_25.BP_Audio_KLR_24_C
	 * Size -> 0x0020 (FullSize[0x0110] - InheritedSize[0x00F0])
	 */
	class UBP_Audio_KLR_24_C : public UBP_Audio_KLR_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAkAudioEvent*                                       AudioStatusStartMenuEvent;                               // 0x00F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FString>                                      starsCharacter;                                          // 0x0100(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void IsCharacter(class ADBDPlayer* CamperPlayer, TArray<class FString>* characterName, bool* IsCharacter);
		void SelectAudioStatusStartEvent(bool IsInMenu, class UAkAudioEvent** AudioEvent);
		void HitImpactOnSurvivorSFX(class ACamperPlayer* camper, EAttackType attackType, bool IsWeaponHit);
		void TriggerKillerReactionSpecificSurvivorSFX(class ADBDPlayer* camper);
		void ChaseTriggerKillerReactionSpecificSurvivorSFX(class ADBDPlayer* camper);
		void ExecuteUbergraph_BP_Audio_KLR_25(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
