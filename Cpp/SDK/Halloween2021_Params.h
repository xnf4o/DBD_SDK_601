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
	 * Function Halloween2021.Pumpkin.OnInteractionCompleted
	 */
	struct APumpkin_OnInteractionCompleted_Params
	{
	public:
		class ADBDPlayer*                                          interactingPlayer;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Halloween2021.Pumpkin.Cosmetic_OnStoppedInteracting
	 */
	struct APumpkin_Cosmetic_OnStoppedInteracting_Params
	{	};

	/**
	 * Function Halloween2021.Pumpkin.Cosmetic_OnStartedInteracting
	 */
	struct APumpkin_Cosmetic_OnStartedInteracting_Params
	{
	public:
		class ADBDPlayer*                                          interactingPlayer;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      interactionDuration;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Halloween2021.Pumpkin.Cosmetic_OnIntroCompleted
	 */
	struct APumpkin_Cosmetic_OnIntroCompleted_Params
	{	};

	/**
	 * Function Halloween2021.Pumpkin.Cosmetic_OnInteractionCompleted
	 */
	struct APumpkin_Cosmetic_OnInteractionCompleted_Params
	{
	public:
		class ADBDPlayer*                                          interactingPlayer;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
