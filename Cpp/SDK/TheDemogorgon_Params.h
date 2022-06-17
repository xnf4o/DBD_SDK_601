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
	 * Function TheDemogorgon.DemogorgonHuskAnimInstance.OnKillerSet
	 */
	struct UDemogorgonHuskAnimInstance_OnKillerSet_Params
	{
	public:
		class ASlasherPlayer*                                      killer;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDemogorgon.DemogorgonPounceInteraction.TriggerHuntingAudioEvent
	 */
	struct UDemogorgonPounceInteraction_TriggerHuntingAudioEvent_Params
	{
	public:
		bool                                                       isHunting;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDemogorgon.DemogorgonPounceInteraction.TriggerChargeCancelAudioEvent
	 */
	struct UDemogorgonPounceInteraction_TriggerChargeCancelAudioEvent_Params
	{	};

	/**
	 * Function TheDemogorgon.DemogorgonPounceInteraction.OnChargedAttackReadyChanged
	 */
	struct UDemogorgonPounceInteraction_OnChargedAttackReadyChanged_Params
	{
	public:
		bool                                                       Ready;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDemogorgon.DemogorgonPounceInteraction.OnCancelCooldownComplete
	 */
	struct UDemogorgonPounceInteraction_OnCancelCooldownComplete_Params
	{	};

	/**
	 * Function TheDemogorgon.ElevensSodaAddon.Multicast_UnhighlightGenerator
	 */
	struct UElevensSodaAddon_Multicast_UnhighlightGenerator_Params
	{
	public:
		class AGenerator*                                          Generator;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TheDemogorgon.ElevensSodaAddon.Multicast_HighlightGenerator
	 */
	struct UElevensSodaAddon_Multicast_HighlightGenerator_Params
	{
	public:
		class AGenerator*                                          Generator;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
