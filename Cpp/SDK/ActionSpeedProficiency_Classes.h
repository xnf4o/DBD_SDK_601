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
	 * BlueprintGeneratedClass ActionSpeedProficiency.ActionSpeedProficiency_C
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UActionSpeedProficiency_C : public UInteractionProficiency
	{
	public:
		TArray<class ADBDPlayer*> FetchInteractingPlayers(class UInteractionDefinition* Chargeable_Interaction, class ADBDPlayer* Interacting_Player);
		float Compute_Overall_speed_including_multiple_interactors(class UChargeableInteractionDefinition* Chargeable_Interaction, class ADBDPlayer* Interacting_Player);
		bool ShouldAndCanShowMultipleActorsSpeedProficiency(class UChargeableInteractionDefinition* Chargeable_Interaction);
		float GetValue(class UChargeableInteractionDefinition* chargeableInteraction, class ADBDPlayer* Player);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
