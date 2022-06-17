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
	 * BlueprintGeneratedClass GenericStun.GenericStun_C
	 * Size -> 0x0018 (FullSize[0x05D8] - InheritedSize[0x05C0])
	 */
	class UGenericStun_C : public UInteractionDefinition
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<class FString>                                      ForceOverrideableInteractions;                           // 0x05C8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void DispatchStunEvent(class ADBDPlayer* Player);
		bool CanOverrideInteraction(class UInteractionDefinition* Interaction);
		bool IsInteractionPossibleBP(class ADBDPlayer* Player, EInputInteractionType interactionType);
		void OnInteractionUpdateStart(class ADBDPlayer* Player);
		void ExecuteUbergraph_GenericStun(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
