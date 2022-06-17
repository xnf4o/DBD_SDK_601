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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function Anniversary.CrownPillarInteractable.Local_OnIntroCompleted
	 */
	struct ACrownPillarInteractable_Local_OnIntroCompleted_Params
	{	};

	/**
	 * Function Anniversary.CrownPillarInteractable.IsLocallyObservedPlayerEquippedWithAnniversaryOffering
	 */
	struct ACrownPillarInteractable_IsLocallyObservedPlayerEquippedWithAnniversaryOffering_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Anniversary.CrownPillarInteractable.Cosmetic_OnStoppedInteracting
	 */
	struct ACrownPillarInteractable_Cosmetic_OnStoppedInteracting_Params
	{	};

	/**
	 * Function Anniversary.CrownPillarInteractable.Cosmetic_OnStartedInteracting
	 */
	struct ACrownPillarInteractable_Cosmetic_OnStartedInteracting_Params
	{
	public:
		class ADBDPlayer*                                          interactingPlayer;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      interactionDuration;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Anniversary.CrownPillarInteractable.Cosmetic_OnInteractionCompleted
	 */
	struct ACrownPillarInteractable_Cosmetic_OnInteractionCompleted_Params
	{
	public:
		class ADBDPlayer*                                          interactingPlayer;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Anniversary.CrownPillarInteractable.Cosmetic_OnInteractionCancelled
	 */
	struct ACrownPillarInteractable_Cosmetic_OnInteractionCancelled_Params
	{	};

	/**
	 * Function Anniversary.CrownPlayerComponent.OnRep_hasInteractedWithCrownPillarThisGame
	 */
	struct UCrownPlayerComponent_OnRep_hasInteractedWithCrownPillarThisGame_Params
	{	};

	/**
	 * Function Anniversary.CrownPlayerComponent.Cosmetic_SetVFXParticlesVisibility
	 */
	struct UCrownPlayerComponent_Cosmetic_SetVFXParticlesVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
