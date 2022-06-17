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
	 * Function Lunar2022.Lunar2022EventComponent.Authority_OnPlayerFinishPlaying
	 */
	struct ULunar2022EventComponent_Authority_OnPlayerFinishPlaying_Params
	{
	public:
		class ADBDPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Lunar2022.Lunar2022EventComponent.Authority_OnIntroComplete
	 */
	struct ULunar2022EventComponent_Authority_OnIntroComplete_Params
	{	};

	/**
	 * Function Lunar2022.RedEnvelope.OnRep_OwnerPlayerState
	 */
	struct ARedEnvelope_OnRep_OwnerPlayerState_Params
	{	};

	/**
	 * Function Lunar2022.RedEnvelope.OnLocallyObservedChanged
	 */
	struct ARedEnvelope_OnLocallyObservedChanged_Params
	{	};

	/**
	 * Function Lunar2022.RedEnvelope.Multicast_HandleOnInteractionComplete
	 */
	struct ARedEnvelope_Multicast_HandleOnInteractionComplete_Params
	{
	public:
		class ADBDPlayer*                                          interactingPlayer;                                       // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ownerWasInteractingPlayer;                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       isJackpot;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Lunar2022.RedEnvelope.Cosmetic_SetBackgroundVFX
	 */
	struct ARedEnvelope_Cosmetic_SetBackgroundVFX_Params
	{
	public:
		bool                                                       isOwner;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Lunar2022.RedEnvelope.Cosmetic_OnTriggerDisappearingVFX
	 */
	struct ARedEnvelope_Cosmetic_OnTriggerDisappearingVFX_Params
	{
	public:
		class ADBDPlayer*                                          interactingPlayer;                                       // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       isOwner;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       isJackpot;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Lunar2022.RedEnvelope.Cosmetic_OnInteractionUpdate
	 */
	struct ARedEnvelope_Cosmetic_OnInteractionUpdate_Params
	{
	public:
		class ADBDPlayer*                                          interactingPlayer;                                       // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ChargePercent;                                           // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       isOwner;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Lunar2022.RedEnvelope.Cosmetic_OnInteractionStopped
	 */
	struct ARedEnvelope_Cosmetic_OnInteractionStopped_Params
	{
	public:
		class ADBDPlayer*                                          interactingPlayer;                                       // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       isOwner;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Lunar2022.RedEnvelope.Cosmetic_OnInteractionStart
	 */
	struct ARedEnvelope_Cosmetic_OnInteractionStart_Params
	{
	public:
		class ADBDPlayer*                                          interactingPlayer;                                       // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       isOwner;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Lunar2022.RedEnvelope.Cosmetic_OnAddEmberEffect
	 */
	struct ARedEnvelope_Cosmetic_OnAddEmberEffect_Params
	{
	public:
		class ADBDPlayer*                                          OwningPlayer;                                            // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
