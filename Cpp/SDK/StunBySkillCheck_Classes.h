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
	 * BlueprintGeneratedClass StunBySkillCheck.StunBySkillCheck_C
	 * Size -> 0x0008 (FullSize[0x05C8] - InheritedSize[0x05C0])
	 */
	class UStunBySkillCheck_C : public UInteractionDefinition
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05C0(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		bool CanOverrideInteraction(class UInteractionDefinition* Interaction);
		void GetCarriedCamper(class ACamperPlayer** camper);
		void GetSlasher(class ASlasherPlayer** Slasher);
		bool IsInteractionPossibleBP(class ADBDPlayer* Player, EInputInteractionType interactionType);
		void ReceiveBeginPlay();
		void OnInteractionEnterStart(class ADBDPlayer* Player, float actualSnapTime);
		void ExecuteUbergraph_StunBySkillCheck(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
